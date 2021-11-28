/* Include files */

#include "blascompat32.h"
#include "Copy_3_of_canceshi_sfun.h"
#include "c2_Copy_3_of_canceshi.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "Copy_3_of_canceshi_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c2_IN_NO_ACTIVE_CHILD          (0U)
#define c2_IN_c                        (1U)
#define c2_IN_start                    (2U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c2_Copy_3_of_canceshi
  (SFc2_Copy_3_of_canceshiInstanceStruct *chartInstance);
static void initialize_params_c2_Copy_3_of_canceshi
  (SFc2_Copy_3_of_canceshiInstanceStruct *chartInstance);
static void enable_c2_Copy_3_of_canceshi(SFc2_Copy_3_of_canceshiInstanceStruct
  *chartInstance);
static void disable_c2_Copy_3_of_canceshi(SFc2_Copy_3_of_canceshiInstanceStruct *
  chartInstance);
static void c2_update_debugger_state_c2_Copy_3_of_canceshi
  (SFc2_Copy_3_of_canceshiInstanceStruct *chartInstance);
static void ext_mode_exec_c2_Copy_3_of_canceshi
  (SFc2_Copy_3_of_canceshiInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c2_Copy_3_of_canceshi
  (SFc2_Copy_3_of_canceshiInstanceStruct *chartInstance);
static void set_sim_state_c2_Copy_3_of_canceshi
  (SFc2_Copy_3_of_canceshiInstanceStruct *chartInstance, const mxArray *c2_st);
static void c2_set_sim_state_side_effects_c2_Copy_3_of_canceshi
  (SFc2_Copy_3_of_canceshiInstanceStruct *chartInstance);
static void finalize_c2_Copy_3_of_canceshi(SFc2_Copy_3_of_canceshiInstanceStruct
  *chartInstance);
static void sf_c2_Copy_3_of_canceshi(SFc2_Copy_3_of_canceshiInstanceStruct
  *chartInstance);
static void compInitSubchartSimstructsFcn_c2_Copy_3_of_canceshi
  (SFc2_Copy_3_of_canceshiInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c2_machineNumber, uint32_T
  c2_chartNumber);
static const mxArray *c2_sf_marshall(void *chartInstanceVoid, void *c2_u);
static const mxArray *c2_b_sf_marshall(void *chartInstanceVoid, void *c2_u);
static real_T c2_emlrt_marshallIn(SFc2_Copy_3_of_canceshiInstanceStruct
  *chartInstance, const mxArray *c2_switch, const char_T *c2_name);
static uint8_T c2_b_emlrt_marshallIn(SFc2_Copy_3_of_canceshiInstanceStruct
  *chartInstance, const mxArray *c2_is_active_c2_Copy_3_of_canceshi, const
  char_T *c2_name);
static const mxArray *c2_c_emlrt_marshallIn
  (SFc2_Copy_3_of_canceshiInstanceStruct *chartInstance, const mxArray
   *c2_b_setSimStateSideEffectsInfo, const char_T *c2_name);
static void init_dsm_address_info(SFc2_Copy_3_of_canceshiInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c2_Copy_3_of_canceshi
  (SFc2_Copy_3_of_canceshiInstanceStruct *chartInstance)
{
  uint8_T *c2_is_active_c2_Copy_3_of_canceshi;
  uint8_T *c2_is_c2_Copy_3_of_canceshi;
  real_T *c2_switch;
  c2_switch = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c2_is_c2_Copy_3_of_canceshi = (uint8_T *)ssGetDWork(chartInstance->S, 2);
  c2_is_active_c2_Copy_3_of_canceshi = (uint8_T *)ssGetDWork(chartInstance->S, 1);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c2_doSetSimStateSideEffects = 0U;
  chartInstance->c2_setSimStateSideEffectsInfo = NULL;
  *c2_is_active_c2_Copy_3_of_canceshi = 0U;
  *c2_is_c2_Copy_3_of_canceshi = 0U;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c2_switch = 0.0;
  }
}

static void initialize_params_c2_Copy_3_of_canceshi
  (SFc2_Copy_3_of_canceshiInstanceStruct *chartInstance)
{
}

static void enable_c2_Copy_3_of_canceshi(SFc2_Copy_3_of_canceshiInstanceStruct
  *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c2_Copy_3_of_canceshi(SFc2_Copy_3_of_canceshiInstanceStruct *
  chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c2_update_debugger_state_c2_Copy_3_of_canceshi
  (SFc2_Copy_3_of_canceshiInstanceStruct *chartInstance)
{
  uint32_T c2_prevAniVal;
  uint8_T *c2_is_active_c2_Copy_3_of_canceshi;
  uint8_T *c2_is_c2_Copy_3_of_canceshi;
  c2_is_c2_Copy_3_of_canceshi = (uint8_T *)ssGetDWork(chartInstance->S, 2);
  c2_is_active_c2_Copy_3_of_canceshi = (uint8_T *)ssGetDWork(chartInstance->S, 1);
  c2_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)*c2_is_active_c2_Copy_3_of_canceshi == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 1);
  }

  if (*c2_is_c2_Copy_3_of_canceshi == c2_IN_c) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0);
  }

  if (*c2_is_c2_Copy_3_of_canceshi == c2_IN_start) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1);
  }

  sf_debug_set_animation(c2_prevAniVal);
  _SFD_ANIMATE();
}

