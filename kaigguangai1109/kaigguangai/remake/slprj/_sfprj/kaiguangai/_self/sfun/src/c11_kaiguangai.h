#ifndef __c11_kaiguangai_h__
#define __c11_kaiguangai_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc11_kaiguangaiInstanceStruct
#define typedef_SFc11_kaiguangaiInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c11_dataWrittenToVector[20];
  uint8_T c11_doSetSimStateSideEffects;
  const mxArray *c11_setSimStateSideEffectsInfo;
  int32_T *c11_sfEvent;
  uint8_T *c11_is_active_c11_kaiguangai;
  uint8_T *c11_is_c11_kaiguangai;
  uint8_T *c11_is_songkai;
  uint8_T *c11_is_active_songkai;
  uint8_T *c11_is_kaigai;
  uint8_T *c11_is_active_kaigai;
  uint8_T *c11_is_jiesuo;
  uint8_T *c11_is_active_jiesuo;
  uint8_T *c11_is_suoding;
  uint8_T *c11_is_active_suoding;
  uint8_T *c11_is_yajin;
  uint8_T *c11_is_active_yajin;
  uint8_T *c11_is_guangai;
  uint8_T *c11_is_active_guangai;
  real_T *c11_start;
  real_T *c11_kgdw1;
  real_T *c11_kgdw2;
  real_T *c11_ggdw1;
  real_T *c11_ggdw2;
  real_T *c11_sddw;
  real_T *c11_jsdw;
  real_T *c11_yjdw;
  real_T *c11_skdw;
  real_T *c11_b_songkai;
  real_T *c11_b_kaigai;
  real_T *c11_b_suoding;
  real_T *c11_b_jiesuo;
  real_T *c11_skhx;
  real_T *c11_kghx;
  real_T *c11_yjhx;
  real_T *c11_gghx;
  real_T *c11_kgzhiling1;
  real_T *c11_kgzhiling2;
  real_T *c11_ggzhiling1;
  real_T *c11_ggzhiling2;
  real_T *c11_skt;
  real_T *c11_kgt;
  real_T *c11_sdt;
  real_T *c11_jst;
  real_T *c11_ggt;
  real_T *c11_b_guangai;
  real_T *c11_b_yajin;
  real_T *c11_yjt;
  real_T *c11_skyichang;
  real_T *c11_kgyichang;
  real_T *c11_sdyichang;
  real_T *c11_jsyichang;
  real_T *c11_jieshu;
  real_T *c11_ggyichang;
  real_T *c11_yjyichang;
  uint8_T *c11_temporalCounter_i1;
  uint8_T *c11_temporalCounter_i2;
  uint8_T *c11_temporalCounter_i3;
  uint8_T *c11_temporalCounter_i4;
  uint8_T *c11_temporalCounter_i5;
  uint8_T *c11_temporalCounter_i6;
} SFc11_kaiguangaiInstanceStruct;

#endif                                 /*typedef_SFc11_kaiguangaiInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c11_kaiguangai_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c11_kaiguangai_get_check_sum(mxArray *plhs[]);
extern void c11_kaiguangai_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
