#ifndef __c25_kaiguangai_h__
#define __c25_kaiguangai_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc25_kaiguangaiInstanceStruct
#define typedef_SFc25_kaiguangaiInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c25_dataWrittenToVector[2];
  uint8_T c25_doSetSimStateSideEffects;
  const mxArray *c25_setSimStateSideEffectsInfo;
  int32_T *c25_sfEvent;
  uint8_T *c25_is_active_c25_kaiguangai;
  uint8_T *c25_is_c25_kaiguangai;
  real_T *c25_t;
  real_T *c25_kaigaihuanchongyichang;
  real_T *c25_kaigaihuanchong;
  real_T *c25_kaigaihuanxiang;
} SFc25_kaiguangaiInstanceStruct;

#endif                                 /*typedef_SFc25_kaiguangaiInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c25_kaiguangai_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c25_kaiguangai_get_check_sum(mxArray *plhs[]);
extern void c25_kaiguangai_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
