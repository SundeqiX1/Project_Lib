/* Include files */

#include "untitled_sfun.h"
#include "c25_untitled.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "untitled_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c_with_debugger(S, sfGlobalDebugInstanceStruct);

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization);
static void chart_debug_initialize_data_addresses(SimStruct *S);
static const mxArray* sf_opaque_get_hover_data_for_msg(void *chartInstance,
  int32_T msgSSID);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)
#define c25_IN_NO_ACTIVE_CHILD         ((uint8_T)0U)
#define c25_IN_off                     ((uint8_T)1U)
#define c25_IN_on                      ((uint8_T)2U)
#define c25_IN_on1                     ((uint8_T)3U)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static const char * c25_debug_family_names[2] = { "nargin", "nargout" };

static const char * c25_b_debug_family_names[2] = { "nargin", "nargout" };

static const char * c25_c_debug_family_names[2] = { "nargin", "nargout" };

static const char * c25_d_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c25_e_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c25_f_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

/* Function Declarations */
static void initialize_c25_untitled(SFc25_untitledInstanceStruct *chartInstance);
static void initialize_params_c25_untitled(SFc25_untitledInstanceStruct
  *chartInstance);
static void enable_c25_untitled(SFc25_untitledInstanceStruct *chartInstance);
static void disable_c25_untitled(SFc25_untitledInstanceStruct *chartInstance);
static void c25_update_debugger_state_c25_untitled(SFc25_untitledInstanceStruct *
  chartInstance);
static void ext_mode_exec_c25_untitled(SFc25_untitledInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c25_untitled(SFc25_untitledInstanceStruct
  *chartInstance);
static void set_sim_state_c25_untitled(SFc25_untitledInstanceStruct
  *chartInstance, const mxArray *c25_st);
static void c25_set_sim_state_side_effects_c25_untitled
  (SFc25_untitledInstanceStruct *chartInstance);
static void finalize_c25_untitled(SFc25_untitledInstanceStruct *chartInstance);
static void sf_gateway_c25_untitled(SFc25_untitledInstanceStruct *chartInstance);
static void mdl_start_c25_untitled(SFc25_untitledInstanceStruct *chartInstance);
static void c25_chartstep_c25_untitled(SFc25_untitledInstanceStruct
  *chartInstance);
static void initSimStructsc25_untitled(SFc25_untitledInstanceStruct
  *chartInstance);
static void init_script_number_translation(uint32_T c25_machineNumber, uint32_T
  c25_chartNumber, uint32_T c25_instanceNumber);
static const mxArray *c25_sf_marshallOut(void *chartInstanceVoid, void
  *c25_inData);
static real_T c25_emlrt_marshallIn(SFc25_untitledInstanceStruct *chartInstance,
  const mxArray *c25_nargout, const char_T *c25_identifier);
static real_T c25_b_emlrt_marshallIn(SFc25_untitledInstanceStruct *chartInstance,
  const mxArray *c25_u, const emlrtMsgIdentifier *c25_parentId);
static void c25_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c25_mxArrayInData, const char_T *c25_varName, void *c25_outData);
static const mxArray *c25_b_sf_marshallOut(void *chartInstanceVoid, void
  *c25_inData);
static boolean_T c25_c_emlrt_marshallIn(SFc25_untitledInstanceStruct
  *chartInstance, const mxArray *c25_u, const emlrtMsgIdentifier *c25_parentId);
static void c25_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c25_mxArrayInData, const char_T *c25_varName, void *c25_outData);
static const mxArray *c25_c_sf_marshallOut(void *chartInstanceVoid, void
  *c25_inData);
static int32_T c25_d_emlrt_marshallIn(SFc25_untitledInstanceStruct
  *chartInstance, const mxArray *c25_u, const emlrtMsgIdentifier *c25_parentId);
static void c25_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c25_mxArrayInData, const char_T *c25_varName, void *c25_outData);
static uint8_T c25_e_emlrt_marshallIn(SFc25_untitledInstanceStruct
  *chartInstance, const mxArray *c25_b_is_active_c25_untitled, const char_T
  *c25_identifier);
static uint8_T c25_f_emlrt_marshallIn(SFc25_untitledInstanceStruct
  *chartInstance, const mxArray *c25_u, const emlrtMsgIdentifier *c25_parentId);
static void c25_g_emlrt_marshallIn(SFc25_untitledInstanceStruct *chartInstance,
  const mxArray *c25_b_dataWrittenToVector, const char_T *c25_identifier,
  boolean_T c25_y[2]);
static void c25_h_emlrt_marshallIn(SFc25_untitledInstanceStruct *chartInstance,
  const mxArray *c25_u, const emlrtMsgIdentifier *c25_parentId, boolean_T c25_y
  [2]);
static const mxArray *c25_i_emlrt_marshallIn(SFc25_untitledInstanceStruct
  *chartInstance, const mxArray *c25_b_setSimStateSideEffectsInfo, const char_T *
  c25_identifier);
static const mxArray *c25_j_emlrt_marshallIn(SFc25_untitledInstanceStruct
  *chartInstance, const mxArray *c25_u, const emlrtMsgIdentifier *c25_parentId);
static const mxArray *sf_get_hover_data_for_msg(SFc25_untitledInstanceStruct
  *chartInstance, int32_T c25_ssid);
static void c25_init_sf_message_store_memory(SFc25_untitledInstanceStruct
  *chartInstance);
