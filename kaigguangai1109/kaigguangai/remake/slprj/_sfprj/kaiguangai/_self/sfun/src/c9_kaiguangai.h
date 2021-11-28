#ifndef __c9_kaiguangai_h__
#define __c9_kaiguangai_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc9_kaiguangaiInstanceStruct
#define typedef_SFc9_kaiguangaiInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c9_dataWrittenToVector[20];
  uint8_T c9_doSetSimStateSideEffects;
  const mxArray *c9_setSimStateSideEffectsInfo;
  int32_T *c9_sfEvent;
  uint8_T *c9_is_active_c9_kaiguangai;
  uint8_T *c9_is_c9_kaiguangai;
  uint8_T *c9_is_songkai;
  uint8_T *c9_is_active_songkai;
  uint8_T *c9_is_kaigai;
  uint8_T *c9_is_active_kaigai;
  uint8_T *c9_is_jiesuo;
  uint8_T *c9_is_active_jiesuo;
  uint8_T *c9_is_suoding;
  uint8_T *c9_is_active_suoding;
  uint8_T *c9_is_yajin;
  uint8_T *c9_is_active_yajin;
  uint8_T *c9_is_guangai;
  uint8_T *c9_is_active_guangai;
  real_T *c9_start;
  real_T *c9_kgdw1;
  real_T *c9_kgdw2;
  real_T *c9_ggdw1;
  real_T *c9_ggdw2;
  real_T *c9_sddw;
  real_T *c9_jsdw;
  real_T *c9_yjdw;
  real_T *c9_skdw;
  real_T *c9_b_songkai;
  real_T *c9_b_kaigai;
  real_T *c9_b_suoding;
  real_T *c9_b_jiesuo;
  real_T *c9_skhx;
  real_T *c9_kghx;
  real_T *c9_yjhx;
  real_T *c9_gghx;
  real_T *c9_kgzhiling1;
  real_T *c9_kgzhiling2;
  real_T *c9_ggzhiling1;
  real_T *c9_ggzhiling2;
  real_T *c9_skt;
  real_T *c9_kgt;
  real_T *c9_sdt;
  real_T *c9_jst;
  real_T *c9_ggt;
  real_T *c9_b_guangai;
  real_T *c9_b_yajin;
  real_T *c9_yjt;
  real_T *c9_skyichang;
  real_T *c9_kgyichang;
  real_T *c9_sdyichang;
  real_T *c9_jsyichang;
  real_T *c9_jieshu;
  real_T *c9_ggyichang;
  real_T *c9_yjyichang;
  uint8_T *c9_temporalCounter_i1;
  uint8_T *c9_temporalCounter_i2;
  uint8_T *c9_temporalCounter_i3;
  uint8_T *c9_temporalCounter_i4;
  uint8_T *c9_temporalCounter_i5;
  uint8_T *c9_temporalCounter_i6;
} SFc9_kaiguangaiInstanceStruct;

#endif                                 /*typedef_SFc9_kaiguangaiInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c9_kaiguangai_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c9_kaiguangai_get_check_sum(mxArray *plhs[]);
extern void c9_kaiguangai_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
