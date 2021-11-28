#ifndef __c1_Copy_3_of_canceshi_h__
#define __c1_Copy_3_of_canceshi_h__

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
} SFc1_Copy_3_of_canceshiInstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c1_Copy_3_of_canceshi_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c1_Copy_3_of_canceshi_get_check_sum(mxArray *plhs[]);
extern void c1_Copy_3_of_canceshi_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
