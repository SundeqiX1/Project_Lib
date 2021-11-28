#ifndef __c1_aaa_h__
#define __c1_aaa_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc1_aaaInstanceStruct
#define typedef_SFc1_aaaInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c1_dataWrittenToVector[27];
  uint8_T c1_doSetSimStateSideEffects;
  const mxArray *c1_setSimStateSideEffectsInfo;
  int32_T *c1_sfEvent;
  uint8_T *c1_is_active_c1_aaa;
  uint8_T *c1_is_c1_aaa;
  uint8_T *c1_is_zidong;
  boolean_T *c1_b_start;
  real_T *c1_kgdw1;
  real_T *c1_kgdw2;
  real_T *c1_skhx;
  real_T *c1_kghx;
  real_T *c1_kgzhiling1;
  real_T *c1_kgzhiling2;
  real_T *c1_yjhx;
  real_T *c1_gghx;
  real_T *c1_ggzhiling1;
  real_T *c1_ggzhiling2;
  real_T *c1_skt;
  real_T *c1_kgt;
  real_T *c1_sdt;
  real_T *c1_jst;
  real_T *c1_ggt;
  real_T *c1_yjt;
  real_T *c1_ggdw1;
  real_T *c1_ggdw2;
  real_T *c1_kghc;
  real_T *c1_gghc;
  real_T *c1_sddw;
  real_T *c1_yjdw;
  real_T *c1_skdw;
  real_T *c1_jsdw;
  real_T *c1_t1;
  real_T *c1_t3;
  real_T *c1_t5;
  real_T *c1_t7;
  real_T *c1_t9;
  real_T *c1_t11;
  real_T *c1_t;
  real_T *c1_t2;
  real_T *c1_t4;
  real_T *c1_t6;
  real_T *c1_t8;
  real_T *c1_shedingcishu;
  real_T *c1_yikaicishu;
  real_T *c1_skyichang;
  real_T *c1_kgyichang;
  real_T *c1_sdyichang;
  real_T *c1_jsyichang;
  real_T *c1_jieshu;
  real_T *c1_t10;
  real_T *c1_ggyichang;
  real_T *c1_yjyichang;
  uint16_T *c1_temporalCounter_i1;
} SFc1_aaaInstanceStruct;

#endif                                 /*typedef_SFc1_aaaInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c1_aaa_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c1_aaa_get_check_sum(mxArray *plhs[]);
extern void c1_aaa_method_dispatcher(SimStruct *S, int_T method, void *data);

#endif
