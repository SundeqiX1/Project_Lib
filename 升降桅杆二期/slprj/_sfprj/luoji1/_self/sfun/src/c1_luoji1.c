/* Include files */

#include "blascompat32.h"
#include "luoji1_sfun.h"
#include "c1_luoji1.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "luoji1_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c1_IN_NO_ACTIVE_CHILD          (0U)
#define c1_IN_start                    (13U)
#define c1_IN_on1                      (7U)
#define c1_IN_on2                      (8U)
#define c1_IN_on3                      (9U)
#define c1_IN_on4                      (10U)
#define c1_IN_on5                      (11U)
#define c1_IN_on6                      (12U)
#define c1_IN_off1                     (1U)
#define c1_IN_off2                     (2U)
#define c1_IN_off3                     (3U)
#define c1_IN_off4                     (4U)
#define c1_IN_off5                     (5U)
#define c1_IN_off6                     (6U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c1_luoji1(SFc1_luoji1InstanceStruct *chartInstance);
static void initialize_params_c1_luoji1(SFc1_luoji1InstanceStruct *chartInstance);
static void enable_c1_luoji1(SFc1_luoji1InstanceStruct *chartInstance);
static void disable_c1_luoji1(SFc1_luoji1InstanceStruct *chartInstance);
static void c1_update_debugger_state_c1_luoji1(SFc1_luoji1InstanceStruct
  *chartInstance);
static void ext_mode_exec_c1_luoji1(SFc1_luoji1InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c1_luoji1(SFc1_luoji1InstanceStruct
  *chartInstance);
static void set_sim_state_c1_luoji1(SFc1_luoji1InstanceStruct *chartInstance,
  const mxArray *c1_st);
static void c1_set_sim_state_side_effects_c1_luoji1(SFc1_luoji1InstanceStruct
  *chartInstance);
static void finalize_c1_luoji1(SFc1_luoji1InstanceStruct *chartInstance);
static void sf_c1_luoji1(SFc1_luoji1InstanceStruct *chartInstance);
static void c1_enter_internal_c1_luoji1(SFc1_luoji1InstanceStruct *chartInstance);
static void c1_c1_luoji1(SFc1_luoji1InstanceStruct *chartInstance);
static void compInitSubchartSimstructsFcn_c1_luoji1(SFc1_luoji1InstanceStruct
  *chartInstance);
static void c1_start(SFc1_luoji1InstanceStruct *chartInstance);
static void c1_off1(SFc1_luoji1InstanceStruct *chartInstance);
static void c1_off2(SFc1_luoji1InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c1_machineNumber, uint32_T
  c1_chartNumber);
static const mxArray *c1_sf_marshall(void *chartInstanceVoid, void *c1_u);
static const mxArray *c1_b_sf_marshall(void *chartInstanceVoid, void *c1_u);
static real_T c1_emlrt_marshallIn(SFc1_luoji1InstanceStruct *chartInstance,
  const mxArray *c1_a, const char_T *c1_name);
static uint8_T c1_b_emlrt_marshallIn(SFc1_luoji1InstanceStruct *chartInstance,
  const mxArray *c1_is_active_c1_luoji1, const char_T *c1_name);
static const mxArray *c1_c_emlrt_marshallIn(SFc1_luoji1InstanceStruct
  *chartInstance, const mxArray *c1_b_setSimStateSideEffectsInfo, const char_T
  *c1_name);
static void init_dsm_address_info(SFc1_luoji1InstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c1_luoji1(SFc1_luoji1InstanceStruct *chartInstance)
{
  uint8_T *c1_is_active_c1_luoji1;
  uint8_T *c1_is_c1_luoji1;
  real_T *c1_a;
  real_T *c1_shengqidaowei;
  real_T *c1_huiluodaowei;
  real_T *c1_fanzhuanfudaowei;
  real_T *c1_fanzhuanyangdaowei;
  real_T *c1_dangbanzhangkaidaowei;
  real_T *c1_dangbanhelongdaowei;
  c1_dangbanhelongdaowei = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c1_dangbanzhangkaidaowei = (real_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c1_fanzhuanyangdaowei = (real_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c1_fanzhuanfudaowei = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c1_huiluodaowei = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c1_shengqidaowei = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c1_a = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c1_is_c1_luoji1 = (uint8_T *)ssGetDWork(chartInstance->S, 2);
  c1_is_active_c1_luoji1 = (uint8_T *)ssGetDWork(chartInstance->S, 1);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c1_doSetSimStateSideEffects = 0U;
  chartInstance->c1_setSimStateSideEffectsInfo = NULL;
  *c1_is_active_c1_luoji1 = 0U;
  *c1_is_c1_luoji1 = 0U;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c1_a = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 2) != 0)) {
    *c1_shengqidaowei = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 3) != 0)) {
    *c1_huiluodaowei = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 4) != 0)) {
    *c1_fanzhuanfudaowei = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 5) != 0)) {
    *c1_fanzhuanyangdaowei = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 6) != 0)) {
    *c1_dangbanzhangkaidaowei = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 7) != 0)) {
    *c1_dangbanhelongdaowei = 0.0;
  }
}

static void initialize_params_c1_luoji1(SFc1_luoji1InstanceStruct *chartInstance)
{
}

static void enable_c1_luoji1(SFc1_luoji1InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c1_luoji1(SFc1_luoji1InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c1_update_debugger_state_c1_luoji1(SFc1_luoji1InstanceStruct
  *chartInstance)
{
  uint32_T c1_prevAniVal;
  uint8_T *c1_is_active_c1_luoji1;
  uint8_T *c1_is_c1_luoji1;
  c1_is_c1_luoji1 = (uint8_T *)ssGetDWork(chartInstance->S, 2);
  c1_is_active_c1_luoji1 = (uint8_T *)ssGetDWork(chartInstance->S, 1);
  c1_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)*c1_is_active_c1_luoji1 == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 0);
  }

  if (*c1_is_c1_luoji1 == c1_IN_start) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 12);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 12);
  }

  if (*c1_is_c1_luoji1 == c1_IN_on1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 6);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 6);
  }

  if (*c1_is_c1_luoji1 == c1_IN_on2) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 7);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 7);
  }

  if (*c1_is_c1_luoji1 == c1_IN_on3) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 8);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 8);
  }

  if (*c1_is_c1_luoji1 == c1_IN_on4) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 9);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 9);
  }

  if (*c1_is_c1_luoji1 == c1_IN_on5) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 10);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 10);
  }

  if (*c1_is_c1_luoji1 == c1_IN_on6) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 11);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 11);
  }

  if (*c1_is_c1_luoji1 == c1_IN_off1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0);
  }

  if (*c1_is_c1_luoji1 == c1_IN_off2) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1);
  }

  if (*c1_is_c1_luoji1 == c1_IN_off3) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2);
  }

  if (*c1_is_c1_luoji1 == c1_IN_off4) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3);
  }

  if (*c1_is_c1_luoji1 == c1_IN_off5) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4);
  }

  if (*c1_is_c1_luoji1 == c1_IN_off6) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5);
  }

  sf_debug_set_animation(c1_prevAniVal);
  _SFD_ANIMATE();
}

