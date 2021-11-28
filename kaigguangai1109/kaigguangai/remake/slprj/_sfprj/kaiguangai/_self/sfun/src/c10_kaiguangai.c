/* Include files */

#include "kaiguangai_sfun.h"
#include "c10_kaiguangai.h"
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
#define c10_IN_NO_ACTIVE_CHILD         ((uint8_T)0U)
#define c10_IN_off                     ((uint8_T)1U)
#define c10_IN_off1                    ((uint8_T)2U)
#define c10_IN_shoudong                ((uint8_T)3U)
#define c10_IN_on                      ((uint8_T)2U)
#define c10_IN_t                       ((uint8_T)3U)
#define c10_IN_t2                      ((uint8_T)4U)
#define c10_IN_t1                      ((uint8_T)4U)
#define c10_b_IN_t2                    ((uint8_T)5U)
#define c10_IN_t3                      ((uint8_T)5U)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static const char * c10_debug_family_names[2] = { "nargin", "nargout" };

static const char * c10_b_debug_family_names[2] = { "nargin", "nargout" };

static const char * c10_c_debug_family_names[2] = { "nargin", "nargout" };

static const char * c10_d_debug_family_names[2] = { "nargin", "nargout" };

static const char * c10_e_debug_family_names[2] = { "nargin", "nargout" };

static const char * c10_f_debug_family_names[2] = { "nargin", "nargout" };

static const char * c10_g_debug_family_names[2] = { "nargin", "nargout" };

static const char * c10_h_debug_family_names[2] = { "nargin", "nargout" };

static const char * c10_i_debug_family_names[2] = { "nargin", "nargout" };

static const char * c10_j_debug_family_names[2] = { "nargin", "nargout" };

static const char * c10_k_debug_family_names[2] = { "nargin", "nargout" };

static const char * c10_l_debug_family_names[2] = { "nargin", "nargout" };

static const char * c10_m_debug_family_names[2] = { "nargin", "nargout" };

static const char * c10_n_debug_family_names[2] = { "nargin", "nargout" };

static const char * c10_o_debug_family_names[2] = { "nargin", "nargout" };

static const char * c10_p_debug_family_names[2] = { "nargin", "nargout" };

static const char * c10_q_debug_family_names[2] = { "nargin", "nargout" };

static const char * c10_r_debug_family_names[2] = { "nargin", "nargout" };

static const char * c10_s_debug_family_names[2] = { "nargin", "nargout" };

static const char * c10_t_debug_family_names[2] = { "nargin", "nargout" };

static const char * c10_u_debug_family_names[2] = { "nargin", "nargout" };

static const char * c10_v_debug_family_names[2] = { "nargin", "nargout" };

static const char * c10_w_debug_family_names[2] = { "nargin", "nargout" };

static const char * c10_x_debug_family_names[2] = { "nargin", "nargout" };

static const char * c10_y_debug_family_names[2] = { "nargin", "nargout" };

static const char * c10_ab_debug_family_names[2] = { "nargin", "nargout" };

static const char * c10_bb_debug_family_names[2] = { "nargin", "nargout" };

static const char * c10_cb_debug_family_names[2] = { "nargin", "nargout" };

static const char * c10_db_debug_family_names[2] = { "nargin", "nargout" };

static const char * c10_eb_debug_family_names[2] = { "nargin", "nargout" };

static const char * c10_fb_debug_family_names[2] = { "nargin", "nargout" };

static const char * c10_gb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c10_hb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c10_ib_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c10_jb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c10_kb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c10_lb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c10_mb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c10_nb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c10_ob_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c10_pb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c10_qb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c10_rb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c10_sb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c10_tb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c10_ub_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c10_vb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c10_wb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c10_xb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c10_yb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c10_ac_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c10_bc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c10_cc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c10_dc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c10_ec_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c10_fc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c10_gc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c10_hc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c10_ic_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c10_jc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c10_kc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c10_lc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c10_mc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c10_nc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c10_oc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c10_pc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c10_qc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c10_rc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c10_sc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c10_tc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c10_uc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c10_vc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c10_wc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c10_xc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c10_yc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

/* Function Declarations */
static void initialize_c10_kaiguangai(SFc10_kaiguangaiInstanceStruct
  *chartInstance);
static void initialize_params_c10_kaiguangai(SFc10_kaiguangaiInstanceStruct
  *chartInstance);
static void enable_c10_kaiguangai(SFc10_kaiguangaiInstanceStruct *chartInstance);
static void disable_c10_kaiguangai(SFc10_kaiguangaiInstanceStruct *chartInstance);
static void c10_update_debugger_state_c10_kaiguangai
  (SFc10_kaiguangaiInstanceStruct *chartInstance);
static void ext_mode_exec_c10_kaiguangai(SFc10_kaiguangaiInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c10_kaiguangai
  (SFc10_kaiguangaiInstanceStruct *chartInstance);
static void set_sim_state_c10_kaiguangai(SFc10_kaiguangaiInstanceStruct
  *chartInstance, const mxArray *c10_st);
static void c10_set_sim_state_side_effects_c10_kaiguangai
  (SFc10_kaiguangaiInstanceStruct *chartInstance);
static void finalize_c10_kaiguangai(SFc10_kaiguangaiInstanceStruct
  *chartInstance);
static void sf_gateway_c10_kaiguangai(SFc10_kaiguangaiInstanceStruct
  *chartInstance);
static void mdl_start_c10_kaiguangai(SFc10_kaiguangaiInstanceStruct
  *chartInstance);
static void c10_chartstep_c10_kaiguangai(SFc10_kaiguangaiInstanceStruct
  *chartInstance);
static void initSimStructsc10_kaiguangai(SFc10_kaiguangaiInstanceStruct
  *chartInstance);
static void c10_off(SFc10_kaiguangaiInstanceStruct *chartInstance);
static void c10_exit_internal_shoudong(SFc10_kaiguangaiInstanceStruct
  *chartInstance);
static void c10_songkai(SFc10_kaiguangaiInstanceStruct *chartInstance);
static void c10_enter_atomic_t2(SFc10_kaiguangaiInstanceStruct *chartInstance);
static void c10_t2(SFc10_kaiguangaiInstanceStruct *chartInstance);
static void c10_kaigai(SFc10_kaiguangaiInstanceStruct *chartInstance);
static void c10_enter_atomic_off(SFc10_kaiguangaiInstanceStruct *chartInstance);
static void c10_t(SFc10_kaiguangaiInstanceStruct *chartInstance);
static void c10_jiesuo(SFc10_kaiguangaiInstanceStruct *chartInstance);
static void c10_b_t(SFc10_kaiguangaiInstanceStruct *chartInstance);
static void c10_suoding(SFc10_kaiguangaiInstanceStruct *chartInstance);
static void c10_c_t(SFc10_kaiguangaiInstanceStruct *chartInstance);
static void c10_yajin(SFc10_kaiguangaiInstanceStruct *chartInstance);
static void c10_d_t(SFc10_kaiguangaiInstanceStruct *chartInstance);
static void c10_guangai(SFc10_kaiguangaiInstanceStruct *chartInstance);
static void c10_b_enter_atomic_off(SFc10_kaiguangaiInstanceStruct *chartInstance);
static void c10_e_t(SFc10_kaiguangaiInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c10_machineNumber, uint32_T
  c10_chartNumber, uint32_T c10_instanceNumber);
static const mxArray *c10_sf_marshallOut(void *chartInstanceVoid, void
  *c10_inData);
static real_T c10_emlrt_marshallIn(SFc10_kaiguangaiInstanceStruct *chartInstance,
  const mxArray *c10_nargout, const char_T *c10_identifier);
static real_T c10_b_emlrt_marshallIn(SFc10_kaiguangaiInstanceStruct
  *chartInstance, const mxArray *c10_u, const emlrtMsgIdentifier *c10_parentId);
static void c10_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c10_mxArrayInData, const char_T *c10_varName, void *c10_outData);
static const mxArray *c10_b_sf_marshallOut(void *chartInstanceVoid, void
  *c10_inData);
static boolean_T c10_c_emlrt_marshallIn(SFc10_kaiguangaiInstanceStruct
  *chartInstance, const mxArray *c10_u, const emlrtMsgIdentifier *c10_parentId);
static void c10_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c10_mxArrayInData, const char_T *c10_varName, void *c10_outData);
static const mxArray *c10_c_sf_marshallOut(void *chartInstanceVoid, void
  *c10_inData);
static int32_T c10_d_emlrt_marshallIn(SFc10_kaiguangaiInstanceStruct
  *chartInstance, const mxArray *c10_u, const emlrtMsgIdentifier *c10_parentId);
static void c10_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c10_mxArrayInData, const char_T *c10_varName, void *c10_outData);
static const mxArray *c10_d_sf_marshallOut(void *chartInstanceVoid, void
  *c10_inData);
static uint8_T c10_e_emlrt_marshallIn(SFc10_kaiguangaiInstanceStruct
  *chartInstance, const mxArray *c10_b_is_songkai, const char_T *c10_identifier);
static uint8_T c10_f_emlrt_marshallIn(SFc10_kaiguangaiInstanceStruct
  *chartInstance, const mxArray *c10_u, const emlrtMsgIdentifier *c10_parentId);
static void c10_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c10_mxArrayInData, const char_T *c10_varName, void *c10_outData);
static void c10_g_emlrt_marshallIn(SFc10_kaiguangaiInstanceStruct *chartInstance,
  const mxArray *c10_b_dataWrittenToVector, const char_T *c10_identifier,
  boolean_T c10_y[20]);
static void c10_h_emlrt_marshallIn(SFc10_kaiguangaiInstanceStruct *chartInstance,
  const mxArray *c10_u, const emlrtMsgIdentifier *c10_parentId, boolean_T c10_y
  [20]);
static const mxArray *c10_i_emlrt_marshallIn(SFc10_kaiguangaiInstanceStruct
  *chartInstance, const mxArray *c10_b_setSimStateSideEffectsInfo, const char_T *
  c10_identifier);
static const mxArray *c10_j_emlrt_marshallIn(SFc10_kaiguangaiInstanceStruct
  *chartInstance, const mxArray *c10_u, const emlrtMsgIdentifier *c10_parentId);
static const mxArray *sf_get_hover_data_for_msg(SFc10_kaiguangaiInstanceStruct
  *chartInstance, int32_T c10_ssid);
static void c10_init_sf_message_store_memory(SFc10_kaiguangaiInstanceStruct
  *chartInstance);
static void init_dsm_address_info(SFc10_kaiguangaiInstanceStruct *chartInstance);
static void init_simulink_io_address(SFc10_kaiguangaiInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c10_kaiguangai(SFc10_kaiguangaiInstanceStruct
  *chartInstance)
{
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc10_kaiguangai(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  *chartInstance->c10_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c10_doSetSimStateSideEffects = 0U;
  chartInstance->c10_setSimStateSideEffectsInfo = NULL;
  *chartInstance->c10_is_active_guangai = 0U;
  *chartInstance->c10_is_guangai = c10_IN_NO_ACTIVE_CHILD;
  *chartInstance->c10_temporalCounter_i6 = 0U;
  *chartInstance->c10_is_active_jiesuo = 0U;
  *chartInstance->c10_is_jiesuo = c10_IN_NO_ACTIVE_CHILD;
  *chartInstance->c10_temporalCounter_i3 = 0U;
  *chartInstance->c10_is_active_kaigai = 0U;
  *chartInstance->c10_is_kaigai = c10_IN_NO_ACTIVE_CHILD;
  *chartInstance->c10_temporalCounter_i2 = 0U;
  *chartInstance->c10_is_active_songkai = 0U;
  *chartInstance->c10_is_songkai = c10_IN_NO_ACTIVE_CHILD;
  *chartInstance->c10_temporalCounter_i1 = 0U;
  *chartInstance->c10_is_active_suoding = 0U;
  *chartInstance->c10_is_suoding = c10_IN_NO_ACTIVE_CHILD;
  *chartInstance->c10_temporalCounter_i4 = 0U;
  *chartInstance->c10_is_active_yajin = 0U;
  *chartInstance->c10_is_yajin = c10_IN_NO_ACTIVE_CHILD;
  *chartInstance->c10_temporalCounter_i5 = 0U;
  *chartInstance->c10_is_active_c10_kaiguangai = 0U;
  *chartInstance->c10_is_c10_kaiguangai = c10_IN_NO_ACTIVE_CHILD;
}

static void initialize_params_c10_kaiguangai(SFc10_kaiguangaiInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void enable_c10_kaiguangai(SFc10_kaiguangaiInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c10_kaiguangai(SFc10_kaiguangaiInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c10_update_debugger_state_c10_kaiguangai
  (SFc10_kaiguangaiInstanceStruct *chartInstance)
{
  uint32_T c10_prevAniVal;
  c10_prevAniVal = _SFD_GET_ANIMATION();
  _SFD_SET_ANIMATION(0U);
  _SFD_SET_HONOR_BREAKPOINTS(0U);
  if (*chartInstance->c10_is_active_c10_kaiguangai == 1U) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 9U, *chartInstance->c10_sfEvent);
  }

  if (*chartInstance->c10_is_c10_kaiguangai == c10_IN_off) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c10_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c10_sfEvent);
  }

  if (*chartInstance->c10_is_c10_kaiguangai == c10_IN_shoudong) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c10_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c10_sfEvent);
  }

  if (*chartInstance->c10_is_active_songkai == 1U) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 21U, *chartInstance->c10_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 21U, *chartInstance->c10_sfEvent);
  }

  if (*chartInstance->c10_is_songkai == c10_IN_off) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 22U, *chartInstance->c10_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 22U, *chartInstance->c10_sfEvent);
  }

  if (*chartInstance->c10_is_songkai == c10_IN_on) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 23U, *chartInstance->c10_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 23U, *chartInstance->c10_sfEvent);
  }

  if (*chartInstance->c10_is_songkai == c10_IN_t) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 24U, *chartInstance->c10_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 24U, *chartInstance->c10_sfEvent);
  }

  if (*chartInstance->c10_is_c10_kaiguangai == c10_IN_off1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c10_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c10_sfEvent);
  }

  if (*chartInstance->c10_is_songkai == c10_IN_t2) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 25U, *chartInstance->c10_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 25U, *chartInstance->c10_sfEvent);
  }

  if (*chartInstance->c10_is_active_kaigai == 1U) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 15U, *chartInstance->c10_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 15U, *chartInstance->c10_sfEvent);
  }

  if (*chartInstance->c10_is_kaigai == c10_IN_off) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 16U, *chartInstance->c10_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 16U, *chartInstance->c10_sfEvent);
  }

  if (*chartInstance->c10_is_kaigai == c10_IN_on) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 17U, *chartInstance->c10_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 17U, *chartInstance->c10_sfEvent);
  }

  if (*chartInstance->c10_is_kaigai == c10_IN_t) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 18U, *chartInstance->c10_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 18U, *chartInstance->c10_sfEvent);
  }

  if (*chartInstance->c10_is_kaigai == c10_IN_t1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 19U, *chartInstance->c10_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 19U, *chartInstance->c10_sfEvent);
  }

  if (*chartInstance->c10_is_kaigai == c10_b_IN_t2) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 20U, *chartInstance->c10_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 20U, *chartInstance->c10_sfEvent);
  }

  if (*chartInstance->c10_is_active_jiesuo == 1U) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U, *chartInstance->c10_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 9U, *chartInstance->c10_sfEvent);
  }

  if (*chartInstance->c10_is_jiesuo == c10_IN_off) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, *chartInstance->c10_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c10_sfEvent);
  }

  if (*chartInstance->c10_is_jiesuo == c10_IN_on) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 11U, *chartInstance->c10_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 11U, *chartInstance->c10_sfEvent);
  }

  if (*chartInstance->c10_is_jiesuo == c10_IN_t) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 12U, *chartInstance->c10_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 12U, *chartInstance->c10_sfEvent);
  }

  if (*chartInstance->c10_is_jiesuo == c10_IN_t1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 13U, *chartInstance->c10_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 13U, *chartInstance->c10_sfEvent);
  }

  if (*chartInstance->c10_is_jiesuo == c10_b_IN_t2) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 14U, *chartInstance->c10_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 14U, *chartInstance->c10_sfEvent);
  }

  if (*chartInstance->c10_is_active_suoding == 1U) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 26U, *chartInstance->c10_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 26U, *chartInstance->c10_sfEvent);
  }

  if (*chartInstance->c10_is_suoding == c10_IN_off) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 27U, *chartInstance->c10_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 27U, *chartInstance->c10_sfEvent);
  }

  if (*chartInstance->c10_is_suoding == c10_IN_on) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 28U, *chartInstance->c10_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 28U, *chartInstance->c10_sfEvent);
  }

  if (*chartInstance->c10_is_suoding == c10_IN_t1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 30U, *chartInstance->c10_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 30U, *chartInstance->c10_sfEvent);
  }

  if (*chartInstance->c10_is_suoding == c10_b_IN_t2) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 31U, *chartInstance->c10_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 31U, *chartInstance->c10_sfEvent);
  }

  if (*chartInstance->c10_is_suoding == c10_IN_t) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 29U, *chartInstance->c10_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 29U, *chartInstance->c10_sfEvent);
  }

  if (*chartInstance->c10_is_active_yajin == 1U) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 32U, *chartInstance->c10_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 32U, *chartInstance->c10_sfEvent);
  }

  if (*chartInstance->c10_is_yajin == c10_IN_off) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 33U, *chartInstance->c10_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 33U, *chartInstance->c10_sfEvent);
  }

  if (*chartInstance->c10_is_yajin == c10_IN_on) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 34U, *chartInstance->c10_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 34U, *chartInstance->c10_sfEvent);
  }

  if (*chartInstance->c10_is_yajin == c10_IN_t3) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 37U, *chartInstance->c10_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 37U, *chartInstance->c10_sfEvent);
  }

  if (*chartInstance->c10_is_yajin == c10_IN_t2) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 36U, *chartInstance->c10_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 36U, *chartInstance->c10_sfEvent);
  }

  if (*chartInstance->c10_is_yajin == c10_IN_t) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 35U, *chartInstance->c10_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 35U, *chartInstance->c10_sfEvent);
  }

  if (*chartInstance->c10_is_active_guangai == 1U) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c10_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c10_sfEvent);
  }

  if (*chartInstance->c10_is_guangai == c10_IN_off) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c10_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c10_sfEvent);
  }

  if (*chartInstance->c10_is_guangai == c10_IN_on) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c10_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c10_sfEvent);
  }

  if (*chartInstance->c10_is_guangai == c10_IN_t1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c10_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c10_sfEvent);
  }

  if (*chartInstance->c10_is_guangai == c10_b_IN_t2) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, *chartInstance->c10_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c10_sfEvent);
  }

  if (*chartInstance->c10_is_guangai == c10_IN_t) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c10_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c10_sfEvent);
  }

  _SFD_SET_ANIMATION(c10_prevAniVal);
  _SFD_SET_HONOR_BREAKPOINTS(1U);
  _SFD_ANIMATE();
}

static void ext_mode_exec_c10_kaiguangai(SFc10_kaiguangaiInstanceStruct
  *chartInstance)
{
  c10_update_debugger_state_c10_kaiguangai(chartInstance);
}

static const mxArray *get_sim_state_c10_kaiguangai
  (SFc10_kaiguangaiInstanceStruct *chartInstance)
{
  const mxArray *c10_st;
  const mxArray *c10_y = NULL;
  real_T c10_hoistedGlobal;
  const mxArray *c10_b_y = NULL;
  real_T c10_b_hoistedGlobal;
  const mxArray *c10_c_y = NULL;
  real_T c10_c_hoistedGlobal;
  const mxArray *c10_d_y = NULL;
  real_T c10_d_hoistedGlobal;
  const mxArray *c10_e_y = NULL;
  real_T c10_e_hoistedGlobal;
  const mxArray *c10_f_y = NULL;
  real_T c10_f_hoistedGlobal;
  const mxArray *c10_g_y = NULL;
  real_T c10_g_hoistedGlobal;
  const mxArray *c10_h_y = NULL;
  real_T c10_h_hoistedGlobal;
  const mxArray *c10_i_y = NULL;
  real_T c10_i_hoistedGlobal;
  const mxArray *c10_j_y = NULL;
  real_T c10_j_hoistedGlobal;
  const mxArray *c10_k_y = NULL;
  real_T c10_k_hoistedGlobal;
  const mxArray *c10_l_y = NULL;
  real_T c10_l_hoistedGlobal;
  const mxArray *c10_m_y = NULL;
  real_T c10_m_hoistedGlobal;
  const mxArray *c10_n_y = NULL;
  real_T c10_n_hoistedGlobal;
  const mxArray *c10_o_y = NULL;
  real_T c10_o_hoistedGlobal;
  const mxArray *c10_p_y = NULL;
  real_T c10_p_hoistedGlobal;
  const mxArray *c10_q_y = NULL;
  real_T c10_q_hoistedGlobal;
  const mxArray *c10_r_y = NULL;
  real_T c10_r_hoistedGlobal;
  const mxArray *c10_s_y = NULL;
  real_T c10_s_hoistedGlobal;
  const mxArray *c10_t_y = NULL;
  real_T c10_t_hoistedGlobal;
  const mxArray *c10_u_y = NULL;
  uint8_T c10_u_hoistedGlobal;
  const mxArray *c10_v_y = NULL;
  uint8_T c10_v_hoistedGlobal;
  const mxArray *c10_w_y = NULL;
  uint8_T c10_w_hoistedGlobal;
  const mxArray *c10_x_y = NULL;
  uint8_T c10_x_hoistedGlobal;
  const mxArray *c10_y_y = NULL;
  uint8_T c10_y_hoistedGlobal;
  const mxArray *c10_ab_y = NULL;
  uint8_T c10_ab_hoistedGlobal;
  const mxArray *c10_bb_y = NULL;
  uint8_T c10_bb_hoistedGlobal;
  const mxArray *c10_cb_y = NULL;
  uint8_T c10_cb_hoistedGlobal;
  const mxArray *c10_db_y = NULL;
  uint8_T c10_db_hoistedGlobal;
  const mxArray *c10_eb_y = NULL;
  uint8_T c10_eb_hoistedGlobal;
  const mxArray *c10_fb_y = NULL;
  uint8_T c10_fb_hoistedGlobal;
  const mxArray *c10_gb_y = NULL;
  uint8_T c10_gb_hoistedGlobal;
  const mxArray *c10_hb_y = NULL;
  uint8_T c10_hb_hoistedGlobal;
  const mxArray *c10_ib_y = NULL;
  uint8_T c10_ib_hoistedGlobal;
  const mxArray *c10_jb_y = NULL;
  uint8_T c10_jb_hoistedGlobal;
  const mxArray *c10_kb_y = NULL;
  uint8_T c10_kb_hoistedGlobal;
  const mxArray *c10_lb_y = NULL;
  uint8_T c10_lb_hoistedGlobal;
  const mxArray *c10_mb_y = NULL;
  uint8_T c10_mb_hoistedGlobal;
  const mxArray *c10_nb_y = NULL;
  uint8_T c10_nb_hoistedGlobal;
  const mxArray *c10_ob_y = NULL;
  uint8_T c10_ob_hoistedGlobal;
  const mxArray *c10_pb_y = NULL;
  const mxArray *c10_qb_y = NULL;
  c10_st = NULL;
  c10_st = NULL;
  c10_y = NULL;
  sf_mex_assign(&c10_y, sf_mex_createcellmatrix(41, 1), false);
  c10_hoistedGlobal = *chartInstance->c10_gghx;
  c10_b_y = NULL;
  sf_mex_assign(&c10_b_y, sf_mex_create("y", &c10_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c10_y, 0, c10_b_y);
  c10_b_hoistedGlobal = *chartInstance->c10_ggt;
  c10_c_y = NULL;
  sf_mex_assign(&c10_c_y, sf_mex_create("y", &c10_b_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c10_y, 1, c10_c_y);
  c10_c_hoistedGlobal = *chartInstance->c10_ggyichang;
  c10_d_y = NULL;
  sf_mex_assign(&c10_d_y, sf_mex_create("y", &c10_c_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c10_y, 2, c10_d_y);
  c10_d_hoistedGlobal = *chartInstance->c10_ggzhiling1;
  c10_e_y = NULL;
  sf_mex_assign(&c10_e_y, sf_mex_create("y", &c10_d_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c10_y, 3, c10_e_y);
  c10_e_hoistedGlobal = *chartInstance->c10_ggzhiling2;
  c10_f_y = NULL;
  sf_mex_assign(&c10_f_y, sf_mex_create("y", &c10_e_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c10_y, 4, c10_f_y);
  c10_f_hoistedGlobal = *chartInstance->c10_jst;
  c10_g_y = NULL;
  sf_mex_assign(&c10_g_y, sf_mex_create("y", &c10_f_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c10_y, 5, c10_g_y);
  c10_g_hoistedGlobal = *chartInstance->c10_jsyichang;
  c10_h_y = NULL;
  sf_mex_assign(&c10_h_y, sf_mex_create("y", &c10_g_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c10_y, 6, c10_h_y);
  c10_h_hoistedGlobal = *chartInstance->c10_kghx;
  c10_i_y = NULL;
  sf_mex_assign(&c10_i_y, sf_mex_create("y", &c10_h_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c10_y, 7, c10_i_y);
  c10_i_hoistedGlobal = *chartInstance->c10_kgt;
  c10_j_y = NULL;
  sf_mex_assign(&c10_j_y, sf_mex_create("y", &c10_i_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c10_y, 8, c10_j_y);
  c10_j_hoistedGlobal = *chartInstance->c10_kgyichang;
  c10_k_y = NULL;
  sf_mex_assign(&c10_k_y, sf_mex_create("y", &c10_j_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c10_y, 9, c10_k_y);
  c10_k_hoistedGlobal = *chartInstance->c10_kgzhiling1;
  c10_l_y = NULL;
  sf_mex_assign(&c10_l_y, sf_mex_create("y", &c10_k_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c10_y, 10, c10_l_y);
  c10_l_hoistedGlobal = *chartInstance->c10_kgzhiling2;
  c10_m_y = NULL;
  sf_mex_assign(&c10_m_y, sf_mex_create("y", &c10_l_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c10_y, 11, c10_m_y);
  c10_m_hoistedGlobal = *chartInstance->c10_sdt;
  c10_n_y = NULL;
  sf_mex_assign(&c10_n_y, sf_mex_create("y", &c10_m_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c10_y, 12, c10_n_y);
  c10_n_hoistedGlobal = *chartInstance->c10_sdyichang;
  c10_o_y = NULL;
  sf_mex_assign(&c10_o_y, sf_mex_create("y", &c10_n_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c10_y, 13, c10_o_y);
  c10_o_hoistedGlobal = *chartInstance->c10_skhx;
  c10_p_y = NULL;
  sf_mex_assign(&c10_p_y, sf_mex_create("y", &c10_o_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c10_y, 14, c10_p_y);
  c10_p_hoistedGlobal = *chartInstance->c10_skt;
  c10_q_y = NULL;
  sf_mex_assign(&c10_q_y, sf_mex_create("y", &c10_p_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c10_y, 15, c10_q_y);
  c10_q_hoistedGlobal = *chartInstance->c10_skyichang;
  c10_r_y = NULL;
  sf_mex_assign(&c10_r_y, sf_mex_create("y", &c10_q_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c10_y, 16, c10_r_y);
  c10_r_hoistedGlobal = *chartInstance->c10_yjhx;
  c10_s_y = NULL;
  sf_mex_assign(&c10_s_y, sf_mex_create("y", &c10_r_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c10_y, 17, c10_s_y);
  c10_s_hoistedGlobal = *chartInstance->c10_yjt;
  c10_t_y = NULL;
  sf_mex_assign(&c10_t_y, sf_mex_create("y", &c10_s_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c10_y, 18, c10_t_y);
  c10_t_hoistedGlobal = *chartInstance->c10_yjyichang;
  c10_u_y = NULL;
  sf_mex_assign(&c10_u_y, sf_mex_create("y", &c10_t_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c10_y, 19, c10_u_y);
  c10_u_hoistedGlobal = *chartInstance->c10_is_active_c10_kaiguangai;
  c10_v_y = NULL;
  sf_mex_assign(&c10_v_y, sf_mex_create("y", &c10_u_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c10_y, 20, c10_v_y);
  c10_v_hoistedGlobal = *chartInstance->c10_is_active_songkai;
  c10_w_y = NULL;
  sf_mex_assign(&c10_w_y, sf_mex_create("y", &c10_v_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c10_y, 21, c10_w_y);
  c10_w_hoistedGlobal = *chartInstance->c10_is_active_kaigai;
  c10_x_y = NULL;
  sf_mex_assign(&c10_x_y, sf_mex_create("y", &c10_w_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c10_y, 22, c10_x_y);
  c10_x_hoistedGlobal = *chartInstance->c10_is_active_suoding;
  c10_y_y = NULL;
  sf_mex_assign(&c10_y_y, sf_mex_create("y", &c10_x_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c10_y, 23, c10_y_y);
  c10_y_hoistedGlobal = *chartInstance->c10_is_active_jiesuo;
  c10_ab_y = NULL;
  sf_mex_assign(&c10_ab_y, sf_mex_create("y", &c10_y_hoistedGlobal, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c10_y, 24, c10_ab_y);
  c10_ab_hoistedGlobal = *chartInstance->c10_is_active_guangai;
  c10_bb_y = NULL;
  sf_mex_assign(&c10_bb_y, sf_mex_create("y", &c10_ab_hoistedGlobal, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c10_y, 25, c10_bb_y);
  c10_bb_hoistedGlobal = *chartInstance->c10_is_active_yajin;
  c10_cb_y = NULL;
  sf_mex_assign(&c10_cb_y, sf_mex_create("y", &c10_bb_hoistedGlobal, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c10_y, 26, c10_cb_y);
  c10_cb_hoistedGlobal = *chartInstance->c10_is_c10_kaiguangai;
  c10_db_y = NULL;
  sf_mex_assign(&c10_db_y, sf_mex_create("y", &c10_cb_hoistedGlobal, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c10_y, 27, c10_db_y);
  c10_db_hoistedGlobal = *chartInstance->c10_is_songkai;
  c10_eb_y = NULL;
  sf_mex_assign(&c10_eb_y, sf_mex_create("y", &c10_db_hoistedGlobal, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c10_y, 28, c10_eb_y);
  c10_eb_hoistedGlobal = *chartInstance->c10_is_kaigai;
  c10_fb_y = NULL;
  sf_mex_assign(&c10_fb_y, sf_mex_create("y", &c10_eb_hoistedGlobal, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c10_y, 29, c10_fb_y);
  c10_fb_hoistedGlobal = *chartInstance->c10_is_suoding;
  c10_gb_y = NULL;
  sf_mex_assign(&c10_gb_y, sf_mex_create("y", &c10_fb_hoistedGlobal, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c10_y, 30, c10_gb_y);
  c10_gb_hoistedGlobal = *chartInstance->c10_is_jiesuo;
  c10_hb_y = NULL;
  sf_mex_assign(&c10_hb_y, sf_mex_create("y", &c10_gb_hoistedGlobal, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c10_y, 31, c10_hb_y);
  c10_hb_hoistedGlobal = *chartInstance->c10_is_guangai;
  c10_ib_y = NULL;
  sf_mex_assign(&c10_ib_y, sf_mex_create("y", &c10_hb_hoistedGlobal, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c10_y, 32, c10_ib_y);
  c10_ib_hoistedGlobal = *chartInstance->c10_is_yajin;
  c10_jb_y = NULL;
  sf_mex_assign(&c10_jb_y, sf_mex_create("y", &c10_ib_hoistedGlobal, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c10_y, 33, c10_jb_y);
  c10_jb_hoistedGlobal = *chartInstance->c10_temporalCounter_i1;
  c10_kb_y = NULL;
  sf_mex_assign(&c10_kb_y, sf_mex_create("y", &c10_jb_hoistedGlobal, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c10_y, 34, c10_kb_y);
  c10_kb_hoistedGlobal = *chartInstance->c10_temporalCounter_i2;
  c10_lb_y = NULL;
  sf_mex_assign(&c10_lb_y, sf_mex_create("y", &c10_kb_hoistedGlobal, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c10_y, 35, c10_lb_y);
  c10_lb_hoistedGlobal = *chartInstance->c10_temporalCounter_i4;
  c10_mb_y = NULL;
  sf_mex_assign(&c10_mb_y, sf_mex_create("y", &c10_lb_hoistedGlobal, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c10_y, 36, c10_mb_y);
  c10_mb_hoistedGlobal = *chartInstance->c10_temporalCounter_i3;
  c10_nb_y = NULL;
  sf_mex_assign(&c10_nb_y, sf_mex_create("y", &c10_mb_hoistedGlobal, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c10_y, 37, c10_nb_y);
  c10_nb_hoistedGlobal = *chartInstance->c10_temporalCounter_i6;
  c10_ob_y = NULL;
  sf_mex_assign(&c10_ob_y, sf_mex_create("y", &c10_nb_hoistedGlobal, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c10_y, 38, c10_ob_y);
  c10_ob_hoistedGlobal = *chartInstance->c10_temporalCounter_i5;
  c10_pb_y = NULL;
  sf_mex_assign(&c10_pb_y, sf_mex_create("y", &c10_ob_hoistedGlobal, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c10_y, 39, c10_pb_y);
  c10_qb_y = NULL;
  sf_mex_assign(&c10_qb_y, sf_mex_create("y",
    chartInstance->c10_dataWrittenToVector, 11, 0U, 1U, 0U, 1, 20), false);
  sf_mex_setcell(c10_y, 40, c10_qb_y);
  sf_mex_assign(&c10_st, c10_y, false);
  return c10_st;
}

static void set_sim_state_c10_kaiguangai(SFc10_kaiguangaiInstanceStruct
  *chartInstance, const mxArray *c10_st)
{
  const mxArray *c10_u;
  boolean_T c10_bv0[20];
  int32_T c10_i0;
  c10_u = sf_mex_dup(c10_st);
  *chartInstance->c10_gghx = c10_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("gghx", c10_u, 0)), "gghx");
  *chartInstance->c10_ggt = c10_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("ggt", c10_u, 1)), "ggt");
  *chartInstance->c10_ggyichang = c10_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("ggyichang", c10_u, 2)), "ggyichang");
  *chartInstance->c10_ggzhiling1 = c10_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("ggzhiling1", c10_u, 3)), "ggzhiling1");
  *chartInstance->c10_ggzhiling2 = c10_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("ggzhiling2", c10_u, 4)), "ggzhiling2");
  *chartInstance->c10_jst = c10_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("jst", c10_u, 5)), "jst");
  *chartInstance->c10_jsyichang = c10_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("jsyichang", c10_u, 6)), "jsyichang");
  *chartInstance->c10_kghx = c10_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("kghx", c10_u, 7)), "kghx");
  *chartInstance->c10_kgt = c10_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("kgt", c10_u, 8)), "kgt");
  *chartInstance->c10_kgyichang = c10_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("kgyichang", c10_u, 9)), "kgyichang");
  *chartInstance->c10_kgzhiling1 = c10_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("kgzhiling1", c10_u, 10)), "kgzhiling1");
  *chartInstance->c10_kgzhiling2 = c10_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("kgzhiling2", c10_u, 11)), "kgzhiling2");
  *chartInstance->c10_sdt = c10_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("sdt", c10_u, 12)), "sdt");
  *chartInstance->c10_sdyichang = c10_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("sdyichang", c10_u, 13)), "sdyichang");
  *chartInstance->c10_skhx = c10_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("skhx", c10_u, 14)), "skhx");
  *chartInstance->c10_skt = c10_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("skt", c10_u, 15)), "skt");
  *chartInstance->c10_skyichang = c10_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("skyichang", c10_u, 16)), "skyichang");
  *chartInstance->c10_yjhx = c10_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("yjhx", c10_u, 17)), "yjhx");
  *chartInstance->c10_yjt = c10_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("yjt", c10_u, 18)), "yjt");
  *chartInstance->c10_yjyichang = c10_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("yjyichang", c10_u, 19)), "yjyichang");
  *chartInstance->c10_is_active_c10_kaiguangai = c10_e_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell("is_active_c10_kaiguangai", c10_u,
       20)), "is_active_c10_kaiguangai");
  *chartInstance->c10_is_active_songkai = c10_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_active_songkai", c10_u, 21)),
    "is_active_songkai");
  *chartInstance->c10_is_active_kaigai = c10_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_active_kaigai", c10_u, 22)),
    "is_active_kaigai");
  *chartInstance->c10_is_active_suoding = c10_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_active_suoding", c10_u, 23)),
    "is_active_suoding");
  *chartInstance->c10_is_active_jiesuo = c10_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_active_jiesuo", c10_u, 24)),
    "is_active_jiesuo");
  *chartInstance->c10_is_active_guangai = c10_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_active_guangai", c10_u, 25)),
    "is_active_guangai");
  *chartInstance->c10_is_active_yajin = c10_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_active_yajin", c10_u, 26)), "is_active_yajin");
  *chartInstance->c10_is_c10_kaiguangai = c10_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_c10_kaiguangai", c10_u, 27)),
    "is_c10_kaiguangai");
  *chartInstance->c10_is_songkai = c10_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_songkai", c10_u, 28)), "is_songkai");
  *chartInstance->c10_is_kaigai = c10_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_kaigai", c10_u, 29)), "is_kaigai");
  *chartInstance->c10_is_suoding = c10_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_suoding", c10_u, 30)), "is_suoding");
  *chartInstance->c10_is_jiesuo = c10_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_jiesuo", c10_u, 31)), "is_jiesuo");
  *chartInstance->c10_is_guangai = c10_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_guangai", c10_u, 32)), "is_guangai");
  *chartInstance->c10_is_yajin = c10_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_yajin", c10_u, 33)), "is_yajin");
  *chartInstance->c10_temporalCounter_i1 = c10_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("temporalCounter_i1", c10_u, 34)),
    "temporalCounter_i1");
  *chartInstance->c10_temporalCounter_i2 = c10_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("temporalCounter_i2", c10_u, 35)),
    "temporalCounter_i2");
  *chartInstance->c10_temporalCounter_i4 = c10_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("temporalCounter_i4", c10_u, 36)),
    "temporalCounter_i4");
  *chartInstance->c10_temporalCounter_i3 = c10_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("temporalCounter_i3", c10_u, 37)),
    "temporalCounter_i3");
  *chartInstance->c10_temporalCounter_i6 = c10_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("temporalCounter_i6", c10_u, 38)),
    "temporalCounter_i6");
  *chartInstance->c10_temporalCounter_i5 = c10_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("temporalCounter_i5", c10_u, 39)),
    "temporalCounter_i5");
  c10_g_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(
    "dataWrittenToVector", c10_u, 40)), "dataWrittenToVector", c10_bv0);
  for (c10_i0 = 0; c10_i0 < 20; c10_i0++) {
    chartInstance->c10_dataWrittenToVector[c10_i0] = c10_bv0[c10_i0];
  }

  sf_mex_assign(&chartInstance->c10_setSimStateSideEffectsInfo,
                c10_i_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(
    "setSimStateSideEffectsInfo", c10_u, 41)), "setSimStateSideEffectsInfo"),
                true);
  sf_mex_destroy(&c10_u);
  chartInstance->c10_doSetSimStateSideEffects = 1U;
  c10_update_debugger_state_c10_kaiguangai(chartInstance);
  sf_mex_destroy(&c10_st);
}

