/* $Revision: 1.4.4.2 $ $Date: 2005/06/24 11:02:44 $ */
/* diadvpcl818.c - xPC Target, non-inlined S-function driver for digital input section of Advantech PCL-818 series boards  */
/* Copyright 1996-2005 The MathWorks, Inc.
*/

#define 	S_FUNCTION_LEVEL 	2
#undef 		S_FUNCTION_NAME
#define 	S_FUNCTION_NAME 	pcl731

#include 	<stddef.h>
#include 	<stdlib.h>

#include 	"simstruc.h" 

#ifdef 		MATLAB_MEX_FILE
#include 	"mex.h"
#else
#include 	<windows.h>
#include 	"io_xpcimport.h"
#endif

/* Input Arguments */
#define NUM_PARAMS             (2)
#define BASE_ADDRESS_ARG       (ssGetSFcnParam(S,0))
#define SAMPLE_TIME_PARAM      (ssGetSFcnParam(S,1))

/* Convert S Function Parameters to Varibles */

#define BASE                   ((uint_T) mxGetPr(BASE_ADDRESS_ARG)[0])
#define SAMPLE_TIME            ((real_T) mxGetPr(SAMPLE_TIME_PARAM)[0])
#define SAMPLE_OFFSET          ((real_T) mxGetPr(SAMPLE_TIME_PARAM)[1])

#define NO_I_WORKS              (2)



static char_T msg[256];


/*====================*
 * S-function methods *
 *====================*/

static void mdlCheckParameters(SimStruct *S)
{
}

static void mdlInitializeSizes(SimStruct *S)
{
    uint_T i;

#ifndef MATLAB_MEX_FILE
#include "io_xpcimport.c"
#endif


    ssSetNumSFcnParams(S, NUM_PARAMS);
    if (ssGetNumSFcnParams(S) == ssGetSFcnParamsCount(S)) {
        mdlCheckParameters(S);
        if (ssGetErrorStatus(S) != NULL) {
            return;
        }
    } else {
        return; /* Parameter mismatch will be reported by Simulink */
    }

    ssSetNumContStates(S, 0);
    ssSetNumDiscStates(S, 0);

	

    if (!ssSetNumInputPorts(S, 1)) return;

    if (!ssSetNumOutputPorts(S, 1)) return;

         ssSetInputPortWidth(S, 0, 24);
        ssSetOutputPortWidth(S, 0, 24);
    

    ssSetNumSampleTimes(S, 1);

    ssSetNumIWork(S, NO_I_WORKS);

    ssSetNumModes(S, 0);
    ssSetNumNonsampledZCs(S, 0);

 

    ssSetOptions(S, SS_OPTION_EXCEPTION_FREE_CODE | SS_OPTION_PLACE_ASAP);
	
}



static void mdlInitializeSampleTimes(SimStruct *S)
{
    ssSetSampleTime(S, 0, SAMPLE_TIME);
    ssSetOffsetTime(S, 0, SAMPLE_OFFSET);
ssSetInputPortDirectFeedThrough(S,0,1);
ssSetInputPortRequiredContiguous(S,0,1);

}

#define MDL_START
  static void mdlStart(SimStruct *S)
  {
#ifndef MATLAB_MEX_FILE
    rl32eOutpB((unsigned short)(BASE+3),(unsigned short)(0x80));//SET(CN1 ) A0 B0 C0 FOR output
   rl32eOutpB((unsigned short)(BASE+7),(unsigned short)(0x9b));//SET(CN2 ) A1 B1 C1 FOR input
    rl32eOutpB((unsigned short)(BASE+0),(unsigned short)(0));//
    rl32eOutpB((unsigned short)(BASE+1),(unsigned short)(0));//
      rl32eOutpB((unsigned short)(BASE+2),(unsigned short)(0));//
#endif /* MATLAB_MEX_FILE */

  }

static void mdlOutputs(SimStruct *S, int_T tid)
{
#ifndef MATLAB_MEX_FILE
  
    uint_T i;
     uint_T pcl731DOPortData=0;
    uint_T tempPortData;
   real_T  *y=ssGetOutputPortSignal(S,0);
   real_T  *x=ssGetInputPortSignal(S,0);


    /* Read in Digital Input from Hardware */

    tempPortData = ((rl32eInpB((unsigned short)(BASE+6))<<16)|(rl32eInpB((unsigned short)(BASE+5))<<8)|rl32eInpB((unsigned short)(BASE+4)));
 
    for (i=0;i<24;i++) {
     
        y[i]= (tempPortData >> i)&0x01;
    } 
    
    /* Send Input to Digital Output */	
    pcl731DOPortData = 0;
    for (i=0;i <24;i++) {
       
        if (x[i]>=0.5) {
            pcl731DOPortData |= (1 << i);
        }
        
			
    } 

    rl32eOutpB((unsigned short)(BASE),pcl731DOPortData&0xff);
    rl32eOutpB((unsigned short)(BASE+1),(pcl731DOPortData>>8)&0xff);
    rl32eOutpB((unsigned short)(BASE+2),(pcl731DOPortData>>16)&0xff);
#endif /* MATLAB_MEX_FILE */
}

static void mdlTerminate(SimStruct *S)
{
#ifndef MATLAB_MEX_FILE
#endif /* MATLAB_MEX_FILE */
}

/*=============================*
 * Required S-function trailer *
 *=============================*/

#ifdef  MATLAB_MEX_FILE    /* Is this file being compiled as a MEX-file? */
#include "simulink.c"      /* MEX-file interface mechanism */
#else
#include "cg_sfun.h"       /* Code generation registration function */
#endif