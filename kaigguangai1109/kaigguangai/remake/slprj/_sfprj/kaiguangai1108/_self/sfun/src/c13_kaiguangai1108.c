/* Include files */

#include "kaiguangai1108_sfun.h"
#include "c13_kaiguangai1108.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "kaiguangai1108_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c_with_debugger(S, sfGlobalDebugInstanceStruct);

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization);
static void chart_debug_initialize_data_addresses(SimStruct *S);
static const mxArray* sf_opaque_get_hover_data_for_msg(void *chartInstance,
  int32_T msgSSID);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)
#define c13_IN_NO_ACTIVE_CHILD         ((uint8_T)0U)
#define c13_IN_off                     ((uint8_T)1U)
#define c13_IN_off1                    ((uint8_T)2U)
#define c13_IN_shoudong                ((uint8_T)3U)
#define c13_IN_on                      ((uint8_T)2U)
#define c13_IN_t                       ((uint8_T)3U)
#define c13_IN_t1                      ((uint8_T)4U)
#define c13_IN_t2                      ((uint8_T)5U)
#define c13_b_IN_t2                    ((uint8_T)4U)
#define c13_IN_t3                      ((uint8_T)5U)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static const char * c13_debug_family_names[2] = { "nargin", "nargout" };

static const char * c13_b_debug_family_names[2] = { "nargin", "nargout" };

static const char * c13_c_debug_family_names[2] = { "nargin", "nargout" };

static const char * c13_d_debug_family_names[2] = { "nargin", "nargout" };

static const char * c13_e_debug_family_names[2] = { "nargin", "nargout" };

static const char * c13_f_debug_family_names[2] = { "nargin", "nargout" };

static const char * c13_g_debug_family_names[2] = { "nargin", "nargout" };

static const char * c13_h_debug_family_names[2] = { "nargin", "nargout" };

static const char * c13_i_debug_family_names[2] = { "nargin", "nargout" };

static const char * c13_j_debug_family_names[2] = { "nargin", "nargout" };

static const char * c13_k_debug_family_names[2] = { "nargin", "nargout" };

static const char * c13_l_debug_family_names[2] = { "nargin", "nargout" };

static const char * c13_m_debug_family_names[2] = { "nargin", "nargout" };

static const char * c13_n_debug_family_names[2] = { "nargin", "nargout" };

static const char * c13_o_debug_family_names[2] = { "nargin", "nargout" };

static const char * c13_p_debug_family_names[2] = { "nargin", "nargout" };

static const char * c13_q_debug_family_names[2] = { "nargin", "nargout" };

static const char * c13_r_debug_family_names[2] = { "nargin", "nargout" };

static const char * c13_s_debug_family_names[2] = { "nargin", "nargout" };

static const char * c13_t_debug_family_names[2] = { "nargin", "nargout" };

static const char * c13_u_debug_family_names[2] = { "nargin", "nargout" };

static const char * c13_v_debug_family_names[2] = { "nargin", "nargout" };

static const char * c13_w_debug_family_names[2] = { "nargin", "nargout" };

static const char * c13_x_debug_family_names[2] = { "nargin", "nargout" };

static const char * c13_y_debug_family_names[2] = { "nargin", "nargout" };

static const char * c13_ab_debug_family_names[2] = { "nargin", "nargout" };

static const char * c13_bb_debug_family_names[2] = { "nargin", "nargout" };

static const char * c13_cb_debug_family_names[2] = { "nargin", "nargout" };

static const char * c13_db_debug_family_names[2] = { "nargin", "nargout" };

static const char * c13_eb_debug_family_names[2] = { "nargin", "nargout" };

static const char * c13_fb_debug_family_names[2] = { "nargin", "nargout" };

static const char * c13_gb_debug_family_names[2] = { "nargin", "nargout" };

static const char * c13_hb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c13_ib_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c13_jb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c13_kb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c13_lb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c13_mb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c13_nb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c13_ob_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c13_pb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c13_qb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c13_rb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c13_sb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c13_tb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c13_ub_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c13_vb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c13_wb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c13_xb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c13_yb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c13_ac_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c13_bc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c13_cc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c13_dc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c13_ec_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c13_fc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c13_gc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c13_hc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c13_ic_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c13_jc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c13_kc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c13_lc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c13_mc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c13_nc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c13_oc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c13_pc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c13_qc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c13_rc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c13_sc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c13_tc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c13_uc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c13_vc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c13_wc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c13_xc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c13_yc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c13_ad_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

/* Function Declarations */
static void initialize_c13_kaiguangai1108(SFc13_kaiguangai1108InstanceStruct
  *chartInstance);
static void initialize_params_c13_kaiguangai1108
  (SFc13_kaiguangai1108InstanceStruct *chartInstance);
static void enable_c13_kaiguangai1108(SFc13_kaiguangai1108InstanceStruct
  *chartInstance);
static void disable_c13_kaiguangai1108(SFc13_kaiguangai1108InstanceStruct
  *chartInstance);
static void c13_update_debugger_state_c13_kaiguangai1108
  (SFc13_kaiguangai1108InstanceStruct *chartInstance);
static void ext_mode_exec_c13_kaiguangai1108(SFc13_kaiguangai1108InstanceStruct *
  chartInstance);
static const mxArray *get_sim_state_c13_kaiguangai1108
  (SFc13_kaiguangai1108InstanceStruct *chartInstance);
static void set_sim_state_c13_kaiguangai1108(SFc13_kaiguangai1108InstanceStruct *
  chartInstance, const mxArray *c13_st);
static void c13_set_sim_state_side_effects_c13_kaiguangai1108
  (SFc13_kaiguangai1108InstanceStruct *chartInstance);
static void finalize_c13_kaiguangai1108(SFc13_kaiguangai1108InstanceStruct
  *chartInstance);
static void sf_gateway_c13_kaiguangai1108(SFc13_kaiguangai1108InstanceStruct
  *chartInstance);
static void mdl_start_c13_kaiguangai1108(SFc13_kaiguangai1108InstanceStruct
  *chartInstance);
static void c13_chartstep_c13_kaiguangai1108(SFc13_kaiguangai1108InstanceStruct *
  chartInstance);
static void initSimStructsc13_kaiguangai1108(SFc13_kaiguangai1108InstanceStruct *
  chartInstance);
static void c13_off(SFc13_kaiguangai1108InstanceStruct *chartInstance);
static void c13_exit_internal_shoudong(SFc13_kaiguangai1108InstanceStruct
  *chartInstance);
static void c13_songkai(SFc13_kaiguangai1108InstanceStruct *chartInstance);
static void c13_t(SFc13_kaiguangai1108InstanceStruct *chartInstance);
static void c13_kaigai(SFc13_kaiguangai1108InstanceStruct *chartInstance);
static void c13_enter_atomic_off(SFc13_kaiguangai1108InstanceStruct
  *chartInstance);
static void c13_b_t(SFc13_kaiguangai1108InstanceStruct *chartInstance);
static void c13_jiesuo_songkai(SFc13_kaiguangai1108InstanceStruct *chartInstance);
static void c13_c_t(SFc13_kaiguangai1108InstanceStruct *chartInstance);
static void c13_suoding_yajin(SFc13_kaiguangai1108InstanceStruct *chartInstance);
static void c13_d_t(SFc13_kaiguangai1108InstanceStruct *chartInstance);
static void c13_yajin(SFc13_kaiguangai1108InstanceStruct *chartInstance);
static void c13_e_t(SFc13_kaiguangai1108InstanceStruct *chartInstance);
static void c13_guangai(SFc13_kaiguangai1108InstanceStruct *chartInstance);
static void c13_b_enter_atomic_off(SFc13_kaiguangai1108InstanceStruct
  *chartInstance);
static void c13_f_t(SFc13_kaiguangai1108InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c13_machineNumber, uint32_T
  c13_chartNumber, uint32_T c13_instanceNumber);
static const mxArray *c13_sf_marshallOut(void *chartInstanceVoid, void
  *c13_inData);
static real_T c13_emlrt_marshallIn(SFc13_kaiguangai1108InstanceStruct
  *chartInstance, const mxArray *c13_nargout, const char_T *c13_identifier);
static real_T c13_b_emlrt_marshallIn(SFc13_kaiguangai1108InstanceStruct
  *chartInstance, const mxArray *c13_u, const emlrtMsgIdentifier *c13_parentId);
static void c13_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c13_mxArrayInData, const char_T *c13_varName, void *c13_outData);
static const mxArray *c13_b_sf_marshallOut(void *chartInstanceVoid, void
  *c13_inData);
static boolean_T c13_c_emlrt_marshallIn(SFc13_kaiguangai1108InstanceStruct
  *chartInstance, const mxArray *c13_u, const emlrtMsgIdentifier *c13_parentId);
static void c13_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c13_mxArrayInData, const char_T *c13_varName, void *c13_outData);
static const mxArray *c13_c_sf_marshallOut(void *chartInstanceVoid, void
  *c13_inData);
static int32_T c13_d_emlrt_marshallIn(SFc13_kaiguangai1108InstanceStruct
  *chartInstance, const mxArray *c13_u, const emlrtMsgIdentifier *c13_parentId);
static void c13_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c13_mxArrayInData, const char_T *c13_varName, void *c13_outData);
static const mxArray *c13_d_sf_marshallOut(void *chartInstanceVoid, void
  *c13_inData);
static uint8_T c13_e_emlrt_marshallIn(SFc13_kaiguangai1108InstanceStruct
  *chartInstance, const mxArray *c13_b_is_songkai, const char_T *c13_identifier);
static uint8_T c13_f_emlrt_marshallIn(SFc13_kaiguangai1108InstanceStruct
  *chartInstance, const mxArray *c13_u, const emlrtMsgIdentifier *c13_parentId);
static void c13_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c13_mxArrayInData, const char_T *c13_varName, void *c13_outData);
static void c13_g_emlrt_marshallIn(SFc13_kaiguangai1108InstanceStruct
  *chartInstance, const mxArray *c13_b_dataWrittenToVector, const char_T
  *c13_identifier, boolean_T c13_y[20]);
static void c13_h_emlrt_marshallIn(SFc13_kaiguangai1108InstanceStruct
  *chartInstance, const mxArray *c13_u, const emlrtMsgIdentifier *c13_parentId,
  boolean_T c13_y[20]);
static const mxArray *c13_i_emlrt_marshallIn(SFc13_kaiguangai1108InstanceStruct *
  chartInstance, const mxArray *c13_b_setSimStateSideEffectsInfo, const char_T
  *c13_identifier);
static const mxArray *c13_j_emlrt_marshallIn(SFc13_kaiguangai1108InstanceStruct *
  chartInstance, const mxArray *c13_u, const emlrtMsgIdentifier *c13_parentId);
static const mxArray *sf_get_hover_data_for_msg
  (SFc13_kaiguangai1108InstanceStruct *chartInstance, int32_T c13_ssid);
static void c13_init_sf_message_store_memory(SFc13_kaiguangai1108InstanceStruct *
  chartInstance);
static void init_dsm_address_info(SFc13_kaiguangai1108InstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc13_kaiguangai1108InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c13_kaiguangai1108(SFc13_kaiguangai1108InstanceStruct
  *chartInstance)
{
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc13_kaiguangai1108(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  *chartInstance->c13_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c13_doSetSimStateSideEffects = 0U;
  chartInstance->c13_setSimStateSideEffectsInfo = NULL;
  *chartInstance->c13_is_active_guangai = 0U;
  *chartInstance->c13_is_guangai = c13_IN_NO_ACTIVE_CHILD;
  *chartInstance->c13_temporalCounter_i6 = 0U;
  *chartInstance->c13_is_active_jiesuo_songkai = 0U;
  *chartInstance->c13_is_jiesuo_songkai = c13_IN_NO_ACTIVE_CHILD;
  *chartInstance->c13_temporalCounter_i3 = 0U;
  *chartInstance->c13_is_active_kaigai = 0U;
  *chartInstance->c13_is_kaigai = c13_IN_NO_ACTIVE_CHILD;
  *chartInstance->c13_temporalCounter_i2 = 0U;
  *chartInstance->c13_is_active_songkai = 0U;
  *chartInstance->c13_is_songkai = c13_IN_NO_ACTIVE_CHILD;
  *chartInstance->c13_temporalCounter_i1 = 0U;
  *chartInstance->c13_is_active_suoding_yajin = 0U;
  *chartInstance->c13_is_suoding_yajin = c13_IN_NO_ACTIVE_CHILD;
  *chartInstance->c13_temporalCounter_i4 = 0U;
  *chartInstance->c13_is_active_yajin = 0U;
  *chartInstance->c13_is_yajin = c13_IN_NO_ACTIVE_CHILD;
  *chartInstance->c13_temporalCounter_i5 = 0U;
  *chartInstance->c13_is_active_c13_kaiguangai1108 = 0U;
  *chartInstance->c13_is_c13_kaiguangai1108 = c13_IN_NO_ACTIVE_CHILD;
}

static void initialize_params_c13_kaiguangai1108
  (SFc13_kaiguangai1108InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c13_kaiguangai1108(SFc13_kaiguangai1108InstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c13_kaiguangai1108(SFc13_kaiguangai1108InstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c13_update_debugger_state_c13_kaiguangai1108
  (SFc13_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c13_prevAniVal;
  c13_prevAniVal = _SFD_GET_ANIMATION();
  _SFD_SET_ANIMATION(0U);
  _SFD_SET_HONOR_BREAKPOINTS(0U);
  if (*chartInstance->c13_is_active_c13_kaiguangai1108 == 1U) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 12U, *chartInstance->c13_sfEvent);
  }

  if (*chartInstance->c13_is_c13_kaiguangai1108 == c13_IN_off) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c13_sfEvent);
  }

  if (*chartInstance->c13_is_c13_kaiguangai1108 == c13_IN_shoudong) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c13_sfEvent);
  }

  if (*chartInstance->c13_is_active_songkai == 1U) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 21U, *chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 21U, *chartInstance->c13_sfEvent);
  }

  if (*chartInstance->c13_is_songkai == c13_IN_off) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 22U, *chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 22U, *chartInstance->c13_sfEvent);
  }

  if (*chartInstance->c13_is_songkai == c13_IN_on) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 23U, *chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 23U, *chartInstance->c13_sfEvent);
  }

  if (*chartInstance->c13_is_songkai == c13_IN_t) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 24U, *chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 24U, *chartInstance->c13_sfEvent);
  }

  if (*chartInstance->c13_is_songkai == c13_IN_t1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 25U, *chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 25U, *chartInstance->c13_sfEvent);
  }

  if (*chartInstance->c13_is_songkai == c13_IN_t2) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 26U, *chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 26U, *chartInstance->c13_sfEvent);
  }

  if (*chartInstance->c13_is_active_kaigai == 1U) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 15U, *chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 15U, *chartInstance->c13_sfEvent);
  }

  if (*chartInstance->c13_is_kaigai == c13_IN_off) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 16U, *chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 16U, *chartInstance->c13_sfEvent);
  }

  if (*chartInstance->c13_is_kaigai == c13_IN_on) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 17U, *chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 17U, *chartInstance->c13_sfEvent);
  }

  if (*chartInstance->c13_is_kaigai == c13_IN_t) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 18U, *chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 18U, *chartInstance->c13_sfEvent);
  }

  if (*chartInstance->c13_is_kaigai == c13_IN_t1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 19U, *chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 19U, *chartInstance->c13_sfEvent);
  }

  if (*chartInstance->c13_is_kaigai == c13_IN_t2) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 20U, *chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 20U, *chartInstance->c13_sfEvent);
  }

  if (*chartInstance->c13_is_active_jiesuo_songkai == 1U) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U, *chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 9U, *chartInstance->c13_sfEvent);
  }

  if (*chartInstance->c13_is_jiesuo_songkai == c13_IN_off) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, *chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c13_sfEvent);
  }

  if (*chartInstance->c13_is_jiesuo_songkai == c13_IN_on) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 11U, *chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 11U, *chartInstance->c13_sfEvent);
  }

  if (*chartInstance->c13_is_jiesuo_songkai == c13_IN_t) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 12U, *chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 12U, *chartInstance->c13_sfEvent);
  }

  if (*chartInstance->c13_is_jiesuo_songkai == c13_IN_t1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 13U, *chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 13U, *chartInstance->c13_sfEvent);
  }

  if (*chartInstance->c13_is_jiesuo_songkai == c13_IN_t2) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 14U, *chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 14U, *chartInstance->c13_sfEvent);
  }

  if (*chartInstance->c13_is_active_suoding_yajin == 1U) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 27U, *chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 27U, *chartInstance->c13_sfEvent);
  }

  if (*chartInstance->c13_is_suoding_yajin == c13_IN_off) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 28U, *chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 28U, *chartInstance->c13_sfEvent);
  }

  if (*chartInstance->c13_is_suoding_yajin == c13_IN_on) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 29U, *chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 29U, *chartInstance->c13_sfEvent);
  }

  if (*chartInstance->c13_is_suoding_yajin == c13_IN_t1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 31U, *chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 31U, *chartInstance->c13_sfEvent);
  }

  if (*chartInstance->c13_is_suoding_yajin == c13_IN_t2) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 32U, *chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 32U, *chartInstance->c13_sfEvent);
  }

  if (*chartInstance->c13_is_suoding_yajin == c13_IN_t) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 30U, *chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 30U, *chartInstance->c13_sfEvent);
  }

  if (*chartInstance->c13_is_active_yajin == 1U) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 33U, *chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 33U, *chartInstance->c13_sfEvent);
  }

  if (*chartInstance->c13_is_yajin == c13_IN_off) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 34U, *chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 34U, *chartInstance->c13_sfEvent);
  }

  if (*chartInstance->c13_is_yajin == c13_IN_on) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 35U, *chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 35U, *chartInstance->c13_sfEvent);
  }

  if (*chartInstance->c13_is_yajin == c13_IN_t3) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 38U, *chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 38U, *chartInstance->c13_sfEvent);
  }

  if (*chartInstance->c13_is_yajin == c13_b_IN_t2) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 37U, *chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 37U, *chartInstance->c13_sfEvent);
  }

  if (*chartInstance->c13_is_yajin == c13_IN_t) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 36U, *chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 36U, *chartInstance->c13_sfEvent);
  }

  if (*chartInstance->c13_is_active_guangai == 1U) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c13_sfEvent);
  }

  if (*chartInstance->c13_is_guangai == c13_IN_off) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c13_sfEvent);
  }

  if (*chartInstance->c13_is_guangai == c13_IN_on) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c13_sfEvent);
  }

  if (*chartInstance->c13_is_guangai == c13_IN_t1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c13_sfEvent);
  }

  if (*chartInstance->c13_is_guangai == c13_IN_t2) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, *chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c13_sfEvent);
  }

  if (*chartInstance->c13_is_guangai == c13_IN_t) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c13_sfEvent);
  }

  if (*chartInstance->c13_is_c13_kaiguangai1108 == c13_IN_off1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c13_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c13_sfEvent);
  }

  _SFD_SET_ANIMATION(c13_prevAniVal);
  _SFD_SET_HONOR_BREAKPOINTS(1U);
  _SFD_ANIMATE();
}

static void ext_mode_exec_c13_kaiguangai1108(SFc13_kaiguangai1108InstanceStruct *
  chartInstance)
{
  c13_update_debugger_state_c13_kaiguangai1108(chartInstance);
}

static const mxArray *get_sim_state_c13_kaiguangai1108
  (SFc13_kaiguangai1108InstanceStruct *chartInstance)
{
  const mxArray *c13_st;
  const mxArray *c13_y = NULL;
  real_T c13_hoistedGlobal;
  const mxArray *c13_b_y = NULL;
  real_T c13_b_hoistedGlobal;
  const mxArray *c13_c_y = NULL;
  real_T c13_c_hoistedGlobal;
  const mxArray *c13_d_y = NULL;
  real_T c13_d_hoistedGlobal;
  const mxArray *c13_e_y = NULL;
  real_T c13_e_hoistedGlobal;
  const mxArray *c13_f_y = NULL;
  real_T c13_f_hoistedGlobal;
  const mxArray *c13_g_y = NULL;
  real_T c13_g_hoistedGlobal;
  const mxArray *c13_h_y = NULL;
  real_T c13_h_hoistedGlobal;
  const mxArray *c13_i_y = NULL;
  real_T c13_i_hoistedGlobal;
  const mxArray *c13_j_y = NULL;
  real_T c13_j_hoistedGlobal;
  const mxArray *c13_k_y = NULL;
  real_T c13_k_hoistedGlobal;
  const mxArray *c13_l_y = NULL;
  real_T c13_l_hoistedGlobal;
  const mxArray *c13_m_y = NULL;
  real_T c13_m_hoistedGlobal;
  const mxArray *c13_n_y = NULL;
  real_T c13_n_hoistedGlobal;
  const mxArray *c13_o_y = NULL;
  real_T c13_o_hoistedGlobal;
  const mxArray *c13_p_y = NULL;
  real_T c13_p_hoistedGlobal;
  const mxArray *c13_q_y = NULL;
  real_T c13_q_hoistedGlobal;
  const mxArray *c13_r_y = NULL;
  real_T c13_r_hoistedGlobal;
  const mxArray *c13_s_y = NULL;
  real_T c13_s_hoistedGlobal;
  const mxArray *c13_t_y = NULL;
  real_T c13_t_hoistedGlobal;
  const mxArray *c13_u_y = NULL;
  uint8_T c13_u_hoistedGlobal;
  const mxArray *c13_v_y = NULL;
  uint8_T c13_v_hoistedGlobal;
  const mxArray *c13_w_y = NULL;
  uint8_T c13_w_hoistedGlobal;
  const mxArray *c13_x_y = NULL;
  uint8_T c13_x_hoistedGlobal;
  const mxArray *c13_y_y = NULL;
  uint8_T c13_y_hoistedGlobal;
  const mxArray *c13_ab_y = NULL;
  uint8_T c13_ab_hoistedGlobal;
  const mxArray *c13_bb_y = NULL;
  uint8_T c13_bb_hoistedGlobal;
  const mxArray *c13_cb_y = NULL;
  uint8_T c13_cb_hoistedGlobal;
  const mxArray *c13_db_y = NULL;
  uint8_T c13_db_hoistedGlobal;
  const mxArray *c13_eb_y = NULL;
  uint8_T c13_eb_hoistedGlobal;
  const mxArray *c13_fb_y = NULL;
  uint8_T c13_fb_hoistedGlobal;
  const mxArray *c13_gb_y = NULL;
  uint8_T c13_gb_hoistedGlobal;
  const mxArray *c13_hb_y = NULL;
  uint8_T c13_hb_hoistedGlobal;
  const mxArray *c13_ib_y = NULL;
  uint8_T c13_ib_hoistedGlobal;
  const mxArray *c13_jb_y = NULL;
  uint8_T c13_jb_hoistedGlobal;
  const mxArray *c13_kb_y = NULL;
  uint8_T c13_kb_hoistedGlobal;
  const mxArray *c13_lb_y = NULL;
  uint8_T c13_lb_hoistedGlobal;
  const mxArray *c13_mb_y = NULL;
  uint8_T c13_mb_hoistedGlobal;
  const mxArray *c13_nb_y = NULL;
  uint8_T c13_nb_hoistedGlobal;
  const mxArray *c13_ob_y = NULL;
  uint8_T c13_ob_hoistedGlobal;
  const mxArray *c13_pb_y = NULL;
  const mxArray *c13_qb_y = NULL;
  c13_st = NULL;
  c13_st = NULL;
  c13_y = NULL;
  sf_mex_assign(&c13_y, sf_mex_createcellmatrix(41, 1), false);
  c13_hoistedGlobal = *chartInstance->c13_gghx;
  c13_b_y = NULL;
  sf_mex_assign(&c13_b_y, sf_mex_create("y", &c13_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c13_y, 0, c13_b_y);
  c13_b_hoistedGlobal = *chartInstance->c13_ggt;
  c13_c_y = NULL;
  sf_mex_assign(&c13_c_y, sf_mex_create("y", &c13_b_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c13_y, 1, c13_c_y);
  c13_c_hoistedGlobal = *chartInstance->c13_ggyichang;
  c13_d_y = NULL;
  sf_mex_assign(&c13_d_y, sf_mex_create("y", &c13_c_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c13_y, 2, c13_d_y);
  c13_d_hoistedGlobal = *chartInstance->c13_ggzhiling1;
  c13_e_y = NULL;
  sf_mex_assign(&c13_e_y, sf_mex_create("y", &c13_d_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c13_y, 3, c13_e_y);
  c13_e_hoistedGlobal = *chartInstance->c13_ggzhiling2;
  c13_f_y = NULL;
  sf_mex_assign(&c13_f_y, sf_mex_create("y", &c13_e_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c13_y, 4, c13_f_y);
  c13_f_hoistedGlobal = *chartInstance->c13_jst;
  c13_g_y = NULL;
  sf_mex_assign(&c13_g_y, sf_mex_create("y", &c13_f_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c13_y, 5, c13_g_y);
  c13_g_hoistedGlobal = *chartInstance->c13_jsyichang;
  c13_h_y = NULL;
  sf_mex_assign(&c13_h_y, sf_mex_create("y", &c13_g_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c13_y, 6, c13_h_y);
  c13_h_hoistedGlobal = *chartInstance->c13_kghx;
  c13_i_y = NULL;
  sf_mex_assign(&c13_i_y, sf_mex_create("y", &c13_h_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c13_y, 7, c13_i_y);
  c13_i_hoistedGlobal = *chartInstance->c13_kgt;
  c13_j_y = NULL;
  sf_mex_assign(&c13_j_y, sf_mex_create("y", &c13_i_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c13_y, 8, c13_j_y);
  c13_j_hoistedGlobal = *chartInstance->c13_kgyichang;
  c13_k_y = NULL;
  sf_mex_assign(&c13_k_y, sf_mex_create("y", &c13_j_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c13_y, 9, c13_k_y);
  c13_k_hoistedGlobal = *chartInstance->c13_kgzhiling1;
  c13_l_y = NULL;
  sf_mex_assign(&c13_l_y, sf_mex_create("y", &c13_k_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c13_y, 10, c13_l_y);
  c13_l_hoistedGlobal = *chartInstance->c13_kgzhiling2;
  c13_m_y = NULL;
  sf_mex_assign(&c13_m_y, sf_mex_create("y", &c13_l_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c13_y, 11, c13_m_y);
  c13_m_hoistedGlobal = *chartInstance->c13_sdt;
  c13_n_y = NULL;
  sf_mex_assign(&c13_n_y, sf_mex_create("y", &c13_m_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c13_y, 12, c13_n_y);
  c13_n_hoistedGlobal = *chartInstance->c13_sdyichang;
  c13_o_y = NULL;
  sf_mex_assign(&c13_o_y, sf_mex_create("y", &c13_n_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c13_y, 13, c13_o_y);
  c13_o_hoistedGlobal = *chartInstance->c13_skhx;
  c13_p_y = NULL;
  sf_mex_assign(&c13_p_y, sf_mex_create("y", &c13_o_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c13_y, 14, c13_p_y);
  c13_p_hoistedGlobal = *chartInstance->c13_skt;
  c13_q_y = NULL;
  sf_mex_assign(&c13_q_y, sf_mex_create("y", &c13_p_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c13_y, 15, c13_q_y);
  c13_q_hoistedGlobal = *chartInstance->c13_skyichang;
  c13_r_y = NULL;
  sf_mex_assign(&c13_r_y, sf_mex_create("y", &c13_q_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c13_y, 16, c13_r_y);
  c13_r_hoistedGlobal = *chartInstance->c13_yjhx;
  c13_s_y = NULL;
  sf_mex_assign(&c13_s_y, sf_mex_create("y", &c13_r_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c13_y, 17, c13_s_y);
  c13_s_hoistedGlobal = *chartInstance->c13_yjt;
  c13_t_y = NULL;
  sf_mex_assign(&c13_t_y, sf_mex_create("y", &c13_s_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c13_y, 18, c13_t_y);
  c13_t_hoistedGlobal = *chartInstance->c13_yjyichang;
  c13_u_y = NULL;
  sf_mex_assign(&c13_u_y, sf_mex_create("y", &c13_t_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c13_y, 19, c13_u_y);
  c13_u_hoistedGlobal = *chartInstance->c13_is_active_c13_kaiguangai1108;
  c13_v_y = NULL;
  sf_mex_assign(&c13_v_y, sf_mex_create("y", &c13_u_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c13_y, 20, c13_v_y);
  c13_v_hoistedGlobal = *chartInstance->c13_is_active_songkai;
  c13_w_y = NULL;
  sf_mex_assign(&c13_w_y, sf_mex_create("y", &c13_v_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c13_y, 21, c13_w_y);
  c13_w_hoistedGlobal = *chartInstance->c13_is_active_kaigai;
  c13_x_y = NULL;
  sf_mex_assign(&c13_x_y, sf_mex_create("y", &c13_w_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c13_y, 22, c13_x_y);
  c13_x_hoistedGlobal = *chartInstance->c13_is_active_suoding_yajin;
  c13_y_y = NULL;
  sf_mex_assign(&c13_y_y, sf_mex_create("y", &c13_x_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c13_y, 23, c13_y_y);
  c13_y_hoistedGlobal = *chartInstance->c13_is_active_jiesuo_songkai;
  c13_ab_y = NULL;
  sf_mex_assign(&c13_ab_y, sf_mex_create("y", &c13_y_hoistedGlobal, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c13_y, 24, c13_ab_y);
  c13_ab_hoistedGlobal = *chartInstance->c13_is_active_guangai;
  c13_bb_y = NULL;
  sf_mex_assign(&c13_bb_y, sf_mex_create("y", &c13_ab_hoistedGlobal, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c13_y, 25, c13_bb_y);
  c13_bb_hoistedGlobal = *chartInstance->c13_is_active_yajin;
  c13_cb_y = NULL;
  sf_mex_assign(&c13_cb_y, sf_mex_create("y", &c13_bb_hoistedGlobal, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c13_y, 26, c13_cb_y);
  c13_cb_hoistedGlobal = *chartInstance->c13_is_c13_kaiguangai1108;
  c13_db_y = NULL;
  sf_mex_assign(&c13_db_y, sf_mex_create("y", &c13_cb_hoistedGlobal, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c13_y, 27, c13_db_y);
  c13_db_hoistedGlobal = *chartInstance->c13_is_songkai;
  c13_eb_y = NULL;
  sf_mex_assign(&c13_eb_y, sf_mex_create("y", &c13_db_hoistedGlobal, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c13_y, 28, c13_eb_y);
  c13_eb_hoistedGlobal = *chartInstance->c13_is_kaigai;
  c13_fb_y = NULL;
  sf_mex_assign(&c13_fb_y, sf_mex_create("y", &c13_eb_hoistedGlobal, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c13_y, 29, c13_fb_y);
  c13_fb_hoistedGlobal = *chartInstance->c13_is_suoding_yajin;
  c13_gb_y = NULL;
  sf_mex_assign(&c13_gb_y, sf_mex_create("y", &c13_fb_hoistedGlobal, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c13_y, 30, c13_gb_y);
  c13_gb_hoistedGlobal = *chartInstance->c13_is_jiesuo_songkai;
  c13_hb_y = NULL;
  sf_mex_assign(&c13_hb_y, sf_mex_create("y", &c13_gb_hoistedGlobal, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c13_y, 31, c13_hb_y);
  c13_hb_hoistedGlobal = *chartInstance->c13_is_guangai;
  c13_ib_y = NULL;
  sf_mex_assign(&c13_ib_y, sf_mex_create("y", &c13_hb_hoistedGlobal, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c13_y, 32, c13_ib_y);
  c13_ib_hoistedGlobal = *chartInstance->c13_is_yajin;
  c13_jb_y = NULL;
  sf_mex_assign(&c13_jb_y, sf_mex_create("y", &c13_ib_hoistedGlobal, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c13_y, 33, c13_jb_y);
  c13_jb_hoistedGlobal = *chartInstance->c13_temporalCounter_i1;
  c13_kb_y = NULL;
  sf_mex_assign(&c13_kb_y, sf_mex_create("y", &c13_jb_hoistedGlobal, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c13_y, 34, c13_kb_y);
  c13_kb_hoistedGlobal = *chartInstance->c13_temporalCounter_i2;
  c13_lb_y = NULL;
  sf_mex_assign(&c13_lb_y, sf_mex_create("y", &c13_kb_hoistedGlobal, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c13_y, 35, c13_lb_y);
  c13_lb_hoistedGlobal = *chartInstance->c13_temporalCounter_i4;
  c13_mb_y = NULL;
  sf_mex_assign(&c13_mb_y, sf_mex_create("y", &c13_lb_hoistedGlobal, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c13_y, 36, c13_mb_y);
  c13_mb_hoistedGlobal = *chartInstance->c13_temporalCounter_i3;
  c13_nb_y = NULL;
  sf_mex_assign(&c13_nb_y, sf_mex_create("y", &c13_mb_hoistedGlobal, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c13_y, 37, c13_nb_y);
  c13_nb_hoistedGlobal = *chartInstance->c13_temporalCounter_i6;
  c13_ob_y = NULL;
  sf_mex_assign(&c13_ob_y, sf_mex_create("y", &c13_nb_hoistedGlobal, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c13_y, 38, c13_ob_y);
  c13_ob_hoistedGlobal = *chartInstance->c13_temporalCounter_i5;
  c13_pb_y = NULL;
  sf_mex_assign(&c13_pb_y, sf_mex_create("y", &c13_ob_hoistedGlobal, 3, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c13_y, 39, c13_pb_y);
  c13_qb_y = NULL;
  sf_mex_assign(&c13_qb_y, sf_mex_create("y",
    chartInstance->c13_dataWrittenToVector, 11, 0U, 1U, 0U, 1, 20), false);
  sf_mex_setcell(c13_y, 40, c13_qb_y);
  sf_mex_assign(&c13_st, c13_y, false);
  return c13_st;
}

static void set_sim_state_c13_kaiguangai1108(SFc13_kaiguangai1108InstanceStruct *
  chartInstance, const mxArray *c13_st)
{
  const mxArray *c13_u;
  boolean_T c13_bv0[20];
  int32_T c13_i0;
  c13_u = sf_mex_dup(c13_st);
  *chartInstance->c13_gghx = c13_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("gghx", c13_u, 0)), "gghx");
  *chartInstance->c13_ggt = c13_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("ggt", c13_u, 1)), "ggt");
  *chartInstance->c13_ggyichang = c13_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("ggyichang", c13_u, 2)), "ggyichang");
  *chartInstance->c13_ggzhiling1 = c13_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("ggzhiling1", c13_u, 3)), "ggzhiling1");
  *chartInstance->c13_ggzhiling2 = c13_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("ggzhiling2", c13_u, 4)), "ggzhiling2");
  *chartInstance->c13_jst = c13_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("jst", c13_u, 5)), "jst");
  *chartInstance->c13_jsyichang = c13_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("jsyichang", c13_u, 6)), "jsyichang");
  *chartInstance->c13_kghx = c13_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("kghx", c13_u, 7)), "kghx");
  *chartInstance->c13_kgt = c13_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("kgt", c13_u, 8)), "kgt");
  *chartInstance->c13_kgyichang = c13_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("kgyichang", c13_u, 9)), "kgyichang");
  *chartInstance->c13_kgzhiling1 = c13_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("kgzhiling1", c13_u, 10)), "kgzhiling1");
  *chartInstance->c13_kgzhiling2 = c13_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("kgzhiling2", c13_u, 11)), "kgzhiling2");
  *chartInstance->c13_sdt = c13_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("sdt", c13_u, 12)), "sdt");
  *chartInstance->c13_sdyichang = c13_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("sdyichang", c13_u, 13)), "sdyichang");
  *chartInstance->c13_skhx = c13_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("skhx", c13_u, 14)), "skhx");
  *chartInstance->c13_skt = c13_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("skt", c13_u, 15)), "skt");
  *chartInstance->c13_skyichang = c13_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("skyichang", c13_u, 16)), "skyichang");
  *chartInstance->c13_yjhx = c13_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("yjhx", c13_u, 17)), "yjhx");
  *chartInstance->c13_yjt = c13_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("yjt", c13_u, 18)), "yjt");
  *chartInstance->c13_yjyichang = c13_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("yjyichang", c13_u, 19)), "yjyichang");
  *chartInstance->c13_is_active_c13_kaiguangai1108 = c13_e_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell("is_active_c13_kaiguangai1108",
       c13_u, 20)), "is_active_c13_kaiguangai1108");
  *chartInstance->c13_is_active_songkai = c13_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_active_songkai", c13_u, 21)),
    "is_active_songkai");
  *chartInstance->c13_is_active_kaigai = c13_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_active_kaigai", c13_u, 22)),
    "is_active_kaigai");
  *chartInstance->c13_is_active_suoding_yajin = c13_e_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell("is_active_suoding_yajin", c13_u,
       23)), "is_active_suoding_yajin");
  *chartInstance->c13_is_active_jiesuo_songkai = c13_e_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell("is_active_jiesuo_songkai", c13_u,
       24)), "is_active_jiesuo_songkai");
  *chartInstance->c13_is_active_guangai = c13_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_active_guangai", c13_u, 25)),
    "is_active_guangai");
  *chartInstance->c13_is_active_yajin = c13_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_active_yajin", c13_u, 26)), "is_active_yajin");
  *chartInstance->c13_is_c13_kaiguangai1108 = c13_e_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell("is_c13_kaiguangai1108", c13_u, 27)),
     "is_c13_kaiguangai1108");
  *chartInstance->c13_is_songkai = c13_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_songkai", c13_u, 28)), "is_songkai");
  *chartInstance->c13_is_kaigai = c13_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_kaigai", c13_u, 29)), "is_kaigai");
  *chartInstance->c13_is_suoding_yajin = c13_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_suoding_yajin", c13_u, 30)),
    "is_suoding_yajin");
  *chartInstance->c13_is_jiesuo_songkai = c13_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_jiesuo_songkai", c13_u, 31)),
    "is_jiesuo_songkai");
  *chartInstance->c13_is_guangai = c13_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_guangai", c13_u, 32)), "is_guangai");
  *chartInstance->c13_is_yajin = c13_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_yajin", c13_u, 33)), "is_yajin");
  *chartInstance->c13_temporalCounter_i1 = c13_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("temporalCounter_i1", c13_u, 34)),
    "temporalCounter_i1");
  *chartInstance->c13_temporalCounter_i2 = c13_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("temporalCounter_i2", c13_u, 35)),
    "temporalCounter_i2");
  *chartInstance->c13_temporalCounter_i4 = c13_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("temporalCounter_i4", c13_u, 36)),
    "temporalCounter_i4");
  *chartInstance->c13_temporalCounter_i3 = c13_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("temporalCounter_i3", c13_u, 37)),
    "temporalCounter_i3");
  *chartInstance->c13_temporalCounter_i6 = c13_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("temporalCounter_i6", c13_u, 38)),
    "temporalCounter_i6");
  *chartInstance->c13_temporalCounter_i5 = c13_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("temporalCounter_i5", c13_u, 39)),
    "temporalCounter_i5");
  c13_g_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(
    "dataWrittenToVector", c13_u, 40)), "dataWrittenToVector", c13_bv0);
  for (c13_i0 = 0; c13_i0 < 20; c13_i0++) {
    chartInstance->c13_dataWrittenToVector[c13_i0] = c13_bv0[c13_i0];
  }

  sf_mex_assign(&chartInstance->c13_setSimStateSideEffectsInfo,
                c13_i_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(
    "setSimStateSideEffectsInfo", c13_u, 41)), "setSimStateSideEffectsInfo"),
                true);
  sf_mex_destroy(&c13_u);
  chartInstance->c13_doSetSimStateSideEffects = 1U;
  c13_update_debugger_state_c13_kaiguangai1108(chartInstance);
  sf_mex_destroy(&c13_st);
}