static void c10_set_sim_state_side_effects_c10_kaiguangai
  (SFc10_kaiguangaiInstanceStruct *chartInstance)
{
  if (chartInstance->c10_doSetSimStateSideEffects != 0) {
    if ((*chartInstance->c10_is_songkai == c10_IN_t) && (sf_mex_sub
         (chartInstance->c10_setSimStateSideEffectsInfo,
          "setSimStateSideEffectsInfo", 1, 8) == 0.0)) {
      *chartInstance->c10_temporalCounter_i1 = 0U;
    }

    if ((*chartInstance->c10_is_kaigai == c10_IN_t) && (sf_mex_sub
         (chartInstance->c10_setSimStateSideEffectsInfo,
          "setSimStateSideEffectsInfo", 1, 13) == 0.0)) {
      *chartInstance->c10_temporalCounter_i2 = 0U;
    }

    if ((*chartInstance->c10_is_suoding == c10_IN_t) && (sf_mex_sub
         (chartInstance->c10_setSimStateSideEffectsInfo,
          "setSimStateSideEffectsInfo", 1, 19) == 0.0)) {
      *chartInstance->c10_temporalCounter_i4 = 0U;
    }

    if ((*chartInstance->c10_is_jiesuo == c10_IN_t) && (sf_mex_sub
         (chartInstance->c10_setSimStateSideEffectsInfo,
          "setSimStateSideEffectsInfo", 1, 25) == 0.0)) {
      *chartInstance->c10_temporalCounter_i3 = 0U;
    }

    if ((*chartInstance->c10_is_guangai == c10_IN_t) && (sf_mex_sub
         (chartInstance->c10_setSimStateSideEffectsInfo,
          "setSimStateSideEffectsInfo", 1, 31) == 0.0)) {
      *chartInstance->c10_temporalCounter_i6 = 0U;
    }

    if ((*chartInstance->c10_is_yajin == c10_IN_t) && (sf_mex_sub
         (chartInstance->c10_setSimStateSideEffectsInfo,
          "setSimStateSideEffectsInfo", 1, 37) == 0.0)) {
      *chartInstance->c10_temporalCounter_i5 = 0U;
    }

    chartInstance->c10_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c10_kaiguangai(SFc10_kaiguangaiInstanceStruct
  *chartInstance)
{
  sf_mex_destroy(&chartInstance->c10_setSimStateSideEffectsInfo);
}

static void sf_gateway_c10_kaiguangai(SFc10_kaiguangaiInstanceStruct
  *chartInstance)
{
  c10_set_sim_state_side_effects_c10_kaiguangai(chartInstance);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 9U, *chartInstance->c10_sfEvent);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c10_jieshu, 15U, 1U, 0U,
                        *chartInstance->c10_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c10_b_yajin, 14U, 1U, 0U,
                        *chartInstance->c10_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c10_b_guangai, 13U, 1U, 0U,
                        *chartInstance->c10_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c10_b_jiesuo, 12U, 1U, 0U,
                        *chartInstance->c10_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c10_b_suoding, 11U, 1U, 0U,
                        *chartInstance->c10_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c10_b_kaigai, 10U, 1U, 0U,
                        *chartInstance->c10_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c10_b_songkai, 9U, 1U, 0U,
                        *chartInstance->c10_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c10_skdw, 8U, 1U, 0U,
                        *chartInstance->c10_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c10_yjdw, 7U, 1U, 0U,
                        *chartInstance->c10_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c10_jsdw, 6U, 1U, 0U,
                        *chartInstance->c10_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c10_sddw, 5U, 1U, 0U,
                        *chartInstance->c10_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c10_ggdw2, 4U, 1U, 0U,
                        *chartInstance->c10_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c10_ggdw1, 3U, 1U, 0U,
                        *chartInstance->c10_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c10_kgdw2, 2U, 1U, 0U,
                        *chartInstance->c10_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c10_kgdw1, 1U, 1U, 0U,
                        *chartInstance->c10_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c10_start, 0U, 1U, 0U,
                        *chartInstance->c10_sfEvent, false);
  *chartInstance->c10_sfEvent = CALL_EVENT;
  if (*chartInstance->c10_temporalCounter_i1 < 3U) {
    (*chartInstance->c10_temporalCounter_i1)++;
  }

  if (*chartInstance->c10_temporalCounter_i2 < 3U) {
    (*chartInstance->c10_temporalCounter_i2)++;
  }

  if (*chartInstance->c10_temporalCounter_i3 < 3U) {
    (*chartInstance->c10_temporalCounter_i3)++;
  }

  if (*chartInstance->c10_temporalCounter_i4 < 3U) {
    (*chartInstance->c10_temporalCounter_i4)++;
  }

  if (*chartInstance->c10_temporalCounter_i5 < 3U) {
    (*chartInstance->c10_temporalCounter_i5)++;
  }

  if (*chartInstance->c10_temporalCounter_i6 < 3U) {
    (*chartInstance->c10_temporalCounter_i6)++;
  }

  c10_chartstep_c10_kaiguangai(chartInstance);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_kaiguangaiMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void mdl_start_c10_kaiguangai(SFc10_kaiguangaiInstanceStruct
  *chartInstance)
{
  c10_init_sf_message_store_memory(chartInstance);
}

static void c10_chartstep_c10_kaiguangai(SFc10_kaiguangaiInstanceStruct
  *chartInstance)
{
  uint32_T c10_debug_family_var_map[3];
  real_T c10_nargin = 0.0;
  real_T c10_nargout = 1.0;
  boolean_T c10_out;
  uint32_T c10_b_debug_family_var_map[2];
  real_T c10_b_nargin = 0.0;
  real_T c10_b_nargout = 0.0;
  real_T c10_c_nargin = 0.0;
  real_T c10_c_nargout = 0.0;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 9U, *chartInstance->c10_sfEvent);
  if (*chartInstance->c10_is_active_c10_kaiguangai == 0U) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 9U, *chartInstance->c10_sfEvent);
    *chartInstance->c10_is_active_c10_kaiguangai = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 9U, *chartInstance->c10_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 36U, *chartInstance->c10_sfEvent);
    *chartInstance->c10_is_c10_kaiguangai = c10_IN_off;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c10_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_debug_family_names,
      c10_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_b_nargin, 0U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_b_nargout, 1U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    *chartInstance->c10_skhx = 0.0;
    chartInstance->c10_dataWrittenToVector[0U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c10_skhx, 16U, 4U, 0U,
                          *chartInstance->c10_sfEvent, false);
    *chartInstance->c10_kghx = 0.0;
    chartInstance->c10_dataWrittenToVector[1U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c10_kghx, 17U, 4U, 0U,
                          *chartInstance->c10_sfEvent, false);
    *chartInstance->c10_gghx = 0.0;
    chartInstance->c10_dataWrittenToVector[3U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c10_gghx, 19U, 4U, 0U,
                          *chartInstance->c10_sfEvent, false);
    *chartInstance->c10_yjhx = 0.0;
    chartInstance->c10_dataWrittenToVector[2U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c10_yjhx, 18U, 4U, 0U,
                          *chartInstance->c10_sfEvent, false);
    *chartInstance->c10_kgzhiling1 = 0.0;
    chartInstance->c10_dataWrittenToVector[4U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c10_kgzhiling1, 20U, 4U, 0U,
                          *chartInstance->c10_sfEvent, false);
    *chartInstance->c10_kgzhiling2 = 0.0;
    chartInstance->c10_dataWrittenToVector[5U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c10_kgzhiling2, 21U, 4U, 0U,
                          *chartInstance->c10_sfEvent, false);
    *chartInstance->c10_ggzhiling1 = 0.0;
    chartInstance->c10_dataWrittenToVector[6U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c10_ggzhiling1, 22U, 4U, 0U,
                          *chartInstance->c10_sfEvent, false);
    *chartInstance->c10_ggzhiling2 = 0.0;
    chartInstance->c10_dataWrittenToVector[7U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c10_ggzhiling2, 23U, 4U, 0U,
                          *chartInstance->c10_sfEvent, false);
    *chartInstance->c10_skyichang = 0.0;
    chartInstance->c10_dataWrittenToVector[14U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c10_skyichang, 30U, 4U, 0U,
                          *chartInstance->c10_sfEvent, false);
    *chartInstance->c10_kgyichang = 0.0;
    chartInstance->c10_dataWrittenToVector[15U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c10_kgyichang, 31U, 4U, 0U,
                          *chartInstance->c10_sfEvent, false);
    *chartInstance->c10_sdyichang = 0.0;
    chartInstance->c10_dataWrittenToVector[16U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c10_sdyichang, 32U, 4U, 0U,
                          *chartInstance->c10_sfEvent, false);
    *chartInstance->c10_jsyichang = 0.0;
    chartInstance->c10_dataWrittenToVector[17U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c10_jsyichang, 33U, 4U, 0U,
                          *chartInstance->c10_sfEvent, false);
    *chartInstance->c10_ggyichang = 0.0;
    chartInstance->c10_dataWrittenToVector[18U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c10_ggyichang, 34U, 4U, 0U,
                          *chartInstance->c10_sfEvent, false);
    *chartInstance->c10_yjyichang = 0.0;
    chartInstance->c10_dataWrittenToVector[19U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c10_yjyichang, 35U, 4U, 0U,
                          *chartInstance->c10_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
  } else {
    switch (*chartInstance->c10_is_c10_kaiguangai) {
     case c10_IN_off:
      CV_CHART_EVAL(9, 0, 1);
      c10_off(chartInstance);
      break;

     case c10_IN_off1:
      CV_CHART_EVAL(9, 0, 2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                   *chartInstance->c10_sfEvent);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, *chartInstance->c10_sfEvent);
      break;

     case c10_IN_shoudong:
      CV_CHART_EVAL(9, 0, 3);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 38U,
                   *chartInstance->c10_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_mb_debug_family_names,
        c10_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_nargin, 0U, c10_sf_marshallOut,
        c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_nargout, 1U, c10_sf_marshallOut,
        c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_out, 2U, c10_b_sf_marshallOut,
        c10_b_sf_marshallIn);
      c10_out = CV_EML_IF(38, 0, 0, CV_RELATIONAL_EVAL(5U, 38U, 0,
        *chartInstance->c10_jieshu, 1.0, -1, 0U, *chartInstance->c10_jieshu ==
        1.0));
      _SFD_SYMBOL_SCOPE_POP();
      if (c10_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 38U, *chartInstance->c10_sfEvent);
        c10_exit_internal_shoudong(chartInstance);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c10_sfEvent);
        *chartInstance->c10_is_c10_kaiguangai = c10_IN_off1;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c10_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_e_debug_family_names,
          c10_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_c_nargin, 0U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_c_nargout, 1U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        *chartInstance->c10_skhx = 0.0;
        chartInstance->c10_dataWrittenToVector[0U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c10_skhx, 16U, 4U, 1U,
                              *chartInstance->c10_sfEvent, false);
        *chartInstance->c10_kghx = 0.0;
        chartInstance->c10_dataWrittenToVector[1U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c10_kghx, 17U, 4U, 1U,
                              *chartInstance->c10_sfEvent, false);
        *chartInstance->c10_gghx = 0.0;
        chartInstance->c10_dataWrittenToVector[3U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c10_gghx, 19U, 4U, 1U,
                              *chartInstance->c10_sfEvent, false);
        *chartInstance->c10_yjhx = 0.0;
        chartInstance->c10_dataWrittenToVector[2U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c10_yjhx, 18U, 4U, 1U,
                              *chartInstance->c10_sfEvent, false);
        *chartInstance->c10_skt = 0.0;
        chartInstance->c10_dataWrittenToVector[8U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c10_skt, 24U, 4U, 1U,
                              *chartInstance->c10_sfEvent, false);
        *chartInstance->c10_kgt = 0.0;
        chartInstance->c10_dataWrittenToVector[9U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c10_kgt, 25U, 4U, 1U,
                              *chartInstance->c10_sfEvent, false);
        *chartInstance->c10_sdt = 0.0;
        chartInstance->c10_dataWrittenToVector[10U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c10_sdt, 26U, 4U, 1U,
                              *chartInstance->c10_sfEvent, false);
        *chartInstance->c10_jst = 0.0;
        chartInstance->c10_dataWrittenToVector[11U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c10_jst, 27U, 4U, 1U,
                              *chartInstance->c10_sfEvent, false);
        *chartInstance->c10_ggt = 0.0;
        chartInstance->c10_dataWrittenToVector[12U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c10_ggt, 28U, 4U, 1U,
                              *chartInstance->c10_sfEvent, false);
        *chartInstance->c10_yjt = 0.0;
        chartInstance->c10_dataWrittenToVector[13U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c10_yjt, 29U, 4U, 1U,
                              *chartInstance->c10_sfEvent, false);
        *chartInstance->c10_skyichang = 0.0;
        chartInstance->c10_dataWrittenToVector[14U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c10_skyichang, 30U, 4U, 1U,
                              *chartInstance->c10_sfEvent, false);
        *chartInstance->c10_kgyichang = 0.0;
        chartInstance->c10_dataWrittenToVector[15U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c10_kgyichang, 31U, 4U, 1U,
                              *chartInstance->c10_sfEvent, false);
        *chartInstance->c10_sdyichang = 0.0;
        chartInstance->c10_dataWrittenToVector[16U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c10_sdyichang, 32U, 4U, 1U,
                              *chartInstance->c10_sfEvent, false);
        *chartInstance->c10_jsyichang = 0.0;
        chartInstance->c10_dataWrittenToVector[17U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c10_jsyichang, 33U, 4U, 1U,
                              *chartInstance->c10_sfEvent, false);
        *chartInstance->c10_ggyichang = 0.0;
        chartInstance->c10_dataWrittenToVector[18U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c10_ggyichang, 34U, 4U, 1U,
                              *chartInstance->c10_sfEvent, false);
        *chartInstance->c10_yjyichang = 0.0;
        chartInstance->c10_dataWrittenToVector[19U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c10_yjyichang, 35U, 4U, 1U,
                              *chartInstance->c10_sfEvent, false);
        *chartInstance->c10_kgzhiling1 = 0.0;
        chartInstance->c10_dataWrittenToVector[4U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c10_kgzhiling1, 20U, 4U, 1U,
                              *chartInstance->c10_sfEvent, false);
        *chartInstance->c10_kgzhiling2 = 0.0;
        chartInstance->c10_dataWrittenToVector[5U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c10_kgzhiling2, 21U, 4U, 1U,
                              *chartInstance->c10_sfEvent, false);
        *chartInstance->c10_ggzhiling1 = 0.0;
        chartInstance->c10_dataWrittenToVector[6U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c10_ggzhiling1, 22U, 4U, 1U,
                              *chartInstance->c10_sfEvent, false);
        *chartInstance->c10_ggzhiling2 = 0.0;
        chartInstance->c10_dataWrittenToVector[7U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c10_ggzhiling2, 23U, 4U, 1U,
                              *chartInstance->c10_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U,
                     *chartInstance->c10_sfEvent);
        c10_songkai(chartInstance);
        c10_kaigai(chartInstance);
        c10_suoding(chartInstance);
        c10_jiesuo(chartInstance);
        c10_guangai(chartInstance);
        c10_yajin(chartInstance);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, *chartInstance->c10_sfEvent);
      break;

     default:
      CV_CHART_EVAL(9, 0, 0);

      /* Unreachable state, for coverage only */
      *chartInstance->c10_is_c10_kaiguangai = c10_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c10_sfEvent);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 9U, *chartInstance->c10_sfEvent);
}

static void initSimStructsc10_kaiguangai(SFc10_kaiguangaiInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c10_off(SFc10_kaiguangaiInstanceStruct *chartInstance)
{
  uint32_T c10_debug_family_var_map[3];
  real_T c10_nargin = 0.0;
  real_T c10_nargout = 1.0;
  boolean_T c10_out;
  uint32_T c10_b_debug_family_var_map[2];
  real_T c10_b_nargin = 0.0;
  real_T c10_b_nargout = 0.0;
  real_T c10_c_nargin = 0.0;
  real_T c10_c_nargout = 0.0;
  real_T c10_d_nargin = 0.0;
  real_T c10_d_nargout = 0.0;
  real_T c10_e_nargin = 0.0;
  real_T c10_e_nargout = 0.0;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 37U,
               *chartInstance->c10_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_yc_debug_family_names,
    c10_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_nargin, 0U, c10_sf_marshallOut,
    c10_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_nargout, 1U, c10_sf_marshallOut,
    c10_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_out, 2U, c10_b_sf_marshallOut,
    c10_b_sf_marshallIn);
  if (CV_EML_COND(37, 0, 0, CV_RELATIONAL_EVAL(5U, 37U, 0,
        *chartInstance->c10_start, 1.0, -1, 0U, *chartInstance->c10_start == 1.0))
      && CV_EML_COND(37, 0, 1, CV_RELATIONAL_EVAL(5U, 37U, 1,
        *chartInstance->c10_jieshu, 0.0, -1, 0U, *chartInstance->c10_jieshu ==
        0.0))) {
    CV_EML_MCDC(37, 0, 0, true);
    CV_EML_IF(37, 0, 0, true);
    c10_out = true;
  } else {
    CV_EML_MCDC(37, 0, 0, false);
    CV_EML_IF(37, 0, 0, false);
    c10_out = false;
  }

  _SFD_SYMBOL_SCOPE_POP();
  if (c10_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 37U, *chartInstance->c10_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c10_sfEvent);
    *chartInstance->c10_is_c10_kaiguangai = c10_IN_shoudong;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c10_sfEvent);
    *chartInstance->c10_is_active_songkai = 1U;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 21U, *chartInstance->c10_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, *chartInstance->c10_sfEvent);
    *chartInstance->c10_is_songkai = c10_IN_off;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 22U, *chartInstance->c10_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_b_debug_family_names,
      c10_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_b_nargin, 0U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_b_nargout, 1U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    *chartInstance->c10_skhx = 0.0;
    chartInstance->c10_dataWrittenToVector[0U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c10_skhx, 16U, 4U, 22U,
                          *chartInstance->c10_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
    *chartInstance->c10_is_active_kaigai = 1U;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 15U, *chartInstance->c10_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, *chartInstance->c10_sfEvent);
    *chartInstance->c10_is_kaigai = c10_IN_off;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 16U, *chartInstance->c10_sfEvent);
    c10_enter_atomic_off(chartInstance);
    *chartInstance->c10_is_active_suoding = 1U;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 26U, *chartInstance->c10_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 12U, *chartInstance->c10_sfEvent);
    *chartInstance->c10_is_suoding = c10_IN_off;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 27U, *chartInstance->c10_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_q_debug_family_names,
      c10_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_c_nargin, 0U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_c_nargout, 1U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    *chartInstance->c10_yjhx = 0.0;
    chartInstance->c10_dataWrittenToVector[2U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c10_yjhx, 18U, 4U, 27U,
                          *chartInstance->c10_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
    *chartInstance->c10_is_active_jiesuo = 1U;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U, *chartInstance->c10_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 18U, *chartInstance->c10_sfEvent);
    *chartInstance->c10_is_jiesuo = c10_IN_off;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, *chartInstance->c10_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_l_debug_family_names,
      c10_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_d_nargin, 0U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_d_nargout, 1U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    *chartInstance->c10_skhx = 0.0;
    chartInstance->c10_dataWrittenToVector[0U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c10_skhx, 16U, 4U, 10U,
                          *chartInstance->c10_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
    *chartInstance->c10_is_active_guangai = 1U;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c10_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 24U, *chartInstance->c10_sfEvent);
    *chartInstance->c10_is_guangai = c10_IN_off;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c10_sfEvent);
    c10_b_enter_atomic_off(chartInstance);
    *chartInstance->c10_is_active_yajin = 1U;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 32U, *chartInstance->c10_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 30U, *chartInstance->c10_sfEvent);
    *chartInstance->c10_is_yajin = c10_IN_off;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 33U, *chartInstance->c10_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_v_debug_family_names,
      c10_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_e_nargin, 0U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_e_nargout, 1U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    *chartInstance->c10_yjhx = 0.0;
    chartInstance->c10_dataWrittenToVector[2U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c10_yjhx, 18U, 4U, 33U,
                          *chartInstance->c10_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
  } else {
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U,
                 *chartInstance->c10_sfEvent);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, *chartInstance->c10_sfEvent);
}

