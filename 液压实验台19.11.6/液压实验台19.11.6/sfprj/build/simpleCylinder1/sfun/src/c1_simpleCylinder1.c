/* Include files */
#include "simpleCylinder1_sfun.h"
#include "c1_simpleCylinder1.h"
#define CHARTINSTANCE_CHARTNUMBER       (chartInstance.chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER    (chartInstance.instanceNumber)
#include "simpleCylinder1_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c1_IN_NO_ACTIVE_CHILD           (0)
#define c1_IN_running                   (1)
#define c1_IN_to_stopped                (4)
#define c1_IN_to_running                (3)
#define c1_IN_stopped                   (2)
#define c1_IN_ready                     (1)
#define c1_IN_to_rest                   (4)
#define c1_IN_rest                      (2)
#define c1_IN_to_ready                  (3)

/* Variable Declarations */

/* Variable Definitions */
static SFc1_simpleCylinder1InstanceStruct chartInstance;

/* Function Declarations */
static void initialize_c1_simpleCylinder1(void);
static void initialize_params_c1_simpleCylinder1(void);
static void enable_c1_simpleCylinder1(void);
static void disable_c1_simpleCylinder1(void);
static void finalize_c1_simpleCylinder1(void);
static void sf_c1_simpleCylinder1(void);
static void c1_run_mode(void);
static boolean_T c1__bool_u32_(uint32_T c1_b);
static boolean_T c1__bool_d_(real_T c1_b);
static real_T *c1_start_fbk(void);
static real_T *c1_start_cmd(void);
static real_T *c1_ready_cmd(void);
static real_T *c1_ready_fbk(void);
static real_T *c1_start(void);
static real_T *c1_start_sts(void);
static real_T *c1_ready_sts(void);
static real_T *c1_ready(void);
static void init_test_point_addr_map(void);
static void **get_test_point_address_map(void);
static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info(void);
static void init_dsm_address_info(void);

/* Function Definitions */
static void initialize_c1_simpleCylinder1(void)
{
  _sfTime_ = (real_T)ssGetT(chartInstance.S);
  chartInstance.c1_is_active_ready_mode = 0U;
  chartInstance.c1_is_ready_mode = 0U;
  chartInstance.c1_tp_ready_mode = 0U;
  chartInstance.c1_tp_ready = 0U;
  chartInstance.c1_tp_rest = 0U;
  chartInstance.c1_tp_to_ready = 0U;
  chartInstance.c1_tp_to_rest = 0U;
  chartInstance.c1_is_active_run_mode = 0U;
  chartInstance.c1_is_run_mode = 0U;
  chartInstance.c1_tp_run_mode = 0U;
  chartInstance.c1_tp_running = 0U;
  chartInstance.c1_tp_stopped = 0U;
  chartInstance.c1_tp_to_running = 0U;
  chartInstance.c1_tp_to_stopped = 0U;
  chartInstance.c1_is_active_c1_simpleCylinder1 = 0U;
  if(!((boolean_T)cdrGetOutputPortReusable(chartInstance.S, 1) != 0)) {
    *c1_start() = 0.0;
  }
  if(!((boolean_T)cdrGetOutputPortReusable(chartInstance.S, 2) != 0)) {
    *c1_start_sts() = 0.0;
  }
  if(!((boolean_T)cdrGetOutputPortReusable(chartInstance.S, 3) != 0)) {
    *c1_ready_sts() = 0.0;
  }
  if(!((boolean_T)cdrGetOutputPortReusable(chartInstance.S, 4) != 0)) {
    *c1_ready() = 0.0;
  }
}

static void initialize_params_c1_simpleCylinder1(void)
{
}

static void enable_c1_simpleCylinder1(void)
{
}

static void disable_c1_simpleCylinder1(void)
{
}

static void finalize_c1_simpleCylinder1(void)
{
}

