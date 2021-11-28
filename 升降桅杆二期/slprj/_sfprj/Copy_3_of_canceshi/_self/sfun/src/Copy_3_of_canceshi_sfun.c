/* Include files */

#include "Copy_3_of_canceshi_sfun.h"
#include "c1_Copy_3_of_canceshi.h"
#include "c2_Copy_3_of_canceshi.h"
#include "c3_Copy_3_of_canceshi.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
int32_T _sfEvent_;
uint32_T _Copy_3_of_canceshiMachineNumber_;
real_T _sfTime_;

/* Function Declarations */

/* Function Definitions */
void Copy_3_of_canceshi_initializer(void)
{
  _sfEvent_ = CALL_EVENT;
}

void Copy_3_of_canceshi_terminator(void)
{
}

/* SFunction Glue Code */
unsigned int sf_Copy_3_of_canceshi_method_dispatcher(SimStruct *simstructPtr,
  unsigned int chartFileNumber, const char* specsCksum, int_T method, void *data)
{
  if (chartFileNumber==1) {
    c1_Copy_3_of_canceshi_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==2) {
    c2_Copy_3_of_canceshi_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==3) {
    c3_Copy_3_of_canceshi_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  return 0;
}

unsigned int sf_Copy_3_of_canceshi_process_testpoint_info_call( int nlhs,
  mxArray * plhs[], int nrhs, const mxArray * prhs[] )
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
  if (!strcmp(machineName, "Copy_3_of_canceshi")) {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
    switch (chartFileNumber) {
     case 1:
      {
        extern mxArray *sf_c1_Copy_3_of_canceshi_get_testpoint_info(void);
        plhs[0] = sf_c1_Copy_3_of_canceshi_get_testpoint_info();
        break;
      }

     case 2:
      {
        extern mxArray *sf_c2_Copy_3_of_canceshi_get_testpoint_info(void);
        plhs[0] = sf_c2_Copy_3_of_canceshi_get_testpoint_info();
        break;
      }

     case 3:
      {
        extern mxArray *sf_c3_Copy_3_of_canceshi_get_testpoint_info(void);
        plhs[0] = sf_c3_Copy_3_of_canceshi_get_testpoint_info();
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

unsigned int sf_Copy_3_of_canceshi_process_check_sum_call( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
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
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3759175984U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(4052452260U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1589014549U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(763490027U);
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
          extern void sf_c1_Copy_3_of_canceshi_get_check_sum(mxArray *plhs[]);
          sf_c1_Copy_3_of_canceshi_get_check_sum(plhs);
          break;
        }

       case 2:
        {
          extern void sf_c2_Copy_3_of_canceshi_get_check_sum(mxArray *plhs[]);
          sf_c2_Copy_3_of_canceshi_get_check_sum(plhs);
          break;
        }

       case 3:
        {
          extern void sf_c3_Copy_3_of_canceshi_get_check_sum(mxArray *plhs[]);
          sf_c3_Copy_3_of_canceshi_get_check_sum(plhs);
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
    ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(91517888U);
    ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3776677920U);
    ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3797983704U);
    ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1868846426U);
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_Copy_3_of_canceshi_autoinheritance_info( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
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
        extern mxArray *sf_c1_Copy_3_of_canceshi_get_autoinheritance_info(void);
        plhs[0] = sf_c1_Copy_3_of_canceshi_get_autoinheritance_info();
        break;
      }

     case 2:
      {
        extern mxArray *sf_c2_Copy_3_of_canceshi_get_autoinheritance_info(void);
        plhs[0] = sf_c2_Copy_3_of_canceshi_get_autoinheritance_info();
        break;
      }

     case 3:
      {
        extern mxArray *sf_c3_Copy_3_of_canceshi_get_autoinheritance_info(void);
        plhs[0] = sf_c3_Copy_3_of_canceshi_get_autoinheritance_info();
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

unsigned int sf_Copy_3_of_canceshi_get_eml_resolved_functions_info( int nlhs,
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
          *sf_c1_Copy_3_of_canceshi_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c1_Copy_3_of_canceshi_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 2:
      {
        extern const mxArray
          *sf_c2_Copy_3_of_canceshi_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c2_Copy_3_of_canceshi_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     case 3:
      {
        extern const mxArray
          *sf_c3_Copy_3_of_canceshi_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c3_Copy_3_of_canceshi_get_eml_resolved_functions_info();
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

void Copy_3_of_canceshi_debug_initialize(void)
{
  _Copy_3_of_canceshiMachineNumber_ = sf_debug_initialize_machine(
    "Copy_3_of_canceshi","sfun",0,3,0,0,0);
  sf_debug_set_machine_event_thresholds(_Copy_3_of_canceshiMachineNumber_,0,0);
  sf_debug_set_machine_data_thresholds(_Copy_3_of_canceshiMachineNumber_,0);
}

void Copy_3_of_canceshi_register_exported_symbols(SimStruct* S)
{
}