static void c10_exit_internal_shoudong(SFc10_kaiguangaiInstanceStruct
  *chartInstance)
{
  switch (*chartInstance->c10_is_yajin) {
   case c10_IN_off:
    CV_STATE_EVAL(32, 1, 1);
    *chartInstance->c10_is_yajin = c10_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 33U, *chartInstance->c10_sfEvent);
    break;

   case c10_IN_on:
    CV_STATE_EVAL(32, 1, 2);
    *chartInstance->c10_is_yajin = c10_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 34U, *chartInstance->c10_sfEvent);
    break;

   case c10_IN_t:
    CV_STATE_EVAL(32, 1, 3);
    *chartInstance->c10_is_yajin = c10_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 35U, *chartInstance->c10_sfEvent);
    break;

   case c10_IN_t2:
    CV_STATE_EVAL(32, 1, 4);
    *chartInstance->c10_is_yajin = c10_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 36U, *chartInstance->c10_sfEvent);
    break;

   case c10_IN_t3:
    CV_STATE_EVAL(32, 1, 5);
    *chartInstance->c10_is_yajin = c10_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 37U, *chartInstance->c10_sfEvent);
    break;

   default:
    CV_STATE_EVAL(32, 1, 0);
    *chartInstance->c10_is_yajin = c10_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 33U, *chartInstance->c10_sfEvent);
    break;
  }

  *chartInstance->c10_is_active_yajin = 0U;
  _SFD_CS_CALL(STATE_INACTIVE_TAG, 32U, *chartInstance->c10_sfEvent);
  switch (*chartInstance->c10_is_guangai) {
   case c10_IN_off:
    CV_STATE_EVAL(3, 1, 1);
    *chartInstance->c10_is_guangai = c10_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c10_sfEvent);
    break;

   case c10_IN_on:
    CV_STATE_EVAL(3, 1, 2);
    *chartInstance->c10_is_guangai = c10_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c10_sfEvent);
    break;

   case c10_IN_t:
    CV_STATE_EVAL(3, 1, 3);
    *chartInstance->c10_is_guangai = c10_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c10_sfEvent);
    break;

   case c10_IN_t1:
    CV_STATE_EVAL(3, 1, 4);
    *chartInstance->c10_is_guangai = c10_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c10_sfEvent);
    break;

   case c10_b_IN_t2:
    CV_STATE_EVAL(3, 1, 5);
    *chartInstance->c10_is_guangai = c10_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c10_sfEvent);
    break;

   default:
    CV_STATE_EVAL(3, 1, 0);
    *chartInstance->c10_is_guangai = c10_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c10_sfEvent);
    break;
  }

  *chartInstance->c10_is_active_guangai = 0U;
  _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c10_sfEvent);
  switch (*chartInstance->c10_is_jiesuo) {
   case c10_IN_off:
    CV_STATE_EVAL(9, 1, 1);
    *chartInstance->c10_is_jiesuo = c10_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c10_sfEvent);
    break;

   case c10_IN_on:
    CV_STATE_EVAL(9, 1, 2);
    *chartInstance->c10_is_jiesuo = c10_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 11U, *chartInstance->c10_sfEvent);
    break;

   case c10_IN_t:
    CV_STATE_EVAL(9, 1, 3);
    *chartInstance->c10_is_jiesuo = c10_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 12U, *chartInstance->c10_sfEvent);
    break;

   case c10_IN_t1:
    CV_STATE_EVAL(9, 1, 4);
    *chartInstance->c10_is_jiesuo = c10_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 13U, *chartInstance->c10_sfEvent);
    break;

   case c10_b_IN_t2:
    CV_STATE_EVAL(9, 1, 5);
    *chartInstance->c10_is_jiesuo = c10_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 14U, *chartInstance->c10_sfEvent);
    break;

   default:
    CV_STATE_EVAL(9, 1, 0);
    *chartInstance->c10_is_jiesuo = c10_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c10_sfEvent);
    break;
  }

  *chartInstance->c10_is_active_jiesuo = 0U;
  _SFD_CS_CALL(STATE_INACTIVE_TAG, 9U, *chartInstance->c10_sfEvent);
  switch (*chartInstance->c10_is_suoding) {
   case c10_IN_off:
    CV_STATE_EVAL(26, 1, 1);
    *chartInstance->c10_is_suoding = c10_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 27U, *chartInstance->c10_sfEvent);
    break;

   case c10_IN_on:
    CV_STATE_EVAL(26, 1, 2);
    *chartInstance->c10_is_suoding = c10_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 28U, *chartInstance->c10_sfEvent);
    break;

   case c10_IN_t:
    CV_STATE_EVAL(26, 1, 3);
    *chartInstance->c10_is_suoding = c10_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 29U, *chartInstance->c10_sfEvent);
    break;

   case c10_IN_t1:
    CV_STATE_EVAL(26, 1, 4);
    *chartInstance->c10_is_suoding = c10_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 30U, *chartInstance->c10_sfEvent);
    break;

   case c10_b_IN_t2:
    CV_STATE_EVAL(26, 1, 5);
    *chartInstance->c10_is_suoding = c10_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 31U, *chartInstance->c10_sfEvent);
    break;

   default:
    CV_STATE_EVAL(26, 1, 0);
    *chartInstance->c10_is_suoding = c10_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 27U, *chartInstance->c10_sfEvent);
    break;
  }

  *chartInstance->c10_is_active_suoding = 0U;
  _SFD_CS_CALL(STATE_INACTIVE_TAG, 26U, *chartInstance->c10_sfEvent);
  switch (*chartInstance->c10_is_kaigai) {
   case c10_IN_off:
    CV_STATE_EVAL(15, 1, 1);
    *chartInstance->c10_is_kaigai = c10_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 16U, *chartInstance->c10_sfEvent);
    break;

   case c10_IN_on:
    CV_STATE_EVAL(15, 1, 2);
    *chartInstance->c10_is_kaigai = c10_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 17U, *chartInstance->c10_sfEvent);
    break;

   case c10_IN_t:
    CV_STATE_EVAL(15, 1, 3);
    *chartInstance->c10_is_kaigai = c10_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 18U, *chartInstance->c10_sfEvent);
    break;

   case c10_IN_t1:
    CV_STATE_EVAL(15, 1, 4);
    *chartInstance->c10_is_kaigai = c10_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 19U, *chartInstance->c10_sfEvent);
    break;

   case c10_b_IN_t2:
    CV_STATE_EVAL(15, 1, 5);
    *chartInstance->c10_is_kaigai = c10_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 20U, *chartInstance->c10_sfEvent);
    break;

   default:
    CV_STATE_EVAL(15, 1, 0);
    *chartInstance->c10_is_kaigai = c10_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 16U, *chartInstance->c10_sfEvent);
    break;
  }

  *chartInstance->c10_is_active_kaigai = 0U;
  _SFD_CS_CALL(STATE_INACTIVE_TAG, 15U, *chartInstance->c10_sfEvent);
  switch (*chartInstance->c10_is_songkai) {
   case c10_IN_off:
    CV_STATE_EVAL(21, 1, 1);
    *chartInstance->c10_is_songkai = c10_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 22U, *chartInstance->c10_sfEvent);
    break;

   case c10_IN_on:
    CV_STATE_EVAL(21, 1, 2);
    *chartInstance->c10_is_songkai = c10_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 23U, *chartInstance->c10_sfEvent);
    break;

   case c10_IN_t:
    CV_STATE_EVAL(21, 1, 3);
    *chartInstance->c10_is_songkai = c10_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 24U, *chartInstance->c10_sfEvent);
    break;

   case c10_IN_t2:
    CV_STATE_EVAL(21, 1, 4);
    *chartInstance->c10_is_songkai = c10_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 25U, *chartInstance->c10_sfEvent);
    break;

   default:
    CV_STATE_EVAL(21, 1, 0);
    *chartInstance->c10_is_songkai = c10_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 22U, *chartInstance->c10_sfEvent);
    break;
  }

  *chartInstance->c10_is_active_songkai = 0U;
  _SFD_CS_CALL(STATE_INACTIVE_TAG, 21U, *chartInstance->c10_sfEvent);
}

static void c10_songkai(SFc10_kaiguangaiInstanceStruct *chartInstance)
{
  uint32_T c10_debug_family_var_map[3];
  real_T c10_nargin = 0.0;
  real_T c10_b_nargin = 0.0;
  real_T c10_nargout = 1.0;
  real_T c10_c_nargin = 0.0;
  real_T c10_b_nargout = 1.0;
  boolean_T c10_out;
  real_T c10_c_nargout = 1.0;
  boolean_T c10_b_out;
  boolean_T c10_c_out;
  real_T c10_d_nargin = 0.0;
  real_T c10_e_nargin = 0.0;
  real_T c10_d_nargout = 1.0;
  real_T c10_e_nargout = 1.0;
  boolean_T c10_d_out;
  boolean_T c10_e_out;
  uint32_T c10_b_debug_family_var_map[2];
  real_T c10_f_nargin = 0.0;
  real_T c10_f_nargout = 0.0;
  real_T c10_g_nargin = 0.0;
  real_T c10_h_nargin = 0.0;
  real_T c10_g_nargout = 0.0;
  real_T c10_h_nargout = 1.0;
  boolean_T c10_f_out;
  real_T c10_i_nargin = 0.0;
  real_T c10_j_nargin = 0.0;
  real_T c10_i_nargout = 0.0;
  real_T c10_j_nargout = 1.0;
  boolean_T c10_g_out;
  real_T c10_k_nargin = 0.0;
  real_T c10_k_nargout = 0.0;
  real_T c10_l_nargin = 0.0;
  real_T c10_l_nargout = 1.0;
  boolean_T c10_h_out;
  real_T c10_m_nargin = 0.0;
  real_T c10_m_nargout = 0.0;
  boolean_T guard1 = false;
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 21U, *chartInstance->c10_sfEvent);
  switch (*chartInstance->c10_is_songkai) {
   case c10_IN_off:
    CV_STATE_EVAL(21, 0, 1);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                 *chartInstance->c10_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_ib_debug_family_names,
      c10_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_nargin, 0U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_nargout, 1U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_out, 2U, c10_b_sf_marshallOut,
      c10_b_sf_marshallIn);
    if (CV_EML_COND(1, 0, 0, CV_RELATIONAL_EVAL(5U, 1U, 0,
          *chartInstance->c10_b_songkai, 1.0, -1, 0U,
          *chartInstance->c10_b_songkai == 1.0)) && CV_EML_COND(1, 0, 1,
         CV_RELATIONAL_EVAL(5U, 1U, 1, *chartInstance->c10_yjdw, 1.0, -1, 0U,
                            *chartInstance->c10_yjdw == 1.0)) && CV_EML_COND(1,
         0, 2, CV_RELATIONAL_EVAL(5U, 1U, 2, *chartInstance->c10_sddw, 1.0, -1,
          0U, *chartInstance->c10_sddw == 1.0))) {
      CV_EML_MCDC(1, 0, 0, true);
      CV_EML_IF(1, 0, 0, true);
      c10_out = true;
    } else {
      CV_EML_MCDC(1, 0, 0, false);
      CV_EML_IF(1, 0, 0, false);
      c10_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c10_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, *chartInstance->c10_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 22U, *chartInstance->c10_sfEvent);
      *chartInstance->c10_is_songkai = c10_IN_on;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 23U, *chartInstance->c10_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_c_debug_family_names,
        c10_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_g_nargin, 0U, c10_sf_marshallOut,
        c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_g_nargout, 1U,
        c10_sf_marshallOut, c10_sf_marshallIn);
      *chartInstance->c10_skhx = 1.0;
      chartInstance->c10_dataWrittenToVector[0U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c10_skhx, 16U, 4U, 23U,
                            *chartInstance->c10_sfEvent, false);
      *chartInstance->c10_skt = 0.0;
      chartInstance->c10_dataWrittenToVector[8U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c10_skt, 24U, 4U, 23U,
                            *chartInstance->c10_sfEvent, false);
      *chartInstance->c10_skyichang = 0.0;
      chartInstance->c10_dataWrittenToVector[14U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c10_skyichang, 30U, 4U, 23U,
                            *chartInstance->c10_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 22U,
                   *chartInstance->c10_sfEvent);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 22U, *chartInstance->c10_sfEvent);
    break;

   case c10_IN_on:
    CV_STATE_EVAL(21, 0, 2);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, *chartInstance->c10_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U,
                 *chartInstance->c10_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_lb_debug_family_names,
      c10_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_c_nargin, 0U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_c_nargout, 1U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_c_out, 2U, c10_b_sf_marshallOut,
      c10_b_sf_marshallIn);
    c10_c_out = CV_EML_IF(3, 0, 0, CV_RELATIONAL_EVAL(5U, 3U, 0,
      *chartInstance->c10_skdw, 0.0, -1, 0U, *chartInstance->c10_skdw == 0.0));
    _SFD_SYMBOL_SCOPE_POP();
    if (c10_c_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, *chartInstance->c10_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 23U, *chartInstance->c10_sfEvent);
      *chartInstance->c10_is_songkai = c10_IN_t;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 24U, *chartInstance->c10_sfEvent);
      *chartInstance->c10_temporalCounter_i1 = 0U;
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_d_debug_family_names,
        c10_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_f_nargin, 0U, c10_sf_marshallOut,
        c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_f_nargout, 1U,
        c10_sf_marshallOut, c10_sf_marshallIn);
      if (!chartInstance->c10_dataWrittenToVector[8U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(24U, 4U, 24U,
          *chartInstance->c10_sfEvent, false);
      }

      *chartInstance->c10_skt += 0.002;
      chartInstance->c10_dataWrittenToVector[8U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c10_skt, 24U, 4U, 24U,
                            *chartInstance->c10_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U,
                   *chartInstance->c10_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_hb_debug_family_names,
        c10_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_d_nargin, 0U, c10_sf_marshallOut,
        c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_d_nargout, 1U,
        c10_sf_marshallOut, c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_d_out, 2U, c10_b_sf_marshallOut,
        c10_b_sf_marshallIn);
      if (CV_EML_COND(4, 0, 0, CV_RELATIONAL_EVAL(5U, 4U, 0,
            *chartInstance->c10_skdw, 1.0, -1, 0U, *chartInstance->c10_skdw ==
            1.0)) && CV_EML_COND(4, 0, 1, CV_RELATIONAL_EVAL(5U, 4U, 1,
            *chartInstance->c10_jsdw, 1.0, -1, 0U, *chartInstance->c10_jsdw ==
            1.0))) {
        CV_EML_MCDC(4, 0, 0, true);
        CV_EML_IF(4, 0, 0, true);
        c10_d_out = true;
      } else {
        CV_EML_MCDC(4, 0, 0, false);
        CV_EML_IF(4, 0, 0, false);
        c10_d_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c10_d_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, *chartInstance->c10_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 23U, *chartInstance->c10_sfEvent);
        *chartInstance->c10_is_songkai = c10_IN_off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 22U, *chartInstance->c10_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_b_debug_family_names,
          c10_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_k_nargin, 0U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_k_nargout, 1U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        *chartInstance->c10_skhx = 0.0;
        chartInstance->c10_dataWrittenToVector[0U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c10_skhx, 16U, 4U, 22U,
                              *chartInstance->c10_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 39U,
                     *chartInstance->c10_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_jb_debug_family_names,
          c10_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_j_nargin, 0U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_j_nargout, 1U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_g_out, 2U,
          c10_b_sf_marshallOut, c10_b_sf_marshallIn);
        if (!chartInstance->c10_dataWrittenToVector[8U]) {
          _SFD_DATA_READ_BEFORE_WRITE_ERROR(24U, 5U, 39U,
            *chartInstance->c10_sfEvent, false);
        }

        c10_g_out = CV_EML_IF(39, 0, 0, CV_RELATIONAL_EVAL(5U, 39U, 0,
          *chartInstance->c10_skt, 2.0, -1, 4U, *chartInstance->c10_skt > 2.0));
        _SFD_SYMBOL_SCOPE_POP();
        if (c10_g_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 39U, *chartInstance->c10_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 23U, *chartInstance->c10_sfEvent);
          *chartInstance->c10_is_songkai = c10_IN_t2;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 25U, *chartInstance->c10_sfEvent);
          c10_enter_atomic_t2(chartInstance);
        } else {
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 23U,
                       *chartInstance->c10_sfEvent);
        }
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 23U, *chartInstance->c10_sfEvent);
    break;

   case c10_IN_t:
    CV_STATE_EVAL(21, 0, 3);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U,
                 *chartInstance->c10_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_kb_debug_family_names,
      c10_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_b_nargin, 0U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_b_nargout, 1U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_b_out, 2U, c10_b_sf_marshallOut,
      c10_b_sf_marshallIn);
    c10_b_out = CV_EML_IF(5, 0, 0, *chartInstance->c10_temporalCounter_i1 >= 1);
    _SFD_SYMBOL_SCOPE_POP();
    guard1 = false;
    if (c10_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, *chartInstance->c10_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U,
                   *chartInstance->c10_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_lb_debug_family_names,
        c10_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_e_nargin, 0U, c10_sf_marshallOut,
        c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_e_nargout, 1U,
        c10_sf_marshallOut, c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_e_out, 2U, c10_b_sf_marshallOut,
        c10_b_sf_marshallIn);
      c10_e_out = CV_EML_IF(3, 0, 0, CV_RELATIONAL_EVAL(5U, 3U, 0,
        *chartInstance->c10_skdw, 0.0, -1, 0U, *chartInstance->c10_skdw == 0.0));
      _SFD_SYMBOL_SCOPE_POP();
      if (c10_e_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, *chartInstance->c10_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 24U, *chartInstance->c10_sfEvent);
        *chartInstance->c10_is_songkai = c10_IN_t;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 24U, *chartInstance->c10_sfEvent);
        *chartInstance->c10_temporalCounter_i1 = 0U;
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_d_debug_family_names,
          c10_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_i_nargin, 0U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_i_nargout, 1U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        if (!chartInstance->c10_dataWrittenToVector[8U]) {
          _SFD_DATA_READ_BEFORE_WRITE_ERROR(24U, 4U, 24U,
            *chartInstance->c10_sfEvent, false);
        }

        *chartInstance->c10_skt += 0.002;
        chartInstance->c10_dataWrittenToVector[8U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c10_skt, 24U, 4U, 24U,
                              *chartInstance->c10_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U,
                     *chartInstance->c10_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_hb_debug_family_names,
          c10_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_h_nargin, 0U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_h_nargout, 1U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_f_out, 2U,
          c10_b_sf_marshallOut, c10_b_sf_marshallIn);
        if (CV_EML_COND(4, 0, 0, CV_RELATIONAL_EVAL(5U, 4U, 0,
              *chartInstance->c10_skdw, 1.0, -1, 0U, *chartInstance->c10_skdw ==
              1.0)) && CV_EML_COND(4, 0, 1, CV_RELATIONAL_EVAL(5U, 4U, 1,
              *chartInstance->c10_jsdw, 1.0, -1, 0U, *chartInstance->c10_jsdw ==
              1.0))) {
          CV_EML_MCDC(4, 0, 0, true);
          CV_EML_IF(4, 0, 0, true);
          c10_f_out = true;
        } else {
          CV_EML_MCDC(4, 0, 0, false);
          CV_EML_IF(4, 0, 0, false);
          c10_f_out = false;
        }

        _SFD_SYMBOL_SCOPE_POP();
        if (c10_f_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, *chartInstance->c10_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 24U, *chartInstance->c10_sfEvent);
          *chartInstance->c10_is_songkai = c10_IN_off;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 22U, *chartInstance->c10_sfEvent);
          _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_b_debug_family_names,
            c10_b_debug_family_var_map);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_m_nargin, 0U,
            c10_sf_marshallOut, c10_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_m_nargout, 1U,
            c10_sf_marshallOut, c10_sf_marshallIn);
          *chartInstance->c10_skhx = 0.0;
          chartInstance->c10_dataWrittenToVector[0U] = true;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c10_skhx, 16U, 4U, 22U,
                                *chartInstance->c10_sfEvent, false);
          _SFD_SYMBOL_SCOPE_POP();
        } else {
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 39U,
                       *chartInstance->c10_sfEvent);
          _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_jb_debug_family_names,
            c10_debug_family_var_map);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_l_nargin, 0U,
            c10_sf_marshallOut, c10_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_l_nargout, 1U,
            c10_sf_marshallOut, c10_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_h_out, 2U,
            c10_b_sf_marshallOut, c10_b_sf_marshallIn);
          if (!chartInstance->c10_dataWrittenToVector[8U]) {
            _SFD_DATA_READ_BEFORE_WRITE_ERROR(24U, 5U, 39U,
              *chartInstance->c10_sfEvent, false);
          }

          c10_h_out = CV_EML_IF(39, 0, 0, CV_RELATIONAL_EVAL(5U, 39U, 0,
            *chartInstance->c10_skt, 2.0, -1, 4U, *chartInstance->c10_skt > 2.0));
          _SFD_SYMBOL_SCOPE_POP();
          if (c10_h_out) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 39U, *chartInstance->c10_sfEvent);
            _SFD_CS_CALL(STATE_INACTIVE_TAG, 24U, *chartInstance->c10_sfEvent);
            *chartInstance->c10_is_songkai = c10_IN_t2;
            _SFD_CS_CALL(STATE_ACTIVE_TAG, 25U, *chartInstance->c10_sfEvent);
            c10_enter_atomic_t2(chartInstance);
          } else {
            guard1 = true;
          }
        }
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 24U,
                   *chartInstance->c10_sfEvent);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 24U, *chartInstance->c10_sfEvent);
    break;

   case c10_IN_t2:
    CV_STATE_EVAL(21, 0, 4);
    c10_t2(chartInstance);
    break;

   default:
    CV_STATE_EVAL(21, 0, 0);

    /* Unreachable state, for coverage only */
    *chartInstance->c10_is_songkai = c10_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 22U, *chartInstance->c10_sfEvent);
    break;
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 21U, *chartInstance->c10_sfEvent);
}

static void c10_enter_atomic_t2(SFc10_kaiguangaiInstanceStruct *chartInstance)
{
  uint32_T c10_debug_family_var_map[2];
  real_T c10_nargin = 0.0;
  real_T c10_nargout = 0.0;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_f_debug_family_names,
    c10_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_nargin, 0U, c10_sf_marshallOut,
    c10_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_nargout, 1U, c10_sf_marshallOut,
    c10_sf_marshallIn);
  if (!chartInstance->c10_dataWrittenToVector[8U]) {
    _SFD_DATA_READ_BEFORE_WRITE_ERROR(24U, 4U, 25U, *chartInstance->c10_sfEvent,
      false);
  }

  *chartInstance->c10_skt += 0.002;
  chartInstance->c10_dataWrittenToVector[8U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c10_skt, 24U, 4U, 25U,
                        *chartInstance->c10_sfEvent, false);
  *chartInstance->c10_skyichang = 1.0;
  chartInstance->c10_dataWrittenToVector[14U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c10_skyichang, 30U, 4U, 25U,
                        *chartInstance->c10_sfEvent, false);
  _SFD_SYMBOL_SCOPE_POP();
}

static void c10_t2(SFc10_kaiguangaiInstanceStruct *chartInstance)
{
  uint32_T c10_debug_family_var_map[3];
  real_T c10_nargin = 0.0;
  real_T c10_nargout = 1.0;
  boolean_T c10_out;
  real_T c10_b_nargin = 0.0;
  real_T c10_b_nargout = 1.0;
  boolean_T c10_b_out;
  uint32_T c10_b_debug_family_var_map[2];
  real_T c10_c_nargin = 0.0;
  real_T c10_c_nargout = 0.0;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 40U,
               *chartInstance->c10_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_nb_debug_family_names,
    c10_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_nargin, 0U, c10_sf_marshallOut,
    c10_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_nargout, 1U, c10_sf_marshallOut,
    c10_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_out, 2U, c10_b_sf_marshallOut,
    c10_b_sf_marshallIn);
  c10_out = CV_EML_IF(40, 0, 0, CV_RELATIONAL_EVAL(5U, 40U, 0,
    *chartInstance->c10_skdw, 0.0, -1, 0U, *chartInstance->c10_skdw == 0.0));
  _SFD_SYMBOL_SCOPE_POP();
  if (c10_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 40U, *chartInstance->c10_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 25U, *chartInstance->c10_sfEvent);
    *chartInstance->c10_is_songkai = c10_IN_t2;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 25U, *chartInstance->c10_sfEvent);
    c10_enter_atomic_t2(chartInstance);
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 41U,
                 *chartInstance->c10_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_gb_debug_family_names,
      c10_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_b_nargin, 0U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_b_nargout, 1U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_b_out, 2U, c10_b_sf_marshallOut,
      c10_b_sf_marshallIn);
    if (CV_EML_COND(41, 0, 0, CV_RELATIONAL_EVAL(5U, 41U, 0,
          *chartInstance->c10_jsdw, 1.0, -1, 0U, *chartInstance->c10_jsdw == 1.0))
        && CV_EML_COND(41, 0, 1, CV_RELATIONAL_EVAL(5U, 41U, 1,
          *chartInstance->c10_skdw, 1.0, -1, 0U, *chartInstance->c10_skdw == 1.0)))
    {
      CV_EML_MCDC(41, 0, 0, true);
      CV_EML_IF(41, 0, 0, true);
      c10_b_out = true;
    } else {
      CV_EML_MCDC(41, 0, 0, false);
      CV_EML_IF(41, 0, 0, false);
      c10_b_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c10_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 41U, *chartInstance->c10_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 25U, *chartInstance->c10_sfEvent);
      *chartInstance->c10_is_songkai = c10_IN_off;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 22U, *chartInstance->c10_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_b_debug_family_names,
        c10_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_c_nargin, 0U, c10_sf_marshallOut,
        c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_c_nargout, 1U,
        c10_sf_marshallOut, c10_sf_marshallIn);
      *chartInstance->c10_skhx = 0.0;
      chartInstance->c10_dataWrittenToVector[0U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c10_skhx, 16U, 4U, 22U,
                            *chartInstance->c10_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 25U,
                   *chartInstance->c10_sfEvent);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 25U, *chartInstance->c10_sfEvent);
}

