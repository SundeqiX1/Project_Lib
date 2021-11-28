#ifndef __c14_kaiguangai_h__
#define __c14_kaiguangai_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc14_kaiguangaiInstanceStruct
#define typedef_SFc14_kaiguangaiInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c14_dataWrittenToVector[20];
  uint8_T c14_doSetSimStateSideEffects;
  const mxArray *c14_setSimStateSideEffectsInfo;
  int32_T *c14_sfEvent;
  uint8_T *c14_is_active_c14_kaiguangai;
  uint8_T *c14_is_c14_kaiguangai;
  uint8_T *c14_is_songkai;
  uint8_T *c14_is_active_songkai;
  uint8_T *c14_is_kaigai;
  uint8_T *c14_is_active_kaigai;
  uint8_T *c14_is_jiesuo;
  uint8_T *c14_is_active_jiesuo;
  uint8_T *c14_is_suoding;
  uint8_T *c14_is_active_suoding;
  uint8_T *c14_is_yajin;
  uint8_T *c14_is_active_yajin;
  uint8_T *c14_is_guangai;
  uint8_T *c14_is_active_guangai;
  real_T *c14_start;
  real_T *c14_kgdw1;
  real_T *c14_kgdw2;
  real_T *c14_ggdw1;
  real_T *c14_ggdw2;
  real_T *c14_sddw;
  real_T *c14_jsdw;
  real_T *c14_yjdw;
  real_T *c14_skdw;
  real_T *c14_b_songkai;
  real_T *c14_b_kaigai;
  real_T *c14_b_suoding;
  real_T *c14_b_jiesuo;
  real_T *c14_skhx;
  real_T *c14_kghx;
  real_T *c14_yjhx;
  real_T *c14_gghx;
  real_T *c14_kgzhiling1;
  real_T *c14_kgzhiling2;
  real_T *c14_ggzhiling1;
  real_T *c14_ggzhiling2;
  real_T *c14_skt;
  real_T *c14_kgt;
  real_T *c14_sdt;
  real_T *c14_jst;
  real_T *c14_ggt;
  real_T *c14_b_guangai;
  real_T *c14_b_yajin;
  real_T *c14_yjt;
  real_T *c14_skyichang;
  real_T *c14_kgyichang;
  real_T *c14_sdyichang;
  real_T *c14_jsyichang;
  real_T *c14_jieshu;
  real_T *c14_ggyichang;
  real_T *c14_yjyichang;
  uint8_T *c14_temporalCounter_i1;
  uint8_T *c14_temporalCounter_i2;
  uint8_T *c14_temporalCounter_i3;
  uint8_T *c14_temporalCounter_i4;
  uint8_T *c14_temporalCounter_i5;
  uint8_T *c14_temporalCounter_i6;
} SFc14_kaiguangaiInstanceStruct;

#endif                                 /*typedef_SFc14_kaiguangaiInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c14_kaiguangai_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c14_kaiguangai_get_check_sum(mxArray *plhs[]);
extern void c14_kaiguangai_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
