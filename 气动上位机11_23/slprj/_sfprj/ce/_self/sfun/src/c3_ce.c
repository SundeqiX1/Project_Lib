/* Include files */

#include "ce_sfun.h"
#include "c3_ce.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "ce_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c_with_debugger(S, sfGlobalDebugInstanceStruct);

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization);
static void chart_debug_initialize_data_addresses(SimStruct *S);
static const mxArray* sf_opaque_get_hover_data_for_msg(void *chartInstance,
  int32_T msgSSID);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)
#define c3_IN_NO_ACTIVE_CHILD          ((uint8_T)0U)
#define c3_IN_by                       ((uint8_T)1U)
#define c3_IN_exp_fq                   ((uint8_T)2U)
#define c3_IN_exp_ready                ((uint8_T)3U)
#define c3_IN_fby                      ((uint8_T)4U)
#define c3_IN_fqyc                     ((uint8_T)5U)
#define c3_IN_kong                     ((uint8_T)6U)
#define c3_IN_fby_action1              ((uint8_T)1U)
#define c3_IN_fby_action2              ((uint8_T)2U)
#define c3_IN_fby_action3              ((uint8_T)3U)
#define c3_IN_exp_qfq                  ((uint8_T)1U)
#define c3_IN_exp_rqfq                 ((uint8_T)2U)
#define c3_IN_kong1                    ((uint8_T)3U)
#define c3_IN_bysjgd_action1           ((uint8_T)1U)
#define c3_IN_bysjgd_action2           ((uint8_T)2U)
#define c3_IN_bysjgd_action3           ((uint8_T)3U)
#define c3_IN_fqyc_action1             ((uint8_T)1U)
#define c3_IN_fqyc_action2             ((uint8_T)2U)
#define c3_IN_fqyc_action3             ((uint8_T)3U)
#define c3_IN_fqyc_action4             ((uint8_T)4U)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static const char * c3_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_b_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_c_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_d_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_e_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_f_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_g_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_h_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_i_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_j_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_k_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_l_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_m_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_n_debug_family_names[2] = { "nargin", "nargout" };

static const char * c3_o_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_p_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_q_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_r_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_s_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_t_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_u_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_v_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_w_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_x_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_y_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_ab_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_bb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_cb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_db_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_eb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_fb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_gb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_hb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_ib_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_jb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_kb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_lb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_mb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_nb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c3_ob_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

/* Function Declarations */
static void initialize_c3_ce(SFc3_ceInstanceStruct *chartInstance);
static void initialize_params_c3_ce(SFc3_ceInstanceStruct *chartInstance);
static void enable_c3_ce(SFc3_ceInstanceStruct *chartInstance);
static void disable_c3_ce(SFc3_ceInstanceStruct *chartInstance);
static void c3_update_debugger_state_c3_ce(SFc3_ceInstanceStruct *chartInstance);
static void ext_mode_exec_c3_ce(SFc3_ceInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c3_ce(SFc3_ceInstanceStruct *chartInstance);
static void set_sim_state_c3_ce(SFc3_ceInstanceStruct *chartInstance, const
  mxArray *c3_st);
static void c3_set_sim_state_side_effects_c3_ce(SFc3_ceInstanceStruct
  *chartInstance);
static void finalize_c3_ce(SFc3_ceInstanceStruct *chartInstance);
static void sf_gateway_c3_ce(SFc3_ceInstanceStruct *chartInstance);
static void mdl_start_c3_ce(SFc3_ceInstanceStruct *chartInstance);
static void c3_chartstep_c3_ce(SFc3_ceInstanceStruct *chartInstance);
static void initSimStructsc3_ce(SFc3_ceInstanceStruct *chartInstance);
static void c3_exit_internal_fby(SFc3_ceInstanceStruct *chartInstance);
static void c3_exp_fq(SFc3_ceInstanceStruct *chartInstance);
static void c3_exit_internal_exp_fq(SFc3_ceInstanceStruct *chartInstance);
static void c3_enter_atomic_exp_rqfq(SFc3_ceInstanceStruct *chartInstance);
static void c3_enter_atomic_exp_qfq(SFc3_ceInstanceStruct *chartInstance);
static void c3_enter_atomic_exp_ready(SFc3_ceInstanceStruct *chartInstance);
static void c3_exp_ready(SFc3_ceInstanceStruct *chartInstance);
static void c3_by(SFc3_ceInstanceStruct *chartInstance);
static void c3_exit_internal_by(SFc3_ceInstanceStruct *chartInstance);
static void c3_enter_atomic_bysjgd_action1(SFc3_ceInstanceStruct *chartInstance);
static void c3_enter_atomic_bysjgd_action3(SFc3_ceInstanceStruct *chartInstance);
static void c3_fqyc(SFc3_ceInstanceStruct *chartInstance);
static void c3_exit_internal_fqyc(SFc3_ceInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c3_machineNumber, uint32_T
  c3_chartNumber, uint32_T c3_instanceNumber);
static const mxArray *c3_sf_marshallOut(void *chartInstanceVoid, void *c3_inData);
static real_T c3_emlrt_marshallIn(SFc3_ceInstanceStruct *chartInstance, const
  mxArray *c3_nargout, const char_T *c3_identifier);
static real_T c3_b_emlrt_marshallIn(SFc3_ceInstanceStruct *chartInstance, const
  mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_b_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static boolean_T c3_c_emlrt_marshallIn(SFc3_ceInstanceStruct *chartInstance,
  const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_c_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static int32_T c3_d_emlrt_marshallIn(SFc3_ceInstanceStruct *chartInstance, const
  mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static const mxArray *c3_d_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData);
static uint8_T c3_e_emlrt_marshallIn(SFc3_ceInstanceStruct *chartInstance, const
  mxArray *c3_b_is_fby, const char_T *c3_identifier);
static uint8_T c3_f_emlrt_marshallIn(SFc3_ceInstanceStruct *chartInstance, const
  mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static void c3_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData);
static void c3_g_emlrt_marshallIn(SFc3_ceInstanceStruct *chartInstance, const
  mxArray *c3_b_dataWrittenToVector, const char_T *c3_identifier, boolean_T
  c3_y[6]);
static void c3_h_emlrt_marshallIn(SFc3_ceInstanceStruct *chartInstance, const
  mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId, boolean_T c3_y[6]);
static const mxArray *c3_i_emlrt_marshallIn(SFc3_ceInstanceStruct *chartInstance,
  const mxArray *c3_b_setSimStateSideEffectsInfo, const char_T *c3_identifier);
static const mxArray *c3_j_emlrt_marshallIn(SFc3_ceInstanceStruct *chartInstance,
  const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId);
static const mxArray *sf_get_hover_data_for_msg(SFc3_ceInstanceStruct
  *chartInstance, int32_T c3_ssid);
static void c3_init_sf_message_store_memory(SFc3_ceInstanceStruct *chartInstance);
static void init_dsm_address_info(SFc3_ceInstanceStruct *chartInstance);
static void init_simulink_io_address(SFc3_ceInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c3_ce(SFc3_ceInstanceStruct *chartInstance)
{
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc3_ce(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  *chartInstance->c3_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c3_doSetSimStateSideEffects = 0U;
  chartInstance->c3_setSimStateSideEffectsInfo = NULL;
  *chartInstance->c3_is_by = c3_IN_NO_ACTIVE_CHILD;
  *chartInstance->c3_is_exp_fq = c3_IN_NO_ACTIVE_CHILD;
  *chartInstance->c3_is_fby = c3_IN_NO_ACTIVE_CHILD;
  *chartInstance->c3_is_fqyc = c3_IN_NO_ACTIVE_CHILD;
  *chartInstance->c3_is_active_c3_ce = 0U;
  *chartInstance->c3_is_c3_ce = c3_IN_NO_ACTIVE_CHILD;
}

static void initialize_params_c3_ce(SFc3_ceInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c3_ce(SFc3_ceInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c3_ce(SFc3_ceInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c3_update_debugger_state_c3_ce(SFc3_ceInstanceStruct *chartInstance)
{
  uint32_T c3_prevAniVal;
  c3_prevAniVal = _SFD_GET_ANIMATION();
  _SFD_SET_ANIMATION(0U);
  _SFD_SET_HONOR_BREAKPOINTS(0U);
  if (*chartInstance->c3_is_active_c3_ce == 1U) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 0U, *chartInstance->c3_sfEvent);
  }

  if (*chartInstance->c3_is_c3_ce == c3_IN_kong) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 18U, *chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 18U, *chartInstance->c3_sfEvent);
  }

  if (*chartInstance->c3_is_c3_ce == c3_IN_fby) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U, *chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 9U, *chartInstance->c3_sfEvent);
  }

  if (*chartInstance->c3_is_fby == c3_IN_fby_action2) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 11U, *chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 11U, *chartInstance->c3_sfEvent);
  }

  if (*chartInstance->c3_is_fby == c3_IN_fby_action3) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 12U, *chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 12U, *chartInstance->c3_sfEvent);
  }

  if (*chartInstance->c3_is_fby == c3_IN_fby_action1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, *chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c3_sfEvent);
  }

  if (*chartInstance->c3_is_c3_ce == c3_IN_exp_fq) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c3_sfEvent);
  }

  if (*chartInstance->c3_is_exp_fq == c3_IN_exp_rqfq) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c3_sfEvent);
  }

  if (*chartInstance->c3_is_exp_fq == c3_IN_kong1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c3_sfEvent);
  }

  if (*chartInstance->c3_is_exp_fq == c3_IN_exp_qfq) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c3_sfEvent);
  }

  if (*chartInstance->c3_is_c3_ce == c3_IN_exp_ready) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, *chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c3_sfEvent);
  }

  if (*chartInstance->c3_is_c3_ce == c3_IN_by) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c3_sfEvent);
  }

  if (*chartInstance->c3_is_by == c3_IN_bysjgd_action1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c3_sfEvent);
  }

  if (*chartInstance->c3_is_by == c3_IN_bysjgd_action3) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c3_sfEvent);
  }

  if (*chartInstance->c3_is_by == c3_IN_bysjgd_action2) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c3_sfEvent);
  }

  if (*chartInstance->c3_is_c3_ce == c3_IN_fqyc) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 13U, *chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 13U, *chartInstance->c3_sfEvent);
  }

  if (*chartInstance->c3_is_fqyc == c3_IN_fqyc_action2) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 15U, *chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 15U, *chartInstance->c3_sfEvent);
  }

  if (*chartInstance->c3_is_fqyc == c3_IN_fqyc_action3) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 16U, *chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 16U, *chartInstance->c3_sfEvent);
  }

  if (*chartInstance->c3_is_fqyc == c3_IN_fqyc_action4) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 17U, *chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 17U, *chartInstance->c3_sfEvent);
  }

  if (*chartInstance->c3_is_fqyc == c3_IN_fqyc_action1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 14U, *chartInstance->c3_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 14U, *chartInstance->c3_sfEvent);
  }

  _SFD_SET_ANIMATION(c3_prevAniVal);
  _SFD_SET_HONOR_BREAKPOINTS(1U);
  _SFD_ANIMATE();
}

static void ext_mode_exec_c3_ce(SFc3_ceInstanceStruct *chartInstance)
{
  c3_update_debugger_state_c3_ce(chartInstance);
}