static void c10_kaigai(SFc10_kaiguangaiInstanceStruct *chartInstance)
{
  uint32_T c10_debug_family_var_map[3];
  real_T c10_nargin = 0.0;
  real_T c10_b_nargin = 0.0;
  real_T c10_nargout = 1.0;
  real_T c10_c_nargin = 0.0;
  real_T c10_b_nargout = 1.0;
  boolean_T c10_out;
  real_T c10_c_nargout = 1.0;
  uint32_T c10_b_debug_family_var_map[2];
  boolean_T c10_b_out;
  boolean_T c10_c_out;
  real_T c10_d_nargin = 0.0;
  real_T c10_d_nargout = 0.0;
  real_T c10_e_nargin = 0.0;
  real_T c10_f_nargin = 0.0;
  real_T c10_e_nargout = 1.0;
  real_T c10_f_nargout = 1.0;
  boolean_T c10_d_out;
  boolean_T c10_e_out;
  real_T c10_g_nargin = 0.0;
  real_T c10_h_nargin = 0.0;
  real_T c10_g_nargout = 0.0;
  real_T c10_h_nargout = 0.0;
  real_T c10_i_nargin = 0.0;
  real_T c10_i_nargout = 0.0;
  real_T c10_j_nargin = 0.0;
  real_T c10_j_nargout = 1.0;
  boolean_T c10_f_out;
  real_T c10_k_nargin = 0.0;
  real_T c10_k_nargout = 0.0;
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 15U, *chartInstance->c10_sfEvent);
  switch (*chartInstance->c10_is_kaigai) {
   case c10_IN_off:
    CV_STATE_EVAL(15, 0, 1);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 8U,
                 *chartInstance->c10_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_qb_debug_family_names,
      c10_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_nargin, 0U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_nargout, 1U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_out, 2U, c10_b_sf_marshallOut,
      c10_b_sf_marshallIn);
    if (CV_EML_COND(8, 0, 0, CV_RELATIONAL_EVAL(5U, 8U, 0,
          *chartInstance->c10_b_kaigai, 1.0, -1, 0U,
          *chartInstance->c10_b_kaigai == 1.0)) && CV_EML_COND(8, 0, 1,
         CV_RELATIONAL_EVAL(5U, 8U, 1, *chartInstance->c10_skdw, 1.0, -1, 0U,
                            *chartInstance->c10_skdw == 1.0)) && CV_EML_COND(8,
         0, 2, CV_RELATIONAL_EVAL(5U, 8U, 2, *chartInstance->c10_jsdw, 1.0, -1,
          0U, *chartInstance->c10_jsdw == 1.0))) {
      CV_EML_MCDC(8, 0, 0, true);
      CV_EML_IF(8, 0, 0, true);
      c10_out = true;
    } else {
      CV_EML_MCDC(8, 0, 0, false);
      CV_EML_IF(8, 0, 0, false);
      c10_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c10_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8U, *chartInstance->c10_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 16U, *chartInstance->c10_sfEvent);
      *chartInstance->c10_is_kaigai = c10_IN_on;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 17U, *chartInstance->c10_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_h_debug_family_names,
        c10_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_h_nargin, 0U, c10_sf_marshallOut,
        c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_h_nargout, 1U,
        c10_sf_marshallOut, c10_sf_marshallIn);
      *chartInstance->c10_kghx = 1.0;
      chartInstance->c10_dataWrittenToVector[1U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c10_kghx, 17U, 4U, 17U,
                            *chartInstance->c10_sfEvent, false);
      *chartInstance->c10_kgzhiling1 = 1.0;
      chartInstance->c10_dataWrittenToVector[4U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c10_kgzhiling1, 20U, 4U, 17U,
                            *chartInstance->c10_sfEvent, false);
      *chartInstance->c10_kgzhiling2 = 1.0;
      chartInstance->c10_dataWrittenToVector[5U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c10_kgzhiling2, 21U, 4U, 17U,
                            *chartInstance->c10_sfEvent, false);
      *chartInstance->c10_kgyichang = 0.0;
      chartInstance->c10_dataWrittenToVector[15U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c10_kgyichang, 31U, 4U, 17U,
                            *chartInstance->c10_sfEvent, false);
      *chartInstance->c10_kgt = 0.0;
      chartInstance->c10_dataWrittenToVector[9U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c10_kgt, 25U, 4U, 17U,
                            *chartInstance->c10_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 16U,
                   *chartInstance->c10_sfEvent);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 16U, *chartInstance->c10_sfEvent);
    break;

   case c10_IN_on:
    CV_STATE_EVAL(15, 0, 2);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 9U, *chartInstance->c10_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 10U,
                 *chartInstance->c10_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_tb_debug_family_names,
      c10_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_c_nargin, 0U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_c_nargout, 1U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_c_out, 2U, c10_b_sf_marshallOut,
      c10_b_sf_marshallIn);
    if (CV_EML_COND(10, 0, 0, CV_RELATIONAL_EVAL(5U, 10U, 0,
          *chartInstance->c10_kgdw1, 0.0, -1, 0U, *chartInstance->c10_kgdw1 ==
          0.0)) && CV_EML_COND(10, 0, 1, CV_RELATIONAL_EVAL(5U, 10U, 1,
          *chartInstance->c10_kgdw2, 0.0, -1, 0U, *chartInstance->c10_kgdw2 ==
          0.0))) {
      CV_EML_MCDC(10, 0, 0, true);
      CV_EML_IF(10, 0, 0, true);
      c10_c_out = true;
    } else {
      CV_EML_MCDC(10, 0, 0, false);
      CV_EML_IF(10, 0, 0, false);
      c10_c_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c10_c_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 10U, *chartInstance->c10_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 17U, *chartInstance->c10_sfEvent);
      *chartInstance->c10_is_kaigai = c10_IN_t;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 18U, *chartInstance->c10_sfEvent);
      *chartInstance->c10_temporalCounter_i2 = 0U;
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_i_debug_family_names,
        c10_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_i_nargin, 0U, c10_sf_marshallOut,
        c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_i_nargout, 1U,
        c10_sf_marshallOut, c10_sf_marshallIn);
      if (!chartInstance->c10_dataWrittenToVector[9U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(25U, 4U, 18U,
          *chartInstance->c10_sfEvent, false);
      }

      *chartInstance->c10_kgt += 0.002;
      chartInstance->c10_dataWrittenToVector[9U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c10_kgt, 25U, 4U, 18U,
                            *chartInstance->c10_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7U,
                   *chartInstance->c10_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_pb_debug_family_names,
        c10_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_f_nargin, 0U, c10_sf_marshallOut,
        c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_f_nargout, 1U,
        c10_sf_marshallOut, c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_e_out, 2U, c10_b_sf_marshallOut,
        c10_b_sf_marshallIn);
      if (CV_EML_COND(7, 0, 0, CV_RELATIONAL_EVAL(5U, 7U, 0,
            *chartInstance->c10_kgdw1, 1.0, -1, 0U, *chartInstance->c10_kgdw1 ==
            1.0)) && CV_EML_COND(7, 0, 1, CV_RELATIONAL_EVAL(5U, 7U, 1,
            *chartInstance->c10_kgdw2, 1.0, -1, 0U, *chartInstance->c10_kgdw2 ==
            1.0))) {
        CV_EML_MCDC(7, 0, 0, true);
        CV_EML_IF(7, 0, 0, true);
        c10_e_out = true;
      } else {
        CV_EML_MCDC(7, 0, 0, false);
        CV_EML_IF(7, 0, 0, false);
        c10_e_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c10_e_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, *chartInstance->c10_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 17U, *chartInstance->c10_sfEvent);
        *chartInstance->c10_is_kaigai = c10_IN_off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 16U, *chartInstance->c10_sfEvent);
        c10_enter_atomic_off(chartInstance);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 43U,
                     *chartInstance->c10_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_rb_debug_family_names,
          c10_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_j_nargin, 0U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_j_nargout, 1U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_f_out, 2U,
          c10_b_sf_marshallOut, c10_b_sf_marshallIn);
        if (!chartInstance->c10_dataWrittenToVector[9U]) {
          _SFD_DATA_READ_BEFORE_WRITE_ERROR(25U, 5U, 43U,
            *chartInstance->c10_sfEvent, false);
        }

        c10_f_out = CV_EML_IF(43, 0, 0, CV_RELATIONAL_EVAL(5U, 43U, 0,
          *chartInstance->c10_kgt, 12.0, -1, 4U, *chartInstance->c10_kgt > 12.0));
        _SFD_SYMBOL_SCOPE_POP();
        if (c10_f_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 43U, *chartInstance->c10_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 17U, *chartInstance->c10_sfEvent);
          *chartInstance->c10_is_kaigai = c10_IN_t1;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 19U, *chartInstance->c10_sfEvent);
          _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_j_debug_family_names,
            c10_b_debug_family_var_map);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_k_nargin, 0U,
            c10_sf_marshallOut, c10_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_k_nargout, 1U,
            c10_sf_marshallOut, c10_sf_marshallIn);
          *chartInstance->c10_kgyichang = 1.0;
          chartInstance->c10_dataWrittenToVector[15U] = true;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c10_kgyichang, 31U, 4U, 19U,
                                *chartInstance->c10_sfEvent, false);
          _SFD_SYMBOL_SCOPE_POP();
        } else {
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 17U,
                       *chartInstance->c10_sfEvent);
        }
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 17U, *chartInstance->c10_sfEvent);
    break;

   case c10_IN_t:
    CV_STATE_EVAL(15, 0, 3);
    c10_t(chartInstance);
    break;

   case c10_IN_t1:
    CV_STATE_EVAL(15, 0, 4);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 45U, *chartInstance->c10_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 19U, *chartInstance->c10_sfEvent);
    *chartInstance->c10_is_kaigai = c10_b_IN_t2;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 20U, *chartInstance->c10_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_k_debug_family_names,
      c10_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_d_nargin, 0U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_d_nargout, 1U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    if (!chartInstance->c10_dataWrittenToVector[9U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(25U, 4U, 20U,
        *chartInstance->c10_sfEvent, false);
    }

    *chartInstance->c10_kgt += 0.002;
    chartInstance->c10_dataWrittenToVector[9U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c10_kgt, 25U, 4U, 20U,
                          *chartInstance->c10_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 19U, *chartInstance->c10_sfEvent);
    break;

   case c10_b_IN_t2:
    CV_STATE_EVAL(15, 0, 5);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 42U,
                 *chartInstance->c10_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_ub_debug_family_names,
      c10_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_b_nargin, 0U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_b_nargout, 1U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_b_out, 2U, c10_b_sf_marshallOut,
      c10_b_sf_marshallIn);
    if (CV_EML_COND(42, 0, 0, CV_RELATIONAL_EVAL(5U, 42U, 0,
          *chartInstance->c10_kgdw1, 0.0, -1, 0U, *chartInstance->c10_kgdw1 ==
          0.0)) && CV_EML_COND(42, 0, 1, CV_RELATIONAL_EVAL(5U, 42U, 1,
          *chartInstance->c10_kgdw2, 0.0, -1, 0U, *chartInstance->c10_kgdw2 ==
          0.0))) {
      CV_EML_MCDC(42, 0, 0, true);
      CV_EML_IF(42, 0, 0, true);
      c10_b_out = true;
    } else {
      CV_EML_MCDC(42, 0, 0, false);
      CV_EML_IF(42, 0, 0, false);
      c10_b_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c10_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 42U, *chartInstance->c10_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 20U, *chartInstance->c10_sfEvent);
      *chartInstance->c10_is_kaigai = c10_b_IN_t2;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 20U, *chartInstance->c10_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_k_debug_family_names,
        c10_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_g_nargin, 0U, c10_sf_marshallOut,
        c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_g_nargout, 1U,
        c10_sf_marshallOut, c10_sf_marshallIn);
      if (!chartInstance->c10_dataWrittenToVector[9U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(25U, 4U, 20U,
          *chartInstance->c10_sfEvent, false);
      }

      *chartInstance->c10_kgt += 0.002;
      chartInstance->c10_dataWrittenToVector[9U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c10_kgt, 25U, 4U, 20U,
                            *chartInstance->c10_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 44U,
                   *chartInstance->c10_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_ob_debug_family_names,
        c10_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_e_nargin, 0U, c10_sf_marshallOut,
        c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_e_nargout, 1U,
        c10_sf_marshallOut, c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_d_out, 2U, c10_b_sf_marshallOut,
        c10_b_sf_marshallIn);
      if (CV_EML_COND(44, 0, 0, CV_RELATIONAL_EVAL(5U, 44U, 0,
            *chartInstance->c10_kgdw1, 1.0, -1, 0U, *chartInstance->c10_kgdw1 ==
            1.0)) && CV_EML_COND(44, 0, 1, CV_RELATIONAL_EVAL(5U, 44U, 1,
            *chartInstance->c10_kgdw2, 1.0, -1, 0U, *chartInstance->c10_kgdw2 ==
            1.0))) {
        CV_EML_MCDC(44, 0, 0, true);
        CV_EML_IF(44, 0, 0, true);
        c10_d_out = true;
      } else {
        CV_EML_MCDC(44, 0, 0, false);
        CV_EML_IF(44, 0, 0, false);
        c10_d_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c10_d_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 44U, *chartInstance->c10_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 20U, *chartInstance->c10_sfEvent);
        *chartInstance->c10_is_kaigai = c10_IN_off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 16U, *chartInstance->c10_sfEvent);
        c10_enter_atomic_off(chartInstance);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 20U,
                     *chartInstance->c10_sfEvent);
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 20U, *chartInstance->c10_sfEvent);
    break;

   default:
    CV_STATE_EVAL(15, 0, 0);

    /* Unreachable state, for coverage only */
    *chartInstance->c10_is_kaigai = c10_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 16U, *chartInstance->c10_sfEvent);
    break;
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 15U, *chartInstance->c10_sfEvent);
}

static void c10_enter_atomic_off(SFc10_kaiguangaiInstanceStruct *chartInstance)
{
  uint32_T c10_debug_family_var_map[2];
  real_T c10_nargin = 0.0;
  real_T c10_nargout = 0.0;
  real_T c10_hoistedGlobal;
  const mxArray *c10_y = NULL;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_g_debug_family_names,
    c10_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_nargin, 0U, c10_sf_marshallOut,
    c10_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_nargout, 1U, c10_sf_marshallOut,
    c10_sf_marshallIn);
  *chartInstance->c10_kghx = 0.0;
  chartInstance->c10_dataWrittenToVector[1U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c10_kghx, 17U, 4U, 16U,
                        *chartInstance->c10_sfEvent, false);
  *chartInstance->c10_kgzhiling1 = 0.0;
  chartInstance->c10_dataWrittenToVector[4U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c10_kgzhiling1, 20U, 4U, 16U,
                        *chartInstance->c10_sfEvent, false);
  *chartInstance->c10_kgzhiling2 = 0.0;
  chartInstance->c10_dataWrittenToVector[5U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c10_kgzhiling2, 21U, 4U, 16U,
                        *chartInstance->c10_sfEvent, false);
  if (!chartInstance->c10_dataWrittenToVector[5U]) {
    _SFD_DATA_READ_BEFORE_WRITE_ERROR(21U, 4U, 16U, *chartInstance->c10_sfEvent,
      false);
  }

  sf_mex_printf("%s =\\n", "kgzhiling2");
  c10_hoistedGlobal = *chartInstance->c10_kgzhiling2;
  c10_y = NULL;
  sf_mex_assign(&c10_y, sf_mex_create("y", &c10_hoistedGlobal, 0, 0U, 0U, 0U, 0),
                false);
  sf_mex_call_debug(sfGlobalDebugInstanceStruct, "disp", 0U, 1U, 14, c10_y);
  _SFD_SYMBOL_SCOPE_POP();
}

static void c10_t(SFc10_kaiguangaiInstanceStruct *chartInstance)
{
  uint32_T c10_debug_family_var_map[3];
  real_T c10_nargin = 0.0;
  real_T c10_nargout = 1.0;
  boolean_T c10_out;
  real_T c10_b_nargin = 0.0;
  real_T c10_b_nargout = 1.0;
  boolean_T c10_b_out;
  real_T c10_c_nargin = 0.0;
  real_T c10_c_nargout = 1.0;
  boolean_T c10_c_out;
  uint32_T c10_b_debug_family_var_map[2];
  real_T c10_d_nargin = 0.0;
  real_T c10_d_nargout = 0.0;
  real_T c10_e_nargin = 0.0;
  real_T c10_e_nargout = 1.0;
  boolean_T c10_d_out;
  real_T c10_f_nargin = 0.0;
  real_T c10_f_nargout = 0.0;
  boolean_T guard1 = false;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 11U,
               *chartInstance->c10_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_sb_debug_family_names,
    c10_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_nargin, 0U, c10_sf_marshallOut,
    c10_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_nargout, 1U, c10_sf_marshallOut,
    c10_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_out, 2U, c10_b_sf_marshallOut,
    c10_b_sf_marshallIn);
  c10_out = CV_EML_IF(11, 0, 0, *chartInstance->c10_temporalCounter_i2 >= 1);
  _SFD_SYMBOL_SCOPE_POP();
  guard1 = false;
  if (c10_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 11U, *chartInstance->c10_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 10U,
                 *chartInstance->c10_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_tb_debug_family_names,
      c10_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_b_nargin, 0U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_b_nargout, 1U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_b_out, 2U, c10_b_sf_marshallOut,
      c10_b_sf_marshallIn);
    if (CV_EML_COND(10, 0, 0, CV_RELATIONAL_EVAL(5U, 10U, 0,
          *chartInstance->c10_kgdw1, 0.0, -1, 0U, *chartInstance->c10_kgdw1 ==
          0.0)) && CV_EML_COND(10, 0, 1, CV_RELATIONAL_EVAL(5U, 10U, 1,
          *chartInstance->c10_kgdw2, 0.0, -1, 0U, *chartInstance->c10_kgdw2 ==
          0.0))) {
      CV_EML_MCDC(10, 0, 0, true);
      CV_EML_IF(10, 0, 0, true);
      c10_b_out = true;
    } else {
      CV_EML_MCDC(10, 0, 0, false);
      CV_EML_IF(10, 0, 0, false);
      c10_b_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c10_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 10U, *chartInstance->c10_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 18U, *chartInstance->c10_sfEvent);
      *chartInstance->c10_is_kaigai = c10_IN_t;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 18U, *chartInstance->c10_sfEvent);
      *chartInstance->c10_temporalCounter_i2 = 0U;
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_i_debug_family_names,
        c10_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_d_nargin, 0U, c10_sf_marshallOut,
        c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_d_nargout, 1U,
        c10_sf_marshallOut, c10_sf_marshallIn);
      if (!chartInstance->c10_dataWrittenToVector[9U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(25U, 4U, 18U,
          *chartInstance->c10_sfEvent, false);
      }

      *chartInstance->c10_kgt += 0.002;
      chartInstance->c10_dataWrittenToVector[9U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c10_kgt, 25U, 4U, 18U,
                            *chartInstance->c10_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7U,
                   *chartInstance->c10_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_pb_debug_family_names,
        c10_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_c_nargin, 0U, c10_sf_marshallOut,
        c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_c_nargout, 1U,
        c10_sf_marshallOut, c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_c_out, 2U, c10_b_sf_marshallOut,
        c10_b_sf_marshallIn);
      if (CV_EML_COND(7, 0, 0, CV_RELATIONAL_EVAL(5U, 7U, 0,
            *chartInstance->c10_kgdw1, 1.0, -1, 0U, *chartInstance->c10_kgdw1 ==
            1.0)) && CV_EML_COND(7, 0, 1, CV_RELATIONAL_EVAL(5U, 7U, 1,
            *chartInstance->c10_kgdw2, 1.0, -1, 0U, *chartInstance->c10_kgdw2 ==
            1.0))) {
        CV_EML_MCDC(7, 0, 0, true);
        CV_EML_IF(7, 0, 0, true);
        c10_c_out = true;
      } else {
        CV_EML_MCDC(7, 0, 0, false);
        CV_EML_IF(7, 0, 0, false);
        c10_c_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c10_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, *chartInstance->c10_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 18U, *chartInstance->c10_sfEvent);
        *chartInstance->c10_is_kaigai = c10_IN_off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 16U, *chartInstance->c10_sfEvent);
        c10_enter_atomic_off(chartInstance);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 43U,
                     *chartInstance->c10_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_rb_debug_family_names,
          c10_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_e_nargin, 0U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_e_nargout, 1U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_d_out, 2U,
          c10_b_sf_marshallOut, c10_b_sf_marshallIn);
        if (!chartInstance->c10_dataWrittenToVector[9U]) {
          _SFD_DATA_READ_BEFORE_WRITE_ERROR(25U, 5U, 43U,
            *chartInstance->c10_sfEvent, false);
        }

        c10_d_out = CV_EML_IF(43, 0, 0, CV_RELATIONAL_EVAL(5U, 43U, 0,
          *chartInstance->c10_kgt, 12.0, -1, 4U, *chartInstance->c10_kgt > 12.0));
        _SFD_SYMBOL_SCOPE_POP();
        if (c10_d_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 43U, *chartInstance->c10_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 18U, *chartInstance->c10_sfEvent);
          *chartInstance->c10_is_kaigai = c10_IN_t1;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 19U, *chartInstance->c10_sfEvent);
          _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_j_debug_family_names,
            c10_b_debug_family_var_map);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_f_nargin, 0U,
            c10_sf_marshallOut, c10_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_f_nargout, 1U,
            c10_sf_marshallOut, c10_sf_marshallIn);
          *chartInstance->c10_kgyichang = 1.0;
          chartInstance->c10_dataWrittenToVector[15U] = true;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c10_kgyichang, 31U, 4U, 19U,
                                *chartInstance->c10_sfEvent, false);
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
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 18U,
                 *chartInstance->c10_sfEvent);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 18U, *chartInstance->c10_sfEvent);
}

static void c10_jiesuo(SFc10_kaiguangaiInstanceStruct *chartInstance)
{
  uint32_T c10_debug_family_var_map[3];
  real_T c10_nargin = 0.0;
  real_T c10_b_nargin = 0.0;
  real_T c10_nargout = 1.0;
  real_T c10_c_nargin = 0.0;
  real_T c10_b_nargout = 1.0;
  boolean_T c10_out;
  real_T c10_c_nargout = 1.0;
  uint32_T c10_b_debug_family_var_map[2];
  boolean_T c10_b_out;
  boolean_T c10_c_out;
  real_T c10_d_nargin = 0.0;
  real_T c10_d_nargout = 0.0;
  real_T c10_e_nargin = 0.0;
  real_T c10_f_nargin = 0.0;
  real_T c10_e_nargout = 1.0;
  real_T c10_f_nargout = 1.0;
  boolean_T c10_d_out;
  boolean_T c10_e_out;
  real_T c10_g_nargin = 0.0;
  real_T c10_g_nargout = 0.0;
  real_T c10_h_nargin = 0.0;
  real_T c10_i_nargin = 0.0;
  real_T c10_h_nargout = 0.0;
  real_T c10_i_nargout = 0.0;
  real_T c10_j_nargin = 0.0;
  real_T c10_j_nargout = 1.0;
  boolean_T c10_f_out;
  real_T c10_k_nargin = 0.0;
  real_T c10_l_nargin = 0.0;
  real_T c10_k_nargout = 0.0;
  real_T c10_l_nargout = 0.0;
  real_T c10_m_nargin = 0.0;
  real_T c10_m_nargout = 0.0;
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 9U, *chartInstance->c10_sfEvent);
  switch (*chartInstance->c10_is_jiesuo) {
   case c10_IN_off:
    CV_STATE_EVAL(9, 0, 1);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 22U,
                 *chartInstance->c10_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_xb_debug_family_names,
      c10_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_nargin, 0U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_nargout, 1U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_out, 2U, c10_b_sf_marshallOut,
      c10_b_sf_marshallIn);
    if (CV_EML_COND(22, 0, 0, CV_RELATIONAL_EVAL(5U, 22U, 0,
          *chartInstance->c10_b_jiesuo, 1.0, -1, 0U,
          *chartInstance->c10_b_jiesuo == 1.0)) && CV_EML_COND(22, 0, 1,
         CV_RELATIONAL_EVAL(5U, 22U, 1, *chartInstance->c10_yjdw, 1.0, -1, 0U,
                            *chartInstance->c10_yjdw == 1.0)) && CV_EML_COND(22,
         0, 2, CV_RELATIONAL_EVAL(5U, 22U, 2, *chartInstance->c10_sddw, 1.0, -1,
          0U, *chartInstance->c10_sddw == 1.0)) && CV_EML_COND(22, 0, 3,
         CV_RELATIONAL_EVAL(5U, 22U, 3, *chartInstance->c10_kgdw1, 1.0, -1, 0U, *
                            chartInstance->c10_kgdw1 == 1.0)) && CV_EML_COND(22,
         0, 4, CV_RELATIONAL_EVAL(5U, 22U, 4, *chartInstance->c10_kgdw2, 1.0, -1,
          0U, *chartInstance->c10_kgdw2 == 1.0))) {
      CV_EML_MCDC(22, 0, 0, true);
      CV_EML_IF(22, 0, 0, true);
      c10_out = true;
    } else {
      CV_EML_MCDC(22, 0, 0, false);
      CV_EML_IF(22, 0, 0, false);
      c10_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c10_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 22U, *chartInstance->c10_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c10_sfEvent);
      *chartInstance->c10_is_jiesuo = c10_IN_on;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 11U, *chartInstance->c10_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_m_debug_family_names,
        c10_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_i_nargin, 0U, c10_sf_marshallOut,
        c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_i_nargout, 1U,
        c10_sf_marshallOut, c10_sf_marshallIn);
      *chartInstance->c10_skhx = 1.0;
      chartInstance->c10_dataWrittenToVector[0U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c10_skhx, 16U, 4U, 11U,
                            *chartInstance->c10_sfEvent, false);
      *chartInstance->c10_jsyichang = 0.0;
      chartInstance->c10_dataWrittenToVector[17U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c10_jsyichang, 33U, 4U, 11U,
                            *chartInstance->c10_sfEvent, false);
      *chartInstance->c10_jst = 0.0;
      chartInstance->c10_dataWrittenToVector[11U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c10_jst, 27U, 4U, 11U,
                            *chartInstance->c10_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 10U,
                   *chartInstance->c10_sfEvent);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 10U, *chartInstance->c10_sfEvent);
    break;

   case c10_IN_on:
    CV_STATE_EVAL(9, 0, 2);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 20U, *chartInstance->c10_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 23U,
                 *chartInstance->c10_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_bc_debug_family_names,
      c10_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_c_nargin, 0U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_c_nargout, 1U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_c_out, 2U, c10_b_sf_marshallOut,
      c10_b_sf_marshallIn);
    if (CV_EML_COND(23, 0, 0, CV_RELATIONAL_EVAL(5U, 23U, 0,
          *chartInstance->c10_jsdw, 0.0, -1, 0U, *chartInstance->c10_jsdw == 0.0))
        && CV_EML_COND(23, 0, 1, CV_RELATIONAL_EVAL(5U, 23U, 1,
          *chartInstance->c10_skdw, 0.0, -1, 0U, *chartInstance->c10_skdw == 0.0)))
    {
      CV_EML_MCDC(23, 0, 0, true);
      CV_EML_IF(23, 0, 0, true);
      c10_c_out = true;
    } else {
      CV_EML_MCDC(23, 0, 0, false);
      CV_EML_IF(23, 0, 0, false);
      c10_c_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c10_c_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 23U, *chartInstance->c10_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 11U, *chartInstance->c10_sfEvent);
      *chartInstance->c10_is_jiesuo = c10_IN_t;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 12U, *chartInstance->c10_sfEvent);
      *chartInstance->c10_temporalCounter_i3 = 0U;
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_n_debug_family_names,
        c10_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_h_nargin, 0U, c10_sf_marshallOut,
        c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_h_nargout, 1U,
        c10_sf_marshallOut, c10_sf_marshallIn);
      if (!chartInstance->c10_dataWrittenToVector[11U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(27U, 4U, 12U,
          *chartInstance->c10_sfEvent, false);
      }

      *chartInstance->c10_jst += 0.002;
      chartInstance->c10_dataWrittenToVector[11U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c10_jst, 27U, 4U, 12U,
                            *chartInstance->c10_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 19U,
                   *chartInstance->c10_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_wb_debug_family_names,
        c10_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_f_nargin, 0U, c10_sf_marshallOut,
        c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_f_nargout, 1U,
        c10_sf_marshallOut, c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_e_out, 2U, c10_b_sf_marshallOut,
        c10_b_sf_marshallIn);
      if (CV_EML_COND(19, 0, 0, CV_RELATIONAL_EVAL(5U, 19U, 0,
            *chartInstance->c10_jsdw, 1.0, -1, 0U, *chartInstance->c10_jsdw ==
            1.0)) && CV_EML_COND(19, 0, 1, CV_RELATIONAL_EVAL(5U, 19U, 1,
            *chartInstance->c10_skdw, 1.0, -1, 0U, *chartInstance->c10_skdw ==
            1.0))) {
        CV_EML_MCDC(19, 0, 0, true);
        CV_EML_IF(19, 0, 0, true);
        c10_e_out = true;
      } else {
        CV_EML_MCDC(19, 0, 0, false);
        CV_EML_IF(19, 0, 0, false);
        c10_e_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c10_e_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 19U, *chartInstance->c10_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 11U, *chartInstance->c10_sfEvent);
        *chartInstance->c10_is_jiesuo = c10_IN_off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, *chartInstance->c10_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_l_debug_family_names,
          c10_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_l_nargin, 0U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_l_nargout, 1U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        *chartInstance->c10_skhx = 0.0;
        chartInstance->c10_dataWrittenToVector[0U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c10_skhx, 16U, 4U, 10U,
                              *chartInstance->c10_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 50U,
                     *chartInstance->c10_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_yb_debug_family_names,
          c10_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_j_nargin, 0U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_j_nargout, 1U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_f_out, 2U,
          c10_b_sf_marshallOut, c10_b_sf_marshallIn);
        if (!chartInstance->c10_dataWrittenToVector[10U]) {
          _SFD_DATA_READ_BEFORE_WRITE_ERROR(26U, 5U, 50U,
            *chartInstance->c10_sfEvent, false);
        }

        c10_f_out = CV_EML_IF(50, 0, 0, CV_RELATIONAL_EVAL(5U, 50U, 0,
          *chartInstance->c10_sdt, 2.0, -1, 4U, *chartInstance->c10_sdt > 2.0));
        _SFD_SYMBOL_SCOPE_POP();
        if (c10_f_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 50U, *chartInstance->c10_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 11U, *chartInstance->c10_sfEvent);
          *chartInstance->c10_is_jiesuo = c10_IN_t1;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 13U, *chartInstance->c10_sfEvent);
          _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_o_debug_family_names,
            c10_b_debug_family_var_map);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_m_nargin, 0U,
            c10_sf_marshallOut, c10_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_m_nargout, 1U,
            c10_sf_marshallOut, c10_sf_marshallIn);
          *chartInstance->c10_jsyichang = 1.0;
          chartInstance->c10_dataWrittenToVector[17U] = true;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c10_jsyichang, 33U, 4U, 13U,
                                *chartInstance->c10_sfEvent, false);
          _SFD_SYMBOL_SCOPE_POP();
        } else {
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 11U,
                       *chartInstance->c10_sfEvent);
        }
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 11U, *chartInstance->c10_sfEvent);
    break;

   case c10_IN_t:
    CV_STATE_EVAL(9, 0, 3);
    c10_b_t(chartInstance);
    break;

   case c10_IN_t1:
    CV_STATE_EVAL(9, 0, 4);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 51U, *chartInstance->c10_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 13U, *chartInstance->c10_sfEvent);
    *chartInstance->c10_is_jiesuo = c10_b_IN_t2;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 14U, *chartInstance->c10_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_p_debug_family_names,
      c10_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_d_nargin, 0U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_d_nargout, 1U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    if (!chartInstance->c10_dataWrittenToVector[11U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(27U, 4U, 14U,
        *chartInstance->c10_sfEvent, false);
    }

    *chartInstance->c10_jst += 0.002;
    chartInstance->c10_dataWrittenToVector[11U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c10_jst, 27U, 4U, 14U,
                          *chartInstance->c10_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 13U, *chartInstance->c10_sfEvent);
    break;

   case c10_b_IN_t2:
    CV_STATE_EVAL(9, 0, 5);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 52U,
                 *chartInstance->c10_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_cc_debug_family_names,
      c10_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_b_nargin, 0U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_b_nargout, 1U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_b_out, 2U, c10_b_sf_marshallOut,
      c10_b_sf_marshallIn);
    if (CV_EML_COND(52, 0, 0, CV_RELATIONAL_EVAL(5U, 52U, 0,
          *chartInstance->c10_jsdw, 0.0, -1, 0U, *chartInstance->c10_jsdw == 0.0))
        && CV_EML_COND(52, 0, 1, CV_RELATIONAL_EVAL(5U, 52U, 1,
          *chartInstance->c10_skdw, 0.0, -1, 0U, *chartInstance->c10_skdw == 0.0)))
    {
      CV_EML_MCDC(52, 0, 0, true);
      CV_EML_IF(52, 0, 0, true);
      c10_b_out = true;
    } else {
      CV_EML_MCDC(52, 0, 0, false);
      CV_EML_IF(52, 0, 0, false);
      c10_b_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c10_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 52U, *chartInstance->c10_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 14U, *chartInstance->c10_sfEvent);
      *chartInstance->c10_is_jiesuo = c10_b_IN_t2;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 14U, *chartInstance->c10_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_p_debug_family_names,
        c10_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_g_nargin, 0U, c10_sf_marshallOut,
        c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_g_nargout, 1U,
        c10_sf_marshallOut, c10_sf_marshallIn);
      if (!chartInstance->c10_dataWrittenToVector[11U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(27U, 4U, 14U,
          *chartInstance->c10_sfEvent, false);
      }

      *chartInstance->c10_jst += 0.002;
      chartInstance->c10_dataWrittenToVector[11U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c10_jst, 27U, 4U, 14U,
                            *chartInstance->c10_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 53U,
                   *chartInstance->c10_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_vb_debug_family_names,
        c10_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_e_nargin, 0U, c10_sf_marshallOut,
        c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_e_nargout, 1U,
        c10_sf_marshallOut, c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_d_out, 2U, c10_b_sf_marshallOut,
        c10_b_sf_marshallIn);
      if (CV_EML_COND(53, 0, 0, CV_RELATIONAL_EVAL(5U, 53U, 0,
            *chartInstance->c10_jsdw, 1.0, -1, 0U, *chartInstance->c10_jsdw ==
            1.0)) && CV_EML_COND(53, 0, 1, CV_RELATIONAL_EVAL(5U, 53U, 1,
            *chartInstance->c10_skdw, 1.0, -1, 0U, *chartInstance->c10_skdw ==
            1.0))) {
        CV_EML_MCDC(53, 0, 0, true);
        CV_EML_IF(53, 0, 0, true);
        c10_d_out = true;
      } else {
        CV_EML_MCDC(53, 0, 0, false);
        CV_EML_IF(53, 0, 0, false);
        c10_d_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c10_d_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 53U, *chartInstance->c10_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 14U, *chartInstance->c10_sfEvent);
        *chartInstance->c10_is_jiesuo = c10_IN_off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, *chartInstance->c10_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_l_debug_family_names,
          c10_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_k_nargin, 0U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_k_nargout, 1U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        *chartInstance->c10_skhx = 0.0;
        chartInstance->c10_dataWrittenToVector[0U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c10_skhx, 16U, 4U, 10U,
                              *chartInstance->c10_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 14U,
                     *chartInstance->c10_sfEvent);
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 14U, *chartInstance->c10_sfEvent);
    break;

   default:
    CV_STATE_EVAL(9, 0, 0);

    /* Unreachable state, for coverage only */
    *chartInstance->c10_is_jiesuo = c10_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c10_sfEvent);
    break;
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 9U, *chartInstance->c10_sfEvent);
}

