#ifndef __c3_ce_h__
#define __c3_ce_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc3_ceInstanceStruct
#define typedef_SFc3_ceInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c3_dataWrittenToVector[6];
  uint8_T c3_doSetSimStateSideEffects;
  const mxArray *c3_setSimStateSideEffectsInfo;
  int32_T *c3_sfEvent;
  uint8_T *c3_is_active_c3_ce;
  uint8_T *c3_is_c3_ce;
  uint8_T *c3_is_fby;
  uint8_T *c3_is_exp_fq;
  uint8_T *c3_is_by;
  uint8_T *c3_is_fqyc;
  real_T *c3_zidong;
  real_T *c3_shoudong;
  real_T *c3_exp_start;
  real_T *c3_exp_jt;
  real_T *c3_feibaoya;
  real_T *c3_b_by;
  real_T *c3_b_fqyc;
  real_T *c3_bdqy;
  real_T *c3_dcf_1;
  real_T *c3_dcf_2;
  real_T *c3_kbhxz;
  real_T *c3_fby_qfsd;
  real_T *c3_qfkk;
  real_T *c3_trigger;
  real_T *c3_fq;
  real_T *c3_rqfq;
  real_T *c3_qfq;
  real_T *c3_sj;
  real_T *c3_rqyl;
  real_T *c3_qffk;
  real_T *c3_fby_qfkk;
  real_T *c3_b_exp_ready;
} SFc3_ceInstanceStruct;

#endif                                 /*typedef_SFc3_ceInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c3_ce_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c3_ce_get_check_sum(mxArray *plhs[]);
extern void c3_ce_method_dispatcher(SimStruct *S, int_T method, void *data);

#endif