static void init_dsm_address_info(SFc25_untitledInstanceStruct *chartInstance);
static void init_simulink_io_address(SFc25_untitledInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c25_untitled(SFc25_untitledInstanceStruct *chartInstance)
{
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc25_untitled(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  *chartInstance->c25_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c25_doSetSimStateSideEffects = 0U;
  chartInstance->c25_setSimStateSideEffectsInfo = NULL;
  *chartInstance->c25_is_active_c25_untitled = 0U;
  *chartInstance->c25_is_c25_untitled = c25_IN_NO_ACTIVE_CHILD;
}

static void initialize_params_c25_untitled(SFc25_untitledInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void enable_c25_untitled(SFc25_untitledInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c25_untitled(SFc25_untitledInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c25_update_debugger_state_c25_untitled(SFc25_untitledInstanceStruct *
  chartInstance)
{
  uint32_T c25_prevAniVal;
  c25_prevAniVal = _SFD_GET_ANIMATION();
  _SFD_SET_ANIMATION(0U);
  _SFD_SET_HONOR_BREAKPOINTS(0U);
  if (*chartInstance->c25_is_active_c25_untitled == 1U) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 0U, *chartInstance->c25_sfEvent);
  }

  if (*chartInstance->c25_is_c25_untitled == c25_IN_off) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c25_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c25_sfEvent);
  }

  if (*chartInstance->c25_is_c25_untitled == c25_IN_on) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c25_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c25_sfEvent);
  }

  if (*chartInstance->c25_is_c25_untitled == c25_IN_on1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c25_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c25_sfEvent);
  }

  _SFD_SET_ANIMATION(c25_prevAniVal);
  _SFD_SET_HONOR_BREAKPOINTS(1U);
  _SFD_ANIMATE();
}

static void ext_mode_exec_c25_untitled(SFc25_untitledInstanceStruct
  *chartInstance)
{
  c25_update_debugger_state_c25_untitled(chartInstance);
}

static const mxArray *get_sim_state_c25_untitled(SFc25_untitledInstanceStruct
  *chartInstance)
{
  const mxArray *c25_st;
  const mxArray *c25_y = NULL;
  real_T c25_hoistedGlobal;
  const mxArray *c25_b_y = NULL;
  real_T c25_b_hoistedGlobal;
  const mxArray *c25_c_y = NULL;
  uint8_T c25_c_hoistedGlobal;
  const mxArray *c25_d_y = NULL;
  uint8_T c25_d_hoistedGlobal;
  const mxArray *c25_e_y = NULL;
  const mxArray *c25_f_y = NULL;
  c25_st = NULL;
  c25_st = NULL;
  c25_y = NULL;
  sf_mex_assign(&c25_y, sf_mex_createcellmatrix(5, 1), false);
  c25_hoistedGlobal = *chartInstance->c25_kaigaihuanchongyichang;
  c25_b_y = NULL;
  sf_mex_assign(&c25_b_y, sf_mex_create("y", &c25_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c25_y, 0, c25_b_y);
  c25_b_hoistedGlobal = *chartInstance->c25_t;
  c25_c_y = NULL;
  sf_mex_assign(&c25_c_y, sf_mex_create("y", &c25_b_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c25_y, 1, c25_c_y);
  c25_c_hoistedGlobal = *chartInstance->c25_is_active_c25_untitled;
  c25_d_y = NULL;
  sf_mex_assign(&c25_d_y, sf_mex_create("y", &c25_c_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c25_y, 2, c25_d_y);
  c25_d_hoistedGlobal = *chartInstance->c25_is_c25_untitled;
  c25_e_y = NULL;
  sf_mex_assign(&c25_e_y, sf_mex_create("y", &c25_d_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c25_y, 3, c25_e_y);
  c25_f_y = NULL;
  sf_mex_assign(&c25_f_y, sf_mex_create("y",
    chartInstance->c25_dataWrittenToVector, 11, 0U, 1U, 0U, 1, 2), false);
  sf_mex_setcell(c25_y, 4, c25_f_y);
  sf_mex_assign(&c25_st, c25_y, false);
  return c25_st;
}

static void set_sim_state_c25_untitled(SFc25_untitledInstanceStruct
  *chartInstance, const mxArray *c25_st)
{
  const mxArray *c25_u;
  boolean_T c25_bv0[2];
  int32_T c25_i0;
  c25_u = sf_mex_dup(c25_st);
  *chartInstance->c25_kaigaihuanchongyichang = c25_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell("kaigaihuanchongyichang", c25_u, 0)),
     "kaigaihuanchongyichang");
  *chartInstance->c25_t = c25_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("t", c25_u, 1)), "t");
  *chartInstance->c25_is_active_c25_untitled = c25_e_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell("is_active_c25_untitled", c25_u, 2)),
     "is_active_c25_untitled");
  *chartInstance->c25_is_c25_untitled = c25_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_c25_untitled", c25_u, 3)), "is_c25_untitled");
  c25_g_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(
    "dataWrittenToVector", c25_u, 4)), "dataWrittenToVector", c25_bv0);
  for (c25_i0 = 0; c25_i0 < 2; c25_i0++) {
    chartInstance->c25_dataWrittenToVector[c25_i0] = c25_bv0[c25_i0];
  }

  sf_mex_assign(&chartInstance->c25_setSimStateSideEffectsInfo,
                c25_i_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(
    "setSimStateSideEffectsInfo", c25_u, 5)), "setSimStateSideEffectsInfo"),
                true);
  sf_mex_destroy(&c25_u);
  chartInstance->c25_doSetSimStateSideEffects = 1U;
  c25_update_debugger_state_c25_untitled(chartInstance);
  sf_mex_destroy(&c25_st);
}

