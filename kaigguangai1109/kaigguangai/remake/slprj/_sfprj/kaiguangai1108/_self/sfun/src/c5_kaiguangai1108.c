/* Include files */

#include "kaiguangai1108_sfun.h"
#include "c5_kaiguangai1108.h"
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
#define c5_IN_NO_ACTIVE_CHILD          ((uint8_T)0U)
#define c5_IN_zidong                   ((uint8_T)1U)
#define c5_IN_chushihua                ((uint8_T)1U)
#define c5_IN_guangaishijian           ((uint8_T)2U)
#define c5_IN_jiesuoshijian            ((uint8_T)3U)
#define c5_IN_kaigaishijian            ((uint8_T)4U)
#define c5_IN_off                      ((uint8_T)5U)
#define c5_IN_on1                      ((uint8_T)6U)
#define c5_IN_on10                     ((uint8_T)7U)
#define c5_IN_on11                     ((uint8_T)8U)
#define c5_IN_on12                     ((uint8_T)9U)
#define c5_IN_on13                     ((uint8_T)10U)
#define c5_IN_on14                     ((uint8_T)11U)
#define c5_IN_on15                     ((uint8_T)12U)
#define c5_IN_on16                     ((uint8_T)13U)
#define c5_IN_on17                     ((uint8_T)14U)
#define c5_IN_on18                     ((uint8_T)15U)
#define c5_IN_on19                     ((uint8_T)16U)
#define c5_IN_on2                      ((uint8_T)17U)
#define c5_IN_on3                      ((uint8_T)18U)
#define c5_IN_on4                      ((uint8_T)19U)
#define c5_IN_on5                      ((uint8_T)20U)
#define c5_IN_on6                      ((uint8_T)21U)
#define c5_IN_on7                      ((uint8_T)22U)
#define c5_IN_on8                      ((uint8_T)23U)
#define c5_IN_on9                      ((uint8_T)24U)
#define c5_IN_songkaishijian           ((uint8_T)25U)
#define c5_IN_songkaishijian1          ((uint8_T)26U)
#define c5_IN_songkaishijian2          ((uint8_T)27U)
#define c5_IN_songkaishijian3          ((uint8_T)28U)
#define c5_IN_songkaishijian4          ((uint8_T)29U)
#define c5_IN_songkaishijian5          ((uint8_T)30U)
#define c5_IN_songkaishijian6          ((uint8_T)31U)
#define c5_IN_start                    ((uint8_T)32U)
#define c5_IN_stop                     ((uint8_T)33U)
#define c5_IN_suodingshijian           ((uint8_T)34U)
#define c5_IN_t10guiling               ((uint8_T)35U)
#define c5_IN_t2guiling                ((uint8_T)36U)
#define c5_IN_t4guiling                ((uint8_T)37U)
#define c5_IN_t6guiling                ((uint8_T)38U)
#define c5_IN_t8guiling                ((uint8_T)39U)
#define c5_IN_tguiling                 ((uint8_T)40U)
#define c5_IN_yajinshijian             ((uint8_T)41U)
#define c5_IN_yanchishijian1           ((uint8_T)42U)
#define c5_IN_yanchishijian2           ((uint8_T)43U)
#define c5_IN_yanchishijian3           ((uint8_T)44U)
#define c5_IN_yanchishijian4           ((uint8_T)45U)
#define c5_IN_yanchishijian5           ((uint8_T)46U)
#define c5_IN_yanchishijian6           ((uint8_T)47U)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static const char * c5_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_b_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_c_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_d_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_e_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_f_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_g_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_h_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_i_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_j_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_k_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_l_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_m_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_n_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_o_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_p_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_q_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_r_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_s_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_t_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_u_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_v_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_w_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_x_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_y_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_ab_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_bb_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_cb_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_db_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_eb_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_fb_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_gb_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_hb_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_ib_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_jb_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_kb_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_lb_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_mb_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_nb_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_ob_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_pb_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_qb_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_rb_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_sb_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_tb_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_ub_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_vb_debug_family_names[2] = { "nargin", "nargout" };

static const char * c5_wb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_xb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_yb_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_ac_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_bc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_cc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_dc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_ec_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_fc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_gc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_hc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_ic_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_jc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_kc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_lc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_mc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_nc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_oc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_pc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_qc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_rc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_sc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_tc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_uc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_vc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_wc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_xc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_yc_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_ad_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_bd_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_cd_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_dd_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_ed_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_fd_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_gd_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_hd_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_id_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_jd_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_kd_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_ld_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_md_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_nd_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_od_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_pd_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_qd_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_rd_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_sd_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_td_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_ud_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_vd_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_wd_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_xd_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_yd_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_ae_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_be_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_ce_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_de_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

static const char * c5_ee_debug_family_names[3] = { "nargin", "nargout",
  "sf_internal_predicateOutput" };

/* Function Declarations */
static void initialize_c5_kaiguangai1108(SFc5_kaiguangai1108InstanceStruct
  *chartInstance);
static void initialize_params_c5_kaiguangai1108
  (SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void enable_c5_kaiguangai1108(SFc5_kaiguangai1108InstanceStruct
  *chartInstance);
static void disable_c5_kaiguangai1108(SFc5_kaiguangai1108InstanceStruct
  *chartInstance);
static void c5_update_debugger_state_c5_kaiguangai1108
  (SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void ext_mode_exec_c5_kaiguangai1108(SFc5_kaiguangai1108InstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c5_kaiguangai1108
  (SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void set_sim_state_c5_kaiguangai1108(SFc5_kaiguangai1108InstanceStruct
  *chartInstance, const mxArray *c5_st);
static void c5_set_sim_state_side_effects_c5_kaiguangai1108
  (SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void finalize_c5_kaiguangai1108(SFc5_kaiguangai1108InstanceStruct
  *chartInstance);
static void sf_gateway_c5_kaiguangai1108(SFc5_kaiguangai1108InstanceStruct
  *chartInstance);
static void mdl_start_c5_kaiguangai1108(SFc5_kaiguangai1108InstanceStruct
  *chartInstance);
static void initSimStructsc5_kaiguangai1108(SFc5_kaiguangai1108InstanceStruct
  *chartInstance);
static void c5_zidong(SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void c5_enter_atomic_chushihua(SFc5_kaiguangai1108InstanceStruct
  *chartInstance);
static void c5_songkaishijian(SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void c5_start(SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void c5_on10(SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void c5_songkaishijian1(SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void c5_yanchishijian1(SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void c5_tguiling(SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void c5_enter_atomic_on2(SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void c5_on2(SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void c5_kaigaishijian(SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void c5_songkaishijian2(SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void c5_on11(SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void c5_yanchishijian2(SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void c5_t2guiling(SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void c5_enter_atomic_on3(SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void c5_on3(SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void c5_suodingshijian(SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void c5_on7(SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void c5_songkaishijian3(SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void c5_on12(SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void c5_yanchishijian3(SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void c5_t4guiling(SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void c5_enter_atomic_off(SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void c5_on4(SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void c5_jiesuoshijian(SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void c5_songkaishijian4(SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void c5_on14(SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void c5_yanchishijian4(SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void c5_t6guiling(SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void c5_enter_atomic_on5(SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void c5_on5(SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void c5_guangaishijian(SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void c5_songkaishijian5(SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void c5_on16(SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void c5_yanchishijian5(SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void c5_t8guiling(SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void c5_yanchishijian6(SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void c5_t10guiling(SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void c5_enter_atomic_on6(SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void c5_on6(SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void c5_yajinshijian(SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void c5_songkaishijian6(SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void c5_on18(SFc5_kaiguangai1108InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c5_machineNumber, uint32_T
  c5_chartNumber, uint32_T c5_instanceNumber);
static const mxArray *c5_sf_marshallOut(void *chartInstanceVoid, void *c5_inData);
static real_T c5_emlrt_marshallIn(SFc5_kaiguangai1108InstanceStruct
  *chartInstance, const mxArray *c5_nargout, const char_T *c5_identifier);
static real_T c5_b_emlrt_marshallIn(SFc5_kaiguangai1108InstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId);
static void c5_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData);
static const mxArray *c5_b_sf_marshallOut(void *chartInstanceVoid, void
  *c5_inData);
static boolean_T c5_c_emlrt_marshallIn(SFc5_kaiguangai1108InstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId);
static void c5_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData);
static const mxArray *c5_c_sf_marshallOut(void *chartInstanceVoid, void
  *c5_inData);
static int32_T c5_d_emlrt_marshallIn(SFc5_kaiguangai1108InstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId);
static void c5_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData);
static const mxArray *c5_d_sf_marshallOut(void *chartInstanceVoid, void
  *c5_inData);
static uint8_T c5_e_emlrt_marshallIn(SFc5_kaiguangai1108InstanceStruct
  *chartInstance, const mxArray *c5_b_is_zidong, const char_T *c5_identifier);
static uint8_T c5_f_emlrt_marshallIn(SFc5_kaiguangai1108InstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId);
static void c5_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData);
static uint16_T c5_g_emlrt_marshallIn(SFc5_kaiguangai1108InstanceStruct
  *chartInstance, const mxArray *c5_b_temporalCounter_i1, const char_T
  *c5_identifier);
static uint16_T c5_h_emlrt_marshallIn(SFc5_kaiguangai1108InstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId);
static void c5_i_emlrt_marshallIn(SFc5_kaiguangai1108InstanceStruct
  *chartInstance, const mxArray *c5_b_dataWrittenToVector, const char_T
  *c5_identifier, boolean_T c5_y[27]);
static void c5_j_emlrt_marshallIn(SFc5_kaiguangai1108InstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId,
  boolean_T c5_y[27]);
static const mxArray *c5_k_emlrt_marshallIn(SFc5_kaiguangai1108InstanceStruct
  *chartInstance, const mxArray *c5_b_setSimStateSideEffectsInfo, const char_T
  *c5_identifier);
static const mxArray *c5_l_emlrt_marshallIn(SFc5_kaiguangai1108InstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId);
static const mxArray *sf_get_hover_data_for_msg
  (SFc5_kaiguangai1108InstanceStruct *chartInstance, int32_T c5_ssid);
static void c5_init_sf_message_store_memory(SFc5_kaiguangai1108InstanceStruct
  *chartInstance);
static void init_dsm_address_info(SFc5_kaiguangai1108InstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc5_kaiguangai1108InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c5_kaiguangai1108(SFc5_kaiguangai1108InstanceStruct
  *chartInstance)
{
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc5_kaiguangai1108(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  *chartInstance->c5_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c5_doSetSimStateSideEffects = 0U;
  chartInstance->c5_setSimStateSideEffectsInfo = NULL;
  *chartInstance->c5_is_zidong = c5_IN_NO_ACTIVE_CHILD;
  *chartInstance->c5_temporalCounter_i1 = 0U;
  *chartInstance->c5_temporalCounter_i1 = 0U;
  *chartInstance->c5_temporalCounter_i1 = 0U;
  *chartInstance->c5_temporalCounter_i1 = 0U;
  *chartInstance->c5_temporalCounter_i1 = 0U;
  *chartInstance->c5_temporalCounter_i1 = 0U;
  *chartInstance->c5_is_active_c5_kaiguangai1108 = 0U;
  *chartInstance->c5_is_c5_kaiguangai1108 = c5_IN_NO_ACTIVE_CHILD;
}

static void initialize_params_c5_kaiguangai1108
  (SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c5_kaiguangai1108(SFc5_kaiguangai1108InstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c5_kaiguangai1108(SFc5_kaiguangai1108InstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c5_update_debugger_state_c5_kaiguangai1108
  (SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c5_prevAniVal;
  c5_prevAniVal = _SFD_GET_ANIMATION();
  _SFD_SET_ANIMATION(0U);
  _SFD_SET_HONOR_BREAKPOINTS(0U);
  if (*chartInstance->c5_is_active_c5_kaiguangai1108 == 1U) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 4U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_c5_kaiguangai1108 == c5_IN_zidong) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_chushihua) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_on1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_songkaishijian) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 25U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 25U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_start) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 32U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 32U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_on10) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_songkaishijian1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 26U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 26U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_on8) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 23U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 23U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_yanchishijian1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 42U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 42U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_tguiling) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 40U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 40U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_on2) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 17U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 17U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_kaigaishijian) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_stop) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 33U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 33U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_songkaishijian2) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 27U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 27U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_on9) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 24U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 24U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_on11) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_yanchishijian2) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 43U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 43U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_t2guiling) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 36U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 36U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_on3) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 18U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 18U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_suodingshijian) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 34U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 34U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_on7) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 22U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 22U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_songkaishijian3) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 28U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 28U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_on13) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_on12) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 9U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_yanchishijian3) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 44U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 44U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_t4guiling) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 37U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 37U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_off) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_on4) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 19U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 19U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_jiesuoshijian) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_songkaishijian4) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 29U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 29U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_on15) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 12U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 12U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_on14) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 11U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 11U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_yanchishijian4) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 45U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 45U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_t6guiling) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 38U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 38U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_on5) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 20U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 20U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_guangaishijian) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_songkaishijian5) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 30U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 30U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_on17) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 14U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 14U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_on16) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 13U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 13U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_yanchishijian5) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 46U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 46U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_t8guiling) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 39U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 39U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_yanchishijian6) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 47U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 47U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_t10guiling) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 35U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 35U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_on6) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 21U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 21U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_yajinshijian) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 41U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 41U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_songkaishijian6) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 31U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 31U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_on19) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 16U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 16U, *chartInstance->c5_sfEvent);
  }

  if (*chartInstance->c5_is_zidong == c5_IN_on18) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 15U, *chartInstance->c5_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 15U, *chartInstance->c5_sfEvent);
  }

  _SFD_SET_ANIMATION(c5_prevAniVal);
  _SFD_SET_HONOR_BREAKPOINTS(1U);
  _SFD_ANIMATE();
}

static void ext_mode_exec_c5_kaiguangai1108(SFc5_kaiguangai1108InstanceStruct
  *chartInstance)
{
  c5_update_debugger_state_c5_kaiguangai1108(chartInstance);
}

static const mxArray *get_sim_state_c5_kaiguangai1108
  (SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  const mxArray *c5_st;
  const mxArray *c5_y = NULL;
  real_T c5_hoistedGlobal;
  const mxArray *c5_b_y = NULL;
  real_T c5_b_hoistedGlobal;
  const mxArray *c5_c_y = NULL;
  real_T c5_c_hoistedGlobal;
  const mxArray *c5_d_y = NULL;
  real_T c5_d_hoistedGlobal;
  const mxArray *c5_e_y = NULL;
  real_T c5_e_hoistedGlobal;
  const mxArray *c5_f_y = NULL;
  real_T c5_f_hoistedGlobal;
  const mxArray *c5_g_y = NULL;
  real_T c5_g_hoistedGlobal;
  const mxArray *c5_h_y = NULL;
  real_T c5_h_hoistedGlobal;
  const mxArray *c5_i_y = NULL;
  real_T c5_i_hoistedGlobal;
  const mxArray *c5_j_y = NULL;
  real_T c5_j_hoistedGlobal;
  const mxArray *c5_k_y = NULL;
  real_T c5_k_hoistedGlobal;
  const mxArray *c5_l_y = NULL;
  real_T c5_l_hoistedGlobal;
  const mxArray *c5_m_y = NULL;
  real_T c5_m_hoistedGlobal;
  const mxArray *c5_n_y = NULL;
  real_T c5_n_hoistedGlobal;
  const mxArray *c5_o_y = NULL;
  real_T c5_o_hoistedGlobal;
  const mxArray *c5_p_y = NULL;
  real_T c5_p_hoistedGlobal;
  const mxArray *c5_q_y = NULL;
  real_T c5_q_hoistedGlobal;
  const mxArray *c5_r_y = NULL;
  real_T c5_r_hoistedGlobal;
  const mxArray *c5_s_y = NULL;
  real_T c5_s_hoistedGlobal;
  const mxArray *c5_t_y = NULL;
  real_T c5_t_hoistedGlobal;
  const mxArray *c5_u_y = NULL;
  real_T c5_u_hoistedGlobal;
  const mxArray *c5_v_y = NULL;
  real_T c5_v_hoistedGlobal;
  const mxArray *c5_w_y = NULL;
  real_T c5_w_hoistedGlobal;
  const mxArray *c5_x_y = NULL;
  real_T c5_x_hoistedGlobal;
  const mxArray *c5_y_y = NULL;
  real_T c5_y_hoistedGlobal;
  const mxArray *c5_ab_y = NULL;
  real_T c5_ab_hoistedGlobal;
  const mxArray *c5_bb_y = NULL;
  real_T c5_bb_hoistedGlobal;
  const mxArray *c5_cb_y = NULL;
  uint8_T c5_cb_hoistedGlobal;
  const mxArray *c5_db_y = NULL;
  uint8_T c5_db_hoistedGlobal;
  const mxArray *c5_eb_y = NULL;
  uint8_T c5_eb_hoistedGlobal;
  const mxArray *c5_fb_y = NULL;
  uint16_T c5_fb_hoistedGlobal;
  const mxArray *c5_gb_y = NULL;
  const mxArray *c5_hb_y = NULL;
  c5_st = NULL;
  c5_st = NULL;
  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_createcellmatrix(32, 1), false);
  c5_hoistedGlobal = *chartInstance->c5_gghx;
  c5_b_y = NULL;
  sf_mex_assign(&c5_b_y, sf_mex_create("y", &c5_hoistedGlobal, 0, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c5_y, 0, c5_b_y);
  c5_b_hoistedGlobal = *chartInstance->c5_ggt;
  c5_c_y = NULL;
  sf_mex_assign(&c5_c_y, sf_mex_create("y", &c5_b_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c5_y, 1, c5_c_y);
  c5_c_hoistedGlobal = *chartInstance->c5_ggyichang;
  c5_d_y = NULL;
  sf_mex_assign(&c5_d_y, sf_mex_create("y", &c5_c_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c5_y, 2, c5_d_y);
  c5_d_hoistedGlobal = *chartInstance->c5_ggzhiling1;
  c5_e_y = NULL;
  sf_mex_assign(&c5_e_y, sf_mex_create("y", &c5_d_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c5_y, 3, c5_e_y);
  c5_e_hoistedGlobal = *chartInstance->c5_ggzhiling2;
  c5_f_y = NULL;
  sf_mex_assign(&c5_f_y, sf_mex_create("y", &c5_e_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c5_y, 4, c5_f_y);
  c5_f_hoistedGlobal = *chartInstance->c5_jst;
  c5_g_y = NULL;
  sf_mex_assign(&c5_g_y, sf_mex_create("y", &c5_f_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c5_y, 5, c5_g_y);
  c5_g_hoistedGlobal = *chartInstance->c5_jsyichang;
  c5_h_y = NULL;
  sf_mex_assign(&c5_h_y, sf_mex_create("y", &c5_g_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c5_y, 6, c5_h_y);
  c5_h_hoistedGlobal = *chartInstance->c5_kghx;
  c5_i_y = NULL;
  sf_mex_assign(&c5_i_y, sf_mex_create("y", &c5_h_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c5_y, 7, c5_i_y);
  c5_i_hoistedGlobal = *chartInstance->c5_kgt;
  c5_j_y = NULL;
  sf_mex_assign(&c5_j_y, sf_mex_create("y", &c5_i_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c5_y, 8, c5_j_y);
  c5_j_hoistedGlobal = *chartInstance->c5_kgyichang;
  c5_k_y = NULL;
  sf_mex_assign(&c5_k_y, sf_mex_create("y", &c5_j_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c5_y, 9, c5_k_y);
  c5_k_hoistedGlobal = *chartInstance->c5_kgzhiling1;
  c5_l_y = NULL;
  sf_mex_assign(&c5_l_y, sf_mex_create("y", &c5_k_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c5_y, 10, c5_l_y);
  c5_l_hoistedGlobal = *chartInstance->c5_kgzhiling2;
  c5_m_y = NULL;
  sf_mex_assign(&c5_m_y, sf_mex_create("y", &c5_l_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c5_y, 11, c5_m_y);
  c5_m_hoistedGlobal = *chartInstance->c5_sdt;
  c5_n_y = NULL;
  sf_mex_assign(&c5_n_y, sf_mex_create("y", &c5_m_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c5_y, 12, c5_n_y);
  c5_n_hoistedGlobal = *chartInstance->c5_sdyichang;
  c5_o_y = NULL;
  sf_mex_assign(&c5_o_y, sf_mex_create("y", &c5_n_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c5_y, 13, c5_o_y);
  c5_o_hoistedGlobal = *chartInstance->c5_skhx;
  c5_p_y = NULL;
  sf_mex_assign(&c5_p_y, sf_mex_create("y", &c5_o_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c5_y, 14, c5_p_y);
  c5_p_hoistedGlobal = *chartInstance->c5_skt;
  c5_q_y = NULL;
  sf_mex_assign(&c5_q_y, sf_mex_create("y", &c5_p_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c5_y, 15, c5_q_y);
  c5_q_hoistedGlobal = *chartInstance->c5_skyichang;
  c5_r_y = NULL;
  sf_mex_assign(&c5_r_y, sf_mex_create("y", &c5_q_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c5_y, 16, c5_r_y);
  c5_r_hoistedGlobal = *chartInstance->c5_yikaicishu;
  c5_s_y = NULL;
  sf_mex_assign(&c5_s_y, sf_mex_create("y", &c5_r_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c5_y, 17, c5_s_y);
  c5_s_hoistedGlobal = *chartInstance->c5_yjhx;
  c5_t_y = NULL;
  sf_mex_assign(&c5_t_y, sf_mex_create("y", &c5_s_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c5_y, 18, c5_t_y);
  c5_t_hoistedGlobal = *chartInstance->c5_yjt;
  c5_u_y = NULL;
  sf_mex_assign(&c5_u_y, sf_mex_create("y", &c5_t_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c5_y, 19, c5_u_y);
  c5_u_hoistedGlobal = *chartInstance->c5_yjyichang;
  c5_v_y = NULL;
  sf_mex_assign(&c5_v_y, sf_mex_create("y", &c5_u_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c5_y, 20, c5_v_y);
  c5_v_hoistedGlobal = *chartInstance->c5_t;
  c5_w_y = NULL;
  sf_mex_assign(&c5_w_y, sf_mex_create("y", &c5_v_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c5_y, 21, c5_w_y);
  c5_w_hoistedGlobal = *chartInstance->c5_t10;
  c5_x_y = NULL;
  sf_mex_assign(&c5_x_y, sf_mex_create("y", &c5_w_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c5_y, 22, c5_x_y);
  c5_x_hoistedGlobal = *chartInstance->c5_t2;
  c5_y_y = NULL;
  sf_mex_assign(&c5_y_y, sf_mex_create("y", &c5_x_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c5_y, 23, c5_y_y);
  c5_y_hoistedGlobal = *chartInstance->c5_t4;
  c5_ab_y = NULL;
  sf_mex_assign(&c5_ab_y, sf_mex_create("y", &c5_y_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c5_y, 24, c5_ab_y);
  c5_ab_hoistedGlobal = *chartInstance->c5_t6;
  c5_bb_y = NULL;
  sf_mex_assign(&c5_bb_y, sf_mex_create("y", &c5_ab_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c5_y, 25, c5_bb_y);
  c5_bb_hoistedGlobal = *chartInstance->c5_t8;
  c5_cb_y = NULL;
  sf_mex_assign(&c5_cb_y, sf_mex_create("y", &c5_bb_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c5_y, 26, c5_cb_y);
  c5_cb_hoistedGlobal = *chartInstance->c5_is_active_c5_kaiguangai1108;
  c5_db_y = NULL;
  sf_mex_assign(&c5_db_y, sf_mex_create("y", &c5_cb_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c5_y, 27, c5_db_y);
  c5_db_hoistedGlobal = *chartInstance->c5_is_c5_kaiguangai1108;
  c5_eb_y = NULL;
  sf_mex_assign(&c5_eb_y, sf_mex_create("y", &c5_db_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c5_y, 28, c5_eb_y);
  c5_eb_hoistedGlobal = *chartInstance->c5_is_zidong;
  c5_fb_y = NULL;
  sf_mex_assign(&c5_fb_y, sf_mex_create("y", &c5_eb_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c5_y, 29, c5_fb_y);
  c5_fb_hoistedGlobal = *chartInstance->c5_temporalCounter_i1;
  c5_gb_y = NULL;
  sf_mex_assign(&c5_gb_y, sf_mex_create("y", &c5_fb_hoistedGlobal, 5, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c5_y, 30, c5_gb_y);
  c5_hb_y = NULL;
  sf_mex_assign(&c5_hb_y, sf_mex_create("y",
    chartInstance->c5_dataWrittenToVector, 11, 0U, 1U, 0U, 1, 27), false);
  sf_mex_setcell(c5_y, 31, c5_hb_y);
  sf_mex_assign(&c5_st, c5_y, false);
  return c5_st;
}

static void set_sim_state_c5_kaiguangai1108(SFc5_kaiguangai1108InstanceStruct
  *chartInstance, const mxArray *c5_st)
{
  const mxArray *c5_u;
  boolean_T c5_bv0[27];
  int32_T c5_i0;
  c5_u = sf_mex_dup(c5_st);
  *chartInstance->c5_gghx = c5_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("gghx", c5_u, 0)), "gghx");
  *chartInstance->c5_ggt = c5_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("ggt", c5_u, 1)), "ggt");
  *chartInstance->c5_ggyichang = c5_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("ggyichang", c5_u, 2)), "ggyichang");
  *chartInstance->c5_ggzhiling1 = c5_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("ggzhiling1", c5_u, 3)), "ggzhiling1");
  *chartInstance->c5_ggzhiling2 = c5_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("ggzhiling2", c5_u, 4)), "ggzhiling2");
  *chartInstance->c5_jst = c5_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("jst", c5_u, 5)), "jst");
  *chartInstance->c5_jsyichang = c5_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("jsyichang", c5_u, 6)), "jsyichang");
  *chartInstance->c5_kghx = c5_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("kghx", c5_u, 7)), "kghx");
  *chartInstance->c5_kgt = c5_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("kgt", c5_u, 8)), "kgt");
  *chartInstance->c5_kgyichang = c5_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("kgyichang", c5_u, 9)), "kgyichang");
  *chartInstance->c5_kgzhiling1 = c5_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("kgzhiling1", c5_u, 10)), "kgzhiling1");
  *chartInstance->c5_kgzhiling2 = c5_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("kgzhiling2", c5_u, 11)), "kgzhiling2");
  *chartInstance->c5_sdt = c5_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("sdt", c5_u, 12)), "sdt");
  *chartInstance->c5_sdyichang = c5_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("sdyichang", c5_u, 13)), "sdyichang");
  *chartInstance->c5_skhx = c5_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("skhx", c5_u, 14)), "skhx");
  *chartInstance->c5_skt = c5_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("skt", c5_u, 15)), "skt");
  *chartInstance->c5_skyichang = c5_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("skyichang", c5_u, 16)), "skyichang");
  *chartInstance->c5_yikaicishu = c5_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("yikaicishu", c5_u, 17)), "yikaicishu");
  *chartInstance->c5_yjhx = c5_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("yjhx", c5_u, 18)), "yjhx");
  *chartInstance->c5_yjt = c5_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("yjt", c5_u, 19)), "yjt");
  *chartInstance->c5_yjyichang = c5_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("yjyichang", c5_u, 20)), "yjyichang");
  *chartInstance->c5_t = c5_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("t", c5_u, 21)), "t");
  *chartInstance->c5_t10 = c5_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("t10", c5_u, 22)), "t10");
  *chartInstance->c5_t2 = c5_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("t2", c5_u, 23)), "t2");
  *chartInstance->c5_t4 = c5_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("t4", c5_u, 24)), "t4");
  *chartInstance->c5_t6 = c5_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("t6", c5_u, 25)), "t6");
  *chartInstance->c5_t8 = c5_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("t8", c5_u, 26)), "t8");
  *chartInstance->c5_is_active_c5_kaiguangai1108 = c5_e_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell("is_active_c5_kaiguangai1108",
       c5_u, 27)), "is_active_c5_kaiguangai1108");
  *chartInstance->c5_is_c5_kaiguangai1108 = c5_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_c5_kaiguangai1108", c5_u, 28)),
    "is_c5_kaiguangai1108");
  *chartInstance->c5_is_zidong = c5_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("is_zidong", c5_u, 29)), "is_zidong");
  *chartInstance->c5_temporalCounter_i1 = c5_g_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("temporalCounter_i1", c5_u, 30)),
    "temporalCounter_i1");
  c5_i_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(
    "dataWrittenToVector", c5_u, 31)), "dataWrittenToVector", c5_bv0);
  for (c5_i0 = 0; c5_i0 < 27; c5_i0++) {
    chartInstance->c5_dataWrittenToVector[c5_i0] = c5_bv0[c5_i0];
  }

  sf_mex_assign(&chartInstance->c5_setSimStateSideEffectsInfo,
                c5_k_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(
    "setSimStateSideEffectsInfo", c5_u, 32)), "setSimStateSideEffectsInfo"),
                true);
  sf_mex_destroy(&c5_u);
  chartInstance->c5_doSetSimStateSideEffects = 1U;
  c5_update_debugger_state_c5_kaiguangai1108(chartInstance);
  sf_mex_destroy(&c5_st);
}

static void c5_set_sim_state_side_effects_c5_kaiguangai1108
  (SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  if (chartInstance->c5_doSetSimStateSideEffects != 0) {
    if ((*chartInstance->c5_is_zidong == c5_IN_yanchishijian1) && (sf_mex_sub
         (chartInstance->c5_setSimStateSideEffectsInfo,
          "setSimStateSideEffectsInfo", 1, 44) == 0.0)) {
      *chartInstance->c5_temporalCounter_i1 = 0U;
    }

    if ((*chartInstance->c5_is_zidong == c5_IN_yanchishijian2) && (sf_mex_sub
         (chartInstance->c5_setSimStateSideEffectsInfo,
          "setSimStateSideEffectsInfo", 1, 45) == 0.0)) {
      *chartInstance->c5_temporalCounter_i1 = 0U;
    }

    if ((*chartInstance->c5_is_zidong == c5_IN_yanchishijian3) && (sf_mex_sub
         (chartInstance->c5_setSimStateSideEffectsInfo,
          "setSimStateSideEffectsInfo", 1, 46) == 0.0)) {
      *chartInstance->c5_temporalCounter_i1 = 0U;
    }

    if ((*chartInstance->c5_is_zidong == c5_IN_yanchishijian4) && (sf_mex_sub
         (chartInstance->c5_setSimStateSideEffectsInfo,
          "setSimStateSideEffectsInfo", 1, 47) == 0.0)) {
      *chartInstance->c5_temporalCounter_i1 = 0U;
    }

    if ((*chartInstance->c5_is_zidong == c5_IN_yanchishijian5) && (sf_mex_sub
         (chartInstance->c5_setSimStateSideEffectsInfo,
          "setSimStateSideEffectsInfo", 1, 48) == 0.0)) {
      *chartInstance->c5_temporalCounter_i1 = 0U;
    }

    if ((*chartInstance->c5_is_zidong == c5_IN_yanchishijian6) && (sf_mex_sub
         (chartInstance->c5_setSimStateSideEffectsInfo,
          "setSimStateSideEffectsInfo", 1, 49) == 0.0)) {
      *chartInstance->c5_temporalCounter_i1 = 0U;
    }

    chartInstance->c5_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c5_kaiguangai1108(SFc5_kaiguangai1108InstanceStruct
  *chartInstance)
{
  sf_mex_destroy(&chartInstance->c5_setSimStateSideEffectsInfo);
}

static void sf_gateway_c5_kaiguangai1108(SFc5_kaiguangai1108InstanceStruct
  *chartInstance)
{
  uint32_T c5_debug_family_var_map[2];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 0.0;
  c5_set_sim_state_side_effects_c5_kaiguangai1108(chartInstance);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 4U, *chartInstance->c5_sfEvent);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_jieshu, 24U, 1U, 0U,
                        *chartInstance->c5_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_shedingcishu, 23U, 1U, 0U,
                        *chartInstance->c5_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_t11, 22U, 1U, 0U,
                        *chartInstance->c5_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_t9, 21U, 1U, 0U,
                        *chartInstance->c5_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_t7, 20U, 1U, 0U,
                        *chartInstance->c5_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_t5, 19U, 1U, 0U,
                        *chartInstance->c5_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_t3, 18U, 1U, 0U,
                        *chartInstance->c5_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_t1, 17U, 1U, 0U,
                        *chartInstance->c5_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_jsdw, 16U, 1U, 0U,
                        *chartInstance->c5_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_skdw, 15U, 1U, 0U,
                        *chartInstance->c5_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_yjdw, 14U, 1U, 0U,
                        *chartInstance->c5_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_sddw, 13U, 1U, 0U,
                        *chartInstance->c5_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_gghc, 12U, 1U, 0U,
                        *chartInstance->c5_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_kghc, 11U, 1U, 0U,
                        *chartInstance->c5_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_ggdw2, 10U, 1U, 0U,
                        *chartInstance->c5_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_ggdw1, 9U, 1U, 0U,
                        *chartInstance->c5_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_kgdw2, 8U, 1U, 0U,
                        *chartInstance->c5_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_kgdw1, 7U, 1U, 0U,
                        *chartInstance->c5_sfEvent, false);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c5_b_start, 6U, 1U, 0U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_sfEvent = CALL_EVENT;
  if (*chartInstance->c5_temporalCounter_i1 < 511U) {
    (*chartInstance->c5_temporalCounter_i1)++;
  }

  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 4U, *chartInstance->c5_sfEvent);
  if (*chartInstance->c5_is_active_c5_kaiguangai1108 == 0U) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 4U, *chartInstance->c5_sfEvent);
    *chartInstance->c5_is_active_c5_kaiguangai1108 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, *chartInstance->c5_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 60U, *chartInstance->c5_sfEvent);
    *chartInstance->c5_is_c5_kaiguangai1108 = c5_IN_zidong;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c5_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 44U, *chartInstance->c5_sfEvent);
    *chartInstance->c5_is_zidong = c5_IN_start;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 32U, *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_d_debug_family_names,
      c5_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    *chartInstance->c5_yikaicishu = 0.0;
    chartInstance->c5_dataWrittenToVector[19U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c5_yikaicishu, 39U, 4U, 32U,
                          *chartInstance->c5_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
  } else {
    c5_zidong(chartInstance);
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, *chartInstance->c5_sfEvent);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_kaiguangai1108MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void mdl_start_c5_kaiguangai1108(SFc5_kaiguangai1108InstanceStruct
  *chartInstance)
{
  c5_init_sf_message_store_memory(chartInstance);
}