static void ext_mode_exec_c2_Copy_3_of_canceshi
  (SFc2_Copy_3_of_canceshiInstanceStruct *chartInstance)
{
  c2_update_debugger_state_c2_Copy_3_of_canceshi(chartInstance);
}

static const mxArray *get_sim_state_c2_Copy_3_of_canceshi
  (SFc2_Copy_3_of_canceshiInstanceStruct *chartInstance)
{
  const mxArray *c2_st = NULL;
  const mxArray *c2_y = NULL;
  real_T c2_hoistedGlobal;
  real_T c2_u;
  const mxArray *c2_b_y = NULL;
  uint8_T c2_b_hoistedGlobal;
  uint8_T c2_b_u;
  const mxArray *c2_c_y = NULL;
  uint8_T c2_c_hoistedGlobal;
  uint8_T c2_c_u;
  const mxArray *c2_d_y = NULL;
  uint8_T c2_d_hoistedGlobal;
  uint8_T c2_d_u;
  const mxArray *c2_e_y = NULL;
  real_T *c2_switch;
  uint8_T *c2_is_active_c2_Copy_3_of_canceshi;
  uint8_T *c2_is_c2_Copy_3_of_canceshi;
  uint8_T *c2_temporalCounter_i1;
  c2_temporalCounter_i1 = (uint8_T *)ssGetDWork(chartInstance->S, 3);
  c2_switch = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c2_is_c2_Copy_3_of_canceshi = (uint8_T *)ssGetDWork(chartInstance->S, 2);
  c2_is_active_c2_Copy_3_of_canceshi = (uint8_T *)ssGetDWork(chartInstance->S, 1);
  c2_st = NULL;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_createcellarray(4));
  c2_hoistedGlobal = *c2_switch;
  c2_u = c2_hoistedGlobal;
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 0, c2_b_y);
  c2_b_hoistedGlobal = *c2_is_active_c2_Copy_3_of_canceshi;
  c2_b_u = c2_b_hoistedGlobal;
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", &c2_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 1, c2_c_y);
  c2_c_hoistedGlobal = *c2_is_c2_Copy_3_of_canceshi;
  c2_c_u = c2_c_hoistedGlobal;
  c2_d_y = NULL;
  sf_mex_assign(&c2_d_y, sf_mex_create("y", &c2_c_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 2, c2_d_y);
  c2_d_hoistedGlobal = *c2_temporalCounter_i1;
  c2_d_u = c2_d_hoistedGlobal;
  c2_e_y = NULL;
  sf_mex_assign(&c2_e_y, sf_mex_create("y", &c2_d_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 3, c2_e_y);
  sf_mex_assign(&c2_st, c2_y);
  return c2_st;
}

static void set_sim_state_c2_Copy_3_of_canceshi
  (SFc2_Copy_3_of_canceshiInstanceStruct *chartInstance, const mxArray *c2_st)
{
  const mxArray *c2_u;
  real_T *c2_switch;
  uint8_T *c2_is_active_c2_Copy_3_of_canceshi;
  uint8_T *c2_is_c2_Copy_3_of_canceshi;
  uint8_T *c2_temporalCounter_i1;
  c2_temporalCounter_i1 = (uint8_T *)ssGetDWork(chartInstance->S, 3);
  c2_switch = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c2_is_c2_Copy_3_of_canceshi = (uint8_T *)ssGetDWork(chartInstance->S, 2);
  c2_is_active_c2_Copy_3_of_canceshi = (uint8_T *)ssGetDWork(chartInstance->S, 1);
  c2_u = sf_mex_dup(c2_st);
  *c2_switch = c2_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c2_u,
    0)), "switch");
  *c2_is_active_c2_Copy_3_of_canceshi = c2_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c2_u, 1)),
    "is_active_c2_Copy_3_of_canceshi");
  *c2_is_c2_Copy_3_of_canceshi = c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 2)), "is_c2_Copy_3_of_canceshi");
  *c2_temporalCounter_i1 = c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 3)), "temporalCounter_i1");
  sf_mex_assign(&chartInstance->c2_setSimStateSideEffectsInfo,
                c2_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c2_u, 4)
    ), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c2_u);
  chartInstance->c2_doSetSimStateSideEffects = 1U;
  c2_update_debugger_state_c2_Copy_3_of_canceshi(chartInstance);
  sf_mex_destroy(&c2_st);
}

