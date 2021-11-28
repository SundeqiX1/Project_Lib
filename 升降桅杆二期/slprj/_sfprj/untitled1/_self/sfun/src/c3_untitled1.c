/* Include files */

#include "blascompat32.h"
#include "untitled1_sfun.h"
#include "c3_untitled1.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "untitled1_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c3_IN_NO_ACTIVE_CHILD          (0U)
#define c3_IN_c                        (1U)
#define c3_IN_start                    (2U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c3_untitled1(SFc3_untitled1InstanceStruct *chartInstance);
static void initialize_params_c3_untitled1(SFc3_untitled1InstanceStruct
  *chartInstance);
static void enable_c3_untitled1(SFc3_untitled1InstanceStruct *chartInstance);
static void disable_c3_untitled1(SFc3_untitled1InstanceStruct *chartInstance);
static void c3_update_debugger_state_c3_untitled1(SFc3_untitled1InstanceStruct
  *chartInstance);
static void ext_mode_exec_c3_untitled1(SFc3_untitled1InstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c3_untitled1(SFc3_untitled1InstanceStruct
  *chartInstance);
static void set_sim_state_c3_untitled1(SFc3_untitled1InstanceStruct
  *chartInstance, const mxArray *c3_st);
static void c3_set_sim_state_side_effects_c3_untitled1
  (SFc3_untitled1InstanceStruct *chartInstance);
static void finalize_c3_untitled1(SFc3_untitled1InstanceStruct *chartInstance);
static void sf_c3_untitled1(SFc3_untitled1InstanceStruct *chartInstance);
static void compInitSubchartSimstructsFcn_c3_untitled1
  (SFc3_untitled1InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c3_machineNumber, uint32_T
  c3_chartNumber);
static const mxArray *c3_sf_marshall(void *chartInstanceVoid, void *c3_u);
static const mxArray *c3_b_sf_marshall(void *chartInstanceVoid, void *c3_u);
static real_T c3_emlrt_marshallIn(SFc3_untitled1InstanceStruct *chartInstance,
  const mxArray *c3_switch, const char_T *c3_name);
static uint8_T c3_b_emlrt_marshallIn(SFc3_untitled1InstanceStruct *chartInstance,
  const mxArray *c3_is_active_c3_untitled1, const char_T *c3_name);
static const mxArray *c3_c_emlrt_marshallIn(SFc3_untitled1InstanceStruct
  *chartInstance, const mxArray *c3_b_setSimStateSideEffectsInfo, const char_T
  *c3_name);
static void init_dsm_address_info(SFc3_untitled1InstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c3_untitled1(SFc3_untitled1InstanceStruct *chartInstance)
{
  uint8_T *c3_is_active_c3_untitled1;
  uint8_T *c3_is_c3_untitled1;
  real_T *c3_m2;
  real_T *c3_switch;
  c3_switch = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c3_m2 = (real_T *)ssGetDWork(chartInstance->S, 3);
  c3_is_c3_untitled1 = (uint8_T *)ssGetDWork(chartInstance->S, 2);
  c3_is_active_c3_untitled1 = (uint8_T *)ssGetDWork(chartInstance->S, 1);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c3_doSetSimStateSideEffects = 0U;
  chartInstance->c3_setSimStateSideEffectsInfo = NULL;
  *c3_is_active_c3_untitled1 = 0U;
  *c3_is_c3_untitled1 = 0U;
  *c3_m2 = 0.0;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c3_switch = 0.0;
  }
}

static void initialize_params_c3_untitled1(SFc3_untitled1InstanceStruct
  *chartInstance)
{
}

static void enable_c3_untitled1(SFc3_untitled1InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c3_untitled1(SFc3_untitled1InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c3_update_debugger_state_c3_untitled1(SFc3_untitled1InstanceStruct
  *chartInstance)
{
  uint32_T c3_prevAniVal;
  uint8_T *c3_is_active_c3_untitled1;
  uint8_T *c3_is_c3_untitled1;
  c3_is_c3_untitled1 = (uint8_T *)ssGetDWork(chartInstance->S, 2);
  c3_is_active_c3_untitled1 = (uint8_T *)ssGetDWork(chartInstance->S, 1);
  c3_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)*c3_is_active_c3_untitled1 == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 0);
  }

  if (*c3_is_c3_untitled1 == c3_IN_c) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0);
  }

  if (*c3_is_c3_untitled1 == c3_IN_start) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1);
  }

  sf_debug_set_animation(c3_prevAniVal);
  _SFD_ANIMATE();
}

