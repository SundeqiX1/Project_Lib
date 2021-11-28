#ifndef __c3_kaiguangai1108_h__
#define __c3_kaiguangai1108_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc3_kaiguangai1108InstanceStruct
#define typedef_SFc3_kaiguangai1108InstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c3_dataWrittenToVector[27];
  uint8_T c3_doSetSimStateSideEffects;
  const mxArray *c3_setSimStateSideEffectsInfo;
  int32_T *c3_sfEvent;
  uint8_T *c3_is_active_c3_kaiguangai1108;
  uint8_T *c3_is_c3_kaiguangai1108;
  uint8_T *c3_is_zidong;
  boolean_T *c3_b_start;
  real_T *c3_kgdw1;
  real_T *c3_kgdw2;
  real_T *c3_skhx;
  real_T *c3_kghx;
  real_T *c3_kgzhiling1;
  real_T *c3_kgzhiling2;
  real_T *c3_yjhx;
  real_T *c3_gghx;
  real_T *c3_ggzhiling1;
  real_T *c3_ggzhiling2;
  real_T *c3_skt;
  real_T *c3_kgt;
  real_T *c3_sdt;
  real_T *c3_jst;
  real_T *c3_ggt;
  real_T *c3_yjt;
  real_T *c3_ggdw1;
  real_T *c3_ggdw2;
  real_T *c3_kghc;
  real_T *c3_gghc;
  real_T *c3_sddw;
  real_T *c3_yjdw;
  real_T *c3_skdw;
  real_T *c3_jsdw;
  real_T *c3_t1;
  real_T *c3_t3;
  real_T *c3_t5;
  real_T *c3_t7;
  real_T *c3_t9;
  real_T *c3_t11;
  real_T *c3_t;
  real_T *c3_t2;
  real_T *c3_t4;
  real_T *c3_t6;
  real_T *c3_t8;
  real_T *c3_shedingcishu;
  real_T *c3_yikaicishu;
  real_T *c3_skyichang;
  real_T *c3_kgyichang;
  real_T *c3_sdyichang;
  real_T *c3_jsyichang;
  real_T *c3_jieshu;
  real_T *c3_t10;
  real_T *c3_ggyichang;
  real_T *c3_yjyichang;
  uint16_T *c3_temporalCounter_i1;
} SFc3_kaiguangai1108InstanceStruct;

#endif                                 /*typedef_SFc3_kaiguangai1108InstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c3_kaiguangai1108_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c3_kaiguangai1108_get_check_sum(mxArray *plhs[]);
extern void c3_kaiguangai1108_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
