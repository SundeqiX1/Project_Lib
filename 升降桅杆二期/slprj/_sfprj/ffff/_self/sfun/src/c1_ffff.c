/* Include files */

#include "blascompat32.h"
#include "ffff_sfun.h"
#include "c1_ffff.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "ffff_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c1_IN_NO_ACTIVE_CHILD          (0U)
#define c1_IN_running                  (1U)
#define c1_IN_to_stopped               (4U)
#define c1_IN_to_running               (3U)
#define c1_IN_stopped                  (2U)
#define c1_IN_ready                    (1U)
#define c1_IN_to_rest                  (4U)
#define c1_IN_rest                     (2U)
#define c1_IN_to_ready                 (3U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c1_ffff(SFc1_ffffInstanceStruct *chartInstance);
static void initialize_params_c1_ffff(SFc1_ffffInstanceStruct *chartInstance);
static void enable_c1_ffff(SFc1_ffffInstanceStruct *chartInstance);
static void disable_c1_ffff(SFc1_ffffInstanceStruct *chartInstance);
static void c1_update_debugger_state_c1_ffff(SFc1_ffffInstanceStruct
  *chartInstance);
static void ext_mode_exec_c1_ffff(SFc1_ffffInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c1_ffff(SFc1_ffffInstanceStruct
  *chartInstance);
static void set_sim_state_c1_ffff(SFc1_ffffInstanceStruct *chartInstance, const
  mxArray *c1_st);
static void c1_set_sim_state_side_effects_c1_ffff(SFc1_ffffInstanceStruct
  *chartInstance);
static void finalize_c1_ffff(SFc1_ffffInstanceStruct *chartInstance);
static void sf_c1_ffff(SFc1_ffffInstanceStruct *chartInstance);
static void compInitSubchartSimstructsFcn_c1_ffff(SFc1_ffffInstanceStruct
  *chartInstance);
static void c1_run_mode(SFc1_ffffInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c1_machineNumber, uint32_T
  c1_chartNumber);
static const mxArray *c1_sf_marshall(void *chartInstanceVoid, void *c1_u);
static const mxArray *c1_b_sf_marshall(void *chartInstanceVoid, void *c1_u);
static const mxArray *c1_c_sf_marshall(void *chartInstanceVoid, void *c1_u);
static real_T c1_emlrt_marshallIn(SFc1_ffffInstanceStruct *chartInstance, const
  mxArray *c1_ready, const char_T *c1_name);
static uint8_T c1_b_emlrt_marshallIn(SFc1_ffffInstanceStruct *chartInstance,
  const mxArray *c1_is_active_c1_ffff, const char_T *c1_name);
static const mxArray *c1_c_emlrt_marshallIn(SFc1_ffffInstanceStruct
  *chartInstance, const mxArray *c1_b_setSimStateSideEffectsInfo, const char_T
  *c1_name);
static void init_dsm_address_info(SFc1_ffffInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c1_ffff(SFc1_ffffInstanceStruct *chartInstance)
{
  uint8_T *c1_is_active_ready_mode;
  uint8_T *c1_is_ready_mode;
  uint8_T *c1_is_active_run_mode;
  uint8_T *c1_is_run_mode;
  uint8_T *c1_is_active_c1_ffff;
  real_T *c1_start;
  real_T *c1_start_sts;
  real_T *c1_ready_sts;
  real_T *c1_ready;
  c1_ready = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c1_ready_sts = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c1_start_sts = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c1_start = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c1_is_ready_mode = (uint8_T *)ssGetDWork(chartInstance->S, 5);
  c1_is_active_ready_mode = (uint8_T *)ssGetDWork(chartInstance->S, 4);
  c1_is_run_mode = (uint8_T *)ssGetDWork(chartInstance->S, 3);
  c1_is_active_run_mode = (uint8_T *)ssGetDWork(chartInstance->S, 2);
  c1_is_active_c1_ffff = (uint8_T *)ssGetDWork(chartInstance->S, 1);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c1_doSetSimStateSideEffects = 0U;
  chartInstance->c1_setSimStateSideEffectsInfo = NULL;
  *c1_is_active_ready_mode = 0U;
  *c1_is_ready_mode = 0U;
  *c1_is_active_run_mode = 0U;
  *c1_is_run_mode = 0U;
  *c1_is_active_c1_ffff = 0U;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c1_start = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 2) != 0)) {
    *c1_start_sts = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 3) != 0)) {
    *c1_ready_sts = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 4) != 0)) {
    *c1_ready = 0.0;
  }
}

static void initialize_params_c1_ffff(SFc1_ffffInstanceStruct *chartInstance)
{
}