static void c2_set_sim_state_side_effects_c2_Copy_3_of_canceshi
  (SFc2_Copy_3_of_canceshiInstanceStruct *chartInstance)
{
  uint8_T *c2_temporalCounter_i1;
  uint8_T *c2_is_c2_Copy_3_of_canceshi;
  c2_temporalCounter_i1 = (uint8_T *)ssGetDWork(chartInstance->S, 3);
  c2_is_c2_Copy_3_of_canceshi = (uint8_T *)ssGetDWork(chartInstance->S, 2);
  if (chartInstance->c2_doSetSimStateSideEffects != 0) {
    if (*c2_is_c2_Copy_3_of_canceshi == c2_IN_c) {
      if (sf_mex_sub(chartInstance->c2_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 2) == 0.0) {
        *c2_temporalCounter_i1 = 0U;
      }
    }

    if (*c2_is_c2_Copy_3_of_canceshi == c2_IN_start) {
      if (sf_mex_sub(chartInstance->c2_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 3) == 0.0) {
        *c2_temporalCounter_i1 = 0U;
      }
    }

    chartInstance->c2_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c2_Copy_3_of_canceshi(SFc2_Copy_3_of_canceshiInstanceStruct
  *chartInstance)
{
  sf_mex_destroy(&chartInstance->c2_setSimStateSideEffectsInfo);
}

static void sf_c2_Copy_3_of_canceshi(SFc2_Copy_3_of_canceshiInstanceStruct
  *chartInstance)
{
  int32_T c2_previousEvent;
  boolean_T c2_temp;
  boolean_T c2_b_temp;
  real_T *c2_switch;
  uint8_T *c2_temporalCounter_i1;
  uint8_T *c2_is_active_c2_Copy_3_of_canceshi;
  uint8_T *c2_is_c2_Copy_3_of_canceshi;
  c2_temporalCounter_i1 = (uint8_T *)ssGetDWork(chartInstance->S, 3);
  c2_switch = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c2_is_c2_Copy_3_of_canceshi = (uint8_T *)ssGetDWork(chartInstance->S, 2);
  c2_is_active_c2_Copy_3_of_canceshi = (uint8_T *)ssGetDWork(chartInstance->S, 1);
  c2_set_sim_state_side_effects_c2_Copy_3_of_canceshi(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 1);
  _SFD_DATA_RANGE_CHECK(*c2_switch, 0U);
  c2_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 1);
  if ((int16_T)*c2_temporalCounter_i1 < 15) {
    *c2_temporalCounter_i1 = (uint8_T)(*c2_temporalCounter_i1 + 1);
  }

  if ((int16_T)*c2_is_active_c2_Copy_3_of_canceshi == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 1);
    *c2_is_active_c2_Copy_3_of_canceshi = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 0);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0);
    *c2_is_c2_Copy_3_of_canceshi = c2_IN_start;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1);
    *c2_temporalCounter_i1 = 0U;
    *c2_switch = 0.0;
    _SFD_DATA_RANGE_CHECK(*c2_switch, 0U);
  } else {
    switch (*c2_is_c2_Copy_3_of_canceshi) {
     case c2_IN_c:
      CV_CHART_EVAL(1, 0, 1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2);
      c2_temp = (_SFD_CCP_CALL(2U, 0, 1 != 0U) != 0);
      if (c2_temp) {
        c2_temp = (_SFD_CCP_CALL(2U, 1, (int16_T)*c2_temporalCounter_i1 >= 10 !=
                    0U) != 0);
      }

      if (CV_TRANSITION_EVAL(2U, (int32_T)c2_temp) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG, 0);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 0);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0);
        *c2_is_c2_Copy_3_of_canceshi = c2_IN_start;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1);
        *c2_temporalCounter_i1 = 0U;
        *c2_switch = 0.0;
        _SFD_DATA_RANGE_CHECK(*c2_switch, 0U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0);
      break;

     case c2_IN_start:
      CV_CHART_EVAL(1, 0, 2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1);
      c2_b_temp = (_SFD_CCP_CALL(1U, 0, 1 != 0U) != 0);
      if (c2_b_temp) {
        c2_b_temp = (_SFD_CCP_CALL(1U, 1, (int16_T)*c2_temporalCounter_i1 >= 10
          != 0U) != 0);
      }

      if (CV_TRANSITION_EVAL(1U, (int32_T)c2_b_temp) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG, 1);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1);
        *c2_is_c2_Copy_3_of_canceshi = c2_IN_c;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 0);
        *c2_temporalCounter_i1 = 0U;
        *c2_switch = 1.0;
        _SFD_DATA_RANGE_CHECK(*c2_switch, 0U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1);
      break;

     default:
      CV_CHART_EVAL(1, 0, 0);
      *c2_is_c2_Copy_3_of_canceshi = (uint8_T)c2_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1);
  _sfEvent_ = c2_previousEvent;
  sf_debug_check_for_state_inconsistency(_Copy_3_of_canceshiMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void compInitSubchartSimstructsFcn_c2_Copy_3_of_canceshi
  (SFc2_Copy_3_of_canceshiInstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c2_machineNumber, uint32_T
  c2_chartNumber)
{
}

const mxArray *sf_c2_Copy_3_of_canceshi_get_eml_resolved_functions_info(void)
{
  const mxArray *c2_nameCaptureInfo = NULL;
  c2_nameCaptureInfo = NULL;
  sf_mex_assign(&c2_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c2_nameCaptureInfo;
}

static const mxArray *c2_sf_marshall(void *chartInstanceVoid, void *c2_u)
{
  const mxArray *c2_y = NULL;
  boolean_T c2_b_u;
  const mxArray *c2_b_y = NULL;
  SFc2_Copy_3_of_canceshiInstanceStruct *chartInstance;
  chartInstance = (SFc2_Copy_3_of_canceshiInstanceStruct *)chartInstanceVoid;
  c2_y = NULL;
  c2_b_u = *((boolean_T *)c2_u);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c2_y, c2_b_y);
  return c2_y;
}

static const mxArray *c2_b_sf_marshall(void *chartInstanceVoid, void *c2_u)
{
  const mxArray *c2_y = NULL;
  real_T c2_b_u;
  const mxArray *c2_b_y = NULL;
  SFc2_Copy_3_of_canceshiInstanceStruct *chartInstance;
  chartInstance = (SFc2_Copy_3_of_canceshiInstanceStruct *)chartInstanceVoid;
  c2_y = NULL;
  c2_b_u = *((real_T *)c2_u);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c2_y, c2_b_y);
  return c2_y;
}

