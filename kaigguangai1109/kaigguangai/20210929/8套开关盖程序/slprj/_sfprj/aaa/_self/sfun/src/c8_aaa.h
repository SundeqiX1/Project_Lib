#ifndef __c8_aaa_h__
#define __c8_aaa_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc8_aaaInstanceStruct
#define typedef_SFc8_aaaInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c8_dataWrittenToVector[27];
  uint8_T c8_doSetSimStateSideEffects;
  const mxArray *c8_setSimStateSideEffectsInfo;
  int32_T *c8_sfEvent;
  uint8_T *c8_is_active_c8_aaa;
  uint8_T *c8_is_c8_aaa;
  uint8_T *c8_is_zidong;
  boolean_T *c8_b_start;
  real_T *c8_kgdw1;
  real_T *c8_kgdw2;
  real_T *c8_skhx;
  real_T *c8_kghx;
  real_T *c8_kgzhiling1;
  real_T *c8_kgzhiling2;
  real_T *c8_yjhx;
  real_T *c8_gghx;
  real_T *c8_ggzhiling1;
  real_T *c8_ggzhiling2;
  real_T *c8_skt;
  real_T *c8_kgt;
  real_T *c8_sdt;
  real_T *c8_jst;
  real_T *c8_ggt;
  real_T *c8_yjt;
  real_T *c8_ggdw1;
  real_T *c8_ggdw2;
  real_T *c8_kghc;
  real_T *c8_gghc;
  real_T *c8_sddw;
  real_T *c8_yjdw;
  real_T *c8_skdw;
  real_T *c8_jsdw;
  real_T *c8_t1;
  real_T *c8_t3;
  real_T *c8_t5;
  real_T *c8_t7;
  real_T *c8_t9;
  real_T *c8_t11;
  real_T *c8_t;
  real_T *c8_t2;
  real_T *c8_t4;
  real_T *c8_t6;
  real_T *c8_t8;
  real_T *c8_shedingcishu;
  real_T *c8_yikaicishu;
  real_T *c8_skyichang;
  real_T *c8_kgyichang;
  real_T *c8_sdyichang;
  real_T *c8_jsyichang;
  real_T *c8_jieshu;
  real_T *c8_t10;
  real_T *c8_ggyichang;
  real_T *c8_yjyichang;
  uint16_T *c8_temporalCounter_i1;
} SFc8_aaaInstanceStruct;

#endif                                 /*typedef_SFc8_aaaInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c8_aaa_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c8_aaa_get_check_sum(mxArray *plhs[]);
extern void c8_aaa_method_dispatcher(SimStruct *S, int_T method, void *data);

#endif