static void ext_mode_exec_c3_untitled1(SFc3_untitled1InstanceStruct
  *chartInstance)
{
  c3_update_debugger_state_c3_untitled1(chartInstance);
}

static const mxArray *get_sim_state_c3_untitled1(SFc3_untitled1InstanceStruct
  *chartInstance)
{
  const mxArray *c3_st = NULL;
  const mxArray *c3_y = NULL;
  real_T c3_hoistedGlobal;
  real_T c3_u;
  const mxArray *c3_b_y = NULL;
  real_T c3_b_hoistedGlobal;
  real_T c3_b_u;
  const mxArray *c3_c_y = NULL;
  uint8_T c3_c_hoistedGlobal;
  uint8_T c3_c_u;
  const mxArray *c3_d_y = NULL;
  uint8_T c3_d_hoistedGlobal;
  uint8_T c3_d_u;
  const mxArray *c3_e_y = NULL;
  uint8_T c3_e_hoistedGlobal;
  uint8_T c3_e_u;
  const mxArray *c3_f_y = NULL;
  real_T *c3_switch;
  real_T *c3_m2;
  uint8_T *c3_is_active_c3_untitled1;
  uint8_T *c3_is_c3_untitled1;
  uint8_T *c3_temporalCounter_i1;
  c3_temporalCounter_i1 = (uint8_T *)ssGetDWork(chartInstance->S, 4);
  c3_switch = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c3_m2 = (real_T *)ssGetDWork(chartInstance->S, 3);
  c3_is_c3_untitled1 = (uint8_T *)ssGetDWork(chartInstance->S, 2);
  c3_is_active_c3_untitled1 = (uint8_T *)ssGetDWork(chartInstance->S, 1);
  c3_st = NULL;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_createcellarray(5));
  c3_hoistedGlobal = *c3_switch;
  c3_u = c3_hoistedGlobal;
  c3_b_y = NULL;
  sf_mex_assign(&c3_b_y, sf_mex_create("y", &c3_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c3_y, 0, c3_b_y);
  c3_b_hoistedGlobal = *c3_m2;
  c3_b_u = c3_b_hoistedGlobal;
  c3_c_y = NULL;
  sf_mex_assign(&c3_c_y, sf_mex_create("y", &c3_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c3_y, 1, c3_c_y);
  c3_c_hoistedGlobal = *c3_is_active_c3_untitled1;
  c3_c_u = c3_c_hoistedGlobal;
  c3_d_y = NULL;
  sf_mex_assign(&c3_d_y, sf_mex_create("y", &c3_c_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c3_y, 2, c3_d_y);
  c3_d_hoistedGlobal = *c3_is_c3_untitled1;
  c3_d_u = c3_d_hoistedGlobal;
  c3_e_y = NULL;
  sf_mex_assign(&c3_e_y, sf_mex_create("y", &c3_d_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c3_y, 3, c3_e_y);
  c3_e_hoistedGlobal = *c3_temporalCounter_i1;
  c3_e_u = c3_e_hoistedGlobal;
  c3_f_y = NULL;
  sf_mex_assign(&c3_f_y, sf_mex_create("y", &c3_e_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c3_y, 4, c3_f_y);
  sf_mex_assign(&c3_st, c3_y);
  return c3_st;
}

static void set_sim_state_c3_untitled1(SFc3_untitled1InstanceStruct
  *chartInstance, const mxArray *c3_st)
{
  const mxArray *c3_u;
  real_T *c3_switch;
  real_T *c3_m2;
  uint8_T *c3_is_active_c3_untitled1;
  uint8_T *c3_is_c3_untitled1;
  uint8_T *c3_temporalCounter_i1;
  c3_temporalCounter_i1 = (uint8_T *)ssGetDWork(chartInstance->S, 4);
  c3_switch = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c3_m2 = (real_T *)ssGetDWork(chartInstance->S, 3);
  c3_is_c3_untitled1 = (uint8_T *)ssGetDWork(chartInstance->S, 2);
  c3_is_active_c3_untitled1 = (uint8_T *)ssGetDWork(chartInstance->S, 1);
  c3_u = sf_mex_dup(c3_st);
  *c3_switch = c3_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c3_u,
    0)), "switch");
  *c3_m2 = c3_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c3_u, 1)),
    "m2");
  *c3_is_active_c3_untitled1 = c3_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c3_u, 2)), "is_active_c3_untitled1");
  *c3_is_c3_untitled1 = c3_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c3_u, 3)), "is_c3_untitled1");
  *c3_temporalCounter_i1 = c3_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c3_u, 4)), "temporalCounter_i1");
  sf_mex_assign(&chartInstance->c3_setSimStateSideEffectsInfo,
                c3_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c3_u, 5)
    ), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c3_u);
  chartInstance->c3_doSetSimStateSideEffects = 1U;
  c3_update_debugger_state_c3_untitled1(chartInstance);
  sf_mex_destroy(&c3_st);
}

