/* Include files */

#include "blascompat32.h"
#include "untitled_sfun.h"
#include "c1_untitled.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "untitled_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c1_IN_NO_ACTIVE_CHILD          (0U)
#define c1_IN_on1                      (1U)
#define c1_IN_on2                      (2U)
#define c1_IN_on3                      (3U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c1_untitled(SFc1_untitledInstanceStruct *chartInstance);
static void initialize_params_c1_untitled(SFc1_untitledInstanceStruct
  *chartInstance);
static void enable_c1_untitled(SFc1_untitledInstanceStruct *chartInstance);
static void disable_c1_untitled(SFc1_untitledInstanceStruct *chartInstance);
static void c1_update_debugger_state_c1_untitled(SFc1_untitledInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c1_untitled(SFc1_untitledInstanceStruct
  *chartInstance);
static void set_sim_state_c1_untitled(SFc1_untitledInstanceStruct *chartInstance,
  const mxArray *c1_st);
static void c1_set_sim_state_side_effects_c1_untitled
  (SFc1_untitledInstanceStruct *chartInstance);
static void finalize_c1_untitled(SFc1_untitledInstanceStruct *chartInstance);
static void sf_c1_untitled(SFc1_untitledInstanceStruct *chartInstance);
static void compInitSubchartSimstructsFcn_c1_untitled
  (SFc1_untitledInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c1_machineNumber, uint32_T
  c1_chartNumber);
static const mxArray *c1_sf_marshall(void *chartInstanceVoid, void *c1_u);
static const mxArray *c1_b_sf_marshall(void *chartInstanceVoid, void *c1_u);
static const mxArray *c1_c_sf_marshall(void *chartInstanceVoid, void *c1_u);
static real_T c1_emlrt_marshallIn(SFc1_untitledInstanceStruct *chartInstance,
  const mxArray *c1_xinhao, const char_T *c1_name);
static uint8_T c1_b_emlrt_marshallIn(SFc1_untitledInstanceStruct *chartInstance,
  const mxArray *c1_b_is_active_c1_untitled, const char_T *c1_name);
static const mxArray *c1_c_emlrt_marshallIn(SFc1_untitledInstanceStruct
  *chartInstance, const mxArray *c1_b_setSimStateSideEffectsInfo, const char_T
  *c1_name);
static void init_test_point_addr_map(SFc1_untitledInstanceStruct *chartInstance);
static void **get_test_point_address_map(SFc1_untitledInstanceStruct
  *chartInstance);
static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc1_untitledInstanceStruct *chartInstance);
static void init_dsm_address_info(SFc1_untitledInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c1_untitled(SFc1_untitledInstanceStruct *chartInstance)
{
  real_T *c1_xinhao;
  c1_xinhao = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c1_doSetSimStateSideEffects = 0U;
  chartInstance->c1_setSimStateSideEffectsInfo = NULL;
  chartInstance->c1_tp_on1 = 0U;
  chartInstance->c1_tp_on2 = 0U;
  chartInstance->c1_tp_on3 = 0U;
  chartInstance->c1_is_active_c1_untitled = 0U;
  chartInstance->c1_is_c1_untitled = 0U;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c1_xinhao = 0.0;
  }
}

static void initialize_params_c1_untitled(SFc1_untitledInstanceStruct
  *chartInstance)
{
}

