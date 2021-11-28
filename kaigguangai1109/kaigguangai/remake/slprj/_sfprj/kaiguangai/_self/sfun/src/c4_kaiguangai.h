#ifndef __c4_kaiguangai_h__
#define __c4_kaiguangai_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc4_kaiguangaiInstanceStruct
#define typedef_SFc4_kaiguangaiInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c4_dataWrittenToVector[27];
  uint8_T c4_doSetSimStateSideEffects;
  const mxArray *c4_setSimStateSideEffectsInfo;
  int32_T *c4_sfEvent;
  uint8_T *c4_is_active_c4_kaiguangai;
  uint8_T *c4_is_c4_kaiguangai;
  uint8_T *c4_is_zidong;
  boolean_T *c4_b_start;
  real_T *c4_kgdw1;
  real_T *c4_kgdw2;
  real_T *c4_skhx;
  real_T *c4_kghx;
  real_T *c4_kgzhiling1;
  real_T *c4_kgzhiling2;
  real_T *c4_yjhx;
  real_T *c4_gghx;
  real_T *c4_ggzhiling1;
  real_T *c4_ggzhiling2;
  real_T *c4_skt;
  real_T *c4_kgt;
  real_T *c4_sdt;
  real_T *c4_jst;
  real_T *c4_ggt;
  real_T *c4_yjt;
  real_T *c4_ggdw1;
  real_T *c4_ggdw2;
  real_T *c4_kghc;
  real_T *c4_gghc;
  real_T *c4_sddw;
  real_T *c4_yjdw;
  real_T *c4_skdw;
  real_T *c4_jsdw;
  real_T *c4_t1;
  real_T *c4_t3;
  real_T *c4_t5;
  real_T *c4_t7;
  real_T *c4_t9;
  real_T *c4_t11;
  real_T *c4_t;
  real_T *c4_t2;
  real_T *c4_t4;
  real_T *c4_t6;
  real_T *c4_t8;
  real_T *c4_shedingcishu;
  real_T *c4_yikaicishu;
  real_T *c4_skyichang;
  real_T *c4_kgyichang;
  real_T *c4_sdyichang;
  real_T *c4_jsyichang;
  real_T *c4_jieshu;
  real_T *c4_t10;
  real_T *c4_ggyichang;
  real_T *c4_yjyichang;
  uint16_T *c4_temporalCounter_i1;
} SFc4_kaiguangaiInstanceStruct;

#endif                                 /*typedef_SFc4_kaiguangaiInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c4_kaiguangai_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c4_kaiguangai_get_check_sum(mxArray *plhs[]);
extern void c4_kaiguangai_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
