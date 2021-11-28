/* $Revision: 2.0 $ $Date: 2014/5/18 19:21:03 $ */
/* xPC Target, non-inlined S-function driver for A/D D/A section of ADVANtec PCI-1716 diffrential */
/* copyright reserved 
*/
#define         S_FUNCTION_LEVEL        2
#undef          S_FUNCTION_NAME
#define         S_FUNCTION_NAME         pci1756DIO

#include        <stddef.h>
#include        <stdlib.h>
#include     	<math.h>
#include        "simstruc.h"

#ifdef          MATLAB_MEX_FILE
#include        "mex.h"
#endif

#ifndef         MATLAB_MEX_FILE
#include        <windows.h>
#include        "io_xpcimport.h"
#include        "pci_xpcimport.h"
#include        "util_xpcimport.h"
#endif

/* Input Arguments */
// #define NUMBER_OF_ARGS          (2)
#define NUM_PARAMS             (2)
#define SAMP_TIME_ARG           ssGetSFcnParam(S,0)
#define SLOT_ARG                ssGetSFcnParam(S,1)
#define SAMP_TIME_IND           (0)
#define BASE_ADDR_IND           (0)

#define NO_I_WORKS              (6)
#define BASE_ADDR_I_IND         (0)
#define NO_R_WORKS              (0)
#define THRESHOLD              	0.5
static char_T msg[256];
// static unsigned BASE;

#define VENDORID 0x13FE
#define DEVICEID 0x1756


/*====================*
 * S-function methods *
 *====================*/

static void mdlInitializeSizes(SimStruct *S)
{
    int i;

#ifndef MATLAB_MEX_FILE
#include "io_xpcimport.c"
#include "pci_xpcimport.c"
#include "util_xpcimport.c"
#endif

    ssSetNumSFcnParams(S, NUM_PARAMS);
    if (ssGetNumSFcnParams(S) != ssGetSFcnParamsCount(S)) {
        sprintf(msg,"Wrong number of input arguments passed.\n%d arguments are expected\n",NUM_PARAMS);
        ssSetErrorStatus(S,msg);
        return;
    }

    ssSetNumContStates(S, 0);
    ssSetNumDiscStates(S, 0);

    if (!ssSetNumInputPorts(S, 1)) return;
    for (i=0;i<1;i++) {
        ssSetInputPortWidth(S, i, 32);
		ssSetInputPortDirectFeedThrough(S, i, 1);
    }
        
	if (!ssSetNumOutputPorts(S, 1)) return;
    ssSetOutputPortWidth(S, 0, 32);
    ssSetNumSampleTimes(S, 1);

    ssSetNumRWork(S, NO_R_WORKS);
    ssSetNumIWork(S, NO_I_WORKS);
    ssSetNumPWork(S, 0);

    ssSetNumModes(S, 0);
    ssSetNumNonsampledZCs(S, 0);

//     ssSetOptions(S, SS_OPTION_EXCEPTION_FREE_CODE | SS_OPTION_PLACE_ASAP);
    ssSetOptions(S, SS_OPTION_DISALLOW_CONSTANT_SAMPLE_TIME | SS_OPTION_EXCEPTION_FREE_CODE | SS_OPTION_PLACE_ASAP);
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
    int_T i,BASE;
    int_T j;
    void *Physical;
    void *Virtual;
    volatile uint32_T ioaddress,ioaddress0,ioaddress2;
    PCIDeviceInfo pciinfo;
   
    char devName = "pci1716";
    int offset, magnitude;
  int_T base_pci;
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
    Physical=(void *)pciinfo.BaseAddress[2]; 
    Virtual = rl32eGetDevicePtr(Physical, 65536, RT_PG_USERREADWRITE); 
    ioaddress=(void *)Virtual;
   
 // rl32eShowPCIInfo(pciinfo) ;

 ioaddress2=pciinfo.BaseAddress[2];
  
 ioaddress0=pciinfo.BaseAddress[0];
    ssSetIWorkValue(S, BASE_ADDR_I_IND, (uint_T)ioaddress);
    ssSetIWorkValue(S, BASE_ADDR_I_IND+1, (uint_T)ioaddress0);
    ssSetIWorkValue(S, BASE_ADDR_I_IND+2, (uint_T)ioaddress2);
     
    BASE= ssGetIWorkValue(S, BASE_ADDR_I_IND);
 /* Setup PCI1716 CTRL Parameters */    
 //Clear Trigger source, interrupt.
//     rl32eOutpB( BASE + 6, 0x01 );

   //Clear FIFO
   
   //set IO to zero
     rl32eOutpB(BASE+0,0);
     rl32eOutpB(BASE+1,0);
     rl32eOutpB(BASE+2,0);
     rl32eOutpB(BASE+3,0);
     rl32eOutpB((unsigned short)(BASE+4),(unsigned short)(0));//
     rl32eOutpB((unsigned short)(BASE+5),(unsigned short)(0));//
     rl32eOutpB((unsigned short)(BASE+6),(unsigned short)(0));//
     rl32eOutpB((unsigned short)(BASE+7),(unsigned short)(0));//
 
    /* CHANNEL n'S GAIN SETTING */
       
      //Start channel
   //Stop channel
//     rl32eOutpB( BASE + 4,i);      //Start channel
//    rl32eOutpB( BASE + 5,i+1);     //Stop channel

   //rl32eOutpB((unsigned short)(BASE+2),(unsigned short)(0x24));          /* SETTING BIPOLAR AND GAIN = 1 */
  // rl32eOutpB((unsigned short)(BASE+2),(unsigned short)(0x24));          /* SETTING differential AND BIPOLAR AND GAIN = 1 */
         /* SETTING single end AND BIPOLAR AND GAIN = 1 */
         /* SETTING Software trigger */
 
   //output signal initialize
         /* SETTING register for D/A refrence control */
        /* SETTING register for D/A refrence control */
/* Set initial outputs to zero */

   

 
    
#endif
}

