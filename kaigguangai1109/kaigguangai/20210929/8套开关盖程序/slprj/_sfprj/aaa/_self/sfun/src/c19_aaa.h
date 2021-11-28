#ifndef __c19_aaa_h__
#define __c19_aaa_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc19_aaaInstanceStruct
#define typedef_SFc19_aaaInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  uint8_T c19_doSetSimStateSideEffects;
  const mxArray *c19_setSimStateSideEffectsInfo;
  int32_T *c19_sfEvent;
  uint8_T *c19_is_active_c19_aaa;
  uint8_T *c19_is_c19_aaa;
  uint8_T *c19_is_kaigai;
  uint8_T *c19_is_active_kaigai;
  uint8_T *c19_is_guangai;
  uint8_T *c19_is_active_guangai;
  uint8_T *c19_is_songkai;
  uint8_T *c19_is_active_songkai;
  uint8_T *c19_is_yajin;
  uint8_T *c19_is_active_yajin;
  uint8_T *c19_is_suoding;
  uint8_T *c19_is_active_suoding;
  uint8_T *c19_is_jiesuo;
  uint8_T *c19_is_active_jiesuo;
  real_T *c19_skhx;
  real_T *c19_kghx;
  real_T *c19_tiaoshi;
  real_T *c19_songkai;
  real_T *c19_kaigai;
  real_T *c19_suoding;
  real_T *c19_jiesuo;
  real_T *c19_guangai;
  real_T *c19_yajin;
  real_T *c19_jiting;
  real_T *c19_yjhx;
  real_T *c19_gghx;
  uint16_T *c19_temporalCounter_i1;
} SFc19_aaaInstanceStruct;

#endif                                 /*typedef_SFc19_aaaInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c19_aaa_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c19_aaa_get_check_sum(mxArray *plhs[]);
extern void c19_aaa_method_dispatcher(SimStruct *S, int_T method, void *data);

#endif