static void c13_set_sim_state_side_effects_c13_kaiguangai1108
  (SFc13_kaiguangai1108InstanceStruct *chartInstance)
{
  if (chartInstance->c13_doSetSimStateSideEffects != 0) {
    if ((*chartInstance->c13_is_songkai == c13_IN_t) && (sf_mex_sub
         (chartInstance->c13_setSimStateSideEffectsInfo,
          "setSimStateSideEffectsInfo", 1, 8) == 0.0)) {
      *chartInstance->c13_temporalCounter_i1 = 0U;
    }

    if ((*chartInstance->c13_is_kaigai == c13_IN_t) && (sf_mex_sub
         (chartInstance->c13_setSimStateSideEffectsInfo,
          "setSimStateSideEffectsInfo", 1, 14) == 0.0)) {
      *chartInstance->c13_temporalCounter_i2 = 0U;
    }

    if ((*chartInstance->c13_is_suoding_yajin == c13_IN_t) && (sf_mex_sub
         (chartInstance->c13_setSimStateSideEffectsInfo,
          "setSimStateSideEffectsInfo", 1, 20) == 0.0)) {
      *chartInstance->c13_temporalCounter_i4 = 0U;
    }

    if ((*chartInstance->c13_is_jiesuo_songkai == c13_IN_t) && (sf_mex_sub
         (chartInstance->c13_setSimStateSideEffectsInfo,
          "setSimStateSideEffectsInfo", 1, 26) == 0.0)) {
      *chartInstance->c13_temporalCounter_i3 = 0U;
    }

    if ((*chartInstance->c13_is_guangai == c13_IN_t) && (sf_mex_sub
         (chartInstance->c13_setSimStateSideEffectsInfo,
          "setSimStateSideEffectsInfo", 1, 32) == 0.0)) {
      *chartInstance->c13_temporalCounter_i6 = 0U;
    }

    if ((*chartInstance->c13_is_yajin == c13_IN_t) && (sf_mex_sub
         (chartInstance->c13_setSimStateSideEffectsInfo,
          "setSimStateSideEffectsInfo", 1, 38) == 0.0)) {
      *chartInstance->c13_temporalCounter_i5 = 0U;
    }

    chartInstance->c13_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c13_kaiguangai1108(SFc13_kaiguangai1108InstanceStruct
  *chartInstance)
{
  sf_mex_destroy(&chartInstance->c13_setSimStateSideEffectsInfo);
}

static void sf_gateway_c13_kaiguangai1108(SFc13_kaiguangai1108InstanceStruct
  *chartInstance)
{
  c13_set_sim_state_side_effects_c13_kaiguangai1108(chartInstance);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 12U, *chartInstance->c13_sfEvent);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c13_jieshu, 15U, 1U, 0U,
                        *chartInstance->c13_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c13_b_yajin, 14U, 1U, 0U,
                        *chartInstance->c13_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c13_b_guangai, 13U, 1U, 0U,
                        *chartInstance->c13_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c13_jiesuo, 12U, 1U, 0U,
                        *chartInstance->c13_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c13_suoding, 11U, 1U, 0U,
                        *chartInstance->c13_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c13_b_kaigai, 10U, 1U, 0U,
                        *chartInstance->c13_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c13_b_songkai, 9U, 1U, 0U,
                        *chartInstance->c13_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c13_skdw, 8U, 1U, 0U,
                        *chartInstance->c13_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c13_yjdw, 7U, 1U, 0U,
                        *chartInstance->c13_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c13_jsdw, 6U, 1U, 0U,
                        *chartInstance->c13_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c13_sddw, 5U, 1U, 0U,
                        *chartInstance->c13_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c13_ggdw2, 4U, 1U, 0U,
                        *chartInstance->c13_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c13_ggdw1, 3U, 1U, 0U,
                        *chartInstance->c13_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c13_kgdw2, 2U, 1U, 0U,
                        *chartInstance->c13_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c13_kgdw1, 1U, 1U, 0U,
                        *chartInstance->c13_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c13_start, 0U, 1U, 0U,
                        *chartInstance->c13_sfEvent, false);
  *chartInstance->c13_sfEvent = CALL_EVENT;
  if (*chartInstance->c13_temporalCounter_i1 < 3U) {
    (*chartInstance->c13_temporalCounter_i1)++;
  }

  if (*chartInstance->c13_temporalCounter_i2 < 3U) {
    (*chartInstance->c13_temporalCounter_i2)++;
  }

  if (*chartInstance->c13_temporalCounter_i3 < 3U) {
    (*chartInstance->c13_temporalCounter_i3)++;
  }

  if (*chartInstance->c13_temporalCounter_i4 < 3U) {
    (*chartInstance->c13_temporalCounter_i4)++;
  }

  if (*chartInstance->c13_temporalCounter_i5 < 3U) {
    (*chartInstance->c13_temporalCounter_i5)++;
  }

  if (*chartInstance->c13_temporalCounter_i6 < 3U) {
    (*chartInstance->c13_temporalCounter_i6)++;
  }

  c13_chartstep_c13_kaiguangai1108(chartInstance);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_kaiguangai1108MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void mdl_start_c13_kaiguangai1108(SFc13_kaiguangai1108InstanceStruct
  *chartInstance)
{
  c13_init_sf_message_store_memory(chartInstance);
}

static void c13_chartstep_c13_kaiguangai1108(SFc13_kaiguangai1108InstanceStruct *
  chartInstance)
{
  uint32_T c13_debug_family_var_map[3];
  real_T c13_nargin = 0.0;
  real_T c13_nargout = 1.0;
  boolean_T c13_out;
  uint32_T c13_b_debug_family_var_map[2];
  real_T c13_b_nargin = 0.0;
  real_T c13_b_nargout = 0.0;
  real_T c13_c_nargin = 0.0;
  real_T c13_c_nargout = 0.0;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 12U, *chartInstance->c13_sfEvent);
  if (*chartInstance->c13_is_active_c13_kaiguangai1108 == 0U) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 12U,
                 *chartInstance->c13_sfEvent);
    *chartInstance->c13_is_active_c13_kaiguangai1108 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 12U, *chartInstance->c13_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 36U, *chartInstance->c13_sfEvent);
    *chartInstance->c13_is_c13_kaiguangai1108 = c13_IN_off;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c13_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_debug_family_names,
      c13_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_b_nargin, 0U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_b_nargout, 1U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    *chartInstance->c13_skhx = 0.0;
    chartInstance->c13_dataWrittenToVector[0U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c13_skhx, 16U, 4U, 0U,
                          *chartInstance->c13_sfEvent, false);
    *chartInstance->c13_kghx = 0.0;
    chartInstance->c13_dataWrittenToVector[1U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c13_kghx, 17U, 4U, 0U,
                          *chartInstance->c13_sfEvent, false);
    *chartInstance->c13_gghx = 0.0;
    chartInstance->c13_dataWrittenToVector[3U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c13_gghx, 19U, 4U, 0U,
                          *chartInstance->c13_sfEvent, false);
    *chartInstance->c13_yjhx = 0.0;
    chartInstance->c13_dataWrittenToVector[2U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c13_yjhx, 18U, 4U, 0U,
                          *chartInstance->c13_sfEvent, false);
    *chartInstance->c13_kgzhiling1 = 0.0;
    chartInstance->c13_dataWrittenToVector[4U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c13_kgzhiling1, 20U, 4U, 0U,
                          *chartInstance->c13_sfEvent, false);
    *chartInstance->c13_kgzhiling2 = 0.0;
    chartInstance->c13_dataWrittenToVector[5U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c13_kgzhiling2, 21U, 4U, 0U,
                          *chartInstance->c13_sfEvent, false);
    *chartInstance->c13_ggzhiling1 = 0.0;
    chartInstance->c13_dataWrittenToVector[6U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c13_ggzhiling1, 22U, 4U, 0U,
                          *chartInstance->c13_sfEvent, false);
    *chartInstance->c13_ggzhiling2 = 0.0;
    chartInstance->c13_dataWrittenToVector[7U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c13_ggzhiling2, 23U, 4U, 0U,
                          *chartInstance->c13_sfEvent, false);
    *chartInstance->c13_skyichang = 0.0;
    chartInstance->c13_dataWrittenToVector[14U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c13_skyichang, 30U, 4U, 0U,
                          *chartInstance->c13_sfEvent, false);
    *chartInstance->c13_kgyichang = 0.0;
    chartInstance->c13_dataWrittenToVector[15U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c13_kgyichang, 31U, 4U, 0U,
                          *chartInstance->c13_sfEvent, false);
    *chartInstance->c13_sdyichang = 0.0;
    chartInstance->c13_dataWrittenToVector[16U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c13_sdyichang, 32U, 4U, 0U,
                          *chartInstance->c13_sfEvent, false);
    *chartInstance->c13_jsyichang = 0.0;
    chartInstance->c13_dataWrittenToVector[17U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c13_jsyichang, 33U, 4U, 0U,
                          *chartInstance->c13_sfEvent, false);
    *chartInstance->c13_ggyichang = 0.0;
    chartInstance->c13_dataWrittenToVector[18U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c13_ggyichang, 34U, 4U, 0U,
                          *chartInstance->c13_sfEvent, false);
    *chartInstance->c13_yjyichang = 0.0;
    chartInstance->c13_dataWrittenToVector[19U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c13_yjyichang, 35U, 4U, 0U,
                          *chartInstance->c13_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
  } else {
    switch (*chartInstance->c13_is_c13_kaiguangai1108) {
     case c13_IN_off:
      CV_CHART_EVAL(12, 0, 1);
      c13_off(chartInstance);
      break;

     case c13_IN_off1:
      CV_CHART_EVAL(12, 0, 2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                   *chartInstance->c13_sfEvent);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, *chartInstance->c13_sfEvent);
      break;

     case c13_IN_shoudong:
      CV_CHART_EVAL(12, 0, 3);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 38U,
                   *chartInstance->c13_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_ad_debug_family_names,
        c13_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_nargin, 0U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_nargout, 1U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_out, 2U, c13_b_sf_marshallOut,
        c13_b_sf_marshallIn);
      c13_out = CV_EML_IF(38, 0, 0, CV_RELATIONAL_EVAL(5U, 38U, 0,
        *chartInstance->c13_jieshu, 1.0, -1, 0U, *chartInstance->c13_jieshu ==
        1.0));
      _SFD_SYMBOL_SCOPE_POP();
      if (c13_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 38U, *chartInstance->c13_sfEvent);
        c13_exit_internal_shoudong(chartInstance);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c13_sfEvent);
        *chartInstance->c13_is_c13_kaiguangai1108 = c13_IN_off1;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c13_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_gb_debug_family_names,
          c13_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_c_nargin, 0U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_c_nargout, 1U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        *chartInstance->c13_skhx = 0.0;
        chartInstance->c13_dataWrittenToVector[0U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c13_skhx, 16U, 4U, 1U,
                              *chartInstance->c13_sfEvent, false);
        *chartInstance->c13_kghx = 0.0;
        chartInstance->c13_dataWrittenToVector[1U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c13_kghx, 17U, 4U, 1U,
                              *chartInstance->c13_sfEvent, false);
        *chartInstance->c13_gghx = 0.0;
        chartInstance->c13_dataWrittenToVector[3U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c13_gghx, 19U, 4U, 1U,
                              *chartInstance->c13_sfEvent, false);
        *chartInstance->c13_yjhx = 0.0;
        chartInstance->c13_dataWrittenToVector[2U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c13_yjhx, 18U, 4U, 1U,
                              *chartInstance->c13_sfEvent, false);
        *chartInstance->c13_skt = 0.0;
        chartInstance->c13_dataWrittenToVector[8U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c13_skt, 24U, 4U, 1U,
                              *chartInstance->c13_sfEvent, false);
        *chartInstance->c13_kgt = 0.0;
        chartInstance->c13_dataWrittenToVector[9U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c13_kgt, 25U, 4U, 1U,
                              *chartInstance->c13_sfEvent, false);
        *chartInstance->c13_sdt = 0.0;
        chartInstance->c13_dataWrittenToVector[10U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c13_sdt, 26U, 4U, 1U,
                              *chartInstance->c13_sfEvent, false);
        *chartInstance->c13_jst = 0.0;
        chartInstance->c13_dataWrittenToVector[11U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c13_jst, 27U, 4U, 1U,
                              *chartInstance->c13_sfEvent, false);
        *chartInstance->c13_ggt = 0.0;
        chartInstance->c13_dataWrittenToVector[12U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c13_ggt, 28U, 4U, 1U,
                              *chartInstance->c13_sfEvent, false);
        *chartInstance->c13_yjt = 0.0;
        chartInstance->c13_dataWrittenToVector[13U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c13_yjt, 29U, 4U, 1U,
                              *chartInstance->c13_sfEvent, false);
        *chartInstance->c13_skyichang = 0.0;
        chartInstance->c13_dataWrittenToVector[14U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c13_skyichang, 30U, 4U, 1U,
                              *chartInstance->c13_sfEvent, false);
        *chartInstance->c13_kgyichang = 0.0;
        chartInstance->c13_dataWrittenToVector[15U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c13_kgyichang, 31U, 4U, 1U,
                              *chartInstance->c13_sfEvent, false);
        *chartInstance->c13_sdyichang = 0.0;
        chartInstance->c13_dataWrittenToVector[16U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c13_sdyichang, 32U, 4U, 1U,
                              *chartInstance->c13_sfEvent, false);
        *chartInstance->c13_jsyichang = 0.0;
        chartInstance->c13_dataWrittenToVector[17U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c13_jsyichang, 33U, 4U, 1U,
                              *chartInstance->c13_sfEvent, false);
        *chartInstance->c13_ggyichang = 0.0;
        chartInstance->c13_dataWrittenToVector[18U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c13_ggyichang, 34U, 4U, 1U,
                              *chartInstance->c13_sfEvent, false);
        *chartInstance->c13_yjyichang = 0.0;
        chartInstance->c13_dataWrittenToVector[19U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c13_yjyichang, 35U, 4U, 1U,
                              *chartInstance->c13_sfEvent, false);
        *chartInstance->c13_kgzhiling1 = 0.0;
        chartInstance->c13_dataWrittenToVector[4U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c13_kgzhiling1, 20U, 4U, 1U,
                              *chartInstance->c13_sfEvent, false);
        *chartInstance->c13_kgzhiling2 = 0.0;
        chartInstance->c13_dataWrittenToVector[5U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c13_kgzhiling2, 21U, 4U, 1U,
                              *chartInstance->c13_sfEvent, false);
        *chartInstance->c13_ggzhiling1 = 0.0;
        chartInstance->c13_dataWrittenToVector[6U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c13_ggzhiling1, 22U, 4U, 1U,
                              *chartInstance->c13_sfEvent, false);
        *chartInstance->c13_ggzhiling2 = 0.0;
        chartInstance->c13_dataWrittenToVector[7U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c13_ggzhiling2, 23U, 4U, 1U,
                              *chartInstance->c13_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U,
                     *chartInstance->c13_sfEvent);
        c13_songkai(chartInstance);
        c13_kaigai(chartInstance);
        c13_suoding_yajin(chartInstance);
        c13_jiesuo_songkai(chartInstance);
        c13_guangai(chartInstance);
        c13_yajin(chartInstance);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, *chartInstance->c13_sfEvent);
      break;

     default:
      CV_CHART_EVAL(12, 0, 0);

      /* Unreachable state, for coverage only */
      *chartInstance->c13_is_c13_kaiguangai1108 = c13_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c13_sfEvent);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 12U, *chartInstance->c13_sfEvent);
}

static void initSimStructsc13_kaiguangai1108(SFc13_kaiguangai1108InstanceStruct *
  chartInstance)
{
  (void)chartInstance;
}

static void c13_off(SFc13_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c13_debug_family_var_map[3];
  real_T c13_nargin = 0.0;
  real_T c13_nargout = 1.0;
  boolean_T c13_out;
  uint32_T c13_b_debug_family_var_map[2];
  real_T c13_b_nargin = 0.0;
  real_T c13_b_nargout = 0.0;
  real_T c13_c_nargin = 0.0;
  real_T c13_c_nargout = 0.0;
  real_T c13_d_nargin = 0.0;
  real_T c13_d_nargout = 0.0;
  real_T c13_e_nargin = 0.0;
  real_T c13_e_nargout = 0.0;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 37U,
               *chartInstance->c13_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_yc_debug_family_names,
    c13_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_nargin, 0U, c13_sf_marshallOut,
    c13_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_nargout, 1U, c13_sf_marshallOut,
    c13_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_out, 2U, c13_b_sf_marshallOut,
    c13_b_sf_marshallIn);
  if (CV_EML_COND(37, 0, 0, CV_RELATIONAL_EVAL(5U, 37U, 0,
        *chartInstance->c13_start, 1.0, -1, 0U, *chartInstance->c13_start == 1.0))
      && CV_EML_COND(37, 0, 1, CV_RELATIONAL_EVAL(5U, 37U, 1,
        *chartInstance->c13_jieshu, 0.0, -1, 0U, *chartInstance->c13_jieshu ==
        0.0))) {
    CV_EML_MCDC(37, 0, 0, true);
    CV_EML_IF(37, 0, 0, true);
    c13_out = true;
  } else {
    CV_EML_MCDC(37, 0, 0, false);
    CV_EML_IF(37, 0, 0, false);
    c13_out = false;
  }

  _SFD_SYMBOL_SCOPE_POP();
  if (c13_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 37U, *chartInstance->c13_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c13_sfEvent);
    *chartInstance->c13_is_c13_kaiguangai1108 = c13_IN_shoudong;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c13_sfEvent);
    *chartInstance->c13_is_active_songkai = 1U;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 21U, *chartInstance->c13_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, *chartInstance->c13_sfEvent);
    *chartInstance->c13_is_songkai = c13_IN_off;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 22U, *chartInstance->c13_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_b_debug_family_names,
      c13_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_b_nargin, 0U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_b_nargout, 1U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    *chartInstance->c13_skhx = 0.0;
    chartInstance->c13_dataWrittenToVector[0U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c13_skhx, 16U, 4U, 22U,
                          *chartInstance->c13_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
    *chartInstance->c13_is_active_kaigai = 1U;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 15U, *chartInstance->c13_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, *chartInstance->c13_sfEvent);
    *chartInstance->c13_is_kaigai = c13_IN_off;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 16U, *chartInstance->c13_sfEvent);
    c13_enter_atomic_off(chartInstance);
    *chartInstance->c13_is_active_suoding_yajin = 1U;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 27U, *chartInstance->c13_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 12U, *chartInstance->c13_sfEvent);
    *chartInstance->c13_is_suoding_yajin = c13_IN_off;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 28U, *chartInstance->c13_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_q_debug_family_names,
      c13_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_c_nargin, 0U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_c_nargout, 1U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    *chartInstance->c13_yjhx = 0.0;
    chartInstance->c13_dataWrittenToVector[2U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c13_yjhx, 18U, 4U, 28U,
                          *chartInstance->c13_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
    *chartInstance->c13_is_active_jiesuo_songkai = 1U;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U, *chartInstance->c13_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 18U, *chartInstance->c13_sfEvent);
    *chartInstance->c13_is_jiesuo_songkai = c13_IN_off;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, *chartInstance->c13_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_l_debug_family_names,
      c13_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_d_nargin, 0U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_d_nargout, 1U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    *chartInstance->c13_skhx = 0.0;
    chartInstance->c13_dataWrittenToVector[0U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c13_skhx, 16U, 4U, 10U,
                          *chartInstance->c13_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
    *chartInstance->c13_is_active_guangai = 1U;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c13_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 24U, *chartInstance->c13_sfEvent);
    *chartInstance->c13_is_guangai = c13_IN_off;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c13_sfEvent);
    c13_b_enter_atomic_off(chartInstance);
    *chartInstance->c13_is_active_yajin = 1U;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 33U, *chartInstance->c13_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 30U, *chartInstance->c13_sfEvent);
    *chartInstance->c13_is_yajin = c13_IN_off;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 34U, *chartInstance->c13_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_v_debug_family_names,
      c13_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_e_nargin, 0U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_e_nargout, 1U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    *chartInstance->c13_yjhx = 0.0;
    chartInstance->c13_dataWrittenToVector[2U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c13_yjhx, 18U, 4U, 34U,
                          *chartInstance->c13_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
  } else {
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U,
                 *chartInstance->c13_sfEvent);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, *chartInstance->c13_sfEvent);
}

