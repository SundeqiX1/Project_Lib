/* $Revision: 1.4.4.2 $ $Date: 2021/06/24 11:02:44 $ */
/* Copyright 1996-2005 The MathWorks, Inc.
*/

#define 	S_FUNCTION_LEVEL 	2
#undef 		S_FUNCTION_NAME
#define 	S_FUNCTION_NAME 	pcl722

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

	

    if (!ssSetNumInputPorts(S, 3)) return;
     for(i=0;i<3;i++){
       ssSetInputPortWidth(S, i, 24);
		ssSetInputPortDirectFeedThrough(S, i, 1);
     
     }
    
    
    if (!ssSetNumOutputPorts(S, 3)) return;
for(i=0;i<3;i++){
       ssSetOutputPortWidth(S, i, 24);
     }
         
    

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
    rl32eOutpB((unsigned short)(BASE+3),(unsigned short)(0x80));//SET(CN0 ) PA PB PC FOR output
    rl32eOutpB((unsigned short)(BASE+7),(unsigned short)(0x80));//SET(CN1 ) PA PB PC FOR output
    rl32eOutpB((unsigned short)(BASE+11),(unsigned short)(0x80));//SET(CN2 ) PA PB PC FOR output
     rl32eOutpB((unsigned short)(BASE+15),(unsigned short)(0x9B));//SET(CN3 ) PA PB PC FOR input
     rl32eOutpB((unsigned short)(BASE+19),(unsigned short)(0x9B));//SET(CN4 ) PA PB PC FOR input
     rl32eOutpB((unsigned short)(BASE+23),(unsigned short)(0x9B));//SET(CN5 ) PA PB PC FOR input
 
      rl32eOutpB((unsigned short)(BASE+0),(unsigned short)(0));//
      rl32eOutpB((unsigned short)(BASE+1),(unsigned short)(0));//
      rl32eOutpB((unsigned short)(BASE+2),(unsigned short)(0));//
      rl32eOutpB((unsigned short)(BASE+4),(unsigned short)(0));//
      rl32eOutpB((unsigned short)(BASE+5),(unsigned short)(0));//
      rl32eOutpB((unsigned short)(BASE+6),(unsigned short)(0));//      
      rl32eOutpB((unsigned short)(BASE+8),(unsigned short)(0));//
      rl32eOutpB((unsigned short)(BASE+9),(unsigned short)(0));//
      rl32eOutpB((unsigned short)(BASE+10),(unsigned short)(0));//
      
      
#endif /* MATLAB_MEX_FILE */

  }

static void mdlOutputs(SimStruct *S, int_T tid)
{
#ifndef MATLAB_MEX_FILE
  
    uint_T i,j,k;
     uint_T pcl722DOPortData=0,pcl722DOPortData1=0,pcl722DOPortData2=0;
    uint_T tempPortData,tempPortData1,tempPortData2;
   real_T  *y=ssGetOutputPortSignal(S,0);
   real_T  *y1=ssGetOutputPortSignal(S,1);
   real_T  *y2=ssGetOutputPortSignal(S,2);
     real_T  *x=ssGetInputPortSignal(S,0);
     real_T  *x1=ssGetInputPortSignal(S,1);
     real_T  *x2=ssGetInputPortSignal(S,2);
    /* Read in Digital Input from Hardware */

    tempPortData = ((rl32eInpB((unsigned short)(BASE+14))<<16)|(rl32eInpB((unsigned short)(BASE+13))<<8)|rl32eInpB((unsigned short)(BASE+12)));
    tempPortData1 = ((rl32eInpB((unsigned short)(BASE+18))<<16)|(rl32eInpB((unsigned short)(BASE+17))<<8)|rl32eInpB((unsigned short)(BASE+16)));
    tempPortData2 = ((rl32eInpB((unsigned short)(BASE+22))<<16)|(rl32eInpB((unsigned short)(BASE+21))<<8)|rl32eInpB((unsigned short)(BASE+20)));
    for (i=0;i<24;i++) {
        y[i]= (tempPortData >> i)&0x01;
    } 
    
     for (j=0;j<24;j++) {
        y1[j]= (tempPortData1 >> j)&0x01;
    } 
    
     for (k=0;k<24;k++) {
        y2[k]= (tempPortData2 >> k)&0x01;
    } 
    
    /* Send Input to Digital Output */	
    pcl722DOPortData = 0,pcl722DOPortData1=0,pcl722DOPortData2=0;
    for (i=0;i <24;i++) {
       
        if (x[i]>=0.5) {
            pcl722DOPortData |= (1 << i);
        }
        
    } 
        for (j=0;j <24;j++) {
       
        if (x1[j]>=0.5) {
            (pcl722DOPortData1) |= (1 << j);
        }
        
    }
        for (k=0;k <24;k++) {
       
        if (x[k]>=0.5) {
            (pcl722DOPortData2) |= (1 << k);
        }
        
    }
    
    

    rl32eOutpB((unsigned short)(BASE),pcl722DOPortData&0xff);
    rl32eOutpB((unsigned short)(BASE+1),(pcl722DOPortData>>8)&0xff);
    rl32eOutpB((unsigned short)(BASE+2),(pcl722DOPortData>>16)&0xff);
        rl32eOutpB((unsigned short)(BASE+4),(pcl722DOPortData1)&0xff);
        rl32eOutpB((unsigned short)(BASE+5),((pcl722DOPortData1)>>8)&0xff);
        rl32eOutpB((unsigned short)(BASE+6),((pcl722DOPortData1)>>16)&0xff);
            rl32eOutpB((unsigned short)(BASE+8),(pcl722DOPortData2)&0xff);
            rl32eOutpB((unsigned short)(BASE+9),((pcl722DOPortData2)>>8)&0xff);
            rl32eOutpB((unsigned short)(BASE+10),((pcl722DOPortData2)>>16)&0xff);
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