static void ext_mode_exec_c1_luoji1(SFc1_luoji1InstanceStruct *chartInstance)
{
  c1_update_debugger_state_c1_luoji1(chartInstance);
}

static const mxArray *get_sim_state_c1_luoji1(SFc1_luoji1InstanceStruct
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
  real_T c1_e_hoistedGlobal;
  real_T c1_e_u;
  const mxArray *c1_f_y = NULL;
  real_T c1_f_hoistedGlobal;
  real_T c1_f_u;
  const mxArray *c1_g_y = NULL;
  real_T c1_g_hoistedGlobal;
  real_T c1_g_u;
  const mxArray *c1_h_y = NULL;
  uint8_T c1_h_hoistedGlobal;
  uint8_T c1_h_u;
  const mxArray *c1_i_y = NULL;
  uint8_T c1_i_hoistedGlobal;
  uint8_T c1_i_u;
  const mxArray *c1_j_y = NULL;
  uint8_T c1_j_hoistedGlobal;
  uint8_T c1_j_u;
  const mxArray *c1_k_y = NULL;
  real_T *c1_a;
  real_T *c1_dangbanhelongdaowei;
  real_T *c1_dangbanzhangkaidaowei;
  real_T *c1_fanzhuanfudaowei;
  real_T *c1_fanzhuanyangdaowei;
  real_T *c1_huiluodaowei;
  real_T *c1_shengqidaowei;
  uint8_T *c1_is_active_c1_luoji1;
  uint8_T *c1_is_c1_luoji1;
  uint8_T *c1_temporalCounter_i1;
  c1_temporalCounter_i1 = (uint8_T *)ssGetDWork(chartInstance->S, 3);
  c1_dangbanhelongdaowei = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c1_dangbanzhangkaidaowei = (real_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c1_fanzhuanyangdaowei = (real_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c1_fanzhuanfudaowei = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c1_huiluodaowei = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c1_shengqidaowei = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c1_a = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c1_is_c1_luoji1 = (uint8_T *)ssGetDWork(chartInstance->S, 2);
  c1_is_active_c1_luoji1 = (uint8_T *)ssGetDWork(chartInstance->S, 1);
  c1_st = NULL;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_createcellarray(10));
  c1_hoistedGlobal = *c1_a;
  c1_u = c1_hoistedGlobal;
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", &c1_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 0, c1_b_y);
  c1_b_hoistedGlobal = *c1_dangbanhelongdaowei;
  c1_b_u = c1_b_hoistedGlobal;
  c1_c_y = NULL;
  sf_mex_assign(&c1_c_y, sf_mex_create("y", &c1_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 1, c1_c_y);
  c1_c_hoistedGlobal = *c1_dangbanzhangkaidaowei;
  c1_c_u = c1_c_hoistedGlobal;
  c1_d_y = NULL;
  sf_mex_assign(&c1_d_y, sf_mex_create("y", &c1_c_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 2, c1_d_y);
  c1_d_hoistedGlobal = *c1_fanzhuanfudaowei;
  c1_d_u = c1_d_hoistedGlobal;
  c1_e_y = NULL;
  sf_mex_assign(&c1_e_y, sf_mex_create("y", &c1_d_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 3, c1_e_y);
  c1_e_hoistedGlobal = *c1_fanzhuanyangdaowei;
  c1_e_u = c1_e_hoistedGlobal;
  c1_f_y = NULL;
  sf_mex_assign(&c1_f_y, sf_mex_create("y", &c1_e_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 4, c1_f_y);
  c1_f_hoistedGlobal = *c1_huiluodaowei;
  c1_f_u = c1_f_hoistedGlobal;
  c1_g_y = NULL;
  sf_mex_assign(&c1_g_y, sf_mex_create("y", &c1_f_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 5, c1_g_y);
  c1_g_hoistedGlobal = *c1_shengqidaowei;
  c1_g_u = c1_g_hoistedGlobal;
  c1_h_y = NULL;
  sf_mex_assign(&c1_h_y, sf_mex_create("y", &c1_g_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 6, c1_h_y);
  c1_h_hoistedGlobal = *c1_is_active_c1_luoji1;
  c1_h_u = c1_h_hoistedGlobal;
  c1_i_y = NULL;
  sf_mex_assign(&c1_i_y, sf_mex_create("y", &c1_h_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 7, c1_i_y);
  c1_i_hoistedGlobal = *c1_is_c1_luoji1;
  c1_i_u = c1_i_hoistedGlobal;
  c1_j_y = NULL;
  sf_mex_assign(&c1_j_y, sf_mex_create("y", &c1_i_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 8, c1_j_y);
  c1_j_hoistedGlobal = *c1_temporalCounter_i1;
  c1_j_u = c1_j_hoistedGlobal;
  c1_k_y = NULL;
  sf_mex_assign(&c1_k_y, sf_mex_create("y", &c1_j_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 9, c1_k_y);
  sf_mex_assign(&c1_st, c1_y);
  return c1_st;
}

static void set_sim_state_c1_luoji1(SFc1_luoji1InstanceStruct *chartInstance,
  const mxArray *c1_st)
{
  const mxArray *c1_u;
  real_T *c1_a;
  real_T *c1_dangbanhelongdaowei;
  real_T *c1_dangbanzhangkaidaowei;
  real_T *c1_fanzhuanfudaowei;
  real_T *c1_fanzhuanyangdaowei;
  real_T *c1_huiluodaowei;
  real_T *c1_shengqidaowei;
  uint8_T *c1_is_active_c1_luoji1;
  uint8_T *c1_is_c1_luoji1;
  uint8_T *c1_temporalCounter_i1;
  c1_temporalCounter_i1 = (uint8_T *)ssGetDWork(chartInstance->S, 3);
  c1_dangbanhelongdaowei = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c1_dangbanzhangkaidaowei = (real_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c1_fanzhuanyangdaowei = (real_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c1_fanzhuanfudaowei = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c1_huiluodaowei = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c1_shengqidaowei = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c1_a = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c1_is_c1_luoji1 = (uint8_T *)ssGetDWork(chartInstance->S, 2);
  c1_is_active_c1_luoji1 = (uint8_T *)ssGetDWork(chartInstance->S, 1);
  c1_u = sf_mex_dup(c1_st);
  *c1_a = c1_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 0)),
    "a");
  *c1_dangbanhelongdaowei = c1_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_u, 1)), "dangbanhelongdaowei");
  *c1_dangbanzhangkaidaowei = c1_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_u, 2)), "dangbanzhangkaidaowei");
  *c1_fanzhuanfudaowei = c1_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_u, 3)), "fanzhuanfudaowei");
  *c1_fanzhuanyangdaowei = c1_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_u, 4)), "fanzhuanyangdaowei");
  *c1_huiluodaowei = c1_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_u, 5)), "huiluodaowei");
  *c1_shengqidaowei = c1_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_u, 6)), "shengqidaowei");
  *c1_is_active_c1_luoji1 = c1_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_u, 7)), "is_active_c1_luoji1");
  *c1_is_c1_luoji1 = c1_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_u, 8)), "is_c1_luoji1");
  *c1_temporalCounter_i1 = c1_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_u, 9)), "temporalCounter_i1");
  sf_mex_assign(&chartInstance->c1_setSimStateSideEffectsInfo,
                c1_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c1_u, 10
     )), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c1_u);
  chartInstance->c1_doSetSimStateSideEffects = 1U;
  c1_update_debugger_state_c1_luoji1(chartInstance);
  sf_mex_destroy(&c1_st);
}

