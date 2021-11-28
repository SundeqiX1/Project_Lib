#ifndef __c1_simpleCylinder1_h__
#define __c1_simpleCylinder1_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtw_capi.h"
#include "rtw_modelmap.h"

/* Type Definitions */

typedef struct {
  SimStruct *S;
  void *c1_testPointAddrMap[10];
  uint32_T chartNumber;
  uint32_T instanceNumber;
  uint8_T c1_is_active_c1_simpleCylinder1;
  uint8_T c1_is_active_ready_mode;
  uint8_T c1_is_active_run_mode;
  uint8_T c1_is_ready_mode;
  uint8_T c1_is_run_mode;
  uint8_T c1_tp_ready;
  uint8_T c1_tp_ready_mode;
  uint8_T c1_tp_rest;
  uint8_T c1_tp_run_mode;
  uint8_T c1_tp_running;
  uint8_T c1_tp_stopped;
  uint8_T c1_tp_to_ready;
  uint8_T c1_tp_to_rest;
  uint8_T c1_tp_to_running;
  uint8_T c1_tp_to_stopped;
  rtwCAPI_ModelMappingInfo c1_testPointMappingInfo;
  ChartInfoStruct chartInfo;
} SFc1_simpleCylinder1InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */

extern void sf_c1_simpleCylinder1_get_check_sum(mxArray *plhs[]);
extern void c1_simpleCylinder1_method_dispatcher(SimStruct *S, int_T method,
 void *data);

#endif