static void enable_c1_untitled(SFc1_untitledInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c1_untitled(SFc1_untitledInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c1_update_debugger_state_c1_untitled(SFc1_untitledInstanceStruct
  *chartInstance)
{
  uint32_T c1_prevAniVal;
  c1_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if ((int16_T)chartInstance->c1_is_active_c1_untitled == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 0);
  }

  if (chartInstance->c1_is_c1_untitled == c1_IN_on1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0);
  }

  if (chartInstance->c1_is_c1_untitled == c1_IN_on2) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1);
  }

  if (chartInstance->c1_is_c1_untitled == c1_IN_on3) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2);
  }

  sf_debug_set_animation(c1_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c1_untitled(SFc1_untitledInstanceStruct
  *chartInstance)
{
  const mxArray *c1_st = NULL;
  const mxArray *c1_y = NULL;
  real_T c1_hoistedGlobal;
  real_T c1_u;
  const mxArray *c1_b_y = NULL;
  uint8_T c1_b_hoistedGlobal;
  uint8_T c1_b_u;
  const mxArray *c1_c_y = NULL;
  uint8_T c1_c_hoistedGlobal;
  uint8_T c1_c_u;
  const mxArray *c1_d_y = NULL;
  uint8_T c1_d_hoistedGlobal;
  uint8_T c1_d_u;
  const mxArray *c1_e_y = NULL;
  real_T *c1_xinhao;
  c1_xinhao = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c1_st = NULL;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_createcellarray(4));
  c1_hoistedGlobal = *c1_xinhao;
  c1_u = c1_hoistedGlobal;
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", &c1_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 0, c1_b_y);
  c1_b_hoistedGlobal = chartInstance->c1_is_active_c1_untitled;
  c1_b_u = c1_b_hoistedGlobal;
  c1_c_y = NULL;
  sf_mex_assign(&c1_c_y, sf_mex_create("y", &c1_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 1, c1_c_y);
  c1_c_hoistedGlobal = chartInstance->c1_is_c1_untitled;
  c1_c_u = c1_c_hoistedGlobal;
  c1_d_y = NULL;
  sf_mex_assign(&c1_d_y, sf_mex_create("y", &c1_c_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 2, c1_d_y);
  c1_d_hoistedGlobal = chartInstance->c1_temporalCounter_i1;
  c1_d_u = c1_d_hoistedGlobal;
  c1_e_y = NULL;
  sf_mex_assign(&c1_e_y, sf_mex_create("y", &c1_d_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 3, c1_e_y);
  sf_mex_assign(&c1_st, c1_y);
  return c1_st;
}

static void set_sim_state_c1_untitled(SFc1_untitledInstanceStruct *chartInstance,
  const mxArray *c1_st)
{
  const mxArray *c1_u;
  real_T *c1_xinhao;
  c1_xinhao = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c1_u = sf_mex_dup(c1_st);
  *c1_xinhao = c1_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_u,
    0)), "xinhao");
  chartInstance->c1_is_active_c1_untitled = c1_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c1_u, 1)),
    "is_active_c1_untitled");
  chartInstance->c1_is_c1_untitled = c1_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c1_u, 2)), "is_c1_untitled");
  chartInstance->c1_temporalCounter_i1 = c1_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c1_u, 3)),
    "temporalCounter_i1");
  sf_mex_assign(&chartInstance->c1_setSimStateSideEffectsInfo,
                c1_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c1_u, 4)
    ), "setSimStateSideEffectsInfo"));
  sf_mex_destroy(&c1_u);
  chartInstance->c1_doSetSimStateSideEffects = 1U;
  c1_update_debugger_state_c1_untitled(chartInstance);
  sf_mex_destroy(&c1_st);
}

