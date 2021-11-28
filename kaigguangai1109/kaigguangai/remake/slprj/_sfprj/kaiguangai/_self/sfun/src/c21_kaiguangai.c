/* Include files */

#include "kaiguangai_sfun.h"
#include "c21_kaiguangai.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "kaiguangai_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c_with_debugger(S, sfGlobalDebugInstanceStruct);

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization);
static void chart_debug_initialize_data_addresses(SimStruct *S);
static const mxArray* sf_opaque_get_hover_data_for_msg(void *chartInstance,
  int32_T msgSSID);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)
#define c21_IN_NO_ACTIVE_CHILD         ((uint8_T)0U)
#define c21_IN_MANUAL                  ((uint8_T)1U)
#define c21_IN_end                     ((uint8_T)2U)
#define c21_IN_off1                    ((uint8_T)3U)
#define c21_IN_on1                     ((uint8_T)4U)
#define c21_IN_A                       ((uint8_T)1U)
#define c21_IN_on                      ((uint8_T)2U)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;

/* Function Declarations */
static void initialize_c21_kaiguangai(SFc21_kaiguangaiInstanceStruct
  *chartInstance);
static void initialize_params_c21_kaiguangai(SFc21_kaiguangaiInstanceStruct
  *chartInstance);
static void enable_c21_kaiguangai(SFc21_kaiguangaiInstanceStruct *chartInstance);
static void disable_c21_kaiguangai(SFc21_kaiguangaiInstanceStruct *chartInstance);
static void c21_update_debugger_state_c21_kaiguangai
  (SFc21_kaiguangaiInstanceStruct *chartInstance);
static void ext_mode_exec_c21_kaiguangai(SFc21_kaiguangaiInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c21_kaiguangai
  (SFc21_kaiguangaiInstanceStruct *chartInstance);
static void set_sim_state_c21_kaiguangai(SFc21_kaiguangaiInstanceStruct
  *chartInstance, const mxArray *c21_st);
static void c21_set_sim_state_side_effects_c21_kaiguangai
  (SFc21_kaiguangaiInstanceStruct *chartInstance);
static void finalize_c21_kaiguangai(SFc21_kaiguangaiInstanceStruct
  *chartInstance);
static void sf_gateway_c21_kaiguangai(SFc21_kaiguangaiInstanceStruct
  *chartInstance);
static void mdl_start_c21_kaiguangai(SFc21_kaiguangaiInstanceStruct
  *chartInstance);
static void initSimStructsc21_kaiguangai(SFc21_kaiguangaiInstanceStruct
  *chartInstance);
static void c21_MANUAL(SFc21_kaiguangaiInstanceStruct *chartInstance);
static void c21_exit_internal_MANUAL(SFc21_kaiguangaiInstanceStruct
  *chartInstance);
static void init_script_number_translation(uint32_T c21_machineNumber, uint32_T
  c21_chartNumber, uint32_T c21_instanceNumber);
static const mxArray *c21_sf_marshallOut(void *chartInstanceVoid, void
  *c21_inData);
static int32_T c21_emlrt_marshallIn(SFc21_kaiguangaiInstanceStruct
  *chartInstance, const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId);
static void c21_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c21_mxArrayInData, const char_T *c21_varName, void *c21_outData);
static const mxArray *c21_b_sf_marshallOut(void *chartInstanceVoid, void
  *c21_inData);
static uint8_T c21_b_emlrt_marshallIn(SFc21_kaiguangaiInstanceStruct
  *chartInstance, const mxArray *c21_b_is_kaigai, const char_T *c21_identifier);
static uint8_T c21_c_emlrt_marshallIn(SFc21_kaiguangaiInstanceStruct
  *chartInstance, const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId);
static void c21_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c21_mxArrayInData, const char_T *c21_varName, void *c21_outData);
static const mxArray *c21_c_sf_marshallOut(void *chartInstanceVoid, void
  *c21_inData);
static real_T c21_d_emlrt_marshallIn(SFc21_kaiguangaiInstanceStruct
  *chartInstance, const mxArray *c21_b_skhx, const char_T *c21_identifier);
static real_T c21_e_emlrt_marshallIn(SFc21_kaiguangaiInstanceStruct
  *chartInstance, const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId);
static void c21_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c21_mxArrayInData, const char_T *c21_varName, void *c21_outData);
static uint16_T c21_f_emlrt_marshallIn(SFc21_kaiguangaiInstanceStruct
  *chartInstance, const mxArray *c21_b_temporalCounter_i1, const char_T
  *c21_identifier);
static uint16_T c21_g_emlrt_marshallIn(SFc21_kaiguangaiInstanceStruct
  *chartInstance, const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId);
static const mxArray *c21_h_emlrt_marshallIn(SFc21_kaiguangaiInstanceStruct
  *chartInstance, const mxArray *c21_b_setSimStateSideEffectsInfo, const char_T *
  c21_identifier);
static const mxArray *c21_i_emlrt_marshallIn(SFc21_kaiguangaiInstanceStruct
  *chartInstance, const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId);
static const mxArray *sf_get_hover_data_for_msg(SFc21_kaiguangaiInstanceStruct
  *chartInstance, int32_T c21_ssid);
static void c21_init_sf_message_store_memory(SFc21_kaiguangaiInstanceStruct
  *chartInstance);
static uint16_T c21__u16_s32_(SFc21_kaiguangaiInstanceStruct *chartInstance,
  int32_T c21_b, uint32_T c21_ssid_src_loc, int32_T c21_offset_src_loc, int32_T
  c21_length_src_loc);
static void init_dsm_address_info(SFc21_kaiguangaiInstanceStruct *chartInstance);
static void init_simulink_io_address(SFc21_kaiguangaiInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c21_kaiguangai(SFc21_kaiguangaiInstanceStruct
  *chartInstance)
{
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc21_kaiguangai(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  *chartInstance->c21_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c21_doSetSimStateSideEffects = 0U;
  chartInstance->c21_setSimStateSideEffectsInfo = NULL;
  *chartInstance->c21_is_active_guangai = 0U;
  *chartInstance->c21_is_guangai = c21_IN_NO_ACTIVE_CHILD;
  *chartInstance->c21_is_active_jiesuo = 0U;
  *chartInstance->c21_is_jiesuo = c21_IN_NO_ACTIVE_CHILD;
  *chartInstance->c21_is_active_kaigai = 0U;
  *chartInstance->c21_is_kaigai = c21_IN_NO_ACTIVE_CHILD;
  *chartInstance->c21_is_active_songkai = 0U;
  *chartInstance->c21_is_songkai = c21_IN_NO_ACTIVE_CHILD;
  *chartInstance->c21_is_active_suoding = 0U;
  *chartInstance->c21_is_suoding = c21_IN_NO_ACTIVE_CHILD;
  *chartInstance->c21_is_active_yajin = 0U;
  *chartInstance->c21_is_yajin = c21_IN_NO_ACTIVE_CHILD;
  *chartInstance->c21_temporalCounter_i1 = 0U;
  *chartInstance->c21_is_active_c21_kaiguangai = 0U;
  *chartInstance->c21_is_c21_kaiguangai = c21_IN_NO_ACTIVE_CHILD;
  if (!(sf_get_output_port_reusable(chartInstance->S, 1) != 0)) {
    *chartInstance->c21_skhx = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c21_skhx, 8U, 1U, 20U,
                          *chartInstance->c21_sfEvent, false);
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 2) != 0)) {
    *chartInstance->c21_kghx = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c21_kghx, 9U, 1U, 20U,
                          *chartInstance->c21_sfEvent, false);
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 3) != 0)) {
    *chartInstance->c21_yjhx = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c21_yjhx, 10U, 1U, 20U,
                          *chartInstance->c21_sfEvent, false);
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 4) != 0)) {
    *chartInstance->c21_gghx = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c21_gghx, 11U, 1U, 20U,
                          *chartInstance->c21_sfEvent, false);
  }
}

static void initialize_params_c21_kaiguangai(SFc21_kaiguangaiInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void enable_c21_kaiguangai(SFc21_kaiguangaiInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c21_kaiguangai(SFc21_kaiguangaiInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c21_update_debugger_state_c21_kaiguangai
  (SFc21_kaiguangaiInstanceStruct *chartInstance)
{
  uint32_T c21_prevAniVal;
  c21_prevAniVal = _SFD_GET_ANIMATION();
  _SFD_SET_ANIMATION(0U);
  _SFD_SET_HONOR_BREAKPOINTS(0U);
  if (*chartInstance->c21_is_active_c21_kaiguangai == 1U) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 20U, *chartInstance->c21_sfEvent);
  }

  if (*chartInstance->c21_is_c21_kaiguangai == c21_IN_MANUAL) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c21_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c21_sfEvent);
  }

  if (*chartInstance->c21_is_active_kaigai == 1U) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c21_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c21_sfEvent);
  }

  if (*chartInstance->c21_is_kaigai == c21_IN_A) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, *chartInstance->c21_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c21_sfEvent);
  }

  if (*chartInstance->c21_is_kaigai == c21_IN_on) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U, *chartInstance->c21_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 9U, *chartInstance->c21_sfEvent);
  }

  if (*chartInstance->c21_is_active_guangai == 1U) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c21_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c21_sfEvent);
  }

  if (*chartInstance->c21_is_guangai == c21_IN_A) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c21_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c21_sfEvent);
  }

  if (*chartInstance->c21_is_guangai == c21_IN_on) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c21_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c21_sfEvent);
  }

  if (*chartInstance->c21_is_active_songkai == 1U) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, *chartInstance->c21_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c21_sfEvent);
  }

  if (*chartInstance->c21_is_songkai == c21_IN_A) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 11U, *chartInstance->c21_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 11U, *chartInstance->c21_sfEvent);
  }

  if (*chartInstance->c21_is_songkai == c21_IN_on) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 12U, *chartInstance->c21_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 12U, *chartInstance->c21_sfEvent);
  }

  if (*chartInstance->c21_is_active_yajin == 1U) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 16U, *chartInstance->c21_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 16U, *chartInstance->c21_sfEvent);
  }

  if (*chartInstance->c21_is_yajin == c21_IN_A) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 17U, *chartInstance->c21_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 17U, *chartInstance->c21_sfEvent);
  }

  if (*chartInstance->c21_is_yajin == c21_IN_on) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 18U, *chartInstance->c21_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 18U, *chartInstance->c21_sfEvent);
  }

  if (*chartInstance->c21_is_active_suoding == 1U) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 13U, *chartInstance->c21_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 13U, *chartInstance->c21_sfEvent);
  }

  if (*chartInstance->c21_is_suoding == c21_IN_A) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 14U, *chartInstance->c21_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 14U, *chartInstance->c21_sfEvent);
  }

  if (*chartInstance->c21_is_suoding == c21_IN_on) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 15U, *chartInstance->c21_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 15U, *chartInstance->c21_sfEvent);
  }

  if (*chartInstance->c21_is_active_jiesuo == 1U) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c21_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c21_sfEvent);
  }

  if (*chartInstance->c21_is_jiesuo == c21_IN_A) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c21_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c21_sfEvent);
  }

  if (*chartInstance->c21_is_jiesuo == c21_IN_on) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c21_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c21_sfEvent);
  }

  if (*chartInstance->c21_is_c21_kaiguangai == c21_IN_off1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 20U, *chartInstance->c21_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 20U, *chartInstance->c21_sfEvent);
  }

  if (*chartInstance->c21_is_c21_kaiguangai == c21_IN_on1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 21U, *chartInstance->c21_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 21U, *chartInstance->c21_sfEvent);
  }

  if (*chartInstance->c21_is_c21_kaiguangai == c21_IN_end) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 19U, *chartInstance->c21_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 19U, *chartInstance->c21_sfEvent);
  }

  _SFD_SET_ANIMATION(c21_prevAniVal);
  _SFD_SET_HONOR_BREAKPOINTS(1U);
  _SFD_ANIMATE();
}