static void c13_exit_internal_shoudong(SFc13_kaiguangai1108InstanceStruct
  *chartInstance)
{
  switch (*chartInstance->c13_is_yajin) {
   case c13_IN_off:
    CV_STATE_EVAL(33, 1, 1);
    *chartInstance->c13_is_yajin = c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 34U, *chartInstance->c13_sfEvent);
    break;

   case c13_IN_on:
    CV_STATE_EVAL(33, 1, 2);
    *chartInstance->c13_is_yajin = c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 35U, *chartInstance->c13_sfEvent);
    break;

   case c13_IN_t:
    CV_STATE_EVAL(33, 1, 3);
    *chartInstance->c13_is_yajin = c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 36U, *chartInstance->c13_sfEvent);
    break;

   case c13_b_IN_t2:
    CV_STATE_EVAL(33, 1, 4);
    *chartInstance->c13_is_yajin = c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 37U, *chartInstance->c13_sfEvent);
    break;

   case c13_IN_t3:
    CV_STATE_EVAL(33, 1, 5);
    *chartInstance->c13_is_yajin = c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 38U, *chartInstance->c13_sfEvent);
    break;

   default:
    CV_STATE_EVAL(33, 1, 0);
    *chartInstance->c13_is_yajin = c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 34U, *chartInstance->c13_sfEvent);
    break;
  }

  *chartInstance->c13_is_active_yajin = 0U;
  _SFD_CS_CALL(STATE_INACTIVE_TAG, 33U, *chartInstance->c13_sfEvent);
  switch (*chartInstance->c13_is_guangai) {
   case c13_IN_off:
    CV_STATE_EVAL(3, 1, 1);
    *chartInstance->c13_is_guangai = c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c13_sfEvent);
    break;

   case c13_IN_on:
    CV_STATE_EVAL(3, 1, 2);
    *chartInstance->c13_is_guangai = c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c13_sfEvent);
    break;

   case c13_IN_t:
    CV_STATE_EVAL(3, 1, 3);
    *chartInstance->c13_is_guangai = c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c13_sfEvent);
    break;

   case c13_IN_t1:
    CV_STATE_EVAL(3, 1, 4);
    *chartInstance->c13_is_guangai = c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c13_sfEvent);
    break;

   case c13_IN_t2:
    CV_STATE_EVAL(3, 1, 5);
    *chartInstance->c13_is_guangai = c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c13_sfEvent);
    break;

   default:
    CV_STATE_EVAL(3, 1, 0);
    *chartInstance->c13_is_guangai = c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c13_sfEvent);
    break;
  }

  *chartInstance->c13_is_active_guangai = 0U;
  _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c13_sfEvent);
  switch (*chartInstance->c13_is_jiesuo_songkai) {
   case c13_IN_off:
    CV_STATE_EVAL(9, 1, 1);
    *chartInstance->c13_is_jiesuo_songkai = c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c13_sfEvent);
    break;

   case c13_IN_on:
    CV_STATE_EVAL(9, 1, 2);
    *chartInstance->c13_is_jiesuo_songkai = c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 11U, *chartInstance->c13_sfEvent);
    break;

   case c13_IN_t:
    CV_STATE_EVAL(9, 1, 3);
    *chartInstance->c13_is_jiesuo_songkai = c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 12U, *chartInstance->c13_sfEvent);
    break;

   case c13_IN_t1:
    CV_STATE_EVAL(9, 1, 4);
    *chartInstance->c13_is_jiesuo_songkai = c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 13U, *chartInstance->c13_sfEvent);
    break;

   case c13_IN_t2:
    CV_STATE_EVAL(9, 1, 5);
    *chartInstance->c13_is_jiesuo_songkai = c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 14U, *chartInstance->c13_sfEvent);
    break;

   default:
    CV_STATE_EVAL(9, 1, 0);
    *chartInstance->c13_is_jiesuo_songkai = c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c13_sfEvent);
    break;
  }

  *chartInstance->c13_is_active_jiesuo_songkai = 0U;
  _SFD_CS_CALL(STATE_INACTIVE_TAG, 9U, *chartInstance->c13_sfEvent);
  switch (*chartInstance->c13_is_suoding_yajin) {
   case c13_IN_off:
    CV_STATE_EVAL(27, 1, 1);
    *chartInstance->c13_is_suoding_yajin = c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 28U, *chartInstance->c13_sfEvent);
    break;

   case c13_IN_on:
    CV_STATE_EVAL(27, 1, 2);
    *chartInstance->c13_is_suoding_yajin = c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 29U, *chartInstance->c13_sfEvent);
    break;

   case c13_IN_t:
    CV_STATE_EVAL(27, 1, 3);
    *chartInstance->c13_is_suoding_yajin = c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 30U, *chartInstance->c13_sfEvent);
    break;

   case c13_IN_t1:
    CV_STATE_EVAL(27, 1, 4);
    *chartInstance->c13_is_suoding_yajin = c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 31U, *chartInstance->c13_sfEvent);
    break;

   case c13_IN_t2:
    CV_STATE_EVAL(27, 1, 5);
    *chartInstance->c13_is_suoding_yajin = c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 32U, *chartInstance->c13_sfEvent);
    break;

   default:
    CV_STATE_EVAL(27, 1, 0);
    *chartInstance->c13_is_suoding_yajin = c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 28U, *chartInstance->c13_sfEvent);
    break;
  }

  *chartInstance->c13_is_active_suoding_yajin = 0U;
  _SFD_CS_CALL(STATE_INACTIVE_TAG, 27U, *chartInstance->c13_sfEvent);
  switch (*chartInstance->c13_is_kaigai) {
   case c13_IN_off:
    CV_STATE_EVAL(15, 1, 1);
    *chartInstance->c13_is_kaigai = c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 16U, *chartInstance->c13_sfEvent);
    break;

   case c13_IN_on:
    CV_STATE_EVAL(15, 1, 2);
    *chartInstance->c13_is_kaigai = c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 17U, *chartInstance->c13_sfEvent);
    break;

   case c13_IN_t:
    CV_STATE_EVAL(15, 1, 3);
    *chartInstance->c13_is_kaigai = c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 18U, *chartInstance->c13_sfEvent);
    break;

   case c13_IN_t1:
    CV_STATE_EVAL(15, 1, 4);
    *chartInstance->c13_is_kaigai = c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 19U, *chartInstance->c13_sfEvent);
    break;

   case c13_IN_t2:
    CV_STATE_EVAL(15, 1, 5);
    *chartInstance->c13_is_kaigai = c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 20U, *chartInstance->c13_sfEvent);
    break;

   default:
    CV_STATE_EVAL(15, 1, 0);
    *chartInstance->c13_is_kaigai = c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 16U, *chartInstance->c13_sfEvent);
    break;
  }

  *chartInstance->c13_is_active_kaigai = 0U;
  _SFD_CS_CALL(STATE_INACTIVE_TAG, 15U, *chartInstance->c13_sfEvent);
  switch (*chartInstance->c13_is_songkai) {
   case c13_IN_off:
    CV_STATE_EVAL(21, 1, 1);
    *chartInstance->c13_is_songkai = c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 22U, *chartInstance->c13_sfEvent);
    break;

   case c13_IN_on:
    CV_STATE_EVAL(21, 1, 2);
    *chartInstance->c13_is_songkai = c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 23U, *chartInstance->c13_sfEvent);
    break;

   case c13_IN_t:
    CV_STATE_EVAL(21, 1, 3);
    *chartInstance->c13_is_songkai = c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 24U, *chartInstance->c13_sfEvent);
    break;

   case c13_IN_t1:
    CV_STATE_EVAL(21, 1, 4);
    *chartInstance->c13_is_songkai = c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 25U, *chartInstance->c13_sfEvent);
    break;

   case c13_IN_t2:
    CV_STATE_EVAL(21, 1, 5);
    *chartInstance->c13_is_songkai = c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 26U, *chartInstance->c13_sfEvent);
    break;

   default:
    CV_STATE_EVAL(21, 1, 0);
    *chartInstance->c13_is_songkai = c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 22U, *chartInstance->c13_sfEvent);
    break;
  }

  *chartInstance->c13_is_active_songkai = 0U;
  _SFD_CS_CALL(STATE_INACTIVE_TAG, 21U, *chartInstance->c13_sfEvent);
}

static void c13_songkai(SFc13_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c13_debug_family_var_map[3];
  real_T c13_nargin = 0.0;
  real_T c13_b_nargin = 0.0;
  real_T c13_nargout = 1.0;
  real_T c13_c_nargin = 0.0;
  real_T c13_b_nargout = 1.0;
  boolean_T c13_out;
  real_T c13_c_nargout = 1.0;
  uint32_T c13_b_debug_family_var_map[2];
  boolean_T c13_b_out;
  boolean_T c13_c_out;
  real_T c13_d_nargin = 0.0;
  real_T c13_d_nargout = 0.0;
  real_T c13_e_nargin = 0.0;
  real_T c13_e_nargout = 1.0;
  boolean_T c13_d_out;
  real_T c13_f_nargin = 0.0;
  real_T c13_f_nargout = 0.0;
  real_T c13_g_nargin = 0.0;
  real_T c13_g_nargout = 1.0;
  real_T c13_h_nargin = 0.0;
  boolean_T c13_e_out;
  real_T c13_h_nargout = 0.0;
  real_T c13_i_nargin = 0.0;
  real_T c13_i_nargout = 0.0;
  real_T c13_j_nargin = 0.0;
  real_T c13_j_nargout = 0.0;
  real_T c13_k_nargin = 0.0;
  real_T c13_k_nargout = 1.0;
  boolean_T c13_f_out;
  real_T c13_l_nargin = 0.0;
  real_T c13_l_nargout = 0.0;
  real_T c13_m_nargin = 0.0;
  real_T c13_m_nargout = 0.0;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 21U, *chartInstance->c13_sfEvent);
  switch (*chartInstance->c13_is_songkai) {
   case c13_IN_off:
    CV_STATE_EVAL(21, 0, 1);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                 *chartInstance->c13_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_jb_debug_family_names,
      c13_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_nargin, 0U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_nargout, 1U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_out, 2U, c13_b_sf_marshallOut,
      c13_b_sf_marshallIn);
    if (CV_EML_COND(1, 0, 0, CV_RELATIONAL_EVAL(5U, 1U, 0,
          *chartInstance->c13_b_songkai, 1.0, -1, 0U,
          *chartInstance->c13_b_songkai == 1.0)) && CV_EML_COND(1, 0, 1,
         CV_RELATIONAL_EVAL(5U, 1U, 1, *chartInstance->c13_yjdw, 1.0, -1, 0U,
                            *chartInstance->c13_yjdw == 1.0))) {
      CV_EML_MCDC(1, 0, 0, true);
      CV_EML_IF(1, 0, 0, true);
      c13_out = true;
    } else {
      CV_EML_MCDC(1, 0, 0, false);
      CV_EML_IF(1, 0, 0, false);
      c13_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c13_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, *chartInstance->c13_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 22U, *chartInstance->c13_sfEvent);
      *chartInstance->c13_is_songkai = c13_IN_on;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 23U, *chartInstance->c13_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_c_debug_family_names,
        c13_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_h_nargin, 0U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_h_nargout, 1U,
        c13_sf_marshallOut, c13_sf_marshallIn);
      *chartInstance->c13_skhx = 1.0;
      chartInstance->c13_dataWrittenToVector[0U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c13_skhx, 16U, 4U, 23U,
                            *chartInstance->c13_sfEvent, false);
      *chartInstance->c13_skt = 0.0;
      chartInstance->c13_dataWrittenToVector[8U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c13_skt, 24U, 4U, 23U,
                            *chartInstance->c13_sfEvent, false);
      *chartInstance->c13_skyichang = 0.0;
      chartInstance->c13_dataWrittenToVector[14U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c13_skyichang, 30U, 4U, 23U,
                            *chartInstance->c13_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 22U,
                   *chartInstance->c13_sfEvent);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 22U, *chartInstance->c13_sfEvent);
    break;

   case c13_IN_on:
    CV_STATE_EVAL(21, 0, 2);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, *chartInstance->c13_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U,
                 *chartInstance->c13_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_mb_debug_family_names,
      c13_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_c_nargin, 0U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_c_nargout, 1U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_c_out, 2U, c13_b_sf_marshallOut,
      c13_b_sf_marshallIn);
    guard2 = false;
    if (CV_EML_COND(3, 0, 0, CV_RELATIONAL_EVAL(5U, 3U, 0,
          *chartInstance->c13_skdw, 0.0, -1, 0U, *chartInstance->c13_skdw == 0.0)))
    {
      if (CV_EML_COND(3, 0, 1, CV_RELATIONAL_EVAL(5U, 3U, 1,
            *chartInstance->c13_skt, 2.0, -1, 3U, *chartInstance->c13_skt <= 2.0)))
      {
        CV_EML_MCDC(3, 0, 0, true);
        CV_EML_IF(3, 0, 0, true);
        c13_c_out = true;
      } else {
        guard2 = true;
      }
    } else {
      if (!chartInstance->c13_dataWrittenToVector[8U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(24U, 5U, 3U,
          *chartInstance->c13_sfEvent, false);
      }

      guard2 = true;
    }

    if (guard2) {
      CV_EML_MCDC(3, 0, 0, false);
      CV_EML_IF(3, 0, 0, false);
      c13_c_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c13_c_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, *chartInstance->c13_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 23U, *chartInstance->c13_sfEvent);
      *chartInstance->c13_is_songkai = c13_IN_t;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 24U, *chartInstance->c13_sfEvent);
      *chartInstance->c13_temporalCounter_i1 = 0U;
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_d_debug_family_names,
        c13_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_i_nargin, 0U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_i_nargout, 1U,
        c13_sf_marshallOut, c13_sf_marshallIn);
      if (!chartInstance->c13_dataWrittenToVector[8U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(24U, 4U, 24U,
          *chartInstance->c13_sfEvent, false);
      }

      *chartInstance->c13_skt += 0.002;
      chartInstance->c13_dataWrittenToVector[8U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c13_skt, 24U, 4U, 24U,
                            *chartInstance->c13_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U,
                   *chartInstance->c13_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_ib_debug_family_names,
        c13_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_g_nargin, 0U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_g_nargout, 1U,
        c13_sf_marshallOut, c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_e_out, 2U, c13_b_sf_marshallOut,
        c13_b_sf_marshallIn);
      guard1 = false;
      if (CV_EML_COND(4, 0, 0, CV_RELATIONAL_EVAL(5U, 4U, 0,
            *chartInstance->c13_skdw, 1.0, -1, 0U, *chartInstance->c13_skdw ==
            1.0))) {
        if (CV_EML_COND(4, 0, 1, CV_RELATIONAL_EVAL(5U, 4U, 1,
              *chartInstance->c13_skt, 2.0, -1, 3U, *chartInstance->c13_skt <=
              2.0))) {
          CV_EML_MCDC(4, 0, 0, true);
          CV_EML_IF(4, 0, 0, true);
          c13_e_out = true;
        } else {
          guard1 = true;
        }
      } else {
        if (!chartInstance->c13_dataWrittenToVector[8U]) {
          _SFD_DATA_READ_BEFORE_WRITE_ERROR(24U, 5U, 4U,
            *chartInstance->c13_sfEvent, false);
        }

        guard1 = true;
      }

      if (guard1) {
        CV_EML_MCDC(4, 0, 0, false);
        CV_EML_IF(4, 0, 0, false);
        c13_e_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c13_e_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, *chartInstance->c13_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 23U, *chartInstance->c13_sfEvent);
        *chartInstance->c13_is_songkai = c13_IN_off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 22U, *chartInstance->c13_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_b_debug_family_names,
          c13_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_l_nargin, 0U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_l_nargout, 1U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        *chartInstance->c13_skhx = 0.0;
        chartInstance->c13_dataWrittenToVector[0U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c13_skhx, 16U, 4U, 22U,
                              *chartInstance->c13_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 39U,
                     *chartInstance->c13_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_kb_debug_family_names,
          c13_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_k_nargin, 0U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_k_nargout, 1U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_f_out, 2U,
          c13_b_sf_marshallOut, c13_b_sf_marshallIn);
        if (!chartInstance->c13_dataWrittenToVector[8U]) {
          _SFD_DATA_READ_BEFORE_WRITE_ERROR(24U, 5U, 39U,
            *chartInstance->c13_sfEvent, false);
        }

        c13_f_out = CV_EML_IF(39, 0, 0, CV_RELATIONAL_EVAL(5U, 39U, 0,
          *chartInstance->c13_skt, 2.0, -1, 4U, *chartInstance->c13_skt > 2.0));
        _SFD_SYMBOL_SCOPE_POP();
        if (c13_f_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 39U, *chartInstance->c13_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 23U, *chartInstance->c13_sfEvent);
          *chartInstance->c13_is_songkai = c13_IN_t1;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 25U, *chartInstance->c13_sfEvent);
          _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_e_debug_family_names,
            c13_b_debug_family_var_map);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_m_nargin, 0U,
            c13_sf_marshallOut, c13_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_m_nargout, 1U,
            c13_sf_marshallOut, c13_sf_marshallIn);
          *chartInstance->c13_skyichang = 1.0;
          chartInstance->c13_dataWrittenToVector[14U] = true;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c13_skyichang, 30U, 4U, 25U,
                                *chartInstance->c13_sfEvent, false);
          _SFD_SYMBOL_SCOPE_POP();
        } else {
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 23U,
                       *chartInstance->c13_sfEvent);
        }
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 23U, *chartInstance->c13_sfEvent);
    break;

   case c13_IN_t:
    CV_STATE_EVAL(21, 0, 3);
    c13_t(chartInstance);
    break;

   case c13_IN_t1:
    CV_STATE_EVAL(21, 0, 4);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 40U, *chartInstance->c13_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 25U, *chartInstance->c13_sfEvent);
    *chartInstance->c13_is_songkai = c13_IN_t2;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 26U, *chartInstance->c13_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_f_debug_family_names,
      c13_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_d_nargin, 0U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_d_nargout, 1U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    if (!chartInstance->c13_dataWrittenToVector[8U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(24U, 4U, 26U,
        *chartInstance->c13_sfEvent, false);
    }

    *chartInstance->c13_skt += 0.002;
    chartInstance->c13_dataWrittenToVector[8U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c13_skt, 24U, 4U, 26U,
                          *chartInstance->c13_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 25U, *chartInstance->c13_sfEvent);
    break;

   case c13_IN_t2:
    CV_STATE_EVAL(21, 0, 5);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 41U,
                 *chartInstance->c13_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_nb_debug_family_names,
      c13_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_b_nargin, 0U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_b_nargout, 1U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_b_out, 2U, c13_b_sf_marshallOut,
      c13_b_sf_marshallIn);
    c13_b_out = CV_EML_IF(41, 0, 0, CV_RELATIONAL_EVAL(5U, 41U, 0,
      *chartInstance->c13_skdw, 0.0, -1, 0U, *chartInstance->c13_skdw == 0.0));
    _SFD_SYMBOL_SCOPE_POP();
    if (c13_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 41U, *chartInstance->c13_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 26U, *chartInstance->c13_sfEvent);
      *chartInstance->c13_is_songkai = c13_IN_t2;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 26U, *chartInstance->c13_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_f_debug_family_names,
        c13_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_f_nargin, 0U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_f_nargout, 1U,
        c13_sf_marshallOut, c13_sf_marshallIn);
      if (!chartInstance->c13_dataWrittenToVector[8U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(24U, 4U, 26U,
          *chartInstance->c13_sfEvent, false);
      }

      *chartInstance->c13_skt += 0.002;
      chartInstance->c13_dataWrittenToVector[8U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c13_skt, 24U, 4U, 26U,
                            *chartInstance->c13_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 42U,
                   *chartInstance->c13_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_hb_debug_family_names,
        c13_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_e_nargin, 0U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_e_nargout, 1U,
        c13_sf_marshallOut, c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_d_out, 2U, c13_b_sf_marshallOut,
        c13_b_sf_marshallIn);
      c13_d_out = CV_EML_IF(42, 0, 0, CV_RELATIONAL_EVAL(5U, 42U, 0,
        *chartInstance->c13_skdw, 1.0, -1, 0U, *chartInstance->c13_skdw == 1.0));
      _SFD_SYMBOL_SCOPE_POP();
      if (c13_d_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 42U, *chartInstance->c13_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 26U, *chartInstance->c13_sfEvent);
        *chartInstance->c13_is_songkai = c13_IN_off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 22U, *chartInstance->c13_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_b_debug_family_names,
          c13_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_j_nargin, 0U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_j_nargout, 1U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        *chartInstance->c13_skhx = 0.0;
        chartInstance->c13_dataWrittenToVector[0U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c13_skhx, 16U, 4U, 22U,
                              *chartInstance->c13_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 26U,
                     *chartInstance->c13_sfEvent);
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 26U, *chartInstance->c13_sfEvent);
    break;

   default:
    CV_STATE_EVAL(21, 0, 0);

    /* Unreachable state, for coverage only */
    *chartInstance->c13_is_songkai = c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 22U, *chartInstance->c13_sfEvent);
    break;
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 21U, *chartInstance->c13_sfEvent);
}

static void c13_t(SFc13_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c13_debug_family_var_map[3];
  real_T c13_nargin = 0.0;
  real_T c13_nargout = 1.0;
  boolean_T c13_out;
  real_T c13_b_nargin = 0.0;
  real_T c13_b_nargout = 1.0;
  boolean_T c13_b_out;
  real_T c13_c_nargin = 0.0;
  real_T c13_c_nargout = 1.0;
  boolean_T c13_c_out;
  uint32_T c13_b_debug_family_var_map[2];
  real_T c13_d_nargin = 0.0;
  real_T c13_d_nargout = 0.0;
  real_T c13_e_nargin = 0.0;
  real_T c13_e_nargout = 1.0;
  boolean_T c13_d_out;
  real_T c13_f_nargin = 0.0;
  real_T c13_f_nargout = 0.0;
  real_T c13_g_nargin = 0.0;
  real_T c13_g_nargout = 0.0;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U, *chartInstance->c13_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_lb_debug_family_names,
    c13_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_nargin, 0U, c13_sf_marshallOut,
    c13_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_nargout, 1U, c13_sf_marshallOut,
    c13_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_out, 2U, c13_b_sf_marshallOut,
    c13_b_sf_marshallIn);
  c13_out = CV_EML_IF(5, 0, 0, *chartInstance->c13_temporalCounter_i1 >= 1);
  _SFD_SYMBOL_SCOPE_POP();
  guard1 = false;
  if (c13_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, *chartInstance->c13_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U,
                 *chartInstance->c13_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_mb_debug_family_names,
      c13_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_b_nargin, 0U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_b_nargout, 1U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_b_out, 2U, c13_b_sf_marshallOut,
      c13_b_sf_marshallIn);
    guard3 = false;
    if (CV_EML_COND(3, 0, 0, CV_RELATIONAL_EVAL(5U, 3U, 0,
          *chartInstance->c13_skdw, 0.0, -1, 0U, *chartInstance->c13_skdw == 0.0)))
    {
      if (CV_EML_COND(3, 0, 1, CV_RELATIONAL_EVAL(5U, 3U, 1,
            *chartInstance->c13_skt, 2.0, -1, 3U, *chartInstance->c13_skt <= 2.0)))
      {
        CV_EML_MCDC(3, 0, 0, true);
        CV_EML_IF(3, 0, 0, true);
        c13_b_out = true;
      } else {
        guard3 = true;
      }
    } else {
      if (!chartInstance->c13_dataWrittenToVector[8U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(24U, 5U, 3U,
          *chartInstance->c13_sfEvent, false);
      }

      guard3 = true;
    }

    if (guard3) {
      CV_EML_MCDC(3, 0, 0, false);
      CV_EML_IF(3, 0, 0, false);
      c13_b_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c13_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, *chartInstance->c13_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 24U, *chartInstance->c13_sfEvent);
      *chartInstance->c13_is_songkai = c13_IN_t;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 24U, *chartInstance->c13_sfEvent);
      *chartInstance->c13_temporalCounter_i1 = 0U;
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_d_debug_family_names,
        c13_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_d_nargin, 0U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_d_nargout, 1U,
        c13_sf_marshallOut, c13_sf_marshallIn);
      if (!chartInstance->c13_dataWrittenToVector[8U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(24U, 4U, 24U,
          *chartInstance->c13_sfEvent, false);
      }

      *chartInstance->c13_skt += 0.002;
      chartInstance->c13_dataWrittenToVector[8U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c13_skt, 24U, 4U, 24U,
                            *chartInstance->c13_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U,
                   *chartInstance->c13_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_ib_debug_family_names,
        c13_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_c_nargin, 0U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_c_nargout, 1U,
        c13_sf_marshallOut, c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_c_out, 2U, c13_b_sf_marshallOut,
        c13_b_sf_marshallIn);
      guard2 = false;
      if (CV_EML_COND(4, 0, 0, CV_RELATIONAL_EVAL(5U, 4U, 0,
            *chartInstance->c13_skdw, 1.0, -1, 0U, *chartInstance->c13_skdw ==
            1.0))) {
        if (CV_EML_COND(4, 0, 1, CV_RELATIONAL_EVAL(5U, 4U, 1,
              *chartInstance->c13_skt, 2.0, -1, 3U, *chartInstance->c13_skt <=
              2.0))) {
          CV_EML_MCDC(4, 0, 0, true);
          CV_EML_IF(4, 0, 0, true);
          c13_c_out = true;
        } else {
          guard2 = true;
        }
      } else {
        if (!chartInstance->c13_dataWrittenToVector[8U]) {
          _SFD_DATA_READ_BEFORE_WRITE_ERROR(24U, 5U, 4U,
            *chartInstance->c13_sfEvent, false);
        }

        guard2 = true;
      }

      if (guard2) {
        CV_EML_MCDC(4, 0, 0, false);
        CV_EML_IF(4, 0, 0, false);
        c13_c_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c13_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, *chartInstance->c13_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 24U, *chartInstance->c13_sfEvent);
        *chartInstance->c13_is_songkai = c13_IN_off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 22U, *chartInstance->c13_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_b_debug_family_names,
          c13_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_f_nargin, 0U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_f_nargout, 1U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        *chartInstance->c13_skhx = 0.0;
        chartInstance->c13_dataWrittenToVector[0U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c13_skhx, 16U, 4U, 22U,
                              *chartInstance->c13_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 39U,
                     *chartInstance->c13_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_kb_debug_family_names,
          c13_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_e_nargin, 0U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_e_nargout, 1U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_d_out, 2U,
          c13_b_sf_marshallOut, c13_b_sf_marshallIn);
        if (!chartInstance->c13_dataWrittenToVector[8U]) {
          _SFD_DATA_READ_BEFORE_WRITE_ERROR(24U, 5U, 39U,
            *chartInstance->c13_sfEvent, false);
        }

        c13_d_out = CV_EML_IF(39, 0, 0, CV_RELATIONAL_EVAL(5U, 39U, 0,
          *chartInstance->c13_skt, 2.0, -1, 4U, *chartInstance->c13_skt > 2.0));
        _SFD_SYMBOL_SCOPE_POP();
        if (c13_d_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 39U, *chartInstance->c13_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 24U, *chartInstance->c13_sfEvent);
          *chartInstance->c13_is_songkai = c13_IN_t1;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 25U, *chartInstance->c13_sfEvent);
          _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_e_debug_family_names,
            c13_b_debug_family_var_map);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_g_nargin, 0U,
            c13_sf_marshallOut, c13_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_g_nargout, 1U,
            c13_sf_marshallOut, c13_sf_marshallIn);
          *chartInstance->c13_skyichang = 1.0;
          chartInstance->c13_dataWrittenToVector[14U] = true;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c13_skyichang, 30U, 4U, 25U,
                                *chartInstance->c13_sfEvent, false);
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
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 24U,
                 *chartInstance->c13_sfEvent);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 24U, *chartInstance->c13_sfEvent);
}