static real_T c2_emlrt_marshallIn(SFc2_Copy_3_of_canceshiInstanceStruct
  *chartInstance, const mxArray *c2_switch, const char_T *
  c2_name)
{
  real_T c2_y;
  real_T c2_d0;
  sf_mex_import(c2_name, sf_mex_dup(c2_switch), &c2_d0, 1, 0, 0U, 0, 0U, 0);
  c2_y = c2_d0;
  sf_mex_destroy(&c2_switch);
  return c2_y;
}

static uint8_T c2_b_emlrt_marshallIn(SFc2_Copy_3_of_canceshiInstanceStruct
  *chartInstance, const mxArray *
  c2_is_active_c2_Copy_3_of_canceshi, const char_T *c2_name)
{
  uint8_T c2_y;
  uint8_T c2_u0;
  sf_mex_import(c2_name, sf_mex_dup(c2_is_active_c2_Copy_3_of_canceshi), &c2_u0,
                1, 3, 0U, 0, 0U, 0);
  c2_y = c2_u0;
  sf_mex_destroy(&c2_is_active_c2_Copy_3_of_canceshi);
  return c2_y;
}

static const mxArray *c2_c_emlrt_marshallIn
  (SFc2_Copy_3_of_canceshiInstanceStruct *chartInstance, const mxArray *
   c2_b_setSimStateSideEffectsInfo, const char_T *c2_name)
{
  const mxArray *c2_y = NULL;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_duplicatearraysafe
                (&c2_b_setSimStateSideEffectsInfo));
  sf_mex_destroy(&c2_b_setSimStateSideEffectsInfo);
  return c2_y;
}

