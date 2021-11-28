#ifndef __c6_aaa_h__
#define __c6_aaa_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc6_aaaInstanceStruct
#define typedef_SFc6_aaaInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c6_dataWrittenToVector[27];
  uint8_T c6_doSetSimStateSideEffects;
  const mxArray *c6_setSimStateSideEffectsInfo;
  int32_T *c6_sfEvent;
  uint8_T *c6_is_active_c6_aaa;
  uint8_T *c6_is_c6_aaa;
  uint8_T *c6_is_zidong;
  boolean_T *c6_b_start;
  real_T *c6_kgdw1;
  real_T *c6_kgdw2;
  real_T *c6_skhx;
  real_T *c6_kghx;
  real_T *c6_kgzhiling1;
  real_T *c6_kgzhiling2;
  real_T *c6_yjhx;
  real_T *c6_gghx;
  real_T *c6_ggzhiling1;
  real_T *c6_ggzhiling2;
  real_T *c6_skt;
  real_T *c6_kgt;
  real_T *c6_sdt;
  real_T *c6_jst;
  real_T *c6_ggt;
  real_T *c6_yjt;
  real_T *c6_ggdw1;
  real_T *c6_ggdw2;
  real_T *c6_kghc;
  real_T *c6_gghc;
  real_T *c6_sddw;
  real_T *c6_yjdw;
  real_T *c6_skdw;
  real_T *c6_jsdw;
  real_T *c6_t1;
  real_T *c6_t3;
  real_T *c6_t5;
  real_T *c6_t7;
  real_T *c6_t9;
  real_T *c6_t11;
  real_T *c6_t;
  real_T *c6_t2;
  real_T *c6_t4;
  real_T *c6_t6;
  real_T *c6_t8;
  real_T *c6_shedingcishu;
  real_T *c6_yikaicishu;
  real_T *c6_skyichang;
  real_T *c6_kgyichang;
  real_T *c6_sdyichang;
  real_T *c6_jsyichang;
  real_T *c6_jieshu;
  real_T *c6_t10;
  real_T *c6_ggyichang;
  real_T *c6_yjyichang;
  uint16_T *c6_temporalCounter_i1;
} SFc6_aaaInstanceStruct;

#endif                                 /*typedef_SFc6_aaaInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c6_aaa_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c6_aaa_get_check_sum(mxArray *plhs[]);
extern void c6_aaa_method_dispatcher(SimStruct *S, int_T method, void *data);

#endif
