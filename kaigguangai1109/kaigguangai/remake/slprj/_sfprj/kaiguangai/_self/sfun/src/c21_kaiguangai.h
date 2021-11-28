#ifndef __c21_kaiguangai_h__
#define __c21_kaiguangai_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc21_kaiguangaiInstanceStruct
#define typedef_SFc21_kaiguangaiInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  uint8_T c21_doSetSimStateSideEffects;
  const mxArray *c21_setSimStateSideEffectsInfo;
  int32_T *c21_sfEvent;
  uint8_T *c21_is_active_c21_kaiguangai;
  uint8_T *c21_is_c21_kaiguangai;
  uint8_T *c21_is_kaigai;
  uint8_T *c21_is_active_kaigai;
  uint8_T *c21_is_guangai;
  uint8_T *c21_is_active_guangai;
  uint8_T *c21_is_songkai;
  uint8_T *c21_is_active_songkai;
  uint8_T *c21_is_yajin;
  uint8_T *c21_is_active_yajin;
  uint8_T *c21_is_suoding;
  uint8_T *c21_is_active_suoding;
  uint8_T *c21_is_jiesuo;
  uint8_T *c21_is_active_jiesuo;
  real_T *c21_skhx;
  real_T *c21_kghx;
  real_T *c21_tiaoshi;
  real_T *c21_songkai;
  real_T *c21_kaigai;
  real_T *c21_suoding;
  real_T *c21_jiesuo;
  real_T *c21_guangai;
  real_T *c21_yajin;
  real_T *c21_jiting;
  real_T *c21_yjhx;
  real_T *c21_gghx;
  uint16_T *c21_temporalCounter_i1;
} SFc21_kaiguangaiInstanceStruct;

#endif                                 /*typedef_SFc21_kaiguangaiInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c21_kaiguangai_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c21_kaiguangai_get_check_sum(mxArray *plhs[]);
extern void c21_kaiguangai_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
