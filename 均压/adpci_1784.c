/* $Revision: 1.0 $ $Date: 2011/11/06 20:40:03 $ */
/* xPC Target, non-inlined S-function driver for A/D section of ADLINK PCI-9114  */
/*% Copyright 2011 Tong Zhizhong HIT.
*/

#define         S_FUNCTION_LEVEL        2
#undef          S_FUNCTION_NAME
#define         S_FUNCTION_NAME         adpci_1784

#include        <stddef.h>
#include        <stdlib.h>

#include        "simstruc.h"

#ifdef          MATLAB_MEX_FILE
#include        "mex.h"
#endif

#ifndef         MATLAB_MEX_FILE
#include        <windows.h>
#include        "xpcimports.h"
//#include        "xpcionie.h"
#endif

/* Input Arguments */
#define NUMBER_OF_ARGS          (3)
#define CHANNEL_ARG             ssGetSFcnParam(S,0)
#define SAMP_TIME_ARG           ssGetSFcnParam(S,1)
#define SLOT_ARG                ssGetSFcnParam(S,2)

#define SAMP_TIME_IND           (0)
//#define USE_DEFAULT_SIM_STATE   (63)
#define NO_I_WORKS              (66)
#define CHANNELS_I_IND          (0)
#define NO_R_WORKS              (64)

static char_T msg[256];
uint_T Base_1, Base_2;    
 
static void mdlInitializeSizes(SimStruct *S)
{
    size_t i;

    ssSetNumSFcnParams(S, NUMBER_OF_ARGS);
    if (ssGetNumSFcnParams(S) != ssGetSFcnParamsCount(S)) {
        sprintf(msg, "Wrong number of input arguments passed.\n%d arguments are expected\n", NUMBER_OF_ARGS);
        ssSetErrorStatus(S, msg);
        return;
    }

    ssSetNumContStates(S, 0);
    ssSetNumDiscStates(S, 0);

    if( !ssSetNumOutputPorts(S, mxGetN(CHANNEL_ARG)) )return;
    for (i=0;i<mxGetN(CHANNEL_ARG);i++) {
     	ssSetOutputPortWidth(S, i, 1);
    }

    if( !ssSetNumInputPorts(S, 0) )return;

    ssSetNumSampleTimes(S, 1);

    //ssSetSimStateCompliance( S, USE_DEFAULT_SIM_STATE );

    ssSetNumRWork(S, NO_R_WORKS);
    ssSetNumIWork(S, NO_I_WORKS);
    ssSetNumPWork(S, 0);

    ssSetNumModes(S, 0);
    ssSetNumNonsampledZCs(S, 0);

    ssSetSFcnParamNotTunable(S, 0);
    ssSetSFcnParamNotTunable(S, 1);
    ssSetSFcnParamNotTunable(S, 2);

    ssSetOptions(S, SS_OPTION_DISALLOW_CONSTANT_SAMPLE_TIME | SS_OPTION_EXCEPTION_FREE_CODE );
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

    size_t nChannels;
    size_t i;

    PCIDeviceInfo pciinfo1;
    uint8_T *devName;
    int    devId;
    double time;
    int_T reg, channel;    
    time=0.00001;

    nChannels = mxGetN(CHANNEL_ARG);
    ssSetIWorkValue(S, CHANNELS_I_IND, nChannels);

    devName = "ADLINK-9114";
    devId = 0x1784;
    
    if ((int_T)mxGetPr(SLOT_ARG)[0]<0) {
        /* look for the PCI-Device */
        if (rl32eGetPCIInfo((unsigned short)0x13FE, (unsigned short)devId, &pciinfo1)) {
		    sprintf(msg, "%s: board not present", devName);
            ssSetErrorStatus(S, msg);
            return;
        }  
    } 
    else
    {
        int_T bus, slot;
        if (mxGetN(SLOT_ARG) == 1) 
        {
            bus = 0;
            slot = (int_T)mxGetPr(SLOT_ARG)[0];
        } 
        else 
        {
            bus = (int_T)mxGetPr(SLOT_ARG)[0];
            slot = (int_T)mxGetPr(SLOT_ARG)[1];
        }
       
       if (rl32eGetPCIInfoAtSlot((unsigned short)0x13FE, (unsigned short)devId, (slot & 0xff) | ((bus & 0xff)<< 8), &pciinfo1)) {
            sprintf(msg, "%s (bus %d, slot %d): board not present", devName, bus, slot );
            ssSetErrorStatus(S, msg);
            return;
        }
 }       
    Base_1 = (uint_T)pciinfo1.BaseAddress[2];           /*get the base addr*/
    rl32eOutpW(Base_1+0x00,(unsigned int)(0x0113));    /*set counter modes,software latch*/   
    rl32eOutpW(Base_1+0x04,(unsigned int)(0x0113));    /* x4,reset value=0*/
    rl32eOutpW(Base_1+0x08,(unsigned int)(0x0113));
    rl32eOutpW(Base_1+0x0C,(unsigned int)(0x0113));

    rl32eOutpDW(Base_1+0x24,(unsigned int)(0x00000000));  /*set sampling frequency 8MHz*/
    rl32eOutpDW(Base_1+0x20,(unsigned int)(0x80000F00));    /*set counter interrupt controls:indextrig */
    rl32eOutpW(Base_1+0x2C,(unsigned int)(0x000F));     /*set counter default values:*/ 

#endif
}

static void mdlOutputs(SimStruct *S, int_T tid)
{
#ifndef MATLAB_MEX_FILE
//  uint_T Poll_Channel_Nums = ssGetIWorkValue(S, CHANNELS_I_IND);
    real_T *y  = ssGetOutputPortRealSignal(S,0);
    int Index_flag;
    y[4]=0;
    y[5]=0;
    y[6]=0;
    y[7]=0;
    
    Index_flag = rl32eInpDW(Base_1+0x20);
    
        if((Index_flag&0x00000100)!=0)
        {
            y[4]=1;
            //rl32eOutpW(Base_1+0x28,(unsigned int)(0x0001));
            //y[0]= (int)rl32eInpDW(Base_1+0x00);
             //rl32eOutpW(Base_1+0x2C,(unsigned int)(0x0001));
        }
         else if((Index_flag&0x00000200)!=0)
         {
            y[5]=1; 
            //rl32eOutpW(Base_1+0x2C,(unsigned int)(0x0002));
         }
        else if((Index_flag&0x00000400)!=0)
        {
            
            y[6]=1;
            //rl32eOutpW(Base_1+0x2C,(unsigned int)(0x0004));
        }
        else if((Index_flag&0x00000800)!=0)
        {
            y[7]=1;
            //rl32eOutpW(Base_1+0x2C,(unsigned int)(0x0008));
        }


    
    rl32eInpW(Base_1+0x24);/*clear interrupt*/

    rl32eOutpW(Base_1+0x28,(unsigned int)(0x000f));//software latch

    rl32eOutpW(Base_1+0x30,(unsigned int)(0x000f));
    
    y[0]= (int)rl32eInpDW(Base_1+0x00);
    y[1]= (int)rl32eInpDW(Base_1+0x04);
    y[2]= (int)rl32eInpDW(Base_1+0x08);
    y[3]= (int)rl32eInpDW(Base_1+0x0C);

#endif
}

static void mdlTerminate(SimStruct *S)
{
}

#ifdef MATLAB_MEX_FILE  /* Is this file being compiled as a MEX-file? */
#include "simulink.c"   /* Mex glue */
#else
#include "cg_sfun.h"    /* Code generation glue */
#endif