static const mxArray *get_sim_state_c3_ce(SFc3_ceInstanceStruct *chartInstance)
{
  const mxArray *c3_st;
  const mxArray *c3_y = NULL;
  real_T c3_hoistedGlobal;
  const mxArray *c3_b_y = NULL;
  real_T c3_b_hoistedGlobal;
  const mxArray *c3_c_y = NULL;
  real_T c3_c_hoistedGlobal;
  const mxArray *c3_d_y = NULL;
  real_T c3_d_hoistedGlobal;
  const mxArray *c3_e_y = NULL;
  real_T c3_e_hoistedGlobal;
  const mxArray *c3_f_y = NULL;
  real_T c3_f_hoistedGlobal;
  const mxArray *c3_g_y = NULL;
  uint8_T c3_g_hoistedGlobal;
  const mxArray *c3_h_y = NULL;
  uint8_T c3_h_hoistedGlobal;
  const mxArray *c3_i_y = NULL;
  uint8_T c3_i_hoistedGlobal;
  const mxArray *c3_j_y = NULL;
  uint8_T c3_j_hoistedGlobal;
  const mxArray *c3_k_y = NULL;
  uint8_T c3_k_hoistedGlobal;
  const mxArray *c3_l_y = NULL;
  uint8_T c3_l_hoistedGlobal;
  const mxArray *c3_m_y = NULL;
  const mxArray *c3_n_y = NULL;
  c3_st = NULL;
  c3_st = NULL;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_createcellmatrix(13, 1), false);
  c3_hoistedGlobal = *chartInstance->c3_dcf_1;
  c3_b_y = NULL;
  sf_mex_assign(&c3_b_y, sf_mex_create("y", &c3_hoistedGlobal, 0, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c3_y, 0, c3_b_y);
  c3_b_hoistedGlobal = *chartInstance->c3_dcf_2;
  c3_c_y = NULL;
  sf_mex_assign(&c3_c_y, sf_mex_create("y", &c3_b_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c3_y, 1, c3_c_y);
  c3_c_hoistedGlobal = *chartInstance->c3_fby_qfsd;
  c3_d_y = NULL;
  sf_mex_assign(&c3_d_y, sf_mex_create("y", &c3_c_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c3_y, 2, c3_d_y);
  c3_d_hoistedGlobal = *chartInstance->c3_kbhxz;
  c3_e_y = NULL;
  sf_mex_assign(&c3_e_y, sf_mex_create("y", &c3_d_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c3_y, 3, c3_e_y);
  c3_e_hoistedGlobal = *chartInstance->c3_qfkk;
  c3_f_y = NULL;
  sf_mex_assign(&c3_f_y, sf_mex_create("y", &c3_e_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c3_y, 4, c3_f_y);
  c3_f_hoistedGlobal = *chartInstance->c3_trigger;
  c3_g_y = NULL;
  sf_mex_assign(&c3_g_y, sf_mex_create("y", &c3_f_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c3_y, 5, c3_g_y);
  c3_g_hoistedGlobal = *chartInstance->c3_is_active_c3_ce;
  c3_h_y = NULL;
  sf_mex_assign(&c3_h_y, sf_mex_create("y", &c3_g_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c3_y, 6, c3_h_y);
  c3_h_hoistedGlobal = *chartInstance->c3_is_c3_ce;
  c3_i_y = NULL;
  sf_mex_assign(&c3_i_y, sf_mex_create("y", &c3_h_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c3_y, 7, c3_i_y);
  c3_i_hoistedGlobal = *chartInstance->c3_is_fby;
  c3_j_y = NULL;
  sf_mex_assign(&c3_j_y, sf_mex_create("y", &c3_i_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c3_y, 8, c3_j_y);
  c3_j_hoistedGlobal = *chartInstance->c3_is_by;
  c3_k_y = NULL;
  sf_mex_assign(&c3_k_y, sf_mex_create("y", &c3_j_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c3_y, 9, c3_k_y);
  c3_k_hoistedGlobal = *chartInstance->c3_is_exp_fq;
  c3_l_y = NULL;
  sf_mex_assign(&c3_l_y, sf_mex_create("y", &c3_k_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c3_y, 10, c3_l_y);
  c3_l_hoistedGlobal = *chartInstance->c3_is_fqyc;
  c3_m_y = NULL;
  sf_mex_assign(&c3_m_y, sf_mex_create("y", &c3_l_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c3_y, 11, c3_m_y);
  c3_n_y = NULL;
  sf_mex_assign(&c3_n_y, sf_mex_create("y",
    chartInstance->c3_dataWrittenToVector, 11, 0U, 1U, 0U, 1, 6), false);
  sf_mex_setcell(c3_y, 12, c3_n_y);
  sf_mex_assign(&c3_st, c3_y, false);
  return c3_st;
}

static void set_sim_state_c3_ce(SFc3_ceInstanceStruct *chartInstance, const
  mxArray *c3_st)
{
  const mxArray *c3_u;
  boolean_T c3_bv0[6];
  int32_T c3_i0;
  c3_u = sf_mex_dup(c3_st);
  *chartInstance->c3_dcf_1 = c3_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("dcf_1", c3_u, 0)), "dcf_1");
  *chartInstance->c3_dcf_2 = c3_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("dcf_2", c3_u, 1)), "dcf_2");
  *chartInstance->c3_fby_qfsd = c3_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("fby_qfsd", c3_u, 2)), "fby_qfsd");
  *chartInstance->c3_kbhxz = c3_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("kbhxz", c3_u, 3)), "kbhxz");
  *chartInstance->c3_qfkk = c3_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("qfkk", c3_u, 4)), "qfkk");
  *chartInstance->c3_trigger = c3_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("trigger", c3_u, 5)), "trigger");
  *chartInstance->c3_is_active_c3_ce = c3_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_active_c3_ce", c3_u, 6)), "is_active_c3_ce");
  *chartInstance->c3_is_c3_ce = c3_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("is_c3_ce", c3_u, 7)), "is_c3_ce");
  *chartInstance->c3_is_fby = c3_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("is_fby", c3_u, 8)), "is_fby");
  *chartInstance->c3_is_by = c3_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("is_by", c3_u, 9)), "is_by");
  *chartInstance->c3_is_exp_fq = c3_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("is_exp_fq", c3_u, 10)), "is_exp_fq");
  *chartInstance->c3_is_fqyc = c3_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("is_fqyc", c3_u, 11)), "is_fqyc");
  c3_g_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(
    "dataWrittenToVector", c3_u, 12)), "dataWrittenToVector", c3_bv0);
  for (c3_i0 = 0; c3_i0 < 6; c3_i0++) {
    chartInstance->c3_dataWrittenToVector[c3_i0] = c3_bv0[c3_i0];
  }

  sf_mex_assign(&chartInstance->c3_setSimStateSideEffectsInfo,
                c3_i_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(
    "setSimStateSideEffectsInfo", c3_u, 13)), "setSimStateSideEffectsInfo"),
                true);
  sf_mex_destroy(&c3_u);
  chartInstance->c3_doSetSimStateSideEffects = 1U;
  c3_update_debugger_state_c3_ce(chartInstance);
  sf_mex_destroy(&c3_st);
}

static void c3_set_sim_state_side_effects_c3_ce(SFc3_ceInstanceStruct
  *chartInstance)
{
  if (chartInstance->c3_doSetSimStateSideEffects != 0) {
    chartInstance->c3_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c3_ce(SFc3_ceInstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c3_setSimStateSideEffectsInfo);
}

static void sf_gateway_c3_ce(SFc3_ceInstanceStruct *chartInstance)
{
  c3_set_sim_state_side_effects_c3_ce(chartInstance);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 0U, *chartInstance->c3_sfEvent);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_b_exp_ready, 15U, 1U, 0U,
                        *chartInstance->c3_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_fby_qfkk, 14U, 1U, 0U,
                        *chartInstance->c3_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_qffk, 13U, 1U, 0U,
                        *chartInstance->c3_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_rqyl, 12U, 1U, 0U,
                        *chartInstance->c3_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_sj, 11U, 1U, 0U,
                        *chartInstance->c3_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_qfq, 10U, 1U, 0U,
                        *chartInstance->c3_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_rqfq, 9U, 1U, 0U,
                        *chartInstance->c3_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_fq, 8U, 1U, 0U,
                        *chartInstance->c3_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_bdqy, 7U, 1U, 0U,
                        *chartInstance->c3_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_b_fqyc, 6U, 1U, 0U,
                        *chartInstance->c3_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_b_by, 5U, 1U, 0U,
                        *chartInstance->c3_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_feibaoya, 4U, 1U, 0U,
                        *chartInstance->c3_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_exp_jt, 3U, 1U, 0U,
                        *chartInstance->c3_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_exp_start, 2U, 1U, 0U,
                        *chartInstance->c3_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_shoudong, 1U, 1U, 0U,
                        *chartInstance->c3_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_zidong, 0U, 1U, 0U,
                        *chartInstance->c3_sfEvent, false);
  *chartInstance->c3_sfEvent = CALL_EVENT;
  c3_chartstep_c3_ce(chartInstance);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_ceMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void mdl_start_c3_ce(SFc3_ceInstanceStruct *chartInstance)
{
  c3_init_sf_message_store_memory(chartInstance);
}

static void c3_chartstep_c3_ce(SFc3_ceInstanceStruct *chartInstance)
{
  uint32_T c3_debug_family_var_map[3];
  real_T c3_nargin = 0.0;
  real_T c3_b_nargin = 0.0;
  real_T c3_nargout = 1.0;
  real_T c3_b_nargout = 1.0;
  boolean_T c3_out;
  boolean_T c3_b_out;
  real_T c3_c_nargin = 0.0;
  real_T c3_c_nargout = 1.0;
  boolean_T c3_c_out;
  real_T c3_d_nargin = 0.0;
  real_T c3_e_nargin = 0.0;
  real_T c3_d_nargout = 1.0;
  real_T c3_e_nargout = 1.0;
  boolean_T c3_d_out;
  boolean_T c3_e_out;
  real_T c3_f_nargin = 0.0;
  real_T c3_f_nargout = 1.0;
  boolean_T c3_f_out;
  uint32_T c3_b_debug_family_var_map[2];
  real_T c3_g_nargin = 0.0;
  real_T c3_h_nargin = 0.0;
  real_T c3_g_nargout = 0.0;
  real_T c3_h_nargout = 0.0;
  real_T c3_i_nargin = 0.0;
  real_T c3_i_nargout = 0.0;
  boolean_T guard1 = false;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 0U, *chartInstance->c3_sfEvent);
  if (*chartInstance->c3_is_active_c3_ce == 0U) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 0U, *chartInstance->c3_sfEvent);
    *chartInstance->c3_is_active_c3_ce = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, *chartInstance->c3_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 13U, *chartInstance->c3_sfEvent);
    *chartInstance->c3_is_c3_ce = c3_IN_kong;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 18U, *chartInstance->c3_sfEvent);
  } else {
    switch (*chartInstance->c3_is_c3_ce) {
     case c3_IN_by:
      CV_CHART_EVAL(0, 0, 1);
      c3_by(chartInstance);
      break;

     case c3_IN_exp_fq:
      CV_CHART_EVAL(0, 0, 2);
      c3_exp_fq(chartInstance);
      break;

     case c3_IN_exp_ready:
      CV_CHART_EVAL(0, 0, 3);
      c3_exp_ready(chartInstance);
      break;

     case c3_IN_fby:
      CV_CHART_EVAL(0, 0, 4);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 15U,
                   *chartInstance->c3_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_eb_debug_family_names,
        c3_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargin, 0U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargout, 1U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_out, 2U, c3_b_sf_marshallOut,
        c3_b_sf_marshallIn);
      if ((CV_EML_COND(15, 0, 0, CV_RELATIONAL_EVAL(5U, 15U, 0,
             *chartInstance->c3_exp_start, 0.0, -1, 0U,
             *chartInstance->c3_exp_start == 0.0)) && CV_EML_COND(15, 0, 1,
            CV_RELATIONAL_EVAL(5U, 15U, 1, *chartInstance->c3_b_exp_ready, 0.0,
             -1, 0U, *chartInstance->c3_b_exp_ready == 0.0))) || CV_EML_COND(15,
           0, 2, CV_RELATIONAL_EVAL(5U, 15U, 2, *chartInstance->c3_exp_jt, 1.0,
            -1, 0U, *chartInstance->c3_exp_jt == 1.0))) {
        CV_EML_MCDC(15, 0, 0, true);
        CV_EML_IF(15, 0, 0, true);
        c3_out = true;
      } else {
        CV_EML_MCDC(15, 0, 0, false);
        CV_EML_IF(15, 0, 0, false);
        c3_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c3_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 15U, *chartInstance->c3_sfEvent);
        c3_exit_internal_fby(chartInstance);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 9U, *chartInstance->c3_sfEvent);
        *chartInstance->c3_is_c3_ce = c3_IN_exp_ready;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, *chartInstance->c3_sfEvent);
        c3_enter_atomic_exp_ready(chartInstance);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 9U,
                     *chartInstance->c3_sfEvent);
        switch (*chartInstance->c3_is_fby) {
         case c3_IN_fby_action1:
          CV_STATE_EVAL(9, 0, 1);
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 25U,
                       *chartInstance->c3_sfEvent);
          _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_p_debug_family_names,
            c3_debug_family_var_map);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_d_nargin, 0U,
            c3_sf_marshallOut, c3_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_d_nargout, 1U,
            c3_sf_marshallOut, c3_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_d_out, 2U,
            c3_b_sf_marshallOut, c3_b_sf_marshallIn);
          if (CV_EML_COND(25, 0, 0, CV_RELATIONAL_EVAL(5U, 25U, 0,
                *chartInstance->c3_qffk, *chartInstance->c3_fby_qfkk - 0.2, -1,
                5U, *chartInstance->c3_qffk >= *chartInstance->c3_fby_qfkk - 0.2))
              && CV_EML_COND(25, 0, 1, CV_RELATIONAL_EVAL(5U, 25U, 1,
                *chartInstance->c3_exp_start, 1.0, -1, 0U,
                *chartInstance->c3_exp_start == 1.0))) {
            CV_EML_MCDC(25, 0, 0, true);
            CV_EML_IF(25, 0, 0, true);
            c3_d_out = true;
          } else {
            CV_EML_MCDC(25, 0, 0, false);
            CV_EML_IF(25, 0, 0, false);
            c3_d_out = false;
          }

          _SFD_SYMBOL_SCOPE_POP();
          if (c3_d_out) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 25U, *chartInstance->c3_sfEvent);
            _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c3_sfEvent);
            *chartInstance->c3_is_fby = c3_IN_fby_action2;
            _SFD_CS_CALL(STATE_ACTIVE_TAG, 11U, *chartInstance->c3_sfEvent);
            _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_debug_family_names,
              c3_b_debug_family_var_map);
            _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_i_nargin, 0U,
              c3_sf_marshallOut, c3_sf_marshallIn);
            _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_i_nargout, 1U,
              c3_sf_marshallOut, c3_sf_marshallIn);
            *chartInstance->c3_dcf_1 = 5.0;
            chartInstance->c3_dataWrittenToVector[0U] = true;
            _SFD_DATA_RANGE_CHECK(*chartInstance->c3_dcf_1, 16U, 4U, 11U,
                                  *chartInstance->c3_sfEvent, false);
            *chartInstance->c3_dcf_2 = 0.0;
            chartInstance->c3_dataWrittenToVector[1U] = true;
            _SFD_DATA_RANGE_CHECK(*chartInstance->c3_dcf_2, 17U, 4U, 11U,
                                  *chartInstance->c3_sfEvent, false);
            _SFD_SYMBOL_SCOPE_POP();
          } else {
            _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 10U,
                         *chartInstance->c3_sfEvent);
          }

          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 10U, *chartInstance->c3_sfEvent);
          break;

         case c3_IN_fby_action2:
          CV_STATE_EVAL(9, 0, 2);
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U,
                       *chartInstance->c3_sfEvent);
          _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_o_debug_family_names,
            c3_debug_family_var_map);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_e_nargin, 0U,
            c3_sf_marshallOut, c3_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_e_nargout, 1U,
            c3_sf_marshallOut, c3_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_e_out, 2U,
            c3_b_sf_marshallOut, c3_b_sf_marshallIn);
          c3_e_out = CV_EML_IF(4, 0, 0, CV_RELATIONAL_EVAL(5U, 4U, 0,
            *chartInstance->c3_rqyl, *chartInstance->c3_bdqy, -1, 5U,
            *chartInstance->c3_rqyl >= *chartInstance->c3_bdqy));
          _SFD_SYMBOL_SCOPE_POP();
          if (c3_e_out) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, *chartInstance->c3_sfEvent);
            _SFD_CS_CALL(STATE_INACTIVE_TAG, 11U, *chartInstance->c3_sfEvent);
            *chartInstance->c3_is_fby = c3_IN_fby_action3;
            _SFD_CS_CALL(STATE_ACTIVE_TAG, 12U, *chartInstance->c3_sfEvent);
            _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_b_debug_family_names,
              c3_b_debug_family_var_map);
            _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_g_nargin, 0U,
              c3_sf_marshallOut, c3_sf_marshallIn);
            _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_g_nargout, 1U,
              c3_sf_marshallOut, c3_sf_marshallIn);
            *chartInstance->c3_dcf_2 = 5.0;
            chartInstance->c3_dataWrittenToVector[1U] = true;
            _SFD_DATA_RANGE_CHECK(*chartInstance->c3_dcf_2, 17U, 4U, 12U,
                                  *chartInstance->c3_sfEvent, false);
            *chartInstance->c3_dcf_1 = 0.0;
            chartInstance->c3_dataWrittenToVector[0U] = true;
            _SFD_DATA_RANGE_CHECK(*chartInstance->c3_dcf_1, 16U, 4U, 12U,
                                  *chartInstance->c3_sfEvent, false);
            _SFD_SYMBOL_SCOPE_POP();
          } else {
            _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 11U,
                         *chartInstance->c3_sfEvent);
          }

          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 11U, *chartInstance->c3_sfEvent);
          break;

         case c3_IN_fby_action3:
          CV_STATE_EVAL(9, 0, 3);
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 12U,
                       *chartInstance->c3_sfEvent);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 12U, *chartInstance->c3_sfEvent);
          break;

         default:
          CV_STATE_EVAL(9, 0, 0);

          /* Unreachable state, for coverage only */
          *chartInstance->c3_is_fby = c3_IN_NO_ACTIVE_CHILD;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c3_sfEvent);
          break;
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 9U, *chartInstance->c3_sfEvent);
      break;

     case c3_IN_fqyc:
      CV_CHART_EVAL(0, 0, 5);
      c3_fqyc(chartInstance);
      break;

     case c3_IN_kong:
      CV_CHART_EVAL(0, 0, 6);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 0U,
                   *chartInstance->c3_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_cb_debug_family_names,
        c3_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_nargin, 0U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_nargout, 1U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_out, 2U, c3_b_sf_marshallOut,
        c3_b_sf_marshallIn);
      if (CV_EML_COND(0, 0, 0, CV_RELATIONAL_EVAL(5U, 0U, 0,
            *chartInstance->c3_zidong, 1.0, -1, 0U, *chartInstance->c3_zidong ==
            1.0)) && CV_EML_COND(0, 0, 1, CV_RELATIONAL_EVAL(5U, 0U, 1,
            *chartInstance->c3_shoudong, 0.0, -1, 0U,
            *chartInstance->c3_shoudong == 0.0))) {
        CV_EML_MCDC(0, 0, 0, true);
        CV_EML_IF(0, 0, 0, true);
        c3_b_out = true;
      } else {
        CV_EML_MCDC(0, 0, 0, false);
        CV_EML_IF(0, 0, 0, false);
        c3_b_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      guard1 = false;
      if (c3_b_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, *chartInstance->c3_sfEvent);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 19U,
                     *chartInstance->c3_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_gb_debug_family_names,
          c3_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_c_nargin, 0U, c3_sf_marshallOut,
          c3_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_c_nargout, 1U,
          c3_sf_marshallOut, c3_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_c_out, 2U, c3_b_sf_marshallOut,
          c3_b_sf_marshallIn);
        c3_c_out = CV_EML_IF(19, 0, 0, CV_RELATIONAL_EVAL(5U, 19U, 0,
          *chartInstance->c3_fq, 1.0, -1, 0U, *chartInstance->c3_fq == 1.0));
        _SFD_SYMBOL_SCOPE_POP();
        if (c3_c_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 19U, *chartInstance->c3_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 18U, *chartInstance->c3_sfEvent);
          *chartInstance->c3_is_c3_ce = c3_IN_exp_fq;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c3_sfEvent);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 16U, *chartInstance->c3_sfEvent);
          *chartInstance->c3_is_exp_fq = c3_IN_kong1;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c3_sfEvent);
          _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_e_debug_family_names,
            c3_b_debug_family_var_map);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_h_nargin, 0U,
            c3_sf_marshallOut, c3_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_h_nargout, 1U,
            c3_sf_marshallOut, c3_sf_marshallIn);
          *chartInstance->c3_fby_qfsd = 0.0;
          chartInstance->c3_dataWrittenToVector[3U] = true;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c3_fby_qfsd, 19U, 4U, 7U,
                                *chartInstance->c3_sfEvent, false);
          _SFD_SYMBOL_SCOPE_POP();
        } else {
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 20U,
                       *chartInstance->c3_sfEvent);
          _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_hb_debug_family_names,
            c3_debug_family_var_map);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_f_nargin, 0U,
            c3_sf_marshallOut, c3_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_f_nargout, 1U,
            c3_sf_marshallOut, c3_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_f_out, 2U,
            c3_b_sf_marshallOut, c3_b_sf_marshallIn);
          c3_f_out = CV_EML_IF(20, 0, 0, CV_RELATIONAL_EVAL(5U, 20U, 0,
            *chartInstance->c3_fq, 0.0, -1, 0U, *chartInstance->c3_fq == 0.0));
          _SFD_SYMBOL_SCOPE_POP();
          if (c3_f_out) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 20U, *chartInstance->c3_sfEvent);
            _SFD_CS_CALL(STATE_INACTIVE_TAG, 18U, *chartInstance->c3_sfEvent);
            *chartInstance->c3_is_c3_ce = c3_IN_exp_ready;
            _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, *chartInstance->c3_sfEvent);
            c3_enter_atomic_exp_ready(chartInstance);
          } else {
            guard1 = true;
          }
        }
      } else {
        guard1 = true;
      }

      if (guard1) {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 18U,
                     *chartInstance->c3_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 18U, *chartInstance->c3_sfEvent);
      break;

     default:
      CV_CHART_EVAL(0, 0, 0);

      /* Unreachable state, for coverage only */
      *chartInstance->c3_is_c3_ce = c3_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c3_sfEvent);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, *chartInstance->c3_sfEvent);
}