static void initSimStructsc5_kaiguangai1108(SFc5_kaiguangai1108InstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c5_zidong(SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c5_debug_family_var_map[3];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 1.0;
  real_T c5_b_nargin = 0.0;
  boolean_T c5_out;
  uint32_T c5_b_debug_family_var_map[2];
  real_T c5_b_nargout = 1.0;
  real_T c5_c_nargin = 0.0;
  boolean_T c5_b_out;
  real_T c5_c_nargout = 0.0;
  real_T c5_d_nargin = 0.0;
  real_T c5_d_nargout = 1.0;
  boolean_T c5_c_out;
  real_T c5_e_nargin = 0.0;
  real_T c5_e_nargout = 0.0;
  real_T c5_f_nargin = 0.0;
  real_T c5_f_nargout = 0.0;
  real_T c5_g_nargin = 0.0;
  real_T c5_g_nargout = 0.0;
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U, *chartInstance->c5_sfEvent);
  switch (*chartInstance->c5_is_zidong) {
   case c5_IN_chushihua:
    CV_STATE_EVAL(0, 0, 1);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 38U,
                 *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_xb_debug_family_names,
      c5_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_out, 2U, c5_b_sf_marshallOut,
      c5_b_sf_marshallIn);
    if (CV_EML_COND(38, 0, 0, CV_RELATIONAL_EVAL(5U, 38U, 0, (real_T)
          *chartInstance->c5_b_start, 1.0, -1, 0U, (int32_T)
          *chartInstance->c5_b_start)) && CV_EML_COND(38, 0, 1,
         CV_RELATIONAL_EVAL(5U, 38U, 1, *chartInstance->c5_ggdw1, 1.0, -1, 0U,
                            *chartInstance->c5_ggdw1 == 1.0)) && CV_EML_COND(38,
         0, 2, CV_RELATIONAL_EVAL(5U, 38U, 2, *chartInstance->c5_ggdw2, 1.0, -1,
          0U, *chartInstance->c5_ggdw2 == 1.0)) && CV_EML_COND(38, 0, 3,
         CV_RELATIONAL_EVAL(5U, 38U, 3, *chartInstance->c5_yjdw, 1.0, -1, 0U,
                            *chartInstance->c5_yjdw == 1.0)) && CV_EML_COND(38,
         0, 4, CV_RELATIONAL_EVAL(5U, 38U, 4, *chartInstance->c5_sddw, 1.0, -1,
          0U, *chartInstance->c5_sddw == 1.0))) {
      CV_EML_MCDC(38, 0, 0, true);
      CV_EML_IF(38, 0, 0, true);
      c5_out = true;
    } else {
      CV_EML_MCDC(38, 0, 0, false);
      CV_EML_IF(38, 0, 0, false);
      c5_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c5_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 38U, *chartInstance->c5_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c5_sfEvent);
      *chartInstance->c5_is_zidong = c5_IN_on1;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c5_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_b_debug_family_names,
        c5_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_f_nargin, 0U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_f_nargout, 1U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      *chartInstance->c5_skhx = 1.0;
      chartInstance->c5_dataWrittenToVector[0U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c5_skhx, 25U, 4U, 6U,
                            *chartInstance->c5_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                   *chartInstance->c5_sfEvent);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, *chartInstance->c5_sfEvent);
    break;

   case c5_IN_guangaishijian:
    CV_STATE_EVAL(0, 0, 2);
    c5_guangaishijian(chartInstance);
    break;

   case c5_IN_jiesuoshijian:
    CV_STATE_EVAL(0, 0, 3);
    c5_jiesuoshijian(chartInstance);
    break;

   case c5_IN_kaigaishijian:
    CV_STATE_EVAL(0, 0, 4);
    c5_kaigaishijian(chartInstance);
    break;

   case c5_IN_off:
    CV_STATE_EVAL(0, 0, 5);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 39U, *chartInstance->c5_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c5_sfEvent);
    *chartInstance->c5_is_zidong = c5_IN_on7;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 22U, *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_t_debug_family_names,
      c5_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    if (!chartInstance->c5_dataWrittenToVector[19U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(39U, 4U, 22U, *chartInstance->c5_sfEvent,
        false);
    }

    (*chartInstance->c5_yikaicishu)++;
    chartInstance->c5_dataWrittenToVector[19U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c5_yikaicishu, 39U, 4U, 22U,
                          *chartInstance->c5_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 5U, *chartInstance->c5_sfEvent);
    break;

   case c5_IN_on1:
    CV_STATE_EVAL(0, 0, 6);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, *chartInstance->c5_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                 *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_yb_debug_family_names,
      c5_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_out, 2U, c5_b_sf_marshallOut,
      c5_b_sf_marshallIn);
    if (CV_EML_COND(1, 0, 0, CV_RELATIONAL_EVAL(5U, 1U, 0,
          *chartInstance->c5_jsdw, 0.0, -1, 0U, *chartInstance->c5_jsdw == 0.0))
        || CV_EML_COND(1, 0, 1, CV_RELATIONAL_EVAL(5U, 1U, 1,
          *chartInstance->c5_skdw, 0.0, -1, 0U, *chartInstance->c5_skdw == 0.0)))
    {
      CV_EML_MCDC(1, 0, 0, true);
      CV_EML_IF(1, 0, 0, true);
      c5_b_out = true;
    } else {
      CV_EML_MCDC(1, 0, 0, false);
      CV_EML_IF(1, 0, 0, false);
      c5_b_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c5_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, *chartInstance->c5_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c5_sfEvent);
      *chartInstance->c5_is_zidong = c5_IN_songkaishijian;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 25U, *chartInstance->c5_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_c_debug_family_names,
        c5_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_e_nargin, 0U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_e_nargout, 1U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      if (!chartInstance->c5_dataWrittenToVector[8U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(33U, 4U, 25U,
          *chartInstance->c5_sfEvent, false);
      }

      *chartInstance->c5_skt += 0.002;
      chartInstance->c5_dataWrittenToVector[8U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c5_skt, 33U, 4U, 25U,
                            *chartInstance->c5_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                   *chartInstance->c5_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_cc_debug_family_names,
        c5_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargin, 0U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargout, 1U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_out, 2U, c5_b_sf_marshallOut,
        c5_b_sf_marshallIn);
      if (CV_EML_COND(2, 0, 0, CV_RELATIONAL_EVAL(5U, 2U, 0,
            *chartInstance->c5_jsdw, 1.0, -1, 0U, *chartInstance->c5_jsdw == 1.0))
          && CV_EML_COND(2, 0, 1, CV_RELATIONAL_EVAL(5U, 2U, 1,
            *chartInstance->c5_skdw, 1.0, -1, 0U, *chartInstance->c5_skdw == 1.0)))
      {
        CV_EML_MCDC(2, 0, 0, true);
        CV_EML_IF(2, 0, 0, true);
        c5_c_out = true;
      } else {
        CV_EML_MCDC(2, 0, 0, false);
        CV_EML_IF(2, 0, 0, false);
        c5_c_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c5_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, *chartInstance->c5_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c5_sfEvent);
        *chartInstance->c5_is_zidong = c5_IN_tguiling;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 40U, *chartInstance->c5_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_i_debug_family_names,
          c5_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_g_nargin, 0U, c5_sf_marshallOut,
          c5_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_g_nargout, 1U,
          c5_sf_marshallOut, c5_sf_marshallIn);
        *chartInstance->c5_t = 0.0;
        chartInstance->c5_dataWrittenToVector[14U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c5_t, 0U, 4U, 40U,
                              *chartInstance->c5_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 6U,
                     *chartInstance->c5_sfEvent);
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 6U, *chartInstance->c5_sfEvent);
    break;

   case c5_IN_on10:
    CV_STATE_EVAL(0, 0, 7);
    c5_on10(chartInstance);
    break;

   case c5_IN_on11:
    CV_STATE_EVAL(0, 0, 8);
    c5_on11(chartInstance);
    break;

   case c5_IN_on12:
    CV_STATE_EVAL(0, 0, 9);
    c5_on12(chartInstance);
    break;

   case c5_IN_on13:
    CV_STATE_EVAL(0, 0, 10);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 10U,
                 *chartInstance->c5_sfEvent);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 10U, *chartInstance->c5_sfEvent);
    break;

   case c5_IN_on14:
    CV_STATE_EVAL(0, 0, 11);
    c5_on14(chartInstance);
    break;

   case c5_IN_on15:
    CV_STATE_EVAL(0, 0, 12);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 12U,
                 *chartInstance->c5_sfEvent);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 12U, *chartInstance->c5_sfEvent);
    break;

   case c5_IN_on16:
    CV_STATE_EVAL(0, 0, 13);
    c5_on16(chartInstance);
    break;

   case c5_IN_on17:
    CV_STATE_EVAL(0, 0, 14);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 14U,
                 *chartInstance->c5_sfEvent);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 14U, *chartInstance->c5_sfEvent);
    break;

   case c5_IN_on18:
    CV_STATE_EVAL(0, 0, 15);
    c5_on18(chartInstance);
    break;

   case c5_IN_on19:
    CV_STATE_EVAL(0, 0, 16);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 16U,
                 *chartInstance->c5_sfEvent);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 16U, *chartInstance->c5_sfEvent);
    break;

   case c5_IN_on2:
    CV_STATE_EVAL(0, 0, 17);
    c5_on2(chartInstance);
    break;

   case c5_IN_on3:
    CV_STATE_EVAL(0, 0, 18);
    c5_on3(chartInstance);
    break;

   case c5_IN_on4:
    CV_STATE_EVAL(0, 0, 19);
    c5_on4(chartInstance);
    break;

   case c5_IN_on5:
    CV_STATE_EVAL(0, 0, 20);
    c5_on5(chartInstance);
    break;

   case c5_IN_on6:
    CV_STATE_EVAL(0, 0, 21);
    c5_on6(chartInstance);
    break;

   case c5_IN_on7:
    CV_STATE_EVAL(0, 0, 22);
    c5_on7(chartInstance);
    break;

   case c5_IN_on8:
    CV_STATE_EVAL(0, 0, 23);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 23U,
                 *chartInstance->c5_sfEvent);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 23U, *chartInstance->c5_sfEvent);
    break;

   case c5_IN_on9:
    CV_STATE_EVAL(0, 0, 24);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 24U,
                 *chartInstance->c5_sfEvent);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 24U, *chartInstance->c5_sfEvent);
    break;

   case c5_IN_songkaishijian:
    CV_STATE_EVAL(0, 0, 25);
    c5_songkaishijian(chartInstance);
    break;

   case c5_IN_songkaishijian1:
    CV_STATE_EVAL(0, 0, 26);
    c5_songkaishijian1(chartInstance);
    break;

   case c5_IN_songkaishijian2:
    CV_STATE_EVAL(0, 0, 27);
    c5_songkaishijian2(chartInstance);
    break;

   case c5_IN_songkaishijian3:
    CV_STATE_EVAL(0, 0, 28);
    c5_songkaishijian3(chartInstance);
    break;

   case c5_IN_songkaishijian4:
    CV_STATE_EVAL(0, 0, 29);
    c5_songkaishijian4(chartInstance);
    break;

   case c5_IN_songkaishijian5:
    CV_STATE_EVAL(0, 0, 30);
    c5_songkaishijian5(chartInstance);
    break;

   case c5_IN_songkaishijian6:
    CV_STATE_EVAL(0, 0, 31);
    c5_songkaishijian6(chartInstance);
    break;

   case c5_IN_start:
    CV_STATE_EVAL(0, 0, 32);
    c5_start(chartInstance);
    break;

   case c5_IN_stop:
    CV_STATE_EVAL(0, 0, 33);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 33U,
                 *chartInstance->c5_sfEvent);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 33U, *chartInstance->c5_sfEvent);
    break;

   case c5_IN_suodingshijian:
    CV_STATE_EVAL(0, 0, 34);
    c5_suodingshijian(chartInstance);
    break;

   case c5_IN_t10guiling:
    CV_STATE_EVAL(0, 0, 35);
    c5_t10guiling(chartInstance);
    break;

   case c5_IN_t2guiling:
    CV_STATE_EVAL(0, 0, 36);
    c5_t2guiling(chartInstance);
    break;

   case c5_IN_t4guiling:
    CV_STATE_EVAL(0, 0, 37);
    c5_t4guiling(chartInstance);
    break;

   case c5_IN_t6guiling:
    CV_STATE_EVAL(0, 0, 38);
    c5_t6guiling(chartInstance);
    break;

   case c5_IN_t8guiling:
    CV_STATE_EVAL(0, 0, 39);
    c5_t8guiling(chartInstance);
    break;

   case c5_IN_tguiling:
    CV_STATE_EVAL(0, 0, 40);
    c5_tguiling(chartInstance);
    break;

   case c5_IN_yajinshijian:
    CV_STATE_EVAL(0, 0, 41);
    c5_yajinshijian(chartInstance);
    break;

   case c5_IN_yanchishijian1:
    CV_STATE_EVAL(0, 0, 42);
    c5_yanchishijian1(chartInstance);
    break;

   case c5_IN_yanchishijian2:
    CV_STATE_EVAL(0, 0, 43);
    c5_yanchishijian2(chartInstance);
    break;

   case c5_IN_yanchishijian3:
    CV_STATE_EVAL(0, 0, 44);
    c5_yanchishijian3(chartInstance);
    break;

   case c5_IN_yanchishijian4:
    CV_STATE_EVAL(0, 0, 45);
    c5_yanchishijian4(chartInstance);
    break;

   case c5_IN_yanchishijian5:
    CV_STATE_EVAL(0, 0, 46);
    c5_yanchishijian5(chartInstance);
    break;

   case c5_IN_yanchishijian6:
    CV_STATE_EVAL(0, 0, 47);
    c5_yanchishijian6(chartInstance);
    break;

   default:
    CV_STATE_EVAL(0, 0, 0);

    /* Unreachable state, for coverage only */
    *chartInstance->c5_is_zidong = c5_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c5_sfEvent);
    break;
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, *chartInstance->c5_sfEvent);
}

static void c5_enter_atomic_chushihua(SFc5_kaiguangai1108InstanceStruct
  *chartInstance)
{
  uint32_T c5_debug_family_var_map[2];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 0.0;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_debug_family_names,
    c5_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 0U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 1U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  *chartInstance->c5_skhx = 0.0;
  chartInstance->c5_dataWrittenToVector[0U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_skhx, 25U, 4U, 1U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_kghx = 0.0;
  chartInstance->c5_dataWrittenToVector[1U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_kghx, 26U, 4U, 1U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_kgzhiling1 = 0.0;
  chartInstance->c5_dataWrittenToVector[2U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_kgzhiling1, 27U, 4U, 1U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_kgzhiling2 = 0.0;
  chartInstance->c5_dataWrittenToVector[3U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_kgzhiling2, 28U, 4U, 1U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_yjhx = 0.0;
  chartInstance->c5_dataWrittenToVector[4U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_yjhx, 29U, 4U, 1U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_gghx = 0.0;
  chartInstance->c5_dataWrittenToVector[5U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_gghx, 30U, 4U, 1U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_ggzhiling1 = 0.0;
  chartInstance->c5_dataWrittenToVector[6U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_ggzhiling1, 31U, 4U, 1U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_ggzhiling2 = 0.0;
  chartInstance->c5_dataWrittenToVector[7U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_ggzhiling2, 32U, 4U, 1U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_skt = 0.0;
  chartInstance->c5_dataWrittenToVector[8U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_skt, 33U, 4U, 1U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_kgt = 0.0;
  chartInstance->c5_dataWrittenToVector[9U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_kgt, 34U, 4U, 1U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_sdt = 0.0;
  chartInstance->c5_dataWrittenToVector[10U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_sdt, 35U, 4U, 1U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_jst = 0.0;
  chartInstance->c5_dataWrittenToVector[11U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_jst, 36U, 4U, 1U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_ggt = 0.0;
  chartInstance->c5_dataWrittenToVector[12U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_ggt, 37U, 4U, 1U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_yjt = 0.0;
  chartInstance->c5_dataWrittenToVector[13U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_yjt, 38U, 4U, 1U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_skyichang = 0.0;
  chartInstance->c5_dataWrittenToVector[20U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_skyichang, 40U, 4U, 1U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_kgyichang = 0.0;
  chartInstance->c5_dataWrittenToVector[21U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_kgyichang, 41U, 4U, 1U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_sdyichang = 0.0;
  chartInstance->c5_dataWrittenToVector[22U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_sdyichang, 42U, 4U, 1U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_jsyichang = 0.0;
  chartInstance->c5_dataWrittenToVector[23U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_jsyichang, 43U, 4U, 1U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_ggyichang = 0.0;
  chartInstance->c5_dataWrittenToVector[25U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_ggyichang, 44U, 4U, 1U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_yjyichang = 0.0;
  chartInstance->c5_dataWrittenToVector[26U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_yjyichang, 45U, 4U, 1U,
                        *chartInstance->c5_sfEvent, false);
  _SFD_SYMBOL_SCOPE_POP();
}

static void c5_songkaishijian(SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c5_debug_family_var_map[3];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 1.0;
  boolean_T c5_out;
  real_T c5_b_nargin = 0.0;
  real_T c5_c_nargin = 0.0;
  real_T c5_b_nargout = 1.0;
  real_T c5_c_nargout = 1.0;
  boolean_T c5_b_out;
  boolean_T c5_c_out;
  uint32_T c5_b_debug_family_var_map[2];
  real_T c5_d_nargin = 0.0;
  real_T c5_e_nargin = 0.0;
  real_T c5_d_nargout = 0.0;
  real_T c5_e_nargout = 1.0;
  boolean_T c5_d_out;
  real_T c5_f_nargin = 0.0;
  real_T c5_f_nargout = 0.0;
  real_T c5_g_nargin = 0.0;
  real_T c5_g_nargout = 0.0;
  boolean_T guard1 = false;
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 49U, *chartInstance->c5_sfEvent);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 50U, *chartInstance->c5_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_bc_debug_family_names,
    c5_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 0U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 1U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_out, 2U, c5_b_sf_marshallOut,
    c5_b_sf_marshallIn);
  if (!chartInstance->c5_dataWrittenToVector[8U]) {
    _SFD_DATA_READ_BEFORE_WRITE_ERROR(33U, 5U, 50U, *chartInstance->c5_sfEvent,
      false);
  }

  c5_out = CV_EML_IF(50, 0, 0, CV_RELATIONAL_EVAL(5U, 50U, 0,
    *chartInstance->c5_skt, 2.0, -1, 3U, *chartInstance->c5_skt <= 2.0));
  _SFD_SYMBOL_SCOPE_POP();
  guard1 = false;
  if (c5_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 50U, *chartInstance->c5_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                 *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_yb_debug_family_names,
      c5_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_out, 2U, c5_b_sf_marshallOut,
      c5_b_sf_marshallIn);
    if (CV_EML_COND(1, 0, 0, CV_RELATIONAL_EVAL(5U, 1U, 0,
          *chartInstance->c5_jsdw, 0.0, -1, 0U, *chartInstance->c5_jsdw == 0.0))
        || CV_EML_COND(1, 0, 1, CV_RELATIONAL_EVAL(5U, 1U, 1,
          *chartInstance->c5_skdw, 0.0, -1, 0U, *chartInstance->c5_skdw == 0.0)))
    {
      CV_EML_MCDC(1, 0, 0, true);
      CV_EML_IF(1, 0, 0, true);
      c5_c_out = true;
    } else {
      CV_EML_MCDC(1, 0, 0, false);
      CV_EML_IF(1, 0, 0, false);
      c5_c_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c5_c_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, *chartInstance->c5_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 25U, *chartInstance->c5_sfEvent);
      *chartInstance->c5_is_zidong = c5_IN_songkaishijian;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 25U, *chartInstance->c5_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_c_debug_family_names,
        c5_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_f_nargin, 0U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_f_nargout, 1U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      if (!chartInstance->c5_dataWrittenToVector[8U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(33U, 4U, 25U,
          *chartInstance->c5_sfEvent, false);
      }

      *chartInstance->c5_skt += 0.002;
      chartInstance->c5_dataWrittenToVector[8U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c5_skt, 33U, 4U, 25U,
                            *chartInstance->c5_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                   *chartInstance->c5_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_cc_debug_family_names,
        c5_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_e_nargin, 0U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_e_nargout, 1U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_out, 2U, c5_b_sf_marshallOut,
        c5_b_sf_marshallIn);
      if (CV_EML_COND(2, 0, 0, CV_RELATIONAL_EVAL(5U, 2U, 0,
            *chartInstance->c5_jsdw, 1.0, -1, 0U, *chartInstance->c5_jsdw == 1.0))
          && CV_EML_COND(2, 0, 1, CV_RELATIONAL_EVAL(5U, 2U, 1,
            *chartInstance->c5_skdw, 1.0, -1, 0U, *chartInstance->c5_skdw == 1.0)))
      {
        CV_EML_MCDC(2, 0, 0, true);
        CV_EML_IF(2, 0, 0, true);
        c5_d_out = true;
      } else {
        CV_EML_MCDC(2, 0, 0, false);
        CV_EML_IF(2, 0, 0, false);
        c5_d_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c5_d_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, *chartInstance->c5_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 25U, *chartInstance->c5_sfEvent);
        *chartInstance->c5_is_zidong = c5_IN_tguiling;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 40U, *chartInstance->c5_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_i_debug_family_names,
          c5_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_g_nargin, 0U, c5_sf_marshallOut,
          c5_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_g_nargout, 1U,
          c5_sf_marshallOut, c5_sf_marshallIn);
        *chartInstance->c5_t = 0.0;
        chartInstance->c5_dataWrittenToVector[14U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c5_t, 0U, 4U, 40U,
                              *chartInstance->c5_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        guard1 = true;
      }
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 51U,
                 *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_ec_debug_family_names,
      c5_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_out, 2U, c5_b_sf_marshallOut,
      c5_b_sf_marshallIn);
    if (!chartInstance->c5_dataWrittenToVector[8U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(33U, 5U, 51U, *chartInstance->c5_sfEvent,
        false);
    }

    c5_b_out = CV_EML_IF(51, 0, 0, CV_RELATIONAL_EVAL(5U, 51U, 0,
      *chartInstance->c5_skt, 2.0, -1, 4U, *chartInstance->c5_skt > 2.0));
    _SFD_SYMBOL_SCOPE_POP();
    if (c5_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 51U, *chartInstance->c5_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 25U, *chartInstance->c5_sfEvent);
      *chartInstance->c5_is_zidong = c5_IN_on10;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c5_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_e_debug_family_names,
        c5_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargin, 0U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargout, 1U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      *chartInstance->c5_skyichang = 1.0;
      chartInstance->c5_dataWrittenToVector[20U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c5_skyichang, 40U, 4U, 7U,
                            *chartInstance->c5_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 25U,
                   *chartInstance->c5_sfEvent);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 25U, *chartInstance->c5_sfEvent);
}

static void c5_start(SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c5_debug_family_var_map[3];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 1.0;
  boolean_T c5_out;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 43U, *chartInstance->c5_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_ac_debug_family_names,
    c5_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 0U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 1U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_out, 2U, c5_b_sf_marshallOut,
    c5_b_sf_marshallIn);
  c5_out = CV_EML_IF(43, 0, 0, CV_RELATIONAL_EVAL(5U, 43U, 0, (real_T)
    *chartInstance->c5_b_start, 1.0, -1, 0U, (int32_T)*chartInstance->c5_b_start));
  _SFD_SYMBOL_SCOPE_POP();
  if (c5_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 43U, *chartInstance->c5_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 32U, *chartInstance->c5_sfEvent);
    *chartInstance->c5_is_zidong = c5_IN_chushihua;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c5_sfEvent);
    c5_enter_atomic_chushihua(chartInstance);
  } else {
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 32U,
                 *chartInstance->c5_sfEvent);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 32U, *chartInstance->c5_sfEvent);
}

static void c5_on10(SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c5_debug_family_var_map[2];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 0.0;
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 59U, *chartInstance->c5_sfEvent);
  _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c5_sfEvent);
  *chartInstance->c5_is_zidong = c5_IN_songkaishijian1;
  _SFD_CS_CALL(STATE_ACTIVE_TAG, 26U, *chartInstance->c5_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_f_debug_family_names,
    c5_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 0U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 1U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  if (!chartInstance->c5_dataWrittenToVector[8U]) {
    _SFD_DATA_READ_BEFORE_WRITE_ERROR(33U, 4U, 26U, *chartInstance->c5_sfEvent,
      false);
  }

  *chartInstance->c5_skt += 0.002;
  chartInstance->c5_dataWrittenToVector[8U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_skt, 33U, 4U, 26U,
                        *chartInstance->c5_sfEvent, false);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 7U, *chartInstance->c5_sfEvent);
}

static void c5_songkaishijian1(SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c5_debug_family_var_map[3];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 1.0;
  boolean_T c5_out;
  real_T c5_b_nargin = 0.0;
  real_T c5_b_nargout = 1.0;
  boolean_T c5_b_out;
  uint32_T c5_b_debug_family_var_map[2];
  real_T c5_c_nargin = 0.0;
  real_T c5_c_nargout = 0.0;
  real_T c5_d_nargin = 0.0;
  real_T c5_d_nargout = 0.0;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 52U, *chartInstance->c5_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_wb_debug_family_names,
    c5_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 0U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 1U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_out, 2U, c5_b_sf_marshallOut,
    c5_b_sf_marshallIn);
  if (CV_EML_COND(52, 0, 0, CV_RELATIONAL_EVAL(5U, 52U, 0,
        *chartInstance->c5_jsdw, 0.0, -1, 0U, *chartInstance->c5_jsdw == 0.0)) ||
      CV_EML_COND(52, 0, 1, CV_RELATIONAL_EVAL(5U, 52U, 1,
        *chartInstance->c5_skdw, 0.0, -1, 0U, *chartInstance->c5_skdw == 0.0)))
  {
    CV_EML_MCDC(52, 0, 0, true);
    CV_EML_IF(52, 0, 0, true);
    c5_out = true;
  } else {
    CV_EML_MCDC(52, 0, 0, false);
    CV_EML_IF(52, 0, 0, false);
    c5_out = false;
  }

  _SFD_SYMBOL_SCOPE_POP();
  if (c5_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 52U, *chartInstance->c5_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 26U, *chartInstance->c5_sfEvent);
    *chartInstance->c5_is_zidong = c5_IN_songkaishijian1;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 26U, *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_f_debug_family_names,
      c5_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    if (!chartInstance->c5_dataWrittenToVector[8U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(33U, 4U, 26U, *chartInstance->c5_sfEvent,
        false);
    }

    *chartInstance->c5_skt += 0.002;
    chartInstance->c5_dataWrittenToVector[8U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c5_skt, 33U, 4U, 26U,
                          *chartInstance->c5_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 53U,
                 *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_dc_debug_family_names,
      c5_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_out, 2U, c5_b_sf_marshallOut,
      c5_b_sf_marshallIn);
    if (CV_EML_COND(53, 0, 0, CV_RELATIONAL_EVAL(5U, 53U, 0,
          *chartInstance->c5_jsdw, 1.0, -1, 0U, *chartInstance->c5_jsdw == 1.0))
        && CV_EML_COND(53, 0, 1, CV_RELATIONAL_EVAL(5U, 53U, 1,
          *chartInstance->c5_skdw, 1.0, -1, 0U, *chartInstance->c5_skdw == 1.0)))
    {
      CV_EML_MCDC(53, 0, 0, true);
      CV_EML_IF(53, 0, 0, true);
      c5_b_out = true;
    } else {
      CV_EML_MCDC(53, 0, 0, false);
      CV_EML_IF(53, 0, 0, false);
      c5_b_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c5_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 53U, *chartInstance->c5_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 26U, *chartInstance->c5_sfEvent);
      *chartInstance->c5_is_zidong = c5_IN_on8;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 23U, *chartInstance->c5_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_g_debug_family_names,
        c5_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargin, 0U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargout, 1U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      *chartInstance->c5_skhx = 0.0;
      chartInstance->c5_dataWrittenToVector[0U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c5_skhx, 25U, 4U, 23U,
                            *chartInstance->c5_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 26U,
                   *chartInstance->c5_sfEvent);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 26U, *chartInstance->c5_sfEvent);
}

static void c5_yanchishijian1(SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c5_debug_family_var_map[3];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 1.0;
  boolean_T c5_out;
  real_T c5_b_nargin = 0.0;
  real_T c5_b_nargout = 1.0;
  boolean_T c5_b_out;
  real_T c5_c_nargin = 0.0;
  real_T c5_c_nargout = 1.0;
  boolean_T c5_c_out;
  uint32_T c5_b_debug_family_var_map[2];
  real_T c5_d_nargin = 0.0;
  real_T c5_d_nargout = 0.0;
  boolean_T guard1 = false;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U, *chartInstance->c5_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_gc_debug_family_names,
    c5_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 0U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 1U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_out, 2U, c5_b_sf_marshallOut,
    c5_b_sf_marshallIn);
  c5_out = CV_EML_IF(5, 0, 0, *chartInstance->c5_temporalCounter_i1 >= 500);
  _SFD_SYMBOL_SCOPE_POP();
  guard1 = false;
  if (c5_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, *chartInstance->c5_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U,
                 *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_fc_debug_family_names,
      c5_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_out, 2U, c5_b_sf_marshallOut,
      c5_b_sf_marshallIn);
    if (!chartInstance->c5_dataWrittenToVector[14U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(0U, 5U, 4U, *chartInstance->c5_sfEvent,
        false);
    }

    c5_b_out = CV_EML_IF(4, 0, 0, CV_RELATIONAL_EVAL(5U, 4U, 0,
      *chartInstance->c5_t, *chartInstance->c5_t1, -1, 2U, *chartInstance->c5_t <
      *chartInstance->c5_t1));
    _SFD_SYMBOL_SCOPE_POP();
    if (c5_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, *chartInstance->c5_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 42U, *chartInstance->c5_sfEvent);
      *chartInstance->c5_is_zidong = c5_IN_yanchishijian1;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 42U, *chartInstance->c5_sfEvent);
      *chartInstance->c5_temporalCounter_i1 = 0U;
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_h_debug_family_names,
        c5_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargin, 0U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargout, 1U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      if (!chartInstance->c5_dataWrittenToVector[14U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(0U, 4U, 42U,
          *chartInstance->c5_sfEvent, false);
      }

      (*chartInstance->c5_t)++;
      chartInstance->c5_dataWrittenToVector[14U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c5_t, 0U, 4U, 42U,
                            *chartInstance->c5_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 18U,
                   *chartInstance->c5_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_hc_debug_family_names,
        c5_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargin, 0U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargout, 1U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_out, 2U, c5_b_sf_marshallOut,
        c5_b_sf_marshallIn);
      if (!chartInstance->c5_dataWrittenToVector[14U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(0U, 5U, 18U,
          *chartInstance->c5_sfEvent, false);
      }

      c5_c_out = CV_EML_IF(18, 0, 0, CV_RELATIONAL_EVAL(5U, 18U, 0,
        *chartInstance->c5_t, *chartInstance->c5_t1, -1, 5U,
        *chartInstance->c5_t >= *chartInstance->c5_t1));
      _SFD_SYMBOL_SCOPE_POP();
      if (c5_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 18U, *chartInstance->c5_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 42U, *chartInstance->c5_sfEvent);
        *chartInstance->c5_is_zidong = c5_IN_on2;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 17U, *chartInstance->c5_sfEvent);
        c5_enter_atomic_on2(chartInstance);
      } else {
        guard1 = true;
      }
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 42U,
                 *chartInstance->c5_sfEvent);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 42U, *chartInstance->c5_sfEvent);
}

static void c5_tguiling(SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c5_debug_family_var_map[3];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 1.0;
  boolean_T c5_out;
  real_T c5_b_nargin = 0.0;
  real_T c5_b_nargout = 1.0;
  boolean_T c5_b_out;
  uint32_T c5_b_debug_family_var_map[2];
  real_T c5_c_nargin = 0.0;
  real_T c5_c_nargout = 0.0;
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, *chartInstance->c5_sfEvent);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U, *chartInstance->c5_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_fc_debug_family_names,
    c5_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 0U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 1U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_out, 2U, c5_b_sf_marshallOut,
    c5_b_sf_marshallIn);
  if (!chartInstance->c5_dataWrittenToVector[14U]) {
    _SFD_DATA_READ_BEFORE_WRITE_ERROR(0U, 5U, 4U, *chartInstance->c5_sfEvent,
      false);
  }

  c5_out = CV_EML_IF(4, 0, 0, CV_RELATIONAL_EVAL(5U, 4U, 0, *chartInstance->c5_t,
    *chartInstance->c5_t1, -1, 2U, *chartInstance->c5_t < *chartInstance->c5_t1));
  _SFD_SYMBOL_SCOPE_POP();
  if (c5_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, *chartInstance->c5_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 40U, *chartInstance->c5_sfEvent);
    *chartInstance->c5_is_zidong = c5_IN_yanchishijian1;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 42U, *chartInstance->c5_sfEvent);
    *chartInstance->c5_temporalCounter_i1 = 0U;
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_h_debug_family_names,
      c5_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    if (!chartInstance->c5_dataWrittenToVector[14U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(0U, 4U, 42U, *chartInstance->c5_sfEvent,
        false);
    }

    (*chartInstance->c5_t)++;
    chartInstance->c5_dataWrittenToVector[14U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c5_t, 0U, 4U, 42U,
                          *chartInstance->c5_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 18U,
                 *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_hc_debug_family_names,
      c5_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_out, 2U, c5_b_sf_marshallOut,
      c5_b_sf_marshallIn);
    if (!chartInstance->c5_dataWrittenToVector[14U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(0U, 5U, 18U, *chartInstance->c5_sfEvent,
        false);
    }

    c5_b_out = CV_EML_IF(18, 0, 0, CV_RELATIONAL_EVAL(5U, 18U, 0,
      *chartInstance->c5_t, *chartInstance->c5_t1, -1, 5U, *chartInstance->c5_t >=
      *chartInstance->c5_t1));
    _SFD_SYMBOL_SCOPE_POP();
    if (c5_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 18U, *chartInstance->c5_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 40U, *chartInstance->c5_sfEvent);
      *chartInstance->c5_is_zidong = c5_IN_on2;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 17U, *chartInstance->c5_sfEvent);
      c5_enter_atomic_on2(chartInstance);
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 40U,
                   *chartInstance->c5_sfEvent);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 40U, *chartInstance->c5_sfEvent);
}

static void c5_enter_atomic_on2(SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c5_debug_family_var_map[2];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 0.0;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_j_debug_family_names,
    c5_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 0U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 1U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  *chartInstance->c5_skhx = 0.0;
  chartInstance->c5_dataWrittenToVector[0U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_skhx, 25U, 4U, 17U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_kghx = 1.0;
  chartInstance->c5_dataWrittenToVector[1U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_kghx, 26U, 4U, 17U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_kgzhiling1 = 1.0;
  chartInstance->c5_dataWrittenToVector[2U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_kgzhiling1, 27U, 4U, 17U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_kgzhiling2 = 1.0;
  chartInstance->c5_dataWrittenToVector[3U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_kgzhiling2, 28U, 4U, 17U,
                        *chartInstance->c5_sfEvent, false);
  _SFD_SYMBOL_SCOPE_POP();
}

static void c5_on2(SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c5_debug_family_var_map[3];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 1.0;
  boolean_T c5_out;
  real_T c5_b_nargin = 0.0;
  real_T c5_b_nargout = 1.0;
  boolean_T c5_b_out;
  uint32_T c5_b_debug_family_var_map[2];
  real_T c5_c_nargin = 0.0;
  real_T c5_c_nargout = 0.0;
  real_T c5_d_nargin = 0.0;
  real_T c5_d_nargout = 0.0;
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 11U, *chartInstance->c5_sfEvent);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 6U, *chartInstance->c5_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_kc_debug_family_names,
    c5_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 0U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 1U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_out, 2U, c5_b_sf_marshallOut,
    c5_b_sf_marshallIn);
  if (CV_EML_COND(6, 0, 0, CV_RELATIONAL_EVAL(5U, 6U, 0,
        *chartInstance->c5_kgdw1, 0.0, -1, 0U, *chartInstance->c5_kgdw1 == 0.0))
      || CV_EML_COND(6, 0, 1, CV_RELATIONAL_EVAL(5U, 6U, 1,
        *chartInstance->c5_kgdw2, 0.0, -1, 0U, *chartInstance->c5_kgdw2 == 0.0))
      || CV_EML_COND(6, 0, 2, CV_RELATIONAL_EVAL(5U, 6U, 2,
        *chartInstance->c5_jsdw, 0.0, -1, 0U, *chartInstance->c5_jsdw == 0.0)) ||
      CV_EML_COND(6, 0, 3, CV_RELATIONAL_EVAL(5U, 6U, 3, *chartInstance->c5_skdw,
        0.0, -1, 0U, *chartInstance->c5_skdw == 0.0))) {
    CV_EML_MCDC(6, 0, 0, true);
    CV_EML_IF(6, 0, 0, true);
    c5_out = true;
  } else {
    CV_EML_MCDC(6, 0, 0, false);
    CV_EML_IF(6, 0, 0, false);
    c5_out = false;
  }

  _SFD_SYMBOL_SCOPE_POP();
  if (c5_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, *chartInstance->c5_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 17U, *chartInstance->c5_sfEvent);
    *chartInstance->c5_is_zidong = c5_IN_kaigaishijian;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_k_debug_family_names,
      c5_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    if (!chartInstance->c5_dataWrittenToVector[9U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(34U, 4U, 4U, *chartInstance->c5_sfEvent,
        false);
    }

    *chartInstance->c5_kgt += 0.002;
    chartInstance->c5_dataWrittenToVector[9U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c5_kgt, 34U, 4U, 4U,
                          *chartInstance->c5_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 9U,
                 *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_mc_debug_family_names,
      c5_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_out, 2U, c5_b_sf_marshallOut,
      c5_b_sf_marshallIn);
    if (CV_EML_COND(9, 0, 0, CV_RELATIONAL_EVAL(5U, 9U, 0,
          *chartInstance->c5_kgdw1, 1.0, -1, 0U, *chartInstance->c5_kgdw1 == 1.0))
        && CV_EML_COND(9, 0, 1, CV_RELATIONAL_EVAL(5U, 9U, 1,
          *chartInstance->c5_kgdw2, 1.0, -1, 0U, *chartInstance->c5_kgdw2 == 1.0))
        && CV_EML_COND(9, 0, 2, CV_RELATIONAL_EVAL(5U, 9U, 2,
          *chartInstance->c5_jsdw, 1.0, -1, 0U, *chartInstance->c5_jsdw == 1.0))
        && CV_EML_COND(9, 0, 3, CV_RELATIONAL_EVAL(5U, 9U, 3,
          *chartInstance->c5_skdw, 1.0, -1, 0U, *chartInstance->c5_skdw == 1.0)))
    {
      CV_EML_MCDC(9, 0, 0, true);
      CV_EML_IF(9, 0, 0, true);
      c5_b_out = true;
    } else {
      CV_EML_MCDC(9, 0, 0, false);
      CV_EML_IF(9, 0, 0, false);
      c5_b_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c5_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 9U, *chartInstance->c5_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 17U, *chartInstance->c5_sfEvent);
      *chartInstance->c5_is_zidong = c5_IN_t2guiling;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 36U, *chartInstance->c5_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_q_debug_family_names,
        c5_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargin, 0U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargout, 1U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      *chartInstance->c5_t2 = 0.0;
      chartInstance->c5_dataWrittenToVector[15U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c5_t2, 2U, 4U, 36U,
                            *chartInstance->c5_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 17U,
                   *chartInstance->c5_sfEvent);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 17U, *chartInstance->c5_sfEvent);
}

static void c5_kaigaishijian(SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c5_debug_family_var_map[3];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 1.0;
  boolean_T c5_out;
  real_T c5_b_nargin = 0.0;
  real_T c5_b_nargout = 1.0;
  boolean_T c5_b_out;
  uint32_T c5_b_debug_family_var_map[2];
  real_T c5_c_nargin = 0.0;
  real_T c5_c_nargout = 0.0;
  real_T c5_d_nargin = 0.0;
  real_T c5_d_nargout = 1.0;
  boolean_T c5_c_out;
  real_T c5_e_nargin = 0.0;
  real_T c5_e_nargout = 1.0;
  boolean_T c5_d_out;
  real_T c5_f_nargin = 0.0;
  real_T c5_f_nargout = 0.0;
  real_T c5_g_nargin = 0.0;
  real_T c5_g_nargout = 0.0;
  boolean_T guard1 = false;
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 57U, *chartInstance->c5_sfEvent);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 58U, *chartInstance->c5_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_pc_debug_family_names,
    c5_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 0U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 1U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_out, 2U, c5_b_sf_marshallOut,
    c5_b_sf_marshallIn);
  if (!chartInstance->c5_dataWrittenToVector[9U]) {
    _SFD_DATA_READ_BEFORE_WRITE_ERROR(34U, 5U, 58U, *chartInstance->c5_sfEvent,
      false);
  }

  c5_out = CV_EML_IF(58, 0, 0, CV_RELATIONAL_EVAL(5U, 58U, 0,
    *chartInstance->c5_kgt, 12.0, -1, 4U, *chartInstance->c5_kgt > 12.0));
  _SFD_SYMBOL_SCOPE_POP();
  if (c5_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 58U, *chartInstance->c5_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c5_sfEvent);
    *chartInstance->c5_is_zidong = c5_IN_on11;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_o_debug_family_names,
      c5_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    *chartInstance->c5_kgyichang = 1.0;
    chartInstance->c5_dataWrittenToVector[21U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c5_kgyichang, 41U, 4U, 8U,
                          *chartInstance->c5_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 54U,
                 *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_lc_debug_family_names,
      c5_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_out, 2U, c5_b_sf_marshallOut,
      c5_b_sf_marshallIn);
    if (!chartInstance->c5_dataWrittenToVector[9U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(34U, 5U, 54U, *chartInstance->c5_sfEvent,
        false);
    }

    c5_b_out = CV_EML_IF(54, 0, 0, CV_RELATIONAL_EVAL(5U, 54U, 0,
      *chartInstance->c5_kgt, 12.0, -1, 3U, *chartInstance->c5_kgt <= 12.0));
    _SFD_SYMBOL_SCOPE_POP();
    guard1 = false;
    if (c5_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 54U, *chartInstance->c5_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 6U,
                   *chartInstance->c5_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_kc_debug_family_names,
        c5_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargin, 0U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargout, 1U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_out, 2U, c5_b_sf_marshallOut,
        c5_b_sf_marshallIn);
      if (CV_EML_COND(6, 0, 0, CV_RELATIONAL_EVAL(5U, 6U, 0,
            *chartInstance->c5_kgdw1, 0.0, -1, 0U, *chartInstance->c5_kgdw1 ==
            0.0)) || CV_EML_COND(6, 0, 1, CV_RELATIONAL_EVAL(5U, 6U, 1,
            *chartInstance->c5_kgdw2, 0.0, -1, 0U, *chartInstance->c5_kgdw2 ==
            0.0)) || CV_EML_COND(6, 0, 2, CV_RELATIONAL_EVAL(5U, 6U, 2,
            *chartInstance->c5_jsdw, 0.0, -1, 0U, *chartInstance->c5_jsdw == 0.0))
          || CV_EML_COND(6, 0, 3, CV_RELATIONAL_EVAL(5U, 6U, 3,
            *chartInstance->c5_skdw, 0.0, -1, 0U, *chartInstance->c5_skdw == 0.0)))
      {
        CV_EML_MCDC(6, 0, 0, true);
        CV_EML_IF(6, 0, 0, true);
        c5_c_out = true;
      } else {
        CV_EML_MCDC(6, 0, 0, false);
        CV_EML_IF(6, 0, 0, false);
        c5_c_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c5_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, *chartInstance->c5_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c5_sfEvent);
        *chartInstance->c5_is_zidong = c5_IN_kaigaishijian;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c5_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_k_debug_family_names,
          c5_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_f_nargin, 0U, c5_sf_marshallOut,
          c5_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_f_nargout, 1U,
          c5_sf_marshallOut, c5_sf_marshallIn);
        if (!chartInstance->c5_dataWrittenToVector[9U]) {
          _SFD_DATA_READ_BEFORE_WRITE_ERROR(34U, 4U, 4U,
            *chartInstance->c5_sfEvent, false);
        }

        *chartInstance->c5_kgt += 0.002;
        chartInstance->c5_dataWrittenToVector[9U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c5_kgt, 34U, 4U, 4U,
                              *chartInstance->c5_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 9U,
                     *chartInstance->c5_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_mc_debug_family_names,
          c5_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_e_nargin, 0U, c5_sf_marshallOut,
          c5_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_e_nargout, 1U,
          c5_sf_marshallOut, c5_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_out, 2U, c5_b_sf_marshallOut,
          c5_b_sf_marshallIn);
        if (CV_EML_COND(9, 0, 0, CV_RELATIONAL_EVAL(5U, 9U, 0,
              *chartInstance->c5_kgdw1, 1.0, -1, 0U, *chartInstance->c5_kgdw1 ==
              1.0)) && CV_EML_COND(9, 0, 1, CV_RELATIONAL_EVAL(5U, 9U, 1,
              *chartInstance->c5_kgdw2, 1.0, -1, 0U, *chartInstance->c5_kgdw2 ==
              1.0)) && CV_EML_COND(9, 0, 2, CV_RELATIONAL_EVAL(5U, 9U, 2,
              *chartInstance->c5_jsdw, 1.0, -1, 0U, *chartInstance->c5_jsdw ==
              1.0)) && CV_EML_COND(9, 0, 3, CV_RELATIONAL_EVAL(5U, 9U, 3,
              *chartInstance->c5_skdw, 1.0, -1, 0U, *chartInstance->c5_skdw ==
              1.0))) {
          CV_EML_MCDC(9, 0, 0, true);
          CV_EML_IF(9, 0, 0, true);
          c5_d_out = true;
        } else {
          CV_EML_MCDC(9, 0, 0, false);
          CV_EML_IF(9, 0, 0, false);
          c5_d_out = false;
        }

        _SFD_SYMBOL_SCOPE_POP();
        if (c5_d_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 9U, *chartInstance->c5_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c5_sfEvent);
          *chartInstance->c5_is_zidong = c5_IN_t2guiling;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 36U, *chartInstance->c5_sfEvent);
          _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_q_debug_family_names,
            c5_b_debug_family_var_map);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_g_nargin, 0U,
            c5_sf_marshallOut, c5_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_g_nargout, 1U,
            c5_sf_marshallOut, c5_sf_marshallIn);
          *chartInstance->c5_t2 = 0.0;
          chartInstance->c5_dataWrittenToVector[15U] = true;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c5_t2, 2U, 4U, 36U,
                                *chartInstance->c5_sfEvent, false);
          _SFD_SYMBOL_SCOPE_POP();
        } else {
          guard1 = true;
        }
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 4U,
                   *chartInstance->c5_sfEvent);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, *chartInstance->c5_sfEvent);
}