static void enable_c1_ffff(SFc1_ffffInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c1_ffff(SFc1_ffffInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c1_update_debugger_state_c1_ffff(SFc1_ffffInstanceStruct
  *chartInstance)
{
  uint32_T c1_prevAniVal;
  uint8_T *c1_is_active_c1_ffff;
  uint8_T *c1_is_active_run_mode;
  uint8_T *c1_is_active_ready_mode;
  uint8_T *c1_is_run_mode;
  uint8_T *c1_is_ready_mode;
  c1_is_ready_mode = (uint8_T *)ssGetDWork(chartInstance->S, 5);
  c1_is_active_ready_mode = (uint8_T *)ssGetDWork(chartInstance->S, 4);
  c1_is_run_mode = (uint8_T *)ssGetDWork(chartInstance->S, 3);
  c1_is_active_run_mode = (uint8_T *)ssGetDWork(chartInstance->S, 2);
  c1_is_active_c1_ffff = (uint8_T *)ssGetDWork(chartInstance->S, 1);
  c1_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)*c1_is_active_c1_ffff == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 0);
  }

  if ((int16_T)*c1_is_active_run_mode == 1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5);
  }

  if ((int16_T)*c1_is_active_ready_mode == 1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0);
  }

  if (*c1_is_run_mode == c1_IN_running) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 6);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 6);
  }

  if (*c1_is_run_mode == c1_IN_to_stopped) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 9);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 9);
  }

  if (*c1_is_run_mode == c1_IN_to_running) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 8);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 8);
  }

  if (*c1_is_run_mode == c1_IN_stopped) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 7);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 7);
  }

  if (*c1_is_ready_mode == c1_IN_ready) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1);
  }

  if (*c1_is_ready_mode == c1_IN_to_rest) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4);
  }

  if (*c1_is_ready_mode == c1_IN_rest) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2);
  }

  if (*c1_is_ready_mode == c1_IN_to_ready) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3);
  }

  sf_debug_set_animation(c1_prevAniVal);
  _SFD_ANIMATE();
}

static void ext_mode_exec_c1_ffff(SFc1_ffffInstanceStruct *chartInstance)
{
  c1_update_debugger_state_c1_ffff(chartInstance);
}

static const mxArray *get_sim_state_c1_ffff(SFc1_ffffInstanceStruct
  *chartInstance)
{
  const mxArray *c1_st = NULL;
  const mxArray *c1_y = NULL;
  real_T c1_hoistedGlobal;
  real_T c1_u;
  const mxArray *c1_b_y = NULL;
  real_T c1_b_hoistedGlobal;
  real_T c1_b_u;
  const mxArray *c1_c_y = NULL;
  real_T c1_c_hoistedGlobal;
  real_T c1_c_u;
  const mxArray *c1_d_y = NULL;
  real_T c1_d_hoistedGlobal;
  real_T c1_d_u;
  const mxArray *c1_e_y = NULL;
  uint8_T c1_e_hoistedGlobal;
  uint8_T c1_e_u;
  const mxArray *c1_f_y = NULL;
  uint8_T c1_f_hoistedGlobal;
  uint8_T c1_f_u;
  const mxArray *c1_g_y = NULL;
  uint8_T c1_g_hoistedGlobal;
  uint8_T c1_g_u;
  const mxArray *c1_h_y = NULL;
  uint8_T c1_h_hoistedGlobal;
  uint8_T c1_h_u;
  const mxArray *c1_i_y = NULL;
  uint8_T c1_i_hoistedGlobal;
  uint8_T c1_i_u;
  const mxArray *c1_j_y = NULL;
  real_T *c1_ready;
  real_T *c1_ready_sts;
  real_T *c1_start;
  real_T *c1_start_sts;
  uint8_T *c1_is_active_c1_ffff;
  uint8_T *c1_is_active_run_mode;
  uint8_T *c1_is_active_ready_mode;
  uint8_T *c1_is_run_mode;
  uint8_T *c1_is_ready_mode;
  c1_ready = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c1_ready_sts = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c1_start_sts = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c1_start = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c1_is_ready_mode = (uint8_T *)ssGetDWork(chartInstance->S, 5);
  c1_is_active_ready_mode = (uint8_T *)ssGetDWork(chartInstance->S, 4);
  c1_is_run_mode = (uint8_T *)ssGetDWork(chartInstance->S, 3);
  c1_is_active_run_mode = (uint8_T *)ssGetDWork(chartInstance->S, 2);
  c1_is_active_c1_ffff = (uint8_T *)ssGetDWork(chartInstance->S, 1);
  c1_st = NULL;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_createcellarray(9));
  c1_hoistedGlobal = *c1_ready;
  c1_u = c1_hoistedGlobal;
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", &c1_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 0, c1_b_y);
  c1_b_hoistedGlobal = *c1_ready_sts;
  c1_b_u = c1_b_hoistedGlobal;
  c1_c_y = NULL;
  sf_mex_assign(&c1_c_y, sf_mex_create("y", &c1_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 1, c1_c_y);
  c1_c_hoistedGlobal = *c1_start;
  c1_c_u = c1_c_hoistedGlobal;
  c1_d_y = NULL;
  sf_mex_assign(&c1_d_y, sf_mex_create("y", &c1_c_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 2, c1_d_y);
  c1_d_hoistedGlobal = *c1_start_sts;
  c1_d_u = c1_d_hoistedGlobal;
  c1_e_y = NULL;
  sf_mex_assign(&c1_e_y, sf_mex_create("y", &c1_d_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 3, c1_e_y);
  c1_e_hoistedGlobal = *c1_is_active_c1_ffff;
  c1_e_u = c1_e_hoistedGlobal;
  c1_f_y = NULL;
  sf_mex_assign(&c1_f_y, sf_mex_create("y", &c1_e_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 4, c1_f_y);
  c1_f_hoistedGlobal = *c1_is_active_run_mode;
  c1_f_u = c1_f_hoistedGlobal;
  c1_g_y = NULL;
  sf_mex_assign(&c1_g_y, sf_mex_create("y", &c1_f_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 5, c1_g_y);
  c1_g_hoistedGlobal = *c1_is_active_ready_mode;
  c1_g_u = c1_g_hoistedGlobal;
  c1_h_y = NULL;
  sf_mex_assign(&c1_h_y, sf_mex_create("y", &c1_g_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 6, c1_h_y);
  c1_h_hoistedGlobal = *c1_is_run_mode;
  c1_h_u = c1_h_hoistedGlobal;
  c1_i_y = NULL;
  sf_mex_assign(&c1_i_y, sf_mex_create("y", &c1_h_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 7, c1_i_y);
  c1_i_hoistedGlobal = *c1_is_ready_mode;
  c1_i_u = c1_i_hoistedGlobal;
  c1_j_y = NULL;
  sf_mex_assign(&c1_j_y, sf_mex_create("y", &c1_i_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 8, c1_j_y);
  sf_mex_assign(&c1_st, c1_y);
  return c1_st;
}

static void set_sim_state_c1_ffff(SFc1_ffffInstanceStruct *chartInstance, const
  mxArray *c1_st)
{
  const mxArray *c1_u;
  real_T *c1_ready;
  real_T *c1_ready_sts;
  real_T *c1_start;
  real_T *c1_start_sts;
  uint8_T *c1_is_active_c1_ffff;
  uint8_T *c1_is_active_run_mode;
  uint8_T *c1_is_active_ready_mode;
  uint8_T *c1_is_run_mode;
  uint8_T *c1_is_ready_mode;
  c1_ready = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c1_ready_sts = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c1_start_sts = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c1_start = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c1_is_ready_mode = (uint8_T *)ssGetDWork(chartInstance->S, 5);
  c1_is_active_ready_mode = (uint8_T *)ssGetDWork(chartInstance->S, 4);
  c1_is_run_mode = (uint8_T *)ssGetDWork(chartInstance->S, 3);
  c1_is_active_run_mode = (uint8_T *)ssGetDWork(chartInstance->S, 2);
  c1_is_active_c1_ffff = (uint8_T *)ssGetDWork(chartInstance->S, 1);
  c1_u = sf_mex_dup(c1_st);
  *c1_ready = c1_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_u,
    0)), "ready");
  *c1_ready_sts = c1_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c1_u, 1)), "ready_sts");
  *c1_start = c1_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_u,
    2)), "start");
  *c1_start_sts = c1_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c1_u, 3)), "start_sts");
  *c1_is_active_c1_ffff = c1_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_u, 4)), "is_active_c1_ffff");
  *c1_is_active_run_mode = c1_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_u, 5)), "is_active_run_mode");
  *c1_is_active_ready_mode = c1_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_u, 6)), "is_active_ready_mode");
  *c1_is_run_mode = c1_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_u, 7)), "is_run_mode");
  *c1_is_ready_mode = c1_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_u, 8)), "is_ready_mode");
  sf_mex_assign(&chartInstance->c1_setSimStateSideEffectsInfo,
                c1_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c1_u, 9)
    ), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c1_u);
  chartInstance->c1_doSetSimStateSideEffects = 1U;
  c1_update_debugger_state_c1_ffff(chartInstance);
  sf_mex_destroy(&c1_st);
}