static void initSimStructsc3_ce(SFc3_ceInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c3_exit_internal_fby(SFc3_ceInstanceStruct *chartInstance)
{
  switch (*chartInstance->c3_is_fby) {
   case c3_IN_fby_action1:
    CV_STATE_EVAL(9, 1, 1);
    *chartInstance->c3_is_fby = c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c3_sfEvent);
    break;

   case c3_IN_fby_action2:
    CV_STATE_EVAL(9, 1, 2);
    *chartInstance->c3_is_fby = c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 11U, *chartInstance->c3_sfEvent);
    break;

   case c3_IN_fby_action3:
    CV_STATE_EVAL(9, 1, 3);
    *chartInstance->c3_is_fby = c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 12U, *chartInstance->c3_sfEvent);
    break;

   default:
    CV_STATE_EVAL(9, 1, 0);
    *chartInstance->c3_is_fby = c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c3_sfEvent);
    break;
  }
}

static void c3_exp_fq(SFc3_ceInstanceStruct *chartInstance)
{
  uint32_T c3_debug_family_var_map[3];
  real_T c3_nargin = 0.0;
  real_T c3_nargout = 1.0;
  boolean_T c3_out;
  real_T c3_b_nargin = 0.0;
  real_T c3_c_nargin = 0.0;
  real_T c3_d_nargin = 0.0;
  real_T c3_b_nargout = 1.0;
  real_T c3_c_nargout = 1.0;
  real_T c3_d_nargout = 1.0;
  boolean_T c3_b_out;
  boolean_T c3_c_out;
  boolean_T c3_d_out;
  real_T c3_e_nargin = 0.0;
  real_T c3_e_nargout = 1.0;
  boolean_T c3_e_out;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 21U, *chartInstance->c3_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_lb_debug_family_names,
    c3_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargin, 0U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargout, 1U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_out, 2U, c3_b_sf_marshallOut,
    c3_b_sf_marshallIn);
  if (CV_EML_COND(21, 0, 0, CV_RELATIONAL_EVAL(5U, 21U, 0, *chartInstance->c3_fq,
        0.0, -1, 0U, *chartInstance->c3_fq == 0.0)) || CV_EML_COND(21, 0, 1,
       CV_RELATIONAL_EVAL(5U, 21U, 1, *chartInstance->c3_exp_jt, 1.0, -1, 0U,
                          *chartInstance->c3_exp_jt == 1.0))) {
    CV_EML_MCDC(21, 0, 0, true);
    CV_EML_IF(21, 0, 0, true);
    c3_out = true;
  } else {
    CV_EML_MCDC(21, 0, 0, false);
    CV_EML_IF(21, 0, 0, false);
    c3_out = false;
  }

  _SFD_SYMBOL_SCOPE_POP();
  if (c3_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 21U, *chartInstance->c3_sfEvent);
    c3_exit_internal_exp_fq(chartInstance);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c3_sfEvent);
    *chartInstance->c3_is_c3_ce = c3_IN_exp_ready;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, *chartInstance->c3_sfEvent);
    c3_enter_atomic_exp_ready(chartInstance);
  } else {
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 4U, *chartInstance->c3_sfEvent);
    switch (*chartInstance->c3_is_exp_fq) {
     case c3_IN_exp_qfq:
      CV_STATE_EVAL(4, 0, 1);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 24U,
                   *chartInstance->c3_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_t_debug_family_names,
        c3_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_nargin, 0U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_nargout, 1U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_out, 2U, c3_b_sf_marshallOut,
        c3_b_sf_marshallIn);
      c3_b_out = CV_EML_IF(24, 0, 0, CV_RELATIONAL_EVAL(5U, 24U, 0,
        *chartInstance->c3_rqfq, 1.0, -1, 0U, *chartInstance->c3_rqfq == 1.0));
      _SFD_SYMBOL_SCOPE_POP();
      if (c3_b_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 24U, *chartInstance->c3_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c3_sfEvent);
        *chartInstance->c3_is_exp_fq = c3_IN_exp_rqfq;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c3_sfEvent);
        c3_enter_atomic_exp_rqfq(chartInstance);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 5U,
                     *chartInstance->c3_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 5U, *chartInstance->c3_sfEvent);
      break;

     case c3_IN_exp_rqfq:
      CV_STATE_EVAL(4, 0, 2);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 23U,
                   *chartInstance->c3_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_s_debug_family_names,
        c3_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_c_nargin, 0U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_c_nargout, 1U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_c_out, 2U, c3_b_sf_marshallOut,
        c3_b_sf_marshallIn);
      c3_c_out = CV_EML_IF(23, 0, 0, CV_RELATIONAL_EVAL(5U, 23U, 0,
        *chartInstance->c3_qfq, 1.0, -1, 0U, *chartInstance->c3_qfq == 1.0));
      _SFD_SYMBOL_SCOPE_POP();
      if (c3_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 23U, *chartInstance->c3_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c3_sfEvent);
        *chartInstance->c3_is_exp_fq = c3_IN_exp_qfq;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c3_sfEvent);
        c3_enter_atomic_exp_qfq(chartInstance);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 6U,
                     *chartInstance->c3_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 6U, *chartInstance->c3_sfEvent);
      break;

     case c3_IN_kong1:
      CV_STATE_EVAL(4, 0, 3);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 17U,
                   *chartInstance->c3_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_q_debug_family_names,
        c3_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_d_nargin, 0U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_d_nargout, 1U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_d_out, 2U, c3_b_sf_marshallOut,
        c3_b_sf_marshallIn);
      if (CV_EML_COND(17, 0, 0, CV_RELATIONAL_EVAL(5U, 17U, 0,
            *chartInstance->c3_rqfq, 1.0, -1, 0U, *chartInstance->c3_rqfq == 1.0))
          && CV_EML_COND(17, 0, 1, CV_RELATIONAL_EVAL(5U, 17U, 1,
            *chartInstance->c3_qfq, 0.0, -1, 0U, *chartInstance->c3_qfq == 0.0)))
      {
        CV_EML_MCDC(17, 0, 0, true);
        CV_EML_IF(17, 0, 0, true);
        c3_d_out = true;
      } else {
        CV_EML_MCDC(17, 0, 0, false);
        CV_EML_IF(17, 0, 0, false);
        c3_d_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c3_d_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 17U, *chartInstance->c3_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c3_sfEvent);
        *chartInstance->c3_is_exp_fq = c3_IN_exp_rqfq;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c3_sfEvent);
        c3_enter_atomic_exp_rqfq(chartInstance);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 18U,
                     *chartInstance->c3_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_r_debug_family_names,
          c3_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_e_nargin, 0U, c3_sf_marshallOut,
          c3_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_e_nargout, 1U,
          c3_sf_marshallOut, c3_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_e_out, 2U, c3_b_sf_marshallOut,
          c3_b_sf_marshallIn);
        if (CV_EML_COND(18, 0, 0, CV_RELATIONAL_EVAL(5U, 18U, 0,
              *chartInstance->c3_rqfq, 0.0, -1, 0U, *chartInstance->c3_rqfq ==
              0.0)) && CV_EML_COND(18, 0, 1, CV_RELATIONAL_EVAL(5U, 18U, 1,
              *chartInstance->c3_qfq, 1.0, -1, 0U, *chartInstance->c3_qfq == 1.0)))
        {
          CV_EML_MCDC(18, 0, 0, true);
          CV_EML_IF(18, 0, 0, true);
          c3_e_out = true;
        } else {
          CV_EML_MCDC(18, 0, 0, false);
          CV_EML_IF(18, 0, 0, false);
          c3_e_out = false;
        }

        _SFD_SYMBOL_SCOPE_POP();
        if (c3_e_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 18U, *chartInstance->c3_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c3_sfEvent);
          *chartInstance->c3_is_exp_fq = c3_IN_exp_qfq;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c3_sfEvent);
          c3_enter_atomic_exp_qfq(chartInstance);
        } else {
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 7U,
                       *chartInstance->c3_sfEvent);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 7U, *chartInstance->c3_sfEvent);
      break;

     default:
      CV_STATE_EVAL(4, 0, 0);

      /* Unreachable state, for coverage only */
      *chartInstance->c3_is_exp_fq = c3_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c3_sfEvent);
      break;
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, *chartInstance->c3_sfEvent);
}