static void c5_songkaishijian2(SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c5_debug_family_var_map[3];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 1.0;
  boolean_T c5_out;
  real_T c5_b_nargin = 0.0;
  real_T c5_b_nargout = 1.0;
  boolean_T c5_b_out;
  uint32_T c5_b_debug_family_var_map[2];
  real_T c5_c_nargin = 0.0;
  real_T c5_c_nargout = 0.0;
  real_T c5_d_nargin = 0.0;
  real_T c5_d_nargout = 0.0;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 55U, *chartInstance->c5_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_jc_debug_family_names,
    c5_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 0U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 1U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_out, 2U, c5_b_sf_marshallOut,
    c5_b_sf_marshallIn);
  if (CV_EML_COND(55, 0, 0, CV_RELATIONAL_EVAL(5U, 55U, 0,
        *chartInstance->c5_kgdw1, 0.0, -1, 0U, *chartInstance->c5_kgdw1 == 0.0))
      || CV_EML_COND(55, 0, 1, CV_RELATIONAL_EVAL(5U, 55U, 1,
        *chartInstance->c5_kgdw2, 0.0, -1, 0U, *chartInstance->c5_kgdw2 == 0.0))
      || CV_EML_COND(55, 0, 2, CV_RELATIONAL_EVAL(5U, 55U, 2,
        *chartInstance->c5_jsdw, 0.0, -1, 0U, *chartInstance->c5_jsdw == 0.0)) ||
      CV_EML_COND(55, 0, 3, CV_RELATIONAL_EVAL(5U, 55U, 3,
        *chartInstance->c5_skdw, 0.0, -1, 0U, *chartInstance->c5_skdw == 0.0)))
  {
    CV_EML_MCDC(55, 0, 0, true);
    CV_EML_IF(55, 0, 0, true);
    c5_out = true;
  } else {
    CV_EML_MCDC(55, 0, 0, false);
    CV_EML_IF(55, 0, 0, false);
    c5_out = false;
  }

  _SFD_SYMBOL_SCOPE_POP();
  if (c5_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 55U, *chartInstance->c5_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 27U, *chartInstance->c5_sfEvent);
    *chartInstance->c5_is_zidong = c5_IN_songkaishijian2;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 27U, *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_m_debug_family_names,
      c5_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    if (!chartInstance->c5_dataWrittenToVector[9U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(34U, 4U, 27U, *chartInstance->c5_sfEvent,
        false);
    }

    *chartInstance->c5_kgt += 0.002;
    chartInstance->c5_dataWrittenToVector[9U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c5_kgt, 34U, 4U, 27U,
                          *chartInstance->c5_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 56U,
                 *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_oc_debug_family_names,
      c5_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_out, 2U, c5_b_sf_marshallOut,
      c5_b_sf_marshallIn);
    if (CV_EML_COND(56, 0, 0, CV_RELATIONAL_EVAL(5U, 56U, 0,
          *chartInstance->c5_kgdw1, 1.0, -1, 0U, *chartInstance->c5_kgdw1 == 1.0))
        && CV_EML_COND(56, 0, 1, CV_RELATIONAL_EVAL(5U, 56U, 1,
          *chartInstance->c5_kgdw2, 1.0, -1, 0U, *chartInstance->c5_kgdw2 == 1.0))
        && CV_EML_COND(56, 0, 2, CV_RELATIONAL_EVAL(5U, 56U, 2,
          *chartInstance->c5_jsdw, 1.0, -1, 0U, *chartInstance->c5_jsdw == 1.0))
        && CV_EML_COND(56, 0, 3, CV_RELATIONAL_EVAL(5U, 56U, 3,
          *chartInstance->c5_skdw, 1.0, -1, 0U, *chartInstance->c5_skdw == 1.0)))
    {
      CV_EML_MCDC(56, 0, 0, true);
      CV_EML_IF(56, 0, 0, true);
      c5_b_out = true;
    } else {
      CV_EML_MCDC(56, 0, 0, false);
      CV_EML_IF(56, 0, 0, false);
      c5_b_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c5_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 56U, *chartInstance->c5_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 27U, *chartInstance->c5_sfEvent);
      *chartInstance->c5_is_zidong = c5_IN_on9;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 24U, *chartInstance->c5_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_n_debug_family_names,
        c5_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargin, 0U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargout, 1U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      *chartInstance->c5_kghx = 0.0;
      chartInstance->c5_dataWrittenToVector[1U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c5_kghx, 26U, 4U, 24U,
                            *chartInstance->c5_sfEvent, false);
      *chartInstance->c5_kgzhiling1 = 0.0;
      chartInstance->c5_dataWrittenToVector[2U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c5_kgzhiling1, 27U, 4U, 24U,
                            *chartInstance->c5_sfEvent, false);
      *chartInstance->c5_kgzhiling2 = 0.0;
      chartInstance->c5_dataWrittenToVector[3U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c5_kgzhiling2, 28U, 4U, 24U,
                            *chartInstance->c5_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 27U,
                   *chartInstance->c5_sfEvent);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 27U, *chartInstance->c5_sfEvent);
}

static void c5_on11(SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c5_debug_family_var_map[2];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 0.0;
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 61U, *chartInstance->c5_sfEvent);
  _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c5_sfEvent);
  *chartInstance->c5_is_zidong = c5_IN_songkaishijian2;
  _SFD_CS_CALL(STATE_ACTIVE_TAG, 27U, *chartInstance->c5_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_m_debug_family_names,
    c5_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 0U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 1U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  if (!chartInstance->c5_dataWrittenToVector[9U]) {
    _SFD_DATA_READ_BEFORE_WRITE_ERROR(34U, 4U, 27U, *chartInstance->c5_sfEvent,
      false);
  }

  *chartInstance->c5_kgt += 0.002;
  chartInstance->c5_dataWrittenToVector[9U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_kgt, 34U, 4U, 27U,
                        *chartInstance->c5_sfEvent, false);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 8U, *chartInstance->c5_sfEvent);
}

static void c5_yanchishijian2(SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c5_debug_family_var_map[3];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 1.0;
  boolean_T c5_out;
  real_T c5_b_nargin = 0.0;
  real_T c5_b_nargout = 1.0;
  boolean_T c5_b_out;
  real_T c5_c_nargin = 0.0;
  real_T c5_c_nargout = 1.0;
  boolean_T c5_c_out;
  uint32_T c5_b_debug_family_var_map[2];
  real_T c5_d_nargin = 0.0;
  real_T c5_d_nargout = 0.0;
  boolean_T guard1 = false;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 8U, *chartInstance->c5_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_rc_debug_family_names,
    c5_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 0U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 1U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_out, 2U, c5_b_sf_marshallOut,
    c5_b_sf_marshallIn);
  c5_out = CV_EML_IF(8, 0, 0, *chartInstance->c5_temporalCounter_i1 >= 500);
  _SFD_SYMBOL_SCOPE_POP();
  guard1 = false;
  if (c5_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8U, *chartInstance->c5_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7U,
                 *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_nc_debug_family_names,
      c5_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_out, 2U, c5_b_sf_marshallOut,
      c5_b_sf_marshallIn);
    if (!chartInstance->c5_dataWrittenToVector[15U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(2U, 5U, 7U, *chartInstance->c5_sfEvent,
        false);
    }

    c5_b_out = CV_EML_IF(7, 0, 0, CV_RELATIONAL_EVAL(5U, 7U, 0,
      *chartInstance->c5_t2, *chartInstance->c5_t3, -1, 2U,
      *chartInstance->c5_t2 < *chartInstance->c5_t3));
    _SFD_SYMBOL_SCOPE_POP();
    if (c5_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, *chartInstance->c5_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 43U, *chartInstance->c5_sfEvent);
      *chartInstance->c5_is_zidong = c5_IN_yanchishijian2;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 43U, *chartInstance->c5_sfEvent);
      *chartInstance->c5_temporalCounter_i1 = 0U;
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_p_debug_family_names,
        c5_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargin, 0U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargout, 1U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      if (!chartInstance->c5_dataWrittenToVector[15U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(2U, 4U, 43U,
          *chartInstance->c5_sfEvent, false);
      }

      (*chartInstance->c5_t2)++;
      chartInstance->c5_dataWrittenToVector[15U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c5_t2, 2U, 4U, 43U,
                            *chartInstance->c5_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 19U,
                   *chartInstance->c5_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_sc_debug_family_names,
        c5_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargin, 0U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargout, 1U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_out, 2U, c5_b_sf_marshallOut,
        c5_b_sf_marshallIn);
      if (!chartInstance->c5_dataWrittenToVector[15U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(2U, 5U, 19U,
          *chartInstance->c5_sfEvent, false);
      }

      c5_c_out = CV_EML_IF(19, 0, 0, CV_RELATIONAL_EVAL(5U, 19U, 0,
        *chartInstance->c5_t2, *chartInstance->c5_t3, -1, 5U,
        *chartInstance->c5_t2 >= *chartInstance->c5_t3));
      _SFD_SYMBOL_SCOPE_POP();
      if (c5_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 19U, *chartInstance->c5_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 43U, *chartInstance->c5_sfEvent);
        *chartInstance->c5_is_zidong = c5_IN_on3;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 18U, *chartInstance->c5_sfEvent);
        c5_enter_atomic_on3(chartInstance);
      } else {
        guard1 = true;
      }
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 43U,
                 *chartInstance->c5_sfEvent);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 43U, *chartInstance->c5_sfEvent);
}

static void c5_t2guiling(SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c5_debug_family_var_map[3];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 1.0;
  boolean_T c5_out;
  real_T c5_b_nargin = 0.0;
  real_T c5_b_nargout = 1.0;
  boolean_T c5_b_out;
  uint32_T c5_b_debug_family_var_map[2];
  real_T c5_c_nargin = 0.0;
  real_T c5_c_nargout = 0.0;
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 10U, *chartInstance->c5_sfEvent);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7U, *chartInstance->c5_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_nc_debug_family_names,
    c5_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 0U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 1U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_out, 2U, c5_b_sf_marshallOut,
    c5_b_sf_marshallIn);
  if (!chartInstance->c5_dataWrittenToVector[15U]) {
    _SFD_DATA_READ_BEFORE_WRITE_ERROR(2U, 5U, 7U, *chartInstance->c5_sfEvent,
      false);
  }

  c5_out = CV_EML_IF(7, 0, 0, CV_RELATIONAL_EVAL(5U, 7U, 0,
    *chartInstance->c5_t2, *chartInstance->c5_t3, -1, 2U, *chartInstance->c5_t2 <
    *chartInstance->c5_t3));
  _SFD_SYMBOL_SCOPE_POP();
  if (c5_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, *chartInstance->c5_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 36U, *chartInstance->c5_sfEvent);
    *chartInstance->c5_is_zidong = c5_IN_yanchishijian2;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 43U, *chartInstance->c5_sfEvent);
    *chartInstance->c5_temporalCounter_i1 = 0U;
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_p_debug_family_names,
      c5_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    if (!chartInstance->c5_dataWrittenToVector[15U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(2U, 4U, 43U, *chartInstance->c5_sfEvent,
        false);
    }

    (*chartInstance->c5_t2)++;
    chartInstance->c5_dataWrittenToVector[15U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c5_t2, 2U, 4U, 43U,
                          *chartInstance->c5_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 19U,
                 *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_sc_debug_family_names,
      c5_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_out, 2U, c5_b_sf_marshallOut,
      c5_b_sf_marshallIn);
    if (!chartInstance->c5_dataWrittenToVector[15U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(2U, 5U, 19U, *chartInstance->c5_sfEvent,
        false);
    }

    c5_b_out = CV_EML_IF(19, 0, 0, CV_RELATIONAL_EVAL(5U, 19U, 0,
      *chartInstance->c5_t2, *chartInstance->c5_t3, -1, 5U,
      *chartInstance->c5_t2 >= *chartInstance->c5_t3));
    _SFD_SYMBOL_SCOPE_POP();
    if (c5_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 19U, *chartInstance->c5_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 36U, *chartInstance->c5_sfEvent);
      *chartInstance->c5_is_zidong = c5_IN_on3;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 18U, *chartInstance->c5_sfEvent);
      c5_enter_atomic_on3(chartInstance);
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 36U,
                   *chartInstance->c5_sfEvent);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 36U, *chartInstance->c5_sfEvent);
}

