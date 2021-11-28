/* Include files */

#include "gggg_sfun.h"
#include "c6_gggg.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "gggg_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c_with_debugger(S, sfGlobalDebugInstanceStruct);

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization);
static void chart_debug_initialize_data_addresses(SimStruct *S);
static const mxArray* sf_opaque_get_hover_data_for_msg(void *chartInstance,
  int32_T msgSSID);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)
#define c6_IN_NO_ACTIVE_CHILD          ((uint8_T)0U)
#define c6_IN_enable                   ((uint8_T)1U)
#define c6_IN_on1                      ((uint8_T)1U)
#define c6_IN_on3                      ((uint8_T)2U)
#define c6_IN_on4                      ((uint8_T)3U)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static const char * c6_debug_family_names[2] = { "nargin", "nargout" };

static const char * c6_b_debug_family_names[2] = { "nargin", "nargout" };

static const char * c6_c_debug_family_names[2] = { "nargin", "nargout" };

static const char * c6_d_debug_family_names[2] = { "nargin", "nargout" };

static const char * c6_e_debug_family_names[2] = { "nargin", "nargout" };

static const char * c6_f_debug_family_names[2] = { "nargin", "nargout" };

static const char * c6_g_debug_family_names[2] = { "nargin", "nargout" };

static const char * c6_h_debug_family_names[2] = { "nargin", "nargout" };

static const char * c6_i_debug_family_names[2] = { "nargin", "nargout" };

static const char * c6_j_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c6_k_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c6_l_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c6_m_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c6_n_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c6_o_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c6_p_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c6_q_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c6_r_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

/* Function Declarations */
static void initialize_c6_gggg(SFc6_ggggInstanceStruct *chartInstance);
static void initialize_params_c6_gggg(SFc6_ggggInstanceStruct *chartInstance);
static void enable_c6_gggg(SFc6_ggggInstanceStruct *chartInstance);
static void disable_c6_gggg(SFc6_ggggInstanceStruct *chartInstance);
static void c6_update_debugger_state_c6_gggg(SFc6_ggggInstanceStruct
  *chartInstance);
static void ext_mode_exec_c6_gggg(SFc6_ggggInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c6_gggg(SFc6_ggggInstanceStruct
  *chartInstance);
static void set_sim_state_c6_gggg(SFc6_ggggInstanceStruct *chartInstance, const
  mxArray *c6_st);
static void c6_set_sim_state_side_effects_c6_gggg(SFc6_ggggInstanceStruct
  *chartInstance);
static void finalize_c6_gggg(SFc6_ggggInstanceStruct *chartInstance);
static void sf_gateway_c6_gggg(SFc6_ggggInstanceStruct *chartInstance);
static void mdl_start_c6_gggg(SFc6_ggggInstanceStruct *chartInstance);
static void initSimStructsc6_gggg(SFc6_ggggInstanceStruct *chartInstance);
static void c6_enable1(SFc6_ggggInstanceStruct *chartInstance);
static void c6_enable(SFc6_ggggInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c6_machineNumber, uint32_T
  c6_chartNumber, uint32_T c6_instanceNumber);
static const mxArray *c6_sf_marshallOut(void *chartInstanceVoid, void *c6_inData);
static real_T c6_emlrt_marshallIn(SFc6_ggggInstanceStruct *chartInstance, const
  mxArray *c6_nargout, const char_T *c6_identifier);
static real_T c6_b_emlrt_marshallIn(SFc6_ggggInstanceStruct *chartInstance,
  const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId);
static void c6_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData);
static const mxArray *c6_b_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData);
static boolean_T c6_c_emlrt_marshallIn(SFc6_ggggInstanceStruct *chartInstance,
  const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId);
static void c6_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData);
static const mxArray *c6_c_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData);
static int32_T c6_d_emlrt_marshallIn(SFc6_ggggInstanceStruct *chartInstance,
  const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId);
static void c6_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData);
static const mxArray *c6_d_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData);
static uint8_T c6_e_emlrt_marshallIn(SFc6_ggggInstanceStruct *chartInstance,
  const mxArray *c6_b_is_enable1, const char_T *c6_identifier);
static uint8_T c6_f_emlrt_marshallIn(SFc6_ggggInstanceStruct *chartInstance,
  const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId);
static void c6_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData);
static void c6_g_emlrt_marshallIn(SFc6_ggggInstanceStruct *chartInstance, const
  mxArray *c6_b_dataWrittenToVector, const char_T *c6_identifier, boolean_T
  c6_y[3]);
static void c6_h_emlrt_marshallIn(SFc6_ggggInstanceStruct *chartInstance, const
  mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId, boolean_T c6_y[3]);
static const mxArray *c6_i_emlrt_marshallIn(SFc6_ggggInstanceStruct
  *chartInstance, const mxArray *c6_b_setSimStateSideEffectsInfo, const char_T
  *c6_identifier);
static const mxArray *c6_j_emlrt_marshallIn(SFc6_ggggInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId);
static const mxArray *sf_get_hover_data_for_msg(SFc6_ggggInstanceStruct
  *chartInstance, int32_T c6_ssid);
static void c6_init_sf_message_store_memory(SFc6_ggggInstanceStruct
  *chartInstance);
static void init_dsm_address_info(SFc6_ggggInstanceStruct *chartInstance);
static void init_simulink_io_address(SFc6_ggggInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c6_gggg(SFc6_ggggInstanceStruct *chartInstance)
{
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc6_gggg(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  *chartInstance->c6_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c6_doSetSimStateSideEffects = 0U;
  chartInstance->c6_setSimStateSideEffectsInfo = NULL;
  *chartInstance->c6_is_active_enable1 = 0U;
  *chartInstance->c6_is_enable1 = c6_IN_NO_ACTIVE_CHILD;
  *chartInstance->c6_is_active_enable2 = 0U;
  *chartInstance->c6_is_enable2 = c6_IN_NO_ACTIVE_CHILD;
  *chartInstance->c6_is_active_enable3 = 0U;
  *chartInstance->c6_is_enable3 = c6_IN_NO_ACTIVE_CHILD;
  *chartInstance->c6_is_active_c6_gggg = 0U;
  *chartInstance->c6_is_c6_gggg = c6_IN_NO_ACTIVE_CHILD;
}

static void initialize_params_c6_gggg(SFc6_ggggInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c6_gggg(SFc6_ggggInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c6_gggg(SFc6_ggggInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c6_update_debugger_state_c6_gggg(SFc6_ggggInstanceStruct
  *chartInstance)
{
  uint32_T c6_prevAniVal;
  c6_prevAniVal = _SFD_GET_ANIMATION();
  _SFD_SET_ANIMATION(0U);
  _SFD_SET_HONOR_BREAKPOINTS(0U);
  if (*chartInstance->c6_is_active_c6_gggg == 1U) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 5U, *chartInstance->c6_sfEvent);
  }

  if (*chartInstance->c6_is_active_enable1 == 1U) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c6_sfEvent);
  }

  if (*chartInstance->c6_is_enable1 == c6_IN_on1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c6_sfEvent);
  }

  if (*chartInstance->c6_is_enable1 == c6_IN_on3) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c6_sfEvent);
  }

  if (*chartInstance->c6_is_enable1 == c6_IN_on4) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c6_sfEvent);
  }

  if (*chartInstance->c6_is_c6_gggg == c6_IN_enable) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c6_sfEvent);
  }

  if (*chartInstance->c6_is_enable2 == c6_IN_on4) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, *chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c6_sfEvent);
  }

  if (*chartInstance->c6_is_enable2 == c6_IN_on3) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c6_sfEvent);
  }

  if (*chartInstance->c6_is_enable2 == c6_IN_on1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c6_sfEvent);
  }

  if (*chartInstance->c6_is_active_enable2 == 1U) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c6_sfEvent);
  }

  if (*chartInstance->c6_is_enable3 == c6_IN_on3) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 11U, *chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 11U, *chartInstance->c6_sfEvent);
  }

  if (*chartInstance->c6_is_active_enable3 == 1U) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U, *chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 9U, *chartInstance->c6_sfEvent);
  }

  if (*chartInstance->c6_is_enable3 == c6_IN_on4) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 12U, *chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 12U, *chartInstance->c6_sfEvent);
  }

  if (*chartInstance->c6_is_enable3 == c6_IN_on1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, *chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c6_sfEvent);
  }

  _SFD_SET_ANIMATION(c6_prevAniVal);
  _SFD_SET_HONOR_BREAKPOINTS(1U);
  _SFD_ANIMATE();
}