static void mdlOutputs(SimStruct *S, int_T tid)
{
#ifndef MATLAB_MEX_FILE
 int_T BASE;
 real_T     *z  = ssGetOutputPortRealSignal(S,0);
  uint_T k;
 InputRealPtrsType uPtrs,uPtrs1,uPtrs2,uPtrs3;
 uint_T tempPortData,tempPortData1,tempPortData2,tempPortData3,DOPortData=0,DOPortData1=0,DOPortData2=0,DOPortData3=0;
 uint_T m,n,p,q; 
 BASE= ssGetIWorkValue(S, BASE_ADDR_I_IND);

 
 /* Read in Digital Input from Hardware */
   tempPortData =rl32eInpB((unsigned short)(BASE+3))&0xff;
   tempPortData1 =rl32eInpB((unsigned short)(BASE+2))&0xff;
   tempPortData2 =rl32eInpB((unsigned short)(BASE+1))&0xff;
   tempPortData3 =rl32eInpB((unsigned short)(BASE+0))&0xff;
      for (k=0;k<8;k++) {
//         z=ssGetOutputPortSignal(S,i);
        z[k] = (tempPortData >> k)&0x01;
        z[k+8]=(tempPortData1 >> k)&0x01;
        z[k+16] = (tempPortData2 >> k)&0x01;
        z[k+24]=(tempPortData3 >> k)&0x01;
           } 
/* Read in Digital Input from Hardware */
/* Write Digital to Hardware */
   for (m=0;m<8;m++) {
        uPtrs = ssGetInputPortRealSignalPtrs(S,0);
        if (*uPtrs[0]>=THRESHOLD) {
            DOPortData |= (1<<m);
       }
    } 

    rl32eOutpB(BASE+4,DOPortData);
    
  for (n=8;n<16;n++) {
        uPtrs1 = ssGetInputPortRealSignalPtrs(S,n);
        if (*uPtrs1[0]>=THRESHOLD) {
            DOPortData1 |= (1<<(n-8));
       }
    } 

    rl32eOutpB(BASE+5,DOPortData1);
    
    for (p=16;p<24;p++) {
        uPtrs2 = ssGetInputPortRealSignalPtrs(S,p);
        if (*uPtrs2[0]>=THRESHOLD) {
            DOPortData2 |= (1<<(p-16));
       }
    } 

    rl32eOutpB(BASE+6,DOPortData2);
    
  for (q=24;n<32;n++) {
        uPtrs3 = ssGetInputPortRealSignalPtrs(S,q);
        if (*uPtrs3[0]>=THRESHOLD) {
            DOPortData3 |= (1<<(q-24));
       }
    } 

    rl32eOutpB(BASE+7,DOPortData3);
    
    
    
    /* Write Digital to Hardware end*/
    
 
    #endif
}


#define MDL_DERIVATIVES
/* Function: mdlDerivatives =================================================
 * Abstract:
 *      xdot = Ax + Bu
 */
static void mdlDerivatives(SimStruct *S)
{
}
/* Function: mdlTerminate =====================================================
 * Abstract:
 *    No termination needed, but we are required to have this routine.
 */
static void mdlTerminate(SimStruct *S)
{
#ifndef MATLAB_MEX_FILE
#endif /* MATLAB_MEX_FILE */
}


#ifdef MATLAB_MEX_FILE  /* Is this file being compiled as a MEX-file? */
#include "simulink.c"   /* Mex glue */
#else
#include "cg_sfun.h"    /* Code generation glue */
#endif