static void c25_set_sim_state_side_effects_c25_untitled
  (SFc25_untitledInstanceStruct *chartInstance)
{
  if (chartInstance->c25_doSetSimStateSideEffects != 0) {
    chartInstance->c25_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c25_untitled(SFc25_untitledInstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c25_setSimStateSideEffectsInfo);
}

static void sf_gateway_c25_untitled(SFc25_untitledInstanceStruct *chartInstance)
{
  c25_set_sim_state_side_effects_c25_untitled(chartInstance);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 0U, *chartInstance->c25_sfEvent);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c25_kaigaihuanxiang, 2U, 1U, 0U,
                        *chartInstance->c25_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c25_kaigaihuanchong, 1U, 1U, 0U,
                        *chartInstance->c25_sfEvent, false);
  *chartInstance->c25_sfEvent = CALL_EVENT;
  c25_chartstep_c25_untitled(chartInstance);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_untitledMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void mdl_start_c25_untitled(SFc25_untitledInstanceStruct *chartInstance)
{
  c25_init_sf_message_store_memory(chartInstance);
}

static void c25_chartstep_c25_untitled(SFc25_untitledInstanceStruct
  *chartInstance)
{
  uint32_T c25_debug_family_var_map[3];
  real_T c25_nargin = 0.0;
  real_T c25_b_nargin = 0.0;
  real_T c25_nargout = 1.0;
  real_T c25_b_nargout = 1.0;
  boolean_T c25_out;
  boolean_T c25_b_out;
  uint32_T c25_b_debug_family_var_map[2];
  real_T c25_c_nargin = 0.0;
  real_T c25_c_nargout = 0.0;
  real_T c25_d_nargin = 0.0;
  real_T c25_d_nargout = 0.0;
  real_T c25_e_nargin = 0.0;
  real_T c25_e_nargout = 1.0;
  boolean_T c25_c_out;
  real_T c25_f_nargin = 0.0;
  real_T c25_f_nargout = 0.0;
  real_T c25_g_nargin = 0.0;
  real_T c25_g_nargout = 0.0;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 0U, *chartInstance->c25_sfEvent);
  if (*chartInstance->c25_is_active_c25_untitled == 0U) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 0U, *chartInstance->c25_sfEvent);
    *chartInstance->c25_is_active_c25_untitled = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, *chartInstance->c25_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, *chartInstance->c25_sfEvent);
    *chartInstance->c25_is_c25_untitled = c25_IN_off;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c25_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c25_debug_family_names,
      c25_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c25_c_nargin, 0U, c25_sf_marshallOut,
      c25_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c25_c_nargout, 1U, c25_sf_marshallOut,
      c25_sf_marshallIn);
    *chartInstance->c25_kaigaihuanchongyichang = 0.0;
    chartInstance->c25_dataWrittenToVector[1U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c25_kaigaihuanchongyichang, 3U, 4U, 0U,
                          *chartInstance->c25_sfEvent, false);
    *chartInstance->c25_t = 0.0;
    chartInstance->c25_dataWrittenToVector[0U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c25_t, 0U, 4U, 0U,
                          *chartInstance->c25_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
  } else {
    switch (*chartInstance->c25_is_c25_untitled) {
     case c25_IN_off:
      CV_CHART_EVAL(0, 0, 1);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                   *chartInstance->c25_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c25_d_debug_family_names,
        c25_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c25_nargin, 0U, c25_sf_marshallOut,
        c25_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c25_nargout, 1U, c25_sf_marshallOut,
        c25_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c25_out, 2U, c25_b_sf_marshallOut,
        c25_b_sf_marshallIn);
      c25_out = CV_EML_IF(1, 0, 0, CV_RELATIONAL_EVAL(5U, 1U, 0,
        *chartInstance->c25_kaigaihuanxiang, 1.0, -1, 0U,
        *chartInstance->c25_kaigaihuanxiang == 1.0));
      _SFD_SYMBOL_SCOPE_POP();
      if (c25_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, *chartInstance->c25_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c25_sfEvent);
        *chartInstance->c25_is_c25_untitled = c25_IN_on;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c25_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c25_b_debug_family_names,
          c25_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c25_d_nargin, 0U,
          c25_sf_marshallOut, c25_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c25_d_nargout, 1U,
          c25_sf_marshallOut, c25_sf_marshallIn);
        if (!chartInstance->c25_dataWrittenToVector[0U]) {
          _SFD_DATA_READ_BEFORE_WRITE_ERROR(0U, 4U, 1U,
            *chartInstance->c25_sfEvent, false);
        }

        *chartInstance->c25_t += 0.002;
        chartInstance->c25_dataWrittenToVector[0U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c25_t, 0U, 4U, 1U,
                              *chartInstance->c25_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U,
                     *chartInstance->c25_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, *chartInstance->c25_sfEvent);
      break;

     case c25_IN_on:
      CV_CHART_EVAL(0, 0, 2);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                   *chartInstance->c25_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c25_e_debug_family_names,
        c25_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c25_b_nargin, 0U, c25_sf_marshallOut,
        c25_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c25_b_nargout, 1U,
        c25_sf_marshallOut, c25_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c25_b_out, 2U, c25_b_sf_marshallOut,
        c25_b_sf_marshallIn);
      if (!chartInstance->c25_dataWrittenToVector[0U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(0U, 5U, 2U,
          *chartInstance->c25_sfEvent, false);
      }

      if (CV_EML_COND(2, 0, 0, CV_RELATIONAL_EVAL(5U, 2U, 0,
            *chartInstance->c25_t, 8.0, -1, 3U, *chartInstance->c25_t <= 8.0)) &&
          CV_EML_COND(2, 0, 1, CV_RELATIONAL_EVAL(5U, 2U, 1,
            *chartInstance->c25_kaigaihuanchong, 0.0, -1, 0U,
            *chartInstance->c25_kaigaihuanchong == 0.0))) {
        CV_EML_MCDC(2, 0, 0, true);
        CV_EML_IF(2, 0, 0, true);
        c25_b_out = true;
      } else {
        CV_EML_MCDC(2, 0, 0, false);
        CV_EML_IF(2, 0, 0, false);
        c25_b_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c25_b_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, *chartInstance->c25_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c25_sfEvent);
        *chartInstance->c25_is_c25_untitled = c25_IN_on;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c25_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c25_b_debug_family_names,
          c25_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c25_f_nargin, 0U,
          c25_sf_marshallOut, c25_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c25_f_nargout, 1U,
          c25_sf_marshallOut, c25_sf_marshallIn);
        if (!chartInstance->c25_dataWrittenToVector[0U]) {
          _SFD_DATA_READ_BEFORE_WRITE_ERROR(0U, 4U, 1U,
            *chartInstance->c25_sfEvent, false);
        }

        *chartInstance->c25_t += 0.002;
        chartInstance->c25_dataWrittenToVector[0U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c25_t, 0U, 4U, 1U,
                              *chartInstance->c25_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U,
                     *chartInstance->c25_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c25_f_debug_family_names,
          c25_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c25_e_nargin, 0U,
          c25_sf_marshallOut, c25_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c25_e_nargout, 1U,
          c25_sf_marshallOut, c25_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c25_c_out, 2U,
          c25_b_sf_marshallOut, c25_b_sf_marshallIn);
        if (!chartInstance->c25_dataWrittenToVector[0U]) {
          _SFD_DATA_READ_BEFORE_WRITE_ERROR(0U, 5U, 3U,
            *chartInstance->c25_sfEvent, false);
        }

        if (CV_EML_COND(3, 0, 0, CV_RELATIONAL_EVAL(5U, 3U, 0,
              *chartInstance->c25_t, 8.0, -1, 4U, *chartInstance->c25_t > 8.0)) &&
            CV_EML_COND(3, 0, 1, CV_RELATIONAL_EVAL(5U, 3U, 1,
              *chartInstance->c25_kaigaihuanchong, 1.0, -1, 0U,
              *chartInstance->c25_kaigaihuanchong == 1.0))) {
          CV_EML_MCDC(3, 0, 0, true);
          CV_EML_IF(3, 0, 0, true);
          c25_c_out = true;
        } else {
          CV_EML_MCDC(3, 0, 0, false);
          CV_EML_IF(3, 0, 0, false);
          c25_c_out = false;
        }

        _SFD_SYMBOL_SCOPE_POP();
        if (c25_c_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, *chartInstance->c25_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c25_sfEvent);
          *chartInstance->c25_is_c25_untitled = c25_IN_on1;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c25_sfEvent);
          _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c25_c_debug_family_names,
            c25_b_debug_family_var_map);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c25_g_nargin, 0U,
            c25_sf_marshallOut, c25_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c25_g_nargout, 1U,
            c25_sf_marshallOut, c25_sf_marshallIn);
          *chartInstance->c25_kaigaihuanchongyichang = 1.0;
          chartInstance->c25_dataWrittenToVector[1U] = true;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c25_kaigaihuanchongyichang, 3U,
                                4U, 2U, *chartInstance->c25_sfEvent, false);
          _SFD_SYMBOL_SCOPE_POP();
        } else {
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                       *chartInstance->c25_sfEvent);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, *chartInstance->c25_sfEvent);
      break;

     case c25_IN_on1:
      CV_CHART_EVAL(0, 0, 3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U,
                   *chartInstance->c25_sfEvent);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, *chartInstance->c25_sfEvent);
      break;

     default:
      CV_CHART_EVAL(0, 0, 0);

      /* Unreachable state, for coverage only */
      *chartInstance->c25_is_c25_untitled = c25_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c25_sfEvent);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, *chartInstance->c25_sfEvent);
}