static void c1_set_sim_state_side_effects_c1_luoji1(SFc1_luoji1InstanceStruct
  *chartInstance)
{
  uint8_T *c1_temporalCounter_i1;
  uint8_T *c1_is_c1_luoji1;
  c1_temporalCounter_i1 = (uint8_T *)ssGetDWork(chartInstance->S, 3);
  c1_is_c1_luoji1 = (uint8_T *)ssGetDWork(chartInstance->S, 2);
  if (chartInstance->c1_doSetSimStateSideEffects != 0) {
    if (*c1_is_c1_luoji1 == c1_IN_off1) {
      if (sf_mex_sub(chartInstance->c1_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 2) == 0.0) {
        *c1_temporalCounter_i1 = 0U;
      }
    }

    if (*c1_is_c1_luoji1 == c1_IN_off2) {
      if (sf_mex_sub(chartInstance->c1_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 3) == 0.0) {
        *c1_temporalCounter_i1 = 0U;
      }
    }

    if (*c1_is_c1_luoji1 == c1_IN_off3) {
      if (sf_mex_sub(chartInstance->c1_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 4) == 0.0) {
        *c1_temporalCounter_i1 = 0U;
      }
    }

    if (*c1_is_c1_luoji1 == c1_IN_off4) {
      if (sf_mex_sub(chartInstance->c1_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 5) == 0.0) {
        *c1_temporalCounter_i1 = 0U;
      }
    }

    if (*c1_is_c1_luoji1 == c1_IN_off5) {
      if (sf_mex_sub(chartInstance->c1_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 6) == 0.0) {
        *c1_temporalCounter_i1 = 0U;
      }
    }

    if (*c1_is_c1_luoji1 == c1_IN_off6) {
      if (sf_mex_sub(chartInstance->c1_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 7) == 0.0) {
        *c1_temporalCounter_i1 = 0U;
      }
    }

    chartInstance->c1_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c1_luoji1(SFc1_luoji1InstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c1_setSimStateSideEffectsInfo);
}

static void sf_c1_luoji1(SFc1_luoji1InstanceStruct *chartInstance)
{
  int32_T c1_previousEvent;
  real_T *c1_a;
  real_T *c1_zhiling;
  real_T *c1_weiganweizhi1;
  real_T *c1_weiganweizhi2;
  real_T *c1_fudaowei;
  real_T *c1_yangdaowei;
  real_T *c1_zhangdaowei;
  real_T *c1_hedaowei;
  real_T *c1_shengqidaowei;
  real_T *c1_huiluodaowei;
  real_T *c1_fanzhuanfudaowei;
  real_T *c1_fanzhuanyangdaowei;
  real_T *c1_dangbanzhangkaidaowei;
  real_T *c1_dangbanhelongdaowei;
  c1_dangbanhelongdaowei = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c1_dangbanzhangkaidaowei = (real_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c1_fanzhuanyangdaowei = (real_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c1_fanzhuanfudaowei = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c1_huiluodaowei = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c1_shengqidaowei = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c1_hedaowei = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c1_zhangdaowei = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c1_yangdaowei = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c1_fudaowei = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c1_weiganweizhi2 = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c1_weiganweizhi1 = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c1_zhiling = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c1_a = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c1_set_sim_state_side_effects_c1_luoji1(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 0);
  _SFD_DATA_RANGE_CHECK(*c1_a, 0U);
  _SFD_DATA_RANGE_CHECK(*c1_zhiling, 1U);
  _SFD_DATA_RANGE_CHECK(*c1_weiganweizhi1, 2U);
  _SFD_DATA_RANGE_CHECK(*c1_weiganweizhi2, 3U);
  _SFD_DATA_RANGE_CHECK(*c1_fudaowei, 4U);
  _SFD_DATA_RANGE_CHECK(*c1_yangdaowei, 5U);
  _SFD_DATA_RANGE_CHECK(*c1_zhangdaowei, 6U);
  _SFD_DATA_RANGE_CHECK(*c1_hedaowei, 7U);
  _SFD_DATA_RANGE_CHECK(*c1_shengqidaowei, 8U);
  _SFD_DATA_RANGE_CHECK(*c1_huiluodaowei, 9U);
  _SFD_DATA_RANGE_CHECK(*c1_fanzhuanfudaowei, 10U);
  _SFD_DATA_RANGE_CHECK(*c1_fanzhuanyangdaowei, 11U);
  _SFD_DATA_RANGE_CHECK(*c1_dangbanzhangkaidaowei, 12U);
  _SFD_DATA_RANGE_CHECK(*c1_dangbanhelongdaowei, 13U);
  c1_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  c1_c1_luoji1(chartInstance);
  _sfEvent_ = c1_previousEvent;
  sf_debug_check_for_state_inconsistency(_luoji1MachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c1_enter_internal_c1_luoji1(SFc1_luoji1InstanceStruct *chartInstance)
{
  real_T *c1_a;
  uint8_T *c1_is_c1_luoji1;
  c1_a = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c1_is_c1_luoji1 = (uint8_T *)ssGetDWork(chartInstance->S, 2);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 0);
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0);
  *c1_is_c1_luoji1 = c1_IN_start;
  _SFD_CS_CALL(STATE_ACTIVE_TAG, 12);
  *c1_a = 0.0;
  _SFD_DATA_RANGE_CHECK(*c1_a, 0U);
}

static void c1_c1_luoji1(SFc1_luoji1InstanceStruct *chartInstance)
{
  boolean_T c1_temp;
  boolean_T c1_b_temp;
  boolean_T c1_c_temp;
  boolean_T c1_d_temp;
  real_T c1_d0;
  real_T *c1_dangbanhelongdaowei;
  real_T *c1_dangbanzhangkaidaowei;
  real_T *c1_a;
  uint8_T *c1_is_c1_luoji1;
  uint8_T *c1_temporalCounter_i1;
  real_T *c1_zhangdaowei;
  real_T *c1_fanzhuanyangdaowei;
  real_T *c1_fanzhuanfudaowei;
  real_T *c1_yangdaowei;
  real_T *c1_fudaowei;
  real_T *c1_huiluodaowei;
  real_T *c1_shengqidaowei;
  real_T *c1_weiganweizhi2;
  real_T *c1_weiganweizhi1;
  uint8_T *c1_is_active_c1_luoji1;
  real_T *c1_hedaowei;
  c1_temporalCounter_i1 = (uint8_T *)ssGetDWork(chartInstance->S, 3);
  c1_dangbanhelongdaowei = (real_T *)ssGetOutputPortSignal(chartInstance->S, 7);
  c1_dangbanzhangkaidaowei = (real_T *)ssGetOutputPortSignal(chartInstance->S, 6);
  c1_fanzhuanyangdaowei = (real_T *)ssGetOutputPortSignal(chartInstance->S, 5);
  c1_fanzhuanfudaowei = (real_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c1_huiluodaowei = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c1_shengqidaowei = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c1_hedaowei = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c1_zhangdaowei = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c1_yangdaowei = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c1_fudaowei = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c1_weiganweizhi2 = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c1_weiganweizhi1 = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c1_a = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c1_is_c1_luoji1 = (uint8_T *)ssGetDWork(chartInstance->S, 2);
  c1_is_active_c1_luoji1 = (uint8_T *)ssGetDWork(chartInstance->S, 1);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 0);
  if ((int16_T)*c1_temporalCounter_i1 < 3) {
    *c1_temporalCounter_i1 = (uint8_T)(*c1_temporalCounter_i1 + 1);
  }

  if ((int16_T)*c1_is_active_c1_luoji1 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 0);
    *c1_is_active_c1_luoji1 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0);
    c1_enter_internal_c1_luoji1(chartInstance);
  } else {
    switch (*c1_is_c1_luoji1) {
     case c1_IN_off1:
      CV_CHART_EVAL(0, 0, 1);
      c1_off1(chartInstance);
      break;

     case c1_IN_off2:
      CV_CHART_EVAL(0, 0, 2);
      c1_off2(chartInstance);
      break;

     case c1_IN_off3:
      CV_CHART_EVAL(0, 0, 3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 16);
      c1_temp = (_SFD_CCP_CALL(16U, 0, 1 != 0U) != 0);
      if (c1_temp) {
        c1_temp = (_SFD_CCP_CALL(16U, 1, (int16_T)*c1_temporalCounter_i1 >= 2 !=
                    0U) != 0);
      }

      if (CV_TRANSITION_EVAL(16U, (int32_T)c1_temp) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 16);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG, 2);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 2);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2);
        *c1_is_c1_luoji1 = c1_IN_start;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 12);
        *c1_a = 0.0;
        _SFD_DATA_RANGE_CHECK(*c1_a, 0U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2);
      break;

     case c1_IN_off4:
      CV_CHART_EVAL(0, 0, 4);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 17);
      c1_b_temp = (_SFD_CCP_CALL(17U, 0, 1 != 0U) != 0);
      if (c1_b_temp) {
        c1_b_temp = (_SFD_CCP_CALL(17U, 1, (int16_T)*c1_temporalCounter_i1 >= 2
          != 0U) != 0);
      }

      if (CV_TRANSITION_EVAL(17U, (int32_T)c1_b_temp) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 17);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG, 3);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 3);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3);
        *c1_is_c1_luoji1 = c1_IN_start;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 12);
        *c1_a = 0.0;
        _SFD_DATA_RANGE_CHECK(*c1_a, 0U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3);
      break;

     case c1_IN_off5:
      CV_CHART_EVAL(0, 0, 5);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 4);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 18);
      c1_c_temp = (_SFD_CCP_CALL(18U, 0, 1 != 0U) != 0);
      if (c1_c_temp) {
        c1_c_temp = (_SFD_CCP_CALL(18U, 1, (int16_T)*c1_temporalCounter_i1 >= 2
          != 0U) != 0);
      }

      if (CV_TRANSITION_EVAL(18U, (int32_T)c1_c_temp) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 18);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG, 4);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 4);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4);
        *c1_is_c1_luoji1 = c1_IN_start;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 12);
        *c1_a = 0.0;
        _SFD_DATA_RANGE_CHECK(*c1_a, 0U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4);
      break;

     case c1_IN_off6:
      CV_CHART_EVAL(0, 0, 6);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 5);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 19);
      c1_d_temp = (_SFD_CCP_CALL(19U, 0, 1 != 0U) != 0);
      if (c1_d_temp) {
        c1_d_temp = (_SFD_CCP_CALL(19U, 1, (int16_T)*c1_temporalCounter_i1 >= 2
          != 0U) != 0);
      }

      if (CV_TRANSITION_EVAL(19U, (int32_T)c1_d_temp) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 19);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG, 5);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 5);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 5);
        *c1_is_c1_luoji1 = c1_IN_start;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 12);
        *c1_a = 0.0;
        _SFD_DATA_RANGE_CHECK(*c1_a, 0U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 5);
      break;

     case c1_IN_on1:
      CV_CHART_EVAL(0, 0, 7);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 6);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 8);
      if (CV_TRANSITION_EVAL(8U, (int32_T)_SFD_CCP_CALL(8U, 0, *c1_weiganweizhi1
            == 1.0 != 0U)) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG, 6);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 6);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 6);
        *c1_is_c1_luoji1 = c1_IN_off1;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 0);
        *c1_temporalCounter_i1 = 0U;
        *c1_a = 0.0;
        _SFD_DATA_RANGE_CHECK(*c1_a, 0U);
        *c1_shengqidaowei = 1.0;
        _SFD_DATA_RANGE_CHECK(*c1_shengqidaowei, 8U);
        *c1_huiluodaowei = 0.0;
        _SFD_DATA_RANGE_CHECK(*c1_huiluodaowei, 9U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 6);
      break;

     case c1_IN_on2:
      CV_CHART_EVAL(0, 0, 8);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 7);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 9);
      if (CV_TRANSITION_EVAL(9U, (int32_T)_SFD_CCP_CALL(9U, 0, *c1_weiganweizhi2
            == 2.0 != 0U)) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 9);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG, 7);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 7);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 7);
        *c1_is_c1_luoji1 = c1_IN_off2;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1);
        *c1_temporalCounter_i1 = 0U;
        *c1_a = 0.0;
        _SFD_DATA_RANGE_CHECK(*c1_a, 0U);
        *c1_shengqidaowei = 0.0;
        _SFD_DATA_RANGE_CHECK(*c1_shengqidaowei, 8U);
        *c1_huiluodaowei = 1.0;
        _SFD_DATA_RANGE_CHECK(*c1_huiluodaowei, 9U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 7);
      break;

     case c1_IN_on3:
      CV_CHART_EVAL(0, 0, 9);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 8);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 10);
      if (CV_TRANSITION_EVAL(10U, (int32_T)_SFD_CCP_CALL(10U, 0, *c1_fudaowei >=
            5200.0 != 0U)) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 10);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG, 8);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 8);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 8);
        *c1_is_c1_luoji1 = c1_IN_off3;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 2);
        *c1_temporalCounter_i1 = 0U;
        *c1_a = 0.0;
        _SFD_DATA_RANGE_CHECK(*c1_a, 0U);
        *c1_fanzhuanfudaowei = 1.0;
        _SFD_DATA_RANGE_CHECK(*c1_fanzhuanfudaowei, 10U);
        *c1_fanzhuanyangdaowei = 0.0;
        _SFD_DATA_RANGE_CHECK(*c1_fanzhuanyangdaowei, 11U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 8);
      break;

     case c1_IN_on4:
      CV_CHART_EVAL(0, 0, 10);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 9);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 11);
      if (CV_TRANSITION_EVAL(11U, (int32_T)_SFD_CCP_CALL(11U, 0, *c1_yangdaowei <=
            1500.0 != 0U)) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 11);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG, 9);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 9);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 9);
        *c1_is_c1_luoji1 = c1_IN_off4;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 3);
        *c1_temporalCounter_i1 = 0U;
        *c1_a = 0.0;
        _SFD_DATA_RANGE_CHECK(*c1_a, 0U);
        *c1_fanzhuanfudaowei = 0.0;
        _SFD_DATA_RANGE_CHECK(*c1_fanzhuanfudaowei, 10U);
        *c1_fanzhuanyangdaowei = 1.0;
        _SFD_DATA_RANGE_CHECK(*c1_fanzhuanyangdaowei, 11U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 9);
      break;

     case c1_IN_on5:
      CV_CHART_EVAL(0, 0, 11);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 10);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 12);
      if (CV_TRANSITION_EVAL(12U, (int32_T)_SFD_CCP_CALL(12U, 0, *c1_zhangdaowei
            >= 4900.0 != 0U)) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 12);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG, 10);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 10);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 10);
        *c1_is_c1_luoji1 = c1_IN_off5;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 4);
        *c1_temporalCounter_i1 = 0U;
        *c1_a = 0.0;
        _SFD_DATA_RANGE_CHECK(*c1_a, 0U);
        *c1_dangbanzhangkaidaowei = 1.0;
        _SFD_DATA_RANGE_CHECK(*c1_dangbanzhangkaidaowei, 12U);
        c1_d0 = *c1_dangbanzhangkaidaowei;
        sf_mex_printf("%s =\\n", "dangbanzhangkaidaowei");
        sf_mex_call_debug("disp", 0U, 1U, 6, c1_d0);
        *c1_dangbanhelongdaowei = 0.0;
        _SFD_DATA_RANGE_CHECK(*c1_dangbanhelongdaowei, 13U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 10);
      break;

     case c1_IN_on6:
      CV_CHART_EVAL(0, 0, 12);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 11);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 13);
      if (CV_TRANSITION_EVAL(13U, (int32_T)_SFD_CCP_CALL(13U, 0, *c1_hedaowei <=
            1400.0 != 0U)) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 13);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG, 11);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 11);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 11);
        *c1_is_c1_luoji1 = c1_IN_off6;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 5);
        *c1_temporalCounter_i1 = 0U;
        *c1_a = 0.0;
        _SFD_DATA_RANGE_CHECK(*c1_a, 0U);
        *c1_dangbanhelongdaowei = 1.0;
        _SFD_DATA_RANGE_CHECK(*c1_dangbanhelongdaowei, 13U);
        *c1_dangbanzhangkaidaowei = 0.0;
        _SFD_DATA_RANGE_CHECK(*c1_dangbanzhangkaidaowei, 12U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 11);
      break;

     case c1_IN_start:
      CV_CHART_EVAL(0, 0, 13);
      c1_start(chartInstance);
      break;

     default:
      CV_CHART_EVAL(0, 0, 0);
      *c1_is_c1_luoji1 = (uint8_T)c1_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0);
}

