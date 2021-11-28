/* Include files */

#include "canceshi1_sfun.h"
#include "c1_canceshi1.h"
#include "c2_canceshi1.h"
#include "c3_canceshi1.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
int32_T _sfEvent_;
uint32_T _canceshi1MachineNumber_;
real_T _sfTime_;

/* Function Declarations */

/* Function Definitions */
void canceshi1_initializer(void)
{
  _sfEvent_ = CALL_EVENT;
}

void canceshi1_terminator(void)
{
}

/* SFunction Glue Code */
unsigned int sf_canceshi1_method_dispatcher(SimStruct *simstructPtr, unsigned
  int chartFileNumber, const char* specsCksum, int_T method, void *data)
{
  if (chartFileNumber==1) {
    c1_canceshi1_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==2) {
    c2_canceshi1_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==3) {
    c3_canceshi1_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  return 0;
}

unsigned int sf_canceshi1_process_testpoint_info_call( int nlhs, mxArray * plhs[],
  int nrhs, const mxArray * prhs[] )
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
  if (!strcmp(machineName, "canceshi1")) {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
    switch (chartFileNumber) {
     case 1:
      {
        extern mxArray *sf_c1_canceshi1_get_testpoint_info(void);
        plhs[0] = sf_c1_canceshi1_get_testpoint_info();
        break;
      }

     case 2:
      {
        extern mxArray *sf_c2_canceshi1_get_testpoint_info(void);
        plhs[0] = sf_c2_canceshi1_get_testpoint_info();
        break;
      }

     case 3:
      {
        extern mxArray *sf_c3_canceshi1_get_testpoint_info(void);
        plhs[0] = sf_c3_canceshi1_get_testpoint_info();
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

unsigned int sf_canceshi1_process_check_sum_call( int nlhs, mxArray * plhs[],
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
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1734411714U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1357957759U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(4047633065U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1794770140U);
    } else if (!strcmp(commandName,"exportedFcn")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0U);
    } else if (!strcmp(commandName,"makefile")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(831538371U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3494427076U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3610463441U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(65600501U);
    } else if (nrhs==3 && !strcmp(commandName,"chart")) {
      unsigned int chartFileNumber;
      chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
      switch (chartFileNumber) {
       case 1:
        {
          extern void sf_c1_canceshi1_get_check_sum(mxArray *plhs[]);
          sf_c1_canceshi1_get_check_sum(plhs);
          break;
        }

       case 2:
        {
          extern void sf_c2_canceshi1_get_check_sum(mxArray *plhs[]);
          sf_c2_canceshi1_get_check_sum(plhs);
          break;
        }

       case 3:
        {
          extern void sf_c3_canceshi1_get_check_sum(mxArray *plhs[]);
          sf_c3_canceshi1_get_check_sum(plhs);
          break;
        }

       default:
        ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0.0);
      }
    } else if (!strcmp(commandName,"target")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1528086839U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(536128755U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2837879853U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3834018477U);
    } else {
      return 0;
    }
  } else {
    ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1030689334U);
    ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1797985617U);
    ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2397647498U);
    ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2390114395U);
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_canceshi1_autoinheritance_info( int nlhs, mxArray * plhs[], int
  nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[32];
  if (nrhs<2 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the autoinheritance_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_autoinheritance_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 1:
      {
        extern mxArray *sf_c1_canceshi1_get_autoinheritance_info(void);
        plhs[0] = sf_c1_canceshi1_get_autoinheritance_info();
        break;
      }

     case 2:
      {
        extern mxArray *sf_c2_canceshi1_get_autoinheritance_info(void);
        plhs[0] = sf_c2_canceshi1_get_autoinheritance_info();
        break;
      }

     case 3:
      {
        extern mxArray *sf_c3_canceshi1_get_autoinheritance_info(void);
        plhs[0] = sf_c3_canceshi1_get_autoinheritance_info();
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

unsigned int sf_canceshi1_get_eml_resolved_functions_info( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
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
        extern const mxArray *sf_c1_canceshi1_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c1_canceshi1_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 2:
      {
        extern const mxArray *sf_c2_canceshi1_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c2_canceshi1_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 3:
      {
        extern const mxArray *sf_c3_canceshi1_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c3_canceshi1_get_eml_resolved_functions_info();
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

void canceshi1_debug_initialize(void)
{
  _canceshi1MachineNumber_ = sf_debug_initialize_machine("canceshi1","sfun",0,3,
    0,0,0);
  sf_debug_set_machine_event_thresholds(_canceshi1MachineNumber_,0,0);
  sf_debug_set_machine_data_thresholds(_canceshi1MachineNumber_,0);
}

void canceshi1_register_exported_symbols(SimStruct* S)
{
}