static void c10_b_t(SFc10_kaiguangaiInstanceStruct *chartInstance)
{
  uint32_T c10_debug_family_var_map[3];
  real_T c10_nargin = 0.0;
  real_T c10_nargout = 1.0;
  boolean_T c10_out;
  real_T c10_b_nargin = 0.0;
  real_T c10_b_nargout = 1.0;
  boolean_T c10_b_out;
  real_T c10_c_nargin = 0.0;
  real_T c10_c_nargout = 1.0;
  boolean_T c10_c_out;
  uint32_T c10_b_debug_family_var_map[2];
  real_T c10_d_nargin = 0.0;
  real_T c10_d_nargout = 0.0;
  real_T c10_e_nargin = 0.0;
  real_T c10_e_nargout = 1.0;
  boolean_T c10_d_out;
  real_T c10_f_nargin = 0.0;
  real_T c10_f_nargout = 0.0;
  real_T c10_g_nargin = 0.0;
  real_T c10_g_nargout = 0.0;
  boolean_T guard1 = false;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 21U,
               *chartInstance->c10_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_ac_debug_family_names,
    c10_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_nargin, 0U, c10_sf_marshallOut,
    c10_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_nargout, 1U, c10_sf_marshallOut,
    c10_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_out, 2U, c10_b_sf_marshallOut,
    c10_b_sf_marshallIn);
  c10_out = CV_EML_IF(21, 0, 0, *chartInstance->c10_temporalCounter_i3 >= 1);
  _SFD_SYMBOL_SCOPE_POP();
  guard1 = false;
  if (c10_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 21U, *chartInstance->c10_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 23U,
                 *chartInstance->c10_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_bc_debug_family_names,
      c10_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_b_nargin, 0U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_b_nargout, 1U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_b_out, 2U, c10_b_sf_marshallOut,
      c10_b_sf_marshallIn);
    if (CV_EML_COND(23, 0, 0, CV_RELATIONAL_EVAL(5U, 23U, 0,
          *chartInstance->c10_jsdw, 0.0, -1, 0U, *chartInstance->c10_jsdw == 0.0))
        && CV_EML_COND(23, 0, 1, CV_RELATIONAL_EVAL(5U, 23U, 1,
          *chartInstance->c10_skdw, 0.0, -1, 0U, *chartInstance->c10_skdw == 0.0)))
    {
      CV_EML_MCDC(23, 0, 0, true);
      CV_EML_IF(23, 0, 0, true);
      c10_b_out = true;
    } else {
      CV_EML_MCDC(23, 0, 0, false);
      CV_EML_IF(23, 0, 0, false);
      c10_b_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c10_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 23U, *chartInstance->c10_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 12U, *chartInstance->c10_sfEvent);
      *chartInstance->c10_is_jiesuo = c10_IN_t;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 12U, *chartInstance->c10_sfEvent);
      *chartInstance->c10_temporalCounter_i3 = 0U;
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_n_debug_family_names,
        c10_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_d_nargin, 0U, c10_sf_marshallOut,
        c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_d_nargout, 1U,
        c10_sf_marshallOut, c10_sf_marshallIn);
      if (!chartInstance->c10_dataWrittenToVector[11U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(27U, 4U, 12U,
          *chartInstance->c10_sfEvent, false);
      }

      *chartInstance->c10_jst += 0.002;
      chartInstance->c10_dataWrittenToVector[11U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c10_jst, 27U, 4U, 12U,
                            *chartInstance->c10_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 19U,
                   *chartInstance->c10_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_wb_debug_family_names,
        c10_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_c_nargin, 0U, c10_sf_marshallOut,
        c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_c_nargout, 1U,
        c10_sf_marshallOut, c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_c_out, 2U, c10_b_sf_marshallOut,
        c10_b_sf_marshallIn);
      if (CV_EML_COND(19, 0, 0, CV_RELATIONAL_EVAL(5U, 19U, 0,
            *chartInstance->c10_jsdw, 1.0, -1, 0U, *chartInstance->c10_jsdw ==
            1.0)) && CV_EML_COND(19, 0, 1, CV_RELATIONAL_EVAL(5U, 19U, 1,
            *chartInstance->c10_skdw, 1.0, -1, 0U, *chartInstance->c10_skdw ==
            1.0))) {
        CV_EML_MCDC(19, 0, 0, true);
        CV_EML_IF(19, 0, 0, true);
        c10_c_out = true;
      } else {
        CV_EML_MCDC(19, 0, 0, false);
        CV_EML_IF(19, 0, 0, false);
        c10_c_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c10_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 19U, *chartInstance->c10_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 12U, *chartInstance->c10_sfEvent);
        *chartInstance->c10_is_jiesuo = c10_IN_off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, *chartInstance->c10_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_l_debug_family_names,
          c10_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_f_nargin, 0U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_f_nargout, 1U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        *chartInstance->c10_skhx = 0.0;
        chartInstance->c10_dataWrittenToVector[0U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c10_skhx, 16U, 4U, 10U,
                              *chartInstance->c10_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 50U,
                     *chartInstance->c10_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_yb_debug_family_names,
          c10_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_e_nargin, 0U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_e_nargout, 1U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_d_out, 2U,
          c10_b_sf_marshallOut, c10_b_sf_marshallIn);
        if (!chartInstance->c10_dataWrittenToVector[10U]) {
          _SFD_DATA_READ_BEFORE_WRITE_ERROR(26U, 5U, 50U,
            *chartInstance->c10_sfEvent, false);
        }

        c10_d_out = CV_EML_IF(50, 0, 0, CV_RELATIONAL_EVAL(5U, 50U, 0,
          *chartInstance->c10_sdt, 2.0, -1, 4U, *chartInstance->c10_sdt > 2.0));
        _SFD_SYMBOL_SCOPE_POP();
        if (c10_d_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 50U, *chartInstance->c10_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 12U, *chartInstance->c10_sfEvent);
          *chartInstance->c10_is_jiesuo = c10_IN_t1;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 13U, *chartInstance->c10_sfEvent);
          _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_o_debug_family_names,
            c10_b_debug_family_var_map);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_g_nargin, 0U,
            c10_sf_marshallOut, c10_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_g_nargout, 1U,
            c10_sf_marshallOut, c10_sf_marshallIn);
          *chartInstance->c10_jsyichang = 1.0;
          chartInstance->c10_dataWrittenToVector[17U] = true;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c10_jsyichang, 33U, 4U, 13U,
                                *chartInstance->c10_sfEvent, false);
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
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 12U,
                 *chartInstance->c10_sfEvent);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 12U, *chartInstance->c10_sfEvent);
}

static void c10_suoding(SFc10_kaiguangaiInstanceStruct *chartInstance)
{
  uint32_T c10_debug_family_var_map[3];
  real_T c10_nargin = 0.0;
  real_T c10_b_nargin = 0.0;
  real_T c10_nargout = 1.0;
  real_T c10_c_nargin = 0.0;
  real_T c10_b_nargout = 1.0;
  boolean_T c10_out;
  real_T c10_c_nargout = 1.0;
  uint32_T c10_b_debug_family_var_map[2];
  boolean_T c10_b_out;
  boolean_T c10_c_out;
  real_T c10_d_nargin = 0.0;
  real_T c10_d_nargout = 0.0;
  real_T c10_e_nargin = 0.0;
  real_T c10_f_nargin = 0.0;
  real_T c10_e_nargout = 1.0;
  real_T c10_f_nargout = 1.0;
  boolean_T c10_d_out;
  boolean_T c10_e_out;
  real_T c10_g_nargin = 0.0;
  real_T c10_g_nargout = 0.0;
  real_T c10_h_nargin = 0.0;
  real_T c10_i_nargin = 0.0;
  real_T c10_h_nargout = 0.0;
  real_T c10_i_nargout = 0.0;
  real_T c10_j_nargin = 0.0;
  real_T c10_j_nargout = 1.0;
  boolean_T c10_f_out;
  real_T c10_k_nargin = 0.0;
  real_T c10_l_nargin = 0.0;
  real_T c10_k_nargout = 0.0;
  real_T c10_l_nargout = 0.0;
  real_T c10_m_nargin = 0.0;
  real_T c10_m_nargout = 0.0;
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 26U, *chartInstance->c10_sfEvent);
  switch (*chartInstance->c10_is_suoding) {
   case c10_IN_off:
    CV_STATE_EVAL(26, 0, 1);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 14U,
                 *chartInstance->c10_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_fc_debug_family_names,
      c10_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_nargin, 0U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_nargout, 1U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_out, 2U, c10_b_sf_marshallOut,
      c10_b_sf_marshallIn);
    if (CV_EML_COND(14, 0, 0, CV_RELATIONAL_EVAL(5U, 14U, 0,
          *chartInstance->c10_b_suoding, 1.0, -1, 0U,
          *chartInstance->c10_b_suoding == 1.0)) && CV_EML_COND(14, 0, 1,
         CV_RELATIONAL_EVAL(5U, 14U, 1, *chartInstance->c10_skdw, 1.0, -1, 0U,
                            *chartInstance->c10_skdw == 1.0)) && CV_EML_COND(14,
         0, 2, CV_RELATIONAL_EVAL(5U, 14U, 2, *chartInstance->c10_jsdw, 1.0, -1,
          0U, *chartInstance->c10_jsdw == 1.0)) && CV_EML_COND(14, 0, 3,
         CV_RELATIONAL_EVAL(5U, 14U, 3, *chartInstance->c10_kgdw1, 1.0, -1, 0U, *
                            chartInstance->c10_kgdw1 == 1.0)) && CV_EML_COND(14,
         0, 4, CV_RELATIONAL_EVAL(5U, 14U, 4, *chartInstance->c10_kgdw2, 1.0, -1,
          0U, *chartInstance->c10_kgdw2 == 1.0))) {
      CV_EML_MCDC(14, 0, 0, true);
      CV_EML_IF(14, 0, 0, true);
      c10_out = true;
    } else {
      CV_EML_MCDC(14, 0, 0, false);
      CV_EML_IF(14, 0, 0, false);
      c10_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c10_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 14U, *chartInstance->c10_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 27U, *chartInstance->c10_sfEvent);
      *chartInstance->c10_is_suoding = c10_IN_on;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 28U, *chartInstance->c10_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_r_debug_family_names,
        c10_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_i_nargin, 0U, c10_sf_marshallOut,
        c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_i_nargout, 1U,
        c10_sf_marshallOut, c10_sf_marshallIn);
      *chartInstance->c10_yjhx = 1.0;
      chartInstance->c10_dataWrittenToVector[2U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c10_yjhx, 18U, 4U, 28U,
                            *chartInstance->c10_sfEvent, false);
      *chartInstance->c10_sdyichang = 0.0;
      chartInstance->c10_dataWrittenToVector[16U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c10_sdyichang, 32U, 4U, 28U,
                            *chartInstance->c10_sfEvent, false);
      *chartInstance->c10_sdt = 0.0;
      chartInstance->c10_dataWrittenToVector[10U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c10_sdt, 26U, 4U, 28U,
                            *chartInstance->c10_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 27U,
                   *chartInstance->c10_sfEvent);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 27U, *chartInstance->c10_sfEvent);
    break;

   case c10_IN_on:
    CV_STATE_EVAL(26, 0, 2);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 16U, *chartInstance->c10_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 15U,
                 *chartInstance->c10_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_ic_debug_family_names,
      c10_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_c_nargin, 0U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_c_nargout, 1U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_c_out, 2U, c10_b_sf_marshallOut,
      c10_b_sf_marshallIn);
    if (CV_EML_COND(15, 0, 0, CV_RELATIONAL_EVAL(5U, 15U, 0,
          *chartInstance->c10_sddw, 0.0, -1, 0U, *chartInstance->c10_sddw == 0.0))
        && CV_EML_COND(15, 0, 1, CV_RELATIONAL_EVAL(5U, 15U, 1,
          *chartInstance->c10_yjdw, 0.0, -1, 0U, *chartInstance->c10_yjdw == 0.0)))
    {
      CV_EML_MCDC(15, 0, 0, true);
      CV_EML_IF(15, 0, 0, true);
      c10_c_out = true;
    } else {
      CV_EML_MCDC(15, 0, 0, false);
      CV_EML_IF(15, 0, 0, false);
      c10_c_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c10_c_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 15U, *chartInstance->c10_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 28U, *chartInstance->c10_sfEvent);
      *chartInstance->c10_is_suoding = c10_IN_t;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 29U, *chartInstance->c10_sfEvent);
      *chartInstance->c10_temporalCounter_i4 = 0U;
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_u_debug_family_names,
        c10_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_h_nargin, 0U, c10_sf_marshallOut,
        c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_h_nargout, 1U,
        c10_sf_marshallOut, c10_sf_marshallIn);
      if (!chartInstance->c10_dataWrittenToVector[10U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(26U, 4U, 29U,
          *chartInstance->c10_sfEvent, false);
      }

      *chartInstance->c10_sdt += 0.002;
      chartInstance->c10_dataWrittenToVector[10U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c10_sdt, 26U, 4U, 29U,
                            *chartInstance->c10_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 13U,
                   *chartInstance->c10_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_ec_debug_family_names,
        c10_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_f_nargin, 0U, c10_sf_marshallOut,
        c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_f_nargout, 1U,
        c10_sf_marshallOut, c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_e_out, 2U, c10_b_sf_marshallOut,
        c10_b_sf_marshallIn);
      if (CV_EML_COND(13, 0, 0, CV_RELATIONAL_EVAL(5U, 13U, 0,
            *chartInstance->c10_sddw, 1.0, -1, 0U, *chartInstance->c10_sddw ==
            1.0)) && CV_EML_COND(13, 0, 1, CV_RELATIONAL_EVAL(5U, 13U, 1,
            *chartInstance->c10_yjdw, 1.0, -1, 0U, *chartInstance->c10_yjdw ==
            1.0))) {
        CV_EML_MCDC(13, 0, 0, true);
        CV_EML_IF(13, 0, 0, true);
        c10_e_out = true;
      } else {
        CV_EML_MCDC(13, 0, 0, false);
        CV_EML_IF(13, 0, 0, false);
        c10_e_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c10_e_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 13U, *chartInstance->c10_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 28U, *chartInstance->c10_sfEvent);
        *chartInstance->c10_is_suoding = c10_IN_off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 27U, *chartInstance->c10_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_q_debug_family_names,
          c10_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_l_nargin, 0U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_l_nargout, 1U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        *chartInstance->c10_yjhx = 0.0;
        chartInstance->c10_dataWrittenToVector[2U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c10_yjhx, 18U, 4U, 27U,
                              *chartInstance->c10_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 47U,
                     *chartInstance->c10_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_gc_debug_family_names,
          c10_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_j_nargin, 0U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_j_nargout, 1U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_f_out, 2U,
          c10_b_sf_marshallOut, c10_b_sf_marshallIn);
        if (!chartInstance->c10_dataWrittenToVector[10U]) {
          _SFD_DATA_READ_BEFORE_WRITE_ERROR(26U, 5U, 47U,
            *chartInstance->c10_sfEvent, false);
        }

        c10_f_out = CV_EML_IF(47, 0, 0, CV_RELATIONAL_EVAL(5U, 47U, 0,
          *chartInstance->c10_sdt, 2.0, -1, 4U, *chartInstance->c10_sdt > 2.0));
        _SFD_SYMBOL_SCOPE_POP();
        if (c10_f_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 47U, *chartInstance->c10_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 28U, *chartInstance->c10_sfEvent);
          *chartInstance->c10_is_suoding = c10_IN_t1;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 30U, *chartInstance->c10_sfEvent);
          _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_s_debug_family_names,
            c10_b_debug_family_var_map);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_m_nargin, 0U,
            c10_sf_marshallOut, c10_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_m_nargout, 1U,
            c10_sf_marshallOut, c10_sf_marshallIn);
          *chartInstance->c10_sdyichang = 1.0;
          chartInstance->c10_dataWrittenToVector[16U] = true;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c10_sdyichang, 32U, 4U, 30U,
                                *chartInstance->c10_sfEvent, false);
          _SFD_SYMBOL_SCOPE_POP();
        } else {
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 28U,
                       *chartInstance->c10_sfEvent);
        }
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 28U, *chartInstance->c10_sfEvent);
    break;

   case c10_IN_t:
    CV_STATE_EVAL(26, 0, 3);
    c10_c_t(chartInstance);
    break;

   case c10_IN_t1:
    CV_STATE_EVAL(26, 0, 4);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 49U, *chartInstance->c10_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 30U, *chartInstance->c10_sfEvent);
    *chartInstance->c10_is_suoding = c10_b_IN_t2;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 31U, *chartInstance->c10_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_t_debug_family_names,
      c10_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_d_nargin, 0U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_d_nargout, 1U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    if (!chartInstance->c10_dataWrittenToVector[10U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(26U, 4U, 31U,
        *chartInstance->c10_sfEvent, false);
    }

    *chartInstance->c10_sdt += 0.002;
    chartInstance->c10_dataWrittenToVector[10U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c10_sdt, 26U, 4U, 31U,
                          *chartInstance->c10_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 30U, *chartInstance->c10_sfEvent);
    break;

   case c10_b_IN_t2:
    CV_STATE_EVAL(26, 0, 5);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 46U,
                 *chartInstance->c10_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_jc_debug_family_names,
      c10_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_b_nargin, 0U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_b_nargout, 1U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_b_out, 2U, c10_b_sf_marshallOut,
      c10_b_sf_marshallIn);
    if (CV_EML_COND(46, 0, 0, CV_RELATIONAL_EVAL(5U, 46U, 0,
          *chartInstance->c10_sddw, 0.0, -1, 0U, *chartInstance->c10_sddw == 0.0))
        && CV_EML_COND(46, 0, 1, CV_RELATIONAL_EVAL(5U, 46U, 1,
          *chartInstance->c10_yjdw, 0.0, -1, 0U, *chartInstance->c10_yjdw == 0.0)))
    {
      CV_EML_MCDC(46, 0, 0, true);
      CV_EML_IF(46, 0, 0, true);
      c10_b_out = true;
    } else {
      CV_EML_MCDC(46, 0, 0, false);
      CV_EML_IF(46, 0, 0, false);
      c10_b_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c10_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 46U, *chartInstance->c10_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 31U, *chartInstance->c10_sfEvent);
      *chartInstance->c10_is_suoding = c10_b_IN_t2;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 31U, *chartInstance->c10_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_t_debug_family_names,
        c10_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_g_nargin, 0U, c10_sf_marshallOut,
        c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_g_nargout, 1U,
        c10_sf_marshallOut, c10_sf_marshallIn);
      if (!chartInstance->c10_dataWrittenToVector[10U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(26U, 4U, 31U,
          *chartInstance->c10_sfEvent, false);
      }

      *chartInstance->c10_sdt += 0.002;
      chartInstance->c10_dataWrittenToVector[10U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c10_sdt, 26U, 4U, 31U,
                            *chartInstance->c10_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 48U,
                   *chartInstance->c10_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_dc_debug_family_names,
        c10_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_e_nargin, 0U, c10_sf_marshallOut,
        c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_e_nargout, 1U,
        c10_sf_marshallOut, c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_d_out, 2U, c10_b_sf_marshallOut,
        c10_b_sf_marshallIn);
      if (CV_EML_COND(48, 0, 0, CV_RELATIONAL_EVAL(5U, 48U, 0,
            *chartInstance->c10_sddw, 1.0, -1, 0U, *chartInstance->c10_sddw ==
            1.0)) && CV_EML_COND(48, 0, 1, CV_RELATIONAL_EVAL(5U, 48U, 1,
            *chartInstance->c10_yjdw, 1.0, -1, 0U, *chartInstance->c10_yjdw ==
            1.0))) {
        CV_EML_MCDC(48, 0, 0, true);
        CV_EML_IF(48, 0, 0, true);
        c10_d_out = true;
      } else {
        CV_EML_MCDC(48, 0, 0, false);
        CV_EML_IF(48, 0, 0, false);
        c10_d_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c10_d_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 48U, *chartInstance->c10_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 31U, *chartInstance->c10_sfEvent);
        *chartInstance->c10_is_suoding = c10_IN_off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 27U, *chartInstance->c10_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_q_debug_family_names,
          c10_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_k_nargin, 0U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_k_nargout, 1U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        *chartInstance->c10_yjhx = 0.0;
        chartInstance->c10_dataWrittenToVector[2U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c10_yjhx, 18U, 4U, 27U,
                              *chartInstance->c10_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 31U,
                     *chartInstance->c10_sfEvent);
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 31U, *chartInstance->c10_sfEvent);
    break;

   default:
    CV_STATE_EVAL(26, 0, 0);

    /* Unreachable state, for coverage only */
    *chartInstance->c10_is_suoding = c10_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 27U, *chartInstance->c10_sfEvent);
    break;
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 26U, *chartInstance->c10_sfEvent);
}

static void c10_c_t(SFc10_kaiguangaiInstanceStruct *chartInstance)
{
  uint32_T c10_debug_family_var_map[3];
  real_T c10_nargin = 0.0;
  real_T c10_nargout = 1.0;
  boolean_T c10_out;
  real_T c10_b_nargin = 0.0;
  real_T c10_b_nargout = 1.0;
  boolean_T c10_b_out;
  real_T c10_c_nargin = 0.0;
  real_T c10_c_nargout = 1.0;
  boolean_T c10_c_out;
  uint32_T c10_b_debug_family_var_map[2];
  real_T c10_d_nargin = 0.0;
  real_T c10_d_nargout = 0.0;
  real_T c10_e_nargin = 0.0;
  real_T c10_e_nargout = 1.0;
  boolean_T c10_d_out;
  real_T c10_f_nargin = 0.0;
  real_T c10_f_nargout = 0.0;
  real_T c10_g_nargin = 0.0;
  real_T c10_g_nargout = 0.0;
  boolean_T guard1 = false;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 17U,
               *chartInstance->c10_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_hc_debug_family_names,
    c10_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_nargin, 0U, c10_sf_marshallOut,
    c10_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_nargout, 1U, c10_sf_marshallOut,
    c10_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_out, 2U, c10_b_sf_marshallOut,
    c10_b_sf_marshallIn);
  c10_out = CV_EML_IF(17, 0, 0, *chartInstance->c10_temporalCounter_i4 >= 1);
  _SFD_SYMBOL_SCOPE_POP();
  guard1 = false;
  if (c10_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 17U, *chartInstance->c10_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 15U,
                 *chartInstance->c10_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_ic_debug_family_names,
      c10_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_b_nargin, 0U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_b_nargout, 1U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_b_out, 2U, c10_b_sf_marshallOut,
      c10_b_sf_marshallIn);
    if (CV_EML_COND(15, 0, 0, CV_RELATIONAL_EVAL(5U, 15U, 0,
          *chartInstance->c10_sddw, 0.0, -1, 0U, *chartInstance->c10_sddw == 0.0))
        && CV_EML_COND(15, 0, 1, CV_RELATIONAL_EVAL(5U, 15U, 1,
          *chartInstance->c10_yjdw, 0.0, -1, 0U, *chartInstance->c10_yjdw == 0.0)))
    {
      CV_EML_MCDC(15, 0, 0, true);
      CV_EML_IF(15, 0, 0, true);
      c10_b_out = true;
    } else {
      CV_EML_MCDC(15, 0, 0, false);
      CV_EML_IF(15, 0, 0, false);
      c10_b_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c10_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 15U, *chartInstance->c10_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 29U, *chartInstance->c10_sfEvent);
      *chartInstance->c10_is_suoding = c10_IN_t;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 29U, *chartInstance->c10_sfEvent);
      *chartInstance->c10_temporalCounter_i4 = 0U;
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_u_debug_family_names,
        c10_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_d_nargin, 0U, c10_sf_marshallOut,
        c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_d_nargout, 1U,
        c10_sf_marshallOut, c10_sf_marshallIn);
      if (!chartInstance->c10_dataWrittenToVector[10U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(26U, 4U, 29U,
          *chartInstance->c10_sfEvent, false);
      }

      *chartInstance->c10_sdt += 0.002;
      chartInstance->c10_dataWrittenToVector[10U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c10_sdt, 26U, 4U, 29U,
                            *chartInstance->c10_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 13U,
                   *chartInstance->c10_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_ec_debug_family_names,
        c10_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_c_nargin, 0U, c10_sf_marshallOut,
        c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_c_nargout, 1U,
        c10_sf_marshallOut, c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_c_out, 2U, c10_b_sf_marshallOut,
        c10_b_sf_marshallIn);
      if (CV_EML_COND(13, 0, 0, CV_RELATIONAL_EVAL(5U, 13U, 0,
            *chartInstance->c10_sddw, 1.0, -1, 0U, *chartInstance->c10_sddw ==
            1.0)) && CV_EML_COND(13, 0, 1, CV_RELATIONAL_EVAL(5U, 13U, 1,
            *chartInstance->c10_yjdw, 1.0, -1, 0U, *chartInstance->c10_yjdw ==
            1.0))) {
        CV_EML_MCDC(13, 0, 0, true);
        CV_EML_IF(13, 0, 0, true);
        c10_c_out = true;
      } else {
        CV_EML_MCDC(13, 0, 0, false);
        CV_EML_IF(13, 0, 0, false);
        c10_c_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c10_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 13U, *chartInstance->c10_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 29U, *chartInstance->c10_sfEvent);
        *chartInstance->c10_is_suoding = c10_IN_off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 27U, *chartInstance->c10_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_q_debug_family_names,
          c10_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_f_nargin, 0U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_f_nargout, 1U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        *chartInstance->c10_yjhx = 0.0;
        chartInstance->c10_dataWrittenToVector[2U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c10_yjhx, 18U, 4U, 27U,
                              *chartInstance->c10_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 47U,
                     *chartInstance->c10_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_gc_debug_family_names,
          c10_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_e_nargin, 0U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_e_nargout, 1U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_d_out, 2U,
          c10_b_sf_marshallOut, c10_b_sf_marshallIn);
        if (!chartInstance->c10_dataWrittenToVector[10U]) {
          _SFD_DATA_READ_BEFORE_WRITE_ERROR(26U, 5U, 47U,
            *chartInstance->c10_sfEvent, false);
        }

        c10_d_out = CV_EML_IF(47, 0, 0, CV_RELATIONAL_EVAL(5U, 47U, 0,
          *chartInstance->c10_sdt, 2.0, -1, 4U, *chartInstance->c10_sdt > 2.0));
        _SFD_SYMBOL_SCOPE_POP();
        if (c10_d_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 47U, *chartInstance->c10_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 29U, *chartInstance->c10_sfEvent);
          *chartInstance->c10_is_suoding = c10_IN_t1;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 30U, *chartInstance->c10_sfEvent);
          _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_s_debug_family_names,
            c10_b_debug_family_var_map);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_g_nargin, 0U,
            c10_sf_marshallOut, c10_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_g_nargout, 1U,
            c10_sf_marshallOut, c10_sf_marshallIn);
          *chartInstance->c10_sdyichang = 1.0;
          chartInstance->c10_dataWrittenToVector[16U] = true;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c10_sdyichang, 32U, 4U, 30U,
                                *chartInstance->c10_sfEvent, false);
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
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 29U,
                 *chartInstance->c10_sfEvent);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 29U, *chartInstance->c10_sfEvent);
}

