#ifndef __c12_kaiguangai_h__
#define __c12_kaiguangai_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc12_kaiguangaiInstanceStruct
#define typedef_SFc12_kaiguangaiInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c12_dataWrittenToVector[20];
  uint8_T c12_doSetSimStateSideEffects;
  const mxArray *c12_setSimStateSideEffectsInfo;
  int32_T *c12_sfEvent;
  uint8_T *c12_is_active_c12_kaiguangai;
  uint8_T *c12_is_c12_kaiguangai;
  uint8_T *c12_is_songkai;
  uint8_T *c12_is_active_songkai;
  uint8_T *c12_is_kaigai;
  uint8_T *c12_is_active_kaigai;
  uint8_T *c12_is_jiesuo;
  uint8_T *c12_is_active_jiesuo;
  uint8_T *c12_is_suoding;
  uint8_T *c12_is_active_suoding;
  uint8_T *c12_is_yajin;
  uint8_T *c12_is_active_yajin;
  uint8_T *c12_is_guangai;
  uint8_T *c12_is_active_guangai;
  real_T *c12_start;
  real_T *c12_kgdw1;
  real_T *c12_kgdw2;
  real_T *c12_ggdw1;
  real_T *c12_ggdw2;
  real_T *c12_sddw;
  real_T *c12_jsdw;
  real_T *c12_yjdw;
  real_T *c12_skdw;
  real_T *c12_b_songkai;
  real_T *c12_b_kaigai;
  real_T *c12_b_suoding;
  real_T *c12_b_jiesuo;
  real_T *c12_skhx;
  real_T *c12_kghx;
  real_T *c12_yjhx;
  real_T *c12_gghx;
  real_T *c12_kgzhiling1;
  real_T *c12_kgzhiling2;
  real_T *c12_ggzhiling1;
  real_T *c12_ggzhiling2;
  real_T *c12_skt;
  real_T *c12_kgt;
  real_T *c12_sdt;
  real_T *c12_jst;
  real_T *c12_ggt;
  real_T *c12_b_guangai;
  real_T *c12_b_yajin;
  real_T *c12_yjt;
  real_T *c12_skyichang;
  real_T *c12_kgyichang;
  real_T *c12_sdyichang;
  real_T *c12_jsyichang;
  real_T *c12_jieshu;
  real_T *c12_ggyichang;
  real_T *c12_yjyichang;
  uint8_T *c12_temporalCounter_i1;
  uint8_T *c12_temporalCounter_i2;
  uint8_T *c12_temporalCounter_i3;
  uint8_T *c12_temporalCounter_i4;
  uint8_T *c12_temporalCounter_i5;
  uint8_T *c12_temporalCounter_i6;
} SFc12_kaiguangaiInstanceStruct;

#endif                                 /*typedef_SFc12_kaiguangaiInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c12_kaiguangai_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c12_kaiguangai_get_check_sum(mxArray *plhs[]);
extern void c12_kaiguangai_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
