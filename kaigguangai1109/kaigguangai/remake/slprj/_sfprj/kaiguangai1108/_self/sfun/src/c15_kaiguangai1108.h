#ifndef __c15_kaiguangai1108_h__
#define __c15_kaiguangai1108_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc15_kaiguangai1108InstanceStruct
#define typedef_SFc15_kaiguangai1108InstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c15_dataWrittenToVector[20];
  uint8_T c15_doSetSimStateSideEffects;
  const mxArray *c15_setSimStateSideEffectsInfo;
  int32_T *c15_sfEvent;
  uint8_T *c15_is_active_c15_kaiguangai1108;
  uint8_T *c15_is_c15_kaiguangai1108;
  uint8_T *c15_is_songkai;
  uint8_T *c15_is_active_songkai;
  uint8_T *c15_is_kaigai;
  uint8_T *c15_is_active_kaigai;
  uint8_T *c15_is_jiesuo_songkai;
  uint8_T *c15_is_active_jiesuo_songkai;
  uint8_T *c15_is_suoding_yajin;
  uint8_T *c15_is_active_suoding_yajin;
  uint8_T *c15_is_yajin;
  uint8_T *c15_is_active_yajin;
  uint8_T *c15_is_guangai;
  uint8_T *c15_is_active_guangai;
  real_T *c15_start;
  real_T *c15_kgdw1;
  real_T *c15_kgdw2;
  real_T *c15_ggdw1;
  real_T *c15_ggdw2;
  real_T *c15_sddw;
  real_T *c15_jsdw;
  real_T *c15_yjdw;
  real_T *c15_skdw;
  real_T *c15_b_songkai;
  real_T *c15_b_kaigai;
  real_T *c15_suoding;
  real_T *c15_jiesuo;
  real_T *c15_skhx;
  real_T *c15_kghx;
  real_T *c15_yjhx;
  real_T *c15_gghx;
  real_T *c15_kgzhiling1;
  real_T *c15_kgzhiling2;
  real_T *c15_ggzhiling1;
  real_T *c15_ggzhiling2;
  real_T *c15_skt;
  real_T *c15_kgt;
  real_T *c15_sdt;
  real_T *c15_jst;
  real_T *c15_ggt;
  real_T *c15_b_guangai;
  real_T *c15_b_yajin;
  real_T *c15_yjt;
  real_T *c15_skyichang;
  real_T *c15_kgyichang;
  real_T *c15_sdyichang;
  real_T *c15_jsyichang;
  real_T *c15_jieshu;
  real_T *c15_ggyichang;
  real_T *c15_yjyichang;
  uint8_T *c15_temporalCounter_i1;
  uint8_T *c15_temporalCounter_i2;
  uint8_T *c15_temporalCounter_i3;
  uint8_T *c15_temporalCounter_i4;
  uint8_T *c15_temporalCounter_i5;
  uint8_T *c15_temporalCounter_i6;
} SFc15_kaiguangai1108InstanceStruct;

#endif                                 /*typedef_SFc15_kaiguangai1108InstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c15_kaiguangai1108_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c15_kaiguangai1108_get_check_sum(mxArray *plhs[]);
extern void c15_kaiguangai1108_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