static void c10_yajin(SFc10_kaiguangaiInstanceStruct *chartInstance)
{
  uint32_T c10_debug_family_var_map[3];
  real_T c10_nargin = 0.0;
  real_T c10_b_nargin = 0.0;
  real_T c10_nargout = 1.0;
  real_T c10_c_nargin = 0.0;
  real_T c10_b_nargout = 1.0;
  boolean_T c10_out;
  real_T c10_c_nargout = 1.0;
  boolean_T c10_b_out;
  uint32_T c10_b_debug_family_var_map[2];
  boolean_T c10_c_out;
  real_T c10_d_nargin = 0.0;
  real_T c10_d_nargout = 0.0;
  real_T c10_e_nargin = 0.0;
  real_T c10_f_nargin = 0.0;
  real_T c10_e_nargout = 1.0;
  real_T c10_f_nargout = 1.0;
  boolean_T c10_d_out;
  boolean_T c10_e_out;
  real_T c10_g_nargin = 0.0;
  real_T c10_g_nargout = 0.0;
  real_T c10_h_nargin = 0.0;
  real_T c10_i_nargin = 0.0;
  real_T c10_h_nargout = 0.0;
  real_T c10_i_nargout = 0.0;
  real_T c10_j_nargin = 0.0;
  real_T c10_j_nargout = 1.0;
  boolean_T c10_f_out;
  real_T c10_k_nargin = 0.0;
  real_T c10_l_nargin = 0.0;
  real_T c10_k_nargout = 0.0;
  real_T c10_l_nargout = 0.0;
  real_T c10_m_nargin = 0.0;
  real_T c10_m_nargout = 0.0;
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 32U, *chartInstance->c10_sfEvent);
  switch (*chartInstance->c10_is_yajin) {
   case c10_IN_off:
    CV_STATE_EVAL(32, 0, 1);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 32U,
                 *chartInstance->c10_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_mc_debug_family_names,
      c10_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_nargin, 0U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_nargout, 1U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_out, 2U, c10_b_sf_marshallOut,
      c10_b_sf_marshallIn);
    if (CV_EML_COND(32, 0, 0, CV_RELATIONAL_EVAL(5U, 32U, 0,
          *chartInstance->c10_b_yajin, 1.0, -1, 0U, *chartInstance->c10_b_yajin ==
          1.0)) && CV_EML_COND(32, 0, 1, CV_RELATIONAL_EVAL(5U, 32U, 1,
          *chartInstance->c10_ggdw1, 1.0, -1, 0U, *chartInstance->c10_ggdw1 ==
          1.0)) && CV_EML_COND(32, 0, 2, CV_RELATIONAL_EVAL(5U, 32U, 2,
          *chartInstance->c10_ggdw2, 1.0, -1, 0U, *chartInstance->c10_ggdw2 ==
          1.0)) && CV_EML_COND(32, 0, 3, CV_RELATIONAL_EVAL(5U, 32U, 3,
          *chartInstance->c10_jsdw, 1.0, -1, 0U, *chartInstance->c10_jsdw == 1.0))
        && CV_EML_COND(32, 0, 4, CV_RELATIONAL_EVAL(5U, 32U, 4,
          *chartInstance->c10_skdw, 1.0, -1, 0U, *chartInstance->c10_skdw == 1.0)))
    {
      CV_EML_MCDC(32, 0, 0, true);
      CV_EML_IF(32, 0, 0, true);
      c10_out = true;
    } else {
      CV_EML_MCDC(32, 0, 0, false);
      CV_EML_IF(32, 0, 0, false);
      c10_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c10_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 32U, *chartInstance->c10_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 33U, *chartInstance->c10_sfEvent);
      *chartInstance->c10_is_yajin = c10_IN_on;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 34U, *chartInstance->c10_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_w_debug_family_names,
        c10_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_i_nargin, 0U, c10_sf_marshallOut,
        c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_i_nargout, 1U,
        c10_sf_marshallOut, c10_sf_marshallIn);
      *chartInstance->c10_yjhx = 1.0;
      chartInstance->c10_dataWrittenToVector[2U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c10_yjhx, 18U, 4U, 34U,
                            *chartInstance->c10_sfEvent, false);
      *chartInstance->c10_yjyichang = 0.0;
      chartInstance->c10_dataWrittenToVector[19U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c10_yjyichang, 35U, 4U, 34U,
                            *chartInstance->c10_sfEvent, false);
      *chartInstance->c10_yjt = 0.0;
      chartInstance->c10_dataWrittenToVector[13U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c10_yjt, 29U, 4U, 34U,
                            *chartInstance->c10_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 33U,
                   *chartInstance->c10_sfEvent);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 33U, *chartInstance->c10_sfEvent);
    break;

   case c10_IN_on:
    CV_STATE_EVAL(32, 0, 2);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 33U, *chartInstance->c10_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 34U,
                 *chartInstance->c10_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_pc_debug_family_names,
      c10_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_c_nargin, 0U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_c_nargout, 1U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_c_out, 2U, c10_b_sf_marshallOut,
      c10_b_sf_marshallIn);
    if (CV_EML_COND(34, 0, 0, CV_RELATIONAL_EVAL(5U, 34U, 0,
          *chartInstance->c10_yjdw, 0.0, -1, 0U, *chartInstance->c10_yjdw == 0.0))
        && CV_EML_COND(34, 0, 1, CV_RELATIONAL_EVAL(5U, 34U, 1,
          *chartInstance->c10_sddw, 0.0, -1, 0U, *chartInstance->c10_sddw == 0.0)))
    {
      CV_EML_MCDC(34, 0, 0, true);
      CV_EML_IF(34, 0, 0, true);
      c10_c_out = true;
    } else {
      CV_EML_MCDC(34, 0, 0, false);
      CV_EML_IF(34, 0, 0, false);
      c10_c_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c10_c_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 34U, *chartInstance->c10_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 34U, *chartInstance->c10_sfEvent);
      *chartInstance->c10_is_yajin = c10_IN_t;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 35U, *chartInstance->c10_sfEvent);
      *chartInstance->c10_temporalCounter_i5 = 0U;
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_ab_debug_family_names,
        c10_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_h_nargin, 0U, c10_sf_marshallOut,
        c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_h_nargout, 1U,
        c10_sf_marshallOut, c10_sf_marshallIn);
      if (!chartInstance->c10_dataWrittenToVector[13U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(29U, 4U, 35U,
          *chartInstance->c10_sfEvent, false);
      }

      *chartInstance->c10_yjt += 0.002;
      chartInstance->c10_dataWrittenToVector[13U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c10_yjt, 29U, 4U, 35U,
                            *chartInstance->c10_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 31U,
                   *chartInstance->c10_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_lc_debug_family_names,
        c10_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_f_nargin, 0U, c10_sf_marshallOut,
        c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_f_nargout, 1U,
        c10_sf_marshallOut, c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_e_out, 2U, c10_b_sf_marshallOut,
        c10_b_sf_marshallIn);
      if (CV_EML_COND(31, 0, 0, CV_RELATIONAL_EVAL(5U, 31U, 0,
            *chartInstance->c10_yjdw, 1.0, -1, 0U, *chartInstance->c10_yjdw ==
            1.0)) && CV_EML_COND(31, 0, 1, CV_RELATIONAL_EVAL(5U, 31U, 1,
            *chartInstance->c10_sddw, 1.0, -1, 0U, *chartInstance->c10_sddw ==
            1.0))) {
        CV_EML_MCDC(31, 0, 0, true);
        CV_EML_IF(31, 0, 0, true);
        c10_e_out = true;
      } else {
        CV_EML_MCDC(31, 0, 0, false);
        CV_EML_IF(31, 0, 0, false);
        c10_e_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c10_e_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 31U, *chartInstance->c10_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 34U, *chartInstance->c10_sfEvent);
        *chartInstance->c10_is_yajin = c10_IN_off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 33U, *chartInstance->c10_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_v_debug_family_names,
          c10_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_l_nargin, 0U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_l_nargout, 1U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        *chartInstance->c10_yjhx = 0.0;
        chartInstance->c10_dataWrittenToVector[2U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c10_yjhx, 18U, 4U, 33U,
                              *chartInstance->c10_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 58U,
                     *chartInstance->c10_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_nc_debug_family_names,
          c10_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_j_nargin, 0U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_j_nargout, 1U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_f_out, 2U,
          c10_b_sf_marshallOut, c10_b_sf_marshallIn);
        if (!chartInstance->c10_dataWrittenToVector[12U]) {
          _SFD_DATA_READ_BEFORE_WRITE_ERROR(28U, 5U, 58U,
            *chartInstance->c10_sfEvent, false);
        }

        c10_f_out = CV_EML_IF(58, 0, 0, CV_RELATIONAL_EVAL(5U, 58U, 0,
          *chartInstance->c10_ggt, 12.0, -1, 4U, *chartInstance->c10_ggt > 12.0));
        _SFD_SYMBOL_SCOPE_POP();
        if (c10_f_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 58U, *chartInstance->c10_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 34U, *chartInstance->c10_sfEvent);
          *chartInstance->c10_is_yajin = c10_IN_t3;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 37U, *chartInstance->c10_sfEvent);
          _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_x_debug_family_names,
            c10_b_debug_family_var_map);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_m_nargin, 0U,
            c10_sf_marshallOut, c10_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_m_nargout, 1U,
            c10_sf_marshallOut, c10_sf_marshallIn);
          *chartInstance->c10_yjyichang = 1.0;
          chartInstance->c10_dataWrittenToVector[19U] = true;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c10_yjyichang, 35U, 4U, 37U,
                                *chartInstance->c10_sfEvent, false);
          _SFD_SYMBOL_SCOPE_POP();
        } else {
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 34U,
                       *chartInstance->c10_sfEvent);
        }
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 34U, *chartInstance->c10_sfEvent);
    break;

   case c10_IN_t:
    CV_STATE_EVAL(32, 0, 3);
    c10_d_t(chartInstance);
    break;

   case c10_IN_t2:
    CV_STATE_EVAL(32, 0, 4);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 60U,
                 *chartInstance->c10_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_qc_debug_family_names,
      c10_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_b_nargin, 0U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_b_nargout, 1U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_b_out, 2U, c10_b_sf_marshallOut,
      c10_b_sf_marshallIn);
    if (CV_EML_COND(60, 0, 0, CV_RELATIONAL_EVAL(5U, 60U, 0,
          *chartInstance->c10_yjdw, 0.0, -1, 0U, *chartInstance->c10_yjdw == 0.0))
        && CV_EML_COND(60, 0, 1, CV_RELATIONAL_EVAL(5U, 60U, 1,
          *chartInstance->c10_sddw, 0.0, -1, 0U, *chartInstance->c10_sddw == 0.0)))
    {
      CV_EML_MCDC(60, 0, 0, true);
      CV_EML_IF(60, 0, 0, true);
      c10_b_out = true;
    } else {
      CV_EML_MCDC(60, 0, 0, false);
      CV_EML_IF(60, 0, 0, false);
      c10_b_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c10_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 60U, *chartInstance->c10_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 36U, *chartInstance->c10_sfEvent);
      *chartInstance->c10_is_yajin = c10_IN_t2;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 36U, *chartInstance->c10_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_y_debug_family_names,
        c10_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_g_nargin, 0U, c10_sf_marshallOut,
        c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_g_nargout, 1U,
        c10_sf_marshallOut, c10_sf_marshallIn);
      if (!chartInstance->c10_dataWrittenToVector[13U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(29U, 4U, 36U,
          *chartInstance->c10_sfEvent, false);
      }

      *chartInstance->c10_yjt += 0.002;
      chartInstance->c10_dataWrittenToVector[13U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c10_yjt, 29U, 4U, 36U,
                            *chartInstance->c10_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 61U,
                   *chartInstance->c10_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_kc_debug_family_names,
        c10_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_e_nargin, 0U, c10_sf_marshallOut,
        c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_e_nargout, 1U,
        c10_sf_marshallOut, c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_d_out, 2U, c10_b_sf_marshallOut,
        c10_b_sf_marshallIn);
      if (CV_EML_COND(61, 0, 0, CV_RELATIONAL_EVAL(5U, 61U, 0,
            *chartInstance->c10_yjdw, 1.0, -1, 0U, *chartInstance->c10_yjdw ==
            1.0)) && CV_EML_COND(61, 0, 1, CV_RELATIONAL_EVAL(5U, 61U, 1,
            *chartInstance->c10_sddw, 1.0, -1, 0U, *chartInstance->c10_sddw ==
            1.0))) {
        CV_EML_MCDC(61, 0, 0, true);
        CV_EML_IF(61, 0, 0, true);
        c10_d_out = true;
      } else {
        CV_EML_MCDC(61, 0, 0, false);
        CV_EML_IF(61, 0, 0, false);
        c10_d_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c10_d_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 61U, *chartInstance->c10_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 36U, *chartInstance->c10_sfEvent);
        *chartInstance->c10_is_yajin = c10_IN_off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 33U, *chartInstance->c10_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_v_debug_family_names,
          c10_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_k_nargin, 0U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_k_nargout, 1U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        *chartInstance->c10_yjhx = 0.0;
        chartInstance->c10_dataWrittenToVector[2U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c10_yjhx, 18U, 4U, 33U,
                              *chartInstance->c10_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 36U,
                     *chartInstance->c10_sfEvent);
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 36U, *chartInstance->c10_sfEvent);
    break;

   case c10_IN_t3:
    CV_STATE_EVAL(32, 0, 5);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 59U, *chartInstance->c10_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 37U, *chartInstance->c10_sfEvent);
    *chartInstance->c10_is_yajin = c10_IN_t2;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 36U, *chartInstance->c10_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_y_debug_family_names,
      c10_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_d_nargin, 0U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_d_nargout, 1U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    if (!chartInstance->c10_dataWrittenToVector[13U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(29U, 4U, 36U,
        *chartInstance->c10_sfEvent, false);
    }

    *chartInstance->c10_yjt += 0.002;
    chartInstance->c10_dataWrittenToVector[13U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c10_yjt, 29U, 4U, 36U,
                          *chartInstance->c10_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 37U, *chartInstance->c10_sfEvent);
    break;

   default:
    CV_STATE_EVAL(32, 0, 0);

    /* Unreachable state, for coverage only */
    *chartInstance->c10_is_yajin = c10_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 33U, *chartInstance->c10_sfEvent);
    break;
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 32U, *chartInstance->c10_sfEvent);
}

static void c10_d_t(SFc10_kaiguangaiInstanceStruct *chartInstance)
{
  uint32_T c10_debug_family_var_map[3];
  real_T c10_nargin = 0.0;
  real_T c10_nargout = 1.0;
  boolean_T c10_out;
  real_T c10_b_nargin = 0.0;
  real_T c10_b_nargout = 1.0;
  boolean_T c10_b_out;
  real_T c10_c_nargin = 0.0;
  real_T c10_c_nargout = 1.0;
  boolean_T c10_c_out;
  uint32_T c10_b_debug_family_var_map[2];
  real_T c10_d_nargin = 0.0;
  real_T c10_d_nargout = 0.0;
  real_T c10_e_nargin = 0.0;
  real_T c10_e_nargout = 1.0;
  boolean_T c10_d_out;
  real_T c10_f_nargin = 0.0;
  real_T c10_f_nargout = 0.0;
  real_T c10_g_nargin = 0.0;
  real_T c10_g_nargout = 0.0;
  boolean_T guard1 = false;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 35U,
               *chartInstance->c10_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_oc_debug_family_names,
    c10_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_nargin, 0U, c10_sf_marshallOut,
    c10_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_nargout, 1U, c10_sf_marshallOut,
    c10_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_out, 2U, c10_b_sf_marshallOut,
    c10_b_sf_marshallIn);
  c10_out = CV_EML_IF(35, 0, 0, *chartInstance->c10_temporalCounter_i5 >= 1);
  _SFD_SYMBOL_SCOPE_POP();
  guard1 = false;
  if (c10_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 35U, *chartInstance->c10_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 34U,
                 *chartInstance->c10_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_pc_debug_family_names,
      c10_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_b_nargin, 0U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_b_nargout, 1U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_b_out, 2U, c10_b_sf_marshallOut,
      c10_b_sf_marshallIn);
    if (CV_EML_COND(34, 0, 0, CV_RELATIONAL_EVAL(5U, 34U, 0,
          *chartInstance->c10_yjdw, 0.0, -1, 0U, *chartInstance->c10_yjdw == 0.0))
        && CV_EML_COND(34, 0, 1, CV_RELATIONAL_EVAL(5U, 34U, 1,
          *chartInstance->c10_sddw, 0.0, -1, 0U, *chartInstance->c10_sddw == 0.0)))
    {
      CV_EML_MCDC(34, 0, 0, true);
      CV_EML_IF(34, 0, 0, true);
      c10_b_out = true;
    } else {
      CV_EML_MCDC(34, 0, 0, false);
      CV_EML_IF(34, 0, 0, false);
      c10_b_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c10_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 34U, *chartInstance->c10_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 35U, *chartInstance->c10_sfEvent);
      *chartInstance->c10_is_yajin = c10_IN_t;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 35U, *chartInstance->c10_sfEvent);
      *chartInstance->c10_temporalCounter_i5 = 0U;
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_ab_debug_family_names,
        c10_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_d_nargin, 0U, c10_sf_marshallOut,
        c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_d_nargout, 1U,
        c10_sf_marshallOut, c10_sf_marshallIn);
      if (!chartInstance->c10_dataWrittenToVector[13U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(29U, 4U, 35U,
          *chartInstance->c10_sfEvent, false);
      }

      *chartInstance->c10_yjt += 0.002;
      chartInstance->c10_dataWrittenToVector[13U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c10_yjt, 29U, 4U, 35U,
                            *chartInstance->c10_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 31U,
                   *chartInstance->c10_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_lc_debug_family_names,
        c10_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_c_nargin, 0U, c10_sf_marshallOut,
        c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_c_nargout, 1U,
        c10_sf_marshallOut, c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_c_out, 2U, c10_b_sf_marshallOut,
        c10_b_sf_marshallIn);
      if (CV_EML_COND(31, 0, 0, CV_RELATIONAL_EVAL(5U, 31U, 0,
            *chartInstance->c10_yjdw, 1.0, -1, 0U, *chartInstance->c10_yjdw ==
            1.0)) && CV_EML_COND(31, 0, 1, CV_RELATIONAL_EVAL(5U, 31U, 1,
            *chartInstance->c10_sddw, 1.0, -1, 0U, *chartInstance->c10_sddw ==
            1.0))) {
        CV_EML_MCDC(31, 0, 0, true);
        CV_EML_IF(31, 0, 0, true);
        c10_c_out = true;
      } else {
        CV_EML_MCDC(31, 0, 0, false);
        CV_EML_IF(31, 0, 0, false);
        c10_c_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c10_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 31U, *chartInstance->c10_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 35U, *chartInstance->c10_sfEvent);
        *chartInstance->c10_is_yajin = c10_IN_off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 33U, *chartInstance->c10_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_v_debug_family_names,
          c10_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_f_nargin, 0U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_f_nargout, 1U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        *chartInstance->c10_yjhx = 0.0;
        chartInstance->c10_dataWrittenToVector[2U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c10_yjhx, 18U, 4U, 33U,
                              *chartInstance->c10_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 58U,
                     *chartInstance->c10_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_nc_debug_family_names,
          c10_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_e_nargin, 0U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_e_nargout, 1U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_d_out, 2U,
          c10_b_sf_marshallOut, c10_b_sf_marshallIn);
        if (!chartInstance->c10_dataWrittenToVector[12U]) {
          _SFD_DATA_READ_BEFORE_WRITE_ERROR(28U, 5U, 58U,
            *chartInstance->c10_sfEvent, false);
        }

        c10_d_out = CV_EML_IF(58, 0, 0, CV_RELATIONAL_EVAL(5U, 58U, 0,
          *chartInstance->c10_ggt, 12.0, -1, 4U, *chartInstance->c10_ggt > 12.0));
        _SFD_SYMBOL_SCOPE_POP();
        if (c10_d_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 58U, *chartInstance->c10_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 35U, *chartInstance->c10_sfEvent);
          *chartInstance->c10_is_yajin = c10_IN_t3;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 37U, *chartInstance->c10_sfEvent);
          _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_x_debug_family_names,
            c10_b_debug_family_var_map);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_g_nargin, 0U,
            c10_sf_marshallOut, c10_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_g_nargout, 1U,
            c10_sf_marshallOut, c10_sf_marshallIn);
          *chartInstance->c10_yjyichang = 1.0;
          chartInstance->c10_dataWrittenToVector[19U] = true;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c10_yjyichang, 35U, 4U, 37U,
                                *chartInstance->c10_sfEvent, false);
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
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 35U,
                 *chartInstance->c10_sfEvent);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 35U, *chartInstance->c10_sfEvent);
}

static void c10_guangai(SFc10_kaiguangaiInstanceStruct *chartInstance)
{
  uint32_T c10_debug_family_var_map[3];
  real_T c10_nargin = 0.0;
  real_T c10_b_nargin = 0.0;
  real_T c10_nargout = 1.0;
  real_T c10_c_nargin = 0.0;
  real_T c10_b_nargout = 1.0;
  boolean_T c10_out;
  real_T c10_c_nargout = 1.0;
  uint32_T c10_b_debug_family_var_map[2];
  boolean_T c10_b_out;
  boolean_T c10_c_out;
  real_T c10_d_nargin = 0.0;
  real_T c10_d_nargout = 0.0;
  real_T c10_e_nargin = 0.0;
  real_T c10_f_nargin = 0.0;
  real_T c10_e_nargout = 1.0;
  real_T c10_f_nargout = 1.0;
  boolean_T c10_d_out;
  boolean_T c10_e_out;
  real_T c10_g_nargin = 0.0;
  real_T c10_h_nargin = 0.0;
  real_T c10_g_nargout = 0.0;
  real_T c10_h_nargout = 0.0;
  real_T c10_i_nargin = 0.0;
  real_T c10_i_nargout = 0.0;
  real_T c10_j_nargin = 0.0;
  real_T c10_j_nargout = 1.0;
  boolean_T c10_f_out;
  real_T c10_k_nargin = 0.0;
  real_T c10_k_nargout = 0.0;
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U, *chartInstance->c10_sfEvent);
  switch (*chartInstance->c10_is_guangai) {
   case c10_IN_off:
    CV_STATE_EVAL(3, 0, 1);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 26U,
                 *chartInstance->c10_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_tc_debug_family_names,
      c10_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_nargin, 0U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_nargout, 1U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_out, 2U, c10_b_sf_marshallOut,
      c10_b_sf_marshallIn);
    if (CV_EML_COND(26, 0, 0, CV_RELATIONAL_EVAL(5U, 26U, 0,
          *chartInstance->c10_b_guangai, 1.0, -1, 0U,
          *chartInstance->c10_b_guangai == 1.0)) && CV_EML_COND(26, 0, 1,
         CV_RELATIONAL_EVAL(5U, 26U, 1, *chartInstance->c10_skdw, 1.0, -1, 0U,
                            *chartInstance->c10_skdw == 1.0)) && CV_EML_COND(26,
         0, 2, CV_RELATIONAL_EVAL(5U, 26U, 2, *chartInstance->c10_jsdw, 1.0, -1,
          0U, *chartInstance->c10_jsdw == 1.0))) {
      CV_EML_MCDC(26, 0, 0, true);
      CV_EML_IF(26, 0, 0, true);
      c10_out = true;
    } else {
      CV_EML_MCDC(26, 0, 0, false);
      CV_EML_IF(26, 0, 0, false);
      c10_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c10_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 26U, *chartInstance->c10_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c10_sfEvent);
      *chartInstance->c10_is_guangai = c10_IN_on;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c10_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_cb_debug_family_names,
        c10_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_h_nargin, 0U, c10_sf_marshallOut,
        c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_h_nargout, 1U,
        c10_sf_marshallOut, c10_sf_marshallIn);
      *chartInstance->c10_gghx = 1.0;
      chartInstance->c10_dataWrittenToVector[3U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c10_gghx, 19U, 4U, 5U,
                            *chartInstance->c10_sfEvent, false);
      *chartInstance->c10_ggzhiling1 = 1.0;
      chartInstance->c10_dataWrittenToVector[6U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c10_ggzhiling1, 22U, 4U, 5U,
                            *chartInstance->c10_sfEvent, false);
      *chartInstance->c10_ggzhiling2 = 1.0;
      chartInstance->c10_dataWrittenToVector[7U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c10_ggzhiling2, 23U, 4U, 5U,
                            *chartInstance->c10_sfEvent, false);
      *chartInstance->c10_ggyichang = 0.0;
      chartInstance->c10_dataWrittenToVector[18U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c10_ggyichang, 34U, 4U, 5U,
                            *chartInstance->c10_sfEvent, false);
      *chartInstance->c10_ggt = 0.0;
      chartInstance->c10_dataWrittenToVector[12U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c10_ggt, 28U, 4U, 5U,
                            *chartInstance->c10_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 4U,
                   *chartInstance->c10_sfEvent);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, *chartInstance->c10_sfEvent);
    break;

   case c10_IN_on:
    CV_STATE_EVAL(3, 0, 2);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 28U, *chartInstance->c10_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 27U,
                 *chartInstance->c10_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_wc_debug_family_names,
      c10_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_c_nargin, 0U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_c_nargout, 1U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_c_out, 2U, c10_b_sf_marshallOut,
      c10_b_sf_marshallIn);
    if (CV_EML_COND(27, 0, 0, CV_RELATIONAL_EVAL(5U, 27U, 0,
          *chartInstance->c10_ggdw1, 0.0, -1, 0U, *chartInstance->c10_ggdw1 ==
          0.0)) && CV_EML_COND(27, 0, 1, CV_RELATIONAL_EVAL(5U, 27U, 1,
          *chartInstance->c10_ggdw2, 0.0, -1, 0U, *chartInstance->c10_ggdw2 ==
          0.0))) {
      CV_EML_MCDC(27, 0, 0, true);
      CV_EML_IF(27, 0, 0, true);
      c10_c_out = true;
    } else {
      CV_EML_MCDC(27, 0, 0, false);
      CV_EML_IF(27, 0, 0, false);
      c10_c_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c10_c_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 27U, *chartInstance->c10_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c10_sfEvent);
      *chartInstance->c10_is_guangai = c10_IN_t;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c10_sfEvent);
      *chartInstance->c10_temporalCounter_i6 = 0U;
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_fb_debug_family_names,
        c10_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_i_nargin, 0U, c10_sf_marshallOut,
        c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_i_nargout, 1U,
        c10_sf_marshallOut, c10_sf_marshallIn);
      if (!chartInstance->c10_dataWrittenToVector[12U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(28U, 4U, 6U,
          *chartInstance->c10_sfEvent, false);
      }

      *chartInstance->c10_ggt += 0.002;
      chartInstance->c10_dataWrittenToVector[12U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c10_ggt, 28U, 4U, 6U,
                            *chartInstance->c10_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 25U,
                   *chartInstance->c10_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_sc_debug_family_names,
        c10_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_f_nargin, 0U, c10_sf_marshallOut,
        c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_f_nargout, 1U,
        c10_sf_marshallOut, c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_e_out, 2U, c10_b_sf_marshallOut,
        c10_b_sf_marshallIn);
      if (CV_EML_COND(25, 0, 0, CV_RELATIONAL_EVAL(5U, 25U, 0,
            *chartInstance->c10_ggdw1, 1.0, -1, 0U, *chartInstance->c10_ggdw1 ==
            1.0)) && CV_EML_COND(25, 0, 1, CV_RELATIONAL_EVAL(5U, 25U, 1,
            *chartInstance->c10_ggdw2, 1.0, -1, 0U, *chartInstance->c10_ggdw2 ==
            1.0))) {
        CV_EML_MCDC(25, 0, 0, true);
        CV_EML_IF(25, 0, 0, true);
        c10_e_out = true;
      } else {
        CV_EML_MCDC(25, 0, 0, false);
        CV_EML_IF(25, 0, 0, false);
        c10_e_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c10_e_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 25U, *chartInstance->c10_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c10_sfEvent);
        *chartInstance->c10_is_guangai = c10_IN_off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c10_sfEvent);
        c10_b_enter_atomic_off(chartInstance);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 54U,
                     *chartInstance->c10_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_uc_debug_family_names,
          c10_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_j_nargin, 0U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_j_nargout, 1U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_f_out, 2U,
          c10_b_sf_marshallOut, c10_b_sf_marshallIn);
        if (!chartInstance->c10_dataWrittenToVector[12U]) {
          _SFD_DATA_READ_BEFORE_WRITE_ERROR(28U, 5U, 54U,
            *chartInstance->c10_sfEvent, false);
        }

        c10_f_out = CV_EML_IF(54, 0, 0, CV_RELATIONAL_EVAL(5U, 54U, 0,
          *chartInstance->c10_ggt, 12.0, -1, 4U, *chartInstance->c10_ggt > 12.0));
        _SFD_SYMBOL_SCOPE_POP();
        if (c10_f_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 54U, *chartInstance->c10_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c10_sfEvent);
          *chartInstance->c10_is_guangai = c10_IN_t1;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c10_sfEvent);
          _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_db_debug_family_names,
            c10_b_debug_family_var_map);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_k_nargin, 0U,
            c10_sf_marshallOut, c10_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_k_nargout, 1U,
            c10_sf_marshallOut, c10_sf_marshallIn);
          *chartInstance->c10_ggyichang = 1.0;
          chartInstance->c10_dataWrittenToVector[18U] = true;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c10_ggyichang, 34U, 4U, 7U,
                                *chartInstance->c10_sfEvent, false);
          _SFD_SYMBOL_SCOPE_POP();
        } else {
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 5U,
                       *chartInstance->c10_sfEvent);
        }
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 5U, *chartInstance->c10_sfEvent);
    break;

   case c10_IN_t:
    CV_STATE_EVAL(3, 0, 3);
    c10_e_t(chartInstance);
    break;

   case c10_IN_t1:
    CV_STATE_EVAL(3, 0, 4);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 55U, *chartInstance->c10_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c10_sfEvent);
    *chartInstance->c10_is_guangai = c10_b_IN_t2;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, *chartInstance->c10_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_eb_debug_family_names,
      c10_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_d_nargin, 0U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_d_nargout, 1U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    if (!chartInstance->c10_dataWrittenToVector[12U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(28U, 4U, 8U, *chartInstance->c10_sfEvent,
        false);
    }

    *chartInstance->c10_ggt += 0.002;
    chartInstance->c10_dataWrittenToVector[12U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c10_ggt, 28U, 4U, 8U,
                          *chartInstance->c10_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 7U, *chartInstance->c10_sfEvent);
    break;

   case c10_b_IN_t2:
    CV_STATE_EVAL(3, 0, 5);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 56U,
                 *chartInstance->c10_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_xc_debug_family_names,
      c10_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_b_nargin, 0U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_b_nargout, 1U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_b_out, 2U, c10_b_sf_marshallOut,
      c10_b_sf_marshallIn);
    if (CV_EML_COND(56, 0, 0, CV_RELATIONAL_EVAL(5U, 56U, 0,
          *chartInstance->c10_ggdw1, 0.0, -1, 0U, *chartInstance->c10_ggdw1 ==
          0.0)) && CV_EML_COND(56, 0, 1, CV_RELATIONAL_EVAL(5U, 56U, 1,
          *chartInstance->c10_ggdw2, 0.0, -1, 0U, *chartInstance->c10_ggdw2 ==
          0.0))) {
      CV_EML_MCDC(56, 0, 0, true);
      CV_EML_IF(56, 0, 0, true);
      c10_b_out = true;
    } else {
      CV_EML_MCDC(56, 0, 0, false);
      CV_EML_IF(56, 0, 0, false);
      c10_b_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c10_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 56U, *chartInstance->c10_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c10_sfEvent);
      *chartInstance->c10_is_guangai = c10_b_IN_t2;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, *chartInstance->c10_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_eb_debug_family_names,
        c10_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_g_nargin, 0U, c10_sf_marshallOut,
        c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_g_nargout, 1U,
        c10_sf_marshallOut, c10_sf_marshallIn);
      if (!chartInstance->c10_dataWrittenToVector[12U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(28U, 4U, 8U,
          *chartInstance->c10_sfEvent, false);
      }

      *chartInstance->c10_ggt += 0.002;
      chartInstance->c10_dataWrittenToVector[12U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c10_ggt, 28U, 4U, 8U,
                            *chartInstance->c10_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 57U,
                   *chartInstance->c10_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_rc_debug_family_names,
        c10_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_e_nargin, 0U, c10_sf_marshallOut,
        c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_e_nargout, 1U,
        c10_sf_marshallOut, c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_d_out, 2U, c10_b_sf_marshallOut,
        c10_b_sf_marshallIn);
      if (CV_EML_COND(57, 0, 0, CV_RELATIONAL_EVAL(5U, 57U, 0,
            *chartInstance->c10_ggdw1, 1.0, -1, 0U, *chartInstance->c10_ggdw1 ==
            1.0)) && CV_EML_COND(57, 0, 1, CV_RELATIONAL_EVAL(5U, 57U, 1,
            *chartInstance->c10_ggdw2, 1.0, -1, 0U, *chartInstance->c10_ggdw2 ==
            1.0))) {
        CV_EML_MCDC(57, 0, 0, true);
        CV_EML_IF(57, 0, 0, true);
        c10_d_out = true;
      } else {
        CV_EML_MCDC(57, 0, 0, false);
        CV_EML_IF(57, 0, 0, false);
        c10_d_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c10_d_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 57U, *chartInstance->c10_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c10_sfEvent);
        *chartInstance->c10_is_guangai = c10_IN_off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c10_sfEvent);
        c10_b_enter_atomic_off(chartInstance);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 8U,
                     *chartInstance->c10_sfEvent);
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 8U, *chartInstance->c10_sfEvent);
    break;

   default:
    CV_STATE_EVAL(3, 0, 0);

    /* Unreachable state, for coverage only */
    *chartInstance->c10_is_guangai = c10_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c10_sfEvent);
    break;
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, *chartInstance->c10_sfEvent);
}

static void c10_b_enter_atomic_off(SFc10_kaiguangaiInstanceStruct *chartInstance)
{
  uint32_T c10_debug_family_var_map[2];
  real_T c10_nargin = 0.0;
  real_T c10_nargout = 0.0;
  real_T c10_hoistedGlobal;
  const mxArray *c10_y = NULL;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_bb_debug_family_names,
    c10_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_nargin, 0U, c10_sf_marshallOut,
    c10_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_nargout, 1U, c10_sf_marshallOut,
    c10_sf_marshallIn);
  *chartInstance->c10_gghx = 0.0;
  chartInstance->c10_dataWrittenToVector[3U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c10_gghx, 19U, 4U, 4U,
                        *chartInstance->c10_sfEvent, false);
  *chartInstance->c10_ggzhiling1 = 0.0;
  chartInstance->c10_dataWrittenToVector[6U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c10_ggzhiling1, 22U, 4U, 4U,
                        *chartInstance->c10_sfEvent, false);
  *chartInstance->c10_ggzhiling2 = 0.0;
  chartInstance->c10_dataWrittenToVector[7U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c10_ggzhiling2, 23U, 4U, 4U,
                        *chartInstance->c10_sfEvent, false);
  if (!chartInstance->c10_dataWrittenToVector[7U]) {
    _SFD_DATA_READ_BEFORE_WRITE_ERROR(23U, 4U, 4U, *chartInstance->c10_sfEvent,
      false);
  }

  sf_mex_printf("%s =\\n", "ggzhiling2");
  c10_hoistedGlobal = *chartInstance->c10_ggzhiling2;
  c10_y = NULL;
  sf_mex_assign(&c10_y, sf_mex_create("y", &c10_hoistedGlobal, 0, 0U, 0U, 0U, 0),
                false);
  sf_mex_call_debug(sfGlobalDebugInstanceStruct, "disp", 0U, 1U, 14, c10_y);
  _SFD_SYMBOL_SCOPE_POP();
}