static void ext_mode_exec_c21_kaiguangai(SFc21_kaiguangaiInstanceStruct
  *chartInstance)
{
  c21_update_debugger_state_c21_kaiguangai(chartInstance);
}

static const mxArray *get_sim_state_c21_kaiguangai
  (SFc21_kaiguangaiInstanceStruct *chartInstance)
{
  const mxArray *c21_st;
  const mxArray *c21_y = NULL;
  real_T c21_hoistedGlobal;
  const mxArray *c21_b_y = NULL;
  real_T c21_b_hoistedGlobal;
  const mxArray *c21_c_y = NULL;
  real_T c21_c_hoistedGlobal;
  const mxArray *c21_d_y = NULL;
  real_T c21_d_hoistedGlobal;
  const mxArray *c21_e_y = NULL;
  uint8_T c21_e_hoistedGlobal;
  const mxArray *c21_f_y = NULL;
  uint8_T c21_f_hoistedGlobal;
  const mxArray *c21_g_y = NULL;
  uint8_T c21_g_hoistedGlobal;
  const mxArray *c21_h_y = NULL;
  uint8_T c21_h_hoistedGlobal;
  const mxArray *c21_i_y = NULL;
  uint8_T c21_i_hoistedGlobal;
  const mxArray *c21_j_y = NULL;
  uint8_T c21_j_hoistedGlobal;
  const mxArray *c21_k_y = NULL;
  uint8_T c21_k_hoistedGlobal;
  const mxArray *c21_l_y = NULL;
  uint8_T c21_l_hoistedGlobal;
  const mxArray *c21_m_y = NULL;
  uint8_T c21_m_hoistedGlobal;
  const mxArray *c21_n_y = NULL;
  uint8_T c21_n_hoistedGlobal;
  const mxArray *c21_o_y = NULL;
  uint8_T c21_o_hoistedGlobal;
  const mxArray *c21_p_y = NULL;
  uint8_T c21_p_hoistedGlobal;
  const mxArray *c21_q_y = NULL;
  uint8_T c21_q_hoistedGlobal;
  const mxArray *c21_r_y = NULL;
  uint8_T c21_r_hoistedGlobal;
  const mxArray *c21_s_y = NULL;
  uint16_T c21_s_hoistedGlobal;
  const mxArray *c21_t_y = NULL;
  c21_st = NULL;
  c21_st = NULL;
  c21_y = NULL;
  sf_mex_assign(&c21_y, sf_mex_createcellmatrix(19, 1), false);
  c21_hoistedGlobal = *chartInstance->c21_gghx;
  c21_b_y = NULL;
  sf_mex_assign(&c21_b_y, sf_mex_create("y", &c21_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c21_y, 0, c21_b_y);
  c21_b_hoistedGlobal = *chartInstance->c21_kghx;
  c21_c_y = NULL;
  sf_mex_assign(&c21_c_y, sf_mex_create("y", &c21_b_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c21_y, 1, c21_c_y);
  c21_c_hoistedGlobal = *chartInstance->c21_skhx;
  c21_d_y = NULL;
  sf_mex_assign(&c21_d_y, sf_mex_create("y", &c21_c_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c21_y, 2, c21_d_y);
  c21_d_hoistedGlobal = *chartInstance->c21_yjhx;
  c21_e_y = NULL;
  sf_mex_assign(&c21_e_y, sf_mex_create("y", &c21_d_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c21_y, 3, c21_e_y);
  c21_e_hoistedGlobal = *chartInstance->c21_is_active_c21_kaiguangai;
  c21_f_y = NULL;
  sf_mex_assign(&c21_f_y, sf_mex_create("y", &c21_e_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c21_y, 4, c21_f_y);
  c21_f_hoistedGlobal = *chartInstance->c21_is_active_kaigai;
  c21_g_y = NULL;
  sf_mex_assign(&c21_g_y, sf_mex_create("y", &c21_f_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c21_y, 5, c21_g_y);
  c21_g_hoistedGlobal = *chartInstance->c21_is_active_guangai;
  c21_h_y = NULL;
  sf_mex_assign(&c21_h_y, sf_mex_create("y", &c21_g_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c21_y, 6, c21_h_y);
  c21_h_hoistedGlobal = *chartInstance->c21_is_active_songkai;
  c21_i_y = NULL;
  sf_mex_assign(&c21_i_y, sf_mex_create("y", &c21_h_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c21_y, 7, c21_i_y);
  c21_i_hoistedGlobal = *chartInstance->c21_is_active_yajin;
  c21_j_y = NULL;
  sf_mex_assign(&c21_j_y, sf_mex_create("y", &c21_i_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c21_y, 8, c21_j_y);
  c21_j_hoistedGlobal = *chartInstance->c21_is_active_suoding;
  c21_k_y = NULL;
  sf_mex_assign(&c21_k_y, sf_mex_create("y", &c21_j_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c21_y, 9, c21_k_y);
  c21_k_hoistedGlobal = *chartInstance->c21_is_active_jiesuo;
  c21_l_y = NULL;
  sf_mex_assign(&c21_l_y, sf_mex_create("y", &c21_k_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c21_y, 10, c21_l_y);
  c21_l_hoistedGlobal = *chartInstance->c21_is_c21_kaiguangai;
  c21_m_y = NULL;
  sf_mex_assign(&c21_m_y, sf_mex_create("y", &c21_l_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c21_y, 11, c21_m_y);
  c21_m_hoistedGlobal = *chartInstance->c21_is_kaigai;
  c21_n_y = NULL;
  sf_mex_assign(&c21_n_y, sf_mex_create("y", &c21_m_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c21_y, 12, c21_n_y);
  c21_n_hoistedGlobal = *chartInstance->c21_is_guangai;
  c21_o_y = NULL;
  sf_mex_assign(&c21_o_y, sf_mex_create("y", &c21_n_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c21_y, 13, c21_o_y);
  c21_o_hoistedGlobal = *chartInstance->c21_is_songkai;
  c21_p_y = NULL;
  sf_mex_assign(&c21_p_y, sf_mex_create("y", &c21_o_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c21_y, 14, c21_p_y);
  c21_p_hoistedGlobal = *chartInstance->c21_is_yajin;
  c21_q_y = NULL;
  sf_mex_assign(&c21_q_y, sf_mex_create("y", &c21_p_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c21_y, 15, c21_q_y);
  c21_q_hoistedGlobal = *chartInstance->c21_is_suoding;
  c21_r_y = NULL;
  sf_mex_assign(&c21_r_y, sf_mex_create("y", &c21_q_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c21_y, 16, c21_r_y);
  c21_r_hoistedGlobal = *chartInstance->c21_is_jiesuo;
  c21_s_y = NULL;
  sf_mex_assign(&c21_s_y, sf_mex_create("y", &c21_r_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c21_y, 17, c21_s_y);
  c21_s_hoistedGlobal = *chartInstance->c21_temporalCounter_i1;
  c21_t_y = NULL;
  sf_mex_assign(&c21_t_y, sf_mex_create("y", &c21_s_hoistedGlobal, 5, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c21_y, 18, c21_t_y);
  sf_mex_assign(&c21_st, c21_y, false);
  return c21_st;
}

static void set_sim_state_c21_kaiguangai(SFc21_kaiguangaiInstanceStruct
  *chartInstance, const mxArray *c21_st)
{
  const mxArray *c21_u;
  c21_u = sf_mex_dup(c21_st);
  *chartInstance->c21_gghx = c21_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("gghx", c21_u, 0)), "gghx");
  *chartInstance->c21_kghx = c21_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("kghx", c21_u, 1)), "kghx");
  *chartInstance->c21_skhx = c21_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("skhx", c21_u, 2)), "skhx");
  *chartInstance->c21_yjhx = c21_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("yjhx", c21_u, 3)), "yjhx");
  *chartInstance->c21_is_active_c21_kaiguangai = c21_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell("is_active_c21_kaiguangai", c21_u,
       4)), "is_active_c21_kaiguangai");
  *chartInstance->c21_is_active_kaigai = c21_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_active_kaigai", c21_u, 5)), "is_active_kaigai");
  *chartInstance->c21_is_active_guangai = c21_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_active_guangai", c21_u, 6)),
    "is_active_guangai");
  *chartInstance->c21_is_active_songkai = c21_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_active_songkai", c21_u, 7)),
    "is_active_songkai");
  *chartInstance->c21_is_active_yajin = c21_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_active_yajin", c21_u, 8)), "is_active_yajin");
  *chartInstance->c21_is_active_suoding = c21_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_active_suoding", c21_u, 9)),
    "is_active_suoding");
  *chartInstance->c21_is_active_jiesuo = c21_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_active_jiesuo", c21_u, 10)),
    "is_active_jiesuo");
  *chartInstance->c21_is_c21_kaiguangai = c21_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_c21_kaiguangai", c21_u, 11)),
    "is_c21_kaiguangai");
  *chartInstance->c21_is_kaigai = c21_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_kaigai", c21_u, 12)), "is_kaigai");
  *chartInstance->c21_is_guangai = c21_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_guangai", c21_u, 13)), "is_guangai");
  *chartInstance->c21_is_songkai = c21_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_songkai", c21_u, 14)), "is_songkai");
  *chartInstance->c21_is_yajin = c21_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_yajin", c21_u, 15)), "is_yajin");
  *chartInstance->c21_is_suoding = c21_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_suoding", c21_u, 16)), "is_suoding");
  *chartInstance->c21_is_jiesuo = c21_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_jiesuo", c21_u, 17)), "is_jiesuo");
  *chartInstance->c21_temporalCounter_i1 = c21_f_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("temporalCounter_i1", c21_u, 18)),
    "temporalCounter_i1");
  sf_mex_assign(&chartInstance->c21_setSimStateSideEffectsInfo,
                c21_h_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(
    "setSimStateSideEffectsInfo", c21_u, 19)), "setSimStateSideEffectsInfo"),
                true);
  sf_mex_destroy(&c21_u);
  chartInstance->c21_doSetSimStateSideEffects = 1U;
  c21_update_debugger_state_c21_kaiguangai(chartInstance);
  sf_mex_destroy(&c21_st);
}