static void sf_c1_simpleCylinder1(void)
{
  uint8_T c1_previousEvent;
  _sfTime_ = (real_T)ssGetT(chartInstance.S);
  _SFD_DATA_RANGE_CHECK(*c1_start_fbk(), 5U);
  _SFD_DATA_RANGE_CHECK(*c1_start_cmd(), 4U);
  _SFD_DATA_RANGE_CHECK(*c1_ready_cmd(), 1U);
  _SFD_DATA_RANGE_CHECK(*c1_ready_fbk(), 2U);
  _SFD_DATA_RANGE_CHECK(*c1_start(), 6U);
  _SFD_DATA_RANGE_CHECK(*c1_start_sts(), 7U);
  _SFD_DATA_RANGE_CHECK(*c1_ready_sts(), 0U);
  _SFD_DATA_RANGE_CHECK(*c1_ready(), 3U);
  c1_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,0);
  if(chartInstance.c1_is_active_c1_simpleCylinder1 == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG,0);
    chartInstance.c1_is_active_c1_simpleCylinder1 = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
    chartInstance.c1_is_active_run_mode = 1U;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,6);
    chartInstance.c1_tp_run_mode = 1U;
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,0);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,0);
    chartInstance.c1_is_run_mode = (uint8_T)c1_IN_stopped;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,5);
    chartInstance.c1_tp_stopped = 1U;
    chartInstance.c1_is_active_ready_mode = 1U;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,3);
    chartInstance.c1_tp_ready_mode = 1U;
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,10);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,10);
    chartInstance.c1_is_ready_mode = (uint8_T)c1_IN_rest;
    _SFD_CS_CALL(STATE_ACTIVE_TAG,8);
    chartInstance.c1_tp_rest = 1U;
  } else {
    c1_run_mode();
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,3);
    switch(chartInstance.c1_is_ready_mode) {
     case c1_IN_ready:
      CV_STATE_EVAL(3,0,1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,4);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,5);
      if(c1__bool_u32_(CV_TRANSITION_EVAL(5U,
         (!(_SFD_CCP_CALL(5,0,((*c1_ready_cmd())!=0)) != 0)) &&
         (_SFD_CCP_CALL(5,1,((chartInstance.
             c1_is_run_mode == c1_IN_stopped)!=0)) != 0))) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,5);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,4);
        chartInstance.c1_tp_ready = 0U;
        chartInstance.c1_is_ready_mode = (uint8_T)c1_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
        chartInstance.c1_is_ready_mode = (uint8_T)c1_IN_to_rest;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
        chartInstance.c1_tp_to_rest = 1U;
      } else {
        *c1_ready() = 1.0;
        _SFD_DATA_RANGE_CHECK(*c1_ready(), 3U);
        *c1_ready_sts() = 2.0;
        _SFD_DATA_RANGE_CHECK(*c1_ready_sts(), 0U);
      }
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,4);
      break;
     case c1_IN_rest:
      CV_STATE_EVAL(3,0,2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,8);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,11);
      if(c1__bool_u32_(CV_TRANSITION_EVAL(11U,
         (int32_T)_SFD_CCP_CALL(11,0,((*c1_ready_cmd())!=0)))) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,11);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,8);
        chartInstance.c1_tp_rest = 0U;
        chartInstance.c1_is_ready_mode = (uint8_T)c1_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,8);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,8);
        chartInstance.c1_is_ready_mode = (uint8_T)c1_IN_to_ready;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,9);
        chartInstance.c1_tp_to_ready = 1U;
      } else {
        *c1_ready() = 0.0;
        _SFD_DATA_RANGE_CHECK(*c1_ready(), 3U);
        *c1_ready_sts() = 0.0;
        _SFD_DATA_RANGE_CHECK(*c1_ready_sts(), 0U);
      }
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,8);
      break;
     case c1_IN_to_ready:
      CV_STATE_EVAL(3,0,3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,9);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,13);
      if(c1__bool_u32_(CV_TRANSITION_EVAL(13U,
         (int32_T)_SFD_CCP_CALL(13,0,((*c1_ready_cmd() ==
            *c1_ready_fbk())!=0)))) != 0) {
        if(sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions=1;
          transitionList[0] = 13;
          sf_debug_transition_conflict_check_begin();
          if((!(c1__bool_d_(*c1_ready_cmd()) != 0)) &&
           (chartInstance.c1_is_run_mode == c1_IN_stopped)) {
            transitionList[numTransitions] = 8;
            numTransitions++;
          }
          sf_debug_transition_conflict_check_end();
          if(numTransitions>1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,13);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,9);
        chartInstance.c1_tp_to_ready = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,9);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,9);
        chartInstance.c1_is_ready_mode = (uint8_T)c1_IN_ready;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,4);
        chartInstance.c1_tp_ready = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,8);
        if(c1__bool_u32_(CV_TRANSITION_EVAL(8U,
           (!(_SFD_CCP_CALL(8,0,((*c1_ready_cmd())!=0)) != 0)) &&
           (_SFD_CCP_CALL(8,1,((chartInstance.
               c1_is_run_mode == c1_IN_stopped)!=0)) != 0))) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,8);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,9);
          chartInstance.c1_tp_to_ready = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,9);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,9);
          chartInstance.c1_is_ready_mode = (uint8_T)c1_IN_to_rest;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,2);
          chartInstance.c1_tp_to_rest = 1U;
        } else {
          *c1_ready() = 1.0;
          _SFD_DATA_RANGE_CHECK(*c1_ready(), 3U);
          *c1_ready_sts() = 1.0;
          _SFD_DATA_RANGE_CHECK(*c1_ready_sts(), 0U);
        }
      }
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,9);
      break;
     case c1_IN_to_rest:
      CV_STATE_EVAL(3,0,4);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,2);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,1);
      if(c1__bool_u32_(CV_TRANSITION_EVAL(1U,
         (int32_T)_SFD_CCP_CALL(1,0,((*c1_ready_cmd())!=0)))) != 0) {
        if(sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions=1;
          transitionList[0] = 1;
          sf_debug_transition_conflict_check_begin();
          if(*c1_ready_cmd() == *c1_ready_fbk()) {
            transitionList[numTransitions] = 6;
            numTransitions++;
          }
          sf_debug_transition_conflict_check_end();
          if(numTransitions>1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,1);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
        chartInstance.c1_tp_to_rest = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
        chartInstance.c1_is_ready_mode = (uint8_T)c1_IN_to_ready;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,9);
        chartInstance.c1_tp_to_ready = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,6);
        if(c1__bool_u32_(CV_TRANSITION_EVAL(6U,
           (int32_T)_SFD_CCP_CALL(6,0,((*c1_ready_cmd() ==
              *c1_ready_fbk())!=0)))) != 0) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,6);
          _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,2);
          chartInstance.c1_tp_to_rest = 0U;
          _SFD_CS_CALL(STATE_INACTIVE_TAG,2);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
          chartInstance.c1_is_ready_mode = (uint8_T)c1_IN_rest;
          _SFD_CS_CALL(STATE_ACTIVE_TAG,8);
          chartInstance.c1_tp_rest = 1U;
        } else {
          *c1_ready() = 0.0;
          _SFD_DATA_RANGE_CHECK(*c1_ready(), 3U);
          *c1_ready_sts() = 3.0;
          _SFD_DATA_RANGE_CHECK(*c1_ready_sts(), 0U);
        }
      }
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,2);
      break;
     default:
      CV_STATE_EVAL(3,0,0);
      chartInstance.c1_is_ready_mode = (uint8_T)c1_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,4);
      break;
    }
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,3);
  }
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
  _sfEvent_ = c1_previousEvent;
  sf_debug_check_for_state_inconsistency(_simpleCylinder1MachineNumber_,
   chartInstance.chartNumber, chartInstance.instanceNumber);
}

