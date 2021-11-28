/*
 * kaiguangai.c
 *
 * Code generation for model "kaiguangai".
 *
 * Model version              : 1.82
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Mon Nov 08 15:15:50 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rt_logging_mmi.h"
#include "kaiguangai_capi.h"
#include "kaiguangai.h"
#include "kaiguangai_private.h"

/* Named constants for Chart: '<S14>/Chart1' */
#define kaiguangai_CALL_EVENT          (-1)
#define kaiguangai_IN_NO_ACTIVE_CHILD  ((uint8_T)0U)
#define kaiguangai_IN_off              ((uint8_T)1U)
#define kaiguangai_IN_off1             ((uint8_T)2U)
#define kaiguangai_IN_on               ((uint8_T)2U)
#define kaiguangai_IN_shoudong         ((uint8_T)3U)
#define kaiguangai_IN_t                ((uint8_T)3U)
#define kaiguangai_IN_t1               ((uint8_T)4U)
#define kaiguangai_IN_t2               ((uint8_T)5U)
#define kaiguangai_IN_t2_j             ((uint8_T)4U)
#define kaiguangai_IN_t3               ((uint8_T)5U)

/* Named constants for Chart: '<S15>/1#' */
#define kaiguangai_CALL_EVENT_j        (-1)
#define kaiguangai_IN_NO_ACTIVE_CHILD_m ((uint8_T)0U)
#define kaiguangai_IN_chushihua        ((uint8_T)1U)
#define kaiguangai_IN_guangaishijian   ((uint8_T)2U)
#define kaiguangai_IN_jiesuoshijian    ((uint8_T)3U)
#define kaiguangai_IN_kaigaishijian    ((uint8_T)4U)
#define kaiguangai_IN_off_g            ((uint8_T)5U)
#define kaiguangai_IN_on1              ((uint8_T)6U)
#define kaiguangai_IN_on10             ((uint8_T)7U)
#define kaiguangai_IN_on11             ((uint8_T)8U)
#define kaiguangai_IN_on12             ((uint8_T)9U)
#define kaiguangai_IN_on13             ((uint8_T)10U)
#define kaiguangai_IN_on14             ((uint8_T)11U)
#define kaiguangai_IN_on15             ((uint8_T)12U)
#define kaiguangai_IN_on16             ((uint8_T)13U)
#define kaiguangai_IN_on17             ((uint8_T)14U)
#define kaiguangai_IN_on18             ((uint8_T)15U)
#define kaiguangai_IN_on19             ((uint8_T)16U)
#define kaiguangai_IN_on2              ((uint8_T)17U)
#define kaiguangai_IN_on3              ((uint8_T)18U)
#define kaiguangai_IN_on4              ((uint8_T)19U)
#define kaiguangai_IN_on5              ((uint8_T)20U)
#define kaiguangai_IN_on6              ((uint8_T)21U)
#define kaiguangai_IN_on7              ((uint8_T)22U)
#define kaiguangai_IN_on8              ((uint8_T)23U)
#define kaiguangai_IN_on9              ((uint8_T)24U)
#define kaiguangai_IN_songkaishijian   ((uint8_T)25U)
#define kaiguangai_IN_songkaishijian1  ((uint8_T)26U)
#define kaiguangai_IN_songkaishijian2  ((uint8_T)27U)
#define kaiguangai_IN_songkaishijian3  ((uint8_T)28U)
#define kaiguangai_IN_songkaishijian4  ((uint8_T)29U)
#define kaiguangai_IN_songkaishijian5  ((uint8_T)30U)
#define kaiguangai_IN_songkaishijian6  ((uint8_T)31U)
#define kaiguangai_IN_start            ((uint8_T)32U)
#define kaiguangai_IN_stop             ((uint8_T)33U)
#define kaiguangai_IN_suodingshijian   ((uint8_T)34U)
#define kaiguangai_IN_t10guiling       ((uint8_T)35U)
#define kaiguangai_IN_t2guiling        ((uint8_T)36U)
#define kaiguangai_IN_t4guiling        ((uint8_T)37U)
#define kaiguangai_IN_t6guiling        ((uint8_T)38U)
#define kaiguangai_IN_t8guiling        ((uint8_T)39U)
#define kaiguangai_IN_tguiling         ((uint8_T)40U)
#define kaiguangai_IN_yajinshijian     ((uint8_T)41U)
#define kaiguangai_IN_yanchishijian1   ((uint8_T)42U)
#define kaiguangai_IN_yanchishijian2   ((uint8_T)43U)
#define kaiguangai_IN_yanchishijian3   ((uint8_T)44U)
#define kaiguangai_IN_yanchishijian4   ((uint8_T)45U)
#define kaiguangai_IN_yanchishijian5   ((uint8_T)46U)
#define kaiguangai_IN_yanchishijian6   ((uint8_T)47U)
#define kaiguangai_IN_zidong           ((uint8_T)1U)

/* Named constants for Chart: '<S7>/jinjichuli' */
#define kaiguangai_CALL_EVENT_o        (-1)
#define kaiguangai_IN_A                ((uint8_T)1U)
#define kaiguangai_IN_MANUAL           ((uint8_T)1U)
#define kaiguangai_IN_NO_ACTIVE_CHILD_a ((uint8_T)0U)
#define kaiguangai_IN_end              ((uint8_T)2U)
#define kaiguangai_IN_off1_c           ((uint8_T)3U)
#define kaiguangai_IN_on1_e            ((uint8_T)4U)
#define kaiguangai_IN_on_g             ((uint8_T)2U)

/* Named constants for Chart: '<S4>/Chart' */
#define kaiguangai_CALL_EVENT_a        (-1)
#define kaiguangai_IN_NO_ACTIVE_CHILD_j ((uint8_T)0U)
#define kaiguangai_IN_off_o            ((uint8_T)1U)
#define kaiguangai_IN_on1_f            ((uint8_T)3U)
#define kaiguangai_IN_on_l             ((uint8_T)2U)

/* Named constants for Chart: '<S14>/Chart' */
#define kaiguangai_IN_off1_k           ((uint8_T)2U)
#define kaiguangai_IN_shoudong_o       ((uint8_T)3U)
#define kaiguangai_IN_t1_n             ((uint8_T)4U)
#define kaiguangai_IN_t2_o             ((uint8_T)4U)
#define kaiguangai_IN_t2_om            ((uint8_T)5U)
#define kaiguangai_IN_t3_k             ((uint8_T)5U)
#define kaiguangai_IN_t_f              ((uint8_T)3U)

/* Block signals (auto storage) */
B_kaiguangai_T kaiguangai_B;

/* Block states (auto storage) */
DW_kaiguangai_T kaiguangai_DW;

/* Real-time model */
RT_MODEL_kaiguangai_T kaiguangai_M_;
RT_MODEL_kaiguangai_T *const kaiguangai_M = &kaiguangai_M_;

/* Forward declaration for local functions */
static void kaiguangai_songkai(real_T rtu_sddw, real_T rtu_jsdw, real_T rtu_yjdw,
  real_T rtu_skdw, real_T rtu_songkai, B_Chart1_kaiguangai_T *localB,
  DW_Chart1_kaiguangai_T *localDW);
static void kaiguangai_kaigai(real_T rtu_kgdw1, real_T rtu_kgdw2, real_T
  rtu_jsdw, real_T rtu_skdw, real_T rtu_kaigai, B_Chart1_kaiguangai_T *localB,
  DW_Chart1_kaiguangai_T *localDW);
static void kaiguang_exit_internal_shoudong(DW_Chart1_kaiguangai_T *localDW);
static void kaiguangai_suoding(real_T rtu_kgdw1, real_T rtu_kgdw2, real_T
  rtu_sddw, real_T rtu_jsdw, real_T rtu_yjdw, real_T rtu_skdw, real_T
  rtu_suoding, B_Chart1_kaiguangai_T *localB, DW_Chart1_kaiguangai_T *localDW);
static void kaiguangai_jiesuo(real_T rtu_kgdw1, real_T rtu_kgdw2, real_T
  rtu_sddw, real_T rtu_jsdw, real_T rtu_yjdw, real_T rtu_skdw, real_T rtu_jiesuo,
  B_Chart1_kaiguangai_T *localB, DW_Chart1_kaiguangai_T *localDW);
static void kaiguangai_shoudong(real_T rtu_kgdw1, real_T rtu_kgdw2, real_T
  rtu_ggdw1, real_T rtu_ggdw2, real_T rtu_sddw, real_T rtu_jsdw, real_T rtu_yjdw,
  real_T rtu_skdw, real_T rtu_songkai, real_T rtu_kaigai, real_T rtu_suoding,
  real_T rtu_jiesuo, real_T rtu_guangai, real_T rtu_yajin, real_T rtu_jieshu,
  B_Chart1_kaiguangai_T *localB, DW_Chart1_kaiguangai_T *localDW);

/* Forward declaration for local functions */
static void kaiguangai_on4(real_T rtu_kgdw1, real_T rtu_kgdw2, real_T rtu_skdw,
  real_T rtu_jsdw, B_u_kaiguangai_T *localB, DW_u_kaiguangai_T *localDW);
static void kaiguangai_on5(real_T rtu_ggdw1, real_T rtu_ggdw2, real_T rtu_skdw,
  real_T rtu_jsdw, B_u_kaiguangai_T *localB, DW_u_kaiguangai_T *localDW);
static void kaiguangai_on6(real_T rtu_ggdw1, real_T rtu_ggdw2, real_T rtu_sddw,
  real_T rtu_yjdw, B_u_kaiguangai_T *localB, DW_u_kaiguangai_T *localDW);
static void kaiguang_enter_atomic_chushihua(B_u_kaiguangai_T *localB);
static void kaiguangai_on7(real_T rtu_shedingcishu, real_T rtu_jieshu,
  B_u_kaiguangai_T *localB, DW_u_kaiguangai_T *localDW);
static void kaiguangai_songkaishijian(real_T rtu_skdw, real_T rtu_jsdw,
  B_u_kaiguangai_T *localB, DW_u_kaiguangai_T *localDW);
static void kaiguangai_songkaishijian1(real_T rtu_skdw, real_T rtu_jsdw,
  B_u_kaiguangai_T *localB, DW_u_kaiguangai_T *localDW);
static void kaiguangai_songkaishijian2(real_T rtu_kgdw1, real_T rtu_kgdw2,
  real_T rtu_skdw, real_T rtu_jsdw, B_u_kaiguangai_T *localB, DW_u_kaiguangai_T *
  localDW);
static void kaiguangai_songkaishijian3(real_T rtu_kgdw1, real_T rtu_kgdw2,
  real_T rtu_sddw, real_T rtu_yjdw, real_T rtu_skdw, real_T rtu_jsdw,
  B_u_kaiguangai_T *localB, DW_u_kaiguangai_T *localDW);
static void kaiguangai_songkaishijian4(real_T rtu_kgdw1, real_T rtu_kgdw2,
  real_T rtu_skdw, real_T rtu_jsdw, B_u_kaiguangai_T *localB, DW_u_kaiguangai_T *
  localDW);
static void kaiguangai_songkaishijian5(real_T rtu_ggdw1, real_T rtu_ggdw2,
  real_T rtu_skdw, real_T rtu_jsdw, B_u_kaiguangai_T *localB, DW_u_kaiguangai_T *
  localDW);
static void kaiguangai_songkaishijian6(real_T rtu_ggdw1, real_T rtu_ggdw2,
  real_T rtu_sddw, real_T rtu_yjdw, B_u_kaiguangai_T *localB, DW_u_kaiguangai_T *
  localDW);
static void kaiguangai_suodingshijian(real_T rtu_kgdw1, real_T rtu_kgdw2, real_T
  rtu_sddw, real_T rtu_yjdw, B_u_kaiguangai_T *localB, DW_u_kaiguangai_T
  *localDW);
static void kaiguangai_t2guiling(real_T rtu_t3, B_u_kaiguangai_T *localB,
  DW_u_kaiguangai_T *localDW);
static void kaiguangai_t4guiling(real_T rtu_t5, B_u_kaiguangai_T *localB,
  DW_u_kaiguangai_T *localDW);
static void kaiguangai_t6guiling(real_T rtu_t7, B_u_kaiguangai_T *localB,
  DW_u_kaiguangai_T *localDW);
static void kaiguangai_t8guiling(real_T rtu_t9, B_u_kaiguangai_T *localB,
  DW_u_kaiguangai_T *localDW);
static void kaiguangai_tguiling(real_T rtu_t1, B_u_kaiguangai_T *localB,
  DW_u_kaiguangai_T *localDW);
static void kaiguangai_yajinshijian(real_T rtu_ggdw1, real_T rtu_ggdw2, real_T
  rtu_sddw, real_T rtu_yjdw, B_u_kaiguangai_T *localB, DW_u_kaiguangai_T
  *localDW);
static void kaiguangai_yanchishijian1(real_T rtu_t1, B_u_kaiguangai_T *localB,
  DW_u_kaiguangai_T *localDW);
static void kaiguangai_yanchishijian2(real_T rtu_t3, B_u_kaiguangai_T *localB,
  DW_u_kaiguangai_T *localDW);
static void kaiguangai_yanchishijian3(real_T rtu_t5, B_u_kaiguangai_T *localB,
  DW_u_kaiguangai_T *localDW);
static void kaiguangai_yanchishijian4(real_T rtu_t7, B_u_kaiguangai_T *localB,
  DW_u_kaiguangai_T *localDW);
static void kaiguangai_yanchishijian5(real_T rtu_t9, B_u_kaiguangai_T *localB,
  DW_u_kaiguangai_T *localDW);
static void kaiguangai_enter_atomic_off(B_u_kaiguangai_T *localB);
static void kaiguangai_zidong(boolean_T rtu_start, real_T rtu_kgdw1, real_T
  rtu_kgdw2, real_T rtu_ggdw1, real_T rtu_ggdw2, real_T rtu_sddw, real_T
  rtu_yjdw, real_T rtu_skdw, real_T rtu_jsdw, real_T rtu_t1, real_T rtu_t3,
  real_T rtu_t5, real_T rtu_t7, real_T rtu_t9, real_T rtu_t11, real_T
  rtu_shedingcishu, real_T rtu_jieshu, B_u_kaiguangai_T *localB,
  DW_u_kaiguangai_T *localDW);

/* Forward declaration for local functions */
static void kaiguangai_exit_internal_MANUAL(DW_jinjichuli_kaiguangai_T *localDW);

/* Forward declaration for local functions */
static void kaiguangai_songkai_c(void);
static void kaiguangai_kaigai_l(void);
static void kaiguangai_suoding_o(void);
static void kaiguangai_jiesuo_p(void);
static void kaigua_exit_internal_shoudong_e(void);
static void kaiguangai_shoudong_i(void);

/* Function for Chart: '<S14>/Chart1' */
static void kaiguangai_songkai(real_T rtu_sddw, real_T rtu_jsdw, real_T rtu_yjdw,
  real_T rtu_skdw, real_T rtu_songkai, B_Chart1_kaiguangai_T *localB,
  DW_Chart1_kaiguangai_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'songkai': '<S17>:1' */
  switch (localDW->is_songkai) {
   case kaiguangai_IN_off:
    /* During 'off': '<S17>:15' */
    sf_internal_predicateOutput = ((rtu_songkai == 1.0) && (rtu_yjdw == 1.0) &&
      (rtu_sddw == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S17>:18' */
      localDW->is_songkai = kaiguangai_IN_on;

      /* Entry 'on': '<S17>:17' */
      localB->skhx = 1.0;
      localB->skt = 0.0;
      localB->skyichang = 0.0;
    }
    break;

   case kaiguangai_IN_on:
    /* During 'on': '<S17>:17' */
    /* Transition: '<S17>:20' */
    if (rtu_skdw == 0.0) {
      /* Transition: '<S17>:22' */
      localDW->is_songkai = kaiguangai_IN_t;
      localDW->temporalCounter_i1 = 0U;

      /* Entry 't': '<S17>:21' */
      localB->skt += 0.002;
    } else {
      sf_internal_predicateOutput = ((rtu_skdw == 1.0) && (rtu_jsdw == 1.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S17>:23' */
        localDW->is_songkai = kaiguangai_IN_off;

        /* Entry 'off': '<S17>:15' */
        localB->skhx = 0.0;
      } else {
        if (localB->skt > 2.0) {
          /* Transition: '<S17>:128' */
          localDW->is_songkai = kaiguangai_IN_t1;

          /* Entry 't1': '<S17>:127' */
          localB->skyichang = 1.0;
        }
      }
    }
    break;

   case kaiguangai_IN_t:
    /* During 't': '<S17>:21' */
    if (localDW->temporalCounter_i1 >= 1) {
      /* Transition: '<S17>:24' */
      if (rtu_skdw == 0.0) {
        /* Transition: '<S17>:22' */
        localDW->is_songkai = kaiguangai_IN_t;
        localDW->temporalCounter_i1 = 0U;

        /* Entry 't': '<S17>:21' */
        localB->skt += 0.002;
      } else {
        sf_internal_predicateOutput = ((rtu_skdw == 1.0) && (rtu_jsdw == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S17>:23' */
          localDW->is_songkai = kaiguangai_IN_off;

          /* Entry 'off': '<S17>:15' */
          localB->skhx = 0.0;
        } else {
          if (localB->skt > 2.0) {
            /* Transition: '<S17>:128' */
            localDW->is_songkai = kaiguangai_IN_t1;

            /* Entry 't1': '<S17>:127' */
            localB->skyichang = 1.0;
          }
        }
      }
    }
    break;

   case kaiguangai_IN_t1:
    /* During 't1': '<S17>:127' */
    /* Transition: '<S17>:131' */
    localDW->is_songkai = kaiguangai_IN_t2;

    /* Entry 't2': '<S17>:130' */
    localB->skt += 0.002;
    break;

   default:
    /* During 't2': '<S17>:130' */
    if (rtu_skdw == 0.0) {
      /* Transition: '<S17>:134' */
      localDW->is_songkai = kaiguangai_IN_t2;

      /* Entry 't2': '<S17>:130' */
      localB->skt += 0.002;
    } else {
      sf_internal_predicateOutput = ((rtu_jsdw == 1.0) && (rtu_skdw == 1.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S17>:135' */
        localDW->is_songkai = kaiguangai_IN_off;

        /* Entry 'off': '<S17>:15' */
        localB->skhx = 0.0;
      }
    }
    break;
  }
}

/* Function for Chart: '<S14>/Chart1' */
static void kaiguangai_kaigai(real_T rtu_kgdw1, real_T rtu_kgdw2, real_T
  rtu_jsdw, real_T rtu_skdw, real_T rtu_kaigai, B_Chart1_kaiguangai_T *localB,
  DW_Chart1_kaiguangai_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'kaigai': '<S17>:32' */
  switch (localDW->is_kaigai) {
   case kaiguangai_IN_off:
    /* During 'off': '<S17>:33' */
    sf_internal_predicateOutput = ((rtu_kaigai == 1.0) && (rtu_skdw == 1.0) &&
      (rtu_jsdw == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S17>:36' */
      localDW->is_kaigai = kaiguangai_IN_on;

      /* Entry 'on': '<S17>:37' */
      localB->kghx = 1.0;
      localB->kgzhiling1 = 1.0;
      localB->kgzhiling2 = 1.0;
      localB->kgyichang = 0.0;
      localB->kgt = 0.0;
    }
    break;

   case kaiguangai_IN_on:
    /* During 'on': '<S17>:37' */
    /* Transition: '<S17>:38' */
    sf_internal_predicateOutput = ((rtu_kgdw1 == 0.0) && (rtu_kgdw2 == 0.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S17>:40' */
      localDW->is_kaigai = kaiguangai_IN_t;
      localDW->temporalCounter_i2 = 0U;

      /* Entry 't': '<S17>:41' */
      localB->kgt += 0.002;
    } else {
      sf_internal_predicateOutput = ((rtu_kgdw1 == 1.0) && (rtu_kgdw2 == 1.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S17>:35' */
        localDW->is_kaigai = kaiguangai_IN_off;

        /* Entry 'off': '<S17>:33' */
        localB->kghx = 0.0;
        localB->kgzhiling1 = 0.0;
        localB->kgzhiling2 = 0.0;
      } else {
        if (localB->kgt > 12.0) {
          /* Transition: '<S17>:138' */
          localDW->is_kaigai = kaiguangai_IN_t1;

          /* Entry 't1': '<S17>:141' */
          localB->kgyichang = 1.0;
        }
      }
    }
    break;

   case kaiguangai_IN_t:
    /* During 't': '<S17>:41' */
    if (localDW->temporalCounter_i2 >= 1) {
      /* Transition: '<S17>:42' */
      sf_internal_predicateOutput = ((rtu_kgdw1 == 0.0) && (rtu_kgdw2 == 0.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S17>:40' */
        localDW->is_kaigai = kaiguangai_IN_t;
        localDW->temporalCounter_i2 = 0U;

        /* Entry 't': '<S17>:41' */
        localB->kgt += 0.002;
      } else {
        sf_internal_predicateOutput = ((rtu_kgdw1 == 1.0) && (rtu_kgdw2 == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S17>:35' */
          localDW->is_kaigai = kaiguangai_IN_off;

          /* Entry 'off': '<S17>:33' */
          localB->kghx = 0.0;
          localB->kgzhiling1 = 0.0;
          localB->kgzhiling2 = 0.0;
        } else {
          if (localB->kgt > 12.0) {
            /* Transition: '<S17>:138' */
            localDW->is_kaigai = kaiguangai_IN_t1;

            /* Entry 't1': '<S17>:141' */
            localB->kgyichang = 1.0;
          }
        }
      }
    }
    break;

   case kaiguangai_IN_t1:
    /* During 't1': '<S17>:141' */
    /* Transition: '<S17>:140' */
    localDW->is_kaigai = kaiguangai_IN_t2;

    /* Entry 't2': '<S17>:137' */
    localB->kgt += 0.002;
    break;

   default:
    /* During 't2': '<S17>:137' */
    sf_internal_predicateOutput = ((rtu_kgdw1 == 0.0) && (rtu_kgdw2 == 0.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S17>:136' */
      localDW->is_kaigai = kaiguangai_IN_t2;

      /* Entry 't2': '<S17>:137' */
      localB->kgt += 0.002;
    } else {
      sf_internal_predicateOutput = ((rtu_kgdw1 == 1.0) && (rtu_kgdw2 == 1.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S17>:139' */
        localDW->is_kaigai = kaiguangai_IN_off;

        /* Entry 'off': '<S17>:33' */
        localB->kghx = 0.0;
        localB->kgzhiling1 = 0.0;
        localB->kgzhiling2 = 0.0;
      }
    }
    break;
  }
}

/* Function for Chart: '<S14>/Chart1' */
static void kaiguang_exit_internal_shoudong(DW_Chart1_kaiguangai_T *localDW)
{
  /* Exit Internal 'shoudong': '<S17>:7' */
  /* Exit Internal 'yajin': '<S17>:87' */
  localDW->is_yajin = kaiguangai_IN_NO_ACTIVE_CHILD;
  localDW->is_active_yajin = 0U;

  /* Exit Internal 'guangai': '<S17>:86' */
  localDW->is_guangai = kaiguangai_IN_NO_ACTIVE_CHILD;
  localDW->is_active_guangai = 0U;

  /* Exit Internal 'jiesuo': '<S17>:63' */
  localDW->is_jiesuo = kaiguangai_IN_NO_ACTIVE_CHILD;
  localDW->is_active_jiesuo = 0U;

  /* Exit Internal 'suoding': '<S17>:53' */
  localDW->is_suoding = kaiguangai_IN_NO_ACTIVE_CHILD;
  localDW->is_active_suoding = 0U;

  /* Exit Internal 'kaigai': '<S17>:32' */
  localDW->is_kaigai = kaiguangai_IN_NO_ACTIVE_CHILD;
  localDW->is_active_kaigai = 0U;

  /* Exit Internal 'songkai': '<S17>:1' */
  localDW->is_songkai = kaiguangai_IN_NO_ACTIVE_CHILD;
  localDW->is_active_songkai = 0U;
}

/* Function for Chart: '<S14>/Chart1' */
static void kaiguangai_suoding(real_T rtu_kgdw1, real_T rtu_kgdw2, real_T
  rtu_sddw, real_T rtu_jsdw, real_T rtu_yjdw, real_T rtu_skdw, real_T
  rtu_suoding, B_Chart1_kaiguangai_T *localB, DW_Chart1_kaiguangai_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'suoding': '<S17>:53' */
  switch (localDW->is_suoding) {
   case kaiguangai_IN_off:
    /* During 'off': '<S17>:43' */
    sf_internal_predicateOutput = ((rtu_suoding == 1.0) && (rtu_skdw == 1.0) &&
      (rtu_jsdw == 1.0) && (rtu_kgdw1 == 1.0) && (rtu_kgdw2 == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S17>:46' */
      localDW->is_suoding = kaiguangai_IN_on;

      /* Entry 'on': '<S17>:50' */
      localB->yjhx = 1.0;
      localB->sdyichang = 0.0;
      localB->sdt = 0.0;
    }
    break;

   case kaiguangai_IN_on:
    /* During 'on': '<S17>:50' */
    /* Transition: '<S17>:49' */
    sf_internal_predicateOutput = ((rtu_sddw == 0.0) && (rtu_yjdw == 0.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S17>:47' */
      localDW->is_suoding = kaiguangai_IN_t;
      localDW->temporalCounter_i4 = 0U;

      /* Entry 't': '<S17>:52' */
      localB->sdt += 0.002;
    } else {
      sf_internal_predicateOutput = ((rtu_sddw == 1.0) && (rtu_yjdw == 1.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S17>:45' */
        localDW->is_suoding = kaiguangai_IN_off;

        /* Entry 'off': '<S17>:43' */
        localB->yjhx = 0.0;
      } else {
        if (localB->sdt > 2.0) {
          /* Transition: '<S17>:144' */
          localDW->is_suoding = kaiguangai_IN_t1;

          /* Entry 't1': '<S17>:147' */
          localB->sdyichang = 1.0;
        }
      }
    }
    break;

   case kaiguangai_IN_t:
    /* During 't': '<S17>:52' */
    if (localDW->temporalCounter_i4 >= 1) {
      /* Transition: '<S17>:51' */
      sf_internal_predicateOutput = ((rtu_sddw == 0.0) && (rtu_yjdw == 0.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S17>:47' */
        localDW->is_suoding = kaiguangai_IN_t;
        localDW->temporalCounter_i4 = 0U;

        /* Entry 't': '<S17>:52' */
        localB->sdt += 0.002;
      } else {
        sf_internal_predicateOutput = ((rtu_sddw == 1.0) && (rtu_yjdw == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S17>:45' */
          localDW->is_suoding = kaiguangai_IN_off;

          /* Entry 'off': '<S17>:43' */
          localB->yjhx = 0.0;
        } else {
          if (localB->sdt > 2.0) {
            /* Transition: '<S17>:144' */
            localDW->is_suoding = kaiguangai_IN_t1;

            /* Entry 't1': '<S17>:147' */
            localB->sdyichang = 1.0;
          }
        }
      }
    }
    break;

   case kaiguangai_IN_t1:
    /* During 't1': '<S17>:147' */
    /* Transition: '<S17>:146' */
    localDW->is_suoding = kaiguangai_IN_t2;

    /* Entry 't2': '<S17>:143' */
    localB->sdt += 0.002;
    break;

   default:
    /* During 't2': '<S17>:143' */
    sf_internal_predicateOutput = ((rtu_sddw == 0.0) && (rtu_yjdw == 0.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S17>:142' */
      localDW->is_suoding = kaiguangai_IN_t2;

      /* Entry 't2': '<S17>:143' */
      localB->sdt += 0.002;
    } else {
      sf_internal_predicateOutput = ((rtu_sddw == 1.0) && (rtu_yjdw == 1.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S17>:145' */
        localDW->is_suoding = kaiguangai_IN_off;

        /* Entry 'off': '<S17>:43' */
        localB->yjhx = 0.0;
      }
    }
    break;
  }
}

/* Function for Chart: '<S14>/Chart1' */
static void kaiguangai_jiesuo(real_T rtu_kgdw1, real_T rtu_kgdw2, real_T
  rtu_sddw, real_T rtu_jsdw, real_T rtu_yjdw, real_T rtu_skdw, real_T rtu_jiesuo,
  B_Chart1_kaiguangai_T *localB, DW_Chart1_kaiguangai_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'jiesuo': '<S17>:63' */
  switch (localDW->is_jiesuo) {
   case kaiguangai_IN_off:
    /* During 'off': '<S17>:55' */
    sf_internal_predicateOutput = ((rtu_jiesuo == 1.0) && (rtu_yjdw == 1.0) &&
      (rtu_sddw == 1.0) && (rtu_kgdw1 == 1.0) && (rtu_kgdw2 == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S17>:59' */
      localDW->is_jiesuo = kaiguangai_IN_on;

      /* Entry 'on': '<S17>:61' */
      localB->skhx = 1.0;
      localB->jsyichang = 0.0;
      localB->jst = 0.0;
    }
    break;

   case kaiguangai_IN_on:
    /* During 'on': '<S17>:61' */
    /* Transition: '<S17>:57' */
    sf_internal_predicateOutput = ((rtu_jsdw == 0.0) && (rtu_skdw == 0.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S17>:62' */
      localDW->is_jiesuo = kaiguangai_IN_t;
      localDW->temporalCounter_i3 = 0U;

      /* Entry 't': '<S17>:64' */
      localB->jst += 0.002;
    } else {
      sf_internal_predicateOutput = ((rtu_jsdw == 1.0) && (rtu_skdw == 1.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S17>:56' */
        localDW->is_jiesuo = kaiguangai_IN_off;

        /* Entry 'off': '<S17>:55' */
        localB->skhx = 0.0;
      } else {
        if (localB->sdt > 2.0) {
          /* Transition: '<S17>:148' */
          localDW->is_jiesuo = kaiguangai_IN_t1;

          /* Entry 't1': '<S17>:153' */
          localB->jsyichang = 1.0;
        }
      }
    }
    break;

   case kaiguangai_IN_t:
    /* During 't': '<S17>:64' */
    if (localDW->temporalCounter_i3 >= 1) {
      /* Transition: '<S17>:58' */
      sf_internal_predicateOutput = ((rtu_jsdw == 0.0) && (rtu_skdw == 0.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S17>:62' */
        localDW->is_jiesuo = kaiguangai_IN_t;
        localDW->temporalCounter_i3 = 0U;

        /* Entry 't': '<S17>:64' */
        localB->jst += 0.002;
      } else {
        sf_internal_predicateOutput = ((rtu_jsdw == 1.0) && (rtu_skdw == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S17>:56' */
          localDW->is_jiesuo = kaiguangai_IN_off;

          /* Entry 'off': '<S17>:55' */
          localB->skhx = 0.0;
        } else {
          if (localB->sdt > 2.0) {
            /* Transition: '<S17>:148' */
            localDW->is_jiesuo = kaiguangai_IN_t1;

            /* Entry 't1': '<S17>:153' */
            localB->jsyichang = 1.0;
          }
        }
      }
    }
    break;

   case kaiguangai_IN_t1:
    /* During 't1': '<S17>:153' */
    /* Transition: '<S17>:150' */
    localDW->is_jiesuo = kaiguangai_IN_t2;

    /* Entry 't2': '<S17>:149' */
    localB->jst += 0.002;
    break;

   default:
    /* During 't2': '<S17>:149' */
    sf_internal_predicateOutput = ((rtu_jsdw == 0.0) && (rtu_skdw == 0.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S17>:151' */
      localDW->is_jiesuo = kaiguangai_IN_t2;

      /* Entry 't2': '<S17>:149' */
      localB->jst += 0.002;
    } else {
      sf_internal_predicateOutput = ((rtu_jsdw == 1.0) && (rtu_skdw == 1.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S17>:152' */
        localDW->is_jiesuo = kaiguangai_IN_off;

        /* Entry 'off': '<S17>:55' */
        localB->skhx = 0.0;
      }
    }
    break;
  }
}

/* Function for Chart: '<S14>/Chart1' */
static void kaiguangai_shoudong(real_T rtu_kgdw1, real_T rtu_kgdw2, real_T
  rtu_ggdw1, real_T rtu_ggdw2, real_T rtu_sddw, real_T rtu_jsdw, real_T rtu_yjdw,
  real_T rtu_skdw, real_T rtu_songkai, real_T rtu_kaigai, real_T rtu_suoding,
  real_T rtu_jiesuo, real_T rtu_guangai, real_T rtu_yajin, real_T rtu_jieshu,
  B_Chart1_kaiguangai_T *localB, DW_Chart1_kaiguangai_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'shoudong': '<S17>:7' */
  if (rtu_jieshu == 1.0) {
    /* Transition: '<S17>:126' */
    kaiguang_exit_internal_shoudong(localDW);
    localDW->is_c9_kaiguangai = kaiguangai_IN_off1;

    /* Entry 'off1': '<S17>:123' */
    localB->skhx = 0.0;
    localB->kghx = 0.0;
    localB->gghx = 0.0;
    localB->yjhx = 0.0;
    localB->skt = 0.0;
    localB->kgt = 0.0;
    localB->sdt = 0.0;
    localB->jst = 0.0;
    localB->ggt = 0.0;
    localB->yjt = 0.0;
    localB->skyichang = 0.0;
    localB->kgyichang = 0.0;
    localB->sdyichang = 0.0;
    localB->jsyichang = 0.0;
    localB->ggyichang = 0.0;
    localB->yjyichang = 0.0;
    localB->kgzhiling1 = 0.0;
    localB->kgzhiling2 = 0.0;
    localB->ggzhiling1 = 0.0;
    localB->ggzhiling2 = 0.0;
  } else {
    kaiguangai_songkai(rtu_sddw, rtu_jsdw, rtu_yjdw, rtu_skdw, rtu_songkai,
                       localB, localDW);
    kaiguangai_kaigai(rtu_kgdw1, rtu_kgdw2, rtu_jsdw, rtu_skdw, rtu_kaigai,
                      localB, localDW);
    kaiguangai_suoding(rtu_kgdw1, rtu_kgdw2, rtu_sddw, rtu_jsdw, rtu_yjdw,
                       rtu_skdw, rtu_suoding, localB, localDW);
    kaiguangai_jiesuo(rtu_kgdw1, rtu_kgdw2, rtu_sddw, rtu_jsdw, rtu_yjdw,
                      rtu_skdw, rtu_jiesuo, localB, localDW);

    /* During 'guangai': '<S17>:86' */
    switch (localDW->is_guangai) {
     case kaiguangai_IN_off:
      /* During 'off': '<S17>:76' */
      sf_internal_predicateOutput = ((rtu_guangai == 1.0) && (rtu_skdw == 1.0) &&
        (rtu_jsdw == 1.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S17>:79' */
        localDW->is_guangai = kaiguangai_IN_on;

        /* Entry 'on': '<S17>:83' */
        localB->gghx = 1.0;
        localB->ggzhiling1 = 1.0;
        localB->ggzhiling2 = 1.0;
        localB->ggyichang = 0.0;
        localB->ggt = 0.0;
      }
      break;

     case kaiguangai_IN_on:
      /* During 'on': '<S17>:83' */
      /* Transition: '<S17>:82' */
      sf_internal_predicateOutput = ((rtu_ggdw1 == 0.0) && (rtu_ggdw2 == 0.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S17>:80' */
        localDW->is_guangai = kaiguangai_IN_t;
        localDW->temporalCounter_i6 = 0U;

        /* Entry 't': '<S17>:85' */
        localB->ggt += 0.002;
      } else {
        sf_internal_predicateOutput = ((rtu_ggdw1 == 1.0) && (rtu_ggdw2 == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S17>:78' */
          localDW->is_guangai = kaiguangai_IN_off;

          /* Entry 'off': '<S17>:76' */
          localB->gghx = 0.0;
          localB->ggzhiling1 = 0.0;
          localB->ggzhiling2 = 0.0;
        } else {
          if (localB->ggt > 12.0) {
            /* Transition: '<S17>:154' */
            localDW->is_guangai = kaiguangai_IN_t1;

            /* Entry 't1': '<S17>:159' */
            localB->ggyichang = 1.0;
          }
        }
      }
      break;

     case kaiguangai_IN_t:
      /* During 't': '<S17>:85' */
      if (localDW->temporalCounter_i6 >= 1) {
        /* Transition: '<S17>:84' */
        sf_internal_predicateOutput = ((rtu_ggdw1 == 0.0) && (rtu_ggdw2 == 0.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S17>:80' */
          localDW->is_guangai = kaiguangai_IN_t;
          localDW->temporalCounter_i6 = 0U;

          /* Entry 't': '<S17>:85' */
          localB->ggt += 0.002;
        } else {
          sf_internal_predicateOutput = ((rtu_ggdw1 == 1.0) && (rtu_ggdw2 == 1.0));
          if (sf_internal_predicateOutput) {
            /* Transition: '<S17>:78' */
            localDW->is_guangai = kaiguangai_IN_off;

            /* Entry 'off': '<S17>:76' */
            localB->gghx = 0.0;
            localB->ggzhiling1 = 0.0;
            localB->ggzhiling2 = 0.0;
          } else {
            if (localB->ggt > 12.0) {
              /* Transition: '<S17>:154' */
              localDW->is_guangai = kaiguangai_IN_t1;

              /* Entry 't1': '<S17>:159' */
              localB->ggyichang = 1.0;
            }
          }
        }
      }
      break;

     case kaiguangai_IN_t1:
      /* During 't1': '<S17>:159' */
      /* Transition: '<S17>:156' */
      localDW->is_guangai = kaiguangai_IN_t2;

      /* Entry 't2': '<S17>:155' */
      localB->ggt += 0.002;
      break;

     default:
      /* During 't2': '<S17>:155' */
      sf_internal_predicateOutput = ((rtu_ggdw1 == 0.0) && (rtu_ggdw2 == 0.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S17>:157' */
        localDW->is_guangai = kaiguangai_IN_t2;

        /* Entry 't2': '<S17>:155' */
        localB->ggt += 0.002;
      } else {
        sf_internal_predicateOutput = ((rtu_ggdw1 == 1.0) && (rtu_ggdw2 == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S17>:158' */
          localDW->is_guangai = kaiguangai_IN_off;

          /* Entry 'off': '<S17>:76' */
          localB->gghx = 0.0;
          localB->ggzhiling1 = 0.0;
          localB->ggzhiling2 = 0.0;
        }
      }
      break;
    }

    /* During 'yajin': '<S17>:87' */
    switch (localDW->is_yajin) {
     case kaiguangai_IN_off:
      /* During 'off': '<S17>:88' */
      sf_internal_predicateOutput = ((rtu_yajin == 1.0) && (rtu_ggdw1 == 1.0) &&
        (rtu_ggdw2 == 1.0) && (rtu_jsdw == 1.0) && (rtu_skdw == 1.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S17>:91' */
        localDW->is_yajin = kaiguangai_IN_on;

        /* Entry 'on': '<S17>:92' */
        localB->yjhx = 1.0;
        localB->yjyichang = 0.0;
        localB->yjt = 0.0;
      }
      break;

     case kaiguangai_IN_on:
      /* During 'on': '<S17>:92' */
      /* Transition: '<S17>:93' */
      sf_internal_predicateOutput = ((rtu_yjdw == 0.0) && (rtu_sddw == 0.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S17>:95' */
        localDW->is_yajin = kaiguangai_IN_t;
        localDW->temporalCounter_i5 = 0U;

        /* Entry 't': '<S17>:96' */
        localB->yjt += 0.002;
      } else {
        sf_internal_predicateOutput = ((rtu_yjdw == 1.0) && (rtu_sddw == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S17>:90' */
          localDW->is_yajin = kaiguangai_IN_off;

          /* Entry 'off': '<S17>:88' */
          localB->yjhx = 0.0;
        } else {
          if (localB->ggt > 12.0) {
            /* Transition: '<S17>:161' */
            localDW->is_yajin = kaiguangai_IN_t3;

            /* Entry 't3': '<S17>:172' */
            localB->yjyichang = 1.0;
          }
        }
      }
      break;

     case kaiguangai_IN_t:
      /* During 't': '<S17>:96' */
      if (localDW->temporalCounter_i5 >= 1) {
        /* Transition: '<S17>:97' */
        sf_internal_predicateOutput = ((rtu_yjdw == 0.0) && (rtu_sddw == 0.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S17>:95' */
          localDW->is_yajin = kaiguangai_IN_t;
          localDW->temporalCounter_i5 = 0U;

          /* Entry 't': '<S17>:96' */
          localB->yjt += 0.002;
        } else {
          sf_internal_predicateOutput = ((rtu_yjdw == 1.0) && (rtu_sddw == 1.0));
          if (sf_internal_predicateOutput) {
            /* Transition: '<S17>:90' */
            localDW->is_yajin = kaiguangai_IN_off;

            /* Entry 'off': '<S17>:88' */
            localB->yjhx = 0.0;
          } else {
            if (localB->ggt > 12.0) {
              /* Transition: '<S17>:161' */
              localDW->is_yajin = kaiguangai_IN_t3;

              /* Entry 't3': '<S17>:172' */
              localB->yjyichang = 1.0;
            }
          }
        }
      }
      break;

     case kaiguangai_IN_t2_j:
      /* During 't2': '<S17>:162' */
      sf_internal_predicateOutput = ((rtu_yjdw == 0.0) && (rtu_sddw == 0.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S17>:164' */
        localDW->is_yajin = kaiguangai_IN_t2_j;

        /* Entry 't2': '<S17>:162' */
        localB->yjt += 0.002;
      } else {
        sf_internal_predicateOutput = ((rtu_yjdw == 1.0) && (rtu_sddw == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S17>:165' */
          localDW->is_yajin = kaiguangai_IN_off;

          /* Entry 'off': '<S17>:88' */
          localB->yjhx = 0.0;
        }
      }
      break;

     default:
      /* During 't3': '<S17>:172' */
      /* Transition: '<S17>:163' */
      localDW->is_yajin = kaiguangai_IN_t2_j;

      /* Entry 't2': '<S17>:162' */
      localB->yjt += 0.002;
      break;
    }
  }
}

/*
 * System initialize for atomic system:
 *    '<S14>/Chart1'
 *    '<S14>/Chart2'
 *    '<S14>/Chart3'
 *    '<S14>/Chart4'
 *    '<S14>/Chart5'
 *    '<S14>/Chart6'
 *    '<S14>/Chart7'
 */
void kaiguangai_Chart1_Init(DW_Chart1_kaiguangai_T *localDW)
{
  localDW->sfEvent = kaiguangai_CALL_EVENT;
  localDW->is_active_guangai = 0U;
  localDW->is_guangai = kaiguangai_IN_NO_ACTIVE_CHILD;
  localDW->temporalCounter_i6 = 0U;
  localDW->is_active_jiesuo = 0U;
  localDW->is_jiesuo = kaiguangai_IN_NO_ACTIVE_CHILD;
  localDW->temporalCounter_i3 = 0U;
  localDW->is_active_kaigai = 0U;
  localDW->is_kaigai = kaiguangai_IN_NO_ACTIVE_CHILD;
  localDW->temporalCounter_i2 = 0U;
  localDW->is_active_songkai = 0U;
  localDW->is_songkai = kaiguangai_IN_NO_ACTIVE_CHILD;
  localDW->temporalCounter_i1 = 0U;
  localDW->is_active_suoding = 0U;
  localDW->is_suoding = kaiguangai_IN_NO_ACTIVE_CHILD;
  localDW->temporalCounter_i4 = 0U;
  localDW->is_active_yajin = 0U;
  localDW->is_yajin = kaiguangai_IN_NO_ACTIVE_CHILD;
  localDW->temporalCounter_i5 = 0U;
  localDW->is_active_c9_kaiguangai = 0U;
  localDW->is_c9_kaiguangai = kaiguangai_IN_NO_ACTIVE_CHILD;
}

/*
 * Output and update for atomic system:
 *    '<S14>/Chart1'
 *    '<S14>/Chart2'
 *    '<S14>/Chart3'
 *    '<S14>/Chart4'
 *    '<S14>/Chart5'
 *    '<S14>/Chart6'
 *    '<S14>/Chart7'
 */
void kaiguangai_Chart1(real_T rtu_start, real_T rtu_kgdw1, real_T rtu_kgdw2,
  real_T rtu_ggdw1, real_T rtu_ggdw2, real_T rtu_sddw, real_T rtu_jsdw, real_T
  rtu_yjdw, real_T rtu_skdw, real_T rtu_songkai, real_T rtu_kaigai, real_T
  rtu_suoding, real_T rtu_jiesuo, real_T rtu_guangai, real_T rtu_yajin, real_T
  rtu_jieshu, B_Chart1_kaiguangai_T *localB, DW_Chart1_kaiguangai_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* Gateway: Subsystem1/shoudong/Chart1 */
  localDW->sfEvent = kaiguangai_CALL_EVENT;
  if (localDW->temporalCounter_i1 < 3U) {
    localDW->temporalCounter_i1++;
  }

  if (localDW->temporalCounter_i2 < 3U) {
    localDW->temporalCounter_i2++;
  }

  if (localDW->temporalCounter_i3 < 3U) {
    localDW->temporalCounter_i3++;
  }

  if (localDW->temporalCounter_i4 < 3U) {
    localDW->temporalCounter_i4++;
  }

  if (localDW->temporalCounter_i5 < 3U) {
    localDW->temporalCounter_i5++;
  }

  if (localDW->temporalCounter_i6 < 3U) {
    localDW->temporalCounter_i6++;
  }

  /* During: Subsystem1/shoudong/Chart1 */
  if (localDW->is_active_c9_kaiguangai == 0U) {
    /* Entry: Subsystem1/shoudong/Chart1 */
    localDW->is_active_c9_kaiguangai = 1U;

    /* Entry Internal: Subsystem1/shoudong/Chart1 */
    /* Transition: '<S17>:120' */
    localDW->is_c9_kaiguangai = kaiguangai_IN_off;

    /* Entry 'off': '<S17>:121' */
    localB->skhx = 0.0;
    localB->kghx = 0.0;
    localB->gghx = 0.0;
    localB->yjhx = 0.0;
    localB->kgzhiling1 = 0.0;
    localB->kgzhiling2 = 0.0;
    localB->ggzhiling1 = 0.0;
    localB->ggzhiling2 = 0.0;
    localB->skyichang = 0.0;
    localB->kgyichang = 0.0;
    localB->sdyichang = 0.0;
    localB->jsyichang = 0.0;
    localB->ggyichang = 0.0;
    localB->yjyichang = 0.0;
  } else {
    switch (localDW->is_c9_kaiguangai) {
     case kaiguangai_IN_off:
      /* During 'off': '<S17>:121' */
      sf_internal_predicateOutput = ((rtu_start == 1.0) && (rtu_jieshu == 0.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S17>:122' */
        localDW->is_c9_kaiguangai = kaiguangai_IN_shoudong;

        /* Entry Internal 'shoudong': '<S17>:7' */
        localDW->is_active_songkai = 1U;

        /* Entry Internal 'songkai': '<S17>:1' */
        /* Transition: '<S17>:16' */
        localDW->is_songkai = kaiguangai_IN_off;

        /* Entry 'off': '<S17>:15' */
        localDW->is_active_kaigai = 1U;

        /* Entry Internal 'kaigai': '<S17>:32' */
        /* Transition: '<S17>:34' */
        localDW->is_kaigai = kaiguangai_IN_off;

        /* Entry 'off': '<S17>:33' */
        localB->kghx = 0.0;
        localB->kgzhiling1 = 0.0;
        localB->kgzhiling2 = 0.0;
        localDW->is_active_suoding = 1U;

        /* Entry Internal 'suoding': '<S17>:53' */
        /* Transition: '<S17>:44' */
        localDW->is_suoding = kaiguangai_IN_off;

        /* Entry 'off': '<S17>:43' */
        localDW->is_active_jiesuo = 1U;

        /* Entry Internal 'jiesuo': '<S17>:63' */
        /* Transition: '<S17>:54' */
        localDW->is_jiesuo = kaiguangai_IN_off;

        /* Entry 'off': '<S17>:55' */
        localB->skhx = 0.0;
        localDW->is_active_guangai = 1U;

        /* Entry Internal 'guangai': '<S17>:86' */
        /* Transition: '<S17>:77' */
        localDW->is_guangai = kaiguangai_IN_off;

        /* Entry 'off': '<S17>:76' */
        localB->gghx = 0.0;
        localB->ggzhiling1 = 0.0;
        localB->ggzhiling2 = 0.0;
        localDW->is_active_yajin = 1U;

        /* Entry Internal 'yajin': '<S17>:87' */
        /* Transition: '<S17>:89' */
        localDW->is_yajin = kaiguangai_IN_off;

        /* Entry 'off': '<S17>:88' */
        localB->yjhx = 0.0;
      }
      break;

     case kaiguangai_IN_off1:
      /* During 'off1': '<S17>:123' */
      break;

     default:
      kaiguangai_shoudong(rtu_kgdw1, rtu_kgdw2, rtu_ggdw1, rtu_ggdw2, rtu_sddw,
                          rtu_jsdw, rtu_yjdw, rtu_skdw, rtu_songkai, rtu_kaigai,
                          rtu_suoding, rtu_jiesuo, rtu_guangai, rtu_yajin,
                          rtu_jieshu, localB, localDW);
      break;
    }
  }
}

/* Function for Chart: '<S15>/1#' */
static void kaiguangai_on4(real_T rtu_kgdw1, real_T rtu_kgdw2, real_T rtu_skdw,
  real_T rtu_jsdw, B_u_kaiguangai_T *localB, DW_u_kaiguangai_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'on4': '<S24>:113' */
  /* Transition: '<S24>:123' */
  sf_internal_predicateOutput = ((rtu_kgdw1 == 0.0) || (rtu_kgdw2 == 0.0) ||
    (rtu_jsdw == 0.0) || (rtu_skdw == 0.0));
  if (sf_internal_predicateOutput) {
    /* Transition: '<S24>:117' */
    localDW->is_zidong = kaiguangai_IN_jiesuoshijian;

    /* Entry 'jiesuoshijian': '<S24>:116' */
    localB->jst += 0.002;
  } else {
    sf_internal_predicateOutput = ((rtu_kgdw1 == 1.0) && (rtu_kgdw2 == 1.0) &&
      (rtu_jsdw == 1.0) && (rtu_skdw == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S24>:120' */
      localDW->is_zidong = kaiguangai_IN_t6guiling;

      /* Entry 't6guiling': '<S24>:140' */
      localDW->t6 = 0.0;
    }
  }
}

/* Function for Chart: '<S15>/1#' */
static void kaiguangai_on5(real_T rtu_ggdw1, real_T rtu_ggdw2, real_T rtu_skdw,
  real_T rtu_jsdw, B_u_kaiguangai_T *localB, DW_u_kaiguangai_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'on5': '<S24>:131' */
  /* Transition: '<S24>:150' */
  sf_internal_predicateOutput = ((rtu_ggdw1 == 0.0) || (rtu_ggdw2 == 0.0) ||
    (rtu_jsdw == 0.0) || (rtu_skdw == 0.0));
  if (sf_internal_predicateOutput) {
    /* Transition: '<S24>:144' */
    localDW->is_zidong = kaiguangai_IN_guangaishijian;

    /* Entry 'guangaishijian': '<S24>:143' */
    localB->ggt += 0.002;
  } else {
    sf_internal_predicateOutput = ((rtu_ggdw1 == 1.0) && (rtu_ggdw2 == 1.0) &&
      (rtu_jsdw == 1.0) && (rtu_skdw == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S24>:145' */
      localDW->is_zidong = kaiguangai_IN_t8guiling;

      /* Entry 't8guiling': '<S24>:148' */
      localDW->t8 = 0.0;
    }
  }
}

/* Function for Chart: '<S15>/1#' */
static void kaiguangai_on6(real_T rtu_ggdw1, real_T rtu_ggdw2, real_T rtu_sddw,
  real_T rtu_yjdw, B_u_kaiguangai_T *localB, DW_u_kaiguangai_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'on6': '<S24>:157' */
  /* Transition: '<S24>:164' */
  sf_internal_predicateOutput = ((rtu_sddw == 0.0) || (rtu_yjdw == 0.0));
  if (sf_internal_predicateOutput) {
    /* Transition: '<S24>:158' */
    localDW->is_zidong = kaiguangai_IN_yajinshijian;

    /* Entry 'yajinshijian': '<S24>:161' */
    localB->yjt += 0.002;
  } else {
    sf_internal_predicateOutput = ((rtu_sddw == 1.0) && (rtu_yjdw == 1.0) &&
      (rtu_ggdw1 == 1.0) && (rtu_ggdw2 == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S24>:167' */
      localDW->is_zidong = kaiguangai_IN_t10guiling;

      /* Entry 't10guiling': '<S24>:336' */
      localDW->t10 = 0.0;
    }
  }
}

/* Function for Chart: '<S15>/1#' */
static void kaiguang_enter_atomic_chushihua(B_u_kaiguangai_T *localB)
{
  /* Entry 'chushihua': '<S24>:3' */
  localB->skhx = 0.0;
  localB->kghx = 0.0;
  localB->kgzhiling1 = 0.0;
  localB->kgzhiling2 = 0.0;
  localB->yjhx = 0.0;
  localB->gghx = 0.0;
  localB->ggzhiling1 = 0.0;
  localB->ggzhiling2 = 0.0;
  localB->skt = 0.0;
  localB->kgt = 0.0;
  localB->sdt = 0.0;
  localB->jst = 0.0;
  localB->ggt = 0.0;
  localB->yjt = 0.0;
  localB->skyichang = 0.0;
  localB->kgyichang = 0.0;
  localB->sdyichang = 0.0;
  localB->jsyichang = 0.0;
  localB->ggyichang = 0.0;
  localB->yjyichang = 0.0;
}

/* Function for Chart: '<S15>/1#' */
static void kaiguangai_on7(real_T rtu_shedingcishu, real_T rtu_jieshu,
  B_u_kaiguangai_T *localB, DW_u_kaiguangai_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'on7': '<S24>:170' */
  /* Transition: '<S24>:191' */
  sf_internal_predicateOutput = ((localB->yikaicishu < rtu_shedingcishu) &&
    (rtu_jieshu == 0.0));
  if (sf_internal_predicateOutput) {
    /* Transition: '<S24>:192' */
    localDW->is_zidong = kaiguangai_IN_chushihua;
    kaiguang_enter_atomic_chushihua(localB);
  } else {
    sf_internal_predicateOutput = ((localB->yikaicishu >= rtu_shedingcishu) ||
      (rtu_jieshu == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S24>:195' */
      localDW->is_zidong = kaiguangai_IN_stop;

      /* Entry 'stop': '<S24>:193' */
      localB->skhx = 0.0;
      localB->kghx = 0.0;
      localB->kgzhiling1 = 0.0;
      localB->kgzhiling2 = 0.0;
      localB->yjhx = 0.0;
      localB->gghx = 0.0;
      localB->ggzhiling1 = 0.0;
      localB->ggzhiling2 = 0.0;
      localB->skt = 0.0;
      localB->kgt = 0.0;
      localB->sdt = 0.0;
      localB->jst = 0.0;
      localB->ggt = 0.0;
      localB->yjt = 0.0;
    }
  }
}

/* Function for Chart: '<S15>/1#' */
static void kaiguangai_songkaishijian(real_T rtu_skdw, real_T rtu_jsdw,
  B_u_kaiguangai_T *localB, DW_u_kaiguangai_T *localDW)
{
  boolean_T sf_internal_predicateOutput;
  boolean_T guard1 = false;

  /* During 'songkaishijian': '<S24>:33' */
  /* Transition: '<S24>:349' */
  guard1 = false;
  if (localB->skt <= 2.0) {
    /* Transition: '<S24>:350' */
    sf_internal_predicateOutput = ((rtu_jsdw == 0.0) || (rtu_skdw == 0.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S24>:50' */
      localDW->is_zidong = kaiguangai_IN_songkaishijian;

      /* Entry 'songkaishijian': '<S24>:33' */
      localB->skt += 0.002;
    } else {
      sf_internal_predicateOutput = ((rtu_jsdw == 1.0) && (rtu_skdw == 1.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S24>:53' */
        localDW->is_zidong = kaiguangai_IN_tguiling;

        /* Entry 'tguiling': '<S24>:52' */
        localDW->t = 0.0;
      } else {
        guard1 = true;
      }
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    if (localB->skt > 2.0) {
      /* Transition: '<S24>:353' */
      localDW->is_zidong = kaiguangai_IN_on10;

      /* Entry 'on10': '<S24>:366' */
      localB->skyichang = 1.0;
    }
  }
}

/* Function for Chart: '<S15>/1#' */
static void kaiguangai_songkaishijian1(real_T rtu_skdw, real_T rtu_jsdw,
  B_u_kaiguangai_T *localB, DW_u_kaiguangai_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'songkaishijian1': '<S24>:355' */
  sf_internal_predicateOutput = ((rtu_jsdw == 0.0) || (rtu_skdw == 0.0));
  if (sf_internal_predicateOutput) {
    /* Transition: '<S24>:356' */
    localDW->is_zidong = kaiguangai_IN_songkaishijian1;

    /* Entry 'songkaishijian1': '<S24>:355' */
    localB->skt += 0.002;
  } else {
    sf_internal_predicateOutput = ((rtu_jsdw == 1.0) && (rtu_skdw == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S24>:357' */
      localDW->is_zidong = kaiguangai_IN_on8;

      /* Entry 'on8': '<S24>:352' */
      localB->skhx = 0.0;
    }
  }
}

/* Function for Chart: '<S15>/1#' */
static void kaiguangai_songkaishijian2(real_T rtu_kgdw1, real_T rtu_kgdw2,
  real_T rtu_skdw, real_T rtu_jsdw, B_u_kaiguangai_T *localB, DW_u_kaiguangai_T *
  localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'songkaishijian2': '<S24>:365' */
  sf_internal_predicateOutput = ((rtu_kgdw1 == 0.0) || (rtu_kgdw2 == 0.0) ||
    (rtu_jsdw == 0.0) || (rtu_skdw == 0.0));
  if (sf_internal_predicateOutput) {
    /* Transition: '<S24>:360' */
    localDW->is_zidong = kaiguangai_IN_songkaishijian2;

    /* Entry 'songkaishijian2': '<S24>:365' */
    localB->kgt += 0.002;
  } else {
    sf_internal_predicateOutput = ((rtu_kgdw1 == 1.0) && (rtu_kgdw2 == 1.0) &&
      (rtu_jsdw == 1.0) && (rtu_skdw == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S24>:362' */
      localDW->is_zidong = kaiguangai_IN_on9;

      /* Entry 'on9': '<S24>:358' */
      localB->kghx = 0.0;
      localB->kgzhiling1 = 0.0;
      localB->kgzhiling2 = 0.0;
    }
  }
}

/* Function for Chart: '<S15>/1#' */
static void kaiguangai_songkaishijian3(real_T rtu_kgdw1, real_T rtu_kgdw2,
  real_T rtu_sddw, real_T rtu_yjdw, real_T rtu_skdw, real_T rtu_jsdw,
  B_u_kaiguangai_T *localB, DW_u_kaiguangai_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'songkaishijian3': '<S24>:387' */
  sf_internal_predicateOutput = ((rtu_kgdw1 == 0.0) || (rtu_kgdw2 == 0.0) ||
    (rtu_sddw == 0.0) || (rtu_yjdw == 0.0));
  if (sf_internal_predicateOutput) {
    /* Transition: '<S24>:382' */
    localDW->is_zidong = kaiguangai_IN_songkaishijian3;

    /* Entry 'songkaishijian3': '<S24>:387' */
    localB->sdt += 0.002;
  } else {
    sf_internal_predicateOutput = ((rtu_kgdw1 == 1.0) && (rtu_kgdw2 == 1.0) &&
      (rtu_jsdw == 1.0) && (rtu_skdw == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S24>:383' */
      localDW->is_zidong = kaiguangai_IN_on13;

      /* Entry 'on13': '<S24>:381' */
      localB->yjhx = 0.0;
    }
  }
}

/* Function for Chart: '<S15>/1#' */
static void kaiguangai_songkaishijian4(real_T rtu_kgdw1, real_T rtu_kgdw2,
  real_T rtu_skdw, real_T rtu_jsdw, B_u_kaiguangai_T *localB, DW_u_kaiguangai_T *
  localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'songkaishijian4': '<S24>:392' */
  sf_internal_predicateOutput = ((rtu_kgdw1 == 0.0) || (rtu_kgdw2 == 0.0) ||
    (rtu_jsdw == 0.0) || (rtu_skdw == 0.0));
  if (sf_internal_predicateOutput) {
    /* Transition: '<S24>:391' */
    localDW->is_zidong = kaiguangai_IN_songkaishijian4;

    /* Entry 'songkaishijian4': '<S24>:392' */
    localB->jst += 0.002;
  } else {
    sf_internal_predicateOutput = ((rtu_kgdw1 == 1.0) && (rtu_kgdw2 == 1.0) &&
      (rtu_jsdw == 1.0) && (rtu_skdw == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S24>:395' */
      localDW->is_zidong = kaiguangai_IN_on15;

      /* Entry 'on15': '<S24>:398' */
      localB->skhx = 0.0;
    }
  }
}

/* Function for Chart: '<S15>/1#' */
static void kaiguangai_songkaishijian5(real_T rtu_ggdw1, real_T rtu_ggdw2,
  real_T rtu_skdw, real_T rtu_jsdw, B_u_kaiguangai_T *localB, DW_u_kaiguangai_T *
  localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'songkaishijian5': '<S24>:404' */
  sf_internal_predicateOutput = ((rtu_ggdw1 == 1.0) && (rtu_ggdw2 == 1.0) &&
    (rtu_jsdw == 1.0) && (rtu_skdw == 1.0));
  if (sf_internal_predicateOutput) {
    /* Transition: '<S24>:399' */
    localDW->is_zidong = kaiguangai_IN_on17;

    /* Entry 'on17': '<S24>:401' */
    localB->gghx = 0.0;
    localB->ggzhiling1 = 0.0;
    localB->ggzhiling2 = 0.0;
  } else {
    sf_internal_predicateOutput = ((rtu_ggdw1 == 0.0) || (rtu_ggdw2 == 0.0) ||
      (rtu_jsdw == 0.0) || (rtu_skdw == 0.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S24>:408' */
      localDW->is_zidong = kaiguangai_IN_songkaishijian5;

      /* Entry 'songkaishijian5': '<S24>:404' */
      localB->ggt += 0.002;
    }
  }
}

/* Function for Chart: '<S15>/1#' */
static void kaiguangai_songkaishijian6(real_T rtu_ggdw1, real_T rtu_ggdw2,
  real_T rtu_sddw, real_T rtu_yjdw, B_u_kaiguangai_T *localB, DW_u_kaiguangai_T *
  localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'songkaishijian6': '<S24>:417' */
  sf_internal_predicateOutput = ((rtu_sddw == 1.0) && (rtu_yjdw == 1.0) &&
    (rtu_ggdw1 == 1.0) && (rtu_ggdw2 == 1.0));
  if (sf_internal_predicateOutput) {
    /* Transition: '<S24>:411' */
    localDW->is_zidong = kaiguangai_IN_on19;

    /* Entry 'on19': '<S24>:415' */
    localB->yjhx = 0.0;
  } else {
    sf_internal_predicateOutput = ((rtu_sddw == 0.0) || (rtu_yjdw == 0.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S24>:409' */
      localDW->is_zidong = kaiguangai_IN_songkaishijian6;

      /* Entry 'songkaishijian6': '<S24>:417' */
      localB->yjt += 0.002;
    }
  }
}

/* Function for Chart: '<S15>/1#' */
static void kaiguangai_suodingshijian(real_T rtu_kgdw1, real_T rtu_kgdw2, real_T
  rtu_sddw, real_T rtu_yjdw, B_u_kaiguangai_T *localB, DW_u_kaiguangai_T
  *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'suodingshijian': '<S24>:97' */
  /* Transition: '<S24>:384' */
  if (localB->sdt > 2.0) {
    /* Transition: '<S24>:385' */
    localDW->is_zidong = kaiguangai_IN_on12;

    /* Entry 'on12': '<S24>:378' */
    localB->sdyichang = 1.0;
  } else {
    if (localB->sdt <= 2.0) {
      /* Transition: '<S24>:379' */
      sf_internal_predicateOutput = ((rtu_kgdw1 == 0.0) || (rtu_kgdw2 == 0.0) ||
        (rtu_sddw == 0.0) || (rtu_yjdw == 0.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S24>:99' */
        localDW->is_zidong = kaiguangai_IN_suodingshijian;

        /* Entry 'suodingshijian': '<S24>:97' */
        localB->sdt += 0.002;
      } else {
        sf_internal_predicateOutput = ((rtu_kgdw1 == 1.0) && (rtu_kgdw2 == 1.0) &&
          (rtu_sddw == 1.0) && (rtu_yjdw == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S24>:101' */
          localDW->is_zidong = kaiguangai_IN_t4guiling;

          /* Entry 't4guiling': '<S24>:100' */
          localDW->t4 = 0.0;
        }
      }
    }
  }
}

/* Function for Chart: '<S15>/1#' */
static void kaiguangai_t2guiling(real_T rtu_t3, B_u_kaiguangai_T *localB,
  DW_u_kaiguangai_T *localDW)
{
  /* During 't2guiling': '<S24>:83' */
  /* Transition: '<S24>:85' */
  if (localDW->t2 < rtu_t3) {
    /* Transition: '<S24>:79' */
    localDW->is_zidong = kaiguangai_IN_yanchishijian2;
    localDW->temporalCounter_i1 = 0U;

    /* Entry 'yanchishijian2': '<S24>:69' */
    localDW->t2++;
  } else {
    if (localDW->t2 >= rtu_t3) {
      /* Transition: '<S24>:112' */
      localDW->is_zidong = kaiguangai_IN_on3;

      /* Entry 'on3': '<S24>:81' */
      localB->kghx = 0.0;
      localB->kgzhiling1 = 0.0;
      localB->kgzhiling2 = 0.0;
      localB->yjhx = 1.0;
    }
  }
}

/* Function for Chart: '<S15>/1#' */
static void kaiguangai_t4guiling(real_T rtu_t5, B_u_kaiguangai_T *localB,
  DW_u_kaiguangai_T *localDW)
{
  /* During 't4guiling': '<S24>:100' */
  /* Transition: '<S24>:110' */
  if (localDW->t4 < rtu_t5) {
    /* Transition: '<S24>:109' */
    localDW->is_zidong = kaiguangai_IN_yanchishijian3;
    localDW->temporalCounter_i1 = 0U;

    /* Entry 'yanchishijian3': '<S24>:108' */
    localDW->t4++;
  } else {
    if (localDW->t4 >= rtu_t5) {
      /* Transition: '<S24>:114' */
      localDW->is_zidong = kaiguangai_IN_on4;

      /* Entry 'on4': '<S24>:113' */
      localB->yjhx = 0.0;
      localB->skhx = 1.0;
    }
  }
}

/* Function for Chart: '<S15>/1#' */
static void kaiguangai_t6guiling(real_T rtu_t7, B_u_kaiguangai_T *localB,
  DW_u_kaiguangai_T *localDW)
{
  /* During 't6guiling': '<S24>:140' */
  /* Transition: '<S24>:141' */
  if (localDW->t6 < rtu_t7) {
    /* Transition: '<S24>:127' */
    localDW->is_zidong = kaiguangai_IN_yanchishijian4;
    localDW->temporalCounter_i1 = 0U;

    /* Entry 'yanchishijian4': '<S24>:126' */
    localDW->t6++;
  } else {
    if (localDW->t6 >= rtu_t7) {
      /* Transition: '<S24>:129' */
      localDW->is_zidong = kaiguangai_IN_on5;

      /* Entry 'on5': '<S24>:131' */
      localB->skhx = 0.0;
      localB->gghx = 1.0;
      localB->ggzhiling1 = 1.0;
      localB->ggzhiling2 = 1.0;
    }
  }
}

/* Function for Chart: '<S15>/1#' */
static void kaiguangai_t8guiling(real_T rtu_t9, B_u_kaiguangai_T *localB,
  DW_u_kaiguangai_T *localDW)
{
  /* During 't8guiling': '<S24>:148' */
  /* Transition: '<S24>:156' */
  if (localDW->t8 < rtu_t9) {
    /* Transition: '<S24>:151' */
    localDW->is_zidong = kaiguangai_IN_yanchishijian5;
    localDW->temporalCounter_i1 = 0U;

    /* Entry 'yanchishijian5': '<S24>:153' */
    localDW->t8++;
  } else {
    if (localDW->t8 >= rtu_t9) {
      /* Transition: '<S24>:169' */
      localDW->is_zidong = kaiguangai_IN_on6;

      /* Entry 'on6': '<S24>:157' */
      localB->gghx = 0.0;
      localB->ggzhiling1 = 0.0;
      localB->ggzhiling2 = 0.0;
      localB->yjhx = 1.0;
    }
  }
}

/* Function for Chart: '<S15>/1#' */
static void kaiguangai_tguiling(real_T rtu_t1, B_u_kaiguangai_T *localB,
  DW_u_kaiguangai_T *localDW)
{
  /* During 'tguiling': '<S24>:52' */
  /* Transition: '<S24>:55' */
  if (localDW->t < rtu_t1) {
    /* Transition: '<S24>:57' */
    localDW->is_zidong = kaiguangai_IN_yanchishijian1;
    localDW->temporalCounter_i1 = 0U;

    /* Entry 'yanchishijian1': '<S24>:56' */
    localDW->t++;
  } else {
    if (localDW->t >= rtu_t1) {
      /* Transition: '<S24>:111' */
      localDW->is_zidong = kaiguangai_IN_on2;

      /* Entry 'on2': '<S24>:60' */
      localB->skhx = 0.0;
      localB->kghx = 1.0;
      localB->kgzhiling1 = 1.0;
      localB->kgzhiling2 = 1.0;
    }
  }
}

/* Function for Chart: '<S15>/1#' */
static void kaiguangai_yajinshijian(real_T rtu_ggdw1, real_T rtu_ggdw2, real_T
  rtu_sddw, real_T rtu_yjdw, B_u_kaiguangai_T *localB, DW_u_kaiguangai_T
  *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'yajinshijian': '<S24>:161' */
  /* Transition: '<S24>:414' */
  if (localB->yjt > 2.0) {
    /* Transition: '<S24>:416' */
    localDW->is_zidong = kaiguangai_IN_on18;

    /* Entry 'on18': '<S24>:413' */
    localB->ggyichang = 1.0;
  } else {
    if (localB->yjt <= 2.0) {
      /* Transition: '<S24>:418' */
      sf_internal_predicateOutput = ((rtu_sddw == 0.0) || (rtu_yjdw == 0.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S24>:158' */
        localDW->is_zidong = kaiguangai_IN_yajinshijian;

        /* Entry 'yajinshijian': '<S24>:161' */
        localB->yjt += 0.002;
      } else {
        sf_internal_predicateOutput = ((rtu_sddw == 1.0) && (rtu_yjdw == 1.0) &&
          (rtu_ggdw1 == 1.0) && (rtu_ggdw2 == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S24>:167' */
          localDW->is_zidong = kaiguangai_IN_t10guiling;

          /* Entry 't10guiling': '<S24>:336' */
          localDW->t10 = 0.0;
        }
      }
    }
  }
}

/* Function for Chart: '<S15>/1#' */
static void kaiguangai_yanchishijian1(real_T rtu_t1, B_u_kaiguangai_T *localB,
  DW_u_kaiguangai_T *localDW)
{
  /* During 'yanchishijian1': '<S24>:56' */
  if (localDW->temporalCounter_i1 >= 500) {
    /* Transition: '<S24>:58' */
    if (localDW->t < rtu_t1) {
      /* Transition: '<S24>:57' */
      localDW->is_zidong = kaiguangai_IN_yanchishijian1;
      localDW->temporalCounter_i1 = 0U;

      /* Entry 'yanchishijian1': '<S24>:56' */
      localDW->t++;
    } else {
      if (localDW->t >= rtu_t1) {
        /* Transition: '<S24>:111' */
        localDW->is_zidong = kaiguangai_IN_on2;

        /* Entry 'on2': '<S24>:60' */
        localB->skhx = 0.0;
        localB->kghx = 1.0;
        localB->kgzhiling1 = 1.0;
        localB->kgzhiling2 = 1.0;
      }
    }
  }
}

/* Function for Chart: '<S15>/1#' */
static void kaiguangai_yanchishijian2(real_T rtu_t3, B_u_kaiguangai_T *localB,
  DW_u_kaiguangai_T *localDW)
{
  /* During 'yanchishijian2': '<S24>:69' */
  if (localDW->temporalCounter_i1 >= 500) {
    /* Transition: '<S24>:80' */
    if (localDW->t2 < rtu_t3) {
      /* Transition: '<S24>:79' */
      localDW->is_zidong = kaiguangai_IN_yanchishijian2;
      localDW->temporalCounter_i1 = 0U;

      /* Entry 'yanchishijian2': '<S24>:69' */
      localDW->t2++;
    } else {
      if (localDW->t2 >= rtu_t3) {
        /* Transition: '<S24>:112' */
        localDW->is_zidong = kaiguangai_IN_on3;

        /* Entry 'on3': '<S24>:81' */
        localB->kghx = 0.0;
        localB->kgzhiling1 = 0.0;
        localB->kgzhiling2 = 0.0;
        localB->yjhx = 1.0;
      }
    }
  }
}

/* Function for Chart: '<S15>/1#' */
static void kaiguangai_yanchishijian3(real_T rtu_t5, B_u_kaiguangai_T *localB,
  DW_u_kaiguangai_T *localDW)
{
  /* During 'yanchishijian3': '<S24>:108' */
  if (localDW->temporalCounter_i1 >= 500) {
    /* Transition: '<S24>:107' */
    if (localDW->t4 < rtu_t5) {
      /* Transition: '<S24>:109' */
      localDW->is_zidong = kaiguangai_IN_yanchishijian3;
      localDW->temporalCounter_i1 = 0U;

      /* Entry 'yanchishijian3': '<S24>:108' */
      localDW->t4++;
    } else {
      if (localDW->t4 >= rtu_t5) {
        /* Transition: '<S24>:114' */
        localDW->is_zidong = kaiguangai_IN_on4;

        /* Entry 'on4': '<S24>:113' */
        localB->yjhx = 0.0;
        localB->skhx = 1.0;
      }
    }
  }
}

/* Function for Chart: '<S15>/1#' */
static void kaiguangai_yanchishijian4(real_T rtu_t7, B_u_kaiguangai_T *localB,
  DW_u_kaiguangai_T *localDW)
{
  /* During 'yanchishijian4': '<S24>:126' */
  if (localDW->temporalCounter_i1 >= 500) {
    /* Transition: '<S24>:128' */
    if (localDW->t6 < rtu_t7) {
      /* Transition: '<S24>:127' */
      localDW->is_zidong = kaiguangai_IN_yanchishijian4;
      localDW->temporalCounter_i1 = 0U;

      /* Entry 'yanchishijian4': '<S24>:126' */
      localDW->t6++;
    } else {
      if (localDW->t6 >= rtu_t7) {
        /* Transition: '<S24>:129' */
        localDW->is_zidong = kaiguangai_IN_on5;

        /* Entry 'on5': '<S24>:131' */
        localB->skhx = 0.0;
        localB->gghx = 1.0;
        localB->ggzhiling1 = 1.0;
        localB->ggzhiling2 = 1.0;
      }
    }
  }
}

/* Function for Chart: '<S15>/1#' */
static void kaiguangai_yanchishijian5(real_T rtu_t9, B_u_kaiguangai_T *localB,
  DW_u_kaiguangai_T *localDW)
{
  /* During 'yanchishijian5': '<S24>:153' */
  if (localDW->temporalCounter_i1 >= 500) {
    /* Transition: '<S24>:155' */
    if (localDW->t8 < rtu_t9) {
      /* Transition: '<S24>:151' */
      localDW->is_zidong = kaiguangai_IN_yanchishijian5;
      localDW->temporalCounter_i1 = 0U;

      /* Entry 'yanchishijian5': '<S24>:153' */
      localDW->t8++;
    } else {
      if (localDW->t8 >= rtu_t9) {
        /* Transition: '<S24>:169' */
        localDW->is_zidong = kaiguangai_IN_on6;

        /* Entry 'on6': '<S24>:157' */
        localB->gghx = 0.0;
        localB->ggzhiling1 = 0.0;
        localB->ggzhiling2 = 0.0;
        localB->yjhx = 1.0;
      }
    }
  }
}

/* Function for Chart: '<S15>/1#' */
static void kaiguangai_enter_atomic_off(B_u_kaiguangai_T *localB)
{
  /* Entry 'off': '<S24>:165' */
  localB->skhx = 0.0;
  localB->kghx = 0.0;
  localB->kgzhiling1 = 0.0;
  localB->kgzhiling2 = 0.0;
  localB->yjhx = 0.0;
  localB->gghx = 0.0;
  localB->ggzhiling1 = 0.0;
  localB->ggzhiling2 = 0.0;
  localB->skt = 0.0;
  localB->kgt = 0.0;
  localB->sdt = 0.0;
  localB->jst = 0.0;
  localB->ggt = 0.0;
  localB->yjt = 0.0;
}

/* Function for Chart: '<S15>/1#' */
static void kaiguangai_zidong(boolean_T rtu_start, real_T rtu_kgdw1, real_T
  rtu_kgdw2, real_T rtu_ggdw1, real_T rtu_ggdw2, real_T rtu_sddw, real_T
  rtu_yjdw, real_T rtu_skdw, real_T rtu_jsdw, real_T rtu_t1, real_T rtu_t3,
  real_T rtu_t5, real_T rtu_t7, real_T rtu_t9, real_T rtu_t11, real_T
  rtu_shedingcishu, real_T rtu_jieshu, B_u_kaiguangai_T *localB,
  DW_u_kaiguangai_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'zidong': '<S24>:374' */
  switch (localDW->is_zidong) {
   case kaiguangai_IN_chushihua:
    /* During 'chushihua': '<S24>:3' */
    sf_internal_predicateOutput = (rtu_start && (rtu_ggdw1 == 1.0) && (rtu_ggdw2
      == 1.0) && (rtu_yjdw == 1.0) && (rtu_sddw == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S24>:181' */
      localDW->is_zidong = kaiguangai_IN_on1;

      /* Entry 'on1': '<S24>:12' */
      localB->skhx = 1.0;
    }
    break;

   case kaiguangai_IN_guangaishijian:
    /* During 'guangaishijian': '<S24>:143' */
    /* Transition: '<S24>:407' */
    if (localB->ggt > 12.0) {
      /* Transition: '<S24>:406' */
      localDW->is_zidong = kaiguangai_IN_on16;

      /* Entry 'on16': '<S24>:400' */
      localB->ggyichang = 1.0;
    } else {
      if (localB->ggt <= 12.0) {
        /* Transition: '<S24>:402' */
        sf_internal_predicateOutput = ((rtu_ggdw1 == 0.0) || (rtu_ggdw2 == 0.0) ||
          (rtu_jsdw == 0.0) || (rtu_skdw == 0.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S24>:144' */
          localDW->is_zidong = kaiguangai_IN_guangaishijian;

          /* Entry 'guangaishijian': '<S24>:143' */
          localB->ggt += 0.002;
        } else {
          sf_internal_predicateOutput = ((rtu_ggdw1 == 1.0) && (rtu_ggdw2 == 1.0)
            && (rtu_jsdw == 1.0) && (rtu_skdw == 1.0));
          if (sf_internal_predicateOutput) {
            /* Transition: '<S24>:145' */
            localDW->is_zidong = kaiguangai_IN_t8guiling;

            /* Entry 't8guiling': '<S24>:148' */
            localDW->t8 = 0.0;
          }
        }
      }
    }
    break;

   case kaiguangai_IN_jiesuoshijian:
    /* During 'jiesuoshijian': '<S24>:116' */
    /* Transition: '<S24>:393' */
    if (localB->jst > 2.0) {
      /* Transition: '<S24>:389' */
      localDW->is_zidong = kaiguangai_IN_on14;

      /* Entry 'on14': '<S24>:394' */
      localB->jsyichang = 1.0;
    } else {
      if (localB->jst <= 2.0) {
        /* Transition: '<S24>:396' */
        sf_internal_predicateOutput = ((rtu_kgdw1 == 0.0) || (rtu_kgdw2 == 0.0) ||
          (rtu_jsdw == 0.0) || (rtu_skdw == 0.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S24>:117' */
          localDW->is_zidong = kaiguangai_IN_jiesuoshijian;

          /* Entry 'jiesuoshijian': '<S24>:116' */
          localB->jst += 0.002;
        } else {
          sf_internal_predicateOutput = ((rtu_kgdw1 == 1.0) && (rtu_kgdw2 == 1.0)
            && (rtu_jsdw == 1.0) && (rtu_skdw == 1.0));
          if (sf_internal_predicateOutput) {
            /* Transition: '<S24>:120' */
            localDW->is_zidong = kaiguangai_IN_t6guiling;

            /* Entry 't6guiling': '<S24>:140' */
            localDW->t6 = 0.0;
          }
        }
      }
    }
    break;

   case kaiguangai_IN_kaigaishijian:
    /* During 'kaigaishijian': '<S24>:62' */
    /* Transition: '<S24>:363' */
    if (localB->kgt > 12.0) {
      /* Transition: '<S24>:364' */
      localDW->is_zidong = kaiguangai_IN_on11;

      /* Entry 'on11': '<S24>:376' */
      localB->kgyichang = 1.0;
    } else {
      if (localB->kgt <= 12.0) {
        /* Transition: '<S24>:359' */
        sf_internal_predicateOutput = ((rtu_kgdw1 == 0.0) || (rtu_kgdw2 == 0.0) ||
          (rtu_jsdw == 0.0) || (rtu_skdw == 0.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S24>:64' */
          localDW->is_zidong = kaiguangai_IN_kaigaishijian;

          /* Entry 'kaigaishijian': '<S24>:62' */
          localB->kgt += 0.002;
        } else {
          sf_internal_predicateOutput = ((rtu_kgdw1 == 1.0) && (rtu_kgdw2 == 1.0)
            && (rtu_jsdw == 1.0) && (rtu_skdw == 1.0));
          if (sf_internal_predicateOutput) {
            /* Transition: '<S24>:84' */
            localDW->is_zidong = kaiguangai_IN_t2guiling;

            /* Entry 't2guiling': '<S24>:83' */
            localDW->t2 = 0.0;
          }
        }
      }
    }
    break;

   case kaiguangai_IN_off_g:
    /* During 'off': '<S24>:165' */
    /* Transition: '<S24>:188' */
    localDW->is_zidong = kaiguangai_IN_on7;

    /* Entry 'on7': '<S24>:170' */
    localB->yikaicishu++;
    break;

   case kaiguangai_IN_on1:
    /* During 'on1': '<S24>:12' */
    /* Transition: '<S24>:49' */
    sf_internal_predicateOutput = ((rtu_jsdw == 0.0) || (rtu_skdw == 0.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S24>:50' */
      localDW->is_zidong = kaiguangai_IN_songkaishijian;

      /* Entry 'songkaishijian': '<S24>:33' */
      localB->skt += 0.002;
    } else {
      sf_internal_predicateOutput = ((rtu_jsdw == 1.0) && (rtu_skdw == 1.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S24>:53' */
        localDW->is_zidong = kaiguangai_IN_tguiling;

        /* Entry 'tguiling': '<S24>:52' */
        localDW->t = 0.0;
      }
    }
    break;

   case kaiguangai_IN_on10:
    /* During 'on10': '<S24>:366' */
    /* Transition: '<S24>:367' */
    localDW->is_zidong = kaiguangai_IN_songkaishijian1;

    /* Entry 'songkaishijian1': '<S24>:355' */
    localB->skt += 0.002;
    break;

   case kaiguangai_IN_on11:
    /* During 'on11': '<S24>:376' */
    /* Transition: '<S24>:377' */
    localDW->is_zidong = kaiguangai_IN_songkaishijian2;

    /* Entry 'songkaishijian2': '<S24>:365' */
    localB->kgt += 0.002;
    break;

   case kaiguangai_IN_on12:
    /* During 'on12': '<S24>:378' */
    /* Transition: '<S24>:380' */
    localDW->is_zidong = kaiguangai_IN_songkaishijian3;

    /* Entry 'songkaishijian3': '<S24>:387' */
    localB->sdt += 0.002;
    break;

   case kaiguangai_IN_on13:
    /* During 'on13': '<S24>:381' */
    break;

   case kaiguangai_IN_on14:
    /* During 'on14': '<S24>:394' */
    /* Transition: '<S24>:388' */
    localDW->is_zidong = kaiguangai_IN_songkaishijian4;

    /* Entry 'songkaishijian4': '<S24>:392' */
    localB->jst += 0.002;
    break;

   case kaiguangai_IN_on15:
    /* During 'on15': '<S24>:398' */
    break;

   case kaiguangai_IN_on16:
    /* During 'on16': '<S24>:400' */
    /* Transition: '<S24>:405' */
    localDW->is_zidong = kaiguangai_IN_songkaishijian5;

    /* Entry 'songkaishijian5': '<S24>:404' */
    localB->ggt += 0.002;
    break;

   case kaiguangai_IN_on17:
    /* During 'on17': '<S24>:401' */
    break;

   case kaiguangai_IN_on18:
    /* During 'on18': '<S24>:413' */
    /* Transition: '<S24>:412' */
    localDW->is_zidong = kaiguangai_IN_songkaishijian6;

    /* Entry 'songkaishijian6': '<S24>:417' */
    localB->yjt += 0.002;
    break;

   case kaiguangai_IN_on19:
    /* During 'on19': '<S24>:415' */
    break;

   case kaiguangai_IN_on2:
    /* During 'on2': '<S24>:60' */
    /* Transition: '<S24>:87' */
    sf_internal_predicateOutput = ((rtu_kgdw1 == 0.0) || (rtu_kgdw2 == 0.0) ||
      (rtu_jsdw == 0.0) || (rtu_skdw == 0.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S24>:64' */
      localDW->is_zidong = kaiguangai_IN_kaigaishijian;

      /* Entry 'kaigaishijian': '<S24>:62' */
      localB->kgt += 0.002;
    } else {
      sf_internal_predicateOutput = ((rtu_kgdw1 == 1.0) && (rtu_kgdw2 == 1.0) &&
        (rtu_jsdw == 1.0) && (rtu_skdw == 1.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S24>:84' */
        localDW->is_zidong = kaiguangai_IN_t2guiling;

        /* Entry 't2guiling': '<S24>:83' */
        localDW->t2 = 0.0;
      }
    }
    break;

   case kaiguangai_IN_on3:
    /* During 'on3': '<S24>:81' */
    /* Transition: '<S24>:103' */
    sf_internal_predicateOutput = ((rtu_kgdw1 == 0.0) || (rtu_kgdw2 == 0.0) ||
      (rtu_sddw == 0.0) || (rtu_yjdw == 0.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S24>:99' */
      localDW->is_zidong = kaiguangai_IN_suodingshijian;

      /* Entry 'suodingshijian': '<S24>:97' */
      localB->sdt += 0.002;
    } else {
      sf_internal_predicateOutput = ((rtu_kgdw1 == 1.0) && (rtu_kgdw2 == 1.0) &&
        (rtu_sddw == 1.0) && (rtu_yjdw == 1.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S24>:101' */
        localDW->is_zidong = kaiguangai_IN_t4guiling;

        /* Entry 't4guiling': '<S24>:100' */
        localDW->t4 = 0.0;
      }
    }
    break;

   case kaiguangai_IN_on4:
    kaiguangai_on4(rtu_kgdw1, rtu_kgdw2, rtu_skdw, rtu_jsdw, localB, localDW);
    break;

   case kaiguangai_IN_on5:
    kaiguangai_on5(rtu_ggdw1, rtu_ggdw2, rtu_skdw, rtu_jsdw, localB, localDW);
    break;

   case kaiguangai_IN_on6:
    kaiguangai_on6(rtu_ggdw1, rtu_ggdw2, rtu_sddw, rtu_yjdw, localB, localDW);
    break;

   case kaiguangai_IN_on7:
    kaiguangai_on7(rtu_shedingcishu, rtu_jieshu, localB, localDW);
    break;

   case kaiguangai_IN_on8:
    /* During 'on8': '<S24>:352' */
    break;

   case kaiguangai_IN_on9:
    /* During 'on9': '<S24>:358' */
    break;

   case kaiguangai_IN_songkaishijian:
    kaiguangai_songkaishijian(rtu_skdw, rtu_jsdw, localB, localDW);
    break;

   case kaiguangai_IN_songkaishijian1:
    kaiguangai_songkaishijian1(rtu_skdw, rtu_jsdw, localB, localDW);
    break;

   case kaiguangai_IN_songkaishijian2:
    kaiguangai_songkaishijian2(rtu_kgdw1, rtu_kgdw2, rtu_skdw, rtu_jsdw, localB,
      localDW);
    break;

   case kaiguangai_IN_songkaishijian3:
    kaiguangai_songkaishijian3(rtu_kgdw1, rtu_kgdw2, rtu_sddw, rtu_yjdw,
      rtu_skdw, rtu_jsdw, localB, localDW);
    break;

   case kaiguangai_IN_songkaishijian4:
    kaiguangai_songkaishijian4(rtu_kgdw1, rtu_kgdw2, rtu_skdw, rtu_jsdw, localB,
      localDW);
    break;

   case kaiguangai_IN_songkaishijian5:
    kaiguangai_songkaishijian5(rtu_ggdw1, rtu_ggdw2, rtu_skdw, rtu_jsdw, localB,
      localDW);
    break;

   case kaiguangai_IN_songkaishijian6:
    kaiguangai_songkaishijian6(rtu_ggdw1, rtu_ggdw2, rtu_sddw, rtu_yjdw, localB,
      localDW);
    break;

   case kaiguangai_IN_start:
    /* During 'start': '<S24>:197' */
    if (rtu_start) {
      /* Transition: '<S24>:198' */
      localDW->is_zidong = kaiguangai_IN_chushihua;
      kaiguang_enter_atomic_chushihua(localB);
    }
    break;

   case kaiguangai_IN_stop:
    /* During 'stop': '<S24>:193' */
    break;

   case kaiguangai_IN_suodingshijian:
    kaiguangai_suodingshijian(rtu_kgdw1, rtu_kgdw2, rtu_sddw, rtu_yjdw, localB,
      localDW);
    break;

   case kaiguangai_IN_t10guiling:
    /* During 't10guiling': '<S24>:336' */
    /* Transition: '<S24>:340' */
    if (localDW->t10 < rtu_t11) {
      /* Transition: '<S24>:341' */
      localDW->is_zidong = kaiguangai_IN_yanchishijian6;
      localDW->temporalCounter_i1 = 0U;

      /* Entry 'yanchishijian6': '<S24>:337' */
      localDW->t10++;
    } else {
      if (localDW->t10 >= rtu_t11) {
        /* Transition: '<S24>:342' */
        localDW->is_zidong = kaiguangai_IN_off_g;
        kaiguangai_enter_atomic_off(localB);
      }
    }
    break;

   case kaiguangai_IN_t2guiling:
    kaiguangai_t2guiling(rtu_t3, localB, localDW);
    break;

   case kaiguangai_IN_t4guiling:
    kaiguangai_t4guiling(rtu_t5, localB, localDW);
    break;

   case kaiguangai_IN_t6guiling:
    kaiguangai_t6guiling(rtu_t7, localB, localDW);
    break;

   case kaiguangai_IN_t8guiling:
    kaiguangai_t8guiling(rtu_t9, localB, localDW);
    break;

   case kaiguangai_IN_tguiling:
    kaiguangai_tguiling(rtu_t1, localB, localDW);
    break;

   case kaiguangai_IN_yajinshijian:
    kaiguangai_yajinshijian(rtu_ggdw1, rtu_ggdw2, rtu_sddw, rtu_yjdw, localB,
      localDW);
    break;

   case kaiguangai_IN_yanchishijian1:
    kaiguangai_yanchishijian1(rtu_t1, localB, localDW);
    break;

   case kaiguangai_IN_yanchishijian2:
    kaiguangai_yanchishijian2(rtu_t3, localB, localDW);
    break;

   case kaiguangai_IN_yanchishijian3:
    kaiguangai_yanchishijian3(rtu_t5, localB, localDW);
    break;

   case kaiguangai_IN_yanchishijian4:
    kaiguangai_yanchishijian4(rtu_t7, localB, localDW);
    break;

   case kaiguangai_IN_yanchishijian5:
    kaiguangai_yanchishijian5(rtu_t9, localB, localDW);
    break;

   default:
    /* During 'yanchishijian6': '<S24>:337' */
    if (localDW->temporalCounter_i1 >= 500) {
      /* Transition: '<S24>:343' */
      if (localDW->t10 < rtu_t11) {
        /* Transition: '<S24>:341' */
        localDW->is_zidong = kaiguangai_IN_yanchishijian6;
        localDW->temporalCounter_i1 = 0U;

        /* Entry 'yanchishijian6': '<S24>:337' */
        localDW->t10++;
      } else {
        if (localDW->t10 >= rtu_t11) {
          /* Transition: '<S24>:342' */
          localDW->is_zidong = kaiguangai_IN_off_g;
          kaiguangai_enter_atomic_off(localB);
        }
      }
    }
    break;
  }
}

/*
 * System initialize for atomic system:
 *    '<S15>/1#'
 *    '<S15>/1#1'
 *    '<S15>/1#2'
 *    '<S15>/1#3'
 *    '<S15>/1#4'
 *    '<S15>/1#5'
 *    '<S15>/1#6'
 *    '<S15>/1#7'
 */
void kaiguangai_u_Init(DW_u_kaiguangai_T *localDW)
{
  localDW->sfEvent = kaiguangai_CALL_EVENT_j;
  localDW->is_zidong = kaiguangai_IN_NO_ACTIVE_CHILD_m;
  localDW->temporalCounter_i1 = 0U;
  localDW->is_active_c1_kaiguangai = 0U;
  localDW->is_c1_kaiguangai = kaiguangai_IN_NO_ACTIVE_CHILD_m;
}

/*
 * Output and update for atomic system:
 *    '<S15>/1#'
 *    '<S15>/1#1'
 *    '<S15>/1#2'
 *    '<S15>/1#3'
 *    '<S15>/1#4'
 *    '<S15>/1#5'
 *    '<S15>/1#6'
 *    '<S15>/1#7'
 */
void kaiguangai_u(boolean_T rtu_start, real_T rtu_kgdw1, real_T rtu_kgdw2,
                  real_T rtu_ggdw1, real_T rtu_ggdw2, real_T rtu_sddw, real_T
                  rtu_yjdw, real_T rtu_skdw, real_T rtu_jsdw, real_T rtu_t1,
                  real_T rtu_t3, real_T rtu_t5, real_T rtu_t7, real_T rtu_t9,
                  real_T rtu_t11, real_T rtu_shedingcishu, real_T rtu_jieshu,
                  B_u_kaiguangai_T *localB, DW_u_kaiguangai_T *localDW)
{
  /* Gateway: Subsystem1/zidong/1# */
  localDW->sfEvent = kaiguangai_CALL_EVENT_j;
  if (localDW->temporalCounter_i1 < 511U) {
    localDW->temporalCounter_i1++;
  }

  /* During: Subsystem1/zidong/1# */
  if (localDW->is_active_c1_kaiguangai == 0U) {
    /* Entry: Subsystem1/zidong/1# */
    localDW->is_active_c1_kaiguangai = 1U;

    /* Entry Internal: Subsystem1/zidong/1# */
    /* Transition: '<S24>:375' */
    localDW->is_c1_kaiguangai = kaiguangai_IN_zidong;

    /* Entry Internal 'zidong': '<S24>:374' */
    /* Transition: '<S24>:199' */
    localDW->is_zidong = kaiguangai_IN_start;

    /* Entry 'start': '<S24>:197' */
    localB->yikaicishu = 0.0;
  } else {
    kaiguangai_zidong(rtu_start, rtu_kgdw1, rtu_kgdw2, rtu_ggdw1, rtu_ggdw2,
                      rtu_sddw, rtu_yjdw, rtu_skdw, rtu_jsdw, rtu_t1, rtu_t3,
                      rtu_t5, rtu_t7, rtu_t9, rtu_t11, rtu_shedingcishu,
                      rtu_jieshu, localB, localDW);
  }
}

/* Function for Chart: '<S7>/jinjichuli' */
static void kaiguangai_exit_internal_MANUAL(DW_jinjichuli_kaiguangai_T *localDW)
{
  /* Exit Internal 'MANUAL': '<S34>:3' */
  /* Exit Internal 'jiesuo': '<S34>:246' */
  localDW->is_jiesuo = kaiguangai_IN_NO_ACTIVE_CHILD_a;
  localDW->is_active_jiesuo = 0U;

  /* Exit Internal 'suoding': '<S34>:243' */
  localDW->is_suoding = kaiguangai_IN_NO_ACTIVE_CHILD_a;
  localDW->is_active_suoding = 0U;

  /* Exit Internal 'yajin': '<S34>:214' */
  localDW->is_yajin = kaiguangai_IN_NO_ACTIVE_CHILD_a;
  localDW->is_active_yajin = 0U;

  /* Exit Internal 'songkai': '<S34>:208' */
  localDW->is_songkai = kaiguangai_IN_NO_ACTIVE_CHILD_a;
  localDW->is_active_songkai = 0U;

  /* Exit Internal 'guangai': '<S34>:202' */
  localDW->is_guangai = kaiguangai_IN_NO_ACTIVE_CHILD_a;
  localDW->is_active_guangai = 0U;

  /* Exit Internal 'kaigai': '<S34>:7' */
  localDW->is_kaigai = kaiguangai_IN_NO_ACTIVE_CHILD_a;
  localDW->is_active_kaigai = 0U;
}

/*
 * System initialize for atomic system:
 *    '<S7>/jinjichuli'
 *    '<S7>/jinjichuli1'
 *    '<S7>/jinjichuli2'
 *    '<S7>/jinjichuli3'
 *    '<S7>/jinjichuli4'
 *    '<S7>/jinjichuli5'
 *    '<S7>/jinjichuli6'
 *    '<S7>/jinjichuli7'
 */
void kaiguangai_jinjichuli_Init(B_jinjichuli_kaiguangai_T *localB,
  DW_jinjichuli_kaiguangai_T *localDW)
{
  localDW->sfEvent = kaiguangai_CALL_EVENT_o;
  localDW->is_active_guangai = 0U;
  localDW->is_guangai = kaiguangai_IN_NO_ACTIVE_CHILD_a;
  localDW->is_active_jiesuo = 0U;
  localDW->is_jiesuo = kaiguangai_IN_NO_ACTIVE_CHILD_a;
  localDW->is_active_kaigai = 0U;
  localDW->is_kaigai = kaiguangai_IN_NO_ACTIVE_CHILD_a;
  localDW->is_active_songkai = 0U;
  localDW->is_songkai = kaiguangai_IN_NO_ACTIVE_CHILD_a;
  localDW->is_active_suoding = 0U;
  localDW->is_suoding = kaiguangai_IN_NO_ACTIVE_CHILD_a;
  localDW->is_active_yajin = 0U;
  localDW->is_yajin = kaiguangai_IN_NO_ACTIVE_CHILD_a;
  localDW->temporalCounter_i1 = 0U;
  localDW->is_active_c18_kaiguangai = 0U;
  localDW->is_c18_kaiguangai = kaiguangai_IN_NO_ACTIVE_CHILD_a;
  localB->skhx = 0.0;
  localB->kghx = 0.0;
  localB->yjhx = 0.0;
  localB->gghx = 0.0;
}

/*
 * Output and update for atomic system:
 *    '<S7>/jinjichuli'
 *    '<S7>/jinjichuli1'
 *    '<S7>/jinjichuli2'
 *    '<S7>/jinjichuli3'
 *    '<S7>/jinjichuli4'
 *    '<S7>/jinjichuli5'
 *    '<S7>/jinjichuli6'
 *    '<S7>/jinjichuli7'
 */
void kaiguangai_jinjichuli(real_T rtu_tiaoshi, real_T rtu_songkai, real_T
  rtu_kaigai, real_T rtu_suoding, real_T rtu_jiesuo, real_T rtu_guangai, real_T
  rtu_yajin, real_T rtu_jiting, B_jinjichuli_kaiguangai_T *localB,
  DW_jinjichuli_kaiguangai_T *localDW)
{
  /* Gateway: tiaoshimoshi/jinjichuli */
  localDW->sfEvent = kaiguangai_CALL_EVENT_o;
  if (localDW->temporalCounter_i1 < 511U) {
    localDW->temporalCounter_i1++;
  }

  /* During: tiaoshimoshi/jinjichuli */
  if (localDW->is_active_c18_kaiguangai == 0U) {
    /* Entry: tiaoshimoshi/jinjichuli */
    localDW->is_active_c18_kaiguangai = 1U;

    /* Entry Internal: tiaoshimoshi/jinjichuli */
    /* Transition: '<S34>:57' */
    localDW->is_c18_kaiguangai = kaiguangai_IN_off1_c;
  } else {
    switch (localDW->is_c18_kaiguangai) {
     case kaiguangai_IN_MANUAL:
      /* During 'MANUAL': '<S34>:3' */
      if (rtu_jiting == 1.0) {
        /* Transition: '<S34>:98' */
        kaiguangai_exit_internal_MANUAL(localDW);
        localDW->is_c18_kaiguangai = kaiguangai_IN_end;

        /* Entry 'end': '<S34>:43' */
        localB->skhx = 0.0;
        localB->kghx = 0.0;
        localB->yjhx = 0.0;
        localB->gghx = 0.0;
      } else {
        /* During 'kaigai': '<S34>:7' */
        if (localDW->is_kaigai == kaiguangai_IN_A) {
          /* During 'A': '<S34>:11' */
          if (rtu_kaigai == 1.0) {
            /* Transition: '<S34>:69' */
            localDW->is_kaigai = kaiguangai_IN_on_g;

            /* Entry 'on': '<S34>:15' */
            localB->kghx = 1.0;
          }
        } else {
          /* During 'on': '<S34>:15' */
          if (rtu_kaigai == 0.0) {
            /* Transition: '<S34>:65' */
            localDW->is_kaigai = kaiguangai_IN_A;

            /* Entry 'A': '<S34>:11' */
            localB->kghx = 0.0;
          }
        }

        /* During 'guangai': '<S34>:202' */
        if (localDW->is_guangai == kaiguangai_IN_A) {
          /* During 'A': '<S34>:201' */
          if (rtu_guangai == 1.0) {
            /* Transition: '<S34>:197' */
            localDW->is_guangai = kaiguangai_IN_on_g;

            /* Entry 'on': '<S34>:200' */
            localB->gghx = 1.0;
          }
        } else {
          /* During 'on': '<S34>:200' */
          if (rtu_guangai == 0.0) {
            /* Transition: '<S34>:198' */
            localDW->is_guangai = kaiguangai_IN_A;

            /* Entry 'A': '<S34>:201' */
            localB->gghx = 0.0;
          }
        }

        /* During 'songkai': '<S34>:208' */
        if (localDW->is_songkai == kaiguangai_IN_A) {
          /* During 'A': '<S34>:207' */
          if (rtu_songkai == 1.0) {
            /* Transition: '<S34>:203' */
            localDW->is_songkai = kaiguangai_IN_on_g;

            /* Entry 'on': '<S34>:204' */
            localB->skhx = 1.0;
          }
        } else {
          /* During 'on': '<S34>:204' */
          if (rtu_songkai == 0.0) {
            /* Transition: '<S34>:205' */
            localDW->is_songkai = kaiguangai_IN_A;

            /* Entry 'A': '<S34>:207' */
            localB->skhx = 0.0;
          }
        }

        /* During 'yajin': '<S34>:214' */
        if (localDW->is_yajin == kaiguangai_IN_A) {
          /* During 'A': '<S34>:210' */
          if (rtu_yajin == 1.0) {
            /* Transition: '<S34>:209' */
            localDW->is_yajin = kaiguangai_IN_on_g;

            /* Entry 'on': '<S34>:213' */
            localB->yjhx = 1.0;
          }
        } else {
          /* During 'on': '<S34>:213' */
          if (rtu_yajin == 0.0) {
            /* Transition: '<S34>:211' */
            localDW->is_yajin = kaiguangai_IN_A;

            /* Entry 'A': '<S34>:210' */
            localB->yjhx = 0.0;
          }
        }

        /* During 'suoding': '<S34>:243' */
        if (localDW->is_suoding == kaiguangai_IN_A) {
          /* During 'A': '<S34>:244' */
          if (rtu_suoding == 1.0) {
            /* Transition: '<S34>:239' */
            localDW->is_suoding = kaiguangai_IN_on_g;

            /* Entry 'on': '<S34>:242' */
            localB->yjhx = 1.0;
          }
        } else {
          /* During 'on': '<S34>:242' */
          if (rtu_suoding == 0.0) {
            /* Transition: '<S34>:240' */
            localDW->is_suoding = kaiguangai_IN_A;

            /* Entry 'A': '<S34>:244' */
            localB->yjhx = 0.0;
          }
        }

        /* During 'jiesuo': '<S34>:246' */
        if (localDW->is_jiesuo == kaiguangai_IN_A) {
          /* During 'A': '<S34>:247' */
          if (rtu_jiesuo == 1.0) {
            /* Transition: '<S34>:245' */
            localDW->is_jiesuo = kaiguangai_IN_on_g;

            /* Entry 'on': '<S34>:250' */
            localB->skhx = 1.0;
          }
        } else {
          /* During 'on': '<S34>:250' */
          if (rtu_jiesuo == 0.0) {
            /* Transition: '<S34>:248' */
            localDW->is_jiesuo = kaiguangai_IN_A;

            /* Entry 'A': '<S34>:247' */
            localB->skhx = 0.0;
          }
        }
      }
      break;

     case kaiguangai_IN_end:
      /* During 'end': '<S34>:43' */
      break;

     case kaiguangai_IN_off1_c:
      /* During 'off1': '<S34>:2' */
      if (rtu_tiaoshi == 1.0) {
        /* Transition: '<S34>:56' */
        localDW->is_c18_kaiguangai = kaiguangai_IN_on1_e;
        localDW->temporalCounter_i1 = 0U;

        /* Entry 'on1': '<S34>:1' */
        localB->skhx = 0.0;
        localB->kghx = 0.0;
        localB->yjhx = 0.0;
        localB->gghx = 0.0;
      }
      break;

     default:
      /* During 'on1': '<S34>:1' */
      if (localDW->temporalCounter_i1 >= 500) {
        /* Transition: '<S34>:97' */
        localDW->is_c18_kaiguangai = kaiguangai_IN_MANUAL;

        /* Entry Internal 'MANUAL': '<S34>:3' */
        localDW->is_active_kaigai = 1U;

        /* Entry Internal 'kaigai': '<S34>:7' */
        /* Transition: '<S34>:61' */
        localDW->is_kaigai = kaiguangai_IN_A;

        /* Entry 'A': '<S34>:11' */
        localB->kghx = 0.0;
        localDW->is_active_guangai = 1U;

        /* Entry Internal 'guangai': '<S34>:202' */
        /* Transition: '<S34>:199' */
        localDW->is_guangai = kaiguangai_IN_A;

        /* Entry 'A': '<S34>:201' */
        localB->gghx = 0.0;
        localDW->is_active_songkai = 1U;

        /* Entry Internal 'songkai': '<S34>:208' */
        /* Transition: '<S34>:206' */
        localDW->is_songkai = kaiguangai_IN_A;

        /* Entry 'A': '<S34>:207' */
        localDW->is_active_yajin = 1U;

        /* Entry Internal 'yajin': '<S34>:214' */
        /* Transition: '<S34>:212' */
        localDW->is_yajin = kaiguangai_IN_A;

        /* Entry 'A': '<S34>:210' */
        localDW->is_active_suoding = 1U;

        /* Entry Internal 'suoding': '<S34>:243' */
        /* Transition: '<S34>:241' */
        localDW->is_suoding = kaiguangai_IN_A;

        /* Entry 'A': '<S34>:244' */
        localB->yjhx = 0.0;
        localDW->is_active_jiesuo = 1U;

        /* Entry Internal 'jiesuo': '<S34>:246' */
        /* Transition: '<S34>:249' */
        localDW->is_jiesuo = kaiguangai_IN_A;

        /* Entry 'A': '<S34>:247' */
        localB->skhx = 0.0;
      }
      break;
    }
  }
}

/* Function for Chart: '<S14>/Chart' */
static void kaiguangai_songkai_c(void)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'songkai': '<S16>:1' */
  switch (kaiguangai_DW.is_songkai) {
   case kaiguangai_IN_off_o:
    /* During 'off': '<S16>:15' */
    sf_internal_predicateOutput = ((kaiguangai_B.Product_g[0] == 1.0) &&
      (kaiguangai_B.DataTypeConversion5[0] == 1.0) &&
      (kaiguangai_B.DataTypeConversion4[0] == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S16>:18' */
      kaiguangai_DW.is_songkai = kaiguangai_IN_on_l;

      /* Entry 'on': '<S16>:17' */
      kaiguangai_B.skhx = 1.0;
      kaiguangai_B.skt = 0.0;
      kaiguangai_B.skyichang = 0.0;
    }
    break;

   case kaiguangai_IN_on_l:
    /* During 'on': '<S16>:17' */
    /* Transition: '<S16>:20' */
    if (kaiguangai_B.DataTypeConversion5[8] == 0.0) {
      /* Transition: '<S16>:22' */
      kaiguangai_DW.is_songkai = kaiguangai_IN_t_f;
      kaiguangai_DW.temporalCounter_i1 = 0U;

      /* Entry 't': '<S16>:21' */
      kaiguangai_B.skt += 0.002;
    } else {
      sf_internal_predicateOutput = ((kaiguangai_B.DataTypeConversion5[8] == 1.0)
        && (kaiguangai_B.DataTypeConversion4[8] == 1.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S16>:23' */
        kaiguangai_DW.is_songkai = kaiguangai_IN_off_o;

        /* Entry 'off': '<S16>:15' */
        kaiguangai_B.skhx = 0.0;
      } else {
        if (kaiguangai_B.skt > 2.0) {
          /* Transition: '<S16>:128' */
          kaiguangai_DW.is_songkai = kaiguangai_IN_t2_o;

          /* Entry 't2': '<S16>:130' */
          kaiguangai_B.skt += 0.002;
          kaiguangai_B.skyichang = 1.0;
        }
      }
    }
    break;

   case kaiguangai_IN_t_f:
    /* During 't': '<S16>:21' */
    if (kaiguangai_DW.temporalCounter_i1 >= 1) {
      /* Transition: '<S16>:24' */
      if (kaiguangai_B.DataTypeConversion5[8] == 0.0) {
        /* Transition: '<S16>:22' */
        kaiguangai_DW.is_songkai = kaiguangai_IN_t_f;
        kaiguangai_DW.temporalCounter_i1 = 0U;

        /* Entry 't': '<S16>:21' */
        kaiguangai_B.skt += 0.002;
      } else {
        sf_internal_predicateOutput = ((kaiguangai_B.DataTypeConversion5[8] ==
          1.0) && (kaiguangai_B.DataTypeConversion4[8] == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S16>:23' */
          kaiguangai_DW.is_songkai = kaiguangai_IN_off_o;

          /* Entry 'off': '<S16>:15' */
          kaiguangai_B.skhx = 0.0;
        } else {
          if (kaiguangai_B.skt > 2.0) {
            /* Transition: '<S16>:128' */
            kaiguangai_DW.is_songkai = kaiguangai_IN_t2_o;

            /* Entry 't2': '<S16>:130' */
            kaiguangai_B.skt += 0.002;
            kaiguangai_B.skyichang = 1.0;
          }
        }
      }
    }
    break;

   default:
    /* During 't2': '<S16>:130' */
    if (kaiguangai_B.DataTypeConversion5[8] == 0.0) {
      /* Transition: '<S16>:134' */
      kaiguangai_DW.is_songkai = kaiguangai_IN_t2_o;

      /* Entry 't2': '<S16>:130' */
      kaiguangai_B.skt += 0.002;
      kaiguangai_B.skyichang = 1.0;
    } else {
      sf_internal_predicateOutput = ((kaiguangai_B.DataTypeConversion4[8] == 1.0)
        && (kaiguangai_B.DataTypeConversion5[8] == 1.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S16>:135' */
        kaiguangai_DW.is_songkai = kaiguangai_IN_off_o;

        /* Entry 'off': '<S16>:15' */
        kaiguangai_B.skhx = 0.0;
      }
    }
    break;
  }
}

/* Function for Chart: '<S14>/Chart' */
static void kaiguangai_kaigai_l(void)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'kaigai': '<S16>:32' */
  switch (kaiguangai_DW.is_kaigai) {
   case kaiguangai_IN_off_o:
    /* During 'off': '<S16>:33' */
    sf_internal_predicateOutput = ((kaiguangai_B.Product_g[1] == 1.0) &&
      (kaiguangai_B.DataTypeConversion5[8] == 1.0) &&
      (kaiguangai_B.DataTypeConversion4[8] == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S16>:36' */
      kaiguangai_DW.is_kaigai = kaiguangai_IN_on_l;

      /* Entry 'on': '<S16>:37' */
      kaiguangai_B.kghx = 1.0;
      kaiguangai_B.kgzhiling1 = 1.0;
      kaiguangai_B.kgzhiling2 = 1.0;
      kaiguangai_B.kgyichang = 0.0;
      kaiguangai_B.kgt = 0.0;
    }
    break;

   case kaiguangai_IN_on_l:
    /* During 'on': '<S16>:37' */
    /* Transition: '<S16>:38' */
    sf_internal_predicateOutput = ((kaiguangai_B.DataTypeConversion1[0] == 0.0) &&
      (kaiguangai_B.DataTypeConversion2[0] == 0.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S16>:40' */
      kaiguangai_DW.is_kaigai = kaiguangai_IN_t_f;
      kaiguangai_DW.temporalCounter_i2 = 0U;

      /* Entry 't': '<S16>:41' */
      kaiguangai_B.kgt += 0.002;
    } else {
      sf_internal_predicateOutput = ((kaiguangai_B.DataTypeConversion1[0] == 1.0)
        && (kaiguangai_B.DataTypeConversion2[0] == 1.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S16>:35' */
        kaiguangai_DW.is_kaigai = kaiguangai_IN_off_o;

        /* Entry 'off': '<S16>:33' */
        kaiguangai_B.kghx = 0.0;
        kaiguangai_B.kgzhiling1 = 0.0;
        kaiguangai_B.kgzhiling2 = 0.0;
      } else {
        if (kaiguangai_B.kgt > 12.0) {
          /* Transition: '<S16>:138' */
          kaiguangai_DW.is_kaigai = kaiguangai_IN_t1_n;

          /* Entry 't1': '<S16>:141' */
          kaiguangai_B.kgyichang = 1.0;
        }
      }
    }
    break;

   case kaiguangai_IN_t_f:
    /* During 't': '<S16>:41' */
    if (kaiguangai_DW.temporalCounter_i2 >= 1) {
      /* Transition: '<S16>:42' */
      sf_internal_predicateOutput = ((kaiguangai_B.DataTypeConversion1[0] == 0.0)
        && (kaiguangai_B.DataTypeConversion2[0] == 0.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S16>:40' */
        kaiguangai_DW.is_kaigai = kaiguangai_IN_t_f;
        kaiguangai_DW.temporalCounter_i2 = 0U;

        /* Entry 't': '<S16>:41' */
        kaiguangai_B.kgt += 0.002;
      } else {
        sf_internal_predicateOutput = ((kaiguangai_B.DataTypeConversion1[0] ==
          1.0) && (kaiguangai_B.DataTypeConversion2[0] == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S16>:35' */
          kaiguangai_DW.is_kaigai = kaiguangai_IN_off_o;

          /* Entry 'off': '<S16>:33' */
          kaiguangai_B.kghx = 0.0;
          kaiguangai_B.kgzhiling1 = 0.0;
          kaiguangai_B.kgzhiling2 = 0.0;
        } else {
          if (kaiguangai_B.kgt > 12.0) {
            /* Transition: '<S16>:138' */
            kaiguangai_DW.is_kaigai = kaiguangai_IN_t1_n;

            /* Entry 't1': '<S16>:141' */
            kaiguangai_B.kgyichang = 1.0;
          }
        }
      }
    }
    break;

   case kaiguangai_IN_t1_n:
    /* During 't1': '<S16>:141' */
    /* Transition: '<S16>:140' */
    kaiguangai_DW.is_kaigai = kaiguangai_IN_t2_om;

    /* Entry 't2': '<S16>:137' */
    kaiguangai_B.kgt += 0.002;
    break;

   default:
    /* During 't2': '<S16>:137' */
    sf_internal_predicateOutput = ((kaiguangai_B.DataTypeConversion1[0] == 0.0) &&
      (kaiguangai_B.DataTypeConversion2[0] == 0.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S16>:136' */
      kaiguangai_DW.is_kaigai = kaiguangai_IN_t2_om;

      /* Entry 't2': '<S16>:137' */
      kaiguangai_B.kgt += 0.002;
    } else {
      sf_internal_predicateOutput = ((kaiguangai_B.DataTypeConversion1[0] == 1.0)
        && (kaiguangai_B.DataTypeConversion2[0] == 1.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S16>:139' */
        kaiguangai_DW.is_kaigai = kaiguangai_IN_off_o;

        /* Entry 'off': '<S16>:33' */
        kaiguangai_B.kghx = 0.0;
        kaiguangai_B.kgzhiling1 = 0.0;
        kaiguangai_B.kgzhiling2 = 0.0;
      }
    }
    break;
  }
}

/* Function for Chart: '<S14>/Chart' */
static void kaiguangai_suoding_o(void)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'suoding': '<S16>:53' */
  switch (kaiguangai_DW.is_suoding) {
   case kaiguangai_IN_off_o:
    /* During 'off': '<S16>:43' */
    sf_internal_predicateOutput = ((kaiguangai_B.Product_g[2] == 1.0) &&
      (kaiguangai_B.DataTypeConversion5[8] == 1.0) &&
      (kaiguangai_B.DataTypeConversion4[8] == 1.0) &&
      (kaiguangai_B.DataTypeConversion1[0] == 1.0) &&
      (kaiguangai_B.DataTypeConversion2[0] == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S16>:46' */
      kaiguangai_DW.is_suoding = kaiguangai_IN_on_l;

      /* Entry 'on': '<S16>:50' */
      kaiguangai_B.yjhx = 1.0;
      kaiguangai_B.sdyichang = 0.0;
      kaiguangai_B.sdt = 0.0;
    }
    break;

   case kaiguangai_IN_on_l:
    /* During 'on': '<S16>:50' */
    /* Transition: '<S16>:49' */
    sf_internal_predicateOutput = ((kaiguangai_B.DataTypeConversion4[0] == 0.0) &&
      (kaiguangai_B.DataTypeConversion5[0] == 0.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S16>:47' */
      kaiguangai_DW.is_suoding = kaiguangai_IN_t_f;
      kaiguangai_DW.temporalCounter_i4 = 0U;

      /* Entry 't': '<S16>:52' */
      kaiguangai_B.sdt += 0.002;
    } else {
      sf_internal_predicateOutput = ((kaiguangai_B.DataTypeConversion4[0] == 1.0)
        && (kaiguangai_B.DataTypeConversion5[0] == 1.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S16>:45' */
        kaiguangai_DW.is_suoding = kaiguangai_IN_off_o;

        /* Entry 'off': '<S16>:43' */
        kaiguangai_B.yjhx = 0.0;
      } else {
        if (kaiguangai_B.sdt > 2.0) {
          /* Transition: '<S16>:144' */
          kaiguangai_DW.is_suoding = kaiguangai_IN_t1_n;

          /* Entry 't1': '<S16>:147' */
          kaiguangai_B.sdyichang = 1.0;
        }
      }
    }
    break;

   case kaiguangai_IN_t_f:
    /* During 't': '<S16>:52' */
    if (kaiguangai_DW.temporalCounter_i4 >= 1) {
      /* Transition: '<S16>:51' */
      sf_internal_predicateOutput = ((kaiguangai_B.DataTypeConversion4[0] == 0.0)
        && (kaiguangai_B.DataTypeConversion5[0] == 0.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S16>:47' */
        kaiguangai_DW.is_suoding = kaiguangai_IN_t_f;
        kaiguangai_DW.temporalCounter_i4 = 0U;

        /* Entry 't': '<S16>:52' */
        kaiguangai_B.sdt += 0.002;
      } else {
        sf_internal_predicateOutput = ((kaiguangai_B.DataTypeConversion4[0] ==
          1.0) && (kaiguangai_B.DataTypeConversion5[0] == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S16>:45' */
          kaiguangai_DW.is_suoding = kaiguangai_IN_off_o;

          /* Entry 'off': '<S16>:43' */
          kaiguangai_B.yjhx = 0.0;
        } else {
          if (kaiguangai_B.sdt > 2.0) {
            /* Transition: '<S16>:144' */
            kaiguangai_DW.is_suoding = kaiguangai_IN_t1_n;

            /* Entry 't1': '<S16>:147' */
            kaiguangai_B.sdyichang = 1.0;
          }
        }
      }
    }
    break;

   case kaiguangai_IN_t1_n:
    /* During 't1': '<S16>:147' */
    /* Transition: '<S16>:146' */
    kaiguangai_DW.is_suoding = kaiguangai_IN_t2_om;

    /* Entry 't2': '<S16>:143' */
    kaiguangai_B.sdt += 0.002;
    break;

   default:
    /* During 't2': '<S16>:143' */
    sf_internal_predicateOutput = ((kaiguangai_B.DataTypeConversion4[0] == 0.0) &&
      (kaiguangai_B.DataTypeConversion5[0] == 0.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S16>:142' */
      kaiguangai_DW.is_suoding = kaiguangai_IN_t2_om;

      /* Entry 't2': '<S16>:143' */
      kaiguangai_B.sdt += 0.002;
    } else {
      sf_internal_predicateOutput = ((kaiguangai_B.DataTypeConversion4[0] == 1.0)
        && (kaiguangai_B.DataTypeConversion5[0] == 1.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S16>:145' */
        kaiguangai_DW.is_suoding = kaiguangai_IN_off_o;

        /* Entry 'off': '<S16>:43' */
        kaiguangai_B.yjhx = 0.0;
      }
    }
    break;
  }
}

/* Function for Chart: '<S14>/Chart' */
static void kaiguangai_jiesuo_p(void)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'jiesuo': '<S16>:63' */
  switch (kaiguangai_DW.is_jiesuo) {
   case kaiguangai_IN_off_o:
    /* During 'off': '<S16>:55' */
    sf_internal_predicateOutput = ((kaiguangai_B.Product_g[3] == 1.0) &&
      (kaiguangai_B.DataTypeConversion5[0] == 1.0) &&
      (kaiguangai_B.DataTypeConversion4[0] == 1.0) &&
      (kaiguangai_B.DataTypeConversion1[0] == 1.0) &&
      (kaiguangai_B.DataTypeConversion2[0] == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S16>:59' */
      kaiguangai_DW.is_jiesuo = kaiguangai_IN_on_l;

      /* Entry 'on': '<S16>:61' */
      kaiguangai_B.skhx = 1.0;
      kaiguangai_B.jsyichang = 0.0;
      kaiguangai_B.jst = 0.0;
    }
    break;

   case kaiguangai_IN_on_l:
    /* During 'on': '<S16>:61' */
    /* Transition: '<S16>:57' */
    sf_internal_predicateOutput = ((kaiguangai_B.DataTypeConversion4[8] == 0.0) &&
      (kaiguangai_B.DataTypeConversion5[8] == 0.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S16>:62' */
      kaiguangai_DW.is_jiesuo = kaiguangai_IN_t_f;
      kaiguangai_DW.temporalCounter_i3 = 0U;

      /* Entry 't': '<S16>:64' */
      kaiguangai_B.jst += 0.002;
    } else {
      sf_internal_predicateOutput = ((kaiguangai_B.DataTypeConversion4[8] == 1.0)
        && (kaiguangai_B.DataTypeConversion5[8] == 1.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S16>:56' */
        kaiguangai_DW.is_jiesuo = kaiguangai_IN_off_o;

        /* Entry 'off': '<S16>:55' */
        kaiguangai_B.skhx = 0.0;
      } else {
        if (kaiguangai_B.sdt > 2.0) {
          /* Transition: '<S16>:148' */
          kaiguangai_DW.is_jiesuo = kaiguangai_IN_t1_n;

          /* Entry 't1': '<S16>:153' */
          kaiguangai_B.jsyichang = 1.0;
        }
      }
    }
    break;

   case kaiguangai_IN_t_f:
    /* During 't': '<S16>:64' */
    if (kaiguangai_DW.temporalCounter_i3 >= 1) {
      /* Transition: '<S16>:58' */
      sf_internal_predicateOutput = ((kaiguangai_B.DataTypeConversion4[8] == 0.0)
        && (kaiguangai_B.DataTypeConversion5[8] == 0.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S16>:62' */
        kaiguangai_DW.is_jiesuo = kaiguangai_IN_t_f;
        kaiguangai_DW.temporalCounter_i3 = 0U;

        /* Entry 't': '<S16>:64' */
        kaiguangai_B.jst += 0.002;
      } else {
        sf_internal_predicateOutput = ((kaiguangai_B.DataTypeConversion4[8] ==
          1.0) && (kaiguangai_B.DataTypeConversion5[8] == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S16>:56' */
          kaiguangai_DW.is_jiesuo = kaiguangai_IN_off_o;

          /* Entry 'off': '<S16>:55' */
          kaiguangai_B.skhx = 0.0;
        } else {
          if (kaiguangai_B.sdt > 2.0) {
            /* Transition: '<S16>:148' */
            kaiguangai_DW.is_jiesuo = kaiguangai_IN_t1_n;

            /* Entry 't1': '<S16>:153' */
            kaiguangai_B.jsyichang = 1.0;
          }
        }
      }
    }
    break;

   case kaiguangai_IN_t1_n:
    /* During 't1': '<S16>:153' */
    /* Transition: '<S16>:150' */
    kaiguangai_DW.is_jiesuo = kaiguangai_IN_t2_om;

    /* Entry 't2': '<S16>:149' */
    kaiguangai_B.jst += 0.002;
    break;

   default:
    /* During 't2': '<S16>:149' */
    sf_internal_predicateOutput = ((kaiguangai_B.DataTypeConversion4[8] == 0.0) &&
      (kaiguangai_B.DataTypeConversion5[8] == 0.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S16>:151' */
      kaiguangai_DW.is_jiesuo = kaiguangai_IN_t2_om;

      /* Entry 't2': '<S16>:149' */
      kaiguangai_B.jst += 0.002;
    } else {
      sf_internal_predicateOutput = ((kaiguangai_B.DataTypeConversion4[8] == 1.0)
        && (kaiguangai_B.DataTypeConversion5[8] == 1.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S16>:152' */
        kaiguangai_DW.is_jiesuo = kaiguangai_IN_off_o;

        /* Entry 'off': '<S16>:55' */
        kaiguangai_B.skhx = 0.0;
      }
    }
    break;
  }
}

/* Function for Chart: '<S14>/Chart' */
static void kaigua_exit_internal_shoudong_e(void)
{
  /* Exit Internal 'shoudong': '<S16>:7' */
  /* Exit Internal 'yajin': '<S16>:87' */
  kaiguangai_DW.is_yajin = kaiguangai_IN_NO_ACTIVE_CHILD_j;
  kaiguangai_DW.is_active_yajin = 0U;

  /* Exit Internal 'guangai': '<S16>:86' */
  kaiguangai_DW.is_guangai = kaiguangai_IN_NO_ACTIVE_CHILD_j;
  kaiguangai_DW.is_active_guangai = 0U;

  /* Exit Internal 'jiesuo': '<S16>:63' */
  kaiguangai_DW.is_jiesuo = kaiguangai_IN_NO_ACTIVE_CHILD_j;
  kaiguangai_DW.is_active_jiesuo = 0U;

  /* Exit Internal 'suoding': '<S16>:53' */
  kaiguangai_DW.is_suoding = kaiguangai_IN_NO_ACTIVE_CHILD_j;
  kaiguangai_DW.is_active_suoding = 0U;

  /* Exit Internal 'kaigai': '<S16>:32' */
  kaiguangai_DW.is_kaigai = kaiguangai_IN_NO_ACTIVE_CHILD_j;
  kaiguangai_DW.is_active_kaigai = 0U;

  /* Exit Internal 'songkai': '<S16>:1' */
  kaiguangai_DW.is_songkai = kaiguangai_IN_NO_ACTIVE_CHILD_j;
  kaiguangai_DW.is_active_songkai = 0U;
}

/* Function for Chart: '<S14>/Chart' */
static void kaiguangai_shoudong_i(void)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'shoudong': '<S16>:7' */
  if (kaiguangai_B.jieshu == 1.0) {
    /* Transition: '<S16>:126' */
    kaigua_exit_internal_shoudong_e();
    kaiguangai_DW.is_c10_kaiguangai = kaiguangai_IN_off1_k;

    /* Entry 'off1': '<S16>:123' */
    kaiguangai_B.skhx = 0.0;
    kaiguangai_B.kghx = 0.0;
    kaiguangai_B.gghx = 0.0;
    kaiguangai_B.yjhx = 0.0;
    kaiguangai_B.skt = 0.0;
    kaiguangai_B.kgt = 0.0;
    kaiguangai_B.sdt = 0.0;
    kaiguangai_B.jst = 0.0;
    kaiguangai_B.ggt = 0.0;
    kaiguangai_B.yjt = 0.0;
    kaiguangai_B.skyichang = 0.0;
    kaiguangai_B.kgyichang = 0.0;
    kaiguangai_B.sdyichang = 0.0;
    kaiguangai_B.jsyichang = 0.0;
    kaiguangai_B.ggyichang = 0.0;
    kaiguangai_B.yjyichang = 0.0;
    kaiguangai_B.kgzhiling1 = 0.0;
    kaiguangai_B.kgzhiling2 = 0.0;
    kaiguangai_B.ggzhiling1 = 0.0;
    kaiguangai_B.ggzhiling2 = 0.0;
  } else {
    kaiguangai_songkai_c();
    kaiguangai_kaigai_l();
    kaiguangai_suoding_o();
    kaiguangai_jiesuo_p();

    /* During 'guangai': '<S16>:86' */
    switch (kaiguangai_DW.is_guangai) {
     case kaiguangai_IN_off_o:
      /* During 'off': '<S16>:76' */
      sf_internal_predicateOutput = ((kaiguangai_B.Product_g[4] == 1.0) &&
        (kaiguangai_B.DataTypeConversion5[8] == 1.0) &&
        (kaiguangai_B.DataTypeConversion4[8] == 1.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S16>:79' */
        kaiguangai_DW.is_guangai = kaiguangai_IN_on_l;

        /* Entry 'on': '<S16>:83' */
        kaiguangai_B.gghx = 1.0;
        kaiguangai_B.ggzhiling1 = 1.0;
        kaiguangai_B.ggzhiling2 = 1.0;
        kaiguangai_B.ggyichang = 0.0;
        kaiguangai_B.ggt = 0.0;
      }
      break;

     case kaiguangai_IN_on_l:
      /* During 'on': '<S16>:83' */
      /* Transition: '<S16>:82' */
      sf_internal_predicateOutput = ((kaiguangai_B.DataTypeConversion1[8] == 0.0)
        && (kaiguangai_B.DataTypeConversion2[8] == 0.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S16>:80' */
        kaiguangai_DW.is_guangai = kaiguangai_IN_t_f;
        kaiguangai_DW.temporalCounter_i6 = 0U;

        /* Entry 't': '<S16>:85' */
        kaiguangai_B.ggt += 0.002;
      } else {
        sf_internal_predicateOutput = ((kaiguangai_B.DataTypeConversion1[8] ==
          1.0) && (kaiguangai_B.DataTypeConversion2[8] == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S16>:78' */
          kaiguangai_DW.is_guangai = kaiguangai_IN_off_o;

          /* Entry 'off': '<S16>:76' */
          kaiguangai_B.gghx = 0.0;
          kaiguangai_B.ggzhiling1 = 0.0;
          kaiguangai_B.ggzhiling2 = 0.0;
        } else {
          if (kaiguangai_B.ggt > 12.0) {
            /* Transition: '<S16>:154' */
            kaiguangai_DW.is_guangai = kaiguangai_IN_t1_n;

            /* Entry 't1': '<S16>:159' */
            kaiguangai_B.ggyichang = 1.0;
          }
        }
      }
      break;

     case kaiguangai_IN_t_f:
      /* During 't': '<S16>:85' */
      if (kaiguangai_DW.temporalCounter_i6 >= 1) {
        /* Transition: '<S16>:84' */
        sf_internal_predicateOutput = ((kaiguangai_B.DataTypeConversion1[8] ==
          0.0) && (kaiguangai_B.DataTypeConversion2[8] == 0.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S16>:80' */
          kaiguangai_DW.is_guangai = kaiguangai_IN_t_f;
          kaiguangai_DW.temporalCounter_i6 = 0U;

          /* Entry 't': '<S16>:85' */
          kaiguangai_B.ggt += 0.002;
        } else {
          sf_internal_predicateOutput = ((kaiguangai_B.DataTypeConversion1[8] ==
            1.0) && (kaiguangai_B.DataTypeConversion2[8] == 1.0));
          if (sf_internal_predicateOutput) {
            /* Transition: '<S16>:78' */
            kaiguangai_DW.is_guangai = kaiguangai_IN_off_o;

            /* Entry 'off': '<S16>:76' */
            kaiguangai_B.gghx = 0.0;
            kaiguangai_B.ggzhiling1 = 0.0;
            kaiguangai_B.ggzhiling2 = 0.0;
          } else {
            if (kaiguangai_B.ggt > 12.0) {
              /* Transition: '<S16>:154' */
              kaiguangai_DW.is_guangai = kaiguangai_IN_t1_n;

              /* Entry 't1': '<S16>:159' */
              kaiguangai_B.ggyichang = 1.0;
            }
          }
        }
      }
      break;

     case kaiguangai_IN_t1_n:
      /* During 't1': '<S16>:159' */
      /* Transition: '<S16>:156' */
      kaiguangai_DW.is_guangai = kaiguangai_IN_t2_om;

      /* Entry 't2': '<S16>:155' */
      kaiguangai_B.ggt += 0.002;
      break;

     default:
      /* During 't2': '<S16>:155' */
      sf_internal_predicateOutput = ((kaiguangai_B.DataTypeConversion1[8] == 0.0)
        && (kaiguangai_B.DataTypeConversion2[8] == 0.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S16>:157' */
        kaiguangai_DW.is_guangai = kaiguangai_IN_t2_om;

        /* Entry 't2': '<S16>:155' */
        kaiguangai_B.ggt += 0.002;
      } else {
        sf_internal_predicateOutput = ((kaiguangai_B.DataTypeConversion1[8] ==
          1.0) && (kaiguangai_B.DataTypeConversion2[8] == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S16>:158' */
          kaiguangai_DW.is_guangai = kaiguangai_IN_off_o;

          /* Entry 'off': '<S16>:76' */
          kaiguangai_B.gghx = 0.0;
          kaiguangai_B.ggzhiling1 = 0.0;
          kaiguangai_B.ggzhiling2 = 0.0;
        }
      }
      break;
    }

    /* During 'yajin': '<S16>:87' */
    switch (kaiguangai_DW.is_yajin) {
     case kaiguangai_IN_off_o:
      /* During 'off': '<S16>:88' */
      sf_internal_predicateOutput = ((kaiguangai_B.Product_g[5] == 1.0) &&
        (kaiguangai_B.DataTypeConversion1[8] == 1.0) &&
        (kaiguangai_B.DataTypeConversion2[8] == 1.0) &&
        (kaiguangai_B.DataTypeConversion4[8] == 1.0) &&
        (kaiguangai_B.DataTypeConversion5[8] == 1.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S16>:91' */
        kaiguangai_DW.is_yajin = kaiguangai_IN_on_l;

        /* Entry 'on': '<S16>:92' */
        kaiguangai_B.yjhx = 1.0;
        kaiguangai_B.yjyichang = 0.0;
        kaiguangai_B.yjt = 0.0;
      }
      break;

     case kaiguangai_IN_on_l:
      /* During 'on': '<S16>:92' */
      /* Transition: '<S16>:93' */
      sf_internal_predicateOutput = ((kaiguangai_B.DataTypeConversion5[0] == 0.0)
        && (kaiguangai_B.DataTypeConversion4[0] == 0.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S16>:95' */
        kaiguangai_DW.is_yajin = kaiguangai_IN_t_f;
        kaiguangai_DW.temporalCounter_i5 = 0U;

        /* Entry 't': '<S16>:96' */
        kaiguangai_B.yjt += 0.002;
      } else {
        sf_internal_predicateOutput = ((kaiguangai_B.DataTypeConversion5[0] ==
          1.0) && (kaiguangai_B.DataTypeConversion4[0] == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S16>:90' */
          kaiguangai_DW.is_yajin = kaiguangai_IN_off_o;

          /* Entry 'off': '<S16>:88' */
          kaiguangai_B.yjhx = 0.0;
        } else {
          if (kaiguangai_B.ggt > 12.0) {
            /* Transition: '<S16>:161' */
            kaiguangai_DW.is_yajin = kaiguangai_IN_t3_k;

            /* Entry 't3': '<S16>:172' */
            kaiguangai_B.yjyichang = 1.0;
          }
        }
      }
      break;

     case kaiguangai_IN_t_f:
      /* During 't': '<S16>:96' */
      if (kaiguangai_DW.temporalCounter_i5 >= 1) {
        /* Transition: '<S16>:97' */
        sf_internal_predicateOutput = ((kaiguangai_B.DataTypeConversion5[0] ==
          0.0) && (kaiguangai_B.DataTypeConversion4[0] == 0.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S16>:95' */
          kaiguangai_DW.is_yajin = kaiguangai_IN_t_f;
          kaiguangai_DW.temporalCounter_i5 = 0U;

          /* Entry 't': '<S16>:96' */
          kaiguangai_B.yjt += 0.002;
        } else {
          sf_internal_predicateOutput = ((kaiguangai_B.DataTypeConversion5[0] ==
            1.0) && (kaiguangai_B.DataTypeConversion4[0] == 1.0));
          if (sf_internal_predicateOutput) {
            /* Transition: '<S16>:90' */
            kaiguangai_DW.is_yajin = kaiguangai_IN_off_o;

            /* Entry 'off': '<S16>:88' */
            kaiguangai_B.yjhx = 0.0;
          } else {
            if (kaiguangai_B.ggt > 12.0) {
              /* Transition: '<S16>:161' */
              kaiguangai_DW.is_yajin = kaiguangai_IN_t3_k;

              /* Entry 't3': '<S16>:172' */
              kaiguangai_B.yjyichang = 1.0;
            }
          }
        }
      }
      break;

     case kaiguangai_IN_t2_o:
      /* During 't2': '<S16>:162' */
      sf_internal_predicateOutput = ((kaiguangai_B.DataTypeConversion5[0] == 0.0)
        && (kaiguangai_B.DataTypeConversion4[0] == 0.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S16>:164' */
        kaiguangai_DW.is_yajin = kaiguangai_IN_t2_o;

        /* Entry 't2': '<S16>:162' */
        kaiguangai_B.yjt += 0.002;
      } else {
        sf_internal_predicateOutput = ((kaiguangai_B.DataTypeConversion5[0] ==
          1.0) && (kaiguangai_B.DataTypeConversion4[0] == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S16>:165' */
          kaiguangai_DW.is_yajin = kaiguangai_IN_off_o;

          /* Entry 'off': '<S16>:88' */
          kaiguangai_B.yjhx = 0.0;
        }
      }
      break;

     default:
      /* During 't3': '<S16>:172' */
      /* Transition: '<S16>:163' */
      kaiguangai_DW.is_yajin = kaiguangai_IN_t2_o;

      /* Entry 't2': '<S16>:162' */
      kaiguangai_B.yjt += 0.002;
      break;
    }
  }
}

/* Model output function */
static void kaiguangai_output(void)
{
  boolean_T sf_internal_predicateOutput;
  int32_T i;

  /* Reset subsysRan breadcrumbs */
  srClearBC(kaiguangai_DW.shoudong_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(kaiguangai_DW.zidong_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(kaiguangai_DW.tiaoshimoshi_SubsysRanBC);

  /* Constant: '<Root>/tiaoshi' */
  kaiguangai_B.tiaoshi = kaiguangai_P.tiaoshi_Value;

  /* Memory: '<S33>/2' */
  kaiguangai_B.u = kaiguangai_DW.u_PreviousInput;

  /* Memory: '<S33>/3' */
  kaiguangai_B.u_l = kaiguangai_DW.u_PreviousInput_c;

  /* Memory: '<S33>/4' */
  kaiguangai_B.u_c = kaiguangai_DW.u_PreviousInput_j;

  /* Memory: '<S33>/5' */
  kaiguangai_B.u_d = kaiguangai_DW.u_PreviousInput_b;

  /* Memory: '<S33>/6' */
  kaiguangai_B.u_c4 = kaiguangai_DW.u_PreviousInput_jh;

  /* Logic: '<S33>/Logical Operator1' */
  kaiguangai_B.LogicalOperator1 = ((kaiguangai_B.u != 0.0) || (kaiguangai_B.u_l
    != 0.0) || (kaiguangai_B.u_c != 0.0) || (kaiguangai_B.u_d != 0.0) ||
    (kaiguangai_B.u_c4 != 0.0));

  /* Switch: '<S33>/Switch1' incorporates:
   *  Constant: '<S33>/Constant12'
   *  Constant: '<S6>/songkai'
   */
  if (kaiguangai_B.LogicalOperator1) {
    kaiguangai_B.Switch1 = kaiguangai_P.Constant12_Value_b;
  } else {
    kaiguangai_B.Switch1 = kaiguangai_P.songkai_Value_d;
  }

  /* End of Switch: '<S33>/Switch1' */

  /* Memory: '<S33>/1' */
  kaiguangai_B.u_h = kaiguangai_DW.u_PreviousInput_g;

  /* Logic: '<S33>/Logical Operator2' */
  kaiguangai_B.LogicalOperator2 = ((kaiguangai_B.u_h != 0.0) ||
    (kaiguangai_B.u_l != 0.0) || (kaiguangai_B.u_c != 0.0) || (kaiguangai_B.u_d
    != 0.0) || (kaiguangai_B.u_c4 != 0.0));

  /* Switch: '<S33>/Switch2' incorporates:
   *  Constant: '<S33>/Constant16'
   *  Constant: '<S6>/kaigai'
   */
  if (kaiguangai_B.LogicalOperator2) {
    kaiguangai_B.Switch2 = kaiguangai_P.Constant16_Value_o;
  } else {
    kaiguangai_B.Switch2 = kaiguangai_P.kaigai_Value_n;
  }

  /* End of Switch: '<S33>/Switch2' */

  /* Logic: '<S33>/Logical Operator3' */
  kaiguangai_B.LogicalOperator3 = ((kaiguangai_B.u_h != 0.0) || (kaiguangai_B.u
    != 0.0) || (kaiguangai_B.u_c != 0.0) || (kaiguangai_B.u_d != 0.0) ||
    (kaiguangai_B.u_c4 != 0.0));

  /* Switch: '<S33>/Switch3' incorporates:
   *  Constant: '<S33>/Constant13'
   *  Constant: '<S6>/suoding'
   */
  if (kaiguangai_B.LogicalOperator3) {
    kaiguangai_B.Switch3 = kaiguangai_P.Constant13_Value_j;
  } else {
    kaiguangai_B.Switch3 = kaiguangai_P.suoding_Value_b;
  }

  /* End of Switch: '<S33>/Switch3' */

  /* Logic: '<S33>/Logical Operator4' */
  kaiguangai_B.LogicalOperator4 = ((kaiguangai_B.u_h != 0.0) || (kaiguangai_B.u
    != 0.0) || (kaiguangai_B.u_l != 0.0) || (kaiguangai_B.u_d != 0.0) ||
    (kaiguangai_B.u_c4 != 0.0));

  /* Switch: '<S33>/Switch4' incorporates:
   *  Constant: '<S33>/Constant17'
   *  Constant: '<S6>/jiesuo'
   */
  if (kaiguangai_B.LogicalOperator4) {
    kaiguangai_B.Switch4 = kaiguangai_P.Constant17_Value_e;
  } else {
    kaiguangai_B.Switch4 = kaiguangai_P.jiesuo_Value_m;
  }

  /* End of Switch: '<S33>/Switch4' */

  /* Logic: '<S33>/Logical Operator5' */
  kaiguangai_B.LogicalOperator5 = ((kaiguangai_B.u_h != 0.0) || (kaiguangai_B.u
    != 0.0) || (kaiguangai_B.u_l != 0.0) || (kaiguangai_B.u_c != 0.0) ||
    (kaiguangai_B.u_c4 != 0.0));

  /* Switch: '<S33>/Switch5' incorporates:
   *  Constant: '<S33>/Constant18'
   *  Constant: '<S6>/guangai'
   */
  if (kaiguangai_B.LogicalOperator5) {
    kaiguangai_B.Switch5 = kaiguangai_P.Constant18_Value_e;
  } else {
    kaiguangai_B.Switch5 = kaiguangai_P.guangai_Value_b;
  }

  /* End of Switch: '<S33>/Switch5' */

  /* Logic: '<S33>/Logical Operator6' */
  kaiguangai_B.LogicalOperator6 = ((kaiguangai_B.u_h != 0.0) || (kaiguangai_B.u
    != 0.0) || (kaiguangai_B.u_l != 0.0) || (kaiguangai_B.u_c != 0.0) ||
    (kaiguangai_B.u_d != 0.0));

  /* Switch: '<S33>/Switch6' incorporates:
   *  Constant: '<S33>/Constant19'
   *  Constant: '<S6>/yajin'
   */
  if (kaiguangai_B.LogicalOperator6) {
    kaiguangai_B.Switch6 = kaiguangai_P.Constant19_Value_f;
  } else {
    kaiguangai_B.Switch6 = kaiguangai_P.yajin_Value_a;
  }

  /* End of Switch: '<S33>/Switch6' */

  /* Product: '<S6>/Product' incorporates:
   *  Constant: '<S6>/s1'
   */
  kaiguangai_B.Product[0] = kaiguangai_B.Switch1 * kaiguangai_P.s1_Value;
  kaiguangai_B.Product[1] = kaiguangai_B.Switch2 * kaiguangai_P.s1_Value;
  kaiguangai_B.Product[2] = kaiguangai_B.Switch3 * kaiguangai_P.s1_Value;
  kaiguangai_B.Product[3] = kaiguangai_B.Switch4 * kaiguangai_P.s1_Value;
  kaiguangai_B.Product[4] = kaiguangai_B.Switch5 * kaiguangai_P.s1_Value;
  kaiguangai_B.Product[5] = kaiguangai_B.Switch6 * kaiguangai_P.s1_Value;

  /* Product: '<S6>/Product1' incorporates:
   *  Constant: '<S6>/s2'
   */
  kaiguangai_B.Product1[0] = kaiguangai_B.Switch1 * kaiguangai_P.s2_Value;
  kaiguangai_B.Product1[1] = kaiguangai_B.Switch2 * kaiguangai_P.s2_Value;
  kaiguangai_B.Product1[2] = kaiguangai_B.Switch3 * kaiguangai_P.s2_Value;
  kaiguangai_B.Product1[3] = kaiguangai_B.Switch4 * kaiguangai_P.s2_Value;
  kaiguangai_B.Product1[4] = kaiguangai_B.Switch5 * kaiguangai_P.s2_Value;
  kaiguangai_B.Product1[5] = kaiguangai_B.Switch6 * kaiguangai_P.s2_Value;

  /* Product: '<S6>/Product2' incorporates:
   *  Constant: '<S6>/s3'
   */
  kaiguangai_B.Product2[0] = kaiguangai_B.Switch1 * kaiguangai_P.s3_Value;
  kaiguangai_B.Product2[1] = kaiguangai_B.Switch2 * kaiguangai_P.s3_Value;
  kaiguangai_B.Product2[2] = kaiguangai_B.Switch3 * kaiguangai_P.s3_Value;
  kaiguangai_B.Product2[3] = kaiguangai_B.Switch4 * kaiguangai_P.s3_Value;
  kaiguangai_B.Product2[4] = kaiguangai_B.Switch5 * kaiguangai_P.s3_Value;
  kaiguangai_B.Product2[5] = kaiguangai_B.Switch6 * kaiguangai_P.s3_Value;

  /* Product: '<S6>/Product3' incorporates:
   *  Constant: '<S6>/s4'
   */
  kaiguangai_B.Product3[0] = kaiguangai_B.Switch1 * kaiguangai_P.s4_Value;
  kaiguangai_B.Product3[1] = kaiguangai_B.Switch2 * kaiguangai_P.s4_Value;
  kaiguangai_B.Product3[2] = kaiguangai_B.Switch3 * kaiguangai_P.s4_Value;
  kaiguangai_B.Product3[3] = kaiguangai_B.Switch4 * kaiguangai_P.s4_Value;
  kaiguangai_B.Product3[4] = kaiguangai_B.Switch5 * kaiguangai_P.s4_Value;
  kaiguangai_B.Product3[5] = kaiguangai_B.Switch6 * kaiguangai_P.s4_Value;

  /* Product: '<S6>/Product4' incorporates:
   *  Constant: '<S6>/s5'
   */
  kaiguangai_B.Product4[0] = kaiguangai_B.Switch1 * kaiguangai_P.s5_Value;
  kaiguangai_B.Product4[1] = kaiguangai_B.Switch2 * kaiguangai_P.s5_Value;
  kaiguangai_B.Product4[2] = kaiguangai_B.Switch3 * kaiguangai_P.s5_Value;
  kaiguangai_B.Product4[3] = kaiguangai_B.Switch4 * kaiguangai_P.s5_Value;
  kaiguangai_B.Product4[4] = kaiguangai_B.Switch5 * kaiguangai_P.s5_Value;
  kaiguangai_B.Product4[5] = kaiguangai_B.Switch6 * kaiguangai_P.s5_Value;

  /* Product: '<S6>/Product5' incorporates:
   *  Constant: '<S6>/s6'
   */
  kaiguangai_B.Product5[0] = kaiguangai_B.Switch1 * kaiguangai_P.s6_Value;
  kaiguangai_B.Product5[1] = kaiguangai_B.Switch2 * kaiguangai_P.s6_Value;
  kaiguangai_B.Product5[2] = kaiguangai_B.Switch3 * kaiguangai_P.s6_Value;
  kaiguangai_B.Product5[3] = kaiguangai_B.Switch4 * kaiguangai_P.s6_Value;
  kaiguangai_B.Product5[4] = kaiguangai_B.Switch5 * kaiguangai_P.s6_Value;
  kaiguangai_B.Product5[5] = kaiguangai_B.Switch6 * kaiguangai_P.s6_Value;

  /* Product: '<S6>/Product6' incorporates:
   *  Constant: '<S6>/s7'
   */
  kaiguangai_B.Product6[0] = kaiguangai_B.Switch1 * kaiguangai_P.s7_Value;
  kaiguangai_B.Product6[1] = kaiguangai_B.Switch2 * kaiguangai_P.s7_Value;
  kaiguangai_B.Product6[2] = kaiguangai_B.Switch3 * kaiguangai_P.s7_Value;
  kaiguangai_B.Product6[3] = kaiguangai_B.Switch4 * kaiguangai_P.s7_Value;
  kaiguangai_B.Product6[4] = kaiguangai_B.Switch5 * kaiguangai_P.s7_Value;
  kaiguangai_B.Product6[5] = kaiguangai_B.Switch6 * kaiguangai_P.s7_Value;

  /* Product: '<S6>/Product7' incorporates:
   *  Constant: '<S6>/s8'
   */
  kaiguangai_B.Product7[0] = kaiguangai_B.Switch1 * kaiguangai_P.s8_Value;
  kaiguangai_B.Product7[1] = kaiguangai_B.Switch2 * kaiguangai_P.s8_Value;
  kaiguangai_B.Product7[2] = kaiguangai_B.Switch3 * kaiguangai_P.s8_Value;
  kaiguangai_B.Product7[3] = kaiguangai_B.Switch4 * kaiguangai_P.s8_Value;
  kaiguangai_B.Product7[4] = kaiguangai_B.Switch5 * kaiguangai_P.s8_Value;
  kaiguangai_B.Product7[5] = kaiguangai_B.Switch6 * kaiguangai_P.s8_Value;

  /* Constant: '<Root>/jieshu' */
  kaiguangai_B.jieshu = kaiguangai_P.jieshu_Value;

  /* Outputs for Enabled SubSystem: '<Root>/tiaoshimoshi' incorporates:
   *  EnablePort: '<S7>/Enable'
   */
  if (kaiguangai_B.tiaoshi > 0.0) {
    /* Chart: '<S7>/jinjichuli' */
    kaiguangai_jinjichuli(kaiguangai_B.tiaoshi, kaiguangai_B.Product[0],
                          kaiguangai_B.Product[1], kaiguangai_B.Product[2],
                          kaiguangai_B.Product[3], kaiguangai_B.Product[4],
                          kaiguangai_B.Product[5], kaiguangai_B.jieshu,
                          &kaiguangai_B.sf_jinjichuli,
                          &kaiguangai_DW.sf_jinjichuli);

    /* Chart: '<S7>/jinjichuli1' */
    kaiguangai_jinjichuli(kaiguangai_B.tiaoshi, kaiguangai_B.Product1[0],
                          kaiguangai_B.Product1[1], kaiguangai_B.Product1[2],
                          kaiguangai_B.Product1[3], kaiguangai_B.Product1[4],
                          kaiguangai_B.Product1[5], kaiguangai_B.jieshu,
                          &kaiguangai_B.sf_jinjichuli1,
                          &kaiguangai_DW.sf_jinjichuli1);

    /* Chart: '<S7>/jinjichuli2' */
    kaiguangai_jinjichuli(kaiguangai_B.tiaoshi, kaiguangai_B.Product2[0],
                          kaiguangai_B.Product2[1], kaiguangai_B.Product2[2],
                          kaiguangai_B.Product2[3], kaiguangai_B.Product2[4],
                          kaiguangai_B.Product2[5], kaiguangai_B.jieshu,
                          &kaiguangai_B.sf_jinjichuli2,
                          &kaiguangai_DW.sf_jinjichuli2);

    /* Chart: '<S7>/jinjichuli3' */
    kaiguangai_jinjichuli(kaiguangai_B.tiaoshi, kaiguangai_B.Product3[0],
                          kaiguangai_B.Product3[1], kaiguangai_B.Product3[2],
                          kaiguangai_B.Product3[3], kaiguangai_B.Product3[4],
                          kaiguangai_B.Product3[5], kaiguangai_B.jieshu,
                          &kaiguangai_B.sf_jinjichuli3,
                          &kaiguangai_DW.sf_jinjichuli3);

    /* Chart: '<S7>/jinjichuli4' */
    kaiguangai_jinjichuli(kaiguangai_B.tiaoshi, kaiguangai_B.Product4[0],
                          kaiguangai_B.Product4[1], kaiguangai_B.Product4[2],
                          kaiguangai_B.Product4[3], kaiguangai_B.Product4[4],
                          kaiguangai_B.Product4[5], kaiguangai_B.jieshu,
                          &kaiguangai_B.sf_jinjichuli4,
                          &kaiguangai_DW.sf_jinjichuli4);

    /* Chart: '<S7>/jinjichuli5' */
    kaiguangai_jinjichuli(kaiguangai_B.tiaoshi, kaiguangai_B.Product5[0],
                          kaiguangai_B.Product5[1], kaiguangai_B.Product5[2],
                          kaiguangai_B.Product5[3], kaiguangai_B.Product5[4],
                          kaiguangai_B.Product5[5], kaiguangai_B.jieshu,
                          &kaiguangai_B.sf_jinjichuli5,
                          &kaiguangai_DW.sf_jinjichuli5);

    /* Chart: '<S7>/jinjichuli6' */
    kaiguangai_jinjichuli(kaiguangai_B.tiaoshi, kaiguangai_B.Product6[0],
                          kaiguangai_B.Product6[1], kaiguangai_B.Product6[2],
                          kaiguangai_B.Product6[3], kaiguangai_B.Product6[4],
                          kaiguangai_B.Product6[5], kaiguangai_B.jieshu,
                          &kaiguangai_B.sf_jinjichuli6,
                          &kaiguangai_DW.sf_jinjichuli6);

    /* Chart: '<S7>/jinjichuli7' */
    kaiguangai_jinjichuli(kaiguangai_B.tiaoshi, kaiguangai_B.Product7[0],
                          kaiguangai_B.Product7[1], kaiguangai_B.Product7[2],
                          kaiguangai_B.Product7[3], kaiguangai_B.Product7[4],
                          kaiguangai_B.Product7[5], kaiguangai_B.jieshu,
                          &kaiguangai_B.sf_jinjichuli7,
                          &kaiguangai_DW.sf_jinjichuli7);

    /* Logic: '<S7>/Logical Operator' */
    kaiguangai_B.LogicalOperator_e = ((kaiguangai_B.sf_jinjichuli.skhx != 0.0) ||
      (kaiguangai_B.sf_jinjichuli1.skhx != 0.0) ||
      (kaiguangai_B.sf_jinjichuli2.skhx != 0.0) ||
      (kaiguangai_B.sf_jinjichuli3.skhx != 0.0) ||
      (kaiguangai_B.sf_jinjichuli4.skhx != 0.0) ||
      (kaiguangai_B.sf_jinjichuli5.skhx != 0.0) ||
      (kaiguangai_B.sf_jinjichuli6.skhx != 0.0) ||
      (kaiguangai_B.sf_jinjichuli7.skhx != 0.0));

    /* Logic: '<S7>/Logical Operator1' */
    kaiguangai_B.LogicalOperator1_kr = ((kaiguangai_B.sf_jinjichuli.gghx != 0.0)
      || (kaiguangai_B.sf_jinjichuli1.gghx != 0.0) ||
      (kaiguangai_B.sf_jinjichuli2.gghx != 0.0) ||
      (kaiguangai_B.sf_jinjichuli3.gghx != 0.0) ||
      (kaiguangai_B.sf_jinjichuli4.gghx != 0.0) ||
      (kaiguangai_B.sf_jinjichuli5.gghx != 0.0) ||
      (kaiguangai_B.sf_jinjichuli6.gghx != 0.0) ||
      (kaiguangai_B.sf_jinjichuli7.gghx != 0.0));

    /* Logic: '<S7>/Logical Operator4' */
    kaiguangai_B.LogicalOperator4_d = ((kaiguangai_B.sf_jinjichuli.kghx != 0.0) ||
      (kaiguangai_B.sf_jinjichuli1.kghx != 0.0) ||
      (kaiguangai_B.sf_jinjichuli2.kghx != 0.0) ||
      (kaiguangai_B.sf_jinjichuli3.kghx != 0.0) ||
      (kaiguangai_B.sf_jinjichuli4.kghx != 0.0) ||
      (kaiguangai_B.sf_jinjichuli5.kghx != 0.0) ||
      (kaiguangai_B.sf_jinjichuli6.kghx != 0.0) ||
      (kaiguangai_B.sf_jinjichuli7.kghx != 0.0));

    /* Logic: '<S7>/Logical Operator5' */
    kaiguangai_B.LogicalOperator5_c = ((kaiguangai_B.sf_jinjichuli1.yjhx != 0.0)
      || (kaiguangai_B.sf_jinjichuli2.yjhx != 0.0) ||
      (kaiguangai_B.sf_jinjichuli3.yjhx != 0.0) ||
      (kaiguangai_B.sf_jinjichuli4.yjhx != 0.0) ||
      (kaiguangai_B.sf_jinjichuli5.yjhx != 0.0) ||
      (kaiguangai_B.sf_jinjichuli6.yjhx != 0.0) ||
      (kaiguangai_B.sf_jinjichuli7.yjhx != 0.0) ||
      (kaiguangai_B.sf_jinjichuli.yjhx != 0.0));
    srUpdateBC(kaiguangai_DW.tiaoshimoshi_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<Root>/tiaoshimoshi' */

  /* Memory: '<Root>/memory' */
  kaiguangai_B.memory[0] = kaiguangai_DW.memory_PreviousInput[0];
  kaiguangai_B.memory[1] = kaiguangai_DW.memory_PreviousInput[1];
  kaiguangai_B.memory[2] = kaiguangai_DW.memory_PreviousInput[2];
  kaiguangai_B.memory[3] = kaiguangai_DW.memory_PreviousInput[3];

  /* Switch: '<Root>/Switch3' */
  if (kaiguangai_B.tiaoshi > kaiguangai_P.Switch3_Threshold) {
    kaiguangai_B.Switch3_g[0] = kaiguangai_B.LogicalOperator_e;
    kaiguangai_B.Switch3_g[1] = kaiguangai_B.LogicalOperator4_d;
    kaiguangai_B.Switch3_g[2] = kaiguangai_B.LogicalOperator5_c;
    kaiguangai_B.Switch3_g[3] = kaiguangai_B.LogicalOperator1_kr;
  } else {
    kaiguangai_B.Switch3_g[0] = kaiguangai_B.memory[0];
    kaiguangai_B.Switch3_g[1] = kaiguangai_B.memory[1];
    kaiguangai_B.Switch3_g[2] = kaiguangai_B.memory[2];
    kaiguangai_B.Switch3_g[3] = kaiguangai_B.memory[3];
  }

  /* End of Switch: '<Root>/Switch3' */

  /* DataTypeConversion: '<S1>/Data Type Conversion6' */
  kaiguangai_B.DataTypeConversion6[0] = kaiguangai_B.Switch3_g[0];
  kaiguangai_B.DataTypeConversion6[1] = kaiguangai_B.Switch3_g[1];
  kaiguangai_B.DataTypeConversion6[2] = kaiguangai_B.Switch3_g[2];
  kaiguangai_B.DataTypeConversion6[3] = kaiguangai_B.Switch3_g[3];

  /* Constant: '<S1>/Constant' */
  kaiguangai_B.Constant = kaiguangai_P.Constant_Value;

  /* Level2 S-Function Block: '<S1>/PCI1' (pci1756IO) */
  {
    SimStruct *rts = kaiguangai_M->childSfunctions[0];
    sfcnOutputs(rts, 0);
  }

  /* Memory: '<Root>/memory1' */
  memcpy(&kaiguangai_B.memory1[0], &kaiguangai_DW.memory1_PreviousInput[0],
         sizeof(real_T) << 5U);

  /* Level2 S-Function Block: '<S1>/PCI2' (pci1756IO) */
  {
    SimStruct *rts = kaiguangai_M->childSfunctions[1];
    sfcnOutputs(rts, 0);
  }

  /* Constant: '<S1>/Constant1' */
  kaiguangai_B.Constant1 = kaiguangai_P.Constant1_Value;

  /* Level2 S-Function Block: '<S1>/PCI3' (pci1756IO) */
  {
    SimStruct *rts = kaiguangai_M->childSfunctions[2];
    sfcnOutputs(rts, 0);
  }

  /* DataTypeConversion: '<S1>/Data Type Conversion1' */
  memcpy(&kaiguangai_B.DataTypeConversion1[0], &kaiguangai_B.PCI1_o1[0], sizeof
         (real_T) << 4U);

  /* DataTypeConversion: '<S1>/Data Type Conversion2' */
  memcpy(&kaiguangai_B.DataTypeConversion2[0], &kaiguangai_B.PCI1_o2[0], sizeof
         (real_T) << 4U);

  /* DataTypeConversion: '<S1>/Data Type Conversion3' */
  memcpy(&kaiguangai_B.DataTypeConversion3[0], &kaiguangai_B.PCI2_o1[0], sizeof
         (real_T) << 4U);

  /* DataTypeConversion: '<S1>/Data Type Conversion4' */
  memcpy(&kaiguangai_B.DataTypeConversion4[0], &kaiguangai_B.PCI3_o1[0], sizeof
         (real_T) << 4U);

  /* DataTypeConversion: '<S1>/Data Type Conversion5' */
  memcpy(&kaiguangai_B.DataTypeConversion5[0], &kaiguangai_B.PCI3_o2[0], sizeof
         (real_T) << 4U);

  /* Constant: '<Root>/start' */
  kaiguangai_B.start = kaiguangai_P.start_Value;

  /* Constant: '<S9>/t1' */
  kaiguangai_B.u_g = kaiguangai_P.t1_Value;

  /* Constant: '<S9>/t3' */
  kaiguangai_B.u_m = kaiguangai_P.t3_Value;

  /* Constant: '<S9>/t5' */
  kaiguangai_B.u_m5 = kaiguangai_P.t5_Value;

  /* Constant: '<S9>/t7' */
  kaiguangai_B.u_gd = kaiguangai_P.t7_Value;

  /* Constant: '<S9>/t9' */
  kaiguangai_B.u_gh = kaiguangai_P.t9_Value;

  /* Constant: '<S9>/t11' */
  kaiguangai_B.u_m0 = kaiguangai_P.t11_Value;

  /* Constant: '<Root>/zidong_shedingcishu' */
  kaiguangai_B.zidong_shedingcishu = kaiguangai_P.zidong_shedingcishu_Value;

  /* Logic: '<S4>/Logical Operator3' */
  kaiguangai_B.LogicalOperator3_e = !(kaiguangai_B.tiaoshi != 0.0);

  /* Logic: '<S4>/Logical Operator' incorporates:
   *  Constant: '<Root>/qiehuan'
   */
  kaiguangai_B.LogicalOperator = !(kaiguangai_P.qiehuan_Value != 0.0);

  /* Logic: '<S4>/Logical Operator1' */
  kaiguangai_B.LogicalOperator1_h = (kaiguangai_B.LogicalOperator3_e &&
    kaiguangai_B.LogicalOperator);

  /* Outputs for Enabled SubSystem: '<S4>/zidong' incorporates:
   *  EnablePort: '<S15>/Enable'
   */
  if (kaiguangai_B.LogicalOperator1_h) {
    /* Logic: '<S15>/Logical Operator4' incorporates:
     *  Constant: '<S13>/jinggai1'
     */
    kaiguangai_B.LogicalOperator4_l = ((kaiguangai_P.jinggai1_Value != 0.0) &&
      (kaiguangai_B.start != 0.0));

    /* Chart: '<S15>/1#' */
    kaiguangai_u(kaiguangai_B.LogicalOperator4_l,
                 kaiguangai_B.DataTypeConversion1[0],
                 kaiguangai_B.DataTypeConversion2[0],
                 kaiguangai_B.DataTypeConversion1[8],
                 kaiguangai_B.DataTypeConversion2[8],
                 kaiguangai_B.DataTypeConversion4[0],
                 kaiguangai_B.DataTypeConversion4[8],
                 kaiguangai_B.DataTypeConversion5[0],
                 kaiguangai_B.DataTypeConversion5[8], kaiguangai_B.u_g,
                 kaiguangai_B.u_m, kaiguangai_B.u_m5, kaiguangai_B.u_gd,
                 kaiguangai_B.u_gh, kaiguangai_B.u_m0,
                 kaiguangai_B.zidong_shedingcishu, kaiguangai_B.jieshu,
                 &kaiguangai_B.sf_1, &kaiguangai_DW.sf_1);

    /* Logic: '<S15>/Logical Operator5' incorporates:
     *  Constant: '<S13>/jinggai2'
     */
    kaiguangai_B.LogicalOperator5_m = ((kaiguangai_P.jinggai2_Value != 0.0) &&
      (kaiguangai_B.start != 0.0));

    /* Chart: '<S15>/1#1' */
    kaiguangai_u(kaiguangai_B.LogicalOperator5_m,
                 kaiguangai_B.DataTypeConversion1[1],
                 kaiguangai_B.DataTypeConversion2[1],
                 kaiguangai_B.DataTypeConversion1[9],
                 kaiguangai_B.DataTypeConversion2[9],
                 kaiguangai_B.DataTypeConversion4[1],
                 kaiguangai_B.DataTypeConversion4[9],
                 kaiguangai_B.DataTypeConversion5[1],
                 kaiguangai_B.DataTypeConversion5[9], kaiguangai_B.u_g,
                 kaiguangai_B.u_m, kaiguangai_B.u_m5, kaiguangai_B.u_gd,
                 kaiguangai_B.u_gh, kaiguangai_B.u_m0,
                 kaiguangai_B.zidong_shedingcishu, kaiguangai_B.jieshu,
                 &kaiguangai_B.sf_11, &kaiguangai_DW.sf_11);

    /* Logic: '<S15>/Logical Operator6' incorporates:
     *  Constant: '<S13>/jinggai3'
     */
    kaiguangai_B.LogicalOperator6_j = ((kaiguangai_P.jinggai3_Value != 0.0) &&
      (kaiguangai_B.start != 0.0));

    /* Chart: '<S15>/1#2' */
    kaiguangai_u(kaiguangai_B.LogicalOperator6_j,
                 kaiguangai_B.DataTypeConversion1[2],
                 kaiguangai_B.DataTypeConversion2[2],
                 kaiguangai_B.DataTypeConversion1[10],
                 kaiguangai_B.DataTypeConversion2[10],
                 kaiguangai_B.DataTypeConversion4[2],
                 kaiguangai_B.DataTypeConversion4[10],
                 kaiguangai_B.DataTypeConversion5[2],
                 kaiguangai_B.DataTypeConversion5[10], kaiguangai_B.u_g,
                 kaiguangai_B.u_m, kaiguangai_B.u_m5, kaiguangai_B.u_gd,
                 kaiguangai_B.u_gh, kaiguangai_B.u_m0,
                 kaiguangai_B.zidong_shedingcishu, kaiguangai_B.jieshu,
                 &kaiguangai_B.sf_12, &kaiguangai_DW.sf_12);

    /* Logic: '<S15>/Logical Operator7' incorporates:
     *  Constant: '<S13>/jinggai4'
     */
    kaiguangai_B.LogicalOperator7 = ((kaiguangai_P.jinggai4_Value != 0.0) &&
      (kaiguangai_B.start != 0.0));

    /* Chart: '<S15>/1#3' */
    kaiguangai_u(kaiguangai_B.LogicalOperator7,
                 kaiguangai_B.DataTypeConversion1[3],
                 kaiguangai_B.DataTypeConversion2[3],
                 kaiguangai_B.DataTypeConversion1[11],
                 kaiguangai_B.DataTypeConversion2[11],
                 kaiguangai_B.DataTypeConversion4[3],
                 kaiguangai_B.DataTypeConversion4[11],
                 kaiguangai_B.DataTypeConversion5[3],
                 kaiguangai_B.DataTypeConversion5[11], kaiguangai_B.u_g,
                 kaiguangai_B.u_m, kaiguangai_B.u_m5, kaiguangai_B.u_gd,
                 kaiguangai_B.u_gh, kaiguangai_B.u_m0,
                 kaiguangai_B.zidong_shedingcishu, kaiguangai_B.jieshu,
                 &kaiguangai_B.sf_13, &kaiguangai_DW.sf_13);

    /* Logic: '<S15>/Logical Operator8' incorporates:
     *  Constant: '<S13>/jinggai5'
     */
    kaiguangai_B.LogicalOperator8 = ((kaiguangai_P.jinggai5_Value != 0.0) &&
      (kaiguangai_B.start != 0.0));

    /* Chart: '<S15>/1#4' */
    kaiguangai_u(kaiguangai_B.LogicalOperator8,
                 kaiguangai_B.DataTypeConversion1[4],
                 kaiguangai_B.DataTypeConversion2[4],
                 kaiguangai_B.DataTypeConversion1[12],
                 kaiguangai_B.DataTypeConversion2[12],
                 kaiguangai_B.DataTypeConversion4[4],
                 kaiguangai_B.DataTypeConversion4[12],
                 kaiguangai_B.DataTypeConversion5[4],
                 kaiguangai_B.DataTypeConversion5[12], kaiguangai_B.u_g,
                 kaiguangai_B.u_m, kaiguangai_B.u_m5, kaiguangai_B.u_gd,
                 kaiguangai_B.u_gh, kaiguangai_B.u_m0,
                 kaiguangai_B.zidong_shedingcishu, kaiguangai_B.jieshu,
                 &kaiguangai_B.sf_14, &kaiguangai_DW.sf_14);

    /* Logic: '<S15>/Logical Operator9' incorporates:
     *  Constant: '<S13>/jinggai6'
     */
    kaiguangai_B.LogicalOperator9 = ((kaiguangai_P.jinggai6_Value != 0.0) &&
      (kaiguangai_B.start != 0.0));

    /* Chart: '<S15>/1#5' */
    kaiguangai_u(kaiguangai_B.LogicalOperator9,
                 kaiguangai_B.DataTypeConversion1[5],
                 kaiguangai_B.DataTypeConversion2[5],
                 kaiguangai_B.DataTypeConversion1[13],
                 kaiguangai_B.DataTypeConversion2[13],
                 kaiguangai_B.DataTypeConversion4[5],
                 kaiguangai_B.DataTypeConversion4[13],
                 kaiguangai_B.DataTypeConversion5[5],
                 kaiguangai_B.DataTypeConversion5[13], kaiguangai_B.u_g,
                 kaiguangai_B.u_m, kaiguangai_B.u_m5, kaiguangai_B.u_gd,
                 kaiguangai_B.u_gh, kaiguangai_B.u_m0,
                 kaiguangai_B.zidong_shedingcishu, kaiguangai_B.jieshu,
                 &kaiguangai_B.sf_15, &kaiguangai_DW.sf_15);

    /* Logic: '<S15>/Logical Operator10' incorporates:
     *  Constant: '<S13>/jinggai7'
     */
    kaiguangai_B.LogicalOperator10 = ((kaiguangai_P.jinggai7_Value != 0.0) &&
      (kaiguangai_B.start != 0.0));

    /* Chart: '<S15>/1#6' */
    kaiguangai_u(kaiguangai_B.LogicalOperator10,
                 kaiguangai_B.DataTypeConversion1[6],
                 kaiguangai_B.DataTypeConversion2[6],
                 kaiguangai_B.DataTypeConversion1[14],
                 kaiguangai_B.DataTypeConversion2[14],
                 kaiguangai_B.DataTypeConversion4[6],
                 kaiguangai_B.DataTypeConversion4[14],
                 kaiguangai_B.DataTypeConversion5[6],
                 kaiguangai_B.DataTypeConversion5[14], kaiguangai_B.u_g,
                 kaiguangai_B.u_m, kaiguangai_B.u_m5, kaiguangai_B.u_gd,
                 kaiguangai_B.u_gh, kaiguangai_B.u_m0,
                 kaiguangai_B.zidong_shedingcishu, kaiguangai_B.jieshu,
                 &kaiguangai_B.sf_16, &kaiguangai_DW.sf_16);

    /* Logic: '<S15>/Logical Operator11' incorporates:
     *  Constant: '<S13>/jinggai8'
     */
    kaiguangai_B.LogicalOperator11 = ((kaiguangai_P.jinggai8_Value != 0.0) &&
      (kaiguangai_B.start != 0.0));

    /* Chart: '<S15>/1#7' */
    kaiguangai_u(kaiguangai_B.LogicalOperator11,
                 kaiguangai_B.DataTypeConversion1[7],
                 kaiguangai_B.DataTypeConversion2[7],
                 kaiguangai_B.DataTypeConversion1[15],
                 kaiguangai_B.DataTypeConversion2[15],
                 kaiguangai_B.DataTypeConversion4[7],
                 kaiguangai_B.DataTypeConversion4[15],
                 kaiguangai_B.DataTypeConversion5[7],
                 kaiguangai_B.DataTypeConversion5[15], kaiguangai_B.u_g,
                 kaiguangai_B.u_m, kaiguangai_B.u_m5, kaiguangai_B.u_gd,
                 kaiguangai_B.u_gh, kaiguangai_B.u_m0,
                 kaiguangai_B.zidong_shedingcishu, kaiguangai_B.jieshu,
                 &kaiguangai_B.sf_17, &kaiguangai_DW.sf_17);

    /* DataTypeConversion: '<S15>/Data Type Conversion1' */
    kaiguangai_B.DataTypeConversion1_b[0] = kaiguangai_B.sf_1.skyichang;
    kaiguangai_B.DataTypeConversion1_b[1] = kaiguangai_B.sf_1.kgyichang;
    kaiguangai_B.DataTypeConversion1_b[2] = kaiguangai_B.sf_1.sdyichang;
    kaiguangai_B.DataTypeConversion1_b[3] = kaiguangai_B.sf_1.jsyichang;
    kaiguangai_B.DataTypeConversion1_b[4] = kaiguangai_B.sf_1.ggyichang;
    kaiguangai_B.DataTypeConversion1_b[5] = kaiguangai_B.sf_1.yjyichang;

    /* DataTypeConversion: '<S15>/Data Type Conversion2' */
    kaiguangai_B.DataTypeConversion2_j[0] = kaiguangai_B.sf_11.skyichang;
    kaiguangai_B.DataTypeConversion2_j[1] = kaiguangai_B.sf_11.kgyichang;
    kaiguangai_B.DataTypeConversion2_j[2] = kaiguangai_B.sf_11.sdyichang;
    kaiguangai_B.DataTypeConversion2_j[3] = kaiguangai_B.sf_11.jsyichang;
    kaiguangai_B.DataTypeConversion2_j[4] = kaiguangai_B.sf_11.ggyichang;
    kaiguangai_B.DataTypeConversion2_j[5] = kaiguangai_B.sf_11.yjyichang;

    /* DataTypeConversion: '<S15>/Data Type Conversion3' */
    kaiguangai_B.DataTypeConversion3_l[0] = kaiguangai_B.sf_12.skyichang;
    kaiguangai_B.DataTypeConversion3_l[1] = kaiguangai_B.sf_12.kgyichang;
    kaiguangai_B.DataTypeConversion3_l[2] = kaiguangai_B.sf_12.sdyichang;
    kaiguangai_B.DataTypeConversion3_l[3] = kaiguangai_B.sf_12.jsyichang;
    kaiguangai_B.DataTypeConversion3_l[4] = kaiguangai_B.sf_12.ggyichang;
    kaiguangai_B.DataTypeConversion3_l[5] = kaiguangai_B.sf_12.yjyichang;

    /* DataTypeConversion: '<S15>/Data Type Conversion4' */
    kaiguangai_B.DataTypeConversion4_m[0] = kaiguangai_B.sf_14.skyichang;
    kaiguangai_B.DataTypeConversion4_m[1] = kaiguangai_B.sf_14.kgyichang;
    kaiguangai_B.DataTypeConversion4_m[2] = kaiguangai_B.sf_14.sdyichang;
    kaiguangai_B.DataTypeConversion4_m[3] = kaiguangai_B.sf_14.jsyichang;
    kaiguangai_B.DataTypeConversion4_m[4] = kaiguangai_B.sf_14.ggyichang;
    kaiguangai_B.DataTypeConversion4_m[5] = kaiguangai_B.sf_14.yjyichang;

    /* DataTypeConversion: '<S15>/Data Type Conversion5' */
    kaiguangai_B.DataTypeConversion5_n[0] = kaiguangai_B.sf_15.skyichang;
    kaiguangai_B.DataTypeConversion5_n[1] = kaiguangai_B.sf_15.kgyichang;
    kaiguangai_B.DataTypeConversion5_n[2] = kaiguangai_B.sf_15.sdyichang;
    kaiguangai_B.DataTypeConversion5_n[3] = kaiguangai_B.sf_15.jsyichang;
    kaiguangai_B.DataTypeConversion5_n[4] = kaiguangai_B.sf_15.ggyichang;
    kaiguangai_B.DataTypeConversion5_n[5] = kaiguangai_B.sf_15.yjyichang;

    /* DataTypeConversion: '<S15>/Data Type Conversion6' */
    kaiguangai_B.DataTypeConversion6_d[0] = kaiguangai_B.sf_16.skyichang;
    kaiguangai_B.DataTypeConversion6_d[1] = kaiguangai_B.sf_16.kgyichang;
    kaiguangai_B.DataTypeConversion6_d[2] = kaiguangai_B.sf_16.sdyichang;
    kaiguangai_B.DataTypeConversion6_d[3] = kaiguangai_B.sf_16.jsyichang;
    kaiguangai_B.DataTypeConversion6_d[4] = kaiguangai_B.sf_16.ggyichang;
    kaiguangai_B.DataTypeConversion6_d[5] = kaiguangai_B.sf_16.yjyichang;

    /* DataTypeConversion: '<S15>/Data Type Conversion7' */
    kaiguangai_B.DataTypeConversion7[0] = kaiguangai_B.sf_17.skyichang;
    kaiguangai_B.DataTypeConversion7[1] = kaiguangai_B.sf_17.kgyichang;
    kaiguangai_B.DataTypeConversion7[2] = kaiguangai_B.sf_17.sdyichang;
    kaiguangai_B.DataTypeConversion7[3] = kaiguangai_B.sf_17.jsyichang;
    kaiguangai_B.DataTypeConversion7[4] = kaiguangai_B.sf_17.ggyichang;
    kaiguangai_B.DataTypeConversion7[5] = kaiguangai_B.sf_17.yjyichang;

    /* DataTypeConversion: '<S15>/Data Type Conversion8' */
    kaiguangai_B.DataTypeConversion8[0] = kaiguangai_B.sf_13.skyichang;
    kaiguangai_B.DataTypeConversion8[1] = kaiguangai_B.sf_13.kgyichang;
    kaiguangai_B.DataTypeConversion8[2] = kaiguangai_B.sf_13.sdyichang;
    kaiguangai_B.DataTypeConversion8[3] = kaiguangai_B.sf_13.jsyichang;
    kaiguangai_B.DataTypeConversion8[4] = kaiguangai_B.sf_13.ggyichang;
    kaiguangai_B.DataTypeConversion8[5] = kaiguangai_B.sf_13.yjyichang;

    /* Logic: '<S15>/Logical Operator' */
    kaiguangai_B.LogicalOperator_c = ((kaiguangai_B.sf_1.skhx != 0.0) ||
      (kaiguangai_B.sf_11.skhx != 0.0) || (kaiguangai_B.sf_12.skhx != 0.0) ||
      (kaiguangai_B.sf_13.skhx != 0.0) || (kaiguangai_B.sf_14.skhx != 0.0) ||
      (kaiguangai_B.sf_15.skhx != 0.0) || (kaiguangai_B.sf_16.skhx != 0.0) ||
      (kaiguangai_B.sf_17.skhx != 0.0));

    /* Logic: '<S15>/Logical Operator1' */
    kaiguangai_B.LogicalOperator1_i = ((kaiguangai_B.sf_1.kghx != 0.0) ||
      (kaiguangai_B.sf_11.kghx != 0.0) || (kaiguangai_B.sf_12.kghx != 0.0) ||
      (kaiguangai_B.sf_13.kghx != 0.0) || (kaiguangai_B.sf_14.kghx != 0.0) ||
      (kaiguangai_B.sf_15.kghx != 0.0) || (kaiguangai_B.sf_16.kghx != 0.0) ||
      (kaiguangai_B.sf_17.kghx != 0.0));

    /* Logic: '<S15>/Logical Operator2' */
    kaiguangai_B.LogicalOperator2_k = ((kaiguangai_B.sf_1.yjhx != 0.0) ||
      (kaiguangai_B.sf_11.yjhx != 0.0) || (kaiguangai_B.sf_12.yjhx != 0.0) ||
      (kaiguangai_B.sf_13.yjhx != 0.0) || (kaiguangai_B.sf_14.yjhx != 0.0) ||
      (kaiguangai_B.sf_15.yjhx != 0.0) || (kaiguangai_B.sf_16.yjhx != 0.0) ||
      (kaiguangai_B.sf_17.yjhx != 0.0));

    /* Logic: '<S15>/Logical Operator3' */
    kaiguangai_B.LogicalOperator3_p = ((kaiguangai_B.sf_1.gghx != 0.0) ||
      (kaiguangai_B.sf_11.gghx != 0.0) || (kaiguangai_B.sf_12.gghx != 0.0) ||
      (kaiguangai_B.sf_13.gghx != 0.0) || (kaiguangai_B.sf_14.gghx != 0.0) ||
      (kaiguangai_B.sf_15.gghx != 0.0) || (kaiguangai_B.sf_16.gghx != 0.0) ||
      (kaiguangai_B.sf_17.gghx != 0.0));
    srUpdateBC(kaiguangai_DW.zidong_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<S4>/zidong' */

  /* Memory: '<S32>/2' */
  kaiguangai_B.u_gs = kaiguangai_DW.u_PreviousInput_o;

  /* Memory: '<S32>/3' */
  kaiguangai_B.u_n = kaiguangai_DW.u_PreviousInput_h;

  /* Memory: '<S32>/4' */
  kaiguangai_B.u_k = kaiguangai_DW.u_PreviousInput_js;

  /* Memory: '<S32>/5' */
  kaiguangai_B.u_ni = kaiguangai_DW.u_PreviousInput_p;

  /* Memory: '<S32>/6' */
  kaiguangai_B.u_l4 = kaiguangai_DW.u_PreviousInput_bm;

  /* Logic: '<S32>/Logical Operator1' */
  kaiguangai_B.LogicalOperator1_k = ((kaiguangai_B.u_gs != 0.0) ||
    (kaiguangai_B.u_n != 0.0) || (kaiguangai_B.u_k != 0.0) || (kaiguangai_B.u_ni
    != 0.0) || (kaiguangai_B.u_l4 != 0.0));

  /* Switch: '<S32>/Switch1' incorporates:
   *  Constant: '<S32>/Constant12'
   *  Constant: '<S5>/songkai'
   */
  if (kaiguangai_B.LogicalOperator1_k) {
    kaiguangai_B.Switch1_d = kaiguangai_P.Constant12_Value;
  } else {
    kaiguangai_B.Switch1_d = kaiguangai_P.songkai_Value;
  }

  /* End of Switch: '<S32>/Switch1' */

  /* Memory: '<S32>/1' */
  kaiguangai_B.u_dd = kaiguangai_DW.u_PreviousInput_f;

  /* Logic: '<S32>/Logical Operator2' */
  kaiguangai_B.LogicalOperator2_j = ((kaiguangai_B.u_dd != 0.0) ||
    (kaiguangai_B.u_n != 0.0) || (kaiguangai_B.u_k != 0.0) || (kaiguangai_B.u_ni
    != 0.0) || (kaiguangai_B.u_l4 != 0.0));

  /* Switch: '<S32>/Switch2' incorporates:
   *  Constant: '<S32>/Constant16'
   *  Constant: '<S5>/kaigai'
   */
  if (kaiguangai_B.LogicalOperator2_j) {
    kaiguangai_B.Switch2_d = kaiguangai_P.Constant16_Value;
  } else {
    kaiguangai_B.Switch2_d = kaiguangai_P.kaigai_Value;
  }

  /* End of Switch: '<S32>/Switch2' */

  /* Logic: '<S32>/Logical Operator3' */
  kaiguangai_B.LogicalOperator3_j = ((kaiguangai_B.u_dd != 0.0) ||
    (kaiguangai_B.u_gs != 0.0) || (kaiguangai_B.u_k != 0.0) ||
    (kaiguangai_B.u_ni != 0.0) || (kaiguangai_B.u_l4 != 0.0));

  /* Switch: '<S32>/Switch3' incorporates:
   *  Constant: '<S32>/Constant13'
   *  Constant: '<S5>/suoding'
   */
  if (kaiguangai_B.LogicalOperator3_j) {
    kaiguangai_B.Switch3_p = kaiguangai_P.Constant13_Value;
  } else {
    kaiguangai_B.Switch3_p = kaiguangai_P.suoding_Value;
  }

  /* End of Switch: '<S32>/Switch3' */

  /* Logic: '<S32>/Logical Operator4' */
  kaiguangai_B.LogicalOperator4_n = ((kaiguangai_B.u_dd != 0.0) ||
    (kaiguangai_B.u_gs != 0.0) || (kaiguangai_B.u_n != 0.0) ||
    (kaiguangai_B.u_ni != 0.0) || (kaiguangai_B.u_l4 != 0.0));

  /* Switch: '<S32>/Switch4' incorporates:
   *  Constant: '<S32>/Constant17'
   *  Constant: '<S5>/jiesuo'
   */
  if (kaiguangai_B.LogicalOperator4_n) {
    kaiguangai_B.Switch4_k = kaiguangai_P.Constant17_Value;
  } else {
    kaiguangai_B.Switch4_k = kaiguangai_P.jiesuo_Value;
  }

  /* End of Switch: '<S32>/Switch4' */

  /* Logic: '<S32>/Logical Operator5' */
  kaiguangai_B.LogicalOperator5_a = ((kaiguangai_B.u_dd != 0.0) ||
    (kaiguangai_B.u_gs != 0.0) || (kaiguangai_B.u_n != 0.0) || (kaiguangai_B.u_k
    != 0.0) || (kaiguangai_B.u_l4 != 0.0));

  /* Switch: '<S32>/Switch5' incorporates:
   *  Constant: '<S32>/Constant18'
   *  Constant: '<S5>/guangai'
   */
  if (kaiguangai_B.LogicalOperator5_a) {
    kaiguangai_B.Switch5_h = kaiguangai_P.Constant18_Value;
  } else {
    kaiguangai_B.Switch5_h = kaiguangai_P.guangai_Value;
  }

  /* End of Switch: '<S32>/Switch5' */

  /* Logic: '<S32>/Logical Operator6' */
  kaiguangai_B.LogicalOperator6_n = ((kaiguangai_B.u_dd != 0.0) ||
    (kaiguangai_B.u_gs != 0.0) || (kaiguangai_B.u_n != 0.0) || (kaiguangai_B.u_k
    != 0.0) || (kaiguangai_B.u_ni != 0.0));

  /* Switch: '<S32>/Switch6' incorporates:
   *  Constant: '<S32>/Constant19'
   *  Constant: '<S5>/yajin'
   */
  if (kaiguangai_B.LogicalOperator6_n) {
    kaiguangai_B.Switch6_c = kaiguangai_P.Constant19_Value;
  } else {
    kaiguangai_B.Switch6_c = kaiguangai_P.yajin_Value;
  }

  /* End of Switch: '<S32>/Switch6' */

  /* Product: '<S5>/Product' incorporates:
   *  Constant: '<S5>/s1'
   */
  kaiguangai_B.Product_g[0] = kaiguangai_B.Switch1_d * kaiguangai_P.s1_Value_d;
  kaiguangai_B.Product_g[1] = kaiguangai_B.Switch2_d * kaiguangai_P.s1_Value_d;
  kaiguangai_B.Product_g[2] = kaiguangai_B.Switch3_p * kaiguangai_P.s1_Value_d;
  kaiguangai_B.Product_g[3] = kaiguangai_B.Switch4_k * kaiguangai_P.s1_Value_d;
  kaiguangai_B.Product_g[4] = kaiguangai_B.Switch5_h * kaiguangai_P.s1_Value_d;
  kaiguangai_B.Product_g[5] = kaiguangai_B.Switch6_c * kaiguangai_P.s1_Value_d;

  /* Product: '<S5>/Product1' incorporates:
   *  Constant: '<S5>/s2'
   */
  kaiguangai_B.Product1_k[0] = kaiguangai_B.Switch1_d * kaiguangai_P.s2_Value_o;
  kaiguangai_B.Product1_k[1] = kaiguangai_B.Switch2_d * kaiguangai_P.s2_Value_o;
  kaiguangai_B.Product1_k[2] = kaiguangai_B.Switch3_p * kaiguangai_P.s2_Value_o;
  kaiguangai_B.Product1_k[3] = kaiguangai_B.Switch4_k * kaiguangai_P.s2_Value_o;
  kaiguangai_B.Product1_k[4] = kaiguangai_B.Switch5_h * kaiguangai_P.s2_Value_o;
  kaiguangai_B.Product1_k[5] = kaiguangai_B.Switch6_c * kaiguangai_P.s2_Value_o;

  /* Product: '<S5>/Product2' incorporates:
   *  Constant: '<S5>/s3'
   */
  kaiguangai_B.Product2_m[0] = kaiguangai_B.Switch1_d * kaiguangai_P.s3_Value_d;
  kaiguangai_B.Product2_m[1] = kaiguangai_B.Switch2_d * kaiguangai_P.s3_Value_d;
  kaiguangai_B.Product2_m[2] = kaiguangai_B.Switch3_p * kaiguangai_P.s3_Value_d;
  kaiguangai_B.Product2_m[3] = kaiguangai_B.Switch4_k * kaiguangai_P.s3_Value_d;
  kaiguangai_B.Product2_m[4] = kaiguangai_B.Switch5_h * kaiguangai_P.s3_Value_d;
  kaiguangai_B.Product2_m[5] = kaiguangai_B.Switch6_c * kaiguangai_P.s3_Value_d;

  /* Product: '<S5>/Product3' incorporates:
   *  Constant: '<S5>/s4'
   */
  kaiguangai_B.Product3_p[0] = kaiguangai_B.Switch1_d * kaiguangai_P.s4_Value_n;
  kaiguangai_B.Product3_p[1] = kaiguangai_B.Switch2_d * kaiguangai_P.s4_Value_n;
  kaiguangai_B.Product3_p[2] = kaiguangai_B.Switch3_p * kaiguangai_P.s4_Value_n;
  kaiguangai_B.Product3_p[3] = kaiguangai_B.Switch4_k * kaiguangai_P.s4_Value_n;
  kaiguangai_B.Product3_p[4] = kaiguangai_B.Switch5_h * kaiguangai_P.s4_Value_n;
  kaiguangai_B.Product3_p[5] = kaiguangai_B.Switch6_c * kaiguangai_P.s4_Value_n;

  /* Product: '<S5>/Product4' incorporates:
   *  Constant: '<S5>/s5'
   */
  kaiguangai_B.Product4_l[0] = kaiguangai_B.Switch1_d * kaiguangai_P.s5_Value_j;
  kaiguangai_B.Product4_l[1] = kaiguangai_B.Switch2_d * kaiguangai_P.s5_Value_j;
  kaiguangai_B.Product4_l[2] = kaiguangai_B.Switch3_p * kaiguangai_P.s5_Value_j;
  kaiguangai_B.Product4_l[3] = kaiguangai_B.Switch4_k * kaiguangai_P.s5_Value_j;
  kaiguangai_B.Product4_l[4] = kaiguangai_B.Switch5_h * kaiguangai_P.s5_Value_j;
  kaiguangai_B.Product4_l[5] = kaiguangai_B.Switch6_c * kaiguangai_P.s5_Value_j;

  /* Product: '<S5>/Product5' incorporates:
   *  Constant: '<S5>/s6'
   */
  kaiguangai_B.Product5_f[0] = kaiguangai_B.Switch1_d * kaiguangai_P.s6_Value_i;
  kaiguangai_B.Product5_f[1] = kaiguangai_B.Switch2_d * kaiguangai_P.s6_Value_i;
  kaiguangai_B.Product5_f[2] = kaiguangai_B.Switch3_p * kaiguangai_P.s6_Value_i;
  kaiguangai_B.Product5_f[3] = kaiguangai_B.Switch4_k * kaiguangai_P.s6_Value_i;
  kaiguangai_B.Product5_f[4] = kaiguangai_B.Switch5_h * kaiguangai_P.s6_Value_i;
  kaiguangai_B.Product5_f[5] = kaiguangai_B.Switch6_c * kaiguangai_P.s6_Value_i;

  /* Product: '<S5>/Product6' incorporates:
   *  Constant: '<S5>/s7'
   */
  kaiguangai_B.Product6_p[0] = kaiguangai_B.Switch1_d * kaiguangai_P.s7_Value_m;
  kaiguangai_B.Product6_p[1] = kaiguangai_B.Switch2_d * kaiguangai_P.s7_Value_m;
  kaiguangai_B.Product6_p[2] = kaiguangai_B.Switch3_p * kaiguangai_P.s7_Value_m;
  kaiguangai_B.Product6_p[3] = kaiguangai_B.Switch4_k * kaiguangai_P.s7_Value_m;
  kaiguangai_B.Product6_p[4] = kaiguangai_B.Switch5_h * kaiguangai_P.s7_Value_m;
  kaiguangai_B.Product6_p[5] = kaiguangai_B.Switch6_c * kaiguangai_P.s7_Value_m;

  /* Product: '<S5>/Product7' incorporates:
   *  Constant: '<S5>/s8'
   */
  kaiguangai_B.Product7_l[0] = kaiguangai_B.Switch1_d * kaiguangai_P.s8_Value_p;
  kaiguangai_B.Product7_l[1] = kaiguangai_B.Switch2_d * kaiguangai_P.s8_Value_p;
  kaiguangai_B.Product7_l[2] = kaiguangai_B.Switch3_p * kaiguangai_P.s8_Value_p;
  kaiguangai_B.Product7_l[3] = kaiguangai_B.Switch4_k * kaiguangai_P.s8_Value_p;
  kaiguangai_B.Product7_l[4] = kaiguangai_B.Switch5_h * kaiguangai_P.s8_Value_p;
  kaiguangai_B.Product7_l[5] = kaiguangai_B.Switch6_c * kaiguangai_P.s8_Value_p;

  /* Logic: '<S4>/Logical Operator2' incorporates:
   *  Constant: '<Root>/qiehuan'
   */
  kaiguangai_B.LogicalOperator2_e = ((kaiguangai_P.qiehuan_Value != 0.0) &&
    kaiguangai_B.LogicalOperator3_e);

  /* Outputs for Enabled SubSystem: '<S4>/shoudong' incorporates:
   *  EnablePort: '<S14>/Enable'
   */
  if (kaiguangai_B.LogicalOperator2_e) {
    /* Chart: '<S14>/Chart' */
    /* Gateway: Subsystem1/shoudong/Chart */
    kaiguangai_DW.sfEvent = kaiguangai_CALL_EVENT_a;
    if (kaiguangai_DW.temporalCounter_i1 < 3U) {
      kaiguangai_DW.temporalCounter_i1++;
    }

    if (kaiguangai_DW.temporalCounter_i2 < 3U) {
      kaiguangai_DW.temporalCounter_i2++;
    }

    if (kaiguangai_DW.temporalCounter_i3 < 3U) {
      kaiguangai_DW.temporalCounter_i3++;
    }

    if (kaiguangai_DW.temporalCounter_i4 < 3U) {
      kaiguangai_DW.temporalCounter_i4++;
    }

    if (kaiguangai_DW.temporalCounter_i5 < 3U) {
      kaiguangai_DW.temporalCounter_i5++;
    }

    if (kaiguangai_DW.temporalCounter_i6 < 3U) {
      kaiguangai_DW.temporalCounter_i6++;
    }

    /* During: Subsystem1/shoudong/Chart */
    if (kaiguangai_DW.is_active_c10_kaiguangai == 0U) {
      /* Entry: Subsystem1/shoudong/Chart */
      kaiguangai_DW.is_active_c10_kaiguangai = 1U;

      /* Entry Internal: Subsystem1/shoudong/Chart */
      /* Transition: '<S16>:120' */
      kaiguangai_DW.is_c10_kaiguangai = kaiguangai_IN_off_o;

      /* Entry 'off': '<S16>:121' */
      kaiguangai_B.skhx = 0.0;
      kaiguangai_B.kghx = 0.0;
      kaiguangai_B.gghx = 0.0;
      kaiguangai_B.yjhx = 0.0;
      kaiguangai_B.kgzhiling1 = 0.0;
      kaiguangai_B.kgzhiling2 = 0.0;
      kaiguangai_B.ggzhiling1 = 0.0;
      kaiguangai_B.ggzhiling2 = 0.0;
      kaiguangai_B.skyichang = 0.0;
      kaiguangai_B.kgyichang = 0.0;
      kaiguangai_B.sdyichang = 0.0;
      kaiguangai_B.jsyichang = 0.0;
      kaiguangai_B.ggyichang = 0.0;
      kaiguangai_B.yjyichang = 0.0;
    } else {
      switch (kaiguangai_DW.is_c10_kaiguangai) {
       case kaiguangai_IN_off_o:
        /* During 'off': '<S16>:121' */
        sf_internal_predicateOutput = ((kaiguangai_B.start == 1.0) &&
          (kaiguangai_B.jieshu == 0.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S16>:122' */
          kaiguangai_DW.is_c10_kaiguangai = kaiguangai_IN_shoudong_o;

          /* Entry Internal 'shoudong': '<S16>:7' */
          kaiguangai_DW.is_active_songkai = 1U;

          /* Entry Internal 'songkai': '<S16>:1' */
          /* Transition: '<S16>:16' */
          kaiguangai_DW.is_songkai = kaiguangai_IN_off_o;

          /* Entry 'off': '<S16>:15' */
          kaiguangai_DW.is_active_kaigai = 1U;

          /* Entry Internal 'kaigai': '<S16>:32' */
          /* Transition: '<S16>:34' */
          kaiguangai_DW.is_kaigai = kaiguangai_IN_off_o;

          /* Entry 'off': '<S16>:33' */
          kaiguangai_B.kghx = 0.0;
          kaiguangai_B.kgzhiling1 = 0.0;
          kaiguangai_B.kgzhiling2 = 0.0;
          kaiguangai_DW.is_active_suoding = 1U;

          /* Entry Internal 'suoding': '<S16>:53' */
          /* Transition: '<S16>:44' */
          kaiguangai_DW.is_suoding = kaiguangai_IN_off_o;

          /* Entry 'off': '<S16>:43' */
          kaiguangai_DW.is_active_jiesuo = 1U;

          /* Entry Internal 'jiesuo': '<S16>:63' */
          /* Transition: '<S16>:54' */
          kaiguangai_DW.is_jiesuo = kaiguangai_IN_off_o;

          /* Entry 'off': '<S16>:55' */
          kaiguangai_B.skhx = 0.0;
          kaiguangai_DW.is_active_guangai = 1U;

          /* Entry Internal 'guangai': '<S16>:86' */
          /* Transition: '<S16>:77' */
          kaiguangai_DW.is_guangai = kaiguangai_IN_off_o;

          /* Entry 'off': '<S16>:76' */
          kaiguangai_B.gghx = 0.0;
          kaiguangai_B.ggzhiling1 = 0.0;
          kaiguangai_B.ggzhiling2 = 0.0;
          kaiguangai_DW.is_active_yajin = 1U;

          /* Entry Internal 'yajin': '<S16>:87' */
          /* Transition: '<S16>:89' */
          kaiguangai_DW.is_yajin = kaiguangai_IN_off_o;

          /* Entry 'off': '<S16>:88' */
          kaiguangai_B.yjhx = 0.0;
        }
        break;

       case kaiguangai_IN_off1_k:
        /* During 'off1': '<S16>:123' */
        break;

       default:
        kaiguangai_shoudong_i();
        break;
      }
    }

    /* End of Chart: '<S14>/Chart' */

    /* Chart: '<S14>/Chart1' */
    kaiguangai_Chart1(kaiguangai_B.start, kaiguangai_B.DataTypeConversion1[1],
                      kaiguangai_B.DataTypeConversion2[1],
                      kaiguangai_B.DataTypeConversion1[9],
                      kaiguangai_B.DataTypeConversion2[9],
                      kaiguangai_B.DataTypeConversion4[1],
                      kaiguangai_B.DataTypeConversion4[9],
                      kaiguangai_B.DataTypeConversion5[1],
                      kaiguangai_B.DataTypeConversion5[9],
                      kaiguangai_B.Product1_k[0], kaiguangai_B.Product1_k[1],
                      kaiguangai_B.Product1_k[2], kaiguangai_B.Product1_k[3],
                      kaiguangai_B.Product1_k[4], kaiguangai_B.Product1_k[5],
                      kaiguangai_B.jieshu, &kaiguangai_B.sf_Chart1_c,
                      &kaiguangai_DW.sf_Chart1_c);

    /* Chart: '<S14>/Chart2' */
    kaiguangai_Chart1(kaiguangai_B.start, kaiguangai_B.DataTypeConversion1[2],
                      kaiguangai_B.DataTypeConversion2[2],
                      kaiguangai_B.DataTypeConversion1[10],
                      kaiguangai_B.DataTypeConversion2[10],
                      kaiguangai_B.DataTypeConversion4[2],
                      kaiguangai_B.DataTypeConversion4[10],
                      kaiguangai_B.DataTypeConversion5[2],
                      kaiguangai_B.DataTypeConversion5[10],
                      kaiguangai_B.Product2_m[0], kaiguangai_B.Product2_m[1],
                      kaiguangai_B.Product2_m[2], kaiguangai_B.Product2_m[3],
                      kaiguangai_B.Product2_m[4], kaiguangai_B.Product2_m[5],
                      kaiguangai_B.jieshu, &kaiguangai_B.sf_Chart2,
                      &kaiguangai_DW.sf_Chart2);

    /* Chart: '<S14>/Chart3' */
    kaiguangai_Chart1(kaiguangai_B.start, kaiguangai_B.DataTypeConversion1[3],
                      kaiguangai_B.DataTypeConversion2[3],
                      kaiguangai_B.DataTypeConversion1[11],
                      kaiguangai_B.DataTypeConversion2[11],
                      kaiguangai_B.DataTypeConversion4[3],
                      kaiguangai_B.DataTypeConversion4[11],
                      kaiguangai_B.DataTypeConversion5[3],
                      kaiguangai_B.DataTypeConversion5[11],
                      kaiguangai_B.Product3_p[0], kaiguangai_B.Product3_p[1],
                      kaiguangai_B.Product3_p[2], kaiguangai_B.Product3_p[3],
                      kaiguangai_B.Product3_p[4], kaiguangai_B.Product3_p[5],
                      kaiguangai_B.jieshu, &kaiguangai_B.sf_Chart3,
                      &kaiguangai_DW.sf_Chart3);

    /* Chart: '<S14>/Chart4' */
    kaiguangai_Chart1(kaiguangai_B.start, kaiguangai_B.DataTypeConversion1[4],
                      kaiguangai_B.DataTypeConversion2[4],
                      kaiguangai_B.DataTypeConversion1[12],
                      kaiguangai_B.DataTypeConversion2[12],
                      kaiguangai_B.DataTypeConversion4[4],
                      kaiguangai_B.DataTypeConversion4[12],
                      kaiguangai_B.DataTypeConversion5[4],
                      kaiguangai_B.DataTypeConversion5[12],
                      kaiguangai_B.Product4_l[0], kaiguangai_B.Product4_l[1],
                      kaiguangai_B.Product4_l[2], kaiguangai_B.Product4_l[3],
                      kaiguangai_B.Product4_l[4], kaiguangai_B.Product4_l[5],
                      kaiguangai_B.jieshu, &kaiguangai_B.sf_Chart4,
                      &kaiguangai_DW.sf_Chart4);

    /* Chart: '<S14>/Chart5' */
    kaiguangai_Chart1(kaiguangai_B.start, kaiguangai_B.DataTypeConversion1[5],
                      kaiguangai_B.DataTypeConversion2[5],
                      kaiguangai_B.DataTypeConversion1[13],
                      kaiguangai_B.DataTypeConversion2[13],
                      kaiguangai_B.DataTypeConversion4[5],
                      kaiguangai_B.DataTypeConversion4[13],
                      kaiguangai_B.DataTypeConversion5[5],
                      kaiguangai_B.DataTypeConversion5[13],
                      kaiguangai_B.Product5_f[0], kaiguangai_B.Product5_f[1],
                      kaiguangai_B.Product5_f[2], kaiguangai_B.Product5_f[3],
                      kaiguangai_B.Product5_f[4], kaiguangai_B.Product5_f[5],
                      kaiguangai_B.jieshu, &kaiguangai_B.sf_Chart5,
                      &kaiguangai_DW.sf_Chart5);

    /* Chart: '<S14>/Chart6' */
    kaiguangai_Chart1(kaiguangai_B.start, kaiguangai_B.DataTypeConversion1[6],
                      kaiguangai_B.DataTypeConversion2[6],
                      kaiguangai_B.DataTypeConversion1[14],
                      kaiguangai_B.DataTypeConversion2[14],
                      kaiguangai_B.DataTypeConversion4[6],
                      kaiguangai_B.DataTypeConversion4[14],
                      kaiguangai_B.DataTypeConversion5[6],
                      kaiguangai_B.DataTypeConversion5[14],
                      kaiguangai_B.Product6_p[0], kaiguangai_B.Product6_p[1],
                      kaiguangai_B.Product6_p[2], kaiguangai_B.Product6_p[3],
                      kaiguangai_B.Product6_p[4], kaiguangai_B.Product6_p[5],
                      kaiguangai_B.jieshu, &kaiguangai_B.sf_Chart6,
                      &kaiguangai_DW.sf_Chart6);

    /* Chart: '<S14>/Chart7' */
    kaiguangai_Chart1(kaiguangai_B.start, kaiguangai_B.DataTypeConversion1[7],
                      kaiguangai_B.DataTypeConversion2[7],
                      kaiguangai_B.DataTypeConversion1[15],
                      kaiguangai_B.DataTypeConversion2[15],
                      kaiguangai_B.DataTypeConversion4[7],
                      kaiguangai_B.DataTypeConversion4[15],
                      kaiguangai_B.DataTypeConversion5[7],
                      kaiguangai_B.DataTypeConversion5[15],
                      kaiguangai_B.Product7_l[0], kaiguangai_B.Product7_l[1],
                      kaiguangai_B.Product7_l[2], kaiguangai_B.Product7_l[3],
                      kaiguangai_B.Product7_l[4], kaiguangai_B.Product7_l[5],
                      kaiguangai_B.jieshu, &kaiguangai_B.sf_Chart7,
                      &kaiguangai_DW.sf_Chart7);

    /* DataTypeConversion: '<S14>/Data Type Conversion1' */
    kaiguangai_B.DataTypeConversion1_a[0] = kaiguangai_B.sf_Chart6.skyichang;
    kaiguangai_B.DataTypeConversion1_a[1] = kaiguangai_B.sf_Chart6.kgyichang;
    kaiguangai_B.DataTypeConversion1_a[2] = kaiguangai_B.sf_Chart6.sdyichang;
    kaiguangai_B.DataTypeConversion1_a[3] = kaiguangai_B.sf_Chart6.jsyichang;
    kaiguangai_B.DataTypeConversion1_a[4] = kaiguangai_B.sf_Chart6.ggyichang;
    kaiguangai_B.DataTypeConversion1_a[5] = kaiguangai_B.sf_Chart6.yjyichang;

    /* DataTypeConversion: '<S14>/Data Type Conversion10' */
    kaiguangai_B.DataTypeConversion10[0] = kaiguangai_B.sf_Chart5.skyichang;
    kaiguangai_B.DataTypeConversion10[1] = kaiguangai_B.sf_Chart5.kgyichang;
    kaiguangai_B.DataTypeConversion10[2] = kaiguangai_B.sf_Chart5.sdyichang;
    kaiguangai_B.DataTypeConversion10[3] = kaiguangai_B.sf_Chart5.jsyichang;
    kaiguangai_B.DataTypeConversion10[4] = kaiguangai_B.sf_Chart5.ggyichang;
    kaiguangai_B.DataTypeConversion10[5] = kaiguangai_B.sf_Chart5.yjyichang;

    /* DataTypeConversion: '<S14>/Data Type Conversion2' */
    kaiguangai_B.DataTypeConversion2_p[0] = kaiguangai_B.sf_Chart7.skyichang;
    kaiguangai_B.DataTypeConversion2_p[1] = kaiguangai_B.sf_Chart7.kgyichang;
    kaiguangai_B.DataTypeConversion2_p[2] = kaiguangai_B.sf_Chart7.sdyichang;
    kaiguangai_B.DataTypeConversion2_p[3] = kaiguangai_B.sf_Chart7.jsyichang;
    kaiguangai_B.DataTypeConversion2_p[4] = kaiguangai_B.sf_Chart7.ggyichang;
    kaiguangai_B.DataTypeConversion2_p[5] = kaiguangai_B.sf_Chart7.yjyichang;

    /* DataTypeConversion: '<S14>/Data Type Conversion5' */
    kaiguangai_B.DataTypeConversion5_m[0] = kaiguangai_B.skyichang;
    kaiguangai_B.DataTypeConversion5_m[1] = kaiguangai_B.kgyichang;
    kaiguangai_B.DataTypeConversion5_m[2] = kaiguangai_B.sdyichang;
    kaiguangai_B.DataTypeConversion5_m[3] = kaiguangai_B.jsyichang;
    kaiguangai_B.DataTypeConversion5_m[4] = kaiguangai_B.ggyichang;
    kaiguangai_B.DataTypeConversion5_m[5] = kaiguangai_B.yjyichang;

    /* DataTypeConversion: '<S14>/Data Type Conversion6' */
    kaiguangai_B.DataTypeConversion6_nb[0] = kaiguangai_B.sf_Chart1_c.skyichang;
    kaiguangai_B.DataTypeConversion6_nb[1] = kaiguangai_B.sf_Chart1_c.kgyichang;
    kaiguangai_B.DataTypeConversion6_nb[2] = kaiguangai_B.sf_Chart1_c.sdyichang;
    kaiguangai_B.DataTypeConversion6_nb[3] = kaiguangai_B.sf_Chart1_c.jsyichang;
    kaiguangai_B.DataTypeConversion6_nb[4] = kaiguangai_B.sf_Chart1_c.ggyichang;
    kaiguangai_B.DataTypeConversion6_nb[5] = kaiguangai_B.sf_Chart1_c.yjyichang;

    /* DataTypeConversion: '<S14>/Data Type Conversion7' */
    kaiguangai_B.DataTypeConversion7_d[0] = kaiguangai_B.sf_Chart2.skyichang;
    kaiguangai_B.DataTypeConversion7_d[1] = kaiguangai_B.sf_Chart2.kgyichang;
    kaiguangai_B.DataTypeConversion7_d[2] = kaiguangai_B.sf_Chart2.sdyichang;
    kaiguangai_B.DataTypeConversion7_d[3] = kaiguangai_B.sf_Chart2.jsyichang;
    kaiguangai_B.DataTypeConversion7_d[4] = kaiguangai_B.sf_Chart2.ggyichang;
    kaiguangai_B.DataTypeConversion7_d[5] = kaiguangai_B.sf_Chart2.yjyichang;

    /* DataTypeConversion: '<S14>/Data Type Conversion8' */
    kaiguangai_B.DataTypeConversion8_a[0] = kaiguangai_B.sf_Chart3.skyichang;
    kaiguangai_B.DataTypeConversion8_a[1] = kaiguangai_B.sf_Chart3.kgyichang;
    kaiguangai_B.DataTypeConversion8_a[2] = kaiguangai_B.sf_Chart3.sdyichang;
    kaiguangai_B.DataTypeConversion8_a[3] = kaiguangai_B.sf_Chart3.jsyichang;
    kaiguangai_B.DataTypeConversion8_a[4] = kaiguangai_B.sf_Chart3.ggyichang;
    kaiguangai_B.DataTypeConversion8_a[5] = kaiguangai_B.sf_Chart3.yjyichang;

    /* DataTypeConversion: '<S14>/Data Type Conversion9' */
    kaiguangai_B.DataTypeConversion9[0] = kaiguangai_B.sf_Chart4.skyichang;
    kaiguangai_B.DataTypeConversion9[1] = kaiguangai_B.sf_Chart4.kgyichang;
    kaiguangai_B.DataTypeConversion9[2] = kaiguangai_B.sf_Chart4.sdyichang;
    kaiguangai_B.DataTypeConversion9[3] = kaiguangai_B.sf_Chart4.jsyichang;
    kaiguangai_B.DataTypeConversion9[4] = kaiguangai_B.sf_Chart4.ggyichang;
    kaiguangai_B.DataTypeConversion9[5] = kaiguangai_B.sf_Chart4.yjyichang;

    /* Logic: '<S14>/Logical Operator' */
    kaiguangai_B.LogicalOperator_p = ((kaiguangai_B.skhx != 0.0) ||
      (kaiguangai_B.sf_Chart1_c.skhx != 0.0) || (kaiguangai_B.sf_Chart2.skhx !=
      0.0) || (kaiguangai_B.sf_Chart3.skhx != 0.0) ||
      (kaiguangai_B.sf_Chart4.skhx != 0.0) || (kaiguangai_B.sf_Chart5.skhx !=
      0.0) || (kaiguangai_B.sf_Chart6.skhx != 0.0) ||
      (kaiguangai_B.sf_Chart7.skhx != 0.0));

    /* Logic: '<S14>/Logical Operator1' */
    kaiguangai_B.LogicalOperator1_f = ((kaiguangai_B.kghx != 0.0) ||
      (kaiguangai_B.sf_Chart1_c.kghx != 0.0) || (kaiguangai_B.sf_Chart2.kghx !=
      0.0) || (kaiguangai_B.sf_Chart3.kghx != 0.0) ||
      (kaiguangai_B.sf_Chart4.kghx != 0.0) || (kaiguangai_B.sf_Chart5.kghx !=
      0.0) || (kaiguangai_B.sf_Chart6.kghx != 0.0) ||
      (kaiguangai_B.sf_Chart7.kghx != 0.0));

    /* Logic: '<S14>/Logical Operator2' */
    kaiguangai_B.LogicalOperator2_f = ((kaiguangai_B.yjhx != 0.0) ||
      (kaiguangai_B.sf_Chart1_c.yjhx != 0.0) || (kaiguangai_B.sf_Chart2.yjhx !=
      0.0) || (kaiguangai_B.sf_Chart3.yjhx != 0.0) ||
      (kaiguangai_B.sf_Chart4.yjhx != 0.0) || (kaiguangai_B.sf_Chart5.yjhx !=
      0.0) || (kaiguangai_B.sf_Chart6.yjhx != 0.0) ||
      (kaiguangai_B.sf_Chart7.yjhx != 0.0));

    /* Logic: '<S14>/Logical Operator3' */
    kaiguangai_B.LogicalOperator3_d = ((kaiguangai_B.gghx != 0.0) ||
      (kaiguangai_B.sf_Chart1_c.gghx != 0.0) || (kaiguangai_B.sf_Chart2.gghx !=
      0.0) || (kaiguangai_B.sf_Chart3.gghx != 0.0) ||
      (kaiguangai_B.sf_Chart4.gghx != 0.0) || (kaiguangai_B.sf_Chart5.gghx !=
      0.0) || (kaiguangai_B.sf_Chart6.gghx != 0.0) ||
      (kaiguangai_B.sf_Chart7.gghx != 0.0));
    srUpdateBC(kaiguangai_DW.shoudong_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<S4>/shoudong' */

  /* MultiPortSwitch: '<S4>/Multiport Switch2' incorporates:
   *  Constant: '<Root>/qiehuan'
   */
  if ((int32_T)kaiguangai_P.qiehuan_Value == 0) {
    kaiguangai_B.MultiportSwitch2[0] = kaiguangai_B.sf_1.skt;
    kaiguangai_B.MultiportSwitch2[1] = kaiguangai_B.sf_1.kgt;
    kaiguangai_B.MultiportSwitch2[2] = kaiguangai_B.sf_1.sdt;
    kaiguangai_B.MultiportSwitch2[3] = kaiguangai_B.sf_1.jst;
    kaiguangai_B.MultiportSwitch2[4] = kaiguangai_B.sf_1.ggt;
    kaiguangai_B.MultiportSwitch2[5] = kaiguangai_B.sf_1.yjt;
    kaiguangai_B.MultiportSwitch2[6] = kaiguangai_B.sf_11.skt;
    kaiguangai_B.MultiportSwitch2[7] = kaiguangai_B.sf_11.kgt;
    kaiguangai_B.MultiportSwitch2[8] = kaiguangai_B.sf_11.sdt;
    kaiguangai_B.MultiportSwitch2[9] = kaiguangai_B.sf_11.jst;
    kaiguangai_B.MultiportSwitch2[10] = kaiguangai_B.sf_11.ggt;
    kaiguangai_B.MultiportSwitch2[11] = kaiguangai_B.sf_11.yjt;
    kaiguangai_B.MultiportSwitch2[12] = kaiguangai_B.sf_12.skt;
    kaiguangai_B.MultiportSwitch2[13] = kaiguangai_B.sf_12.kgt;
    kaiguangai_B.MultiportSwitch2[14] = kaiguangai_B.sf_12.sdt;
    kaiguangai_B.MultiportSwitch2[15] = kaiguangai_B.sf_12.jst;
    kaiguangai_B.MultiportSwitch2[16] = kaiguangai_B.sf_12.ggt;
    kaiguangai_B.MultiportSwitch2[17] = kaiguangai_B.sf_12.yjt;
    kaiguangai_B.MultiportSwitch2[18] = kaiguangai_B.sf_13.skt;
    kaiguangai_B.MultiportSwitch2[19] = kaiguangai_B.sf_13.kgt;
    kaiguangai_B.MultiportSwitch2[20] = kaiguangai_B.sf_13.sdt;
    kaiguangai_B.MultiportSwitch2[21] = kaiguangai_B.sf_13.jst;
    kaiguangai_B.MultiportSwitch2[22] = kaiguangai_B.sf_13.ggt;
    kaiguangai_B.MultiportSwitch2[23] = kaiguangai_B.sf_13.yjt;
    kaiguangai_B.MultiportSwitch2[24] = kaiguangai_B.sf_14.skt;
    kaiguangai_B.MultiportSwitch2[25] = kaiguangai_B.sf_14.kgt;
    kaiguangai_B.MultiportSwitch2[26] = kaiguangai_B.sf_14.sdt;
    kaiguangai_B.MultiportSwitch2[27] = kaiguangai_B.sf_14.jst;
    kaiguangai_B.MultiportSwitch2[28] = kaiguangai_B.sf_14.ggt;
    kaiguangai_B.MultiportSwitch2[29] = kaiguangai_B.sf_14.yjt;
    kaiguangai_B.MultiportSwitch2[30] = kaiguangai_B.sf_15.skt;
    kaiguangai_B.MultiportSwitch2[31] = kaiguangai_B.sf_15.kgt;
    kaiguangai_B.MultiportSwitch2[32] = kaiguangai_B.sf_15.sdt;
    kaiguangai_B.MultiportSwitch2[33] = kaiguangai_B.sf_15.jst;
    kaiguangai_B.MultiportSwitch2[34] = kaiguangai_B.sf_15.ggt;
    kaiguangai_B.MultiportSwitch2[35] = kaiguangai_B.sf_15.yjt;
    kaiguangai_B.MultiportSwitch2[36] = kaiguangai_B.sf_16.skt;
    kaiguangai_B.MultiportSwitch2[37] = kaiguangai_B.sf_16.kgt;
    kaiguangai_B.MultiportSwitch2[38] = kaiguangai_B.sf_16.sdt;
    kaiguangai_B.MultiportSwitch2[39] = kaiguangai_B.sf_16.jst;
    kaiguangai_B.MultiportSwitch2[40] = kaiguangai_B.sf_16.ggt;
    kaiguangai_B.MultiportSwitch2[41] = kaiguangai_B.sf_16.yjt;
    kaiguangai_B.MultiportSwitch2[42] = kaiguangai_B.sf_17.skt;
    kaiguangai_B.MultiportSwitch2[43] = kaiguangai_B.sf_17.kgt;
    kaiguangai_B.MultiportSwitch2[44] = kaiguangai_B.sf_17.sdt;
    kaiguangai_B.MultiportSwitch2[45] = kaiguangai_B.sf_17.jst;
    kaiguangai_B.MultiportSwitch2[46] = kaiguangai_B.sf_17.ggt;
    kaiguangai_B.MultiportSwitch2[47] = kaiguangai_B.sf_17.yjt;
  } else {
    kaiguangai_B.MultiportSwitch2[0] = kaiguangai_B.skt;
    kaiguangai_B.MultiportSwitch2[1] = kaiguangai_B.kgt;
    kaiguangai_B.MultiportSwitch2[2] = kaiguangai_B.sdt;
    kaiguangai_B.MultiportSwitch2[3] = kaiguangai_B.jst;
    kaiguangai_B.MultiportSwitch2[4] = kaiguangai_B.ggt;
    kaiguangai_B.MultiportSwitch2[5] = kaiguangai_B.yjt;
    kaiguangai_B.MultiportSwitch2[6] = kaiguangai_B.sf_Chart1_c.skt;
    kaiguangai_B.MultiportSwitch2[7] = kaiguangai_B.sf_Chart1_c.kgt;
    kaiguangai_B.MultiportSwitch2[8] = kaiguangai_B.sf_Chart1_c.sdt;
    kaiguangai_B.MultiportSwitch2[9] = kaiguangai_B.sf_Chart1_c.jst;
    kaiguangai_B.MultiportSwitch2[10] = kaiguangai_B.sf_Chart1_c.ggt;
    kaiguangai_B.MultiportSwitch2[11] = kaiguangai_B.sf_Chart1_c.yjt;
    kaiguangai_B.MultiportSwitch2[12] = kaiguangai_B.sf_Chart2.skt;
    kaiguangai_B.MultiportSwitch2[13] = kaiguangai_B.sf_Chart2.kgt;
    kaiguangai_B.MultiportSwitch2[14] = kaiguangai_B.sf_Chart2.sdt;
    kaiguangai_B.MultiportSwitch2[15] = kaiguangai_B.sf_Chart2.jst;
    kaiguangai_B.MultiportSwitch2[16] = kaiguangai_B.sf_Chart2.ggt;
    kaiguangai_B.MultiportSwitch2[17] = kaiguangai_B.sf_Chart2.yjt;
    kaiguangai_B.MultiportSwitch2[18] = kaiguangai_B.sf_Chart3.skt;
    kaiguangai_B.MultiportSwitch2[19] = kaiguangai_B.sf_Chart3.kgt;
    kaiguangai_B.MultiportSwitch2[20] = kaiguangai_B.sf_Chart3.sdt;
    kaiguangai_B.MultiportSwitch2[21] = kaiguangai_B.sf_Chart3.jst;
    kaiguangai_B.MultiportSwitch2[22] = kaiguangai_B.sf_Chart3.ggt;
    kaiguangai_B.MultiportSwitch2[23] = kaiguangai_B.sf_Chart3.yjt;
    kaiguangai_B.MultiportSwitch2[24] = kaiguangai_B.sf_Chart4.skt;
    kaiguangai_B.MultiportSwitch2[25] = kaiguangai_B.sf_Chart4.kgt;
    kaiguangai_B.MultiportSwitch2[26] = kaiguangai_B.sf_Chart4.sdt;
    kaiguangai_B.MultiportSwitch2[27] = kaiguangai_B.sf_Chart4.jst;
    kaiguangai_B.MultiportSwitch2[28] = kaiguangai_B.sf_Chart4.ggt;
    kaiguangai_B.MultiportSwitch2[29] = kaiguangai_B.sf_Chart4.yjt;
    kaiguangai_B.MultiportSwitch2[30] = kaiguangai_B.sf_Chart5.skt;
    kaiguangai_B.MultiportSwitch2[31] = kaiguangai_B.sf_Chart5.kgt;
    kaiguangai_B.MultiportSwitch2[32] = kaiguangai_B.sf_Chart5.sdt;
    kaiguangai_B.MultiportSwitch2[33] = kaiguangai_B.sf_Chart5.jst;
    kaiguangai_B.MultiportSwitch2[34] = kaiguangai_B.sf_Chart5.ggt;
    kaiguangai_B.MultiportSwitch2[35] = kaiguangai_B.sf_Chart5.yjt;
    kaiguangai_B.MultiportSwitch2[36] = kaiguangai_B.sf_Chart6.skt;
    kaiguangai_B.MultiportSwitch2[37] = kaiguangai_B.sf_Chart6.kgt;
    kaiguangai_B.MultiportSwitch2[38] = kaiguangai_B.sf_Chart6.sdt;
    kaiguangai_B.MultiportSwitch2[39] = kaiguangai_B.sf_Chart6.jst;
    kaiguangai_B.MultiportSwitch2[40] = kaiguangai_B.sf_Chart6.ggt;
    kaiguangai_B.MultiportSwitch2[41] = kaiguangai_B.sf_Chart6.yjt;
    kaiguangai_B.MultiportSwitch2[42] = kaiguangai_B.sf_Chart7.skt;
    kaiguangai_B.MultiportSwitch2[43] = kaiguangai_B.sf_Chart7.kgt;
    kaiguangai_B.MultiportSwitch2[44] = kaiguangai_B.sf_Chart7.sdt;
    kaiguangai_B.MultiportSwitch2[45] = kaiguangai_B.sf_Chart7.jst;
    kaiguangai_B.MultiportSwitch2[46] = kaiguangai_B.sf_Chart7.ggt;
    kaiguangai_B.MultiportSwitch2[47] = kaiguangai_B.sf_Chart7.yjt;
  }

  /* End of MultiPortSwitch: '<S4>/Multiport Switch2' */

  /* MultiPortSwitch: '<Root>/Multiport Switch' incorporates:
   *  Constant: '<Root>/Switch'
   */
  switch ((int32_T)kaiguangai_P.Switch_Value) {
   case 1:
    for (i = 0; i < 6; i++) {
      kaiguangai_B.MultiportSwitch[i] = kaiguangai_B.MultiportSwitch2[i];
    }
    break;

   case 2:
    for (i = 0; i < 6; i++) {
      kaiguangai_B.MultiportSwitch[i] = kaiguangai_B.MultiportSwitch2[i + 6];
    }
    break;

   case 3:
    for (i = 0; i < 6; i++) {
      kaiguangai_B.MultiportSwitch[i] = kaiguangai_B.MultiportSwitch2[i + 12];
    }
    break;

   case 4:
    for (i = 0; i < 6; i++) {
      kaiguangai_B.MultiportSwitch[i] = kaiguangai_B.MultiportSwitch2[i + 18];
    }
    break;

   case 5:
    for (i = 0; i < 6; i++) {
      kaiguangai_B.MultiportSwitch[i] = kaiguangai_B.MultiportSwitch2[i + 24];
    }
    break;

   case 6:
    for (i = 0; i < 6; i++) {
      kaiguangai_B.MultiportSwitch[i] = kaiguangai_B.MultiportSwitch2[i + 30];
    }
    break;

   case 7:
    for (i = 0; i < 6; i++) {
      kaiguangai_B.MultiportSwitch[i] = kaiguangai_B.MultiportSwitch2[i + 36];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      kaiguangai_B.MultiportSwitch[i] = kaiguangai_B.MultiportSwitch2[i + 42];
    }
    break;
  }

  /* End of MultiPortSwitch: '<Root>/Multiport Switch' */

  /* DataTypeConversion: '<Root>/Data Type Conversion' */
  for (i = 0; i < 6; i++) {
    kaiguangai_B.DataTypeConversion[i] = kaiguangai_B.MultiportSwitch[i];
  }

  /* End of DataTypeConversion: '<Root>/Data Type Conversion' */
  /* ok to acquire for <S2>/S-Function */
  kaiguangai_DW.SFunction_IWORK.AcquireOK = 1;

  /* ok to acquire for <S3>/S-Function */
  kaiguangai_DW.SFunction_IWORK_f.AcquireOK = 1;

  /* MultiPortSwitch: '<Root>/Multiport Switch1' incorporates:
   *  Constant: '<Root>/Switch1'
   */
  switch ((int32_T)kaiguangai_P.Switch1_Value) {
   case 1:
    kaiguangai_B.MultiportSwitch1[0] = kaiguangai_B.DataTypeConversion1[0];
    kaiguangai_B.MultiportSwitch1[1] = kaiguangai_B.DataTypeConversion2[0];
    kaiguangai_B.MultiportSwitch1[2] = kaiguangai_B.DataTypeConversion1[8];
    kaiguangai_B.MultiportSwitch1[3] = kaiguangai_B.DataTypeConversion2[8];
    kaiguangai_B.MultiportSwitch1[4] = kaiguangai_B.DataTypeConversion3[0];
    kaiguangai_B.MultiportSwitch1[5] = kaiguangai_B.DataTypeConversion3[8];
    kaiguangai_B.MultiportSwitch1[6] = kaiguangai_B.DataTypeConversion4[0];
    kaiguangai_B.MultiportSwitch1[7] = kaiguangai_B.DataTypeConversion4[8];
    kaiguangai_B.MultiportSwitch1[8] = kaiguangai_B.DataTypeConversion5[0];
    kaiguangai_B.MultiportSwitch1[9] = kaiguangai_B.DataTypeConversion5[8];
    break;

   case 2:
    kaiguangai_B.MultiportSwitch1[0] = kaiguangai_B.DataTypeConversion1[1];
    kaiguangai_B.MultiportSwitch1[1] = kaiguangai_B.DataTypeConversion2[1];
    kaiguangai_B.MultiportSwitch1[2] = kaiguangai_B.DataTypeConversion1[9];
    kaiguangai_B.MultiportSwitch1[3] = kaiguangai_B.DataTypeConversion2[9];
    kaiguangai_B.MultiportSwitch1[4] = kaiguangai_B.DataTypeConversion3[1];
    kaiguangai_B.MultiportSwitch1[5] = kaiguangai_B.DataTypeConversion3[9];
    kaiguangai_B.MultiportSwitch1[6] = kaiguangai_B.DataTypeConversion4[1];
    kaiguangai_B.MultiportSwitch1[7] = kaiguangai_B.DataTypeConversion4[9];
    kaiguangai_B.MultiportSwitch1[8] = kaiguangai_B.DataTypeConversion5[1];
    kaiguangai_B.MultiportSwitch1[9] = kaiguangai_B.DataTypeConversion5[9];
    break;

   case 3:
    kaiguangai_B.MultiportSwitch1[0] = kaiguangai_B.DataTypeConversion1[2];
    kaiguangai_B.MultiportSwitch1[1] = kaiguangai_B.DataTypeConversion2[2];
    kaiguangai_B.MultiportSwitch1[2] = kaiguangai_B.DataTypeConversion1[10];
    kaiguangai_B.MultiportSwitch1[3] = kaiguangai_B.DataTypeConversion2[10];
    kaiguangai_B.MultiportSwitch1[4] = kaiguangai_B.DataTypeConversion3[2];
    kaiguangai_B.MultiportSwitch1[5] = kaiguangai_B.DataTypeConversion3[10];
    kaiguangai_B.MultiportSwitch1[6] = kaiguangai_B.DataTypeConversion4[2];
    kaiguangai_B.MultiportSwitch1[7] = kaiguangai_B.DataTypeConversion4[10];
    kaiguangai_B.MultiportSwitch1[8] = kaiguangai_B.DataTypeConversion5[2];
    kaiguangai_B.MultiportSwitch1[9] = kaiguangai_B.DataTypeConversion5[10];
    break;

   case 4:
    kaiguangai_B.MultiportSwitch1[0] = kaiguangai_B.DataTypeConversion1[3];
    kaiguangai_B.MultiportSwitch1[1] = kaiguangai_B.DataTypeConversion2[3];
    kaiguangai_B.MultiportSwitch1[2] = kaiguangai_B.DataTypeConversion1[11];
    kaiguangai_B.MultiportSwitch1[3] = kaiguangai_B.DataTypeConversion2[11];
    kaiguangai_B.MultiportSwitch1[4] = kaiguangai_B.DataTypeConversion3[3];
    kaiguangai_B.MultiportSwitch1[5] = kaiguangai_B.DataTypeConversion3[11];
    kaiguangai_B.MultiportSwitch1[6] = kaiguangai_B.DataTypeConversion4[3];
    kaiguangai_B.MultiportSwitch1[7] = kaiguangai_B.DataTypeConversion4[11];
    kaiguangai_B.MultiportSwitch1[8] = kaiguangai_B.DataTypeConversion5[3];
    kaiguangai_B.MultiportSwitch1[9] = kaiguangai_B.DataTypeConversion5[11];
    break;

   case 5:
    kaiguangai_B.MultiportSwitch1[0] = kaiguangai_B.DataTypeConversion1[4];
    kaiguangai_B.MultiportSwitch1[1] = kaiguangai_B.DataTypeConversion2[4];
    kaiguangai_B.MultiportSwitch1[2] = kaiguangai_B.DataTypeConversion1[12];
    kaiguangai_B.MultiportSwitch1[3] = kaiguangai_B.DataTypeConversion2[12];
    kaiguangai_B.MultiportSwitch1[4] = kaiguangai_B.DataTypeConversion3[4];
    kaiguangai_B.MultiportSwitch1[5] = kaiguangai_B.DataTypeConversion3[12];
    kaiguangai_B.MultiportSwitch1[6] = kaiguangai_B.DataTypeConversion4[4];
    kaiguangai_B.MultiportSwitch1[7] = kaiguangai_B.DataTypeConversion4[12];
    kaiguangai_B.MultiportSwitch1[8] = kaiguangai_B.DataTypeConversion5[4];
    kaiguangai_B.MultiportSwitch1[9] = kaiguangai_B.DataTypeConversion5[12];
    break;

   case 6:
    kaiguangai_B.MultiportSwitch1[0] = kaiguangai_B.DataTypeConversion1[5];
    kaiguangai_B.MultiportSwitch1[1] = kaiguangai_B.DataTypeConversion2[5];
    kaiguangai_B.MultiportSwitch1[2] = kaiguangai_B.DataTypeConversion1[13];
    kaiguangai_B.MultiportSwitch1[3] = kaiguangai_B.DataTypeConversion2[13];
    kaiguangai_B.MultiportSwitch1[4] = kaiguangai_B.DataTypeConversion3[5];
    kaiguangai_B.MultiportSwitch1[5] = kaiguangai_B.DataTypeConversion3[13];
    kaiguangai_B.MultiportSwitch1[6] = kaiguangai_B.DataTypeConversion4[5];
    kaiguangai_B.MultiportSwitch1[7] = kaiguangai_B.DataTypeConversion4[13];
    kaiguangai_B.MultiportSwitch1[8] = kaiguangai_B.DataTypeConversion5[5];
    kaiguangai_B.MultiportSwitch1[9] = kaiguangai_B.DataTypeConversion5[13];
    break;

   case 7:
    kaiguangai_B.MultiportSwitch1[0] = kaiguangai_B.DataTypeConversion1[6];
    kaiguangai_B.MultiportSwitch1[1] = kaiguangai_B.DataTypeConversion2[6];
    kaiguangai_B.MultiportSwitch1[2] = kaiguangai_B.DataTypeConversion1[14];
    kaiguangai_B.MultiportSwitch1[3] = kaiguangai_B.DataTypeConversion2[14];
    kaiguangai_B.MultiportSwitch1[4] = kaiguangai_B.DataTypeConversion3[6];
    kaiguangai_B.MultiportSwitch1[5] = kaiguangai_B.DataTypeConversion3[14];
    kaiguangai_B.MultiportSwitch1[6] = kaiguangai_B.DataTypeConversion4[6];
    kaiguangai_B.MultiportSwitch1[7] = kaiguangai_B.DataTypeConversion4[14];
    kaiguangai_B.MultiportSwitch1[8] = kaiguangai_B.DataTypeConversion5[6];
    kaiguangai_B.MultiportSwitch1[9] = kaiguangai_B.DataTypeConversion5[14];
    break;

   default:
    kaiguangai_B.MultiportSwitch1[0] = kaiguangai_B.DataTypeConversion1[7];
    kaiguangai_B.MultiportSwitch1[1] = kaiguangai_B.DataTypeConversion2[7];
    kaiguangai_B.MultiportSwitch1[2] = kaiguangai_B.DataTypeConversion1[15];
    kaiguangai_B.MultiportSwitch1[3] = kaiguangai_B.DataTypeConversion2[15];
    kaiguangai_B.MultiportSwitch1[4] = kaiguangai_B.DataTypeConversion3[7];
    kaiguangai_B.MultiportSwitch1[5] = kaiguangai_B.DataTypeConversion3[15];
    kaiguangai_B.MultiportSwitch1[6] = kaiguangai_B.DataTypeConversion4[7];
    kaiguangai_B.MultiportSwitch1[7] = kaiguangai_B.DataTypeConversion4[15];
    kaiguangai_B.MultiportSwitch1[8] = kaiguangai_B.DataTypeConversion5[7];
    kaiguangai_B.MultiportSwitch1[9] = kaiguangai_B.DataTypeConversion5[15];
    break;
  }

  /* End of MultiPortSwitch: '<Root>/Multiport Switch1' */

  /* DataTypeConversion: '<Root>/Data Type Conversion1' */
  memcpy(&kaiguangai_B.DataTypeConversion1_j[0], &kaiguangai_B.MultiportSwitch1
         [0], 10U * sizeof(real_T));

  /* MultiPortSwitch: '<Root>/Multiport Switch2' incorporates:
   *  Constant: '<Root>/Switch2'
   */
  switch ((int32_T)kaiguangai_P.Switch2_Value) {
   case 1:
    kaiguangai_B.MultiportSwitch2_o[0] = kaiguangai_B.memory1[0];
    kaiguangai_B.MultiportSwitch2_o[1] = kaiguangai_B.memory1[1];
    kaiguangai_B.MultiportSwitch2_o[2] = kaiguangai_B.memory1[2];
    kaiguangai_B.MultiportSwitch2_o[3] = kaiguangai_B.memory1[3];
    break;

   case 2:
    kaiguangai_B.MultiportSwitch2_o[0] = kaiguangai_B.memory1[4];
    kaiguangai_B.MultiportSwitch2_o[1] = kaiguangai_B.memory1[5];
    kaiguangai_B.MultiportSwitch2_o[2] = kaiguangai_B.memory1[6];
    kaiguangai_B.MultiportSwitch2_o[3] = kaiguangai_B.memory1[7];
    break;

   case 3:
    kaiguangai_B.MultiportSwitch2_o[0] = kaiguangai_B.memory1[8];
    kaiguangai_B.MultiportSwitch2_o[1] = kaiguangai_B.memory1[9];
    kaiguangai_B.MultiportSwitch2_o[2] = kaiguangai_B.memory1[10];
    kaiguangai_B.MultiportSwitch2_o[3] = kaiguangai_B.memory1[11];
    break;

   case 4:
    kaiguangai_B.MultiportSwitch2_o[0] = kaiguangai_B.memory1[12];
    kaiguangai_B.MultiportSwitch2_o[1] = kaiguangai_B.memory1[13];
    kaiguangai_B.MultiportSwitch2_o[2] = kaiguangai_B.memory1[14];
    kaiguangai_B.MultiportSwitch2_o[3] = kaiguangai_B.memory1[15];
    break;

   case 5:
    kaiguangai_B.MultiportSwitch2_o[0] = kaiguangai_B.memory1[16];
    kaiguangai_B.MultiportSwitch2_o[1] = kaiguangai_B.memory1[17];
    kaiguangai_B.MultiportSwitch2_o[2] = kaiguangai_B.memory1[18];
    kaiguangai_B.MultiportSwitch2_o[3] = kaiguangai_B.memory1[19];
    break;

   case 6:
    kaiguangai_B.MultiportSwitch2_o[0] = kaiguangai_B.memory1[20];
    kaiguangai_B.MultiportSwitch2_o[1] = kaiguangai_B.memory1[21];
    kaiguangai_B.MultiportSwitch2_o[2] = kaiguangai_B.memory1[22];
    kaiguangai_B.MultiportSwitch2_o[3] = kaiguangai_B.memory1[23];
    break;

   case 7:
    kaiguangai_B.MultiportSwitch2_o[0] = kaiguangai_B.memory1[24];
    kaiguangai_B.MultiportSwitch2_o[1] = kaiguangai_B.memory1[25];
    kaiguangai_B.MultiportSwitch2_o[2] = kaiguangai_B.memory1[26];
    kaiguangai_B.MultiportSwitch2_o[3] = kaiguangai_B.memory1[27];
    break;

   default:
    kaiguangai_B.MultiportSwitch2_o[0] = kaiguangai_B.memory1[28];
    kaiguangai_B.MultiportSwitch2_o[1] = kaiguangai_B.memory1[29];
    kaiguangai_B.MultiportSwitch2_o[2] = kaiguangai_B.memory1[30];
    kaiguangai_B.MultiportSwitch2_o[3] = kaiguangai_B.memory1[31];
    break;
  }

  /* End of MultiPortSwitch: '<Root>/Multiport Switch2' */

  /* DataTypeConversion: '<Root>/Data Type Conversion2' */
  kaiguangai_B.DataTypeConversion2_g[0] = kaiguangai_B.MultiportSwitch2_o[0];
  kaiguangai_B.DataTypeConversion2_g[1] = kaiguangai_B.MultiportSwitch2_o[1];
  kaiguangai_B.DataTypeConversion2_g[2] = kaiguangai_B.MultiportSwitch2_o[2];
  kaiguangai_B.DataTypeConversion2_g[3] = kaiguangai_B.MultiportSwitch2_o[3];

  /* ok to acquire for <S12>/S-Function */
  kaiguangai_DW.SFunction_IWORK_j.AcquireOK = 1;

  /* Logic: '<S4>/Logical Operator4' */
  kaiguangai_B.LogicalOperator4_i = ((kaiguangai_B.DataTypeConversion3[0] != 0.0)
    || (kaiguangai_B.DataTypeConversion3[1] != 0.0) ||
    (kaiguangai_B.DataTypeConversion3[2] != 0.0) ||
    (kaiguangai_B.DataTypeConversion3[3] != 0.0) ||
    (kaiguangai_B.DataTypeConversion3[4] != 0.0) ||
    (kaiguangai_B.DataTypeConversion3[5] != 0.0) ||
    (kaiguangai_B.DataTypeConversion3[6] != 0.0) ||
    (kaiguangai_B.DataTypeConversion3[7] != 0.0));

  /* MultiPortSwitch: '<S4>/Multiport Switch' incorporates:
   *  Constant: '<Root>/qiehuan'
   */
  if ((int32_T)kaiguangai_P.qiehuan_Value == 0) {
    kaiguangai_B.MultiportSwitch_k[0] = kaiguangai_B.LogicalOperator_c;
    kaiguangai_B.MultiportSwitch_k[1] = kaiguangai_B.LogicalOperator1_i;
    kaiguangai_B.MultiportSwitch_k[2] = kaiguangai_B.LogicalOperator2_k;
    kaiguangai_B.MultiportSwitch_k[3] = kaiguangai_B.LogicalOperator3_p;
  } else {
    kaiguangai_B.MultiportSwitch_k[0] = kaiguangai_B.LogicalOperator_p;
    kaiguangai_B.MultiportSwitch_k[1] = kaiguangai_B.LogicalOperator1_f;
    kaiguangai_B.MultiportSwitch_k[2] = kaiguangai_B.LogicalOperator2_f;
    kaiguangai_B.MultiportSwitch_k[3] = kaiguangai_B.LogicalOperator3_d;
  }

  /* End of MultiPortSwitch: '<S4>/Multiport Switch' */

  /* Chart: '<S4>/Chart' */
  /* Gateway: Subsystem1/Chart */
  kaiguangai_DW.sfEvent_e = kaiguangai_CALL_EVENT_a;

  /* During: Subsystem1/Chart */
  if (kaiguangai_DW.is_active_c26_kaiguangai == 0U) {
    /* Entry: Subsystem1/Chart */
    kaiguangai_DW.is_active_c26_kaiguangai = 1U;

    /* Entry Internal: Subsystem1/Chart */
    /* Transition: '<S10>:2' */
    kaiguangai_DW.is_c26_kaiguangai = kaiguangai_IN_off_o;

    /* Entry 'off': '<S10>:1' */
    kaiguangai_B.kaigaihuanchongyichang = 0.0;
    kaiguangai_DW.t_p = 0.0;
  } else {
    switch (kaiguangai_DW.is_c26_kaiguangai) {
     case kaiguangai_IN_off_o:
      /* During 'off': '<S10>:1' */
      if (kaiguangai_B.MultiportSwitch_k[1]) {
        /* Transition: '<S10>:4' */
        kaiguangai_DW.is_c26_kaiguangai = kaiguangai_IN_on_l;

        /* Entry 'on': '<S10>:3' */
        kaiguangai_DW.t_p += 0.002;
      }
      break;

     case kaiguangai_IN_on_l:
      /* During 'on': '<S10>:3' */
      sf_internal_predicateOutput = ((kaiguangai_DW.t_p <= 8.0) &&
        (!kaiguangai_B.LogicalOperator4_i));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S10>:11' */
        kaiguangai_DW.is_c26_kaiguangai = kaiguangai_IN_on_l;

        /* Entry 'on': '<S10>:3' */
        kaiguangai_DW.t_p += 0.002;
      } else {
        sf_internal_predicateOutput = ((kaiguangai_DW.t_p > 8.0) &&
          kaiguangai_B.LogicalOperator4_i);
        if (sf_internal_predicateOutput) {
          /* Transition: '<S10>:13' */
          kaiguangai_DW.is_c26_kaiguangai = kaiguangai_IN_on1_f;

          /* Entry 'on1': '<S10>:12' */
          kaiguangai_B.kaigaihuanchongyichang = 1.0;
        }
      }
      break;

     default:
      /* During 'on1': '<S10>:12' */
      break;
    }
  }

  /* End of Chart: '<S4>/Chart' */

  /* Logic: '<S4>/Logical Operator5' */
  kaiguangai_B.LogicalOperator5_av = ((kaiguangai_B.DataTypeConversion3[8] !=
    0.0) || (kaiguangai_B.DataTypeConversion3[9] != 0.0) ||
    (kaiguangai_B.DataTypeConversion3[10] != 0.0) ||
    (kaiguangai_B.DataTypeConversion3[11] != 0.0) ||
    (kaiguangai_B.DataTypeConversion3[12] != 0.0) ||
    (kaiguangai_B.DataTypeConversion3[13] != 0.0) ||
    (kaiguangai_B.DataTypeConversion3[14] != 0.0) ||
    (kaiguangai_B.DataTypeConversion3[15] != 0.0));

  /* Chart: '<S4>/Chart1' */
  /* Gateway: Subsystem1/Chart1 */
  kaiguangai_DW.sfEvent_i = kaiguangai_CALL_EVENT_a;

  /* During: Subsystem1/Chart1 */
  if (kaiguangai_DW.is_active_c27_kaiguangai == 0U) {
    /* Entry: Subsystem1/Chart1 */
    kaiguangai_DW.is_active_c27_kaiguangai = 1U;

    /* Entry Internal: Subsystem1/Chart1 */
    /* Transition: '<S11>:2' */
    kaiguangai_DW.is_c27_kaiguangai = kaiguangai_IN_off_o;

    /* Entry 'off': '<S11>:1' */
    kaiguangai_B.guangaihuanchongyichang = 0.0;
    kaiguangai_DW.t = 0.0;
  } else {
    switch (kaiguangai_DW.is_c27_kaiguangai) {
     case kaiguangai_IN_off_o:
      /* During 'off': '<S11>:1' */
      if (kaiguangai_B.MultiportSwitch_k[3]) {
        /* Transition: '<S11>:4' */
        kaiguangai_DW.is_c27_kaiguangai = kaiguangai_IN_on_l;

        /* Entry 'on': '<S11>:3' */
        kaiguangai_DW.t += 0.002;
      }
      break;

     case kaiguangai_IN_on_l:
      /* During 'on': '<S11>:3' */
      sf_internal_predicateOutput = ((kaiguangai_DW.t <= 8.0) &&
        (!kaiguangai_B.LogicalOperator5_av));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S11>:11' */
        kaiguangai_DW.is_c27_kaiguangai = kaiguangai_IN_on_l;

        /* Entry 'on': '<S11>:3' */
        kaiguangai_DW.t += 0.002;
      } else {
        sf_internal_predicateOutput = ((kaiguangai_DW.t > 8.0) &&
          kaiguangai_B.LogicalOperator5_av);
        if (sf_internal_predicateOutput) {
          /* Transition: '<S11>:13' */
          kaiguangai_DW.is_c27_kaiguangai = kaiguangai_IN_on1_f;

          /* Entry 'on1': '<S11>:12' */
          kaiguangai_B.guangaihuanchongyichang = 1.0;
        }
      }
      break;

     default:
      /* During 'on1': '<S11>:12' */
      break;
    }
  }

  /* End of Chart: '<S4>/Chart1' */

  /* DataTypeConversion: '<S4>/Data Type Conversion1' */
  kaiguangai_B.DataTypeConversion1_i = kaiguangai_B.kaigaihuanchongyichang;

  /* DataTypeConversion: '<S4>/Data Type Conversion2' */
  kaiguangai_B.DataTypeConversion2_a = kaiguangai_B.guangaihuanchongyichang;

  /* DataTypeConversion: '<S4>/Data Type Conversion6' */
  kaiguangai_B.DataTypeConversion6_n[0] = kaiguangai_B.sf_1.yikaicishu;
  kaiguangai_B.DataTypeConversion6_n[1] = kaiguangai_B.sf_11.yikaicishu;
  kaiguangai_B.DataTypeConversion6_n[2] = kaiguangai_B.sf_12.yikaicishu;
  kaiguangai_B.DataTypeConversion6_n[3] = kaiguangai_B.sf_13.yikaicishu;
  kaiguangai_B.DataTypeConversion6_n[4] = kaiguangai_B.sf_14.yikaicishu;
  kaiguangai_B.DataTypeConversion6_n[5] = kaiguangai_B.sf_15.yikaicishu;
  kaiguangai_B.DataTypeConversion6_n[6] = kaiguangai_B.sf_16.yikaicishu;
  kaiguangai_B.DataTypeConversion6_n[7] = kaiguangai_B.sf_17.yikaicishu;

  /* MultiPortSwitch: '<S4>/Multiport Switch1' incorporates:
   *  Constant: '<Root>/qiehuan'
   */
  if ((int32_T)kaiguangai_P.qiehuan_Value == 0) {
    /* DataTypeConversion: '<S4>/Data Type Conversion4' */
    kaiguangai_B.DataTypeConversion4_d[0] = kaiguangai_B.sf_1.kgzhiling1;
    kaiguangai_B.DataTypeConversion4_d[1] = kaiguangai_B.sf_1.kgzhiling2;
    kaiguangai_B.DataTypeConversion4_d[2] = kaiguangai_B.sf_1.ggzhiling1;
    kaiguangai_B.DataTypeConversion4_d[3] = kaiguangai_B.sf_1.ggzhiling2;
    kaiguangai_B.DataTypeConversion4_d[4] = kaiguangai_B.sf_11.kgzhiling1;
    kaiguangai_B.DataTypeConversion4_d[5] = kaiguangai_B.sf_11.kgzhiling2;
    kaiguangai_B.DataTypeConversion4_d[6] = kaiguangai_B.sf_11.ggzhiling1;
    kaiguangai_B.DataTypeConversion4_d[7] = kaiguangai_B.sf_11.ggzhiling2;
    kaiguangai_B.DataTypeConversion4_d[8] = kaiguangai_B.sf_12.kgzhiling1;
    kaiguangai_B.DataTypeConversion4_d[9] = kaiguangai_B.sf_12.kgzhiling2;
    kaiguangai_B.DataTypeConversion4_d[10] = kaiguangai_B.sf_12.ggzhiling1;
    kaiguangai_B.DataTypeConversion4_d[11] = kaiguangai_B.sf_12.ggzhiling2;
    kaiguangai_B.DataTypeConversion4_d[12] = kaiguangai_B.sf_13.kgzhiling1;
    kaiguangai_B.DataTypeConversion4_d[13] = kaiguangai_B.sf_13.kgzhiling2;
    kaiguangai_B.DataTypeConversion4_d[14] = kaiguangai_B.sf_13.ggzhiling1;
    kaiguangai_B.DataTypeConversion4_d[15] = kaiguangai_B.sf_13.ggzhiling2;
    kaiguangai_B.DataTypeConversion4_d[16] = kaiguangai_B.sf_14.kgzhiling1;
    kaiguangai_B.DataTypeConversion4_d[17] = kaiguangai_B.sf_14.kgzhiling2;
    kaiguangai_B.DataTypeConversion4_d[18] = kaiguangai_B.sf_14.ggzhiling1;
    kaiguangai_B.DataTypeConversion4_d[19] = kaiguangai_B.sf_14.ggzhiling2;
    kaiguangai_B.DataTypeConversion4_d[20] = kaiguangai_B.sf_15.kgzhiling1;
    kaiguangai_B.DataTypeConversion4_d[21] = kaiguangai_B.sf_15.kgzhiling2;
    kaiguangai_B.DataTypeConversion4_d[22] = kaiguangai_B.sf_15.ggzhiling1;
    kaiguangai_B.DataTypeConversion4_d[23] = kaiguangai_B.sf_15.ggzhiling2;
    kaiguangai_B.DataTypeConversion4_d[24] = kaiguangai_B.sf_16.kgzhiling1;
    kaiguangai_B.DataTypeConversion4_d[25] = kaiguangai_B.sf_16.kgzhiling2;
    kaiguangai_B.DataTypeConversion4_d[26] = kaiguangai_B.sf_16.ggzhiling1;
    kaiguangai_B.DataTypeConversion4_d[27] = kaiguangai_B.sf_16.ggzhiling2;
    kaiguangai_B.DataTypeConversion4_d[28] = kaiguangai_B.sf_17.kgzhiling1;
    kaiguangai_B.DataTypeConversion4_d[29] = kaiguangai_B.sf_17.kgzhiling2;
    kaiguangai_B.DataTypeConversion4_d[30] = kaiguangai_B.sf_17.ggzhiling1;
    kaiguangai_B.DataTypeConversion4_d[31] = kaiguangai_B.sf_17.ggzhiling2;
    memcpy(&kaiguangai_B.MultiportSwitch1_i[0],
           &kaiguangai_B.DataTypeConversion4_d[0], sizeof(real_T) << 5U);
  } else {
    kaiguangai_B.MultiportSwitch1_i[0] = kaiguangai_B.kgzhiling1;
    kaiguangai_B.MultiportSwitch1_i[1] = kaiguangai_B.kgzhiling2;
    kaiguangai_B.MultiportSwitch1_i[2] = kaiguangai_B.ggzhiling1;
    kaiguangai_B.MultiportSwitch1_i[3] = kaiguangai_B.ggzhiling2;
    kaiguangai_B.MultiportSwitch1_i[4] = kaiguangai_B.sf_Chart1_c.kgzhiling1;
    kaiguangai_B.MultiportSwitch1_i[5] = kaiguangai_B.sf_Chart1_c.kgzhiling2;
    kaiguangai_B.MultiportSwitch1_i[6] = kaiguangai_B.sf_Chart1_c.ggzhiling1;
    kaiguangai_B.MultiportSwitch1_i[7] = kaiguangai_B.sf_Chart1_c.ggzhiling2;
    kaiguangai_B.MultiportSwitch1_i[8] = kaiguangai_B.sf_Chart2.kgzhiling1;
    kaiguangai_B.MultiportSwitch1_i[9] = kaiguangai_B.sf_Chart2.kgzhiling2;
    kaiguangai_B.MultiportSwitch1_i[10] = kaiguangai_B.sf_Chart2.ggzhiling1;
    kaiguangai_B.MultiportSwitch1_i[11] = kaiguangai_B.sf_Chart2.ggzhiling2;
    kaiguangai_B.MultiportSwitch1_i[12] = kaiguangai_B.sf_Chart3.kgzhiling1;
    kaiguangai_B.MultiportSwitch1_i[13] = kaiguangai_B.sf_Chart3.kgzhiling2;
    kaiguangai_B.MultiportSwitch1_i[14] = kaiguangai_B.sf_Chart3.ggzhiling1;
    kaiguangai_B.MultiportSwitch1_i[15] = kaiguangai_B.sf_Chart3.ggzhiling2;
    kaiguangai_B.MultiportSwitch1_i[16] = kaiguangai_B.sf_Chart4.kgzhiling1;
    kaiguangai_B.MultiportSwitch1_i[17] = kaiguangai_B.sf_Chart4.kgzhiling2;
    kaiguangai_B.MultiportSwitch1_i[18] = kaiguangai_B.sf_Chart4.ggzhiling1;
    kaiguangai_B.MultiportSwitch1_i[19] = kaiguangai_B.sf_Chart4.ggzhiling2;
    kaiguangai_B.MultiportSwitch1_i[20] = kaiguangai_B.sf_Chart5.kgzhiling1;
    kaiguangai_B.MultiportSwitch1_i[21] = kaiguangai_B.sf_Chart5.kgzhiling2;
    kaiguangai_B.MultiportSwitch1_i[22] = kaiguangai_B.sf_Chart5.ggzhiling1;
    kaiguangai_B.MultiportSwitch1_i[23] = kaiguangai_B.sf_Chart5.ggzhiling2;
    kaiguangai_B.MultiportSwitch1_i[24] = kaiguangai_B.sf_Chart6.kgzhiling1;
    kaiguangai_B.MultiportSwitch1_i[25] = kaiguangai_B.sf_Chart6.kgzhiling2;
    kaiguangai_B.MultiportSwitch1_i[26] = kaiguangai_B.sf_Chart6.ggzhiling1;
    kaiguangai_B.MultiportSwitch1_i[27] = kaiguangai_B.sf_Chart6.ggzhiling2;
    kaiguangai_B.MultiportSwitch1_i[28] = kaiguangai_B.sf_Chart7.kgzhiling1;
    kaiguangai_B.MultiportSwitch1_i[29] = kaiguangai_B.sf_Chart7.kgzhiling2;
    kaiguangai_B.MultiportSwitch1_i[30] = kaiguangai_B.sf_Chart7.ggzhiling1;
    kaiguangai_B.MultiportSwitch1_i[31] = kaiguangai_B.sf_Chart7.ggzhiling2;
  }

  /* End of MultiPortSwitch: '<S4>/Multiport Switch1' */
}

/* Model update function */
static void kaiguangai_update(void)
{
  /* Update for Memory: '<S33>/2' */
  kaiguangai_DW.u_PreviousInput = kaiguangai_B.Switch2;

  /* Update for Memory: '<S33>/3' */
  kaiguangai_DW.u_PreviousInput_c = kaiguangai_B.Switch3;

  /* Update for Memory: '<S33>/4' */
  kaiguangai_DW.u_PreviousInput_j = kaiguangai_B.Switch4;

  /* Update for Memory: '<S33>/5' */
  kaiguangai_DW.u_PreviousInput_b = kaiguangai_B.Switch5;

  /* Update for Memory: '<S33>/6' */
  kaiguangai_DW.u_PreviousInput_jh = kaiguangai_B.Switch6;

  /* Update for Memory: '<S33>/1' */
  kaiguangai_DW.u_PreviousInput_g = kaiguangai_B.Switch1;

  /* Update for Memory: '<Root>/memory' */
  kaiguangai_DW.memory_PreviousInput[0] = kaiguangai_B.MultiportSwitch_k[0];
  kaiguangai_DW.memory_PreviousInput[1] = kaiguangai_B.MultiportSwitch_k[1];
  kaiguangai_DW.memory_PreviousInput[2] = kaiguangai_B.MultiportSwitch_k[2];
  kaiguangai_DW.memory_PreviousInput[3] = kaiguangai_B.MultiportSwitch_k[3];

  /* Update for Memory: '<Root>/memory1' */
  memcpy(&kaiguangai_DW.memory1_PreviousInput[0],
         &kaiguangai_B.MultiportSwitch1_i[0], sizeof(real_T) << 5U);

  /* Update for Memory: '<S32>/2' */
  kaiguangai_DW.u_PreviousInput_o = kaiguangai_B.Switch2_d;

  /* Update for Memory: '<S32>/3' */
  kaiguangai_DW.u_PreviousInput_h = kaiguangai_B.Switch3_p;

  /* Update for Memory: '<S32>/4' */
  kaiguangai_DW.u_PreviousInput_js = kaiguangai_B.Switch4_k;

  /* Update for Memory: '<S32>/5' */
  kaiguangai_DW.u_PreviousInput_p = kaiguangai_B.Switch5_h;

  /* Update for Memory: '<S32>/6' */
  kaiguangai_DW.u_PreviousInput_bm = kaiguangai_B.Switch6_c;

  /* Update for Memory: '<S32>/1' */
  kaiguangai_DW.u_PreviousInput_f = kaiguangai_B.Switch1_d;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++kaiguangai_M->Timing.clockTick0)) {
    ++kaiguangai_M->Timing.clockTickH0;
  }

  kaiguangai_M->Timing.t[0] = kaiguangai_M->Timing.clockTick0 *
    kaiguangai_M->Timing.stepSize0 + kaiguangai_M->Timing.clockTickH0 *
    kaiguangai_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
static void kaiguangai_initialize(void)
{
  /* Start for Constant: '<Root>/tiaoshi' */
  kaiguangai_B.tiaoshi = kaiguangai_P.tiaoshi_Value;

  /* Start for Constant: '<Root>/jieshu' */
  kaiguangai_B.jieshu = kaiguangai_P.jieshu_Value;

  /* Start for Constant: '<S1>/Constant' */
  kaiguangai_B.Constant = kaiguangai_P.Constant_Value;

  /* Level2 S-Function Block: '<S1>/PCI1' (pci1756IO) */
  {
    SimStruct *rts = kaiguangai_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S1>/PCI2' (pci1756IO) */
  {
    SimStruct *rts = kaiguangai_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Constant: '<S1>/Constant1' */
  kaiguangai_B.Constant1 = kaiguangai_P.Constant1_Value;

  /* Level2 S-Function Block: '<S1>/PCI3' (pci1756IO) */
  {
    SimStruct *rts = kaiguangai_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Constant: '<Root>/start' */
  kaiguangai_B.start = kaiguangai_P.start_Value;

  /* Start for Constant: '<S9>/t1' */
  kaiguangai_B.u_g = kaiguangai_P.t1_Value;

  /* Start for Constant: '<S9>/t3' */
  kaiguangai_B.u_m = kaiguangai_P.t3_Value;

  /* Start for Constant: '<S9>/t5' */
  kaiguangai_B.u_m5 = kaiguangai_P.t5_Value;

  /* Start for Constant: '<S9>/t7' */
  kaiguangai_B.u_gd = kaiguangai_P.t7_Value;

  /* Start for Constant: '<S9>/t9' */
  kaiguangai_B.u_gh = kaiguangai_P.t9_Value;

  /* Start for Constant: '<S9>/t11' */
  kaiguangai_B.u_m0 = kaiguangai_P.t11_Value;

  /* Start for Constant: '<Root>/zidong_shedingcishu' */
  kaiguangai_B.zidong_shedingcishu = kaiguangai_P.zidong_shedingcishu_Value;

  /* S-Function Block: <S2>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(4)) == 0) {
      if ((i = rl32eDefScope(4,2)) != 0) {
        printf("Error creating scope 4\n");
      } else {
        rl32eAddSignal(4, rl32eGetSignalNo("Switch3/s1"));
        rl32eAddSignal(4, rl32eGetSignalNo("Switch3/s2"));
        rl32eAddSignal(4, rl32eGetSignalNo("Switch3/s3"));
        rl32eAddSignal(4, rl32eGetSignalNo("Switch3/s4"));
        rl32eSetScope(4, 4, 250);
        rl32eSetScope(4, 5, 0);
        rl32eSetScope(4, 6, 1);
        rl32eSetScope(4, 0, 0);
        rl32eSetScope(4, 3, rl32eGetSignalNo("Switch3/s1"));
        rl32eSetScope(4, 1, 0.0);
        rl32eSetScope(4, 2, 0);
        rl32eSetScope(4, 9, 0);
        rl32eSetTargetScope(4, 11, 0.0);
        rl32eSetTargetScope(4, 10, 0.0);
        xpceScopeAcqOK(4, &kaiguangai_DW.SFunction_IWORK.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(4);
    }
  }

  /* S-Function Block: <S3>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(2)) == 0) {
      if ((i = rl32eDefScope(2,2)) != 0) {
        printf("Error creating scope 2\n");
      } else {
        rl32eAddSignal(2, rl32eGetSignalNo("Data Type Conversion/s1"));
        rl32eAddSignal(2, rl32eGetSignalNo("Data Type Conversion/s2"));
        rl32eAddSignal(2, rl32eGetSignalNo("Data Type Conversion/s3"));
        rl32eAddSignal(2, rl32eGetSignalNo("Data Type Conversion/s4"));
        rl32eAddSignal(2, rl32eGetSignalNo("Data Type Conversion/s5"));
        rl32eAddSignal(2, rl32eGetSignalNo("Data Type Conversion/s6"));
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("Data Type Conversion/s1"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("Data Type Conversion/s2"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("Data Type Conversion/s3"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("Data Type Conversion/s4"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("Data Type Conversion/s5"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("Data Type Conversion/s6"),
          "%15.6f");
        rl32eSetScope(2, 4, 250);
        rl32eSetScope(2, 5, 0);
        rl32eSetScope(2, 6, 1);
        rl32eSetScope(2, 0, 0);
        rl32eSetScope(2, 3, rl32eGetSignalNo("Data Type Conversion/s1"));
        rl32eSetScope(2, 1, 0.0);
        rl32eSetScope(2, 2, 0);
        rl32eSetScope(2, 9, 0);
        rl32eSetTargetScope(2, 1, 0.0);
        rl32eSetTargetScope(2, 11, 0.0);
        rl32eSetTargetScope(2, 10, 0.0);
        xpceScopeAcqOK(2, &kaiguangai_DW.SFunction_IWORK_f.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(2);
    }
  }

  /* S-Function Block: <S12>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(1)) == 0) {
      if ((i = rl32eDefScope(1,2)) != 0) {
        printf("Error creating scope 1\n");
      } else {
        rl32eAddSignal(1, rl32eGetSignalNo("Subsystem1/Data Type Conversion6/s1"));
        rl32eAddSignal(1, rl32eGetSignalNo("Subsystem1/Data Type Conversion6/s2"));
        rl32eAddSignal(1, rl32eGetSignalNo("Subsystem1/Data Type Conversion6/s3"));
        rl32eAddSignal(1, rl32eGetSignalNo("Subsystem1/Data Type Conversion6/s4"));
        rl32eAddSignal(1, rl32eGetSignalNo("Subsystem1/Data Type Conversion6/s5"));
        rl32eAddSignal(1, rl32eGetSignalNo("Subsystem1/Data Type Conversion6/s6"));
        rl32eAddSignal(1, rl32eGetSignalNo("Subsystem1/Data Type Conversion6/s7"));
        rl32eAddSignal(1, rl32eGetSignalNo("Subsystem1/Data Type Conversion6/s8"));
        rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo(
          "Subsystem1/Data Type Conversion6/s1"),"%15.6f");
        rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo(
          "Subsystem1/Data Type Conversion6/s2"),"%15.6f");
        rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo(
          "Subsystem1/Data Type Conversion6/s3"),"%15.6f");
        rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo(
          "Subsystem1/Data Type Conversion6/s4"),"%15.6f");
        rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo(
          "Subsystem1/Data Type Conversion6/s5"),"%15.6f");
        rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo(
          "Subsystem1/Data Type Conversion6/s6"),"%15.6f");
        rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo(
          "Subsystem1/Data Type Conversion6/s7"),"%15.6f");
        rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo(
          "Subsystem1/Data Type Conversion6/s8"),"%15.6f");
        rl32eSetScope(1, 4, 250);
        rl32eSetScope(1, 5, 0);
        rl32eSetScope(1, 6, 1);
        rl32eSetScope(1, 0, 0);
        rl32eSetScope(1, 3, rl32eGetSignalNo(
          "Subsystem1/Data Type Conversion6/s1"));
        rl32eSetScope(1, 1, 0.0);
        rl32eSetScope(1, 2, 0);
        rl32eSetScope(1, 9, 0);
        rl32eSetTargetScope(1, 1, 0.0);
        rl32eSetTargetScope(1, 11, 0.0);
        rl32eSetTargetScope(1, 10, 0.0);
        xpceScopeAcqOK(1, &kaiguangai_DW.SFunction_IWORK_j.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(1);
    }
  }

  {
    int32_T i;

    /* InitializeConditions for Memory: '<S33>/2' */
    kaiguangai_DW.u_PreviousInput = kaiguangai_P.u_X0;

    /* InitializeConditions for Memory: '<S33>/3' */
    kaiguangai_DW.u_PreviousInput_c = kaiguangai_P.u_X0_f;

    /* InitializeConditions for Memory: '<S33>/4' */
    kaiguangai_DW.u_PreviousInput_j = kaiguangai_P.u_X0_a;

    /* InitializeConditions for Memory: '<S33>/5' */
    kaiguangai_DW.u_PreviousInput_b = kaiguangai_P.u_X0_n;

    /* InitializeConditions for Memory: '<S33>/6' */
    kaiguangai_DW.u_PreviousInput_jh = kaiguangai_P.u_X0_j;

    /* InitializeConditions for Memory: '<S33>/1' */
    kaiguangai_DW.u_PreviousInput_g = kaiguangai_P.u_X0_p;

    /* InitializeConditions for Memory: '<Root>/memory' */
    kaiguangai_DW.memory_PreviousInput[0] = kaiguangai_P.memory_X0;
    kaiguangai_DW.memory_PreviousInput[1] = kaiguangai_P.memory_X0;
    kaiguangai_DW.memory_PreviousInput[2] = kaiguangai_P.memory_X0;
    kaiguangai_DW.memory_PreviousInput[3] = kaiguangai_P.memory_X0;

    /* InitializeConditions for Memory: '<Root>/memory1' */
    for (i = 0; i < 32; i++) {
      kaiguangai_DW.memory1_PreviousInput[i] = kaiguangai_P.memory1_X0;
    }

    /* End of InitializeConditions for Memory: '<Root>/memory1' */

    /* InitializeConditions for Memory: '<S32>/2' */
    kaiguangai_DW.u_PreviousInput_o = kaiguangai_P.u_X0_g;

    /* InitializeConditions for Memory: '<S32>/3' */
    kaiguangai_DW.u_PreviousInput_h = kaiguangai_P.u_X0_o;

    /* InitializeConditions for Memory: '<S32>/4' */
    kaiguangai_DW.u_PreviousInput_js = kaiguangai_P.u_X0_h;

    /* InitializeConditions for Memory: '<S32>/5' */
    kaiguangai_DW.u_PreviousInput_p = kaiguangai_P.u_X0_i;

    /* InitializeConditions for Memory: '<S32>/6' */
    kaiguangai_DW.u_PreviousInput_bm = kaiguangai_P.u_X0_i1;

    /* InitializeConditions for Memory: '<S32>/1' */
    kaiguangai_DW.u_PreviousInput_f = kaiguangai_P.u_X0_im;

    /* SystemInitialize for Enabled SubSystem: '<Root>/tiaoshimoshi' */
    /* SystemInitialize for Chart: '<S7>/jinjichuli' */
    kaiguangai_jinjichuli_Init(&kaiguangai_B.sf_jinjichuli,
      &kaiguangai_DW.sf_jinjichuli);

    /* SystemInitialize for Chart: '<S7>/jinjichuli1' */
    kaiguangai_jinjichuli_Init(&kaiguangai_B.sf_jinjichuli1,
      &kaiguangai_DW.sf_jinjichuli1);

    /* SystemInitialize for Chart: '<S7>/jinjichuli2' */
    kaiguangai_jinjichuli_Init(&kaiguangai_B.sf_jinjichuli2,
      &kaiguangai_DW.sf_jinjichuli2);

    /* SystemInitialize for Chart: '<S7>/jinjichuli3' */
    kaiguangai_jinjichuli_Init(&kaiguangai_B.sf_jinjichuli3,
      &kaiguangai_DW.sf_jinjichuli3);

    /* SystemInitialize for Chart: '<S7>/jinjichuli4' */
    kaiguangai_jinjichuli_Init(&kaiguangai_B.sf_jinjichuli4,
      &kaiguangai_DW.sf_jinjichuli4);

    /* SystemInitialize for Chart: '<S7>/jinjichuli5' */
    kaiguangai_jinjichuli_Init(&kaiguangai_B.sf_jinjichuli5,
      &kaiguangai_DW.sf_jinjichuli5);

    /* SystemInitialize for Chart: '<S7>/jinjichuli6' */
    kaiguangai_jinjichuli_Init(&kaiguangai_B.sf_jinjichuli6,
      &kaiguangai_DW.sf_jinjichuli6);

    /* SystemInitialize for Chart: '<S7>/jinjichuli7' */
    kaiguangai_jinjichuli_Init(&kaiguangai_B.sf_jinjichuli7,
      &kaiguangai_DW.sf_jinjichuli7);

    /* SystemInitialize for Outport: '<S7>/tiaoshi_huanxiangxinhao' */
    kaiguangai_B.LogicalOperator_e = kaiguangai_P.tiaoshi_huanxiangxinhao_Y0;
    kaiguangai_B.LogicalOperator4_d = kaiguangai_P.tiaoshi_huanxiangxinhao_Y0;
    kaiguangai_B.LogicalOperator5_c = kaiguangai_P.tiaoshi_huanxiangxinhao_Y0;
    kaiguangai_B.LogicalOperator1_kr = kaiguangai_P.tiaoshi_huanxiangxinhao_Y0;

    /* End of SystemInitialize for SubSystem: '<Root>/tiaoshimoshi' */

    /* SystemInitialize for Enabled SubSystem: '<S4>/zidong' */
    /* SystemInitialize for Chart: '<S15>/1#' */
    kaiguangai_u_Init(&kaiguangai_DW.sf_1);

    /* SystemInitialize for Chart: '<S15>/1#1' */
    kaiguangai_u_Init(&kaiguangai_DW.sf_11);

    /* SystemInitialize for Chart: '<S15>/1#2' */
    kaiguangai_u_Init(&kaiguangai_DW.sf_12);

    /* SystemInitialize for Chart: '<S15>/1#3' */
    kaiguangai_u_Init(&kaiguangai_DW.sf_13);

    /* SystemInitialize for Chart: '<S15>/1#4' */
    kaiguangai_u_Init(&kaiguangai_DW.sf_14);

    /* SystemInitialize for Chart: '<S15>/1#5' */
    kaiguangai_u_Init(&kaiguangai_DW.sf_15);

    /* SystemInitialize for Chart: '<S15>/1#6' */
    kaiguangai_u_Init(&kaiguangai_DW.sf_16);

    /* SystemInitialize for Chart: '<S15>/1#7' */
    kaiguangai_u_Init(&kaiguangai_DW.sf_17);

    /* SystemInitialize for Outport: '<S15>/songkaihuanxiang' */
    kaiguangai_B.LogicalOperator_c = kaiguangai_P.songkaihuanxiang_Y0_m;

    /* SystemInitialize for Outport: '<S15>/kaigaihuanxiang' */
    kaiguangai_B.LogicalOperator1_i = kaiguangai_P.kaigaihuanxiang_Y0_d;

    /* SystemInitialize for Outport: '<S15>/yajinhuanxiang' */
    kaiguangai_B.LogicalOperator2_k = kaiguangai_P.yajinhuanxiang_Y0_k;

    /* SystemInitialize for Outport: '<S15>/guangaihuanxiang' */
    kaiguangai_B.LogicalOperator3_p = kaiguangai_P.guangaihuanxiang_Y0_l;

    /* End of SystemInitialize for SubSystem: '<S4>/zidong' */

    /* SystemInitialize for Enabled SubSystem: '<S4>/shoudong' */
    /* SystemInitialize for Chart: '<S14>/Chart' */
    kaiguangai_DW.sfEvent = kaiguangai_CALL_EVENT_a;
    kaiguangai_DW.is_active_guangai = 0U;
    kaiguangai_DW.is_guangai = kaiguangai_IN_NO_ACTIVE_CHILD_j;
    kaiguangai_DW.temporalCounter_i6 = 0U;
    kaiguangai_DW.is_active_jiesuo = 0U;
    kaiguangai_DW.is_jiesuo = kaiguangai_IN_NO_ACTIVE_CHILD_j;
    kaiguangai_DW.temporalCounter_i3 = 0U;
    kaiguangai_DW.is_active_kaigai = 0U;
    kaiguangai_DW.is_kaigai = kaiguangai_IN_NO_ACTIVE_CHILD_j;
    kaiguangai_DW.temporalCounter_i2 = 0U;
    kaiguangai_DW.is_active_songkai = 0U;
    kaiguangai_DW.is_songkai = kaiguangai_IN_NO_ACTIVE_CHILD_j;
    kaiguangai_DW.temporalCounter_i1 = 0U;
    kaiguangai_DW.is_active_suoding = 0U;
    kaiguangai_DW.is_suoding = kaiguangai_IN_NO_ACTIVE_CHILD_j;
    kaiguangai_DW.temporalCounter_i4 = 0U;
    kaiguangai_DW.is_active_yajin = 0U;
    kaiguangai_DW.is_yajin = kaiguangai_IN_NO_ACTIVE_CHILD_j;
    kaiguangai_DW.temporalCounter_i5 = 0U;
    kaiguangai_DW.is_active_c10_kaiguangai = 0U;
    kaiguangai_DW.is_c10_kaiguangai = kaiguangai_IN_NO_ACTIVE_CHILD_j;

    /* SystemInitialize for Chart: '<S14>/Chart1' */
    kaiguangai_Chart1_Init(&kaiguangai_DW.sf_Chart1_c);

    /* SystemInitialize for Chart: '<S14>/Chart2' */
    kaiguangai_Chart1_Init(&kaiguangai_DW.sf_Chart2);

    /* SystemInitialize for Chart: '<S14>/Chart3' */
    kaiguangai_Chart1_Init(&kaiguangai_DW.sf_Chart3);

    /* SystemInitialize for Chart: '<S14>/Chart4' */
    kaiguangai_Chart1_Init(&kaiguangai_DW.sf_Chart4);

    /* SystemInitialize for Chart: '<S14>/Chart5' */
    kaiguangai_Chart1_Init(&kaiguangai_DW.sf_Chart5);

    /* SystemInitialize for Chart: '<S14>/Chart6' */
    kaiguangai_Chart1_Init(&kaiguangai_DW.sf_Chart6);

    /* SystemInitialize for Chart: '<S14>/Chart7' */
    kaiguangai_Chart1_Init(&kaiguangai_DW.sf_Chart7);

    /* SystemInitialize for Outport: '<S14>/songkaihuanxiang' */
    kaiguangai_B.LogicalOperator_p = kaiguangai_P.songkaihuanxiang_Y0;

    /* SystemInitialize for Outport: '<S14>/kaigaihuanxiang' */
    kaiguangai_B.LogicalOperator1_f = kaiguangai_P.kaigaihuanxiang_Y0;

    /* SystemInitialize for Outport: '<S14>/yajinhuanxiang' */
    kaiguangai_B.LogicalOperator2_f = kaiguangai_P.yajinhuanxiang_Y0;

    /* SystemInitialize for Outport: '<S14>/guangaihuanxiang' */
    kaiguangai_B.LogicalOperator3_d = kaiguangai_P.guangaihuanxiang_Y0;

    /* End of SystemInitialize for SubSystem: '<S4>/shoudong' */

    /* SystemInitialize for Chart: '<S4>/Chart' */
    kaiguangai_DW.sfEvent_e = kaiguangai_CALL_EVENT_a;
    kaiguangai_DW.is_active_c26_kaiguangai = 0U;
    kaiguangai_DW.is_c26_kaiguangai = kaiguangai_IN_NO_ACTIVE_CHILD_j;

    /* SystemInitialize for Chart: '<S4>/Chart1' */
    kaiguangai_DW.sfEvent_i = kaiguangai_CALL_EVENT_a;
    kaiguangai_DW.is_active_c27_kaiguangai = 0U;
    kaiguangai_DW.is_c27_kaiguangai = kaiguangai_IN_NO_ACTIVE_CHILD_j;
  }
}

/* Model terminate function */
static void kaiguangai_terminate(void)
{
  /* Level2 S-Function Block: '<S1>/PCI1' (pci1756IO) */
  {
    SimStruct *rts = kaiguangai_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S1>/PCI2' (pci1756IO) */
  {
    SimStruct *rts = kaiguangai_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S1>/PCI3' (pci1756IO) */
  {
    SimStruct *rts = kaiguangai_M->childSfunctions[2];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  kaiguangai_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  kaiguangai_update();
  UNUSED_PARAMETER(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  kaiguangai_initialize();
}

void MdlTerminate(void)
{
  kaiguangai_terminate();
}

/* Registration function */
RT_MODEL_kaiguangai_T *kaiguangai(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)kaiguangai_M, 0,
                sizeof(RT_MODEL_kaiguangai_T));
  rtsiSetSolverName(&kaiguangai_M->solverInfo,"FixedStepDiscrete");
  kaiguangai_M->solverInfoPtr = (&kaiguangai_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = kaiguangai_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    kaiguangai_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    kaiguangai_M->Timing.sampleTimes = (&kaiguangai_M->Timing.sampleTimesArray[0]);
    kaiguangai_M->Timing.offsetTimes = (&kaiguangai_M->Timing.offsetTimesArray[0]);

    /* task periods */
    kaiguangai_M->Timing.sampleTimes[0] = (0.002);

    /* task offsets */
    kaiguangai_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(kaiguangai_M, &kaiguangai_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = kaiguangai_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    kaiguangai_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(kaiguangai_M, -1);
  kaiguangai_M->Timing.stepSize0 = 0.002;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    kaiguangai_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(kaiguangai_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(kaiguangai_M->rtwLogInfo, (NULL));
    rtliSetLogT(kaiguangai_M->rtwLogInfo, "tout");
    rtliSetLogX(kaiguangai_M->rtwLogInfo, "");
    rtliSetLogXFinal(kaiguangai_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(kaiguangai_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(kaiguangai_M->rtwLogInfo, 2);
    rtliSetLogMaxRows(kaiguangai_M->rtwLogInfo, 0);
    rtliSetLogDecimation(kaiguangai_M->rtwLogInfo, 1);
    rtliSetLogY(kaiguangai_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(kaiguangai_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(kaiguangai_M->rtwLogInfo, (NULL));
  }

  kaiguangai_M->solverInfoPtr = (&kaiguangai_M->solverInfo);
  kaiguangai_M->Timing.stepSize = (0.002);
  rtsiSetFixedStepSize(&kaiguangai_M->solverInfo, 0.002);
  rtsiSetSolverMode(&kaiguangai_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  kaiguangai_M->blockIO = ((void *) &kaiguangai_B);
  (void) memset(((void *) &kaiguangai_B), 0,
                sizeof(B_kaiguangai_T));

  /* parameters */
  kaiguangai_M->defaultParam = ((real_T *)&kaiguangai_P);

  /* states (dwork) */
  kaiguangai_M->dwork = ((void *) &kaiguangai_DW);
  (void) memset((void *)&kaiguangai_DW, 0,
                sizeof(DW_kaiguangai_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  kaiguangai_InitializeDataMapInfo(kaiguangai_M);

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &kaiguangai_M->NonInlinedSFcns.sfcnInfo;
    kaiguangai_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(kaiguangai_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &kaiguangai_M->Sizes.numSampTimes);
    kaiguangai_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr(kaiguangai_M)[0]);
    rtssSetTPtrPtr(sfcnInfo,kaiguangai_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(kaiguangai_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(kaiguangai_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput(kaiguangai_M));
    rtssSetStepSizePtr(sfcnInfo, &kaiguangai_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(kaiguangai_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo, &kaiguangai_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &kaiguangai_M->zCCacheNeedsReset);
    rtssSetBlkStateChangePtr(sfcnInfo, &kaiguangai_M->blkStateChange);
    rtssSetSampleHitsPtr(sfcnInfo, &kaiguangai_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &kaiguangai_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &kaiguangai_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &kaiguangai_M->solverInfoPtr);
  }

  kaiguangai_M->Sizes.numSFcns = (3);

  /* register each child */
  {
    (void) memset((void *)&kaiguangai_M->NonInlinedSFcns.childSFunctions[0], 0,
                  3*sizeof(SimStruct));
    kaiguangai_M->childSfunctions =
      (&kaiguangai_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    kaiguangai_M->childSfunctions[0] =
      (&kaiguangai_M->NonInlinedSFcns.childSFunctions[0]);
    kaiguangai_M->childSfunctions[1] =
      (&kaiguangai_M->NonInlinedSFcns.childSFunctions[1]);
    kaiguangai_M->childSfunctions[2] =
      (&kaiguangai_M->NonInlinedSFcns.childSFunctions[2]);

    /* Level2 S-Function Block: kaiguangai/<S1>/PCI1 (pci1756IO) */
    {
      SimStruct *rts = kaiguangai_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = kaiguangai_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = kaiguangai_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = kaiguangai_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &kaiguangai_M->NonInlinedSFcns.blkInfo2[0]);
      }

      ssSetRTWSfcnInfo(rts, kaiguangai_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &kaiguangai_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &kaiguangai_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &kaiguangai_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &kaiguangai_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &kaiguangai_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 32);
        ssSetPortInfoForInputs(rts,
          &kaiguangai_M->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn0.UPtrs0;
          sfcnUPtrs[0] = &kaiguangai_B.DataTypeConversion6[1];
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn0.UPtrs1;
          sfcnUPtrs[0] = &kaiguangai_B.DataTypeConversion6[3];
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn0.UPtrs2;
          sfcnUPtrs[0] = &kaiguangai_B.DataTypeConversion6[0];
          ssSetInputPortSignalPtrs(rts, 2, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }

        /* port 3 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn0.UPtrs3;
          sfcnUPtrs[0] = &kaiguangai_B.DataTypeConversion6[2];
          ssSetInputPortSignalPtrs(rts, 3, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidth(rts, 3, 1);
        }

        /* port 4 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn0.UPtrs4;
          sfcnUPtrs[0] = &kaiguangai_B.Constant;
          ssSetInputPortSignalPtrs(rts, 4, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidth(rts, 4, 1);
        }

        /* port 5 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn0.UPtrs5;
          sfcnUPtrs[0] = &kaiguangai_B.Constant;
          ssSetInputPortSignalPtrs(rts, 5, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 5, 1);
          ssSetInputPortWidth(rts, 5, 1);
        }

        /* port 6 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn0.UPtrs6;
          sfcnUPtrs[0] = &kaiguangai_B.Constant;
          ssSetInputPortSignalPtrs(rts, 6, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 6, 1);
          ssSetInputPortWidth(rts, 6, 1);
        }

        /* port 7 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn0.UPtrs7;
          sfcnUPtrs[0] = &kaiguangai_B.Constant;
          ssSetInputPortSignalPtrs(rts, 7, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 7, 1);
          ssSetInputPortWidth(rts, 7, 1);
        }

        /* port 8 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn0.UPtrs8;
          sfcnUPtrs[0] = &kaiguangai_B.Constant;
          ssSetInputPortSignalPtrs(rts, 8, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 8, 1);
          ssSetInputPortWidth(rts, 8, 1);
        }

        /* port 9 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn0.UPtrs9;
          sfcnUPtrs[0] = &kaiguangai_B.Constant;
          ssSetInputPortSignalPtrs(rts, 9, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 9, 1);
          ssSetInputPortWidth(rts, 9, 1);
        }

        /* port 10 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn0.UPtrs10;
          sfcnUPtrs[0] = &kaiguangai_B.Constant;
          ssSetInputPortSignalPtrs(rts, 10, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 10, 1);
          ssSetInputPortWidth(rts, 10, 1);
        }

        /* port 11 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn0.UPtrs11;
          sfcnUPtrs[0] = &kaiguangai_B.Constant;
          ssSetInputPortSignalPtrs(rts, 11, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 11, 1);
          ssSetInputPortWidth(rts, 11, 1);
        }

        /* port 12 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn0.UPtrs12;
          sfcnUPtrs[0] = &kaiguangai_B.Constant;
          ssSetInputPortSignalPtrs(rts, 12, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 12, 1);
          ssSetInputPortWidth(rts, 12, 1);
        }

        /* port 13 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn0.UPtrs13;
          sfcnUPtrs[0] = &kaiguangai_B.Constant;
          ssSetInputPortSignalPtrs(rts, 13, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 13, 1);
          ssSetInputPortWidth(rts, 13, 1);
        }

        /* port 14 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn0.UPtrs14;
          sfcnUPtrs[0] = &kaiguangai_B.Constant;
          ssSetInputPortSignalPtrs(rts, 14, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 14, 1);
          ssSetInputPortWidth(rts, 14, 1);
        }

        /* port 15 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn0.UPtrs15;
          sfcnUPtrs[0] = &kaiguangai_B.Constant;
          ssSetInputPortSignalPtrs(rts, 15, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 15, 1);
          ssSetInputPortWidth(rts, 15, 1);
        }

        /* port 16 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn0.UPtrs16;
          sfcnUPtrs[0] = &kaiguangai_B.Constant;
          ssSetInputPortSignalPtrs(rts, 16, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 16, 1);
          ssSetInputPortWidth(rts, 16, 1);
        }

        /* port 17 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn0.UPtrs17;
          sfcnUPtrs[0] = &kaiguangai_B.Constant;
          ssSetInputPortSignalPtrs(rts, 17, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 17, 1);
          ssSetInputPortWidth(rts, 17, 1);
        }

        /* port 18 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn0.UPtrs18;
          sfcnUPtrs[0] = &kaiguangai_B.Constant;
          ssSetInputPortSignalPtrs(rts, 18, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 18, 1);
          ssSetInputPortWidth(rts, 18, 1);
        }

        /* port 19 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn0.UPtrs19;
          sfcnUPtrs[0] = &kaiguangai_B.Constant;
          ssSetInputPortSignalPtrs(rts, 19, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 19, 1);
          ssSetInputPortWidth(rts, 19, 1);
        }

        /* port 20 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn0.UPtrs20;
          sfcnUPtrs[0] = &kaiguangai_B.Constant;
          ssSetInputPortSignalPtrs(rts, 20, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 20, 1);
          ssSetInputPortWidth(rts, 20, 1);
        }

        /* port 21 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn0.UPtrs21;
          sfcnUPtrs[0] = &kaiguangai_B.Constant;
          ssSetInputPortSignalPtrs(rts, 21, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 21, 1);
          ssSetInputPortWidth(rts, 21, 1);
        }

        /* port 22 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn0.UPtrs22;
          sfcnUPtrs[0] = &kaiguangai_B.Constant;
          ssSetInputPortSignalPtrs(rts, 22, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 22, 1);
          ssSetInputPortWidth(rts, 22, 1);
        }

        /* port 23 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn0.UPtrs23;
          sfcnUPtrs[0] = &kaiguangai_B.Constant;
          ssSetInputPortSignalPtrs(rts, 23, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 23, 1);
          ssSetInputPortWidth(rts, 23, 1);
        }

        /* port 24 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn0.UPtrs24;
          sfcnUPtrs[0] = &kaiguangai_B.Constant;
          ssSetInputPortSignalPtrs(rts, 24, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 24, 1);
          ssSetInputPortWidth(rts, 24, 1);
        }

        /* port 25 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn0.UPtrs25;
          sfcnUPtrs[0] = &kaiguangai_B.Constant;
          ssSetInputPortSignalPtrs(rts, 25, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 25, 1);
          ssSetInputPortWidth(rts, 25, 1);
        }

        /* port 26 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn0.UPtrs26;
          sfcnUPtrs[0] = &kaiguangai_B.Constant;
          ssSetInputPortSignalPtrs(rts, 26, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 26, 1);
          ssSetInputPortWidth(rts, 26, 1);
        }

        /* port 27 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn0.UPtrs27;
          sfcnUPtrs[0] = &kaiguangai_B.Constant;
          ssSetInputPortSignalPtrs(rts, 27, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 27, 1);
          ssSetInputPortWidth(rts, 27, 1);
        }

        /* port 28 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn0.UPtrs28;
          sfcnUPtrs[0] = &kaiguangai_B.Constant;
          ssSetInputPortSignalPtrs(rts, 28, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 28, 1);
          ssSetInputPortWidth(rts, 28, 1);
        }

        /* port 29 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn0.UPtrs29;
          sfcnUPtrs[0] = &kaiguangai_B.Constant;
          ssSetInputPortSignalPtrs(rts, 29, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 29, 1);
          ssSetInputPortWidth(rts, 29, 1);
        }

        /* port 30 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn0.UPtrs30;
          sfcnUPtrs[0] = &kaiguangai_B.Constant;
          ssSetInputPortSignalPtrs(rts, 30, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 30, 1);
          ssSetInputPortWidth(rts, 30, 1);
        }

        /* port 31 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn0.UPtrs31;
          sfcnUPtrs[0] = &kaiguangai_B.Constant;
          ssSetInputPortSignalPtrs(rts, 31, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 31, 1);
          ssSetInputPortWidth(rts, 31, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &kaiguangai_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 16);
          ssSetOutputPortSignal(rts, 0, ((real_T *) kaiguangai_B.PCI1_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 16);
          ssSetOutputPortSignal(rts, 1, ((real_T *) kaiguangai_B.PCI1_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI1");
      ssSetPath(rts, "kaiguangai/PCI-1756/PCI1");
      ssSetRTModel(rts,kaiguangai_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &kaiguangai_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)kaiguangai_P.PCI1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)kaiguangai_P.PCI1_P2_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &kaiguangai_DW.PCI1_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &kaiguangai_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &kaiguangai_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 6);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &kaiguangai_DW.PCI1_IWORK[0]);
      }

      /* registration */
      pci1756IO(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.002);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 1);
      _ssSetInputPortConnected(rts, 3, 1);
      _ssSetInputPortConnected(rts, 4, 1);
      _ssSetInputPortConnected(rts, 5, 1);
      _ssSetInputPortConnected(rts, 6, 1);
      _ssSetInputPortConnected(rts, 7, 1);
      _ssSetInputPortConnected(rts, 8, 1);
      _ssSetInputPortConnected(rts, 9, 1);
      _ssSetInputPortConnected(rts, 10, 1);
      _ssSetInputPortConnected(rts, 11, 1);
      _ssSetInputPortConnected(rts, 12, 1);
      _ssSetInputPortConnected(rts, 13, 1);
      _ssSetInputPortConnected(rts, 14, 1);
      _ssSetInputPortConnected(rts, 15, 1);
      _ssSetInputPortConnected(rts, 16, 1);
      _ssSetInputPortConnected(rts, 17, 1);
      _ssSetInputPortConnected(rts, 18, 1);
      _ssSetInputPortConnected(rts, 19, 1);
      _ssSetInputPortConnected(rts, 20, 1);
      _ssSetInputPortConnected(rts, 21, 1);
      _ssSetInputPortConnected(rts, 22, 1);
      _ssSetInputPortConnected(rts, 23, 1);
      _ssSetInputPortConnected(rts, 24, 1);
      _ssSetInputPortConnected(rts, 25, 1);
      _ssSetInputPortConnected(rts, 26, 1);
      _ssSetInputPortConnected(rts, 27, 1);
      _ssSetInputPortConnected(rts, 28, 1);
      _ssSetInputPortConnected(rts, 29, 1);
      _ssSetInputPortConnected(rts, 30, 1);
      _ssSetInputPortConnected(rts, 31, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
      ssSetInputPortBufferDstPort(rts, 3, -1);
      ssSetInputPortBufferDstPort(rts, 4, -1);
      ssSetInputPortBufferDstPort(rts, 5, -1);
      ssSetInputPortBufferDstPort(rts, 6, -1);
      ssSetInputPortBufferDstPort(rts, 7, -1);
      ssSetInputPortBufferDstPort(rts, 8, -1);
      ssSetInputPortBufferDstPort(rts, 9, -1);
      ssSetInputPortBufferDstPort(rts, 10, -1);
      ssSetInputPortBufferDstPort(rts, 11, -1);
      ssSetInputPortBufferDstPort(rts, 12, -1);
      ssSetInputPortBufferDstPort(rts, 13, -1);
      ssSetInputPortBufferDstPort(rts, 14, -1);
      ssSetInputPortBufferDstPort(rts, 15, -1);
      ssSetInputPortBufferDstPort(rts, 16, -1);
      ssSetInputPortBufferDstPort(rts, 17, -1);
      ssSetInputPortBufferDstPort(rts, 18, -1);
      ssSetInputPortBufferDstPort(rts, 19, -1);
      ssSetInputPortBufferDstPort(rts, 20, -1);
      ssSetInputPortBufferDstPort(rts, 21, -1);
      ssSetInputPortBufferDstPort(rts, 22, -1);
      ssSetInputPortBufferDstPort(rts, 23, -1);
      ssSetInputPortBufferDstPort(rts, 24, -1);
      ssSetInputPortBufferDstPort(rts, 25, -1);
      ssSetInputPortBufferDstPort(rts, 26, -1);
      ssSetInputPortBufferDstPort(rts, 27, -1);
      ssSetInputPortBufferDstPort(rts, 28, -1);
      ssSetInputPortBufferDstPort(rts, 29, -1);
      ssSetInputPortBufferDstPort(rts, 30, -1);
      ssSetInputPortBufferDstPort(rts, 31, -1);
    }

    /* Level2 S-Function Block: kaiguangai/<S1>/PCI2 (pci1756IO) */
    {
      SimStruct *rts = kaiguangai_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = kaiguangai_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = kaiguangai_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = kaiguangai_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &kaiguangai_M->NonInlinedSFcns.blkInfo2[1]);
      }

      ssSetRTWSfcnInfo(rts, kaiguangai_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &kaiguangai_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &kaiguangai_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &kaiguangai_M->NonInlinedSFcns.methods4[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &kaiguangai_M->NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts,
          &kaiguangai_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 32);
        ssSetPortInfoForInputs(rts,
          &kaiguangai_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn1.UPtrs0;
          sfcnUPtrs[0] = &kaiguangai_B.memory1[0];
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn1.UPtrs1;
          sfcnUPtrs[0] = &kaiguangai_B.memory1[4];
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn1.UPtrs2;
          sfcnUPtrs[0] = &kaiguangai_B.memory1[8];
          ssSetInputPortSignalPtrs(rts, 2, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }

        /* port 3 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn1.UPtrs3;
          sfcnUPtrs[0] = &kaiguangai_B.memory1[12];
          ssSetInputPortSignalPtrs(rts, 3, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidth(rts, 3, 1);
        }

        /* port 4 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn1.UPtrs4;
          sfcnUPtrs[0] = &kaiguangai_B.memory1[16];
          ssSetInputPortSignalPtrs(rts, 4, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidth(rts, 4, 1);
        }

        /* port 5 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn1.UPtrs5;
          sfcnUPtrs[0] = &kaiguangai_B.memory1[20];
          ssSetInputPortSignalPtrs(rts, 5, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 5, 1);
          ssSetInputPortWidth(rts, 5, 1);
        }

        /* port 6 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn1.UPtrs6;
          sfcnUPtrs[0] = &kaiguangai_B.memory1[24];
          ssSetInputPortSignalPtrs(rts, 6, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 6, 1);
          ssSetInputPortWidth(rts, 6, 1);
        }

        /* port 7 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn1.UPtrs7;
          sfcnUPtrs[0] = &kaiguangai_B.memory1[28];
          ssSetInputPortSignalPtrs(rts, 7, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 7, 1);
          ssSetInputPortWidth(rts, 7, 1);
        }

        /* port 8 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn1.UPtrs8;
          sfcnUPtrs[0] = &kaiguangai_B.memory1[1];
          ssSetInputPortSignalPtrs(rts, 8, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 8, 1);
          ssSetInputPortWidth(rts, 8, 1);
        }

        /* port 9 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn1.UPtrs9;
          sfcnUPtrs[0] = &kaiguangai_B.memory1[5];
          ssSetInputPortSignalPtrs(rts, 9, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 9, 1);
          ssSetInputPortWidth(rts, 9, 1);
        }

        /* port 10 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn1.UPtrs10;
          sfcnUPtrs[0] = &kaiguangai_B.memory1[9];
          ssSetInputPortSignalPtrs(rts, 10, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 10, 1);
          ssSetInputPortWidth(rts, 10, 1);
        }

        /* port 11 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn1.UPtrs11;
          sfcnUPtrs[0] = &kaiguangai_B.memory1[13];
          ssSetInputPortSignalPtrs(rts, 11, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 11, 1);
          ssSetInputPortWidth(rts, 11, 1);
        }

        /* port 12 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn1.UPtrs12;
          sfcnUPtrs[0] = &kaiguangai_B.memory1[17];
          ssSetInputPortSignalPtrs(rts, 12, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 12, 1);
          ssSetInputPortWidth(rts, 12, 1);
        }

        /* port 13 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn1.UPtrs13;
          sfcnUPtrs[0] = &kaiguangai_B.memory1[21];
          ssSetInputPortSignalPtrs(rts, 13, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 13, 1);
          ssSetInputPortWidth(rts, 13, 1);
        }

        /* port 14 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn1.UPtrs14;
          sfcnUPtrs[0] = &kaiguangai_B.memory1[25];
          ssSetInputPortSignalPtrs(rts, 14, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 14, 1);
          ssSetInputPortWidth(rts, 14, 1);
        }

        /* port 15 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn1.UPtrs15;
          sfcnUPtrs[0] = &kaiguangai_B.memory1[29];
          ssSetInputPortSignalPtrs(rts, 15, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 15, 1);
          ssSetInputPortWidth(rts, 15, 1);
        }

        /* port 16 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn1.UPtrs16;
          sfcnUPtrs[0] = &kaiguangai_B.memory1[2];
          ssSetInputPortSignalPtrs(rts, 16, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 16, 1);
          ssSetInputPortWidth(rts, 16, 1);
        }

        /* port 17 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn1.UPtrs17;
          sfcnUPtrs[0] = &kaiguangai_B.memory1[6];
          ssSetInputPortSignalPtrs(rts, 17, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 17, 1);
          ssSetInputPortWidth(rts, 17, 1);
        }

        /* port 18 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn1.UPtrs18;
          sfcnUPtrs[0] = &kaiguangai_B.memory1[10];
          ssSetInputPortSignalPtrs(rts, 18, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 18, 1);
          ssSetInputPortWidth(rts, 18, 1);
        }

        /* port 19 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn1.UPtrs19;
          sfcnUPtrs[0] = &kaiguangai_B.memory1[14];
          ssSetInputPortSignalPtrs(rts, 19, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 19, 1);
          ssSetInputPortWidth(rts, 19, 1);
        }

        /* port 20 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn1.UPtrs20;
          sfcnUPtrs[0] = &kaiguangai_B.memory1[18];
          ssSetInputPortSignalPtrs(rts, 20, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 20, 1);
          ssSetInputPortWidth(rts, 20, 1);
        }

        /* port 21 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn1.UPtrs21;
          sfcnUPtrs[0] = &kaiguangai_B.memory1[22];
          ssSetInputPortSignalPtrs(rts, 21, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 21, 1);
          ssSetInputPortWidth(rts, 21, 1);
        }

        /* port 22 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn1.UPtrs22;
          sfcnUPtrs[0] = &kaiguangai_B.memory1[26];
          ssSetInputPortSignalPtrs(rts, 22, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 22, 1);
          ssSetInputPortWidth(rts, 22, 1);
        }

        /* port 23 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn1.UPtrs23;
          sfcnUPtrs[0] = &kaiguangai_B.memory1[30];
          ssSetInputPortSignalPtrs(rts, 23, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 23, 1);
          ssSetInputPortWidth(rts, 23, 1);
        }

        /* port 24 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn1.UPtrs24;
          sfcnUPtrs[0] = &kaiguangai_B.memory1[3];
          ssSetInputPortSignalPtrs(rts, 24, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 24, 1);
          ssSetInputPortWidth(rts, 24, 1);
        }

        /* port 25 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn1.UPtrs25;
          sfcnUPtrs[0] = &kaiguangai_B.memory1[7];
          ssSetInputPortSignalPtrs(rts, 25, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 25, 1);
          ssSetInputPortWidth(rts, 25, 1);
        }

        /* port 26 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn1.UPtrs26;
          sfcnUPtrs[0] = &kaiguangai_B.memory1[11];
          ssSetInputPortSignalPtrs(rts, 26, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 26, 1);
          ssSetInputPortWidth(rts, 26, 1);
        }

        /* port 27 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn1.UPtrs27;
          sfcnUPtrs[0] = &kaiguangai_B.memory1[15];
          ssSetInputPortSignalPtrs(rts, 27, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 27, 1);
          ssSetInputPortWidth(rts, 27, 1);
        }

        /* port 28 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn1.UPtrs28;
          sfcnUPtrs[0] = &kaiguangai_B.memory1[19];
          ssSetInputPortSignalPtrs(rts, 28, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 28, 1);
          ssSetInputPortWidth(rts, 28, 1);
        }

        /* port 29 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn1.UPtrs29;
          sfcnUPtrs[0] = &kaiguangai_B.memory1[23];
          ssSetInputPortSignalPtrs(rts, 29, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 29, 1);
          ssSetInputPortWidth(rts, 29, 1);
        }

        /* port 30 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn1.UPtrs30;
          sfcnUPtrs[0] = &kaiguangai_B.memory1[27];
          ssSetInputPortSignalPtrs(rts, 30, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 30, 1);
          ssSetInputPortWidth(rts, 30, 1);
        }

        /* port 31 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn1.UPtrs31;
          sfcnUPtrs[0] = &kaiguangai_B.memory1[31];
          ssSetInputPortSignalPtrs(rts, 31, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 31, 1);
          ssSetInputPortWidth(rts, 31, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &kaiguangai_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 16);
          ssSetOutputPortSignal(rts, 0, ((real_T *) kaiguangai_B.PCI2_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 16);
          ssSetOutputPortSignal(rts, 1, ((real_T *) kaiguangai_B.PCI2_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI2");
      ssSetPath(rts, "kaiguangai/PCI-1756/PCI2");
      ssSetRTModel(rts,kaiguangai_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &kaiguangai_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)kaiguangai_P.PCI2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)kaiguangai_P.PCI2_P2_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &kaiguangai_DW.PCI2_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &kaiguangai_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &kaiguangai_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 6);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &kaiguangai_DW.PCI2_IWORK[0]);
      }

      /* registration */
      pci1756IO(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.002);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 1);
      _ssSetInputPortConnected(rts, 3, 1);
      _ssSetInputPortConnected(rts, 4, 1);
      _ssSetInputPortConnected(rts, 5, 1);
      _ssSetInputPortConnected(rts, 6, 1);
      _ssSetInputPortConnected(rts, 7, 1);
      _ssSetInputPortConnected(rts, 8, 1);
      _ssSetInputPortConnected(rts, 9, 1);
      _ssSetInputPortConnected(rts, 10, 1);
      _ssSetInputPortConnected(rts, 11, 1);
      _ssSetInputPortConnected(rts, 12, 1);
      _ssSetInputPortConnected(rts, 13, 1);
      _ssSetInputPortConnected(rts, 14, 1);
      _ssSetInputPortConnected(rts, 15, 1);
      _ssSetInputPortConnected(rts, 16, 1);
      _ssSetInputPortConnected(rts, 17, 1);
      _ssSetInputPortConnected(rts, 18, 1);
      _ssSetInputPortConnected(rts, 19, 1);
      _ssSetInputPortConnected(rts, 20, 1);
      _ssSetInputPortConnected(rts, 21, 1);
      _ssSetInputPortConnected(rts, 22, 1);
      _ssSetInputPortConnected(rts, 23, 1);
      _ssSetInputPortConnected(rts, 24, 1);
      _ssSetInputPortConnected(rts, 25, 1);
      _ssSetInputPortConnected(rts, 26, 1);
      _ssSetInputPortConnected(rts, 27, 1);
      _ssSetInputPortConnected(rts, 28, 1);
      _ssSetInputPortConnected(rts, 29, 1);
      _ssSetInputPortConnected(rts, 30, 1);
      _ssSetInputPortConnected(rts, 31, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
      ssSetInputPortBufferDstPort(rts, 3, -1);
      ssSetInputPortBufferDstPort(rts, 4, -1);
      ssSetInputPortBufferDstPort(rts, 5, -1);
      ssSetInputPortBufferDstPort(rts, 6, -1);
      ssSetInputPortBufferDstPort(rts, 7, -1);
      ssSetInputPortBufferDstPort(rts, 8, -1);
      ssSetInputPortBufferDstPort(rts, 9, -1);
      ssSetInputPortBufferDstPort(rts, 10, -1);
      ssSetInputPortBufferDstPort(rts, 11, -1);
      ssSetInputPortBufferDstPort(rts, 12, -1);
      ssSetInputPortBufferDstPort(rts, 13, -1);
      ssSetInputPortBufferDstPort(rts, 14, -1);
      ssSetInputPortBufferDstPort(rts, 15, -1);
      ssSetInputPortBufferDstPort(rts, 16, -1);
      ssSetInputPortBufferDstPort(rts, 17, -1);
      ssSetInputPortBufferDstPort(rts, 18, -1);
      ssSetInputPortBufferDstPort(rts, 19, -1);
      ssSetInputPortBufferDstPort(rts, 20, -1);
      ssSetInputPortBufferDstPort(rts, 21, -1);
      ssSetInputPortBufferDstPort(rts, 22, -1);
      ssSetInputPortBufferDstPort(rts, 23, -1);
      ssSetInputPortBufferDstPort(rts, 24, -1);
      ssSetInputPortBufferDstPort(rts, 25, -1);
      ssSetInputPortBufferDstPort(rts, 26, -1);
      ssSetInputPortBufferDstPort(rts, 27, -1);
      ssSetInputPortBufferDstPort(rts, 28, -1);
      ssSetInputPortBufferDstPort(rts, 29, -1);
      ssSetInputPortBufferDstPort(rts, 30, -1);
      ssSetInputPortBufferDstPort(rts, 31, -1);
    }

    /* Level2 S-Function Block: kaiguangai/<S1>/PCI3 (pci1756IO) */
    {
      SimStruct *rts = kaiguangai_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod = kaiguangai_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset = kaiguangai_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = kaiguangai_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &kaiguangai_M->NonInlinedSFcns.blkInfo2[2]);
      }

      ssSetRTWSfcnInfo(rts, kaiguangai_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &kaiguangai_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &kaiguangai_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &kaiguangai_M->NonInlinedSFcns.methods4[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &kaiguangai_M->NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts,
          &kaiguangai_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 32);
        ssSetPortInfoForInputs(rts,
          &kaiguangai_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn2.UPtrs0;
          sfcnUPtrs[0] = &kaiguangai_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn2.UPtrs1;
          sfcnUPtrs[0] = &kaiguangai_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn2.UPtrs2;
          sfcnUPtrs[0] = &kaiguangai_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 2, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }

        /* port 3 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn2.UPtrs3;
          sfcnUPtrs[0] = &kaiguangai_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 3, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidth(rts, 3, 1);
        }

        /* port 4 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn2.UPtrs4;
          sfcnUPtrs[0] = &kaiguangai_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 4, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidth(rts, 4, 1);
        }

        /* port 5 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn2.UPtrs5;
          sfcnUPtrs[0] = &kaiguangai_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 5, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 5, 1);
          ssSetInputPortWidth(rts, 5, 1);
        }

        /* port 6 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn2.UPtrs6;
          sfcnUPtrs[0] = &kaiguangai_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 6, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 6, 1);
          ssSetInputPortWidth(rts, 6, 1);
        }

        /* port 7 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn2.UPtrs7;
          sfcnUPtrs[0] = &kaiguangai_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 7, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 7, 1);
          ssSetInputPortWidth(rts, 7, 1);
        }

        /* port 8 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn2.UPtrs8;
          sfcnUPtrs[0] = &kaiguangai_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 8, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 8, 1);
          ssSetInputPortWidth(rts, 8, 1);
        }

        /* port 9 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn2.UPtrs9;
          sfcnUPtrs[0] = &kaiguangai_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 9, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 9, 1);
          ssSetInputPortWidth(rts, 9, 1);
        }

        /* port 10 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn2.UPtrs10;
          sfcnUPtrs[0] = &kaiguangai_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 10, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 10, 1);
          ssSetInputPortWidth(rts, 10, 1);
        }

        /* port 11 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn2.UPtrs11;
          sfcnUPtrs[0] = &kaiguangai_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 11, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 11, 1);
          ssSetInputPortWidth(rts, 11, 1);
        }

        /* port 12 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn2.UPtrs12;
          sfcnUPtrs[0] = &kaiguangai_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 12, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 12, 1);
          ssSetInputPortWidth(rts, 12, 1);
        }

        /* port 13 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn2.UPtrs13;
          sfcnUPtrs[0] = &kaiguangai_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 13, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 13, 1);
          ssSetInputPortWidth(rts, 13, 1);
        }

        /* port 14 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn2.UPtrs14;
          sfcnUPtrs[0] = &kaiguangai_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 14, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 14, 1);
          ssSetInputPortWidth(rts, 14, 1);
        }

        /* port 15 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn2.UPtrs15;
          sfcnUPtrs[0] = &kaiguangai_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 15, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 15, 1);
          ssSetInputPortWidth(rts, 15, 1);
        }

        /* port 16 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn2.UPtrs16;
          sfcnUPtrs[0] = &kaiguangai_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 16, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 16, 1);
          ssSetInputPortWidth(rts, 16, 1);
        }

        /* port 17 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn2.UPtrs17;
          sfcnUPtrs[0] = &kaiguangai_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 17, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 17, 1);
          ssSetInputPortWidth(rts, 17, 1);
        }

        /* port 18 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn2.UPtrs18;
          sfcnUPtrs[0] = &kaiguangai_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 18, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 18, 1);
          ssSetInputPortWidth(rts, 18, 1);
        }

        /* port 19 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn2.UPtrs19;
          sfcnUPtrs[0] = &kaiguangai_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 19, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 19, 1);
          ssSetInputPortWidth(rts, 19, 1);
        }

        /* port 20 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn2.UPtrs20;
          sfcnUPtrs[0] = &kaiguangai_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 20, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 20, 1);
          ssSetInputPortWidth(rts, 20, 1);
        }

        /* port 21 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn2.UPtrs21;
          sfcnUPtrs[0] = &kaiguangai_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 21, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 21, 1);
          ssSetInputPortWidth(rts, 21, 1);
        }

        /* port 22 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn2.UPtrs22;
          sfcnUPtrs[0] = &kaiguangai_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 22, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 22, 1);
          ssSetInputPortWidth(rts, 22, 1);
        }

        /* port 23 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn2.UPtrs23;
          sfcnUPtrs[0] = &kaiguangai_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 23, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 23, 1);
          ssSetInputPortWidth(rts, 23, 1);
        }

        /* port 24 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn2.UPtrs24;
          sfcnUPtrs[0] = &kaiguangai_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 24, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 24, 1);
          ssSetInputPortWidth(rts, 24, 1);
        }

        /* port 25 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn2.UPtrs25;
          sfcnUPtrs[0] = &kaiguangai_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 25, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 25, 1);
          ssSetInputPortWidth(rts, 25, 1);
        }

        /* port 26 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn2.UPtrs26;
          sfcnUPtrs[0] = &kaiguangai_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 26, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 26, 1);
          ssSetInputPortWidth(rts, 26, 1);
        }

        /* port 27 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn2.UPtrs27;
          sfcnUPtrs[0] = &kaiguangai_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 27, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 27, 1);
          ssSetInputPortWidth(rts, 27, 1);
        }

        /* port 28 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn2.UPtrs28;
          sfcnUPtrs[0] = &kaiguangai_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 28, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 28, 1);
          ssSetInputPortWidth(rts, 28, 1);
        }

        /* port 29 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn2.UPtrs29;
          sfcnUPtrs[0] = &kaiguangai_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 29, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 29, 1);
          ssSetInputPortWidth(rts, 29, 1);
        }

        /* port 30 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn2.UPtrs30;
          sfcnUPtrs[0] = &kaiguangai_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 30, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 30, 1);
          ssSetInputPortWidth(rts, 30, 1);
        }

        /* port 31 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai_M->NonInlinedSFcns.Sfcn2.UPtrs31;
          sfcnUPtrs[0] = &kaiguangai_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 31, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 31, 1);
          ssSetInputPortWidth(rts, 31, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &kaiguangai_M->NonInlinedSFcns.Sfcn2.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 16);
          ssSetOutputPortSignal(rts, 0, ((real_T *) kaiguangai_B.PCI3_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 16);
          ssSetOutputPortSignal(rts, 1, ((real_T *) kaiguangai_B.PCI3_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI3");
      ssSetPath(rts, "kaiguangai/PCI-1756/PCI3");
      ssSetRTModel(rts,kaiguangai_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &kaiguangai_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)kaiguangai_P.PCI3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)kaiguangai_P.PCI3_P2_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &kaiguangai_DW.PCI3_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &kaiguangai_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &kaiguangai_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 6);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &kaiguangai_DW.PCI3_IWORK[0]);
      }

      /* registration */
      pci1756IO(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.002);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 1);
      _ssSetInputPortConnected(rts, 3, 1);
      _ssSetInputPortConnected(rts, 4, 1);
      _ssSetInputPortConnected(rts, 5, 1);
      _ssSetInputPortConnected(rts, 6, 1);
      _ssSetInputPortConnected(rts, 7, 1);
      _ssSetInputPortConnected(rts, 8, 1);
      _ssSetInputPortConnected(rts, 9, 1);
      _ssSetInputPortConnected(rts, 10, 1);
      _ssSetInputPortConnected(rts, 11, 1);
      _ssSetInputPortConnected(rts, 12, 1);
      _ssSetInputPortConnected(rts, 13, 1);
      _ssSetInputPortConnected(rts, 14, 1);
      _ssSetInputPortConnected(rts, 15, 1);
      _ssSetInputPortConnected(rts, 16, 1);
      _ssSetInputPortConnected(rts, 17, 1);
      _ssSetInputPortConnected(rts, 18, 1);
      _ssSetInputPortConnected(rts, 19, 1);
      _ssSetInputPortConnected(rts, 20, 1);
      _ssSetInputPortConnected(rts, 21, 1);
      _ssSetInputPortConnected(rts, 22, 1);
      _ssSetInputPortConnected(rts, 23, 1);
      _ssSetInputPortConnected(rts, 24, 1);
      _ssSetInputPortConnected(rts, 25, 1);
      _ssSetInputPortConnected(rts, 26, 1);
      _ssSetInputPortConnected(rts, 27, 1);
      _ssSetInputPortConnected(rts, 28, 1);
      _ssSetInputPortConnected(rts, 29, 1);
      _ssSetInputPortConnected(rts, 30, 1);
      _ssSetInputPortConnected(rts, 31, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
      ssSetInputPortBufferDstPort(rts, 3, -1);
      ssSetInputPortBufferDstPort(rts, 4, -1);
      ssSetInputPortBufferDstPort(rts, 5, -1);
      ssSetInputPortBufferDstPort(rts, 6, -1);
      ssSetInputPortBufferDstPort(rts, 7, -1);
      ssSetInputPortBufferDstPort(rts, 8, -1);
      ssSetInputPortBufferDstPort(rts, 9, -1);
      ssSetInputPortBufferDstPort(rts, 10, -1);
      ssSetInputPortBufferDstPort(rts, 11, -1);
      ssSetInputPortBufferDstPort(rts, 12, -1);
      ssSetInputPortBufferDstPort(rts, 13, -1);
      ssSetInputPortBufferDstPort(rts, 14, -1);
      ssSetInputPortBufferDstPort(rts, 15, -1);
      ssSetInputPortBufferDstPort(rts, 16, -1);
      ssSetInputPortBufferDstPort(rts, 17, -1);
      ssSetInputPortBufferDstPort(rts, 18, -1);
      ssSetInputPortBufferDstPort(rts, 19, -1);
      ssSetInputPortBufferDstPort(rts, 20, -1);
      ssSetInputPortBufferDstPort(rts, 21, -1);
      ssSetInputPortBufferDstPort(rts, 22, -1);
      ssSetInputPortBufferDstPort(rts, 23, -1);
      ssSetInputPortBufferDstPort(rts, 24, -1);
      ssSetInputPortBufferDstPort(rts, 25, -1);
      ssSetInputPortBufferDstPort(rts, 26, -1);
      ssSetInputPortBufferDstPort(rts, 27, -1);
      ssSetInputPortBufferDstPort(rts, 28, -1);
      ssSetInputPortBufferDstPort(rts, 29, -1);
      ssSetInputPortBufferDstPort(rts, 30, -1);
      ssSetInputPortBufferDstPort(rts, 31, -1);
    }
  }

  /* Initialize Sizes */
  kaiguangai_M->Sizes.numContStates = (0);/* Number of continuous states */
  kaiguangai_M->Sizes.numY = (0);      /* Number of model outputs */
  kaiguangai_M->Sizes.numU = (0);      /* Number of model inputs */
  kaiguangai_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  kaiguangai_M->Sizes.numSampTimes = (1);/* Number of sample times */
  kaiguangai_M->Sizes.numBlocks = (249);/* Number of blocks */
  kaiguangai_M->Sizes.numBlockIO = (496);/* Number of block outputs */
  kaiguangai_M->Sizes.numBlockPrms = (112);/* Sum of parameter "widths" */
  return kaiguangai_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