static void c21_set_sim_state_side_effects_c21_kaiguangai
  (SFc21_kaiguangaiInstanceStruct *chartInstance)
{
  if (chartInstance->c21_doSetSimStateSideEffects != 0) {
    if ((*chartInstance->c21_is_c21_kaiguangai == c21_IN_on1) && (sf_mex_sub
         (chartInstance->c21_setSimStateSideEffectsInfo,
          "setSimStateSideEffectsInfo", 1, 23) == 0.0)) {
      *chartInstance->c21_temporalCounter_i1 = 0U;
    }

    chartInstance->c21_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c21_kaiguangai(SFc21_kaiguangaiInstanceStruct
  *chartInstance)
{
  sf_mex_destroy(&chartInstance->c21_setSimStateSideEffectsInfo);
}

static void sf_gateway_c21_kaiguangai(SFc21_kaiguangaiInstanceStruct
  *chartInstance)
{
  boolean_T c21_out;
  boolean_T c21_temp;
  boolean_T c21_b_out;
  c21_set_sim_state_side_effects_c21_kaiguangai(chartInstance);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 20U, *chartInstance->c21_sfEvent);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c21_jiting, 7U, 1U, 0U,
                        *chartInstance->c21_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c21_yajin, 6U, 1U, 0U,
                        *chartInstance->c21_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c21_guangai, 5U, 1U, 0U,
                        *chartInstance->c21_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c21_jiesuo, 4U, 1U, 0U,
                        *chartInstance->c21_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c21_suoding, 3U, 1U, 0U,
                        *chartInstance->c21_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c21_kaigai, 2U, 1U, 0U,
                        *chartInstance->c21_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c21_songkai, 1U, 1U, 0U,
                        *chartInstance->c21_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c21_tiaoshi, 0U, 1U, 0U,
                        *chartInstance->c21_sfEvent, false);
  *chartInstance->c21_sfEvent = CALL_EVENT;
  if (*chartInstance->c21_temporalCounter_i1 < 511U) {
    *chartInstance->c21_temporalCounter_i1 = c21__u16_s32_(chartInstance,
      *chartInstance->c21_temporalCounter_i1 + 1, 0U, 0U, 0U);
  }

  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 20U, *chartInstance->c21_sfEvent);
  if (*chartInstance->c21_is_active_c21_kaiguangai == 0U) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 20U,
                 *chartInstance->c21_sfEvent);
    *chartInstance->c21_is_active_c21_kaiguangai = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 20U, *chartInstance->c21_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, *chartInstance->c21_sfEvent);
    *chartInstance->c21_is_c21_kaiguangai = c21_IN_off1;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 20U, *chartInstance->c21_sfEvent);
  } else {
    switch (*chartInstance->c21_is_c21_kaiguangai) {
     case c21_IN_MANUAL:
      CV_CHART_EVAL(20, 0, 1);
      c21_MANUAL(chartInstance);
      break;

     case c21_IN_end:
      CV_CHART_EVAL(20, 0, 2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 19U,
                   *chartInstance->c21_sfEvent);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 19U, *chartInstance->c21_sfEvent);
      break;

     case c21_IN_off1:
      CV_CHART_EVAL(20, 0, 3);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 0U,
                   *chartInstance->c21_sfEvent);
      c21_out = (CV_TRANSITION_EVAL(0U, (int32_T)_SFD_CCP_CALL(0U, 0,
        CV_RELATIONAL_EVAL(5U, 0U, 0, *chartInstance->c21_tiaoshi, 1.0, -1, 0U, *
                           chartInstance->c21_tiaoshi == 1.0) != 0U,
        *chartInstance->c21_sfEvent)) != 0);
      if (c21_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, *chartInstance->c21_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 20U, *chartInstance->c21_sfEvent);
        *chartInstance->c21_is_c21_kaiguangai = c21_IN_on1;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 21U, *chartInstance->c21_sfEvent);
        *chartInstance->c21_temporalCounter_i1 = 0U;
        *chartInstance->c21_skhx = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c21_skhx, 8U, 4U, 21U,
                              *chartInstance->c21_sfEvent, false);
        *chartInstance->c21_kghx = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c21_kghx, 9U, 4U, 21U,
                              *chartInstance->c21_sfEvent, false);
        *chartInstance->c21_yjhx = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c21_yjhx, 10U, 4U, 21U,
                              *chartInstance->c21_sfEvent, false);
        *chartInstance->c21_gghx = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c21_gghx, 11U, 4U, 21U,
                              *chartInstance->c21_sfEvent, false);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 20U,
                     *chartInstance->c21_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 20U, *chartInstance->c21_sfEvent);
      break;

     case c21_IN_on1:
      CV_CHART_EVAL(20, 0, 4);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U,
                   *chartInstance->c21_sfEvent);
      c21_temp = (_SFD_CCP_CALL(5U, 0, 1 != 0U, *chartInstance->c21_sfEvent) !=
                  0);
      if (c21_temp) {
        c21_temp = (_SFD_CCP_CALL(5U, 1, *chartInstance->c21_temporalCounter_i1 >=
          500 != 0U, *chartInstance->c21_sfEvent) != 0);
      }

      c21_b_out = (CV_TRANSITION_EVAL(5U, (int32_T)c21_temp) != 0);
      if (c21_b_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, *chartInstance->c21_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 21U, *chartInstance->c21_sfEvent);
        *chartInstance->c21_is_c21_kaiguangai = c21_IN_MANUAL;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c21_sfEvent);
        *chartInstance->c21_is_active_kaigai = 1U;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c21_sfEvent);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, *chartInstance->c21_sfEvent);
        *chartInstance->c21_is_kaigai = c21_IN_A;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, *chartInstance->c21_sfEvent);
        *chartInstance->c21_kghx = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c21_kghx, 9U, 4U, 8U,
                              *chartInstance->c21_sfEvent, false);
        *chartInstance->c21_is_active_guangai = 1U;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c21_sfEvent);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 9U, *chartInstance->c21_sfEvent);
        *chartInstance->c21_is_guangai = c21_IN_A;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c21_sfEvent);
        *chartInstance->c21_gghx = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c21_gghx, 11U, 4U, 2U,
                              *chartInstance->c21_sfEvent, false);
        *chartInstance->c21_is_active_songkai = 1U;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, *chartInstance->c21_sfEvent);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 12U, *chartInstance->c21_sfEvent);
        *chartInstance->c21_is_songkai = c21_IN_A;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 11U, *chartInstance->c21_sfEvent);
        *chartInstance->c21_skhx = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c21_skhx, 8U, 4U, 11U,
                              *chartInstance->c21_sfEvent, false);
        *chartInstance->c21_is_active_yajin = 1U;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 16U, *chartInstance->c21_sfEvent);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 15U, *chartInstance->c21_sfEvent);
        *chartInstance->c21_is_yajin = c21_IN_A;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 17U, *chartInstance->c21_sfEvent);
        *chartInstance->c21_yjhx = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c21_yjhx, 10U, 4U, 17U,
                              *chartInstance->c21_sfEvent, false);
        *chartInstance->c21_is_active_suoding = 1U;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 13U, *chartInstance->c21_sfEvent);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 18U, *chartInstance->c21_sfEvent);
        *chartInstance->c21_is_suoding = c21_IN_A;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 14U, *chartInstance->c21_sfEvent);
        *chartInstance->c21_yjhx = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c21_yjhx, 10U, 4U, 14U,
                              *chartInstance->c21_sfEvent, false);
        *chartInstance->c21_is_active_jiesuo = 1U;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c21_sfEvent);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 21U, *chartInstance->c21_sfEvent);
        *chartInstance->c21_is_jiesuo = c21_IN_A;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c21_sfEvent);
        *chartInstance->c21_skhx = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c21_skhx, 8U, 4U, 5U,
                              *chartInstance->c21_sfEvent, false);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 21U,
                     *chartInstance->c21_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 21U, *chartInstance->c21_sfEvent);
      break;

     default:
      CV_CHART_EVAL(20, 0, 0);

      /* Unreachable state, for coverage only */
      *chartInstance->c21_is_c21_kaiguangai = c21_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c21_sfEvent);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 20U, *chartInstance->c21_sfEvent);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_kaiguangaiMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void mdl_start_c21_kaiguangai(SFc21_kaiguangaiInstanceStruct
  *chartInstance)
{
  c21_init_sf_message_store_memory(chartInstance);
}