static void c1_run_mode(void)
{
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,6);
  switch(chartInstance.c1_is_run_mode) {
   case c1_IN_running:
    CV_STATE_EVAL(6,0,1);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,0);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,3);
    if(c1__bool_u32_(CV_TRANSITION_EVAL(3U,
       !(_SFD_CCP_CALL(3,0,((*c1_start_cmd())!=0)) != 0))) != 0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,3);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,0);
      chartInstance.c1_tp_running = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
      chartInstance.c1_is_run_mode = (uint8_T)c1_IN_to_stopped;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,7);
      chartInstance.c1_tp_to_stopped = 1U;
    } else {
      *c1_start() = 1.0;
      _SFD_DATA_RANGE_CHECK(*c1_start(), 6U);
      *c1_start_sts() = 2.0;
      _SFD_DATA_RANGE_CHECK(*c1_start_sts(), 7U);
    }
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
    break;
   case c1_IN_stopped:
    CV_STATE_EVAL(6,0,2);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,5);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,2);
    if(c1__bool_u32_(CV_TRANSITION_EVAL(2U,
       (_SFD_CCP_CALL(2,0,((*c1_start_cmd())!=0)) != 0) &&
       (_SFD_CCP_CALL(2,1,((chartInstance.
           c1_is_ready_mode == c1_IN_ready)!=0)) != 0))) != 0) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,2);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,5);
      chartInstance.c1_tp_stopped = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,5);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,5);
      chartInstance.c1_is_run_mode = (uint8_T)c1_IN_to_running;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
      chartInstance.c1_tp_to_running = 1U;
    } else {
      *c1_start() = 0.0;
      _SFD_DATA_RANGE_CHECK(*c1_start(), 6U);
      *c1_start_sts() = 0.0;
      _SFD_DATA_RANGE_CHECK(*c1_start_sts(), 7U);
    }
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,5);
    break;
   case c1_IN_to_running:
    CV_STATE_EVAL(6,0,3);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,1);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,7);
    if(c1__bool_u32_(CV_TRANSITION_EVAL(7U,
       (int32_T)_SFD_CCP_CALL(7,0,((*c1_start_cmd() == *c1_start_fbk())!=0))))
     != 0) {
      if(sf_debug_transition_conflict_check_enabled()) {
        unsigned int transitionList[2];
        unsigned int numTransitions=1;
        transitionList[0] = 7;
        sf_debug_transition_conflict_check_begin();
        if(!(c1__bool_d_(*c1_start_cmd()) != 0)) {
          transitionList[numTransitions] = 4;
          numTransitions++;
        }
        sf_debug_transition_conflict_check_end();
        if(numTransitions>1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,7);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,1);
      chartInstance.c1_tp_to_running = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
      chartInstance.c1_is_run_mode = (uint8_T)c1_IN_running;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,0);
      chartInstance.c1_tp_running = 1U;
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,4);
      if(c1__bool_u32_(CV_TRANSITION_EVAL(4U,
         !(_SFD_CCP_CALL(4,0,((*c1_start_cmd())!=0)) != 0))) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,4);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,1);
        chartInstance.c1_tp_to_running = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,1);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
        chartInstance.c1_is_run_mode = (uint8_T)c1_IN_to_stopped;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,7);
        chartInstance.c1_tp_to_stopped = 1U;
      } else {
        *c1_start() = 1.0;
        _SFD_DATA_RANGE_CHECK(*c1_start(), 6U);
        *c1_start_sts() = 1.0;
        _SFD_DATA_RANGE_CHECK(*c1_start_sts(), 7U);
      }
    }
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
    break;
   case c1_IN_to_stopped:
    CV_STATE_EVAL(6,0,4);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG,7);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,9);
    if(c1__bool_u32_(CV_TRANSITION_EVAL(9U,
       (_SFD_CCP_CALL(9,0,((*c1_start_cmd())!=0)) != 0) &&
       (_SFD_CCP_CALL(9,1,((chartInstance.
           c1_is_ready_mode == c1_IN_ready)!=0)) != 0))) != 0) {
      if(sf_debug_transition_conflict_check_enabled()) {
        unsigned int transitionList[2];
        unsigned int numTransitions=1;
        transitionList[0] = 9;
        sf_debug_transition_conflict_check_begin();
        if(*c1_start_cmd() == *c1_start_fbk()) {
          transitionList[numTransitions] = 12;
          numTransitions++;
        }
        sf_debug_transition_conflict_check_end();
        if(numTransitions>1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,9);
      _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,7);
      chartInstance.c1_tp_to_stopped = 0U;
      _SFD_CS_CALL(STATE_INACTIVE_TAG,7);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,7);
      chartInstance.c1_is_run_mode = (uint8_T)c1_IN_to_running;
      _SFD_CS_CALL(STATE_ACTIVE_TAG,1);
      chartInstance.c1_tp_to_running = 1U;
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG,12);
      if(c1__bool_u32_(CV_TRANSITION_EVAL(12U,
         (int32_T)_SFD_CCP_CALL(12,0,((*c1_start_cmd() ==
            *c1_start_fbk())!=0)))) != 0) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG,12);
        _SFD_CS_CALL(STATE_ENTER_EXIT_FUNCTION_TAG,7);
        chartInstance.c1_tp_to_stopped = 0U;
        _SFD_CS_CALL(STATE_INACTIVE_TAG,7);
        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,7);
        chartInstance.c1_is_run_mode = (uint8_T)c1_IN_stopped;
        _SFD_CS_CALL(STATE_ACTIVE_TAG,5);
        chartInstance.c1_tp_stopped = 1U;
      } else {
        *c1_start() = 0.0;
        _SFD_DATA_RANGE_CHECK(*c1_start(), 6U);
        *c1_start_sts() = 3.0;
        _SFD_DATA_RANGE_CHECK(*c1_start_sts(), 7U);
      }
    }
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,7);
    break;
   default:
    CV_STATE_EVAL(6,0,0);
    chartInstance.c1_is_run_mode = (uint8_T)c1_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG,0);
    break;
  }
  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG,6);
}

