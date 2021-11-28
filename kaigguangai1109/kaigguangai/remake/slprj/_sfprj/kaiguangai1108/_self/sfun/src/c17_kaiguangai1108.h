#ifndef __c17_kaiguangai1108_h__
#define __c17_kaiguangai1108_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc17_kaiguangai1108InstanceStruct
#define typedef_SFc17_kaiguangai1108InstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  uint8_T c17_doSetSimStateSideEffects;
  const mxArray *c17_setSimStateSideEffectsInfo;
  int32_T *c17_sfEvent;
  uint8_T *c17_is_active_c17_kaiguangai1108;
  uint8_T *c17_is_c17_kaiguangai1108;
  uint8_T *c17_is_kaigai;
  uint8_T *c17_is_active_kaigai;
  uint8_T *c17_is_guangai;
  uint8_T *c17_is_active_guangai;
  uint8_T *c17_is_songkai;
  uint8_T *c17_is_active_songkai;
  uint8_T *c17_is_yajin;
  uint8_T *c17_is_active_yajin;
  uint8_T *c17_is_suoding;
  uint8_T *c17_is_active_suoding;
  uint8_T *c17_is_jiesuo;
  uint8_T *c17_is_active_jiesuo;
  real_T *c17_skhx;
  real_T *c17_kghx;
  real_T *c17_tiaoshi;
  real_T *c17_songkai;
  real_T *c17_kaigai;
  real_T *c17_suoding;
  real_T *c17_jiesuo;
  real_T *c17_guangai;
  real_T *c17_yajin;
  real_T *c17_jiting;
  real_T *c17_yjhx;
  real_T *c17_gghx;
  uint16_T *c17_temporalCounter_i1;
} SFc17_kaiguangai1108InstanceStruct;

#endif                                 /*typedef_SFc17_kaiguangai1108InstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c17_kaiguangai1108_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c17_kaiguangai1108_get_check_sum(mxArray *plhs[]);
extern void c17_kaiguangai1108_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