static void ext_mode_exec_c6_gggg(SFc6_ggggInstanceStruct *chartInstance)
{
  c6_update_debugger_state_c6_gggg(chartInstance);
}

static const mxArray *get_sim_state_c6_gggg(SFc6_ggggInstanceStruct
  *chartInstance)
{
  const mxArray *c6_st;
  const mxArray *c6_y = NULL;
  real_T c6_hoistedGlobal;
  const mxArray *c6_b_y = NULL;
  real_T c6_b_hoistedGlobal;
  const mxArray *c6_c_y = NULL;
  real_T c6_c_hoistedGlobal;
  const mxArray *c6_d_y = NULL;
  uint8_T c6_d_hoistedGlobal;
  const mxArray *c6_e_y = NULL;
  uint8_T c6_e_hoistedGlobal;
  const mxArray *c6_f_y = NULL;
  uint8_T c6_f_hoistedGlobal;
  const mxArray *c6_g_y = NULL;
  uint8_T c6_g_hoistedGlobal;
  const mxArray *c6_h_y = NULL;
  uint8_T c6_h_hoistedGlobal;
  const mxArray *c6_i_y = NULL;
  uint8_T c6_i_hoistedGlobal;
  const mxArray *c6_j_y = NULL;
  uint8_T c6_j_hoistedGlobal;
  const mxArray *c6_k_y = NULL;
  uint8_T c6_k_hoistedGlobal;
  const mxArray *c6_l_y = NULL;
  const mxArray *c6_m_y = NULL;
  c6_st = NULL;
  c6_st = NULL;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_createcellmatrix(12, 1), false);
  c6_hoistedGlobal = *chartInstance->c6_xuanjin_enable;
  c6_b_y = NULL;
  sf_mex_assign(&c6_b_y, sf_mex_create("y", &c6_hoistedGlobal, 0, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c6_y, 0, c6_b_y);
  c6_b_hoistedGlobal = *chartInstance->c6_xuansong_enable;
  c6_c_y = NULL;
  sf_mex_assign(&c6_c_y, sf_mex_create("y", &c6_b_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c6_y, 1, c6_c_y);
  c6_c_hoistedGlobal = *chartInstance->c6_yuxuansong_enable;
  c6_d_y = NULL;
  sf_mex_assign(&c6_d_y, sf_mex_create("y", &c6_c_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c6_y, 2, c6_d_y);
  c6_d_hoistedGlobal = *chartInstance->c6_is_active_c6_gggg;
  c6_e_y = NULL;
  sf_mex_assign(&c6_e_y, sf_mex_create("y", &c6_d_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c6_y, 3, c6_e_y);
  c6_e_hoistedGlobal = *chartInstance->c6_is_active_enable1;
  c6_f_y = NULL;
  sf_mex_assign(&c6_f_y, sf_mex_create("y", &c6_e_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c6_y, 4, c6_f_y);
  c6_f_hoistedGlobal = *chartInstance->c6_is_active_enable2;
  c6_g_y = NULL;
  sf_mex_assign(&c6_g_y, sf_mex_create("y", &c6_f_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c6_y, 5, c6_g_y);
  c6_g_hoistedGlobal = *chartInstance->c6_is_active_enable3;
  c6_h_y = NULL;
  sf_mex_assign(&c6_h_y, sf_mex_create("y", &c6_g_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c6_y, 6, c6_h_y);
  c6_h_hoistedGlobal = *chartInstance->c6_is_c6_gggg;
  c6_i_y = NULL;
  sf_mex_assign(&c6_i_y, sf_mex_create("y", &c6_h_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c6_y, 7, c6_i_y);
  c6_i_hoistedGlobal = *chartInstance->c6_is_enable1;
  c6_j_y = NULL;
  sf_mex_assign(&c6_j_y, sf_mex_create("y", &c6_i_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c6_y, 8, c6_j_y);
  c6_j_hoistedGlobal = *chartInstance->c6_is_enable2;
  c6_k_y = NULL;
  sf_mex_assign(&c6_k_y, sf_mex_create("y", &c6_j_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c6_y, 9, c6_k_y);
  c6_k_hoistedGlobal = *chartInstance->c6_is_enable3;
  c6_l_y = NULL;
  sf_mex_assign(&c6_l_y, sf_mex_create("y", &c6_k_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c6_y, 10, c6_l_y);
  c6_m_y = NULL;
  sf_mex_assign(&c6_m_y, sf_mex_create("y",
    chartInstance->c6_dataWrittenToVector, 11, 0U, 1U, 0U, 1, 3), false);
  sf_mex_setcell(c6_y, 11, c6_m_y);
  sf_mex_assign(&c6_st, c6_y, false);
  return c6_st;
}

static void set_sim_state_c6_gggg(SFc6_ggggInstanceStruct *chartInstance, const
  mxArray *c6_st)
{
  const mxArray *c6_u;
  boolean_T c6_bv0[3];
  int32_T c6_i0;
  c6_u = sf_mex_dup(c6_st);
  *chartInstance->c6_xuanjin_enable = c6_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("xuanjin_enable", c6_u, 0)), "xuanjin_enable");
  *chartInstance->c6_xuansong_enable = c6_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("xuansong_enable", c6_u, 1)), "xuansong_enable");
  *chartInstance->c6_yuxuansong_enable = c6_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("yuxuansong_enable", c6_u, 2)),
    "yuxuansong_enable");
  *chartInstance->c6_is_active_c6_gggg = c6_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_active_c6_gggg", c6_u, 3)),
    "is_active_c6_gggg");
  *chartInstance->c6_is_active_enable1 = c6_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_active_enable1", c6_u, 4)),
    "is_active_enable1");
  *chartInstance->c6_is_active_enable2 = c6_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_active_enable2", c6_u, 5)),
    "is_active_enable2");
  *chartInstance->c6_is_active_enable3 = c6_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_active_enable3", c6_u, 6)),
    "is_active_enable3");
  *chartInstance->c6_is_c6_gggg = c6_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_c6_gggg", c6_u, 7)), "is_c6_gggg");
  *chartInstance->c6_is_enable1 = c6_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_enable1", c6_u, 8)), "is_enable1");
  *chartInstance->c6_is_enable2 = c6_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_enable2", c6_u, 9)), "is_enable2");
  *chartInstance->c6_is_enable3 = c6_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_enable3", c6_u, 10)), "is_enable3");
  c6_g_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(
    "dataWrittenToVector", c6_u, 11)), "dataWrittenToVector", c6_bv0);
  for (c6_i0 = 0; c6_i0 < 3; c6_i0++) {
    chartInstance->c6_dataWrittenToVector[c6_i0] = c6_bv0[c6_i0];
  }

  sf_mex_assign(&chartInstance->c6_setSimStateSideEffectsInfo,
                c6_i_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(
    "setSimStateSideEffectsInfo", c6_u, 12)), "setSimStateSideEffectsInfo"),
                true);
  sf_mex_destroy(&c6_u);
  chartInstance->c6_doSetSimStateSideEffects = 1U;
  c6_update_debugger_state_c6_gggg(chartInstance);
  sf_mex_destroy(&c6_st);
}