static void initSimStructsc21_kaiguangai(SFc21_kaiguangaiInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c21_MANUAL(SFc21_kaiguangaiInstanceStruct *chartInstance)
{
  boolean_T c21_out;
  boolean_T c21_b_out;
  boolean_T c21_c_out;
  boolean_T c21_d_out;
  boolean_T c21_e_out;
  real_T c21_d0;
  boolean_T c21_f_out;
  boolean_T c21_g_out;
  boolean_T c21_h_out;
  boolean_T c21_i_out;
  boolean_T c21_j_out;
  boolean_T c21_k_out;
  boolean_T c21_l_out;
  boolean_T c21_m_out;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 6U, *chartInstance->c21_sfEvent);
  c21_out = (CV_TRANSITION_EVAL(6U, (int32_T)_SFD_CCP_CALL(6U, 0,
    CV_RELATIONAL_EVAL(5U, 6U, 0, *chartInstance->c21_jiting, 1.0, -1, 0U,
                       *chartInstance->c21_jiting == 1.0) != 0U,
    *chartInstance->c21_sfEvent)) != 0);
  if (c21_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, *chartInstance->c21_sfEvent);
    c21_exit_internal_MANUAL(chartInstance);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c21_sfEvent);
    *chartInstance->c21_is_c21_kaiguangai = c21_IN_end;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 19U, *chartInstance->c21_sfEvent);
    *chartInstance->c21_skhx = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c21_skhx, 8U, 4U, 19U,
                          *chartInstance->c21_sfEvent, false);
    *chartInstance->c21_kghx = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c21_kghx, 9U, 4U, 19U,
                          *chartInstance->c21_sfEvent, false);
    *chartInstance->c21_yjhx = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c21_yjhx, 10U, 4U, 19U,
                          *chartInstance->c21_sfEvent, false);
    *chartInstance->c21_gghx = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c21_gghx, 11U, 4U, 19U,
                          *chartInstance->c21_sfEvent, false);
    c21_d0 = *chartInstance->c21_gghx;
    sf_mex_printf("%s =\\n", "gghx");
    sf_mex_call_debug(sfGlobalDebugInstanceStruct, "disp", 0U, 1U, 6, c21_d0);
  } else {
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U,
                 *chartInstance->c21_sfEvent);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 7U,
                 *chartInstance->c21_sfEvent);
    switch (*chartInstance->c21_is_kaigai) {
     case c21_IN_A:
      CV_STATE_EVAL(7, 0, 1);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U,
                   *chartInstance->c21_sfEvent);
      c21_b_out = (CV_TRANSITION_EVAL(4U, (int32_T)_SFD_CCP_CALL(4U, 0,
        CV_RELATIONAL_EVAL(5U, 4U, 0, *chartInstance->c21_kaigai, 1.0, -1, 0U,
                           *chartInstance->c21_kaigai == 1.0) != 0U,
        *chartInstance->c21_sfEvent)) != 0);
      if (c21_b_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, *chartInstance->c21_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c21_sfEvent);
        *chartInstance->c21_is_kaigai = c21_IN_on;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U, *chartInstance->c21_sfEvent);
        *chartInstance->c21_kghx = 1.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c21_kghx, 9U, 4U, 9U,
                              *chartInstance->c21_sfEvent, false);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 8U,
                     *chartInstance->c21_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 8U, *chartInstance->c21_sfEvent);
      break;

     case c21_IN_on:
      CV_STATE_EVAL(7, 0, 2);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U,
                   *chartInstance->c21_sfEvent);
      c21_c_out = (CV_TRANSITION_EVAL(3U, (int32_T)_SFD_CCP_CALL(3U, 0,
        CV_RELATIONAL_EVAL(5U, 3U, 0, *chartInstance->c21_kaigai, 0.0, -1, 0U,
                           *chartInstance->c21_kaigai == 0.0) != 0U,
        *chartInstance->c21_sfEvent)) != 0);
      if (c21_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, *chartInstance->c21_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 9U, *chartInstance->c21_sfEvent);
        *chartInstance->c21_is_kaigai = c21_IN_A;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, *chartInstance->c21_sfEvent);
        *chartInstance->c21_kghx = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c21_kghx, 9U, 4U, 8U,
                              *chartInstance->c21_sfEvent, false);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 9U,
                     *chartInstance->c21_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 9U, *chartInstance->c21_sfEvent);
      break;

     default:
      CV_STATE_EVAL(7, 0, 0);

      /* Unreachable state, for coverage only */
      *chartInstance->c21_is_kaigai = c21_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c21_sfEvent);
      break;
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 7U, *chartInstance->c21_sfEvent);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                 *chartInstance->c21_sfEvent);
    switch (*chartInstance->c21_is_guangai) {
     case c21_IN_A:
      CV_STATE_EVAL(1, 0, 1);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7U,
                   *chartInstance->c21_sfEvent);
      c21_d_out = (CV_TRANSITION_EVAL(7U, (int32_T)_SFD_CCP_CALL(7U, 0,
        CV_RELATIONAL_EVAL(5U, 7U, 0, *chartInstance->c21_guangai, 1.0, -1, 0U, *
                           chartInstance->c21_guangai == 1.0) != 0U,
        *chartInstance->c21_sfEvent)) != 0);
      if (c21_d_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, *chartInstance->c21_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c21_sfEvent);
        *chartInstance->c21_is_guangai = c21_IN_on;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c21_sfEvent);
        *chartInstance->c21_gghx = 1.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c21_gghx, 11U, 4U, 3U,
                              *chartInstance->c21_sfEvent, false);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U,
                     *chartInstance->c21_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, *chartInstance->c21_sfEvent);
      break;

     case c21_IN_on:
      CV_STATE_EVAL(1, 0, 2);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 8U,
                   *chartInstance->c21_sfEvent);
      c21_e_out = (CV_TRANSITION_EVAL(8U, (int32_T)_SFD_CCP_CALL(8U, 0,
        CV_RELATIONAL_EVAL(5U, 8U, 0, *chartInstance->c21_guangai, 0.0, -1, 0U, *
                           chartInstance->c21_guangai == 0.0) != 0U,
        *chartInstance->c21_sfEvent)) != 0);
      if (c21_e_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8U, *chartInstance->c21_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c21_sfEvent);
        *chartInstance->c21_is_guangai = c21_IN_A;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c21_sfEvent);
        *chartInstance->c21_gghx = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c21_gghx, 11U, 4U, 2U,
                              *chartInstance->c21_sfEvent, false);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U,
                     *chartInstance->c21_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, *chartInstance->c21_sfEvent);
      break;

     default:
      CV_STATE_EVAL(1, 0, 0);

      /* Unreachable state, for coverage only */
      *chartInstance->c21_is_guangai = c21_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c21_sfEvent);
      break;
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, *chartInstance->c21_sfEvent);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 10U,
                 *chartInstance->c21_sfEvent);
    switch (*chartInstance->c21_is_songkai) {
     case c21_IN_A:
      CV_STATE_EVAL(10, 0, 1);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 10U,
                   *chartInstance->c21_sfEvent);
      c21_f_out = (CV_TRANSITION_EVAL(10U, (int32_T)_SFD_CCP_CALL(10U, 0,
        CV_RELATIONAL_EVAL(5U, 10U, 0, *chartInstance->c21_songkai, 1.0, -1, 0U,
                           *chartInstance->c21_songkai == 1.0) != 0U,
        *chartInstance->c21_sfEvent)) != 0);
      if (c21_f_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 10U, *chartInstance->c21_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 11U, *chartInstance->c21_sfEvent);
        *chartInstance->c21_is_songkai = c21_IN_on;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 12U, *chartInstance->c21_sfEvent);
        *chartInstance->c21_skhx = 1.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c21_skhx, 8U, 4U, 12U,
                              *chartInstance->c21_sfEvent, false);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 11U,
                     *chartInstance->c21_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 11U, *chartInstance->c21_sfEvent);
      break;

     case c21_IN_on:
      CV_STATE_EVAL(10, 0, 2);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 11U,
                   *chartInstance->c21_sfEvent);
      c21_g_out = (CV_TRANSITION_EVAL(11U, (int32_T)_SFD_CCP_CALL(11U, 0,
        CV_RELATIONAL_EVAL(5U, 11U, 0, *chartInstance->c21_songkai, 0.0, -1, 0U,
                           *chartInstance->c21_songkai == 0.0) != 0U,
        *chartInstance->c21_sfEvent)) != 0);
      if (c21_g_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 11U, *chartInstance->c21_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 12U, *chartInstance->c21_sfEvent);
        *chartInstance->c21_is_songkai = c21_IN_A;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 11U, *chartInstance->c21_sfEvent);
        *chartInstance->c21_skhx = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c21_skhx, 8U, 4U, 11U,
                              *chartInstance->c21_sfEvent, false);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 12U,
                     *chartInstance->c21_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 12U, *chartInstance->c21_sfEvent);
      break;

     default:
      CV_STATE_EVAL(10, 0, 0);

      /* Unreachable state, for coverage only */
      *chartInstance->c21_is_songkai = c21_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 11U, *chartInstance->c21_sfEvent);
      break;
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 10U, *chartInstance->c21_sfEvent);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 16U,
                 *chartInstance->c21_sfEvent);
    switch (*chartInstance->c21_is_yajin) {
     case c21_IN_A:
      CV_STATE_EVAL(16, 0, 1);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 13U,
                   *chartInstance->c21_sfEvent);
      c21_h_out = (CV_TRANSITION_EVAL(13U, (int32_T)_SFD_CCP_CALL(13U, 0,
        CV_RELATIONAL_EVAL(5U, 13U, 0, *chartInstance->c21_yajin, 1.0, -1, 0U,
                           *chartInstance->c21_yajin == 1.0) != 0U,
        *chartInstance->c21_sfEvent)) != 0);
      if (c21_h_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 13U, *chartInstance->c21_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 17U, *chartInstance->c21_sfEvent);
        *chartInstance->c21_is_yajin = c21_IN_on;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 18U, *chartInstance->c21_sfEvent);
        *chartInstance->c21_yjhx = 1.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c21_yjhx, 10U, 4U, 18U,
                              *chartInstance->c21_sfEvent, false);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 17U,
                     *chartInstance->c21_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 17U, *chartInstance->c21_sfEvent);
      break;

     case c21_IN_on:
      CV_STATE_EVAL(16, 0, 2);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 14U,
                   *chartInstance->c21_sfEvent);
      c21_i_out = (CV_TRANSITION_EVAL(14U, (int32_T)_SFD_CCP_CALL(14U, 0,
        CV_RELATIONAL_EVAL(5U, 14U, 0, *chartInstance->c21_yajin, 0.0, -1, 0U,
                           *chartInstance->c21_yajin == 0.0) != 0U,
        *chartInstance->c21_sfEvent)) != 0);
      if (c21_i_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 14U, *chartInstance->c21_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 18U, *chartInstance->c21_sfEvent);
        *chartInstance->c21_is_yajin = c21_IN_A;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 17U, *chartInstance->c21_sfEvent);
        *chartInstance->c21_yjhx = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c21_yjhx, 10U, 4U, 17U,
                              *chartInstance->c21_sfEvent, false);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 18U,
                     *chartInstance->c21_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 18U, *chartInstance->c21_sfEvent);
      break;

     default:
      CV_STATE_EVAL(16, 0, 0);

      /* Unreachable state, for coverage only */
      *chartInstance->c21_is_yajin = c21_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 17U, *chartInstance->c21_sfEvent);
      break;
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 16U, *chartInstance->c21_sfEvent);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 13U,
                 *chartInstance->c21_sfEvent);
    switch (*chartInstance->c21_is_suoding) {
     case c21_IN_A:
      CV_STATE_EVAL(13, 0, 1);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 16U,
                   *chartInstance->c21_sfEvent);
      c21_j_out = (CV_TRANSITION_EVAL(16U, (int32_T)_SFD_CCP_CALL(16U, 0,
        CV_RELATIONAL_EVAL(5U, 16U, 0, *chartInstance->c21_suoding, 1.0, -1, 0U,
                           *chartInstance->c21_suoding == 1.0) != 0U,
        *chartInstance->c21_sfEvent)) != 0);
      if (c21_j_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 16U, *chartInstance->c21_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 14U, *chartInstance->c21_sfEvent);
        *chartInstance->c21_is_suoding = c21_IN_on;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 15U, *chartInstance->c21_sfEvent);
        *chartInstance->c21_yjhx = 1.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c21_yjhx, 10U, 4U, 15U,
                              *chartInstance->c21_sfEvent, false);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 14U,
                     *chartInstance->c21_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 14U, *chartInstance->c21_sfEvent);
      break;

     case c21_IN_on:
      CV_STATE_EVAL(13, 0, 2);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 17U,
                   *chartInstance->c21_sfEvent);
      c21_k_out = (CV_TRANSITION_EVAL(17U, (int32_T)_SFD_CCP_CALL(17U, 0,
        CV_RELATIONAL_EVAL(5U, 17U, 0, *chartInstance->c21_suoding, 0.0, -1, 0U,
                           *chartInstance->c21_suoding == 0.0) != 0U,
        *chartInstance->c21_sfEvent)) != 0);
      if (c21_k_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 17U, *chartInstance->c21_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 15U, *chartInstance->c21_sfEvent);
        *chartInstance->c21_is_suoding = c21_IN_A;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 14U, *chartInstance->c21_sfEvent);
        *chartInstance->c21_yjhx = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c21_yjhx, 10U, 4U, 14U,
                              *chartInstance->c21_sfEvent, false);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 15U,
                     *chartInstance->c21_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 15U, *chartInstance->c21_sfEvent);
      break;

     default:
      CV_STATE_EVAL(13, 0, 0);

      /* Unreachable state, for coverage only */
      *chartInstance->c21_is_suoding = c21_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 14U, *chartInstance->c21_sfEvent);
      break;
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 13U, *chartInstance->c21_sfEvent);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 4U,
                 *chartInstance->c21_sfEvent);
    switch (*chartInstance->c21_is_jiesuo) {
     case c21_IN_A:
      CV_STATE_EVAL(4, 0, 1);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 19U,
                   *chartInstance->c21_sfEvent);
      c21_l_out = (CV_TRANSITION_EVAL(19U, (int32_T)_SFD_CCP_CALL(19U, 0,
        CV_RELATIONAL_EVAL(5U, 19U, 0, *chartInstance->c21_jiesuo, 1.0, -1, 0U, *
                           chartInstance->c21_jiesuo == 1.0) != 0U,
        *chartInstance->c21_sfEvent)) != 0);
      if (c21_l_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 19U, *chartInstance->c21_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c21_sfEvent);
        *chartInstance->c21_is_jiesuo = c21_IN_on;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c21_sfEvent);
        *chartInstance->c21_skhx = 1.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c21_skhx, 8U, 4U, 6U,
                              *chartInstance->c21_sfEvent, false);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 5U,
                     *chartInstance->c21_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 5U, *chartInstance->c21_sfEvent);
      break;

     case c21_IN_on:
      CV_STATE_EVAL(4, 0, 2);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 20U,
                   *chartInstance->c21_sfEvent);
      c21_m_out = (CV_TRANSITION_EVAL(20U, (int32_T)_SFD_CCP_CALL(20U, 0,
        CV_RELATIONAL_EVAL(5U, 20U, 0, *chartInstance->c21_jiesuo, 0.0, -1, 0U, *
                           chartInstance->c21_jiesuo == 0.0) != 0U,
        *chartInstance->c21_sfEvent)) != 0);
      if (c21_m_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 20U, *chartInstance->c21_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c21_sfEvent);
        *chartInstance->c21_is_jiesuo = c21_IN_A;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c21_sfEvent);
        *chartInstance->c21_skhx = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c21_skhx, 8U, 4U, 5U,
                              *chartInstance->c21_sfEvent, false);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 6U,
                     *chartInstance->c21_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 6U, *chartInstance->c21_sfEvent);
      break;

     default:
      CV_STATE_EVAL(4, 0, 0);

      /* Unreachable state, for coverage only */
      *chartInstance->c21_is_jiesuo = c21_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c21_sfEvent);
      break;
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, *chartInstance->c21_sfEvent);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, *chartInstance->c21_sfEvent);
}