static boolean_T c1__bool_u32_(uint32_T c1_b)
{
  boolean_T c1_a;
  c1_a = (boolean_T)c1_b;
  if((uint32_T)c1_a != c1_b) {
    sf_debug_overflow_detection(0);
  }
  return c1_a;
}

static boolean_T c1__bool_d_(real_T c1_b)
{
  boolean_T c1_a;
  c1_a = (boolean_T)c1_b;
  if((real_T)c1_a != (c1_b < 0.0 ? ceil(c1_b) : floor(c1_b))) {
    sf_debug_overflow_detection(0);
  }
  return c1_a;
}

static real_T *c1_start_fbk(void)
{
  return (real_T *)ssGetInputPortSignal(chartInstance.S, 0);
}

static real_T *c1_start_cmd(void)
{
  return (real_T *)ssGetInputPortSignal(chartInstance.S, 1);
}

static real_T *c1_ready_cmd(void)
{
  return (real_T *)ssGetInputPortSignal(chartInstance.S, 2);
}

static real_T *c1_ready_fbk(void)
{
  return (real_T *)ssGetInputPortSignal(chartInstance.S, 3);
}

static real_T *c1_start(void)
{
  return (real_T *)ssGetOutputPortSignal(chartInstance.S, 1);
}

static real_T *c1_start_sts(void)
{
  return (real_T *)ssGetOutputPortSignal(chartInstance.S, 2);
}

static real_T *c1_ready_sts(void)
{
  return (real_T *)ssGetOutputPortSignal(chartInstance.S, 3);
}

static real_T *c1_ready(void)
{
  return (real_T *)ssGetOutputPortSignal(chartInstance.S, 4);
}

static void init_test_point_addr_map(void)
{
  chartInstance.c1_testPointAddrMap[0] = &chartInstance.c1_tp_ready_mode;
  chartInstance.c1_testPointAddrMap[1] = &chartInstance.c1_tp_ready;
  chartInstance.c1_testPointAddrMap[2] = &chartInstance.c1_tp_rest;
  chartInstance.c1_testPointAddrMap[3] = &chartInstance.c1_tp_to_ready;
  chartInstance.c1_testPointAddrMap[4] = &chartInstance.c1_tp_to_rest;
  chartInstance.c1_testPointAddrMap[5] = &chartInstance.c1_tp_run_mode;
  chartInstance.c1_testPointAddrMap[6] = &chartInstance.c1_tp_running;
  chartInstance.c1_testPointAddrMap[7] = &chartInstance.c1_tp_stopped;
  chartInstance.c1_testPointAddrMap[8] = &chartInstance.c1_tp_to_running;
  chartInstance.c1_testPointAddrMap[9] = &chartInstance.c1_tp_to_stopped;
}

static void **get_test_point_address_map(void)
{
  return &chartInstance.c1_testPointAddrMap[0];
}

static rtwCAPI_ModelMappingInfo *get_test_point_mapping_info(void)
{
  return &chartInstance.c1_testPointMappingInfo;
}

static void init_dsm_address_info(void)
{
}

/* SFunction Glue Code */
static void init_test_point_mapping_info(SimStruct *S);
void sf_c1_simpleCylinder1_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(138954558U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1486761101U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1812372334U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(533536332U);
}

mxArray *sf_c1_simpleCylinder1_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] =
  {"checksum","inputs","parameters","outputs"};
  mxArray *mxAutoinheritanceInfo =
  mxCreateStructMatrix(1,1,4,autoinheritanceFields);
  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(1498871433U);
    pr[1] = (double)(3481509138U);
    pr[2] = (double)(4246640478U);
    pr[3] = (double)(3293397112U);
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }
  {
    const char *dataFields[] = {"size","type","complexity"};
    mxArray *mxData = mxCreateStructMatrix(1,4,3,dataFields);
    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }
    {
      const char *typeFields[] = {"base","aliasId","fixpt"};
      mxArray *mxType = mxCreateStructMatrix(1,1,3,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"aliasId",mxCreateDoubleScalar(0));
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
      const char *typeFields[] = {"base","aliasId","fixpt"};
      mxArray *mxType = mxCreateStructMatrix(1,1,3,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"aliasId",mxCreateDoubleScalar(0));
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
      const char *typeFields[] = {"base","aliasId","fixpt"};
      mxArray *mxType = mxCreateStructMatrix(1,1,3,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"aliasId",mxCreateDoubleScalar(0));
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
      const char *typeFields[] = {"base","aliasId","fixpt"};
      mxArray *mxType = mxCreateStructMatrix(1,1,3,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"aliasId",mxCreateDoubleScalar(0));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,3,"type",mxType);
    }
    mxSetField(mxData,3,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }
  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,mxREAL));
  }
  {
    const char *dataFields[] = {"size","type","complexity"};
    mxArray *mxData = mxCreateStructMatrix(1,4,3,dataFields);
    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }
    {
      const char *typeFields[] = {"base","aliasId","fixpt"};
      mxArray *mxType = mxCreateStructMatrix(1,1,3,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
      mxSetField(mxType,0,"aliasId",mxCreateDoubleScalar(0));
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
      const char *typeFields[] = {"base","aliasId","fixpt"};
      mxArray *mxType = mxCreateStructMatrix(1,1,3,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"aliasId",mxCreateDoubleScalar(0));
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
      const char *typeFields[] = {"base","aliasId","fixpt"};
      mxArray *mxType = mxCreateStructMatrix(1,1,3,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"aliasId",mxCreateDoubleScalar(0));
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
      const char *typeFields[] = {"base","aliasId","fixpt"};
      mxArray *mxType = mxCreateStructMatrix(1,1,3,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
      mxSetField(mxType,0,"aliasId",mxCreateDoubleScalar(0));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,3,"type",mxType);
    }
    mxSetField(mxData,3,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }
  return(mxAutoinheritanceInfo);
}