static void c13_kaigai(SFc13_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c13_debug_family_var_map[3];
  real_T c13_nargin = 0.0;
  real_T c13_b_nargin = 0.0;
  real_T c13_nargout = 1.0;
  real_T c13_c_nargin = 0.0;
  real_T c13_b_nargout = 1.0;
  boolean_T c13_out;
  real_T c13_c_nargout = 1.0;
  uint32_T c13_b_debug_family_var_map[2];
  boolean_T c13_b_out;
  boolean_T c13_c_out;
  real_T c13_d_nargin = 0.0;
  real_T c13_d_nargout = 0.0;
  real_T c13_e_nargin = 0.0;
  real_T c13_e_nargout = 1.0;
  real_T c13_f_nargin = 0.0;
  boolean_T c13_d_out;
  real_T c13_g_nargin = 0.0;
  real_T c13_f_nargout = 1.0;
  real_T c13_h_nargin = 0.0;
  real_T c13_g_nargout = 0.0;
  boolean_T c13_e_out;
  real_T c13_h_nargout = 0.0;
  real_T c13_i_nargin = 0.0;
  real_T c13_i_nargout = 0.0;
  real_T c13_j_nargin = 0.0;
  real_T c13_j_nargout = 1.0;
  boolean_T c13_f_out;
  real_T c13_k_nargin = 0.0;
  real_T c13_k_nargout = 0.0;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 15U, *chartInstance->c13_sfEvent);
  switch (*chartInstance->c13_is_kaigai) {
   case c13_IN_off:
    CV_STATE_EVAL(15, 0, 1);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 8U,
                 *chartInstance->c13_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_qb_debug_family_names,
      c13_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_nargin, 0U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_nargout, 1U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_out, 2U, c13_b_sf_marshallOut,
      c13_b_sf_marshallIn);
    if (CV_EML_COND(8, 0, 0, CV_RELATIONAL_EVAL(5U, 8U, 0,
          *chartInstance->c13_b_kaigai, 1.0, -1, 0U,
          *chartInstance->c13_b_kaigai == 1.0)) && CV_EML_COND(8, 0, 1,
         CV_RELATIONAL_EVAL(5U, 8U, 1, *chartInstance->c13_skdw, 1.0, -1, 0U,
                            *chartInstance->c13_skdw == 1.0))) {
      CV_EML_MCDC(8, 0, 0, true);
      CV_EML_IF(8, 0, 0, true);
      c13_out = true;
    } else {
      CV_EML_MCDC(8, 0, 0, false);
      CV_EML_IF(8, 0, 0, false);
      c13_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c13_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8U, *chartInstance->c13_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 16U, *chartInstance->c13_sfEvent);
      *chartInstance->c13_is_kaigai = c13_IN_on;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 17U, *chartInstance->c13_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_h_debug_family_names,
        c13_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_g_nargin, 0U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_g_nargout, 1U,
        c13_sf_marshallOut, c13_sf_marshallIn);
      *chartInstance->c13_kghx = 1.0;
      chartInstance->c13_dataWrittenToVector[1U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c13_kghx, 17U, 4U, 17U,
                            *chartInstance->c13_sfEvent, false);
      *chartInstance->c13_kgzhiling1 = 1.0;
      chartInstance->c13_dataWrittenToVector[4U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c13_kgzhiling1, 20U, 4U, 17U,
                            *chartInstance->c13_sfEvent, false);
      *chartInstance->c13_kgzhiling2 = 1.0;
      chartInstance->c13_dataWrittenToVector[5U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c13_kgzhiling2, 21U, 4U, 17U,
                            *chartInstance->c13_sfEvent, false);
      *chartInstance->c13_kgyichang = 0.0;
      chartInstance->c13_dataWrittenToVector[15U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c13_kgyichang, 31U, 4U, 17U,
                            *chartInstance->c13_sfEvent, false);
      *chartInstance->c13_kgt = 0.0;
      chartInstance->c13_dataWrittenToVector[9U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c13_kgt, 25U, 4U, 17U,
                            *chartInstance->c13_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 16U,
                   *chartInstance->c13_sfEvent);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 16U, *chartInstance->c13_sfEvent);
    break;

   case c13_IN_on:
    CV_STATE_EVAL(15, 0, 2);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 9U, *chartInstance->c13_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 10U,
                 *chartInstance->c13_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_tb_debug_family_names,
      c13_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_c_nargin, 0U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_c_nargout, 1U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_c_out, 2U, c13_b_sf_marshallOut,
      c13_b_sf_marshallIn);
    guard2 = false;
    if (CV_EML_COND(10, 0, 0, CV_RELATIONAL_EVAL(5U, 10U, 0,
          *chartInstance->c13_kgdw1, 0.0, -1, 0U, *chartInstance->c13_kgdw1 ==
          0.0)) || CV_EML_COND(10, 0, 1, CV_RELATIONAL_EVAL(5U, 10U, 1,
          *chartInstance->c13_kgdw2, 0.0, -1, 0U, *chartInstance->c13_kgdw2 ==
          0.0))) {
      if (!chartInstance->c13_dataWrittenToVector[9U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(25U, 5U, 10U,
          *chartInstance->c13_sfEvent, false);
      }

      if (CV_EML_COND(10, 0, 2, CV_RELATIONAL_EVAL(5U, 10U, 2,
            *chartInstance->c13_kgt, 12.0, -1, 3U, *chartInstance->c13_kgt <=
            12.0))) {
        CV_EML_MCDC(10, 0, 0, true);
        CV_EML_IF(10, 0, 0, true);
        c13_c_out = true;
      } else {
        guard2 = true;
      }
    } else {
      guard2 = true;
    }

    if (guard2) {
      CV_EML_MCDC(10, 0, 0, false);
      CV_EML_IF(10, 0, 0, false);
      c13_c_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c13_c_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 10U, *chartInstance->c13_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 17U, *chartInstance->c13_sfEvent);
      *chartInstance->c13_is_kaigai = c13_IN_t;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 18U, *chartInstance->c13_sfEvent);
      *chartInstance->c13_temporalCounter_i2 = 0U;
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_i_debug_family_names,
        c13_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_i_nargin, 0U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_i_nargout, 1U,
        c13_sf_marshallOut, c13_sf_marshallIn);
      if (!chartInstance->c13_dataWrittenToVector[9U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(25U, 4U, 18U,
          *chartInstance->c13_sfEvent, false);
      }

      *chartInstance->c13_kgt += 0.002;
      chartInstance->c13_dataWrittenToVector[9U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c13_kgt, 25U, 4U, 18U,
                            *chartInstance->c13_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7U,
                   *chartInstance->c13_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_pb_debug_family_names,
        c13_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_f_nargin, 0U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_f_nargout, 1U,
        c13_sf_marshallOut, c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_e_out, 2U, c13_b_sf_marshallOut,
        c13_b_sf_marshallIn);
      guard1 = false;
      if (CV_EML_COND(7, 0, 0, CV_RELATIONAL_EVAL(5U, 7U, 0,
            *chartInstance->c13_kgdw1, 1.0, -1, 0U, *chartInstance->c13_kgdw1 ==
            1.0))) {
        if (CV_EML_COND(7, 0, 1, CV_RELATIONAL_EVAL(5U, 7U, 1,
              *chartInstance->c13_kgdw2, 1.0, -1, 0U, *chartInstance->c13_kgdw2 ==
              1.0))) {
          if (CV_EML_COND(7, 0, 2, CV_RELATIONAL_EVAL(5U, 7U, 2,
                *chartInstance->c13_kgt, 12.0, -1, 3U, *chartInstance->c13_kgt <=
                12.0))) {
            CV_EML_MCDC(7, 0, 0, true);
            CV_EML_IF(7, 0, 0, true);
            c13_e_out = true;
          } else {
            guard1 = true;
          }
        } else {
          if (!chartInstance->c13_dataWrittenToVector[9U]) {
            _SFD_DATA_READ_BEFORE_WRITE_ERROR(25U, 5U, 7U,
              *chartInstance->c13_sfEvent, false);
          }

          guard1 = true;
        }
      } else {
        guard1 = true;
      }

      if (guard1) {
        CV_EML_MCDC(7, 0, 0, false);
        CV_EML_IF(7, 0, 0, false);
        c13_e_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c13_e_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, *chartInstance->c13_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 17U, *chartInstance->c13_sfEvent);
        *chartInstance->c13_is_kaigai = c13_IN_off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 16U, *chartInstance->c13_sfEvent);
        c13_enter_atomic_off(chartInstance);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 44U,
                     *chartInstance->c13_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_rb_debug_family_names,
          c13_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_j_nargin, 0U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_j_nargout, 1U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_f_out, 2U,
          c13_b_sf_marshallOut, c13_b_sf_marshallIn);
        if (!chartInstance->c13_dataWrittenToVector[9U]) {
          _SFD_DATA_READ_BEFORE_WRITE_ERROR(25U, 5U, 44U,
            *chartInstance->c13_sfEvent, false);
        }

        c13_f_out = CV_EML_IF(44, 0, 0, CV_RELATIONAL_EVAL(5U, 44U, 0,
          *chartInstance->c13_kgt, 12.0, -1, 4U, *chartInstance->c13_kgt > 12.0));
        _SFD_SYMBOL_SCOPE_POP();
        if (c13_f_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 44U, *chartInstance->c13_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 17U, *chartInstance->c13_sfEvent);
          *chartInstance->c13_is_kaigai = c13_IN_t1;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 19U, *chartInstance->c13_sfEvent);
          _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_j_debug_family_names,
            c13_b_debug_family_var_map);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_k_nargin, 0U,
            c13_sf_marshallOut, c13_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_k_nargout, 1U,
            c13_sf_marshallOut, c13_sf_marshallIn);
          *chartInstance->c13_kgyichang = 1.0;
          chartInstance->c13_dataWrittenToVector[15U] = true;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c13_kgyichang, 31U, 4U, 19U,
                                *chartInstance->c13_sfEvent, false);
          _SFD_SYMBOL_SCOPE_POP();
        } else {
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 17U,
                       *chartInstance->c13_sfEvent);
        }
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 17U, *chartInstance->c13_sfEvent);
    break;

   case c13_IN_t:
    CV_STATE_EVAL(15, 0, 3);
    c13_b_t(chartInstance);
    break;

   case c13_IN_t1:
    CV_STATE_EVAL(15, 0, 4);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 46U, *chartInstance->c13_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 19U, *chartInstance->c13_sfEvent);
    *chartInstance->c13_is_kaigai = c13_IN_t2;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 20U, *chartInstance->c13_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_k_debug_family_names,
      c13_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_d_nargin, 0U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_d_nargout, 1U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    if (!chartInstance->c13_dataWrittenToVector[9U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(25U, 4U, 20U,
        *chartInstance->c13_sfEvent, false);
    }

    *chartInstance->c13_kgt += 0.002;
    chartInstance->c13_dataWrittenToVector[9U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c13_kgt, 25U, 4U, 20U,
                          *chartInstance->c13_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 19U, *chartInstance->c13_sfEvent);
    break;

   case c13_IN_t2:
    CV_STATE_EVAL(15, 0, 5);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 43U,
                 *chartInstance->c13_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_ub_debug_family_names,
      c13_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_b_nargin, 0U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_b_nargout, 1U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_b_out, 2U, c13_b_sf_marshallOut,
      c13_b_sf_marshallIn);
    if (CV_EML_COND(43, 0, 0, CV_RELATIONAL_EVAL(5U, 43U, 0,
          *chartInstance->c13_kgdw1, 0.0, -1, 0U, *chartInstance->c13_kgdw1 ==
          0.0)) || CV_EML_COND(43, 0, 1, CV_RELATIONAL_EVAL(5U, 43U, 1,
          *chartInstance->c13_kgdw2, 0.0, -1, 0U, *chartInstance->c13_kgdw2 ==
          0.0))) {
      CV_EML_MCDC(43, 0, 0, true);
      CV_EML_IF(43, 0, 0, true);
      c13_b_out = true;
    } else {
      CV_EML_MCDC(43, 0, 0, false);
      CV_EML_IF(43, 0, 0, false);
      c13_b_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c13_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 43U, *chartInstance->c13_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 20U, *chartInstance->c13_sfEvent);
      *chartInstance->c13_is_kaigai = c13_IN_t2;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 20U, *chartInstance->c13_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_k_debug_family_names,
        c13_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_h_nargin, 0U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_h_nargout, 1U,
        c13_sf_marshallOut, c13_sf_marshallIn);
      if (!chartInstance->c13_dataWrittenToVector[9U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(25U, 4U, 20U,
          *chartInstance->c13_sfEvent, false);
      }

      *chartInstance->c13_kgt += 0.002;
      chartInstance->c13_dataWrittenToVector[9U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c13_kgt, 25U, 4U, 20U,
                            *chartInstance->c13_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 45U,
                   *chartInstance->c13_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_ob_debug_family_names,
        c13_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_e_nargin, 0U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_e_nargout, 1U,
        c13_sf_marshallOut, c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_d_out, 2U, c13_b_sf_marshallOut,
        c13_b_sf_marshallIn);
      if (CV_EML_COND(45, 0, 0, CV_RELATIONAL_EVAL(5U, 45U, 0,
            *chartInstance->c13_kgdw1, 1.0, -1, 0U, *chartInstance->c13_kgdw1 ==
            1.0)) && CV_EML_COND(45, 0, 1, CV_RELATIONAL_EVAL(5U, 45U, 1,
            *chartInstance->c13_kgdw2, 1.0, -1, 0U, *chartInstance->c13_kgdw2 ==
            1.0))) {
        CV_EML_MCDC(45, 0, 0, true);
        CV_EML_IF(45, 0, 0, true);
        c13_d_out = true;
      } else {
        CV_EML_MCDC(45, 0, 0, false);
        CV_EML_IF(45, 0, 0, false);
        c13_d_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c13_d_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 45U, *chartInstance->c13_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 20U, *chartInstance->c13_sfEvent);
        *chartInstance->c13_is_kaigai = c13_IN_off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 16U, *chartInstance->c13_sfEvent);
        c13_enter_atomic_off(chartInstance);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 20U,
                     *chartInstance->c13_sfEvent);
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 20U, *chartInstance->c13_sfEvent);
    break;

   default:
    CV_STATE_EVAL(15, 0, 0);

    /* Unreachable state, for coverage only */
    *chartInstance->c13_is_kaigai = c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 16U, *chartInstance->c13_sfEvent);
    break;
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 15U, *chartInstance->c13_sfEvent);
}

static void c13_enter_atomic_off(SFc13_kaiguangai1108InstanceStruct
  *chartInstance)
{
  uint32_T c13_debug_family_var_map[2];
  real_T c13_nargin = 0.0;
  real_T c13_nargout = 0.0;
  real_T c13_hoistedGlobal;
  const mxArray *c13_y = NULL;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_g_debug_family_names,
    c13_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_nargin, 0U, c13_sf_marshallOut,
    c13_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_nargout, 1U, c13_sf_marshallOut,
    c13_sf_marshallIn);
  *chartInstance->c13_kghx = 0.0;
  chartInstance->c13_dataWrittenToVector[1U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c13_kghx, 17U, 4U, 16U,
                        *chartInstance->c13_sfEvent, false);
  *chartInstance->c13_kgzhiling1 = 0.0;
  chartInstance->c13_dataWrittenToVector[4U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c13_kgzhiling1, 20U, 4U, 16U,
                        *chartInstance->c13_sfEvent, false);
  *chartInstance->c13_kgzhiling2 = 0.0;
  chartInstance->c13_dataWrittenToVector[5U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c13_kgzhiling2, 21U, 4U, 16U,
                        *chartInstance->c13_sfEvent, false);
  if (!chartInstance->c13_dataWrittenToVector[5U]) {
    _SFD_DATA_READ_BEFORE_WRITE_ERROR(21U, 4U, 16U, *chartInstance->c13_sfEvent,
      false);
  }

  sf_mex_printf("%s =\\n", "kgzhiling2");
  c13_hoistedGlobal = *chartInstance->c13_kgzhiling2;
  c13_y = NULL;
  sf_mex_assign(&c13_y, sf_mex_create("y", &c13_hoistedGlobal, 0, 0U, 0U, 0U, 0),
                false);
  sf_mex_call_debug(sfGlobalDebugInstanceStruct, "disp", 0U, 1U, 14, c13_y);
  _SFD_SYMBOL_SCOPE_POP();
}

static void c13_b_t(SFc13_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c13_debug_family_var_map[3];
  real_T c13_nargin = 0.0;
  real_T c13_nargout = 1.0;
  boolean_T c13_out;
  real_T c13_b_nargin = 0.0;
  real_T c13_b_nargout = 1.0;
  boolean_T c13_b_out;
  real_T c13_c_nargin = 0.0;
  real_T c13_c_nargout = 1.0;
  boolean_T c13_c_out;
  uint32_T c13_b_debug_family_var_map[2];
  real_T c13_d_nargin = 0.0;
  real_T c13_d_nargout = 0.0;
  real_T c13_e_nargin = 0.0;
  real_T c13_e_nargout = 1.0;
  boolean_T c13_d_out;
  real_T c13_f_nargin = 0.0;
  real_T c13_f_nargout = 0.0;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 11U,
               *chartInstance->c13_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_sb_debug_family_names,
    c13_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_nargin, 0U, c13_sf_marshallOut,
    c13_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_nargout, 1U, c13_sf_marshallOut,
    c13_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_out, 2U, c13_b_sf_marshallOut,
    c13_b_sf_marshallIn);
  c13_out = CV_EML_IF(11, 0, 0, *chartInstance->c13_temporalCounter_i2 >= 1);
  _SFD_SYMBOL_SCOPE_POP();
  guard1 = false;
  if (c13_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 11U, *chartInstance->c13_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 10U,
                 *chartInstance->c13_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_tb_debug_family_names,
      c13_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_b_nargin, 0U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_b_nargout, 1U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_b_out, 2U, c13_b_sf_marshallOut,
      c13_b_sf_marshallIn);
    guard3 = false;
    if (CV_EML_COND(10, 0, 0, CV_RELATIONAL_EVAL(5U, 10U, 0,
          *chartInstance->c13_kgdw1, 0.0, -1, 0U, *chartInstance->c13_kgdw1 ==
          0.0)) || CV_EML_COND(10, 0, 1, CV_RELATIONAL_EVAL(5U, 10U, 1,
          *chartInstance->c13_kgdw2, 0.0, -1, 0U, *chartInstance->c13_kgdw2 ==
          0.0))) {
      if (!chartInstance->c13_dataWrittenToVector[9U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(25U, 5U, 10U,
          *chartInstance->c13_sfEvent, false);
      }

      if (CV_EML_COND(10, 0, 2, CV_RELATIONAL_EVAL(5U, 10U, 2,
            *chartInstance->c13_kgt, 12.0, -1, 3U, *chartInstance->c13_kgt <=
            12.0))) {
        CV_EML_MCDC(10, 0, 0, true);
        CV_EML_IF(10, 0, 0, true);
        c13_b_out = true;
      } else {
        guard3 = true;
      }
    } else {
      guard3 = true;
    }

    if (guard3) {
      CV_EML_MCDC(10, 0, 0, false);
      CV_EML_IF(10, 0, 0, false);
      c13_b_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c13_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 10U, *chartInstance->c13_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 18U, *chartInstance->c13_sfEvent);
      *chartInstance->c13_is_kaigai = c13_IN_t;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 18U, *chartInstance->c13_sfEvent);
      *chartInstance->c13_temporalCounter_i2 = 0U;
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_i_debug_family_names,
        c13_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_d_nargin, 0U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_d_nargout, 1U,
        c13_sf_marshallOut, c13_sf_marshallIn);
      if (!chartInstance->c13_dataWrittenToVector[9U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(25U, 4U, 18U,
          *chartInstance->c13_sfEvent, false);
      }

      *chartInstance->c13_kgt += 0.002;
      chartInstance->c13_dataWrittenToVector[9U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c13_kgt, 25U, 4U, 18U,
                            *chartInstance->c13_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7U,
                   *chartInstance->c13_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_pb_debug_family_names,
        c13_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_c_nargin, 0U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_c_nargout, 1U,
        c13_sf_marshallOut, c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_c_out, 2U, c13_b_sf_marshallOut,
        c13_b_sf_marshallIn);
      guard2 = false;
      if (CV_EML_COND(7, 0, 0, CV_RELATIONAL_EVAL(5U, 7U, 0,
            *chartInstance->c13_kgdw1, 1.0, -1, 0U, *chartInstance->c13_kgdw1 ==
            1.0))) {
        if (CV_EML_COND(7, 0, 1, CV_RELATIONAL_EVAL(5U, 7U, 1,
              *chartInstance->c13_kgdw2, 1.0, -1, 0U, *chartInstance->c13_kgdw2 ==
              1.0))) {
          if (CV_EML_COND(7, 0, 2, CV_RELATIONAL_EVAL(5U, 7U, 2,
                *chartInstance->c13_kgt, 12.0, -1, 3U, *chartInstance->c13_kgt <=
                12.0))) {
            CV_EML_MCDC(7, 0, 0, true);
            CV_EML_IF(7, 0, 0, true);
            c13_c_out = true;
          } else {
            guard2 = true;
          }
        } else {
          if (!chartInstance->c13_dataWrittenToVector[9U]) {
            _SFD_DATA_READ_BEFORE_WRITE_ERROR(25U, 5U, 7U,
              *chartInstance->c13_sfEvent, false);
          }

          guard2 = true;
        }
      } else {
        guard2 = true;
      }

      if (guard2) {
        CV_EML_MCDC(7, 0, 0, false);
        CV_EML_IF(7, 0, 0, false);
        c13_c_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c13_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, *chartInstance->c13_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 18U, *chartInstance->c13_sfEvent);
        *chartInstance->c13_is_kaigai = c13_IN_off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 16U, *chartInstance->c13_sfEvent);
        c13_enter_atomic_off(chartInstance);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 44U,
                     *chartInstance->c13_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_rb_debug_family_names,
          c13_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_e_nargin, 0U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_e_nargout, 1U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_d_out, 2U,
          c13_b_sf_marshallOut, c13_b_sf_marshallIn);
        if (!chartInstance->c13_dataWrittenToVector[9U]) {
          _SFD_DATA_READ_BEFORE_WRITE_ERROR(25U, 5U, 44U,
            *chartInstance->c13_sfEvent, false);
        }

        c13_d_out = CV_EML_IF(44, 0, 0, CV_RELATIONAL_EVAL(5U, 44U, 0,
          *chartInstance->c13_kgt, 12.0, -1, 4U, *chartInstance->c13_kgt > 12.0));
        _SFD_SYMBOL_SCOPE_POP();
        if (c13_d_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 44U, *chartInstance->c13_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 18U, *chartInstance->c13_sfEvent);
          *chartInstance->c13_is_kaigai = c13_IN_t1;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 19U, *chartInstance->c13_sfEvent);
          _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_j_debug_family_names,
            c13_b_debug_family_var_map);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_f_nargin, 0U,
            c13_sf_marshallOut, c13_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_f_nargout, 1U,
            c13_sf_marshallOut, c13_sf_marshallIn);
          *chartInstance->c13_kgyichang = 1.0;
          chartInstance->c13_dataWrittenToVector[15U] = true;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c13_kgyichang, 31U, 4U, 19U,
                                *chartInstance->c13_sfEvent, false);
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
                 *chartInstance->c13_sfEvent);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 18U, *chartInstance->c13_sfEvent);
}

static void c13_jiesuo_songkai(SFc13_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c13_debug_family_var_map[3];
  real_T c13_nargin = 0.0;
  real_T c13_b_nargin = 0.0;
  real_T c13_nargout = 1.0;
  real_T c13_c_nargin = 0.0;
  real_T c13_b_nargout = 1.0;
  boolean_T c13_out;
  real_T c13_c_nargout = 1.0;
  uint32_T c13_b_debug_family_var_map[2];
  boolean_T c13_b_out;
  boolean_T c13_c_out;
  real_T c13_d_nargin = 0.0;
  real_T c13_d_nargout = 0.0;
  real_T c13_e_nargin = 0.0;
  real_T c13_e_nargout = 1.0;
  boolean_T c13_d_out;
  real_T c13_f_nargin = 0.0;
  real_T c13_f_nargout = 0.0;
  real_T c13_g_nargin = 0.0;
  real_T c13_g_nargout = 1.0;
  real_T c13_h_nargin = 0.0;
  boolean_T c13_e_out;
  real_T c13_h_nargout = 0.0;
  real_T c13_i_nargin = 0.0;
  real_T c13_i_nargout = 0.0;
  real_T c13_j_nargin = 0.0;
  real_T c13_j_nargout = 0.0;
  real_T c13_k_nargin = 0.0;
  real_T c13_k_nargout = 1.0;
  boolean_T c13_f_out;
  real_T c13_l_nargin = 0.0;
  real_T c13_l_nargout = 0.0;
  real_T c13_m_nargin = 0.0;
  real_T c13_m_nargout = 0.0;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 9U, *chartInstance->c13_sfEvent);
  switch (*chartInstance->c13_is_jiesuo_songkai) {
   case c13_IN_off:
    CV_STATE_EVAL(9, 0, 1);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 22U,
                 *chartInstance->c13_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_xb_debug_family_names,
      c13_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_nargin, 0U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_nargout, 1U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_out, 2U, c13_b_sf_marshallOut,
      c13_b_sf_marshallIn);
    if (CV_EML_COND(22, 0, 0, CV_RELATIONAL_EVAL(5U, 22U, 0,
          *chartInstance->c13_jiesuo, 1.0, -1, 0U, *chartInstance->c13_jiesuo ==
          1.0)) && CV_EML_COND(22, 0, 1, CV_RELATIONAL_EVAL(5U, 22U, 1,
          *chartInstance->c13_sddw, 1.0, -1, 0U, *chartInstance->c13_sddw == 1.0)))
    {
      CV_EML_MCDC(22, 0, 0, true);
      CV_EML_IF(22, 0, 0, true);
      c13_out = true;
    } else {
      CV_EML_MCDC(22, 0, 0, false);
      CV_EML_IF(22, 0, 0, false);
      c13_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c13_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 22U, *chartInstance->c13_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c13_sfEvent);
      *chartInstance->c13_is_jiesuo_songkai = c13_IN_on;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 11U, *chartInstance->c13_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_m_debug_family_names,
        c13_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_h_nargin, 0U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_h_nargout, 1U,
        c13_sf_marshallOut, c13_sf_marshallIn);
      *chartInstance->c13_skhx = 1.0;
      chartInstance->c13_dataWrittenToVector[0U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c13_skhx, 16U, 4U, 11U,
                            *chartInstance->c13_sfEvent, false);
      *chartInstance->c13_jsyichang = 0.0;
      chartInstance->c13_dataWrittenToVector[17U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c13_jsyichang, 33U, 4U, 11U,
                            *chartInstance->c13_sfEvent, false);
      *chartInstance->c13_jst = 0.0;
      chartInstance->c13_dataWrittenToVector[11U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c13_jst, 27U, 4U, 11U,
                            *chartInstance->c13_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 10U,
                   *chartInstance->c13_sfEvent);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 10U, *chartInstance->c13_sfEvent);
    break;

   case c13_IN_on:
    CV_STATE_EVAL(9, 0, 2);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 20U, *chartInstance->c13_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 23U,
                 *chartInstance->c13_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_bc_debug_family_names,
      c13_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_c_nargin, 0U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_c_nargout, 1U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_c_out, 2U, c13_b_sf_marshallOut,
      c13_b_sf_marshallIn);
    guard2 = false;
    if (CV_EML_COND(23, 0, 0, CV_RELATIONAL_EVAL(5U, 23U, 0,
          *chartInstance->c13_jsdw, 0.0, -1, 0U, *chartInstance->c13_jsdw == 0.0)))
    {
      if (CV_EML_COND(23, 0, 1, CV_RELATIONAL_EVAL(5U, 23U, 1,
            *chartInstance->c13_jst, 2.0, -1, 3U, *chartInstance->c13_jst <= 2.0)))
      {
        CV_EML_MCDC(23, 0, 0, true);
        CV_EML_IF(23, 0, 0, true);
        c13_c_out = true;
      } else {
        guard2 = true;
      }
    } else {
      if (!chartInstance->c13_dataWrittenToVector[11U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(27U, 5U, 23U,
          *chartInstance->c13_sfEvent, false);
      }

      guard2 = true;
    }

    if (guard2) {
      CV_EML_MCDC(23, 0, 0, false);
      CV_EML_IF(23, 0, 0, false);
      c13_c_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c13_c_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 23U, *chartInstance->c13_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 11U, *chartInstance->c13_sfEvent);
      *chartInstance->c13_is_jiesuo_songkai = c13_IN_t;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 12U, *chartInstance->c13_sfEvent);
      *chartInstance->c13_temporalCounter_i3 = 0U;
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_n_debug_family_names,
        c13_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_i_nargin, 0U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_i_nargout, 1U,
        c13_sf_marshallOut, c13_sf_marshallIn);
      if (!chartInstance->c13_dataWrittenToVector[11U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(27U, 4U, 12U,
          *chartInstance->c13_sfEvent, false);
      }

      *chartInstance->c13_jst += 0.002;
      chartInstance->c13_dataWrittenToVector[11U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c13_jst, 27U, 4U, 12U,
                            *chartInstance->c13_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 19U,
                   *chartInstance->c13_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_wb_debug_family_names,
        c13_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_g_nargin, 0U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_g_nargout, 1U,
        c13_sf_marshallOut, c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_e_out, 2U, c13_b_sf_marshallOut,
        c13_b_sf_marshallIn);
      guard1 = false;
      if (CV_EML_COND(19, 0, 0, CV_RELATIONAL_EVAL(5U, 19U, 0,
            *chartInstance->c13_skdw, 1.0, -1, 0U, *chartInstance->c13_skdw ==
            1.0))) {
        if (CV_EML_COND(19, 0, 1, CV_RELATIONAL_EVAL(5U, 19U, 1,
              *chartInstance->c13_jst, 2.0, -1, 3U, *chartInstance->c13_jst <=
              2.0))) {
          CV_EML_MCDC(19, 0, 0, true);
          CV_EML_IF(19, 0, 0, true);
          c13_e_out = true;
        } else {
          guard1 = true;
        }
      } else {
        if (!chartInstance->c13_dataWrittenToVector[11U]) {
          _SFD_DATA_READ_BEFORE_WRITE_ERROR(27U, 5U, 19U,
            *chartInstance->c13_sfEvent, false);
        }

        guard1 = true;
      }

      if (guard1) {
        CV_EML_MCDC(19, 0, 0, false);
        CV_EML_IF(19, 0, 0, false);
        c13_e_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c13_e_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 19U, *chartInstance->c13_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 11U, *chartInstance->c13_sfEvent);
        *chartInstance->c13_is_jiesuo_songkai = c13_IN_off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, *chartInstance->c13_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_l_debug_family_names,
          c13_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_l_nargin, 0U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_l_nargout, 1U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        *chartInstance->c13_skhx = 0.0;
        chartInstance->c13_dataWrittenToVector[0U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c13_skhx, 16U, 4U, 10U,
                              *chartInstance->c13_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 51U,
                     *chartInstance->c13_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_yb_debug_family_names,
          c13_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_k_nargin, 0U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_k_nargout, 1U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_f_out, 2U,
          c13_b_sf_marshallOut, c13_b_sf_marshallIn);
        if (!chartInstance->c13_dataWrittenToVector[11U]) {
          _SFD_DATA_READ_BEFORE_WRITE_ERROR(27U, 5U, 51U,
            *chartInstance->c13_sfEvent, false);
        }

        c13_f_out = CV_EML_IF(51, 0, 0, CV_RELATIONAL_EVAL(5U, 51U, 0,
          *chartInstance->c13_jst, 2.0, -1, 4U, *chartInstance->c13_jst > 2.0));
        _SFD_SYMBOL_SCOPE_POP();
        if (c13_f_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 51U, *chartInstance->c13_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 11U, *chartInstance->c13_sfEvent);
          *chartInstance->c13_is_jiesuo_songkai = c13_IN_t1;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 13U, *chartInstance->c13_sfEvent);
          _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_o_debug_family_names,
            c13_b_debug_family_var_map);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_m_nargin, 0U,
            c13_sf_marshallOut, c13_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_m_nargout, 1U,
            c13_sf_marshallOut, c13_sf_marshallIn);
          *chartInstance->c13_jsyichang = 1.0;
          chartInstance->c13_dataWrittenToVector[17U] = true;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c13_jsyichang, 33U, 4U, 13U,
                                *chartInstance->c13_sfEvent, false);
          _SFD_SYMBOL_SCOPE_POP();
        } else {
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 11U,
                       *chartInstance->c13_sfEvent);
        }
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 11U, *chartInstance->c13_sfEvent);
    break;

   case c13_IN_t:
    CV_STATE_EVAL(9, 0, 3);
    c13_c_t(chartInstance);
    break;

   case c13_IN_t1:
    CV_STATE_EVAL(9, 0, 4);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 52U, *chartInstance->c13_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 13U, *chartInstance->c13_sfEvent);
    *chartInstance->c13_is_jiesuo_songkai = c13_IN_t2;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 14U, *chartInstance->c13_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_p_debug_family_names,
      c13_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_d_nargin, 0U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_d_nargout, 1U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    if (!chartInstance->c13_dataWrittenToVector[11U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(27U, 4U, 14U,
        *chartInstance->c13_sfEvent, false);
    }

    *chartInstance->c13_jst += 0.002;
    chartInstance->c13_dataWrittenToVector[11U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c13_jst, 27U, 4U, 14U,
                          *chartInstance->c13_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 13U, *chartInstance->c13_sfEvent);
    break;

   case c13_IN_t2:
    CV_STATE_EVAL(9, 0, 5);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 53U,
                 *chartInstance->c13_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_cc_debug_family_names,
      c13_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_b_nargin, 0U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_b_nargout, 1U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_b_out, 2U, c13_b_sf_marshallOut,
      c13_b_sf_marshallIn);
    c13_b_out = CV_EML_IF(53, 0, 0, CV_RELATIONAL_EVAL(5U, 53U, 0,
      *chartInstance->c13_jsdw, 0.0, -1, 0U, *chartInstance->c13_jsdw == 0.0));
    _SFD_SYMBOL_SCOPE_POP();
    if (c13_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 53U, *chartInstance->c13_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 14U, *chartInstance->c13_sfEvent);
      *chartInstance->c13_is_jiesuo_songkai = c13_IN_t2;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 14U, *chartInstance->c13_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_p_debug_family_names,
        c13_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_f_nargin, 0U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_f_nargout, 1U,
        c13_sf_marshallOut, c13_sf_marshallIn);
      if (!chartInstance->c13_dataWrittenToVector[11U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(27U, 4U, 14U,
          *chartInstance->c13_sfEvent, false);
      }

      *chartInstance->c13_jst += 0.002;
      chartInstance->c13_dataWrittenToVector[11U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c13_jst, 27U, 4U, 14U,
                            *chartInstance->c13_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 54U,
                   *chartInstance->c13_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_vb_debug_family_names,
        c13_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_e_nargin, 0U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_e_nargout, 1U,
        c13_sf_marshallOut, c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_d_out, 2U, c13_b_sf_marshallOut,
        c13_b_sf_marshallIn);
      c13_d_out = CV_EML_IF(54, 0, 0, CV_RELATIONAL_EVAL(5U, 54U, 0,
        *chartInstance->c13_jsdw, 1.0, -1, 0U, *chartInstance->c13_jsdw == 1.0));
      _SFD_SYMBOL_SCOPE_POP();
      if (c13_d_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 54U, *chartInstance->c13_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 14U, *chartInstance->c13_sfEvent);
        *chartInstance->c13_is_jiesuo_songkai = c13_IN_off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, *chartInstance->c13_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_l_debug_family_names,
          c13_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_j_nargin, 0U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_j_nargout, 1U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        *chartInstance->c13_skhx = 0.0;
        chartInstance->c13_dataWrittenToVector[0U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c13_skhx, 16U, 4U, 10U,
                              *chartInstance->c13_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 14U,
                     *chartInstance->c13_sfEvent);
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 14U, *chartInstance->c13_sfEvent);
    break;

   default:
    CV_STATE_EVAL(9, 0, 0);

    /* Unreachable state, for coverage only */
    *chartInstance->c13_is_jiesuo_songkai = c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c13_sfEvent);
    break;
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 9U, *chartInstance->c13_sfEvent);
}