static void c21_exit_internal_MANUAL(SFc21_kaiguangaiInstanceStruct
  *chartInstance)
{
  switch (*chartInstance->c21_is_jiesuo) {
   case c21_IN_A:
    CV_STATE_EVAL(4, 1, 1);
    *chartInstance->c21_is_jiesuo = c21_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c21_sfEvent);
    break;

   case c21_IN_on:
    CV_STATE_EVAL(4, 1, 2);
    *chartInstance->c21_is_jiesuo = c21_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c21_sfEvent);
    break;

   default:
    CV_STATE_EVAL(4, 1, 0);
    *chartInstance->c21_is_jiesuo = c21_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c21_sfEvent);
    break;
  }

  *chartInstance->c21_is_active_jiesuo = 0U;
  _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c21_sfEvent);
  switch (*chartInstance->c21_is_suoding) {
   case c21_IN_A:
    CV_STATE_EVAL(13, 1, 1);
    *chartInstance->c21_is_suoding = c21_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 14U, *chartInstance->c21_sfEvent);
    break;

   case c21_IN_on:
    CV_STATE_EVAL(13, 1, 2);
    *chartInstance->c21_is_suoding = c21_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 15U, *chartInstance->c21_sfEvent);
    break;

   default:
    CV_STATE_EVAL(13, 1, 0);
    *chartInstance->c21_is_suoding = c21_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 14U, *chartInstance->c21_sfEvent);
    break;
  }

  *chartInstance->c21_is_active_suoding = 0U;
  _SFD_CS_CALL(STATE_INACTIVE_TAG, 13U, *chartInstance->c21_sfEvent);
  switch (*chartInstance->c21_is_yajin) {
   case c21_IN_A:
    CV_STATE_EVAL(16, 1, 1);
    *chartInstance->c21_is_yajin = c21_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 17U, *chartInstance->c21_sfEvent);
    break;

   case c21_IN_on:
    CV_STATE_EVAL(16, 1, 2);
    *chartInstance->c21_is_yajin = c21_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 18U, *chartInstance->c21_sfEvent);
    break;

   default:
    CV_STATE_EVAL(16, 1, 0);
    *chartInstance->c21_is_yajin = c21_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 17U, *chartInstance->c21_sfEvent);
    break;
  }

  *chartInstance->c21_is_active_yajin = 0U;
  _SFD_CS_CALL(STATE_INACTIVE_TAG, 16U, *chartInstance->c21_sfEvent);
  switch (*chartInstance->c21_is_songkai) {
   case c21_IN_A:
    CV_STATE_EVAL(10, 1, 1);
    *chartInstance->c21_is_songkai = c21_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 11U, *chartInstance->c21_sfEvent);
    break;

   case c21_IN_on:
    CV_STATE_EVAL(10, 1, 2);
    *chartInstance->c21_is_songkai = c21_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 12U, *chartInstance->c21_sfEvent);
    break;

   default:
    CV_STATE_EVAL(10, 1, 0);
    *chartInstance->c21_is_songkai = c21_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 11U, *chartInstance->c21_sfEvent);
    break;
  }

  *chartInstance->c21_is_active_songkai = 0U;
  _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c21_sfEvent);
  switch (*chartInstance->c21_is_guangai) {
   case c21_IN_A:
    CV_STATE_EVAL(1, 1, 1);
    *chartInstance->c21_is_guangai = c21_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c21_sfEvent);
    break;

   case c21_IN_on:
    CV_STATE_EVAL(1, 1, 2);
    *chartInstance->c21_is_guangai = c21_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c21_sfEvent);
    break;

   default:
    CV_STATE_EVAL(1, 1, 0);
    *chartInstance->c21_is_guangai = c21_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c21_sfEvent);
    break;
  }

  *chartInstance->c21_is_active_guangai = 0U;
  _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c21_sfEvent);
  switch (*chartInstance->c21_is_kaigai) {
   case c21_IN_A:
    CV_STATE_EVAL(7, 1, 1);
    *chartInstance->c21_is_kaigai = c21_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c21_sfEvent);
    break;

   case c21_IN_on:
    CV_STATE_EVAL(7, 1, 2);
    *chartInstance->c21_is_kaigai = c21_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 9U, *chartInstance->c21_sfEvent);
    break;

   default:
    CV_STATE_EVAL(7, 1, 0);
    *chartInstance->c21_is_kaigai = c21_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c21_sfEvent);
    break;
  }

  *chartInstance->c21_is_active_kaigai = 0U;
  _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c21_sfEvent);
}

