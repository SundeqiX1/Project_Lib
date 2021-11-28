#ifndef __c16_aaa_h__
#define __c16_aaa_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc16_aaaInstanceStruct
#define typedef_SFc16_aaaInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c16_dataWrittenToVector[20];
  uint8_T c16_doSetSimStateSideEffects;
  const mxArray *c16_setSimStateSideEffectsInfo;
  int32_T *c16_sfEvent;
  uint8_T *c16_is_active_c16_aaa;
  uint8_T *c16_is_c16_aaa;
  uint8_T *c16_is_songkai;
  uint8_T *c16_is_active_songkai;
  uint8_T *c16_is_kaigai;
  uint8_T *c16_is_active_kaigai;
  uint8_T *c16_is_jiesuo;
  uint8_T *c16_is_active_jiesuo;
  uint8_T *c16_is_suoding;
  uint8_T *c16_is_active_suoding;
  uint8_T *c16_is_yajin;
  uint8_T *c16_is_active_yajin;
  uint8_T *c16_is_guangai;
  uint8_T *c16_is_active_guangai;
  real_T *c16_start;
  real_T *c16_kgdw1;
  real_T *c16_kgdw2;
  real_T *c16_ggdw1;
  real_T *c16_ggdw2;
  real_T *c16_sddw;
  real_T *c16_jsdw;
  real_T *c16_yjdw;
  real_T *c16_skdw;
  real_T *c16_b_songkai;
  real_T *c16_b_kaigai;
  real_T *c16_b_suoding;
  real_T *c16_b_jiesuo;
  real_T *c16_skhx;
  real_T *c16_kghx;
  real_T *c16_yjhx;
  real_T *c16_gghx;
  real_T *c16_kgzhiling1;
  real_T *c16_kgzhiling2;
  real_T *c16_ggzhiling1;
  real_T *c16_ggzhiling2;
  real_T *c16_skt;
  real_T *c16_kgt;
  real_T *c16_sdt;
  real_T *c16_jst;
  real_T *c16_ggt;
  real_T *c16_b_guangai;
  real_T *c16_b_yajin;
  real_T *c16_yjt;
  real_T *c16_skyichang;
  real_T *c16_kgyichang;
  real_T *c16_sdyichang;
  real_T *c16_jsyichang;
  real_T *c16_jieshu;
  real_T *c16_ggyichang;
  real_T *c16_yjyichang;
  uint8_T *c16_temporalCounter_i1;
  uint8_T *c16_temporalCounter_i2;
  uint8_T *c16_temporalCounter_i3;
  uint8_T *c16_temporalCounter_i4;
  uint8_T *c16_temporalCounter_i5;
  uint8_T *c16_temporalCounter_i6;
} SFc16_aaaInstanceStruct;

#endif                                 /*typedef_SFc16_aaaInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c16_aaa_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c16_aaa_get_check_sum(mxArray *plhs[]);
extern void c16_aaa_method_dispatcher(SimStruct *S, int_T method, void *data);

#endif
