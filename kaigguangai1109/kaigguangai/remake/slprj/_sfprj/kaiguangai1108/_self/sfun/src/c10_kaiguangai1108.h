#ifndef __c10_kaiguangai1108_h__
#define __c10_kaiguangai1108_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc10_kaiguangai1108InstanceStruct
#define typedef_SFc10_kaiguangai1108InstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c10_dataWrittenToVector[20];
  uint8_T c10_doSetSimStateSideEffects;
  const mxArray *c10_setSimStateSideEffectsInfo;
  int32_T *c10_sfEvent;
  uint8_T *c10_is_active_c10_kaiguangai1108;
  uint8_T *c10_is_c10_kaiguangai1108;
  uint8_T *c10_is_songkai;
  uint8_T *c10_is_active_songkai;
  uint8_T *c10_is_kaigai;
  uint8_T *c10_is_active_kaigai;
  uint8_T *c10_is_jiesuo_songkai;
  uint8_T *c10_is_active_jiesuo_songkai;
  uint8_T *c10_is_suoding_yajin;
  uint8_T *c10_is_active_suoding_yajin;
  uint8_T *c10_is_yajin;
  uint8_T *c10_is_active_yajin;
  uint8_T *c10_is_guangai;
  uint8_T *c10_is_active_guangai;
  real_T *c10_start;
  real_T *c10_kgdw1;
  real_T *c10_kgdw2;
  real_T *c10_ggdw1;
  real_T *c10_ggdw2;
  real_T *c10_sddw;
  real_T *c10_jsdw;
  real_T *c10_yjdw;
  real_T *c10_skdw;
  real_T *c10_b_songkai;
  real_T *c10_b_kaigai;
  real_T *c10_suoding;
  real_T *c10_jiesuo;
  real_T *c10_skhx;
  real_T *c10_kghx;
  real_T *c10_yjhx;
  real_T *c10_gghx;
  real_T *c10_kgzhiling1;
  real_T *c10_kgzhiling2;
  real_T *c10_ggzhiling1;
  real_T *c10_ggzhiling2;
  real_T *c10_skt;
  real_T *c10_kgt;
  real_T *c10_sdt;
  real_T *c10_jst;
  real_T *c10_ggt;
  real_T *c10_b_guangai;
  real_T *c10_b_yajin;
  real_T *c10_yjt;
  real_T *c10_skyichang;
  real_T *c10_kgyichang;
  real_T *c10_sdyichang;
  real_T *c10_jsyichang;
  real_T *c10_jieshu;
  real_T *c10_ggyichang;
  real_T *c10_yjyichang;
  uint8_T *c10_temporalCounter_i1;
  uint8_T *c10_temporalCounter_i2;
  uint8_T *c10_temporalCounter_i3;
  uint8_T *c10_temporalCounter_i4;
  uint8_T *c10_temporalCounter_i5;
  uint8_T *c10_temporalCounter_i6;
} SFc10_kaiguangai1108InstanceStruct;

#endif                                 /*typedef_SFc10_kaiguangai1108InstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c10_kaiguangai1108_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c10_kaiguangai1108_get_check_sum(mxArray *plhs[]);
extern void c10_kaiguangai1108_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