static void compInitSubchartSimstructsFcn_c1_luoji1(SFc1_luoji1InstanceStruct
  *chartInstance)
{
}

static void c1_start(SFc1_luoji1InstanceStruct *chartInstance)
{
  real_T *c1_zhiling;
  uint8_T *c1_is_c1_luoji1;
  real_T *c1_a;
  c1_zhiling = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c1_a = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c1_is_c1_luoji1 = (uint8_T *)ssGetDWork(chartInstance->S, 2);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 12);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1);
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2);
  if (CV_TRANSITION_EVAL(2U, (int32_T)_SFD_CCP_CALL(2U, 0, *c1_zhiling == 1.0 !=
        0U)) != 0) {
    if (sf_debug_transition_conflict_check_enabled()) {
      unsigned int transitionList[6];
      unsigned int numTransitions = 1;
      transitionList[0] = 2;
      sf_debug_transition_conflict_check_begin();
      if (*c1_zhiling == 2.0) {
        transitionList[numTransitions] = 3;
        numTransitions++;
      }

      if (*c1_zhiling == 3.0) {
        transitionList[numTransitions] = 4;
        numTransitions++;
      }

      if (*c1_zhiling == 4.0) {
        transitionList[numTransitions] = 5;
        numTransitions++;
      }

      if (*c1_zhiling == 5.0) {
        transitionList[numTransitions] = 6;
        numTransitions++;
      }

      if (*c1_zhiling == 6.0) {
        transitionList[numTransitions] = 7;
        numTransitions++;
      }

      sf_debug_transition_conflict_check_end();
      if (numTransitions > 1) {
        _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
      }
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG, 12);
    *c1_is_c1_luoji1 = (uint8_T)c1_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 12);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 12);
    *c1_is_c1_luoji1 = c1_IN_on1;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 6);
    *c1_a = 1.0;
    _SFD_DATA_RANGE_CHECK(*c1_a, 0U);
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3);
    if (CV_TRANSITION_EVAL(3U, (int32_T)_SFD_CCP_CALL(3U, 0, *c1_zhiling == 2.0
          != 0U)) != 0) {
      if (sf_debug_transition_conflict_check_enabled()) {
        unsigned int transitionList[5];
        unsigned int numTransitions = 1;
        transitionList[0] = 3;
        sf_debug_transition_conflict_check_begin();
        if (*c1_zhiling == 3.0) {
          transitionList[numTransitions] = 4;
          numTransitions++;
        }

        if (*c1_zhiling == 4.0) {
          transitionList[numTransitions] = 5;
          numTransitions++;
        }

        if (*c1_zhiling == 5.0) {
          transitionList[numTransitions] = 6;
          numTransitions++;
        }

        if (*c1_zhiling == 6.0) {
          transitionList[numTransitions] = 7;
          numTransitions++;
        }

        sf_debug_transition_conflict_check_end();
        if (numTransitions > 1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }

      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG, 12);
      *c1_is_c1_luoji1 = (uint8_T)c1_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 12);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 12);
      *c1_is_c1_luoji1 = c1_IN_on2;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 7);
      *c1_a = 2.0;
      _SFD_DATA_RANGE_CHECK(*c1_a, 0U);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4);
      if (CV_TRANSITION_EVAL(4U, (int32_T)_SFD_CCP_CALL(4U, 0, *c1_zhiling ==
            3.0 != 0U)) != 0) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[4];
          unsigned int numTransitions = 1;
          transitionList[0] = 4;
          sf_debug_transition_conflict_check_begin();
          if (*c1_zhiling == 4.0) {
            transitionList[numTransitions] = 5;
            numTransitions++;
          }

          if (*c1_zhiling == 5.0) {
            transitionList[numTransitions] = 6;
            numTransitions++;
          }

          if (*c1_zhiling == 6.0) {
            transitionList[numTransitions] = 7;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions > 1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG, 12);
        *c1_is_c1_luoji1 = (uint8_T)c1_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 12);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 12);
        *c1_is_c1_luoji1 = c1_IN_on3;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 8);
        *c1_a = 3.0;
        _SFD_DATA_RANGE_CHECK(*c1_a, 0U);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5);
        if (CV_TRANSITION_EVAL(5U, (int32_T)_SFD_CCP_CALL(5U, 0, *c1_zhiling ==
              4.0 != 0U)) != 0) {
          if (sf_debug_transition_conflict_check_enabled()) {
            unsigned int transitionList[3];
            unsigned int numTransitions = 1;
            transitionList[0] = 5;
            sf_debug_transition_conflict_check_begin();
            if (*c1_zhiling == 5.0) {
              transitionList[numTransitions] = 6;
              numTransitions++;
            }

            if (*c1_zhiling == 6.0) {
              transitionList[numTransitions] = 7;
              numTransitions++;
            }

            sf_debug_transition_conflict_check_end();
            if (numTransitions > 1) {
              _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
            }
          }

          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG, 12);
          *c1_is_c1_luoji1 = (uint8_T)c1_IN_NO_ACTIVE_CHILD;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 12);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 12);
          *c1_is_c1_luoji1 = c1_IN_on4;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 9);
          *c1_a = 4.0;
          _SFD_DATA_RANGE_CHECK(*c1_a, 0U);
        } else {
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 6);
          if (CV_TRANSITION_EVAL(6U, (int32_T)_SFD_CCP_CALL(6U, 0, *c1_zhiling ==
                5.0 != 0U)) != 0) {
            if (sf_debug_transition_conflict_check_enabled()) {
              unsigned int transitionList[2];
              unsigned int numTransitions = 1;
              transitionList[0] = 6;
              sf_debug_transition_conflict_check_begin();
              if (*c1_zhiling == 6.0) {
                transitionList[numTransitions] = 7;
                numTransitions++;
              }

              sf_debug_transition_conflict_check_end();
              if (numTransitions > 1) {
                _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
              }
            }

            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6);
            _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG, 12);
            *c1_is_c1_luoji1 = (uint8_T)c1_IN_NO_ACTIVE_CHILD;
            _SFD_CS_CALL(STATE_INACTIVE_TAG, 12);
            _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 12);
            *c1_is_c1_luoji1 = c1_IN_on5;
            _SFD_CS_CALL(STATE_ACTIVE_TAG, 10);
            *c1_a = 5.0;
            _SFD_DATA_RANGE_CHECK(*c1_a, 0U);
          } else {
            _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7);
            if (CV_TRANSITION_EVAL(7U, (int32_T)_SFD_CCP_CALL(7U, 0, *c1_zhiling
                  == 6.0 != 0U)) != 0) {
              _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7);
              _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG, 12);
              *c1_is_c1_luoji1 = (uint8_T)c1_IN_NO_ACTIVE_CHILD;
              _SFD_CS_CALL(STATE_INACTIVE_TAG, 12);
              _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 12);
              *c1_is_c1_luoji1 = c1_IN_on6;
              _SFD_CS_CALL(STATE_ACTIVE_TAG, 11);
              *c1_a = 6.0;
              _SFD_DATA_RANGE_CHECK(*c1_a, 0U);
            } else {
              goto label_1;
            }
          }
        }
      }
    }
  }

 label_1:
  ;
  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 12);
}