static void c3_exit_internal_exp_fq(SFc3_ceInstanceStruct *chartInstance)
{
  switch (*chartInstance->c3_is_exp_fq) {
   case c3_IN_exp_qfq:
    CV_STATE_EVAL(4, 1, 1);
    *chartInstance->c3_is_exp_fq = c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c3_sfEvent);
    break;

   case c3_IN_exp_rqfq:
    CV_STATE_EVAL(4, 1, 2);
    *chartInstance->c3_is_exp_fq = c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c3_sfEvent);
    break;

   case c3_IN_kong1:
    CV_STATE_EVAL(4, 1, 3);
    *chartInstance->c3_is_exp_fq = c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c3_sfEvent);
    break;

   default:
    CV_STATE_EVAL(4, 1, 0);
    *chartInstance->c3_is_exp_fq = c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c3_sfEvent);
    break;
  }
}

static void c3_enter_atomic_exp_rqfq(SFc3_ceInstanceStruct *chartInstance)
{
  uint32_T c3_debug_family_var_map[2];
  real_T c3_nargin = 0.0;
  real_T c3_nargout = 0.0;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_d_debug_family_names,
    c3_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargin, 0U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargout, 1U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  *chartInstance->c3_dcf_1 = 0.0;
  chartInstance->c3_dataWrittenToVector[0U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_dcf_1, 16U, 4U, 6U,
                        *chartInstance->c3_sfEvent, false);
  *chartInstance->c3_dcf_2 = 5.0;
  chartInstance->c3_dataWrittenToVector[1U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_dcf_2, 17U, 4U, 6U,
                        *chartInstance->c3_sfEvent, false);
  *chartInstance->c3_kbhxz = 0.0;
  chartInstance->c3_dataWrittenToVector[2U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_kbhxz, 18U, 4U, 6U,
                        *chartInstance->c3_sfEvent, false);
  *chartInstance->c3_qfkk = 0.0;
  chartInstance->c3_dataWrittenToVector[4U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_qfkk, 20U, 4U, 6U,
                        *chartInstance->c3_sfEvent, false);
  _SFD_SYMBOL_SCOPE_POP();
}

static void c3_enter_atomic_exp_qfq(SFc3_ceInstanceStruct *chartInstance)
{
  uint32_T c3_debug_family_var_map[2];
  real_T c3_nargin = 0.0;
  real_T c3_nargout = 0.0;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_f_debug_family_names,
    c3_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargin, 0U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargout, 1U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  *chartInstance->c3_dcf_1 = 5.0;
  chartInstance->c3_dataWrittenToVector[0U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_dcf_1, 16U, 4U, 5U,
                        *chartInstance->c3_sfEvent, false);
  *chartInstance->c3_dcf_2 = 5.0;
  chartInstance->c3_dataWrittenToVector[1U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_dcf_2, 17U, 4U, 5U,
                        *chartInstance->c3_sfEvent, false);
  *chartInstance->c3_kbhxz = 0.0;
  chartInstance->c3_dataWrittenToVector[2U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_kbhxz, 18U, 4U, 5U,
                        *chartInstance->c3_sfEvent, false);
  *chartInstance->c3_qfkk = 5.0;
  chartInstance->c3_dataWrittenToVector[4U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_qfkk, 20U, 4U, 5U,
                        *chartInstance->c3_sfEvent, false);
  _SFD_SYMBOL_SCOPE_POP();
}

static void c3_enter_atomic_exp_ready(SFc3_ceInstanceStruct *chartInstance)
{
  uint32_T c3_debug_family_var_map[2];
  real_T c3_nargin = 0.0;
  real_T c3_nargout = 0.0;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_g_debug_family_names,
    c3_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargin, 0U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargout, 1U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  *chartInstance->c3_dcf_1 = 0.0;
  chartInstance->c3_dataWrittenToVector[0U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_dcf_1, 16U, 4U, 8U,
                        *chartInstance->c3_sfEvent, false);
  *chartInstance->c3_dcf_2 = 0.0;
  chartInstance->c3_dataWrittenToVector[1U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_dcf_2, 17U, 4U, 8U,
                        *chartInstance->c3_sfEvent, false);
  *chartInstance->c3_trigger = 0.0;
  chartInstance->c3_dataWrittenToVector[5U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_trigger, 21U, 4U, 8U,
                        *chartInstance->c3_sfEvent, false);
  *chartInstance->c3_kbhxz = 0.0;
  chartInstance->c3_dataWrittenToVector[2U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_kbhxz, 18U, 4U, 8U,
                        *chartInstance->c3_sfEvent, false);
  *chartInstance->c3_qfkk = 0.0;
  chartInstance->c3_dataWrittenToVector[4U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_qfkk, 20U, 4U, 8U,
                        *chartInstance->c3_sfEvent, false);
  *chartInstance->c3_fby_qfsd = 0.0;
  chartInstance->c3_dataWrittenToVector[3U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_fby_qfsd, 19U, 4U, 8U,
                        *chartInstance->c3_sfEvent, false);
  _SFD_SYMBOL_SCOPE_POP();
}

static void c3_exp_ready(SFc3_ceInstanceStruct *chartInstance)
{
  uint32_T c3_debug_family_var_map[3];
  real_T c3_nargin = 0.0;
  real_T c3_nargout = 1.0;
  boolean_T c3_out;
  real_T c3_b_nargin = 0.0;
  real_T c3_c_nargin = 0.0;
  real_T c3_b_nargout = 1.0;
  real_T c3_c_nargout = 1.0;
  boolean_T c3_b_out;
  boolean_T c3_c_out;
  real_T c3_d_nargin = 0.0;
  real_T c3_d_nargout = 1.0;
  boolean_T c3_d_out;
  uint32_T c3_b_debug_family_var_map[2];
  real_T c3_e_nargin = 0.0;
  real_T c3_f_nargin = 0.0;
  real_T c3_e_nargout = 0.0;
  real_T c3_f_nargout = 1.0;
  boolean_T c3_e_out;
  real_T c3_g_nargin = 0.0;
  real_T c3_g_nargout = 0.0;
  real_T c3_h_nargin = 0.0;
  real_T c3_h_nargout = 1.0;
  boolean_T c3_f_out;
  real_T c3_i_nargin = 0.0;
  real_T c3_i_nargout = 0.0;
  boolean_T guard1 = false;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U, *chartInstance->c3_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_ib_debug_family_names,
    c3_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargin, 0U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargout, 1U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_out, 2U, c3_b_sf_marshallOut,
    c3_b_sf_marshallIn);
  c3_out = CV_EML_IF(1, 0, 0, CV_RELATIONAL_EVAL(5U, 1U, 0,
    *chartInstance->c3_exp_jt, 0.0, -1, 0U, *chartInstance->c3_exp_jt == 0.0));
  _SFD_SYMBOL_SCOPE_POP();
  guard1 = false;
  if (c3_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, *chartInstance->c3_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                 *chartInstance->c3_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_fb_debug_family_names,
      c3_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_c_nargin, 0U, c3_sf_marshallOut,
      c3_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_c_nargout, 1U, c3_sf_marshallOut,
      c3_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_c_out, 2U, c3_b_sf_marshallOut,
      c3_b_sf_marshallIn);
    if (CV_EML_COND(2, 0, 0, CV_RELATIONAL_EVAL(5U, 2U, 0,
          *chartInstance->c3_feibaoya, 1.0, -1, 0U, *chartInstance->c3_feibaoya ==
          1.0)) && CV_EML_COND(2, 0, 1, CV_RELATIONAL_EVAL(5U, 2U, 1,
          *chartInstance->c3_rqyl, *chartInstance->c3_bdqy, -1, 2U,
          *chartInstance->c3_rqyl < *chartInstance->c3_bdqy)) && CV_EML_COND(2,
         0, 2, CV_RELATIONAL_EVAL(5U, 2U, 2, *chartInstance->c3_b_exp_ready, 1.0,
          -1, 0U, *chartInstance->c3_b_exp_ready == 1.0))) {
      CV_EML_MCDC(2, 0, 0, true);
      CV_EML_IF(2, 0, 0, true);
      c3_c_out = true;
    } else {
      CV_EML_MCDC(2, 0, 0, false);
      CV_EML_IF(2, 0, 0, false);
      c3_c_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c3_c_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, *chartInstance->c3_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c3_sfEvent);
      *chartInstance->c3_is_c3_ce = c3_IN_fby;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U, *chartInstance->c3_sfEvent);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 26U, *chartInstance->c3_sfEvent);
      *chartInstance->c3_is_fby = c3_IN_fby_action1;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, *chartInstance->c3_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_c_debug_family_names,
        c3_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_g_nargin, 0U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_g_nargout, 1U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      *chartInstance->c3_fby_qfsd = 1.0;
      chartInstance->c3_dataWrittenToVector[3U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c3_fby_qfsd, 19U, 4U, 10U,
                            *chartInstance->c3_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U,
                   *chartInstance->c3_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_jb_debug_family_names,
        c3_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_f_nargin, 0U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_f_nargout, 1U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_e_out, 2U, c3_b_sf_marshallOut,
        c3_b_sf_marshallIn);
      if (CV_EML_COND(3, 0, 0, CV_RELATIONAL_EVAL(5U, 3U, 0,
            *chartInstance->c3_b_by, 1.0, -1, 0U, *chartInstance->c3_b_by == 1.0))
          && CV_EML_COND(3, 0, 1, CV_RELATIONAL_EVAL(5U, 3U, 1,
            *chartInstance->c3_rqyl, *chartInstance->c3_bdqy, -1, 2U,
            *chartInstance->c3_rqyl < *chartInstance->c3_bdqy)) && CV_EML_COND(3,
           0, 2, CV_RELATIONAL_EVAL(5U, 3U, 2, *chartInstance->c3_exp_start, 1.0,
            -1, 0U, *chartInstance->c3_exp_start == 1.0))) {
        CV_EML_MCDC(3, 0, 0, true);
        CV_EML_IF(3, 0, 0, true);
        c3_e_out = true;
      } else {
        CV_EML_MCDC(3, 0, 0, false);
        CV_EML_IF(3, 0, 0, false);
        c3_e_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c3_e_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, *chartInstance->c3_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c3_sfEvent);
        *chartInstance->c3_is_c3_ce = c3_IN_by;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c3_sfEvent);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 12U, *chartInstance->c3_sfEvent);
        *chartInstance->c3_is_by = c3_IN_bysjgd_action1;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c3_sfEvent);
        c3_enter_atomic_bysjgd_action1(chartInstance);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 6U,
                     *chartInstance->c3_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_kb_debug_family_names,
          c3_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_h_nargin, 0U, c3_sf_marshallOut,
          c3_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_h_nargout, 1U,
          c3_sf_marshallOut, c3_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_f_out, 2U, c3_b_sf_marshallOut,
          c3_b_sf_marshallIn);
        if (CV_EML_COND(6, 0, 0, CV_RELATIONAL_EVAL(5U, 6U, 0,
              *chartInstance->c3_b_fqyc, 1.0, -1, 0U, *chartInstance->c3_b_fqyc ==
              1.0)) && CV_EML_COND(6, 0, 1, CV_RELATIONAL_EVAL(5U, 6U, 1,
              *chartInstance->c3_rqyl, *chartInstance->c3_bdqy, -1, 2U,
              *chartInstance->c3_rqyl < *chartInstance->c3_bdqy)) && CV_EML_COND
            (6, 0, 2, CV_RELATIONAL_EVAL(5U, 6U, 2,
              *chartInstance->c3_b_exp_ready, 1.0, -1, 0U,
              *chartInstance->c3_b_exp_ready == 1.0))) {
          CV_EML_MCDC(6, 0, 0, true);
          CV_EML_IF(6, 0, 0, true);
          c3_f_out = true;
        } else {
          CV_EML_MCDC(6, 0, 0, false);
          CV_EML_IF(6, 0, 0, false);
          c3_f_out = false;
        }

        _SFD_SYMBOL_SCOPE_POP();
        if (c3_f_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, *chartInstance->c3_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c3_sfEvent);
          *chartInstance->c3_is_c3_ce = c3_IN_fqyc;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 13U, *chartInstance->c3_sfEvent);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 28U, *chartInstance->c3_sfEvent);
          *chartInstance->c3_is_fqyc = c3_IN_fqyc_action1;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 14U, *chartInstance->c3_sfEvent);
          _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_n_debug_family_names,
            c3_b_debug_family_var_map);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_i_nargin, 0U,
            c3_sf_marshallOut, c3_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_i_nargout, 1U,
            c3_sf_marshallOut, c3_sf_marshallIn);
          *chartInstance->c3_fby_qfsd = 1.0;
          chartInstance->c3_dataWrittenToVector[3U] = true;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c3_fby_qfsd, 19U, 4U, 14U,
                                *chartInstance->c3_sfEvent, false);
          _SFD_SYMBOL_SCOPE_POP();
        } else {
          guard1 = true;
        }
      }
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 22U,
                 *chartInstance->c3_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_mb_debug_family_names,
      c3_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_nargin, 0U, c3_sf_marshallOut,
      c3_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_nargout, 1U, c3_sf_marshallOut,
      c3_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_out, 2U, c3_b_sf_marshallOut,
      c3_b_sf_marshallIn);
    c3_b_out = CV_EML_IF(22, 0, 0, CV_RELATIONAL_EVAL(5U, 22U, 0,
      *chartInstance->c3_fq, 1.0, -1, 0U, *chartInstance->c3_fq == 1.0));
    _SFD_SYMBOL_SCOPE_POP();
    if (c3_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 22U, *chartInstance->c3_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c3_sfEvent);
      *chartInstance->c3_is_c3_ce = c3_IN_exp_fq;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c3_sfEvent);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 16U, *chartInstance->c3_sfEvent);
      *chartInstance->c3_is_exp_fq = c3_IN_kong1;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c3_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_e_debug_family_names,
        c3_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_e_nargin, 0U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_e_nargout, 1U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      *chartInstance->c3_fby_qfsd = 0.0;
      chartInstance->c3_dataWrittenToVector[3U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c3_fby_qfsd, 19U, 4U, 7U,
                            *chartInstance->c3_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 14U,
                   *chartInstance->c3_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_db_debug_family_names,
        c3_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_d_nargin, 0U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_d_nargout, 1U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_d_out, 2U, c3_b_sf_marshallOut,
        c3_b_sf_marshallIn);
      if (CV_EML_COND(14, 0, 0, CV_RELATIONAL_EVAL(5U, 14U, 0,
            *chartInstance->c3_zidong, 0.0, -1, 0U, *chartInstance->c3_zidong ==
            0.0)) && CV_EML_COND(14, 0, 1, CV_RELATIONAL_EVAL(5U, 14U, 1,
            *chartInstance->c3_shoudong, 1.0, -1, 0U,
            *chartInstance->c3_shoudong == 1.0))) {
        CV_EML_MCDC(14, 0, 0, true);
        CV_EML_IF(14, 0, 0, true);
        c3_d_out = true;
      } else {
        CV_EML_MCDC(14, 0, 0, false);
        CV_EML_IF(14, 0, 0, false);
        c3_d_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c3_d_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 14U, *chartInstance->c3_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c3_sfEvent);
        *chartInstance->c3_is_c3_ce = c3_IN_kong;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 18U, *chartInstance->c3_sfEvent);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 8U,
                     *chartInstance->c3_sfEvent);
      }
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 8U, *chartInstance->c3_sfEvent);
}