static void c1_set_sim_state_side_effects_c1_ffff(SFc1_ffffInstanceStruct
  *chartInstance)
{
  if (chartInstance->c1_doSetSimStateSideEffects != 0) {
    chartInstance->c1_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c1_ffff(SFc1_ffffInstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c1_setSimStateSideEffectsInfo);
}

static void sf_c1_ffff(SFc1_ffffInstanceStruct *chartInstance)
{
  int32_T c1_previousEvent;
  boolean_T c1_temp;
  boolean_T c1_b_temp;
  real_T *c1_ready_cmd;
  uint8_T *c1_is_run_mode;
  real_T *c1_ready;
  real_T *c1_ready_sts;
  uint8_T *c1_is_active_c1_ffff;
  uint8_T *c1_is_ready_mode;
  real_T *c1_start_fbk;
  real_T *c1_start_cmd;
  real_T *c1_ready_fbk;
  real_T *c1_start;
  real_T *c1_start_sts;
  uint8_T *c1_is_active_ready_mode;
  uint8_T *c1_is_active_run_mode;
  c1_ready = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c1_ready_sts = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c1_start_sts = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c1_start = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c1_ready_fbk = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c1_ready_cmd = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c1_start_cmd = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c1_start_fbk = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c1_is_ready_mode = (uint8_T *)ssGetDWork(chartInstance->S, 5);
  c1_is_active_ready_mode = (uint8_T *)ssGetDWork(chartInstance->S, 4);
  c1_is_run_mode = (uint8_T *)ssGetDWork(chartInstance->S, 3);
  c1_is_active_run_mode = (uint8_T *)ssGetDWork(chartInstance->S, 2);
  c1_is_active_c1_ffff = (uint8_T *)ssGetDWork(chartInstance->S, 1);
  c1_set_sim_state_side_effects_c1_ffff(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 0);
  _SFD_DATA_RANGE_CHECK(*c1_start_fbk, 0U);
  _SFD_DATA_RANGE_CHECK(*c1_start_cmd, 1U);
  _SFD_DATA_RANGE_CHECK(*c1_ready_cmd, 2U);
  _SFD_DATA_RANGE_CHECK(*c1_ready_fbk, 3U);
  _SFD_DATA_RANGE_CHECK(*c1_start, 4U);
  _SFD_DATA_RANGE_CHECK(*c1_start_sts, 5U);
  _SFD_DATA_RANGE_CHECK(*c1_ready_sts, 6U);
  _SFD_DATA_RANGE_CHECK(*c1_ready, 7U);
  c1_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 0);
  if ((int16_T)*c1_is_active_c1_ffff == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 0);
    *c1_is_active_c1_ffff = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0);
    *c1_is_active_run_mode = 1U;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 0);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0);
    *c1_is_run_mode = c1_IN_stopped;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 7);
    *c1_is_active_ready_mode = 1U;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5);
    *c1_is_ready_mode = c1_IN_rest;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2);
  } else {
    c1_run_mode(chartInstance);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0);
    switch (*c1_is_ready_mode) {
     case c1_IN_ready:
      CV_STATE_EVAL(0, 0, 1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 8);
      c1_temp = !(_SFD_CCP_CALL(8U, 0, *c1_ready_cmd != 0U) != 0);
      if (c1_temp) {
        c1_temp = (_SFD_CCP_CALL(8U, 1, *c1_is_run_mode == c1_IN_stopped != 0U)
                   != 0);
      }

      if (CV_TRANSITION_EVAL(8U, (int32_T)c1_temp) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG, 1);
        *c1_is_ready_mode = (uint8_T)c1_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1);
        *c1_is_ready_mode = c1_IN_to_rest;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 4);
      } else {
        *c1_ready = 1.0;
        _SFD_DATA_RANGE_CHECK(*c1_ready, 7U);
        *c1_ready_sts = 2.0;
        _SFD_DATA_RANGE_CHECK(*c1_ready_sts, 6U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1);
      break;

     case c1_IN_rest:
      CV_STATE_EVAL(0, 0, 2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 6);
      if (CV_TRANSITION_EVAL(6U, (int32_T)_SFD_CCP_CALL(6U, 0, *c1_ready_cmd !=
            0U)) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG, 2);
        *c1_is_ready_mode = (uint8_T)c1_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 2);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2);
        *c1_is_ready_mode = c1_IN_to_ready;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 3);
      } else {
        *c1_ready = 0.0;
        _SFD_DATA_RANGE_CHECK(*c1_ready, 7U);
        *c1_ready_sts = 0.0;
        _SFD_DATA_RANGE_CHECK(*c1_ready_sts, 6U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2);
      break;

     case c1_IN_to_ready:
      CV_STATE_EVAL(0, 0, 3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7);
      if (CV_TRANSITION_EVAL(7U, (int32_T)_SFD_CCP_CALL(7U, 0, *c1_ready_cmd == *
            c1_ready_fbk != 0U)) != 0) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions = 1;
          transitionList[0] = 7;
          sf_debug_transition_conflict_check_begin();
          if ((!(*c1_ready_cmd != 0.0)) && (*c1_is_run_mode == c1_IN_stopped)) {
            transitionList[numTransitions] = 13;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions > 1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG, 3);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 3);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3);
        *c1_is_ready_mode = c1_IN_ready;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 13);
        c1_b_temp = !(_SFD_CCP_CALL(13U, 0, *c1_ready_cmd != 0U) != 0);
        if (c1_b_temp) {
          c1_b_temp = (_SFD_CCP_CALL(13U, 1, *c1_is_run_mode == c1_IN_stopped !=
            0U) != 0);
        }

        if (CV_TRANSITION_EVAL(13U, (int32_T)c1_b_temp) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 13);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG, 3);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 3);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3);
          *c1_is_ready_mode = c1_IN_to_rest;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 4);
        } else {
          *c1_ready = 1.0;
          _SFD_DATA_RANGE_CHECK(*c1_ready, 7U);
          *c1_ready_sts = 1.0;
          _SFD_DATA_RANGE_CHECK(*c1_ready_sts, 6U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3);
      break;

     case c1_IN_to_rest:
      CV_STATE_EVAL(0, 0, 4);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 4);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 12);
      if (CV_TRANSITION_EVAL(12U, (int32_T)_SFD_CCP_CALL(12U, 0, *c1_ready_cmd
            != 0U)) != 0) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions = 1;
          transitionList[0] = 12;
          sf_debug_transition_conflict_check_begin();
          if (*c1_ready_cmd == *c1_ready_fbk) {
            transitionList[numTransitions] = 9;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions > 1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 12);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG, 4);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 4);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4);
        *c1_is_ready_mode = c1_IN_to_ready;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 3);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 9);
        if (CV_TRANSITION_EVAL(9U, (int32_T)_SFD_CCP_CALL(9U, 0, *c1_ready_cmd ==
              *c1_ready_fbk != 0U)) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 9);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG, 4);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 4);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4);
          *c1_is_ready_mode = c1_IN_rest;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 2);
        } else {
          *c1_ready = 0.0;
          _SFD_DATA_RANGE_CHECK(*c1_ready, 7U);
          *c1_ready_sts = 3.0;
          _SFD_DATA_RANGE_CHECK(*c1_ready_sts, 6U);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4);
      break;

     default:
      CV_STATE_EVAL(0, 0, 0);
      *c1_is_ready_mode = (uint8_T)c1_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 1);
      break;
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0);
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0);
  _sfEvent_ = c1_previousEvent;
  sf_debug_check_for_state_inconsistency(_ffffMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void compInitSubchartSimstructsFcn_c1_ffff(SFc1_ffffInstanceStruct
  *chartInstance)
{
}

static void c1_run_mode(SFc1_ffffInstanceStruct *chartInstance)
{
  boolean_T c1_temp;
  boolean_T c1_b_temp;
  real_T *c1_start_cmd;
  real_T *c1_start;
  real_T *c1_start_sts;
  uint8_T *c1_is_ready_mode;
  uint8_T *c1_is_run_mode;
  real_T *c1_start_fbk;
  c1_start_sts = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c1_start = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c1_start_cmd = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c1_start_fbk = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c1_is_ready_mode = (uint8_T *)ssGetDWork(chartInstance->S, 5);
  c1_is_run_mode = (uint8_T *)ssGetDWork(chartInstance->S, 3);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 5);
  switch (*c1_is_run_mode) {
   case c1_IN_running:
    CV_STATE_EVAL(5, 0, 1);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 6);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3);
    if (CV_TRANSITION_EVAL(3U, !(_SFD_CCP_CALL(3U, 0, *c1_start_cmd != 0U) != 0))
        != 0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG, 6);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 6);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 6);
      *c1_is_run_mode = c1_IN_to_stopped;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 9);
    } else {
      *c1_start = 1.0;
      _SFD_DATA_RANGE_CHECK(*c1_start, 4U);
      *c1_start_sts = 2.0;
      _SFD_DATA_RANGE_CHECK(*c1_start_sts, 5U);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 6);
    break;

   case c1_IN_stopped:
    CV_STATE_EVAL(5, 0, 2);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 7);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1);
    c1_temp = (_SFD_CCP_CALL(1U, 0, *c1_start_cmd != 0U) != 0);
    if (c1_temp) {
      c1_temp = (_SFD_CCP_CALL(1U, 1, *c1_is_ready_mode == c1_IN_ready != 0U) !=
                 0);
    }

    if (CV_TRANSITION_EVAL(1U, (int32_T)c1_temp) != 0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG, 7);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 7);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 7);
      *c1_is_run_mode = c1_IN_to_running;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 8);
    } else {
      *c1_start = 0.0;
      _SFD_DATA_RANGE_CHECK(*c1_start, 4U);
      *c1_start_sts = 0.0;
      _SFD_DATA_RANGE_CHECK(*c1_start_sts, 5U);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 7);
    break;

   case c1_IN_to_running:
    CV_STATE_EVAL(5, 0, 3);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 8);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2);
    if (CV_TRANSITION_EVAL(2U, (int32_T)_SFD_CCP_CALL(2U, 0, *c1_start_cmd ==
          *c1_start_fbk != 0U)) != 0) {
      if (sf_debug_transition_conflict_check_enabled()) {
        unsigned int transitionList[2];
        unsigned int numTransitions = 1;
        transitionList[0] = 2;
        sf_debug_transition_conflict_check_begin();
        if (!(*c1_start_cmd != 0.0)) {
          transitionList[numTransitions] = 11;
          numTransitions++;
        }

        sf_debug_transition_conflict_check_end();
        if (numTransitions > 1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }

      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG, 8);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 8);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 8);
      *c1_is_run_mode = c1_IN_running;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 6);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 11);
      if (CV_TRANSITION_EVAL(11U, !(_SFD_CCP_CALL(11U, 0, *c1_start_cmd != 0U)
            != 0)) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 11);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG, 8);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 8);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 8);
        *c1_is_run_mode = c1_IN_to_stopped;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 9);
      } else {
        *c1_start = 1.0;
        _SFD_DATA_RANGE_CHECK(*c1_start, 4U);
        *c1_start_sts = 1.0;
        _SFD_DATA_RANGE_CHECK(*c1_start_sts, 5U);
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 8);
    break;

   case c1_IN_to_stopped:
    CV_STATE_EVAL(5, 0, 4);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 9);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 10);
    c1_b_temp = (_SFD_CCP_CALL(10U, 0, *c1_start_cmd != 0U) != 0);
    if (c1_b_temp) {
      c1_b_temp = (_SFD_CCP_CALL(10U, 1, *c1_is_ready_mode == c1_IN_ready != 0U)
                   != 0);
    }

    if (CV_TRANSITION_EVAL(10U, (int32_T)c1_b_temp) != 0) {
      if (sf_debug_transition_conflict_check_enabled()) {
        unsigned int transitionList[2];
        unsigned int numTransitions = 1;
        transitionList[0] = 10;
        sf_debug_transition_conflict_check_begin();
        if (*c1_start_cmd == *c1_start_fbk) {
          transitionList[numTransitions] = 4;
          numTransitions++;
        }

        sf_debug_transition_conflict_check_end();
        if (numTransitions > 1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }

      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 10);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG, 9);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 9);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 9);
      *c1_is_run_mode = c1_IN_to_running;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 8);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4);
      if (CV_TRANSITION_EVAL(4U, (int32_T)_SFD_CCP_CALL(4U, 0, *c1_start_cmd == *
            c1_start_fbk != 0U)) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG, 9);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 9);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 9);
        *c1_is_run_mode = c1_IN_stopped;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 7);
      } else {
        *c1_start = 0.0;
        _SFD_DATA_RANGE_CHECK(*c1_start, 4U);
        *c1_start_sts = 3.0;
        _SFD_DATA_RANGE_CHECK(*c1_start_sts, 5U);
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 9);
    break;

   default:
    CV_STATE_EVAL(5, 0, 0);
    *c1_is_run_mode = (uint8_T)c1_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 6);
    break;
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 5);
}