static void c1_off1(SFc1_luoji1InstanceStruct *chartInstance)
{
  boolean_T c1_temp;
  uint8_T *c1_temporalCounter_i1;
  real_T *c1_a;
  uint8_T *c1_is_c1_luoji1;
  c1_temporalCounter_i1 = (uint8_T *)ssGetDWork(chartInstance->S, 3);
  c1_a = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c1_is_c1_luoji1 = (uint8_T *)ssGetDWork(chartInstance->S, 2);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 14);
  c1_temp = (_SFD_CCP_CALL(14U, 0, 1 != 0U) != 0);
  if (c1_temp) {
    c1_temp = (_SFD_CCP_CALL(14U, 1, (int16_T)*c1_temporalCounter_i1 >= 2 != 0U)
               != 0);
  }

  if (CV_TRANSITION_EVAL(14U, (int32_T)c1_temp) != 0) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 14);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG, 0);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0);
    *c1_is_c1_luoji1 = c1_IN_start;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 12);
    *c1_a = 0.0;
    _SFD_DATA_RANGE_CHECK(*c1_a, 0U);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0);
}

static void c1_off2(SFc1_luoji1InstanceStruct *chartInstance)
{
  boolean_T c1_temp;
  uint8_T *c1_temporalCounter_i1;
  real_T *c1_a;
  uint8_T *c1_is_c1_luoji1;
  c1_temporalCounter_i1 = (uint8_T *)ssGetDWork(chartInstance->S, 3);
  c1_a = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c1_is_c1_luoji1 = (uint8_T *)ssGetDWork(chartInstance->S, 2);
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1);
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 15);
  c1_temp = (_SFD_CCP_CALL(15U, 0, 1 != 0U) != 0);
  if (c1_temp) {
    c1_temp = (_SFD_CCP_CALL(15U, 1, (int16_T)*c1_temporalCounter_i1 >= 2 != 0U)
               != 0);
  }

  if (CV_TRANSITION_EVAL(15U, (int32_T)c1_temp) != 0) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 15);
    _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG, 1);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1);
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1);
    *c1_is_c1_luoji1 = c1_IN_start;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 12);
    *c1_a = 0.0;
    _SFD_DATA_RANGE_CHECK(*c1_a, 0U);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1);
}

