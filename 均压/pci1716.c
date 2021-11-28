#define         S_FUNCTION_LEVEL        2
#undef          S_FUNCTION_NAME
#define         S_FUNCTION_NAME         pci1716

#include        <stddef.h>
#include        <stdlib.h>

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
#define NUMBER_OF_ARGS          (2)


#define SAMP_TIME_ARG           ssGetSFcnParam(S,0)
#define SLOT_ARG                ssGetSFcnParam(S,1)



#define SAMP_TIME_IND           (0)
#define BASE_ADDR_IND           (0)

#define NO_I_WORKS              (3)
#define BASE_ADDR_I_IND         (0)



#define NO_R_WORKS              (0)

static char_T msg[256];

#define VENDORID 0x13FE
#define DEVICEID 0x1716





static void mdlInitializeSizes(SimStruct *S)
{

    int i;

#ifndef MATLAB_MEX_FILE
#include "io_xpcimport.c"
#include "pci_xpcimport.c"
#include "util_xpcimport.c"
#endif

    ssSetNumSFcnParams(S, NUMBER_OF_ARGS);
    if (ssGetNumSFcnParams(S) != ssGetSFcnParamsCount(S)) {
        sprintf(msg,"Wrong number of input arguments passed.\n%d arguments are expected\n",NUMBER_OF_ARGS);
        ssSetErrorStatus(S,msg);
        return;
    }

    ssSetNumContStates(S, 0);
    ssSetNumDiscStates(S, 0);

    
	if (!ssSetNumInputPorts(S, 0)) return;
	if (!ssSetNumOutputPorts(S, 1)) return;

    ssSetOutputPortWidth(S, 0, 16);

    ssSetNumSampleTimes(S, 1);

    ssSetNumRWork(S, NO_R_WORKS);
    ssSetNumIWork(S, NO_I_WORKS);
    ssSetNumPWork(S, 0);

    ssSetNumModes(S, 0);
    ssSetNumNonsampledZCs(S, 0);


    ssSetOptions(S, SS_OPTION_EXCEPTION_FREE_CODE | SS_OPTION_PLACE_ASAP);
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
    Physical=(void *)pciinfo.BaseAddress[2]; Virtual = rl32eGetDevicePtr(Physical, 65536, RT_PG_USERREADWRITE); ioaddress=(void *)Virtual;
   
 // rl32eShowPCIInfo(pciinfo) ;

 ioaddress2=pciinfo.BaseAddress[2];
 
 
 ioaddress0=pciinfo.BaseAddress[0];
    ssSetIWorkValue(S, BASE_ADDR_I_IND, (uint_T)ioaddress);
   ssSetIWorkValue(S, BASE_ADDR_I_IND+1, (uint_T)ioaddress0);
    ssSetIWorkValue(S, BASE_ADDR_I_IND+2, (uint_T)ioaddress2);
    
    
    
    #ifndef MATLAB_MEX_FILE


    BASE= ssGetIWorkValue(S, BASE_ADDR_I_IND);
 /* Setup PCI1716 CTRL Parameters */    
 //Clear Trigger source, interrupt.
    rl32eOutpB( BASE + 6, 0x00 );

   //Clear FIFO
   rl32eOutpB( BASE + 9, 0x00 );
 
for(i=0;i<16;i++){        /* CHANNEL n'S GAIN SETTING */
       
    rl32eOutpB( BASE + 4,i);      //Start channel
 rl32eOutpB( BASE + 5, i );     //Stop channel
   rl32eOutpB(BASE + 7, 0x00 );
   rl32eOutpB((unsigned short)(BASE+2),(unsigned short)(0x04));          /* SETTING BIPOLAR AND GAIN = 1 */
 rl32eOutpB((unsigned short)(BASE+6),(unsigned short)(0x01));
 
 
 }
 
     #endif
    
#endif
}

static void mdlOutputs(SimStruct *S, int_T tid)
{
#ifndef MATLAB_MEX_FILE
int_T BASE;

 real_T            *y  = ssGetOutputPortRealSignal(S,0);

 real_T res, b;
 uint_T i,aa; 
 BASE= ssGetIWorkValue(S, BASE_ADDR_I_IND);
rl32eOutpB((unsigned short)(BASE+4),(unsigned short)(0x00));  rl32eOutpB((unsigned short)(BASE+5),(unsigned short)(0x00));

for(i=0;i<16;i++){
    rl32eOutpB((unsigned short)(BASE+0),(0x00));   /*software trigger*/

    if(i > 14) {
         rl32eOutpB((unsigned short)(BASE+4),(unsigned short)(0x00)); 
         rl32eOutpB((unsigned short)(BASE+5),(unsigned short)(0x00));
    }  
    else  {   
        rl32eOutpB((unsigned short)(BASE+4),(unsigned short)(i+1));  
        rl32eOutpB((unsigned short)(BASE+5),(unsigned short)(i+1)); 
    }     
       
   
do{
    aa=rl32eInpB((unsigned short)(BASE+7))&0x01; 
   }while(aa==1);/*data is ready*/

  if ( aa == 0){ 
      res=rl32eInpW((unsigned short)(BASE+0));
      y[i]=20*(res-32768)/65536; 
  }  //end if

}// end for



rl32eOutpB( BASE + 8, 0x00 );
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
}


#ifdef MATLAB_MEX_FILE  /* Is this file being compiled as a MEX-file? */
#include "simulink.c"   /* Mex glue */
#else
#include "cg_sfun.h"    /* Code generation glue */
#endif