static void c5_enter_atomic_on3(SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c5_debug_family_var_map[2];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 0.0;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_r_debug_family_names,
    c5_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 0U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 1U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  *chartInstance->c5_kghx = 0.0;
  chartInstance->c5_dataWrittenToVector[1U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_kghx, 26U, 4U, 18U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_kgzhiling1 = 0.0;
  chartInstance->c5_dataWrittenToVector[2U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_kgzhiling1, 27U, 4U, 18U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_kgzhiling2 = 0.0;
  chartInstance->c5_dataWrittenToVector[3U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_kgzhiling2, 28U, 4U, 18U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_yjhx = 1.0;
  chartInstance->c5_dataWrittenToVector[4U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_yjhx, 29U, 4U, 18U,
                        *chartInstance->c5_sfEvent, false);
  _SFD_SYMBOL_SCOPE_POP();
}

static void c5_on3(SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c5_debug_family_var_map[3];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 1.0;
  boolean_T c5_out;
  real_T c5_b_nargin = 0.0;
  real_T c5_b_nargout = 1.0;
  boolean_T c5_b_out;
  uint32_T c5_b_debug_family_var_map[2];
  real_T c5_c_nargin = 0.0;
  real_T c5_c_nargout = 0.0;
  real_T c5_d_nargin = 0.0;
  real_T c5_d_nargout = 0.0;
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 14U, *chartInstance->c5_sfEvent);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 12U, *chartInstance->c5_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_uc_debug_family_names,
    c5_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 0U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 1U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_out, 2U, c5_b_sf_marshallOut,
    c5_b_sf_marshallIn);
  if (CV_EML_COND(12, 0, 0, CV_RELATIONAL_EVAL(5U, 12U, 0,
        *chartInstance->c5_kgdw1, 0.0, -1, 0U, *chartInstance->c5_kgdw1 == 0.0))
      || CV_EML_COND(12, 0, 1, CV_RELATIONAL_EVAL(5U, 12U, 1,
        *chartInstance->c5_kgdw2, 0.0, -1, 0U, *chartInstance->c5_kgdw2 == 0.0))
      || CV_EML_COND(12, 0, 2, CV_RELATIONAL_EVAL(5U, 12U, 2,
        *chartInstance->c5_sddw, 0.0, -1, 0U, *chartInstance->c5_sddw == 0.0)) ||
      CV_EML_COND(12, 0, 3, CV_RELATIONAL_EVAL(5U, 12U, 3,
        *chartInstance->c5_yjdw, 0.0, -1, 0U, *chartInstance->c5_yjdw == 0.0)))
  {
    CV_EML_MCDC(12, 0, 0, true);
    CV_EML_IF(12, 0, 0, true);
    c5_out = true;
  } else {
    CV_EML_MCDC(12, 0, 0, false);
    CV_EML_IF(12, 0, 0, false);
    c5_out = false;
  }

  _SFD_SYMBOL_SCOPE_POP();
  if (c5_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 12U, *chartInstance->c5_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 18U, *chartInstance->c5_sfEvent);
    *chartInstance->c5_is_zidong = c5_IN_suodingshijian;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 34U, *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_s_debug_family_names,
      c5_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    if (!chartInstance->c5_dataWrittenToVector[10U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(35U, 4U, 34U, *chartInstance->c5_sfEvent,
        false);
    }

    *chartInstance->c5_sdt += 0.002;
    chartInstance->c5_dataWrittenToVector[10U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c5_sdt, 35U, 4U, 34U,
                          *chartInstance->c5_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 13U,
                 *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_wc_debug_family_names,
      c5_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_out, 2U, c5_b_sf_marshallOut,
      c5_b_sf_marshallIn);
    if (CV_EML_COND(13, 0, 0, CV_RELATIONAL_EVAL(5U, 13U, 0,
          *chartInstance->c5_kgdw1, 1.0, -1, 0U, *chartInstance->c5_kgdw1 == 1.0))
        && CV_EML_COND(13, 0, 1, CV_RELATIONAL_EVAL(5U, 13U, 1,
          *chartInstance->c5_kgdw2, 1.0, -1, 0U, *chartInstance->c5_kgdw2 == 1.0))
        && CV_EML_COND(13, 0, 2, CV_RELATIONAL_EVAL(5U, 13U, 2,
          *chartInstance->c5_sddw, 1.0, -1, 0U, *chartInstance->c5_sddw == 1.0))
        && CV_EML_COND(13, 0, 3, CV_RELATIONAL_EVAL(5U, 13U, 3,
          *chartInstance->c5_yjdw, 1.0, -1, 0U, *chartInstance->c5_yjdw == 1.0)))
    {
      CV_EML_MCDC(13, 0, 0, true);
      CV_EML_IF(13, 0, 0, true);
      c5_b_out = true;
    } else {
      CV_EML_MCDC(13, 0, 0, false);
      CV_EML_IF(13, 0, 0, false);
      c5_b_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c5_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 13U, *chartInstance->c5_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 18U, *chartInstance->c5_sfEvent);
      *chartInstance->c5_is_zidong = c5_IN_t4guiling;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 37U, *chartInstance->c5_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_y_debug_family_names,
        c5_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargin, 0U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargout, 1U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      *chartInstance->c5_t4 = 0.0;
      chartInstance->c5_dataWrittenToVector[16U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c5_t4, 3U, 4U, 37U,
                            *chartInstance->c5_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 18U,
                   *chartInstance->c5_sfEvent);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 18U, *chartInstance->c5_sfEvent);
}

static void c5_suodingshijian(SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c5_debug_family_var_map[3];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 1.0;
  boolean_T c5_out;
  real_T c5_b_nargin = 0.0;
  real_T c5_b_nargout = 1.0;
  boolean_T c5_b_out;
  uint32_T c5_b_debug_family_var_map[2];
  real_T c5_c_nargin = 0.0;
  real_T c5_c_nargout = 0.0;
  real_T c5_d_nargin = 0.0;
  real_T c5_d_nargout = 1.0;
  boolean_T c5_c_out;
  real_T c5_e_nargin = 0.0;
  real_T c5_e_nargout = 1.0;
  boolean_T c5_d_out;
  real_T c5_f_nargin = 0.0;
  real_T c5_f_nargout = 0.0;
  real_T c5_g_nargin = 0.0;
  real_T c5_g_nargout = 0.0;
  boolean_T guard1 = false;
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 66U, *chartInstance->c5_sfEvent);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 67U, *chartInstance->c5_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_ad_debug_family_names,
    c5_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 0U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 1U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_out, 2U, c5_b_sf_marshallOut,
    c5_b_sf_marshallIn);
  if (!chartInstance->c5_dataWrittenToVector[10U]) {
    _SFD_DATA_READ_BEFORE_WRITE_ERROR(35U, 5U, 67U, *chartInstance->c5_sfEvent,
      false);
  }

  c5_out = CV_EML_IF(67, 0, 0, CV_RELATIONAL_EVAL(5U, 67U, 0,
    *chartInstance->c5_sdt, 2.0, -1, 4U, *chartInstance->c5_sdt > 2.0));
  _SFD_SYMBOL_SCOPE_POP();
  if (c5_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 67U, *chartInstance->c5_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 34U, *chartInstance->c5_sfEvent);
    *chartInstance->c5_is_zidong = c5_IN_on12;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U, *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_w_debug_family_names,
      c5_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    *chartInstance->c5_sdyichang = 1.0;
    chartInstance->c5_dataWrittenToVector[22U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c5_sdyichang, 42U, 4U, 9U,
                          *chartInstance->c5_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 62U,
                 *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_vc_debug_family_names,
      c5_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_out, 2U, c5_b_sf_marshallOut,
      c5_b_sf_marshallIn);
    if (!chartInstance->c5_dataWrittenToVector[10U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(35U, 5U, 62U, *chartInstance->c5_sfEvent,
        false);
    }

    c5_b_out = CV_EML_IF(62, 0, 0, CV_RELATIONAL_EVAL(5U, 62U, 0,
      *chartInstance->c5_sdt, 2.0, -1, 3U, *chartInstance->c5_sdt <= 2.0));
    _SFD_SYMBOL_SCOPE_POP();
    guard1 = false;
    if (c5_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 62U, *chartInstance->c5_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 12U,
                   *chartInstance->c5_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_uc_debug_family_names,
        c5_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargin, 0U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargout, 1U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_out, 2U, c5_b_sf_marshallOut,
        c5_b_sf_marshallIn);
      if (CV_EML_COND(12, 0, 0, CV_RELATIONAL_EVAL(5U, 12U, 0,
            *chartInstance->c5_kgdw1, 0.0, -1, 0U, *chartInstance->c5_kgdw1 ==
            0.0)) || CV_EML_COND(12, 0, 1, CV_RELATIONAL_EVAL(5U, 12U, 1,
            *chartInstance->c5_kgdw2, 0.0, -1, 0U, *chartInstance->c5_kgdw2 ==
            0.0)) || CV_EML_COND(12, 0, 2, CV_RELATIONAL_EVAL(5U, 12U, 2,
            *chartInstance->c5_sddw, 0.0, -1, 0U, *chartInstance->c5_sddw == 0.0))
          || CV_EML_COND(12, 0, 3, CV_RELATIONAL_EVAL(5U, 12U, 3,
            *chartInstance->c5_yjdw, 0.0, -1, 0U, *chartInstance->c5_yjdw == 0.0)))
      {
        CV_EML_MCDC(12, 0, 0, true);
        CV_EML_IF(12, 0, 0, true);
        c5_c_out = true;
      } else {
        CV_EML_MCDC(12, 0, 0, false);
        CV_EML_IF(12, 0, 0, false);
        c5_c_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c5_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 12U, *chartInstance->c5_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 34U, *chartInstance->c5_sfEvent);
        *chartInstance->c5_is_zidong = c5_IN_suodingshijian;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 34U, *chartInstance->c5_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_s_debug_family_names,
          c5_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_f_nargin, 0U, c5_sf_marshallOut,
          c5_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_f_nargout, 1U,
          c5_sf_marshallOut, c5_sf_marshallIn);
        if (!chartInstance->c5_dataWrittenToVector[10U]) {
          _SFD_DATA_READ_BEFORE_WRITE_ERROR(35U, 4U, 34U,
            *chartInstance->c5_sfEvent, false);
        }

        *chartInstance->c5_sdt += 0.002;
        chartInstance->c5_dataWrittenToVector[10U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c5_sdt, 35U, 4U, 34U,
                              *chartInstance->c5_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 13U,
                     *chartInstance->c5_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_wc_debug_family_names,
          c5_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_e_nargin, 0U, c5_sf_marshallOut,
          c5_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_e_nargout, 1U,
          c5_sf_marshallOut, c5_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_out, 2U, c5_b_sf_marshallOut,
          c5_b_sf_marshallIn);
        if (CV_EML_COND(13, 0, 0, CV_RELATIONAL_EVAL(5U, 13U, 0,
              *chartInstance->c5_kgdw1, 1.0, -1, 0U, *chartInstance->c5_kgdw1 ==
              1.0)) && CV_EML_COND(13, 0, 1, CV_RELATIONAL_EVAL(5U, 13U, 1,
              *chartInstance->c5_kgdw2, 1.0, -1, 0U, *chartInstance->c5_kgdw2 ==
              1.0)) && CV_EML_COND(13, 0, 2, CV_RELATIONAL_EVAL(5U, 13U, 2,
              *chartInstance->c5_sddw, 1.0, -1, 0U, *chartInstance->c5_sddw ==
              1.0)) && CV_EML_COND(13, 0, 3, CV_RELATIONAL_EVAL(5U, 13U, 3,
              *chartInstance->c5_yjdw, 1.0, -1, 0U, *chartInstance->c5_yjdw ==
              1.0))) {
          CV_EML_MCDC(13, 0, 0, true);
          CV_EML_IF(13, 0, 0, true);
          c5_d_out = true;
        } else {
          CV_EML_MCDC(13, 0, 0, false);
          CV_EML_IF(13, 0, 0, false);
          c5_d_out = false;
        }

        _SFD_SYMBOL_SCOPE_POP();
        if (c5_d_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 13U, *chartInstance->c5_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 34U, *chartInstance->c5_sfEvent);
          *chartInstance->c5_is_zidong = c5_IN_t4guiling;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 37U, *chartInstance->c5_sfEvent);
          _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_y_debug_family_names,
            c5_b_debug_family_var_map);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_g_nargin, 0U,
            c5_sf_marshallOut, c5_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_g_nargout, 1U,
            c5_sf_marshallOut, c5_sf_marshallIn);
          *chartInstance->c5_t4 = 0.0;
          chartInstance->c5_dataWrittenToVector[16U] = true;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c5_t4, 3U, 4U, 37U,
                                *chartInstance->c5_sfEvent, false);
          _SFD_SYMBOL_SCOPE_POP();
        } else {
          guard1 = true;
        }
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 34U,
                   *chartInstance->c5_sfEvent);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 34U, *chartInstance->c5_sfEvent);
}

static void c5_on7(SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c5_debug_family_var_map[3];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 1.0;
  boolean_T c5_out;
  real_T c5_b_nargin = 0.0;
  real_T c5_b_nargout = 1.0;
  boolean_T c5_b_out;
  uint32_T c5_b_debug_family_var_map[2];
  real_T c5_c_nargin = 0.0;
  real_T c5_c_nargout = 0.0;
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 40U, *chartInstance->c5_sfEvent);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 41U, *chartInstance->c5_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_ic_debug_family_names,
    c5_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 0U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 1U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_out, 2U, c5_b_sf_marshallOut,
    c5_b_sf_marshallIn);
  if (!chartInstance->c5_dataWrittenToVector[19U]) {
    _SFD_DATA_READ_BEFORE_WRITE_ERROR(39U, 5U, 41U, *chartInstance->c5_sfEvent,
      false);
  }

  if (CV_EML_COND(41, 0, 0, CV_RELATIONAL_EVAL(5U, 41U, 0,
        *chartInstance->c5_yikaicishu, *chartInstance->c5_shedingcishu, -1, 2U, *
        chartInstance->c5_yikaicishu < *chartInstance->c5_shedingcishu)) &&
      CV_EML_COND(41, 0, 1, CV_RELATIONAL_EVAL(5U, 41U, 1,
        *chartInstance->c5_jieshu, 0.0, -1, 0U, *chartInstance->c5_jieshu == 0.0)))
  {
    CV_EML_MCDC(41, 0, 0, true);
    CV_EML_IF(41, 0, 0, true);
    c5_out = true;
  } else {
    CV_EML_MCDC(41, 0, 0, false);
    CV_EML_IF(41, 0, 0, false);
    c5_out = false;
  }

  _SFD_SYMBOL_SCOPE_POP();
  if (c5_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 41U, *chartInstance->c5_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 22U, *chartInstance->c5_sfEvent);
    *chartInstance->c5_is_zidong = c5_IN_chushihua;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c5_sfEvent);
    c5_enter_atomic_chushihua(chartInstance);
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 42U,
                 *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_qc_debug_family_names,
      c5_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_out, 2U, c5_b_sf_marshallOut,
      c5_b_sf_marshallIn);
    if (!chartInstance->c5_dataWrittenToVector[19U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(39U, 5U, 42U, *chartInstance->c5_sfEvent,
        false);
    }

    if (CV_EML_COND(42, 0, 0, CV_RELATIONAL_EVAL(5U, 42U, 0,
          *chartInstance->c5_yikaicishu, *chartInstance->c5_shedingcishu, -1, 5U,
          *chartInstance->c5_yikaicishu >= *chartInstance->c5_shedingcishu)) ||
        CV_EML_COND(42, 0, 1, CV_RELATIONAL_EVAL(5U, 42U, 1,
          *chartInstance->c5_jieshu, 1.0, -1, 0U, *chartInstance->c5_jieshu ==
          1.0))) {
      CV_EML_MCDC(42, 0, 0, true);
      CV_EML_IF(42, 0, 0, true);
      c5_b_out = true;
    } else {
      CV_EML_MCDC(42, 0, 0, false);
      CV_EML_IF(42, 0, 0, false);
      c5_b_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c5_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 42U, *chartInstance->c5_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 22U, *chartInstance->c5_sfEvent);
      *chartInstance->c5_is_zidong = c5_IN_stop;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 33U, *chartInstance->c5_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_l_debug_family_names,
        c5_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargin, 0U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargout, 1U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      *chartInstance->c5_skhx = 0.0;
      chartInstance->c5_dataWrittenToVector[0U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c5_skhx, 25U, 4U, 33U,
                            *chartInstance->c5_sfEvent, false);
      *chartInstance->c5_kghx = 0.0;
      chartInstance->c5_dataWrittenToVector[1U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c5_kghx, 26U, 4U, 33U,
                            *chartInstance->c5_sfEvent, false);
      *chartInstance->c5_kgzhiling1 = 0.0;
      chartInstance->c5_dataWrittenToVector[2U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c5_kgzhiling1, 27U, 4U, 33U,
                            *chartInstance->c5_sfEvent, false);
      *chartInstance->c5_kgzhiling2 = 0.0;
      chartInstance->c5_dataWrittenToVector[3U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c5_kgzhiling2, 28U, 4U, 33U,
                            *chartInstance->c5_sfEvent, false);
      *chartInstance->c5_yjhx = 0.0;
      chartInstance->c5_dataWrittenToVector[4U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c5_yjhx, 29U, 4U, 33U,
                            *chartInstance->c5_sfEvent, false);
      *chartInstance->c5_gghx = 0.0;
      chartInstance->c5_dataWrittenToVector[5U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c5_gghx, 30U, 4U, 33U,
                            *chartInstance->c5_sfEvent, false);
      *chartInstance->c5_ggzhiling1 = 0.0;
      chartInstance->c5_dataWrittenToVector[6U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c5_ggzhiling1, 31U, 4U, 33U,
                            *chartInstance->c5_sfEvent, false);
      *chartInstance->c5_ggzhiling2 = 0.0;
      chartInstance->c5_dataWrittenToVector[7U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c5_ggzhiling2, 32U, 4U, 33U,
                            *chartInstance->c5_sfEvent, false);
      *chartInstance->c5_skt = 0.0;
      chartInstance->c5_dataWrittenToVector[8U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c5_skt, 33U, 4U, 33U,
                            *chartInstance->c5_sfEvent, false);
      *chartInstance->c5_kgt = 0.0;
      chartInstance->c5_dataWrittenToVector[9U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c5_kgt, 34U, 4U, 33U,
                            *chartInstance->c5_sfEvent, false);
      *chartInstance->c5_sdt = 0.0;
      chartInstance->c5_dataWrittenToVector[10U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c5_sdt, 35U, 4U, 33U,
                            *chartInstance->c5_sfEvent, false);
      *chartInstance->c5_jst = 0.0;
      chartInstance->c5_dataWrittenToVector[11U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c5_jst, 36U, 4U, 33U,
                            *chartInstance->c5_sfEvent, false);
      *chartInstance->c5_ggt = 0.0;
      chartInstance->c5_dataWrittenToVector[12U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c5_ggt, 37U, 4U, 33U,
                            *chartInstance->c5_sfEvent, false);
      *chartInstance->c5_yjt = 0.0;
      chartInstance->c5_dataWrittenToVector[13U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c5_yjt, 38U, 4U, 33U,
                            *chartInstance->c5_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 22U,
                   *chartInstance->c5_sfEvent);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 22U, *chartInstance->c5_sfEvent);
}

static void c5_songkaishijian3(SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c5_debug_family_var_map[3];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 1.0;
  boolean_T c5_out;
  real_T c5_b_nargin = 0.0;
  real_T c5_b_nargout = 1.0;
  boolean_T c5_b_out;
  uint32_T c5_b_debug_family_var_map[2];
  real_T c5_c_nargin = 0.0;
  real_T c5_c_nargout = 0.0;
  real_T c5_d_nargin = 0.0;
  real_T c5_d_nargout = 0.0;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 64U, *chartInstance->c5_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_tc_debug_family_names,
    c5_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 0U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 1U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_out, 2U, c5_b_sf_marshallOut,
    c5_b_sf_marshallIn);
  if (CV_EML_COND(64, 0, 0, CV_RELATIONAL_EVAL(5U, 64U, 0,
        *chartInstance->c5_kgdw1, 0.0, -1, 0U, *chartInstance->c5_kgdw1 == 0.0))
      || CV_EML_COND(64, 0, 1, CV_RELATIONAL_EVAL(5U, 64U, 1,
        *chartInstance->c5_kgdw2, 0.0, -1, 0U, *chartInstance->c5_kgdw2 == 0.0))
      || CV_EML_COND(64, 0, 2, CV_RELATIONAL_EVAL(5U, 64U, 2,
        *chartInstance->c5_sddw, 0.0, -1, 0U, *chartInstance->c5_sddw == 0.0)) ||
      CV_EML_COND(64, 0, 3, CV_RELATIONAL_EVAL(5U, 64U, 3,
        *chartInstance->c5_yjdw, 0.0, -1, 0U, *chartInstance->c5_yjdw == 0.0)))
  {
    CV_EML_MCDC(64, 0, 0, true);
    CV_EML_IF(64, 0, 0, true);
    c5_out = true;
  } else {
    CV_EML_MCDC(64, 0, 0, false);
    CV_EML_IF(64, 0, 0, false);
    c5_out = false;
  }

  _SFD_SYMBOL_SCOPE_POP();
  if (c5_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 64U, *chartInstance->c5_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 28U, *chartInstance->c5_sfEvent);
    *chartInstance->c5_is_zidong = c5_IN_songkaishijian3;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 28U, *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_u_debug_family_names,
      c5_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    if (!chartInstance->c5_dataWrittenToVector[10U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(35U, 4U, 28U, *chartInstance->c5_sfEvent,
        false);
    }

    *chartInstance->c5_sdt += 0.002;
    chartInstance->c5_dataWrittenToVector[10U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c5_sdt, 35U, 4U, 28U,
                          *chartInstance->c5_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 65U,
                 *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_yc_debug_family_names,
      c5_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_out, 2U, c5_b_sf_marshallOut,
      c5_b_sf_marshallIn);
    if (CV_EML_COND(65, 0, 0, CV_RELATIONAL_EVAL(5U, 65U, 0,
          *chartInstance->c5_kgdw1, 1.0, -1, 0U, *chartInstance->c5_kgdw1 == 1.0))
        && CV_EML_COND(65, 0, 1, CV_RELATIONAL_EVAL(5U, 65U, 1,
          *chartInstance->c5_kgdw2, 1.0, -1, 0U, *chartInstance->c5_kgdw2 == 1.0))
        && CV_EML_COND(65, 0, 2, CV_RELATIONAL_EVAL(5U, 65U, 2,
          *chartInstance->c5_jsdw, 1.0, -1, 0U, *chartInstance->c5_jsdw == 1.0))
        && CV_EML_COND(65, 0, 3, CV_RELATIONAL_EVAL(5U, 65U, 3,
          *chartInstance->c5_skdw, 1.0, -1, 0U, *chartInstance->c5_skdw == 1.0)))
    {
      CV_EML_MCDC(65, 0, 0, true);
      CV_EML_IF(65, 0, 0, true);
      c5_b_out = true;
    } else {
      CV_EML_MCDC(65, 0, 0, false);
      CV_EML_IF(65, 0, 0, false);
      c5_b_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c5_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 65U, *chartInstance->c5_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 28U, *chartInstance->c5_sfEvent);
      *chartInstance->c5_is_zidong = c5_IN_on13;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, *chartInstance->c5_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_v_debug_family_names,
        c5_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargin, 0U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargout, 1U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      *chartInstance->c5_yjhx = 0.0;
      chartInstance->c5_dataWrittenToVector[4U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c5_yjhx, 29U, 4U, 10U,
                            *chartInstance->c5_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 28U,
                   *chartInstance->c5_sfEvent);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 28U, *chartInstance->c5_sfEvent);
}

static void c5_on12(SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c5_debug_family_var_map[2];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 0.0;
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 63U, *chartInstance->c5_sfEvent);
  _SFD_CS_CALL(STATE_INACTIVE_TAG, 9U, *chartInstance->c5_sfEvent);
  *chartInstance->c5_is_zidong = c5_IN_songkaishijian3;
  _SFD_CS_CALL(STATE_ACTIVE_TAG, 28U, *chartInstance->c5_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_u_debug_family_names,
    c5_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 0U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 1U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  if (!chartInstance->c5_dataWrittenToVector[10U]) {
    _SFD_DATA_READ_BEFORE_WRITE_ERROR(35U, 4U, 28U, *chartInstance->c5_sfEvent,
      false);
  }

  *chartInstance->c5_sdt += 0.002;
  chartInstance->c5_dataWrittenToVector[10U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_sdt, 35U, 4U, 28U,
                        *chartInstance->c5_sfEvent, false);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 9U, *chartInstance->c5_sfEvent);
}

static void c5_yanchishijian3(SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c5_debug_family_var_map[3];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 1.0;
  boolean_T c5_out;
  real_T c5_b_nargin = 0.0;
  real_T c5_b_nargout = 1.0;
  boolean_T c5_b_out;
  real_T c5_c_nargin = 0.0;
  real_T c5_c_nargout = 1.0;
  boolean_T c5_c_out;
  uint32_T c5_b_debug_family_var_map[2];
  real_T c5_d_nargin = 0.0;
  real_T c5_d_nargout = 0.0;
  real_T c5_e_nargin = 0.0;
  real_T c5_e_nargout = 0.0;
  boolean_T guard1 = false;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 15U, *chartInstance->c5_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_bd_debug_family_names,
    c5_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 0U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 1U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_out, 2U, c5_b_sf_marshallOut,
    c5_b_sf_marshallIn);
  c5_out = CV_EML_IF(15, 0, 0, *chartInstance->c5_temporalCounter_i1 >= 500);
  _SFD_SYMBOL_SCOPE_POP();
  guard1 = false;
  if (c5_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 15U, *chartInstance->c5_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 16U,
                 *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_xc_debug_family_names,
      c5_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_out, 2U, c5_b_sf_marshallOut,
      c5_b_sf_marshallIn);
    if (!chartInstance->c5_dataWrittenToVector[16U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(3U, 5U, 16U, *chartInstance->c5_sfEvent,
        false);
    }

    c5_b_out = CV_EML_IF(16, 0, 0, CV_RELATIONAL_EVAL(5U, 16U, 0,
      *chartInstance->c5_t4, *chartInstance->c5_t5, -1, 2U,
      *chartInstance->c5_t4 < *chartInstance->c5_t5));
    _SFD_SYMBOL_SCOPE_POP();
    if (c5_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 16U, *chartInstance->c5_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 44U, *chartInstance->c5_sfEvent);
      *chartInstance->c5_is_zidong = c5_IN_yanchishijian3;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 44U, *chartInstance->c5_sfEvent);
      *chartInstance->c5_temporalCounter_i1 = 0U;
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_x_debug_family_names,
        c5_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargin, 0U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargout, 1U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      if (!chartInstance->c5_dataWrittenToVector[16U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(3U, 4U, 44U,
          *chartInstance->c5_sfEvent, false);
      }

      (*chartInstance->c5_t4)++;
      chartInstance->c5_dataWrittenToVector[16U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c5_t4, 3U, 4U, 44U,
                            *chartInstance->c5_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 20U,
                   *chartInstance->c5_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_cd_debug_family_names,
        c5_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargin, 0U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargout, 1U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_out, 2U, c5_b_sf_marshallOut,
        c5_b_sf_marshallIn);
      if (!chartInstance->c5_dataWrittenToVector[16U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(3U, 5U, 20U,
          *chartInstance->c5_sfEvent, false);
      }

      c5_c_out = CV_EML_IF(20, 0, 0, CV_RELATIONAL_EVAL(5U, 20U, 0,
        *chartInstance->c5_t4, *chartInstance->c5_t5, -1, 5U,
        *chartInstance->c5_t4 >= *chartInstance->c5_t5));
      _SFD_SYMBOL_SCOPE_POP();
      if (c5_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 20U, *chartInstance->c5_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 44U, *chartInstance->c5_sfEvent);
        *chartInstance->c5_is_zidong = c5_IN_on4;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 19U, *chartInstance->c5_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_bb_debug_family_names,
          c5_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_e_nargin, 0U, c5_sf_marshallOut,
          c5_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_e_nargout, 1U,
          c5_sf_marshallOut, c5_sf_marshallIn);
        *chartInstance->c5_yjhx = 0.0;
        chartInstance->c5_dataWrittenToVector[4U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c5_yjhx, 29U, 4U, 19U,
                              *chartInstance->c5_sfEvent, false);
        *chartInstance->c5_skhx = 1.0;
        chartInstance->c5_dataWrittenToVector[0U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c5_skhx, 25U, 4U, 19U,
                              *chartInstance->c5_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        guard1 = true;
      }
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 44U,
                 *chartInstance->c5_sfEvent);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 44U, *chartInstance->c5_sfEvent);
}

static void c5_t4guiling(SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c5_debug_family_var_map[3];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 1.0;
  boolean_T c5_out;
  real_T c5_b_nargin = 0.0;
  real_T c5_b_nargout = 1.0;
  boolean_T c5_b_out;
  uint32_T c5_b_debug_family_var_map[2];
  real_T c5_c_nargin = 0.0;
  real_T c5_c_nargout = 0.0;
  real_T c5_d_nargin = 0.0;
  real_T c5_d_nargout = 0.0;
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 17U, *chartInstance->c5_sfEvent);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 16U, *chartInstance->c5_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_xc_debug_family_names,
    c5_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 0U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 1U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_out, 2U, c5_b_sf_marshallOut,
    c5_b_sf_marshallIn);
  if (!chartInstance->c5_dataWrittenToVector[16U]) {
    _SFD_DATA_READ_BEFORE_WRITE_ERROR(3U, 5U, 16U, *chartInstance->c5_sfEvent,
      false);
  }

  c5_out = CV_EML_IF(16, 0, 0, CV_RELATIONAL_EVAL(5U, 16U, 0,
    *chartInstance->c5_t4, *chartInstance->c5_t5, -1, 2U, *chartInstance->c5_t4 <
    *chartInstance->c5_t5));
  _SFD_SYMBOL_SCOPE_POP();
  if (c5_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 16U, *chartInstance->c5_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 37U, *chartInstance->c5_sfEvent);
    *chartInstance->c5_is_zidong = c5_IN_yanchishijian3;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 44U, *chartInstance->c5_sfEvent);
    *chartInstance->c5_temporalCounter_i1 = 0U;
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_x_debug_family_names,
      c5_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    if (!chartInstance->c5_dataWrittenToVector[16U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(3U, 4U, 44U, *chartInstance->c5_sfEvent,
        false);
    }

    (*chartInstance->c5_t4)++;
    chartInstance->c5_dataWrittenToVector[16U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c5_t4, 3U, 4U, 44U,
                          *chartInstance->c5_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 20U,
                 *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_cd_debug_family_names,
      c5_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_out, 2U, c5_b_sf_marshallOut,
      c5_b_sf_marshallIn);
    if (!chartInstance->c5_dataWrittenToVector[16U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(3U, 5U, 20U, *chartInstance->c5_sfEvent,
        false);
    }

    c5_b_out = CV_EML_IF(20, 0, 0, CV_RELATIONAL_EVAL(5U, 20U, 0,
      *chartInstance->c5_t4, *chartInstance->c5_t5, -1, 5U,
      *chartInstance->c5_t4 >= *chartInstance->c5_t5));
    _SFD_SYMBOL_SCOPE_POP();
    if (c5_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 20U, *chartInstance->c5_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 37U, *chartInstance->c5_sfEvent);
      *chartInstance->c5_is_zidong = c5_IN_on4;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 19U, *chartInstance->c5_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_bb_debug_family_names,
        c5_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargin, 0U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargout, 1U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      *chartInstance->c5_yjhx = 0.0;
      chartInstance->c5_dataWrittenToVector[4U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c5_yjhx, 29U, 4U, 19U,
                            *chartInstance->c5_sfEvent, false);
      *chartInstance->c5_skhx = 1.0;
      chartInstance->c5_dataWrittenToVector[0U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c5_skhx, 25U, 4U, 19U,
                            *chartInstance->c5_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 37U,
                   *chartInstance->c5_sfEvent);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 37U, *chartInstance->c5_sfEvent);
}