static void init_dsm_address_info(SFc2_Copy_3_of_canceshiInstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c2_Copy_3_of_canceshi_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1770634008U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(401798834U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2550622942U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2429328682U);
}

mxArray *sf_c2_Copy_3_of_canceshi_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(1771628369U);
    pr[1] = (double)(1489133037U);
    pr[2] = (double)(911454882U);
    pr[3] = (double)(950977760U);
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,1,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  return(mxAutoinheritanceInfo);
}

static mxArray *sf_get_sim_state_info_c2_Copy_3_of_canceshi(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x4'type','srcId','name','auxInfo'{{M[1],M[12],T\"switch\",},{M[8],M[0],T\"is_active_c2_Copy_3_of_canceshi\",},{M[9],M[0],T\"is_c2_Copy_3_of_canceshi\",},{M[11],M[0],T\"temporalCounter_i1\",S'et','os','ct'{{T\"wu\",M1x2[37 6],M[1]}}}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 4, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c2_Copy_3_of_canceshi_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc2_Copy_3_of_canceshiInstanceStruct *chartInstance;
    chartInstance = (SFc2_Copy_3_of_canceshiInstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_Copy_3_of_canceshiMachineNumber_,
           2,
           2,
           3,
           1,
           0,
           0,
           0,
           0,
           0,
           &(chartInstance->chartNumber),
           &(chartInstance->instanceNumber),
           ssGetPath(S),
           (void *)S);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          init_script_number_translation(_Copy_3_of_canceshiMachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting
            (_Copy_3_of_canceshiMachineNumber_,chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(_Copy_3_of_canceshiMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,2,0,1,"switch");
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_CH_SUBSTATE_COUNT(2);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,1);
          _SFD_ST_SUBSTATE_COUNT(0,0);
          _SFD_ST_SUBSTATE_COUNT(1,0);
        }

        _SFD_CV_INIT_CHART(2,1,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(1,0,0,0,0,0,NULL,NULL);
        }

        {
          static unsigned int sStartGuardMap[] = { 9, 0 };

          static unsigned int sEndGuardMap[] = { 13, 14 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(2,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 9, 0 };

          static unsigned int sEndGuardMap[] = { 13, 14 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(1,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_TRANS_COV_WTS(2,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 9, 0 };

          static unsigned int sEndGuardMap[] = { 13, 14 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(0,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(1,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 9, 0 };

          static unsigned int sEndGuardMap[] = { 13, 14 };

          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c2_b_sf_marshall);

        {
          real_T *c2_switch;
          c2_switch = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          _SFD_SET_DATA_VALUE_PTR(0U, c2_switch);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_Copy_3_of_canceshiMachineNumber_,chartInstance->chartNumber,
         chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c2_Copy_3_of_canceshi(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc2_Copy_3_of_canceshiInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c2_Copy_3_of_canceshi((SFc2_Copy_3_of_canceshiInstanceStruct*)
    chartInstanceVar);
  initialize_c2_Copy_3_of_canceshi((SFc2_Copy_3_of_canceshiInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c2_Copy_3_of_canceshi(void *chartInstanceVar)
{
  enable_c2_Copy_3_of_canceshi((SFc2_Copy_3_of_canceshiInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c2_Copy_3_of_canceshi(void *chartInstanceVar)
{
  disable_c2_Copy_3_of_canceshi((SFc2_Copy_3_of_canceshiInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c2_Copy_3_of_canceshi(void *chartInstanceVar)
{
  sf_c2_Copy_3_of_canceshi((SFc2_Copy_3_of_canceshiInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_ext_mode_exec_c2_Copy_3_of_canceshi(void *chartInstanceVar)
{
  ext_mode_exec_c2_Copy_3_of_canceshi((SFc2_Copy_3_of_canceshiInstanceStruct*)
    chartInstanceVar);
}

static mxArray* sf_internal_get_sim_state_c2_Copy_3_of_canceshi(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c2_Copy_3_of_canceshi
    ((SFc2_Copy_3_of_canceshiInstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = sf_get_sim_state_info_c2_Copy_3_of_canceshi();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_raw2high'.\n");
  }

  return plhs[0];
}

static void sf_internal_set_sim_state_c2_Copy_3_of_canceshi(SimStruct* S, const
  mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c2_Copy_3_of_canceshi();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c2_Copy_3_of_canceshi((SFc2_Copy_3_of_canceshiInstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static mxArray* sf_opaque_get_sim_state_c2_Copy_3_of_canceshi(SimStruct* S)
{
  return sf_internal_get_sim_state_c2_Copy_3_of_canceshi(S);
}

static void sf_opaque_set_sim_state_c2_Copy_3_of_canceshi(SimStruct* S, const
  mxArray *st)
{
  sf_internal_set_sim_state_c2_Copy_3_of_canceshi(S, st);
}

static void sf_opaque_terminate_c2_Copy_3_of_canceshi(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc2_Copy_3_of_canceshiInstanceStruct*) chartInstanceVar)
      ->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c2_Copy_3_of_canceshi((SFc2_Copy_3_of_canceshiInstanceStruct*)
      chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  compInitSubchartSimstructsFcn_c2_Copy_3_of_canceshi
    ((SFc2_Copy_3_of_canceshiInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c2_Copy_3_of_canceshi(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c2_Copy_3_of_canceshi
      ((SFc2_Copy_3_of_canceshiInstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

mxArray *sf_c2_Copy_3_of_canceshi_get_testpoint_info(void)
{
  return NULL;
}

static void sf_set_sfun_dwork_info(SimStruct *S)
{
  const char *dworkEncStr[] = {
    "100 S1x4'type','isSigned','wordLength','bias','slope','exponent','isComplex','size'{{T\"boolean\",,,,,,M[0],M[]},{T\"uint8\",,,,,,M[0],M[]},{T\"uint8\",,,,,,M[0],M[]},{T\"uint8\",,,,,,M[0],M[]}}"
  };

  sf_set_encoded_dwork_info(S, dworkEncStr, 4, 10);
}

static void mdlSetWorkWidths_c2_Copy_3_of_canceshi(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,"Copy_3_of_canceshi","Copy_3_of_canceshi",2);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,"Copy_3_of_canceshi",
                "Copy_3_of_canceshi",2,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,"Copy_3_of_canceshi",
      "Copy_3_of_canceshi",2,"gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      sf_mark_chart_reusable_outputs(S,"Copy_3_of_canceshi","Copy_3_of_canceshi",
        2,1);
    }

    sf_set_rtw_dwork_info(S,"Copy_3_of_canceshi","Copy_3_of_canceshi",2);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
    sf_set_sfun_dwork_info(S);
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(1937877222U));
  ssSetChecksum1(S,(4102097739U));
  ssSetChecksum2(S,(4099515017U));
  ssSetChecksum3(S,(3695242972U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c2_Copy_3_of_canceshi(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "Copy_3_of_canceshi", "Copy_3_of_canceshi",2);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c2_Copy_3_of_canceshi(SimStruct *S)
{
  SFc2_Copy_3_of_canceshiInstanceStruct *chartInstance;
  chartInstance = (SFc2_Copy_3_of_canceshiInstanceStruct *)malloc(sizeof
    (SFc2_Copy_3_of_canceshiInstanceStruct));
  memset(chartInstance, 0, sizeof(SFc2_Copy_3_of_canceshiInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c2_Copy_3_of_canceshi;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c2_Copy_3_of_canceshi;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c2_Copy_3_of_canceshi;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c2_Copy_3_of_canceshi;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c2_Copy_3_of_canceshi;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c2_Copy_3_of_canceshi;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c2_Copy_3_of_canceshi;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c2_Copy_3_of_canceshi;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c2_Copy_3_of_canceshi;
  chartInstance->chartInfo.mdlStart = mdlStart_c2_Copy_3_of_canceshi;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c2_Copy_3_of_canceshi;
  chartInstance->chartInfo.extModeExec =
    sf_opaque_ext_mode_exec_c2_Copy_3_of_canceshi;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->S = S;
  ssSetUserData(S,(void *)(&(chartInstance->chartInfo)));/* register the chart instance with simstruct */
  init_dsm_address_info(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  sf_opaque_init_subchart_simstructs(chartInstance->chartInfo.chartInstance);
  chart_debug_initialization(S,1);
}

void c2_Copy_3_of_canceshi_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c2_Copy_3_of_canceshi(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c2_Copy_3_of_canceshi(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c2_Copy_3_of_canceshi(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c2_Copy_3_of_canceshi_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
