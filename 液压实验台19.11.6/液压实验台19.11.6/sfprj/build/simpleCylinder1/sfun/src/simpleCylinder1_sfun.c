/* Include files */
#include "simpleCylinder1_sfun.h"
#include "c1_simpleCylinder1.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
uint8_T _sfEvent_;
uint32_T _simpleCylinder1MachineNumber_;
real_T _sfTime_;

/* Function Declarations */

/* Function Definitions */
void simpleCylinder1_initializer(void)
{
  _sfEvent_ = CALL_EVENT;
}

void simpleCylinder1_terminator(void)
{
}

/* SFunction Glue Code */
unsigned int sf_simpleCylinder1_method_dispatcher(SimStruct *simstructPtr, const
 char *chartName, int_T method, void *data)
{
  if(!strcmp_ignore_ws(chartName,"simpleCylinder1/Nomal Motion Logic1/Control Logic/ SFunction "))
  {
    c1_simpleCylinder1_method_dispatcher(simstructPtr, method, data);
    return 1;
  }
  return 0;
}
unsigned int sf_simpleCylinder1_process_check_sum_call( int nlhs, mxArray *
 plhs[], int nrhs, const mxArray * prhs[] )
{
#ifdef MATLAB_MEX_FILE
  char commandName[20];
  if (nrhs<1 || !mxIsChar(prhs[0]) ) return 0;
  /* Possible call to get the checksum */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if(strcmp(commandName,"sf_get_check_sum")) return 0;
  plhs[0] = mxCreateDoubleMatrix( 1,4,mxREAL);
  if(nrhs>1 && mxIsChar(prhs[1])) {
    mxGetString(prhs[1], commandName,sizeof(commandName)/sizeof(char));
    commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
    if(!strcmp(commandName,"machine")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1953172690U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3426315628U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2227534187U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(641386134U);
    }else if(!strcmp(commandName,"exportedFcn")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0U);
    }else if(!strcmp(commandName,"makefile")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3939063082U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(620594535U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(714304934U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1247584769U);
    }else if(nrhs==3 && !strcmp(commandName,"chart")) {
      unsigned int chartFileNumber;
      chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
      switch(chartFileNumber) {
       case 1:
        {
          extern void sf_c1_simpleCylinder1_get_check_sum(mxArray *plhs[]);
          sf_c1_simpleCylinder1_get_check_sum(plhs);
          break;
        }

       default:
        ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0.0);
      }
    }else if(!strcmp(commandName,"target")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2553529877U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1250385535U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3747036769U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(84901116U);
    }else {
      return 0;
    }
  } else{
    ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(968649861U);
    ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(38073822U);
    ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2347996343U);
    ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2626804337U);
  }
  return 1;
#else
  return 0;
#endif
}

unsigned int sf_simpleCylinder1_autoinheritance_info( int nlhs, mxArray *
 plhs[], int nrhs, const mxArray * prhs[] )
{
#ifdef MATLAB_MEX_FILE
  char commandName[32];
  if (nrhs<2 || !mxIsChar(prhs[0]) ) return 0;
  /* Possible call to get the autoinheritance_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if(strcmp(commandName,"get_autoinheritance_info")) return 0;
  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch(chartFileNumber) {
     case 1:
      {
        extern mxArray *sf_c1_simpleCylinder1_get_autoinheritance_info(void);
        plhs[0] = sf_c1_simpleCylinder1_get_autoinheritance_info();
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
void simpleCylinder1_debug_initialize(void)
{
  _simpleCylinder1MachineNumber_ =
  sf_debug_initialize_machine("simpleCylinder1","sfun",0,1,0,0,0);
  sf_debug_set_machine_event_thresholds(_simpleCylinder1MachineNumber_,0,0);
  sf_debug_set_machine_data_thresholds(_simpleCylinder1MachineNumber_,0);
}

void simpleCylinder1_register_exported_symbols(SimStruct* S)
{
}