static void c3_by(SFc3_ceInstanceStruct *chartInstance)
{
  uint32_T c3_debug_family_var_map[3];
  real_T c3_nargin = 0.0;
  real_T c3_nargout = 1.0;
  boolean_T c3_out;
  real_T c3_b_nargin = 0.0;
  real_T c3_c_nargin = 0.0;
  real_T c3_b_nargout = 1.0;
  real_T c3_c_nargout = 1.0;
  boolean_T c3_b_out;
  boolean_T c3_c_out;
  real_T c3_d_nargin = 0.0;
  real_T c3_e_nargin = 0.0;
  real_T c3_d_nargout = 1.0;
  real_T c3_e_nargout = 1.0;
  boolean_T c3_d_out;
  boolean_T c3_e_out;
  uint32_T c3_b_debug_family_var_map[2];
  real_T c3_f_nargin = 0.0;
  real_T c3_f_nargout = 0.0;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7U, *chartInstance->c3_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_nb_debug_family_names,
    c3_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargin, 0U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargout, 1U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_out, 2U, c3_b_sf_marshallOut,
    c3_b_sf_marshallIn);
  if (CV_EML_COND(7, 0, 0, CV_RELATIONAL_EVAL(5U, 7U, 0,
        *chartInstance->c3_exp_start, 0.0, -1, 0U, *chartInstance->c3_exp_start ==
        0.0)) || CV_EML_COND(7, 0, 1, CV_RELATIONAL_EVAL(5U, 7U, 1,
        *chartInstance->c3_exp_jt, 1.0, -1, 0U, *chartInstance->c3_exp_jt == 1.0)))
  {
    CV_EML_MCDC(7, 0, 0, true);
    CV_EML_IF(7, 0, 0, true);
    c3_out = true;
  } else {
    CV_EML_MCDC(7, 0, 0, false);
    CV_EML_IF(7, 0, 0, false);
    c3_out = false;
  }

  _SFD_SYMBOL_SCOPE_POP();
  if (c3_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, *chartInstance->c3_sfEvent);
    c3_exit_internal_by(chartInstance);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c3_sfEvent);
    *chartInstance->c3_is_c3_ce = c3_IN_exp_ready;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, *chartInstance->c3_sfEvent);
    c3_enter_atomic_exp_ready(chartInstance);
  } else {
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U, *chartInstance->c3_sfEvent);
    switch (*chartInstance->c3_is_by) {
     case c3_IN_bysjgd_action1:
      CV_STATE_EVAL(0, 0, 1);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U,
                   *chartInstance->c3_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_u_debug_family_names,
        c3_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_nargin, 0U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_nargout, 1U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_out, 2U, c3_b_sf_marshallOut,
        c3_b_sf_marshallIn);
      c3_b_out = CV_EML_IF(5, 0, 0, CV_RELATIONAL_EVAL(5U, 5U, 0,
        *chartInstance->c3_sj, 1.0, -1, 0U, *chartInstance->c3_sj == 1.0));
      _SFD_SYMBOL_SCOPE_POP();
      if (c3_b_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, *chartInstance->c3_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c3_sfEvent);
        *chartInstance->c3_is_by = c3_IN_bysjgd_action3;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c3_sfEvent);
        c3_enter_atomic_bysjgd_action3(chartInstance);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 9U,
                     *chartInstance->c3_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_v_debug_family_names,
          c3_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_d_nargin, 0U, c3_sf_marshallOut,
          c3_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_d_nargout, 1U,
          c3_sf_marshallOut, c3_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_d_out, 2U, c3_b_sf_marshallOut,
          c3_b_sf_marshallIn);
        c3_d_out = CV_EML_IF(9, 0, 0, CV_RELATIONAL_EVAL(5U, 9U, 0,
          *chartInstance->c3_rqyl, *chartInstance->c3_bdqy, -1, 4U,
          *chartInstance->c3_rqyl > *chartInstance->c3_bdqy));
        _SFD_SYMBOL_SCOPE_POP();
        if (c3_d_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 9U, *chartInstance->c3_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c3_sfEvent);
          *chartInstance->c3_is_by = c3_IN_bysjgd_action2;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c3_sfEvent);
          _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_j_debug_family_names,
            c3_b_debug_family_var_map);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_f_nargin, 0U,
            c3_sf_marshallOut, c3_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_f_nargout, 1U,
            c3_sf_marshallOut, c3_sf_marshallIn);
          *chartInstance->c3_dcf_1 = 0.0;
          chartInstance->c3_dataWrittenToVector[0U] = true;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c3_dcf_1, 16U, 4U, 2U,
                                *chartInstance->c3_sfEvent, false);
          *chartInstance->c3_dcf_2 = 0.0;
          chartInstance->c3_dataWrittenToVector[1U] = true;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c3_dcf_2, 17U, 4U, 2U,
                                *chartInstance->c3_sfEvent, false);
          *chartInstance->c3_trigger = 1.0;
          chartInstance->c3_dataWrittenToVector[5U] = true;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c3_trigger, 21U, 4U, 2U,
                                *chartInstance->c3_sfEvent, false);
          _SFD_SYMBOL_SCOPE_POP();
        } else {
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                       *chartInstance->c3_sfEvent);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, *chartInstance->c3_sfEvent);
      break;

     case c3_IN_bysjgd_action2:
      CV_STATE_EVAL(0, 0, 2);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 10U,
                   *chartInstance->c3_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_w_debug_family_names,
        c3_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_c_nargin, 0U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_c_nargout, 1U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_c_out, 2U, c3_b_sf_marshallOut,
        c3_b_sf_marshallIn);
      c3_c_out = CV_EML_IF(10, 0, 0, CV_RELATIONAL_EVAL(5U, 10U, 0,
        *chartInstance->c3_rqyl, *chartInstance->c3_bdqy, -1, 2U,
        *chartInstance->c3_rqyl < *chartInstance->c3_bdqy));
      _SFD_SYMBOL_SCOPE_POP();
      if (c3_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 10U, *chartInstance->c3_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c3_sfEvent);
        *chartInstance->c3_is_by = c3_IN_bysjgd_action1;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c3_sfEvent);
        c3_enter_atomic_bysjgd_action1(chartInstance);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 11U,
                     *chartInstance->c3_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_x_debug_family_names,
          c3_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_e_nargin, 0U, c3_sf_marshallOut,
          c3_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_e_nargout, 1U,
          c3_sf_marshallOut, c3_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_e_out, 2U, c3_b_sf_marshallOut,
          c3_b_sf_marshallIn);
        c3_e_out = CV_EML_IF(11, 0, 0, CV_RELATIONAL_EVAL(5U, 11U, 0,
          *chartInstance->c3_sj, 1.0, -1, 0U, *chartInstance->c3_sj == 1.0));
        _SFD_SYMBOL_SCOPE_POP();
        if (c3_e_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 11U, *chartInstance->c3_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c3_sfEvent);
          *chartInstance->c3_is_by = c3_IN_bysjgd_action3;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c3_sfEvent);
          c3_enter_atomic_bysjgd_action3(chartInstance);
        } else {
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U,
                       *chartInstance->c3_sfEvent);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, *chartInstance->c3_sfEvent);
      break;

     case c3_IN_bysjgd_action3:
      CV_STATE_EVAL(0, 0, 3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U,
                   *chartInstance->c3_sfEvent);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, *chartInstance->c3_sfEvent);
      break;

     default:
      CV_STATE_EVAL(0, 0, 0);

      /* Unreachable state, for coverage only */
      *chartInstance->c3_is_by = c3_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c3_sfEvent);
      break;
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, *chartInstance->c3_sfEvent);
}

static void c3_exit_internal_by(SFc3_ceInstanceStruct *chartInstance)
{
  switch (*chartInstance->c3_is_by) {
   case c3_IN_bysjgd_action1:
    CV_STATE_EVAL(0, 1, 1);
    *chartInstance->c3_is_by = c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c3_sfEvent);
    break;

   case c3_IN_bysjgd_action2:
    CV_STATE_EVAL(0, 1, 2);
    *chartInstance->c3_is_by = c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c3_sfEvent);
    break;

   case c3_IN_bysjgd_action3:
    CV_STATE_EVAL(0, 1, 3);
    *chartInstance->c3_is_by = c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c3_sfEvent);
    break;

   default:
    CV_STATE_EVAL(0, 1, 0);
    *chartInstance->c3_is_by = c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c3_sfEvent);
    break;
  }
}

static void c3_enter_atomic_bysjgd_action1(SFc3_ceInstanceStruct *chartInstance)
{
  uint32_T c3_debug_family_var_map[2];
  real_T c3_nargin = 0.0;
  real_T c3_nargout = 0.0;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_h_debug_family_names,
    c3_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargin, 0U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargout, 1U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  *chartInstance->c3_dcf_1 = 5.0;
  chartInstance->c3_dataWrittenToVector[0U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_dcf_1, 16U, 4U, 1U,
                        *chartInstance->c3_sfEvent, false);
  *chartInstance->c3_kbhxz = 1.0;
  chartInstance->c3_dataWrittenToVector[2U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_kbhxz, 18U, 4U, 1U,
                        *chartInstance->c3_sfEvent, false);
  *chartInstance->c3_dcf_2 = 0.0;
  chartInstance->c3_dataWrittenToVector[1U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_dcf_2, 17U, 4U, 1U,
                        *chartInstance->c3_sfEvent, false);
  _SFD_SYMBOL_SCOPE_POP();
}

static void c3_enter_atomic_bysjgd_action3(SFc3_ceInstanceStruct *chartInstance)
{
  uint32_T c3_debug_family_var_map[2];
  real_T c3_nargin = 0.0;
  real_T c3_nargout = 0.0;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_i_debug_family_names,
    c3_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargin, 0U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargout, 1U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  *chartInstance->c3_dcf_2 = 5.0;
  chartInstance->c3_dataWrittenToVector[1U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_dcf_2, 17U, 4U, 3U,
                        *chartInstance->c3_sfEvent, false);
  *chartInstance->c3_kbhxz = 0.0;
  chartInstance->c3_dataWrittenToVector[2U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_kbhxz, 18U, 4U, 3U,
                        *chartInstance->c3_sfEvent, false);
  *chartInstance->c3_qfkk = 0.0;
  chartInstance->c3_dataWrittenToVector[4U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_qfkk, 20U, 4U, 3U,
                        *chartInstance->c3_sfEvent, false);
  *chartInstance->c3_dcf_1 = 0.0;
  chartInstance->c3_dataWrittenToVector[0U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c3_dcf_1, 16U, 4U, 3U,
                        *chartInstance->c3_sfEvent, false);
  _SFD_SYMBOL_SCOPE_POP();
}

