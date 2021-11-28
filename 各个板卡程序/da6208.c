/* $Revision: 1.1.8.5 $ $Date: 2009/08/08 01:14:28 $ */
/* daadlink6208.c - xPC Target, non-inlined S-function driver for D/A section
 *                 of Adlink 6208 series boards  */
/* Copyright 1996-2009 The MathWorks, Inc.
*/

#define         S_FUNCTION_LEVEL        2
#undef          S_FUNCTION_NAME
#define         S_FUNCTION_NAME         da6208

#include        <stddef.h>
#include        <stdlib.h>

#include        "simstruc.h"

#ifdef          MATLAB_MEX_FILE
#include        "mex.h"
#endif

#ifndef         MATLAB_MEX_FILE
#include        <windows.h>
#include        "xpcimports.h"
#endif

/* Input Arguments */
#define NUMBER_OF_ARGS          (6)
#define CHANNEL_ARG             ssGetSFcnParam(S,0)
#define RANGE_ARG               ssGetSFcnParam(S,1)
#define SAMP_TIME_ARG           ssGetSFcnParam(S,2)
#define SLOT_ARG                ssGetSFcnParam(S,3)
#define RESET_ARG               ssGetSFcnParam(S,4)
#define INIT_ARG                ssGetSFcnParam(S,5)

#define SAMP_TIME_IND           (0)
#define BASE_ADDR_IND           (0)

#define NO_I_WORKS              (3)
#define BASE_ADDR_I_IND         (0)
#define OFFSET_I_IND            (1)
#define MAGNITUDE_I_IND         (2)

#define NO_R_WORKS              (0)

static char_T msg[256];

#define VENDORID 0x144A
#define DEVICEID 0x6208

// User IO bits 2 and 3 from the PLX-9050 are used to control
// the output current range.  Bits 7 anbd 10 control the direction of
// these bits from the 9050.  Bits 8 and 11 are the data fed to the
// voltage to current converter.
#define USER2OUT  (1<<7)
#define USER2TRUE (1<<8)
#define USER3OUT  (1<<10)
#define USER3TRUE (1<<11)

// The PLX-9050 control register is at offset 0x50 on base address 1.
// This is IO space.  The register is 32 bits wide.
#define PLXCTRL  0x50

static void mdlInitializeSizes(SimStruct *S)
{

    int i;


    ssSetNumSFcnParams(S, NUMBER_OF_ARGS);
    if (ssGetNumSFcnParams(S) != ssGetSFcnParamsCount(S)) {
        sprintf(msg,"Wrong number of input arguments passed.\n%d arguments are expected\n",NUMBER_OF_ARGS);
        ssSetErrorStatus(S,msg);
        return;
    }

    ssSetNumContStates(S, 0);
    ssSetNumDiscStates(S, 0);

    if ( ! ssSetNumInputPorts(S, (int_T)mxGetN(CHANNEL_ARG)) ) return;
    for (i=0;i<(int)mxGetN(CHANNEL_ARG);i++) {
        ssSetInputPortWidth(S, i, 1);
        ssSetInputPortDirectFeedThrough(S, i, 1);
    }

    if ( ! ssSetNumOutputPorts(S, 0) ) return;

    ssSetNumSampleTimes(S, 1);

    ssSetNumRWork(S, NO_R_WORKS);
    ssSetNumIWork(S, NO_I_WORKS);
    ssSetNumPWork(S, 0);

    ssSetNumModes(S, 0);
    ssSetNumNonsampledZCs(S, 0);

    ssSetSimStateCompliance(S, HAS_NO_SIM_STATE);

    for( i = 0 ; i < NUMBER_OF_ARGS; i++ )
    {
        ssSetSFcnParamTunable(S,i,0);  /* None of the parameters are tunable */
    }

    ssSetOptions(S, SS_OPTION_DISALLOW_CONSTANT_SAMPLE_TIME | SS_OPTION_EXCEPTION_FREE_CODE);
}

static void mdlInitializeSampleTimes(SimStruct *S)
{
    ssSetSampleTime(S, 0, mxGetPr(SAMP_TIME_ARG)[SAMP_TIME_IND]);
    ssSetOffsetTime(S, 0, 0.0);
}

