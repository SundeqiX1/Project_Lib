/* $Revision: 1.6 $ $Date: 2001/04/27 22:48:08 $ */
/* da6126c3.c - xPC Target, non-inlined S-function driver for ADLINK ACL-6126  D/A Output Card */
/* Copyright 2002 The Hit25, Inc.*/
/* We only use 3 output channels*/

#define S_FUNCTION_LEVEL 2
#define S_FUNCTION_NAME  acl6126
									    
#include 	<stddef.h>
#include 	<stdlib.h>
#include 	<math.h>

#include 	"simstruc.h"

#ifdef 		MATLAB_MEX_FILE
#include 	"mex.h"
#else
#include 	<windows.h>
#include 	"io_xpcimport.h"
#endif

/* Input Arguments */
#define BASE_ADDRESS_ARG       (ssGetSFcnParam(S,0))
#define RANGE_ARG              (ssGetSFcnParam(S,1))
#define SAMPLE_TIME_PARAM      (ssGetSFcnParam(S,2))

/* Convert S Function Parameters to Varibles */

#define BASE                   ((uint_T) mxGetPr(BASE_ADDRESS_ARG)[0])
#define SAMPLE_TIME            ((real_T) mxGetPr(SAMPLE_TIME_PARAM)[0])
#define SAMPLE_OFFSET          ((real_T) mxGetPr(SAMPLE_TIME_PARAM)[1])
 

#ifndef MATLAB_MEX_FILE
unsigned short swapbytes(unsigned short x)
{
    return(((x>>8)&0xff)|(x<<8));
}


static void DA_Output(SimStruct *S, uint_T channel, real_T value, real_T range)
{
real_T out;
	
    if (range>0) {                               /* unipolar output */
        if (range==20) {                         /* 4-20 mA current output */
            out=256*(value-4);
        } else {                                 /* voltage output */
            out=4096*value/range;
        } 
    } else {                                     /* bipolar output */
        out=2048*(1-value/range); 
    }

    out=max(out,0);
    out=min(out,4095);
    out=floor(out+0.5);

    rl32eOutpW((unsigned short)(BASE+2*channel),swapbytes((unsigned short)out));        
}
#endif

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


	ssSetNumSFcnParams(S, 3);

    ssSetNumContStates(S, 0);
    ssSetNumDiscStates(S, 0);

	if (!ssSetNumInputPorts(S, 6)) return;

    for (i=0;i<6;i++) {
        ssSetInputPortWidth(S, i, 1);
		ssSetInputPortDirectFeedThrough(S, i, 1);
    }

    if (!ssSetNumOutputPorts(S, 0)) return;
 
    ssSetNumSampleTimes(S, 1);

    ssSetSFcnParamNotTunable(S,0);
    ssSetSFcnParamNotTunable(S,1);
    ssSetSFcnParamNotTunable(S,2);

    ssSetOptions(S, SS_OPTION_EXCEPTION_FREE_CODE | SS_OPTION_PLACE_ASAP);
}

static void mdlInitializeSampleTimes(SimStruct *S)
{
    ssSetSampleTime(S, 0, SAMPLE_TIME);
    ssSetOffsetTime(S, 0, SAMPLE_OFFSET);
}


#define MDL_START
static void mdlStart(SimStruct *S)
{
 
#ifndef MATLAB_MEX_FILE
    uint_T i;

/* Set initial outputs to zero */
    for (i=0;i<6;i++) {
	    DA_Output(S, i, 0.0, mxGetPr(RANGE_ARG)[0]);
    }
  
#endif /* MATLAB_MEX_FILE */

}

static void mdlOutputs(SimStruct *S, int_T tid)
{
#ifndef MATLAB_MEX_FILE

InputRealPtrsType uPtrs;
uint_T i;

    for (i=0;i<6;i++) {
        uPtrs = ssGetInputPortRealSignalPtrs(S,i);
        DA_Output(S, i, *uPtrs[0], mxGetPr(RANGE_ARG)[0]);
    }

#endif /* MATLAB_MEX_FILE */

}


static void mdlTerminate(SimStruct *S)
{
#ifndef MATLAB_MEX_FILE
    uint_T i;

/* Set final outputs to zero */
    for (i=0;i < 6;i++) {
    	DA_Output(S, i, 0.0, mxGetPr(RANGE_ARG)[0]);
    }
  
#endif /* MATLAB_MEX_FILE */
}

#ifdef  MATLAB_MEX_FILE    /* Is this file being compiled as a MEX-file? */
#include "simulink.c"      /* MEX-file interface mechanism */
#else
#include "cg_sfun.h"       /* Code generation registration function */
#endif