static void c3_fqyc(SFc3_ceInstanceStruct *chartInstance)
{
  uint32_T c3_debug_family_var_map[3];
  real_T c3_nargin = 0.0;
  real_T c3_nargout = 1.0;
  boolean_T c3_out;
  real_T c3_b_nargin = 0.0;
  real_T c3_c_nargin = 0.0;
  real_T c3_d_nargin = 0.0;
  real_T c3_b_nargout = 1.0;
  real_T c3_c_nargout = 1.0;
  real_T c3_d_nargout = 1.0;
  boolean_T c3_b_out;
  boolean_T c3_c_out;
  boolean_T c3_d_out;
  uint32_T c3_b_debug_family_var_map[2];
  real_T c3_e_nargin = 0.0;
  real_T c3_f_nargin = 0.0;
  real_T c3_e_nargout = 0.0;
  real_T c3_f_nargout = 0.0;
  real_T c3_g_nargin = 0.0;
  real_T c3_g_nargout = 0.0;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 8U, *chartInstance->c3_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_ob_debug_family_names,
    c3_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargin, 0U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_nargout, 1U, c3_sf_marshallOut,
    c3_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_out, 2U, c3_b_sf_marshallOut,
    c3_b_sf_marshallIn);
  if ((CV_EML_COND(8, 0, 0, CV_RELATIONAL_EVAL(5U, 8U, 0,
         *chartInstance->c3_exp_start, 0.0, -1, 0U, *chartInstance->c3_exp_start
         == 0.0)) && CV_EML_COND(8, 0, 1, CV_RELATIONAL_EVAL(5U, 8U, 1,
         *chartInstance->c3_b_exp_ready, 0.0, -1, 0U,
         *chartInstance->c3_b_exp_ready == 0.0))) || CV_EML_COND(8, 0, 2,
       CV_RELATIONAL_EVAL(5U, 8U, 2, *chartInstance->c3_exp_jt, 1.0, -1, 0U,
                          *chartInstance->c3_exp_jt == 1.0))) {
    CV_EML_MCDC(8, 0, 0, true);
    CV_EML_IF(8, 0, 0, true);
    c3_out = true;
  } else {
    CV_EML_MCDC(8, 0, 0, false);
    CV_EML_IF(8, 0, 0, false);
    c3_out = false;
  }

  _SFD_SYMBOL_SCOPE_POP();
  if (c3_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8U, *chartInstance->c3_sfEvent);
    c3_exit_internal_fqyc(chartInstance);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 13U, *chartInstance->c3_sfEvent);
    *chartInstance->c3_is_c3_ce = c3_IN_exp_ready;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, *chartInstance->c3_sfEvent);
    c3_enter_atomic_exp_ready(chartInstance);
  } else {
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 13U,
                 *chartInstance->c3_sfEvent);
    switch (*chartInstance->c3_is_fqyc) {
     case c3_IN_fqyc_action1:
      CV_STATE_EVAL(13, 0, 1);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 27U,
                   *chartInstance->c3_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_bb_debug_family_names,
        c3_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_nargin, 0U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_nargout, 1U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_b_out, 2U, c3_b_sf_marshallOut,
        c3_b_sf_marshallIn);
      if (CV_EML_COND(27, 0, 0, CV_RELATIONAL_EVAL(5U, 27U, 0,
            *chartInstance->c3_qffk, *chartInstance->c3_fby_qfkk - 0.2, -1, 5U, *
            chartInstance->c3_qffk >= *chartInstance->c3_fby_qfkk - 0.2)) &&
          CV_EML_COND(27, 0, 1, CV_RELATIONAL_EVAL(5U, 27U, 1,
            *chartInstance->c3_exp_start, 1.0, -1, 0U,
            *chartInstance->c3_exp_start == 1.0))) {
        CV_EML_MCDC(27, 0, 0, true);
        CV_EML_IF(27, 0, 0, true);
        c3_b_out = true;
      } else {
        CV_EML_MCDC(27, 0, 0, false);
        CV_EML_IF(27, 0, 0, false);
        c3_b_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c3_b_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 27U, *chartInstance->c3_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 14U, *chartInstance->c3_sfEvent);
        *chartInstance->c3_is_fqyc = c3_IN_fqyc_action2;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 15U, *chartInstance->c3_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_k_debug_family_names,
          c3_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_g_nargin, 0U, c3_sf_marshallOut,
          c3_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_g_nargout, 1U,
          c3_sf_marshallOut, c3_sf_marshallIn);
        *chartInstance->c3_dcf_1 = 5.0;
        chartInstance->c3_dataWrittenToVector[0U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c3_dcf_1, 16U, 4U, 15U,
                              *chartInstance->c3_sfEvent, false);
        *chartInstance->c3_dcf_2 = 0.0;
        chartInstance->c3_dataWrittenToVector[1U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c3_dcf_2, 17U, 4U, 15U,
                              *chartInstance->c3_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 14U,
                     *chartInstance->c3_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 14U, *chartInstance->c3_sfEvent);
      break;

     case c3_IN_fqyc_action2:
      CV_STATE_EVAL(13, 0, 2);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 29U,
                   *chartInstance->c3_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_ab_debug_family_names,
        c3_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_c_nargin, 0U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_c_nargout, 1U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_c_out, 2U, c3_b_sf_marshallOut,
        c3_b_sf_marshallIn);
      c3_c_out = CV_EML_IF(29, 0, 0, CV_RELATIONAL_EVAL(5U, 29U, 0,
        *chartInstance->c3_rqyl, *chartInstance->c3_bdqy, -1, 5U,
        *chartInstance->c3_rqyl >= *chartInstance->c3_bdqy));
      _SFD_SYMBOL_SCOPE_POP();
      if (c3_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 29U, *chartInstance->c3_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 15U, *chartInstance->c3_sfEvent);
        *chartInstance->c3_is_fqyc = c3_IN_fqyc_action3;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 16U, *chartInstance->c3_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_l_debug_family_names,
          c3_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_e_nargin, 0U, c3_sf_marshallOut,
          c3_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_e_nargout, 1U,
          c3_sf_marshallOut, c3_sf_marshallIn);
        *chartInstance->c3_trigger = 1.0;
        chartInstance->c3_dataWrittenToVector[5U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c3_trigger, 21U, 4U, 16U,
                              *chartInstance->c3_sfEvent, false);
        *chartInstance->c3_dcf_1 = 0.0;
        chartInstance->c3_dataWrittenToVector[0U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c3_dcf_1, 16U, 4U, 16U,
                              *chartInstance->c3_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 15U,
                     *chartInstance->c3_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 15U, *chartInstance->c3_sfEvent);
      break;

     case c3_IN_fqyc_action3:
      CV_STATE_EVAL(13, 0, 3);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 30U,
                   *chartInstance->c3_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c3_y_debug_family_names,
        c3_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_d_nargin, 0U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_d_nargout, 1U, c3_sf_marshallOut,
        c3_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_d_out, 2U, c3_b_sf_marshallOut,
        c3_b_sf_marshallIn);
      c3_d_out = CV_EML_IF(30, 0, 0, CV_RELATIONAL_EVAL(5U, 30U, 0,
        *chartInstance->c3_sj, 1.0, -1, 0U, *chartInstance->c3_sj == 1.0));
      _SFD_SYMBOL_SCOPE_POP();
      if (c3_d_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 30U, *chartInstance->c3_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 16U, *chartInstance->c3_sfEvent);
        *chartInstance->c3_is_fqyc = c3_IN_fqyc_action4;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 17U, *chartInstance->c3_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c3_m_debug_family_names,
          c3_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_f_nargin, 0U, c3_sf_marshallOut,
          c3_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c3_f_nargout, 1U,
          c3_sf_marshallOut, c3_sf_marshallIn);
        *chartInstance->c3_dcf_1 = 0.0;
        chartInstance->c3_dataWrittenToVector[0U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c3_dcf_1, 16U, 4U, 17U,
                              *chartInstance->c3_sfEvent, false);
        *chartInstance->c3_dcf_2 = 5.0;
        chartInstance->c3_dataWrittenToVector[1U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c3_dcf_2, 17U, 4U, 17U,
                              *chartInstance->c3_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 16U,
                     *chartInstance->c3_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 16U, *chartInstance->c3_sfEvent);
      break;

     case c3_IN_fqyc_action4:
      CV_STATE_EVAL(13, 0, 4);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 17U,
                   *chartInstance->c3_sfEvent);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 17U, *chartInstance->c3_sfEvent);
      break;

     default:
      CV_STATE_EVAL(13, 0, 0);

      /* Unreachable state, for coverage only */
      *chartInstance->c3_is_fqyc = c3_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 14U, *chartInstance->c3_sfEvent);
      break;
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 13U, *chartInstance->c3_sfEvent);
}

static void c3_exit_internal_fqyc(SFc3_ceInstanceStruct *chartInstance)
{
  switch (*chartInstance->c3_is_fqyc) {
   case c3_IN_fqyc_action1:
    CV_STATE_EVAL(13, 1, 1);
    *chartInstance->c3_is_fqyc = c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 14U, *chartInstance->c3_sfEvent);
    break;

   case c3_IN_fqyc_action2:
    CV_STATE_EVAL(13, 1, 2);
    *chartInstance->c3_is_fqyc = c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 15U, *chartInstance->c3_sfEvent);
    break;

   case c3_IN_fqyc_action3:
    CV_STATE_EVAL(13, 1, 3);
    *chartInstance->c3_is_fqyc = c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 16U, *chartInstance->c3_sfEvent);
    break;

   case c3_IN_fqyc_action4:
    CV_STATE_EVAL(13, 1, 4);
    *chartInstance->c3_is_fqyc = c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 17U, *chartInstance->c3_sfEvent);
    break;

   default:
    CV_STATE_EVAL(13, 1, 0);
    *chartInstance->c3_is_fqyc = c3_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 14U, *chartInstance->c3_sfEvent);
    break;
  }
}

static void init_script_number_translation(uint32_T c3_machineNumber, uint32_T
  c3_chartNumber, uint32_T c3_instanceNumber)
{
  (void)c3_machineNumber;
  (void)c3_chartNumber;
  (void)c3_instanceNumber;
}

static const mxArray *c3_sf_marshallOut(void *chartInstanceVoid, void *c3_inData)
{
  const mxArray *c3_mxArrayOutData;
  real_T c3_u;
  const mxArray *c3_y = NULL;
  SFc3_ceInstanceStruct *chartInstance;
  chartInstance = (SFc3_ceInstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_mxArrayOutData = NULL;
  c3_u = *(real_T *)c3_inData;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", &c3_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  return c3_mxArrayOutData;
}

static real_T c3_emlrt_marshallIn(SFc3_ceInstanceStruct *chartInstance, const
  mxArray *c3_nargout, const char_T *c3_identifier)
{
  real_T c3_y;
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_y = c3_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_nargout), &c3_thisId);
  sf_mex_destroy(&c3_nargout);
  return c3_y;
}

static real_T c3_b_emlrt_marshallIn(SFc3_ceInstanceStruct *chartInstance, const
  mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  real_T c3_y;
  real_T c3_d0;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_d0, 1, 0, 0U, 0, 0U, 0);
  c3_y = c3_d0;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_nargout;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  real_T c3_y;
  SFc3_ceInstanceStruct *chartInstance;
  chartInstance = (SFc3_ceInstanceStruct *)chartInstanceVoid;
  c3_nargout = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_y = c3_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_nargout), &c3_thisId);
  sf_mex_destroy(&c3_nargout);
  *(real_T *)c3_outData = c3_y;
  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_b_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData;
  boolean_T c3_u;
  const mxArray *c3_y = NULL;
  SFc3_ceInstanceStruct *chartInstance;
  chartInstance = (SFc3_ceInstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_mxArrayOutData = NULL;
  c3_u = *(boolean_T *)c3_inData;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", &c3_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  return c3_mxArrayOutData;
}

static boolean_T c3_c_emlrt_marshallIn(SFc3_ceInstanceStruct *chartInstance,
  const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  boolean_T c3_y;
  boolean_T c3_b0;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_b0, 1, 11, 0U, 0, 0U, 0);
  c3_y = c3_b0;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_sf_internal_predicateOutput;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  boolean_T c3_y;
  SFc3_ceInstanceStruct *chartInstance;
  chartInstance = (SFc3_ceInstanceStruct *)chartInstanceVoid;
  c3_sf_internal_predicateOutput = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_y = c3_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c3_sf_internal_predicateOutput), &c3_thisId);
  sf_mex_destroy(&c3_sf_internal_predicateOutput);
  *(boolean_T *)c3_outData = c3_y;
  sf_mex_destroy(&c3_mxArrayInData);
}

const mxArray *sf_c3_ce_get_eml_resolved_functions_info(void)
{
  const mxArray *c3_nameCaptureInfo = NULL;
  c3_nameCaptureInfo = NULL;
  sf_mex_assign(&c3_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c3_nameCaptureInfo;
}

static const mxArray *c3_c_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData;
  int32_T c3_u;
  const mxArray *c3_y = NULL;
  SFc3_ceInstanceStruct *chartInstance;
  chartInstance = (SFc3_ceInstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_mxArrayOutData = NULL;
  c3_u = *(int32_T *)c3_inData;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", &c3_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  return c3_mxArrayOutData;
}

static int32_T c3_d_emlrt_marshallIn(SFc3_ceInstanceStruct *chartInstance, const
  mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  int32_T c3_y;
  int32_T c3_i1;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_i1, 1, 6, 0U, 0, 0U, 0);
  c3_y = c3_i1;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_b_sfEvent;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  int32_T c3_y;
  SFc3_ceInstanceStruct *chartInstance;
  chartInstance = (SFc3_ceInstanceStruct *)chartInstanceVoid;
  c3_b_sfEvent = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_y = c3_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_sfEvent),
    &c3_thisId);
  sf_mex_destroy(&c3_b_sfEvent);
  *(int32_T *)c3_outData = c3_y;
  sf_mex_destroy(&c3_mxArrayInData);
}

static const mxArray *c3_d_sf_marshallOut(void *chartInstanceVoid, void
  *c3_inData)
{
  const mxArray *c3_mxArrayOutData;
  uint8_T c3_u;
  const mxArray *c3_y = NULL;
  SFc3_ceInstanceStruct *chartInstance;
  chartInstance = (SFc3_ceInstanceStruct *)chartInstanceVoid;
  c3_mxArrayOutData = NULL;
  c3_mxArrayOutData = NULL;
  c3_u = *(uint8_T *)c3_inData;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_create("y", &c3_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c3_mxArrayOutData, c3_y, false);
  return c3_mxArrayOutData;
}

static uint8_T c3_e_emlrt_marshallIn(SFc3_ceInstanceStruct *chartInstance, const
  mxArray *c3_b_is_fby, const char_T *c3_identifier)
{
  uint8_T c3_y;
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_y = c3_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_is_fby),
    &c3_thisId);
  sf_mex_destroy(&c3_b_is_fby);
  return c3_y;
}

static uint8_T c3_f_emlrt_marshallIn(SFc3_ceInstanceStruct *chartInstance, const
  mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  uint8_T c3_y;
  uint8_T c3_u0;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), &c3_u0, 1, 3, 0U, 0, 0U, 0);
  c3_y = c3_u0;
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static void c3_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c3_mxArrayInData, const char_T *c3_varName, void *c3_outData)
{
  const mxArray *c3_b_is_fby;
  const char_T *c3_identifier;
  emlrtMsgIdentifier c3_thisId;
  uint8_T c3_y;
  SFc3_ceInstanceStruct *chartInstance;
  chartInstance = (SFc3_ceInstanceStruct *)chartInstanceVoid;
  c3_b_is_fby = sf_mex_dup(c3_mxArrayInData);
  c3_identifier = c3_varName;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_y = c3_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_is_fby),
    &c3_thisId);
  sf_mex_destroy(&c3_b_is_fby);
  *(uint8_T *)c3_outData = c3_y;
  sf_mex_destroy(&c3_mxArrayInData);
}