static void chart_debug_initialization(SimStruct *S)
{
  if(ssIsFirstInitCond(S)) {
    /* do this only if simulation is starting */
    if(!sim_mode_is_rtw_gen(S)) {
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent =
          sf_debug_initialize_chart(_simpleCylinder1MachineNumber_,
         1,
         10,
         14,
         8,
         0,
         0,
         0,
         0,
         &(chartInstance.chartNumber),
         &(chartInstance.instanceNumber),
         ssGetPath(S),
         (void *)S);
        if(chartAlreadyPresent==0) {
          /* this is the first instance */
          sf_debug_set_chart_disable_implicit_casting(_simpleCylinder1MachineNumber_,chartInstance.chartNumber,0);
          sf_debug_set_chart_event_thresholds(_simpleCylinder1MachineNumber_,
           chartInstance.chartNumber,
           0,
           0,
           0);

          _SFD_SET_DATA_PROPS(5,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"start_fbk",0,NULL);
          _SFD_SET_DATA_PROPS(4,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"start_cmd",0,NULL);
          _SFD_SET_DATA_PROPS(1,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"ready_cmd",0,NULL);
          _SFD_SET_DATA_PROPS(2,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"ready_fbk",0,NULL);
          _SFD_SET_DATA_PROPS(6,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"start",0,NULL);
          _SFD_SET_DATA_PROPS(7,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"start_sts",0,NULL);
          _SFD_SET_DATA_PROPS(0,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"ready_sts",0,NULL);
          _SFD_SET_DATA_PROPS(3,2,0,1,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,"ready",0,NULL);
          _SFD_STATE_INFO(3,0,1);
          _SFD_STATE_INFO(4,0,0);
          _SFD_STATE_INFO(8,0,0);
          _SFD_STATE_INFO(9,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_STATE_INFO(6,0,1);
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(5,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(7,0,0);
          _SFD_CH_SUBSTATE_COUNT(2);
          _SFD_CH_SUBSTATE_DECOMP(1);
          _SFD_CH_SUBSTATE_INDEX(0,6);
          _SFD_CH_SUBSTATE_INDEX(1,3);
          _SFD_ST_SUBSTATE_COUNT(6,4);
          _SFD_ST_SUBSTATE_INDEX(6,0,0);
          _SFD_ST_SUBSTATE_INDEX(6,1,5);
          _SFD_ST_SUBSTATE_INDEX(6,2,1);
          _SFD_ST_SUBSTATE_INDEX(6,3,7);
          _SFD_ST_SUBSTATE_COUNT(0,0);
          _SFD_ST_SUBSTATE_COUNT(5,0);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(7,0);
          _SFD_ST_SUBSTATE_COUNT(3,4);
          _SFD_ST_SUBSTATE_INDEX(3,0,4);
          _SFD_ST_SUBSTATE_INDEX(3,1,8);
          _SFD_ST_SUBSTATE_INDEX(3,2,9);
          _SFD_ST_SUBSTATE_INDEX(3,3,2);
          _SFD_ST_SUBSTATE_COUNT(4,0);
          _SFD_ST_SUBSTATE_COUNT(8,0);
          _SFD_ST_SUBSTATE_COUNT(9,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
        }
        _SFD_CV_INIT_CHART(2,0,0,0);
        {
          _SFD_CV_INIT_STATE(3,4,1,0,0,0,NULL,NULL);
        }
        {
          _SFD_CV_INIT_STATE(4,0,0,0,0,0,NULL,NULL);
        }
        {
          _SFD_CV_INIT_STATE(8,0,0,0,0,0,NULL,NULL);
        }
        {
          _SFD_CV_INIT_STATE(9,0,0,0,0,0,NULL,NULL);
        }
        {
          _SFD_CV_INIT_STATE(2,0,0,0,0,0,NULL,NULL);
        }
        {
          _SFD_CV_INIT_STATE(6,4,1,0,0,0,NULL,NULL);
        }
        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }
        {
          _SFD_CV_INIT_STATE(5,0,0,0,0,0,NULL,NULL);
        }
        {
          _SFD_CV_INIT_STATE(1,0,0,0,0,0,NULL,NULL);
        }
        {
          _SFD_CV_INIT_STATE(7,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = {1,12};
          static unsigned int sEndGuardMap[] = {10,32};
          static int sPostFixPredicateTree[] = {0,1,-3};
          _SFD_CV_INIT_TRANS(2,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,&(sPostFixPredicateTree[0]));
        }
        {
          static unsigned int sStartGuardMap[] = {1};
          static unsigned int sEndGuardMap[] = {21};
          static int sPostFixPredicateTree[] = {0};
          _SFD_CV_INIT_TRANS(7,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,&(sPostFixPredicateTree[0]));
        }
        {
          static unsigned int sStartGuardMap[] = {2};
          static unsigned int sEndGuardMap[] = {11};
          static int sPostFixPredicateTree[] = {0,-1};
          _SFD_CV_INIT_TRANS(3,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),2,&(sPostFixPredicateTree[0]));
        }
        {
          static unsigned int sStartGuardMap[] = {1};
          static unsigned int sEndGuardMap[] = {21};
          static int sPostFixPredicateTree[] = {0};
          _SFD_CV_INIT_TRANS(12,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,&(sPostFixPredicateTree[0]));
        }
        _SFD_CV_INIT_TRANS(10,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = {1};
          static unsigned int sEndGuardMap[] = {10};
          static int sPostFixPredicateTree[] = {0};
          _SFD_CV_INIT_TRANS(11,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,&(sPostFixPredicateTree[0]));
        }
        {
          static unsigned int sStartGuardMap[] = {1};
          static unsigned int sEndGuardMap[] = {21};
          static int sPostFixPredicateTree[] = {0};
          _SFD_CV_INIT_TRANS(13,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,&(sPostFixPredicateTree[0]));
        }
        {
          static unsigned int sStartGuardMap[] = {2,13};
          static unsigned int sEndGuardMap[] = {11,33};
          static int sPostFixPredicateTree[] = {0,-1,1,-3};
          _SFD_CV_INIT_TRANS(5,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),4,&(sPostFixPredicateTree[0]));
        }
        {
          static unsigned int sStartGuardMap[] = {1};
          static unsigned int sEndGuardMap[] = {21};
          static int sPostFixPredicateTree[] = {0};
          _SFD_CV_INIT_TRANS(6,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,&(sPostFixPredicateTree[0]));
        }
        {
          static unsigned int sStartGuardMap[] = {1,12};
          static unsigned int sEndGuardMap[] = {10,32};
          static int sPostFixPredicateTree[] = {0,1,-3};
          _SFD_CV_INIT_TRANS(9,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,&(sPostFixPredicateTree[0]));
        }
        {
          static unsigned int sStartGuardMap[] = {2};
          static unsigned int sEndGuardMap[] = {11};
          static int sPostFixPredicateTree[] = {0,-1};
          _SFD_CV_INIT_TRANS(4,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),2,&(sPostFixPredicateTree[0]));
        }
        {
          static unsigned int sStartGuardMap[] = {1};
          static unsigned int sEndGuardMap[] = {10};
          static int sPostFixPredicateTree[] = {0};
          _SFD_CV_INIT_TRANS(1,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,&(sPostFixPredicateTree[0]));
        }
        {
          static unsigned int sStartGuardMap[] = {2,13};
          static unsigned int sEndGuardMap[] = {11,33};
          static int sPostFixPredicateTree[] = {0,-1,1,-3};
          _SFD_CV_INIT_TRANS(8,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),4,&(sPostFixPredicateTree[0]));
        }
        _SFD_TRANS_COV_WTS(0,0,0,0,0);
        if(chartAlreadyPresent==0)
        {
          _SFD_TRANS_COV_MAPS(0,
           0,NULL,NULL,
           0,NULL,NULL,
           0,NULL,NULL,
           0,NULL,NULL);
        }
        _SFD_TRANS_COV_WTS(2,0,2,0,0);
        if(chartAlreadyPresent==0)
        {
          static unsigned int sStartGuardMap[] = {1,12};
          static unsigned int sEndGuardMap[] = {10,32};
          _SFD_TRANS_COV_MAPS(2,
           0,NULL,NULL,
           2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
           0,NULL,NULL,
           0,NULL,NULL);
        }
        _SFD_TRANS_COV_WTS(7,0,1,0,0);
        if(chartAlreadyPresent==0)
        {
          static unsigned int sStartGuardMap[] = {1};
          static unsigned int sEndGuardMap[] = {21};
          _SFD_TRANS_COV_MAPS(7,
           0,NULL,NULL,
           1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
           0,NULL,NULL,
           0,NULL,NULL);
        }
        _SFD_TRANS_COV_WTS(3,0,1,0,0);
        if(chartAlreadyPresent==0)
        {
          static unsigned int sStartGuardMap[] = {2};
          static unsigned int sEndGuardMap[] = {11};
          _SFD_TRANS_COV_MAPS(3,
           0,NULL,NULL,
           1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
           0,NULL,NULL,
           0,NULL,NULL);
        }
        _SFD_TRANS_COV_WTS(12,0,1,0,0);
        if(chartAlreadyPresent==0)
        {
          static unsigned int sStartGuardMap[] = {1};
          static unsigned int sEndGuardMap[] = {21};
          _SFD_TRANS_COV_MAPS(12,
           0,NULL,NULL,
           1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
           0,NULL,NULL,
           0,NULL,NULL);
        }
        _SFD_TRANS_COV_WTS(10,0,0,0,0);
        if(chartAlreadyPresent==0)
        {
          _SFD_TRANS_COV_MAPS(10,
           0,NULL,NULL,
           0,NULL,NULL,
           0,NULL,NULL,
           0,NULL,NULL);
        }
        _SFD_TRANS_COV_WTS(11,0,1,0,0);
        if(chartAlreadyPresent==0)
        {
          static unsigned int sStartGuardMap[] = {1};
          static unsigned int sEndGuardMap[] = {10};
          _SFD_TRANS_COV_MAPS(11,
           0,NULL,NULL,
           1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
           0,NULL,NULL,
           0,NULL,NULL);
        }
        _SFD_TRANS_COV_WTS(13,0,1,0,0);
        if(chartAlreadyPresent==0)
        {
          static unsigned int sStartGuardMap[] = {1};
          static unsigned int sEndGuardMap[] = {21};
          _SFD_TRANS_COV_MAPS(13,
           0,NULL,NULL,
           1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
           0,NULL,NULL,
           0,NULL,NULL);
        }
        _SFD_TRANS_COV_WTS(5,0,2,0,0);
        if(chartAlreadyPresent==0)
        {
          static unsigned int sStartGuardMap[] = {2,13};
          static unsigned int sEndGuardMap[] = {11,33};
          _SFD_TRANS_COV_MAPS(5,
           0,NULL,NULL,
           2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
           0,NULL,NULL,
           0,NULL,NULL);
        }
        _SFD_TRANS_COV_WTS(6,0,1,0,0);
        if(chartAlreadyPresent==0)
        {
          static unsigned int sStartGuardMap[] = {1};
          static unsigned int sEndGuardMap[] = {21};
          _SFD_TRANS_COV_MAPS(6,
           0,NULL,NULL,
           1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
           0,NULL,NULL,
           0,NULL,NULL);
        }
        _SFD_TRANS_COV_WTS(9,0,2,0,0);
        if(chartAlreadyPresent==0)
        {
          static unsigned int sStartGuardMap[] = {1,12};
          static unsigned int sEndGuardMap[] = {10,32};
          _SFD_TRANS_COV_MAPS(9,
           0,NULL,NULL,
           2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
           0,NULL,NULL,
           0,NULL,NULL);
        }
        _SFD_TRANS_COV_WTS(4,0,1,0,0);
        if(chartAlreadyPresent==0)
        {
          static unsigned int sStartGuardMap[] = {2};
          static unsigned int sEndGuardMap[] = {11};
          _SFD_TRANS_COV_MAPS(4,
           0,NULL,NULL,
           1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
           0,NULL,NULL,
           0,NULL,NULL);
        }
        _SFD_TRANS_COV_WTS(1,0,1,0,0);
        if(chartAlreadyPresent==0)
        {
          static unsigned int sStartGuardMap[] = {1};
          static unsigned int sEndGuardMap[] = {10};
          _SFD_TRANS_COV_MAPS(1,
           0,NULL,NULL,
           1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
           0,NULL,NULL,
           0,NULL,NULL);
        }
        _SFD_TRANS_COV_WTS(8,0,2,0,0);
        if(chartAlreadyPresent==0)
        {
          static unsigned int sStartGuardMap[] = {2,13};
          static unsigned int sEndGuardMap[] = {11,33};
          _SFD_TRANS_COV_MAPS(8,
           0,NULL,NULL,
           2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
           0,NULL,NULL,
           0,NULL,NULL);
        }
        _SFD_SET_DATA_VALUE_PTR(5U, c1_start_fbk());
        _SFD_SET_DATA_VALUE_PTR(4U, c1_start_cmd());
        _SFD_SET_DATA_VALUE_PTR(1U, c1_ready_cmd());
        _SFD_SET_DATA_VALUE_PTR(2U, c1_ready_fbk());
        _SFD_SET_DATA_VALUE_PTR(6U, c1_start());
        _SFD_SET_DATA_VALUE_PTR(7U, c1_start_sts());
        _SFD_SET_DATA_VALUE_PTR(0U, c1_ready_sts());
        _SFD_SET_DATA_VALUE_PTR(3U, c1_ready());
      }
    }
  } else {
    sf_debug_reset_current_state_configuration(_simpleCylinder1MachineNumber_,chartInstance.chartNumber,chartInstance.instanceNumber);
  }
}