static void c6_set_sim_state_side_effects_c6_gggg(SFc6_ggggInstanceStruct
  *chartInstance)
{
  if (chartInstance->c6_doSetSimStateSideEffects != 0) {
    chartInstance->c6_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c6_gggg(SFc6_ggggInstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c6_setSimStateSideEffectsInfo);
}

static void sf_gateway_c6_gggg(SFc6_ggggInstanceStruct *chartInstance)
{
  uint32_T c6_debug_family_var_map[2];
  real_T c6_nargin = 0.0;
  real_T c6_nargout = 0.0;
  real_T c6_b_nargin = 0.0;
  real_T c6_b_nargout = 0.0;
  real_T c6_c_nargin = 0.0;
  real_T c6_c_nargout = 0.0;
  c6_set_sim_state_side_effects_c6_gggg(chartInstance);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 5U, *chartInstance->c6_sfEvent);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c6_xuansongmingling, 5U, 1U, 0U,
                        *chartInstance->c6_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c6_yuxuansongmingling, 4U, 1U, 0U,
                        *chartInstance->c6_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c6_xuanjinmingling, 3U, 1U, 0U,
                        *chartInstance->c6_sfEvent, false);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c6_xuansongdaowei, 2U, 1U, 0U,
                        *chartInstance->c6_sfEvent, false);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c6_yuxuansongdaowei, 1U, 1U, 0U,
                        *chartInstance->c6_sfEvent, false);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c6_xuanjindaowei, 0U, 1U, 0U,
                        *chartInstance->c6_sfEvent, false);
  *chartInstance->c6_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 5U, *chartInstance->c6_sfEvent);
  if (*chartInstance->c6_is_active_c6_gggg == 0U) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 5U, *chartInstance->c6_sfEvent);
    *chartInstance->c6_is_active_c6_gggg = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 5U, *chartInstance->c6_sfEvent);
    *chartInstance->c6_is_c6_gggg = c6_IN_enable;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c6_sfEvent);
    *chartInstance->c6_is_active_enable1 = 1U;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c6_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, *chartInstance->c6_sfEvent);
    *chartInstance->c6_is_enable1 = c6_IN_on1;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c6_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c6_debug_family_names,
      c6_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_nargin, 0U, c6_sf_marshallOut,
      c6_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_nargout, 1U, c6_sf_marshallOut,
      c6_sf_marshallIn);
    *chartInstance->c6_xuanjin_enable = 1.0;
    chartInstance->c6_dataWrittenToVector[0U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c6_xuanjin_enable, 6U, 4U, 2U,
                          *chartInstance->c6_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
    *chartInstance->c6_is_active_enable2 = 1U;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c6_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, *chartInstance->c6_sfEvent);
    *chartInstance->c6_is_enable2 = c6_IN_on1;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c6_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c6_f_debug_family_names,
      c6_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_b_nargin, 0U, c6_sf_marshallOut,
      c6_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_b_nargout, 1U, c6_sf_marshallOut,
      c6_sf_marshallIn);
    *chartInstance->c6_yuxuansong_enable = 1.0;
    chartInstance->c6_dataWrittenToVector[1U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c6_yuxuansong_enable, 7U, 4U, 6U,
                          *chartInstance->c6_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
    *chartInstance->c6_is_active_enable3 = 1U;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U, *chartInstance->c6_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 10U, *chartInstance->c6_sfEvent);
    *chartInstance->c6_is_enable3 = c6_IN_on1;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, *chartInstance->c6_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c6_i_debug_family_names,
      c6_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_c_nargin, 0U, c6_sf_marshallOut,
      c6_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_c_nargout, 1U, c6_sf_marshallOut,
      c6_sf_marshallIn);
    *chartInstance->c6_xuansong_enable = 1.0;
    chartInstance->c6_dataWrittenToVector[2U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c6_xuansong_enable, 8U, 4U, 10U,
                          *chartInstance->c6_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
  } else {
    c6_enable(chartInstance);
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 5U, *chartInstance->c6_sfEvent);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_ggggMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void mdl_start_c6_gggg(SFc6_ggggInstanceStruct *chartInstance)
{
  c6_init_sf_message_store_memory(chartInstance);
}

static void initSimStructsc6_gggg(SFc6_ggggInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c6_enable1(SFc6_ggggInstanceStruct *chartInstance)
{
  uint32_T c6_debug_family_var_map[3];
  real_T c6_nargin = 0.0;
  real_T c6_b_nargin = 0.0;
  real_T c6_c_nargin = 0.0;
  real_T c6_nargout = 1.0;
  real_T c6_b_nargout = 1.0;
  real_T c6_c_nargout = 1.0;
  boolean_T c6_out;
  boolean_T c6_b_out;
  boolean_T c6_c_out;
  uint32_T c6_b_debug_family_var_map[2];
  real_T c6_d_nargin = 0.0;
  real_T c6_e_nargin = 0.0;
  real_T c6_d_nargout = 0.0;
  real_T c6_e_nargout = 0.0;
  real_T c6_f_nargin = 0.0;
  real_T c6_f_nargout = 0.0;
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U, *chartInstance->c6_sfEvent);
  switch (*chartInstance->c6_is_enable1) {
   case c6_IN_on1:
    CV_STATE_EVAL(1, 0, 1);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                 *chartInstance->c6_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c6_j_debug_family_names,
      c6_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_nargin, 0U, c6_sf_marshallOut,
      c6_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_nargout, 1U, c6_sf_marshallOut,
      c6_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_out, 2U, c6_b_sf_marshallOut,
      c6_b_sf_marshallIn);
    c6_out = CV_EML_IF(1, 0, 0, CV_RELATIONAL_EVAL(5U, 1U, 0, (real_T)
      *chartInstance->c6_xuanjindaowei, 1.0, -1, 0U, (int32_T)
      *chartInstance->c6_xuanjindaowei));
    _SFD_SYMBOL_SCOPE_POP();
    if (c6_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, *chartInstance->c6_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c6_sfEvent);
      *chartInstance->c6_is_enable1 = c6_IN_on3;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c6_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c6_b_debug_family_names,
        c6_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_d_nargin, 0U, c6_sf_marshallOut,
        c6_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_d_nargout, 1U, c6_sf_marshallOut,
        c6_sf_marshallIn);
      *chartInstance->c6_xuanjin_enable = 0.0;
      chartInstance->c6_dataWrittenToVector[0U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c6_xuanjin_enable, 6U, 4U, 3U,
                            *chartInstance->c6_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U,
                   *chartInstance->c6_sfEvent);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, *chartInstance->c6_sfEvent);
    break;

   case c6_IN_on3:
    CV_STATE_EVAL(1, 0, 2);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                 *chartInstance->c6_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c6_k_debug_family_names,
      c6_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_b_nargin, 0U, c6_sf_marshallOut,
      c6_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_b_nargout, 1U, c6_sf_marshallOut,
      c6_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_b_out, 2U, c6_b_sf_marshallOut,
      c6_b_sf_marshallIn);
    if (CV_EML_COND(2, 0, 0, CV_RELATIONAL_EVAL(5U, 2U, 0,
          *chartInstance->c6_yuxuansongmingling, 1.0, -1, 0U,
          *chartInstance->c6_yuxuansongmingling == 1.0)) || CV_EML_COND(2, 0, 1,
         CV_RELATIONAL_EVAL(5U, 2U, 1, *chartInstance->c6_xuansongmingling, 1.0,
          -1, 0U, *chartInstance->c6_xuansongmingling == 1.0))) {
      CV_EML_MCDC(2, 0, 0, true);
      CV_EML_IF(2, 0, 0, true);
      c6_b_out = true;
    } else {
      CV_EML_MCDC(2, 0, 0, false);
      CV_EML_IF(2, 0, 0, false);
      c6_b_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c6_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, *chartInstance->c6_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c6_sfEvent);
      *chartInstance->c6_is_enable1 = c6_IN_on4;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c6_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c6_c_debug_family_names,
        c6_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_f_nargin, 0U, c6_sf_marshallOut,
        c6_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_f_nargout, 1U, c6_sf_marshallOut,
        c6_sf_marshallIn);
      *chartInstance->c6_xuanjin_enable = 1.0;
      chartInstance->c6_dataWrittenToVector[0U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c6_xuanjin_enable, 6U, 4U, 4U,
                            *chartInstance->c6_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U,
                   *chartInstance->c6_sfEvent);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, *chartInstance->c6_sfEvent);
    break;

   case c6_IN_on4:
    CV_STATE_EVAL(1, 0, 3);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U,
                 *chartInstance->c6_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c6_l_debug_family_names,
      c6_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_c_nargin, 0U, c6_sf_marshallOut,
      c6_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_c_nargout, 1U, c6_sf_marshallOut,
      c6_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_c_out, 2U, c6_b_sf_marshallOut,
      c6_b_sf_marshallIn);
    c6_c_out = CV_EML_IF(3, 0, 0, CV_RELATIONAL_EVAL(5U, 3U, 0, (real_T)
      *chartInstance->c6_xuanjindaowei, 0.0, -1, 0U,
      !*chartInstance->c6_xuanjindaowei));
    _SFD_SYMBOL_SCOPE_POP();
    if (c6_c_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, *chartInstance->c6_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c6_sfEvent);
      *chartInstance->c6_is_enable1 = c6_IN_on1;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c6_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c6_debug_family_names,
        c6_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_e_nargin, 0U, c6_sf_marshallOut,
        c6_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_e_nargout, 1U, c6_sf_marshallOut,
        c6_sf_marshallIn);
      *chartInstance->c6_xuanjin_enable = 1.0;
      chartInstance->c6_dataWrittenToVector[0U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c6_xuanjin_enable, 6U, 4U, 2U,
                            *chartInstance->c6_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 4U,
                   *chartInstance->c6_sfEvent);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, *chartInstance->c6_sfEvent);
    break;

   default:
    CV_STATE_EVAL(1, 0, 0);

    /* Unreachable state, for coverage only */
    *chartInstance->c6_is_enable1 = c6_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c6_sfEvent);
    break;
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, *chartInstance->c6_sfEvent);
}