static void init_script_number_translation(uint32_T c1_machineNumber, uint32_T
  c1_chartNumber)
{
}

const mxArray *sf_c1_luoji1_get_eml_resolved_functions_info(void)
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
  SFc1_luoji1InstanceStruct *chartInstance;
  chartInstance = (SFc1_luoji1InstanceStruct *)chartInstanceVoid;
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
  real_T c1_b_u;
  const mxArray *c1_b_y = NULL;
  SFc1_luoji1InstanceStruct *chartInstance;
  chartInstance = (SFc1_luoji1InstanceStruct *)chartInstanceVoid;
  c1_y = NULL;
  c1_b_u = *((real_T *)c1_u);
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", &c1_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c1_y, c1_b_y);
  return c1_y;
}

static real_T c1_emlrt_marshallIn(SFc1_luoji1InstanceStruct *chartInstance,
  const mxArray *c1_a, const char_T *c1_name)
{
  real_T c1_y;
  real_T c1_d1;
  sf_mex_import(c1_name, sf_mex_dup(c1_a), &c1_d1, 1, 0, 0U, 0, 0U, 0);
  c1_y = c1_d1;
  sf_mex_destroy(&c1_a);
  return c1_y;
}

static uint8_T c1_b_emlrt_marshallIn(SFc1_luoji1InstanceStruct *chartInstance,
  const mxArray *c1_is_active_c1_luoji1, const char_T *
  c1_name)
{
  uint8_T c1_y;
  uint8_T c1_u0;
  sf_mex_import(c1_name, sf_mex_dup(c1_is_active_c1_luoji1), &c1_u0, 1, 3, 0U, 0,
                0U, 0);
  c1_y = c1_u0;
  sf_mex_destroy(&c1_is_active_c1_luoji1);
  return c1_y;
}