static void sf_opaque_initialize_c1_simpleCylinder1(void *chartInstanceVar)
{
  chart_debug_initialization(chartInstance.S);
  initialize_params_c1_simpleCylinder1();
  initialize_c1_simpleCylinder1();
}

static void sf_opaque_enable_c1_simpleCylinder1(void *chartInstanceVar)
{
  enable_c1_simpleCylinder1();
}

static void sf_opaque_disable_c1_simpleCylinder1(void *chartInstanceVar)
{
  disable_c1_simpleCylinder1();
}

static void sf_opaque_gateway_c1_simpleCylinder1(void *chartInstanceVar)
{
  sf_c1_simpleCylinder1();
}

static void sf_opaque_terminate_c1_simpleCylinder1(void *chartInstanceVar)
{
  finalize_c1_simpleCylinder1();
}

static void mdlProcessParameters_c1_simpleCylinder1(SimStruct *S)
{
  int i;
  for(i=0;i<ssGetNumRunTimeParams(S);i++) {
    if(ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }
  initialize_params_c1_simpleCylinder1();
}

static void mdlSetWorkWidths_c1_simpleCylinder1(SimStruct *S)
{
  if(sim_mode_is_rtw_gen(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable("simpleCylinder1",1);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("simpleCylinder1",1,"gatewayCannotBeInlinedMultipleTimes"));
    if(chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"simpleCylinder1",1,4);
      sf_mark_chart_reusable_outputs(S,"simpleCylinder1",1,4);
    }
    if (!sf_is_chart_instance_optimized_out("simpleCylinder1",1)) {
      int dtId;
      char *chartInstanceTypedefName =
        sf_chart_instance_typedef_name("simpleCylinder1",1);
      dtId = ssRegisterDataType(S, chartInstanceTypedefName);
      if (dtId == INVALID_DTYPE_ID ) return;
      /* Register the size of the udt */
      if (!ssSetDataTypeSize(S, dtId, 8)) return;
      if(!ssSetNumDWork(S,1)) return;
      ssSetDWorkDataType(S, 0, dtId);
      ssSetDWorkWidth(S, 0, 1);
      ssSetDWorkName(S, 0, "ChartInstance"); /*optional name, less than 16 chars*/
      sf_set_rtw_identifier(S);
    }
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(2378346772U));
  ssSetChecksum1(S,(1872016047U));
  ssSetChecksum2(S,(3418362130U));
  ssSetChecksum3(S,(2334296677U));

  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c1_simpleCylinder1(SimStruct *S)
{
  if(sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "simpleCylinder1", 1);
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c1_simpleCylinder1(SimStruct *S)
{
  chartInstance.chartInfo.chartInstance = NULL;
  chartInstance.chartInfo.isEMLChart = 0;
  chartInstance.chartInfo.chartInitialized = 0;
  chartInstance.chartInfo.sFunctionGateway =
    sf_opaque_gateway_c1_simpleCylinder1;
  chartInstance.chartInfo.initializeChart =
    sf_opaque_initialize_c1_simpleCylinder1;
  chartInstance.chartInfo.terminateChart =
    sf_opaque_terminate_c1_simpleCylinder1;
  chartInstance.chartInfo.enableChart = sf_opaque_enable_c1_simpleCylinder1;
  chartInstance.chartInfo.disableChart = sf_opaque_disable_c1_simpleCylinder1;
  chartInstance.chartInfo.mdlRTW = mdlRTW_c1_simpleCylinder1;
  chartInstance.chartInfo.mdlStart = mdlStart_c1_simpleCylinder1;
  chartInstance.chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c1_simpleCylinder1;
  chartInstance.chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance.chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance.chartInfo.storeCurrentConfiguration = NULL;
  chartInstance.S = S;
  ssSetUserData(S,(void *)(&(chartInstance.chartInfo))); /* register the chart instance with simstruct */

  if(!sim_mode_is_rtw_gen(S)) {
    init_test_point_mapping_info(S);
    init_dsm_address_info();
  }
}

void c1_simpleCylinder1_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c1_simpleCylinder1(S);
    break;
   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c1_simpleCylinder1(S);
    break;
   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c1_simpleCylinder1(S);
    break;
   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
     "Error calling c1_simpleCylinder1_method_dispatcher.\n"
     "Can't handle method %d.\n", method);
    break;
  }
}

