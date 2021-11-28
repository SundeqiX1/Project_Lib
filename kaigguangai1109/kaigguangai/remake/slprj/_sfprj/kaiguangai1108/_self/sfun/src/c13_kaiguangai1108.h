#ifndef __c13_kaiguangai1108_h__
#define __c13_kaiguangai1108_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc13_kaiguangai1108InstanceStruct
#define typedef_SFc13_kaiguangai1108InstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c13_dataWrittenToVector[20];
  uint8_T c13_doSetSimStateSideEffects;
  const mxArray *c13_setSimStateSideEffectsInfo;
  int32_T *c13_sfEvent;
  uint8_T *c13_is_active_c13_kaiguangai1108;
  uint8_T *c13_is_c13_kaiguangai1108;
  uint8_T *c13_is_songkai;
  uint8_T *c13_is_active_songkai;
  uint8_T *c13_is_kaigai;
  uint8_T *c13_is_active_kaigai;
  uint8_T *c13_is_jiesuo_songkai;
  uint8_T *c13_is_active_jiesuo_songkai;
  uint8_T *c13_is_suoding_yajin;
  uint8_T *c13_is_active_suoding_yajin;
  uint8_T *c13_is_yajin;
  uint8_T *c13_is_active_yajin;
  uint8_T *c13_is_guangai;
  uint8_T *c13_is_active_guangai;
  real_T *c13_start;
  real_T *c13_kgdw1;
  real_T *c13_kgdw2;
  real_T *c13_ggdw1;
  real_T *c13_ggdw2;
  real_T *c13_sddw;
  real_T *c13_jsdw;
  real_T *c13_yjdw;
  real_T *c13_skdw;
  real_T *c13_b_songkai;
  real_T *c13_b_kaigai;
  real_T *c13_suoding;
  real_T *c13_jiesuo;
  real_T *c13_skhx;
  real_T *c13_kghx;
  real_T *c13_yjhx;
  real_T *c13_gghx;
  real_T *c13_kgzhiling1;
  real_T *c13_kgzhiling2;
  real_T *c13_ggzhiling1;
  real_T *c13_ggzhiling2;
  real_T *c13_skt;
  real_T *c13_kgt;
  real_T *c13_sdt;
  real_T *c13_jst;
  real_T *c13_ggt;
  real_T *c13_b_guangai;
  real_T *c13_b_yajin;
  real_T *c13_yjt;
  real_T *c13_skyichang;
  real_T *c13_kgyichang;
  real_T *c13_sdyichang;
  real_T *c13_jsyichang;
  real_T *c13_jieshu;
  real_T *c13_ggyichang;
  real_T *c13_yjyichang;
  uint8_T *c13_temporalCounter_i1;
  uint8_T *c13_temporalCounter_i2;
  uint8_T *c13_temporalCounter_i3;
  uint8_T *c13_temporalCounter_i4;
  uint8_T *c13_temporalCounter_i5;
  uint8_T *c13_temporalCounter_i6;
} SFc13_kaiguangai1108InstanceStruct;

#endif                                 /*typedef_SFc13_kaiguangai1108InstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c13_kaiguangai1108_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c13_kaiguangai1108_get_check_sum(mxArray *plhs[]);
extern void c13_kaiguangai1108_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