static const mxArray *c1_c_emlrt_marshallIn(SFc1_luoji1InstanceStruct
  *chartInstance, const mxArray *c1_b_setSimStateSideEffectsInfo
  , const char_T *c1_name)
{
  const mxArray *c1_y = NULL;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_duplicatearraysafe
                (&c1_b_setSimStateSideEffectsInfo));
  sf_mex_destroy(&c1_b_setSimStateSideEffectsInfo);
  return c1_y;
}

static void init_dsm_address_info(SFc1_luoji1InstanceStruct *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c1_luoji1_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2269497013U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(4067522073U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3060321798U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1647878241U);
}

mxArray *sf_c1_luoji1_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(2544863732U);
    pr[1] = (double)(3589838365U);
    pr[2] = (double)(3151433609U);
    pr[3] = (double)(916930985U);
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,7,3,dataFields);

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

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,4,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,4,"type",mxType);
    }

    mxSetField(mxData,4,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,5,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,5,"type",mxType);
    }

    mxSetField(mxData,5,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,6,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,6,"type",mxType);
    }

    mxSetField(mxData,6,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,7,3,dataFields);

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

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,4,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,4,"type",mxType);
    }

    mxSetField(mxData,4,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,5,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,5,"type",mxType);
    }

    mxSetField(mxData,5,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,6,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,6,"type",mxType);
    }

    mxSetField(mxData,6,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  return(mxAutoinheritanceInfo);
}