static void init_script_number_translation(uint32_T c21_machineNumber, uint32_T
  c21_chartNumber, uint32_T c21_instanceNumber)
{
  (void)c21_machineNumber;
  (void)c21_chartNumber;
  (void)c21_instanceNumber;
}

const mxArray *sf_c21_kaiguangai_get_eml_resolved_functions_info(void)
{
  const mxArray *c21_nameCaptureInfo = NULL;
  c21_nameCaptureInfo = NULL;
  sf_mex_assign(&c21_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c21_nameCaptureInfo;
}

static const mxArray *c21_sf_marshallOut(void *chartInstanceVoid, void
  *c21_inData)
{
  const mxArray *c21_mxArrayOutData;
  int32_T c21_u;
  const mxArray *c21_y = NULL;
  SFc21_kaiguangaiInstanceStruct *chartInstance;
  chartInstance = (SFc21_kaiguangaiInstanceStruct *)chartInstanceVoid;
  c21_mxArrayOutData = NULL;
  c21_mxArrayOutData = NULL;
  c21_u = *(int32_T *)c21_inData;
  c21_y = NULL;
  sf_mex_assign(&c21_y, sf_mex_create("y", &c21_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c21_mxArrayOutData, c21_y, false);
  return c21_mxArrayOutData;
}

static int32_T c21_emlrt_marshallIn(SFc21_kaiguangaiInstanceStruct
  *chartInstance, const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId)
{
  int32_T c21_y;
  int32_T c21_i0;
  (void)chartInstance;
  sf_mex_import(c21_parentId, sf_mex_dup(c21_u), &c21_i0, 1, 6, 0U, 0, 0U, 0);
  c21_y = c21_i0;
  sf_mex_destroy(&c21_u);
  return c21_y;
}

static void c21_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c21_mxArrayInData, const char_T *c21_varName, void *c21_outData)
{
  const mxArray *c21_b_sfEvent;
  const char_T *c21_identifier;
  emlrtMsgIdentifier c21_thisId;
  int32_T c21_y;
  SFc21_kaiguangaiInstanceStruct *chartInstance;
  chartInstance = (SFc21_kaiguangaiInstanceStruct *)chartInstanceVoid;
  c21_b_sfEvent = sf_mex_dup(c21_mxArrayInData);
  c21_identifier = c21_varName;
  c21_thisId.fIdentifier = c21_identifier;
  c21_thisId.fParent = NULL;
  c21_thisId.bParentIsCell = false;
  c21_y = c21_emlrt_marshallIn(chartInstance, sf_mex_dup(c21_b_sfEvent),
    &c21_thisId);
  sf_mex_destroy(&c21_b_sfEvent);
  *(int32_T *)c21_outData = c21_y;
  sf_mex_destroy(&c21_mxArrayInData);
}

static const mxArray *c21_b_sf_marshallOut(void *chartInstanceVoid, void
  *c21_inData)
{
  const mxArray *c21_mxArrayOutData;
  uint8_T c21_u;
  const mxArray *c21_y = NULL;
  SFc21_kaiguangaiInstanceStruct *chartInstance;
  chartInstance = (SFc21_kaiguangaiInstanceStruct *)chartInstanceVoid;
  c21_mxArrayOutData = NULL;
  c21_mxArrayOutData = NULL;
  c21_u = *(uint8_T *)c21_inData;
  c21_y = NULL;
  sf_mex_assign(&c21_y, sf_mex_create("y", &c21_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c21_mxArrayOutData, c21_y, false);
  return c21_mxArrayOutData;
}

static uint8_T c21_b_emlrt_marshallIn(SFc21_kaiguangaiInstanceStruct
  *chartInstance, const mxArray *c21_b_is_kaigai, const char_T *c21_identifier)
{
  uint8_T c21_y;
  emlrtMsgIdentifier c21_thisId;
  c21_thisId.fIdentifier = c21_identifier;
  c21_thisId.fParent = NULL;
  c21_thisId.bParentIsCell = false;
  c21_y = c21_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c21_b_is_kaigai),
    &c21_thisId);
  sf_mex_destroy(&c21_b_is_kaigai);
  return c21_y;
}

static uint8_T c21_c_emlrt_marshallIn(SFc21_kaiguangaiInstanceStruct
  *chartInstance, const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId)
{
  uint8_T c21_y;
  uint8_T c21_u0;
  (void)chartInstance;
  sf_mex_import(c21_parentId, sf_mex_dup(c21_u), &c21_u0, 1, 3, 0U, 0, 0U, 0);
  c21_y = c21_u0;
  sf_mex_destroy(&c21_u);
  return c21_y;
}

static void c21_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c21_mxArrayInData, const char_T *c21_varName, void *c21_outData)
{
  const mxArray *c21_b_is_kaigai;
  const char_T *c21_identifier;
  emlrtMsgIdentifier c21_thisId;
  uint8_T c21_y;
  SFc21_kaiguangaiInstanceStruct *chartInstance;
  chartInstance = (SFc21_kaiguangaiInstanceStruct *)chartInstanceVoid;
  c21_b_is_kaigai = sf_mex_dup(c21_mxArrayInData);
  c21_identifier = c21_varName;
  c21_thisId.fIdentifier = c21_identifier;
  c21_thisId.fParent = NULL;
  c21_thisId.bParentIsCell = false;
  c21_y = c21_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c21_b_is_kaigai),
    &c21_thisId);
  sf_mex_destroy(&c21_b_is_kaigai);
  *(uint8_T *)c21_outData = c21_y;
  sf_mex_destroy(&c21_mxArrayInData);
}

static const mxArray *c21_c_sf_marshallOut(void *chartInstanceVoid, void
  *c21_inData)
{
  const mxArray *c21_mxArrayOutData;
  real_T c21_u;
  const mxArray *c21_y = NULL;
  SFc21_kaiguangaiInstanceStruct *chartInstance;
  chartInstance = (SFc21_kaiguangaiInstanceStruct *)chartInstanceVoid;
  c21_mxArrayOutData = NULL;
  c21_mxArrayOutData = NULL;
  c21_u = *(real_T *)c21_inData;
  c21_y = NULL;
  sf_mex_assign(&c21_y, sf_mex_create("y", &c21_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c21_mxArrayOutData, c21_y, false);
  return c21_mxArrayOutData;
}

static real_T c21_d_emlrt_marshallIn(SFc21_kaiguangaiInstanceStruct
  *chartInstance, const mxArray *c21_b_skhx, const char_T *c21_identifier)
{
  real_T c21_y;
  emlrtMsgIdentifier c21_thisId;
  c21_thisId.fIdentifier = c21_identifier;
  c21_thisId.fParent = NULL;
  c21_thisId.bParentIsCell = false;
  c21_y = c21_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c21_b_skhx),
    &c21_thisId);
  sf_mex_destroy(&c21_b_skhx);
  return c21_y;
}

static real_T c21_e_emlrt_marshallIn(SFc21_kaiguangaiInstanceStruct
  *chartInstance, const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId)
{
  real_T c21_y;
  real_T c21_d1;
  (void)chartInstance;
  sf_mex_import(c21_parentId, sf_mex_dup(c21_u), &c21_d1, 1, 0, 0U, 0, 0U, 0);
  c21_y = c21_d1;
  sf_mex_destroy(&c21_u);
  return c21_y;
}

static void c21_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c21_mxArrayInData, const char_T *c21_varName, void *c21_outData)
{
  const mxArray *c21_b_skhx;
  const char_T *c21_identifier;
  emlrtMsgIdentifier c21_thisId;
  real_T c21_y;
  SFc21_kaiguangaiInstanceStruct *chartInstance;
  chartInstance = (SFc21_kaiguangaiInstanceStruct *)chartInstanceVoid;
  c21_b_skhx = sf_mex_dup(c21_mxArrayInData);
  c21_identifier = c21_varName;
  c21_thisId.fIdentifier = c21_identifier;
  c21_thisId.fParent = NULL;
  c21_thisId.bParentIsCell = false;
  c21_y = c21_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c21_b_skhx),
    &c21_thisId);
  sf_mex_destroy(&c21_b_skhx);
  *(real_T *)c21_outData = c21_y;
  sf_mex_destroy(&c21_mxArrayInData);
}

static uint16_T c21_f_emlrt_marshallIn(SFc21_kaiguangaiInstanceStruct
  *chartInstance, const mxArray *c21_b_temporalCounter_i1, const char_T
  *c21_identifier)
{
  uint16_T c21_y;
  emlrtMsgIdentifier c21_thisId;
  c21_thisId.fIdentifier = c21_identifier;
  c21_thisId.fParent = NULL;
  c21_thisId.bParentIsCell = false;
  c21_y = c21_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c21_b_temporalCounter_i1), &c21_thisId);
  sf_mex_destroy(&c21_b_temporalCounter_i1);
  return c21_y;
}

static uint16_T c21_g_emlrt_marshallIn(SFc21_kaiguangaiInstanceStruct
  *chartInstance, const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId)
{
  uint16_T c21_y;
  uint16_T c21_u1;
  (void)chartInstance;
  sf_mex_import(c21_parentId, sf_mex_dup(c21_u), &c21_u1, 1, 5, 0U, 0, 0U, 0);
  c21_y = c21_u1;
  sf_mex_destroy(&c21_u);
  return c21_y;
}

static const mxArray *c21_h_emlrt_marshallIn(SFc21_kaiguangaiInstanceStruct
  *chartInstance, const mxArray *c21_b_setSimStateSideEffectsInfo, const char_T *
  c21_identifier)
{
  const mxArray *c21_y = NULL;
  emlrtMsgIdentifier c21_thisId;
  c21_y = NULL;
  c21_thisId.fIdentifier = c21_identifier;
  c21_thisId.fParent = NULL;
  c21_thisId.bParentIsCell = false;
  sf_mex_assign(&c21_y, c21_i_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c21_b_setSimStateSideEffectsInfo), &c21_thisId), false);
  sf_mex_destroy(&c21_b_setSimStateSideEffectsInfo);
  return c21_y;
}

