#ifndef __c2_kaiguangai_h__
#define __c2_kaiguangai_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc2_kaiguangaiInstanceStruct
#define typedef_SFc2_kaiguangaiInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c2_dataWrittenToVector[27];
  uint8_T c2_doSetSimStateSideEffects;
  const mxArray *c2_setSimStateSideEffectsInfo;
  int32_T *c2_sfEvent;
  uint8_T *c2_is_active_c2_kaiguangai;
  uint8_T *c2_is_c2_kaiguangai;
  uint8_T *c2_is_zidong;
  boolean_T *c2_b_start;
  real_T *c2_kgdw1;
  real_T *c2_kgdw2;
  real_T *c2_skhx;
  real_T *c2_kghx;
  real_T *c2_kgzhiling1;
  real_T *c2_kgzhiling2;
  real_T *c2_yjhx;
  real_T *c2_gghx;
  real_T *c2_ggzhiling1;
  real_T *c2_ggzhiling2;
  real_T *c2_skt;
  real_T *c2_kgt;
  real_T *c2_sdt;
  real_T *c2_jst;
  real_T *c2_ggt;
  real_T *c2_yjt;
  real_T *c2_ggdw1;
  real_T *c2_ggdw2;
  real_T *c2_kghc;
  real_T *c2_gghc;
  real_T *c2_sddw;
  real_T *c2_yjdw;
  real_T *c2_skdw;
  real_T *c2_jsdw;
  real_T *c2_t1;
  real_T *c2_t3;
  real_T *c2_t5;
  real_T *c2_t7;
  real_T *c2_t9;
  real_T *c2_t11;
  real_T *c2_t;
  real_T *c2_t2;
  real_T *c2_t4;
  real_T *c2_t6;
  real_T *c2_t8;
  real_T *c2_shedingcishu;
  real_T *c2_yikaicishu;
  real_T *c2_skyichang;
  real_T *c2_kgyichang;
  real_T *c2_sdyichang;
  real_T *c2_jsyichang;
  real_T *c2_jieshu;
  real_T *c2_t10;
  real_T *c2_ggyichang;
  real_T *c2_yjyichang;
  uint16_T *c2_temporalCounter_i1;
} SFc2_kaiguangaiInstanceStruct;

#endif                                 /*typedef_SFc2_kaiguangaiInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c2_kaiguangai_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c2_kaiguangai_get_check_sum(mxArray *plhs[]);
extern void c2_kaiguangai_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