static void c13_c_t(SFc13_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c13_debug_family_var_map[3];
  real_T c13_nargin = 0.0;
  real_T c13_nargout = 1.0;
  boolean_T c13_out;
  real_T c13_b_nargin = 0.0;
  real_T c13_b_nargout = 1.0;
  boolean_T c13_b_out;
  real_T c13_c_nargin = 0.0;
  real_T c13_c_nargout = 1.0;
  boolean_T c13_c_out;
  uint32_T c13_b_debug_family_var_map[2];
  real_T c13_d_nargin = 0.0;
  real_T c13_d_nargout = 0.0;
  real_T c13_e_nargin = 0.0;
  real_T c13_e_nargout = 1.0;
  boolean_T c13_d_out;
  real_T c13_f_nargin = 0.0;
  real_T c13_f_nargout = 0.0;
  real_T c13_g_nargin = 0.0;
  real_T c13_g_nargout = 0.0;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 21U,
               *chartInstance->c13_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_ac_debug_family_names,
    c13_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_nargin, 0U, c13_sf_marshallOut,
    c13_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_nargout, 1U, c13_sf_marshallOut,
    c13_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_out, 2U, c13_b_sf_marshallOut,
    c13_b_sf_marshallIn);
  c13_out = CV_EML_IF(21, 0, 0, *chartInstance->c13_temporalCounter_i3 >= 1);
  _SFD_SYMBOL_SCOPE_POP();
  guard1 = false;
  if (c13_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 21U, *chartInstance->c13_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 23U,
                 *chartInstance->c13_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_bc_debug_family_names,
      c13_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_b_nargin, 0U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_b_nargout, 1U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_b_out, 2U, c13_b_sf_marshallOut,
      c13_b_sf_marshallIn);
    guard3 = false;
    if (CV_EML_COND(23, 0, 0, CV_RELATIONAL_EVAL(5U, 23U, 0,
          *chartInstance->c13_jsdw, 0.0, -1, 0U, *chartInstance->c13_jsdw == 0.0)))
    {
      if (CV_EML_COND(23, 0, 1, CV_RELATIONAL_EVAL(5U, 23U, 1,
            *chartInstance->c13_jst, 2.0, -1, 3U, *chartInstance->c13_jst <= 2.0)))
      {
        CV_EML_MCDC(23, 0, 0, true);
        CV_EML_IF(23, 0, 0, true);
        c13_b_out = true;
      } else {
        guard3 = true;
      }
    } else {
      if (!chartInstance->c13_dataWrittenToVector[11U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(27U, 5U, 23U,
          *chartInstance->c13_sfEvent, false);
      }

      guard3 = true;
    }

    if (guard3) {
      CV_EML_MCDC(23, 0, 0, false);
      CV_EML_IF(23, 0, 0, false);
      c13_b_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c13_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 23U, *chartInstance->c13_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 12U, *chartInstance->c13_sfEvent);
      *chartInstance->c13_is_jiesuo_songkai = c13_IN_t;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 12U, *chartInstance->c13_sfEvent);
      *chartInstance->c13_temporalCounter_i3 = 0U;
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_n_debug_family_names,
        c13_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_d_nargin, 0U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_d_nargout, 1U,
        c13_sf_marshallOut, c13_sf_marshallIn);
      if (!chartInstance->c13_dataWrittenToVector[11U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(27U, 4U, 12U,
          *chartInstance->c13_sfEvent, false);
      }

      *chartInstance->c13_jst += 0.002;
      chartInstance->c13_dataWrittenToVector[11U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c13_jst, 27U, 4U, 12U,
                            *chartInstance->c13_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 19U,
                   *chartInstance->c13_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_wb_debug_family_names,
        c13_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_c_nargin, 0U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_c_nargout, 1U,
        c13_sf_marshallOut, c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_c_out, 2U, c13_b_sf_marshallOut,
        c13_b_sf_marshallIn);
      guard2 = false;
      if (CV_EML_COND(19, 0, 0, CV_RELATIONAL_EVAL(5U, 19U, 0,
            *chartInstance->c13_skdw, 1.0, -1, 0U, *chartInstance->c13_skdw ==
            1.0))) {
        if (CV_EML_COND(19, 0, 1, CV_RELATIONAL_EVAL(5U, 19U, 1,
              *chartInstance->c13_jst, 2.0, -1, 3U, *chartInstance->c13_jst <=
              2.0))) {
          CV_EML_MCDC(19, 0, 0, true);
          CV_EML_IF(19, 0, 0, true);
          c13_c_out = true;
        } else {
          guard2 = true;
        }
      } else {
        if (!chartInstance->c13_dataWrittenToVector[11U]) {
          _SFD_DATA_READ_BEFORE_WRITE_ERROR(27U, 5U, 19U,
            *chartInstance->c13_sfEvent, false);
        }

        guard2 = true;
      }

      if (guard2) {
        CV_EML_MCDC(19, 0, 0, false);
        CV_EML_IF(19, 0, 0, false);
        c13_c_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c13_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 19U, *chartInstance->c13_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 12U, *chartInstance->c13_sfEvent);
        *chartInstance->c13_is_jiesuo_songkai = c13_IN_off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, *chartInstance->c13_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_l_debug_family_names,
          c13_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_f_nargin, 0U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_f_nargout, 1U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        *chartInstance->c13_skhx = 0.0;
        chartInstance->c13_dataWrittenToVector[0U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c13_skhx, 16U, 4U, 10U,
                              *chartInstance->c13_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 51U,
                     *chartInstance->c13_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_yb_debug_family_names,
          c13_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_e_nargin, 0U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_e_nargout, 1U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_d_out, 2U,
          c13_b_sf_marshallOut, c13_b_sf_marshallIn);
        if (!chartInstance->c13_dataWrittenToVector[11U]) {
          _SFD_DATA_READ_BEFORE_WRITE_ERROR(27U, 5U, 51U,
            *chartInstance->c13_sfEvent, false);
        }

        c13_d_out = CV_EML_IF(51, 0, 0, CV_RELATIONAL_EVAL(5U, 51U, 0,
          *chartInstance->c13_jst, 2.0, -1, 4U, *chartInstance->c13_jst > 2.0));
        _SFD_SYMBOL_SCOPE_POP();
        if (c13_d_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 51U, *chartInstance->c13_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 12U, *chartInstance->c13_sfEvent);
          *chartInstance->c13_is_jiesuo_songkai = c13_IN_t1;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 13U, *chartInstance->c13_sfEvent);
          _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_o_debug_family_names,
            c13_b_debug_family_var_map);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_g_nargin, 0U,
            c13_sf_marshallOut, c13_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_g_nargout, 1U,
            c13_sf_marshallOut, c13_sf_marshallIn);
          *chartInstance->c13_jsyichang = 1.0;
          chartInstance->c13_dataWrittenToVector[17U] = true;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c13_jsyichang, 33U, 4U, 13U,
                                *chartInstance->c13_sfEvent, false);
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
                 *chartInstance->c13_sfEvent);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 12U, *chartInstance->c13_sfEvent);
}

static void c13_suoding_yajin(SFc13_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c13_debug_family_var_map[3];
  real_T c13_nargin = 0.0;
  real_T c13_b_nargin = 0.0;
  real_T c13_nargout = 1.0;
  real_T c13_c_nargin = 0.0;
  real_T c13_b_nargout = 1.0;
  boolean_T c13_out;
  real_T c13_c_nargout = 1.0;
  uint32_T c13_b_debug_family_var_map[2];
  boolean_T c13_b_out;
  boolean_T c13_c_out;
  real_T c13_d_nargin = 0.0;
  real_T c13_d_nargout = 0.0;
  real_T c13_e_nargin = 0.0;
  real_T c13_e_nargout = 1.0;
  boolean_T c13_d_out;
  real_T c13_f_nargin = 0.0;
  real_T c13_f_nargout = 0.0;
  real_T c13_g_nargin = 0.0;
  real_T c13_g_nargout = 1.0;
  real_T c13_h_nargin = 0.0;
  boolean_T c13_e_out;
  real_T c13_h_nargout = 0.0;
  real_T c13_i_nargin = 0.0;
  real_T c13_i_nargout = 0.0;
  real_T c13_j_nargin = 0.0;
  real_T c13_j_nargout = 0.0;
  real_T c13_k_nargin = 0.0;
  real_T c13_k_nargout = 1.0;
  boolean_T c13_f_out;
  real_T c13_l_nargin = 0.0;
  real_T c13_l_nargout = 0.0;
  real_T c13_m_nargin = 0.0;
  real_T c13_m_nargout = 0.0;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 27U, *chartInstance->c13_sfEvent);
  switch (*chartInstance->c13_is_suoding_yajin) {
   case c13_IN_off:
    CV_STATE_EVAL(27, 0, 1);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 14U,
                 *chartInstance->c13_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_fc_debug_family_names,
      c13_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_nargin, 0U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_nargout, 1U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_out, 2U, c13_b_sf_marshallOut,
      c13_b_sf_marshallIn);
    if (CV_EML_COND(14, 0, 0, CV_RELATIONAL_EVAL(5U, 14U, 0,
          *chartInstance->c13_suoding, 1.0, -1, 0U, *chartInstance->c13_suoding ==
          1.0)) && CV_EML_COND(14, 0, 1, CV_RELATIONAL_EVAL(5U, 14U, 1,
          *chartInstance->c13_jsdw, 1.0, -1, 0U, *chartInstance->c13_jsdw == 1.0)))
    {
      CV_EML_MCDC(14, 0, 0, true);
      CV_EML_IF(14, 0, 0, true);
      c13_out = true;
    } else {
      CV_EML_MCDC(14, 0, 0, false);
      CV_EML_IF(14, 0, 0, false);
      c13_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c13_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 14U, *chartInstance->c13_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 28U, *chartInstance->c13_sfEvent);
      *chartInstance->c13_is_suoding_yajin = c13_IN_on;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 29U, *chartInstance->c13_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_r_debug_family_names,
        c13_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_h_nargin, 0U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_h_nargout, 1U,
        c13_sf_marshallOut, c13_sf_marshallIn);
      *chartInstance->c13_yjhx = 1.0;
      chartInstance->c13_dataWrittenToVector[2U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c13_yjhx, 18U, 4U, 29U,
                            *chartInstance->c13_sfEvent, false);
      *chartInstance->c13_sdyichang = 0.0;
      chartInstance->c13_dataWrittenToVector[16U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c13_sdyichang, 32U, 4U, 29U,
                            *chartInstance->c13_sfEvent, false);
      *chartInstance->c13_sdt = 0.0;
      chartInstance->c13_dataWrittenToVector[10U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c13_sdt, 26U, 4U, 29U,
                            *chartInstance->c13_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 28U,
                   *chartInstance->c13_sfEvent);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 28U, *chartInstance->c13_sfEvent);
    break;

   case c13_IN_on:
    CV_STATE_EVAL(27, 0, 2);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 16U, *chartInstance->c13_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 15U,
                 *chartInstance->c13_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_ic_debug_family_names,
      c13_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_c_nargin, 0U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_c_nargout, 1U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_c_out, 2U, c13_b_sf_marshallOut,
      c13_b_sf_marshallIn);
    guard2 = false;
    if (CV_EML_COND(15, 0, 0, CV_RELATIONAL_EVAL(5U, 15U, 0,
          *chartInstance->c13_sddw, 0.0, -1, 0U, *chartInstance->c13_sddw == 0.0)))
    {
      if (CV_EML_COND(15, 0, 1, CV_RELATIONAL_EVAL(5U, 15U, 1,
            *chartInstance->c13_sdt, 2.0, -1, 3U, *chartInstance->c13_sdt <= 2.0)))
      {
        CV_EML_MCDC(15, 0, 0, true);
        CV_EML_IF(15, 0, 0, true);
        c13_c_out = true;
      } else {
        guard2 = true;
      }
    } else {
      if (!chartInstance->c13_dataWrittenToVector[10U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(26U, 5U, 15U,
          *chartInstance->c13_sfEvent, false);
      }

      guard2 = true;
    }

    if (guard2) {
      CV_EML_MCDC(15, 0, 0, false);
      CV_EML_IF(15, 0, 0, false);
      c13_c_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c13_c_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 15U, *chartInstance->c13_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 29U, *chartInstance->c13_sfEvent);
      *chartInstance->c13_is_suoding_yajin = c13_IN_t;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 30U, *chartInstance->c13_sfEvent);
      *chartInstance->c13_temporalCounter_i4 = 0U;
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_u_debug_family_names,
        c13_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_i_nargin, 0U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_i_nargout, 1U,
        c13_sf_marshallOut, c13_sf_marshallIn);
      if (!chartInstance->c13_dataWrittenToVector[10U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(26U, 4U, 30U,
          *chartInstance->c13_sfEvent, false);
      }

      *chartInstance->c13_sdt += 0.002;
      chartInstance->c13_dataWrittenToVector[10U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c13_sdt, 26U, 4U, 30U,
                            *chartInstance->c13_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 13U,
                   *chartInstance->c13_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_ec_debug_family_names,
        c13_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_g_nargin, 0U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_g_nargout, 1U,
        c13_sf_marshallOut, c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_e_out, 2U, c13_b_sf_marshallOut,
        c13_b_sf_marshallIn);
      guard1 = false;
      if (CV_EML_COND(13, 0, 0, CV_RELATIONAL_EVAL(5U, 13U, 0,
            *chartInstance->c13_sddw, 1.0, -1, 0U, *chartInstance->c13_sddw ==
            1.0))) {
        if (CV_EML_COND(13, 0, 1, CV_RELATIONAL_EVAL(5U, 13U, 1,
              *chartInstance->c13_sdt, 2.0, -1, 3U, *chartInstance->c13_sdt <=
              2.0))) {
          CV_EML_MCDC(13, 0, 0, true);
          CV_EML_IF(13, 0, 0, true);
          c13_e_out = true;
        } else {
          guard1 = true;
        }
      } else {
        if (!chartInstance->c13_dataWrittenToVector[10U]) {
          _SFD_DATA_READ_BEFORE_WRITE_ERROR(26U, 5U, 13U,
            *chartInstance->c13_sfEvent, false);
        }

        guard1 = true;
      }

      if (guard1) {
        CV_EML_MCDC(13, 0, 0, false);
        CV_EML_IF(13, 0, 0, false);
        c13_e_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c13_e_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 13U, *chartInstance->c13_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 29U, *chartInstance->c13_sfEvent);
        *chartInstance->c13_is_suoding_yajin = c13_IN_off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 28U, *chartInstance->c13_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_q_debug_family_names,
          c13_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_l_nargin, 0U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_l_nargout, 1U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        *chartInstance->c13_yjhx = 0.0;
        chartInstance->c13_dataWrittenToVector[2U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c13_yjhx, 18U, 4U, 28U,
                              *chartInstance->c13_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 48U,
                     *chartInstance->c13_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_gc_debug_family_names,
          c13_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_k_nargin, 0U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_k_nargout, 1U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_f_out, 2U,
          c13_b_sf_marshallOut, c13_b_sf_marshallIn);
        if (!chartInstance->c13_dataWrittenToVector[10U]) {
          _SFD_DATA_READ_BEFORE_WRITE_ERROR(26U, 5U, 48U,
            *chartInstance->c13_sfEvent, false);
        }

        c13_f_out = CV_EML_IF(48, 0, 0, CV_RELATIONAL_EVAL(5U, 48U, 0,
          *chartInstance->c13_sdt, 2.0, -1, 4U, *chartInstance->c13_sdt > 2.0));
        _SFD_SYMBOL_SCOPE_POP();
        if (c13_f_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 48U, *chartInstance->c13_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 29U, *chartInstance->c13_sfEvent);
          *chartInstance->c13_is_suoding_yajin = c13_IN_t1;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 31U, *chartInstance->c13_sfEvent);
          _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_s_debug_family_names,
            c13_b_debug_family_var_map);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_m_nargin, 0U,
            c13_sf_marshallOut, c13_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_m_nargout, 1U,
            c13_sf_marshallOut, c13_sf_marshallIn);
          *chartInstance->c13_sdyichang = 1.0;
          chartInstance->c13_dataWrittenToVector[16U] = true;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c13_sdyichang, 32U, 4U, 31U,
                                *chartInstance->c13_sfEvent, false);
          _SFD_SYMBOL_SCOPE_POP();
        } else {
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 29U,
                       *chartInstance->c13_sfEvent);
        }
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 29U, *chartInstance->c13_sfEvent);
    break;

   case c13_IN_t:
    CV_STATE_EVAL(27, 0, 3);
    c13_d_t(chartInstance);
    break;

   case c13_IN_t1:
    CV_STATE_EVAL(27, 0, 4);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 50U, *chartInstance->c13_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 31U, *chartInstance->c13_sfEvent);
    *chartInstance->c13_is_suoding_yajin = c13_IN_t2;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 32U, *chartInstance->c13_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_t_debug_family_names,
      c13_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_d_nargin, 0U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_d_nargout, 1U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    if (!chartInstance->c13_dataWrittenToVector[10U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(26U, 4U, 32U,
        *chartInstance->c13_sfEvent, false);
    }

    *chartInstance->c13_sdt += 0.002;
    chartInstance->c13_dataWrittenToVector[10U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c13_sdt, 26U, 4U, 32U,
                          *chartInstance->c13_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 31U, *chartInstance->c13_sfEvent);
    break;

   case c13_IN_t2:
    CV_STATE_EVAL(27, 0, 5);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 47U,
                 *chartInstance->c13_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_jc_debug_family_names,
      c13_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_b_nargin, 0U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_b_nargout, 1U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_b_out, 2U, c13_b_sf_marshallOut,
      c13_b_sf_marshallIn);
    c13_b_out = CV_EML_IF(47, 0, 0, CV_RELATIONAL_EVAL(5U, 47U, 0,
      *chartInstance->c13_sddw, 0.0, -1, 0U, *chartInstance->c13_sddw == 0.0));
    _SFD_SYMBOL_SCOPE_POP();
    if (c13_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 47U, *chartInstance->c13_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 32U, *chartInstance->c13_sfEvent);
      *chartInstance->c13_is_suoding_yajin = c13_IN_t2;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 32U, *chartInstance->c13_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_t_debug_family_names,
        c13_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_f_nargin, 0U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_f_nargout, 1U,
        c13_sf_marshallOut, c13_sf_marshallIn);
      if (!chartInstance->c13_dataWrittenToVector[10U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(26U, 4U, 32U,
          *chartInstance->c13_sfEvent, false);
      }

      *chartInstance->c13_sdt += 0.002;
      chartInstance->c13_dataWrittenToVector[10U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c13_sdt, 26U, 4U, 32U,
                            *chartInstance->c13_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 49U,
                   *chartInstance->c13_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_dc_debug_family_names,
        c13_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_e_nargin, 0U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_e_nargout, 1U,
        c13_sf_marshallOut, c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_d_out, 2U, c13_b_sf_marshallOut,
        c13_b_sf_marshallIn);
      c13_d_out = CV_EML_IF(49, 0, 0, CV_RELATIONAL_EVAL(5U, 49U, 0,
        *chartInstance->c13_sddw, 1.0, -1, 0U, *chartInstance->c13_sddw == 1.0));
      _SFD_SYMBOL_SCOPE_POP();
      if (c13_d_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 49U, *chartInstance->c13_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 32U, *chartInstance->c13_sfEvent);
        *chartInstance->c13_is_suoding_yajin = c13_IN_off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 28U, *chartInstance->c13_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_q_debug_family_names,
          c13_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_j_nargin, 0U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_j_nargout, 1U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        *chartInstance->c13_yjhx = 0.0;
        chartInstance->c13_dataWrittenToVector[2U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c13_yjhx, 18U, 4U, 28U,
                              *chartInstance->c13_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 32U,
                     *chartInstance->c13_sfEvent);
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 32U, *chartInstance->c13_sfEvent);
    break;

   default:
    CV_STATE_EVAL(27, 0, 0);

    /* Unreachable state, for coverage only */
    *chartInstance->c13_is_suoding_yajin = c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 28U, *chartInstance->c13_sfEvent);
    break;
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 27U, *chartInstance->c13_sfEvent);
}

static void c13_d_t(SFc13_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c13_debug_family_var_map[3];
  real_T c13_nargin = 0.0;
  real_T c13_nargout = 1.0;
  boolean_T c13_out;
  real_T c13_b_nargin = 0.0;
  real_T c13_b_nargout = 1.0;
  boolean_T c13_b_out;
  real_T c13_c_nargin = 0.0;
  real_T c13_c_nargout = 1.0;
  boolean_T c13_c_out;
  uint32_T c13_b_debug_family_var_map[2];
  real_T c13_d_nargin = 0.0;
  real_T c13_d_nargout = 0.0;
  real_T c13_e_nargin = 0.0;
  real_T c13_e_nargout = 1.0;
  boolean_T c13_d_out;
  real_T c13_f_nargin = 0.0;
  real_T c13_f_nargout = 0.0;
  real_T c13_g_nargin = 0.0;
  real_T c13_g_nargout = 0.0;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 17U,
               *chartInstance->c13_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_hc_debug_family_names,
    c13_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_nargin, 0U, c13_sf_marshallOut,
    c13_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_nargout, 1U, c13_sf_marshallOut,
    c13_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_out, 2U, c13_b_sf_marshallOut,
    c13_b_sf_marshallIn);
  c13_out = CV_EML_IF(17, 0, 0, *chartInstance->c13_temporalCounter_i4 >= 1);
  _SFD_SYMBOL_SCOPE_POP();
  guard1 = false;
  if (c13_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 17U, *chartInstance->c13_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 15U,
                 *chartInstance->c13_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_ic_debug_family_names,
      c13_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_b_nargin, 0U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_b_nargout, 1U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_b_out, 2U, c13_b_sf_marshallOut,
      c13_b_sf_marshallIn);
    guard3 = false;
    if (CV_EML_COND(15, 0, 0, CV_RELATIONAL_EVAL(5U, 15U, 0,
          *chartInstance->c13_sddw, 0.0, -1, 0U, *chartInstance->c13_sddw == 0.0)))
    {
      if (CV_EML_COND(15, 0, 1, CV_RELATIONAL_EVAL(5U, 15U, 1,
            *chartInstance->c13_sdt, 2.0, -1, 3U, *chartInstance->c13_sdt <= 2.0)))
      {
        CV_EML_MCDC(15, 0, 0, true);
        CV_EML_IF(15, 0, 0, true);
        c13_b_out = true;
      } else {
        guard3 = true;
      }
    } else {
      if (!chartInstance->c13_dataWrittenToVector[10U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(26U, 5U, 15U,
          *chartInstance->c13_sfEvent, false);
      }

      guard3 = true;
    }

    if (guard3) {
      CV_EML_MCDC(15, 0, 0, false);
      CV_EML_IF(15, 0, 0, false);
      c13_b_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c13_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 15U, *chartInstance->c13_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 30U, *chartInstance->c13_sfEvent);
      *chartInstance->c13_is_suoding_yajin = c13_IN_t;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 30U, *chartInstance->c13_sfEvent);
      *chartInstance->c13_temporalCounter_i4 = 0U;
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_u_debug_family_names,
        c13_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_d_nargin, 0U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_d_nargout, 1U,
        c13_sf_marshallOut, c13_sf_marshallIn);
      if (!chartInstance->c13_dataWrittenToVector[10U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(26U, 4U, 30U,
          *chartInstance->c13_sfEvent, false);
      }

      *chartInstance->c13_sdt += 0.002;
      chartInstance->c13_dataWrittenToVector[10U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c13_sdt, 26U, 4U, 30U,
                            *chartInstance->c13_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 13U,
                   *chartInstance->c13_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_ec_debug_family_names,
        c13_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_c_nargin, 0U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_c_nargout, 1U,
        c13_sf_marshallOut, c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_c_out, 2U, c13_b_sf_marshallOut,
        c13_b_sf_marshallIn);
      guard2 = false;
      if (CV_EML_COND(13, 0, 0, CV_RELATIONAL_EVAL(5U, 13U, 0,
            *chartInstance->c13_sddw, 1.0, -1, 0U, *chartInstance->c13_sddw ==
            1.0))) {
        if (CV_EML_COND(13, 0, 1, CV_RELATIONAL_EVAL(5U, 13U, 1,
              *chartInstance->c13_sdt, 2.0, -1, 3U, *chartInstance->c13_sdt <=
              2.0))) {
          CV_EML_MCDC(13, 0, 0, true);
          CV_EML_IF(13, 0, 0, true);
          c13_c_out = true;
        } else {
          guard2 = true;
        }
      } else {
        if (!chartInstance->c13_dataWrittenToVector[10U]) {
          _SFD_DATA_READ_BEFORE_WRITE_ERROR(26U, 5U, 13U,
            *chartInstance->c13_sfEvent, false);
        }

        guard2 = true;
      }

      if (guard2) {
        CV_EML_MCDC(13, 0, 0, false);
        CV_EML_IF(13, 0, 0, false);
        c13_c_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c13_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 13U, *chartInstance->c13_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 30U, *chartInstance->c13_sfEvent);
        *chartInstance->c13_is_suoding_yajin = c13_IN_off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 28U, *chartInstance->c13_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_q_debug_family_names,
          c13_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_f_nargin, 0U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_f_nargout, 1U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        *chartInstance->c13_yjhx = 0.0;
        chartInstance->c13_dataWrittenToVector[2U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c13_yjhx, 18U, 4U, 28U,
                              *chartInstance->c13_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 48U,
                     *chartInstance->c13_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_gc_debug_family_names,
          c13_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_e_nargin, 0U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_e_nargout, 1U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_d_out, 2U,
          c13_b_sf_marshallOut, c13_b_sf_marshallIn);
        if (!chartInstance->c13_dataWrittenToVector[10U]) {
          _SFD_DATA_READ_BEFORE_WRITE_ERROR(26U, 5U, 48U,
            *chartInstance->c13_sfEvent, false);
        }

        c13_d_out = CV_EML_IF(48, 0, 0, CV_RELATIONAL_EVAL(5U, 48U, 0,
          *chartInstance->c13_sdt, 2.0, -1, 4U, *chartInstance->c13_sdt > 2.0));
        _SFD_SYMBOL_SCOPE_POP();
        if (c13_d_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 48U, *chartInstance->c13_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 30U, *chartInstance->c13_sfEvent);
          *chartInstance->c13_is_suoding_yajin = c13_IN_t1;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 31U, *chartInstance->c13_sfEvent);
          _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_s_debug_family_names,
            c13_b_debug_family_var_map);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_g_nargin, 0U,
            c13_sf_marshallOut, c13_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_g_nargout, 1U,
            c13_sf_marshallOut, c13_sf_marshallIn);
          *chartInstance->c13_sdyichang = 1.0;
          chartInstance->c13_dataWrittenToVector[16U] = true;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c13_sdyichang, 32U, 4U, 31U,
                                *chartInstance->c13_sfEvent, false);
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
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 30U,
                 *chartInstance->c13_sfEvent);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 30U, *chartInstance->c13_sfEvent);
}