static const mxArray *c21_i_emlrt_marshallIn(SFc21_kaiguangaiInstanceStruct
  *chartInstance, const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId)
{
  const mxArray *c21_y = NULL;
  (void)chartInstance;
  (void)c21_parentId;
  c21_y = NULL;
  sf_mex_assign(&c21_y, sf_mex_duplicatearraysafe(&c21_u), false);
  sf_mex_destroy(&c21_u);
  return c21_y;
}

static const mxArray *sf_get_hover_data_for_msg(SFc21_kaiguangaiInstanceStruct
  *chartInstance, int32_T c21_ssid)
{
  const mxArray *c21_msgInfo;
  (void)chartInstance;
  (void)c21_ssid;
  c21_msgInfo = NULL;
  return NULL;
}

static void c21_init_sf_message_store_memory(SFc21_kaiguangaiInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static uint16_T c21__u16_s32_(SFc21_kaiguangaiInstanceStruct *chartInstance,
  int32_T c21_b, uint32_T c21_ssid_src_loc, int32_T c21_offset_src_loc, int32_T
  c21_length_src_loc)
{
  uint16_T c21_a;
  c21_a = (uint16_T)c21_b;
  if (c21_a != c21_b) {
    _SFD_OVERFLOW_DETECTION(SFDB_OVERFLOW, 1U, c21_ssid_src_loc,
      c21_offset_src_loc, c21_length_src_loc, 0U, *chartInstance->c21_sfEvent,
      false);
  }

  return c21_a;
}

static void init_dsm_address_info(SFc21_kaiguangaiInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc21_kaiguangaiInstanceStruct
  *chartInstance)
{
  chartInstance->c21_sfEvent = (int32_T *)ssGetDWork_wrapper(chartInstance->S, 0);
  chartInstance->c21_is_active_c21_kaiguangai = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 1);
  chartInstance->c21_is_c21_kaiguangai = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 2);
  chartInstance->c21_is_kaigai = (uint8_T *)ssGetDWork_wrapper(chartInstance->S,
    3);
  chartInstance->c21_is_active_kaigai = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 4);
  chartInstance->c21_is_guangai = (uint8_T *)ssGetDWork_wrapper(chartInstance->S,
    5);
  chartInstance->c21_is_active_guangai = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 6);
  chartInstance->c21_is_songkai = (uint8_T *)ssGetDWork_wrapper(chartInstance->S,
    7);
  chartInstance->c21_is_active_songkai = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 8);
  chartInstance->c21_is_yajin = (uint8_T *)ssGetDWork_wrapper(chartInstance->S,
    9);
  chartInstance->c21_is_active_yajin = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 10);
  chartInstance->c21_is_suoding = (uint8_T *)ssGetDWork_wrapper(chartInstance->S,
    11);
  chartInstance->c21_is_active_suoding = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 12);
  chartInstance->c21_is_jiesuo = (uint8_T *)ssGetDWork_wrapper(chartInstance->S,
    13);
  chartInstance->c21_is_active_jiesuo = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 14);
  chartInstance->c21_skhx = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c21_kghx = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c21_tiaoshi = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c21_songkai = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c21_kaigai = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c21_suoding = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c21_jiesuo = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c21_guangai = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 5);
  chartInstance->c21_yajin = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 6);
  chartInstance->c21_jiting = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 7);
  chartInstance->c21_yjhx = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c21_gghx = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c21_temporalCounter_i1 = (uint16_T *)ssGetDWork_wrapper
    (chartInstance->S, 15);
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
void sf_c21_kaiguangai_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(952954666U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3012730365U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1187987749U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1748878301U);
}