static void c6_enable(SFc6_ggggInstanceStruct *chartInstance)
{
  uint32_T c6_debug_family_var_map[3];
  real_T c6_nargin = 0.0;
  real_T c6_b_nargin = 0.0;
  real_T c6_c_nargin = 0.0;
  real_T c6_nargout = 1.0;
  real_T c6_b_nargout = 1.0;
  real_T c6_c_nargout = 1.0;
  boolean_T c6_out;
  boolean_T c6_b_out;
  boolean_T c6_c_out;
  real_T c6_d_nargin = 0.0;
  real_T c6_e_nargin = 0.0;
  real_T c6_f_nargin = 0.0;
  real_T c6_d_nargout = 1.0;
  real_T c6_e_nargout = 1.0;
  real_T c6_f_nargout = 1.0;
  boolean_T c6_d_out;
  boolean_T c6_e_out;
  boolean_T c6_f_out;
  uint32_T c6_b_debug_family_var_map[2];
  real_T c6_g_nargin = 0.0;
  real_T c6_h_nargin = 0.0;
  real_T c6_g_nargout = 0.0;
  real_T c6_h_nargout = 0.0;
  real_T c6_i_nargin = 0.0;
  real_T c6_i_nargout = 0.0;
  real_T c6_j_nargin = 0.0;
  real_T c6_k_nargin = 0.0;
  real_T c6_l_nargin = 0.0;
  real_T c6_j_nargout = 0.0;
  real_T c6_k_nargout = 0.0;
  real_T c6_l_nargout = 0.0;
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U, *chartInstance->c6_sfEvent);
  c6_enable1(chartInstance);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 5U, *chartInstance->c6_sfEvent);
  switch (*chartInstance->c6_is_enable2) {
   case c6_IN_on1:
    CV_STATE_EVAL(5, 0, 1);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U,
                 *chartInstance->c6_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c6_m_debug_family_names,
      c6_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_nargin, 0U, c6_sf_marshallOut,
      c6_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_nargout, 1U, c6_sf_marshallOut,
      c6_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_out, 2U, c6_b_sf_marshallOut,
      c6_b_sf_marshallIn);
    c6_out = CV_EML_IF(4, 0, 0, CV_RELATIONAL_EVAL(5U, 4U, 0, (real_T)
      *chartInstance->c6_yuxuansongdaowei, 1.0, -1, 0U, (int32_T)
      *chartInstance->c6_yuxuansongdaowei));
    _SFD_SYMBOL_SCOPE_POP();
    if (c6_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, *chartInstance->c6_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c6_sfEvent);
      *chartInstance->c6_is_enable2 = c6_IN_on3;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c6_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c6_e_debug_family_names,
        c6_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_g_nargin, 0U, c6_sf_marshallOut,
        c6_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_g_nargout, 1U, c6_sf_marshallOut,
        c6_sf_marshallIn);
      *chartInstance->c6_yuxuansong_enable = 0.0;
      chartInstance->c6_dataWrittenToVector[1U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c6_yuxuansong_enable, 7U, 4U, 7U,
                            *chartInstance->c6_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 6U,
                   *chartInstance->c6_sfEvent);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 6U, *chartInstance->c6_sfEvent);
    break;

   case c6_IN_on3:
    CV_STATE_EVAL(5, 0, 2);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 6U,
                 *chartInstance->c6_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c6_o_debug_family_names,
      c6_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_b_nargin, 0U, c6_sf_marshallOut,
      c6_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_b_nargout, 1U, c6_sf_marshallOut,
      c6_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_b_out, 2U, c6_b_sf_marshallOut,
      c6_b_sf_marshallIn);
    if (CV_EML_COND(6, 0, 0, CV_RELATIONAL_EVAL(5U, 6U, 0,
          *chartInstance->c6_xuansongmingling, 1.0, -1, 0U,
          *chartInstance->c6_xuansongmingling == 1.0)) || CV_EML_COND(6, 0, 1,
         CV_RELATIONAL_EVAL(5U, 6U, 1, *chartInstance->c6_xuanjinmingling, 1.0,
                            -1, 0U, *chartInstance->c6_xuanjinmingling == 1.0)))
    {
      CV_EML_MCDC(6, 0, 0, true);
      CV_EML_IF(6, 0, 0, true);
      c6_b_out = true;
    } else {
      CV_EML_MCDC(6, 0, 0, false);
      CV_EML_IF(6, 0, 0, false);
      c6_b_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c6_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, *chartInstance->c6_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c6_sfEvent);
      *chartInstance->c6_is_enable2 = c6_IN_on4;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, *chartInstance->c6_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c6_d_debug_family_names,
        c6_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_i_nargin, 0U, c6_sf_marshallOut,
        c6_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_i_nargout, 1U, c6_sf_marshallOut,
        c6_sf_marshallIn);
      *chartInstance->c6_yuxuansong_enable = 1.0;
      chartInstance->c6_dataWrittenToVector[1U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c6_yuxuansong_enable, 7U, 4U, 8U,
                            *chartInstance->c6_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 7U,
                   *chartInstance->c6_sfEvent);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 7U, *chartInstance->c6_sfEvent);
    break;

   case c6_IN_on4:
    CV_STATE_EVAL(5, 0, 3);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U,
                 *chartInstance->c6_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c6_n_debug_family_names,
      c6_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_c_nargin, 0U, c6_sf_marshallOut,
      c6_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_c_nargout, 1U, c6_sf_marshallOut,
      c6_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_c_out, 2U, c6_b_sf_marshallOut,
      c6_b_sf_marshallIn);
    c6_c_out = CV_EML_IF(5, 0, 0, CV_RELATIONAL_EVAL(5U, 5U, 0, (real_T)
      *chartInstance->c6_yuxuansongdaowei, 0.0, -1, 0U,
      !*chartInstance->c6_yuxuansongdaowei));
    _SFD_SYMBOL_SCOPE_POP();
    if (c6_c_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, *chartInstance->c6_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c6_sfEvent);
      *chartInstance->c6_is_enable2 = c6_IN_on1;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c6_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c6_f_debug_family_names,
        c6_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_h_nargin, 0U, c6_sf_marshallOut,
        c6_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_h_nargout, 1U, c6_sf_marshallOut,
        c6_sf_marshallIn);
      *chartInstance->c6_yuxuansong_enable = 1.0;
      chartInstance->c6_dataWrittenToVector[1U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c6_yuxuansong_enable, 7U, 4U, 6U,
                            *chartInstance->c6_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 8U,
                   *chartInstance->c6_sfEvent);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 8U, *chartInstance->c6_sfEvent);
    break;

   default:
    CV_STATE_EVAL(5, 0, 0);

    /* Unreachable state, for coverage only */
    *chartInstance->c6_is_enable2 = c6_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c6_sfEvent);
    break;
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 5U, *chartInstance->c6_sfEvent);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 9U, *chartInstance->c6_sfEvent);
  switch (*chartInstance->c6_is_enable3) {
   case c6_IN_on1:
    CV_STATE_EVAL(9, 0, 1);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 8U,
                 *chartInstance->c6_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c6_p_debug_family_names,
      c6_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_d_nargin, 0U, c6_sf_marshallOut,
      c6_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_d_nargout, 1U, c6_sf_marshallOut,
      c6_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_d_out, 2U, c6_b_sf_marshallOut,
      c6_b_sf_marshallIn);
    c6_d_out = CV_EML_IF(8, 0, 0, CV_RELATIONAL_EVAL(5U, 8U, 0, (real_T)
      *chartInstance->c6_xuansongdaowei, 1.0, -1, 0U, (int32_T)
      *chartInstance->c6_xuansongdaowei));
    _SFD_SYMBOL_SCOPE_POP();
    if (c6_d_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8U, *chartInstance->c6_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c6_sfEvent);
      *chartInstance->c6_is_enable3 = c6_IN_on3;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 11U, *chartInstance->c6_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c6_g_debug_family_names,
        c6_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_j_nargin, 0U, c6_sf_marshallOut,
        c6_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_j_nargout, 1U, c6_sf_marshallOut,
        c6_sf_marshallIn);
      *chartInstance->c6_xuansong_enable = 0.0;
      chartInstance->c6_dataWrittenToVector[2U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c6_xuansong_enable, 8U, 4U, 11U,
                            *chartInstance->c6_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 10U,
                   *chartInstance->c6_sfEvent);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 10U, *chartInstance->c6_sfEvent);
    break;

   case c6_IN_on3:
    CV_STATE_EVAL(9, 0, 2);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 11U,
                 *chartInstance->c6_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c6_r_debug_family_names,
      c6_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_e_nargin, 0U, c6_sf_marshallOut,
      c6_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_e_nargout, 1U, c6_sf_marshallOut,
      c6_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_e_out, 2U, c6_b_sf_marshallOut,
      c6_b_sf_marshallIn);
    c6_e_out = CV_EML_IF(11, 0, 0, CV_RELATIONAL_EVAL(5U, 11U, 0,
      *chartInstance->c6_xuanjinmingling, 1.0, -1, 0U,
      *chartInstance->c6_xuanjinmingling == 1.0));
    _SFD_SYMBOL_SCOPE_POP();
    if (c6_e_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 11U, *chartInstance->c6_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 11U, *chartInstance->c6_sfEvent);
      *chartInstance->c6_is_enable3 = c6_IN_on4;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 12U, *chartInstance->c6_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c6_h_debug_family_names,
        c6_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_k_nargin, 0U, c6_sf_marshallOut,
        c6_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_k_nargout, 1U, c6_sf_marshallOut,
        c6_sf_marshallIn);
      *chartInstance->c6_xuansong_enable = 1.0;
      chartInstance->c6_dataWrittenToVector[2U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c6_xuansong_enable, 8U, 4U, 12U,
                            *chartInstance->c6_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 11U,
                   *chartInstance->c6_sfEvent);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 11U, *chartInstance->c6_sfEvent);
    break;

   case c6_IN_on4:
    CV_STATE_EVAL(9, 0, 3);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 9U,
                 *chartInstance->c6_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c6_q_debug_family_names,
      c6_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_f_nargin, 0U, c6_sf_marshallOut,
      c6_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_f_nargout, 1U, c6_sf_marshallOut,
      c6_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_f_out, 2U, c6_b_sf_marshallOut,
      c6_b_sf_marshallIn);
    c6_f_out = CV_EML_IF(9, 0, 0, CV_RELATIONAL_EVAL(5U, 9U, 0, (real_T)
      *chartInstance->c6_xuansongdaowei, 0.0, -1, 0U,
      !*chartInstance->c6_xuansongdaowei));
    _SFD_SYMBOL_SCOPE_POP();
    if (c6_f_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 9U, *chartInstance->c6_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 12U, *chartInstance->c6_sfEvent);
      *chartInstance->c6_is_enable3 = c6_IN_on1;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, *chartInstance->c6_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c6_i_debug_family_names,
        c6_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_l_nargin, 0U, c6_sf_marshallOut,
        c6_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c6_l_nargout, 1U, c6_sf_marshallOut,
        c6_sf_marshallIn);
      *chartInstance->c6_xuansong_enable = 1.0;
      chartInstance->c6_dataWrittenToVector[2U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c6_xuansong_enable, 8U, 4U, 10U,
                            *chartInstance->c6_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 12U,
                   *chartInstance->c6_sfEvent);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 12U, *chartInstance->c6_sfEvent);
    break;

   default:
    CV_STATE_EVAL(9, 0, 0);

    /* Unreachable state, for coverage only */
    *chartInstance->c6_is_enable3 = c6_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c6_sfEvent);
    break;
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 9U, *chartInstance->c6_sfEvent);
  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, *chartInstance->c6_sfEvent);
}