static const rtwCAPI_DataTypeMap dataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, isComplex, isPointer */
  {"uint8_T", "uint8_T", 0, 0, sizeof(uint8_T), SS_UINT8, 0, 0}
};

static const rtwCAPI_FixPtMap fixedPointMap[] = {
  /* *fracSlope, *bias, scaleType, wordLength, exponent, isSigned */
  {NULL, NULL, rtwCAPI_FIX_RESERVED, 64, 0, 0}
};

static const rtwCAPI_DimensionMap dimensionMap[] = {
  /* dataOrientation, dimArrayIndex, numDims*/
  {rtwCAPI_SCALAR, 0, 2}
};

static const uint_T dimensionArray[] = {
  1, 1
};

static real_T sfCAPIsampleTimeZero = 0.0;
static const rtwCAPI_SampleTimeMap sampleTimeMap[] = {
  /* *period, *offset, taskId, mode */
  {&sfCAPIsampleTimeZero, &sfCAPIsampleTimeZero, 0, 0}
};

static const rtwCAPI_Signals testPointSignals[] = {
  /* addrMapIndex, sysNum, SFRelativePath, dataName, portNumber, dataTypeIndex, dimIndex, fixPtIdx, sTimeIndex */
  {0, 0, "StateflowChart/ready_mode", "ready_mode", 0, 0, 0, 0, 0},
  {1, 0, "StateflowChart/ready_mode.ready", "ready", 0, 0, 0, 0, 0},
  {2, 0, "StateflowChart/ready_mode.rest", "rest", 0, 0, 0, 0, 0},
  {3, 0, "StateflowChart/ready_mode.to_ready", "to_ready", 0, 0, 0, 0, 0},
  {4, 0, "StateflowChart/ready_mode.to_rest", "to_rest", 0, 0, 0, 0, 0},
  {5, 0, "StateflowChart/run_mode", "run_mode", 0, 0, 0, 0, 0},
  {6, 0, "StateflowChart/run_mode.running", "running", 0, 0, 0, 0, 0},
  {7, 0, "StateflowChart/run_mode.stopped", "stopped", 0, 0, 0, 0, 0},
  {8, 0, "StateflowChart/run_mode.to_running", "to_running", 0, 0, 0, 0, 0},
  {9, 0, "StateflowChart/run_mode.to_stopped", "to_stopped", 0, 0, 0, 0, 0}
};