static void c3_g_emlrt_marshallIn(SFc3_ceInstanceStruct *chartInstance, const
  mxArray *c3_b_dataWrittenToVector, const char_T *c3_identifier, boolean_T
  c3_y[6])
{
  emlrtMsgIdentifier c3_thisId;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  c3_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c3_b_dataWrittenToVector),
                        &c3_thisId, c3_y);
  sf_mex_destroy(&c3_b_dataWrittenToVector);
}

static void c3_h_emlrt_marshallIn(SFc3_ceInstanceStruct *chartInstance, const
  mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId, boolean_T c3_y[6])
{
  boolean_T c3_bv1[6];
  int32_T c3_i2;
  (void)chartInstance;
  sf_mex_import(c3_parentId, sf_mex_dup(c3_u), c3_bv1, 1, 11, 0U, 1, 0U, 1, 6);
  for (c3_i2 = 0; c3_i2 < 6; c3_i2++) {
    c3_y[c3_i2] = c3_bv1[c3_i2];
  }

  sf_mex_destroy(&c3_u);
}

static const mxArray *c3_i_emlrt_marshallIn(SFc3_ceInstanceStruct *chartInstance,
  const mxArray *c3_b_setSimStateSideEffectsInfo, const char_T *c3_identifier)
{
  const mxArray *c3_y = NULL;
  emlrtMsgIdentifier c3_thisId;
  c3_y = NULL;
  c3_thisId.fIdentifier = c3_identifier;
  c3_thisId.fParent = NULL;
  c3_thisId.bParentIsCell = false;
  sf_mex_assign(&c3_y, c3_j_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c3_b_setSimStateSideEffectsInfo), &c3_thisId), false);
  sf_mex_destroy(&c3_b_setSimStateSideEffectsInfo);
  return c3_y;
}

static const mxArray *c3_j_emlrt_marshallIn(SFc3_ceInstanceStruct *chartInstance,
  const mxArray *c3_u, const emlrtMsgIdentifier *c3_parentId)
{
  const mxArray *c3_y = NULL;
  (void)chartInstance;
  (void)c3_parentId;
  c3_y = NULL;
  sf_mex_assign(&c3_y, sf_mex_duplicatearraysafe(&c3_u), false);
  sf_mex_destroy(&c3_u);
  return c3_y;
}

static const mxArray *sf_get_hover_data_for_msg(SFc3_ceInstanceStruct
  *chartInstance, int32_T c3_ssid)
{
  const mxArray *c3_msgInfo;
  (void)chartInstance;
  (void)c3_ssid;
  c3_msgInfo = NULL;
  return NULL;
}

static void c3_init_sf_message_store_memory(SFc3_ceInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_dsm_address_info(SFc3_ceInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc3_ceInstanceStruct *chartInstance)
{
  chartInstance->c3_sfEvent = (int32_T *)ssGetDWork_wrapper(chartInstance->S, 0);
  chartInstance->c3_is_active_c3_ce = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 1);
  chartInstance->c3_is_c3_ce = (uint8_T *)ssGetDWork_wrapper(chartInstance->S, 2);
  chartInstance->c3_is_fby = (uint8_T *)ssGetDWork_wrapper(chartInstance->S, 3);
  chartInstance->c3_is_exp_fq = (uint8_T *)ssGetDWork_wrapper(chartInstance->S,
    4);
  chartInstance->c3_is_by = (uint8_T *)ssGetDWork_wrapper(chartInstance->S, 5);
  chartInstance->c3_is_fqyc = (uint8_T *)ssGetDWork_wrapper(chartInstance->S, 6);
  chartInstance->c3_zidong = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c3_shoudong = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c3_exp_start = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c3_exp_jt = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c3_feibaoya = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c3_b_by = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 5);
  chartInstance->c3_b_fqyc = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 6);
  chartInstance->c3_bdqy = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 7);
  chartInstance->c3_dcf_1 = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c3_dcf_2 = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c3_kbhxz = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c3_fby_qfsd = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c3_qfkk = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 5);
  chartInstance->c3_trigger = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 6);
  chartInstance->c3_fq = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    8);
  chartInstance->c3_rqfq = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 9);
  chartInstance->c3_qfq = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 10);
  chartInstance->c3_sj = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    11);
  chartInstance->c3_rqyl = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 12);
  chartInstance->c3_qffk = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 13);
  chartInstance->c3_fby_qfkk = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 14);
  chartInstance->c3_b_exp_ready = (real_T *)ssGetInputPortSignal_wrapper
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
void sf_c3_ce_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1881235929U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(19136694U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2131418488U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3779578881U);
}