static void init_script_number_translation(uint32_T c1_machineNumber, uint32_T
  c1_chartNumber)
{
}

const mxArray *sf_c1_ffff_get_eml_resolved_functions_info(void)
{
  const mxArray *c1_nameCaptureInfo = NULL;
  c1_nameCaptureInfo = NULL;
  sf_mex_assign(&c1_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1));
  return c1_nameCaptureInfo;
}

static const mxArray *c1_sf_marshall(void *chartInstanceVoid, void *c1_u)
{
  const mxArray *c1_y = NULL;
  boolean_T c1_b_u;
  const mxArray *c1_b_y = NULL;
  SFc1_ffffInstanceStruct *chartInstance;
  chartInstance = (SFc1_ffffInstanceStruct *)chartInstanceVoid;
  c1_y = NULL;
  c1_b_u = *((boolean_T *)c1_u);
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", &c1_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c1_y, c1_b_y);
  return c1_y;
}

static const mxArray *c1_b_sf_marshall(void *chartInstanceVoid, void *c1_u)
{
  const mxArray *c1_y = NULL;
  uint8_T c1_b_u;
  const mxArray *c1_b_y = NULL;
  SFc1_ffffInstanceStruct *chartInstance;
  chartInstance = (SFc1_ffffInstanceStruct *)chartInstanceVoid;
  c1_y = NULL;
  c1_b_u = *((uint8_T *)c1_u);
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", &c1_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c1_y, c1_b_y);
  return c1_y;
}