static void c1_set_sim_state_side_effects_c1_untitled
  (SFc1_untitledInstanceStruct *chartInstance)
{
  if (chartInstance->c1_doSetSimStateSideEffects != 0) {
    if (chartInstance->c1_is_c1_untitled == c1_IN_on1) {
      chartInstance->c1_tp_on1 = 1U;
    } else {
      chartInstance->c1_tp_on1 = 0U;
    }

    if (chartInstance->c1_is_c1_untitled == c1_IN_on2) {
      chartInstance->c1_tp_on2 = 1U;
      if (sf_mex_sub(chartInstance->c1_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 3) == 0.0) {
        chartInstance->c1_temporalCounter_i1 = 0U;
      }
    } else {
      chartInstance->c1_tp_on2 = 0U;
    }

    if (chartInstance->c1_is_c1_untitled == c1_IN_on3) {
      chartInstance->c1_tp_on3 = 1U;
    } else {
      chartInstance->c1_tp_on3 = 0U;
    }

    chartInstance->c1_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c1_untitled(SFc1_untitledInstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c1_setSimStateSideEffectsInfo);
}

static void sf_c1_untitled(SFc1_untitledInstanceStruct *chartInstance)
{
  int32_T c1_previousEvent;
  boolean_T c1_temp;
  real_T *c1_xinhao;
  real_T *c1_dingwei;
  c1_xinhao = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c1_dingwei = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c1_set_sim_state_side_effects_c1_untitled(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 0);
  _SFD_DATA_RANGE_CHECK(*c1_dingwei, 0U);
  _SFD_DATA_RANGE_CHECK(*c1_xinhao, 1U);
  c1_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 0);
  if ((int16_T)chartInstance->c1_temporalCounter_i1 < 3) {
    chartInstance->c1_temporalCounter_i1 = (uint8_T)
      (chartInstance->c1_temporalCounter_i1 + 1);
  }

  if ((int16_T)chartInstance->c1_is_active_c1_untitled == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 0);
    chartInstance->c1_is_active_c1_untitled = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 0);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0);
    chartInstance->c1_is_c1_untitled = c1_IN_on1;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0);
    chartInstance->c1_tp_on1 = 1U;
  } else {
    switch (chartInstance->c1_is_c1_untitled) {
     case c1_IN_on1:
      CV_CHART_EVAL(0, 0, 1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1);
      if (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1U, 0, *c1_dingwei ==
            1.0 != 0U)) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG, 0);
        chartInstance->c1_tp_on1 = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 0);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0);
        chartInstance->c1_is_c1_untitled = c1_IN_on2;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1);
        chartInstance->c1_temporalCounter_i1 = 0U;
        chartInstance->c1_tp_on2 = 1U;
        *c1_xinhao = 132.0;
        _SFD_DATA_RANGE_CHECK(*c1_xinhao, 1U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0);
      break;

     case c1_IN_on2:
      CV_CHART_EVAL(0, 0, 2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2);
      c1_temp = (_SFD_CCP_CALL(2U, 0, 1 != 0U) != 0);
      if (c1_temp) {
        c1_temp = (_SFD_CCP_CALL(2U, 1, (int16_T)
                    chartInstance->c1_temporalCounter_i1 >= 1 != 0U) != 0);
      }

      if (CV_TRANSITION_EVAL(2U, (int32_T)c1_temp) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG, 1);
        chartInstance->c1_tp_on2 = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1);
        chartInstance->c1_is_c1_untitled = c1_IN_on3;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 2);
        chartInstance->c1_tp_on3 = 1U;
        *c1_xinhao = 130.0;
        _SFD_DATA_RANGE_CHECK(*c1_xinhao, 1U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1);
      break;

     case c1_IN_on3:
      CV_CHART_EVAL(0, 0, 3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3);
      if (CV_TRANSITION_EVAL(3U, (int32_T)_SFD_CCP_CALL(3U, 0, *c1_dingwei ==
            0.0 != 0U)) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG, 2);
        chartInstance->c1_tp_on3 = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 2);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2);
        chartInstance->c1_is_c1_untitled = c1_IN_on1;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 0);
        chartInstance->c1_tp_on1 = 1U;
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2);
      break;

     default:
      CV_CHART_EVAL(0, 0, 0);
      chartInstance->c1_is_c1_untitled = (uint8_T)c1_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0);
  _sfEvent_ = c1_previousEvent;
  sf_debug_check_for_state_inconsistency(_untitledMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void compInitSubchartSimstructsFcn_c1_untitled
  (SFc1_untitledInstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c1_machineNumber, uint32_T
  c1_chartNumber)
{
}

const mxArray *sf_c1_untitled_get_eml_resolved_functions_info(void)
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
  uint8_T c1_b_u;
  const mxArray *c1_b_y = NULL;
  SFc1_untitledInstanceStruct *chartInstance;
  chartInstance = (SFc1_untitledInstanceStruct *)chartInstanceVoid;
  c1_y = NULL;
  c1_b_u = *((uint8_T *)c1_u);
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", &c1_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_assign(&c1_y, c1_b_y);
  return c1_y;
}

