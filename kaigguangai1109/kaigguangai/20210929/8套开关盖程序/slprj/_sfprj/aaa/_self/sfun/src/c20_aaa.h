#ifndef __c20_aaa_h__
#define __c20_aaa_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc20_aaaInstanceStruct
#define typedef_SFc20_aaaInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  uint8_T c20_doSetSimStateSideEffects;
  const mxArray *c20_setSimStateSideEffectsInfo;
  int32_T *c20_sfEvent;
  uint8_T *c20_is_active_c20_aaa;
  uint8_T *c20_is_c20_aaa;
  uint8_T *c20_is_kaigai;
  uint8_T *c20_is_active_kaigai;
  uint8_T *c20_is_guangai;
  uint8_T *c20_is_active_guangai;
  uint8_T *c20_is_songkai;
  uint8_T *c20_is_active_songkai;
  uint8_T *c20_is_yajin;
  uint8_T *c20_is_active_yajin;
  uint8_T *c20_is_suoding;
  uint8_T *c20_is_active_suoding;
  uint8_T *c20_is_jiesuo;
  uint8_T *c20_is_active_jiesuo;
  real_T *c20_skhx;
  real_T *c20_kghx;
  real_T *c20_tiaoshi;
  real_T *c20_songkai;
  real_T *c20_kaigai;
  real_T *c20_suoding;
  real_T *c20_jiesuo;
  real_T *c20_guangai;
  real_T *c20_yajin;
  real_T *c20_jiting;
  real_T *c20_yjhx;
  real_T *c20_gghx;
  uint16_T *c20_temporalCounter_i1;
} SFc20_aaaInstanceStruct;

#endif                                 /*typedef_SFc20_aaaInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c20_aaa_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c20_aaa_get_check_sum(mxArray *plhs[]);
extern void c20_aaa_method_dispatcher(SimStruct *S, int_T method, void *data);

#endif