static void c13_yajin(SFc13_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c13_debug_family_var_map[3];
  real_T c13_nargin = 0.0;
  real_T c13_b_nargin = 0.0;
  real_T c13_nargout = 1.0;
  real_T c13_c_nargin = 0.0;
  real_T c13_b_nargout = 1.0;
  boolean_T c13_out;
  real_T c13_c_nargout = 1.0;
  boolean_T c13_b_out;
  uint32_T c13_b_debug_family_var_map[2];
  boolean_T c13_c_out;
  real_T c13_d_nargin = 0.0;
  real_T c13_d_nargout = 0.0;
  real_T c13_e_nargin = 0.0;
  real_T c13_e_nargout = 1.0;
  boolean_T c13_d_out;
  real_T c13_f_nargin = 0.0;
  real_T c13_f_nargout = 0.0;
  real_T c13_g_nargin = 0.0;
  real_T c13_g_nargout = 1.0;
  real_T c13_h_nargin = 0.0;
  boolean_T c13_e_out;
  real_T c13_h_nargout = 0.0;
  real_T c13_i_nargin = 0.0;
  real_T c13_i_nargout = 0.0;
  real_T c13_j_nargin = 0.0;
  real_T c13_j_nargout = 0.0;
  real_T c13_k_nargin = 0.0;
  real_T c13_k_nargout = 1.0;
  boolean_T c13_f_out;
  real_T c13_l_nargin = 0.0;
  real_T c13_l_nargout = 0.0;
  real_T c13_m_nargin = 0.0;
  real_T c13_m_nargout = 0.0;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 33U, *chartInstance->c13_sfEvent);
  switch (*chartInstance->c13_is_yajin) {
   case c13_IN_off:
    CV_STATE_EVAL(33, 0, 1);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 32U,
                 *chartInstance->c13_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_mc_debug_family_names,
      c13_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_nargin, 0U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_nargout, 1U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_out, 2U, c13_b_sf_marshallOut,
      c13_b_sf_marshallIn);
    if (CV_EML_COND(32, 0, 0, CV_RELATIONAL_EVAL(5U, 32U, 0,
          *chartInstance->c13_b_yajin, 1.0, -1, 0U, *chartInstance->c13_b_yajin ==
          1.0)) && CV_EML_COND(32, 0, 1, CV_RELATIONAL_EVAL(5U, 32U, 1,
          *chartInstance->c13_skdw, 1.0, -1, 0U, *chartInstance->c13_skdw == 1.0)))
    {
      CV_EML_MCDC(32, 0, 0, true);
      CV_EML_IF(32, 0, 0, true);
      c13_out = true;
    } else {
      CV_EML_MCDC(32, 0, 0, false);
      CV_EML_IF(32, 0, 0, false);
      c13_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c13_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 32U, *chartInstance->c13_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 34U, *chartInstance->c13_sfEvent);
      *chartInstance->c13_is_yajin = c13_IN_on;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 35U, *chartInstance->c13_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_w_debug_family_names,
        c13_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_h_nargin, 0U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_h_nargout, 1U,
        c13_sf_marshallOut, c13_sf_marshallIn);
      *chartInstance->c13_yjhx = 1.0;
      chartInstance->c13_dataWrittenToVector[2U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c13_yjhx, 18U, 4U, 35U,
                            *chartInstance->c13_sfEvent, false);
      *chartInstance->c13_yjyichang = 0.0;
      chartInstance->c13_dataWrittenToVector[19U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c13_yjyichang, 35U, 4U, 35U,
                            *chartInstance->c13_sfEvent, false);
      *chartInstance->c13_yjt = 0.0;
      chartInstance->c13_dataWrittenToVector[13U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c13_yjt, 29U, 4U, 35U,
                            *chartInstance->c13_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 34U,
                   *chartInstance->c13_sfEvent);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 34U, *chartInstance->c13_sfEvent);
    break;

   case c13_IN_on:
    CV_STATE_EVAL(33, 0, 2);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 33U, *chartInstance->c13_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 34U,
                 *chartInstance->c13_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_pc_debug_family_names,
      c13_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_c_nargin, 0U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_c_nargout, 1U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_c_out, 2U, c13_b_sf_marshallOut,
      c13_b_sf_marshallIn);
    guard2 = false;
    if (CV_EML_COND(34, 0, 0, CV_RELATIONAL_EVAL(5U, 34U, 0,
          *chartInstance->c13_yjdw, 0.0, -1, 0U, *chartInstance->c13_yjdw == 0.0)))
    {
      if (CV_EML_COND(34, 0, 1, CV_RELATIONAL_EVAL(5U, 34U, 1,
            *chartInstance->c13_yjt, 2.0, -1, 3U, *chartInstance->c13_yjt <= 2.0)))
      {
        CV_EML_MCDC(34, 0, 0, true);
        CV_EML_IF(34, 0, 0, true);
        c13_c_out = true;
      } else {
        guard2 = true;
      }
    } else {
      if (!chartInstance->c13_dataWrittenToVector[13U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(29U, 5U, 34U,
          *chartInstance->c13_sfEvent, false);
      }

      guard2 = true;
    }

    if (guard2) {
      CV_EML_MCDC(34, 0, 0, false);
      CV_EML_IF(34, 0, 0, false);
      c13_c_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c13_c_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 34U, *chartInstance->c13_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 35U, *chartInstance->c13_sfEvent);
      *chartInstance->c13_is_yajin = c13_IN_t;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 36U, *chartInstance->c13_sfEvent);
      *chartInstance->c13_temporalCounter_i5 = 0U;
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_ab_debug_family_names,
        c13_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_i_nargin, 0U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_i_nargout, 1U,
        c13_sf_marshallOut, c13_sf_marshallIn);
      if (!chartInstance->c13_dataWrittenToVector[13U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(29U, 4U, 36U,
          *chartInstance->c13_sfEvent, false);
      }

      *chartInstance->c13_yjt += 0.002;
      chartInstance->c13_dataWrittenToVector[13U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c13_yjt, 29U, 4U, 36U,
                            *chartInstance->c13_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 31U,
                   *chartInstance->c13_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_lc_debug_family_names,
        c13_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_g_nargin, 0U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_g_nargout, 1U,
        c13_sf_marshallOut, c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_e_out, 2U, c13_b_sf_marshallOut,
        c13_b_sf_marshallIn);
      guard1 = false;
      if (CV_EML_COND(31, 0, 0, CV_RELATIONAL_EVAL(5U, 31U, 0,
            *chartInstance->c13_yjdw, 1.0, -1, 0U, *chartInstance->c13_yjdw ==
            1.0))) {
        if (CV_EML_COND(31, 0, 1, CV_RELATIONAL_EVAL(5U, 31U, 1,
              *chartInstance->c13_sddw, 1.0, -1, 0U, *chartInstance->c13_sddw ==
              1.0))) {
          if (CV_EML_COND(31, 0, 2, CV_RELATIONAL_EVAL(5U, 31U, 2,
                *chartInstance->c13_yjt, 2.0, -1, 3U, *chartInstance->c13_yjt <=
                2.0))) {
            CV_EML_MCDC(31, 0, 0, true);
            CV_EML_IF(31, 0, 0, true);
            c13_e_out = true;
          } else {
            guard1 = true;
          }
        } else {
          if (!chartInstance->c13_dataWrittenToVector[13U]) {
            _SFD_DATA_READ_BEFORE_WRITE_ERROR(29U, 5U, 31U,
              *chartInstance->c13_sfEvent, false);
          }

          guard1 = true;
        }
      } else {
        guard1 = true;
      }

      if (guard1) {
        CV_EML_MCDC(31, 0, 0, false);
        CV_EML_IF(31, 0, 0, false);
        c13_e_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c13_e_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 31U, *chartInstance->c13_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 35U, *chartInstance->c13_sfEvent);
        *chartInstance->c13_is_yajin = c13_IN_off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 34U, *chartInstance->c13_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_v_debug_family_names,
          c13_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_l_nargin, 0U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_l_nargout, 1U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        *chartInstance->c13_yjhx = 0.0;
        chartInstance->c13_dataWrittenToVector[2U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c13_yjhx, 18U, 4U, 34U,
                              *chartInstance->c13_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 59U,
                     *chartInstance->c13_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_nc_debug_family_names,
          c13_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_k_nargin, 0U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_k_nargout, 1U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_f_out, 2U,
          c13_b_sf_marshallOut, c13_b_sf_marshallIn);
        if (!chartInstance->c13_dataWrittenToVector[13U]) {
          _SFD_DATA_READ_BEFORE_WRITE_ERROR(29U, 5U, 59U,
            *chartInstance->c13_sfEvent, false);
        }

        c13_f_out = CV_EML_IF(59, 0, 0, CV_RELATIONAL_EVAL(5U, 59U, 0,
          *chartInstance->c13_yjt, 2.0, -1, 4U, *chartInstance->c13_yjt > 2.0));
        _SFD_SYMBOL_SCOPE_POP();
        if (c13_f_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 59U, *chartInstance->c13_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 35U, *chartInstance->c13_sfEvent);
          *chartInstance->c13_is_yajin = c13_IN_t3;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 38U, *chartInstance->c13_sfEvent);
          _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_x_debug_family_names,
            c13_b_debug_family_var_map);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_m_nargin, 0U,
            c13_sf_marshallOut, c13_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_m_nargout, 1U,
            c13_sf_marshallOut, c13_sf_marshallIn);
          *chartInstance->c13_yjyichang = 1.0;
          chartInstance->c13_dataWrittenToVector[19U] = true;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c13_yjyichang, 35U, 4U, 38U,
                                *chartInstance->c13_sfEvent, false);
          _SFD_SYMBOL_SCOPE_POP();
        } else {
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 35U,
                       *chartInstance->c13_sfEvent);
        }
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 35U, *chartInstance->c13_sfEvent);
    break;

   case c13_IN_t:
    CV_STATE_EVAL(33, 0, 3);
    c13_e_t(chartInstance);
    break;

   case c13_b_IN_t2:
    CV_STATE_EVAL(33, 0, 4);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 61U,
                 *chartInstance->c13_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_qc_debug_family_names,
      c13_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_b_nargin, 0U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_b_nargout, 1U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_b_out, 2U, c13_b_sf_marshallOut,
      c13_b_sf_marshallIn);
    c13_b_out = CV_EML_IF(61, 0, 0, CV_RELATIONAL_EVAL(5U, 61U, 0,
      *chartInstance->c13_yjdw, 0.0, -1, 0U, *chartInstance->c13_yjdw == 0.0));
    _SFD_SYMBOL_SCOPE_POP();
    if (c13_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 61U, *chartInstance->c13_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 37U, *chartInstance->c13_sfEvent);
      *chartInstance->c13_is_yajin = c13_b_IN_t2;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 37U, *chartInstance->c13_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_y_debug_family_names,
        c13_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_f_nargin, 0U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_f_nargout, 1U,
        c13_sf_marshallOut, c13_sf_marshallIn);
      if (!chartInstance->c13_dataWrittenToVector[13U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(29U, 4U, 37U,
          *chartInstance->c13_sfEvent, false);
      }

      *chartInstance->c13_yjt += 0.002;
      chartInstance->c13_dataWrittenToVector[13U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c13_yjt, 29U, 4U, 37U,
                            *chartInstance->c13_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 62U,
                   *chartInstance->c13_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_kc_debug_family_names,
        c13_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_e_nargin, 0U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_e_nargout, 1U,
        c13_sf_marshallOut, c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_d_out, 2U, c13_b_sf_marshallOut,
        c13_b_sf_marshallIn);
      c13_d_out = CV_EML_IF(62, 0, 0, CV_RELATIONAL_EVAL(5U, 62U, 0,
        *chartInstance->c13_yjdw, 1.0, -1, 0U, *chartInstance->c13_yjdw == 1.0));
      _SFD_SYMBOL_SCOPE_POP();
      if (c13_d_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 62U, *chartInstance->c13_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 37U, *chartInstance->c13_sfEvent);
        *chartInstance->c13_is_yajin = c13_IN_off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 34U, *chartInstance->c13_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_v_debug_family_names,
          c13_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_j_nargin, 0U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_j_nargout, 1U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        *chartInstance->c13_yjhx = 0.0;
        chartInstance->c13_dataWrittenToVector[2U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c13_yjhx, 18U, 4U, 34U,
                              *chartInstance->c13_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 37U,
                     *chartInstance->c13_sfEvent);
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 37U, *chartInstance->c13_sfEvent);
    break;

   case c13_IN_t3:
    CV_STATE_EVAL(33, 0, 5);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 60U, *chartInstance->c13_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 38U, *chartInstance->c13_sfEvent);
    *chartInstance->c13_is_yajin = c13_b_IN_t2;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 37U, *chartInstance->c13_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_y_debug_family_names,
      c13_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_d_nargin, 0U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_d_nargout, 1U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    if (!chartInstance->c13_dataWrittenToVector[13U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(29U, 4U, 37U,
        *chartInstance->c13_sfEvent, false);
    }

    *chartInstance->c13_yjt += 0.002;
    chartInstance->c13_dataWrittenToVector[13U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c13_yjt, 29U, 4U, 37U,
                          *chartInstance->c13_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 38U, *chartInstance->c13_sfEvent);
    break;

   default:
    CV_STATE_EVAL(33, 0, 0);

    /* Unreachable state, for coverage only */
    *chartInstance->c13_is_yajin = c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 34U, *chartInstance->c13_sfEvent);
    break;
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 33U, *chartInstance->c13_sfEvent);
}

static void c13_e_t(SFc13_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c13_debug_family_var_map[3];
  real_T c13_nargin = 0.0;
  real_T c13_nargout = 1.0;
  boolean_T c13_out;
  real_T c13_b_nargin = 0.0;
  real_T c13_b_nargout = 1.0;
  boolean_T c13_b_out;
  real_T c13_c_nargin = 0.0;
  real_T c13_c_nargout = 1.0;
  boolean_T c13_c_out;
  uint32_T c13_b_debug_family_var_map[2];
  real_T c13_d_nargin = 0.0;
  real_T c13_d_nargout = 0.0;
  real_T c13_e_nargin = 0.0;
  real_T c13_e_nargout = 1.0;
  boolean_T c13_d_out;
  real_T c13_f_nargin = 0.0;
  real_T c13_f_nargout = 0.0;
  real_T c13_g_nargin = 0.0;
  real_T c13_g_nargout = 0.0;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 35U,
               *chartInstance->c13_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_oc_debug_family_names,
    c13_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_nargin, 0U, c13_sf_marshallOut,
    c13_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_nargout, 1U, c13_sf_marshallOut,
    c13_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_out, 2U, c13_b_sf_marshallOut,
    c13_b_sf_marshallIn);
  c13_out = CV_EML_IF(35, 0, 0, *chartInstance->c13_temporalCounter_i5 >= 1);
  _SFD_SYMBOL_SCOPE_POP();
  guard1 = false;
  if (c13_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 35U, *chartInstance->c13_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 34U,
                 *chartInstance->c13_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_pc_debug_family_names,
      c13_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_b_nargin, 0U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_b_nargout, 1U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_b_out, 2U, c13_b_sf_marshallOut,
      c13_b_sf_marshallIn);
    guard3 = false;
    if (CV_EML_COND(34, 0, 0, CV_RELATIONAL_EVAL(5U, 34U, 0,
          *chartInstance->c13_yjdw, 0.0, -1, 0U, *chartInstance->c13_yjdw == 0.0)))
    {
      if (CV_EML_COND(34, 0, 1, CV_RELATIONAL_EVAL(5U, 34U, 1,
            *chartInstance->c13_yjt, 2.0, -1, 3U, *chartInstance->c13_yjt <= 2.0)))
      {
        CV_EML_MCDC(34, 0, 0, true);
        CV_EML_IF(34, 0, 0, true);
        c13_b_out = true;
      } else {
        guard3 = true;
      }
    } else {
      if (!chartInstance->c13_dataWrittenToVector[13U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(29U, 5U, 34U,
          *chartInstance->c13_sfEvent, false);
      }

      guard3 = true;
    }

    if (guard3) {
      CV_EML_MCDC(34, 0, 0, false);
      CV_EML_IF(34, 0, 0, false);
      c13_b_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c13_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 34U, *chartInstance->c13_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 36U, *chartInstance->c13_sfEvent);
      *chartInstance->c13_is_yajin = c13_IN_t;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 36U, *chartInstance->c13_sfEvent);
      *chartInstance->c13_temporalCounter_i5 = 0U;
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_ab_debug_family_names,
        c13_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_d_nargin, 0U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_d_nargout, 1U,
        c13_sf_marshallOut, c13_sf_marshallIn);
      if (!chartInstance->c13_dataWrittenToVector[13U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(29U, 4U, 36U,
          *chartInstance->c13_sfEvent, false);
      }

      *chartInstance->c13_yjt += 0.002;
      chartInstance->c13_dataWrittenToVector[13U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c13_yjt, 29U, 4U, 36U,
                            *chartInstance->c13_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 31U,
                   *chartInstance->c13_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_lc_debug_family_names,
        c13_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_c_nargin, 0U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_c_nargout, 1U,
        c13_sf_marshallOut, c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_c_out, 2U, c13_b_sf_marshallOut,
        c13_b_sf_marshallIn);
      guard2 = false;
      if (CV_EML_COND(31, 0, 0, CV_RELATIONAL_EVAL(5U, 31U, 0,
            *chartInstance->c13_yjdw, 1.0, -1, 0U, *chartInstance->c13_yjdw ==
            1.0))) {
        if (CV_EML_COND(31, 0, 1, CV_RELATIONAL_EVAL(5U, 31U, 1,
              *chartInstance->c13_sddw, 1.0, -1, 0U, *chartInstance->c13_sddw ==
              1.0))) {
          if (CV_EML_COND(31, 0, 2, CV_RELATIONAL_EVAL(5U, 31U, 2,
                *chartInstance->c13_yjt, 2.0, -1, 3U, *chartInstance->c13_yjt <=
                2.0))) {
            CV_EML_MCDC(31, 0, 0, true);
            CV_EML_IF(31, 0, 0, true);
            c13_c_out = true;
          } else {
            guard2 = true;
          }
        } else {
          if (!chartInstance->c13_dataWrittenToVector[13U]) {
            _SFD_DATA_READ_BEFORE_WRITE_ERROR(29U, 5U, 31U,
              *chartInstance->c13_sfEvent, false);
          }

          guard2 = true;
        }
      } else {
        guard2 = true;
      }

      if (guard2) {
        CV_EML_MCDC(31, 0, 0, false);
        CV_EML_IF(31, 0, 0, false);
        c13_c_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c13_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 31U, *chartInstance->c13_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 36U, *chartInstance->c13_sfEvent);
        *chartInstance->c13_is_yajin = c13_IN_off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 34U, *chartInstance->c13_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_v_debug_family_names,
          c13_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_f_nargin, 0U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_f_nargout, 1U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        *chartInstance->c13_yjhx = 0.0;
        chartInstance->c13_dataWrittenToVector[2U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c13_yjhx, 18U, 4U, 34U,
                              *chartInstance->c13_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 59U,
                     *chartInstance->c13_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_nc_debug_family_names,
          c13_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_e_nargin, 0U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_e_nargout, 1U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_d_out, 2U,
          c13_b_sf_marshallOut, c13_b_sf_marshallIn);
        if (!chartInstance->c13_dataWrittenToVector[13U]) {
          _SFD_DATA_READ_BEFORE_WRITE_ERROR(29U, 5U, 59U,
            *chartInstance->c13_sfEvent, false);
        }

        c13_d_out = CV_EML_IF(59, 0, 0, CV_RELATIONAL_EVAL(5U, 59U, 0,
          *chartInstance->c13_yjt, 2.0, -1, 4U, *chartInstance->c13_yjt > 2.0));
        _SFD_SYMBOL_SCOPE_POP();
        if (c13_d_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 59U, *chartInstance->c13_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 36U, *chartInstance->c13_sfEvent);
          *chartInstance->c13_is_yajin = c13_IN_t3;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 38U, *chartInstance->c13_sfEvent);
          _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_x_debug_family_names,
            c13_b_debug_family_var_map);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_g_nargin, 0U,
            c13_sf_marshallOut, c13_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_g_nargout, 1U,
            c13_sf_marshallOut, c13_sf_marshallIn);
          *chartInstance->c13_yjyichang = 1.0;
          chartInstance->c13_dataWrittenToVector[19U] = true;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c13_yjyichang, 35U, 4U, 38U,
                                *chartInstance->c13_sfEvent, false);
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
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 36U,
                 *chartInstance->c13_sfEvent);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 36U, *chartInstance->c13_sfEvent);
}

static void c13_guangai(SFc13_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c13_debug_family_var_map[3];
  real_T c13_nargin = 0.0;
  real_T c13_b_nargin = 0.0;
  real_T c13_nargout = 1.0;
  real_T c13_c_nargin = 0.0;
  real_T c13_b_nargout = 1.0;
  boolean_T c13_out;
  real_T c13_c_nargout = 1.0;
  uint32_T c13_b_debug_family_var_map[2];
  boolean_T c13_b_out;
  boolean_T c13_c_out;
  real_T c13_d_nargin = 0.0;
  real_T c13_d_nargout = 0.0;
  real_T c13_e_nargin = 0.0;
  real_T c13_e_nargout = 1.0;
  real_T c13_f_nargin = 0.0;
  boolean_T c13_d_out;
  real_T c13_f_nargout = 1.0;
  real_T c13_g_nargin = 0.0;
  real_T c13_h_nargin = 0.0;
  boolean_T c13_e_out;
  real_T c13_g_nargout = 0.0;
  real_T c13_h_nargout = 0.0;
  real_T c13_i_nargin = 0.0;
  real_T c13_i_nargout = 0.0;
  real_T c13_j_nargin = 0.0;
  real_T c13_j_nargout = 1.0;
  boolean_T c13_f_out;
  real_T c13_k_nargin = 0.0;
  real_T c13_k_nargout = 0.0;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U, *chartInstance->c13_sfEvent);
  switch (*chartInstance->c13_is_guangai) {
   case c13_IN_off:
    CV_STATE_EVAL(3, 0, 1);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 26U,
                 *chartInstance->c13_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_tc_debug_family_names,
      c13_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_nargin, 0U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_nargout, 1U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_out, 2U, c13_b_sf_marshallOut,
      c13_b_sf_marshallIn);
    if (CV_EML_COND(26, 0, 0, CV_RELATIONAL_EVAL(5U, 26U, 0,
          *chartInstance->c13_b_guangai, 1.0, -1, 0U,
          *chartInstance->c13_b_guangai == 1.0)) && CV_EML_COND(26, 0, 1,
         CV_RELATIONAL_EVAL(5U, 26U, 1, *chartInstance->c13_kgdw1, 1.0, -1, 0U, *
                            chartInstance->c13_kgdw1 == 1.0)) && CV_EML_COND(26,
         0, 2, CV_RELATIONAL_EVAL(5U, 26U, 2, *chartInstance->c13_kgdw2, 1.0, -1,
          0U, *chartInstance->c13_kgdw2 == 1.0))) {
      CV_EML_MCDC(26, 0, 0, true);
      CV_EML_IF(26, 0, 0, true);
      c13_out = true;
    } else {
      CV_EML_MCDC(26, 0, 0, false);
      CV_EML_IF(26, 0, 0, false);
      c13_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c13_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 26U, *chartInstance->c13_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c13_sfEvent);
      *chartInstance->c13_is_guangai = c13_IN_on;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c13_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_cb_debug_family_names,
        c13_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_h_nargin, 0U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_h_nargout, 1U,
        c13_sf_marshallOut, c13_sf_marshallIn);
      *chartInstance->c13_gghx = 1.0;
      chartInstance->c13_dataWrittenToVector[3U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c13_gghx, 19U, 4U, 5U,
                            *chartInstance->c13_sfEvent, false);
      *chartInstance->c13_ggzhiling1 = 1.0;
      chartInstance->c13_dataWrittenToVector[6U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c13_ggzhiling1, 22U, 4U, 5U,
                            *chartInstance->c13_sfEvent, false);
      *chartInstance->c13_ggzhiling2 = 1.0;
      chartInstance->c13_dataWrittenToVector[7U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c13_ggzhiling2, 23U, 4U, 5U,
                            *chartInstance->c13_sfEvent, false);
      *chartInstance->c13_ggyichang = 0.0;
      chartInstance->c13_dataWrittenToVector[18U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c13_ggyichang, 34U, 4U, 5U,
                            *chartInstance->c13_sfEvent, false);
      *chartInstance->c13_ggt = 0.0;
      chartInstance->c13_dataWrittenToVector[12U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c13_ggt, 28U, 4U, 5U,
                            *chartInstance->c13_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 4U,
                   *chartInstance->c13_sfEvent);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, *chartInstance->c13_sfEvent);
    break;

   case c13_IN_on:
    CV_STATE_EVAL(3, 0, 2);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 28U, *chartInstance->c13_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 27U,
                 *chartInstance->c13_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_wc_debug_family_names,
      c13_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_c_nargin, 0U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_c_nargout, 1U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_c_out, 2U, c13_b_sf_marshallOut,
      c13_b_sf_marshallIn);
    guard2 = false;
    if (CV_EML_COND(27, 0, 0, CV_RELATIONAL_EVAL(5U, 27U, 0,
          *chartInstance->c13_ggdw1, 0.0, -1, 0U, *chartInstance->c13_ggdw1 ==
          0.0)) || CV_EML_COND(27, 0, 1, CV_RELATIONAL_EVAL(5U, 27U, 1,
          *chartInstance->c13_ggdw2, 0.0, -1, 0U, *chartInstance->c13_ggdw2 ==
          0.0))) {
      if (!chartInstance->c13_dataWrittenToVector[12U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(28U, 5U, 27U,
          *chartInstance->c13_sfEvent, false);
      }

      if (CV_EML_COND(27, 0, 2, CV_RELATIONAL_EVAL(5U, 27U, 2,
            *chartInstance->c13_ggt, 12.0, -1, 3U, *chartInstance->c13_ggt <=
            12.0))) {
        CV_EML_MCDC(27, 0, 0, true);
        CV_EML_IF(27, 0, 0, true);
        c13_c_out = true;
      } else {
        guard2 = true;
      }
    } else {
      guard2 = true;
    }

    if (guard2) {
      CV_EML_MCDC(27, 0, 0, false);
      CV_EML_IF(27, 0, 0, false);
      c13_c_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c13_c_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 27U, *chartInstance->c13_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c13_sfEvent);
      *chartInstance->c13_is_guangai = c13_IN_t;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c13_sfEvent);
      *chartInstance->c13_temporalCounter_i6 = 0U;
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_fb_debug_family_names,
        c13_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_i_nargin, 0U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_i_nargout, 1U,
        c13_sf_marshallOut, c13_sf_marshallIn);
      if (!chartInstance->c13_dataWrittenToVector[12U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(28U, 4U, 6U,
          *chartInstance->c13_sfEvent, false);
      }

      *chartInstance->c13_ggt += 0.002;
      chartInstance->c13_dataWrittenToVector[12U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c13_ggt, 28U, 4U, 6U,
                            *chartInstance->c13_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 25U,
                   *chartInstance->c13_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_sc_debug_family_names,
        c13_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_f_nargin, 0U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_f_nargout, 1U,
        c13_sf_marshallOut, c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_e_out, 2U, c13_b_sf_marshallOut,
        c13_b_sf_marshallIn);
      guard1 = false;
      if (CV_EML_COND(25, 0, 0, CV_RELATIONAL_EVAL(5U, 25U, 0,
            *chartInstance->c13_ggdw1, 1.0, -1, 0U, *chartInstance->c13_ggdw1 ==
            1.0))) {
        if (CV_EML_COND(25, 0, 1, CV_RELATIONAL_EVAL(5U, 25U, 1,
              *chartInstance->c13_ggdw2, 1.0, -1, 0U, *chartInstance->c13_ggdw2 ==
              1.0))) {
          if (CV_EML_COND(25, 0, 2, CV_RELATIONAL_EVAL(5U, 25U, 2,
                *chartInstance->c13_ggt, 12.0, -1, 3U, *chartInstance->c13_ggt <=
                12.0))) {
            CV_EML_MCDC(25, 0, 0, true);
            CV_EML_IF(25, 0, 0, true);
            c13_e_out = true;
          } else {
            guard1 = true;
          }
        } else {
          if (!chartInstance->c13_dataWrittenToVector[12U]) {
            _SFD_DATA_READ_BEFORE_WRITE_ERROR(28U, 5U, 25U,
              *chartInstance->c13_sfEvent, false);
          }

          guard1 = true;
        }
      } else {
        guard1 = true;
      }

      if (guard1) {
        CV_EML_MCDC(25, 0, 0, false);
        CV_EML_IF(25, 0, 0, false);
        c13_e_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c13_e_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 25U, *chartInstance->c13_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c13_sfEvent);
        *chartInstance->c13_is_guangai = c13_IN_off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c13_sfEvent);
        c13_b_enter_atomic_off(chartInstance);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 55U,
                     *chartInstance->c13_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_uc_debug_family_names,
          c13_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_j_nargin, 0U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_j_nargout, 1U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_f_out, 2U,
          c13_b_sf_marshallOut, c13_b_sf_marshallIn);
        if (!chartInstance->c13_dataWrittenToVector[12U]) {
          _SFD_DATA_READ_BEFORE_WRITE_ERROR(28U, 5U, 55U,
            *chartInstance->c13_sfEvent, false);
        }

        c13_f_out = CV_EML_IF(55, 0, 0, CV_RELATIONAL_EVAL(5U, 55U, 0,
          *chartInstance->c13_ggt, 12.0, -1, 4U, *chartInstance->c13_ggt > 12.0));
        _SFD_SYMBOL_SCOPE_POP();
        if (c13_f_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 55U, *chartInstance->c13_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c13_sfEvent);
          *chartInstance->c13_is_guangai = c13_IN_t1;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c13_sfEvent);
          _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_db_debug_family_names,
            c13_b_debug_family_var_map);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_k_nargin, 0U,
            c13_sf_marshallOut, c13_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_k_nargout, 1U,
            c13_sf_marshallOut, c13_sf_marshallIn);
          *chartInstance->c13_ggyichang = 1.0;
          chartInstance->c13_dataWrittenToVector[18U] = true;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c13_ggyichang, 34U, 4U, 7U,
                                *chartInstance->c13_sfEvent, false);
          _SFD_SYMBOL_SCOPE_POP();
        } else {
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 5U,
                       *chartInstance->c13_sfEvent);
        }
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 5U, *chartInstance->c13_sfEvent);
    break;

   case c13_IN_t:
    CV_STATE_EVAL(3, 0, 3);
    c13_f_t(chartInstance);
    break;

   case c13_IN_t1:
    CV_STATE_EVAL(3, 0, 4);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 56U, *chartInstance->c13_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c13_sfEvent);
    *chartInstance->c13_is_guangai = c13_IN_t2;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, *chartInstance->c13_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_eb_debug_family_names,
      c13_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_d_nargin, 0U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_d_nargout, 1U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    if (!chartInstance->c13_dataWrittenToVector[12U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(28U, 4U, 8U, *chartInstance->c13_sfEvent,
        false);
    }

    *chartInstance->c13_ggt += 0.002;
    chartInstance->c13_dataWrittenToVector[12U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c13_ggt, 28U, 4U, 8U,
                          *chartInstance->c13_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 7U, *chartInstance->c13_sfEvent);
    break;

   case c13_IN_t2:
    CV_STATE_EVAL(3, 0, 5);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 57U,
                 *chartInstance->c13_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_xc_debug_family_names,
      c13_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_b_nargin, 0U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_b_nargout, 1U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_b_out, 2U, c13_b_sf_marshallOut,
      c13_b_sf_marshallIn);
    if (CV_EML_COND(57, 0, 0, CV_RELATIONAL_EVAL(5U, 57U, 0,
          *chartInstance->c13_ggdw1, 0.0, -1, 0U, *chartInstance->c13_ggdw1 ==
          0.0)) || CV_EML_COND(57, 0, 1, CV_RELATIONAL_EVAL(5U, 57U, 1,
          *chartInstance->c13_ggdw2, 0.0, -1, 0U, *chartInstance->c13_ggdw2 ==
          0.0))) {
      CV_EML_MCDC(57, 0, 0, true);
      CV_EML_IF(57, 0, 0, true);
      c13_b_out = true;
    } else {
      CV_EML_MCDC(57, 0, 0, false);
      CV_EML_IF(57, 0, 0, false);
      c13_b_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c13_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 57U, *chartInstance->c13_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c13_sfEvent);
      *chartInstance->c13_is_guangai = c13_IN_t2;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, *chartInstance->c13_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_eb_debug_family_names,
        c13_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_g_nargin, 0U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_g_nargout, 1U,
        c13_sf_marshallOut, c13_sf_marshallIn);
      if (!chartInstance->c13_dataWrittenToVector[12U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(28U, 4U, 8U,
          *chartInstance->c13_sfEvent, false);
      }

      *chartInstance->c13_ggt += 0.002;
      chartInstance->c13_dataWrittenToVector[12U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c13_ggt, 28U, 4U, 8U,
                            *chartInstance->c13_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 58U,
                   *chartInstance->c13_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_rc_debug_family_names,
        c13_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_e_nargin, 0U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_e_nargout, 1U,
        c13_sf_marshallOut, c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_d_out, 2U, c13_b_sf_marshallOut,
        c13_b_sf_marshallIn);
      if (CV_EML_COND(58, 0, 0, CV_RELATIONAL_EVAL(5U, 58U, 0,
            *chartInstance->c13_ggdw1, 1.0, -1, 0U, *chartInstance->c13_ggdw1 ==
            1.0)) && CV_EML_COND(58, 0, 1, CV_RELATIONAL_EVAL(5U, 58U, 1,
            *chartInstance->c13_ggdw2, 1.0, -1, 0U, *chartInstance->c13_ggdw2 ==
            1.0))) {
        CV_EML_MCDC(58, 0, 0, true);
        CV_EML_IF(58, 0, 0, true);
        c13_d_out = true;
      } else {
        CV_EML_MCDC(58, 0, 0, false);
        CV_EML_IF(58, 0, 0, false);
        c13_d_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c13_d_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 58U, *chartInstance->c13_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c13_sfEvent);
        *chartInstance->c13_is_guangai = c13_IN_off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c13_sfEvent);
        c13_b_enter_atomic_off(chartInstance);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 8U,
                     *chartInstance->c13_sfEvent);
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 8U, *chartInstance->c13_sfEvent);
    break;

   default:
    CV_STATE_EVAL(3, 0, 0);

    /* Unreachable state, for coverage only */
    *chartInstance->c13_is_guangai = c13_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c13_sfEvent);
    break;
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, *chartInstance->c13_sfEvent);
}