static void init_script_number_translation(uint32_T c6_machineNumber, uint32_T
  c6_chartNumber, uint32_T c6_instanceNumber)
{
  (void)c6_machineNumber;
  (void)c6_chartNumber;
  (void)c6_instanceNumber;
}

static const mxArray *c6_sf_marshallOut(void *chartInstanceVoid, void *c6_inData)
{
  const mxArray *c6_mxArrayOutData;
  real_T c6_u;
  const mxArray *c6_y = NULL;
  SFc6_ggggInstanceStruct *chartInstance;
  chartInstance = (SFc6_ggggInstanceStruct *)chartInstanceVoid;
  c6_mxArrayOutData = NULL;
  c6_mxArrayOutData = NULL;
  c6_u = *(real_T *)c6_inData;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_create("y", &c6_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c6_mxArrayOutData, c6_y, false);
  return c6_mxArrayOutData;
}

static real_T c6_emlrt_marshallIn(SFc6_ggggInstanceStruct *chartInstance, const
  mxArray *c6_nargout, const char_T *c6_identifier)
{
  real_T c6_y;
  emlrtMsgIdentifier c6_thisId;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_thisId.bParentIsCell = false;
  c6_y = c6_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_nargout), &c6_thisId);
  sf_mex_destroy(&c6_nargout);
  return c6_y;
}

static real_T c6_b_emlrt_marshallIn(SFc6_ggggInstanceStruct *chartInstance,
  const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  real_T c6_y;
  real_T c6_d0;
  (void)chartInstance;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), &c6_d0, 1, 0, 0U, 0, 0U, 0);
  c6_y = c6_d0;
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static void c6_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData)
{
  const mxArray *c6_nargout;
  const char_T *c6_identifier;
  emlrtMsgIdentifier c6_thisId;
  real_T c6_y;
  SFc6_ggggInstanceStruct *chartInstance;
  chartInstance = (SFc6_ggggInstanceStruct *)chartInstanceVoid;
  c6_nargout = sf_mex_dup(c6_mxArrayInData);
  c6_identifier = c6_varName;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_thisId.bParentIsCell = false;
  c6_y = c6_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_nargout), &c6_thisId);
  sf_mex_destroy(&c6_nargout);
  *(real_T *)c6_outData = c6_y;
  sf_mex_destroy(&c6_mxArrayInData);
}

