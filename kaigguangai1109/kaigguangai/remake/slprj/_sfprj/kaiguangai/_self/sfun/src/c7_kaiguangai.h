#ifndef __c7_kaiguangai_h__
#define __c7_kaiguangai_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc7_kaiguangaiInstanceStruct
#define typedef_SFc7_kaiguangaiInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c7_dataWrittenToVector[27];
  uint8_T c7_doSetSimStateSideEffects;
  const mxArray *c7_setSimStateSideEffectsInfo;
  int32_T *c7_sfEvent;
  uint8_T *c7_is_active_c7_kaiguangai;
  uint8_T *c7_is_c7_kaiguangai;
  uint8_T *c7_is_zidong;
  boolean_T *c7_b_start;
  real_T *c7_kgdw1;
  real_T *c7_kgdw2;
  real_T *c7_skhx;
  real_T *c7_kghx;
  real_T *c7_kgzhiling1;
  real_T *c7_kgzhiling2;
  real_T *c7_yjhx;
  real_T *c7_gghx;
  real_T *c7_ggzhiling1;
  real_T *c7_ggzhiling2;
  real_T *c7_skt;
  real_T *c7_kgt;
  real_T *c7_sdt;
  real_T *c7_jst;
  real_T *c7_ggt;
  real_T *c7_yjt;
  real_T *c7_ggdw1;
  real_T *c7_ggdw2;
  real_T *c7_kghc;
  real_T *c7_gghc;
  real_T *c7_sddw;
  real_T *c7_yjdw;
  real_T *c7_skdw;
  real_T *c7_jsdw;
  real_T *c7_t1;
  real_T *c7_t3;
  real_T *c7_t5;
  real_T *c7_t7;
  real_T *c7_t9;
  real_T *c7_t11;
  real_T *c7_t;
  real_T *c7_t2;
  real_T *c7_t4;
  real_T *c7_t6;
  real_T *c7_t8;
  real_T *c7_shedingcishu;
  real_T *c7_yikaicishu;
  real_T *c7_skyichang;
  real_T *c7_kgyichang;
  real_T *c7_sdyichang;
  real_T *c7_jsyichang;
  real_T *c7_jieshu;
  real_T *c7_t10;
  real_T *c7_ggyichang;
  real_T *c7_yjyichang;
  uint16_T *c7_temporalCounter_i1;
} SFc7_kaiguangaiInstanceStruct;

#endif                                 /*typedef_SFc7_kaiguangaiInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c7_kaiguangai_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c7_kaiguangai_get_check_sum(mxArray *plhs[]);
extern void c7_kaiguangai_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
