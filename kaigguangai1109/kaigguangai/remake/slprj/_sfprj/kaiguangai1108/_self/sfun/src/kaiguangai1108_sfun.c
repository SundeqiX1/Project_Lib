/* Include files */

#include "kaiguangai1108_sfun.h"
#include "kaiguangai1108_sfun_debug_macros.h"
#include "c1_kaiguangai1108.h"
#include "c2_kaiguangai1108.h"
#include "c3_kaiguangai1108.h"
#include "c4_kaiguangai1108.h"
#include "c5_kaiguangai1108.h"
#include "c6_kaiguangai1108.h"
#include "c7_kaiguangai1108.h"
#include "c8_kaiguangai1108.h"
#include "c9_kaiguangai1108.h"
#include "c10_kaiguangai1108.h"
#include "c11_kaiguangai1108.h"
#include "c12_kaiguangai1108.h"
#include "c13_kaiguangai1108.h"
#include "c14_kaiguangai1108.h"
#include "c15_kaiguangai1108.h"
#include "c16_kaiguangai1108.h"
#include "c17_kaiguangai1108.h"
#include "c18_kaiguangai1108.h"
#include "c19_kaiguangai1108.h"
#include "c20_kaiguangai1108.h"
#include "c21_kaiguangai1108.h"
#include "c22_kaiguangai1108.h"
#include "c23_kaiguangai1108.h"
#include "c24_kaiguangai1108.h"
#include "c26_kaiguangai1108.h"
#include "c27_kaiguangai1108.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
uint32_T _kaiguangai1108MachineNumber_;

/* Function Declarations */

/* Function Definitions */
void kaiguangai1108_initializer(void)
{
}

void kaiguangai1108_terminator(void)
{
}