static const mxArray *c1_b_sf_marshall(void *chartInstanceVoid, void *c1_u)
{
  const mxArray *c1_y = NULL;
  boolean_T c1_b_u;
  const mxArray *c1_b_y = NULL;
  SFc1_untitledInstanceStruct *chartInstance;
  chartInstance = (SFc1_untitledInstanceStruct *)chartInstanceVoid;
  c1_y = NULL;
  c1_b_u = *((boolean_T *)c1_u);
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", &c1_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c1_y, c1_b_y);
  return c1_y;
}

static const mxArray *c1_c_sf_marshall(void *chartInstanceVoid, void *c1_u)
{
  const mxArray *c1_y = NULL;
  real_T c1_b_u;
  const mxArray *c1_b_y = NULL;
  SFc1_untitledInstanceStruct *chartInstance;
  chartInstance = (SFc1_untitledInstanceStruct *)chartInstanceVoid;
  c1_y = NULL;
  c1_b_u = *((real_T *)c1_u);
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", &c1_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c1_y, c1_b_y);
  return c1_y;
}

static real_T c1_emlrt_marshallIn(SFc1_untitledInstanceStruct *chartInstance,
  const mxArray *c1_xinhao, const char_T *c1_name)
{
  real_T c1_y;
  real_T c1_d0;
  sf_mex_import(c1_name, sf_mex_dup(c1_xinhao), &c1_d0, 1, 0, 0U, 0, 0U, 0);
  c1_y = c1_d0;
  sf_mex_destroy(&c1_xinhao);
  return c1_y;
}

static uint8_T c1_b_emlrt_marshallIn(SFc1_untitledInstanceStruct *chartInstance,
  const mxArray *c1_b_is_active_c1_untitled, const
  char_T *c1_name)
{
  uint8_T c1_y;
  uint8_T c1_u0;
  sf_mex_import(c1_name, sf_mex_dup(c1_b_is_active_c1_untitled), &c1_u0, 1, 3,
                0U, 0, 0U, 0);
  c1_y = c1_u0;
  sf_mex_destroy(&c1_b_is_active_c1_untitled);
  return c1_y;
}

static const mxArray *c1_c_emlrt_marshallIn(SFc1_untitledInstanceStruct
  *chartInstance, const mxArray *
  c1_b_setSimStateSideEffectsInfo, const char_T *c1_name)
{
  const mxArray *c1_y = NULL;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_duplicatearraysafe
                (&c1_b_setSimStateSideEffectsInfo));
  sf_mex_destroy(&c1_b_setSimStateSideEffectsInfo);
  return c1_y;
}

static void init_test_point_addr_map(SFc1_untitledInstanceStruct *chartInstance)
{
  chartInstance->c1_testPointAddrMap[0] = &chartInstance->c1_tp_on1;
  chartInstance->c1_testPointAddrMap[1] = &chartInstance->c1_tp_on2;
  chartInstance->c1_testPointAddrMap[2] = &chartInstance->c1_tp_on3;
}

static void **get_test_point_address_map(SFc1_untitledInstanceStruct
  *chartInstance)
{
  return &chartInstance->c1_testPointAddrMap[0];
}

static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info
  (SFc1_untitledInstanceStruct *chartInstance)
{
  return &chartInstance->c1_testPointMappingInfo;
}

static void init_dsm_address_info(SFc1_untitledInstanceStruct *chartInstance)
{
}

/* SFunction Glue Code */
static void init_test_point_mapping_info(SimStruct *S);
void sf_c1_untitled_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2215218658U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3439579959U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3565190686U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1935931452U);
}

mxArray *sf_c1_untitled_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(3146036887U);
    pr[1] = (double)(3907106205U);
    pr[2] = (double)(2102994614U);
    pr[3] = (double)(3487186098U);
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