static void initSimStructsc25_untitled(SFc25_untitledInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c25_machineNumber, uint32_T
  c25_chartNumber, uint32_T c25_instanceNumber)
{
  (void)c25_machineNumber;
  (void)c25_chartNumber;
  (void)c25_instanceNumber;
}

static const mxArray *c25_sf_marshallOut(void *chartInstanceVoid, void
  *c25_inData)
{
  const mxArray *c25_mxArrayOutData;
  real_T c25_u;
  const mxArray *c25_y = NULL;
  SFc25_untitledInstanceStruct *chartInstance;
  chartInstance = (SFc25_untitledInstanceStruct *)chartInstanceVoid;
  c25_mxArrayOutData = NULL;
  c25_mxArrayOutData = NULL;
  c25_u = *(real_T *)c25_inData;
  c25_y = NULL;
  sf_mex_assign(&c25_y, sf_mex_create("y", &c25_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c25_mxArrayOutData, c25_y, false);
  return c25_mxArrayOutData;
}

static real_T c25_emlrt_marshallIn(SFc25_untitledInstanceStruct *chartInstance,
  const mxArray *c25_nargout, const char_T *c25_identifier)
{
  real_T c25_y;
  emlrtMsgIdentifier c25_thisId;
  c25_thisId.fIdentifier = c25_identifier;
  c25_thisId.fParent = NULL;
  c25_thisId.bParentIsCell = false;
  c25_y = c25_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c25_nargout),
    &c25_thisId);
  sf_mex_destroy(&c25_nargout);
  return c25_y;
}