static void c5_enter_atomic_off(SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c5_debug_family_var_map[2];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 0.0;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_ab_debug_family_names,
    c5_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 0U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 1U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  *chartInstance->c5_skhx = 0.0;
  chartInstance->c5_dataWrittenToVector[0U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_skhx, 25U, 4U, 5U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_kghx = 0.0;
  chartInstance->c5_dataWrittenToVector[1U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_kghx, 26U, 4U, 5U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_kgzhiling1 = 0.0;
  chartInstance->c5_dataWrittenToVector[2U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_kgzhiling1, 27U, 4U, 5U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_kgzhiling2 = 0.0;
  chartInstance->c5_dataWrittenToVector[3U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_kgzhiling2, 28U, 4U, 5U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_yjhx = 0.0;
  chartInstance->c5_dataWrittenToVector[4U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_yjhx, 29U, 4U, 5U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_gghx = 0.0;
  chartInstance->c5_dataWrittenToVector[5U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_gghx, 30U, 4U, 5U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_ggzhiling1 = 0.0;
  chartInstance->c5_dataWrittenToVector[6U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_ggzhiling1, 31U, 4U, 5U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_ggzhiling2 = 0.0;
  chartInstance->c5_dataWrittenToVector[7U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_ggzhiling2, 32U, 4U, 5U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_skt = 0.0;
  chartInstance->c5_dataWrittenToVector[8U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_skt, 33U, 4U, 5U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_kgt = 0.0;
  chartInstance->c5_dataWrittenToVector[9U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_kgt, 34U, 4U, 5U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_sdt = 0.0;
  chartInstance->c5_dataWrittenToVector[10U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_sdt, 35U, 4U, 5U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_jst = 0.0;
  chartInstance->c5_dataWrittenToVector[11U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_jst, 36U, 4U, 5U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_ggt = 0.0;
  chartInstance->c5_dataWrittenToVector[12U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_ggt, 37U, 4U, 5U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_yjt = 0.0;
  chartInstance->c5_dataWrittenToVector[13U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_yjt, 38U, 4U, 5U,
                        *chartInstance->c5_sfEvent, false);
  _SFD_SYMBOL_SCOPE_POP();
}

static void c5_on4(SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c5_debug_family_var_map[3];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 1.0;
  boolean_T c5_out;
  real_T c5_b_nargin = 0.0;
  real_T c5_b_nargout = 1.0;
  boolean_T c5_b_out;
  uint32_T c5_b_debug_family_var_map[2];
  real_T c5_c_nargin = 0.0;
  real_T c5_c_nargout = 0.0;
  real_T c5_d_nargin = 0.0;
  real_T c5_d_nargout = 0.0;
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 23U, *chartInstance->c5_sfEvent);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 21U, *chartInstance->c5_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_ed_debug_family_names,
    c5_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 0U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 1U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_out, 2U, c5_b_sf_marshallOut,
    c5_b_sf_marshallIn);
  if (CV_EML_COND(21, 0, 0, CV_RELATIONAL_EVAL(5U, 21U, 0,
        *chartInstance->c5_kgdw1, 0.0, -1, 0U, *chartInstance->c5_kgdw1 == 0.0))
      || CV_EML_COND(21, 0, 1, CV_RELATIONAL_EVAL(5U, 21U, 1,
        *chartInstance->c5_kgdw2, 0.0, -1, 0U, *chartInstance->c5_kgdw2 == 0.0))
      || CV_EML_COND(21, 0, 2, CV_RELATIONAL_EVAL(5U, 21U, 2,
        *chartInstance->c5_jsdw, 0.0, -1, 0U, *chartInstance->c5_jsdw == 0.0)) ||
      CV_EML_COND(21, 0, 3, CV_RELATIONAL_EVAL(5U, 21U, 3,
        *chartInstance->c5_skdw, 0.0, -1, 0U, *chartInstance->c5_skdw == 0.0)))
  {
    CV_EML_MCDC(21, 0, 0, true);
    CV_EML_IF(21, 0, 0, true);
    c5_out = true;
  } else {
    CV_EML_MCDC(21, 0, 0, false);
    CV_EML_IF(21, 0, 0, false);
    c5_out = false;
  }

  _SFD_SYMBOL_SCOPE_POP();
  if (c5_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 21U, *chartInstance->c5_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 19U, *chartInstance->c5_sfEvent);
    *chartInstance->c5_is_zidong = c5_IN_jiesuoshijian;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_cb_debug_family_names,
      c5_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    if (!chartInstance->c5_dataWrittenToVector[11U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(36U, 4U, 3U, *chartInstance->c5_sfEvent,
        false);
    }

    *chartInstance->c5_jst += 0.002;
    chartInstance->c5_dataWrittenToVector[11U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c5_jst, 36U, 4U, 3U,
                          *chartInstance->c5_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 22U,
                 *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_gd_debug_family_names,
      c5_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_out, 2U, c5_b_sf_marshallOut,
      c5_b_sf_marshallIn);
    if (CV_EML_COND(22, 0, 0, CV_RELATIONAL_EVAL(5U, 22U, 0,
          *chartInstance->c5_kgdw1, 1.0, -1, 0U, *chartInstance->c5_kgdw1 == 1.0))
        && CV_EML_COND(22, 0, 1, CV_RELATIONAL_EVAL(5U, 22U, 1,
          *chartInstance->c5_kgdw2, 1.0, -1, 0U, *chartInstance->c5_kgdw2 == 1.0))
        && CV_EML_COND(22, 0, 2, CV_RELATIONAL_EVAL(5U, 22U, 2,
          *chartInstance->c5_jsdw, 1.0, -1, 0U, *chartInstance->c5_jsdw == 1.0))
        && CV_EML_COND(22, 0, 3, CV_RELATIONAL_EVAL(5U, 22U, 3,
          *chartInstance->c5_skdw, 1.0, -1, 0U, *chartInstance->c5_skdw == 1.0)))
    {
      CV_EML_MCDC(22, 0, 0, true);
      CV_EML_IF(22, 0, 0, true);
      c5_b_out = true;
    } else {
      CV_EML_MCDC(22, 0, 0, false);
      CV_EML_IF(22, 0, 0, false);
      c5_b_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c5_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 22U, *chartInstance->c5_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 19U, *chartInstance->c5_sfEvent);
      *chartInstance->c5_is_zidong = c5_IN_t6guiling;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 38U, *chartInstance->c5_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_hb_debug_family_names,
        c5_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargin, 0U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargout, 1U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      *chartInstance->c5_t6 = 0.0;
      chartInstance->c5_dataWrittenToVector[17U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c5_t6, 4U, 4U, 38U,
                            *chartInstance->c5_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 19U,
                   *chartInstance->c5_sfEvent);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 19U, *chartInstance->c5_sfEvent);
}

static void c5_jiesuoshijian(SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c5_debug_family_var_map[3];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 1.0;
  boolean_T c5_out;
  real_T c5_b_nargin = 0.0;
  real_T c5_b_nargout = 1.0;
  boolean_T c5_b_out;
  uint32_T c5_b_debug_family_var_map[2];
  real_T c5_c_nargin = 0.0;
  real_T c5_c_nargout = 0.0;
  real_T c5_d_nargin = 0.0;
  real_T c5_d_nargout = 1.0;
  boolean_T c5_c_out;
  real_T c5_e_nargin = 0.0;
  real_T c5_e_nargout = 1.0;
  boolean_T c5_d_out;
  real_T c5_f_nargin = 0.0;
  real_T c5_f_nargout = 0.0;
  real_T c5_g_nargin = 0.0;
  real_T c5_g_nargout = 0.0;
  boolean_T guard1 = false;
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 71U, *chartInstance->c5_sfEvent);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 69U, *chartInstance->c5_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_jd_debug_family_names,
    c5_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 0U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 1U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_out, 2U, c5_b_sf_marshallOut,
    c5_b_sf_marshallIn);
  if (!chartInstance->c5_dataWrittenToVector[11U]) {
    _SFD_DATA_READ_BEFORE_WRITE_ERROR(36U, 5U, 69U, *chartInstance->c5_sfEvent,
      false);
  }

  c5_out = CV_EML_IF(69, 0, 0, CV_RELATIONAL_EVAL(5U, 69U, 0,
    *chartInstance->c5_jst, 2.0, -1, 4U, *chartInstance->c5_jst > 2.0));
  _SFD_SYMBOL_SCOPE_POP();
  if (c5_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 69U, *chartInstance->c5_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c5_sfEvent);
    *chartInstance->c5_is_zidong = c5_IN_on14;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 11U, *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_fb_debug_family_names,
      c5_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    *chartInstance->c5_jsyichang = 1.0;
    chartInstance->c5_dataWrittenToVector[23U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c5_jsyichang, 43U, 4U, 11U,
                          *chartInstance->c5_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 73U,
                 *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_fd_debug_family_names,
      c5_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_out, 2U, c5_b_sf_marshallOut,
      c5_b_sf_marshallIn);
    if (!chartInstance->c5_dataWrittenToVector[11U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(36U, 5U, 73U, *chartInstance->c5_sfEvent,
        false);
    }

    c5_b_out = CV_EML_IF(73, 0, 0, CV_RELATIONAL_EVAL(5U, 73U, 0,
      *chartInstance->c5_jst, 2.0, -1, 3U, *chartInstance->c5_jst <= 2.0));
    _SFD_SYMBOL_SCOPE_POP();
    guard1 = false;
    if (c5_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 73U, *chartInstance->c5_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 21U,
                   *chartInstance->c5_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_ed_debug_family_names,
        c5_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargin, 0U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargout, 1U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_out, 2U, c5_b_sf_marshallOut,
        c5_b_sf_marshallIn);
      if (CV_EML_COND(21, 0, 0, CV_RELATIONAL_EVAL(5U, 21U, 0,
            *chartInstance->c5_kgdw1, 0.0, -1, 0U, *chartInstance->c5_kgdw1 ==
            0.0)) || CV_EML_COND(21, 0, 1, CV_RELATIONAL_EVAL(5U, 21U, 1,
            *chartInstance->c5_kgdw2, 0.0, -1, 0U, *chartInstance->c5_kgdw2 ==
            0.0)) || CV_EML_COND(21, 0, 2, CV_RELATIONAL_EVAL(5U, 21U, 2,
            *chartInstance->c5_jsdw, 0.0, -1, 0U, *chartInstance->c5_jsdw == 0.0))
          || CV_EML_COND(21, 0, 3, CV_RELATIONAL_EVAL(5U, 21U, 3,
            *chartInstance->c5_skdw, 0.0, -1, 0U, *chartInstance->c5_skdw == 0.0)))
      {
        CV_EML_MCDC(21, 0, 0, true);
        CV_EML_IF(21, 0, 0, true);
        c5_c_out = true;
      } else {
        CV_EML_MCDC(21, 0, 0, false);
        CV_EML_IF(21, 0, 0, false);
        c5_c_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c5_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 21U, *chartInstance->c5_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c5_sfEvent);
        *chartInstance->c5_is_zidong = c5_IN_jiesuoshijian;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c5_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_cb_debug_family_names,
          c5_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_f_nargin, 0U, c5_sf_marshallOut,
          c5_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_f_nargout, 1U,
          c5_sf_marshallOut, c5_sf_marshallIn);
        if (!chartInstance->c5_dataWrittenToVector[11U]) {
          _SFD_DATA_READ_BEFORE_WRITE_ERROR(36U, 4U, 3U,
            *chartInstance->c5_sfEvent, false);
        }

        *chartInstance->c5_jst += 0.002;
        chartInstance->c5_dataWrittenToVector[11U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c5_jst, 36U, 4U, 3U,
                              *chartInstance->c5_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 22U,
                     *chartInstance->c5_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_gd_debug_family_names,
          c5_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_e_nargin, 0U, c5_sf_marshallOut,
          c5_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_e_nargout, 1U,
          c5_sf_marshallOut, c5_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_out, 2U, c5_b_sf_marshallOut,
          c5_b_sf_marshallIn);
        if (CV_EML_COND(22, 0, 0, CV_RELATIONAL_EVAL(5U, 22U, 0,
              *chartInstance->c5_kgdw1, 1.0, -1, 0U, *chartInstance->c5_kgdw1 ==
              1.0)) && CV_EML_COND(22, 0, 1, CV_RELATIONAL_EVAL(5U, 22U, 1,
              *chartInstance->c5_kgdw2, 1.0, -1, 0U, *chartInstance->c5_kgdw2 ==
              1.0)) && CV_EML_COND(22, 0, 2, CV_RELATIONAL_EVAL(5U, 22U, 2,
              *chartInstance->c5_jsdw, 1.0, -1, 0U, *chartInstance->c5_jsdw ==
              1.0)) && CV_EML_COND(22, 0, 3, CV_RELATIONAL_EVAL(5U, 22U, 3,
              *chartInstance->c5_skdw, 1.0, -1, 0U, *chartInstance->c5_skdw ==
              1.0))) {
          CV_EML_MCDC(22, 0, 0, true);
          CV_EML_IF(22, 0, 0, true);
          c5_d_out = true;
        } else {
          CV_EML_MCDC(22, 0, 0, false);
          CV_EML_IF(22, 0, 0, false);
          c5_d_out = false;
        }

        _SFD_SYMBOL_SCOPE_POP();
        if (c5_d_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 22U, *chartInstance->c5_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c5_sfEvent);
          *chartInstance->c5_is_zidong = c5_IN_t6guiling;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 38U, *chartInstance->c5_sfEvent);
          _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_hb_debug_family_names,
            c5_b_debug_family_var_map);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_g_nargin, 0U,
            c5_sf_marshallOut, c5_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_g_nargout, 1U,
            c5_sf_marshallOut, c5_sf_marshallIn);
          *chartInstance->c5_t6 = 0.0;
          chartInstance->c5_dataWrittenToVector[17U] = true;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c5_t6, 4U, 4U, 38U,
                                *chartInstance->c5_sfEvent, false);
          _SFD_SYMBOL_SCOPE_POP();
        } else {
          guard1 = true;
        }
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U,
                   *chartInstance->c5_sfEvent);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, *chartInstance->c5_sfEvent);
}

static void c5_songkaishijian4(SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c5_debug_family_var_map[3];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 1.0;
  boolean_T c5_out;
  real_T c5_b_nargin = 0.0;
  real_T c5_b_nargout = 1.0;
  boolean_T c5_b_out;
  uint32_T c5_b_debug_family_var_map[2];
  real_T c5_c_nargin = 0.0;
  real_T c5_c_nargout = 0.0;
  real_T c5_d_nargin = 0.0;
  real_T c5_d_nargout = 0.0;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 70U, *chartInstance->c5_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_dd_debug_family_names,
    c5_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 0U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 1U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_out, 2U, c5_b_sf_marshallOut,
    c5_b_sf_marshallIn);
  if (CV_EML_COND(70, 0, 0, CV_RELATIONAL_EVAL(5U, 70U, 0,
        *chartInstance->c5_kgdw1, 0.0, -1, 0U, *chartInstance->c5_kgdw1 == 0.0))
      || CV_EML_COND(70, 0, 1, CV_RELATIONAL_EVAL(5U, 70U, 1,
        *chartInstance->c5_kgdw2, 0.0, -1, 0U, *chartInstance->c5_kgdw2 == 0.0))
      || CV_EML_COND(70, 0, 2, CV_RELATIONAL_EVAL(5U, 70U, 2,
        *chartInstance->c5_jsdw, 0.0, -1, 0U, *chartInstance->c5_jsdw == 0.0)) ||
      CV_EML_COND(70, 0, 3, CV_RELATIONAL_EVAL(5U, 70U, 3,
        *chartInstance->c5_skdw, 0.0, -1, 0U, *chartInstance->c5_skdw == 0.0)))
  {
    CV_EML_MCDC(70, 0, 0, true);
    CV_EML_IF(70, 0, 0, true);
    c5_out = true;
  } else {
    CV_EML_MCDC(70, 0, 0, false);
    CV_EML_IF(70, 0, 0, false);
    c5_out = false;
  }

  _SFD_SYMBOL_SCOPE_POP();
  if (c5_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 70U, *chartInstance->c5_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 29U, *chartInstance->c5_sfEvent);
    *chartInstance->c5_is_zidong = c5_IN_songkaishijian4;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 29U, *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_db_debug_family_names,
      c5_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    if (!chartInstance->c5_dataWrittenToVector[11U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(36U, 4U, 29U, *chartInstance->c5_sfEvent,
        false);
    }

    *chartInstance->c5_jst += 0.002;
    chartInstance->c5_dataWrittenToVector[11U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c5_jst, 36U, 4U, 29U,
                          *chartInstance->c5_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 72U,
                 *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_id_debug_family_names,
      c5_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_out, 2U, c5_b_sf_marshallOut,
      c5_b_sf_marshallIn);
    if (CV_EML_COND(72, 0, 0, CV_RELATIONAL_EVAL(5U, 72U, 0,
          *chartInstance->c5_kgdw1, 1.0, -1, 0U, *chartInstance->c5_kgdw1 == 1.0))
        && CV_EML_COND(72, 0, 1, CV_RELATIONAL_EVAL(5U, 72U, 1,
          *chartInstance->c5_kgdw2, 1.0, -1, 0U, *chartInstance->c5_kgdw2 == 1.0))
        && CV_EML_COND(72, 0, 2, CV_RELATIONAL_EVAL(5U, 72U, 2,
          *chartInstance->c5_jsdw, 1.0, -1, 0U, *chartInstance->c5_jsdw == 1.0))
        && CV_EML_COND(72, 0, 3, CV_RELATIONAL_EVAL(5U, 72U, 3,
          *chartInstance->c5_skdw, 1.0, -1, 0U, *chartInstance->c5_skdw == 1.0)))
    {
      CV_EML_MCDC(72, 0, 0, true);
      CV_EML_IF(72, 0, 0, true);
      c5_b_out = true;
    } else {
      CV_EML_MCDC(72, 0, 0, false);
      CV_EML_IF(72, 0, 0, false);
      c5_b_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c5_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 72U, *chartInstance->c5_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 29U, *chartInstance->c5_sfEvent);
      *chartInstance->c5_is_zidong = c5_IN_on15;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 12U, *chartInstance->c5_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_eb_debug_family_names,
        c5_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargin, 0U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargout, 1U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      *chartInstance->c5_skhx = 0.0;
      chartInstance->c5_dataWrittenToVector[0U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c5_skhx, 25U, 4U, 12U,
                            *chartInstance->c5_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 29U,
                   *chartInstance->c5_sfEvent);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 29U, *chartInstance->c5_sfEvent);
}

static void c5_on14(SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c5_debug_family_var_map[2];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 0.0;
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 68U, *chartInstance->c5_sfEvent);
  _SFD_CS_CALL(STATE_INACTIVE_TAG, 11U, *chartInstance->c5_sfEvent);
  *chartInstance->c5_is_zidong = c5_IN_songkaishijian4;
  _SFD_CS_CALL(STATE_ACTIVE_TAG, 29U, *chartInstance->c5_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_db_debug_family_names,
    c5_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 0U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 1U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  if (!chartInstance->c5_dataWrittenToVector[11U]) {
    _SFD_DATA_READ_BEFORE_WRITE_ERROR(36U, 4U, 29U, *chartInstance->c5_sfEvent,
      false);
  }

  *chartInstance->c5_jst += 0.002;
  chartInstance->c5_dataWrittenToVector[11U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_jst, 36U, 4U, 29U,
                        *chartInstance->c5_sfEvent, false);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 11U, *chartInstance->c5_sfEvent);
}

static void c5_yanchishijian4(SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c5_debug_family_var_map[3];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 1.0;
  boolean_T c5_out;
  real_T c5_b_nargin = 0.0;
  real_T c5_b_nargout = 1.0;
  boolean_T c5_b_out;
  real_T c5_c_nargin = 0.0;
  real_T c5_c_nargout = 1.0;
  boolean_T c5_c_out;
  uint32_T c5_b_debug_family_var_map[2];
  real_T c5_d_nargin = 0.0;
  real_T c5_d_nargout = 0.0;
  boolean_T guard1 = false;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 25U, *chartInstance->c5_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_kd_debug_family_names,
    c5_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 0U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 1U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_out, 2U, c5_b_sf_marshallOut,
    c5_b_sf_marshallIn);
  c5_out = CV_EML_IF(25, 0, 0, *chartInstance->c5_temporalCounter_i1 >= 500);
  _SFD_SYMBOL_SCOPE_POP();
  guard1 = false;
  if (c5_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 25U, *chartInstance->c5_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 24U,
                 *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_hd_debug_family_names,
      c5_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_out, 2U, c5_b_sf_marshallOut,
      c5_b_sf_marshallIn);
    if (!chartInstance->c5_dataWrittenToVector[17U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(4U, 5U, 24U, *chartInstance->c5_sfEvent,
        false);
    }

    c5_b_out = CV_EML_IF(24, 0, 0, CV_RELATIONAL_EVAL(5U, 24U, 0,
      *chartInstance->c5_t6, *chartInstance->c5_t7, -1, 2U,
      *chartInstance->c5_t6 < *chartInstance->c5_t7));
    _SFD_SYMBOL_SCOPE_POP();
    if (c5_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 24U, *chartInstance->c5_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 45U, *chartInstance->c5_sfEvent);
      *chartInstance->c5_is_zidong = c5_IN_yanchishijian4;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 45U, *chartInstance->c5_sfEvent);
      *chartInstance->c5_temporalCounter_i1 = 0U;
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_gb_debug_family_names,
        c5_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargin, 0U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargout, 1U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      if (!chartInstance->c5_dataWrittenToVector[17U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(4U, 4U, 45U,
          *chartInstance->c5_sfEvent, false);
      }

      (*chartInstance->c5_t6)++;
      chartInstance->c5_dataWrittenToVector[17U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c5_t6, 4U, 4U, 45U,
                            *chartInstance->c5_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 26U,
                   *chartInstance->c5_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_ld_debug_family_names,
        c5_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargin, 0U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargout, 1U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_out, 2U, c5_b_sf_marshallOut,
        c5_b_sf_marshallIn);
      if (!chartInstance->c5_dataWrittenToVector[17U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(4U, 5U, 26U,
          *chartInstance->c5_sfEvent, false);
      }

      c5_c_out = CV_EML_IF(26, 0, 0, CV_RELATIONAL_EVAL(5U, 26U, 0,
        *chartInstance->c5_t6, *chartInstance->c5_t7, -1, 5U,
        *chartInstance->c5_t6 >= *chartInstance->c5_t7));
      _SFD_SYMBOL_SCOPE_POP();
      if (c5_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 26U, *chartInstance->c5_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 45U, *chartInstance->c5_sfEvent);
        *chartInstance->c5_is_zidong = c5_IN_on5;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 20U, *chartInstance->c5_sfEvent);
        c5_enter_atomic_on5(chartInstance);
      } else {
        guard1 = true;
      }
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 45U,
                 *chartInstance->c5_sfEvent);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 45U, *chartInstance->c5_sfEvent);
}

static void c5_t6guiling(SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c5_debug_family_var_map[3];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 1.0;
  boolean_T c5_out;
  real_T c5_b_nargin = 0.0;
  real_T c5_b_nargout = 1.0;
  boolean_T c5_b_out;
  uint32_T c5_b_debug_family_var_map[2];
  real_T c5_c_nargin = 0.0;
  real_T c5_c_nargout = 0.0;
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 27U, *chartInstance->c5_sfEvent);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 24U, *chartInstance->c5_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_hd_debug_family_names,
    c5_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 0U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 1U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_out, 2U, c5_b_sf_marshallOut,
    c5_b_sf_marshallIn);
  if (!chartInstance->c5_dataWrittenToVector[17U]) {
    _SFD_DATA_READ_BEFORE_WRITE_ERROR(4U, 5U, 24U, *chartInstance->c5_sfEvent,
      false);
  }

  c5_out = CV_EML_IF(24, 0, 0, CV_RELATIONAL_EVAL(5U, 24U, 0,
    *chartInstance->c5_t6, *chartInstance->c5_t7, -1, 2U, *chartInstance->c5_t6 <
    *chartInstance->c5_t7));
  _SFD_SYMBOL_SCOPE_POP();
  if (c5_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 24U, *chartInstance->c5_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 38U, *chartInstance->c5_sfEvent);
    *chartInstance->c5_is_zidong = c5_IN_yanchishijian4;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 45U, *chartInstance->c5_sfEvent);
    *chartInstance->c5_temporalCounter_i1 = 0U;
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_gb_debug_family_names,
      c5_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    if (!chartInstance->c5_dataWrittenToVector[17U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(4U, 4U, 45U, *chartInstance->c5_sfEvent,
        false);
    }

    (*chartInstance->c5_t6)++;
    chartInstance->c5_dataWrittenToVector[17U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c5_t6, 4U, 4U, 45U,
                          *chartInstance->c5_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 26U,
                 *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_ld_debug_family_names,
      c5_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_out, 2U, c5_b_sf_marshallOut,
      c5_b_sf_marshallIn);
    if (!chartInstance->c5_dataWrittenToVector[17U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(4U, 5U, 26U, *chartInstance->c5_sfEvent,
        false);
    }

    c5_b_out = CV_EML_IF(26, 0, 0, CV_RELATIONAL_EVAL(5U, 26U, 0,
      *chartInstance->c5_t6, *chartInstance->c5_t7, -1, 5U,
      *chartInstance->c5_t6 >= *chartInstance->c5_t7));
    _SFD_SYMBOL_SCOPE_POP();
    if (c5_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 26U, *chartInstance->c5_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 38U, *chartInstance->c5_sfEvent);
      *chartInstance->c5_is_zidong = c5_IN_on5;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 20U, *chartInstance->c5_sfEvent);
      c5_enter_atomic_on5(chartInstance);
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 38U,
                   *chartInstance->c5_sfEvent);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 38U, *chartInstance->c5_sfEvent);
}

static void c5_enter_atomic_on5(SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c5_debug_family_var_map[2];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 0.0;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_ib_debug_family_names,
    c5_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 0U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 1U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  *chartInstance->c5_skhx = 0.0;
  chartInstance->c5_dataWrittenToVector[0U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_skhx, 25U, 4U, 20U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_gghx = 1.0;
  chartInstance->c5_dataWrittenToVector[5U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_gghx, 30U, 4U, 20U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_ggzhiling1 = 1.0;
  chartInstance->c5_dataWrittenToVector[6U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_ggzhiling1, 31U, 4U, 20U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_ggzhiling2 = 1.0;
  chartInstance->c5_dataWrittenToVector[7U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_ggzhiling2, 32U, 4U, 20U,
                        *chartInstance->c5_sfEvent, false);
  _SFD_SYMBOL_SCOPE_POP();
}

static void c5_on5(SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c5_debug_family_var_map[3];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 1.0;
  boolean_T c5_out;
  real_T c5_b_nargin = 0.0;
  real_T c5_b_nargout = 1.0;
  boolean_T c5_b_out;
  uint32_T c5_b_debug_family_var_map[2];
  real_T c5_c_nargin = 0.0;
  real_T c5_c_nargout = 0.0;
  real_T c5_d_nargin = 0.0;
  real_T c5_d_nargout = 0.0;
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 30U, *chartInstance->c5_sfEvent);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 28U, *chartInstance->c5_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_od_debug_family_names,
    c5_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 0U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 1U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_out, 2U, c5_b_sf_marshallOut,
    c5_b_sf_marshallIn);
  if (CV_EML_COND(28, 0, 0, CV_RELATIONAL_EVAL(5U, 28U, 0,
        *chartInstance->c5_ggdw1, 0.0, -1, 0U, *chartInstance->c5_ggdw1 == 0.0))
      || CV_EML_COND(28, 0, 1, CV_RELATIONAL_EVAL(5U, 28U, 1,
        *chartInstance->c5_ggdw2, 0.0, -1, 0U, *chartInstance->c5_ggdw2 == 0.0))
      || CV_EML_COND(28, 0, 2, CV_RELATIONAL_EVAL(5U, 28U, 2,
        *chartInstance->c5_jsdw, 0.0, -1, 0U, *chartInstance->c5_jsdw == 0.0)) ||
      CV_EML_COND(28, 0, 3, CV_RELATIONAL_EVAL(5U, 28U, 3,
        *chartInstance->c5_skdw, 0.0, -1, 0U, *chartInstance->c5_skdw == 0.0)))
  {
    CV_EML_MCDC(28, 0, 0, true);
    CV_EML_IF(28, 0, 0, true);
    c5_out = true;
  } else {
    CV_EML_MCDC(28, 0, 0, false);
    CV_EML_IF(28, 0, 0, false);
    c5_out = false;
  }

  _SFD_SYMBOL_SCOPE_POP();
  if (c5_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 28U, *chartInstance->c5_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 20U, *chartInstance->c5_sfEvent);
    *chartInstance->c5_is_zidong = c5_IN_guangaishijian;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_jb_debug_family_names,
      c5_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    if (!chartInstance->c5_dataWrittenToVector[12U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(37U, 4U, 2U, *chartInstance->c5_sfEvent,
        false);
    }

    *chartInstance->c5_ggt += 0.002;
    chartInstance->c5_dataWrittenToVector[12U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c5_ggt, 37U, 4U, 2U,
                          *chartInstance->c5_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 29U,
                 *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_qd_debug_family_names,
      c5_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_out, 2U, c5_b_sf_marshallOut,
      c5_b_sf_marshallIn);
    if (CV_EML_COND(29, 0, 0, CV_RELATIONAL_EVAL(5U, 29U, 0,
          *chartInstance->c5_ggdw1, 1.0, -1, 0U, *chartInstance->c5_ggdw1 == 1.0))
        && CV_EML_COND(29, 0, 1, CV_RELATIONAL_EVAL(5U, 29U, 1,
          *chartInstance->c5_ggdw2, 1.0, -1, 0U, *chartInstance->c5_ggdw2 == 1.0))
        && CV_EML_COND(29, 0, 2, CV_RELATIONAL_EVAL(5U, 29U, 2,
          *chartInstance->c5_jsdw, 1.0, -1, 0U, *chartInstance->c5_jsdw == 1.0))
        && CV_EML_COND(29, 0, 3, CV_RELATIONAL_EVAL(5U, 29U, 3,
          *chartInstance->c5_skdw, 1.0, -1, 0U, *chartInstance->c5_skdw == 1.0)))
    {
      CV_EML_MCDC(29, 0, 0, true);
      CV_EML_IF(29, 0, 0, true);
      c5_b_out = true;
    } else {
      CV_EML_MCDC(29, 0, 0, false);
      CV_EML_IF(29, 0, 0, false);
      c5_b_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c5_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 29U, *chartInstance->c5_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 20U, *chartInstance->c5_sfEvent);
      *chartInstance->c5_is_zidong = c5_IN_t8guiling;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 39U, *chartInstance->c5_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_ob_debug_family_names,
        c5_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargin, 0U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargout, 1U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      *chartInstance->c5_t8 = 0.0;
      chartInstance->c5_dataWrittenToVector[18U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c5_t8, 5U, 4U, 39U,
                            *chartInstance->c5_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 20U,
                   *chartInstance->c5_sfEvent);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 20U, *chartInstance->c5_sfEvent);
}

static void c5_guangaishijian(SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c5_debug_family_var_map[3];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 1.0;
  boolean_T c5_out;
  real_T c5_b_nargin = 0.0;
  real_T c5_b_nargout = 1.0;
  boolean_T c5_b_out;
  uint32_T c5_b_debug_family_var_map[2];
  real_T c5_c_nargin = 0.0;
  real_T c5_c_nargout = 0.0;
  real_T c5_d_nargin = 0.0;
  real_T c5_d_nargout = 1.0;
  boolean_T c5_c_out;
  real_T c5_e_nargin = 0.0;
  real_T c5_e_nargout = 1.0;
  boolean_T c5_d_out;
  real_T c5_f_nargin = 0.0;
  real_T c5_f_nargout = 0.0;
  real_T c5_g_nargin = 0.0;
  real_T c5_g_nargout = 0.0;
  boolean_T guard1 = false;
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 78U, *chartInstance->c5_sfEvent);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 77U, *chartInstance->c5_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_td_debug_family_names,
    c5_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 0U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 1U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_out, 2U, c5_b_sf_marshallOut,
    c5_b_sf_marshallIn);
  if (!chartInstance->c5_dataWrittenToVector[12U]) {
    _SFD_DATA_READ_BEFORE_WRITE_ERROR(37U, 5U, 77U, *chartInstance->c5_sfEvent,
      false);
  }

  c5_out = CV_EML_IF(77, 0, 0, CV_RELATIONAL_EVAL(5U, 77U, 0,
    *chartInstance->c5_ggt, 12.0, -1, 4U, *chartInstance->c5_ggt > 12.0));
  _SFD_SYMBOL_SCOPE_POP();
  if (c5_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 77U, *chartInstance->c5_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c5_sfEvent);
    *chartInstance->c5_is_zidong = c5_IN_on16;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 13U, *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_mb_debug_family_names,
      c5_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    *chartInstance->c5_ggyichang = 1.0;
    chartInstance->c5_dataWrittenToVector[25U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c5_ggyichang, 44U, 4U, 13U,
                          *chartInstance->c5_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 75U,
                 *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_pd_debug_family_names,
      c5_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_out, 2U, c5_b_sf_marshallOut,
      c5_b_sf_marshallIn);
    if (!chartInstance->c5_dataWrittenToVector[12U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(37U, 5U, 75U, *chartInstance->c5_sfEvent,
        false);
    }

    c5_b_out = CV_EML_IF(75, 0, 0, CV_RELATIONAL_EVAL(5U, 75U, 0,
      *chartInstance->c5_ggt, 12.0, -1, 3U, *chartInstance->c5_ggt <= 12.0));
    _SFD_SYMBOL_SCOPE_POP();
    guard1 = false;
    if (c5_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 75U, *chartInstance->c5_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 28U,
                   *chartInstance->c5_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_od_debug_family_names,
        c5_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargin, 0U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargout, 1U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_out, 2U, c5_b_sf_marshallOut,
        c5_b_sf_marshallIn);
      if (CV_EML_COND(28, 0, 0, CV_RELATIONAL_EVAL(5U, 28U, 0,
            *chartInstance->c5_ggdw1, 0.0, -1, 0U, *chartInstance->c5_ggdw1 ==
            0.0)) || CV_EML_COND(28, 0, 1, CV_RELATIONAL_EVAL(5U, 28U, 1,
            *chartInstance->c5_ggdw2, 0.0, -1, 0U, *chartInstance->c5_ggdw2 ==
            0.0)) || CV_EML_COND(28, 0, 2, CV_RELATIONAL_EVAL(5U, 28U, 2,
            *chartInstance->c5_jsdw, 0.0, -1, 0U, *chartInstance->c5_jsdw == 0.0))
          || CV_EML_COND(28, 0, 3, CV_RELATIONAL_EVAL(5U, 28U, 3,
            *chartInstance->c5_skdw, 0.0, -1, 0U, *chartInstance->c5_skdw == 0.0)))
      {
        CV_EML_MCDC(28, 0, 0, true);
        CV_EML_IF(28, 0, 0, true);
        c5_c_out = true;
      } else {
        CV_EML_MCDC(28, 0, 0, false);
        CV_EML_IF(28, 0, 0, false);
        c5_c_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c5_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 28U, *chartInstance->c5_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c5_sfEvent);
        *chartInstance->c5_is_zidong = c5_IN_guangaishijian;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c5_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_jb_debug_family_names,
          c5_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_f_nargin, 0U, c5_sf_marshallOut,
          c5_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_f_nargout, 1U,
          c5_sf_marshallOut, c5_sf_marshallIn);
        if (!chartInstance->c5_dataWrittenToVector[12U]) {
          _SFD_DATA_READ_BEFORE_WRITE_ERROR(37U, 4U, 2U,
            *chartInstance->c5_sfEvent, false);
        }

        *chartInstance->c5_ggt += 0.002;
        chartInstance->c5_dataWrittenToVector[12U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c5_ggt, 37U, 4U, 2U,
                              *chartInstance->c5_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 29U,
                     *chartInstance->c5_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_qd_debug_family_names,
          c5_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_e_nargin, 0U, c5_sf_marshallOut,
          c5_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_e_nargout, 1U,
          c5_sf_marshallOut, c5_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_out, 2U, c5_b_sf_marshallOut,
          c5_b_sf_marshallIn);
        if (CV_EML_COND(29, 0, 0, CV_RELATIONAL_EVAL(5U, 29U, 0,
              *chartInstance->c5_ggdw1, 1.0, -1, 0U, *chartInstance->c5_ggdw1 ==
              1.0)) && CV_EML_COND(29, 0, 1, CV_RELATIONAL_EVAL(5U, 29U, 1,
              *chartInstance->c5_ggdw2, 1.0, -1, 0U, *chartInstance->c5_ggdw2 ==
              1.0)) && CV_EML_COND(29, 0, 2, CV_RELATIONAL_EVAL(5U, 29U, 2,
              *chartInstance->c5_jsdw, 1.0, -1, 0U, *chartInstance->c5_jsdw ==
              1.0)) && CV_EML_COND(29, 0, 3, CV_RELATIONAL_EVAL(5U, 29U, 3,
              *chartInstance->c5_skdw, 1.0, -1, 0U, *chartInstance->c5_skdw ==
              1.0))) {
          CV_EML_MCDC(29, 0, 0, true);
          CV_EML_IF(29, 0, 0, true);
          c5_d_out = true;
        } else {
          CV_EML_MCDC(29, 0, 0, false);
          CV_EML_IF(29, 0, 0, false);
          c5_d_out = false;
        }

        _SFD_SYMBOL_SCOPE_POP();
        if (c5_d_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 29U, *chartInstance->c5_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c5_sfEvent);
          *chartInstance->c5_is_zidong = c5_IN_t8guiling;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 39U, *chartInstance->c5_sfEvent);
          _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_ob_debug_family_names,
            c5_b_debug_family_var_map);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_g_nargin, 0U,
            c5_sf_marshallOut, c5_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_g_nargout, 1U,
            c5_sf_marshallOut, c5_sf_marshallIn);
          *chartInstance->c5_t8 = 0.0;
          chartInstance->c5_dataWrittenToVector[18U] = true;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c5_t8, 5U, 4U, 39U,
                                *chartInstance->c5_sfEvent, false);
          _SFD_SYMBOL_SCOPE_POP();
        } else {
          guard1 = true;
        }
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U,
                   *chartInstance->c5_sfEvent);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, *chartInstance->c5_sfEvent);
}

