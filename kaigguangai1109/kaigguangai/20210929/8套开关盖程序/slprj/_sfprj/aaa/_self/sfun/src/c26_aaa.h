#ifndef __c26_aaa_h__
#define __c26_aaa_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc26_aaaInstanceStruct
#define typedef_SFc26_aaaInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c26_dataWrittenToVector[2];
  uint8_T c26_doSetSimStateSideEffects;
  const mxArray *c26_setSimStateSideEffectsInfo;
  int32_T *c26_sfEvent;
  uint8_T *c26_is_active_c26_aaa;
  uint8_T *c26_is_c26_aaa;
  real_T *c26_t;
  real_T *c26_kaigaihuanchongyichang;
  boolean_T *c26_kaigaihuanchong;
  boolean_T *c26_kaigaihuanxiang;
} SFc26_aaaInstanceStruct;

#endif                                 /*typedef_SFc26_aaaInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c26_aaa_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c26_aaa_get_check_sum(mxArray *plhs[]);
extern void c26_aaa_method_dispatcher(SimStruct *S, int_T method, void *data);

#endif