static real_T c25_b_emlrt_marshallIn(SFc25_untitledInstanceStruct *chartInstance,
  const mxArray *c25_u, const emlrtMsgIdentifier *c25_parentId)
{
  real_T c25_y;
  real_T c25_d0;
  (void)chartInstance;
  sf_mex_import(c25_parentId, sf_mex_dup(c25_u), &c25_d0, 1, 0, 0U, 0, 0U, 0);
  c25_y = c25_d0;
  sf_mex_destroy(&c25_u);
  return c25_y;
}

static void c25_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c25_mxArrayInData, const char_T *c25_varName, void *c25_outData)
{
  const mxArray *c25_nargout;
  const char_T *c25_identifier;
  emlrtMsgIdentifier c25_thisId;
  real_T c25_y;
  SFc25_untitledInstanceStruct *chartInstance;
  chartInstance = (SFc25_untitledInstanceStruct *)chartInstanceVoid;
  c25_nargout = sf_mex_dup(c25_mxArrayInData);
  c25_identifier = c25_varName;
  c25_thisId.fIdentifier = c25_identifier;
  c25_thisId.fParent = NULL;
  c25_thisId.bParentIsCell = false;
  c25_y = c25_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c25_nargout),
    &c25_thisId);
  sf_mex_destroy(&c25_nargout);
  *(real_T *)c25_outData = c25_y;
  sf_mex_destroy(&c25_mxArrayInData);
}

static const mxArray *c25_b_sf_marshallOut(void *chartInstanceVoid, void
  *c25_inData)
{
  const mxArray *c25_mxArrayOutData;
  boolean_T c25_u;
  const mxArray *c25_y = NULL;
  SFc25_untitledInstanceStruct *chartInstance;
  chartInstance = (SFc25_untitledInstanceStruct *)chartInstanceVoid;
  c25_mxArrayOutData = NULL;
  c25_mxArrayOutData = NULL;
  c25_u = *(boolean_T *)c25_inData;
  c25_y = NULL;
  sf_mex_assign(&c25_y, sf_mex_create("y", &c25_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c25_mxArrayOutData, c25_y, false);
  return c25_mxArrayOutData;
}

static boolean_T c25_c_emlrt_marshallIn(SFc25_untitledInstanceStruct
  *chartInstance, const mxArray *c25_u, const emlrtMsgIdentifier *c25_parentId)
{
  boolean_T c25_y;
  boolean_T c25_b0;
  (void)chartInstance;
  sf_mex_import(c25_parentId, sf_mex_dup(c25_u), &c25_b0, 1, 11, 0U, 0, 0U, 0);
  c25_y = c25_b0;
  sf_mex_destroy(&c25_u);
  return c25_y;
}

static void c25_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c25_mxArrayInData, const char_T *c25_varName, void *c25_outData)
{
  const mxArray *c25_sf_internal_predicateOutput;
  const char_T *c25_identifier;
  emlrtMsgIdentifier c25_thisId;
  boolean_T c25_y;
  SFc25_untitledInstanceStruct *chartInstance;
  chartInstance = (SFc25_untitledInstanceStruct *)chartInstanceVoid;
  c25_sf_internal_predicateOutput = sf_mex_dup(c25_mxArrayInData);
  c25_identifier = c25_varName;
  c25_thisId.fIdentifier = c25_identifier;
  c25_thisId.fParent = NULL;
  c25_thisId.bParentIsCell = false;
  c25_y = c25_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c25_sf_internal_predicateOutput), &c25_thisId);
  sf_mex_destroy(&c25_sf_internal_predicateOutput);
  *(boolean_T *)c25_outData = c25_y;
  sf_mex_destroy(&c25_mxArrayInData);
}

const mxArray *sf_c25_untitled_get_eml_resolved_functions_info(void)
{
  const mxArray *c25_nameCaptureInfo = NULL;
  c25_nameCaptureInfo = NULL;
  sf_mex_assign(&c25_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c25_nameCaptureInfo;
}

static const mxArray *c25_c_sf_marshallOut(void *chartInstanceVoid, void
  *c25_inData)
{
  const mxArray *c25_mxArrayOutData;
  int32_T c25_u;
  const mxArray *c25_y = NULL;
  SFc25_untitledInstanceStruct *chartInstance;
  chartInstance = (SFc25_untitledInstanceStruct *)chartInstanceVoid;
  c25_mxArrayOutData = NULL;
  c25_mxArrayOutData = NULL;
  c25_u = *(int32_T *)c25_inData;
  c25_y = NULL;
  sf_mex_assign(&c25_y, sf_mex_create("y", &c25_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c25_mxArrayOutData, c25_y, false);
  return c25_mxArrayOutData;
}

static int32_T c25_d_emlrt_marshallIn(SFc25_untitledInstanceStruct
  *chartInstance, const mxArray *c25_u, const emlrtMsgIdentifier *c25_parentId)
{
  int32_T c25_y;
  int32_T c25_i1;
  (void)chartInstance;
  sf_mex_import(c25_parentId, sf_mex_dup(c25_u), &c25_i1, 1, 6, 0U, 0, 0U, 0);
  c25_y = c25_i1;
  sf_mex_destroy(&c25_u);
  return c25_y;
}

static void c25_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c25_mxArrayInData, const char_T *c25_varName, void *c25_outData)
{
  const mxArray *c25_b_sfEvent;
  const char_T *c25_identifier;
  emlrtMsgIdentifier c25_thisId;
  int32_T c25_y;
  SFc25_untitledInstanceStruct *chartInstance;
  chartInstance = (SFc25_untitledInstanceStruct *)chartInstanceVoid;
  c25_b_sfEvent = sf_mex_dup(c25_mxArrayInData);
  c25_identifier = c25_varName;
  c25_thisId.fIdentifier = c25_identifier;
  c25_thisId.fParent = NULL;
  c25_thisId.bParentIsCell = false;
  c25_y = c25_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c25_b_sfEvent),
    &c25_thisId);
  sf_mex_destroy(&c25_b_sfEvent);
  *(int32_T *)c25_outData = c25_y;
  sf_mex_destroy(&c25_mxArrayInData);
}

