#ifndef __c24_aaa_h__
#define __c24_aaa_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc24_aaaInstanceStruct
#define typedef_SFc24_aaaInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  uint8_T c24_doSetSimStateSideEffects;
  const mxArray *c24_setSimStateSideEffectsInfo;
  int32_T *c24_sfEvent;
  uint8_T *c24_is_active_c24_aaa;
  uint8_T *c24_is_c24_aaa;
  uint8_T *c24_is_kaigai;
  uint8_T *c24_is_active_kaigai;
  uint8_T *c24_is_guangai;
  uint8_T *c24_is_active_guangai;
  uint8_T *c24_is_songkai;
  uint8_T *c24_is_active_songkai;
  uint8_T *c24_is_yajin;
  uint8_T *c24_is_active_yajin;
  uint8_T *c24_is_suoding;
  uint8_T *c24_is_active_suoding;
  uint8_T *c24_is_jiesuo;
  uint8_T *c24_is_active_jiesuo;
  real_T *c24_skhx;
  real_T *c24_kghx;
  real_T *c24_tiaoshi;
  real_T *c24_songkai;
  real_T *c24_kaigai;
  real_T *c24_suoding;
  real_T *c24_jiesuo;
  real_T *c24_guangai;
  real_T *c24_yajin;
  real_T *c24_jiting;
  real_T *c24_yjhx;
  real_T *c24_gghx;
  uint16_T *c24_temporalCounter_i1;
} SFc24_aaaInstanceStruct;

#endif                                 /*typedef_SFc24_aaaInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c24_aaa_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c24_aaa_get_check_sum(mxArray *plhs[]);
extern void c24_aaa_method_dispatcher(SimStruct *S, int_T method, void *data);

#endif