static void c5_songkaishijian5(SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c5_debug_family_var_map[3];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 1.0;
  boolean_T c5_out;
  real_T c5_b_nargin = 0.0;
  real_T c5_b_nargout = 1.0;
  boolean_T c5_b_out;
  uint32_T c5_b_debug_family_var_map[2];
  real_T c5_c_nargin = 0.0;
  real_T c5_c_nargout = 0.0;
  real_T c5_d_nargin = 0.0;
  real_T c5_d_nargout = 0.0;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 74U, *chartInstance->c5_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_sd_debug_family_names,
    c5_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 0U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 1U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_out, 2U, c5_b_sf_marshallOut,
    c5_b_sf_marshallIn);
  if (CV_EML_COND(74, 0, 0, CV_RELATIONAL_EVAL(5U, 74U, 0,
        *chartInstance->c5_ggdw1, 1.0, -1, 0U, *chartInstance->c5_ggdw1 == 1.0))
      && CV_EML_COND(74, 0, 1, CV_RELATIONAL_EVAL(5U, 74U, 1,
        *chartInstance->c5_ggdw2, 1.0, -1, 0U, *chartInstance->c5_ggdw2 == 1.0))
      && CV_EML_COND(74, 0, 2, CV_RELATIONAL_EVAL(5U, 74U, 2,
        *chartInstance->c5_jsdw, 1.0, -1, 0U, *chartInstance->c5_jsdw == 1.0)) &&
      CV_EML_COND(74, 0, 3, CV_RELATIONAL_EVAL(5U, 74U, 3,
        *chartInstance->c5_skdw, 1.0, -1, 0U, *chartInstance->c5_skdw == 1.0)))
  {
    CV_EML_MCDC(74, 0, 0, true);
    CV_EML_IF(74, 0, 0, true);
    c5_out = true;
  } else {
    CV_EML_MCDC(74, 0, 0, false);
    CV_EML_IF(74, 0, 0, false);
    c5_out = false;
  }

  _SFD_SYMBOL_SCOPE_POP();
  if (c5_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 74U, *chartInstance->c5_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 30U, *chartInstance->c5_sfEvent);
    *chartInstance->c5_is_zidong = c5_IN_on17;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 14U, *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_lb_debug_family_names,
      c5_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    *chartInstance->c5_gghx = 0.0;
    chartInstance->c5_dataWrittenToVector[5U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c5_gghx, 30U, 4U, 14U,
                          *chartInstance->c5_sfEvent, false);
    *chartInstance->c5_ggzhiling1 = 0.0;
    chartInstance->c5_dataWrittenToVector[6U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c5_ggzhiling1, 31U, 4U, 14U,
                          *chartInstance->c5_sfEvent, false);
    *chartInstance->c5_ggzhiling2 = 0.0;
    chartInstance->c5_dataWrittenToVector[7U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c5_ggzhiling2, 32U, 4U, 14U,
                          *chartInstance->c5_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 79U,
                 *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_nd_debug_family_names,
      c5_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_out, 2U, c5_b_sf_marshallOut,
      c5_b_sf_marshallIn);
    if (CV_EML_COND(79, 0, 0, CV_RELATIONAL_EVAL(5U, 79U, 0,
          *chartInstance->c5_ggdw1, 0.0, -1, 0U, *chartInstance->c5_ggdw1 == 0.0))
        || CV_EML_COND(79, 0, 1, CV_RELATIONAL_EVAL(5U, 79U, 1,
          *chartInstance->c5_ggdw2, 0.0, -1, 0U, *chartInstance->c5_ggdw2 == 0.0))
        || CV_EML_COND(79, 0, 2, CV_RELATIONAL_EVAL(5U, 79U, 2,
          *chartInstance->c5_jsdw, 0.0, -1, 0U, *chartInstance->c5_jsdw == 0.0))
        || CV_EML_COND(79, 0, 3, CV_RELATIONAL_EVAL(5U, 79U, 3,
          *chartInstance->c5_skdw, 0.0, -1, 0U, *chartInstance->c5_skdw == 0.0)))
    {
      CV_EML_MCDC(79, 0, 0, true);
      CV_EML_IF(79, 0, 0, true);
      c5_b_out = true;
    } else {
      CV_EML_MCDC(79, 0, 0, false);
      CV_EML_IF(79, 0, 0, false);
      c5_b_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c5_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 79U, *chartInstance->c5_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 30U, *chartInstance->c5_sfEvent);
      *chartInstance->c5_is_zidong = c5_IN_songkaishijian5;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 30U, *chartInstance->c5_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_kb_debug_family_names,
        c5_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargin, 0U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargout, 1U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      if (!chartInstance->c5_dataWrittenToVector[12U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(37U, 4U, 30U,
          *chartInstance->c5_sfEvent, false);
      }

      *chartInstance->c5_ggt += 0.002;
      chartInstance->c5_dataWrittenToVector[12U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c5_ggt, 37U, 4U, 30U,
                            *chartInstance->c5_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 30U,
                   *chartInstance->c5_sfEvent);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 30U, *chartInstance->c5_sfEvent);
}

static void c5_on16(SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c5_debug_family_var_map[2];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 0.0;
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 76U, *chartInstance->c5_sfEvent);
  _SFD_CS_CALL(STATE_INACTIVE_TAG, 13U, *chartInstance->c5_sfEvent);
  *chartInstance->c5_is_zidong = c5_IN_songkaishijian5;
  _SFD_CS_CALL(STATE_ACTIVE_TAG, 30U, *chartInstance->c5_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_kb_debug_family_names,
    c5_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 0U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 1U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  if (!chartInstance->c5_dataWrittenToVector[12U]) {
    _SFD_DATA_READ_BEFORE_WRITE_ERROR(37U, 4U, 30U, *chartInstance->c5_sfEvent,
      false);
  }

  *chartInstance->c5_ggt += 0.002;
  chartInstance->c5_dataWrittenToVector[12U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_ggt, 37U, 4U, 30U,
                        *chartInstance->c5_sfEvent, false);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 13U, *chartInstance->c5_sfEvent);
}

static void c5_yanchishijian5(SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c5_debug_family_var_map[3];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 1.0;
  boolean_T c5_out;
  real_T c5_b_nargin = 0.0;
  real_T c5_b_nargout = 1.0;
  boolean_T c5_b_out;
  real_T c5_c_nargin = 0.0;
  real_T c5_c_nargout = 1.0;
  boolean_T c5_c_out;
  uint32_T c5_b_debug_family_var_map[2];
  real_T c5_d_nargin = 0.0;
  real_T c5_d_nargout = 0.0;
  boolean_T guard1 = false;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 32U, *chartInstance->c5_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_ud_debug_family_names,
    c5_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 0U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 1U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_out, 2U, c5_b_sf_marshallOut,
    c5_b_sf_marshallIn);
  c5_out = CV_EML_IF(32, 0, 0, *chartInstance->c5_temporalCounter_i1 >= 500);
  _SFD_SYMBOL_SCOPE_POP();
  guard1 = false;
  if (c5_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 32U, *chartInstance->c5_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 31U,
                 *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_rd_debug_family_names,
      c5_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_out, 2U, c5_b_sf_marshallOut,
      c5_b_sf_marshallIn);
    if (!chartInstance->c5_dataWrittenToVector[18U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(5U, 5U, 31U, *chartInstance->c5_sfEvent,
        false);
    }

    c5_b_out = CV_EML_IF(31, 0, 0, CV_RELATIONAL_EVAL(5U, 31U, 0,
      *chartInstance->c5_t8, *chartInstance->c5_t9, -1, 2U,
      *chartInstance->c5_t8 < *chartInstance->c5_t9));
    _SFD_SYMBOL_SCOPE_POP();
    if (c5_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 31U, *chartInstance->c5_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 46U, *chartInstance->c5_sfEvent);
      *chartInstance->c5_is_zidong = c5_IN_yanchishijian5;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 46U, *chartInstance->c5_sfEvent);
      *chartInstance->c5_temporalCounter_i1 = 0U;
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_nb_debug_family_names,
        c5_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargin, 0U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargout, 1U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      if (!chartInstance->c5_dataWrittenToVector[18U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(5U, 4U, 46U,
          *chartInstance->c5_sfEvent, false);
      }

      (*chartInstance->c5_t8)++;
      chartInstance->c5_dataWrittenToVector[18U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c5_t8, 5U, 4U, 46U,
                            *chartInstance->c5_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 37U,
                   *chartInstance->c5_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_vd_debug_family_names,
        c5_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargin, 0U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargout, 1U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_out, 2U, c5_b_sf_marshallOut,
        c5_b_sf_marshallIn);
      if (!chartInstance->c5_dataWrittenToVector[18U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(5U, 5U, 37U,
          *chartInstance->c5_sfEvent, false);
      }

      c5_c_out = CV_EML_IF(37, 0, 0, CV_RELATIONAL_EVAL(5U, 37U, 0,
        *chartInstance->c5_t8, *chartInstance->c5_t9, -1, 5U,
        *chartInstance->c5_t8 >= *chartInstance->c5_t9));
      _SFD_SYMBOL_SCOPE_POP();
      if (c5_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 37U, *chartInstance->c5_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 46U, *chartInstance->c5_sfEvent);
        *chartInstance->c5_is_zidong = c5_IN_on6;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 21U, *chartInstance->c5_sfEvent);
        c5_enter_atomic_on6(chartInstance);
      } else {
        guard1 = true;
      }
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 46U,
                 *chartInstance->c5_sfEvent);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 46U, *chartInstance->c5_sfEvent);
}

static void c5_t8guiling(SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c5_debug_family_var_map[3];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 1.0;
  boolean_T c5_out;
  real_T c5_b_nargin = 0.0;
  real_T c5_b_nargout = 1.0;
  boolean_T c5_b_out;
  uint32_T c5_b_debug_family_var_map[2];
  real_T c5_c_nargin = 0.0;
  real_T c5_c_nargout = 0.0;
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 33U, *chartInstance->c5_sfEvent);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 31U, *chartInstance->c5_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_rd_debug_family_names,
    c5_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 0U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 1U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_out, 2U, c5_b_sf_marshallOut,
    c5_b_sf_marshallIn);
  if (!chartInstance->c5_dataWrittenToVector[18U]) {
    _SFD_DATA_READ_BEFORE_WRITE_ERROR(5U, 5U, 31U, *chartInstance->c5_sfEvent,
      false);
  }

  c5_out = CV_EML_IF(31, 0, 0, CV_RELATIONAL_EVAL(5U, 31U, 0,
    *chartInstance->c5_t8, *chartInstance->c5_t9, -1, 2U, *chartInstance->c5_t8 <
    *chartInstance->c5_t9));
  _SFD_SYMBOL_SCOPE_POP();
  if (c5_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 31U, *chartInstance->c5_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 39U, *chartInstance->c5_sfEvent);
    *chartInstance->c5_is_zidong = c5_IN_yanchishijian5;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 46U, *chartInstance->c5_sfEvent);
    *chartInstance->c5_temporalCounter_i1 = 0U;
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_nb_debug_family_names,
      c5_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    if (!chartInstance->c5_dataWrittenToVector[18U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(5U, 4U, 46U, *chartInstance->c5_sfEvent,
        false);
    }

    (*chartInstance->c5_t8)++;
    chartInstance->c5_dataWrittenToVector[18U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c5_t8, 5U, 4U, 46U,
                          *chartInstance->c5_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 37U,
                 *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_vd_debug_family_names,
      c5_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_out, 2U, c5_b_sf_marshallOut,
      c5_b_sf_marshallIn);
    if (!chartInstance->c5_dataWrittenToVector[18U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(5U, 5U, 37U, *chartInstance->c5_sfEvent,
        false);
    }

    c5_b_out = CV_EML_IF(37, 0, 0, CV_RELATIONAL_EVAL(5U, 37U, 0,
      *chartInstance->c5_t8, *chartInstance->c5_t9, -1, 5U,
      *chartInstance->c5_t8 >= *chartInstance->c5_t9));
    _SFD_SYMBOL_SCOPE_POP();
    if (c5_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 37U, *chartInstance->c5_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 39U, *chartInstance->c5_sfEvent);
      *chartInstance->c5_is_zidong = c5_IN_on6;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 21U, *chartInstance->c5_sfEvent);
      c5_enter_atomic_on6(chartInstance);
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 39U,
                   *chartInstance->c5_sfEvent);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 39U, *chartInstance->c5_sfEvent);
}

static void c5_yanchishijian6(SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c5_debug_family_var_map[3];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 1.0;
  boolean_T c5_out;
  real_T c5_b_nargin = 0.0;
  real_T c5_b_nargout = 1.0;
  boolean_T c5_b_out;
  real_T c5_c_nargin = 0.0;
  real_T c5_c_nargout = 1.0;
  boolean_T c5_c_out;
  uint32_T c5_b_debug_family_var_map[2];
  real_T c5_d_nargin = 0.0;
  real_T c5_d_nargout = 0.0;
  boolean_T guard1 = false;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 48U, *chartInstance->c5_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_wd_debug_family_names,
    c5_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 0U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 1U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_out, 2U, c5_b_sf_marshallOut,
    c5_b_sf_marshallIn);
  c5_out = CV_EML_IF(48, 0, 0, *chartInstance->c5_temporalCounter_i1 >= 500);
  _SFD_SYMBOL_SCOPE_POP();
  guard1 = false;
  if (c5_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 48U, *chartInstance->c5_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 46U,
                 *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_xd_debug_family_names,
      c5_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_out, 2U, c5_b_sf_marshallOut,
      c5_b_sf_marshallIn);
    if (!chartInstance->c5_dataWrittenToVector[24U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(1U, 5U, 46U, *chartInstance->c5_sfEvent,
        false);
    }

    c5_b_out = CV_EML_IF(46, 0, 0, CV_RELATIONAL_EVAL(5U, 46U, 0,
      *chartInstance->c5_t10, *chartInstance->c5_t11, -1, 2U,
      *chartInstance->c5_t10 < *chartInstance->c5_t11));
    _SFD_SYMBOL_SCOPE_POP();
    if (c5_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 46U, *chartInstance->c5_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 47U, *chartInstance->c5_sfEvent);
      *chartInstance->c5_is_zidong = c5_IN_yanchishijian6;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 47U, *chartInstance->c5_sfEvent);
      *chartInstance->c5_temporalCounter_i1 = 0U;
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_pb_debug_family_names,
        c5_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargin, 0U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargout, 1U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      if (!chartInstance->c5_dataWrittenToVector[24U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(1U, 4U, 47U,
          *chartInstance->c5_sfEvent, false);
      }

      (*chartInstance->c5_t10)++;
      chartInstance->c5_dataWrittenToVector[24U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c5_t10, 1U, 4U, 47U,
                            *chartInstance->c5_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 47U,
                   *chartInstance->c5_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_md_debug_family_names,
        c5_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargin, 0U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargout, 1U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_out, 2U, c5_b_sf_marshallOut,
        c5_b_sf_marshallIn);
      if (!chartInstance->c5_dataWrittenToVector[24U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(1U, 5U, 47U,
          *chartInstance->c5_sfEvent, false);
      }

      c5_c_out = CV_EML_IF(47, 0, 0, CV_RELATIONAL_EVAL(5U, 47U, 0,
        *chartInstance->c5_t10, *chartInstance->c5_t11, -1, 5U,
        *chartInstance->c5_t10 >= *chartInstance->c5_t11));
      _SFD_SYMBOL_SCOPE_POP();
      if (c5_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 47U, *chartInstance->c5_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 47U, *chartInstance->c5_sfEvent);
        *chartInstance->c5_is_zidong = c5_IN_off;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c5_sfEvent);
        c5_enter_atomic_off(chartInstance);
      } else {
        guard1 = true;
      }
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 47U,
                 *chartInstance->c5_sfEvent);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 47U, *chartInstance->c5_sfEvent);
}

static void c5_t10guiling(SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c5_debug_family_var_map[3];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 1.0;
  boolean_T c5_out;
  real_T c5_b_nargin = 0.0;
  real_T c5_b_nargout = 1.0;
  boolean_T c5_b_out;
  uint32_T c5_b_debug_family_var_map[2];
  real_T c5_c_nargin = 0.0;
  real_T c5_c_nargout = 0.0;
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 45U, *chartInstance->c5_sfEvent);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 46U, *chartInstance->c5_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_xd_debug_family_names,
    c5_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 0U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 1U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_out, 2U, c5_b_sf_marshallOut,
    c5_b_sf_marshallIn);
  if (!chartInstance->c5_dataWrittenToVector[24U]) {
    _SFD_DATA_READ_BEFORE_WRITE_ERROR(1U, 5U, 46U, *chartInstance->c5_sfEvent,
      false);
  }

  c5_out = CV_EML_IF(46, 0, 0, CV_RELATIONAL_EVAL(5U, 46U, 0,
    *chartInstance->c5_t10, *chartInstance->c5_t11, -1, 2U,
    *chartInstance->c5_t10 < *chartInstance->c5_t11));
  _SFD_SYMBOL_SCOPE_POP();
  if (c5_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 46U, *chartInstance->c5_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 35U, *chartInstance->c5_sfEvent);
    *chartInstance->c5_is_zidong = c5_IN_yanchishijian6;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 47U, *chartInstance->c5_sfEvent);
    *chartInstance->c5_temporalCounter_i1 = 0U;
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_pb_debug_family_names,
      c5_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    if (!chartInstance->c5_dataWrittenToVector[24U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(1U, 4U, 47U, *chartInstance->c5_sfEvent,
        false);
    }

    (*chartInstance->c5_t10)++;
    chartInstance->c5_dataWrittenToVector[24U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c5_t10, 1U, 4U, 47U,
                          *chartInstance->c5_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 47U,
                 *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_md_debug_family_names,
      c5_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_out, 2U, c5_b_sf_marshallOut,
      c5_b_sf_marshallIn);
    if (!chartInstance->c5_dataWrittenToVector[24U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(1U, 5U, 47U, *chartInstance->c5_sfEvent,
        false);
    }

    c5_b_out = CV_EML_IF(47, 0, 0, CV_RELATIONAL_EVAL(5U, 47U, 0,
      *chartInstance->c5_t10, *chartInstance->c5_t11, -1, 5U,
      *chartInstance->c5_t10 >= *chartInstance->c5_t11));
    _SFD_SYMBOL_SCOPE_POP();
    if (c5_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 47U, *chartInstance->c5_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 35U, *chartInstance->c5_sfEvent);
      *chartInstance->c5_is_zidong = c5_IN_off;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c5_sfEvent);
      c5_enter_atomic_off(chartInstance);
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 35U,
                   *chartInstance->c5_sfEvent);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 35U, *chartInstance->c5_sfEvent);
}

static void c5_enter_atomic_on6(SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c5_debug_family_var_map[2];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 0.0;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_rb_debug_family_names,
    c5_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 0U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 1U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  *chartInstance->c5_gghx = 0.0;
  chartInstance->c5_dataWrittenToVector[5U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_gghx, 30U, 4U, 21U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_ggzhiling1 = 0.0;
  chartInstance->c5_dataWrittenToVector[6U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_ggzhiling1, 31U, 4U, 21U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_ggzhiling2 = 0.0;
  chartInstance->c5_dataWrittenToVector[7U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_ggzhiling2, 32U, 4U, 21U,
                        *chartInstance->c5_sfEvent, false);
  *chartInstance->c5_yjhx = 1.0;
  chartInstance->c5_dataWrittenToVector[4U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_yjhx, 29U, 4U, 21U,
                        *chartInstance->c5_sfEvent, false);
  _SFD_SYMBOL_SCOPE_POP();
}

static void c5_on6(SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c5_debug_family_var_map[3];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 1.0;
  boolean_T c5_out;
  real_T c5_b_nargin = 0.0;
  real_T c5_b_nargout = 1.0;
  boolean_T c5_b_out;
  uint32_T c5_b_debug_family_var_map[2];
  real_T c5_c_nargin = 0.0;
  real_T c5_c_nargout = 0.0;
  real_T c5_d_nargin = 0.0;
  real_T c5_d_nargout = 0.0;
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 35U, *chartInstance->c5_sfEvent);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 34U, *chartInstance->c5_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_ae_debug_family_names,
    c5_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 0U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 1U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_out, 2U, c5_b_sf_marshallOut,
    c5_b_sf_marshallIn);
  if (CV_EML_COND(34, 0, 0, CV_RELATIONAL_EVAL(5U, 34U, 0,
        *chartInstance->c5_sddw, 0.0, -1, 0U, *chartInstance->c5_sddw == 0.0)) ||
      CV_EML_COND(34, 0, 1, CV_RELATIONAL_EVAL(5U, 34U, 1,
        *chartInstance->c5_yjdw, 0.0, -1, 0U, *chartInstance->c5_yjdw == 0.0)))
  {
    CV_EML_MCDC(34, 0, 0, true);
    CV_EML_IF(34, 0, 0, true);
    c5_out = true;
  } else {
    CV_EML_MCDC(34, 0, 0, false);
    CV_EML_IF(34, 0, 0, false);
    c5_out = false;
  }

  _SFD_SYMBOL_SCOPE_POP();
  if (c5_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 34U, *chartInstance->c5_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 21U, *chartInstance->c5_sfEvent);
    *chartInstance->c5_is_zidong = c5_IN_yajinshijian;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 41U, *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_sb_debug_family_names,
      c5_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    if (!chartInstance->c5_dataWrittenToVector[13U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(38U, 4U, 41U, *chartInstance->c5_sfEvent,
        false);
    }

    *chartInstance->c5_yjt += 0.002;
    chartInstance->c5_dataWrittenToVector[13U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c5_yjt, 38U, 4U, 41U,
                          *chartInstance->c5_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 36U,
                 *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_yd_debug_family_names,
      c5_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_out, 2U, c5_b_sf_marshallOut,
      c5_b_sf_marshallIn);
    if (CV_EML_COND(36, 0, 0, CV_RELATIONAL_EVAL(5U, 36U, 0,
          *chartInstance->c5_sddw, 1.0, -1, 0U, *chartInstance->c5_sddw == 1.0))
        && CV_EML_COND(36, 0, 1, CV_RELATIONAL_EVAL(5U, 36U, 1,
          *chartInstance->c5_yjdw, 1.0, -1, 0U, *chartInstance->c5_yjdw == 1.0))
        && CV_EML_COND(36, 0, 2, CV_RELATIONAL_EVAL(5U, 36U, 2,
          *chartInstance->c5_ggdw1, 1.0, -1, 0U, *chartInstance->c5_ggdw1 == 1.0))
        && CV_EML_COND(36, 0, 3, CV_RELATIONAL_EVAL(5U, 36U, 3,
          *chartInstance->c5_ggdw2, 1.0, -1, 0U, *chartInstance->c5_ggdw2 == 1.0)))
    {
      CV_EML_MCDC(36, 0, 0, true);
      CV_EML_IF(36, 0, 0, true);
      c5_b_out = true;
    } else {
      CV_EML_MCDC(36, 0, 0, false);
      CV_EML_IF(36, 0, 0, false);
      c5_b_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c5_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 36U, *chartInstance->c5_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 21U, *chartInstance->c5_sfEvent);
      *chartInstance->c5_is_zidong = c5_IN_t10guiling;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 35U, *chartInstance->c5_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_qb_debug_family_names,
        c5_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargin, 0U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargout, 1U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      *chartInstance->c5_t10 = 0.0;
      chartInstance->c5_dataWrittenToVector[24U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c5_t10, 1U, 4U, 35U,
                            *chartInstance->c5_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 21U,
                   *chartInstance->c5_sfEvent);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 21U, *chartInstance->c5_sfEvent);
}

static void c5_yajinshijian(SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c5_debug_family_var_map[3];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 1.0;
  boolean_T c5_out;
  real_T c5_b_nargin = 0.0;
  real_T c5_b_nargout = 1.0;
  boolean_T c5_b_out;
  uint32_T c5_b_debug_family_var_map[2];
  real_T c5_c_nargin = 0.0;
  real_T c5_c_nargout = 0.0;
  real_T c5_d_nargin = 0.0;
  real_T c5_d_nargout = 1.0;
  boolean_T c5_c_out;
  real_T c5_e_nargin = 0.0;
  real_T c5_e_nargout = 1.0;
  boolean_T c5_d_out;
  real_T c5_f_nargin = 0.0;
  real_T c5_f_nargout = 0.0;
  real_T c5_g_nargin = 0.0;
  real_T c5_g_nargout = 0.0;
  boolean_T guard1 = false;
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 83U, *chartInstance->c5_sfEvent);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 84U, *chartInstance->c5_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_ee_debug_family_names,
    c5_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 0U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 1U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_out, 2U, c5_b_sf_marshallOut,
    c5_b_sf_marshallIn);
  if (!chartInstance->c5_dataWrittenToVector[13U]) {
    _SFD_DATA_READ_BEFORE_WRITE_ERROR(38U, 5U, 84U, *chartInstance->c5_sfEvent,
      false);
  }

  c5_out = CV_EML_IF(84, 0, 0, CV_RELATIONAL_EVAL(5U, 84U, 0,
    *chartInstance->c5_yjt, 2.0, -1, 4U, *chartInstance->c5_yjt > 2.0));
  _SFD_SYMBOL_SCOPE_POP();
  if (c5_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 84U, *chartInstance->c5_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 41U, *chartInstance->c5_sfEvent);
    *chartInstance->c5_is_zidong = c5_IN_on18;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 15U, *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_vb_debug_family_names,
      c5_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    *chartInstance->c5_ggyichang = 1.0;
    chartInstance->c5_dataWrittenToVector[25U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c5_ggyichang, 44U, 4U, 15U,
                          *chartInstance->c5_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 85U,
                 *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_ce_debug_family_names,
      c5_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_out, 2U, c5_b_sf_marshallOut,
      c5_b_sf_marshallIn);
    if (!chartInstance->c5_dataWrittenToVector[13U]) {
      _SFD_DATA_READ_BEFORE_WRITE_ERROR(38U, 5U, 85U, *chartInstance->c5_sfEvent,
        false);
    }

    c5_b_out = CV_EML_IF(85, 0, 0, CV_RELATIONAL_EVAL(5U, 85U, 0,
      *chartInstance->c5_yjt, 2.0, -1, 3U, *chartInstance->c5_yjt <= 2.0));
    _SFD_SYMBOL_SCOPE_POP();
    guard1 = false;
    if (c5_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 85U, *chartInstance->c5_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 34U,
                   *chartInstance->c5_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_ae_debug_family_names,
        c5_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargin, 0U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargout, 1U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_out, 2U, c5_b_sf_marshallOut,
        c5_b_sf_marshallIn);
      if (CV_EML_COND(34, 0, 0, CV_RELATIONAL_EVAL(5U, 34U, 0,
            *chartInstance->c5_sddw, 0.0, -1, 0U, *chartInstance->c5_sddw == 0.0))
          || CV_EML_COND(34, 0, 1, CV_RELATIONAL_EVAL(5U, 34U, 1,
            *chartInstance->c5_yjdw, 0.0, -1, 0U, *chartInstance->c5_yjdw == 0.0)))
      {
        CV_EML_MCDC(34, 0, 0, true);
        CV_EML_IF(34, 0, 0, true);
        c5_c_out = true;
      } else {
        CV_EML_MCDC(34, 0, 0, false);
        CV_EML_IF(34, 0, 0, false);
        c5_c_out = false;
      }

      _SFD_SYMBOL_SCOPE_POP();
      if (c5_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 34U, *chartInstance->c5_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 41U, *chartInstance->c5_sfEvent);
        *chartInstance->c5_is_zidong = c5_IN_yajinshijian;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 41U, *chartInstance->c5_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_sb_debug_family_names,
          c5_b_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_f_nargin, 0U, c5_sf_marshallOut,
          c5_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_f_nargout, 1U,
          c5_sf_marshallOut, c5_sf_marshallIn);
        if (!chartInstance->c5_dataWrittenToVector[13U]) {
          _SFD_DATA_READ_BEFORE_WRITE_ERROR(38U, 4U, 41U,
            *chartInstance->c5_sfEvent, false);
        }

        *chartInstance->c5_yjt += 0.002;
        chartInstance->c5_dataWrittenToVector[13U] = true;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c5_yjt, 38U, 4U, 41U,
                              *chartInstance->c5_sfEvent, false);
        _SFD_SYMBOL_SCOPE_POP();
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 36U,
                     *chartInstance->c5_sfEvent);
        _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_yd_debug_family_names,
          c5_debug_family_var_map);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_e_nargin, 0U, c5_sf_marshallOut,
          c5_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_e_nargout, 1U,
          c5_sf_marshallOut, c5_sf_marshallIn);
        _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_out, 2U, c5_b_sf_marshallOut,
          c5_b_sf_marshallIn);
        if (CV_EML_COND(36, 0, 0, CV_RELATIONAL_EVAL(5U, 36U, 0,
              *chartInstance->c5_sddw, 1.0, -1, 0U, *chartInstance->c5_sddw ==
              1.0)) && CV_EML_COND(36, 0, 1, CV_RELATIONAL_EVAL(5U, 36U, 1,
              *chartInstance->c5_yjdw, 1.0, -1, 0U, *chartInstance->c5_yjdw ==
              1.0)) && CV_EML_COND(36, 0, 2, CV_RELATIONAL_EVAL(5U, 36U, 2,
              *chartInstance->c5_ggdw1, 1.0, -1, 0U, *chartInstance->c5_ggdw1 ==
              1.0)) && CV_EML_COND(36, 0, 3, CV_RELATIONAL_EVAL(5U, 36U, 3,
              *chartInstance->c5_ggdw2, 1.0, -1, 0U, *chartInstance->c5_ggdw2 ==
              1.0))) {
          CV_EML_MCDC(36, 0, 0, true);
          CV_EML_IF(36, 0, 0, true);
          c5_d_out = true;
        } else {
          CV_EML_MCDC(36, 0, 0, false);
          CV_EML_IF(36, 0, 0, false);
          c5_d_out = false;
        }

        _SFD_SYMBOL_SCOPE_POP();
        if (c5_d_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 36U, *chartInstance->c5_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 41U, *chartInstance->c5_sfEvent);
          *chartInstance->c5_is_zidong = c5_IN_t10guiling;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 35U, *chartInstance->c5_sfEvent);
          _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_qb_debug_family_names,
            c5_b_debug_family_var_map);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_g_nargin, 0U,
            c5_sf_marshallOut, c5_sf_marshallIn);
          _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_g_nargout, 1U,
            c5_sf_marshallOut, c5_sf_marshallIn);
          *chartInstance->c5_t10 = 0.0;
          chartInstance->c5_dataWrittenToVector[24U] = true;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c5_t10, 1U, 4U, 35U,
                                *chartInstance->c5_sfEvent, false);
          _SFD_SYMBOL_SCOPE_POP();
        } else {
          guard1 = true;
        }
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 41U,
                   *chartInstance->c5_sfEvent);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 41U, *chartInstance->c5_sfEvent);
}

static void c5_songkaishijian6(SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c5_debug_family_var_map[3];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 1.0;
  boolean_T c5_out;
  real_T c5_b_nargin = 0.0;
  real_T c5_b_nargout = 1.0;
  boolean_T c5_b_out;
  uint32_T c5_b_debug_family_var_map[2];
  real_T c5_c_nargin = 0.0;
  real_T c5_c_nargout = 0.0;
  real_T c5_d_nargin = 0.0;
  real_T c5_d_nargout = 0.0;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 81U, *chartInstance->c5_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_de_debug_family_names,
    c5_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 0U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 1U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_out, 2U, c5_b_sf_marshallOut,
    c5_b_sf_marshallIn);
  if (CV_EML_COND(81, 0, 0, CV_RELATIONAL_EVAL(5U, 81U, 0,
        *chartInstance->c5_sddw, 1.0, -1, 0U, *chartInstance->c5_sddw == 1.0)) &&
      CV_EML_COND(81, 0, 1, CV_RELATIONAL_EVAL(5U, 81U, 1,
        *chartInstance->c5_yjdw, 1.0, -1, 0U, *chartInstance->c5_yjdw == 1.0)) &&
      CV_EML_COND(81, 0, 2, CV_RELATIONAL_EVAL(5U, 81U, 2,
        *chartInstance->c5_ggdw1, 1.0, -1, 0U, *chartInstance->c5_ggdw1 == 1.0))
      && CV_EML_COND(81, 0, 3, CV_RELATIONAL_EVAL(5U, 81U, 3,
        *chartInstance->c5_ggdw2, 1.0, -1, 0U, *chartInstance->c5_ggdw2 == 1.0)))
  {
    CV_EML_MCDC(81, 0, 0, true);
    CV_EML_IF(81, 0, 0, true);
    c5_out = true;
  } else {
    CV_EML_MCDC(81, 0, 0, false);
    CV_EML_IF(81, 0, 0, false);
    c5_out = false;
  }

  _SFD_SYMBOL_SCOPE_POP();
  if (c5_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 81U, *chartInstance->c5_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 31U, *chartInstance->c5_sfEvent);
    *chartInstance->c5_is_zidong = c5_IN_on19;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 16U, *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_ub_debug_family_names,
      c5_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_c_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    *chartInstance->c5_yjhx = 0.0;
    chartInstance->c5_dataWrittenToVector[4U] = true;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c5_yjhx, 29U, 4U, 16U,
                          *chartInstance->c5_sfEvent, false);
    _SFD_SYMBOL_SCOPE_POP();
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 80U,
                 *chartInstance->c5_sfEvent);
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c5_be_debug_family_names,
      c5_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargin, 0U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_nargout, 1U, c5_sf_marshallOut,
      c5_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_b_out, 2U, c5_b_sf_marshallOut,
      c5_b_sf_marshallIn);
    if (CV_EML_COND(80, 0, 0, CV_RELATIONAL_EVAL(5U, 80U, 0,
          *chartInstance->c5_sddw, 0.0, -1, 0U, *chartInstance->c5_sddw == 0.0))
        || CV_EML_COND(80, 0, 1, CV_RELATIONAL_EVAL(5U, 80U, 1,
          *chartInstance->c5_yjdw, 0.0, -1, 0U, *chartInstance->c5_yjdw == 0.0)))
    {
      CV_EML_MCDC(80, 0, 0, true);
      CV_EML_IF(80, 0, 0, true);
      c5_b_out = true;
    } else {
      CV_EML_MCDC(80, 0, 0, false);
      CV_EML_IF(80, 0, 0, false);
      c5_b_out = false;
    }

    _SFD_SYMBOL_SCOPE_POP();
    if (c5_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 80U, *chartInstance->c5_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 31U, *chartInstance->c5_sfEvent);
      *chartInstance->c5_is_zidong = c5_IN_songkaishijian6;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 31U, *chartInstance->c5_sfEvent);
      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_tb_debug_family_names,
        c5_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargin, 0U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_d_nargout, 1U, c5_sf_marshallOut,
        c5_sf_marshallIn);
      if (!chartInstance->c5_dataWrittenToVector[13U]) {
        _SFD_DATA_READ_BEFORE_WRITE_ERROR(38U, 4U, 31U,
          *chartInstance->c5_sfEvent, false);
      }

      *chartInstance->c5_yjt += 0.002;
      chartInstance->c5_dataWrittenToVector[13U] = true;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c5_yjt, 38U, 4U, 31U,
                            *chartInstance->c5_sfEvent, false);
      _SFD_SYMBOL_SCOPE_POP();
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 31U,
                   *chartInstance->c5_sfEvent);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 31U, *chartInstance->c5_sfEvent);
}