static const mxArray *c6_b_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData)
{
  const mxArray *c6_mxArrayOutData;
  boolean_T c6_u;
  const mxArray *c6_y = NULL;
  SFc6_ggggInstanceStruct *chartInstance;
  chartInstance = (SFc6_ggggInstanceStruct *)chartInstanceVoid;
  c6_mxArrayOutData = NULL;
  c6_mxArrayOutData = NULL;
  c6_u = *(boolean_T *)c6_inData;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_create("y", &c6_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c6_mxArrayOutData, c6_y, false);
  return c6_mxArrayOutData;
}

static boolean_T c6_c_emlrt_marshallIn(SFc6_ggggInstanceStruct *chartInstance,
  const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  boolean_T c6_y;
  boolean_T c6_b0;
  (void)chartInstance;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), &c6_b0, 1, 11, 0U, 0, 0U, 0);
  c6_y = c6_b0;
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static void c6_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData)
{
  const mxArray *c6_sf_internal_predicateOutput;
  const char_T *c6_identifier;
  emlrtMsgIdentifier c6_thisId;
  boolean_T c6_y;
  SFc6_ggggInstanceStruct *chartInstance;
  chartInstance = (SFc6_ggggInstanceStruct *)chartInstanceVoid;
  c6_sf_internal_predicateOutput = sf_mex_dup(c6_mxArrayInData);
  c6_identifier = c6_varName;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_thisId.bParentIsCell = false;
  c6_y = c6_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c6_sf_internal_predicateOutput), &c6_thisId);
  sf_mex_destroy(&c6_sf_internal_predicateOutput);
  *(boolean_T *)c6_outData = c6_y;
  sf_mex_destroy(&c6_mxArrayInData);
}

const mxArray *sf_c6_gggg_get_eml_resolved_functions_info(void)
{
  const mxArray *c6_nameCaptureInfo = NULL;
  c6_nameCaptureInfo = NULL;
  sf_mex_assign(&c6_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c6_nameCaptureInfo;
}

static const mxArray *c6_c_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData)
{
  const mxArray *c6_mxArrayOutData;
  int32_T c6_u;
  const mxArray *c6_y = NULL;
  SFc6_ggggInstanceStruct *chartInstance;
  chartInstance = (SFc6_ggggInstanceStruct *)chartInstanceVoid;
  c6_mxArrayOutData = NULL;
  c6_mxArrayOutData = NULL;
  c6_u = *(int32_T *)c6_inData;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_create("y", &c6_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c6_mxArrayOutData, c6_y, false);
  return c6_mxArrayOutData;
}

static int32_T c6_d_emlrt_marshallIn(SFc6_ggggInstanceStruct *chartInstance,
  const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  int32_T c6_y;
  int32_T c6_i1;
  (void)chartInstance;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), &c6_i1, 1, 6, 0U, 0, 0U, 0);
  c6_y = c6_i1;
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static void c6_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData)
{
  const mxArray *c6_b_sfEvent;
  const char_T *c6_identifier;
  emlrtMsgIdentifier c6_thisId;
  int32_T c6_y;
  SFc6_ggggInstanceStruct *chartInstance;
  chartInstance = (SFc6_ggggInstanceStruct *)chartInstanceVoid;
  c6_b_sfEvent = sf_mex_dup(c6_mxArrayInData);
  c6_identifier = c6_varName;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_thisId.bParentIsCell = false;
  c6_y = c6_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_b_sfEvent),
    &c6_thisId);
  sf_mex_destroy(&c6_b_sfEvent);
  *(int32_T *)c6_outData = c6_y;
  sf_mex_destroy(&c6_mxArrayInData);
}

static const mxArray *c6_d_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData)
{
  const mxArray *c6_mxArrayOutData;
  uint8_T c6_u;
  const mxArray *c6_y = NULL;
  SFc6_ggggInstanceStruct *chartInstance;
  chartInstance = (SFc6_ggggInstanceStruct *)chartInstanceVoid;
  c6_mxArrayOutData = NULL;
  c6_mxArrayOutData = NULL;
  c6_u = *(uint8_T *)c6_inData;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_create("y", &c6_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c6_mxArrayOutData, c6_y, false);
  return c6_mxArrayOutData;
}

static uint8_T c6_e_emlrt_marshallIn(SFc6_ggggInstanceStruct *chartInstance,
  const mxArray *c6_b_is_enable1, const char_T *c6_identifier)
{
  uint8_T c6_y;
  emlrtMsgIdentifier c6_thisId;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_thisId.bParentIsCell = false;
  c6_y = c6_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_b_is_enable1),
    &c6_thisId);
  sf_mex_destroy(&c6_b_is_enable1);
  return c6_y;
}

static uint8_T c6_f_emlrt_marshallIn(SFc6_ggggInstanceStruct *chartInstance,
  const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  uint8_T c6_y;
  uint8_T c6_u0;
  (void)chartInstance;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), &c6_u0, 1, 3, 0U, 0, 0U, 0);
  c6_y = c6_u0;
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static void c6_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData)
{
  const mxArray *c6_b_is_enable1;
  const char_T *c6_identifier;
  emlrtMsgIdentifier c6_thisId;
  uint8_T c6_y;
  SFc6_ggggInstanceStruct *chartInstance;
  chartInstance = (SFc6_ggggInstanceStruct *)chartInstanceVoid;
  c6_b_is_enable1 = sf_mex_dup(c6_mxArrayInData);
  c6_identifier = c6_varName;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_thisId.bParentIsCell = false;
  c6_y = c6_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_b_is_enable1),
    &c6_thisId);
  sf_mex_destroy(&c6_b_is_enable1);
  *(uint8_T *)c6_outData = c6_y;
  sf_mex_destroy(&c6_mxArrayInData);
}

static void c6_g_emlrt_marshallIn(SFc6_ggggInstanceStruct *chartInstance, const
  mxArray *c6_b_dataWrittenToVector, const char_T *c6_identifier, boolean_T
  c6_y[3])
{
  emlrtMsgIdentifier c6_thisId;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_thisId.bParentIsCell = false;
  c6_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_b_dataWrittenToVector),
                        &c6_thisId, c6_y);
  sf_mex_destroy(&c6_b_dataWrittenToVector);
}

static void c6_h_emlrt_marshallIn(SFc6_ggggInstanceStruct *chartInstance, const
  mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId, boolean_T c6_y[3])
{
  boolean_T c6_bv1[3];
  int32_T c6_i2;
  (void)chartInstance;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), c6_bv1, 1, 11, 0U, 1, 0U, 1, 3);
  for (c6_i2 = 0; c6_i2 < 3; c6_i2++) {
    c6_y[c6_i2] = c6_bv1[c6_i2];
  }

  sf_mex_destroy(&c6_u);
}

static const mxArray *c6_i_emlrt_marshallIn(SFc6_ggggInstanceStruct
  *chartInstance, const mxArray *c6_b_setSimStateSideEffectsInfo, const char_T
  *c6_identifier)
{
  const mxArray *c6_y = NULL;
  emlrtMsgIdentifier c6_thisId;
  c6_y = NULL;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_thisId.bParentIsCell = false;
  sf_mex_assign(&c6_y, c6_j_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c6_b_setSimStateSideEffectsInfo), &c6_thisId), false);
  sf_mex_destroy(&c6_b_setSimStateSideEffectsInfo);
  return c6_y;
}

static const mxArray *c6_j_emlrt_marshallIn(SFc6_ggggInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  const mxArray *c6_y = NULL;
  (void)chartInstance;
  (void)c6_parentId;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_duplicatearraysafe(&c6_u), false);
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static const mxArray *sf_get_hover_data_for_msg(SFc6_ggggInstanceStruct
  *chartInstance, int32_T c6_ssid)
{
  const mxArray *c6_msgInfo;
  (void)chartInstance;
  (void)c6_ssid;
  c6_msgInfo = NULL;
  return NULL;
}