static void c3_set_sim_state_side_effects_c3_untitled1
  (SFc3_untitled1InstanceStruct *chartInstance)
{
  uint8_T *c3_temporalCounter_i1;
  uint8_T *c3_is_c3_untitled1;
  c3_temporalCounter_i1 = (uint8_T *)ssGetDWork(chartInstance->S, 4);
  c3_is_c3_untitled1 = (uint8_T *)ssGetDWork(chartInstance->S, 2);
  if (chartInstance->c3_doSetSimStateSideEffects != 0) {
    if (*c3_is_c3_untitled1 == c3_IN_c) {
      if (sf_mex_sub(chartInstance->c3_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 2) == 0.0) {
        *c3_temporalCounter_i1 = 0U;
      }
    }

    if (*c3_is_c3_untitled1 == c3_IN_start) {
      if (sf_mex_sub(chartInstance->c3_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 3) == 0.0) {
        *c3_temporalCounter_i1 = 0U;
      }
    }

    chartInstance->c3_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c3_untitled1(SFc3_untitled1InstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c3_setSimStateSideEffectsInfo);
}

static void sf_c3_untitled1(SFc3_untitled1InstanceStruct *chartInstance)
{
  int32_T c3_previousEvent;
  boolean_T c3_temp;
  boolean_T c3_b_temp;
  real_T *c3_switch;
  uint8_T *c3_temporalCounter_i1;
  uint8_T *c3_is_active_c3_untitled1;
  uint8_T *c3_is_c3_untitled1;
  real_T *c3_m2;
  real_T *c3_m1;
  c3_temporalCounter_i1 = (uint8_T *)ssGetDWork(chartInstance->S, 4);
  c3_switch = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c3_m2 = (real_T *)ssGetDWork(chartInstance->S, 3);
  c3_m1 = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c3_is_c3_untitled1 = (uint8_T *)ssGetDWork(chartInstance->S, 2);
  c3_is_active_c3_untitled1 = (uint8_T *)ssGetDWork(chartInstance->S, 1);
  c3_set_sim_state_side_effects_c3_untitled1(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 0);
  _SFD_DATA_RANGE_CHECK(*c3_m1, 0U);
  _SFD_DATA_RANGE_CHECK(*c3_m2, 1U);
  _SFD_DATA_RANGE_CHECK(*c3_switch, 2U);
  c3_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 0);
  if ((int16_T)*c3_temporalCounter_i1 < 15) {
    *c3_temporalCounter_i1 = (uint8_T)(*c3_temporalCounter_i1 + 1);
  }

  if ((int16_T)*c3_is_active_c3_untitled1 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 0);
    *c3_is_active_c3_untitled1 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 0);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0);
    *c3_is_c3_untitled1 = c3_IN_start;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1);
    *c3_temporalCounter_i1 = 0U;
    *c3_switch = 0.0;
    _SFD_DATA_RANGE_CHECK(*c3_switch, 2U);
  } else {
    switch (*c3_is_c3_untitled1) {
     case c3_IN_c:
      CV_CHART_EVAL(0, 0, 1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2);
      c3_temp = (_SFD_CCP_CALL(2U, 0, 1 != 0U) != 0);
      if (c3_temp) {
        c3_temp = (_SFD_CCP_CALL(2U, 1, (int16_T)*c3_temporalCounter_i1 >= 10 !=
                    0U) != 0);
      }

      if (CV_TRANSITION_EVAL(2U, (int32_T)c3_temp) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG, 0);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 0);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0);
        *c3_is_c3_untitled1 = c3_IN_start;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1);
        *c3_temporalCounter_i1 = 0U;
        *c3_switch = 0.0;
        _SFD_DATA_RANGE_CHECK(*c3_switch, 2U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0);
      break;

     case c3_IN_start:
      CV_CHART_EVAL(0, 0, 2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1);
      c3_b_temp = (_SFD_CCP_CALL(1U, 0, 1 != 0U) != 0);
      if (c3_b_temp) {
        c3_b_temp = (_SFD_CCP_CALL(1U, 1, (int16_T)*c3_temporalCounter_i1 >= 10
          != 0U) != 0);
      }

      if (CV_TRANSITION_EVAL(1U, (int32_T)c3_b_temp) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG, 1);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1);
        *c3_is_c3_untitled1 = c3_IN_c;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 0);
        *c3_temporalCounter_i1 = 0U;
        *c3_switch = 1.0;
        _SFD_DATA_RANGE_CHECK(*c3_switch, 2U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1);
      break;

     default:
      CV_CHART_EVAL(0, 0, 0);
      *c3_is_c3_untitled1 = (uint8_T)c3_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0);
  _sfEvent_ = c3_previousEvent;
  sf_debug_check_for_state_inconsistency(_untitled1MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void compInitSubchartSimstructsFcn_c3_untitled1
  (SFc3_untitled1InstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c3_machineNumber, uint32_T
  c3_chartNumber)
{
}

const mxArray *sf_c3_untitled1_get_eml_resolved_functions_info(void)
{
  const mxArray *c3_nameCaptureInfo = NULL;
  c3_nameCaptureInfo = NULL;
  sf_mex_assign(&c3_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c3_nameCaptureInfo;
}

static const mxArray *c3_sf_marshall(void *chartInstanceVoid, void *c3_u)
{
  const mxArray *c3_y = NULL;
  boolean_T c3_b_u;
  const mxArray *c3_b_y = NULL;
  SFc3_untitled1InstanceStruct *chartInstance;
  chartInstance = (SFc3_untitled1InstanceStruct *)chartInstanceVoid;
  c3_y = NULL;
  c3_b_u = *((boolean_T *)c3_u);
  c3_b_y = NULL;
  sf_mex_assign(&c3_b_y, sf_mex_create("y", &c3_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c3_y, c3_b_y);
  return c3_y;
}

static const mxArray *c3_b_sf_marshall(void *chartInstanceVoid, void *c3_u)
{
  const mxArray *c3_y = NULL;
  real_T c3_b_u;
  const mxArray *c3_b_y = NULL;
  SFc3_untitled1InstanceStruct *chartInstance;
  chartInstance = (SFc3_untitled1InstanceStruct *)chartInstanceVoid;
  c3_y = NULL;
  c3_b_u = *((real_T *)c3_u);
  c3_b_y = NULL;
  sf_mex_assign(&c3_b_y, sf_mex_create("y", &c3_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c3_y, c3_b_y);
  return c3_y;
}

static real_T c3_emlrt_marshallIn(SFc3_untitled1InstanceStruct *chartInstance,
  const mxArray *c3_switch, const char_T *c3_name)
{
  real_T c3_y;
  real_T c3_d0;
  sf_mex_import(c3_name, sf_mex_dup(c3_switch), &c3_d0, 1, 0, 0U, 0, 0U, 0);
  c3_y = c3_d0;
  sf_mex_destroy(&c3_switch);
  return c3_y;
}

static uint8_T c3_b_emlrt_marshallIn(SFc3_untitled1InstanceStruct *chartInstance,
  const mxArray *c3_is_active_c3_untitled1, const
  char_T *c3_name)
{
  uint8_T c3_y;
  uint8_T c3_u0;
  sf_mex_import(c3_name, sf_mex_dup(c3_is_active_c3_untitled1), &c3_u0, 1, 3, 0U,
                0, 0U, 0);
  c3_y = c3_u0;
  sf_mex_destroy(&c3_is_active_c3_untitled1);
  return c3_y;
}

static const mxArray *c3_c_emlrt_marshallIn(SFc3_untitled1InstanceStruct
  *chartInstance, const mxArray *
  c3_b_setSimStateSideEffectsInfo, const char_T *c3_name)
{
  const mxArray *c3_y = NULL;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_duplicatearraysafe
                (&c3_b_setSimStateSideEffectsInfo));
  sf_mex_destroy(&c3_b_setSimStateSideEffectsInfo);
  return c3_y;
}

static void init_dsm_address_info(SFc3_untitled1InstanceStruct *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c3_untitled1_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2788702342U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2822016370U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(4072355378U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(523078991U);
}

mxArray *sf_c3_untitled1_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(2292808435U);
    pr[1] = (double)(3615420247U);
    pr[2] = (double)(664328982U);
    pr[3] = (double)(2345682696U);
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
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
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
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

static mxArray *sf_get_sim_state_info_c3_untitled1(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x5'type','srcId','name','auxInfo'{{M[1],M[12],T\"switch\",},{M[3],M[11],T\"m2\",},{M[8],M[0],T\"is_active_c3_untitled1\",},{M[9],M[0],T\"is_c3_untitled1\",},{M[11],M[0],T\"temporalCounter_i1\",S'et','os','ct'{{T\"wu\",M1x2[37 6],M[1]}}}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 5, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c3_untitled1_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc3_untitled1InstanceStruct *chartInstance;
    chartInstance = (SFc3_untitled1InstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart(_untitled1MachineNumber_,
          3,
          2,
          3,
          3,
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
          init_script_number_translation(_untitled1MachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting(_untitled1MachineNumber_,
            chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(_untitled1MachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,"m1");
          _SFD_SET_DATA_PROPS(1,0,0,0,"m2");
          _SFD_SET_DATA_PROPS(2,2,0,1,"switch");
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
          (MexFcnForType)c3_b_sf_marshall);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_b_sf_marshall);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_b_sf_marshall);

        {
          real_T *c3_m1;
          real_T *c3_m2;
          real_T *c3_switch;
          c3_switch = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c3_m2 = (real_T *)ssGetDWork(chartInstance->S, 3);
          c3_m1 = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c3_m1);
          _SFD_SET_DATA_VALUE_PTR(1U, c3_m2);
          _SFD_SET_DATA_VALUE_PTR(2U, c3_switch);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(_untitled1MachineNumber_,
        chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c3_untitled1(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc3_untitled1InstanceStruct*) chartInstanceVar
    )->S,0);
  initialize_params_c3_untitled1((SFc3_untitled1InstanceStruct*)
    chartInstanceVar);
  initialize_c3_untitled1((SFc3_untitled1InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c3_untitled1(void *chartInstanceVar)
{
  enable_c3_untitled1((SFc3_untitled1InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c3_untitled1(void *chartInstanceVar)
{
  disable_c3_untitled1((SFc3_untitled1InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c3_untitled1(void *chartInstanceVar)
{
  sf_c3_untitled1((SFc3_untitled1InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_ext_mode_exec_c3_untitled1(void *chartInstanceVar)
{
  ext_mode_exec_c3_untitled1((SFc3_untitled1InstanceStruct*) chartInstanceVar);
}

static mxArray* sf_internal_get_sim_state_c3_untitled1(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c3_untitled1((SFc3_untitled1InstanceStruct*)
    chartInfo->chartInstance);         /* raw sim ctx */
  prhs[3] = sf_get_sim_state_info_c3_untitled1();/* state var info */
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

static void sf_internal_set_sim_state_c3_untitled1(SimStruct* S, const mxArray
  *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c3_untitled1();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c3_untitled1((SFc3_untitled1InstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static mxArray* sf_opaque_get_sim_state_c3_untitled1(SimStruct* S)
{
  return sf_internal_get_sim_state_c3_untitled1(S);
}

static void sf_opaque_set_sim_state_c3_untitled1(SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c3_untitled1(S, st);
}

static void sf_opaque_terminate_c3_untitled1(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc3_untitled1InstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c3_untitled1((SFc3_untitled1InstanceStruct*) chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  compInitSubchartSimstructsFcn_c3_untitled1((SFc3_untitled1InstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c3_untitled1(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c3_untitled1((SFc3_untitled1InstanceStruct*)
      (((ChartInfoStruct *)ssGetUserData(S))->chartInstance));
  }
}

mxArray *sf_c3_untitled1_get_testpoint_info(void)
{
  return NULL;
}

static void sf_set_sfun_dwork_info(SimStruct *S)
{
  const char *dworkEncStr[] = {
    "100 S1x5'type','isSigned','wordLength','bias','slope','exponent','isComplex','size'{{T\"boolean\",,,,,,M[0],M[]},{T\"uint8\",,,,,,M[0],M[]},{T\"uint8\",,,,,,M[0],M[]},{T\"double\",,,,,,M[0],M[]},{T\"uint8\",,,,,,M[0],M[]}}"
  };

  sf_set_encoded_dwork_info(S, dworkEncStr, 5, 10);
}

static void mdlSetWorkWidths_c3_untitled1(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,"untitled1","untitled1",3);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,"untitled1","untitled1",3,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,"untitled1","untitled1",
      3,"gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"untitled1","untitled1",3,1);
      sf_mark_chart_reusable_outputs(S,"untitled1","untitled1",3,1);
    }

    sf_set_rtw_dwork_info(S,"untitled1","untitled1",3);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
    sf_set_sfun_dwork_info(S);
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(3714334656U));
  ssSetChecksum1(S,(2647399696U));
  ssSetChecksum2(S,(3739089641U));
  ssSetChecksum3(S,(3642441953U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c3_untitled1(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "untitled1", "untitled1",3);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c3_untitled1(SimStruct *S)
{
  SFc3_untitled1InstanceStruct *chartInstance;
  chartInstance = (SFc3_untitled1InstanceStruct *)malloc(sizeof
    (SFc3_untitled1InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc3_untitled1InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c3_untitled1;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c3_untitled1;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c3_untitled1;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c3_untitled1;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c3_untitled1;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c3_untitled1;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c3_untitled1;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c3_untitled1;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c3_untitled1;
  chartInstance->chartInfo.mdlStart = mdlStart_c3_untitled1;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c3_untitled1;
  chartInstance->chartInfo.extModeExec = sf_opaque_ext_mode_exec_c3_untitled1;
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

void c3_untitled1_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c3_untitled1(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c3_untitled1(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c3_untitled1(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c3_untitled1_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
