#ifndef __c1_canceshi1_h__
#define __c1_canceshi1_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  const mxArray *c1_setSimStateSideEffectsInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  uint8_T c1_doSetSimStateSideEffects;
  ChartInfoStruct chartInfo;
} SFc1_canceshi1InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c1_canceshi1_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c1_canceshi1_get_check_sum(mxArray *plhs[]);
extern void c1_canceshi1_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