static const mxArray *c1_c_sf_marshall(void *chartInstanceVoid, void *c1_u)
{
  const mxArray *c1_y = NULL;
  real_T c1_b_u;
  const mxArray *c1_b_y = NULL;
  SFc1_ffffInstanceStruct *chartInstance;
  chartInstance = (SFc1_ffffInstanceStruct *)chartInstanceVoid;
  c1_y = NULL;
  c1_b_u = *((real_T *)c1_u);
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", &c1_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c1_y, c1_b_y);
  return c1_y;
}

static real_T c1_emlrt_marshallIn(SFc1_ffffInstanceStruct *chartInstance, const
  mxArray *c1_ready, const char_T *c1_name)
{
  real_T c1_y;
  real_T c1_d0;
  sf_mex_import(c1_name, sf_mex_dup(c1_ready), &c1_d0, 1, 0, 0U, 0, 0U, 0);
  c1_y = c1_d0;
  sf_mex_destroy(&c1_ready);
  return c1_y;
}

static uint8_T c1_b_emlrt_marshallIn(SFc1_ffffInstanceStruct *chartInstance,
  const mxArray *c1_is_active_c1_ffff, const char_T *
  c1_name)
{
  uint8_T c1_y;
  uint8_T c1_u0;
  sf_mex_import(c1_name, sf_mex_dup(c1_is_active_c1_ffff), &c1_u0, 1, 3, 0U, 0,
                0U, 0);
  c1_y = c1_u0;
  sf_mex_destroy(&c1_is_active_c1_ffff);
  return c1_y;
}