static void c10_e_t(SFc10_kaiguangaiInstanceStruct *chartInstance)
{
  uint32_T c10_debug_family_var_map[3];
  real_T c10_nargin = 0.0;
  real_T c10_nargout = 1.0;
  boolean_T c10_out;
  real_T c10_b_nargin = 0.0;
  real_T c10_b_nargout = 1.0;
  boolean_T c10_b_out;
  real_T c10_c_nargin = 0.0;
  real_T c10_c_nargout = 1.0;
  boolean_T c10_c_out;
  uint32_T c10_b_debug_family_var_map[2];
  real_T c10_d_nargin = 0.0;
  real_T c10_d_nargout = 0.0;
  real_T c10_e_nargin = 0.0;
  real_T c10_e_nargout = 1.0;
  boolean_T c10_d_out;
  real_T c10_f_nargin = 0.0;
  real_T c10_f_nargout = 0.0;
  boolean_T guard1 = false;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 29U,
               *chartInstance->c10_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_vc_debug_family_names,
    c10_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_nargin, 0U, c10_sf_marshallOut,
    c10_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_nargout, 1U, c10_sf_marshallOut,
    c10_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_out, 2U, c10_b_sf_marshallOut,
    c10_b_sf_marshallIn);
  c10_out = CV_EML_IF(29, 0, 0, *chartInstance->c10_temporalCounter_i6 >= 1);
  _SFD_SYMBOL_SCOPE_POP();
  guard1 = false;
  if (c10_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 29U, *chartInstance->c10_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 27U,
                 *chartInstance->c10_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_wc_debug_family_names,
      c10_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_b_nargin, 0U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_b_nargout, 1U, c10_sf_marshallOut,
      c10_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_b_out, 2U, c10_b_sf_marshallOut,
      c10_b_sf_marshallIn);
    if (CV_EML_COND(27, 0, 0, CV_RELATIONAL_EVAL(5U, 27U, 0,
          *chartInstance->c10_ggdw1, 0.0, -1, 0U, *chartInstance->c10_ggdw1 ==
          0.0)) && CV_EML_COND(27, 0, 1, CV_RELATIONAL_EVAL(5U, 27U, 1,
          *chartInstance->c10_ggdw2, 0.0, -1, 0U, *chartInstance->c10_ggdw2 ==
          0.0))) {
      CV_EML_MCDC(27, 0, 0, true);
      CV_EML_IF(27, 0, 0, true);
      c10_b_out = true;
    } else {
      CV_EML_MCDC(27, 0, 0, false);
      CV_EML_IF(27, 0, 0, false);
      c10_b_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c10_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 27U, *chartInstance->c10_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c10_sfEvent);
      *chartInstance->c10_is_guangai = c10_IN_t;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c10_sfEvent);
      *chartInstance->c10_temporalCounter_i6 = 0U;
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_fb_debug_family_names,
        c10_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_d_nargin, 0U, c10_sf_marshallOut,
        c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_d_nargout, 1U,
        c10_sf_marshallOut, c10_sf_marshallIn);
      if (!chartInstance->c10_dataWrittenToVector[12U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(28U, 4U, 6U,
          *chartInstance->c10_sfEvent, false);
      }

      *chartInstance->c10_ggt += 0.002;
      chartInstance->c10_dataWrittenToVector[12U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c10_ggt, 28U, 4U, 6U,
                            *chartInstance->c10_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 25U,
                   *chartInstance->c10_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_sc_debug_family_names,
        c10_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_c_nargin, 0U, c10_sf_marshallOut,
        c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_c_nargout, 1U,
        c10_sf_marshallOut, c10_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_c_out, 2U, c10_b_sf_marshallOut,
        c10_b_sf_marshallIn);
      if (CV_EML_COND(25, 0, 0, CV_RELATIONAL_EVAL(5U, 25U, 0,
            *chartInstance->c10_ggdw1, 1.0, -1, 0U, *chartInstance->c10_ggdw1 ==
            1.0)) && CV_EML_COND(25, 0, 1, CV_RELATIONAL_EVAL(5U, 25U, 1,
            *chartInstance->c10_ggdw2, 1.0, -1, 0U, *chartInstance->c10_ggdw2 ==
            1.0))) {
        CV_EML_MCDC(25, 0, 0, true);
        CV_EML_IF(25, 0, 0, true);
        c10_c_out = true;
      } else {
        CV_EML_MCDC(25, 0, 0, false);
        CV_EML_IF(25, 0, 0, false);
        c10_c_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c10_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 25U, *chartInstance->c10_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c10_sfEvent);
        *chartInstance->c10_is_guangai = c10_IN_off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c10_sfEvent);
        c10_b_enter_atomic_off(chartInstance);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 54U,
                     *chartInstance->c10_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c10_uc_debug_family_names,
          c10_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_e_nargin, 0U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_e_nargout, 1U,
          c10_sf_marshallOut, c10_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_d_out, 2U,
          c10_b_sf_marshallOut, c10_b_sf_marshallIn);
        if (!chartInstance->c10_dataWrittenToVector[12U]) {
          _SFD_DATA_READ_BEFORE_WRITE_ERROR(28U, 5U, 54U,
            *chartInstance->c10_sfEvent, false);
        }

        c10_d_out = CV_EML_IF(54, 0, 0, CV_RELATIONAL_EVAL(5U, 54U, 0,
          *chartInstance->c10_ggt, 12.0, -1, 4U, *chartInstance->c10_ggt > 12.0));
        _SFD_SYMBOL_SCOPE_POP();
        if (c10_d_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 54U, *chartInstance->c10_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c10_sfEvent);
          *chartInstance->c10_is_guangai = c10_IN_t1;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c10_sfEvent);
          _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c10_db_debug_family_names,
            c10_b_debug_family_var_map);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_f_nargin, 0U,
            c10_sf_marshallOut, c10_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c10_f_nargout, 1U,
            c10_sf_marshallOut, c10_sf_marshallIn);
          *chartInstance->c10_ggyichang = 1.0;
          chartInstance->c10_dataWrittenToVector[18U] = true;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c10_ggyichang, 34U, 4U, 7U,
                                *chartInstance->c10_sfEvent, false);
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
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 6U,
                 *chartInstance->c10_sfEvent);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 6U, *chartInstance->c10_sfEvent);
}

static void init_script_number_translation(uint32_T c10_machineNumber, uint32_T
  c10_chartNumber, uint32_T c10_instanceNumber)
{
  (void)c10_machineNumber;
  (void)c10_chartNumber;
  (void)c10_instanceNumber;
}

static const mxArray *c10_sf_marshallOut(void *chartInstanceVoid, void
  *c10_inData)
{
  const mxArray *c10_mxArrayOutData;
  real_T c10_u;
  const mxArray *c10_y = NULL;
  SFc10_kaiguangaiInstanceStruct *chartInstance;
  chartInstance = (SFc10_kaiguangaiInstanceStruct *)chartInstanceVoid;
  c10_mxArrayOutData = NULL;
  c10_mxArrayOutData = NULL;
  c10_u = *(real_T *)c10_inData;
  c10_y = NULL;
  sf_mex_assign(&c10_y, sf_mex_create("y", &c10_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c10_mxArrayOutData, c10_y, false);
  return c10_mxArrayOutData;
}

static real_T c10_emlrt_marshallIn(SFc10_kaiguangaiInstanceStruct *chartInstance,
  const mxArray *c10_nargout, const char_T *c10_identifier)
{
  real_T c10_y;
  emlrtMsgIdentifier c10_thisId;
  c10_thisId.fIdentifier = c10_identifier;
  c10_thisId.fParent = NULL;
  c10_thisId.bParentIsCell = false;
  c10_y = c10_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c10_nargout),
    &c10_thisId);
  sf_mex_destroy(&c10_nargout);
  return c10_y;
}

static real_T c10_b_emlrt_marshallIn(SFc10_kaiguangaiInstanceStruct
  *chartInstance, const mxArray *c10_u, const emlrtMsgIdentifier *c10_parentId)
{
  real_T c10_y;
  real_T c10_d0;
  (void)chartInstance;
  sf_mex_import(c10_parentId, sf_mex_dup(c10_u), &c10_d0, 1, 0, 0U, 0, 0U, 0);
  c10_y = c10_d0;
  sf_mex_destroy(&c10_u);
  return c10_y;
}

static void c10_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c10_mxArrayInData, const char_T *c10_varName, void *c10_outData)
{
  const mxArray *c10_nargout;
  const char_T *c10_identifier;
  emlrtMsgIdentifier c10_thisId;
  real_T c10_y;
  SFc10_kaiguangaiInstanceStruct *chartInstance;
  chartInstance = (SFc10_kaiguangaiInstanceStruct *)chartInstanceVoid;
  c10_nargout = sf_mex_dup(c10_mxArrayInData);
  c10_identifier = c10_varName;
  c10_thisId.fIdentifier = c10_identifier;
  c10_thisId.fParent = NULL;
  c10_thisId.bParentIsCell = false;
  c10_y = c10_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c10_nargout),
    &c10_thisId);
  sf_mex_destroy(&c10_nargout);
  *(real_T *)c10_outData = c10_y;
  sf_mex_destroy(&c10_mxArrayInData);
}

static const mxArray *c10_b_sf_marshallOut(void *chartInstanceVoid, void
  *c10_inData)
{
  const mxArray *c10_mxArrayOutData;
  boolean_T c10_u;
  const mxArray *c10_y = NULL;
  SFc10_kaiguangaiInstanceStruct *chartInstance;
  chartInstance = (SFc10_kaiguangaiInstanceStruct *)chartInstanceVoid;
  c10_mxArrayOutData = NULL;
  c10_mxArrayOutData = NULL;
  c10_u = *(boolean_T *)c10_inData;
  c10_y = NULL;
  sf_mex_assign(&c10_y, sf_mex_create("y", &c10_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c10_mxArrayOutData, c10_y, false);
  return c10_mxArrayOutData;
}

static boolean_T c10_c_emlrt_marshallIn(SFc10_kaiguangaiInstanceStruct
  *chartInstance, const mxArray *c10_u, const emlrtMsgIdentifier *c10_parentId)
{
  boolean_T c10_y;
  boolean_T c10_b0;
  (void)chartInstance;
  sf_mex_import(c10_parentId, sf_mex_dup(c10_u), &c10_b0, 1, 11, 0U, 0, 0U, 0);
  c10_y = c10_b0;
  sf_mex_destroy(&c10_u);
  return c10_y;
}

static void c10_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c10_mxArrayInData, const char_T *c10_varName, void *c10_outData)
{
  const mxArray *c10_sf_internal_predicateOutput;
  const char_T *c10_identifier;
  emlrtMsgIdentifier c10_thisId;
  boolean_T c10_y;
  SFc10_kaiguangaiInstanceStruct *chartInstance;
  chartInstance = (SFc10_kaiguangaiInstanceStruct *)chartInstanceVoid;
  c10_sf_internal_predicateOutput = sf_mex_dup(c10_mxArrayInData);
  c10_identifier = c10_varName;
  c10_thisId.fIdentifier = c10_identifier;
  c10_thisId.fParent = NULL;
  c10_thisId.bParentIsCell = false;
  c10_y = c10_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c10_sf_internal_predicateOutput), &c10_thisId);
  sf_mex_destroy(&c10_sf_internal_predicateOutput);
  *(boolean_T *)c10_outData = c10_y;
  sf_mex_destroy(&c10_mxArrayInData);
}

const mxArray *sf_c10_kaiguangai_get_eml_resolved_functions_info(void)
{
  const mxArray *c10_nameCaptureInfo = NULL;
  c10_nameCaptureInfo = NULL;
  sf_mex_assign(&c10_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c10_nameCaptureInfo;
}

static const mxArray *c10_c_sf_marshallOut(void *chartInstanceVoid, void
  *c10_inData)
{
  const mxArray *c10_mxArrayOutData;
  int32_T c10_u;
  const mxArray *c10_y = NULL;
  SFc10_kaiguangaiInstanceStruct *chartInstance;
  chartInstance = (SFc10_kaiguangaiInstanceStruct *)chartInstanceVoid;
  c10_mxArrayOutData = NULL;
  c10_mxArrayOutData = NULL;
  c10_u = *(int32_T *)c10_inData;
  c10_y = NULL;
  sf_mex_assign(&c10_y, sf_mex_create("y", &c10_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c10_mxArrayOutData, c10_y, false);
  return c10_mxArrayOutData;
}

static int32_T c10_d_emlrt_marshallIn(SFc10_kaiguangaiInstanceStruct
  *chartInstance, const mxArray *c10_u, const emlrtMsgIdentifier *c10_parentId)
{
  int32_T c10_y;
  int32_T c10_i1;
  (void)chartInstance;
  sf_mex_import(c10_parentId, sf_mex_dup(c10_u), &c10_i1, 1, 6, 0U, 0, 0U, 0);
  c10_y = c10_i1;
  sf_mex_destroy(&c10_u);
  return c10_y;
}

static void c10_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c10_mxArrayInData, const char_T *c10_varName, void *c10_outData)
{
  const mxArray *c10_b_sfEvent;
  const char_T *c10_identifier;
  emlrtMsgIdentifier c10_thisId;
  int32_T c10_y;
  SFc10_kaiguangaiInstanceStruct *chartInstance;
  chartInstance = (SFc10_kaiguangaiInstanceStruct *)chartInstanceVoid;
  c10_b_sfEvent = sf_mex_dup(c10_mxArrayInData);
  c10_identifier = c10_varName;
  c10_thisId.fIdentifier = c10_identifier;
  c10_thisId.fParent = NULL;
  c10_thisId.bParentIsCell = false;
  c10_y = c10_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c10_b_sfEvent),
    &c10_thisId);
  sf_mex_destroy(&c10_b_sfEvent);
  *(int32_T *)c10_outData = c10_y;
  sf_mex_destroy(&c10_mxArrayInData);
}

static const mxArray *c10_d_sf_marshallOut(void *chartInstanceVoid, void
  *c10_inData)
{
  const mxArray *c10_mxArrayOutData;
  uint8_T c10_u;
  const mxArray *c10_y = NULL;
  SFc10_kaiguangaiInstanceStruct *chartInstance;
  chartInstance = (SFc10_kaiguangaiInstanceStruct *)chartInstanceVoid;
  c10_mxArrayOutData = NULL;
  c10_mxArrayOutData = NULL;
  c10_u = *(uint8_T *)c10_inData;
  c10_y = NULL;
  sf_mex_assign(&c10_y, sf_mex_create("y", &c10_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c10_mxArrayOutData, c10_y, false);
  return c10_mxArrayOutData;
}

static uint8_T c10_e_emlrt_marshallIn(SFc10_kaiguangaiInstanceStruct
  *chartInstance, const mxArray *c10_b_is_songkai, const char_T *c10_identifier)
{
  uint8_T c10_y;
  emlrtMsgIdentifier c10_thisId;
  c10_thisId.fIdentifier = c10_identifier;
  c10_thisId.fParent = NULL;
  c10_thisId.bParentIsCell = false;
  c10_y = c10_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c10_b_is_songkai),
    &c10_thisId);
  sf_mex_destroy(&c10_b_is_songkai);
  return c10_y;
}

static uint8_T c10_f_emlrt_marshallIn(SFc10_kaiguangaiInstanceStruct
  *chartInstance, const mxArray *c10_u, const emlrtMsgIdentifier *c10_parentId)
{
  uint8_T c10_y;
  uint8_T c10_u0;
  (void)chartInstance;
  sf_mex_import(c10_parentId, sf_mex_dup(c10_u), &c10_u0, 1, 3, 0U, 0, 0U, 0);
  c10_y = c10_u0;
  sf_mex_destroy(&c10_u);
  return c10_y;
}

static void c10_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c10_mxArrayInData, const char_T *c10_varName, void *c10_outData)
{
  const mxArray *c10_b_is_songkai;
  const char_T *c10_identifier;
  emlrtMsgIdentifier c10_thisId;
  uint8_T c10_y;
  SFc10_kaiguangaiInstanceStruct *chartInstance;
  chartInstance = (SFc10_kaiguangaiInstanceStruct *)chartInstanceVoid;
  c10_b_is_songkai = sf_mex_dup(c10_mxArrayInData);
  c10_identifier = c10_varName;
  c10_thisId.fIdentifier = c10_identifier;
  c10_thisId.fParent = NULL;
  c10_thisId.bParentIsCell = false;
  c10_y = c10_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c10_b_is_songkai),
    &c10_thisId);
  sf_mex_destroy(&c10_b_is_songkai);
  *(uint8_T *)c10_outData = c10_y;
  sf_mex_destroy(&c10_mxArrayInData);
}

static void c10_g_emlrt_marshallIn(SFc10_kaiguangaiInstanceStruct *chartInstance,
  const mxArray *c10_b_dataWrittenToVector, const char_T *c10_identifier,
  boolean_T c10_y[20])
{
  emlrtMsgIdentifier c10_thisId;
  c10_thisId.fIdentifier = c10_identifier;
  c10_thisId.fParent = NULL;
  c10_thisId.bParentIsCell = false;
  c10_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c10_b_dataWrittenToVector),
    &c10_thisId, c10_y);
  sf_mex_destroy(&c10_b_dataWrittenToVector);
}

static void c10_h_emlrt_marshallIn(SFc10_kaiguangaiInstanceStruct *chartInstance,
  const mxArray *c10_u, const emlrtMsgIdentifier *c10_parentId, boolean_T c10_y
  [20])
{
  boolean_T c10_bv1[20];
  int32_T c10_i2;
  (void)chartInstance;
  sf_mex_import(c10_parentId, sf_mex_dup(c10_u), c10_bv1, 1, 11, 0U, 1, 0U, 1,
                20);
  for (c10_i2 = 0; c10_i2 < 20; c10_i2++) {
    c10_y[c10_i2] = c10_bv1[c10_i2];
  }

  sf_mex_destroy(&c10_u);
}

static const mxArray *c10_i_emlrt_marshallIn(SFc10_kaiguangaiInstanceStruct
  *chartInstance, const mxArray *c10_b_setSimStateSideEffectsInfo, const char_T *
  c10_identifier)
{
  const mxArray *c10_y = NULL;
  emlrtMsgIdentifier c10_thisId;
  c10_y = NULL;
  c10_thisId.fIdentifier = c10_identifier;
  c10_thisId.fParent = NULL;
  c10_thisId.bParentIsCell = false;
  sf_mex_assign(&c10_y, c10_j_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c10_b_setSimStateSideEffectsInfo), &c10_thisId), false);
  sf_mex_destroy(&c10_b_setSimStateSideEffectsInfo);
  return c10_y;
}

static const mxArray *c10_j_emlrt_marshallIn(SFc10_kaiguangaiInstanceStruct
  *chartInstance, const mxArray *c10_u, const emlrtMsgIdentifier *c10_parentId)
{
  const mxArray *c10_y = NULL;
  (void)chartInstance;
  (void)c10_parentId;
  c10_y = NULL;
  sf_mex_assign(&c10_y, sf_mex_duplicatearraysafe(&c10_u), false);
  sf_mex_destroy(&c10_u);
  return c10_y;
}

static const mxArray *sf_get_hover_data_for_msg(SFc10_kaiguangaiInstanceStruct
  *chartInstance, int32_T c10_ssid)
{
  const mxArray *c10_msgInfo;
  (void)chartInstance;
  (void)c10_ssid;
  c10_msgInfo = NULL;
  return NULL;
}

static void c10_init_sf_message_store_memory(SFc10_kaiguangaiInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_dsm_address_info(SFc10_kaiguangaiInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc10_kaiguangaiInstanceStruct
  *chartInstance)
{
  chartInstance->c10_sfEvent = (int32_T *)ssGetDWork_wrapper(chartInstance->S, 0);
  chartInstance->c10_is_active_c10_kaiguangai = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 1);
  chartInstance->c10_is_c10_kaiguangai = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 2);
  chartInstance->c10_is_songkai = (uint8_T *)ssGetDWork_wrapper(chartInstance->S,
    3);
  chartInstance->c10_is_active_songkai = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 4);
  chartInstance->c10_is_kaigai = (uint8_T *)ssGetDWork_wrapper(chartInstance->S,
    5);
  chartInstance->c10_is_active_kaigai = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 6);
  chartInstance->c10_is_jiesuo = (uint8_T *)ssGetDWork_wrapper(chartInstance->S,
    7);
  chartInstance->c10_is_active_jiesuo = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 8);
  chartInstance->c10_is_suoding = (uint8_T *)ssGetDWork_wrapper(chartInstance->S,
    9);
  chartInstance->c10_is_active_suoding = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 10);
  chartInstance->c10_is_yajin = (uint8_T *)ssGetDWork_wrapper(chartInstance->S,
    11);
  chartInstance->c10_is_active_yajin = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 12);
  chartInstance->c10_is_guangai = (uint8_T *)ssGetDWork_wrapper(chartInstance->S,
    13);
  chartInstance->c10_is_active_guangai = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 14);
  chartInstance->c10_start = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c10_kgdw1 = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c10_kgdw2 = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c10_ggdw1 = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c10_ggdw2 = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c10_sddw = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 5);
  chartInstance->c10_jsdw = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 6);
  chartInstance->c10_yjdw = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 7);
  chartInstance->c10_skdw = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 8);
  chartInstance->c10_b_songkai = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 9);
  chartInstance->c10_b_kaigai = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 10);
  chartInstance->c10_b_suoding = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 11);
  chartInstance->c10_b_jiesuo = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 12);
  chartInstance->c10_skhx = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c10_kghx = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c10_yjhx = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c10_gghx = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c10_kgzhiling1 = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 5);
  chartInstance->c10_kgzhiling2 = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 6);
  chartInstance->c10_ggzhiling1 = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 7);
  chartInstance->c10_ggzhiling2 = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 8);
  chartInstance->c10_skt = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 9);
  chartInstance->c10_kgt = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 10);
  chartInstance->c10_sdt = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 11);
  chartInstance->c10_jst = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 12);
  chartInstance->c10_ggt = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 13);
  chartInstance->c10_b_guangai = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 13);
  chartInstance->c10_b_yajin = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 14);
  chartInstance->c10_yjt = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 14);
  chartInstance->c10_skyichang = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 15);
  chartInstance->c10_kgyichang = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 16);
  chartInstance->c10_sdyichang = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 17);
  chartInstance->c10_jsyichang = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 18);
  chartInstance->c10_jieshu = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 15);
  chartInstance->c10_ggyichang = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 19);
  chartInstance->c10_yjyichang = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 20);
  chartInstance->c10_temporalCounter_i1 = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 15);
  chartInstance->c10_temporalCounter_i2 = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 16);
  chartInstance->c10_temporalCounter_i3 = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 17);
  chartInstance->c10_temporalCounter_i4 = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 18);
  chartInstance->c10_temporalCounter_i5 = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 19);
  chartInstance->c10_temporalCounter_i6 = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 20);
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
void sf_c10_kaiguangai_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3407483584U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2556237556U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2051621155U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(80230010U);
}