static mxArray *sf_get_sim_state_info_c1_untitled(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x4'type','srcId','name','auxInfo'{{M[1],M[9],T\"xinhao\",},{M[8],M[0],T\"is_active_c1_untitled\",},{M[9],M[0],T\"is_c1_untitled\",},{M[11],M[0],T\"temporalCounter_i1\",S'et','os','ct'{{T\"wu\",M[3],M[1]}}}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 4, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c1_untitled_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc1_untitledInstanceStruct *chartInstance;
    chartInstance = (SFc1_untitledInstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart(_untitledMachineNumber_,
          1,
          3,
          4,
          2,
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
          init_script_number_translation(_untitledMachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting(_untitledMachineNumber_,
            chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(_untitledMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,"dingwei");
          _SFD_SET_DATA_PROPS(1,2,0,1,"xinhao");
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

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(1,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 8, 0 };

          static unsigned int sEndGuardMap[] = { 12, 13 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(2,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(3,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
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

        _SFD_TRANS_COV_WTS(1,0,1,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 11 };

          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,2,0,0);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 8, 0 };

          static unsigned int sEndGuardMap[] = { 12, 13 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
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

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_c_sf_marshall);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_c_sf_marshall);

        {
          real_T *c1_dingwei;
          real_T *c1_xinhao;
          c1_xinhao = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c1_dingwei = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c1_dingwei);
          _SFD_SET_DATA_VALUE_PTR(1U, c1_xinhao);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(_untitledMachineNumber_,
        chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c1_untitled(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc1_untitledInstanceStruct*) chartInstanceVar)
    ->S,0);
  initialize_params_c1_untitled((SFc1_untitledInstanceStruct*) chartInstanceVar);
  initialize_c1_untitled((SFc1_untitledInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c1_untitled(void *chartInstanceVar)
{
  enable_c1_untitled((SFc1_untitledInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c1_untitled(void *chartInstanceVar)
{
  disable_c1_untitled((SFc1_untitledInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c1_untitled(void *chartInstanceVar)
{
  sf_c1_untitled((SFc1_untitledInstanceStruct*) chartInstanceVar);
}

static mxArray* sf_internal_get_sim_state_c1_untitled(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c1_untitled((SFc1_untitledInstanceStruct*)
    chartInfo->chartInstance);         /* raw sim ctx */
  prhs[3] = sf_get_sim_state_info_c1_untitled();/* state var info */
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

static void sf_internal_set_sim_state_c1_untitled(SimStruct* S, const mxArray
  *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c1_untitled();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c1_untitled((SFc1_untitledInstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static mxArray* sf_opaque_get_sim_state_c1_untitled(SimStruct* S)
{
  return sf_internal_get_sim_state_c1_untitled(S);
}

static void sf_opaque_set_sim_state_c1_untitled(SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c1_untitled(S, st);
}

static void sf_opaque_terminate_c1_untitled(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc1_untitledInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c1_untitled((SFc1_untitledInstanceStruct*) chartInstanceVar);
    if (!sim_mode_is_rtw_gen(S)) {
      ssSetModelMappingInfoPtr(S, NULL);
    }

    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  compInitSubchartSimstructsFcn_c1_untitled((SFc1_untitledInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c1_untitled(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c1_untitled((SFc1_untitledInstanceStruct*)
      (((ChartInfoStruct *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c1_untitled(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,"untitled","untitled",1);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,"untitled","untitled",1,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,"untitled","untitled",1,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"untitled","untitled",1,1);
      sf_mark_chart_reusable_outputs(S,"untitled","untitled",1,1);
    }

    sf_set_rtw_dwork_info(S,"untitled","untitled",1);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(3751895486U));
  ssSetChecksum1(S,(698593221U));
  ssSetChecksum2(S,(4122823499U));
  ssSetChecksum3(S,(2110680377U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c1_untitled(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "untitled", "untitled",1);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c1_untitled(SimStruct *S)
{
  SFc1_untitledInstanceStruct *chartInstance;
  chartInstance = (SFc1_untitledInstanceStruct *)malloc(sizeof
    (SFc1_untitledInstanceStruct));
  memset(chartInstance, 0, sizeof(SFc1_untitledInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c1_untitled;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c1_untitled;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c1_untitled;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c1_untitled;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c1_untitled;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c1_untitled;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c1_untitled;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c1_untitled;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c1_untitled;
  chartInstance->chartInfo.mdlStart = mdlStart_c1_untitled;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c1_untitled;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->S = S;
  ssSetUserData(S,(void *)(&(chartInstance->chartInfo)));/* register the chart instance with simstruct */
  init_dsm_address_info(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
    init_test_point_mapping_info(S);
  }

  sf_opaque_init_subchart_simstructs(chartInstance->chartInfo.chartInstance);
  chart_debug_initialization(S,1);
}

void c1_untitled_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c1_untitled(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c1_untitled(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c1_untitled(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c1_untitled_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}

static const rtwCAPI_DataTypeMap dataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, isComplex, isPointer */
  { "uint8_T", "uint8_T", 0, 0, sizeof(uint8_T), SS_UINT8, 0, 0 } };

static const rtwCAPI_FixPtMap fixedPointMap[] = {
  /* *fracSlope, *bias, scaleType, wordLength, exponent, isSigned */
  { NULL, NULL, rtwCAPI_FIX_RESERVED, 64, 0, 0 } };

static const rtwCAPI_DimensionMap dimensionMap[] = {
  /* dataOrientation, dimArrayIndex, numDims*/
  { rtwCAPI_SCALAR, 0, 2 } };

static const uint_T dimensionArray[] = {
  1, 1 };

static real_T sfCAPIsampleTimeZero = 0.0;
static const rtwCAPI_SampleTimeMap sampleTimeMap[] = {
  /* *period, *offset, taskId, mode */
  { &sfCAPIsampleTimeZero, &sfCAPIsampleTimeZero, 0, 0 }
};

static const rtwCAPI_Signals testPointSignals[] = {
  /* addrMapIndex, sysNum, SFRelativePath, dataName, portNumber, dataTypeIndex, dimIndex, fixPtIdx, sTimeIndex */
  { 0, 0, "StateflowChart/on1", "on1", 0, 0, 0, 0, 0 },

  { 1, 0, "StateflowChart/on2", "on2", 0, 0, 0, 0, 0 },

  { 2, 0, "StateflowChart/on3", "on3", 0, 0, 0, 0, 0 } };

static rtwCAPI_ModelMappingStaticInfo testPointMappingStaticInfo = {
  /* block signal monitoring */
  {
    testPointSignals,                  /* Block signals Array  */
    3                                  /* Num Block IO signals */
  },

  /* parameter tuning */
  {
    NULL,                              /* Block parameters Array    */
    0,                                 /* Num block parameters      */
    NULL,                              /* Variable parameters Array */
    0                                  /* Num variable parameters   */
  },

  /* block states */
  {
    NULL,                              /* Block States array        */
    0                                  /* Num Block States          */
  },

  /* Static maps */
  {
    dataTypeMap,                       /* Data Type Map            */
    dimensionMap,                      /* Data Dimension Map       */
    fixedPointMap,                     /* Fixed Point Map          */
    NULL,                              /* Structure Element map    */
    sampleTimeMap,                     /* Sample Times Map         */
    dimensionArray                     /* Dimension Array          */
  },

  /* Target type */
  "float"
};

static void init_test_point_mapping_info(SimStruct *S)
{
  rtwCAPI_ModelMappingInfo *testPointMappingInfo;
  void **testPointAddrMap;
  SFc1_untitledInstanceStruct *chartInstance;
  chartInstance = (SFc1_untitledInstanceStruct *) ((ChartInfoStruct *)
    (ssGetUserData(S)))->chartInstance;
  init_test_point_addr_map(chartInstance);
  testPointMappingInfo = get_test_point_mapping_info(chartInstance);
  testPointAddrMap = get_test_point_address_map(chartInstance);
  rtwCAPI_SetStaticMap(*testPointMappingInfo, &testPointMappingStaticInfo);
  rtwCAPI_SetLoggingStaticMap(*testPointMappingInfo, NULL);
  rtwCAPI_SetInstanceLoggingInfo(*testPointMappingInfo, NULL);
  rtwCAPI_SetPath(*testPointMappingInfo, "");
  rtwCAPI_SetFullPath(*testPointMappingInfo, NULL);
  rtwCAPI_SetDataAddressMap(*testPointMappingInfo, testPointAddrMap);
  rtwCAPI_SetChildMMIArray(*testPointMappingInfo, NULL);
  rtwCAPI_SetChildMMIArrayLen(*testPointMappingInfo, 0);
  ssSetModelMappingInfoPtr(S, testPointMappingInfo);
}