static void c6_init_sf_message_store_memory(SFc6_ggggInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_dsm_address_info(SFc6_ggggInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc6_ggggInstanceStruct *chartInstance)
{
  chartInstance->c6_sfEvent = (int32_T *)ssGetDWork_wrapper(chartInstance->S, 0);
  chartInstance->c6_is_active_c6_gggg = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 1);
  chartInstance->c6_is_c6_gggg = (uint8_T *)ssGetDWork_wrapper(chartInstance->S,
    2);
  chartInstance->c6_is_enable1 = (uint8_T *)ssGetDWork_wrapper(chartInstance->S,
    3);
  chartInstance->c6_is_active_enable1 = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 4);
  chartInstance->c6_is_enable2 = (uint8_T *)ssGetDWork_wrapper(chartInstance->S,
    5);
  chartInstance->c6_is_active_enable2 = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 6);
  chartInstance->c6_is_enable3 = (uint8_T *)ssGetDWork_wrapper(chartInstance->S,
    7);
  chartInstance->c6_is_active_enable3 = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 8);
  chartInstance->c6_xuanjindaowei = (boolean_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c6_yuxuansongdaowei = (boolean_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c6_xuansongdaowei = (boolean_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c6_xuanjin_enable = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c6_yuxuansong_enable = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c6_xuansong_enable = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c6_xuanjinmingling = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c6_yuxuansongmingling = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c6_xuansongmingling = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 5);
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
void sf_c6_gggg_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1529569314U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(873046U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3960288488U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2004183553U);
}

mxArray* sf_c6_gggg_get_post_codegen_info(void);
mxArray *sf_c6_gggg_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("d7CxEP6AivQeXCVRA5hIEF");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,6,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,2,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,2,"type",mxType);
    }

    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,3,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,3,"type",mxType);
    }

    mxSetField(mxData,3,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,4,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,4,"type",mxType);
    }

    mxSetField(mxData,4,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,5,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,5,"type",mxType);
    }

    mxSetField(mxData,5,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,3,3,dataFields);

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

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,2,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,2,"type",mxType);
    }

    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  {
    mxArray* mxPostCodegenInfo = sf_c6_gggg_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c6_gggg_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c6_gggg_jit_fallback_info(void)
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

mxArray *sf_c6_gggg_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c6_gggg_get_post_codegen_info(void)
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

static const mxArray *sf_get_sim_state_info_c6_gggg(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x10'type','srcId','name','auxInfo'{{M[1],M[53],T\"xuanjin_enable\",},{M[1],M[55],T\"xuansong_enable\",},{M[1],M[54],T\"yuxuansong_enable\",},{M[8],M[0],T\"is_active_c6_gggg\",},{M[8],M[9],T\"is_active_enable1\",},{M[8],M[65],T\"is_active_enable2\",},{M[8],M[69],T\"is_active_enable3\",},{M[9],M[0],T\"is_c6_gggg\",},{M[9],M[9],T\"is_enable1\",},{M[9],M[65],T\"is_enable2\",}}",
    "100 S1x2'type','srcId','name','auxInfo'{{M[9],M[69],T\"is_enable3\",},{M[15],M[0],T\"dataWrittenToVector\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 12, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c6_gggg_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const mxArray* sf_opaque_get_hover_data_for_msg(void* chartInstance,
  int32_T msgSSID)
{
  return sf_get_hover_data_for_msg( (SFc6_ggggInstanceStruct *) chartInstance,
    msgSSID);
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc6_ggggInstanceStruct *chartInstance = (SFc6_ggggInstanceStruct *)
      sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _ggggMachineNumber_,
           6,
           13,
           12,
           0,
           9,
           0,
           0,
           0,
           0,
           0,
           &chartInstance->chartNumber,
           &chartInstance->instanceNumber,
           (void *)S);

        /* Each instance must initialize its own list of scripts */
        init_script_number_translation(_ggggMachineNumber_,
          chartInstance->chartNumber,chartInstance->instanceNumber);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          sf_debug_set_chart_disable_implicit_casting
            (sfGlobalDebugInstanceStruct,_ggggMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(sfGlobalDebugInstanceStruct,
            _ggggMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,"xuanjindaowei");
          _SFD_SET_DATA_PROPS(1,1,1,0,"yuxuansongdaowei");
          _SFD_SET_DATA_PROPS(2,1,1,0,"xuansongdaowei");
          _SFD_SET_DATA_PROPS(3,1,1,0,"xuanjinmingling");
          _SFD_SET_DATA_PROPS(4,1,1,0,"yuxuansongmingling");
          _SFD_SET_DATA_PROPS(5,1,1,0,"xuansongmingling");
          _SFD_SET_DATA_PROPS(6,2,0,1,"xuanjin_enable");
          _SFD_SET_DATA_PROPS(7,2,0,1,"yuxuansong_enable");
          _SFD_SET_DATA_PROPS(8,2,0,1,"xuansong_enable");
          _SFD_STATE_INFO(0,1,0);
          _SFD_STATE_INFO(1,0,1);
          _SFD_STATE_INFO(2,0,0);
          _SFD_STATE_INFO(3,0,0);
          _SFD_STATE_INFO(4,0,0);
          _SFD_STATE_INFO(5,0,1);
          _SFD_STATE_INFO(6,0,0);
          _SFD_STATE_INFO(7,0,0);
          _SFD_STATE_INFO(8,0,0);
          _SFD_STATE_INFO(9,0,1);
          _SFD_STATE_INFO(10,0,0);
          _SFD_STATE_INFO(11,0,0);
          _SFD_STATE_INFO(12,0,0);
          _SFD_CH_SUBSTATE_COUNT(1);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_ST_SUBSTATE_COUNT(0,3);
          _SFD_ST_SUBSTATE_INDEX(0,0,1);
          _SFD_ST_SUBSTATE_INDEX(0,1,5);
          _SFD_ST_SUBSTATE_INDEX(0,2,9);
          _SFD_ST_SUBSTATE_COUNT(1,3);
          _SFD_ST_SUBSTATE_INDEX(1,0,2);
          _SFD_ST_SUBSTATE_INDEX(1,1,3);
          _SFD_ST_SUBSTATE_INDEX(1,2,4);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,0);
          _SFD_ST_SUBSTATE_COUNT(4,0);
          _SFD_ST_SUBSTATE_COUNT(5,3);
          _SFD_ST_SUBSTATE_INDEX(5,0,6);
          _SFD_ST_SUBSTATE_INDEX(5,1,7);
          _SFD_ST_SUBSTATE_INDEX(5,2,8);
          _SFD_ST_SUBSTATE_COUNT(6,0);
          _SFD_ST_SUBSTATE_COUNT(7,0);
          _SFD_ST_SUBSTATE_COUNT(8,0);
          _SFD_ST_SUBSTATE_COUNT(9,3);
          _SFD_ST_SUBSTATE_INDEX(9,0,10);
          _SFD_ST_SUBSTATE_INDEX(9,1,11);
          _SFD_ST_SUBSTATE_INDEX(9,2,12);
          _SFD_ST_SUBSTATE_COUNT(10,0);
          _SFD_ST_SUBSTATE_COUNT(11,0);
          _SFD_ST_SUBSTATE_COUNT(12,0);
        }

        _SFD_CV_INIT_CHART(1,0,0,0);

        {
          _SFD_CV_INIT_STATE(0,3,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(1,3,1,0,0,0,NULL,NULL);
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
          _SFD_CV_INIT_STATE(5,3,1,0,0,0,NULL,NULL);
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
          _SFD_CV_INIT_STATE(9,3,1,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(10,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(11,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(12,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(3,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(1,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(2,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(7,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(5,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(4,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(6,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(10,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(9,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(8,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(11,0,NULL,NULL,0,NULL);

        /* Initialization of MATLAB Function Model Coverage */
        _SFD_CV_INIT_EML(2,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(3,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(4,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(8,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(7,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(6,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(11,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(12,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(10,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(1,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(1,0,0,1,17,1,17);
        _SFD_CV_INIT_EML_RELATIONAL(1,0,0,1,17,-1,0);
        _SFD_CV_INIT_EML(2,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(2,0,0,1,43,1,43);

        {
          static int condStart[] = { 1, 24 };

          static int condEnd[] = { 22, 43 };

          static int pfixExpr[] = { 0, 1, -2 };

          _SFD_CV_INIT_EML_MCDC(2,0,0,1,43,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(2,0,0,1,22,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(2,0,1,24,43,-1,0);
        _SFD_CV_INIT_EML(3,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(3,0,0,1,17,1,17);
        _SFD_CV_INIT_EML_RELATIONAL(3,0,0,1,17,-1,0);
        _SFD_CV_INIT_EML(4,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(4,0,0,1,20,1,20);
        _SFD_CV_INIT_EML_RELATIONAL(4,0,0,1,20,-1,0);
        _SFD_CV_INIT_EML(5,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(5,0,0,1,20,1,20);
        _SFD_CV_INIT_EML_RELATIONAL(5,0,0,1,20,-1,0);
        _SFD_CV_INIT_EML(6,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(6,0,0,1,40,1,40);

        {
          static int condStart[] = { 1, 22 };

          static int condEnd[] = { 20, 40 };

          static int pfixExpr[] = { 0, 1, -2 };

          _SFD_CV_INIT_EML_MCDC(6,0,0,1,40,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(6,0,0,1,20,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(6,0,1,22,40,-1,0);
        _SFD_CV_INIT_EML(8,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(8,0,0,1,18,1,18);
        _SFD_CV_INIT_EML_RELATIONAL(8,0,0,1,18,-1,0);
        _SFD_CV_INIT_EML(9,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(9,0,0,1,18,1,18);
        _SFD_CV_INIT_EML_RELATIONAL(9,0,0,1,18,-1,0);
        _SFD_CV_INIT_EML(11,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(11,0,0,1,19,1,19);
        _SFD_CV_INIT_EML_RELATIONAL(11,0,0,1,19,-1,0);
        _SFD_SET_DATA_COMPILED_PROPS(0,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_sf_marshallOut,(MexInFcnForType)c6_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_sf_marshallOut,(MexInFcnForType)c6_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_sf_marshallOut,(MexInFcnForType)c6_sf_marshallIn);
      }
    } else {
      sf_debug_reset_current_state_configuration(sfGlobalDebugInstanceStruct,
        _ggggMachineNumber_,chartInstance->chartNumber,
        chartInstance->instanceNumber);
    }
  }
}

static void chart_debug_initialize_data_addresses(SimStruct *S)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc6_ggggInstanceStruct *chartInstance = (SFc6_ggggInstanceStruct *)
      sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        _SFD_SET_DATA_VALUE_PTR(0U, chartInstance->c6_xuanjindaowei);
        _SFD_SET_DATA_VALUE_PTR(1U, chartInstance->c6_yuxuansongdaowei);
        _SFD_SET_DATA_VALUE_PTR(2U, chartInstance->c6_xuansongdaowei);
        _SFD_SET_DATA_VALUE_PTR(6U, chartInstance->c6_xuanjin_enable);
        _SFD_SET_DATA_VALUE_PTR(7U, chartInstance->c6_yuxuansong_enable);
        _SFD_SET_DATA_VALUE_PTR(8U, chartInstance->c6_xuansong_enable);
        _SFD_SET_DATA_VALUE_PTR(3U, chartInstance->c6_xuanjinmingling);
        _SFD_SET_DATA_VALUE_PTR(4U, chartInstance->c6_yuxuansongmingling);
        _SFD_SET_DATA_VALUE_PTR(5U, chartInstance->c6_xuansongmingling);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "s0ZMJXniuzmCfbs1sYhSLJF";
}

static void sf_check_dwork_consistency(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    const uint32_T *sfunDWorkChecksum = sf_get_sfun_dwork_checksum();
    mxArray *infoStruct = load_gggg_optimization_info(sim_mode_is_rtw_gen(S),
      sim_mode_is_modelref_sim(S), sim_mode_is_external(S));
    mxArray* mxRTWDWorkChecksum = sf_get_dwork_info_from_mat_file(S,
      sf_get_instance_specialization(), infoStruct, 6, "dworkChecksum");
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

static void sf_opaque_initialize_c6_gggg(void *chartInstanceVar)
{
  sf_check_dwork_consistency(((SFc6_ggggInstanceStruct*) chartInstanceVar)->S);
  chart_debug_initialization(((SFc6_ggggInstanceStruct*) chartInstanceVar)->S,0);
  initialize_params_c6_gggg((SFc6_ggggInstanceStruct*) chartInstanceVar);
  initialize_c6_gggg((SFc6_ggggInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c6_gggg(void *chartInstanceVar)
{
  enable_c6_gggg((SFc6_ggggInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c6_gggg(void *chartInstanceVar)
{
  disable_c6_gggg((SFc6_ggggInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c6_gggg(void *chartInstanceVar)
{
  sf_gateway_c6_gggg((SFc6_ggggInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_ext_mode_exec_c6_gggg(void *chartInstanceVar)
{
  ext_mode_exec_c6_gggg((SFc6_ggggInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c6_gggg(SimStruct* S)
{
  return get_sim_state_c6_gggg((SFc6_ggggInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c6_gggg(SimStruct* S, const mxArray *st)
{
  set_sim_state_c6_gggg((SFc6_ggggInstanceStruct*)sf_get_chart_instance_ptr(S),
                        st);
}

static void sf_opaque_terminate_c6_gggg(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc6_ggggInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_gggg_optimization_info();
    }

    finalize_c6_gggg((SFc6_ggggInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc6_gggg((SFc6_ggggInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c6_gggg(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c6_gggg((SFc6_ggggInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

mxArray *sf_c6_gggg_get_testpoint_info(void)
{
  return NULL;
}

static void sf_set_sfun_dwork_info(SimStruct *S)
{
  const char *dworkEncStr[] = {
    "100 S1x9'type','isSigned','wordLength','bias','slope','exponent','isScaledDouble','isComplex','size','local_queue_dwork_idx','local_queue_id'{{T\"int32\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]}}"
  };

  sf_set_encoded_dwork_info(S, dworkEncStr, 9, 10);
}

static uint32_T* sf_get_sfun_dwork_checksum()
{
  static uint32_T checksum[4] = { 1159770271U, 2669725091U, 806269374U,
    1270038458U };

  return checksum;
}

static void mdlSetWorkWidths_c6_gggg(SimStruct *S)
{
  ssSetStatesModifiedOnlyInUpdate(S, 0);
  ssMdlUpdateIsEmpty(S, 1);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_gggg_optimization_info(sim_mode_is_rtw_gen(S),
      sim_mode_is_modelref_sim(S), sim_mode_is_external(S));
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,6);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,6,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_set_chart_accesses_machine_info(S, sf_get_instance_specialization(),
      infoStruct, 6);
    sf_update_buildInfo(S, sf_get_instance_specialization(),infoStruct,6);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 5, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,6,6);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,6,3);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=3; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 6; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,6);
    sf_register_codegen_names_for_scoped_functions_defined_by_chart(S);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
    sf_set_sfun_dwork_info(S);
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(1256282725U));
  ssSetChecksum1(S,(1395236708U));
  ssSetChecksum2(S,(1233284641U));
  ssSetChecksum3(S,(1339667125U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSetStateSemanticsClassicAndSynchronous(S, true);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c6_gggg(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c6_gggg(SimStruct *S)
{
  SFc6_ggggInstanceStruct *chartInstance;
  chartInstance = (SFc6_ggggInstanceStruct *)utMalloc(sizeof
    (SFc6_ggggInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc6_ggggInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c6_gggg;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c6_gggg;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c6_gggg;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c6_gggg;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c6_gggg;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c6_gggg;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c6_gggg;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c6_gggg;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c6_gggg;
  chartInstance->chartInfo.mdlStart = mdlStart_c6_gggg;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c6_gggg;
  chartInstance->chartInfo.callGetHoverDataForMsg =
    sf_opaque_get_hover_data_for_msg;
  chartInstance->chartInfo.extModeExec = sf_opaque_ext_mode_exec_c6_gggg;
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
  mdl_start_c6_gggg(chartInstance);
}

void c6_gggg_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c6_gggg(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c6_gggg(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c6_gggg(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c6_gggg_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
