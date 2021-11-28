#ifndef __c23_aaa_h__
#define __c23_aaa_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc23_aaaInstanceStruct
#define typedef_SFc23_aaaInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  uint8_T c23_doSetSimStateSideEffects;
  const mxArray *c23_setSimStateSideEffectsInfo;
  int32_T *c23_sfEvent;
  uint8_T *c23_is_active_c23_aaa;
  uint8_T *c23_is_c23_aaa;
  uint8_T *c23_is_kaigai;
  uint8_T *c23_is_active_kaigai;
  uint8_T *c23_is_guangai;
  uint8_T *c23_is_active_guangai;
  uint8_T *c23_is_songkai;
  uint8_T *c23_is_active_songkai;
  uint8_T *c23_is_yajin;
  uint8_T *c23_is_active_yajin;
  uint8_T *c23_is_suoding;
  uint8_T *c23_is_active_suoding;
  uint8_T *c23_is_jiesuo;
  uint8_T *c23_is_active_jiesuo;
  real_T *c23_skhx;
  real_T *c23_kghx;
  real_T *c23_tiaoshi;
  real_T *c23_songkai;
  real_T *c23_kaigai;
  real_T *c23_suoding;
  real_T *c23_jiesuo;
  real_T *c23_guangai;
  real_T *c23_yajin;
  real_T *c23_jiting;
  real_T *c23_yjhx;
  real_T *c23_gghx;
  uint16_T *c23_temporalCounter_i1;
} SFc23_aaaInstanceStruct;

#endif                                 /*typedef_SFc23_aaaInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c23_aaa_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c23_aaa_get_check_sum(mxArray *plhs[]);
extern void c23_aaa_method_dispatcher(SimStruct *S, int_T method, void *data);

#endif