static void c13_b_enter_atomic_off(SFc13_kaiguangai1108InstanceStruct
  *chartInstance)
{
  uint32_T c13_debug_family_var_map[2];
  real_T c13_nargin = 0.0;
  real_T c13_nargout = 0.0;
  real_T c13_hoistedGlobal;
  const mxArray *c13_y = NULL;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_bb_debug_family_names,
    c13_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_nargin, 0U, c13_sf_marshallOut,
    c13_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_nargout, 1U, c13_sf_marshallOut,
    c13_sf_marshallIn);
  *chartInstance->c13_gghx = 0.0;
  chartInstance->c13_dataWrittenToVector[3U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c13_gghx, 19U, 4U, 4U,
                        *chartInstance->c13_sfEvent, false);
  *chartInstance->c13_ggzhiling1 = 0.0;
  chartInstance->c13_dataWrittenToVector[6U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c13_ggzhiling1, 22U, 4U, 4U,
                        *chartInstance->c13_sfEvent, false);
  *chartInstance->c13_ggzhiling2 = 0.0;
  chartInstance->c13_dataWrittenToVector[7U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c13_ggzhiling2, 23U, 4U, 4U,
                        *chartInstance->c13_sfEvent, false);
  if (!chartInstance->c13_dataWrittenToVector[7U]) {
    _SFD_DATA_READ_BEFORE_WRITE_ERROR(23U, 4U, 4U, *chartInstance->c13_sfEvent,
      false);
  }

  sf_mex_printf("%s =\\n", "ggzhiling2");
  c13_hoistedGlobal = *chartInstance->c13_ggzhiling2;
  c13_y = NULL;
  sf_mex_assign(&c13_y, sf_mex_create("y", &c13_hoistedGlobal, 0, 0U, 0U, 0U, 0),
                false);
  sf_mex_call_debug(sfGlobalDebugInstanceStruct, "disp", 0U, 1U, 14, c13_y);
  _SFD_SYMBOL_SCOPE_POP();
}

static void c13_f_t(SFc13_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c13_debug_family_var_map[3];
  real_T c13_nargin = 0.0;
  real_T c13_nargout = 1.0;
  boolean_T c13_out;
  real_T c13_b_nargin = 0.0;
  real_T c13_b_nargout = 1.0;
  boolean_T c13_b_out;
  real_T c13_c_nargin = 0.0;
  real_T c13_c_nargout = 1.0;
  boolean_T c13_c_out;
  uint32_T c13_b_debug_family_var_map[2];
  real_T c13_d_nargin = 0.0;
  real_T c13_d_nargout = 0.0;
  real_T c13_e_nargin = 0.0;
  real_T c13_e_nargout = 1.0;
  boolean_T c13_d_out;
  real_T c13_f_nargin = 0.0;
  real_T c13_f_nargout = 0.0;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 29U,
               *chartInstance->c13_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_vc_debug_family_names,
    c13_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_nargin, 0U, c13_sf_marshallOut,
    c13_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_nargout, 1U, c13_sf_marshallOut,
    c13_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_out, 2U, c13_b_sf_marshallOut,
    c13_b_sf_marshallIn);
  c13_out = CV_EML_IF(29, 0, 0, *chartInstance->c13_temporalCounter_i6 >= 1);
  _SFD_SYMBOL_SCOPE_POP();
  guard1 = false;
  if (c13_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 29U, *chartInstance->c13_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 27U,
                 *chartInstance->c13_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_wc_debug_family_names,
      c13_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_b_nargin, 0U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_b_nargout, 1U, c13_sf_marshallOut,
      c13_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_b_out, 2U, c13_b_sf_marshallOut,
      c13_b_sf_marshallIn);
    guard3 = false;
    if (CV_EML_COND(27, 0, 0, CV_RELATIONAL_EVAL(5U, 27U, 0,
          *chartInstance->c13_ggdw1, 0.0, -1, 0U, *chartInstance->c13_ggdw1 ==
          0.0)) || CV_EML_COND(27, 0, 1, CV_RELATIONAL_EVAL(5U, 27U, 1,
          *chartInstance->c13_ggdw2, 0.0, -1, 0U, *chartInstance->c13_ggdw2 ==
          0.0))) {
      if (!chartInstance->c13_dataWrittenToVector[12U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(28U, 5U, 27U,
          *chartInstance->c13_sfEvent, false);
      }

      if (CV_EML_COND(27, 0, 2, CV_RELATIONAL_EVAL(5U, 27U, 2,
            *chartInstance->c13_ggt, 12.0, -1, 3U, *chartInstance->c13_ggt <=
            12.0))) {
        CV_EML_MCDC(27, 0, 0, true);
        CV_EML_IF(27, 0, 0, true);
        c13_b_out = true;
      } else {
        guard3 = true;
      }
    } else {
      guard3 = true;
    }

    if (guard3) {
      CV_EML_MCDC(27, 0, 0, false);
      CV_EML_IF(27, 0, 0, false);
      c13_b_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c13_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 27U, *chartInstance->c13_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c13_sfEvent);
      *chartInstance->c13_is_guangai = c13_IN_t;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c13_sfEvent);
      *chartInstance->c13_temporalCounter_i6 = 0U;
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_fb_debug_family_names,
        c13_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_d_nargin, 0U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_d_nargout, 1U,
        c13_sf_marshallOut, c13_sf_marshallIn);
      if (!chartInstance->c13_dataWrittenToVector[12U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(28U, 4U, 6U,
          *chartInstance->c13_sfEvent, false);
      }

      *chartInstance->c13_ggt += 0.002;
      chartInstance->c13_dataWrittenToVector[12U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c13_ggt, 28U, 4U, 6U,
                            *chartInstance->c13_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 25U,
                   *chartInstance->c13_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_sc_debug_family_names,
        c13_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_c_nargin, 0U, c13_sf_marshallOut,
        c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_c_nargout, 1U,
        c13_sf_marshallOut, c13_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_c_out, 2U, c13_b_sf_marshallOut,
        c13_b_sf_marshallIn);
      guard2 = false;
      if (CV_EML_COND(25, 0, 0, CV_RELATIONAL_EVAL(5U, 25U, 0,
            *chartInstance->c13_ggdw1, 1.0, -1, 0U, *chartInstance->c13_ggdw1 ==
            1.0))) {
        if (CV_EML_COND(25, 0, 1, CV_RELATIONAL_EVAL(5U, 25U, 1,
              *chartInstance->c13_ggdw2, 1.0, -1, 0U, *chartInstance->c13_ggdw2 ==
              1.0))) {
          if (CV_EML_COND(25, 0, 2, CV_RELATIONAL_EVAL(5U, 25U, 2,
                *chartInstance->c13_ggt, 12.0, -1, 3U, *chartInstance->c13_ggt <=
                12.0))) {
            CV_EML_MCDC(25, 0, 0, true);
            CV_EML_IF(25, 0, 0, true);
            c13_c_out = true;
          } else {
            guard2 = true;
          }
        } else {
          if (!chartInstance->c13_dataWrittenToVector[12U]) {
            _SFD_DATA_READ_BEFORE_WRITE_ERROR(28U, 5U, 25U,
              *chartInstance->c13_sfEvent, false);
          }

          guard2 = true;
        }
      } else {
        guard2 = true;
      }

      if (guard2) {
        CV_EML_MCDC(25, 0, 0, false);
        CV_EML_IF(25, 0, 0, false);
        c13_c_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c13_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 25U, *chartInstance->c13_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c13_sfEvent);
        *chartInstance->c13_is_guangai = c13_IN_off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c13_sfEvent);
        c13_b_enter_atomic_off(chartInstance);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 55U,
                     *chartInstance->c13_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c13_uc_debug_family_names,
          c13_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_e_nargin, 0U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_e_nargout, 1U,
          c13_sf_marshallOut, c13_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_d_out, 2U,
          c13_b_sf_marshallOut, c13_b_sf_marshallIn);
        if (!chartInstance->c13_dataWrittenToVector[12U]) {
          _SFD_DATA_READ_BEFORE_WRITE_ERROR(28U, 5U, 55U,
            *chartInstance->c13_sfEvent, false);
        }

        c13_d_out = CV_EML_IF(55, 0, 0, CV_RELATIONAL_EVAL(5U, 55U, 0,
          *chartInstance->c13_ggt, 12.0, -1, 4U, *chartInstance->c13_ggt > 12.0));
        _SFD_SYMBOL_SCOPE_POP();
        if (c13_d_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 55U, *chartInstance->c13_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c13_sfEvent);
          *chartInstance->c13_is_guangai = c13_IN_t1;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c13_sfEvent);
          _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c13_db_debug_family_names,
            c13_b_debug_family_var_map);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_f_nargin, 0U,
            c13_sf_marshallOut, c13_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c13_f_nargout, 1U,
            c13_sf_marshallOut, c13_sf_marshallIn);
          *chartInstance->c13_ggyichang = 1.0;
          chartInstance->c13_dataWrittenToVector[18U] = true;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c13_ggyichang, 34U, 4U, 7U,
                                *chartInstance->c13_sfEvent, false);
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
                 *chartInstance->c13_sfEvent);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 6U, *chartInstance->c13_sfEvent);
}

static void init_script_number_translation(uint32_T c13_machineNumber, uint32_T
  c13_chartNumber, uint32_T c13_instanceNumber)
{
  (void)c13_machineNumber;
  (void)c13_chartNumber;
  (void)c13_instanceNumber;
}

static const mxArray *c13_sf_marshallOut(void *chartInstanceVoid, void
  *c13_inData)
{
  const mxArray *c13_mxArrayOutData;
  real_T c13_u;
  const mxArray *c13_y = NULL;
  SFc13_kaiguangai1108InstanceStruct *chartInstance;
  chartInstance = (SFc13_kaiguangai1108InstanceStruct *)chartInstanceVoid;
  c13_mxArrayOutData = NULL;
  c13_mxArrayOutData = NULL;
  c13_u = *(real_T *)c13_inData;
  c13_y = NULL;
  sf_mex_assign(&c13_y, sf_mex_create("y", &c13_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c13_mxArrayOutData, c13_y, false);
  return c13_mxArrayOutData;
}

static real_T c13_emlrt_marshallIn(SFc13_kaiguangai1108InstanceStruct
  *chartInstance, const mxArray *c13_nargout, const char_T *c13_identifier)
{
  real_T c13_y;
  emlrtMsgIdentifier c13_thisId;
  c13_thisId.fIdentifier = c13_identifier;
  c13_thisId.fParent = NULL;
  c13_thisId.bParentIsCell = false;
  c13_y = c13_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c13_nargout),
    &c13_thisId);
  sf_mex_destroy(&c13_nargout);
  return c13_y;
}

static real_T c13_b_emlrt_marshallIn(SFc13_kaiguangai1108InstanceStruct
  *chartInstance, const mxArray *c13_u, const emlrtMsgIdentifier *c13_parentId)
{
  real_T c13_y;
  real_T c13_d0;
  (void)chartInstance;
  sf_mex_import(c13_parentId, sf_mex_dup(c13_u), &c13_d0, 1, 0, 0U, 0, 0U, 0);
  c13_y = c13_d0;
  sf_mex_destroy(&c13_u);
  return c13_y;
}

static void c13_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c13_mxArrayInData, const char_T *c13_varName, void *c13_outData)
{
  const mxArray *c13_nargout;
  const char_T *c13_identifier;
  emlrtMsgIdentifier c13_thisId;
  real_T c13_y;
  SFc13_kaiguangai1108InstanceStruct *chartInstance;
  chartInstance = (SFc13_kaiguangai1108InstanceStruct *)chartInstanceVoid;
  c13_nargout = sf_mex_dup(c13_mxArrayInData);
  c13_identifier = c13_varName;
  c13_thisId.fIdentifier = c13_identifier;
  c13_thisId.fParent = NULL;
  c13_thisId.bParentIsCell = false;
  c13_y = c13_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c13_nargout),
    &c13_thisId);
  sf_mex_destroy(&c13_nargout);
  *(real_T *)c13_outData = c13_y;
  sf_mex_destroy(&c13_mxArrayInData);
}

static const mxArray *c13_b_sf_marshallOut(void *chartInstanceVoid, void
  *c13_inData)
{
  const mxArray *c13_mxArrayOutData;
  boolean_T c13_u;
  const mxArray *c13_y = NULL;
  SFc13_kaiguangai1108InstanceStruct *chartInstance;
  chartInstance = (SFc13_kaiguangai1108InstanceStruct *)chartInstanceVoid;
  c13_mxArrayOutData = NULL;
  c13_mxArrayOutData = NULL;
  c13_u = *(boolean_T *)c13_inData;
  c13_y = NULL;
  sf_mex_assign(&c13_y, sf_mex_create("y", &c13_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c13_mxArrayOutData, c13_y, false);
  return c13_mxArrayOutData;
}

static boolean_T c13_c_emlrt_marshallIn(SFc13_kaiguangai1108InstanceStruct
  *chartInstance, const mxArray *c13_u, const emlrtMsgIdentifier *c13_parentId)
{
  boolean_T c13_y;
  boolean_T c13_b0;
  (void)chartInstance;
  sf_mex_import(c13_parentId, sf_mex_dup(c13_u), &c13_b0, 1, 11, 0U, 0, 0U, 0);
  c13_y = c13_b0;
  sf_mex_destroy(&c13_u);
  return c13_y;
}

static void c13_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c13_mxArrayInData, const char_T *c13_varName, void *c13_outData)
{
  const mxArray *c13_sf_internal_predicateOutput;
  const char_T *c13_identifier;
  emlrtMsgIdentifier c13_thisId;
  boolean_T c13_y;
  SFc13_kaiguangai1108InstanceStruct *chartInstance;
  chartInstance = (SFc13_kaiguangai1108InstanceStruct *)chartInstanceVoid;
  c13_sf_internal_predicateOutput = sf_mex_dup(c13_mxArrayInData);
  c13_identifier = c13_varName;
  c13_thisId.fIdentifier = c13_identifier;
  c13_thisId.fParent = NULL;
  c13_thisId.bParentIsCell = false;
  c13_y = c13_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c13_sf_internal_predicateOutput), &c13_thisId);
  sf_mex_destroy(&c13_sf_internal_predicateOutput);
  *(boolean_T *)c13_outData = c13_y;
  sf_mex_destroy(&c13_mxArrayInData);
}

const mxArray *sf_c13_kaiguangai1108_get_eml_resolved_functions_info(void)
{
  const mxArray *c13_nameCaptureInfo = NULL;
  c13_nameCaptureInfo = NULL;
  sf_mex_assign(&c13_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c13_nameCaptureInfo;
}

static const mxArray *c13_c_sf_marshallOut(void *chartInstanceVoid, void
  *c13_inData)
{
  const mxArray *c13_mxArrayOutData;
  int32_T c13_u;
  const mxArray *c13_y = NULL;
  SFc13_kaiguangai1108InstanceStruct *chartInstance;
  chartInstance = (SFc13_kaiguangai1108InstanceStruct *)chartInstanceVoid;
  c13_mxArrayOutData = NULL;
  c13_mxArrayOutData = NULL;
  c13_u = *(int32_T *)c13_inData;
  c13_y = NULL;
  sf_mex_assign(&c13_y, sf_mex_create("y", &c13_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c13_mxArrayOutData, c13_y, false);
  return c13_mxArrayOutData;
}

static int32_T c13_d_emlrt_marshallIn(SFc13_kaiguangai1108InstanceStruct
  *chartInstance, const mxArray *c13_u, const emlrtMsgIdentifier *c13_parentId)
{
  int32_T c13_y;
  int32_T c13_i1;
  (void)chartInstance;
  sf_mex_import(c13_parentId, sf_mex_dup(c13_u), &c13_i1, 1, 6, 0U, 0, 0U, 0);
  c13_y = c13_i1;
  sf_mex_destroy(&c13_u);
  return c13_y;
}

static void c13_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c13_mxArrayInData, const char_T *c13_varName, void *c13_outData)
{
  const mxArray *c13_b_sfEvent;
  const char_T *c13_identifier;
  emlrtMsgIdentifier c13_thisId;
  int32_T c13_y;
  SFc13_kaiguangai1108InstanceStruct *chartInstance;
  chartInstance = (SFc13_kaiguangai1108InstanceStruct *)chartInstanceVoid;
  c13_b_sfEvent = sf_mex_dup(c13_mxArrayInData);
  c13_identifier = c13_varName;
  c13_thisId.fIdentifier = c13_identifier;
  c13_thisId.fParent = NULL;
  c13_thisId.bParentIsCell = false;
  c13_y = c13_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c13_b_sfEvent),
    &c13_thisId);
  sf_mex_destroy(&c13_b_sfEvent);
  *(int32_T *)c13_outData = c13_y;
  sf_mex_destroy(&c13_mxArrayInData);
}

static const mxArray *c13_d_sf_marshallOut(void *chartInstanceVoid, void
  *c13_inData)
{
  const mxArray *c13_mxArrayOutData;
  uint8_T c13_u;
  const mxArray *c13_y = NULL;
  SFc13_kaiguangai1108InstanceStruct *chartInstance;
  chartInstance = (SFc13_kaiguangai1108InstanceStruct *)chartInstanceVoid;
  c13_mxArrayOutData = NULL;
  c13_mxArrayOutData = NULL;
  c13_u = *(uint8_T *)c13_inData;
  c13_y = NULL;
  sf_mex_assign(&c13_y, sf_mex_create("y", &c13_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c13_mxArrayOutData, c13_y, false);
  return c13_mxArrayOutData;
}

static uint8_T c13_e_emlrt_marshallIn(SFc13_kaiguangai1108InstanceStruct
  *chartInstance, const mxArray *c13_b_is_songkai, const char_T *c13_identifier)
{
  uint8_T c13_y;
  emlrtMsgIdentifier c13_thisId;
  c13_thisId.fIdentifier = c13_identifier;
  c13_thisId.fParent = NULL;
  c13_thisId.bParentIsCell = false;
  c13_y = c13_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c13_b_is_songkai),
    &c13_thisId);
  sf_mex_destroy(&c13_b_is_songkai);
  return c13_y;
}

static uint8_T c13_f_emlrt_marshallIn(SFc13_kaiguangai1108InstanceStruct
  *chartInstance, const mxArray *c13_u, const emlrtMsgIdentifier *c13_parentId)
{
  uint8_T c13_y;
  uint8_T c13_u0;
  (void)chartInstance;
  sf_mex_import(c13_parentId, sf_mex_dup(c13_u), &c13_u0, 1, 3, 0U, 0, 0U, 0);
  c13_y = c13_u0;
  sf_mex_destroy(&c13_u);
  return c13_y;
}

static void c13_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c13_mxArrayInData, const char_T *c13_varName, void *c13_outData)
{
  const mxArray *c13_b_is_songkai;
  const char_T *c13_identifier;
  emlrtMsgIdentifier c13_thisId;
  uint8_T c13_y;
  SFc13_kaiguangai1108InstanceStruct *chartInstance;
  chartInstance = (SFc13_kaiguangai1108InstanceStruct *)chartInstanceVoid;
  c13_b_is_songkai = sf_mex_dup(c13_mxArrayInData);
  c13_identifier = c13_varName;
  c13_thisId.fIdentifier = c13_identifier;
  c13_thisId.fParent = NULL;
  c13_thisId.bParentIsCell = false;
  c13_y = c13_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c13_b_is_songkai),
    &c13_thisId);
  sf_mex_destroy(&c13_b_is_songkai);
  *(uint8_T *)c13_outData = c13_y;
  sf_mex_destroy(&c13_mxArrayInData);
}

static void c13_g_emlrt_marshallIn(SFc13_kaiguangai1108InstanceStruct
  *chartInstance, const mxArray *c13_b_dataWrittenToVector, const char_T
  *c13_identifier, boolean_T c13_y[20])
{
  emlrtMsgIdentifier c13_thisId;
  c13_thisId.fIdentifier = c13_identifier;
  c13_thisId.fParent = NULL;
  c13_thisId.bParentIsCell = false;
  c13_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c13_b_dataWrittenToVector),
    &c13_thisId, c13_y);
  sf_mex_destroy(&c13_b_dataWrittenToVector);
}

static void c13_h_emlrt_marshallIn(SFc13_kaiguangai1108InstanceStruct
  *chartInstance, const mxArray *c13_u, const emlrtMsgIdentifier *c13_parentId,
  boolean_T c13_y[20])
{
  boolean_T c13_bv1[20];
  int32_T c13_i2;
  (void)chartInstance;
  sf_mex_import(c13_parentId, sf_mex_dup(c13_u), c13_bv1, 1, 11, 0U, 1, 0U, 1,
                20);
  for (c13_i2 = 0; c13_i2 < 20; c13_i2++) {
    c13_y[c13_i2] = c13_bv1[c13_i2];
  }

  sf_mex_destroy(&c13_u);
}

static const mxArray *c13_i_emlrt_marshallIn(SFc13_kaiguangai1108InstanceStruct *
  chartInstance, const mxArray *c13_b_setSimStateSideEffectsInfo, const char_T
  *c13_identifier)
{
  const mxArray *c13_y = NULL;
  emlrtMsgIdentifier c13_thisId;
  c13_y = NULL;
  c13_thisId.fIdentifier = c13_identifier;
  c13_thisId.fParent = NULL;
  c13_thisId.bParentIsCell = false;
  sf_mex_assign(&c13_y, c13_j_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c13_b_setSimStateSideEffectsInfo), &c13_thisId), false);
  sf_mex_destroy(&c13_b_setSimStateSideEffectsInfo);
  return c13_y;
}

static const mxArray *c13_j_emlrt_marshallIn(SFc13_kaiguangai1108InstanceStruct *
  chartInstance, const mxArray *c13_u, const emlrtMsgIdentifier *c13_parentId)
{
  const mxArray *c13_y = NULL;
  (void)chartInstance;
  (void)c13_parentId;
  c13_y = NULL;
  sf_mex_assign(&c13_y, sf_mex_duplicatearraysafe(&c13_u), false);
  sf_mex_destroy(&c13_u);
  return c13_y;
}

static const mxArray *sf_get_hover_data_for_msg
  (SFc13_kaiguangai1108InstanceStruct *chartInstance, int32_T c13_ssid)
{
  const mxArray *c13_msgInfo;
  (void)chartInstance;
  (void)c13_ssid;
  c13_msgInfo = NULL;
  return NULL;
}

static void c13_init_sf_message_store_memory(SFc13_kaiguangai1108InstanceStruct *
  chartInstance)
{
  (void)chartInstance;
}

static void init_dsm_address_info(SFc13_kaiguangai1108InstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc13_kaiguangai1108InstanceStruct
  *chartInstance)
{
  chartInstance->c13_sfEvent = (int32_T *)ssGetDWork_wrapper(chartInstance->S, 0);
  chartInstance->c13_is_active_c13_kaiguangai1108 = (uint8_T *)
    ssGetDWork_wrapper(chartInstance->S, 1);
  chartInstance->c13_is_c13_kaiguangai1108 = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 2);
  chartInstance->c13_is_songkai = (uint8_T *)ssGetDWork_wrapper(chartInstance->S,
    3);
  chartInstance->c13_is_active_songkai = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 4);
  chartInstance->c13_is_kaigai = (uint8_T *)ssGetDWork_wrapper(chartInstance->S,
    5);
  chartInstance->c13_is_active_kaigai = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 6);
  chartInstance->c13_is_jiesuo_songkai = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 7);
  chartInstance->c13_is_active_jiesuo_songkai = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 8);
  chartInstance->c13_is_suoding_yajin = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 9);
  chartInstance->c13_is_active_suoding_yajin = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 10);
  chartInstance->c13_is_yajin = (uint8_T *)ssGetDWork_wrapper(chartInstance->S,
    11);
  chartInstance->c13_is_active_yajin = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 12);
  chartInstance->c13_is_guangai = (uint8_T *)ssGetDWork_wrapper(chartInstance->S,
    13);
  chartInstance->c13_is_active_guangai = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 14);
  chartInstance->c13_start = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c13_kgdw1 = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c13_kgdw2 = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c13_ggdw1 = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c13_ggdw2 = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c13_sddw = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 5);
  chartInstance->c13_jsdw = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 6);
  chartInstance->c13_yjdw = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 7);
  chartInstance->c13_skdw = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 8);
  chartInstance->c13_b_songkai = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 9);
  chartInstance->c13_b_kaigai = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 10);
  chartInstance->c13_suoding = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 11);
  chartInstance->c13_jiesuo = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 12);
  chartInstance->c13_skhx = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c13_kghx = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c13_yjhx = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c13_gghx = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c13_kgzhiling1 = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 5);
  chartInstance->c13_kgzhiling2 = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 6);
  chartInstance->c13_ggzhiling1 = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 7);
  chartInstance->c13_ggzhiling2 = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 8);
  chartInstance->c13_skt = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 9);
  chartInstance->c13_kgt = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 10);
  chartInstance->c13_sdt = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 11);
  chartInstance->c13_jst = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 12);
  chartInstance->c13_ggt = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 13);
  chartInstance->c13_b_guangai = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 13);
  chartInstance->c13_b_yajin = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 14);
  chartInstance->c13_yjt = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 14);
  chartInstance->c13_skyichang = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 15);
  chartInstance->c13_kgyichang = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 16);
  chartInstance->c13_sdyichang = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 17);
  chartInstance->c13_jsyichang = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 18);
  chartInstance->c13_jieshu = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 15);
  chartInstance->c13_ggyichang = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 19);
  chartInstance->c13_yjyichang = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 20);
  chartInstance->c13_temporalCounter_i1 = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 15);
  chartInstance->c13_temporalCounter_i2 = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 16);
  chartInstance->c13_temporalCounter_i3 = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 17);
  chartInstance->c13_temporalCounter_i4 = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 18);
  chartInstance->c13_temporalCounter_i5 = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 19);
  chartInstance->c13_temporalCounter_i6 = (uint8_T *)ssGetDWork_wrapper
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
void sf_c13_kaiguangai1108_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3748114652U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3929418675U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3162747702U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1729115646U);
}