/* SFunction Glue Code */
unsigned int sf_kaiguangai1108_method_dispatcher(SimStruct *simstructPtr,
  unsigned int chartFileNumber, const char* specsCksum, int_T method, void *data)
{
  if (chartFileNumber==1) {
    c1_kaiguangai1108_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==2) {
    c2_kaiguangai1108_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==3) {
    c3_kaiguangai1108_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==4) {
    c4_kaiguangai1108_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==5) {
    c5_kaiguangai1108_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==6) {
    c6_kaiguangai1108_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==7) {
    c7_kaiguangai1108_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==8) {
    c8_kaiguangai1108_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==9) {
    c9_kaiguangai1108_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==10) {
    c10_kaiguangai1108_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==11) {
    c11_kaiguangai1108_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==12) {
    c12_kaiguangai1108_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==13) {
    c13_kaiguangai1108_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==14) {
    c14_kaiguangai1108_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==15) {
    c15_kaiguangai1108_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==16) {
    c16_kaiguangai1108_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==17) {
    c17_kaiguangai1108_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==18) {
    c18_kaiguangai1108_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==19) {
    c19_kaiguangai1108_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==20) {
    c20_kaiguangai1108_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==21) {
    c21_kaiguangai1108_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==22) {
    c22_kaiguangai1108_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==23) {
    c23_kaiguangai1108_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==24) {
    c24_kaiguangai1108_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==26) {
    c26_kaiguangai1108_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==27) {
    c27_kaiguangai1108_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  return 0;
}

unsigned int sf_kaiguangai1108_process_testpoint_info_call( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[32];
  char machineName[128];
  if (nrhs < 3 || !mxIsChar(prhs[0]) || !mxIsChar(prhs[1]))
    return 0;

  /* Possible call to get testpoint info. */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_testpoint_info"))
    return 0;
  mxGetString(prhs[1], machineName, sizeof(machineName)/sizeof(char));
  machineName[(sizeof(machineName)/sizeof(char)-1)] = '\0';
  if (!strcmp(machineName, "kaiguangai1108")) {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
    switch (chartFileNumber) {
     case 1:
      {
        extern mxArray *sf_c1_kaiguangai1108_get_testpoint_info(void);
        plhs[0] = sf_c1_kaiguangai1108_get_testpoint_info();
        break;
      }

     case 2:
      {
        extern mxArray *sf_c2_kaiguangai1108_get_testpoint_info(void);
        plhs[0] = sf_c2_kaiguangai1108_get_testpoint_info();
        break;
      }

     case 3:
      {
        extern mxArray *sf_c3_kaiguangai1108_get_testpoint_info(void);
        plhs[0] = sf_c3_kaiguangai1108_get_testpoint_info();
        break;
      }

     case 4:
      {
        extern mxArray *sf_c4_kaiguangai1108_get_testpoint_info(void);
        plhs[0] = sf_c4_kaiguangai1108_get_testpoint_info();
        break;
      }

     case 5:
      {
        extern mxArray *sf_c5_kaiguangai1108_get_testpoint_info(void);
        plhs[0] = sf_c5_kaiguangai1108_get_testpoint_info();
        break;
      }

     case 6:
      {
        extern mxArray *sf_c6_kaiguangai1108_get_testpoint_info(void);
        plhs[0] = sf_c6_kaiguangai1108_get_testpoint_info();
        break;
      }

     case 7:
      {
        extern mxArray *sf_c7_kaiguangai1108_get_testpoint_info(void);
        plhs[0] = sf_c7_kaiguangai1108_get_testpoint_info();
        break;
      }

     case 8:
      {
        extern mxArray *sf_c8_kaiguangai1108_get_testpoint_info(void);
        plhs[0] = sf_c8_kaiguangai1108_get_testpoint_info();
        break;
      }

     case 9:
      {
        extern mxArray *sf_c9_kaiguangai1108_get_testpoint_info(void);
        plhs[0] = sf_c9_kaiguangai1108_get_testpoint_info();
        break;
      }

     case 10:
      {
        extern mxArray *sf_c10_kaiguangai1108_get_testpoint_info(void);
        plhs[0] = sf_c10_kaiguangai1108_get_testpoint_info();
        break;
      }

     case 11:
      {
        extern mxArray *sf_c11_kaiguangai1108_get_testpoint_info(void);
        plhs[0] = sf_c11_kaiguangai1108_get_testpoint_info();
        break;
      }

     case 12:
      {
        extern mxArray *sf_c12_kaiguangai1108_get_testpoint_info(void);
        plhs[0] = sf_c12_kaiguangai1108_get_testpoint_info();
        break;
      }

     case 13:
      {
        extern mxArray *sf_c13_kaiguangai1108_get_testpoint_info(void);
        plhs[0] = sf_c13_kaiguangai1108_get_testpoint_info();
        break;
      }

     case 14:
      {
        extern mxArray *sf_c14_kaiguangai1108_get_testpoint_info(void);
        plhs[0] = sf_c14_kaiguangai1108_get_testpoint_info();
        break;
      }

     case 15:
      {
        extern mxArray *sf_c15_kaiguangai1108_get_testpoint_info(void);
        plhs[0] = sf_c15_kaiguangai1108_get_testpoint_info();
        break;
      }

     case 16:
      {
        extern mxArray *sf_c16_kaiguangai1108_get_testpoint_info(void);
        plhs[0] = sf_c16_kaiguangai1108_get_testpoint_info();
        break;
      }

     case 17:
      {
        extern mxArray *sf_c17_kaiguangai1108_get_testpoint_info(void);
        plhs[0] = sf_c17_kaiguangai1108_get_testpoint_info();
        break;
      }

     case 18:
      {
        extern mxArray *sf_c18_kaiguangai1108_get_testpoint_info(void);
        plhs[0] = sf_c18_kaiguangai1108_get_testpoint_info();
        break;
      }

     case 19:
      {
        extern mxArray *sf_c19_kaiguangai1108_get_testpoint_info(void);
        plhs[0] = sf_c19_kaiguangai1108_get_testpoint_info();
        break;
      }

     case 20:
      {
        extern mxArray *sf_c20_kaiguangai1108_get_testpoint_info(void);
        plhs[0] = sf_c20_kaiguangai1108_get_testpoint_info();
        break;
      }

     case 21:
      {
        extern mxArray *sf_c21_kaiguangai1108_get_testpoint_info(void);
        plhs[0] = sf_c21_kaiguangai1108_get_testpoint_info();
        break;
      }

     case 22:
      {
        extern mxArray *sf_c22_kaiguangai1108_get_testpoint_info(void);
        plhs[0] = sf_c22_kaiguangai1108_get_testpoint_info();
        break;
      }

     case 23:
      {
        extern mxArray *sf_c23_kaiguangai1108_get_testpoint_info(void);
        plhs[0] = sf_c23_kaiguangai1108_get_testpoint_info();
        break;
      }

     case 24:
      {
        extern mxArray *sf_c24_kaiguangai1108_get_testpoint_info(void);
        plhs[0] = sf_c24_kaiguangai1108_get_testpoint_info();
        break;
      }

     case 26:
      {
        extern mxArray *sf_c26_kaiguangai1108_get_testpoint_info(void);
        plhs[0] = sf_c26_kaiguangai1108_get_testpoint_info();
        break;
      }

     case 27:
      {
        extern mxArray *sf_c27_kaiguangai1108_get_testpoint_info(void);
        plhs[0] = sf_c27_kaiguangai1108_get_testpoint_info();
        break;
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }

    return 1;
  }

  return 0;

#else

  return 0;

#endif

}

unsigned int sf_kaiguangai1108_process_check_sum_call( int nlhs, mxArray * plhs[],
  int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[20];
  if (nrhs<1 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the checksum */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"sf_get_check_sum"))
    return 0;
  plhs[0] = mxCreateDoubleMatrix( 1,4,mxREAL);
  if (nrhs>1 && mxIsChar(prhs[1])) {
    mxGetString(prhs[1], commandName,sizeof(commandName)/sizeof(char));
    commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
    if (!strcmp(commandName,"machine")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(4065789622U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3583601436U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(4145762693U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3523765409U);
    } else if (nrhs==3 && !strcmp(commandName,"chart")) {
      unsigned int chartFileNumber;
      chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
      switch (chartFileNumber) {
       case 1:
        {
          extern void sf_c1_kaiguangai1108_get_check_sum(mxArray *plhs[]);
          sf_c1_kaiguangai1108_get_check_sum(plhs);
          break;
        }

       case 2:
        {
          extern void sf_c2_kaiguangai1108_get_check_sum(mxArray *plhs[]);
          sf_c2_kaiguangai1108_get_check_sum(plhs);
          break;
        }

       case 3:
        {
          extern void sf_c3_kaiguangai1108_get_check_sum(mxArray *plhs[]);
          sf_c3_kaiguangai1108_get_check_sum(plhs);
          break;
        }

       case 4:
        {
          extern void sf_c4_kaiguangai1108_get_check_sum(mxArray *plhs[]);
          sf_c4_kaiguangai1108_get_check_sum(plhs);
          break;
        }

       case 5:
        {
          extern void sf_c5_kaiguangai1108_get_check_sum(mxArray *plhs[]);
          sf_c5_kaiguangai1108_get_check_sum(plhs);
          break;
        }

       case 6:
        {
          extern void sf_c6_kaiguangai1108_get_check_sum(mxArray *plhs[]);
          sf_c6_kaiguangai1108_get_check_sum(plhs);
          break;
        }

       case 7:
        {
          extern void sf_c7_kaiguangai1108_get_check_sum(mxArray *plhs[]);
          sf_c7_kaiguangai1108_get_check_sum(plhs);
          break;
        }

       case 8:
        {
          extern void sf_c8_kaiguangai1108_get_check_sum(mxArray *plhs[]);
          sf_c8_kaiguangai1108_get_check_sum(plhs);
          break;
        }

       case 9:
        {
          extern void sf_c9_kaiguangai1108_get_check_sum(mxArray *plhs[]);
          sf_c9_kaiguangai1108_get_check_sum(plhs);
          break;
        }

       case 10:
        {
          extern void sf_c10_kaiguangai1108_get_check_sum(mxArray *plhs[]);
          sf_c10_kaiguangai1108_get_check_sum(plhs);
          break;
        }

       case 11:
        {
          extern void sf_c11_kaiguangai1108_get_check_sum(mxArray *plhs[]);
          sf_c11_kaiguangai1108_get_check_sum(plhs);
          break;
        }

       case 12:
        {
          extern void sf_c12_kaiguangai1108_get_check_sum(mxArray *plhs[]);
          sf_c12_kaiguangai1108_get_check_sum(plhs);
          break;
        }

       case 13:
        {
          extern void sf_c13_kaiguangai1108_get_check_sum(mxArray *plhs[]);
          sf_c13_kaiguangai1108_get_check_sum(plhs);
          break;
        }

       case 14:
        {
          extern void sf_c14_kaiguangai1108_get_check_sum(mxArray *plhs[]);
          sf_c14_kaiguangai1108_get_check_sum(plhs);
          break;
        }

       case 15:
        {
          extern void sf_c15_kaiguangai1108_get_check_sum(mxArray *plhs[]);
          sf_c15_kaiguangai1108_get_check_sum(plhs);
          break;
        }

       case 16:
        {
          extern void sf_c16_kaiguangai1108_get_check_sum(mxArray *plhs[]);
          sf_c16_kaiguangai1108_get_check_sum(plhs);
          break;
        }

       case 17:
        {
          extern void sf_c17_kaiguangai1108_get_check_sum(mxArray *plhs[]);
          sf_c17_kaiguangai1108_get_check_sum(plhs);
          break;
        }

       case 18:
        {
          extern void sf_c18_kaiguangai1108_get_check_sum(mxArray *plhs[]);
          sf_c18_kaiguangai1108_get_check_sum(plhs);
          break;
        }

       case 19:
        {
          extern void sf_c19_kaiguangai1108_get_check_sum(mxArray *plhs[]);
          sf_c19_kaiguangai1108_get_check_sum(plhs);
          break;
        }

       case 20:
        {
          extern void sf_c20_kaiguangai1108_get_check_sum(mxArray *plhs[]);
          sf_c20_kaiguangai1108_get_check_sum(plhs);
          break;
        }

       case 21:
        {
          extern void sf_c21_kaiguangai1108_get_check_sum(mxArray *plhs[]);
          sf_c21_kaiguangai1108_get_check_sum(plhs);
          break;
        }

       case 22:
        {
          extern void sf_c22_kaiguangai1108_get_check_sum(mxArray *plhs[]);
          sf_c22_kaiguangai1108_get_check_sum(plhs);
          break;
        }

       case 23:
        {
          extern void sf_c23_kaiguangai1108_get_check_sum(mxArray *plhs[]);
          sf_c23_kaiguangai1108_get_check_sum(plhs);
          break;
        }

       case 24:
        {
          extern void sf_c24_kaiguangai1108_get_check_sum(mxArray *plhs[]);
          sf_c24_kaiguangai1108_get_check_sum(plhs);
          break;
        }

       case 26:
        {
          extern void sf_c26_kaiguangai1108_get_check_sum(mxArray *plhs[]);
          sf_c26_kaiguangai1108_get_check_sum(plhs);
          break;
        }

       case 27:
        {
          extern void sf_c27_kaiguangai1108_get_check_sum(mxArray *plhs[]);
          sf_c27_kaiguangai1108_get_check_sum(plhs);
          break;
        }

       default:
        ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0.0);
      }
    } else if (!strcmp(commandName,"target")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2377117207U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3442374717U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2919116841U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3637629133U);
    } else {
      return 0;
    }
  } else {
    ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(836951709U);
    ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2992810834U);
    ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1632376554U);
    ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3110332665U);
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_kaiguangai1108_autoinheritance_info( int nlhs, mxArray * plhs[],
  int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[32];
  char aiChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the autoinheritance_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_autoinheritance_info"))
    return 0;
  mxGetString(prhs[2], aiChksum,sizeof(aiChksum)/sizeof(char));
  aiChksum[(sizeof(aiChksum)/sizeof(char)-1)] = '\0';

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        if (strcmp(aiChksum, "Z1JOiPfgDmxNeGamMeLOsH") == 0) {
          extern mxArray *sf_c1_kaiguangai1108_get_autoinheritance_info(void);
          plhs[0] = sf_c1_kaiguangai1108_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 2:
      {
        if (strcmp(aiChksum, "UumLh6hejOYGGPjidi9IUC") == 0) {
          extern mxArray *sf_c2_kaiguangai1108_get_autoinheritance_info(void);
          plhs[0] = sf_c2_kaiguangai1108_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 3:
      {
        if (strcmp(aiChksum, "UumLh6hejOYGGPjidi9IUC") == 0) {
          extern mxArray *sf_c3_kaiguangai1108_get_autoinheritance_info(void);
          plhs[0] = sf_c3_kaiguangai1108_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 4:
      {
        if (strcmp(aiChksum, "UumLh6hejOYGGPjidi9IUC") == 0) {
          extern mxArray *sf_c4_kaiguangai1108_get_autoinheritance_info(void);
          plhs[0] = sf_c4_kaiguangai1108_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 5:
      {
        if (strcmp(aiChksum, "UumLh6hejOYGGPjidi9IUC") == 0) {
          extern mxArray *sf_c5_kaiguangai1108_get_autoinheritance_info(void);
          plhs[0] = sf_c5_kaiguangai1108_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 6:
      {
        if (strcmp(aiChksum, "UumLh6hejOYGGPjidi9IUC") == 0) {
          extern mxArray *sf_c6_kaiguangai1108_get_autoinheritance_info(void);
          plhs[0] = sf_c6_kaiguangai1108_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 7:
      {
        if (strcmp(aiChksum, "UumLh6hejOYGGPjidi9IUC") == 0) {
          extern mxArray *sf_c7_kaiguangai1108_get_autoinheritance_info(void);
          plhs[0] = sf_c7_kaiguangai1108_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 8:
      {
        if (strcmp(aiChksum, "UumLh6hejOYGGPjidi9IUC") == 0) {
          extern mxArray *sf_c8_kaiguangai1108_get_autoinheritance_info(void);
          plhs[0] = sf_c8_kaiguangai1108_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 9:
      {
        if (strcmp(aiChksum, "7Sx058aoMh9oMvEY2ZUD2G") == 0) {
          extern mxArray *sf_c9_kaiguangai1108_get_autoinheritance_info(void);
          plhs[0] = sf_c9_kaiguangai1108_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 10:
      {
        if (strcmp(aiChksum, "7Sx058aoMh9oMvEY2ZUD2G") == 0) {
          extern mxArray *sf_c10_kaiguangai1108_get_autoinheritance_info(void);
          plhs[0] = sf_c10_kaiguangai1108_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 11:
      {
        if (strcmp(aiChksum, "7Sx058aoMh9oMvEY2ZUD2G") == 0) {
          extern mxArray *sf_c11_kaiguangai1108_get_autoinheritance_info(void);
          plhs[0] = sf_c11_kaiguangai1108_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 12:
      {
        if (strcmp(aiChksum, "7Sx058aoMh9oMvEY2ZUD2G") == 0) {
          extern mxArray *sf_c12_kaiguangai1108_get_autoinheritance_info(void);
          plhs[0] = sf_c12_kaiguangai1108_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 13:
      {
        if (strcmp(aiChksum, "7Sx058aoMh9oMvEY2ZUD2G") == 0) {
          extern mxArray *sf_c13_kaiguangai1108_get_autoinheritance_info(void);
          plhs[0] = sf_c13_kaiguangai1108_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 14:
      {
        if (strcmp(aiChksum, "7Sx058aoMh9oMvEY2ZUD2G") == 0) {
          extern mxArray *sf_c14_kaiguangai1108_get_autoinheritance_info(void);
          plhs[0] = sf_c14_kaiguangai1108_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 15:
      {
        if (strcmp(aiChksum, "7Sx058aoMh9oMvEY2ZUD2G") == 0) {
          extern mxArray *sf_c15_kaiguangai1108_get_autoinheritance_info(void);
          plhs[0] = sf_c15_kaiguangai1108_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 16:
      {
        if (strcmp(aiChksum, "7Sx058aoMh9oMvEY2ZUD2G") == 0) {
          extern mxArray *sf_c16_kaiguangai1108_get_autoinheritance_info(void);
          plhs[0] = sf_c16_kaiguangai1108_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 17:
      {
        if (strcmp(aiChksum, "iEDT1Itf3EvaZJf0MwiReC") == 0) {
          extern mxArray *sf_c17_kaiguangai1108_get_autoinheritance_info(void);
          plhs[0] = sf_c17_kaiguangai1108_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 18:
      {
        if (strcmp(aiChksum, "iEDT1Itf3EvaZJf0MwiReC") == 0) {
          extern mxArray *sf_c18_kaiguangai1108_get_autoinheritance_info(void);
          plhs[0] = sf_c18_kaiguangai1108_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 19:
      {
        if (strcmp(aiChksum, "iEDT1Itf3EvaZJf0MwiReC") == 0) {
          extern mxArray *sf_c19_kaiguangai1108_get_autoinheritance_info(void);
          plhs[0] = sf_c19_kaiguangai1108_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 20:
      {
        if (strcmp(aiChksum, "iEDT1Itf3EvaZJf0MwiReC") == 0) {
          extern mxArray *sf_c20_kaiguangai1108_get_autoinheritance_info(void);
          plhs[0] = sf_c20_kaiguangai1108_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 21:
      {
        if (strcmp(aiChksum, "iEDT1Itf3EvaZJf0MwiReC") == 0) {
          extern mxArray *sf_c21_kaiguangai1108_get_autoinheritance_info(void);
          plhs[0] = sf_c21_kaiguangai1108_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 22:
      {
        if (strcmp(aiChksum, "iEDT1Itf3EvaZJf0MwiReC") == 0) {
          extern mxArray *sf_c22_kaiguangai1108_get_autoinheritance_info(void);
          plhs[0] = sf_c22_kaiguangai1108_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 23:
      {
        if (strcmp(aiChksum, "iEDT1Itf3EvaZJf0MwiReC") == 0) {
          extern mxArray *sf_c23_kaiguangai1108_get_autoinheritance_info(void);
          plhs[0] = sf_c23_kaiguangai1108_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 24:
      {
        if (strcmp(aiChksum, "iEDT1Itf3EvaZJf0MwiReC") == 0) {
          extern mxArray *sf_c24_kaiguangai1108_get_autoinheritance_info(void);
          plhs[0] = sf_c24_kaiguangai1108_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 26:
      {
        if (strcmp(aiChksum, "7aXoMmjEjklrUYuYq69FIG") == 0) {
          extern mxArray *sf_c26_kaiguangai1108_get_autoinheritance_info(void);
          plhs[0] = sf_c26_kaiguangai1108_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     case 27:
      {
        if (strcmp(aiChksum, "ORvGdCJpqdPtiTxzuJv86") == 0) {
          extern mxArray *sf_c27_kaiguangai1108_get_autoinheritance_info(void);
          plhs[0] = sf_c27_kaiguangai1108_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_kaiguangai1108_get_eml_resolved_functions_info( int nlhs,
  mxArray * plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[64];
  if (nrhs<2 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the get_eml_resolved_functions_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_eml_resolved_functions_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        extern const mxArray
          *sf_c1_kaiguangai1108_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c1_kaiguangai1108_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 2:
      {
        extern const mxArray
          *sf_c2_kaiguangai1108_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c2_kaiguangai1108_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 3:
      {
        extern const mxArray
          *sf_c3_kaiguangai1108_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c3_kaiguangai1108_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 4:
      {
        extern const mxArray
          *sf_c4_kaiguangai1108_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c4_kaiguangai1108_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 5:
      {
        extern const mxArray
          *sf_c5_kaiguangai1108_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c5_kaiguangai1108_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 6:
      {
        extern const mxArray
          *sf_c6_kaiguangai1108_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c6_kaiguangai1108_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 7:
      {
        extern const mxArray
          *sf_c7_kaiguangai1108_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c7_kaiguangai1108_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 8:
      {
        extern const mxArray
          *sf_c8_kaiguangai1108_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c8_kaiguangai1108_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 9:
      {
        extern const mxArray
          *sf_c9_kaiguangai1108_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c9_kaiguangai1108_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 10:
      {
        extern const mxArray
          *sf_c10_kaiguangai1108_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c10_kaiguangai1108_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 11:
      {
        extern const mxArray
          *sf_c11_kaiguangai1108_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c11_kaiguangai1108_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 12:
      {
        extern const mxArray
          *sf_c12_kaiguangai1108_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c12_kaiguangai1108_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 13:
      {
        extern const mxArray
          *sf_c13_kaiguangai1108_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c13_kaiguangai1108_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 14:
      {
        extern const mxArray
          *sf_c14_kaiguangai1108_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c14_kaiguangai1108_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 15:
      {
        extern const mxArray
          *sf_c15_kaiguangai1108_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c15_kaiguangai1108_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 16:
      {
        extern const mxArray
          *sf_c16_kaiguangai1108_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c16_kaiguangai1108_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 17:
      {
        extern const mxArray
          *sf_c17_kaiguangai1108_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c17_kaiguangai1108_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 18:
      {
        extern const mxArray
          *sf_c18_kaiguangai1108_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c18_kaiguangai1108_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 19:
      {
        extern const mxArray
          *sf_c19_kaiguangai1108_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c19_kaiguangai1108_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 20:
      {
        extern const mxArray
          *sf_c20_kaiguangai1108_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c20_kaiguangai1108_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 21:
      {
        extern const mxArray
          *sf_c21_kaiguangai1108_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c21_kaiguangai1108_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 22:
      {
        extern const mxArray
          *sf_c22_kaiguangai1108_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c22_kaiguangai1108_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 23:
      {
        extern const mxArray
          *sf_c23_kaiguangai1108_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c23_kaiguangai1108_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 24:
      {
        extern const mxArray
          *sf_c24_kaiguangai1108_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c24_kaiguangai1108_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 26:
      {
        extern const mxArray
          *sf_c26_kaiguangai1108_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c26_kaiguangai1108_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 27:
      {
        extern const mxArray
          *sf_c27_kaiguangai1108_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c27_kaiguangai1108_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_kaiguangai1108_third_party_uses_info( int nlhs, mxArray * plhs[],
  int nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the third_party_uses_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_third_party_uses_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        if (strcmp(tpChksum, "sHTWIqHd2QU2KdYDf63SsXF") == 0) {
          extern mxArray *sf_c1_kaiguangai1108_third_party_uses_info(void);
          plhs[0] = sf_c1_kaiguangai1108_third_party_uses_info();
          break;
        }
      }

     case 2:
      {
        if (strcmp(tpChksum, "sLINPejKEh5APFBsoh3gFeB") == 0) {
          extern mxArray *sf_c2_kaiguangai1108_third_party_uses_info(void);
          plhs[0] = sf_c2_kaiguangai1108_third_party_uses_info();
          break;
        }
      }

     case 3:
      {
        if (strcmp(tpChksum, "sLINPejKEh5APFBsoh3gFeB") == 0) {
          extern mxArray *sf_c3_kaiguangai1108_third_party_uses_info(void);
          plhs[0] = sf_c3_kaiguangai1108_third_party_uses_info();
          break;
        }
      }

     case 4:
      {
        if (strcmp(tpChksum, "sLINPejKEh5APFBsoh3gFeB") == 0) {
          extern mxArray *sf_c4_kaiguangai1108_third_party_uses_info(void);
          plhs[0] = sf_c4_kaiguangai1108_third_party_uses_info();
          break;
        }
      }

     case 5:
      {
        if (strcmp(tpChksum, "sLINPejKEh5APFBsoh3gFeB") == 0) {
          extern mxArray *sf_c5_kaiguangai1108_third_party_uses_info(void);
          plhs[0] = sf_c5_kaiguangai1108_third_party_uses_info();
          break;
        }
      }

     case 6:
      {
        if (strcmp(tpChksum, "sLINPejKEh5APFBsoh3gFeB") == 0) {
          extern mxArray *sf_c6_kaiguangai1108_third_party_uses_info(void);
          plhs[0] = sf_c6_kaiguangai1108_third_party_uses_info();
          break;
        }
      }

     case 7:
      {
        if (strcmp(tpChksum, "sLINPejKEh5APFBsoh3gFeB") == 0) {
          extern mxArray *sf_c7_kaiguangai1108_third_party_uses_info(void);
          plhs[0] = sf_c7_kaiguangai1108_third_party_uses_info();
          break;
        }
      }

     case 8:
      {
        if (strcmp(tpChksum, "sLINPejKEh5APFBsoh3gFeB") == 0) {
          extern mxArray *sf_c8_kaiguangai1108_third_party_uses_info(void);
          plhs[0] = sf_c8_kaiguangai1108_third_party_uses_info();
          break;
        }
      }

     case 9:
      {
        if (strcmp(tpChksum, "sHYJS5esLKXZlLQO1yGy43F") == 0) {
          extern mxArray *sf_c9_kaiguangai1108_third_party_uses_info(void);
          plhs[0] = sf_c9_kaiguangai1108_third_party_uses_info();
          break;
        }
      }

     case 10:
      {
        if (strcmp(tpChksum, "sHYJS5esLKXZlLQO1yGy43F") == 0) {
          extern mxArray *sf_c10_kaiguangai1108_third_party_uses_info(void);
          plhs[0] = sf_c10_kaiguangai1108_third_party_uses_info();
          break;
        }
      }

     case 11:
      {
        if (strcmp(tpChksum, "sHYJS5esLKXZlLQO1yGy43F") == 0) {
          extern mxArray *sf_c11_kaiguangai1108_third_party_uses_info(void);
          plhs[0] = sf_c11_kaiguangai1108_third_party_uses_info();
          break;
        }
      }

     case 12:
      {
        if (strcmp(tpChksum, "sHYJS5esLKXZlLQO1yGy43F") == 0) {
          extern mxArray *sf_c12_kaiguangai1108_third_party_uses_info(void);
          plhs[0] = sf_c12_kaiguangai1108_third_party_uses_info();
          break;
        }
      }

     case 13:
      {
        if (strcmp(tpChksum, "sHYJS5esLKXZlLQO1yGy43F") == 0) {
          extern mxArray *sf_c13_kaiguangai1108_third_party_uses_info(void);
          plhs[0] = sf_c13_kaiguangai1108_third_party_uses_info();
          break;
        }
      }

     case 14:
      {
        if (strcmp(tpChksum, "sHYJS5esLKXZlLQO1yGy43F") == 0) {
          extern mxArray *sf_c14_kaiguangai1108_third_party_uses_info(void);
          plhs[0] = sf_c14_kaiguangai1108_third_party_uses_info();
          break;
        }
      }

     case 15:
      {
        if (strcmp(tpChksum, "sHYJS5esLKXZlLQO1yGy43F") == 0) {
          extern mxArray *sf_c15_kaiguangai1108_third_party_uses_info(void);
          plhs[0] = sf_c15_kaiguangai1108_third_party_uses_info();
          break;
        }
      }

     case 16:
      {
        if (strcmp(tpChksum, "sHYJS5esLKXZlLQO1yGy43F") == 0) {
          extern mxArray *sf_c16_kaiguangai1108_third_party_uses_info(void);
          plhs[0] = sf_c16_kaiguangai1108_third_party_uses_info();
          break;
        }
      }

     case 17:
      {
        if (strcmp(tpChksum, "sW2tdYAsvXvBUpUejs3sgGC") == 0) {
          extern mxArray *sf_c17_kaiguangai1108_third_party_uses_info(void);
          plhs[0] = sf_c17_kaiguangai1108_third_party_uses_info();
          break;
        }
      }

     case 18:
      {
        if (strcmp(tpChksum, "sW2tdYAsvXvBUpUejs3sgGC") == 0) {
          extern mxArray *sf_c18_kaiguangai1108_third_party_uses_info(void);
          plhs[0] = sf_c18_kaiguangai1108_third_party_uses_info();
          break;
        }
      }

     case 19:
      {
        if (strcmp(tpChksum, "sW2tdYAsvXvBUpUejs3sgGC") == 0) {
          extern mxArray *sf_c19_kaiguangai1108_third_party_uses_info(void);
          plhs[0] = sf_c19_kaiguangai1108_third_party_uses_info();
          break;
        }
      }

     case 20:
      {
        if (strcmp(tpChksum, "sW2tdYAsvXvBUpUejs3sgGC") == 0) {
          extern mxArray *sf_c20_kaiguangai1108_third_party_uses_info(void);
          plhs[0] = sf_c20_kaiguangai1108_third_party_uses_info();
          break;
        }
      }

     case 21:
      {
        if (strcmp(tpChksum, "sW2tdYAsvXvBUpUejs3sgGC") == 0) {
          extern mxArray *sf_c21_kaiguangai1108_third_party_uses_info(void);
          plhs[0] = sf_c21_kaiguangai1108_third_party_uses_info();
          break;
        }
      }

     case 22:
      {
        if (strcmp(tpChksum, "sW2tdYAsvXvBUpUejs3sgGC") == 0) {
          extern mxArray *sf_c22_kaiguangai1108_third_party_uses_info(void);
          plhs[0] = sf_c22_kaiguangai1108_third_party_uses_info();
          break;
        }
      }

     case 23:
      {
        if (strcmp(tpChksum, "sW2tdYAsvXvBUpUejs3sgGC") == 0) {
          extern mxArray *sf_c23_kaiguangai1108_third_party_uses_info(void);
          plhs[0] = sf_c23_kaiguangai1108_third_party_uses_info();
          break;
        }
      }

     case 24:
      {
        if (strcmp(tpChksum, "sW2tdYAsvXvBUpUejs3sgGC") == 0) {
          extern mxArray *sf_c24_kaiguangai1108_third_party_uses_info(void);
          plhs[0] = sf_c24_kaiguangai1108_third_party_uses_info();
          break;
        }
      }

     case 26:
      {
        if (strcmp(tpChksum, "s2h2kDojDk5YkrkS8CMk5YF") == 0) {
          extern mxArray *sf_c26_kaiguangai1108_third_party_uses_info(void);
          plhs[0] = sf_c26_kaiguangai1108_third_party_uses_info();
          break;
        }
      }

     case 27:
      {
        if (strcmp(tpChksum, "sxYOMEd0jgCqpG9v0HeczCE") == 0) {
          extern mxArray *sf_c27_kaiguangai1108_third_party_uses_info(void);
          plhs[0] = sf_c27_kaiguangai1108_third_party_uses_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

unsigned int sf_kaiguangai1108_jit_fallback_info( int nlhs, mxArray * plhs[],
  int nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the jit_fallback_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_jit_fallback_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        if (strcmp(tpChksum, "sHTWIqHd2QU2KdYDf63SsXF") == 0) {
          extern mxArray *sf_c1_kaiguangai1108_jit_fallback_info(void);
          plhs[0] = sf_c1_kaiguangai1108_jit_fallback_info();
          break;
        }
      }

     case 2:
      {
        if (strcmp(tpChksum, "sLINPejKEh5APFBsoh3gFeB") == 0) {
          extern mxArray *sf_c2_kaiguangai1108_jit_fallback_info(void);
          plhs[0] = sf_c2_kaiguangai1108_jit_fallback_info();
          break;
        }
      }

     case 3:
      {
        if (strcmp(tpChksum, "sLINPejKEh5APFBsoh3gFeB") == 0) {
          extern mxArray *sf_c3_kaiguangai1108_jit_fallback_info(void);
          plhs[0] = sf_c3_kaiguangai1108_jit_fallback_info();
          break;
        }
      }

     case 4:
      {
        if (strcmp(tpChksum, "sLINPejKEh5APFBsoh3gFeB") == 0) {
          extern mxArray *sf_c4_kaiguangai1108_jit_fallback_info(void);
          plhs[0] = sf_c4_kaiguangai1108_jit_fallback_info();
          break;
        }
      }

     case 5:
      {
        if (strcmp(tpChksum, "sLINPejKEh5APFBsoh3gFeB") == 0) {
          extern mxArray *sf_c5_kaiguangai1108_jit_fallback_info(void);
          plhs[0] = sf_c5_kaiguangai1108_jit_fallback_info();
          break;
        }
      }

     case 6:
      {
        if (strcmp(tpChksum, "sLINPejKEh5APFBsoh3gFeB") == 0) {
          extern mxArray *sf_c6_kaiguangai1108_jit_fallback_info(void);
          plhs[0] = sf_c6_kaiguangai1108_jit_fallback_info();
          break;
        }
      }

     case 7:
      {
        if (strcmp(tpChksum, "sLINPejKEh5APFBsoh3gFeB") == 0) {
          extern mxArray *sf_c7_kaiguangai1108_jit_fallback_info(void);
          plhs[0] = sf_c7_kaiguangai1108_jit_fallback_info();
          break;
        }
      }

     case 8:
      {
        if (strcmp(tpChksum, "sLINPejKEh5APFBsoh3gFeB") == 0) {
          extern mxArray *sf_c8_kaiguangai1108_jit_fallback_info(void);
          plhs[0] = sf_c8_kaiguangai1108_jit_fallback_info();
          break;
        }
      }

     case 9:
      {
        if (strcmp(tpChksum, "sHYJS5esLKXZlLQO1yGy43F") == 0) {
          extern mxArray *sf_c9_kaiguangai1108_jit_fallback_info(void);
          plhs[0] = sf_c9_kaiguangai1108_jit_fallback_info();
          break;
        }
      }

     case 10:
      {
        if (strcmp(tpChksum, "sHYJS5esLKXZlLQO1yGy43F") == 0) {
          extern mxArray *sf_c10_kaiguangai1108_jit_fallback_info(void);
          plhs[0] = sf_c10_kaiguangai1108_jit_fallback_info();
          break;
        }
      }

     case 11:
      {
        if (strcmp(tpChksum, "sHYJS5esLKXZlLQO1yGy43F") == 0) {
          extern mxArray *sf_c11_kaiguangai1108_jit_fallback_info(void);
          plhs[0] = sf_c11_kaiguangai1108_jit_fallback_info();
          break;
        }
      }

     case 12:
      {
        if (strcmp(tpChksum, "sHYJS5esLKXZlLQO1yGy43F") == 0) {
          extern mxArray *sf_c12_kaiguangai1108_jit_fallback_info(void);
          plhs[0] = sf_c12_kaiguangai1108_jit_fallback_info();
          break;
        }
      }

     case 13:
      {
        if (strcmp(tpChksum, "sHYJS5esLKXZlLQO1yGy43F") == 0) {
          extern mxArray *sf_c13_kaiguangai1108_jit_fallback_info(void);
          plhs[0] = sf_c13_kaiguangai1108_jit_fallback_info();
          break;
        }
      }

     case 14:
      {
        if (strcmp(tpChksum, "sHYJS5esLKXZlLQO1yGy43F") == 0) {
          extern mxArray *sf_c14_kaiguangai1108_jit_fallback_info(void);
          plhs[0] = sf_c14_kaiguangai1108_jit_fallback_info();
          break;
        }
      }

     case 15:
      {
        if (strcmp(tpChksum, "sHYJS5esLKXZlLQO1yGy43F") == 0) {
          extern mxArray *sf_c15_kaiguangai1108_jit_fallback_info(void);
          plhs[0] = sf_c15_kaiguangai1108_jit_fallback_info();
          break;
        }
      }

     case 16:
      {
        if (strcmp(tpChksum, "sHYJS5esLKXZlLQO1yGy43F") == 0) {
          extern mxArray *sf_c16_kaiguangai1108_jit_fallback_info(void);
          plhs[0] = sf_c16_kaiguangai1108_jit_fallback_info();
          break;
        }
      }

     case 17:
      {
        if (strcmp(tpChksum, "sW2tdYAsvXvBUpUejs3sgGC") == 0) {
          extern mxArray *sf_c17_kaiguangai1108_jit_fallback_info(void);
          plhs[0] = sf_c17_kaiguangai1108_jit_fallback_info();
          break;
        }
      }

     case 18:
      {
        if (strcmp(tpChksum, "sW2tdYAsvXvBUpUejs3sgGC") == 0) {
          extern mxArray *sf_c18_kaiguangai1108_jit_fallback_info(void);
          plhs[0] = sf_c18_kaiguangai1108_jit_fallback_info();
          break;
        }
      }

     case 19:
      {
        if (strcmp(tpChksum, "sW2tdYAsvXvBUpUejs3sgGC") == 0) {
          extern mxArray *sf_c19_kaiguangai1108_jit_fallback_info(void);
          plhs[0] = sf_c19_kaiguangai1108_jit_fallback_info();
          break;
        }
      }

     case 20:
      {
        if (strcmp(tpChksum, "sW2tdYAsvXvBUpUejs3sgGC") == 0) {
          extern mxArray *sf_c20_kaiguangai1108_jit_fallback_info(void);
          plhs[0] = sf_c20_kaiguangai1108_jit_fallback_info();
          break;
        }
      }

     case 21:
      {
        if (strcmp(tpChksum, "sW2tdYAsvXvBUpUejs3sgGC") == 0) {
          extern mxArray *sf_c21_kaiguangai1108_jit_fallback_info(void);
          plhs[0] = sf_c21_kaiguangai1108_jit_fallback_info();
          break;
        }
      }

     case 22:
      {
        if (strcmp(tpChksum, "sW2tdYAsvXvBUpUejs3sgGC") == 0) {
          extern mxArray *sf_c22_kaiguangai1108_jit_fallback_info(void);
          plhs[0] = sf_c22_kaiguangai1108_jit_fallback_info();
          break;
        }
      }

     case 23:
      {
        if (strcmp(tpChksum, "sW2tdYAsvXvBUpUejs3sgGC") == 0) {
          extern mxArray *sf_c23_kaiguangai1108_jit_fallback_info(void);
          plhs[0] = sf_c23_kaiguangai1108_jit_fallback_info();
          break;
        }
      }

     case 24:
      {
        if (strcmp(tpChksum, "sW2tdYAsvXvBUpUejs3sgGC") == 0) {
          extern mxArray *sf_c24_kaiguangai1108_jit_fallback_info(void);
          plhs[0] = sf_c24_kaiguangai1108_jit_fallback_info();
          break;
        }
      }

     case 26:
      {
        if (strcmp(tpChksum, "s2h2kDojDk5YkrkS8CMk5YF") == 0) {
          extern mxArray *sf_c26_kaiguangai1108_jit_fallback_info(void);
          plhs[0] = sf_c26_kaiguangai1108_jit_fallback_info();
          break;
        }
      }

     case 27:
      {
        if (strcmp(tpChksum, "sxYOMEd0jgCqpG9v0HeczCE") == 0) {
          extern mxArray *sf_c27_kaiguangai1108_jit_fallback_info(void);
          plhs[0] = sf_c27_kaiguangai1108_jit_fallback_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

unsigned int sf_kaiguangai1108_updateBuildInfo_args_info( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the updateBuildInfo_args_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_updateBuildInfo_args_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        if (strcmp(tpChksum, "sHTWIqHd2QU2KdYDf63SsXF") == 0) {
          extern mxArray *sf_c1_kaiguangai1108_updateBuildInfo_args_info(void);
          plhs[0] = sf_c1_kaiguangai1108_updateBuildInfo_args_info();
          break;
        }
      }

     case 2:
      {
        if (strcmp(tpChksum, "sLINPejKEh5APFBsoh3gFeB") == 0) {
          extern mxArray *sf_c2_kaiguangai1108_updateBuildInfo_args_info(void);
          plhs[0] = sf_c2_kaiguangai1108_updateBuildInfo_args_info();
          break;
        }
      }

     case 3:
      {
        if (strcmp(tpChksum, "sLINPejKEh5APFBsoh3gFeB") == 0) {
          extern mxArray *sf_c3_kaiguangai1108_updateBuildInfo_args_info(void);
          plhs[0] = sf_c3_kaiguangai1108_updateBuildInfo_args_info();
          break;
        }
      }

     case 4:
      {
        if (strcmp(tpChksum, "sLINPejKEh5APFBsoh3gFeB") == 0) {
          extern mxArray *sf_c4_kaiguangai1108_updateBuildInfo_args_info(void);
          plhs[0] = sf_c4_kaiguangai1108_updateBuildInfo_args_info();
          break;
        }
      }

     case 5:
      {
        if (strcmp(tpChksum, "sLINPejKEh5APFBsoh3gFeB") == 0) {
          extern mxArray *sf_c5_kaiguangai1108_updateBuildInfo_args_info(void);
          plhs[0] = sf_c5_kaiguangai1108_updateBuildInfo_args_info();
          break;
        }
      }

     case 6:
      {
        if (strcmp(tpChksum, "sLINPejKEh5APFBsoh3gFeB") == 0) {
          extern mxArray *sf_c6_kaiguangai1108_updateBuildInfo_args_info(void);
          plhs[0] = sf_c6_kaiguangai1108_updateBuildInfo_args_info();
          break;
        }
      }

     case 7:
      {
        if (strcmp(tpChksum, "sLINPejKEh5APFBsoh3gFeB") == 0) {
          extern mxArray *sf_c7_kaiguangai1108_updateBuildInfo_args_info(void);
          plhs[0] = sf_c7_kaiguangai1108_updateBuildInfo_args_info();
          break;
        }
      }

     case 8:
      {
        if (strcmp(tpChksum, "sLINPejKEh5APFBsoh3gFeB") == 0) {
          extern mxArray *sf_c8_kaiguangai1108_updateBuildInfo_args_info(void);
          plhs[0] = sf_c8_kaiguangai1108_updateBuildInfo_args_info();
          break;
        }
      }

     case 9:
      {
        if (strcmp(tpChksum, "sHYJS5esLKXZlLQO1yGy43F") == 0) {
          extern mxArray *sf_c9_kaiguangai1108_updateBuildInfo_args_info(void);
          plhs[0] = sf_c9_kaiguangai1108_updateBuildInfo_args_info();
          break;
        }
      }

     case 10:
      {
        if (strcmp(tpChksum, "sHYJS5esLKXZlLQO1yGy43F") == 0) {
          extern mxArray *sf_c10_kaiguangai1108_updateBuildInfo_args_info(void);
          plhs[0] = sf_c10_kaiguangai1108_updateBuildInfo_args_info();
          break;
        }
      }

     case 11:
      {
        if (strcmp(tpChksum, "sHYJS5esLKXZlLQO1yGy43F") == 0) {
          extern mxArray *sf_c11_kaiguangai1108_updateBuildInfo_args_info(void);
          plhs[0] = sf_c11_kaiguangai1108_updateBuildInfo_args_info();
          break;
        }
      }

     case 12:
      {
        if (strcmp(tpChksum, "sHYJS5esLKXZlLQO1yGy43F") == 0) {
          extern mxArray *sf_c12_kaiguangai1108_updateBuildInfo_args_info(void);
          plhs[0] = sf_c12_kaiguangai1108_updateBuildInfo_args_info();
          break;
        }
      }

     case 13:
      {
        if (strcmp(tpChksum, "sHYJS5esLKXZlLQO1yGy43F") == 0) {
          extern mxArray *sf_c13_kaiguangai1108_updateBuildInfo_args_info(void);
          plhs[0] = sf_c13_kaiguangai1108_updateBuildInfo_args_info();
          break;
        }
      }

     case 14:
      {
        if (strcmp(tpChksum, "sHYJS5esLKXZlLQO1yGy43F") == 0) {
          extern mxArray *sf_c14_kaiguangai1108_updateBuildInfo_args_info(void);
          plhs[0] = sf_c14_kaiguangai1108_updateBuildInfo_args_info();
          break;
        }
      }

     case 15:
      {
        if (strcmp(tpChksum, "sHYJS5esLKXZlLQO1yGy43F") == 0) {
          extern mxArray *sf_c15_kaiguangai1108_updateBuildInfo_args_info(void);
          plhs[0] = sf_c15_kaiguangai1108_updateBuildInfo_args_info();
          break;
        }
      }

     case 16:
      {
        if (strcmp(tpChksum, "sHYJS5esLKXZlLQO1yGy43F") == 0) {
          extern mxArray *sf_c16_kaiguangai1108_updateBuildInfo_args_info(void);
          plhs[0] = sf_c16_kaiguangai1108_updateBuildInfo_args_info();
          break;
        }
      }

     case 17:
      {
        if (strcmp(tpChksum, "sW2tdYAsvXvBUpUejs3sgGC") == 0) {
          extern mxArray *sf_c17_kaiguangai1108_updateBuildInfo_args_info(void);
          plhs[0] = sf_c17_kaiguangai1108_updateBuildInfo_args_info();
          break;
        }
      }

     case 18:
      {
        if (strcmp(tpChksum, "sW2tdYAsvXvBUpUejs3sgGC") == 0) {
          extern mxArray *sf_c18_kaiguangai1108_updateBuildInfo_args_info(void);
          plhs[0] = sf_c18_kaiguangai1108_updateBuildInfo_args_info();
          break;
        }
      }

     case 19:
      {
        if (strcmp(tpChksum, "sW2tdYAsvXvBUpUejs3sgGC") == 0) {
          extern mxArray *sf_c19_kaiguangai1108_updateBuildInfo_args_info(void);
          plhs[0] = sf_c19_kaiguangai1108_updateBuildInfo_args_info();
          break;
        }
      }

     case 20:
      {
        if (strcmp(tpChksum, "sW2tdYAsvXvBUpUejs3sgGC") == 0) {
          extern mxArray *sf_c20_kaiguangai1108_updateBuildInfo_args_info(void);
          plhs[0] = sf_c20_kaiguangai1108_updateBuildInfo_args_info();
          break;
        }
      }

     case 21:
      {
        if (strcmp(tpChksum, "sW2tdYAsvXvBUpUejs3sgGC") == 0) {
          extern mxArray *sf_c21_kaiguangai1108_updateBuildInfo_args_info(void);
          plhs[0] = sf_c21_kaiguangai1108_updateBuildInfo_args_info();
          break;
        }
      }

     case 22:
      {
        if (strcmp(tpChksum, "sW2tdYAsvXvBUpUejs3sgGC") == 0) {
          extern mxArray *sf_c22_kaiguangai1108_updateBuildInfo_args_info(void);
          plhs[0] = sf_c22_kaiguangai1108_updateBuildInfo_args_info();
          break;
        }
      }

     case 23:
      {
        if (strcmp(tpChksum, "sW2tdYAsvXvBUpUejs3sgGC") == 0) {
          extern mxArray *sf_c23_kaiguangai1108_updateBuildInfo_args_info(void);
          plhs[0] = sf_c23_kaiguangai1108_updateBuildInfo_args_info();
          break;
        }
      }

     case 24:
      {
        if (strcmp(tpChksum, "sW2tdYAsvXvBUpUejs3sgGC") == 0) {
          extern mxArray *sf_c24_kaiguangai1108_updateBuildInfo_args_info(void);
          plhs[0] = sf_c24_kaiguangai1108_updateBuildInfo_args_info();
          break;
        }
      }

     case 26:
      {
        if (strcmp(tpChksum, "s2h2kDojDk5YkrkS8CMk5YF") == 0) {
          extern mxArray *sf_c26_kaiguangai1108_updateBuildInfo_args_info(void);
          plhs[0] = sf_c26_kaiguangai1108_updateBuildInfo_args_info();
          break;
        }
      }

     case 27:
      {
        if (strcmp(tpChksum, "sxYOMEd0jgCqpG9v0HeczCE") == 0) {
          extern mxArray *sf_c27_kaiguangai1108_updateBuildInfo_args_info(void);
          plhs[0] = sf_c27_kaiguangai1108_updateBuildInfo_args_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

void kaiguangai1108_debug_initialize(struct SfDebugInstanceStruct* debugInstance)
{
  _kaiguangai1108MachineNumber_ = sf_debug_initialize_machine(debugInstance,
    "kaiguangai1108","sfun",0,26,0,0,0);
  sf_debug_set_machine_event_thresholds(debugInstance,
    _kaiguangai1108MachineNumber_,0,0);
  sf_debug_set_machine_data_thresholds(debugInstance,
    _kaiguangai1108MachineNumber_,0);
}

void kaiguangai1108_register_exported_symbols(SimStruct* S)
{
}

static mxArray* sRtwOptimizationInfoStruct= NULL;
typedef struct SfOptimizationInfoFlagsTag {
  boolean_T isRtwGen;
  boolean_T isModelRef;
  boolean_T isExternal;
} SfOptimizationInfoFlags;

static SfOptimizationInfoFlags sOptimizationInfoFlags;
void unload_kaiguangai1108_optimization_info(void);
mxArray* load_kaiguangai1108_optimization_info(boolean_T isRtwGen, boolean_T
  isModelRef, boolean_T isExternal)
{
  if (sOptimizationInfoFlags.isRtwGen != isRtwGen ||
      sOptimizationInfoFlags.isModelRef != isModelRef ||
      sOptimizationInfoFlags.isExternal != isExternal) {
    unload_kaiguangai1108_optimization_info();
  }

  sOptimizationInfoFlags.isRtwGen = isRtwGen;
  sOptimizationInfoFlags.isModelRef = isModelRef;
  sOptimizationInfoFlags.isExternal = isExternal;
  if (sRtwOptimizationInfoStruct==NULL) {
    sRtwOptimizationInfoStruct = sf_load_rtw_optimization_info("kaiguangai1108",
      "kaiguangai1108");
    mexMakeArrayPersistent(sRtwOptimizationInfoStruct);
  }

  return(sRtwOptimizationInfoStruct);
}

void unload_kaiguangai1108_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct!=NULL) {
    mxDestroyArray(sRtwOptimizationInfoStruct);
    sRtwOptimizationInfoStruct = NULL;
  }
}