static void c5_on18(SFc5_kaiguangai1108InstanceStruct *chartInstance)
{
  uint32_T c5_debug_family_var_map[2];
  real_T c5_nargin = 0.0;
  real_T c5_nargout = 0.0;
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 82U, *chartInstance->c5_sfEvent);
  _SFD_CS_CALL(STATE_INACTIVE_TAG, 15U, *chartInstance->c5_sfEvent);
  *chartInstance->c5_is_zidong = c5_IN_songkaishijian6;
  _SFD_CS_CALL(STATE_ACTIVE_TAG, 31U, *chartInstance->c5_sfEvent);
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 2U, 2U, c5_tb_debug_family_names,
    c5_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargin, 0U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c5_nargout, 1U, c5_sf_marshallOut,
    c5_sf_marshallIn);
  if (!chartInstance->c5_dataWrittenToVector[13U]) {
    _SFD_DATA_READ_BEFORE_WRITE_ERROR(38U, 4U, 31U, *chartInstance->c5_sfEvent,
      false);
  }

  *chartInstance->c5_yjt += 0.002;
  chartInstance->c5_dataWrittenToVector[13U] = true;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c5_yjt, 38U, 4U, 31U,
                        *chartInstance->c5_sfEvent, false);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 15U, *chartInstance->c5_sfEvent);
}

static void init_script_number_translation(uint32_T c5_machineNumber, uint32_T
  c5_chartNumber, uint32_T c5_instanceNumber)
{
  (void)c5_machineNumber;
  (void)c5_chartNumber;
  (void)c5_instanceNumber;
}

static const mxArray *c5_sf_marshallOut(void *chartInstanceVoid, void *c5_inData)
{
  const mxArray *c5_mxArrayOutData;
  real_T c5_u;
  const mxArray *c5_y = NULL;
  SFc5_kaiguangai1108InstanceStruct *chartInstance;
  chartInstance = (SFc5_kaiguangai1108InstanceStruct *)chartInstanceVoid;
  c5_mxArrayOutData = NULL;
  c5_mxArrayOutData = NULL;
  c5_u = *(real_T *)c5_inData;
  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_create("y", &c5_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c5_mxArrayOutData, c5_y, false);
  return c5_mxArrayOutData;
}

static real_T c5_emlrt_marshallIn(SFc5_kaiguangai1108InstanceStruct
  *chartInstance, const mxArray *c5_nargout, const char_T *c5_identifier)
{
  real_T c5_y;
  emlrtMsgIdentifier c5_thisId;
  c5_thisId.fIdentifier = c5_identifier;
  c5_thisId.fParent = NULL;
  c5_thisId.bParentIsCell = false;
  c5_y = c5_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_nargout), &c5_thisId);
  sf_mex_destroy(&c5_nargout);
  return c5_y;
}

static real_T c5_b_emlrt_marshallIn(SFc5_kaiguangai1108InstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId)
{
  real_T c5_y;
  real_T c5_d0;
  (void)chartInstance;
  sf_mex_import(c5_parentId, sf_mex_dup(c5_u), &c5_d0, 1, 0, 0U, 0, 0U, 0);
  c5_y = c5_d0;
  sf_mex_destroy(&c5_u);
  return c5_y;
}

static void c5_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData)
{
  const mxArray *c5_nargout;
  const char_T *c5_identifier;
  emlrtMsgIdentifier c5_thisId;
  real_T c5_y;
  SFc5_kaiguangai1108InstanceStruct *chartInstance;
  chartInstance = (SFc5_kaiguangai1108InstanceStruct *)chartInstanceVoid;
  c5_nargout = sf_mex_dup(c5_mxArrayInData);
  c5_identifier = c5_varName;
  c5_thisId.fIdentifier = c5_identifier;
  c5_thisId.fParent = NULL;
  c5_thisId.bParentIsCell = false;
  c5_y = c5_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_nargout), &c5_thisId);
  sf_mex_destroy(&c5_nargout);
  *(real_T *)c5_outData = c5_y;
  sf_mex_destroy(&c5_mxArrayInData);
}

static const mxArray *c5_b_sf_marshallOut(void *chartInstanceVoid, void
  *c5_inData)
{
  const mxArray *c5_mxArrayOutData;
  boolean_T c5_u;
  const mxArray *c5_y = NULL;
  SFc5_kaiguangai1108InstanceStruct *chartInstance;
  chartInstance = (SFc5_kaiguangai1108InstanceStruct *)chartInstanceVoid;
  c5_mxArrayOutData = NULL;
  c5_mxArrayOutData = NULL;
  c5_u = *(boolean_T *)c5_inData;
  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_create("y", &c5_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c5_mxArrayOutData, c5_y, false);
  return c5_mxArrayOutData;
}

static boolean_T c5_c_emlrt_marshallIn(SFc5_kaiguangai1108InstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId)
{
  boolean_T c5_y;
  boolean_T c5_b0;
  (void)chartInstance;
  sf_mex_import(c5_parentId, sf_mex_dup(c5_u), &c5_b0, 1, 11, 0U, 0, 0U, 0);
  c5_y = c5_b0;
  sf_mex_destroy(&c5_u);
  return c5_y;
}

static void c5_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData)
{
  const mxArray *c5_sf_internal_predicateOutput;
  const char_T *c5_identifier;
  emlrtMsgIdentifier c5_thisId;
  boolean_T c5_y;
  SFc5_kaiguangai1108InstanceStruct *chartInstance;
  chartInstance = (SFc5_kaiguangai1108InstanceStruct *)chartInstanceVoid;
  c5_sf_internal_predicateOutput = sf_mex_dup(c5_mxArrayInData);
  c5_identifier = c5_varName;
  c5_thisId.fIdentifier = c5_identifier;
  c5_thisId.fParent = NULL;
  c5_thisId.bParentIsCell = false;
  c5_y = c5_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c5_sf_internal_predicateOutput), &c5_thisId);
  sf_mex_destroy(&c5_sf_internal_predicateOutput);
  *(boolean_T *)c5_outData = c5_y;
  sf_mex_destroy(&c5_mxArrayInData);
}

const mxArray *sf_c5_kaiguangai1108_get_eml_resolved_functions_info(void)
{
  const mxArray *c5_nameCaptureInfo = NULL;
  c5_nameCaptureInfo = NULL;
  sf_mex_assign(&c5_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c5_nameCaptureInfo;
}

static const mxArray *c5_c_sf_marshallOut(void *chartInstanceVoid, void
  *c5_inData)
{
  const mxArray *c5_mxArrayOutData;
  int32_T c5_u;
  const mxArray *c5_y = NULL;
  SFc5_kaiguangai1108InstanceStruct *chartInstance;
  chartInstance = (SFc5_kaiguangai1108InstanceStruct *)chartInstanceVoid;
  c5_mxArrayOutData = NULL;
  c5_mxArrayOutData = NULL;
  c5_u = *(int32_T *)c5_inData;
  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_create("y", &c5_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c5_mxArrayOutData, c5_y, false);
  return c5_mxArrayOutData;
}

static int32_T c5_d_emlrt_marshallIn(SFc5_kaiguangai1108InstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId)
{
  int32_T c5_y;
  int32_T c5_i1;
  (void)chartInstance;
  sf_mex_import(c5_parentId, sf_mex_dup(c5_u), &c5_i1, 1, 6, 0U, 0, 0U, 0);
  c5_y = c5_i1;
  sf_mex_destroy(&c5_u);
  return c5_y;
}

static void c5_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData)
{
  const mxArray *c5_b_sfEvent;
  const char_T *c5_identifier;
  emlrtMsgIdentifier c5_thisId;
  int32_T c5_y;
  SFc5_kaiguangai1108InstanceStruct *chartInstance;
  chartInstance = (SFc5_kaiguangai1108InstanceStruct *)chartInstanceVoid;
  c5_b_sfEvent = sf_mex_dup(c5_mxArrayInData);
  c5_identifier = c5_varName;
  c5_thisId.fIdentifier = c5_identifier;
  c5_thisId.fParent = NULL;
  c5_thisId.bParentIsCell = false;
  c5_y = c5_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_b_sfEvent),
    &c5_thisId);
  sf_mex_destroy(&c5_b_sfEvent);
  *(int32_T *)c5_outData = c5_y;
  sf_mex_destroy(&c5_mxArrayInData);
}

static const mxArray *c5_d_sf_marshallOut(void *chartInstanceVoid, void
  *c5_inData)
{
  const mxArray *c5_mxArrayOutData;
  uint8_T c5_u;
  const mxArray *c5_y = NULL;
  SFc5_kaiguangai1108InstanceStruct *chartInstance;
  chartInstance = (SFc5_kaiguangai1108InstanceStruct *)chartInstanceVoid;
  c5_mxArrayOutData = NULL;
  c5_mxArrayOutData = NULL;
  c5_u = *(uint8_T *)c5_inData;
  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_create("y", &c5_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c5_mxArrayOutData, c5_y, false);
  return c5_mxArrayOutData;
}

static uint8_T c5_e_emlrt_marshallIn(SFc5_kaiguangai1108InstanceStruct
  *chartInstance, const mxArray *c5_b_is_zidong, const char_T *c5_identifier)
{
  uint8_T c5_y;
  emlrtMsgIdentifier c5_thisId;
  c5_thisId.fIdentifier = c5_identifier;
  c5_thisId.fParent = NULL;
  c5_thisId.bParentIsCell = false;
  c5_y = c5_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_b_is_zidong),
    &c5_thisId);
  sf_mex_destroy(&c5_b_is_zidong);
  return c5_y;
}

static uint8_T c5_f_emlrt_marshallIn(SFc5_kaiguangai1108InstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId)
{
  uint8_T c5_y;
  uint8_T c5_u0;
  (void)chartInstance;
  sf_mex_import(c5_parentId, sf_mex_dup(c5_u), &c5_u0, 1, 3, 0U, 0, 0U, 0);
  c5_y = c5_u0;
  sf_mex_destroy(&c5_u);
  return c5_y;
}

static void c5_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c5_mxArrayInData, const char_T *c5_varName, void *c5_outData)
{
  const mxArray *c5_b_is_zidong;
  const char_T *c5_identifier;
  emlrtMsgIdentifier c5_thisId;
  uint8_T c5_y;
  SFc5_kaiguangai1108InstanceStruct *chartInstance;
  chartInstance = (SFc5_kaiguangai1108InstanceStruct *)chartInstanceVoid;
  c5_b_is_zidong = sf_mex_dup(c5_mxArrayInData);
  c5_identifier = c5_varName;
  c5_thisId.fIdentifier = c5_identifier;
  c5_thisId.fParent = NULL;
  c5_thisId.bParentIsCell = false;
  c5_y = c5_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_b_is_zidong),
    &c5_thisId);
  sf_mex_destroy(&c5_b_is_zidong);
  *(uint8_T *)c5_outData = c5_y;
  sf_mex_destroy(&c5_mxArrayInData);
}

static uint16_T c5_g_emlrt_marshallIn(SFc5_kaiguangai1108InstanceStruct
  *chartInstance, const mxArray *c5_b_temporalCounter_i1, const char_T
  *c5_identifier)
{
  uint16_T c5_y;
  emlrtMsgIdentifier c5_thisId;
  c5_thisId.fIdentifier = c5_identifier;
  c5_thisId.fParent = NULL;
  c5_thisId.bParentIsCell = false;
  c5_y = c5_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_b_temporalCounter_i1),
    &c5_thisId);
  sf_mex_destroy(&c5_b_temporalCounter_i1);
  return c5_y;
}

static uint16_T c5_h_emlrt_marshallIn(SFc5_kaiguangai1108InstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId)
{
  uint16_T c5_y;
  uint16_T c5_u1;
  (void)chartInstance;
  sf_mex_import(c5_parentId, sf_mex_dup(c5_u), &c5_u1, 1, 5, 0U, 0, 0U, 0);
  c5_y = c5_u1;
  sf_mex_destroy(&c5_u);
  return c5_y;
}

static void c5_i_emlrt_marshallIn(SFc5_kaiguangai1108InstanceStruct
  *chartInstance, const mxArray *c5_b_dataWrittenToVector, const char_T
  *c5_identifier, boolean_T c5_y[27])
{
  emlrtMsgIdentifier c5_thisId;
  c5_thisId.fIdentifier = c5_identifier;
  c5_thisId.fParent = NULL;
  c5_thisId.bParentIsCell = false;
  c5_j_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_b_dataWrittenToVector),
                        &c5_thisId, c5_y);
  sf_mex_destroy(&c5_b_dataWrittenToVector);
}

static void c5_j_emlrt_marshallIn(SFc5_kaiguangai1108InstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId,
  boolean_T c5_y[27])
{
  boolean_T c5_bv1[27];
  int32_T c5_i2;
  (void)chartInstance;
  sf_mex_import(c5_parentId, sf_mex_dup(c5_u), c5_bv1, 1, 11, 0U, 1, 0U, 1, 27);
  for (c5_i2 = 0; c5_i2 < 27; c5_i2++) {
    c5_y[c5_i2] = c5_bv1[c5_i2];
  }

  sf_mex_destroy(&c5_u);
}

static const mxArray *c5_k_emlrt_marshallIn(SFc5_kaiguangai1108InstanceStruct
  *chartInstance, const mxArray *c5_b_setSimStateSideEffectsInfo, const char_T
  *c5_identifier)
{
  const mxArray *c5_y = NULL;
  emlrtMsgIdentifier c5_thisId;
  c5_y = NULL;
  c5_thisId.fIdentifier = c5_identifier;
  c5_thisId.fParent = NULL;
  c5_thisId.bParentIsCell = false;
  sf_mex_assign(&c5_y, c5_l_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c5_b_setSimStateSideEffectsInfo), &c5_thisId), false);
  sf_mex_destroy(&c5_b_setSimStateSideEffectsInfo);
  return c5_y;
}

static const mxArray *c5_l_emlrt_marshallIn(SFc5_kaiguangai1108InstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId)
{
  const mxArray *c5_y = NULL;
  (void)chartInstance;
  (void)c5_parentId;
  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_duplicatearraysafe(&c5_u), false);
  sf_mex_destroy(&c5_u);
  return c5_y;
}

static const mxArray *sf_get_hover_data_for_msg
  (SFc5_kaiguangai1108InstanceStruct *chartInstance, int32_T c5_ssid)
{
  const mxArray *c5_msgInfo;
  (void)chartInstance;
  (void)c5_ssid;
  c5_msgInfo = NULL;
  return NULL;
}

static void c5_init_sf_message_store_memory(SFc5_kaiguangai1108InstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_dsm_address_info(SFc5_kaiguangai1108InstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc5_kaiguangai1108InstanceStruct
  *chartInstance)
{
  chartInstance->c5_sfEvent = (int32_T *)ssGetDWork_wrapper(chartInstance->S, 0);
  chartInstance->c5_is_active_c5_kaiguangai1108 = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 1);
  chartInstance->c5_is_c5_kaiguangai1108 = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 2);
  chartInstance->c5_is_zidong = (uint8_T *)ssGetDWork_wrapper(chartInstance->S,
    3);
  chartInstance->c5_b_start = (boolean_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c5_kgdw1 = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c5_kgdw2 = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c5_skhx = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c5_kghx = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c5_kgzhiling1 = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c5_kgzhiling2 = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c5_yjhx = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 5);
  chartInstance->c5_gghx = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 6);
  chartInstance->c5_ggzhiling1 = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 7);
  chartInstance->c5_ggzhiling2 = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 8);
  chartInstance->c5_skt = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 9);
  chartInstance->c5_kgt = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 10);
  chartInstance->c5_sdt = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 11);
  chartInstance->c5_jst = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 12);
  chartInstance->c5_ggt = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 13);
  chartInstance->c5_yjt = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 14);
  chartInstance->c5_ggdw1 = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c5_ggdw2 = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c5_kghc = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 5);
  chartInstance->c5_gghc = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 6);
  chartInstance->c5_sddw = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 7);
  chartInstance->c5_yjdw = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 8);
  chartInstance->c5_skdw = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 9);
  chartInstance->c5_jsdw = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 10);
  chartInstance->c5_t1 = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    11);
  chartInstance->c5_t3 = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    12);
  chartInstance->c5_t5 = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    13);
  chartInstance->c5_t7 = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    14);
  chartInstance->c5_t9 = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    15);
  chartInstance->c5_t11 = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 16);
  chartInstance->c5_t = (real_T *)ssGetDWork_wrapper(chartInstance->S, 4);
  chartInstance->c5_t2 = (real_T *)ssGetDWork_wrapper(chartInstance->S, 5);
  chartInstance->c5_t4 = (real_T *)ssGetDWork_wrapper(chartInstance->S, 6);
  chartInstance->c5_t6 = (real_T *)ssGetDWork_wrapper(chartInstance->S, 7);
  chartInstance->c5_t8 = (real_T *)ssGetDWork_wrapper(chartInstance->S, 8);
  chartInstance->c5_shedingcishu = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 17);
  chartInstance->c5_yikaicishu = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 15);
  chartInstance->c5_skyichang = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 16);
  chartInstance->c5_kgyichang = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 17);
  chartInstance->c5_sdyichang = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 18);
  chartInstance->c5_jsyichang = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 19);
  chartInstance->c5_jieshu = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 18);
  chartInstance->c5_t10 = (real_T *)ssGetDWork_wrapper(chartInstance->S, 9);
  chartInstance->c5_ggyichang = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 20);
  chartInstance->c5_yjyichang = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 21);
  chartInstance->c5_temporalCounter_i1 = (uint16_T *)ssGetDWork_wrapper
    (chartInstance->S, 10);
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
void sf_c5_kaiguangai1108_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1072956521U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3793757905U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3895981822U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1664230660U);
}

