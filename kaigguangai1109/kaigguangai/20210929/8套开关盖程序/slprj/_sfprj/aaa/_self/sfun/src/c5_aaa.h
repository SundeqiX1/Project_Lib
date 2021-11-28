#ifndef __c5_aaa_h__
#define __c5_aaa_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc5_aaaInstanceStruct
#define typedef_SFc5_aaaInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c5_dataWrittenToVector[27];
  uint8_T c5_doSetSimStateSideEffects;
  const mxArray *c5_setSimStateSideEffectsInfo;
  int32_T *c5_sfEvent;
  uint8_T *c5_is_active_c5_aaa;
  uint8_T *c5_is_c5_aaa;
  uint8_T *c5_is_zidong;
  boolean_T *c5_b_start;
  real_T *c5_kgdw1;
  real_T *c5_kgdw2;
  real_T *c5_skhx;
  real_T *c5_kghx;
  real_T *c5_kgzhiling1;
  real_T *c5_kgzhiling2;
  real_T *c5_yjhx;
  real_T *c5_gghx;
  real_T *c5_ggzhiling1;
  real_T *c5_ggzhiling2;
  real_T *c5_skt;
  real_T *c5_kgt;
  real_T *c5_sdt;
  real_T *c5_jst;
  real_T *c5_ggt;
  real_T *c5_yjt;
  real_T *c5_ggdw1;
  real_T *c5_ggdw2;
  real_T *c5_kghc;
  real_T *c5_gghc;
  real_T *c5_sddw;
  real_T *c5_yjdw;
  real_T *c5_skdw;
  real_T *c5_jsdw;
  real_T *c5_t1;
  real_T *c5_t3;
  real_T *c5_t5;
  real_T *c5_t7;
  real_T *c5_t9;
  real_T *c5_t11;
  real_T *c5_t;
  real_T *c5_t2;
  real_T *c5_t4;
  real_T *c5_t6;
  real_T *c5_t8;
  real_T *c5_shedingcishu;
  real_T *c5_yikaicishu;
  real_T *c5_skyichang;
  real_T *c5_kgyichang;
  real_T *c5_sdyichang;
  real_T *c5_jsyichang;
  real_T *c5_jieshu;
  real_T *c5_t10;
  real_T *c5_ggyichang;
  real_T *c5_yjyichang;
  uint16_T *c5_temporalCounter_i1;
} SFc5_aaaInstanceStruct;

#endif                                 /*typedef_SFc5_aaaInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c5_aaa_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c5_aaa_get_check_sum(mxArray *plhs[]);
extern void c5_aaa_method_dispatcher(SimStruct *S, int_T method, void *data);

#endif