mxArray* sf_c3_ce_get_post_codegen_info(void);
mxArray *sf_c3_ce_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("pCWUPRKrBIyYIsemO4r5T");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,16,3,dataFields);

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

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,8,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,8,"type",mxType);
    }

    mxSetField(mxData,8,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,9,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,9,"type",mxType);
    }

    mxSetField(mxData,9,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,10,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,10,"type",mxType);
    }

    mxSetField(mxData,10,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,11,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,11,"type",mxType);
    }

    mxSetField(mxData,11,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,12,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,12,"type",mxType);
    }

    mxSetField(mxData,12,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,13,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,13,"type",mxType);
    }

    mxSetField(mxData,13,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,14,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,14,"type",mxType);
    }

    mxSetField(mxData,14,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,15,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,15,"type",mxType);
    }

    mxSetField(mxData,15,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
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
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  {
    mxArray* mxPostCodegenInfo = sf_c3_ce_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c3_ce_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c3_ce_jit_fallback_info(void)
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

mxArray *sf_c3_ce_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c3_ce_get_post_codegen_info(void)
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

static const mxArray *sf_get_sim_state_info_c3_ce(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x10'type','srcId','name','auxInfo'{{M[1],M[37],T\"dcf_1\",},{M[1],M[38],T\"dcf_2\",},{M[1],M[269],T\"fby_qfsd\",},{M[1],M[86],T\"kbhxz\",},{M[1],M[114],T\"qfkk\",},{M[1],M[106],T\"trigger\",},{M[8],M[0],T\"is_active_c3_ce\",},{M[9],M[0],T\"is_c3_ce\",},{M[9],M[43],T\"is_fby\",},{M[9],M[51],T\"is_by\",}}",
    "100 S1x3'type','srcId','name','auxInfo'{{M[9],M[187],T\"is_exp_fq\",},{M[9],M[285],T\"is_fqyc\",},{M[15],M[0],T\"dataWrittenToVector\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 13, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c3_ce_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const mxArray* sf_opaque_get_hover_data_for_msg(void* chartInstance,
  int32_T msgSSID)
{
  return sf_get_hover_data_for_msg( (SFc3_ceInstanceStruct *) chartInstance,
    msgSSID);
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc3_ceInstanceStruct *chartInstance = (SFc3_ceInstanceStruct *)
      sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _ceMachineNumber_,
           3,
           19,
           31,
           0,
           22,
           0,
           0,
           0,
           0,
           0,
           &chartInstance->chartNumber,
           &chartInstance->instanceNumber,
           (void *)S);

        /* Each instance must initialize its own list of scripts */
        init_script_number_translation(_ceMachineNumber_,
          chartInstance->chartNumber,chartInstance->instanceNumber);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          sf_debug_set_chart_disable_implicit_casting
            (sfGlobalDebugInstanceStruct,_ceMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(sfGlobalDebugInstanceStruct,
            _ceMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,"zidong");
          _SFD_SET_DATA_PROPS(1,1,1,0,"shoudong");
          _SFD_SET_DATA_PROPS(2,1,1,0,"exp_start");
          _SFD_SET_DATA_PROPS(3,1,1,0,"exp_jt");
          _SFD_SET_DATA_PROPS(4,1,1,0,"feibaoya");
          _SFD_SET_DATA_PROPS(5,1,1,0,"by");
          _SFD_SET_DATA_PROPS(6,1,1,0,"fqyc");
          _SFD_SET_DATA_PROPS(7,1,1,0,"bdqy");
          _SFD_SET_DATA_PROPS(8,1,1,0,"fq");
          _SFD_SET_DATA_PROPS(9,1,1,0,"rqfq");
          _SFD_SET_DATA_PROPS(10,1,1,0,"qfq");
          _SFD_SET_DATA_PROPS(11,1,1,0,"sj");
          _SFD_SET_DATA_PROPS(12,1,1,0,"rqyl");
          _SFD_SET_DATA_PROPS(13,1,1,0,"qffk");
          _SFD_SET_DATA_PROPS(14,1,1,0,"fby_qfkk");
          _SFD_SET_DATA_PROPS(15,1,1,0,"exp_ready");
          _SFD_SET_DATA_PROPS(16,2,0,1,"dcf_1");
          _SFD_SET_DATA_PROPS(17,2,0,1,"dcf_2");
          _SFD_SET_DATA_PROPS(18,2,0,1,"kbhxz");
          _SFD_SET_DATA_PROPS(19,2,0,1,"fby_qfsd");
          _SFD_SET_DATA_PROPS(20,2,0,1,"qfkk");
          _SFD_SET_DATA_PROPS(21,2,0,1,"trigger");
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_STATE_INFO(3,0,0);
          _SFD_STATE_INFO(4,0,0);
          _SFD_STATE_INFO(5,0,0);
          _SFD_STATE_INFO(6,0,0);
          _SFD_STATE_INFO(7,0,0);
          _SFD_STATE_INFO(8,0,0);
          _SFD_STATE_INFO(9,0,0);
          _SFD_STATE_INFO(10,0,0);
          _SFD_STATE_INFO(11,0,0);
          _SFD_STATE_INFO(12,0,0);
          _SFD_STATE_INFO(13,0,0);
          _SFD_STATE_INFO(14,0,0);
          _SFD_STATE_INFO(15,0,0);
          _SFD_STATE_INFO(16,0,0);
          _SFD_STATE_INFO(17,0,0);
          _SFD_STATE_INFO(18,0,0);
          _SFD_CH_SUBSTATE_COUNT(6);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,4);
          _SFD_CH_SUBSTATE_INDEX(2,8);
          _SFD_CH_SUBSTATE_INDEX(3,9);
          _SFD_CH_SUBSTATE_INDEX(4,13);
          _SFD_CH_SUBSTATE_INDEX(5,18);
          _SFD_ST_SUBSTATE_COUNT(0,3);
          _SFD_ST_SUBSTATE_INDEX(0,0,1);
          _SFD_ST_SUBSTATE_INDEX(0,1,2);
          _SFD_ST_SUBSTATE_INDEX(0,2,3);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,0);
          _SFD_ST_SUBSTATE_COUNT(4,3);
          _SFD_ST_SUBSTATE_INDEX(4,0,5);
          _SFD_ST_SUBSTATE_INDEX(4,1,6);
          _SFD_ST_SUBSTATE_INDEX(4,2,7);
          _SFD_ST_SUBSTATE_COUNT(5,0);
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
          _SFD_ST_SUBSTATE_COUNT(13,4);
          _SFD_ST_SUBSTATE_INDEX(13,0,14);
          _SFD_ST_SUBSTATE_INDEX(13,1,15);
          _SFD_ST_SUBSTATE_INDEX(13,2,16);
          _SFD_ST_SUBSTATE_INDEX(13,3,17);
          _SFD_ST_SUBSTATE_COUNT(14,0);
          _SFD_ST_SUBSTATE_COUNT(15,0);
          _SFD_ST_SUBSTATE_COUNT(16,0);
          _SFD_ST_SUBSTATE_COUNT(17,0);
          _SFD_ST_SUBSTATE_COUNT(18,0);
        }

        _SFD_CV_INIT_CHART(6,1,0,0);

        {
          _SFD_CV_INIT_STATE(0,3,1,1,0,0,NULL,NULL);
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
          _SFD_CV_INIT_STATE(4,3,1,1,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(5,0,0,0,0,0,NULL,NULL);
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
          _SFD_CV_INIT_STATE(9,3,1,1,0,0,NULL,NULL);
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

        {
          _SFD_CV_INIT_STATE(13,4,1,1,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(14,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(15,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(16,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(17,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(18,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(13,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(14,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(15,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(2,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(19,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(20,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(1,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(3,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(6,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(21,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(22,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(7,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(8,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(26,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(4,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(25,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(16,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(17,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(18,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(23,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(24,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(12,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(5,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(9,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(10,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(11,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(28,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(30,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(29,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(27,0,NULL,NULL,0,NULL);

        /* Initialization of MATLAB Function Model Coverage */
        _SFD_CV_INIT_EML(11,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(12,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(10,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(6,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(7,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(5,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(8,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(1,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(3,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(2,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(15,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(16,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(17,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(14,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(4,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(4,0,0,1,11,1,11);
        _SFD_CV_INIT_EML_RELATIONAL(4,0,0,1,11,-1,5);
        _SFD_CV_INIT_EML(25,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(25,0,0,1,35,1,35);

        {
          static int condStart[] = { 1, 23 };

          static int condEnd[] = { 21, 35 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(25,0,0,1,35,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(25,0,0,1,21,-1,5);
        _SFD_CV_INIT_EML_RELATIONAL(25,0,1,23,35,-1,0);
        _SFD_CV_INIT_EML(17,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(17,0,0,1,16,1,16);

        {
          static int condStart[] = { 1, 10 };

          static int condEnd[] = { 8, 16 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(17,0,0,1,16,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(17,0,0,1,8,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(17,0,1,10,16,-1,0);
        _SFD_CV_INIT_EML(18,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(18,0,0,1,16,1,16);

        {
          static int condStart[] = { 1, 10 };

          static int condEnd[] = { 8, 16 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(18,0,0,1,16,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(18,0,0,1,8,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(18,0,1,10,16,-1,0);
        _SFD_CV_INIT_EML(23,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(23,0,0,1,7,1,7);
        _SFD_CV_INIT_EML_RELATIONAL(23,0,0,1,7,-1,0);
        _SFD_CV_INIT_EML(24,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(24,0,0,1,8,1,8);
        _SFD_CV_INIT_EML_RELATIONAL(24,0,0,1,8,-1,0);
        _SFD_CV_INIT_EML(5,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(5,0,0,1,7,1,7);
        _SFD_CV_INIT_EML_RELATIONAL(5,0,0,1,7,-1,0);
        _SFD_CV_INIT_EML(9,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(9,0,0,1,10,1,10);
        _SFD_CV_INIT_EML_RELATIONAL(9,0,0,1,10,-1,4);
        _SFD_CV_INIT_EML(10,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(10,0,0,1,10,1,10);
        _SFD_CV_INIT_EML_RELATIONAL(10,0,0,1,10,-1,2);
        _SFD_CV_INIT_EML(11,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(11,0,0,1,7,1,7);
        _SFD_CV_INIT_EML_RELATIONAL(11,0,0,1,7,-1,0);
        _SFD_CV_INIT_EML(30,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(30,0,0,1,7,1,7);
        _SFD_CV_INIT_EML_RELATIONAL(30,0,0,1,7,-1,0);
        _SFD_CV_INIT_EML(29,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(29,0,0,1,11,1,11);
        _SFD_CV_INIT_EML_RELATIONAL(29,0,0,1,11,-1,5);
        _SFD_CV_INIT_EML(27,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(27,0,0,1,35,1,35);

        {
          static int condStart[] = { 1, 23 };

          static int condEnd[] = { 21, 35 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(27,0,0,1,35,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(27,0,0,1,21,-1,5);
        _SFD_CV_INIT_EML_RELATIONAL(27,0,1,23,35,-1,0);
        _SFD_CV_INIT_EML(0,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(0,0,0,1,23,1,23);

        {
          static int condStart[] = { 1, 12 };

          static int condEnd[] = { 10, 23 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,0,0,1,23,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(0,0,0,1,10,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(0,0,1,12,23,-1,0);
        _SFD_CV_INIT_EML(14,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(14,0,0,1,23,1,23);

        {
          static int condStart[] = { 1, 12 };

          static int condEnd[] = { 10, 23 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(14,0,0,1,23,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(14,0,0,1,10,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(14,0,1,12,23,-1,0);
        _SFD_CV_INIT_EML(15,0,0,0,1,0,0,0,0,0,3,1);
        _SFD_CV_INIT_EML_IF(15,0,0,1,41,1,41);

        {
          static int condStart[] = { 2, 16, 31 };

          static int condEnd[] = { 14, 28, 41 };

          static int pfixExpr[] = { 0, 1, -3, 2, -2 };

          _SFD_CV_INIT_EML_MCDC(15,0,0,1,41,3,0,&(condStart[0]),&(condEnd[0]),5,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(15,0,0,2,14,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(15,0,1,16,28,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(15,0,2,31,41,-1,0);
        _SFD_CV_INIT_EML(2,0,0,0,1,0,0,0,0,0,3,1);
        _SFD_CV_INIT_EML_IF(2,0,0,1,37,1,37);

        {
          static int condStart[] = { 1, 14, 25 };

          static int condEnd[] = { 12, 23, 37 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3 };

          _SFD_CV_INIT_EML_MCDC(2,0,0,1,37,3,0,&(condStart[0]),&(condEnd[0]),5,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(2,0,0,1,12,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(2,0,1,14,23,-1,2);
        _SFD_CV_INIT_EML_RELATIONAL(2,0,2,25,37,-1,0);
        _SFD_CV_INIT_EML(19,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(19,0,0,1,6,1,6);
        _SFD_CV_INIT_EML_RELATIONAL(19,0,0,1,6,-1,0);
        _SFD_CV_INIT_EML(20,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(20,0,0,1,6,1,6);
        _SFD_CV_INIT_EML_RELATIONAL(20,0,0,1,6,-1,0);
        _SFD_CV_INIT_EML(1,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(1,0,0,1,11,1,11);
        _SFD_CV_INIT_EML_RELATIONAL(1,0,0,1,11,-1,0);
        _SFD_CV_INIT_EML(3,0,0,0,1,0,0,0,0,0,3,1);
        _SFD_CV_INIT_EML_IF(3,0,0,1,31,1,31);

        {
          static int condStart[] = { 1, 8, 19 };

          static int condEnd[] = { 6, 17, 31 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3 };

          _SFD_CV_INIT_EML_MCDC(3,0,0,1,31,3,0,&(condStart[0]),&(condEnd[0]),5,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(3,0,0,1,6,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(3,0,1,8,17,-1,2);
        _SFD_CV_INIT_EML_RELATIONAL(3,0,2,19,31,-1,0);
        _SFD_CV_INIT_EML(6,0,0,0,1,0,0,0,0,0,3,1);
        _SFD_CV_INIT_EML_IF(6,0,0,1,33,1,33);

        {
          static int condStart[] = { 1, 10, 21 };

          static int condEnd[] = { 8, 19, 33 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3 };

          _SFD_CV_INIT_EML_MCDC(6,0,0,1,33,3,0,&(condStart[0]),&(condEnd[0]),5,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(6,0,0,1,8,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(6,0,1,10,19,-1,2);
        _SFD_CV_INIT_EML_RELATIONAL(6,0,2,21,33,-1,0);
        _SFD_CV_INIT_EML(21,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(21,0,0,1,18,1,18);

        {
          static int condStart[] = { 1, 8 };

          static int condEnd[] = { 6, 18 };

          static int pfixExpr[] = { 0, 1, -2 };

          _SFD_CV_INIT_EML_MCDC(21,0,0,1,18,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(21,0,0,1,6,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(21,0,1,8,18,-1,0);
        _SFD_CV_INIT_EML(22,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(22,0,0,1,6,1,6);
        _SFD_CV_INIT_EML_RELATIONAL(22,0,0,1,6,-1,0);
        _SFD_CV_INIT_EML(7,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(7,0,0,1,25,1,25);

        {
          static int condStart[] = { 1, 15 };

          static int condEnd[] = { 13, 25 };

          static int pfixExpr[] = { 0, 1, -2 };

          _SFD_CV_INIT_EML_MCDC(7,0,0,1,25,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(7,0,0,1,13,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(7,0,1,15,25,-1,0);
        _SFD_CV_INIT_EML(8,0,0,0,1,0,0,0,0,0,3,1);
        _SFD_CV_INIT_EML_IF(8,0,0,1,41,1,41);

        {
          static int condStart[] = { 2, 16, 31 };

          static int condEnd[] = { 14, 28, 41 };

          static int pfixExpr[] = { 0, 1, -3, 2, -2 };

          _SFD_CV_INIT_EML_MCDC(8,0,0,1,41,3,0,&(condStart[0]),&(condEnd[0]),5,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(8,0,0,2,14,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(8,0,1,16,28,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(8,0,2,31,41,-1,0);
        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(9,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(10,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(11,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(12,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(13,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(14,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(15,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(16,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)c3_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(17,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)c3_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(18,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)c3_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(19,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)c3_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(20,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)c3_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(21,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c3_sf_marshallOut,(MexInFcnForType)c3_sf_marshallIn);
      }
    } else {
      sf_debug_reset_current_state_configuration(sfGlobalDebugInstanceStruct,
        _ceMachineNumber_,chartInstance->chartNumber,
        chartInstance->instanceNumber);
    }
  }
}

static void chart_debug_initialize_data_addresses(SimStruct *S)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc3_ceInstanceStruct *chartInstance = (SFc3_ceInstanceStruct *)
      sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        _SFD_SET_DATA_VALUE_PTR(0U, chartInstance->c3_zidong);
        _SFD_SET_DATA_VALUE_PTR(1U, chartInstance->c3_shoudong);
        _SFD_SET_DATA_VALUE_PTR(2U, chartInstance->c3_exp_start);
        _SFD_SET_DATA_VALUE_PTR(3U, chartInstance->c3_exp_jt);
        _SFD_SET_DATA_VALUE_PTR(4U, chartInstance->c3_feibaoya);
        _SFD_SET_DATA_VALUE_PTR(5U, chartInstance->c3_b_by);
        _SFD_SET_DATA_VALUE_PTR(6U, chartInstance->c3_b_fqyc);
        _SFD_SET_DATA_VALUE_PTR(7U, chartInstance->c3_bdqy);
        _SFD_SET_DATA_VALUE_PTR(16U, chartInstance->c3_dcf_1);
        _SFD_SET_DATA_VALUE_PTR(17U, chartInstance->c3_dcf_2);
        _SFD_SET_DATA_VALUE_PTR(18U, chartInstance->c3_kbhxz);
        _SFD_SET_DATA_VALUE_PTR(19U, chartInstance->c3_fby_qfsd);
        _SFD_SET_DATA_VALUE_PTR(20U, chartInstance->c3_qfkk);
        _SFD_SET_DATA_VALUE_PTR(21U, chartInstance->c3_trigger);
        _SFD_SET_DATA_VALUE_PTR(8U, chartInstance->c3_fq);
        _SFD_SET_DATA_VALUE_PTR(9U, chartInstance->c3_rqfq);
        _SFD_SET_DATA_VALUE_PTR(10U, chartInstance->c3_qfq);
        _SFD_SET_DATA_VALUE_PTR(11U, chartInstance->c3_sj);
        _SFD_SET_DATA_VALUE_PTR(12U, chartInstance->c3_rqyl);
        _SFD_SET_DATA_VALUE_PTR(13U, chartInstance->c3_qffk);
        _SFD_SET_DATA_VALUE_PTR(14U, chartInstance->c3_fby_qfkk);
        _SFD_SET_DATA_VALUE_PTR(15U, chartInstance->c3_b_exp_ready);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "snpIY2XdouKcCasESJm4x3D";
}

static void sf_check_dwork_consistency(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    const uint32_T *sfunDWorkChecksum = sf_get_sfun_dwork_checksum();
    mxArray *infoStruct = load_ce_optimization_info(sim_mode_is_rtw_gen(S),
      sim_mode_is_modelref_sim(S), sim_mode_is_external(S));
    mxArray* mxRTWDWorkChecksum = sf_get_dwork_info_from_mat_file(S,
      sf_get_instance_specialization(), infoStruct, 3, "dworkChecksum");
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

static void sf_opaque_initialize_c3_ce(void *chartInstanceVar)
{
  sf_check_dwork_consistency(((SFc3_ceInstanceStruct*) chartInstanceVar)->S);
  chart_debug_initialization(((SFc3_ceInstanceStruct*) chartInstanceVar)->S,0);
  initialize_params_c3_ce((SFc3_ceInstanceStruct*) chartInstanceVar);
  initialize_c3_ce((SFc3_ceInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c3_ce(void *chartInstanceVar)
{
  enable_c3_ce((SFc3_ceInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c3_ce(void *chartInstanceVar)
{
  disable_c3_ce((SFc3_ceInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c3_ce(void *chartInstanceVar)
{
  sf_gateway_c3_ce((SFc3_ceInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_ext_mode_exec_c3_ce(void *chartInstanceVar)
{
  ext_mode_exec_c3_ce((SFc3_ceInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c3_ce(SimStruct* S)
{
  return get_sim_state_c3_ce((SFc3_ceInstanceStruct *)sf_get_chart_instance_ptr
    (S));                              /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c3_ce(SimStruct* S, const mxArray *st)
{
  set_sim_state_c3_ce((SFc3_ceInstanceStruct*)sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_terminate_c3_ce(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc3_ceInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_ce_optimization_info();
    }

    finalize_c3_ce((SFc3_ceInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc3_ce((SFc3_ceInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c3_ce(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c3_ce((SFc3_ceInstanceStruct*)sf_get_chart_instance_ptr(S));
  }
}

mxArray *sf_c3_ce_get_testpoint_info(void)
{
  return NULL;
}

static void sf_set_sfun_dwork_info(SimStruct *S)
{
  const char *dworkEncStr[] = {
    "100 S1x7'type','isSigned','wordLength','bias','slope','exponent','isScaledDouble','isComplex','size','local_queue_dwork_idx','local_queue_id'{{T\"int32\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]}}"
  };

  sf_set_encoded_dwork_info(S, dworkEncStr, 7, 10);
}

static uint32_T* sf_get_sfun_dwork_checksum()
{
  static uint32_T checksum[4] = { 3899681542U, 2588885109U, 934362407U,
    3209408355U };

  return checksum;
}

static void mdlSetWorkWidths_c3_ce(SimStruct *S)
{
  ssSetStatesModifiedOnlyInUpdate(S, 0);
  ssMdlUpdateIsEmpty(S, 1);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_ce_optimization_info(sim_mode_is_rtw_gen(S),
      sim_mode_is_modelref_sim(S), sim_mode_is_external(S));
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,3);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,3,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_set_chart_accesses_machine_info(S, sf_get_instance_specialization(),
      infoStruct, 3);
    sf_update_buildInfo(S, sf_get_instance_specialization(),infoStruct,3);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 5, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 6, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 7, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 8, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 9, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 10, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 11, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 12, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 13, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 14, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 15, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,3,16);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,3,6);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=6; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 16; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,3);
    sf_register_codegen_names_for_scoped_functions_defined_by_chart(S);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
    sf_set_sfun_dwork_info(S);
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(1817063439U));
  ssSetChecksum1(S,(1164867931U));
  ssSetChecksum2(S,(3749528728U));
  ssSetChecksum3(S,(4183700548U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSetStateSemanticsClassicAndSynchronous(S, true);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c3_ce(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c3_ce(SimStruct *S)
{
  SFc3_ceInstanceStruct *chartInstance;
  chartInstance = (SFc3_ceInstanceStruct *)utMalloc(sizeof(SFc3_ceInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc3_ceInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c3_ce;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c3_ce;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c3_ce;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c3_ce;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c3_ce;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c3_ce;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c3_ce;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c3_ce;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c3_ce;
  chartInstance->chartInfo.mdlStart = mdlStart_c3_ce;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c3_ce;
  chartInstance->chartInfo.callGetHoverDataForMsg =
    sf_opaque_get_hover_data_for_msg;
  chartInstance->chartInfo.extModeExec = sf_opaque_ext_mode_exec_c3_ce;
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
  mdl_start_c3_ce(chartInstance);
}

void c3_ce_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c3_ce(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c3_ce(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c3_ce(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c3_ce_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