static uint8_T c25_e_emlrt_marshallIn(SFc25_untitledInstanceStruct
  *chartInstance, const mxArray *c25_b_is_active_c25_untitled, const char_T
  *c25_identifier)
{
  uint8_T c25_y;
  emlrtMsgIdentifier c25_thisId;
  c25_thisId.fIdentifier = c25_identifier;
  c25_thisId.fParent = NULL;
  c25_thisId.bParentIsCell = false;
  c25_y = c25_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c25_b_is_active_c25_untitled), &c25_thisId);
  sf_mex_destroy(&c25_b_is_active_c25_untitled);
  return c25_y;
}

static uint8_T c25_f_emlrt_marshallIn(SFc25_untitledInstanceStruct
  *chartInstance, const mxArray *c25_u, const emlrtMsgIdentifier *c25_parentId)
{
  uint8_T c25_y;
  uint8_T c25_u0;
  (void)chartInstance;
  sf_mex_import(c25_parentId, sf_mex_dup(c25_u), &c25_u0, 1, 3, 0U, 0, 0U, 0);
  c25_y = c25_u0;
  sf_mex_destroy(&c25_u);
  return c25_y;
}

static void c25_g_emlrt_marshallIn(SFc25_untitledInstanceStruct *chartInstance,
  const mxArray *c25_b_dataWrittenToVector, const char_T *c25_identifier,
  boolean_T c25_y[2])
{
  emlrtMsgIdentifier c25_thisId;
  c25_thisId.fIdentifier = c25_identifier;
  c25_thisId.fParent = NULL;
  c25_thisId.bParentIsCell = false;
  c25_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c25_b_dataWrittenToVector),
    &c25_thisId, c25_y);
  sf_mex_destroy(&c25_b_dataWrittenToVector);
}

static void c25_h_emlrt_marshallIn(SFc25_untitledInstanceStruct *chartInstance,
  const mxArray *c25_u, const emlrtMsgIdentifier *c25_parentId, boolean_T c25_y
  [2])
{
  boolean_T c25_bv1[2];
  int32_T c25_i2;
  (void)chartInstance;
  sf_mex_import(c25_parentId, sf_mex_dup(c25_u), c25_bv1, 1, 11, 0U, 1, 0U, 1, 2);
  for (c25_i2 = 0; c25_i2 < 2; c25_i2++) {
    c25_y[c25_i2] = c25_bv1[c25_i2];
  }

  sf_mex_destroy(&c25_u);
}

static const mxArray *c25_i_emlrt_marshallIn(SFc25_untitledInstanceStruct
  *chartInstance, const mxArray *c25_b_setSimStateSideEffectsInfo, const char_T *
  c25_identifier)
{
  const mxArray *c25_y = NULL;
  emlrtMsgIdentifier c25_thisId;
  c25_y = NULL;
  c25_thisId.fIdentifier = c25_identifier;
  c25_thisId.fParent = NULL;
  c25_thisId.bParentIsCell = false;
  sf_mex_assign(&c25_y, c25_j_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c25_b_setSimStateSideEffectsInfo), &c25_thisId), false);
  sf_mex_destroy(&c25_b_setSimStateSideEffectsInfo);
  return c25_y;
}

static const mxArray *c25_j_emlrt_marshallIn(SFc25_untitledInstanceStruct
  *chartInstance, const mxArray *c25_u, const emlrtMsgIdentifier *c25_parentId)
{
  const mxArray *c25_y = NULL;
  (void)chartInstance;
  (void)c25_parentId;
  c25_y = NULL;
  sf_mex_assign(&c25_y, sf_mex_duplicatearraysafe(&c25_u), false);
  sf_mex_destroy(&c25_u);
  return c25_y;
}

static const mxArray *sf_get_hover_data_for_msg(SFc25_untitledInstanceStruct
  *chartInstance, int32_T c25_ssid)
{
  const mxArray *c25_msgInfo;
  (void)chartInstance;
  (void)c25_ssid;
  c25_msgInfo = NULL;
  return NULL;
}

static void c25_init_sf_message_store_memory(SFc25_untitledInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_dsm_address_info(SFc25_untitledInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc25_untitledInstanceStruct *chartInstance)
{
  chartInstance->c25_sfEvent = (int32_T *)ssGetDWork_wrapper(chartInstance->S, 0);
  chartInstance->c25_is_active_c25_untitled = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 1);
  chartInstance->c25_is_c25_untitled = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 2);
  chartInstance->c25_t = (real_T *)ssGetDWork_wrapper(chartInstance->S, 3);
  chartInstance->c25_kaigaihuanchongyichang = (real_T *)
    ssGetOutputPortSignal_wrapper(chartInstance->S, 1);
  chartInstance->c25_kaigaihuanchong = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c25_kaigaihuanxiang = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
}

/* SFunction Glue Code */
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

static uint32_T* sf_get_sfun_dwork_checksum(void);
void sf_c25_untitled_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2069051902U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(29789314U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(128549478U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3786560633U);
}