static const mxArray *c1_c_emlrt_marshallIn(SFc1_ffffInstanceStruct
  *chartInstance, const mxArray *c1_b_setSimStateSideEffectsInfo,
  const char_T *c1_name)
{
  const mxArray *c1_y = NULL;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_duplicatearraysafe
                (&c1_b_setSimStateSideEffectsInfo));
  sf_mex_destroy(&c1_b_setSimStateSideEffectsInfo);
  return c1_y;
}

static void init_dsm_address_info(SFc1_ffffInstanceStruct *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c1_ffff_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1074917105U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(250458251U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2746672779U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(352962488U);
}

mxArray *sf_c1_ffff_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(3458639264U);
    pr[1] = (double)(3947799496U);
    pr[2] = (double)(806861320U);
    pr[3] = (double)(1812659924U);
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,4,3,dataFields);

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

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,2,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,2,"type",mxType);
    }

    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,3,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,3,"type",mxType);
    }

    mxSetField(mxData,3,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,4,3,dataFields);

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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,2,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,2,"type",mxType);
    }

    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,3,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,3,"type",mxType);
    }

    mxSetField(mxData,3,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  return(mxAutoinheritanceInfo);
}

static mxArray *sf_get_sim_state_info_c1_ffff(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x9'type','srcId','name','auxInfo'{{M[1],M[32],T\"ready\",},{M[1],M[31],T\"ready_sts\",},{M[1],M[29],T\"start\",},{M[1],M[30],T\"start_sts\",},{M[8],M[0],T\"is_active_c1_ffff\",},{M[8],M[1],T\"is_active_run_mode\",},{M[8],M[2],T\"is_active_ready_mode\",},{M[9],M[1],T\"is_run_mode\",},{M[9],M[2],T\"is_ready_mode\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 9, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c1_ffff_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc1_ffffInstanceStruct *chartInstance;
    chartInstance = (SFc1_ffffInstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart(_ffffMachineNumber_,
          1,
          10,
          14,
          8,
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
          init_script_number_translation(_ffffMachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting(_ffffMachineNumber_,
            chartInstance->chartNumber,0);
          sf_debug_set_chart_event_thresholds(_ffffMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,"start_fbk");
          _SFD_SET_DATA_PROPS(1,1,1,0,"start_cmd");
          _SFD_SET_DATA_PROPS(2,1,1,0,"ready_cmd");
          _SFD_SET_DATA_PROPS(3,1,1,0,"ready_fbk");
          _SFD_SET_DATA_PROPS(4,2,0,1,"start");
          _SFD_SET_DATA_PROPS(5,2,0,1,"start_sts");
          _SFD_SET_DATA_PROPS(6,2,0,1,"ready_sts");
          _SFD_SET_DATA_PROPS(7,2,0,1,"ready");
          _SFD_STATE_INFO(0,0,1);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_STATE_INFO(3,0,0);
          _SFD_STATE_INFO(4,0,0);
          _SFD_STATE_INFO(5,0,1);
          _SFD_STATE_INFO(6,0,0);
          _SFD_STATE_INFO(7,0,0);
          _SFD_STATE_INFO(8,0,0);
          _SFD_STATE_INFO(9,0,0);
          _SFD_CH_SUBSTATE_COUNT(2);
          _SFD_CH_SUBSTATE_DECOMP(1);
          _SFD_CH_SUBSTATE_INDEX(0,5);
          _SFD_CH_SUBSTATE_INDEX(1,0);
          _SFD_ST_SUBSTATE_COUNT(5,4);
          _SFD_ST_SUBSTATE_INDEX(5,0,6);
          _SFD_ST_SUBSTATE_INDEX(5,1,7);
          _SFD_ST_SUBSTATE_INDEX(5,2,8);
          _SFD_ST_SUBSTATE_INDEX(5,3,9);
          _SFD_ST_SUBSTATE_COUNT(6,0);
          _SFD_ST_SUBSTATE_COUNT(7,0);
          _SFD_ST_SUBSTATE_COUNT(8,0);
          _SFD_ST_SUBSTATE_COUNT(9,0);
          _SFD_ST_SUBSTATE_COUNT(0,4);
          _SFD_ST_SUBSTATE_INDEX(0,0,1);
          _SFD_ST_SUBSTATE_INDEX(0,1,2);
          _SFD_ST_SUBSTATE_INDEX(0,2,3);
          _SFD_ST_SUBSTATE_INDEX(0,3,4);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,0);
          _SFD_ST_SUBSTATE_COUNT(4,0);
        }

        _SFD_CV_INIT_CHART(2,0,0,0);

        {
          _SFD_CV_INIT_STATE(0,4,1,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(1,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(2,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(3,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(4,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(5,4,1,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(6,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(7,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(8,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(9,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1, 12 };

          static unsigned int sEndGuardMap[] = { 10, 32 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(1,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 21 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(2,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0, -1 };

          _SFD_CV_INIT_TRANS(3,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),2,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 21 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(4,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(5,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 10 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(6,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 21 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(7,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 13 };

          static unsigned int sEndGuardMap[] = { 11, 33 };

          static int sPostFixPredicateTree[] = { 0, -1, 1, -3 };

          _SFD_CV_INIT_TRANS(8,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),4,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 21 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(9,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 12 };

          static unsigned int sEndGuardMap[] = { 10, 32 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(10,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0, -1 };

          _SFD_CV_INIT_TRANS(11,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),2,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 10 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(12,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 13 };

          static unsigned int sEndGuardMap[] = { 11, 33 };

          static int sPostFixPredicateTree[] = { 0, -1, 1, -3 };

          _SFD_CV_INIT_TRANS(13,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),4,
                             &(sPostFixPredicateTree[0]));
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
          static unsigned int sStartGuardMap[] = { 1, 12 };

          static unsigned int sEndGuardMap[] = { 10, 32 };

          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 21 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(3,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 11 };

          _SFD_TRANS_COV_MAPS(3,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(4,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 21 };

          _SFD_TRANS_COV_MAPS(4,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(5,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(5,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(6,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 10 };

          _SFD_TRANS_COV_MAPS(6,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(7,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 21 };

          _SFD_TRANS_COV_MAPS(7,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(8,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 13 };

          static unsigned int sEndGuardMap[] = { 11, 33 };

          _SFD_TRANS_COV_MAPS(8,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(9,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 21 };

          _SFD_TRANS_COV_MAPS(9,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(10,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 12 };

          static unsigned int sEndGuardMap[] = { 10, 32 };

          _SFD_TRANS_COV_MAPS(10,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(11,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 11 };

          _SFD_TRANS_COV_MAPS(11,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(12,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 10 };

          _SFD_TRANS_COV_MAPS(12,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(13,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 2, 13 };

          static unsigned int sEndGuardMap[] = { 11, 33 };

          _SFD_TRANS_COV_MAPS(13,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_c_sf_marshall);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_c_sf_marshall);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_c_sf_marshall);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_c_sf_marshall);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_c_sf_marshall);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_c_sf_marshall);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_c_sf_marshall);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_c_sf_marshall);

        {
          real_T *c1_start_fbk;
          real_T *c1_start_cmd;
          real_T *c1_ready_cmd;
          real_T *c1_ready_fbk;
          real_T *c1_start;
          real_T *c1_start_sts;
          real_T *c1_ready_sts;
          real_T *c1_ready;
          c1_ready = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
          c1_ready_sts = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
          c1_start_sts = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
          c1_start = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c1_ready_fbk = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c1_ready_cmd = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c1_start_cmd = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c1_start_fbk = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c1_start_fbk);
          _SFD_SET_DATA_VALUE_PTR(1U, c1_start_cmd);
          _SFD_SET_DATA_VALUE_PTR(2U, c1_ready_cmd);
          _SFD_SET_DATA_VALUE_PTR(3U, c1_ready_fbk);
          _SFD_SET_DATA_VALUE_PTR(4U, c1_start);
          _SFD_SET_DATA_VALUE_PTR(5U, c1_start_sts);
          _SFD_SET_DATA_VALUE_PTR(6U, c1_ready_sts);
          _SFD_SET_DATA_VALUE_PTR(7U, c1_ready);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(_ffffMachineNumber_,
        chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c1_ffff(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc1_ffffInstanceStruct*) chartInstanceVar)->S,0);
  initialize_params_c1_ffff((SFc1_ffffInstanceStruct*) chartInstanceVar);
  initialize_c1_ffff((SFc1_ffffInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c1_ffff(void *chartInstanceVar)
{
  enable_c1_ffff((SFc1_ffffInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c1_ffff(void *chartInstanceVar)
{
  disable_c1_ffff((SFc1_ffffInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c1_ffff(void *chartInstanceVar)
{
  sf_c1_ffff((SFc1_ffffInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_ext_mode_exec_c1_ffff(void *chartInstanceVar)
{
  ext_mode_exec_c1_ffff((SFc1_ffffInstanceStruct*) chartInstanceVar);
}

static mxArray* sf_internal_get_sim_state_c1_ffff(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c1_ffff((SFc1_ffffInstanceStruct*)
    chartInfo->chartInstance);         /* raw sim ctx */
  prhs[3] = sf_get_sim_state_info_c1_ffff();/* state var info */
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

static void sf_internal_set_sim_state_c1_ffff(SimStruct* S, const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c1_ffff();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c1_ffff((SFc1_ffffInstanceStruct*)chartInfo->chartInstance,
                        mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static mxArray* sf_opaque_get_sim_state_c1_ffff(SimStruct* S)
{
  return sf_internal_get_sim_state_c1_ffff(S);
}

static void sf_opaque_set_sim_state_c1_ffff(SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c1_ffff(S, st);
}

static void sf_opaque_terminate_c1_ffff(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc1_ffffInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c1_ffff((SFc1_ffffInstanceStruct*) chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  compInitSubchartSimstructsFcn_c1_ffff((SFc1_ffffInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c1_ffff(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c1_ffff((SFc1_ffffInstanceStruct*)(((ChartInfoStruct *)
      ssGetUserData(S))->chartInstance));
  }
}

mxArray *sf_c1_ffff_get_testpoint_info(void)
{
  return NULL;
}

static void sf_set_sfun_dwork_info(SimStruct *S)
{
  const char *dworkEncStr[] = {
    "100 S1x6'type','isSigned','wordLength','bias','slope','exponent','isComplex','size'{{T\"boolean\",,,,,,M[0],M[]},{T\"uint8\",,,,,,M[0],M[]},{T\"uint8\",,,,,,M[0],M[]},{T\"uint8\",,,,,,M[0],M[]},{T\"uint8\",,,,,,M[0],M[]},{T\"uint8\",,,,,,M[0],M[]}}"
  };

  sf_set_encoded_dwork_info(S, dworkEncStr, 6, 10);
}

static void mdlSetWorkWidths_c1_ffff(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,"ffff","ffff",1);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,"ffff","ffff",1,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,"ffff","ffff",1,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"ffff","ffff",1,4);
      sf_mark_chart_reusable_outputs(S,"ffff","ffff",1,4);
    }

    sf_set_rtw_dwork_info(S,"ffff","ffff",1);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
    sf_set_sfun_dwork_info(S);
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(4018297988U));
  ssSetChecksum1(S,(3113874060U));
  ssSetChecksum2(S,(2564467622U));
  ssSetChecksum3(S,(4225849353U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c1_ffff(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "ffff", "ffff",1);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c1_ffff(SimStruct *S)
{
  SFc1_ffffInstanceStruct *chartInstance;
  chartInstance = (SFc1_ffffInstanceStruct *)malloc(sizeof
    (SFc1_ffffInstanceStruct));
  memset(chartInstance, 0, sizeof(SFc1_ffffInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c1_ffff;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c1_ffff;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c1_ffff;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c1_ffff;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c1_ffff;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c1_ffff;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c1_ffff;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c1_ffff;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c1_ffff;
  chartInstance->chartInfo.mdlStart = mdlStart_c1_ffff;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c1_ffff;
  chartInstance->chartInfo.extModeExec = sf_opaque_ext_mode_exec_c1_ffff;
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

void c1_ffff_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c1_ffff(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c1_ffff(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c1_ffff(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c1_ffff_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