#define MDL_START
static void mdlStart(SimStruct *S)
{
#ifndef MATLAB_MEX_FILE
    int_T control;

    PCIDeviceInfo pciinfo;
    int bar1, bar2;  // bar0 is not used by this board.
    char *devName = "Adlink 6208";
    int offset, magnitude;

    if ((int_T)mxGetPr(SLOT_ARG)[0]<0)
    {
        // look for the PCI-Device
        if (rl32eGetPCIInfo((unsigned short)VENDORID,
                            (unsigned short)DEVICEID,
                            &pciinfo))
        {
            sprintf(msg,"%s: board not present", devName);
            ssSetErrorStatus(S,msg);
            return;
        }
    } else {
        int_T bus, slot;
        if (mxGetN(SLOT_ARG) == 1) {
            bus = 0;
            slot = (int_T)mxGetPr(SLOT_ARG)[0];
        } else {
            bus = (int_T)mxGetPr(SLOT_ARG)[0];
            slot = (int_T)mxGetPr(SLOT_ARG)[1];
        }
        // look for the PCI-Device
        if (rl32eGetPCIInfoAtSlot((unsigned short)VENDORID,
                                  (unsigned short)DEVICEID,
                                  (slot & 0xff) | ((bus & 0xff)<< 8),
                                  &pciinfo))
        {
            sprintf(msg,"%s (bus %d, slot %d): board not present", devName, bus, slot );
            ssSetErrorStatus(S,msg);
            return;
        }
    }

    // Show the register info
    //rl32eShowPCIInfo(pciinfo);

    bar1 = (int)pciinfo.BaseAddress[1];  // 9050 config space
    bar2 = (int)pciinfo.BaseAddress[2];  // D/A register space

    ssSetIWorkValue(S, BASE_ADDR_I_IND, (uint_T)bar2);
    control = rl32eInpDW( bar1 + PLXCTRL );
    control &= ~0xfc0;  // Clear the user2 and user3 IO control bits, leave all else
    control |= USER2OUT | USER3OUT;
    switch( (int)mxGetPr(RANGE_ARG)[0] )
    {
      case 1:  // 0-20 ma
        // USER2 and USER3 set to 0
        offset = 0;
        magnitude = 20;
        break;
      case 2:  // 5-25 ma
        // USER2 = 1, USER3 = 0
        control |= USER2TRUE;
        offset = 5;
        magnitude = 20;
        break;
      case 3:  // 4-20 ma
        // USER2 = 1, USER3 = 1
        control |= USER2TRUE | USER3TRUE;
        offset = 0;
        magnitude = 10;
        break;
    }
    rl32eOutpW( bar1 + PLXCTRL, control );
    ssSetIWorkValue(S, OFFSET_I_IND, offset);
    ssSetIWorkValue(S, MAGNITUDE_I_IND, magnitude);
#endif
}

static void mdlOutputs(SimStruct *S, int_T tid)
{
#ifndef MATLAB_MEX_FILE

    uint16_T  bar2 = (uint16_T)ssGetIWorkValue(S, BASE_ADDR_I_IND);
    int_T nChannels = (int_T)mxGetN( CHANNEL_ARG );
    int_T i;
    real_T output;
    int_T channel;
    InputRealPtrsType uPtrs;
    real_T offset = (real_T)ssGetIWorkValue( S, OFFSET_I_IND );
    real_T magnitude = (real_T)ssGetIWorkValue( S, MAGNITUDE_I_IND );

    for( i = 0 ; i < nChannels ; i++ )
    {
	int outcode;

        channel = (int_T)mxGetPr(CHANNEL_ARG)[i]-1;
        uPtrs = ssGetInputPortRealSignalPtrs(S,i);
        output = *uPtrs[0];
        output -= offset;

        //if (output < 0.0) output = 0.0;      // Force positive only output
        
        outcode = (uint32_T)((( output ) / magnitude ) * 32768.0);
        if( outcode > 32767) outcode = 32767;
  if( outcode <-32767) outcode = -32767;
        while( (rl32eInpW( bar2 ) & 0x1) == 0x1 )
            ;
            
        rl32eOutpW( bar2 + 2*channel, outcode );
    }
#endif
}

static void mdlTerminate(SimStruct *S)
{
#ifndef MATLAB_MEX_FILE
    uint_T  bar2 = ssGetIWorkValue(S, BASE_ADDR_I_IND);
    int_T nChannels = (int_T)mxGetN( CHANNEL_ARG );
    int_T i;
    real_T output;
    int_T channel;
    real_T offset = (real_T)ssGetIWorkValue( S, OFFSET_I_IND );
    real_T magnitude = (real_T)ssGetIWorkValue( S, MAGNITUDE_I_IND );

    for( i = 0 ; i < nChannels ; i++ )
    {
	int outcode;

        channel = (int_T)mxGetPr(CHANNEL_ARG)[i]-1;
        if( xpceIsModelInit() || (mxGetPr( RESET_ARG )[i] == 1) )
        {
            output = mxGetPr( INIT_ARG )[i];
            output -= offset;
          //if (output < 0.0) output = 0.0;      // Force positive only output
        
        outcode = (uint32_T)((( output ) / magnitude ) * 32768.0);
        if( outcode > 32767) outcode = 32767;
  if( outcode <-32767) outcode = -32767;
            while( (rl32eInpW( bar2 ) & 0x1) == 0x1 )
                printf("a");
            rl32eOutpW( bar2 + 2*channel, outcode );
        }
        // Else leave the value alone.
    }
#endif
}

#ifdef MATLAB_MEX_FILE  /* Is this file being compiled as a MEX-file? */
#include "simulink.c"   /* Mex glue */
#else
#include "cg_sfun.h"    /* Code generation glue */
#endif