mxArray* sf_c25_untitled_get_post_codegen_info(void);
mxArray *sf_c25_untitled_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("7aXoMmjEjklrUYuYq69FIG");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,2,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));
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
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,1,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxData);
  }

  {
    mxArray* mxPostCodegenInfo = sf_c25_untitled_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c25_untitled_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c25_untitled_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("early");
  mxArray *fallbackReason = mxCreateString("ext_mode");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c25_untitled_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c25_untitled_get_post_codegen_info(void)
{
  const char* fieldNames[] = { "exportedFunctionsUsedByThisChart",
    "exportedFunctionsChecksum" };

  mwSize dims[2] = { 1, 1 };

  mxArray* mxPostCodegenInfo = mxCreateStructArray(2, dims, sizeof(fieldNames)/
    sizeof(fieldNames[0]), fieldNames);

  {
    mxArray* mxExportedFunctionsChecksum = mxCreateString("");
    mwSize exp_dims[2] = { 0, 1 };

    mxArray* mxExportedFunctionsUsedByThisChart = mxCreateCellArray(2, exp_dims);
    mxSetField(mxPostCodegenInfo, 0, "exportedFunctionsUsedByThisChart",
               mxExportedFunctionsUsedByThisChart);
    mxSetField(mxPostCodegenInfo, 0, "exportedFunctionsChecksum",
               mxExportedFunctionsChecksum);
  }

  return mxPostCodegenInfo;
}

static const mxArray *sf_get_sim_state_info_c25_untitled(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x5'type','srcId','name','auxInfo'{{M[1],M[8],T\"kaigaihuanchongyichang\",},{M[3],M[7],T\"t\",},{M[8],M[0],T\"is_active_c25_untitled\",},{M[9],M[0],T\"is_c25_untitled\",},{M[15],M[0],T\"dataWrittenToVector\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 5, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c25_untitled_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const mxArray* sf_opaque_get_hover_data_for_msg(void* chartInstance,
  int32_T msgSSID)
{
  return sf_get_hover_data_for_msg( (SFc25_untitledInstanceStruct *)
    chartInstance, msgSSID);
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc25_untitledInstanceStruct *chartInstance = (SFc25_untitledInstanceStruct *)
      sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _untitledMachineNumber_,
           25,
           3,
           4,
           0,
           4,
           0,
           0,
           0,
           0,
           0,
           &chartInstance->chartNumber,
           &chartInstance->instanceNumber,
           (void *)S);

        /* Each instance must initialize its own list of scripts */
        init_script_number_translation(_untitledMachineNumber_,
          chartInstance->chartNumber,chartInstance->instanceNumber);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          sf_debug_set_chart_disable_implicit_casting
            (sfGlobalDebugInstanceStruct,_untitledMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(sfGlobalDebugInstanceStruct,
            _untitledMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,0,0,0,"t");
          _SFD_SET_DATA_PROPS(1,1,1,0,"kaigaihuanchong");
          _SFD_SET_DATA_PROPS(2,1,1,0,"kaigaihuanxiang");
          _SFD_SET_DATA_PROPS(3,2,0,1,"kaigaihuanchongyichang");
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_CH_SUBSTATE_COUNT(3);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,1);
          _SFD_CH_SUBSTATE_INDEX(2,2);
          _SFD_ST_SUBSTATE_COUNT(0,0);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
        }

        _SFD_CV_INIT_CHART(3,1,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(1,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(2,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(1,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(2,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(3,0,NULL,NULL,0,NULL);

        /* Initialization of MATLAB Function Model Coverage */
        _SFD_CV_INIT_EML(0,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(1,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(2,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(1,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(1,0,0,1,19,1,19);
        _SFD_CV_INIT_EML_RELATIONAL(1,0,0,1,19,-1,0);
        _SFD_CV_INIT_EML(2,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(2,0,0,1,25,1,25);

        {
          static int condStart[] = { 1, 7 };

          static int condEnd[] = { 5, 25 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(2,0,0,1,25,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(2,0,0,1,5,-1,3);
        _SFD_CV_INIT_EML_RELATIONAL(2,0,1,7,25,-1,0);
        _SFD_CV_INIT_EML(3,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(3,0,0,1,24,1,24);

        {
          static int condStart[] = { 1, 6 };

          static int condEnd[] = { 4, 24 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(3,0,0,1,24,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(3,0,0,1,4,-1,4);
        _SFD_CV_INIT_EML_RELATIONAL(3,0,1,6,24,-1,0);
        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c25_sf_marshallOut,(MexInFcnForType)c25_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c25_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c25_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c25_sf_marshallOut,(MexInFcnForType)c25_sf_marshallIn);
      }
    } else {
      sf_debug_reset_current_state_configuration(sfGlobalDebugInstanceStruct,
        _untitledMachineNumber_,chartInstance->chartNumber,
        chartInstance->instanceNumber);
    }
  }
}

static void chart_debug_initialize_data_addresses(SimStruct *S)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc25_untitledInstanceStruct *chartInstance = (SFc25_untitledInstanceStruct *)
      sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        _SFD_SET_DATA_VALUE_PTR(0U, chartInstance->c25_t);
        _SFD_SET_DATA_VALUE_PTR(3U, chartInstance->c25_kaigaihuanchongyichang);
        _SFD_SET_DATA_VALUE_PTR(1U, chartInstance->c25_kaigaihuanchong);
        _SFD_SET_DATA_VALUE_PTR(2U, chartInstance->c25_kaigaihuanxiang);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "sWIcLOdzMDu52IuoLUv2VjH";
}

static void sf_check_dwork_consistency(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    const uint32_T *sfunDWorkChecksum = sf_get_sfun_dwork_checksum();
    mxArray *infoStruct = load_untitled_optimization_info(sim_mode_is_rtw_gen(S),
      sim_mode_is_modelref_sim(S), sim_mode_is_external(S));
    mxArray* mxRTWDWorkChecksum = sf_get_dwork_info_from_mat_file(S,
      sf_get_instance_specialization(), infoStruct, 25, "dworkChecksum");
    if (mxRTWDWorkChecksum != NULL) {
      double *pr = mxGetPr(mxRTWDWorkChecksum);
      if ((uint32_T)pr[0] != sfunDWorkChecksum[0] ||
          (uint32_T)pr[1] != sfunDWorkChecksum[1] ||
          (uint32_T)pr[2] != sfunDWorkChecksum[2] ||
          (uint32_T)pr[3] != sfunDWorkChecksum[3]) {
        sf_mex_error_message("Code generation and simulation targets registered different sets of persistent variables for the block. "
                             "External or Rapid Accelerator mode simulation requires code generation and simulation targets to "
                             "register the same set of persistent variables for this block. "
                             "This discrepancy is typically caused by MATLAB functions that have different code paths for "
                             "simulation and code generation targets where these code paths define different sets of persistent variables. "
                             "Please identify these code paths in the offending block and rewrite the MATLAB code so that "
                             "the set of persistent variables is the same between simulation and code generation.");
      }
    }
  }
}

static void sf_opaque_initialize_c25_untitled(void *chartInstanceVar)
{
  sf_check_dwork_consistency(((SFc25_untitledInstanceStruct*) chartInstanceVar
    )->S);
  chart_debug_initialization(((SFc25_untitledInstanceStruct*) chartInstanceVar
    )->S,0);
  initialize_params_c25_untitled((SFc25_untitledInstanceStruct*)
    chartInstanceVar);
  initialize_c25_untitled((SFc25_untitledInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c25_untitled(void *chartInstanceVar)
{
  enable_c25_untitled((SFc25_untitledInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c25_untitled(void *chartInstanceVar)
{
  disable_c25_untitled((SFc25_untitledInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c25_untitled(void *chartInstanceVar)
{
  sf_gateway_c25_untitled((SFc25_untitledInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_ext_mode_exec_c25_untitled(void *chartInstanceVar)
{
  ext_mode_exec_c25_untitled((SFc25_untitledInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c25_untitled(SimStruct* S)
{
  return get_sim_state_c25_untitled((SFc25_untitledInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c25_untitled(SimStruct* S, const mxArray *st)
{
  set_sim_state_c25_untitled((SFc25_untitledInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_terminate_c25_untitled(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc25_untitledInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_untitled_optimization_info();
    }

    finalize_c25_untitled((SFc25_untitledInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc25_untitled((SFc25_untitledInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c25_untitled(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c25_untitled((SFc25_untitledInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

mxArray *sf_c25_untitled_get_testpoint_info(void)
{
  return NULL;
}

static void sf_set_sfun_dwork_info(SimStruct *S)
{
  const char *dworkEncStr[] = {
    "100 S1x4'type','isSigned','wordLength','bias','slope','exponent','isScaledDouble','isComplex','size','local_queue_dwork_idx','local_queue_id'{{T\"int32\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"double\",,,,,,,M[0],M[],M[-1],M[-1]}}"
  };

  sf_set_encoded_dwork_info(S, dworkEncStr, 4, 10);
}

static uint32_T* sf_get_sfun_dwork_checksum()
{
  static uint32_T checksum[4] = { 294678633U, 1966649742U, 370666469U,
    2105092541U };

  return checksum;
}

static void mdlSetWorkWidths_c25_untitled(SimStruct *S)
{
  ssSetStatesModifiedOnlyInUpdate(S, 0);
  ssMdlUpdateIsEmpty(S, 1);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_untitled_optimization_info(sim_mode_is_rtw_gen(S),
      sim_mode_is_modelref_sim(S), sim_mode_is_external(S));
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      25);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,25,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_set_chart_accesses_machine_info(S, sf_get_instance_specialization(),
      infoStruct, 25);
    sf_update_buildInfo(S, sf_get_instance_specialization(),infoStruct,25);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,25,2);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,25,1);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=1; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 2; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,25);
    sf_register_codegen_names_for_scoped_functions_defined_by_chart(S);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
    sf_set_sfun_dwork_info(S);
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(1262889729U));
  ssSetChecksum1(S,(4098358447U));
  ssSetChecksum2(S,(3815977588U));
  ssSetChecksum3(S,(634080536U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSetStateSemanticsClassicAndSynchronous(S, true);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c25_untitled(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c25_untitled(SimStruct *S)
{
  SFc25_untitledInstanceStruct *chartInstance;
  chartInstance = (SFc25_untitledInstanceStruct *)utMalloc(sizeof
    (SFc25_untitledInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc25_untitledInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c25_untitled;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c25_untitled;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c25_untitled;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c25_untitled;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c25_untitled;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c25_untitled;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c25_untitled;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c25_untitled;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c25_untitled;
  chartInstance->chartInfo.mdlStart = mdlStart_c25_untitled;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c25_untitled;
  chartInstance->chartInfo.callGetHoverDataForMsg =
    sf_opaque_get_hover_data_for_msg;
  chartInstance->chartInfo.extModeExec = sf_opaque_ext_mode_exec_c25_untitled;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.debugInstance = sfGlobalDebugInstanceStruct;
  chartInstance->S = S;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  chart_debug_initialization(S,1);
  mdl_start_c25_untitled(chartInstance);
}

void c25_untitled_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c25_untitled(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c25_untitled(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c25_untitled(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c25_untitled_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
