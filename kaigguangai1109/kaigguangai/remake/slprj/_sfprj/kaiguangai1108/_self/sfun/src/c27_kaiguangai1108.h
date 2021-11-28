#ifndef __c27_kaiguangai1108_h__
#define __c27_kaiguangai1108_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc27_kaiguangai1108InstanceStruct
#define typedef_SFc27_kaiguangai1108InstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c27_dataWrittenToVector[2];
  uint8_T c27_doSetSimStateSideEffects;
  const mxArray *c27_setSimStateSideEffectsInfo;
  int32_T *c27_sfEvent;
  uint8_T *c27_is_active_c27_kaiguangai1108;
  uint8_T *c27_is_c27_kaiguangai1108;
  boolean_T *c27_guangaihuanchong;
  real_T *c27_t;
  boolean_T *c27_guangaihuanxiang;
  real_T *c27_guangaihuanchongyichang;
} SFc27_kaiguangai1108InstanceStruct;

#endif                                 /*typedef_SFc27_kaiguangai1108InstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c27_kaiguangai1108_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c27_kaiguangai1108_get_check_sum(mxArray *plhs[]);
extern void c27_kaiguangai1108_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
