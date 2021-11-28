#ifndef __c22_kaiguangai_h__
#define __c22_kaiguangai_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc22_kaiguangaiInstanceStruct
#define typedef_SFc22_kaiguangaiInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  uint8_T c22_doSetSimStateSideEffects;
  const mxArray *c22_setSimStateSideEffectsInfo;
  int32_T *c22_sfEvent;
  uint8_T *c22_is_active_c22_kaiguangai;
  uint8_T *c22_is_c22_kaiguangai;
  uint8_T *c22_is_kaigai;
  uint8_T *c22_is_active_kaigai;
  uint8_T *c22_is_guangai;
  uint8_T *c22_is_active_guangai;
  uint8_T *c22_is_songkai;
  uint8_T *c22_is_active_songkai;
  uint8_T *c22_is_yajin;
  uint8_T *c22_is_active_yajin;
  uint8_T *c22_is_suoding;
  uint8_T *c22_is_active_suoding;
  uint8_T *c22_is_jiesuo;
  uint8_T *c22_is_active_jiesuo;
  real_T *c22_skhx;
  real_T *c22_kghx;
  real_T *c22_tiaoshi;
  real_T *c22_songkai;
  real_T *c22_kaigai;
  real_T *c22_suoding;
  real_T *c22_jiesuo;
  real_T *c22_guangai;
  real_T *c22_yajin;
  real_T *c22_jiting;
  real_T *c22_yjhx;
  real_T *c22_gghx;
  uint16_T *c22_temporalCounter_i1;
} SFc22_kaiguangaiInstanceStruct;

#endif                                 /*typedef_SFc22_kaiguangaiInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c22_kaiguangai_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c22_kaiguangai_get_check_sum(mxArray *plhs[]);
extern void c22_kaiguangai_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