mxArray* sf_c21_kaiguangai_get_post_codegen_info(void);
mxArray *sf_c21_kaiguangai_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("iEDT1Itf3EvaZJf0MwiReC");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,8,3,dataFields);

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

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,6,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,6,"type",mxType);
    }

    mxSetField(mxData,6,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,7,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,7,"type",mxType);
    }

    mxSetField(mxData,7,"complexity",mxCreateDoubleScalar(0));
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
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  {
    mxArray* mxPostCodegenInfo = sf_c21_kaiguangai_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c21_kaiguangai_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c21_kaiguangai_jit_fallback_info(void)
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

mxArray *sf_c21_kaiguangai_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c21_kaiguangai_get_post_codegen_info(void)
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

static const mxArray *sf_get_sim_state_info_c21_kaiguangai(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x10'type','srcId','name','auxInfo'{{M[1],M[258],T\"gghx\",},{M[1],M[259],T\"kghx\",},{M[1],M[260],T\"skhx\",},{M[1],M[261],T\"yjhx\",},{M[8],M[0],T\"is_active_c21_kaiguangai\",},{M[8],M[7],T\"is_active_kaigai\",},{M[8],M[202],T\"is_active_guangai\",},{M[8],M[208],T\"is_active_songkai\",},{M[8],M[214],T\"is_active_yajin\",},{M[8],M[243],T\"is_active_suoding\",}}",
    "100 S1x9'type','srcId','name','auxInfo'{{M[8],M[246],T\"is_active_jiesuo\",},{M[9],M[0],T\"is_c21_kaiguangai\",},{M[9],M[7],T\"is_kaigai\",},{M[9],M[202],T\"is_guangai\",},{M[9],M[208],T\"is_songkai\",},{M[9],M[214],T\"is_yajin\",},{M[9],M[243],T\"is_suoding\",},{M[9],M[246],T\"is_jiesuo\",},{M[11],M[0],T\"temporalCounter_i1\",S'et','os','ct'{{T\"wu\",M[1],M[1]}}}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 19, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c21_kaiguangai_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const mxArray* sf_opaque_get_hover_data_for_msg(void* chartInstance,
  int32_T msgSSID)
{
  return sf_get_hover_data_for_msg( (SFc21_kaiguangaiInstanceStruct *)
    chartInstance, msgSSID);
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc21_kaiguangaiInstanceStruct *chartInstance =
      (SFc21_kaiguangaiInstanceStruct *)sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _kaiguangaiMachineNumber_,
           21,
           22,
           22,
           0,
           12,
           0,
           0,
           0,
           0,
           0,
           &chartInstance->chartNumber,
           &chartInstance->instanceNumber,
           (void *)S);

        /* Each instance must initialize its own list of scripts */
        init_script_number_translation(_kaiguangaiMachineNumber_,
          chartInstance->chartNumber,chartInstance->instanceNumber);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          sf_debug_set_chart_disable_implicit_casting
            (sfGlobalDebugInstanceStruct,_kaiguangaiMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(sfGlobalDebugInstanceStruct,
            _kaiguangaiMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,"tiaoshi");
          _SFD_SET_DATA_PROPS(1,1,1,0,"songkai");
          _SFD_SET_DATA_PROPS(2,1,1,0,"kaigai");
          _SFD_SET_DATA_PROPS(3,1,1,0,"suoding");
          _SFD_SET_DATA_PROPS(4,1,1,0,"jiesuo");
          _SFD_SET_DATA_PROPS(5,1,1,0,"guangai");
          _SFD_SET_DATA_PROPS(6,1,1,0,"yajin");
          _SFD_SET_DATA_PROPS(7,1,1,0,"jiting");
          _SFD_SET_DATA_PROPS(8,2,0,1,"skhx");
          _SFD_SET_DATA_PROPS(9,2,0,1,"kghx");
          _SFD_SET_DATA_PROPS(10,2,0,1,"yjhx");
          _SFD_SET_DATA_PROPS(11,2,0,1,"gghx");
          _SFD_STATE_INFO(0,1,0);
          _SFD_STATE_INFO(1,0,1);
          _SFD_STATE_INFO(2,0,0);
          _SFD_STATE_INFO(3,0,0);
          _SFD_STATE_INFO(4,0,1);
          _SFD_STATE_INFO(5,0,0);
          _SFD_STATE_INFO(6,0,0);
          _SFD_STATE_INFO(7,0,1);
          _SFD_STATE_INFO(8,0,0);
          _SFD_STATE_INFO(9,0,0);
          _SFD_STATE_INFO(10,0,1);
          _SFD_STATE_INFO(11,0,0);
          _SFD_STATE_INFO(12,0,0);
          _SFD_STATE_INFO(13,0,1);
          _SFD_STATE_INFO(14,0,0);
          _SFD_STATE_INFO(15,0,0);
          _SFD_STATE_INFO(16,0,1);
          _SFD_STATE_INFO(17,0,0);
          _SFD_STATE_INFO(18,0,0);
          _SFD_STATE_INFO(19,0,0);
          _SFD_STATE_INFO(20,0,0);
          _SFD_STATE_INFO(21,0,0);
          _SFD_CH_SUBSTATE_COUNT(4);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,19);
          _SFD_CH_SUBSTATE_INDEX(2,20);
          _SFD_CH_SUBSTATE_INDEX(3,21);
          _SFD_ST_SUBSTATE_COUNT(0,6);
          _SFD_ST_SUBSTATE_INDEX(0,0,7);
          _SFD_ST_SUBSTATE_INDEX(0,1,1);
          _SFD_ST_SUBSTATE_INDEX(0,2,10);
          _SFD_ST_SUBSTATE_INDEX(0,3,16);
          _SFD_ST_SUBSTATE_INDEX(0,4,13);
          _SFD_ST_SUBSTATE_INDEX(0,5,4);
          _SFD_ST_SUBSTATE_COUNT(7,2);
          _SFD_ST_SUBSTATE_INDEX(7,0,8);
          _SFD_ST_SUBSTATE_INDEX(7,1,9);
          _SFD_ST_SUBSTATE_COUNT(8,0);
          _SFD_ST_SUBSTATE_COUNT(9,0);
          _SFD_ST_SUBSTATE_COUNT(1,2);
          _SFD_ST_SUBSTATE_INDEX(1,0,2);
          _SFD_ST_SUBSTATE_INDEX(1,1,3);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,0);
          _SFD_ST_SUBSTATE_COUNT(10,2);
          _SFD_ST_SUBSTATE_INDEX(10,0,11);
          _SFD_ST_SUBSTATE_INDEX(10,1,12);
          _SFD_ST_SUBSTATE_COUNT(11,0);
          _SFD_ST_SUBSTATE_COUNT(12,0);
          _SFD_ST_SUBSTATE_COUNT(16,2);
          _SFD_ST_SUBSTATE_INDEX(16,0,17);
          _SFD_ST_SUBSTATE_INDEX(16,1,18);
          _SFD_ST_SUBSTATE_COUNT(17,0);
          _SFD_ST_SUBSTATE_COUNT(18,0);
          _SFD_ST_SUBSTATE_COUNT(13,2);
          _SFD_ST_SUBSTATE_INDEX(13,0,14);
          _SFD_ST_SUBSTATE_INDEX(13,1,15);
          _SFD_ST_SUBSTATE_COUNT(14,0);
          _SFD_ST_SUBSTATE_COUNT(15,0);
          _SFD_ST_SUBSTATE_COUNT(4,2);
          _SFD_ST_SUBSTATE_INDEX(4,0,5);
          _SFD_ST_SUBSTATE_INDEX(4,1,6);
          _SFD_ST_SUBSTATE_COUNT(5,0);
          _SFD_ST_SUBSTATE_COUNT(6,0);
          _SFD_ST_SUBSTATE_COUNT(19,0);
          _SFD_ST_SUBSTATE_COUNT(20,0);
          _SFD_ST_SUBSTATE_COUNT(21,0);
        }

        _SFD_CV_INIT_CHART(4,1,0,0);

        {
          _SFD_CV_INIT_STATE(0,6,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(1,2,1,1,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(2,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(3,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(4,2,1,1,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(5,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(6,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(7,2,1,1,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(8,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(9,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(10,2,1,1,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(11,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(12,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(13,2,1,1,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(14,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(15,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(16,2,1,1,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(17,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(18,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(19,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(20,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(21,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(1,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(0,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 11 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(0,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 10, 0 };

          static unsigned int sEndGuardMap[] = { 14, 15 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(5,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 10 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(6,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 10 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(6,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(2,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 10 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(3,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 10 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(3,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 10 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(4,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 10 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(4,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(9,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(8,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 11 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(8,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(7,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 11 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(7,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(12,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(11,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 11 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(11,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(10,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 11 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(10,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(15,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 9 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(14,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 9 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(14,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 9 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(13,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 9 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(13,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(18,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(17,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 11 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(17,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(16,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 11 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(16,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(21,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 10 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(20,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 10 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(20,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 10 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(19,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 10 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(19,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c21_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c21_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c21_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c21_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c21_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c21_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c21_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c21_c_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c21_c_sf_marshallOut,(MexInFcnForType)
          c21_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(9,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c21_c_sf_marshallOut,(MexInFcnForType)
          c21_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(10,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c21_c_sf_marshallOut,(MexInFcnForType)
          c21_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(11,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c21_c_sf_marshallOut,(MexInFcnForType)
          c21_c_sf_marshallIn);
      }
    } else {
      sf_debug_reset_current_state_configuration(sfGlobalDebugInstanceStruct,
        _kaiguangaiMachineNumber_,chartInstance->chartNumber,
        chartInstance->instanceNumber);
    }
  }
}

static void chart_debug_initialize_data_addresses(SimStruct *S)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc21_kaiguangaiInstanceStruct *chartInstance =
      (SFc21_kaiguangaiInstanceStruct *)sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        _SFD_SET_DATA_VALUE_PTR(8U, chartInstance->c21_skhx);
        _SFD_SET_DATA_VALUE_PTR(9U, chartInstance->c21_kghx);
        _SFD_SET_DATA_VALUE_PTR(0U, chartInstance->c21_tiaoshi);
        _SFD_SET_DATA_VALUE_PTR(1U, chartInstance->c21_songkai);
        _SFD_SET_DATA_VALUE_PTR(2U, chartInstance->c21_kaigai);
        _SFD_SET_DATA_VALUE_PTR(3U, chartInstance->c21_suoding);
        _SFD_SET_DATA_VALUE_PTR(4U, chartInstance->c21_jiesuo);
        _SFD_SET_DATA_VALUE_PTR(5U, chartInstance->c21_guangai);
        _SFD_SET_DATA_VALUE_PTR(6U, chartInstance->c21_yajin);
        _SFD_SET_DATA_VALUE_PTR(7U, chartInstance->c21_jiting);
        _SFD_SET_DATA_VALUE_PTR(10U, chartInstance->c21_yjhx);
        _SFD_SET_DATA_VALUE_PTR(11U, chartInstance->c21_gghx);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "sW2tdYAsvXvBUpUejs3sgGC";
}

static void sf_check_dwork_consistency(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    const uint32_T *sfunDWorkChecksum = sf_get_sfun_dwork_checksum();
    mxArray *infoStruct = load_kaiguangai_optimization_info(sim_mode_is_rtw_gen
      (S), sim_mode_is_modelref_sim(S), sim_mode_is_external(S));
    mxArray* mxRTWDWorkChecksum = sf_get_dwork_info_from_mat_file(S,
      sf_get_instance_specialization(), infoStruct, 21, "dworkChecksum");
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

static void sf_opaque_initialize_c21_kaiguangai(void *chartInstanceVar)
{
  sf_check_dwork_consistency(((SFc21_kaiguangaiInstanceStruct*) chartInstanceVar)
    ->S);
  chart_debug_initialization(((SFc21_kaiguangaiInstanceStruct*) chartInstanceVar)
    ->S,0);
  initialize_params_c21_kaiguangai((SFc21_kaiguangaiInstanceStruct*)
    chartInstanceVar);
  initialize_c21_kaiguangai((SFc21_kaiguangaiInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c21_kaiguangai(void *chartInstanceVar)
{
  enable_c21_kaiguangai((SFc21_kaiguangaiInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c21_kaiguangai(void *chartInstanceVar)
{
  disable_c21_kaiguangai((SFc21_kaiguangaiInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c21_kaiguangai(void *chartInstanceVar)
{
  sf_gateway_c21_kaiguangai((SFc21_kaiguangaiInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_ext_mode_exec_c21_kaiguangai(void *chartInstanceVar)
{
  ext_mode_exec_c21_kaiguangai((SFc21_kaiguangaiInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c21_kaiguangai(SimStruct* S)
{
  return get_sim_state_c21_kaiguangai((SFc21_kaiguangaiInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c21_kaiguangai(SimStruct* S, const mxArray
  *st)
{
  set_sim_state_c21_kaiguangai((SFc21_kaiguangaiInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_terminate_c21_kaiguangai(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc21_kaiguangaiInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_kaiguangai_optimization_info();
    }

    finalize_c21_kaiguangai((SFc21_kaiguangaiInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc21_kaiguangai((SFc21_kaiguangaiInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c21_kaiguangai(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c21_kaiguangai((SFc21_kaiguangaiInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

mxArray *sf_c21_kaiguangai_get_testpoint_info(void)
{
  return NULL;
}

static void sf_set_sfun_dwork_info(SimStruct *S)
{
  const char *dworkEncStr[] = {
    "100 S1x10'type','isSigned','wordLength','bias','slope','exponent','isScaledDouble','isComplex','size','local_queue_dwork_idx','local_queue_id'{{T\"int32\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]}}",
    "100 S1x6'type','isSigned','wordLength','bias','slope','exponent','isScaledDouble','isComplex','size','local_queue_dwork_idx','local_queue_id'{{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint16\",,,,,,,M[0],M[],M[-1],M[-1]}}"
  };

  sf_set_encoded_dwork_info(S, dworkEncStr, 16, 10);
}

static uint32_T* sf_get_sfun_dwork_checksum()
{
  static uint32_T checksum[4] = { 1077858389U, 673991373U, 1283650695U,
    3631388253U };

  return checksum;
}

static void mdlSetWorkWidths_c21_kaiguangai(SimStruct *S)
{
  ssSetStatesModifiedOnlyInUpdate(S, 0);
  ssMdlUpdateIsEmpty(S, 1);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_kaiguangai_optimization_info(sim_mode_is_rtw_gen
      (S), sim_mode_is_modelref_sim(S), sim_mode_is_external(S));
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      21);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,21,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_set_chart_accesses_machine_info(S, sf_get_instance_specialization(),
      infoStruct, 21);
    sf_update_buildInfo(S, sf_get_instance_specialization(),infoStruct,21);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 5, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 6, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 7, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,21,8);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,21,4);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=4; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 8; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,21);
    sf_register_codegen_names_for_scoped_functions_defined_by_chart(S);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
    sf_set_sfun_dwork_info(S);
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(1264790516U));
  ssSetChecksum1(S,(3756927487U));
  ssSetChecksum2(S,(904921382U));
  ssSetChecksum3(S,(3307354379U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSetStateSemanticsClassicAndSynchronous(S, true);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c21_kaiguangai(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c21_kaiguangai(SimStruct *S)
{
  SFc21_kaiguangaiInstanceStruct *chartInstance;
  chartInstance = (SFc21_kaiguangaiInstanceStruct *)utMalloc(sizeof
    (SFc21_kaiguangaiInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc21_kaiguangaiInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c21_kaiguangai;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c21_kaiguangai;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c21_kaiguangai;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c21_kaiguangai;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c21_kaiguangai;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c21_kaiguangai;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c21_kaiguangai;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c21_kaiguangai;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c21_kaiguangai;
  chartInstance->chartInfo.mdlStart = mdlStart_c21_kaiguangai;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c21_kaiguangai;
  chartInstance->chartInfo.callGetHoverDataForMsg =
    sf_opaque_get_hover_data_for_msg;
  chartInstance->chartInfo.extModeExec = sf_opaque_ext_mode_exec_c21_kaiguangai;
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
  mdl_start_c21_kaiguangai(chartInstance);
}

void c21_kaiguangai_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c21_kaiguangai(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c21_kaiguangai(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c21_kaiguangai(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c21_kaiguangai_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
