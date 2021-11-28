#ifndef __c4_gggg_h__
#define __c4_gggg_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc4_ggggInstanceStruct
#define typedef_SFc4_ggggInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c4_dataWrittenToVector[2];
  uint8_T c4_doSetSimStateSideEffects;
  const mxArray *c4_setSimStateSideEffectsInfo;
  int32_T *c4_sfEvent;
  uint8_T *c4_is_active_c4_gggg;
  uint8_T *c4_is_c4_gggg;
  uint8_T *c4_is_route;
  real_T *c4_route1;
  real_T *c4_route2;
  uint8_T *c4_temporalCounter_i1;
} SFc4_ggggInstanceStruct;

#endif                                 /*typedef_SFc4_ggggInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c4_gggg_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c4_gggg_get_check_sum(mxArray *plhs[]);
extern void c4_gggg_method_dispatcher(SimStruct *S, int_T method, void *data);

#endif
