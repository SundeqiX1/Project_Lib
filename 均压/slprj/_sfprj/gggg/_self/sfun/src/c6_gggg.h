#ifndef __c6_gggg_h__
#define __c6_gggg_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc6_ggggInstanceStruct
#define typedef_SFc6_ggggInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c6_dataWrittenToVector[3];
  uint8_T c6_doSetSimStateSideEffects;
  const mxArray *c6_setSimStateSideEffectsInfo;
  int32_T *c6_sfEvent;
  uint8_T *c6_is_active_c6_gggg;
  uint8_T *c6_is_c6_gggg;
  uint8_T *c6_is_enable1;
  uint8_T *c6_is_active_enable1;
  uint8_T *c6_is_enable2;
  uint8_T *c6_is_active_enable2;
  uint8_T *c6_is_enable3;
  uint8_T *c6_is_active_enable3;
  boolean_T *c6_xuanjindaowei;
  boolean_T *c6_yuxuansongdaowei;
  boolean_T *c6_xuansongdaowei;
  real_T *c6_xuanjin_enable;
  real_T *c6_yuxuansong_enable;
  real_T *c6_xuansong_enable;
  real_T *c6_xuanjinmingling;
  real_T *c6_yuxuansongmingling;
  real_T *c6_xuansongmingling;
} SFc6_ggggInstanceStruct;

#endif                                 /*typedef_SFc6_ggggInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c6_gggg_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c6_gggg_get_check_sum(mxArray *plhs[]);
extern void c6_gggg_method_dispatcher(SimStruct *S, int_T method, void *data);

#endif
