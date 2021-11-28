#ifndef __c18_kaiguangai1108_h__
#define __c18_kaiguangai1108_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc18_kaiguangai1108InstanceStruct
#define typedef_SFc18_kaiguangai1108InstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  uint8_T c18_doSetSimStateSideEffects;
  const mxArray *c18_setSimStateSideEffectsInfo;
  int32_T *c18_sfEvent;
  uint8_T *c18_is_active_c18_kaiguangai1108;
  uint8_T *c18_is_c18_kaiguangai1108;
  uint8_T *c18_is_kaigai;
  uint8_T *c18_is_active_kaigai;
  uint8_T *c18_is_guangai;
  uint8_T *c18_is_active_guangai;
  uint8_T *c18_is_songkai;
  uint8_T *c18_is_active_songkai;
  uint8_T *c18_is_yajin;
  uint8_T *c18_is_active_yajin;
  uint8_T *c18_is_suoding;
  uint8_T *c18_is_active_suoding;
  uint8_T *c18_is_jiesuo;
  uint8_T *c18_is_active_jiesuo;
  real_T *c18_skhx;
  real_T *c18_kghx;
  real_T *c18_tiaoshi;
  real_T *c18_songkai;
  real_T *c18_kaigai;
  real_T *c18_suoding;
  real_T *c18_jiesuo;
  real_T *c18_guangai;
  real_T *c18_yajin;
  real_T *c18_jiting;
  real_T *c18_yjhx;
  real_T *c18_gghx;
  uint16_T *c18_temporalCounter_i1;
} SFc18_kaiguangai1108InstanceStruct;

#endif                                 /*typedef_SFc18_kaiguangai1108InstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c18_kaiguangai1108_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c18_kaiguangai1108_get_check_sum(mxArray *plhs[]);
extern void c18_kaiguangai1108_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