mxArray* sf_c5_kaiguangai1108_get_post_codegen_info(void);
mxArray *sf_c5_kaiguangai1108_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("UumLh6hejOYGGPjidi9IUC");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,19,3,dataFields);

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
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,21,3,dataFields);

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

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,20,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,20,"type",mxType);
    }

    mxSetField(mxData,20,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
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
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxData);
  }

  {
    mxArray* mxPostCodegenInfo = sf_c5_kaiguangai1108_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c5_kaiguangai1108_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c5_kaiguangai1108_jit_fallback_info(void)
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

mxArray *sf_c5_kaiguangai1108_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c5_kaiguangai1108_get_post_codegen_info(void)
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

static const mxArray *sf_get_sim_state_info_c5_kaiguangai1108(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x10'type','srcId','name','auxInfo'{{M[1],M[26],T\"gghx\",},{M[1],M[27],T\"ggt\",},{M[1],M[368],T\"ggyichang\",},{M[1],M[28],T\"ggzhiling1\",},{M[1],M[29],T\"ggzhiling2\",},{M[1],M[19],T\"jst\",},{M[1],M[369],T\"jsyichang\",},{M[1],M[30],T\"kghx\",},{M[1],M[20],T\"kgt\",},{M[1],M[370],T\"kgyichang\",}}",
    "100 S1x10'type','srcId','name','auxInfo'{{M[1],M[31],T\"kgzhiling1\",},{M[1],M[32],T\"kgzhiling2\",},{M[1],M[18],T\"sdt\",},{M[1],M[371],T\"sdyichang\",},{M[1],M[14],T\"skhx\",},{M[1],M[17],T\"skt\",},{M[1],M[372],T\"skyichang\",},{M[1],M[174],T\"yikaicishu\",},{M[1],M[16],T\"yjhx\",},{M[1],M[15],T\"yjt\",}}",
    "100 S1x10'type','srcId','name','auxInfo'{{M[1],M[373],T\"yjyichang\",},{M[3],M[59],T\"t\",},{M[3],M[344],T\"t10\",},{M[3],M[74],T\"t2\",},{M[3],M[104],T\"t4\",},{M[3],M[124],T\"t6\",},{M[3],M[168],T\"t8\",},{M[8],M[0],T\"is_active_c5_kaiguangai1108\",},{M[9],M[0],T\"is_c5_kaiguangai1108\",},{M[9],M[374],T\"is_zidong\",}}",
    "100 S1x2'type','srcId','name','auxInfo'{{M[11],M[0],T\"temporalCounter_i1\",S'et','os','ct'{{T\"wu\",M1x6[56 69 108 126 153 337],M[1]}}},{M[15],M[0],T\"dataWrittenToVector\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 32, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c5_kaiguangai1108_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const mxArray* sf_opaque_get_hover_data_for_msg(void* chartInstance,
  int32_T msgSSID)
{
  return sf_get_hover_data_for_msg( (SFc5_kaiguangai1108InstanceStruct *)
    chartInstance, msgSSID);
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc5_kaiguangai1108InstanceStruct *chartInstance =
      (SFc5_kaiguangai1108InstanceStruct *)sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _kaiguangai1108MachineNumber_,
           5,
           48,
           86,
           0,
           46,
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
          _SFD_SET_DATA_PROPS(0,0,0,0,"t");
          _SFD_SET_DATA_PROPS(1,0,0,0,"t10");
          _SFD_SET_DATA_PROPS(2,0,0,0,"t2");
          _SFD_SET_DATA_PROPS(3,0,0,0,"t4");
          _SFD_SET_DATA_PROPS(4,0,0,0,"t6");
          _SFD_SET_DATA_PROPS(5,0,0,0,"t8");
          _SFD_SET_DATA_PROPS(6,1,1,0,"start");
          _SFD_SET_DATA_PROPS(7,1,1,0,"kgdw1");
          _SFD_SET_DATA_PROPS(8,1,1,0,"kgdw2");
          _SFD_SET_DATA_PROPS(9,1,1,0,"ggdw1");
          _SFD_SET_DATA_PROPS(10,1,1,0,"ggdw2");
          _SFD_SET_DATA_PROPS(11,1,1,0,"kghc");
          _SFD_SET_DATA_PROPS(12,1,1,0,"gghc");
          _SFD_SET_DATA_PROPS(13,1,1,0,"sddw");
          _SFD_SET_DATA_PROPS(14,1,1,0,"yjdw");
          _SFD_SET_DATA_PROPS(15,1,1,0,"skdw");
          _SFD_SET_DATA_PROPS(16,1,1,0,"jsdw");
          _SFD_SET_DATA_PROPS(17,1,1,0,"t1");
          _SFD_SET_DATA_PROPS(18,1,1,0,"t3");
          _SFD_SET_DATA_PROPS(19,1,1,0,"t5");
          _SFD_SET_DATA_PROPS(20,1,1,0,"t7");
          _SFD_SET_DATA_PROPS(21,1,1,0,"t9");
          _SFD_SET_DATA_PROPS(22,1,1,0,"t11");
          _SFD_SET_DATA_PROPS(23,1,1,0,"shedingcishu");
          _SFD_SET_DATA_PROPS(24,1,1,0,"jieshu");
          _SFD_SET_DATA_PROPS(25,2,0,1,"skhx");
          _SFD_SET_DATA_PROPS(26,2,0,1,"kghx");
          _SFD_SET_DATA_PROPS(27,2,0,1,"kgzhiling1");
          _SFD_SET_DATA_PROPS(28,2,0,1,"kgzhiling2");
          _SFD_SET_DATA_PROPS(29,2,0,1,"yjhx");
          _SFD_SET_DATA_PROPS(30,2,0,1,"gghx");
          _SFD_SET_DATA_PROPS(31,2,0,1,"ggzhiling1");
          _SFD_SET_DATA_PROPS(32,2,0,1,"ggzhiling2");
          _SFD_SET_DATA_PROPS(33,2,0,1,"skt");
          _SFD_SET_DATA_PROPS(34,2,0,1,"kgt");
          _SFD_SET_DATA_PROPS(35,2,0,1,"sdt");
          _SFD_SET_DATA_PROPS(36,2,0,1,"jst");
          _SFD_SET_DATA_PROPS(37,2,0,1,"ggt");
          _SFD_SET_DATA_PROPS(38,2,0,1,"yjt");
          _SFD_SET_DATA_PROPS(39,2,0,1,"yikaicishu");
          _SFD_SET_DATA_PROPS(40,2,0,1,"skyichang");
          _SFD_SET_DATA_PROPS(41,2,0,1,"kgyichang");
          _SFD_SET_DATA_PROPS(42,2,0,1,"sdyichang");
          _SFD_SET_DATA_PROPS(43,2,0,1,"jsyichang");
          _SFD_SET_DATA_PROPS(44,2,0,1,"ggyichang");
          _SFD_SET_DATA_PROPS(45,2,0,1,"yjyichang");
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
          _SFD_STATE_INFO(19,0,0);
          _SFD_STATE_INFO(20,0,0);
          _SFD_STATE_INFO(21,0,0);
          _SFD_STATE_INFO(22,0,0);
          _SFD_STATE_INFO(23,0,0);
          _SFD_STATE_INFO(24,0,0);
          _SFD_STATE_INFO(25,0,0);
          _SFD_STATE_INFO(26,0,0);
          _SFD_STATE_INFO(27,0,0);
          _SFD_STATE_INFO(28,0,0);
          _SFD_STATE_INFO(29,0,0);
          _SFD_STATE_INFO(30,0,0);
          _SFD_STATE_INFO(31,0,0);
          _SFD_STATE_INFO(32,0,0);
          _SFD_STATE_INFO(33,0,0);
          _SFD_STATE_INFO(34,0,0);
          _SFD_STATE_INFO(35,0,0);
          _SFD_STATE_INFO(36,0,0);
          _SFD_STATE_INFO(37,0,0);
          _SFD_STATE_INFO(38,0,0);
          _SFD_STATE_INFO(39,0,0);
          _SFD_STATE_INFO(40,0,0);
          _SFD_STATE_INFO(41,0,0);
          _SFD_STATE_INFO(42,0,0);
          _SFD_STATE_INFO(43,0,0);
          _SFD_STATE_INFO(44,0,0);
          _SFD_STATE_INFO(45,0,0);
          _SFD_STATE_INFO(46,0,0);
          _SFD_STATE_INFO(47,0,0);
          _SFD_CH_SUBSTATE_COUNT(1);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_ST_SUBSTATE_COUNT(0,47);
          _SFD_ST_SUBSTATE_INDEX(0,0,1);
          _SFD_ST_SUBSTATE_INDEX(0,1,2);
          _SFD_ST_SUBSTATE_INDEX(0,2,3);
          _SFD_ST_SUBSTATE_INDEX(0,3,4);
          _SFD_ST_SUBSTATE_INDEX(0,4,5);
          _SFD_ST_SUBSTATE_INDEX(0,5,6);
          _SFD_ST_SUBSTATE_INDEX(0,6,7);
          _SFD_ST_SUBSTATE_INDEX(0,7,8);
          _SFD_ST_SUBSTATE_INDEX(0,8,9);
          _SFD_ST_SUBSTATE_INDEX(0,9,10);
          _SFD_ST_SUBSTATE_INDEX(0,10,11);
          _SFD_ST_SUBSTATE_INDEX(0,11,12);
          _SFD_ST_SUBSTATE_INDEX(0,12,13);
          _SFD_ST_SUBSTATE_INDEX(0,13,14);
          _SFD_ST_SUBSTATE_INDEX(0,14,15);
          _SFD_ST_SUBSTATE_INDEX(0,15,16);
          _SFD_ST_SUBSTATE_INDEX(0,16,17);
          _SFD_ST_SUBSTATE_INDEX(0,17,18);
          _SFD_ST_SUBSTATE_INDEX(0,18,19);
          _SFD_ST_SUBSTATE_INDEX(0,19,20);
          _SFD_ST_SUBSTATE_INDEX(0,20,21);
          _SFD_ST_SUBSTATE_INDEX(0,21,22);
          _SFD_ST_SUBSTATE_INDEX(0,22,23);
          _SFD_ST_SUBSTATE_INDEX(0,23,24);
          _SFD_ST_SUBSTATE_INDEX(0,24,25);
          _SFD_ST_SUBSTATE_INDEX(0,25,26);
          _SFD_ST_SUBSTATE_INDEX(0,26,27);
          _SFD_ST_SUBSTATE_INDEX(0,27,28);
          _SFD_ST_SUBSTATE_INDEX(0,28,29);
          _SFD_ST_SUBSTATE_INDEX(0,29,30);
          _SFD_ST_SUBSTATE_INDEX(0,30,31);
          _SFD_ST_SUBSTATE_INDEX(0,31,32);
          _SFD_ST_SUBSTATE_INDEX(0,32,33);
          _SFD_ST_SUBSTATE_INDEX(0,33,34);
          _SFD_ST_SUBSTATE_INDEX(0,34,35);
          _SFD_ST_SUBSTATE_INDEX(0,35,36);
          _SFD_ST_SUBSTATE_INDEX(0,36,37);
          _SFD_ST_SUBSTATE_INDEX(0,37,38);
          _SFD_ST_SUBSTATE_INDEX(0,38,39);
          _SFD_ST_SUBSTATE_INDEX(0,39,40);
          _SFD_ST_SUBSTATE_INDEX(0,40,41);
          _SFD_ST_SUBSTATE_INDEX(0,41,42);
          _SFD_ST_SUBSTATE_INDEX(0,42,43);
          _SFD_ST_SUBSTATE_INDEX(0,43,44);
          _SFD_ST_SUBSTATE_INDEX(0,44,45);
          _SFD_ST_SUBSTATE_INDEX(0,45,46);
          _SFD_ST_SUBSTATE_INDEX(0,46,47);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,0);
          _SFD_ST_SUBSTATE_COUNT(4,0);
          _SFD_ST_SUBSTATE_COUNT(5,0);
          _SFD_ST_SUBSTATE_COUNT(6,0);
          _SFD_ST_SUBSTATE_COUNT(7,0);
          _SFD_ST_SUBSTATE_COUNT(8,0);
          _SFD_ST_SUBSTATE_COUNT(9,0);
          _SFD_ST_SUBSTATE_COUNT(10,0);
          _SFD_ST_SUBSTATE_COUNT(11,0);
          _SFD_ST_SUBSTATE_COUNT(12,0);
          _SFD_ST_SUBSTATE_COUNT(13,0);
          _SFD_ST_SUBSTATE_COUNT(14,0);
          _SFD_ST_SUBSTATE_COUNT(15,0);
          _SFD_ST_SUBSTATE_COUNT(16,0);
          _SFD_ST_SUBSTATE_COUNT(17,0);
          _SFD_ST_SUBSTATE_COUNT(18,0);
          _SFD_ST_SUBSTATE_COUNT(19,0);
          _SFD_ST_SUBSTATE_COUNT(20,0);
          _SFD_ST_SUBSTATE_COUNT(21,0);
          _SFD_ST_SUBSTATE_COUNT(22,0);
          _SFD_ST_SUBSTATE_COUNT(23,0);
          _SFD_ST_SUBSTATE_COUNT(24,0);
          _SFD_ST_SUBSTATE_COUNT(25,0);
          _SFD_ST_SUBSTATE_COUNT(26,0);
          _SFD_ST_SUBSTATE_COUNT(27,0);
          _SFD_ST_SUBSTATE_COUNT(28,0);
          _SFD_ST_SUBSTATE_COUNT(29,0);
          _SFD_ST_SUBSTATE_COUNT(30,0);
          _SFD_ST_SUBSTATE_COUNT(31,0);
          _SFD_ST_SUBSTATE_COUNT(32,0);
          _SFD_ST_SUBSTATE_COUNT(33,0);
          _SFD_ST_SUBSTATE_COUNT(34,0);
          _SFD_ST_SUBSTATE_COUNT(35,0);
          _SFD_ST_SUBSTATE_COUNT(36,0);
          _SFD_ST_SUBSTATE_COUNT(37,0);
          _SFD_ST_SUBSTATE_COUNT(38,0);
          _SFD_ST_SUBSTATE_COUNT(39,0);
          _SFD_ST_SUBSTATE_COUNT(40,0);
          _SFD_ST_SUBSTATE_COUNT(41,0);
          _SFD_ST_SUBSTATE_COUNT(42,0);
          _SFD_ST_SUBSTATE_COUNT(43,0);
          _SFD_ST_SUBSTATE_COUNT(44,0);
          _SFD_ST_SUBSTATE_COUNT(45,0);
          _SFD_ST_SUBSTATE_COUNT(46,0);
          _SFD_ST_SUBSTATE_COUNT(47,0);
        }

        _SFD_CV_INIT_CHART(1,0,0,0);

        {
          _SFD_CV_INIT_STATE(0,47,1,0,0,0,NULL,NULL);
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
          _SFD_CV_INIT_STATE(9,0,0,0,0,0,NULL,NULL);
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

        {
          _SFD_CV_INIT_STATE(19,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(20,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(21,0,0,0,0,0,NULL,NULL);
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
          _SFD_CV_INIT_STATE(32,0,0,0,0,0,NULL,NULL);
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

        {
          _SFD_CV_INIT_STATE(38,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(39,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(40,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(41,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(42,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(43,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(44,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(45,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(46,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(47,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(60,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(44,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(52,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(38,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(1,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(43,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(50,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(2,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(49,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(53,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(59,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(51,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(4,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(5,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(3,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(18,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(41,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(55,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(11,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(6,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(54,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(9,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(57,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(7,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(56,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(61,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(58,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(42,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(40,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(8,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(10,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(19,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(64,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(14,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(12,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(62,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(13,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(39,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(66,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(16,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(65,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(63,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(67,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(15,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(17,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(20,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(70,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(23,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(21,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(73,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(22,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(71,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(24,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(72,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(68,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(69,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(25,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(27,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(26,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(47,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(79,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(30,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(28,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(75,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(29,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(78,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(31,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(74,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(76,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(77,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(32,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(33,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(37,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(48,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(46,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(45,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(36,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(35,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(34,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(80,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(85,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(83,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(81,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(82,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(84,0,NULL,NULL,0,NULL);

        /* Initialization of MATLAB Function Model Coverage */
        _SFD_CV_INIT_EML(1,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(6,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(25,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(32,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(7,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(26,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(23,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(42,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(40,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(17,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(4,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(33,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(27,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(24,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(8,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(43,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(36,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(18,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(34,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(22,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(28,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(10,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(9,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(44,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(37,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(5,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(19,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(3,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(29,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(12,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(11,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(45,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(38,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(20,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(2,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(30,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(14,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(13,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(46,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(39,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(47,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(35,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(21,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(41,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(31,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(16,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(15,1,0,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML(52,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(52,0,0,1,17,1,17);

        {
          static int condStart[] = { 1, 10 };

          static int condEnd[] = { 8, 17 };

          static int pfixExpr[] = { 0, 1, -2 };

          _SFD_CV_INIT_EML_MCDC(52,0,0,1,17,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(52,0,0,1,8,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(52,0,1,10,17,-1,0);
        _SFD_CV_INIT_EML(38,0,0,0,1,0,0,0,0,0,5,1);
        _SFD_CV_INIT_EML_IF(38,0,0,1,47,1,47);

        {
          static int condStart[] = { 1, 11, 21, 31, 40 };

          static int condEnd[] = { 9, 19, 29, 38, 47 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3, 4, -3 };

          _SFD_CV_INIT_EML_MCDC(38,0,0,1,47,5,0,&(condStart[0]),&(condEnd[0]),9,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(38,0,0,1,9,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(38,0,1,11,19,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(38,0,2,21,29,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(38,0,3,31,38,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(38,0,4,40,47,-1,0);
        _SFD_CV_INIT_EML(1,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(1,0,0,1,17,1,17);

        {
          static int condStart[] = { 1, 10 };

          static int condEnd[] = { 8, 17 };

          static int pfixExpr[] = { 0, 1, -2 };

          _SFD_CV_INIT_EML_MCDC(1,0,0,1,17,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(1,0,0,1,8,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(1,0,1,10,17,-1,0);
        _SFD_CV_INIT_EML(43,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(43,0,0,1,9,1,9);
        _SFD_CV_INIT_EML_RELATIONAL(43,0,0,1,9,-1,0);
        _SFD_CV_INIT_EML(50,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(50,0,0,1,7,1,7);
        _SFD_CV_INIT_EML_RELATIONAL(50,0,0,1,7,-1,3);
        _SFD_CV_INIT_EML(2,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(2,0,0,1,17,1,17);

        {
          static int condStart[] = { 1, 10 };

          static int condEnd[] = { 8, 17 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(2,0,0,1,17,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(2,0,0,1,8,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(2,0,1,10,17,-1,0);
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
        _SFD_CV_INIT_EML(51,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(51,0,0,1,6,1,6);
        _SFD_CV_INIT_EML_RELATIONAL(51,0,0,1,6,-1,4);
        _SFD_CV_INIT_EML(4,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(4,0,0,1,5,1,5);
        _SFD_CV_INIT_EML_RELATIONAL(4,0,0,1,5,-1,2);
        _SFD_CV_INIT_EML(5,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(5,0,0,0,15,0,15);
        _SFD_CV_INIT_EML(18,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(18,0,0,1,6,1,6);
        _SFD_CV_INIT_EML_RELATIONAL(18,0,0,1,6,-1,5);
        _SFD_CV_INIT_EML(41,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(41,0,0,1,35,1,35);

        {
          static int condStart[] = { 1, 26 };

          static int condEnd[] = { 24, 35 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(41,0,0,1,35,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(41,0,0,1,24,-1,2);
        _SFD_CV_INIT_EML_RELATIONAL(41,0,1,26,35,-1,0);
        _SFD_CV_INIT_EML(55,0,0,0,1,0,0,0,0,0,4,1);
        _SFD_CV_INIT_EML_IF(55,0,0,1,37,1,37);

        {
          static int condStart[] = { 1, 11, 21, 30 };

          static int condEnd[] = { 9, 19, 28, 37 };

          static int pfixExpr[] = { 0, 1, -2, 2, -2, 3, -2 };

          _SFD_CV_INIT_EML_MCDC(55,0,0,1,37,4,0,&(condStart[0]),&(condEnd[0]),7,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(55,0,0,1,9,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(55,0,1,11,19,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(55,0,2,21,28,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(55,0,3,30,37,-1,0);
        _SFD_CV_INIT_EML(6,0,0,0,1,0,0,0,0,0,4,1);
        _SFD_CV_INIT_EML_IF(6,0,0,1,37,1,37);

        {
          static int condStart[] = { 1, 11, 21, 30 };

          static int condEnd[] = { 9, 19, 28, 37 };

          static int pfixExpr[] = { 0, 1, -2, 2, -2, 3, -2 };

          _SFD_CV_INIT_EML_MCDC(6,0,0,1,37,4,0,&(condStart[0]),&(condEnd[0]),7,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(6,0,0,1,9,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(6,0,1,11,19,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(6,0,2,21,28,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(6,0,3,30,37,-1,0);
        _SFD_CV_INIT_EML(54,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(54,0,0,1,8,1,8);
        _SFD_CV_INIT_EML_RELATIONAL(54,0,0,1,8,-1,3);
        _SFD_CV_INIT_EML(9,0,0,0,1,0,0,0,0,0,4,1);
        _SFD_CV_INIT_EML_IF(9,0,0,1,37,1,37);

        {
          static int condStart[] = { 1, 11, 21, 30 };

          static int condEnd[] = { 9, 19, 28, 37 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3 };

          _SFD_CV_INIT_EML_MCDC(9,0,0,1,37,4,0,&(condStart[0]),&(condEnd[0]),7,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(9,0,0,1,9,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(9,0,1,11,19,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(9,0,2,21,28,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(9,0,3,30,37,-1,0);
        _SFD_CV_INIT_EML(7,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(7,0,0,1,6,1,6);
        _SFD_CV_INIT_EML_RELATIONAL(7,0,0,1,6,-1,2);
        _SFD_CV_INIT_EML(56,0,0,0,1,0,0,0,0,0,4,1);
        _SFD_CV_INIT_EML_IF(56,0,0,1,37,1,37);

        {
          static int condStart[] = { 1, 11, 21, 30 };

          static int condEnd[] = { 9, 19, 28, 37 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3 };

          _SFD_CV_INIT_EML_MCDC(56,0,0,1,37,4,0,&(condStart[0]),&(condEnd[0]),7,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(56,0,0,1,9,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(56,0,1,11,19,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(56,0,2,21,28,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(56,0,3,30,37,-1,0);
        _SFD_CV_INIT_EML(58,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(58,0,0,1,7,1,7);
        _SFD_CV_INIT_EML_RELATIONAL(58,0,0,1,7,-1,4);
        _SFD_CV_INIT_EML(42,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(42,0,0,1,36,1,36);

        {
          static int condStart[] = { 1, 27 };

          static int condEnd[] = { 25, 36 };

          static int pfixExpr[] = { 0, 1, -2 };

          _SFD_CV_INIT_EML_MCDC(42,0,0,1,36,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(42,0,0,1,25,-1,5);
        _SFD_CV_INIT_EML_RELATIONAL(42,0,1,27,36,-1,0);
        _SFD_CV_INIT_EML(8,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(8,0,0,0,15,0,15);
        _SFD_CV_INIT_EML(19,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(19,0,0,1,7,1,7);
        _SFD_CV_INIT_EML_RELATIONAL(19,0,0,1,7,-1,5);
        _SFD_CV_INIT_EML(64,0,0,0,1,0,0,0,0,0,4,1);
        _SFD_CV_INIT_EML_IF(64,0,0,1,37,1,37);

        {
          static int condStart[] = { 1, 11, 21, 30 };

          static int condEnd[] = { 9, 19, 28, 37 };

          static int pfixExpr[] = { 0, 1, -2, 2, -2, 3, -2 };

          _SFD_CV_INIT_EML_MCDC(64,0,0,1,37,4,0,&(condStart[0]),&(condEnd[0]),7,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(64,0,0,1,9,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(64,0,1,11,19,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(64,0,2,21,28,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(64,0,3,30,37,-1,0);
        _SFD_CV_INIT_EML(12,0,0,0,1,0,0,0,0,0,4,1);
        _SFD_CV_INIT_EML_IF(12,0,0,1,37,1,37);

        {
          static int condStart[] = { 1, 11, 21, 30 };

          static int condEnd[] = { 9, 19, 28, 37 };

          static int pfixExpr[] = { 0, 1, -2, 2, -2, 3, -2 };

          _SFD_CV_INIT_EML_MCDC(12,0,0,1,37,4,0,&(condStart[0]),&(condEnd[0]),7,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(12,0,0,1,9,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(12,0,1,11,19,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(12,0,2,21,28,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(12,0,3,30,37,-1,0);
        _SFD_CV_INIT_EML(62,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(62,0,0,1,7,1,7);
        _SFD_CV_INIT_EML_RELATIONAL(62,0,0,1,7,-1,3);
        _SFD_CV_INIT_EML(13,0,0,0,1,0,0,0,0,0,4,1);
        _SFD_CV_INIT_EML_IF(13,0,0,1,37,1,37);

        {
          static int condStart[] = { 1, 11, 21, 30 };

          static int condEnd[] = { 9, 19, 28, 37 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3 };

          _SFD_CV_INIT_EML_MCDC(13,0,0,1,37,4,0,&(condStart[0]),&(condEnd[0]),7,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(13,0,0,1,9,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(13,0,1,11,19,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(13,0,2,21,28,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(13,0,3,30,37,-1,0);
        _SFD_CV_INIT_EML(16,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(16,0,0,1,6,1,6);
        _SFD_CV_INIT_EML_RELATIONAL(16,0,0,1,6,-1,2);
        _SFD_CV_INIT_EML(65,0,0,0,1,0,0,0,0,0,4,1);
        _SFD_CV_INIT_EML_IF(65,0,0,1,37,1,37);

        {
          static int condStart[] = { 1, 11, 21, 30 };

          static int condEnd[] = { 9, 19, 28, 37 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3 };

          _SFD_CV_INIT_EML_MCDC(65,0,0,1,37,4,0,&(condStart[0]),&(condEnd[0]),7,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(65,0,0,1,9,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(65,0,1,11,19,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(65,0,2,21,28,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(65,0,3,30,37,-1,0);
        _SFD_CV_INIT_EML(67,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(67,0,0,1,6,1,6);
        _SFD_CV_INIT_EML_RELATIONAL(67,0,0,1,6,-1,4);
        _SFD_CV_INIT_EML(15,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(15,0,0,0,15,0,15);
        _SFD_CV_INIT_EML(20,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(20,0,0,1,7,1,7);
        _SFD_CV_INIT_EML_RELATIONAL(20,0,0,1,7,-1,5);
        _SFD_CV_INIT_EML(70,0,0,0,1,0,0,0,0,0,4,1);
        _SFD_CV_INIT_EML_IF(70,0,0,1,37,1,37);

        {
          static int condStart[] = { 1, 11, 21, 30 };

          static int condEnd[] = { 9, 19, 28, 37 };

          static int pfixExpr[] = { 0, 1, -2, 2, -2, 3, -2 };

          _SFD_CV_INIT_EML_MCDC(70,0,0,1,37,4,0,&(condStart[0]),&(condEnd[0]),7,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(70,0,0,1,9,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(70,0,1,11,19,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(70,0,2,21,28,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(70,0,3,30,37,-1,0);
        _SFD_CV_INIT_EML(21,0,0,0,1,0,0,0,0,0,4,1);
        _SFD_CV_INIT_EML_IF(21,0,0,1,37,1,37);

        {
          static int condStart[] = { 1, 11, 21, 30 };

          static int condEnd[] = { 9, 19, 28, 37 };

          static int pfixExpr[] = { 0, 1, -2, 2, -2, 3, -2 };

          _SFD_CV_INIT_EML_MCDC(21,0,0,1,37,4,0,&(condStart[0]),&(condEnd[0]),7,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(21,0,0,1,9,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(21,0,1,11,19,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(21,0,2,21,28,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(21,0,3,30,37,-1,0);
        _SFD_CV_INIT_EML(73,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(73,0,0,1,7,1,7);
        _SFD_CV_INIT_EML_RELATIONAL(73,0,0,1,7,-1,3);
        _SFD_CV_INIT_EML(22,0,0,0,1,0,0,0,0,0,4,1);
        _SFD_CV_INIT_EML_IF(22,0,0,1,37,1,37);

        {
          static int condStart[] = { 1, 11, 21, 30 };

          static int condEnd[] = { 9, 19, 28, 37 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3 };

          _SFD_CV_INIT_EML_MCDC(22,0,0,1,37,4,0,&(condStart[0]),&(condEnd[0]),7,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(22,0,0,1,9,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(22,0,1,11,19,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(22,0,2,21,28,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(22,0,3,30,37,-1,0);
        _SFD_CV_INIT_EML(24,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(24,0,0,1,6,1,6);
        _SFD_CV_INIT_EML_RELATIONAL(24,0,0,1,6,-1,2);
        _SFD_CV_INIT_EML(72,0,0,0,1,0,0,0,0,0,4,1);
        _SFD_CV_INIT_EML_IF(72,0,0,1,37,1,37);

        {
          static int condStart[] = { 1, 11, 21, 30 };

          static int condEnd[] = { 9, 19, 28, 37 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3 };

          _SFD_CV_INIT_EML_MCDC(72,0,0,1,37,4,0,&(condStart[0]),&(condEnd[0]),7,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(72,0,0,1,9,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(72,0,1,11,19,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(72,0,2,21,28,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(72,0,3,30,37,-1,0);
        _SFD_CV_INIT_EML(69,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(69,0,0,1,6,1,6);
        _SFD_CV_INIT_EML_RELATIONAL(69,0,0,1,6,-1,4);
        _SFD_CV_INIT_EML(25,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(25,0,0,0,15,0,15);
        _SFD_CV_INIT_EML(26,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(26,0,0,1,7,1,7);
        _SFD_CV_INIT_EML_RELATIONAL(26,0,0,1,7,-1,5);
        _SFD_CV_INIT_EML(47,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(47,0,0,1,9,1,9);
        _SFD_CV_INIT_EML_RELATIONAL(47,0,0,1,9,-1,5);
        _SFD_CV_INIT_EML(79,0,0,0,1,0,0,0,0,0,4,1);
        _SFD_CV_INIT_EML_IF(79,0,0,1,37,1,37);

        {
          static int condStart[] = { 1, 11, 21, 30 };

          static int condEnd[] = { 9, 19, 28, 37 };

          static int pfixExpr[] = { 0, 1, -2, 2, -2, 3, -2 };

          _SFD_CV_INIT_EML_MCDC(79,0,0,1,37,4,0,&(condStart[0]),&(condEnd[0]),7,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(79,0,0,1,9,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(79,0,1,11,19,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(79,0,2,21,28,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(79,0,3,30,37,-1,0);
        _SFD_CV_INIT_EML(28,0,0,0,1,0,0,0,0,0,4,1);
        _SFD_CV_INIT_EML_IF(28,0,0,1,37,1,37);

        {
          static int condStart[] = { 1, 11, 21, 30 };

          static int condEnd[] = { 9, 19, 28, 37 };

          static int pfixExpr[] = { 0, 1, -2, 2, -2, 3, -2 };

          _SFD_CV_INIT_EML_MCDC(28,0,0,1,37,4,0,&(condStart[0]),&(condEnd[0]),7,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(28,0,0,1,9,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(28,0,1,11,19,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(28,0,2,21,28,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(28,0,3,30,37,-1,0);
        _SFD_CV_INIT_EML(75,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(75,0,0,1,8,1,8);
        _SFD_CV_INIT_EML_RELATIONAL(75,0,0,1,8,-1,3);
        _SFD_CV_INIT_EML(29,0,0,0,1,0,0,0,0,0,4,1);
        _SFD_CV_INIT_EML_IF(29,0,0,1,37,1,37);

        {
          static int condStart[] = { 1, 11, 21, 30 };

          static int condEnd[] = { 9, 19, 28, 37 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3 };

          _SFD_CV_INIT_EML_MCDC(29,0,0,1,37,4,0,&(condStart[0]),&(condEnd[0]),7,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(29,0,0,1,9,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(29,0,1,11,19,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(29,0,2,21,28,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(29,0,3,30,37,-1,0);
        _SFD_CV_INIT_EML(31,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(31,0,0,1,6,1,6);
        _SFD_CV_INIT_EML_RELATIONAL(31,0,0,1,6,-1,2);
        _SFD_CV_INIT_EML(74,0,0,0,1,0,0,0,0,0,4,1);
        _SFD_CV_INIT_EML_IF(74,0,0,1,37,1,37);

        {
          static int condStart[] = { 1, 11, 21, 30 };

          static int condEnd[] = { 9, 19, 28, 37 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3 };

          _SFD_CV_INIT_EML_MCDC(74,0,0,1,37,4,0,&(condStart[0]),&(condEnd[0]),7,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(74,0,0,1,9,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(74,0,1,11,19,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(74,0,2,21,28,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(74,0,3,30,37,-1,0);
        _SFD_CV_INIT_EML(77,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(77,0,0,1,7,1,7);
        _SFD_CV_INIT_EML_RELATIONAL(77,0,0,1,7,-1,4);
        _SFD_CV_INIT_EML(32,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(32,0,0,0,15,0,15);
        _SFD_CV_INIT_EML(37,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(37,0,0,1,7,1,7);
        _SFD_CV_INIT_EML_RELATIONAL(37,0,0,1,7,-1,5);
        _SFD_CV_INIT_EML(48,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(48,0,0,0,15,0,15);
        _SFD_CV_INIT_EML(46,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(46,0,0,1,8,1,8);
        _SFD_CV_INIT_EML_RELATIONAL(46,0,0,1,8,-1,2);
        _SFD_CV_INIT_EML(36,0,0,0,1,0,0,0,0,0,4,1);
        _SFD_CV_INIT_EML_IF(36,0,0,1,37,1,37);

        {
          static int condStart[] = { 1, 10, 19, 29 };

          static int condEnd[] = { 8, 17, 27, 37 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3 };

          _SFD_CV_INIT_EML_MCDC(36,0,0,1,37,4,0,&(condStart[0]),&(condEnd[0]),7,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(36,0,0,1,8,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(36,0,1,10,17,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(36,0,2,19,27,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(36,0,3,29,37,-1,0);
        _SFD_CV_INIT_EML(34,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(34,0,0,1,17,1,17);

        {
          static int condStart[] = { 1, 10 };

          static int condEnd[] = { 8, 17 };

          static int pfixExpr[] = { 0, 1, -2 };

          _SFD_CV_INIT_EML_MCDC(34,0,0,1,17,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(34,0,0,1,8,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(34,0,1,10,17,-1,0);
        _SFD_CV_INIT_EML(80,0,0,0,1,0,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_IF(80,0,0,1,17,1,17);

        {
          static int condStart[] = { 1, 10 };

          static int condEnd[] = { 8, 17 };

          static int pfixExpr[] = { 0, 1, -2 };

          _SFD_CV_INIT_EML_MCDC(80,0,0,1,17,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(80,0,0,1,8,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(80,0,1,10,17,-1,0);
        _SFD_CV_INIT_EML(85,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(85,0,0,1,7,1,7);
        _SFD_CV_INIT_EML_RELATIONAL(85,0,0,1,7,-1,3);
        _SFD_CV_INIT_EML(81,0,0,0,1,0,0,0,0,0,4,1);
        _SFD_CV_INIT_EML_IF(81,0,0,1,37,1,37);

        {
          static int condStart[] = { 1, 10, 19, 29 };

          static int condEnd[] = { 8, 17, 27, 37 };

          static int pfixExpr[] = { 0, 1, -3, 2, -3, 3, -3 };

          _SFD_CV_INIT_EML_MCDC(81,0,0,1,37,4,0,&(condStart[0]),&(condEnd[0]),7,
                                &(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(81,0,0,1,8,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(81,0,1,10,17,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(81,0,2,19,27,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(81,0,3,29,37,-1,0);
        _SFD_CV_INIT_EML(84,0,0,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_IF(84,0,0,1,6,1,6);
        _SFD_CV_INIT_EML_RELATIONAL(84,0,0,1,6,-1,4);
        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)c5_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)c5_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)c5_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)c5_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)c5_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)c5_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(9,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(10,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(11,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(12,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(13,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(14,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(15,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(16,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(17,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(18,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(19,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(20,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(21,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(22,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(23,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(24,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(25,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)c5_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(26,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)c5_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(27,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)c5_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(28,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)c5_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(29,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)c5_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(30,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)c5_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(31,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)c5_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(32,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)c5_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(33,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)c5_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(34,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)c5_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(35,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)c5_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(36,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)c5_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(37,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)c5_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(38,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)c5_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(39,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)c5_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(40,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)c5_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(41,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)c5_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(42,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)c5_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(43,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)c5_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(44,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)c5_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(45,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c5_sf_marshallOut,(MexInFcnForType)c5_sf_marshallIn);
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
    SFc5_kaiguangai1108InstanceStruct *chartInstance =
      (SFc5_kaiguangai1108InstanceStruct *)sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        _SFD_SET_DATA_VALUE_PTR(6U, chartInstance->c5_b_start);
        _SFD_SET_DATA_VALUE_PTR(7U, chartInstance->c5_kgdw1);
        _SFD_SET_DATA_VALUE_PTR(8U, chartInstance->c5_kgdw2);
        _SFD_SET_DATA_VALUE_PTR(25U, chartInstance->c5_skhx);
        _SFD_SET_DATA_VALUE_PTR(26U, chartInstance->c5_kghx);
        _SFD_SET_DATA_VALUE_PTR(27U, chartInstance->c5_kgzhiling1);
        _SFD_SET_DATA_VALUE_PTR(28U, chartInstance->c5_kgzhiling2);
        _SFD_SET_DATA_VALUE_PTR(29U, chartInstance->c5_yjhx);
        _SFD_SET_DATA_VALUE_PTR(30U, chartInstance->c5_gghx);
        _SFD_SET_DATA_VALUE_PTR(31U, chartInstance->c5_ggzhiling1);
        _SFD_SET_DATA_VALUE_PTR(32U, chartInstance->c5_ggzhiling2);
        _SFD_SET_DATA_VALUE_PTR(33U, chartInstance->c5_skt);
        _SFD_SET_DATA_VALUE_PTR(34U, chartInstance->c5_kgt);
        _SFD_SET_DATA_VALUE_PTR(35U, chartInstance->c5_sdt);
        _SFD_SET_DATA_VALUE_PTR(36U, chartInstance->c5_jst);
        _SFD_SET_DATA_VALUE_PTR(37U, chartInstance->c5_ggt);
        _SFD_SET_DATA_VALUE_PTR(38U, chartInstance->c5_yjt);
        _SFD_SET_DATA_VALUE_PTR(9U, chartInstance->c5_ggdw1);
        _SFD_SET_DATA_VALUE_PTR(10U, chartInstance->c5_ggdw2);
        _SFD_SET_DATA_VALUE_PTR(11U, chartInstance->c5_kghc);
        _SFD_SET_DATA_VALUE_PTR(12U, chartInstance->c5_gghc);
        _SFD_SET_DATA_VALUE_PTR(13U, chartInstance->c5_sddw);
        _SFD_SET_DATA_VALUE_PTR(14U, chartInstance->c5_yjdw);
        _SFD_SET_DATA_VALUE_PTR(15U, chartInstance->c5_skdw);
        _SFD_SET_DATA_VALUE_PTR(16U, chartInstance->c5_jsdw);
        _SFD_SET_DATA_VALUE_PTR(17U, chartInstance->c5_t1);
        _SFD_SET_DATA_VALUE_PTR(18U, chartInstance->c5_t3);
        _SFD_SET_DATA_VALUE_PTR(19U, chartInstance->c5_t5);
        _SFD_SET_DATA_VALUE_PTR(20U, chartInstance->c5_t7);
        _SFD_SET_DATA_VALUE_PTR(21U, chartInstance->c5_t9);
        _SFD_SET_DATA_VALUE_PTR(22U, chartInstance->c5_t11);
        _SFD_SET_DATA_VALUE_PTR(0U, chartInstance->c5_t);
        _SFD_SET_DATA_VALUE_PTR(2U, chartInstance->c5_t2);
        _SFD_SET_DATA_VALUE_PTR(3U, chartInstance->c5_t4);
        _SFD_SET_DATA_VALUE_PTR(4U, chartInstance->c5_t6);
        _SFD_SET_DATA_VALUE_PTR(5U, chartInstance->c5_t8);
        _SFD_SET_DATA_VALUE_PTR(23U, chartInstance->c5_shedingcishu);
        _SFD_SET_DATA_VALUE_PTR(39U, chartInstance->c5_yikaicishu);
        _SFD_SET_DATA_VALUE_PTR(40U, chartInstance->c5_skyichang);
        _SFD_SET_DATA_VALUE_PTR(41U, chartInstance->c5_kgyichang);
        _SFD_SET_DATA_VALUE_PTR(42U, chartInstance->c5_sdyichang);
        _SFD_SET_DATA_VALUE_PTR(43U, chartInstance->c5_jsyichang);
        _SFD_SET_DATA_VALUE_PTR(24U, chartInstance->c5_jieshu);
        _SFD_SET_DATA_VALUE_PTR(1U, chartInstance->c5_t10);
        _SFD_SET_DATA_VALUE_PTR(44U, chartInstance->c5_ggyichang);
        _SFD_SET_DATA_VALUE_PTR(45U, chartInstance->c5_yjyichang);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "sLINPejKEh5APFBsoh3gFeB";
}

static void sf_check_dwork_consistency(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    const uint32_T *sfunDWorkChecksum = sf_get_sfun_dwork_checksum();
    mxArray *infoStruct = load_kaiguangai1108_optimization_info
      (sim_mode_is_rtw_gen(S), sim_mode_is_modelref_sim(S), sim_mode_is_external
       (S));
    mxArray* mxRTWDWorkChecksum = sf_get_dwork_info_from_mat_file(S,
      sf_get_instance_specialization(), infoStruct, 5, "dworkChecksum");
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

static void sf_opaque_initialize_c5_kaiguangai1108(void *chartInstanceVar)
{
  sf_check_dwork_consistency(((SFc5_kaiguangai1108InstanceStruct*)
    chartInstanceVar)->S);
  chart_debug_initialization(((SFc5_kaiguangai1108InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c5_kaiguangai1108((SFc5_kaiguangai1108InstanceStruct*)
    chartInstanceVar);
  initialize_c5_kaiguangai1108((SFc5_kaiguangai1108InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c5_kaiguangai1108(void *chartInstanceVar)
{
  enable_c5_kaiguangai1108((SFc5_kaiguangai1108InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c5_kaiguangai1108(void *chartInstanceVar)
{
  disable_c5_kaiguangai1108((SFc5_kaiguangai1108InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c5_kaiguangai1108(void *chartInstanceVar)
{
  sf_gateway_c5_kaiguangai1108((SFc5_kaiguangai1108InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_ext_mode_exec_c5_kaiguangai1108(void *chartInstanceVar)
{
  ext_mode_exec_c5_kaiguangai1108((SFc5_kaiguangai1108InstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c5_kaiguangai1108(SimStruct* S)
{
  return get_sim_state_c5_kaiguangai1108((SFc5_kaiguangai1108InstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c5_kaiguangai1108(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c5_kaiguangai1108((SFc5_kaiguangai1108InstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_terminate_c5_kaiguangai1108(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc5_kaiguangai1108InstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_kaiguangai1108_optimization_info();
    }

    finalize_c5_kaiguangai1108((SFc5_kaiguangai1108InstanceStruct*)
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
  initSimStructsc5_kaiguangai1108((SFc5_kaiguangai1108InstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c5_kaiguangai1108(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c5_kaiguangai1108((SFc5_kaiguangai1108InstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

mxArray *sf_c5_kaiguangai1108_get_testpoint_info(void)
{
  return NULL;
}

static void sf_set_sfun_dwork_info(SimStruct *S)
{
  const char *dworkEncStr[] = {
    "100 S1x10'type','isSigned','wordLength','bias','slope','exponent','isScaledDouble','isComplex','size','local_queue_dwork_idx','local_queue_id'{{T\"int32\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"uint8\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"double\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"double\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"double\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"double\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"double\",,,,,,,M[0],M[],M[-1],M[-1]},{T\"double\",,,,,,,M[0],M[],M[-1],M[-1]}}",
    "100 S'type','isSigned','wordLength','bias','slope','exponent','isScaledDouble','isComplex','size','local_queue_dwork_idx','local_queue_id'{{T\"uint16\",,,,,,,M[0],M[],M[-1],M[-1]}}"
  };

  sf_set_encoded_dwork_info(S, dworkEncStr, 11, 10);
}

static uint32_T* sf_get_sfun_dwork_checksum()
{
  static uint32_T checksum[4] = { 131503264U, 2147935498U, 2982471U, 2670773248U
  };

  return checksum;
}

static void mdlSetWorkWidths_c5_kaiguangai1108(SimStruct *S)
{
  ssSetStatesModifiedOnlyInUpdate(S, 0);
  ssMdlUpdateIsEmpty(S, 1);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_kaiguangai1108_optimization_info
      (sim_mode_is_rtw_gen(S), sim_mode_is_modelref_sim(S), sim_mode_is_external
       (S));
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,5);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,5,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_set_chart_accesses_machine_info(S, sf_get_instance_specialization(),
      infoStruct, 5);
    sf_update_buildInfo(S, sf_get_instance_specialization(),infoStruct,5);
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
      ssSetInputPortOptimOpts(S, 16, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 17, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 18, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,5,19);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,5,21);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=21; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 19; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,5);
    sf_register_codegen_names_for_scoped_functions_defined_by_chart(S);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
    sf_set_sfun_dwork_info(S);
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(3298230935U));
  ssSetChecksum1(S,(4228941329U));
  ssSetChecksum2(S,(3977052900U));
  ssSetChecksum3(S,(3157798729U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSetStateSemanticsClassicAndSynchronous(S, true);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c5_kaiguangai1108(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c5_kaiguangai1108(SimStruct *S)
{
  SFc5_kaiguangai1108InstanceStruct *chartInstance;
  chartInstance = (SFc5_kaiguangai1108InstanceStruct *)utMalloc(sizeof
    (SFc5_kaiguangai1108InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc5_kaiguangai1108InstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c5_kaiguangai1108;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c5_kaiguangai1108;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c5_kaiguangai1108;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c5_kaiguangai1108;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c5_kaiguangai1108;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c5_kaiguangai1108;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c5_kaiguangai1108;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c5_kaiguangai1108;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c5_kaiguangai1108;
  chartInstance->chartInfo.mdlStart = mdlStart_c5_kaiguangai1108;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c5_kaiguangai1108;
  chartInstance->chartInfo.callGetHoverDataForMsg =
    sf_opaque_get_hover_data_for_msg;
  chartInstance->chartInfo.extModeExec =
    sf_opaque_ext_mode_exec_c5_kaiguangai1108;
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
  mdl_start_c5_kaiguangai1108(chartInstance);
}

void c5_kaiguangai1108_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c5_kaiguangai1108(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c5_kaiguangai1108(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c5_kaiguangai1108(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c5_kaiguangai1108_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}