mxArray* sf_c13_kaiguangai1108_get_post_codegen_info(void);
mxArray *sf_c13_kaiguangai1108_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("7Sx058aoMh9oMvEY2ZUD2G");
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
    mxArray* mxPostCodegenInfo = sf_c13_kaiguangai1108_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c13_kaiguangai1108_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c13_kaiguangai1108_jit_fallback_info(void)
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

mxArray *sf_c13_kaiguangai1108_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c13_kaiguangai1108_get_post_codegen_info(void)
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

static const mxArray *sf_get_sim_state_info_c13_kaiguangai1108(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x10'type','srcId','name','auxInfo'{{M[1],M[100],T\"gghx\",},{M[1],M[101],T\"ggt\",},{M[1],M[166],T\"ggyichang\",},{M[1],M[102],T\"ggzhiling1\",},{M[1],M[103],T\"ggzhiling2\",},{M[1],M[106],T\"jst\",},{M[1],M[167],T\"jsyichang\",},{M[1],M[110],T\"kghx\",},{M[1],M[111],T\"kgt\",},{M[1],M[168],T\"kgyichang\",}}",
    "100 S1x10'type','srcId','name','auxInfo'{{M[1],M[112],T\"kgzhiling1\",},{M[1],M[113],T\"kgzhiling2\",},{M[1],M[114],T\"sdt\",},{M[1],M[169],T\"sdyichang\",},{M[1],M[30],T\"skhx\",},{M[1],M[31],T\"skt\",},{M[1],M[170],T\"skyichang\",},{M[1],M[117],T\"yjhx\",},{M[1],M[118],T\"yjt\",},{M[1],M[171],T\"yjyichang\",}}",
    "100 S1x10'type','srcId','name','auxInfo'{{M[8],M[0],T\"is_active_c13_kaiguangai1108\",},{M[8],M[1],T\"is_active_songkai\",},{M[8],M[32],T\"is_active_kaigai\",},{M[8],M[53],T\"is_active_suoding_yajin\",},{M[8],M[63],T\"is_active_jiesuo_songkai\",},{M[8],M[86],T\"is_active_guangai\",},{M[8],M[87],T\"is_active_yajin\",},{M[9],M[0],T\"is_c13_kaiguangai1108\",},{M[9],M[1],T\"is_songkai\",},{M[9],M[32],T\"is_kaigai\",}}",
    "100 S1x10'type','srcId','name','auxInfo'{{M[9],M[53],T\"is_suoding_yajin\",},{M[9],M[63],T\"is_jiesuo_songkai\",},{M[9],M[86],T\"is_guangai\",},{M[9],M[87],T\"is_yajin\",},{M[11],M[0],T\"temporalCounter_i1\",S'et','os','ct'{{T\"wu\",M[21],M[1]}}},{M[11],M[0],T\"temporalCounter_i2\",S'et','os','ct'{{T\"wu\",M[41],M[1]}}},{M[11],M[0],T\"temporalCounter_i4\",S'et','os','ct'{{T\"wu\",M[52],M[1]}}},{M[11],M[0],T\"temporalCounter_i3\",S'et','os','ct'{{T\"wu\",M[64],M[1]}}},{M[11],M[0],T\"temporalCounter_i6\",S'et','os','ct'{{T\"wu\",M[85],M[1]}}},{M[11],M[0],T\"temporalCounter_i5\",S'et','os','ct'{{T\"wu\",M[96],M[1]}}}}",
    "100 S'type','srcId','name','auxInfo'{{M[15],M[0],T\"dataWrittenToVector\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 41, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c13_kaiguangai1108_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const mxArray* sf_opaque_get_hover_data_for_msg(void* chartInstance,
  int32_T msgSSID)
{
  return sf_get_hover_data_for_msg( (SFc13_kaiguangai1108InstanceStruct *)
    chartInstance, msgSSID);
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc13_kaiguangai1108InstanceStruct *chartInstance =
      (SFc13_kaiguangai1108InstanceStruct *)sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _kaiguangai1108MachineNumber_,
           13,
           39,
           63,
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
        init_script_number_translation(_kaiguangai1108MachineNumber_,
          chartInstance->chartNumber,chartInstance->instanceNumber);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          sf_debug_set_chart_disable_implicit_casting
            (sfGlobalDebugInstanceStruct,_kaiguangai1108MachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(sfGlobalDebugInstanceStruct,
            _kaiguangai1108MachineNumber_,
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
          _SFD_STATE_INFO(26,0,0);
          _SFD_STATE_INFO(27,0,1);
          _SFD_STATE_INFO(28,0,0);
          _SFD_STATE_INFO(29,0,0);
          _SFD_STATE_INFO(30,0,0);
          _SFD_STATE_INFO(31,0,0);
          _SFD_STATE_INFO(32,0,0);
          _SFD_STATE_INFO(33,0,1);
          _SFD_STATE_INFO(34,0,0);
          _SFD_STATE_INFO(35,0,0);
          _SFD_STATE_INFO(36,0,0);
          _SFD_STATE_INFO(37,0,0);
          _SFD_STATE_INFO(38,0,0);
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
          _SFD_ST_SUBSTATE_INDEX(2,2,27);
          _SFD_ST_SUBSTATE_INDEX(2,3,9);
          _SFD_ST_SUBSTATE_INDEX(2,4,3);
          _SFD_ST_SUBSTATE_INDEX(2,5,33);
          _SFD_ST_SUBSTATE_COUNT(21,5);
          _SFD_ST_SUBSTATE_INDEX(21,0,22);
          _SFD_ST_SUBSTATE_INDEX(21,1,23);
          _SFD_ST_SUBSTATE_INDEX(21,2,24);
          _SFD_ST_SUBSTATE_INDEX(21,3,25);
          _SFD_ST_SUBSTATE_INDEX(21,4,26);
          _SFD_ST_SUBSTATE_COUNT(22,0);
          _SFD_ST_SUBSTATE_COUNT(23,0);
          _SFD_ST_SUBSTATE_COUNT(24,0);
          _SFD_ST_SUBSTATE_COUNT(25,0);
          _SFD_ST_SUBSTATE_COUNT(26,0);
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
          _SFD_ST_SUBSTATE_COUNT(27,5);
          _SFD_ST_SUBSTATE_INDEX(27,0,28);
          _SFD_ST_SUBSTATE_INDEX(27,1,29);
          _SFD_ST_SUBSTATE_INDEX(27,2,30);
          _SFD_ST_SUBSTATE_INDEX(27,3,31);
          _SFD_ST_SUBSTATE_INDEX(27,4,32);
          _SFD_ST_SUBSTATE_COUNT(28,0);
          _SFD_ST_SUBSTATE_COUNT(29,0);
          _SFD_ST_SUBSTATE_COUNT(30,0);
          _SFD_ST_SUBSTATE_COUNT(31,0);
          _SFD_ST_SUBSTATE_COUNT(32,0);
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
          _SFD_ST_SUBSTATE_COUNT(33,5);
          _SFD_ST_SUBSTATE_INDEX(33,0,34);
          _SFD_ST_SUBSTATE_INDEX(33,1,35);
          _SFD_ST_SUBSTATE_INDEX(33,2,36);
          _SFD_ST_SUBSTATE_INDEX(33,3,37);
          _SFD_ST_SUBSTATE_INDEX(33,4,38);
          _SFD_ST_SUBSTATE_COUNT(34,0);
          _SFD_ST_SUBSTATE_COUNT(35,0);
          _SFD_ST_SUBSTATE_COUNT(36,0);
          _SFD_ST_SUBSTATE_COUNT(37,0);
          _SFD_ST_SUBSTATE_COUNT(38,0);
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
          _SFD_CV_INIT_STATE(21,5,1,1,0,0,NULL,NULL);
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
          _SFD_CV_INIT_STATE(26,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(27,5,1,1,0,0,NULL,NULL);
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
          _SFD_CV_INIT_STATE(32,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(33,5,1,1,0,0,NULL,NULL);
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

        {
          _SFD_CV_INIT_STATE(38,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(36,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(37,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(38,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(42,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(4,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(1,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(2,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(39,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(5,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(3,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(40,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(41,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(6,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(45,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(7,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(8,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(9,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(44,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(11,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(10,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(46,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(43,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(18,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(54,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(19,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(22,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(20,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(51,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(21,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(23,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(52,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(53,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(12,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(49,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(13,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(14,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(16,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(48,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(17,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(15,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(50,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(47,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(30,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(62,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(31,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(32,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(33,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(59,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(35,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(34,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(60,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(61,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(24,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(58,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(25,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(26,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(28,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(55,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(29,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(27,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(56,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(57,0,NULL,NULL,0,NULL);

        /* Initialization of MATLAB Function Model Coverage */
        _SFD_CV_INIT_EML(0,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(22,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(23,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(24,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(25,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(26,1,0,0,0,0,0,0,0,0,0,0);
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
        _SFD_CV_INIT_EML(28,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(29,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(31,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(32,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(30,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(34,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(35,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(38,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(37,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(36,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(4,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(5,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(7,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(8,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(6,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(1,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(42,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(42,0,0,1,8,1,8);
        _SFD_CV_INIT_EML_RELATIONAL(42,0,0,1,8,-1,0);
        _SFD_CV_INIT_EML(4,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(4,0,0,1,16,1,16);

        {
          static int condStart[] = { 1, 10 };

          static int condEnd[] = { 8, 16 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(4,0,0,1,16,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(4,0,0,1,8,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(4,0,1,10,16,-1,3);
        _SFD_CV_INIT_EML(1,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(1,0,0,1,20,1,20);

        {
          static int condStart[] = { 1, 13 };

          static int condEnd[] = { 11, 20 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(1,0,0,1,20,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(1,0,0,1,11,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(1,0,1,13,20,-1,0);
        _SFD_CV_INIT_EML(39,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(39,0,0,1,6,1,6);
        _SFD_CV_INIT_EML_RELATIONAL(39,0,0,1,6,-1,4);
        _SFD_CV_INIT_EML(5,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(5,0,0,0,13,0,13);
        _SFD_CV_INIT_EML(3,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(3,0,0,1,16,1,16);

        {
          static int condStart[] = { 1, 10 };

          static int condEnd[] = { 8, 16 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(3,0,0,1,16,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(3,0,0,1,8,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(3,0,1,10,16,-1,3);
        _SFD_CV_INIT_EML(41,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(41,0,0,1,8,1,8);
        _SFD_CV_INIT_EML_RELATIONAL(41,0,0,1,8,-1,0);
        _SFD_CV_INIT_EML(45,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(45,0,0,1,19,1,19);

        {
          static int condStart[] = { 1, 11 };

          static int condEnd[] = { 9, 19 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(45,0,0,1,19,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(45,0,0,1,9,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(45,0,1,11,19,-1,0);
        _SFD_CV_INIT_EML(7,0,0,0,1,0,0,0,0,0,3,1);
        _SFD_CV_INIT_EML_IF(7,0,0,1,28,1,28);

        {
          static int condStart[] = { 1, 11, 21 };

          static int condEnd[] = { 9, 19, 28 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3 };

          _SFD_CV_INIT_EML_MCDC(7,0,0,1,28,3,0,&(condStart[0]),&(condEnd[0]),5,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(7,0,0,1,9,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(7,0,1,11,19,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(7,0,2,21,28,-1,3);
        _SFD_CV_INIT_EML(8,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(8,0,0,1,19,1,19);

        {
          static int condStart[] = { 1, 12 };

          static int condEnd[] = { 10, 19 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(8,0,0,1,19,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(8,0,0,1,10,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(8,0,1,12,19,-1,0);
        _SFD_CV_INIT_EML(44,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(44,0,0,1,7,1,7);
        _SFD_CV_INIT_EML_RELATIONAL(44,0,0,1,7,-1,4);
        _SFD_CV_INIT_EML(11,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(11,0,0,0,13,0,13);
        _SFD_CV_INIT_EML(10,0,0,0,1,0,0,0,0,0,3,1);
        _SFD_CV_INIT_EML_IF(10,0,0,1,30,1,30);

        {
          static int condStart[] = { 2, 12, 23 };

          static int condEnd[] = { 10, 20, 30 };

          static int pfixExpr[] = { 0, 1, -2, 2, -3 };

          _SFD_CV_INIT_EML_MCDC(10,0,0,1,30,3,0,&(condStart[0]),&(condEnd[0]),5,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(10,0,0,2,10,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(10,0,1,12,20,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(10,0,2,23,30,-1,3);
        _SFD_CV_INIT_EML(43,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(43,0,0,1,19,1,19);

        {
          static int condStart[] = { 1, 11 };

          static int condEnd[] = { 9, 19 };

          static int pfixExpr[] = { 0, 1, -2 };

          _SFD_CV_INIT_EML_MCDC(43,0,0,1,19,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(43,0,0,1,9,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(43,0,1,11,19,-1,0);
        _SFD_CV_INIT_EML(54,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(54,0,0,1,8,1,8);
        _SFD_CV_INIT_EML_RELATIONAL(54,0,0,1,8,-1,0);
        _SFD_CV_INIT_EML(19,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(19,0,0,1,16,1,16);

        {
          static int condStart[] = { 1, 10 };

          static int condEnd[] = { 8, 16 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(19,0,0,1,16,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(19,0,0,1,8,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(19,0,1,10,16,-1,3);
        _SFD_CV_INIT_EML(22,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(22,0,0,1,19,1,19);

        {
          static int condStart[] = { 1, 12 };

          static int condEnd[] = { 10, 19 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(22,0,0,1,19,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(22,0,0,1,10,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(22,0,1,12,19,-1,0);
        _SFD_CV_INIT_EML(51,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(51,0,0,1,6,1,6);
        _SFD_CV_INIT_EML_RELATIONAL(51,0,0,1,6,-1,4);
        _SFD_CV_INIT_EML(21,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(21,0,0,0,13,0,13);
        _SFD_CV_INIT_EML(23,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(23,0,0,1,16,1,16);

        {
          static int condStart[] = { 1, 10 };

          static int condEnd[] = { 8, 16 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(23,0,0,1,16,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(23,0,0,1,8,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(23,0,1,10,16,-1,3);
        _SFD_CV_INIT_EML(53,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(53,0,0,1,8,1,8);
        _SFD_CV_INIT_EML_RELATIONAL(53,0,0,1,8,-1,0);
        _SFD_CV_INIT_EML(49,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(49,0,0,1,8,1,8);
        _SFD_CV_INIT_EML_RELATIONAL(49,0,0,1,8,-1,0);
        _SFD_CV_INIT_EML(13,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(13,0,0,1,16,1,16);

        {
          static int condStart[] = { 1, 10 };

          static int condEnd[] = { 8, 16 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(13,0,0,1,16,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(13,0,0,1,8,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(13,0,1,10,16,-1,3);
        _SFD_CV_INIT_EML(14,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(14,0,0,1,20,1,20);

        {
          static int condStart[] = { 1, 13 };

          static int condEnd[] = { 11, 20 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(14,0,0,1,20,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(14,0,0,1,11,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(14,0,1,13,20,-1,0);
        _SFD_CV_INIT_EML(48,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(48,0,0,1,6,1,6);
        _SFD_CV_INIT_EML_RELATIONAL(48,0,0,1,6,-1,4);
        _SFD_CV_INIT_EML(17,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(17,0,0,0,13,0,13);
        _SFD_CV_INIT_EML(15,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(15,0,0,1,16,1,16);

        {
          static int condStart[] = { 1, 10 };

          static int condEnd[] = { 8, 16 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(15,0,0,1,16,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(15,0,0,1,8,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(15,0,1,10,16,-1,3);
        _SFD_CV_INIT_EML(47,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(47,0,0,1,8,1,8);
        _SFD_CV_INIT_EML_RELATIONAL(47,0,0,1,8,-1,0);
        _SFD_CV_INIT_EML(62,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(62,0,0,1,8,1,8);
        _SFD_CV_INIT_EML_RELATIONAL(62,0,0,1,8,-1,0);
        _SFD_CV_INIT_EML(31,0,0,0,1,0,0,0,0,0,3,1);
        _SFD_CV_INIT_EML_IF(31,0,0,1,25,1,25);

        {
          static int condStart[] = { 1, 10, 19 };

          static int condEnd[] = { 8, 17, 25 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3 };

          _SFD_CV_INIT_EML_MCDC(31,0,0,1,25,3,0,&(condStart[0]),&(condEnd[0]),5,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(31,0,0,1,8,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(31,0,1,10,17,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(31,0,2,19,25,-1,3);
        _SFD_CV_INIT_EML(32,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(32,0,0,1,18,1,18);

        {
          static int condStart[] = { 1, 11 };

          static int condEnd[] = { 9, 18 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(32,0,0,1,18,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(32,0,0,1,9,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(32,0,1,11,18,-1,0);
        _SFD_CV_INIT_EML(59,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(59,0,0,1,6,1,6);
        _SFD_CV_INIT_EML_RELATIONAL(59,0,0,1,6,-1,4);
        _SFD_CV_INIT_EML(35,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(35,0,0,0,13,0,13);
        _SFD_CV_INIT_EML(34,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(34,0,0,1,16,1,16);

        {
          static int condStart[] = { 1, 10 };

          static int condEnd[] = { 8, 16 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(34,0,0,1,16,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(34,0,0,1,8,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(34,0,1,10,16,-1,3);
        _SFD_CV_INIT_EML(61,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(61,0,0,1,8,1,8);
        _SFD_CV_INIT_EML_RELATIONAL(61,0,0,1,8,-1,0);
        _SFD_CV_INIT_EML(58,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(58,0,0,1,19,1,19);

        {
          static int condStart[] = { 1, 11 };

          static int condEnd[] = { 9, 19 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(58,0,0,1,19,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(58,0,0,1,9,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(58,0,1,11,19,-1,0);
        _SFD_CV_INIT_EML(25,0,0,0,1,0,0,0,0,0,3,1);
        _SFD_CV_INIT_EML_IF(25,0,0,1,28,1,28);

        {
          static int condStart[] = { 1, 11, 21 };

          static int condEnd[] = { 9, 19, 28 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3 };

          _SFD_CV_INIT_EML_MCDC(25,0,0,1,28,3,0,&(condStart[0]),&(condEnd[0]),5,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(25,0,0,1,9,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(25,0,1,11,19,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(25,0,2,21,28,-1,3);
        _SFD_CV_INIT_EML(26,0,0,0,1,0,0,0,0,0,3,1);
        _SFD_CV_INIT_EML_IF(26,0,0,1,31,1,31);

        {
          static int condStart[] = { 1, 13, 23 };

          static int condEnd[] = { 11, 21, 31 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3 };

          _SFD_CV_INIT_EML_MCDC(26,0,0,1,31,3,0,&(condStart[0]),&(condEnd[0]),5,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(26,0,0,1,11,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(26,0,1,13,21,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(26,0,2,23,31,-1,0);
        _SFD_CV_INIT_EML(55,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(55,0,0,1,7,1,7);
        _SFD_CV_INIT_EML_RELATIONAL(55,0,0,1,7,-1,4);
        _SFD_CV_INIT_EML(29,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(29,0,0,0,13,0,13);
        _SFD_CV_INIT_EML(27,0,0,0,1,0,0,0,0,0,3,1);
        _SFD_CV_INIT_EML_IF(27,0,0,1,30,1,30);

        {
          static int condStart[] = { 2, 12, 23 };

          static int condEnd[] = { 10, 20, 30 };

          static int pfixExpr[] = { 0, 1, -2, 2, -3 };

          _SFD_CV_INIT_EML_MCDC(27,0,0,1,30,3,0,&(condStart[0]),&(condEnd[0]),5,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(27,0,0,2,10,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(27,0,1,12,20,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(27,0,2,23,30,-1,3);
        _SFD_CV_INIT_EML(57,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(57,0,0,1,19,1,19);

        {
          static int condStart[] = { 1, 11 };

          static int condEnd[] = { 9, 19 };

          static int pfixExpr[] = { 0, 1, -2 };

          _SFD_CV_INIT_EML_MCDC(57,0,0,1,19,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(57,0,0,1,9,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(57,0,1,11,19,-1,0);
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
        _SFD_CV_INIT_EML(38,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(38,0,0,1,10,1,10);
        _SFD_CV_INIT_EML_RELATIONAL(38,0,0,1,10,-1,0);
        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(9,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(10,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(11,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(12,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(13,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(14,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(15,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(16,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_sf_marshallOut,(MexInFcnForType)c13_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(17,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_sf_marshallOut,(MexInFcnForType)c13_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(18,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_sf_marshallOut,(MexInFcnForType)c13_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(19,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_sf_marshallOut,(MexInFcnForType)c13_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(20,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_sf_marshallOut,(MexInFcnForType)c13_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(21,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_sf_marshallOut,(MexInFcnForType)c13_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(22,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_sf_marshallOut,(MexInFcnForType)c13_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(23,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_sf_marshallOut,(MexInFcnForType)c13_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(24,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_sf_marshallOut,(MexInFcnForType)c13_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(25,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_sf_marshallOut,(MexInFcnForType)c13_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(26,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_sf_marshallOut,(MexInFcnForType)c13_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(27,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_sf_marshallOut,(MexInFcnForType)c13_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(28,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_sf_marshallOut,(MexInFcnForType)c13_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(29,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_sf_marshallOut,(MexInFcnForType)c13_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(30,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_sf_marshallOut,(MexInFcnForType)c13_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(31,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_sf_marshallOut,(MexInFcnForType)c13_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(32,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_sf_marshallOut,(MexInFcnForType)c13_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(33,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_sf_marshallOut,(MexInFcnForType)c13_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(34,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_sf_marshallOut,(MexInFcnForType)c13_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(35,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c13_sf_marshallOut,(MexInFcnForType)c13_sf_marshallIn);
      }
    } else {
      sf_debug_reset_current_state_configuration(sfGlobalDebugInstanceStruct,
        _kaiguangai1108MachineNumber_,chartInstance->chartNumber,
        chartInstance->instanceNumber);
    }
  }
}

static void chart_debug_initialize_data_addresses(SimStruct *S)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc13_kaiguangai1108InstanceStruct *chartInstance =
      (SFc13_kaiguangai1108InstanceStruct *)sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        _SFD_SET_DATA_VALUE_PTR(0U, chartInstance->c13_start);
        _SFD_SET_DATA_VALUE_PTR(1U, chartInstance->c13_kgdw1);
        _SFD_SET_DATA_VALUE_PTR(2U, chartInstance->c13_kgdw2);
        _SFD_SET_DATA_VALUE_PTR(3U, chartInstance->c13_ggdw1);
        _SFD_SET_DATA_VALUE_PTR(4U, chartInstance->c13_ggdw2);
        _SFD_SET_DATA_VALUE_PTR(5U, chartInstance->c13_sddw);
        _SFD_SET_DATA_VALUE_PTR(6U, chartInstance->c13_jsdw);
        _SFD_SET_DATA_VALUE_PTR(7U, chartInstance->c13_yjdw);
        _SFD_SET_DATA_VALUE_PTR(8U, chartInstance->c13_skdw);
        _SFD_SET_DATA_VALUE_PTR(9U, chartInstance->c13_b_songkai);
        _SFD_SET_DATA_VALUE_PTR(10U, chartInstance->c13_b_kaigai);
        _SFD_SET_DATA_VALUE_PTR(11U, chartInstance->c13_suoding);
        _SFD_SET_DATA_VALUE_PTR(12U, chartInstance->c13_jiesuo);
        _SFD_SET_DATA_VALUE_PTR(16U, chartInstance->c13_skhx);
        _SFD_SET_DATA_VALUE_PTR(17U, chartInstance->c13_kghx);
        _SFD_SET_DATA_VALUE_PTR(18U, chartInstance->c13_yjhx);
        _SFD_SET_DATA_VALUE_PTR(19U, chartInstance->c13_gghx);
        _SFD_SET_DATA_VALUE_PTR(20U, chartInstance->c13_kgzhiling1);
        _SFD_SET_DATA_VALUE_PTR(21U, chartInstance->c13_kgzhiling2);
        _SFD_SET_DATA_VALUE_PTR(22U, chartInstance->c13_ggzhiling1);
        _SFD_SET_DATA_VALUE_PTR(23U, chartInstance->c13_ggzhiling2);
        _SFD_SET_DATA_VALUE_PTR(24U, chartInstance->c13_skt);
        _SFD_SET_DATA_VALUE_PTR(25U, chartInstance->c13_kgt);
        _SFD_SET_DATA_VALUE_PTR(26U, chartInstance->c13_sdt);
        _SFD_SET_DATA_VALUE_PTR(27U, chartInstance->c13_jst);
        _SFD_SET_DATA_VALUE_PTR(28U, chartInstance->c13_ggt);
        _SFD_SET_DATA_VALUE_PTR(13U, chartInstance->c13_b_guangai);
        _SFD_SET_DATA_VALUE_PTR(14U, chartInstance->c13_b_yajin);
        _SFD_SET_DATA_VALUE_PTR(29U, chartInstance->c13_yjt);
        _SFD_SET_DATA_VALUE_PTR(30U, chartInstance->c13_skyichang);
        _SFD_SET_DATA_VALUE_PTR(31U, chartInstance->c13_kgyichang);
        _SFD_SET_DATA_VALUE_PTR(32U, chartInstance->c13_sdyichang);
        _SFD_SET_DATA_VALUE_PTR(33U, chartInstance->c13_jsyichang);
        _SFD_SET_DATA_VALUE_PTR(15U, chartInstance->c13_jieshu);
        _SFD_SET_DATA_VALUE_PTR(34U, chartInstance->c13_ggyichang);
        _SFD_SET_DATA_VALUE_PTR(35U, chartInstance->c13_yjyichang);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "sHYJS5esLKXZlLQO1yGy43F";
}

static void sf_check_dwork_consistency(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    const uint32_T *sfunDWorkChecksum = sf_get_sfun_dwork_checksum();
    mxArray *infoStruct = load_kaiguangai1108_optimization_info
      (sim_mode_is_rtw_gen(S), sim_mode_is_modelref_sim(S), sim_mode_is_external
       (S));
    mxArray* mxRTWDWorkChecksum = sf_get_dwork_info_from_mat_file(S,
      sf_get_instance_specialization(), infoStruct, 13, "dworkChecksum");
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

static void sf_opaque_initialize_c13_kaiguangai1108(void *chartInstanceVar)
{
  sf_check_dwork_consistency(((SFc13_kaiguangai1108InstanceStruct*)
    chartInstanceVar)->S);
  chart_debug_initialization(((SFc13_kaiguangai1108InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c13_kaiguangai1108((SFc13_kaiguangai1108InstanceStruct*)
    chartInstanceVar);
  initialize_c13_kaiguangai1108((SFc13_kaiguangai1108InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c13_kaiguangai1108(void *chartInstanceVar)
{
  enable_c13_kaiguangai1108((SFc13_kaiguangai1108InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c13_kaiguangai1108(void *chartInstanceVar)
{
  disable_c13_kaiguangai1108((SFc13_kaiguangai1108InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c13_kaiguangai1108(void *chartInstanceVar)
{
  sf_gateway_c13_kaiguangai1108((SFc13_kaiguangai1108InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_ext_mode_exec_c13_kaiguangai1108(void *chartInstanceVar)
{
  ext_mode_exec_c13_kaiguangai1108((SFc13_kaiguangai1108InstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c13_kaiguangai1108(SimStruct* S)
{
  return get_sim_state_c13_kaiguangai1108((SFc13_kaiguangai1108InstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c13_kaiguangai1108(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c13_kaiguangai1108((SFc13_kaiguangai1108InstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_terminate_c13_kaiguangai1108(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc13_kaiguangai1108InstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_kaiguangai1108_optimization_info();
    }

    finalize_c13_kaiguangai1108((SFc13_kaiguangai1108InstanceStruct*)
      chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc13_kaiguangai1108((SFc13_kaiguangai1108InstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c13_kaiguangai1108(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c13_kaiguangai1108((SFc13_kaiguangai1108InstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

mxArray *sf_c13_kaiguangai1108_get_testpoint_info(void)
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

static void mdlSetWorkWidths_c13_kaiguangai1108(SimStruct *S)
{
  ssSetStatesModifiedOnlyInUpdate(S, 0);
  ssMdlUpdateIsEmpty(S, 1);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_kaiguangai1108_optimization_info
      (sim_mode_is_rtw_gen(S), sim_mode_is_modelref_sim(S), sim_mode_is_external
       (S));
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      13);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,13,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_set_chart_accesses_machine_info(S, sf_get_instance_specialization(),
      infoStruct, 13);
    sf_update_buildInfo(S, sf_get_instance_specialization(),infoStruct,13);
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
        infoStruct,13,16);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,13,20);
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

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,13);
    sf_register_codegen_names_for_scoped_functions_defined_by_chart(S);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
    sf_set_sfun_dwork_info(S);
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(2564088325U));
  ssSetChecksum1(S,(2838402958U));
  ssSetChecksum2(S,(508811191U));
  ssSetChecksum3(S,(327286702U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSetStateSemanticsClassicAndSynchronous(S, true);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c13_kaiguangai1108(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c13_kaiguangai1108(SimStruct *S)
{
  SFc13_kaiguangai1108InstanceStruct *chartInstance;
  chartInstance = (SFc13_kaiguangai1108InstanceStruct *)utMalloc(sizeof
    (SFc13_kaiguangai1108InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc13_kaiguangai1108InstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c13_kaiguangai1108;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c13_kaiguangai1108;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c13_kaiguangai1108;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c13_kaiguangai1108;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c13_kaiguangai1108;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c13_kaiguangai1108;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c13_kaiguangai1108;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c13_kaiguangai1108;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c13_kaiguangai1108;
  chartInstance->chartInfo.mdlStart = mdlStart_c13_kaiguangai1108;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c13_kaiguangai1108;
  chartInstance->chartInfo.callGetHoverDataForMsg =
    sf_opaque_get_hover_data_for_msg;
  chartInstance->chartInfo.extModeExec =
    sf_opaque_ext_mode_exec_c13_kaiguangai1108;
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
  mdl_start_c13_kaiguangai1108(chartInstance);
}

void c13_kaiguangai1108_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c13_kaiguangai1108(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c13_kaiguangai1108(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c13_kaiguangai1108(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c13_kaiguangai1108_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