static rtwCAPI_ModelMappingStaticInfo testPointMappingStaticInfo = {
  /* block signal monitoring */
  {
    testPointSignals,                   /* Block signals Array  */
    10                                  /* Num Block IO signals */
  },

  /* parameter tuning */
  {
    NULL,                               /* Block parameters Array    */
    0,                                  /* Num block parameters      */
    NULL,                               /* Variable parameters Array */
    0                                   /* Num variable parameters   */
  },

  /* block states */
  {
    NULL,                               /* Block States array        */
    0                                   /* Num Block States          */
  },

  /* Static maps */
  {
    dataTypeMap,                        /* Data Type Map            */
    dimensionMap,                       /* Data Dimension Map       */
    fixedPointMap,                      /* Fixed Point Map          */
    NULL,                               /* Structure Element map    */
    sampleTimeMap,                      /* Sample Times Map         */
    dimensionArray                      /* Dimension Array          */
  },

  /* Target type */
  "float"
};

static void init_test_point_mapping_info(SimStruct *S) {
  rtwCAPI_ModelMappingInfo *testPointMappingInfo;
  void **testPointAddrMap;

  init_test_point_addr_map();
  testPointMappingInfo = get_test_point_mapping_info();
  testPointAddrMap = get_test_point_address_map();

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