mxArray* sf_c10_kaiguangai_get_post_codegen_info(void);
mxArray *sf_c10_kaiguangai_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("JWmoQtbrXa3BYzutUlmjWF");
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

    mxArray *mxData = mxCreateStructMatrix(1,20,3,dataFields);

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

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,16,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,16,"type",mxType);
    }

    mxSetField(mxData,16,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,17,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,17,"type",mxType);
    }

    mxSetField(mxData,17,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,18,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,18,"type",mxType);
    }

    mxSetField(mxData,18,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,19,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,19,"type",mxType);
    }

    mxSetField(mxData,19,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  {
    mxArray* mxPostCodegenInfo = sf_c10_kaiguangai_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c10_kaiguangai_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c10_kaiguangai_jit_fallback_info(void)
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

mxArray *sf_c10_kaiguangai_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c10_kaiguangai_get_post_codegen_info(void)
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

static const mxArray *sf_get_sim_state_info_c10_kaiguangai(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x10'type','srcId','name','auxInfo'{{M[1],M[100],T\"gghx\",},{M[1],M[101],T\"ggt\",},{M[1],M[166],T\"ggyichang\",},{M[1],M[102],T\"ggzhiling1\",},{M[1],M[103],T\"ggzhiling2\",},{M[1],M[106],T\"jst\",},{M[1],M[167],T\"jsyichang\",},{M[1],M[110],T\"kghx\",},{M[1],M[111],T\"kgt\",},{M[1],M[168],T\"kgyichang\",}}",
    "100 S1x10'type','srcId','name','auxInfo'{{M[1],M[112],T\"kgzhiling1\",},{M[1],M[113],T\"kgzhiling2\",},{M[1],M[114],T\"sdt\",},{M[1],M[169],T\"sdyichang\",},{M[1],M[30],T\"skhx\",},{M[1],M[31],T\"skt\",},{M[1],M[170],T\"skyichang\",},{M[1],M[117],T\"yjhx\",},{M[1],M[118],T\"yjt\",},{M[1],M[171],T\"yjyichang\",}}",
    "100 S1x10'type','srcId','name','auxInfo'{{M[8],M[0],T\"is_active_c10_kaiguangai\",},{M[8],M[1],T\"is_active_songkai\",},{M[8],M[32],T\"is_active_kaigai\",},{M[8],M[53],T\"is_active_suoding\",},{M[8],M[63],T\"is_active_jiesuo\",},{M[8],M[86],T\"is_active_guangai\",},{M[8],M[87],T\"is_active_yajin\",},{M[9],M[0],T\"is_c10_kaiguangai\",},{M[9],M[1],T\"is_songkai\",},{M[9],M[32],T\"is_kaigai\",}}",
    "100 S1x10'type','srcId','name','auxInfo'{{M[9],M[53],T\"is_suoding\",},{M[9],M[63],T\"is_jiesuo\",},{M[9],M[86],T\"is_guangai\",},{M[9],M[87],T\"is_yajin\",},{M[11],M[0],T\"temporalCounter_i1\",S'et','os','ct'{{T\"wu\",M[21],M[1]}}},{M[11],M[0],T\"temporalCounter_i2\",S'et','os','ct'{{T\"wu\",M[41],M[1]}}},{M[11],M[0],T\"temporalCounter_i4\",S'et','os','ct'{{T\"wu\",M[52],M[1]}}},{M[11],M[0],T\"temporalCounter_i3\",S'et','os','ct'{{T\"wu\",M[64],M[1]}}},{M[11],M[0],T\"temporalCounter_i6\",S'et','os','ct'{{T\"wu\",M[85],M[1]}}},{M[11],M[0],T\"temporalCounter_i5\",S'et','os','ct'{{T\"wu\",M[96],M[1]}}}}",
    "100 S'type','srcId','name','auxInfo'{{M[15],M[0],T\"dataWrittenToVector\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 41, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c10_kaiguangai_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const mxArray* sf_opaque_get_hover_data_for_msg(void* chartInstance,
  int32_T msgSSID)
{
  return sf_get_hover_data_for_msg( (SFc10_kaiguangaiInstanceStruct *)
    chartInstance, msgSSID);
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc10_kaiguangaiInstanceStruct *chartInstance =
      (SFc10_kaiguangaiInstanceStruct *)sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _kaiguangaiMachineNumber_,
           10,
           38,
           62,
           0,
           36,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"start");
          _SFD_SET_DATA_PROPS(1,1,1,0,"kgdw1");
          _SFD_SET_DATA_PROPS(2,1,1,0,"kgdw2");
          _SFD_SET_DATA_PROPS(3,1,1,0,"ggdw1");
          _SFD_SET_DATA_PROPS(4,1,1,0,"ggdw2");
          _SFD_SET_DATA_PROPS(5,1,1,0,"sddw");
          _SFD_SET_DATA_PROPS(6,1,1,0,"jsdw");
          _SFD_SET_DATA_PROPS(7,1,1,0,"yjdw");
          _SFD_SET_DATA_PROPS(8,1,1,0,"skdw");
          _SFD_SET_DATA_PROPS(9,1,1,0,"songkai");
          _SFD_SET_DATA_PROPS(10,1,1,0,"kaigai");
          _SFD_SET_DATA_PROPS(11,1,1,0,"suoding");
          _SFD_SET_DATA_PROPS(12,1,1,0,"jiesuo");
          _SFD_SET_DATA_PROPS(13,1,1,0,"guangai");
          _SFD_SET_DATA_PROPS(14,1,1,0,"yajin");
          _SFD_SET_DATA_PROPS(15,1,1,0,"jieshu");
          _SFD_SET_DATA_PROPS(16,2,0,1,"skhx");
          _SFD_SET_DATA_PROPS(17,2,0,1,"kghx");
          _SFD_SET_DATA_PROPS(18,2,0,1,"yjhx");
          _SFD_SET_DATA_PROPS(19,2,0,1,"gghx");
          _SFD_SET_DATA_PROPS(20,2,0,1,"kgzhiling1");
          _SFD_SET_DATA_PROPS(21,2,0,1,"kgzhiling2");
          _SFD_SET_DATA_PROPS(22,2,0,1,"ggzhiling1");
          _SFD_SET_DATA_PROPS(23,2,0,1,"ggzhiling2");
          _SFD_SET_DATA_PROPS(24,2,0,1,"skt");
          _SFD_SET_DATA_PROPS(25,2,0,1,"kgt");
          _SFD_SET_DATA_PROPS(26,2,0,1,"sdt");
          _SFD_SET_DATA_PROPS(27,2,0,1,"jst");
          _SFD_SET_DATA_PROPS(28,2,0,1,"ggt");
          _SFD_SET_DATA_PROPS(29,2,0,1,"yjt");
          _SFD_SET_DATA_PROPS(30,2,0,1,"skyichang");
          _SFD_SET_DATA_PROPS(31,2,0,1,"kgyichang");
          _SFD_SET_DATA_PROPS(32,2,0,1,"sdyichang");
          _SFD_SET_DATA_PROPS(33,2,0,1,"jsyichang");
          _SFD_SET_DATA_PROPS(34,2,0,1,"ggyichang");
          _SFD_SET_DATA_PROPS(35,2,0,1,"yjyichang");
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,1,0);
          _SFD_STATE_INFO(3,0,1);
          _SFD_STATE_INFO(4,0,0);
          _SFD_STATE_INFO(5,0,0);
          _SFD_STATE_INFO(6,0,0);
          _SFD_STATE_INFO(7,0,0);
          _SFD_STATE_INFO(8,0,0);
          _SFD_STATE_INFO(9,0,1);
          _SFD_STATE_INFO(10,0,0);
          _SFD_STATE_INFO(11,0,0);
          _SFD_STATE_INFO(12,0,0);
          _SFD_STATE_INFO(13,0,0);
          _SFD_STATE_INFO(14,0,0);
          _SFD_STATE_INFO(15,0,1);
          _SFD_STATE_INFO(16,0,0);
          _SFD_STATE_INFO(17,0,0);
          _SFD_STATE_INFO(18,0,0);
          _SFD_STATE_INFO(19,0,0);
          _SFD_STATE_INFO(20,0,0);
          _SFD_STATE_INFO(21,0,1);
          _SFD_STATE_INFO(22,0,0);
          _SFD_STATE_INFO(23,0,0);
          _SFD_STATE_INFO(24,0,0);
          _SFD_STATE_INFO(25,0,0);
          _SFD_STATE_INFO(26,0,1);
          _SFD_STATE_INFO(27,0,0);
          _SFD_STATE_INFO(28,0,0);
          _SFD_STATE_INFO(29,0,0);
          _SFD_STATE_INFO(30,0,0);
          _SFD_STATE_INFO(31,0,0);
          _SFD_STATE_INFO(32,0,1);
          _SFD_STATE_INFO(33,0,0);
          _SFD_STATE_INFO(34,0,0);
          _SFD_STATE_INFO(35,0,0);
          _SFD_STATE_INFO(36,0,0);
          _SFD_STATE_INFO(37,0,0);
          _SFD_CH_SUBSTATE_COUNT(3);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,1);
          _SFD_CH_SUBSTATE_INDEX(2,2);
          _SFD_ST_SUBSTATE_COUNT(0,0);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,6);
          _SFD_ST_SUBSTATE_INDEX(2,0,21);
          _SFD_ST_SUBSTATE_INDEX(2,1,15);
          _SFD_ST_SUBSTATE_INDEX(2,2,26);
          _SFD_ST_SUBSTATE_INDEX(2,3,9);
          _SFD_ST_SUBSTATE_INDEX(2,4,3);
          _SFD_ST_SUBSTATE_INDEX(2,5,32);
          _SFD_ST_SUBSTATE_COUNT(21,4);
          _SFD_ST_SUBSTATE_INDEX(21,0,22);
          _SFD_ST_SUBSTATE_INDEX(21,1,23);
          _SFD_ST_SUBSTATE_INDEX(21,2,24);
          _SFD_ST_SUBSTATE_INDEX(21,3,25);
          _SFD_ST_SUBSTATE_COUNT(22,0);
          _SFD_ST_SUBSTATE_COUNT(23,0);
          _SFD_ST_SUBSTATE_COUNT(24,0);
          _SFD_ST_SUBSTATE_COUNT(25,0);
          _SFD_ST_SUBSTATE_COUNT(15,5);
          _SFD_ST_SUBSTATE_INDEX(15,0,16);
          _SFD_ST_SUBSTATE_INDEX(15,1,17);
          _SFD_ST_SUBSTATE_INDEX(15,2,18);
          _SFD_ST_SUBSTATE_INDEX(15,3,19);
          _SFD_ST_SUBSTATE_INDEX(15,4,20);
          _SFD_ST_SUBSTATE_COUNT(16,0);
          _SFD_ST_SUBSTATE_COUNT(17,0);
          _SFD_ST_SUBSTATE_COUNT(18,0);
          _SFD_ST_SUBSTATE_COUNT(19,0);
          _SFD_ST_SUBSTATE_COUNT(20,0);
          _SFD_ST_SUBSTATE_COUNT(26,5);
          _SFD_ST_SUBSTATE_INDEX(26,0,27);
          _SFD_ST_SUBSTATE_INDEX(26,1,28);
          _SFD_ST_SUBSTATE_INDEX(26,2,29);
          _SFD_ST_SUBSTATE_INDEX(26,3,30);
          _SFD_ST_SUBSTATE_INDEX(26,4,31);
          _SFD_ST_SUBSTATE_COUNT(27,0);
          _SFD_ST_SUBSTATE_COUNT(28,0);
          _SFD_ST_SUBSTATE_COUNT(29,0);
          _SFD_ST_SUBSTATE_COUNT(30,0);
          _SFD_ST_SUBSTATE_COUNT(31,0);
          _SFD_ST_SUBSTATE_COUNT(9,5);
          _SFD_ST_SUBSTATE_INDEX(9,0,10);
          _SFD_ST_SUBSTATE_INDEX(9,1,11);
          _SFD_ST_SUBSTATE_INDEX(9,2,12);
          _SFD_ST_SUBSTATE_INDEX(9,3,13);
          _SFD_ST_SUBSTATE_INDEX(9,4,14);
          _SFD_ST_SUBSTATE_COUNT(10,0);
          _SFD_ST_SUBSTATE_COUNT(11,0);
          _SFD_ST_SUBSTATE_COUNT(12,0);
          _SFD_ST_SUBSTATE_COUNT(13,0);
          _SFD_ST_SUBSTATE_COUNT(14,0);
          _SFD_ST_SUBSTATE_COUNT(3,5);
          _SFD_ST_SUBSTATE_INDEX(3,0,4);
          _SFD_ST_SUBSTATE_INDEX(3,1,5);
          _SFD_ST_SUBSTATE_INDEX(3,2,6);
          _SFD_ST_SUBSTATE_INDEX(3,3,7);
          _SFD_ST_SUBSTATE_INDEX(3,4,8);
          _SFD_ST_SUBSTATE_COUNT(4,0);
          _SFD_ST_SUBSTATE_COUNT(5,0);
          _SFD_ST_SUBSTATE_COUNT(6,0);
          _SFD_ST_SUBSTATE_COUNT(7,0);
          _SFD_ST_SUBSTATE_COUNT(8,0);
          _SFD_ST_SUBSTATE_COUNT(32,5);
          _SFD_ST_SUBSTATE_INDEX(32,0,33);
          _SFD_ST_SUBSTATE_INDEX(32,1,34);
          _SFD_ST_SUBSTATE_INDEX(32,2,35);
          _SFD_ST_SUBSTATE_INDEX(32,3,36);
          _SFD_ST_SUBSTATE_INDEX(32,4,37);
          _SFD_ST_SUBSTATE_COUNT(33,0);
          _SFD_ST_SUBSTATE_COUNT(34,0);
          _SFD_ST_SUBSTATE_COUNT(35,0);
          _SFD_ST_SUBSTATE_COUNT(36,0);
          _SFD_ST_SUBSTATE_COUNT(37,0);
        }

        _SFD_CV_INIT_CHART(3,1,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(1,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(2,6,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(3,5,1,1,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(4,0,0,0,0,0,NULL,NULL);
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
          _SFD_CV_INIT_STATE(9,5,1,1,0,0,NULL,NULL);
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
          _SFD_CV_INIT_STATE(13,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(14,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(15,5,1,1,0,0,NULL,NULL);
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

        {
          _SFD_CV_INIT_STATE(19,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(20,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(21,4,1,1,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(22,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(23,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(24,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(25,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(26,5,1,1,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(27,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(28,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(29,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(30,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(31,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(32,5,1,1,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(33,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(34,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(35,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(36,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(37,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(36,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(37,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(38,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(41,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(4,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(1,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(2,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(5,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(39,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(3,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(40,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(6,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(44,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(7,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(8,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(9,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(43,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(11,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(10,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(45,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(42,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(18,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(53,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(19,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(22,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(20,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(50,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(21,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(23,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(51,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(52,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(12,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(48,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(13,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(14,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(16,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(47,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(17,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(15,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(49,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(46,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(30,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(61,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(31,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(32,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(33,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(58,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(35,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(34,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(59,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(60,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(24,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(57,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(25,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(26,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(28,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(54,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(29,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(27,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(55,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(56,0,NULL,NULL,0,NULL);

        /* Initialization of MATLAB Function Model Coverage */
        _SFD_CV_INIT_EML(0,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(22,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(23,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(24,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(1,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(25,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(16,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(17,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(18,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(19,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(20,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(10,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(11,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(12,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(13,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(14,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(27,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(28,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(30,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(31,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(29,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(33,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(34,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(37,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(36,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(35,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(4,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(5,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(7,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(8,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(6,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(41,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(41,0,0,1,17,1,17);

        {
          static int condStart[] = { 1, 10 };

          static int condEnd[] = { 8, 17 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(41,0,0,1,17,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(41,0,0,1,8,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(41,0,1,10,17,-1,0);
        _SFD_CV_INIT_EML(4,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(4,0,0,1,17,1,17);

        {
          static int condStart[] = { 1, 10 };

          static int condEnd[] = { 8, 17 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(4,0,0,1,17,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(4,0,0,1,8,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(4,0,1,10,17,-1,0);
        _SFD_CV_INIT_EML(1,0,0,0,1,0,0,0,0,0,3,1);
        _SFD_CV_INIT_EML_IF(1,0,0,1,29,1,29);

        {
          static int condStart[] = { 1, 13, 22 };

          static int condEnd[] = { 11, 20, 29 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3 };

          _SFD_CV_INIT_EML_MCDC(1,0,0,1,29,3,0,&(condStart[0]),&(condEnd[0]),5,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(1,0,0,1,11,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(1,0,1,13,20,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(1,0,2,22,29,-1,0);
        _SFD_CV_INIT_EML(39,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(39,0,0,1,6,1,6);
        _SFD_CV_INIT_EML_RELATIONAL(39,0,0,1,6,-1,4);
        _SFD_CV_INIT_EML(5,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(5,0,0,0,13,0,13);
        _SFD_CV_INIT_EML(3,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(3,0,0,1,8,1,8);
        _SFD_CV_INIT_EML_RELATIONAL(3,0,0,1,8,-1,0);
        _SFD_CV_INIT_EML(38,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(38,0,0,1,10,1,10);
        _SFD_CV_INIT_EML_RELATIONAL(38,0,0,1,10,-1,0);
        _SFD_CV_INIT_EML(40,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(40,0,0,1,8,1,8);
        _SFD_CV_INIT_EML_RELATIONAL(40,0,0,1,8,-1,0);
        _SFD_CV_INIT_EML(44,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(44,0,0,1,19,1,19);

        {
          static int condStart[] = { 1, 11 };

          static int condEnd[] = { 9, 19 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(44,0,0,1,19,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(44,0,0,1,9,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(44,0,1,11,19,-1,0);
        _SFD_CV_INIT_EML(7,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(7,0,0,1,19,1,19);

        {
          static int condStart[] = { 1, 11 };

          static int condEnd[] = { 9, 19 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(7,0,0,1,19,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(7,0,0,1,9,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(7,0,1,11,19,-1,0);
        _SFD_CV_INIT_EML(8,0,0,0,1,0,0,0,0,0,3,1);
        _SFD_CV_INIT_EML_IF(8,0,0,1,28,1,28);

        {
          static int condStart[] = { 1, 12, 21 };

          static int condEnd[] = { 10, 19, 28 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3 };

          _SFD_CV_INIT_EML_MCDC(8,0,0,1,28,3,0,&(condStart[0]),&(condEnd[0]),5,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(8,0,0,1,10,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(8,0,1,12,19,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(8,0,2,21,28,-1,0);
        _SFD_CV_INIT_EML(43,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(43,0,0,1,7,1,7);
        _SFD_CV_INIT_EML_RELATIONAL(43,0,0,1,7,-1,4);
        _SFD_CV_INIT_EML(11,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(11,0,0,0,13,0,13);
        _SFD_CV_INIT_EML(10,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(10,0,0,1,19,1,19);

        {
          static int condStart[] = { 1, 11 };

          static int condEnd[] = { 9, 19 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(10,0,0,1,19,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(10,0,0,1,9,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(10,0,1,11,19,-1,0);
        _SFD_CV_INIT_EML(42,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(42,0,0,1,19,1,19);

        {
          static int condStart[] = { 1, 11 };

          static int condEnd[] = { 9, 19 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(42,0,0,1,19,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(42,0,0,1,9,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(42,0,1,11,19,-1,0);
        _SFD_CV_INIT_EML(53,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(53,0,0,1,17,1,17);

        {
          static int condStart[] = { 1, 10 };

          static int condEnd[] = { 8, 17 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(53,0,0,1,17,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(53,0,0,1,8,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(53,0,1,10,17,-1,0);
        _SFD_CV_INIT_EML(19,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(19,0,0,1,17,1,17);

        {
          static int condStart[] = { 1, 10 };

          static int condEnd[] = { 8, 17 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(19,0,0,1,17,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(19,0,0,1,8,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(19,0,1,10,17,-1,0);
        _SFD_CV_INIT_EML(22,0,0,0,1,0,0,0,0,0,5,1);
        _SFD_CV_INIT_EML_IF(22,0,0,1,48,1,48);

        {
          static int condStart[] = { 1, 12, 21, 30, 40 };

          static int condEnd[] = { 10, 19, 28, 38, 48 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3 };

          _SFD_CV_INIT_EML_MCDC(22,0,0,1,48,5,0,&(condStart[0]),&(condEnd[0]),9,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(22,0,0,1,10,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(22,0,1,12,19,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(22,0,2,21,28,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(22,0,3,30,38,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(22,0,4,40,48,-1,0);
        _SFD_CV_INIT_EML(50,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(50,0,0,1,6,1,6);
        _SFD_CV_INIT_EML_RELATIONAL(50,0,0,1,6,-1,4);
        _SFD_CV_INIT_EML(21,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(21,0,0,0,13,0,13);
        _SFD_CV_INIT_EML(23,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(23,0,0,1,17,1,17);

        {
          static int condStart[] = { 1, 10 };

          static int condEnd[] = { 8, 17 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(23,0,0,1,17,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(23,0,0,1,8,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(23,0,1,10,17,-1,0);
        _SFD_CV_INIT_EML(52,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(52,0,0,1,17,1,17);

        {
          static int condStart[] = { 1, 10 };

          static int condEnd[] = { 8, 17 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(52,0,0,1,17,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(52,0,0,1,8,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(52,0,1,10,17,-1,0);
        _SFD_CV_INIT_EML(48,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(48,0,0,1,17,1,17);

        {
          static int condStart[] = { 1, 10 };

          static int condEnd[] = { 8, 17 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(48,0,0,1,17,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(48,0,0,1,8,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(48,0,1,10,17,-1,0);
        _SFD_CV_INIT_EML(13,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(13,0,0,1,17,1,17);

        {
          static int condStart[] = { 1, 10 };

          static int condEnd[] = { 8, 17 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(13,0,0,1,17,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(13,0,0,1,8,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(13,0,1,10,17,-1,0);
        _SFD_CV_INIT_EML(14,0,0,0,1,0,0,0,0,0,5,1);
        _SFD_CV_INIT_EML_IF(14,0,0,1,49,1,48);

        {
          static int condStart[] = { 1, 13, 22, 31, 41 };

          static int condEnd[] = { 11, 20, 29, 39, 49 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3 };

          _SFD_CV_INIT_EML_MCDC(14,0,0,1,49,5,0,&(condStart[0]),&(condEnd[0]),9,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(14,0,0,1,11,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(14,0,1,13,20,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(14,0,2,22,29,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(14,0,3,31,39,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(14,0,4,41,49,-1,0);
        _SFD_CV_INIT_EML(47,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(47,0,0,1,6,1,6);
        _SFD_CV_INIT_EML_RELATIONAL(47,0,0,1,6,-1,4);
        _SFD_CV_INIT_EML(17,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(17,0,0,0,13,0,13);
        _SFD_CV_INIT_EML(15,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(15,0,0,1,17,1,17);

        {
          static int condStart[] = { 1, 10 };

          static int condEnd[] = { 8, 17 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(15,0,0,1,17,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(15,0,0,1,8,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(15,0,1,10,17,-1,0);
        _SFD_CV_INIT_EML(46,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(46,0,0,1,17,1,17);

        {
          static int condStart[] = { 1, 10 };

          static int condEnd[] = { 8, 17 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(46,0,0,1,17,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(46,0,0,1,8,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(46,0,1,10,17,-1,0);
        _SFD_CV_INIT_EML(61,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(61,0,0,1,17,1,17);

        {
          static int condStart[] = { 1, 10 };

          static int condEnd[] = { 8, 17 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(61,0,0,1,17,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(61,0,0,1,8,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(61,0,1,10,17,-1,0);
        _SFD_CV_INIT_EML(31,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(31,0,0,1,17,1,17);

        {
          static int condStart[] = { 1, 10 };

          static int condEnd[] = { 8, 17 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(31,0,0,1,17,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(31,0,0,1,8,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(31,0,1,10,17,-1,0);
        _SFD_CV_INIT_EML(32,0,0,0,1,0,0,0,0,0,5,1);
        _SFD_CV_INIT_EML_IF(32,0,0,1,47,1,47);

        {
          static int condStart[] = { 1, 11, 21, 31, 40 };

          static int condEnd[] = { 9, 19, 29, 38, 47 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3 };

          _SFD_CV_INIT_EML_MCDC(32,0,0,1,47,5,0,&(condStart[0]),&(condEnd[0]),9,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(32,0,0,1,9,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(32,0,1,11,19,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(32,0,2,21,29,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(32,0,3,31,38,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(32,0,4,40,47,-1,0);
        _SFD_CV_INIT_EML(58,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(58,0,0,1,7,1,7);
        _SFD_CV_INIT_EML_RELATIONAL(58,0,0,1,7,-1,4);
        _SFD_CV_INIT_EML(35,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(35,0,0,0,13,0,13);
        _SFD_CV_INIT_EML(34,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(34,0,0,1,17,1,17);

        {
          static int condStart[] = { 1, 10 };

          static int condEnd[] = { 8, 17 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(34,0,0,1,17,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(34,0,0,1,8,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(34,0,1,10,17,-1,0);
        _SFD_CV_INIT_EML(60,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(60,0,0,1,17,1,17);

        {
          static int condStart[] = { 1, 10 };

          static int condEnd[] = { 8, 17 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(60,0,0,1,17,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(60,0,0,1,8,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(60,0,1,10,17,-1,0);
        _SFD_CV_INIT_EML(57,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(57,0,0,1,19,1,19);

        {
          static int condStart[] = { 1, 11 };

          static int condEnd[] = { 9, 19 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(57,0,0,1,19,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(57,0,0,1,9,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(57,0,1,11,19,-1,0);
        _SFD_CV_INIT_EML(25,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(25,0,0,1,19,1,19);

        {
          static int condStart[] = { 1, 11 };

          static int condEnd[] = { 9, 19 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(25,0,0,1,19,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(25,0,0,1,9,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(25,0,1,11,19,-1,0);
        _SFD_CV_INIT_EML(26,0,0,0,1,0,0,0,0,0,3,1);
        _SFD_CV_INIT_EML_IF(26,0,0,1,29,1,29);

        {
          static int condStart[] = { 1, 13, 22 };

          static int condEnd[] = { 11, 20, 29 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3 };

          _SFD_CV_INIT_EML_MCDC(26,0,0,1,29,3,0,&(condStart[0]),&(condEnd[0]),5,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(26,0,0,1,11,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(26,0,1,13,20,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(26,0,2,22,29,-1,0);
        _SFD_CV_INIT_EML(54,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(54,0,0,1,7,1,7);
        _SFD_CV_INIT_EML_RELATIONAL(54,0,0,1,7,-1,4);
        _SFD_CV_INIT_EML(29,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(29,0,0,0,13,0,13);
        _SFD_CV_INIT_EML(27,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(27,0,0,1,19,1,19);

        {
          static int condStart[] = { 1, 11 };

          static int condEnd[] = { 9, 19 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(27,0,0,1,19,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(27,0,0,1,9,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(27,0,1,11,19,-1,0);
        _SFD_CV_INIT_EML(56,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(56,0,0,1,19,1,19);

        {
          static int condStart[] = { 1, 11 };

          static int condEnd[] = { 9, 19 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(56,0,0,1,19,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(56,0,0,1,9,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(56,0,1,11,19,-1,0);
        _SFD_CV_INIT_EML(37,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(37,0,0,1,20,1,20);

        {
          static int condStart[] = { 1, 11 };

          static int condEnd[] = { 9, 20 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(37,0,0,1,20,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(37,0,0,1,9,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(37,0,1,11,20,-1,0);
        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c10_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c10_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c10_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c10_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c10_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c10_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c10_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c10_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c10_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(9,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c10_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(10,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c10_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(11,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c10_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(12,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c10_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(13,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c10_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(14,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c10_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(15,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c10_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(16,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c10_sf_marshallOut,(MexInFcnForType)c10_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(17,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c10_sf_marshallOut,(MexInFcnForType)c10_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(18,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c10_sf_marshallOut,(MexInFcnForType)c10_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(19,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c10_sf_marshallOut,(MexInFcnForType)c10_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(20,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c10_sf_marshallOut,(MexInFcnForType)c10_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(21,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c10_sf_marshallOut,(MexInFcnForType)c10_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(22,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c10_sf_marshallOut,(MexInFcnForType)c10_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(23,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c10_sf_marshallOut,(MexInFcnForType)c10_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(24,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c10_sf_marshallOut,(MexInFcnForType)c10_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(25,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c10_sf_marshallOut,(MexInFcnForType)c10_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(26,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c10_sf_marshallOut,(MexInFcnForType)c10_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(27,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c10_sf_marshallOut,(MexInFcnForType)c10_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(28,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c10_sf_marshallOut,(MexInFcnForType)c10_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(29,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c10_sf_marshallOut,(MexInFcnForType)c10_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(30,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c10_sf_marshallOut,(MexInFcnForType)c10_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(31,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c10_sf_marshallOut,(MexInFcnForType)c10_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(32,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c10_sf_marshallOut,(MexInFcnForType)c10_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(33,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c10_sf_marshallOut,(MexInFcnForType)c10_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(34,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c10_sf_marshallOut,(MexInFcnForType)c10_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(35,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c10_sf_marshallOut,(MexInFcnForType)c10_sf_marshallIn);
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
    SFc10_kaiguangaiInstanceStruct *chartInstance =
      (SFc10_kaiguangaiInstanceStruct *)sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        _SFD_SET_DATA_VALUE_PTR(0U, chartInstance->c10_start);
        _SFD_SET_DATA_VALUE_PTR(1U, chartInstance->c10_kgdw1);
        _SFD_SET_DATA_VALUE_PTR(2U, chartInstance->c10_kgdw2);
        _SFD_SET_DATA_VALUE_PTR(3U, chartInstance->c10_ggdw1);
        _SFD_SET_DATA_VALUE_PTR(4U, chartInstance->c10_ggdw2);
        _SFD_SET_DATA_VALUE_PTR(5U, chartInstance->c10_sddw);
        _SFD_SET_DATA_VALUE_PTR(6U, chartInstance->c10_jsdw);
        _SFD_SET_DATA_VALUE_PTR(7U, chartInstance->c10_yjdw);
        _SFD_SET_DATA_VALUE_PTR(8U, chartInstance->c10_skdw);
        _SFD_SET_DATA_VALUE_PTR(9U, chartInstance->c10_b_songkai);
        _SFD_SET_DATA_VALUE_PTR(10U, chartInstance->c10_b_kaigai);
        _SFD_SET_DATA_VALUE_PTR(11U, chartInstance->c10_b_suoding);
        _SFD_SET_DATA_VALUE_PTR(12U, chartInstance->c10_b_jiesuo);
        _SFD_SET_DATA_VALUE_PTR(16U, chartInstance->c10_skhx);
        _SFD_SET_DATA_VALUE_PTR(17U, chartInstance->c10_kghx);
        _SFD_SET_DATA_VALUE_PTR(18U, chartInstance->c10_yjhx);
        _SFD_SET_DATA_VALUE_PTR(19U, chartInstance->c10_gghx);
        _SFD_SET_DATA_VALUE_PTR(20U, chartInstance->c10_kgzhiling1);
        _SFD_SET_DATA_VALUE_PTR(21U, chartInstance->c10_kgzhiling2);
        _SFD_SET_DATA_VALUE_PTR(22U, chartInstance->c10_ggzhiling1);
        _SFD_SET_DATA_VALUE_PTR(23U, chartInstance->c10_ggzhiling2);
        _SFD_SET_DATA_VALUE_PTR(24U, chartInstance->c10_skt);
        _SFD_SET_DATA_VALUE_PTR(25U, chartInstance->c10_kgt);
        _SFD_SET_DATA_VALUE_PTR(26U, chartInstance->c10_sdt);
        _SFD_SET_DATA_VALUE_PTR(27U, chartInstance->c10_jst);
        _SFD_SET_DATA_VALUE_PTR(28U, chartInstance->c10_ggt);
        _SFD_SET_DATA_VALUE_PTR(13U, chartInstance->c10_b_guangai);
        _SFD_SET_DATA_VALUE_PTR(14U, chartInstance->c10_b_yajin);
        _SFD_SET_DATA_VALUE_PTR(29U, chartInstance->c10_yjt);
        _SFD_SET_DATA_VALUE_PTR(30U, chartInstance->c10_skyichang);
        _SFD_SET_DATA_VALUE_PTR(31U, chartInstance->c10_kgyichang);
        _SFD_SET_DATA_VALUE_PTR(32U, chartInstance->c10_sdyichang);
        _SFD_SET_DATA_VALUE_PTR(33U, chartInstance->c10_jsyichang);
        _SFD_SET_DATA_VALUE_PTR(15U, chartInstance->c10_jieshu);
        _SFD_SET_DATA_VALUE_PTR(34U, chartInstance->c10_ggyichang);
        _SFD_SET_DATA_VALUE_PTR(35U, chartInstance->c10_yjyichang);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "s7OOtSW15lpCaw4HOBznp0G";
}

static void sf_check_dwork_consistency(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    const uint32_T *sfunDWorkChecksum = sf_get_sfun_dwork_checksum();
    mxArray *infoStruct = load_kaiguangai_optimization_info(sim_mode_is_rtw_gen
      (S), sim_mode_is_modelref_sim(S), sim_mode_is_external(S));
    mxArray* mxRTWDWorkChecksum = sf_get_dwork_info_from_mat_file(S,
      sf_get_instance_specialization(), infoStruct, 10, "dworkChecksum");
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

static void sf_opaque_initialize_c10_kaiguangai(void *chartInstanceVar)
{
  sf_check_dwork_consistency(((SFc10_kaiguangaiInstanceStruct*) chartInstanceVar)
    ->S);
  chart_debug_initialization(((SFc10_kaiguangaiInstanceStruct*) chartInstanceVar)
    ->S,0);
  initialize_params_c10_kaiguangai((SFc10_kaiguangaiInstanceStruct*)
    chartInstanceVar);
  initialize_c10_kaiguangai((SFc10_kaiguangaiInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c10_kaiguangai(void *chartInstanceVar)
{
  enable_c10_kaiguangai((SFc10_kaiguangaiInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c10_kaiguangai(void *chartInstanceVar)
{
  disable_c10_kaiguangai((SFc10_kaiguangaiInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c10_kaiguangai(void *chartInstanceVar)
{
  sf_gateway_c10_kaiguangai((SFc10_kaiguangaiInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_ext_mode_exec_c10_kaiguangai(void *chartInstanceVar)
{
  ext_mode_exec_c10_kaiguangai((SFc10_kaiguangaiInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c10_kaiguangai(SimStruct* S)
{
  return get_sim_state_c10_kaiguangai((SFc10_kaiguangaiInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c10_kaiguangai(SimStruct* S, const mxArray
  *st)
{
  set_sim_state_c10_kaiguangai((SFc10_kaiguangaiInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_terminate_c10_kaiguangai(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc10_kaiguangaiInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_kaiguangai_optimization_info();
    }

    finalize_c10_kaiguangai((SFc10_kaiguangaiInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc10_kaiguangai((SFc10_kaiguangaiInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c10_kaiguangai(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c10_kaiguangai((SFc10_kaiguangaiInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

mxArray *sf_c10_kaiguangai_get_testpoint_info(void)
{
  return NULL;
}

static void sf_set_sfun_dwork_info(SimStruct *S)
{
  const char *dworkEncStr[] = {
    "100 S1x10'type','isSigned','wordLength','bias','slope','exponent','isScaledDouble','isComplex','size','local_queue_dwork_idx','local_queue_id'{{T\"int32\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]}}",
    "100 S1x10'type','isSigned','wordLength','bias','slope','exponent','isScaledDouble','isComplex','size','local_queue_dwork_idx','local_queue_id'{{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]}}",
    "100 S'type','isSigned','wordLength','bias','slope','exponent','isScaledDouble','isComplex','size','local_queue_dwork_idx','local_queue_id'{{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]}}"
  };

  sf_set_encoded_dwork_info(S, dworkEncStr, 21, 10);
}

static uint32_T* sf_get_sfun_dwork_checksum()
{
  static uint32_T checksum[4] = { 3486814528U, 1766341130U, 3837412893U,
    1253172658U };

  return checksum;
}

static void mdlSetWorkWidths_c10_kaiguangai(SimStruct *S)
{
  ssSetStatesModifiedOnlyInUpdate(S, 0);
  ssMdlUpdateIsEmpty(S, 1);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_kaiguangai_optimization_info(sim_mode_is_rtw_gen
      (S), sim_mode_is_modelref_sim(S), sim_mode_is_external(S));
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      10);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,10,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_set_chart_accesses_machine_info(S, sf_get_instance_specialization(),
      infoStruct, 10);
    sf_update_buildInfo(S, sf_get_instance_specialization(),infoStruct,10);
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
        infoStruct,10,16);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,10,20);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=20; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 16; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,10);
    sf_register_codegen_names_for_scoped_functions_defined_by_chart(S);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
    sf_set_sfun_dwork_info(S);
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(1171998736U));
  ssSetChecksum1(S,(1828726978U));
  ssSetChecksum2(S,(2133864196U));
  ssSetChecksum3(S,(898417223U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSetStateSemanticsClassicAndSynchronous(S, true);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c10_kaiguangai(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c10_kaiguangai(SimStruct *S)
{
  SFc10_kaiguangaiInstanceStruct *chartInstance;
  chartInstance = (SFc10_kaiguangaiInstanceStruct *)utMalloc(sizeof
    (SFc10_kaiguangaiInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc10_kaiguangaiInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c10_kaiguangai;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c10_kaiguangai;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c10_kaiguangai;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c10_kaiguangai;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c10_kaiguangai;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c10_kaiguangai;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c10_kaiguangai;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c10_kaiguangai;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c10_kaiguangai;
  chartInstance->chartInfo.mdlStart = mdlStart_c10_kaiguangai;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c10_kaiguangai;
  chartInstance->chartInfo.callGetHoverDataForMsg =
    sf_opaque_get_hover_data_for_msg;
  chartInstance->chartInfo.extModeExec = sf_opaque_ext_mode_exec_c10_kaiguangai;
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
  mdl_start_c10_kaiguangai(chartInstance);
}

void c10_kaiguangai_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c10_kaiguangai(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c10_kaiguangai(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c10_kaiguangai(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c10_kaiguangai_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}