static mxArray *sf_get_sim_state_info_c1_luoji1(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x10'type','srcId','name','auxInfo'{{M[1],M[43],T\"a\",},{M[1],M[56],T\"dangbanhelongdaowei\",},{M[1],M[55],T\"dangbanzhangkaidaowei\",},{M[1],M[53],T\"fanzhuanfudaowei\",},{M[1],M[54],T\"fanzhuanyangdaowei\",},{M[1],M[52],T\"huiluodaowei\",},{M[1],M[51],T\"shengqidaowei\",},{M[8],M[0],T\"is_active_c1_luoji1\",},{M[9],M[0],T\"is_c1_luoji1\",},{M[11],M[0],T\"temporalCounter_i1\",S'et','os','ct'{{T\"wu\",M1x6[23 26 27 28 29 30],M[1]}}}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 10, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c1_luoji1_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc1_luoji1InstanceStruct *chartInstance;
    chartInstance = (SFc1_luoji1InstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart(_luoji1MachineNumber_,
          1,
          13,
          20,
          14,
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
          init_script_number_translation(_luoji1MachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting(_luoji1MachineNumber_,
            chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(_luoji1MachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,2,0,1,"a");
          _SFD_SET_DATA_PROPS(1,1,1,0,"zhiling");
          _SFD_SET_DATA_PROPS(2,1,1,0,"weiganweizhi1");
          _SFD_SET_DATA_PROPS(3,1,1,0,"weiganweizhi2");
          _SFD_SET_DATA_PROPS(4,1,1,0,"fudaowei");
          _SFD_SET_DATA_PROPS(5,1,1,0,"yangdaowei");
          _SFD_SET_DATA_PROPS(6,1,1,0,"zhangdaowei");
          _SFD_SET_DATA_PROPS(7,1,1,0,"hedaowei");
          _SFD_SET_DATA_PROPS(8,2,0,1,"shengqidaowei");
          _SFD_SET_DATA_PROPS(9,2,0,1,"huiluodaowei");
          _SFD_SET_DATA_PROPS(10,2,0,1,"fanzhuanfudaowei");
          _SFD_SET_DATA_PROPS(11,2,0,1,"fanzhuanyangdaowei");
          _SFD_SET_DATA_PROPS(12,2,0,1,"dangbanzhangkaidaowei");
          _SFD_SET_DATA_PROPS(13,2,0,1,"dangbanhelongdaowei");
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
          _SFD_CH_SUBSTATE_COUNT(13);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,1);
          _SFD_CH_SUBSTATE_INDEX(2,2);
          _SFD_CH_SUBSTATE_INDEX(3,3);
          _SFD_CH_SUBSTATE_INDEX(4,4);
          _SFD_CH_SUBSTATE_INDEX(5,5);
          _SFD_CH_SUBSTATE_INDEX(6,6);
          _SFD_CH_SUBSTATE_INDEX(7,7);
          _SFD_CH_SUBSTATE_INDEX(8,8);
          _SFD_CH_SUBSTATE_INDEX(9,9);
          _SFD_CH_SUBSTATE_INDEX(10,10);
          _SFD_CH_SUBSTATE_INDEX(11,11);
          _SFD_CH_SUBSTATE_INDEX(12,12);
          _SFD_ST_SUBSTATE_COUNT(0,0);
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
        }

        _SFD_CV_INIT_CHART(13,1,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
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

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(1,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(2,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(3,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(4,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(5,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(6,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(7,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(8,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(9,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(10,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(11,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 18 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(12,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(13,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 8, 0 };

          static unsigned int sEndGuardMap[] = { 12, 13 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(14,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 8, 0 };

          static unsigned int sEndGuardMap[] = { 12, 13 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(15,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 8, 0 };

          static unsigned int sEndGuardMap[] = { 12, 13 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(16,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 8, 0 };

          static unsigned int sEndGuardMap[] = { 12, 13 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(17,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 8, 0 };

          static unsigned int sEndGuardMap[] = { 12, 13 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(18,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 8, 0 };

          static unsigned int sEndGuardMap[] = { 12, 13 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(19,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
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

        _SFD_TRANS_COV_WTS(1,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 11 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(3,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

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

          static unsigned int sEndGuardMap[] = { 11 };

          _SFD_TRANS_COV_MAPS(4,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(5,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 11 };

          _SFD_TRANS_COV_MAPS(5,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(6,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 11 };

          _SFD_TRANS_COV_MAPS(6,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(7,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 11 };

          _SFD_TRANS_COV_MAPS(7,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(8,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          _SFD_TRANS_COV_MAPS(8,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(9,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          _SFD_TRANS_COV_MAPS(9,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(10,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          _SFD_TRANS_COV_MAPS(10,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(11,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          _SFD_TRANS_COV_MAPS(11,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(12,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 18 };

          _SFD_TRANS_COV_MAPS(12,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(13,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          _SFD_TRANS_COV_MAPS(13,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(14,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 8, 0 };

          static unsigned int sEndGuardMap[] = { 12, 13 };

          _SFD_TRANS_COV_MAPS(14,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(15,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 8, 0 };

          static unsigned int sEndGuardMap[] = { 12, 13 };

          _SFD_TRANS_COV_MAPS(15,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(16,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 8, 0 };

          static unsigned int sEndGuardMap[] = { 12, 13 };

          _SFD_TRANS_COV_MAPS(16,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(17,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 8, 0 };

          static unsigned int sEndGuardMap[] = { 12, 13 };

          _SFD_TRANS_COV_MAPS(17,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(18,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 8, 0 };

          static unsigned int sEndGuardMap[] = { 12, 13 };

          _SFD_TRANS_COV_MAPS(18,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(19,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 8, 0 };

          static unsigned int sEndGuardMap[] = { 12, 13 };

          _SFD_TRANS_COV_MAPS(19,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_b_sf_marshall);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_b_sf_marshall);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_b_sf_marshall);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_b_sf_marshall);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_b_sf_marshall);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_b_sf_marshall);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_b_sf_marshall);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_b_sf_marshall);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_b_sf_marshall);
        _SFD_SET_DATA_COMPILED_PROPS(9,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_b_sf_marshall);
        _SFD_SET_DATA_COMPILED_PROPS(10,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_b_sf_marshall);
        _SFD_SET_DATA_COMPILED_PROPS(11,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_b_sf_marshall);
        _SFD_SET_DATA_COMPILED_PROPS(12,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_b_sf_marshall);
        _SFD_SET_DATA_COMPILED_PROPS(13,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_b_sf_marshall);

        {
          real_T *c1_a;
          real_T *c1_zhiling;
          real_T *c1_weiganweizhi1;
          real_T *c1_weiganweizhi2;
          real_T *c1_fudaowei;
          real_T *c1_yangdaowei;
          real_T *c1_zhangdaowei;
          real_T *c1_hedaowei;
          real_T *c1_shengqidaowei;
          real_T *c1_huiluodaowei;
          real_T *c1_fanzhuanfudaowei;
          real_T *c1_fanzhuanyangdaowei;
          real_T *c1_dangbanzhangkaidaowei;
          real_T *c1_dangbanhelongdaowei;
          c1_dangbanhelongdaowei = (real_T *)ssGetOutputPortSignal
            (chartInstance->S, 7);
          c1_dangbanzhangkaidaowei = (real_T *)ssGetOutputPortSignal
            (chartInstance->S, 6);
          c1_fanzhuanyangdaowei = (real_T *)ssGetOutputPortSignal
            (chartInstance->S, 5);
          c1_fanzhuanfudaowei = (real_T *)ssGetOutputPortSignal(chartInstance->S,
            4);
          c1_huiluodaowei = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
          c1_shengqidaowei = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
          c1_hedaowei = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
          c1_zhangdaowei = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
          c1_yangdaowei = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
          c1_fudaowei = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c1_weiganweizhi2 = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c1_weiganweizhi1 = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c1_zhiling = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          c1_a = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          _SFD_SET_DATA_VALUE_PTR(0U, c1_a);
          _SFD_SET_DATA_VALUE_PTR(1U, c1_zhiling);
          _SFD_SET_DATA_VALUE_PTR(2U, c1_weiganweizhi1);
          _SFD_SET_DATA_VALUE_PTR(3U, c1_weiganweizhi2);
          _SFD_SET_DATA_VALUE_PTR(4U, c1_fudaowei);
          _SFD_SET_DATA_VALUE_PTR(5U, c1_yangdaowei);
          _SFD_SET_DATA_VALUE_PTR(6U, c1_zhangdaowei);
          _SFD_SET_DATA_VALUE_PTR(7U, c1_hedaowei);
          _SFD_SET_DATA_VALUE_PTR(8U, c1_shengqidaowei);
          _SFD_SET_DATA_VALUE_PTR(9U, c1_huiluodaowei);
          _SFD_SET_DATA_VALUE_PTR(10U, c1_fanzhuanfudaowei);
          _SFD_SET_DATA_VALUE_PTR(11U, c1_fanzhuanyangdaowei);
          _SFD_SET_DATA_VALUE_PTR(12U, c1_dangbanzhangkaidaowei);
          _SFD_SET_DATA_VALUE_PTR(13U, c1_dangbanhelongdaowei);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(_luoji1MachineNumber_,
        chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c1_luoji1(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc1_luoji1InstanceStruct*) chartInstanceVar)->S,
    0);
  initialize_params_c1_luoji1((SFc1_luoji1InstanceStruct*) chartInstanceVar);
  initialize_c1_luoji1((SFc1_luoji1InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c1_luoji1(void *chartInstanceVar)
{
  enable_c1_luoji1((SFc1_luoji1InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c1_luoji1(void *chartInstanceVar)
{
  disable_c1_luoji1((SFc1_luoji1InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c1_luoji1(void *chartInstanceVar)
{
  sf_c1_luoji1((SFc1_luoji1InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_ext_mode_exec_c1_luoji1(void *chartInstanceVar)
{
  ext_mode_exec_c1_luoji1((SFc1_luoji1InstanceStruct*) chartInstanceVar);
}

static mxArray* sf_internal_get_sim_state_c1_luoji1(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c1_luoji1((SFc1_luoji1InstanceStruct*)
    chartInfo->chartInstance);         /* raw sim ctx */
  prhs[3] = sf_get_sim_state_info_c1_luoji1();/* state var info */
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

static void sf_internal_set_sim_state_c1_luoji1(SimStruct* S, const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c1_luoji1();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c1_luoji1((SFc1_luoji1InstanceStruct*)chartInfo->chartInstance,
    mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static mxArray* sf_opaque_get_sim_state_c1_luoji1(SimStruct* S)
{
  return sf_internal_get_sim_state_c1_luoji1(S);
}

static void sf_opaque_set_sim_state_c1_luoji1(SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c1_luoji1(S, st);
}

static void sf_opaque_terminate_c1_luoji1(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc1_luoji1InstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c1_luoji1((SFc1_luoji1InstanceStruct*) chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  compInitSubchartSimstructsFcn_c1_luoji1((SFc1_luoji1InstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c1_luoji1(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c1_luoji1((SFc1_luoji1InstanceStruct*)(((ChartInfoStruct *)
      ssGetUserData(S))->chartInstance));
  }
}

mxArray *sf_c1_luoji1_get_testpoint_info(void)
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

static void mdlSetWorkWidths_c1_luoji1(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,"luoji1","luoji1",1);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,"luoji1","luoji1",1,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,"luoji1","luoji1",1,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 5, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 6, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"luoji1","luoji1",1,7);
      sf_mark_chart_reusable_outputs(S,"luoji1","luoji1",1,7);
    }

    sf_set_rtw_dwork_info(S,"luoji1","luoji1",1);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
    sf_set_sfun_dwork_info(S);
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(85659315U));
  ssSetChecksum1(S,(3560761346U));
  ssSetChecksum2(S,(2416351204U));
  ssSetChecksum3(S,(2290581150U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c1_luoji1(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "luoji1", "luoji1",1);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c1_luoji1(SimStruct *S)
{
  SFc1_luoji1InstanceStruct *chartInstance;
  chartInstance = (SFc1_luoji1InstanceStruct *)malloc(sizeof
    (SFc1_luoji1InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc1_luoji1InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c1_luoji1;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c1_luoji1;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c1_luoji1;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c1_luoji1;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c1_luoji1;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c1_luoji1;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c1_luoji1;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c1_luoji1;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c1_luoji1;
  chartInstance->chartInfo.mdlStart = mdlStart_c1_luoji1;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c1_luoji1;
  chartInstance->chartInfo.extModeExec = sf_opaque_ext_mode_exec_c1_luoji1;
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

void c1_luoji1_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c1_luoji1(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c1_luoji1(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c1_luoji1(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c1_luoji1_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
