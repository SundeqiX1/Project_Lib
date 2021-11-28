/*
 * kaiguangai1108.c
 *
 * Code generation for model "kaiguangai1108".
 *
 * Model version              : 1.85
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Tue Nov 09 15:31:44 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rt_logging_mmi.h"
#include "kaiguangai1108_capi.h"
#include "kaiguangai1108.h"
#include "kaiguangai1108_private.h"

/* Named constants for Chart: '<S16>/Chart' */
#define kaiguangai1108_CALL_EVENT      (-1)
#define kaiguangai1108_IN_off          ((uint8_T)1U)
#define kaiguangai1108_IN_off1         ((uint8_T)2U)
#define kaiguangai1108_IN_on           ((uint8_T)2U)
#define kaiguangai1108_IN_shoudong     ((uint8_T)3U)
#define kaiguangai1108_IN_t            ((uint8_T)3U)
#define kaiguangai1108_IN_t1           ((uint8_T)4U)
#define kaiguangai1108_IN_t2           ((uint8_T)5U)
#define kaiguangai1108_IN_t2_o         ((uint8_T)4U)
#define kaiguangai1108_IN_t3           ((uint8_T)5U)
#define kaiguangai11_IN_NO_ACTIVE_CHILD ((uint8_T)0U)

/* Named constants for Chart: '<S17>/1#1' */
#define kaiguangai1108_CALL_EVENT_k    (-1)
#define kaiguangai1108_IN_chushihua    ((uint8_T)1U)
#define kaiguangai1108_IN_jiesuoshijian ((uint8_T)3U)
#define kaiguangai1108_IN_kaigaishijian ((uint8_T)4U)
#define kaiguangai1108_IN_off_b        ((uint8_T)5U)
#define kaiguangai1108_IN_on1          ((uint8_T)6U)
#define kaiguangai1108_IN_on10         ((uint8_T)7U)
#define kaiguangai1108_IN_on11         ((uint8_T)8U)
#define kaiguangai1108_IN_on12         ((uint8_T)9U)
#define kaiguangai1108_IN_on13         ((uint8_T)10U)
#define kaiguangai1108_IN_on14         ((uint8_T)11U)
#define kaiguangai1108_IN_on15         ((uint8_T)12U)
#define kaiguangai1108_IN_on16         ((uint8_T)13U)
#define kaiguangai1108_IN_on17         ((uint8_T)14U)
#define kaiguangai1108_IN_on18         ((uint8_T)15U)
#define kaiguangai1108_IN_on19         ((uint8_T)16U)
#define kaiguangai1108_IN_on2          ((uint8_T)17U)
#define kaiguangai1108_IN_on3          ((uint8_T)18U)
#define kaiguangai1108_IN_on4          ((uint8_T)19U)
#define kaiguangai1108_IN_on5          ((uint8_T)20U)
#define kaiguangai1108_IN_on6          ((uint8_T)21U)
#define kaiguangai1108_IN_on7          ((uint8_T)22U)
#define kaiguangai1108_IN_on8          ((uint8_T)23U)
#define kaiguangai1108_IN_on9          ((uint8_T)24U)
#define kaiguangai1108_IN_start        ((uint8_T)32U)
#define kaiguangai1108_IN_stop         ((uint8_T)33U)
#define kaiguangai1108_IN_t10guiling   ((uint8_T)35U)
#define kaiguangai1108_IN_t2guiling    ((uint8_T)36U)
#define kaiguangai1108_IN_t4guiling    ((uint8_T)37U)
#define kaiguangai1108_IN_t6guiling    ((uint8_T)38U)
#define kaiguangai1108_IN_t8guiling    ((uint8_T)39U)
#define kaiguangai1108_IN_tguiling     ((uint8_T)40U)
#define kaiguangai1108_IN_yajinshijian ((uint8_T)41U)
#define kaiguangai1108_IN_zidong       ((uint8_T)1U)
#define kaiguangai110_IN_guangaishijian ((uint8_T)2U)
#define kaiguangai110_IN_songkaishijian ((uint8_T)25U)
#define kaiguangai110_IN_suodingshijian ((uint8_T)34U)
#define kaiguangai110_IN_yanchishijian1 ((uint8_T)42U)
#define kaiguangai110_IN_yanchishijian2 ((uint8_T)43U)
#define kaiguangai110_IN_yanchishijian3 ((uint8_T)44U)
#define kaiguangai110_IN_yanchishijian4 ((uint8_T)45U)
#define kaiguangai110_IN_yanchishijian5 ((uint8_T)46U)
#define kaiguangai110_IN_yanchishijian6 ((uint8_T)47U)
#define kaiguangai11_IN_songkaishijian1 ((uint8_T)26U)
#define kaiguangai11_IN_songkaishijian2 ((uint8_T)27U)
#define kaiguangai11_IN_songkaishijian3 ((uint8_T)28U)
#define kaiguangai11_IN_songkaishijian4 ((uint8_T)29U)
#define kaiguangai11_IN_songkaishijian5 ((uint8_T)30U)
#define kaiguangai11_IN_songkaishijian6 ((uint8_T)31U)
#define kaiguangai_IN_NO_ACTIVE_CHILD_a ((uint8_T)0U)

/* Named constants for Chart: '<S9>/jinjichuli' */
#define kaiguanga_IN_NO_ACTIVE_CHILD_af ((uint8_T)0U)
#define kaiguangai1108_CALL_EVENT_o    (-1)
#define kaiguangai1108_IN_A            ((uint8_T)1U)
#define kaiguangai1108_IN_MANUAL       ((uint8_T)1U)
#define kaiguangai1108_IN_end          ((uint8_T)2U)
#define kaiguangai1108_IN_off1_c       ((uint8_T)3U)
#define kaiguangai1108_IN_on1_e        ((uint8_T)4U)
#define kaiguangai1108_IN_on_g         ((uint8_T)2U)

/* Named constants for Chart: '<S6>/Chart' */
#define kaiguangai1108_CALL_EVENT_a    (-1)
#define kaiguangai1108_IN_off_o        ((uint8_T)1U)
#define kaiguangai1108_IN_on1_f        ((uint8_T)3U)
#define kaiguangai1108_IN_on_l         ((uint8_T)2U)
#define kaiguangai_IN_NO_ACTIVE_CHILD_j ((uint8_T)0U)

/* Named constants for Chart: '<S17>/1#' */
#define kaiguangai1108_IN_chushihua_i  ((uint8_T)1U)
#define kaiguangai1108_IN_off_g        ((uint8_T)5U)
#define kaiguangai1108_IN_on10_j       ((uint8_T)7U)
#define kaiguangai1108_IN_on11_l       ((uint8_T)8U)
#define kaiguangai1108_IN_on12_j       ((uint8_T)9U)
#define kaiguangai1108_IN_on13_f       ((uint8_T)10U)
#define kaiguangai1108_IN_on14_i       ((uint8_T)11U)
#define kaiguangai1108_IN_on15_k       ((uint8_T)12U)
#define kaiguangai1108_IN_on16_j       ((uint8_T)13U)
#define kaiguangai1108_IN_on17_h       ((uint8_T)14U)
#define kaiguangai1108_IN_on18_b       ((uint8_T)15U)
#define kaiguangai1108_IN_on19_l       ((uint8_T)16U)
#define kaiguangai1108_IN_on1_p        ((uint8_T)6U)
#define kaiguangai1108_IN_on2_j        ((uint8_T)17U)
#define kaiguangai1108_IN_on3_g        ((uint8_T)18U)
#define kaiguangai1108_IN_on4_m        ((uint8_T)19U)
#define kaiguangai1108_IN_on5_a        ((uint8_T)20U)
#define kaiguangai1108_IN_on6_g        ((uint8_T)21U)
#define kaiguangai1108_IN_on7_e        ((uint8_T)22U)
#define kaiguangai1108_IN_on8_e        ((uint8_T)23U)
#define kaiguangai1108_IN_on9_i        ((uint8_T)24U)
#define kaiguangai1108_IN_start_g      ((uint8_T)32U)
#define kaiguangai1108_IN_stop_g       ((uint8_T)33U)
#define kaiguangai1108_IN_t10guiling_b ((uint8_T)35U)
#define kaiguangai1108_IN_t2guiling_o  ((uint8_T)36U)
#define kaiguangai1108_IN_t4guiling_d  ((uint8_T)37U)
#define kaiguangai1108_IN_t6guiling_m  ((uint8_T)38U)
#define kaiguangai1108_IN_t8guiling_j  ((uint8_T)39U)
#define kaiguangai1108_IN_tguiling_p   ((uint8_T)40U)
#define kaiguangai1108_IN_zidong_g     ((uint8_T)1U)
#define kaiguangai110_IN_yajinshijian_o ((uint8_T)41U)
#define kaiguangai11_IN_jiesuoshijian_j ((uint8_T)3U)
#define kaiguangai11_IN_kaigaishijian_l ((uint8_T)4U)
#define kaiguangai1_IN_guangaishijian_o ((uint8_T)2U)
#define kaiguangai1_IN_songkaishijian_d ((uint8_T)25U)
#define kaiguangai1_IN_suodingshijian_g ((uint8_T)34U)
#define kaiguangai1_IN_yanchishijian1_f ((uint8_T)42U)
#define kaiguangai1_IN_yanchishijian2_h ((uint8_T)43U)
#define kaiguangai1_IN_yanchishijian3_f ((uint8_T)44U)
#define kaiguangai1_IN_yanchishijian4_a ((uint8_T)45U)
#define kaiguangai1_IN_yanchishijian5_i ((uint8_T)46U)
#define kaiguangai1_IN_yanchishijian6_f ((uint8_T)47U)
#define kaiguangai_IN_songkaishijian1_o ((uint8_T)26U)
#define kaiguangai_IN_songkaishijian2_l ((uint8_T)27U)
#define kaiguangai_IN_songkaishijian3_f ((uint8_T)28U)
#define kaiguangai_IN_songkaishijian4_h ((uint8_T)29U)
#define kaiguangai_IN_songkaishijian5_j ((uint8_T)30U)
#define kaiguangai_IN_songkaishijian6_e ((uint8_T)31U)

/* Block signals (auto storage) */
B_kaiguangai1108_T kaiguangai1108_B;

/* Block states (auto storage) */
DW_kaiguangai1108_T kaiguangai1108_DW;

/* Real-time model */
RT_MODEL_kaiguangai1108_T kaiguangai1108_M_;
RT_MODEL_kaiguangai1108_T *const kaiguangai1108_M = &kaiguangai1108_M_;

/* Forward declaration for local functions */
static void kaiguangai1108_songkai(real_T rtu_yjdw, real_T rtu_skdw, real_T
  rtu_songkai, B_Chart_kaiguangai1108_T *localB, DW_Chart_kaiguangai1108_T
  *localDW);
static void kaiguangai1108_kaigai(real_T rtu_kgdw1, real_T rtu_kgdw2, real_T
  rtu_skdw, real_T rtu_kaigai, B_Chart_kaiguangai1108_T *localB,
  DW_Chart_kaiguangai1108_T *localDW);
static void kaiguang_exit_internal_shoudong(DW_Chart_kaiguangai1108_T *localDW);
static void kaiguangai1108_suoding_yajin(real_T rtu_sddw, real_T rtu_jsdw,
  real_T rtu_suoding, B_Chart_kaiguangai1108_T *localB,
  DW_Chart_kaiguangai1108_T *localDW);
static void kaiguangai1108_jiesuo_songkai(real_T rtu_sddw, real_T rtu_jsdw,
  real_T rtu_skdw, real_T rtu_jiesuo, B_Chart_kaiguangai1108_T *localB,
  DW_Chart_kaiguangai1108_T *localDW);
static void kaiguangai1108_shoudong(real_T rtu_kgdw1, real_T rtu_kgdw2, real_T
  rtu_ggdw1, real_T rtu_ggdw2, real_T rtu_sddw, real_T rtu_jsdw, real_T rtu_yjdw,
  real_T rtu_skdw, real_T rtu_songkai, real_T rtu_kaigai, real_T rtu_suoding,
  real_T rtu_jiesuo, real_T rtu_guangai, real_T rtu_yajin, real_T rtu_jieshu,
  B_Chart_kaiguangai1108_T *localB, DW_Chart_kaiguangai1108_T *localDW);

/* Forward declaration for local functions */
static void kaiguangai1108_on4(real_T rtu_kgdw1, real_T rtu_kgdw2, real_T
  rtu_skdw, real_T rtu_jsdw, B_u1_kaiguangai1108_T *localB,
  DW_u1_kaiguangai1108_T *localDW);
static void kaiguangai1108_on5(real_T rtu_ggdw1, real_T rtu_ggdw2, real_T
  rtu_skdw, real_T rtu_jsdw, B_u1_kaiguangai1108_T *localB,
  DW_u1_kaiguangai1108_T *localDW);
static void kaiguangai1108_on6(real_T rtu_ggdw1, real_T rtu_ggdw2, real_T
  rtu_sddw, real_T rtu_yjdw, B_u1_kaiguangai1108_T *localB,
  DW_u1_kaiguangai1108_T *localDW);
static void kaiguang_enter_atomic_chushihua(B_u1_kaiguangai1108_T *localB);
static void kaiguangai1108_on7(real_T rtu_shedingcishu, real_T rtu_jieshu,
  B_u1_kaiguangai1108_T *localB, DW_u1_kaiguangai1108_T *localDW);
static void kaiguangai1108_songkaishijian(real_T rtu_skdw, real_T rtu_jsdw,
  B_u1_kaiguangai1108_T *localB, DW_u1_kaiguangai1108_T *localDW);
static void kaiguangai1108_songkaishijian1(real_T rtu_skdw, real_T rtu_jsdw,
  B_u1_kaiguangai1108_T *localB, DW_u1_kaiguangai1108_T *localDW);
static void kaiguangai1108_songkaishijian2(real_T rtu_kgdw1, real_T rtu_kgdw2,
  real_T rtu_skdw, real_T rtu_jsdw, B_u1_kaiguangai1108_T *localB,
  DW_u1_kaiguangai1108_T *localDW);
static void kaiguangai1108_songkaishijian3(real_T rtu_kgdw1, real_T rtu_kgdw2,
  real_T rtu_sddw, real_T rtu_yjdw, real_T rtu_skdw, real_T rtu_jsdw,
  B_u1_kaiguangai1108_T *localB, DW_u1_kaiguangai1108_T *localDW);
static void kaiguangai1108_songkaishijian4(real_T rtu_kgdw1, real_T rtu_kgdw2,
  real_T rtu_skdw, real_T rtu_jsdw, B_u1_kaiguangai1108_T *localB,
  DW_u1_kaiguangai1108_T *localDW);
static void kaiguangai1108_songkaishijian5(real_T rtu_ggdw1, real_T rtu_ggdw2,
  real_T rtu_skdw, real_T rtu_jsdw, B_u1_kaiguangai1108_T *localB,
  DW_u1_kaiguangai1108_T *localDW);
static void kaiguangai1108_songkaishijian6(real_T rtu_ggdw1, real_T rtu_ggdw2,
  real_T rtu_sddw, real_T rtu_yjdw, B_u1_kaiguangai1108_T *localB,
  DW_u1_kaiguangai1108_T *localDW);
static void kaiguangai1108_suodingshijian(real_T rtu_kgdw1, real_T rtu_kgdw2,
  real_T rtu_sddw, real_T rtu_yjdw, B_u1_kaiguangai1108_T *localB,
  DW_u1_kaiguangai1108_T *localDW);
static void kaiguangai1108_t2guiling(real_T rtu_t3, B_u1_kaiguangai1108_T
  *localB, DW_u1_kaiguangai1108_T *localDW);
static void kaiguangai1108_t4guiling(real_T rtu_t5, B_u1_kaiguangai1108_T
  *localB, DW_u1_kaiguangai1108_T *localDW);
static void kaiguangai1108_t6guiling(real_T rtu_t7, B_u1_kaiguangai1108_T
  *localB, DW_u1_kaiguangai1108_T *localDW);
static void kaiguangai1108_t8guiling(real_T rtu_t9, B_u1_kaiguangai1108_T
  *localB, DW_u1_kaiguangai1108_T *localDW);
static void kaiguangai1108_tguiling(real_T rtu_t1, B_u1_kaiguangai1108_T *localB,
  DW_u1_kaiguangai1108_T *localDW);
static void kaiguangai1108_yajinshijian(real_T rtu_ggdw1, real_T rtu_ggdw2,
  real_T rtu_sddw, real_T rtu_yjdw, B_u1_kaiguangai1108_T *localB,
  DW_u1_kaiguangai1108_T *localDW);
static void kaiguangai1108_yanchishijian1(real_T rtu_t1, B_u1_kaiguangai1108_T
  *localB, DW_u1_kaiguangai1108_T *localDW);
static void kaiguangai1108_yanchishijian2(real_T rtu_t3, B_u1_kaiguangai1108_T
  *localB, DW_u1_kaiguangai1108_T *localDW);
static void kaiguangai1108_yanchishijian3(real_T rtu_t5, B_u1_kaiguangai1108_T
  *localB, DW_u1_kaiguangai1108_T *localDW);
static void kaiguangai1108_yanchishijian4(real_T rtu_t7, B_u1_kaiguangai1108_T
  *localB, DW_u1_kaiguangai1108_T *localDW);
static void kaiguangai1108_yanchishijian5(real_T rtu_t9, B_u1_kaiguangai1108_T
  *localB, DW_u1_kaiguangai1108_T *localDW);
static void kaiguangai1108_enter_atomic_off(B_u1_kaiguangai1108_T *localB);
static void kaiguangai1108_zidong(boolean_T rtu_start, real_T rtu_kgdw1, real_T
  rtu_kgdw2, real_T rtu_ggdw1, real_T rtu_ggdw2, real_T rtu_sddw, real_T
  rtu_yjdw, real_T rtu_skdw, real_T rtu_jsdw, real_T rtu_t1, real_T rtu_t3,
  real_T rtu_t5, real_T rtu_t7, real_T rtu_t9, real_T rtu_t11, real_T
  rtu_shedingcishu, real_T rtu_jieshu, B_u1_kaiguangai1108_T *localB,
  DW_u1_kaiguangai1108_T *localDW);

/* Forward declaration for local functions */
static void kaiguangai_exit_internal_MANUAL(DW_jinjichuli_kaiguangai1108_T
  *localDW);

/* Forward declaration for local functions */
static void kaiguangai11_enter_atomic_off_n(void);
static void kaiguangai1108_on4_d(void);
static void kaiguangai1108_on5_f(void);
static void kaiguangai1108_on6_n(void);
static void kaigua_enter_atomic_chushihua_h(void);
static void kaiguangai1108_on7_o(void);
static void kaiguangai1108_songkaishijian_l(void);
static void kaiguangai110_songkaishijian1_g(void);
static void kaiguangai110_songkaishijian2_p(void);
static void kaiguangai110_songkaishijian3_d(void);
static void kaiguangai110_songkaishijian4_k(void);
static void kaiguangai110_songkaishijian5_c(void);
static void kaiguangai110_songkaishijian6_d(void);
static void kaiguangai1108_suodingshijian_g(void);
static void kaiguangai1108_t2guiling_p(void);
static void kaiguangai1108_t4guiling_l(void);
static void kaiguangai1108_t6guiling_c(void);
static void kaiguangai1108_t8guiling_c(void);
static void kaiguangai1108_tguiling_g(void);
static void kaiguangai1108_yajinshijian_h(void);
static void kaiguangai1108_yanchishijian1_b(void);
static void kaiguangai1108_yanchishijian2_c(void);
static void kaiguangai1108_yanchishijian3_i(void);
static void kaiguangai1108_yanchishijian4_f(void);
static void kaiguangai1108_yanchishijian5_n(void);
static void kaiguangai1108_zidong_n(void);

/* Function for Chart: '<S16>/Chart' */
static void kaiguangai1108_songkai(real_T rtu_yjdw, real_T rtu_skdw, real_T
  rtu_songkai, B_Chart_kaiguangai1108_T *localB, DW_Chart_kaiguangai1108_T
  *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'songkai': '<S18>:1' */
  switch (localDW->is_songkai) {
   case kaiguangai1108_IN_off:
    /* During 'off': '<S18>:15' */
    sf_internal_predicateOutput = ((rtu_songkai == 1.0) && (rtu_yjdw == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S18>:18' */
      localDW->is_songkai = kaiguangai1108_IN_on;

      /* Entry 'on': '<S18>:17' */
      localB->skhx = 1.0;
      localB->skt = 0.0;
      localB->skyichang = 0.0;
    }
    break;

   case kaiguangai1108_IN_on:
    /* During 'on': '<S18>:17' */
    /* Transition: '<S18>:20' */
    sf_internal_predicateOutput = ((rtu_skdw == 0.0) && (localB->skt <= 2.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S18>:22' */
      localDW->is_songkai = kaiguangai1108_IN_t;
      localDW->temporalCounter_i1 = 0U;

      /* Entry 't': '<S18>:21' */
      localB->skt += 0.002;
    } else {
      sf_internal_predicateOutput = ((rtu_skdw == 1.0) && (localB->skt <= 2.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S18>:23' */
        localDW->is_songkai = kaiguangai1108_IN_off;

        /* Entry 'off': '<S18>:15' */
        localB->skhx = 0.0;
      } else {
        if (localB->skt > 2.0) {
          /* Transition: '<S18>:128' */
          localDW->is_songkai = kaiguangai1108_IN_t1;

          /* Entry 't1': '<S18>:127' */
          localB->skyichang = 1.0;
        }
      }
    }
    break;

   case kaiguangai1108_IN_t:
    /* During 't': '<S18>:21' */
    if (localDW->temporalCounter_i1 >= 1) {
      /* Transition: '<S18>:24' */
      sf_internal_predicateOutput = ((rtu_skdw == 0.0) && (localB->skt <= 2.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S18>:22' */
        localDW->is_songkai = kaiguangai1108_IN_t;
        localDW->temporalCounter_i1 = 0U;

        /* Entry 't': '<S18>:21' */
        localB->skt += 0.002;
      } else {
        sf_internal_predicateOutput = ((rtu_skdw == 1.0) && (localB->skt <= 2.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S18>:23' */
          localDW->is_songkai = kaiguangai1108_IN_off;

          /* Entry 'off': '<S18>:15' */
          localB->skhx = 0.0;
        } else {
          if (localB->skt > 2.0) {
            /* Transition: '<S18>:128' */
            localDW->is_songkai = kaiguangai1108_IN_t1;

            /* Entry 't1': '<S18>:127' */
            localB->skyichang = 1.0;
          }
        }
      }
    }
    break;

   case kaiguangai1108_IN_t1:
    /* During 't1': '<S18>:127' */
    /* Transition: '<S18>:131' */
    localDW->is_songkai = kaiguangai1108_IN_t2;

    /* Entry 't2': '<S18>:130' */
    localB->skt += 0.002;
    break;

   default:
    /* During 't2': '<S18>:130' */
    if (rtu_skdw == 0.0) {
      /* Transition: '<S18>:134' */
      localDW->is_songkai = kaiguangai1108_IN_t2;

      /* Entry 't2': '<S18>:130' */
      localB->skt += 0.002;
    } else {
      if (rtu_skdw == 1.0) {
        /* Transition: '<S18>:135' */
        localDW->is_songkai = kaiguangai1108_IN_off;

        /* Entry 'off': '<S18>:15' */
        localB->skhx = 0.0;
      }
    }
    break;
  }
}

/* Function for Chart: '<S16>/Chart' */
static void kaiguangai1108_kaigai(real_T rtu_kgdw1, real_T rtu_kgdw2, real_T
  rtu_skdw, real_T rtu_kaigai, B_Chart_kaiguangai1108_T *localB,
  DW_Chart_kaiguangai1108_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'kaigai': '<S18>:32' */
  switch (localDW->is_kaigai) {
   case kaiguangai1108_IN_off:
    /* During 'off': '<S18>:33' */
    sf_internal_predicateOutput = ((rtu_kaigai == 1.0) && (rtu_skdw == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S18>:36' */
      localDW->is_kaigai = kaiguangai1108_IN_on;

      /* Entry 'on': '<S18>:37' */
      localB->kghx = 1.0;
      localB->kgzhiling1 = 1.0;
      localB->kgzhiling2 = 1.0;
      localB->kgyichang = 0.0;
      localB->kgt = 0.0;
    }
    break;

   case kaiguangai1108_IN_on:
    /* During 'on': '<S18>:37' */
    /* Transition: '<S18>:38' */
    sf_internal_predicateOutput = (((rtu_kgdw1 == 0.0) || (rtu_kgdw2 == 0.0)) &&
      (localB->kgt <= 12.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S18>:40' */
      localDW->is_kaigai = kaiguangai1108_IN_t;
      localDW->temporalCounter_i2 = 0U;

      /* Entry 't': '<S18>:41' */
      localB->kgt += 0.002;
    } else {
      sf_internal_predicateOutput = ((rtu_kgdw1 == 1.0) && (rtu_kgdw2 == 1.0) &&
        (localB->kgt <= 12.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S18>:35' */
        localDW->is_kaigai = kaiguangai1108_IN_off;

        /* Entry 'off': '<S18>:33' */
        localB->kghx = 0.0;
        localB->kgzhiling1 = 0.0;
        localB->kgzhiling2 = 0.0;
      } else {
        if (localB->kgt > 12.0) {
          /* Transition: '<S18>:138' */
          localDW->is_kaigai = kaiguangai1108_IN_t1;

          /* Entry 't1': '<S18>:141' */
          localB->kgyichang = 1.0;
        }
      }
    }
    break;

   case kaiguangai1108_IN_t:
    /* During 't': '<S18>:41' */
    if (localDW->temporalCounter_i2 >= 1) {
      /* Transition: '<S18>:42' */
      sf_internal_predicateOutput = (((rtu_kgdw1 == 0.0) || (rtu_kgdw2 == 0.0)) &&
        (localB->kgt <= 12.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S18>:40' */
        localDW->is_kaigai = kaiguangai1108_IN_t;
        localDW->temporalCounter_i2 = 0U;

        /* Entry 't': '<S18>:41' */
        localB->kgt += 0.002;
      } else {
        sf_internal_predicateOutput = ((rtu_kgdw1 == 1.0) && (rtu_kgdw2 == 1.0) &&
          (localB->kgt <= 12.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S18>:35' */
          localDW->is_kaigai = kaiguangai1108_IN_off;

          /* Entry 'off': '<S18>:33' */
          localB->kghx = 0.0;
          localB->kgzhiling1 = 0.0;
          localB->kgzhiling2 = 0.0;
        } else {
          if (localB->kgt > 12.0) {
            /* Transition: '<S18>:138' */
            localDW->is_kaigai = kaiguangai1108_IN_t1;

            /* Entry 't1': '<S18>:141' */
            localB->kgyichang = 1.0;
          }
        }
      }
    }
    break;

   case kaiguangai1108_IN_t1:
    /* During 't1': '<S18>:141' */
    /* Transition: '<S18>:140' */
    localDW->is_kaigai = kaiguangai1108_IN_t2;

    /* Entry 't2': '<S18>:137' */
    localB->kgt += 0.002;
    break;

   default:
    /* During 't2': '<S18>:137' */
    sf_internal_predicateOutput = ((rtu_kgdw1 == 0.0) || (rtu_kgdw2 == 0.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S18>:136' */
      localDW->is_kaigai = kaiguangai1108_IN_t2;

      /* Entry 't2': '<S18>:137' */
      localB->kgt += 0.002;
    } else {
      sf_internal_predicateOutput = ((rtu_kgdw1 == 1.0) && (rtu_kgdw2 == 1.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S18>:139' */
        localDW->is_kaigai = kaiguangai1108_IN_off;

        /* Entry 'off': '<S18>:33' */
        localB->kghx = 0.0;
        localB->kgzhiling1 = 0.0;
        localB->kgzhiling2 = 0.0;
      }
    }
    break;
  }
}

/* Function for Chart: '<S16>/Chart' */
static void kaiguang_exit_internal_shoudong(DW_Chart_kaiguangai1108_T *localDW)
{
  /* Exit Internal 'shoudong': '<S18>:7' */
  /* Exit Internal 'yajin': '<S18>:87' */
  localDW->is_yajin = kaiguangai11_IN_NO_ACTIVE_CHILD;
  localDW->is_active_yajin = 0U;

  /* Exit Internal 'guangai': '<S18>:86' */
  localDW->is_guangai = kaiguangai11_IN_NO_ACTIVE_CHILD;
  localDW->is_active_guangai = 0U;

  /* Exit Internal 'jiesuo_songkai': '<S18>:63' */
  localDW->is_jiesuo_songkai = kaiguangai11_IN_NO_ACTIVE_CHILD;
  localDW->is_active_jiesuo_songkai = 0U;

  /* Exit Internal 'suoding_yajin': '<S18>:53' */
  localDW->is_suoding_yajin = kaiguangai11_IN_NO_ACTIVE_CHILD;
  localDW->is_active_suoding_yajin = 0U;

  /* Exit Internal 'kaigai': '<S18>:32' */
  localDW->is_kaigai = kaiguangai11_IN_NO_ACTIVE_CHILD;
  localDW->is_active_kaigai = 0U;

  /* Exit Internal 'songkai': '<S18>:1' */
  localDW->is_songkai = kaiguangai11_IN_NO_ACTIVE_CHILD;
  localDW->is_active_songkai = 0U;
}

/* Function for Chart: '<S16>/Chart' */
static void kaiguangai1108_suoding_yajin(real_T rtu_sddw, real_T rtu_jsdw,
  real_T rtu_suoding, B_Chart_kaiguangai1108_T *localB,
  DW_Chart_kaiguangai1108_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'suoding_yajin': '<S18>:53' */
  switch (localDW->is_suoding_yajin) {
   case kaiguangai1108_IN_off:
    /* During 'off': '<S18>:43' */
    sf_internal_predicateOutput = ((rtu_suoding == 1.0) && (rtu_jsdw == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S18>:46' */
      localDW->is_suoding_yajin = kaiguangai1108_IN_on;

      /* Entry 'on': '<S18>:50' */
      localB->yjhx = 1.0;
      localB->sdyichang = 0.0;
      localB->sdt = 0.0;
    }
    break;

   case kaiguangai1108_IN_on:
    /* During 'on': '<S18>:50' */
    /* Transition: '<S18>:49' */
    sf_internal_predicateOutput = ((rtu_sddw == 0.0) && (localB->sdt <= 2.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S18>:47' */
      localDW->is_suoding_yajin = kaiguangai1108_IN_t;
      localDW->temporalCounter_i4 = 0U;

      /* Entry 't': '<S18>:52' */
      localB->sdt += 0.002;
    } else {
      sf_internal_predicateOutput = ((rtu_sddw == 1.0) && (localB->sdt <= 2.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S18>:45' */
        localDW->is_suoding_yajin = kaiguangai1108_IN_off;

        /* Entry 'off': '<S18>:43' */
        localB->yjhx = 0.0;
      } else {
        if (localB->sdt > 2.0) {
          /* Transition: '<S18>:144' */
          localDW->is_suoding_yajin = kaiguangai1108_IN_t1;

          /* Entry 't1': '<S18>:147' */
          localB->sdyichang = 1.0;
        }
      }
    }
    break;

   case kaiguangai1108_IN_t:
    /* During 't': '<S18>:52' */
    if (localDW->temporalCounter_i4 >= 1) {
      /* Transition: '<S18>:51' */
      sf_internal_predicateOutput = ((rtu_sddw == 0.0) && (localB->sdt <= 2.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S18>:47' */
        localDW->is_suoding_yajin = kaiguangai1108_IN_t;
        localDW->temporalCounter_i4 = 0U;

        /* Entry 't': '<S18>:52' */
        localB->sdt += 0.002;
      } else {
        sf_internal_predicateOutput = ((rtu_sddw == 1.0) && (localB->sdt <= 2.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S18>:45' */
          localDW->is_suoding_yajin = kaiguangai1108_IN_off;

          /* Entry 'off': '<S18>:43' */
          localB->yjhx = 0.0;
        } else {
          if (localB->sdt > 2.0) {
            /* Transition: '<S18>:144' */
            localDW->is_suoding_yajin = kaiguangai1108_IN_t1;

            /* Entry 't1': '<S18>:147' */
            localB->sdyichang = 1.0;
          }
        }
      }
    }
    break;

   case kaiguangai1108_IN_t1:
    /* During 't1': '<S18>:147' */
    /* Transition: '<S18>:146' */
    localDW->is_suoding_yajin = kaiguangai1108_IN_t2;

    /* Entry 't2': '<S18>:143' */
    localB->sdt += 0.002;
    break;

   default:
    /* During 't2': '<S18>:143' */
    if (rtu_sddw == 0.0) {
      /* Transition: '<S18>:142' */
      localDW->is_suoding_yajin = kaiguangai1108_IN_t2;

      /* Entry 't2': '<S18>:143' */
      localB->sdt += 0.002;
    } else {
      if (rtu_sddw == 1.0) {
        /* Transition: '<S18>:145' */
        localDW->is_suoding_yajin = kaiguangai1108_IN_off;

        /* Entry 'off': '<S18>:43' */
        localB->yjhx = 0.0;
      }
    }
    break;
  }
}

/* Function for Chart: '<S16>/Chart' */
static void kaiguangai1108_jiesuo_songkai(real_T rtu_sddw, real_T rtu_jsdw,
  real_T rtu_skdw, real_T rtu_jiesuo, B_Chart_kaiguangai1108_T *localB,
  DW_Chart_kaiguangai1108_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'jiesuo_songkai': '<S18>:63' */
  switch (localDW->is_jiesuo_songkai) {
   case kaiguangai1108_IN_off:
    /* During 'off': '<S18>:55' */
    sf_internal_predicateOutput = ((rtu_jiesuo == 1.0) && (rtu_sddw == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S18>:59' */
      localDW->is_jiesuo_songkai = kaiguangai1108_IN_on;

      /* Entry 'on': '<S18>:61' */
      localB->skhx = 1.0;
      localB->jsyichang = 0.0;
      localB->jst = 0.0;
    }
    break;

   case kaiguangai1108_IN_on:
    /* During 'on': '<S18>:61' */
    /* Transition: '<S18>:57' */
    sf_internal_predicateOutput = ((rtu_jsdw == 0.0) && (localB->jst <= 2.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S18>:62' */
      localDW->is_jiesuo_songkai = kaiguangai1108_IN_t;
      localDW->temporalCounter_i3 = 0U;

      /* Entry 't': '<S18>:64' */
      localB->jst += 0.002;
    } else {
      sf_internal_predicateOutput = ((rtu_skdw == 1.0) && (localB->jst <= 2.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S18>:56' */
        localDW->is_jiesuo_songkai = kaiguangai1108_IN_off;

        /* Entry 'off': '<S18>:55' */
        localB->skhx = 0.0;
      } else {
        if (localB->jst > 2.0) {
          /* Transition: '<S18>:148' */
          localDW->is_jiesuo_songkai = kaiguangai1108_IN_t1;

          /* Entry 't1': '<S18>:153' */
          localB->jsyichang = 1.0;
        }
      }
    }
    break;

   case kaiguangai1108_IN_t:
    /* During 't': '<S18>:64' */
    if (localDW->temporalCounter_i3 >= 1) {
      /* Transition: '<S18>:58' */
      sf_internal_predicateOutput = ((rtu_jsdw == 0.0) && (localB->jst <= 2.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S18>:62' */
        localDW->is_jiesuo_songkai = kaiguangai1108_IN_t;
        localDW->temporalCounter_i3 = 0U;

        /* Entry 't': '<S18>:64' */
        localB->jst += 0.002;
      } else {
        sf_internal_predicateOutput = ((rtu_skdw == 1.0) && (localB->jst <= 2.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S18>:56' */
          localDW->is_jiesuo_songkai = kaiguangai1108_IN_off;

          /* Entry 'off': '<S18>:55' */
          localB->skhx = 0.0;
        } else {
          if (localB->jst > 2.0) {
            /* Transition: '<S18>:148' */
            localDW->is_jiesuo_songkai = kaiguangai1108_IN_t1;

            /* Entry 't1': '<S18>:153' */
            localB->jsyichang = 1.0;
          }
        }
      }
    }
    break;

   case kaiguangai1108_IN_t1:
    /* During 't1': '<S18>:153' */
    /* Transition: '<S18>:150' */
    localDW->is_jiesuo_songkai = kaiguangai1108_IN_t2;

    /* Entry 't2': '<S18>:149' */
    localB->jst += 0.002;
    break;

   default:
    /* During 't2': '<S18>:149' */
    if (rtu_jsdw == 0.0) {
      /* Transition: '<S18>:151' */
      localDW->is_jiesuo_songkai = kaiguangai1108_IN_t2;

      /* Entry 't2': '<S18>:149' */
      localB->jst += 0.002;
    } else {
      if (rtu_jsdw == 1.0) {
        /* Transition: '<S18>:152' */
        localDW->is_jiesuo_songkai = kaiguangai1108_IN_off;

        /* Entry 'off': '<S18>:55' */
        localB->skhx = 0.0;
      }
    }
    break;
  }
}

/* Function for Chart: '<S16>/Chart' */
static void kaiguangai1108_shoudong(real_T rtu_kgdw1, real_T rtu_kgdw2, real_T
  rtu_ggdw1, real_T rtu_ggdw2, real_T rtu_sddw, real_T rtu_jsdw, real_T rtu_yjdw,
  real_T rtu_skdw, real_T rtu_songkai, real_T rtu_kaigai, real_T rtu_suoding,
  real_T rtu_jiesuo, real_T rtu_guangai, real_T rtu_yajin, real_T rtu_jieshu,
  B_Chart_kaiguangai1108_T *localB, DW_Chart_kaiguangai1108_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'shoudong': '<S18>:7' */
  if (rtu_jieshu == 1.0) {
    /* Transition: '<S18>:126' */
    kaiguang_exit_internal_shoudong(localDW);
    localDW->is_c10_kaiguangai1108 = kaiguangai1108_IN_off1;

    /* Entry 'off1': '<S18>:123' */
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
    kaiguangai1108_songkai(rtu_yjdw, rtu_skdw, rtu_songkai, localB, localDW);
    kaiguangai1108_kaigai(rtu_kgdw1, rtu_kgdw2, rtu_skdw, rtu_kaigai, localB,
                          localDW);
    kaiguangai1108_suoding_yajin(rtu_sddw, rtu_jsdw, rtu_suoding, localB,
      localDW);
    kaiguangai1108_jiesuo_songkai(rtu_sddw, rtu_jsdw, rtu_skdw, rtu_jiesuo,
      localB, localDW);

    /* During 'guangai': '<S18>:86' */
    switch (localDW->is_guangai) {
     case kaiguangai1108_IN_off:
      /* During 'off': '<S18>:76' */
      sf_internal_predicateOutput = ((rtu_guangai == 1.0) && (rtu_kgdw1 == 1.0) &&
        (rtu_kgdw2 == 1.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S18>:79' */
        localDW->is_guangai = kaiguangai1108_IN_on;

        /* Entry 'on': '<S18>:83' */
        localB->gghx = 1.0;
        localB->ggzhiling1 = 1.0;
        localB->ggzhiling2 = 1.0;
        localB->ggyichang = 0.0;
        localB->ggt = 0.0;
      }
      break;

     case kaiguangai1108_IN_on:
      /* During 'on': '<S18>:83' */
      /* Transition: '<S18>:82' */
      sf_internal_predicateOutput = (((rtu_ggdw1 == 0.0) || (rtu_ggdw2 == 0.0)) &&
        (localB->ggt <= 12.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S18>:80' */
        localDW->is_guangai = kaiguangai1108_IN_t;
        localDW->temporalCounter_i6 = 0U;

        /* Entry 't': '<S18>:85' */
        localB->ggt += 0.002;
      } else {
        sf_internal_predicateOutput = ((rtu_ggdw1 == 1.0) && (rtu_ggdw2 == 1.0) &&
          (localB->ggt <= 12.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S18>:78' */
          localDW->is_guangai = kaiguangai1108_IN_off;

          /* Entry 'off': '<S18>:76' */
          localB->gghx = 0.0;
          localB->ggzhiling1 = 0.0;
          localB->ggzhiling2 = 0.0;
        } else {
          if (localB->ggt > 12.0) {
            /* Transition: '<S18>:154' */
            localDW->is_guangai = kaiguangai1108_IN_t1;

            /* Entry 't1': '<S18>:159' */
            localB->ggyichang = 1.0;
          }
        }
      }
      break;

     case kaiguangai1108_IN_t:
      /* During 't': '<S18>:85' */
      if (localDW->temporalCounter_i6 >= 1) {
        /* Transition: '<S18>:84' */
        sf_internal_predicateOutput = (((rtu_ggdw1 == 0.0) || (rtu_ggdw2 == 0.0))
          && (localB->ggt <= 12.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S18>:80' */
          localDW->is_guangai = kaiguangai1108_IN_t;
          localDW->temporalCounter_i6 = 0U;

          /* Entry 't': '<S18>:85' */
          localB->ggt += 0.002;
        } else {
          sf_internal_predicateOutput = ((rtu_ggdw1 == 1.0) && (rtu_ggdw2 == 1.0)
            && (localB->ggt <= 12.0));
          if (sf_internal_predicateOutput) {
            /* Transition: '<S18>:78' */
            localDW->is_guangai = kaiguangai1108_IN_off;

            /* Entry 'off': '<S18>:76' */
            localB->gghx = 0.0;
            localB->ggzhiling1 = 0.0;
            localB->ggzhiling2 = 0.0;
          } else {
            if (localB->ggt > 12.0) {
              /* Transition: '<S18>:154' */
              localDW->is_guangai = kaiguangai1108_IN_t1;

              /* Entry 't1': '<S18>:159' */
              localB->ggyichang = 1.0;
            }
          }
        }
      }
      break;

     case kaiguangai1108_IN_t1:
      /* During 't1': '<S18>:159' */
      /* Transition: '<S18>:156' */
      localDW->is_guangai = kaiguangai1108_IN_t2;

      /* Entry 't2': '<S18>:155' */
      localB->ggt += 0.002;
      break;

     default:
      /* During 't2': '<S18>:155' */
      sf_internal_predicateOutput = ((rtu_ggdw1 == 0.0) || (rtu_ggdw2 == 0.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S18>:157' */
        localDW->is_guangai = kaiguangai1108_IN_t2;

        /* Entry 't2': '<S18>:155' */
        localB->ggt += 0.002;
      } else {
        sf_internal_predicateOutput = ((rtu_ggdw1 == 1.0) && (rtu_ggdw2 == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S18>:158' */
          localDW->is_guangai = kaiguangai1108_IN_off;

          /* Entry 'off': '<S18>:76' */
          localB->gghx = 0.0;
          localB->ggzhiling1 = 0.0;
          localB->ggzhiling2 = 0.0;
        }
      }
      break;
    }

    /* During 'yajin': '<S18>:87' */
    switch (localDW->is_yajin) {
     case kaiguangai1108_IN_off:
      /* During 'off': '<S18>:88' */
      sf_internal_predicateOutput = ((rtu_yajin == 1.0) && (rtu_skdw == 1.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S18>:91' */
        localDW->is_yajin = kaiguangai1108_IN_on;

        /* Entry 'on': '<S18>:92' */
        localB->yjhx = 1.0;
        localB->yjyichang = 0.0;
        localB->yjt = 0.0;
      }
      break;

     case kaiguangai1108_IN_on:
      /* During 'on': '<S18>:92' */
      /* Transition: '<S18>:93' */
      sf_internal_predicateOutput = ((rtu_yjdw == 0.0) && (localB->yjt <= 2.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S18>:95' */
        localDW->is_yajin = kaiguangai1108_IN_t;
        localDW->temporalCounter_i5 = 0U;

        /* Entry 't': '<S18>:96' */
        localB->yjt += 0.002;
      } else {
        sf_internal_predicateOutput = ((rtu_yjdw == 1.0) && (rtu_sddw == 1.0) &&
          (localB->yjt <= 2.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S18>:90' */
          localDW->is_yajin = kaiguangai1108_IN_off;

          /* Entry 'off': '<S18>:88' */
          localB->yjhx = 0.0;
        } else {
          if (localB->yjt > 2.0) {
            /* Transition: '<S18>:161' */
            localDW->is_yajin = kaiguangai1108_IN_t3;

            /* Entry 't3': '<S18>:172' */
            localB->yjyichang = 1.0;
          }
        }
      }
      break;

     case kaiguangai1108_IN_t:
      /* During 't': '<S18>:96' */
      if (localDW->temporalCounter_i5 >= 1) {
        /* Transition: '<S18>:97' */
        sf_internal_predicateOutput = ((rtu_yjdw == 0.0) && (localB->yjt <= 2.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S18>:95' */
          localDW->is_yajin = kaiguangai1108_IN_t;
          localDW->temporalCounter_i5 = 0U;

          /* Entry 't': '<S18>:96' */
          localB->yjt += 0.002;
        } else {
          sf_internal_predicateOutput = ((rtu_yjdw == 1.0) && (rtu_sddw == 1.0) &&
            (localB->yjt <= 2.0));
          if (sf_internal_predicateOutput) {
            /* Transition: '<S18>:90' */
            localDW->is_yajin = kaiguangai1108_IN_off;

            /* Entry 'off': '<S18>:88' */
            localB->yjhx = 0.0;
          } else {
            if (localB->yjt > 2.0) {
              /* Transition: '<S18>:161' */
              localDW->is_yajin = kaiguangai1108_IN_t3;

              /* Entry 't3': '<S18>:172' */
              localB->yjyichang = 1.0;
            }
          }
        }
      }
      break;

     case kaiguangai1108_IN_t2_o:
      /* During 't2': '<S18>:162' */
      if (rtu_yjdw == 0.0) {
        /* Transition: '<S18>:164' */
        localDW->is_yajin = kaiguangai1108_IN_t2_o;

        /* Entry 't2': '<S18>:162' */
        localB->yjt += 0.002;
      } else {
        if (rtu_yjdw == 1.0) {
          /* Transition: '<S18>:165' */
          localDW->is_yajin = kaiguangai1108_IN_off;

          /* Entry 'off': '<S18>:88' */
          localB->yjhx = 0.0;
        }
      }
      break;

     default:
      /* During 't3': '<S18>:172' */
      /* Transition: '<S18>:163' */
      localDW->is_yajin = kaiguangai1108_IN_t2_o;

      /* Entry 't2': '<S18>:162' */
      localB->yjt += 0.002;
      break;
    }
  }
}

/*
 * System initialize for atomic system:
 *    '<S16>/Chart'
 *    '<S16>/Chart1'
 *    '<S16>/Chart2'
 *    '<S16>/Chart3'
 *    '<S16>/Chart4'
 *    '<S16>/Chart5'
 *    '<S16>/Chart6'
 *    '<S16>/Chart7'
 */
void kaiguangai1108_Chart_Init(DW_Chart_kaiguangai1108_T *localDW)
{
  localDW->sfEvent = kaiguangai1108_CALL_EVENT;
  localDW->is_active_guangai = 0U;
  localDW->is_guangai = kaiguangai11_IN_NO_ACTIVE_CHILD;
  localDW->temporalCounter_i6 = 0U;
  localDW->is_active_jiesuo_songkai = 0U;
  localDW->is_jiesuo_songkai = kaiguangai11_IN_NO_ACTIVE_CHILD;
  localDW->temporalCounter_i3 = 0U;
  localDW->is_active_kaigai = 0U;
  localDW->is_kaigai = kaiguangai11_IN_NO_ACTIVE_CHILD;
  localDW->temporalCounter_i2 = 0U;
  localDW->is_active_songkai = 0U;
  localDW->is_songkai = kaiguangai11_IN_NO_ACTIVE_CHILD;
  localDW->temporalCounter_i1 = 0U;
  localDW->is_active_suoding_yajin = 0U;
  localDW->is_suoding_yajin = kaiguangai11_IN_NO_ACTIVE_CHILD;
  localDW->temporalCounter_i4 = 0U;
  localDW->is_active_yajin = 0U;
  localDW->is_yajin = kaiguangai11_IN_NO_ACTIVE_CHILD;
  localDW->temporalCounter_i5 = 0U;
  localDW->is_active_c10_kaiguangai1108 = 0U;
  localDW->is_c10_kaiguangai1108 = kaiguangai11_IN_NO_ACTIVE_CHILD;
}

/*
 * Output and update for atomic system:
 *    '<S16>/Chart'
 *    '<S16>/Chart1'
 *    '<S16>/Chart2'
 *    '<S16>/Chart3'
 *    '<S16>/Chart4'
 *    '<S16>/Chart5'
 *    '<S16>/Chart6'
 *    '<S16>/Chart7'
 */
void kaiguangai1108_Chart(real_T rtu_start, real_T rtu_kgdw1, real_T rtu_kgdw2,
  real_T rtu_ggdw1, real_T rtu_ggdw2, real_T rtu_sddw, real_T rtu_jsdw, real_T
  rtu_yjdw, real_T rtu_skdw, real_T rtu_songkai, real_T rtu_kaigai, real_T
  rtu_suoding, real_T rtu_jiesuo, real_T rtu_guangai, real_T rtu_yajin, real_T
  rtu_jieshu, B_Chart_kaiguangai1108_T *localB, DW_Chart_kaiguangai1108_T
  *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* Gateway: Subsystem1/shoudong/Chart */
  localDW->sfEvent = kaiguangai1108_CALL_EVENT;
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

  /* During: Subsystem1/shoudong/Chart */
  if (localDW->is_active_c10_kaiguangai1108 == 0U) {
    /* Entry: Subsystem1/shoudong/Chart */
    localDW->is_active_c10_kaiguangai1108 = 1U;

    /* Entry Internal: Subsystem1/shoudong/Chart */
    /* Transition: '<S18>:120' */
    localDW->is_c10_kaiguangai1108 = kaiguangai1108_IN_off;

    /* Entry 'off': '<S18>:121' */
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
    switch (localDW->is_c10_kaiguangai1108) {
     case kaiguangai1108_IN_off:
      /* During 'off': '<S18>:121' */
      sf_internal_predicateOutput = ((rtu_start == 1.0) && (rtu_jieshu == 0.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S18>:122' */
        localDW->is_c10_kaiguangai1108 = kaiguangai1108_IN_shoudong;

        /* Entry Internal 'shoudong': '<S18>:7' */
        localDW->is_active_songkai = 1U;

        /* Entry Internal 'songkai': '<S18>:1' */
        /* Transition: '<S18>:16' */
        localDW->is_songkai = kaiguangai1108_IN_off;

        /* Entry 'off': '<S18>:15' */
        localDW->is_active_kaigai = 1U;

        /* Entry Internal 'kaigai': '<S18>:32' */
        /* Transition: '<S18>:34' */
        localDW->is_kaigai = kaiguangai1108_IN_off;

        /* Entry 'off': '<S18>:33' */
        localB->kghx = 0.0;
        localB->kgzhiling1 = 0.0;
        localB->kgzhiling2 = 0.0;
        localDW->is_active_suoding_yajin = 1U;

        /* Entry Internal 'suoding_yajin': '<S18>:53' */
        /* Transition: '<S18>:44' */
        localDW->is_suoding_yajin = kaiguangai1108_IN_off;

        /* Entry 'off': '<S18>:43' */
        localDW->is_active_jiesuo_songkai = 1U;

        /* Entry Internal 'jiesuo_songkai': '<S18>:63' */
        /* Transition: '<S18>:54' */
        localDW->is_jiesuo_songkai = kaiguangai1108_IN_off;

        /* Entry 'off': '<S18>:55' */
        localB->skhx = 0.0;
        localDW->is_active_guangai = 1U;

        /* Entry Internal 'guangai': '<S18>:86' */
        /* Transition: '<S18>:77' */
        localDW->is_guangai = kaiguangai1108_IN_off;

        /* Entry 'off': '<S18>:76' */
        localB->gghx = 0.0;
        localB->ggzhiling1 = 0.0;
        localB->ggzhiling2 = 0.0;
        localDW->is_active_yajin = 1U;

        /* Entry Internal 'yajin': '<S18>:87' */
        /* Transition: '<S18>:89' */
        localDW->is_yajin = kaiguangai1108_IN_off;

        /* Entry 'off': '<S18>:88' */
        localB->yjhx = 0.0;
      }
      break;

     case kaiguangai1108_IN_off1:
      /* During 'off1': '<S18>:123' */
      break;

     default:
      kaiguangai1108_shoudong(rtu_kgdw1, rtu_kgdw2, rtu_ggdw1, rtu_ggdw2,
        rtu_sddw, rtu_jsdw, rtu_yjdw, rtu_skdw, rtu_songkai, rtu_kaigai,
        rtu_suoding, rtu_jiesuo, rtu_guangai, rtu_yajin, rtu_jieshu, localB,
        localDW);
      break;
    }
  }
}

/* Function for Chart: '<S17>/1#1' */
static void kaiguangai1108_on4(real_T rtu_kgdw1, real_T rtu_kgdw2, real_T
  rtu_skdw, real_T rtu_jsdw, B_u1_kaiguangai1108_T *localB,
  DW_u1_kaiguangai1108_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'on4': '<S27>:113' */
  /* Transition: '<S27>:123' */
  sf_internal_predicateOutput = ((rtu_kgdw1 == 0.0) || (rtu_kgdw2 == 0.0) ||
    (rtu_jsdw == 0.0) || (rtu_skdw == 0.0));
  if (sf_internal_predicateOutput) {
    /* Transition: '<S27>:117' */
    localDW->is_zidong = kaiguangai1108_IN_jiesuoshijian;

    /* Entry 'jiesuoshijian': '<S27>:116' */
    localB->jst += 0.002;
  } else {
    sf_internal_predicateOutput = ((rtu_kgdw1 == 1.0) && (rtu_kgdw2 == 1.0) &&
      (rtu_jsdw == 1.0) && (rtu_skdw == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S27>:120' */
      localDW->is_zidong = kaiguangai1108_IN_t6guiling;

      /* Entry 't6guiling': '<S27>:140' */
      localDW->t6 = 0.0;
    }
  }
}

/* Function for Chart: '<S17>/1#1' */
static void kaiguangai1108_on5(real_T rtu_ggdw1, real_T rtu_ggdw2, real_T
  rtu_skdw, real_T rtu_jsdw, B_u1_kaiguangai1108_T *localB,
  DW_u1_kaiguangai1108_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'on5': '<S27>:131' */
  /* Transition: '<S27>:150' */
  sf_internal_predicateOutput = ((rtu_ggdw1 == 0.0) || (rtu_ggdw2 == 0.0) ||
    (rtu_jsdw == 0.0) || (rtu_skdw == 0.0));
  if (sf_internal_predicateOutput) {
    /* Transition: '<S27>:144' */
    localDW->is_zidong = kaiguangai110_IN_guangaishijian;

    /* Entry 'guangaishijian': '<S27>:143' */
    localB->ggt += 0.002;
  } else {
    sf_internal_predicateOutput = ((rtu_ggdw1 == 1.0) && (rtu_ggdw2 == 1.0) &&
      (rtu_jsdw == 1.0) && (rtu_skdw == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S27>:145' */
      localDW->is_zidong = kaiguangai1108_IN_t8guiling;

      /* Entry 't8guiling': '<S27>:148' */
      localDW->t8 = 0.0;
    }
  }
}

/* Function for Chart: '<S17>/1#1' */
static void kaiguangai1108_on6(real_T rtu_ggdw1, real_T rtu_ggdw2, real_T
  rtu_sddw, real_T rtu_yjdw, B_u1_kaiguangai1108_T *localB,
  DW_u1_kaiguangai1108_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'on6': '<S27>:157' */
  /* Transition: '<S27>:164' */
  sf_internal_predicateOutput = ((rtu_sddw == 0.0) || (rtu_yjdw == 0.0));
  if (sf_internal_predicateOutput) {
    /* Transition: '<S27>:158' */
    localDW->is_zidong = kaiguangai1108_IN_yajinshijian;

    /* Entry 'yajinshijian': '<S27>:161' */
    localB->yjt += 0.002;
  } else {
    sf_internal_predicateOutput = ((rtu_sddw == 1.0) && (rtu_yjdw == 1.0) &&
      (rtu_ggdw1 == 1.0) && (rtu_ggdw2 == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S27>:167' */
      localDW->is_zidong = kaiguangai1108_IN_t10guiling;

      /* Entry 't10guiling': '<S27>:336' */
      localDW->t10 = 0.0;
    }
  }
}

/* Function for Chart: '<S17>/1#1' */
static void kaiguang_enter_atomic_chushihua(B_u1_kaiguangai1108_T *localB)
{
  /* Entry 'chushihua': '<S27>:3' */
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

/* Function for Chart: '<S17>/1#1' */
static void kaiguangai1108_on7(real_T rtu_shedingcishu, real_T rtu_jieshu,
  B_u1_kaiguangai1108_T *localB, DW_u1_kaiguangai1108_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'on7': '<S27>:170' */
  /* Transition: '<S27>:191' */
  sf_internal_predicateOutput = ((localB->yikaicishu < rtu_shedingcishu) &&
    (rtu_jieshu == 0.0));
  if (sf_internal_predicateOutput) {
    /* Transition: '<S27>:192' */
    localDW->is_zidong = kaiguangai1108_IN_chushihua;
    kaiguang_enter_atomic_chushihua(localB);
  } else {
    sf_internal_predicateOutput = ((localB->yikaicishu >= rtu_shedingcishu) ||
      (rtu_jieshu == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S27>:195' */
      localDW->is_zidong = kaiguangai1108_IN_stop;

      /* Entry 'stop': '<S27>:193' */
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

/* Function for Chart: '<S17>/1#1' */
static void kaiguangai1108_songkaishijian(real_T rtu_skdw, real_T rtu_jsdw,
  B_u1_kaiguangai1108_T *localB, DW_u1_kaiguangai1108_T *localDW)
{
  boolean_T sf_internal_predicateOutput;
  boolean_T guard1 = false;

  /* During 'songkaishijian': '<S27>:33' */
  /* Transition: '<S27>:349' */
  guard1 = false;
  if (localB->skt <= 2.0) {
    /* Transition: '<S27>:350' */
    sf_internal_predicateOutput = ((rtu_jsdw == 0.0) || (rtu_skdw == 0.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S27>:50' */
      localDW->is_zidong = kaiguangai110_IN_songkaishijian;

      /* Entry 'songkaishijian': '<S27>:33' */
      localB->skt += 0.002;
    } else {
      sf_internal_predicateOutput = ((rtu_jsdw == 1.0) && (rtu_skdw == 1.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S27>:53' */
        localDW->is_zidong = kaiguangai1108_IN_tguiling;

        /* Entry 'tguiling': '<S27>:52' */
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
      /* Transition: '<S27>:353' */
      localDW->is_zidong = kaiguangai1108_IN_on10;

      /* Entry 'on10': '<S27>:366' */
      localB->skyichang = 1.0;
    }
  }
}

/* Function for Chart: '<S17>/1#1' */
static void kaiguangai1108_songkaishijian1(real_T rtu_skdw, real_T rtu_jsdw,
  B_u1_kaiguangai1108_T *localB, DW_u1_kaiguangai1108_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'songkaishijian1': '<S27>:355' */
  sf_internal_predicateOutput = ((rtu_jsdw == 0.0) || (rtu_skdw == 0.0));
  if (sf_internal_predicateOutput) {
    /* Transition: '<S27>:356' */
    localDW->is_zidong = kaiguangai11_IN_songkaishijian1;

    /* Entry 'songkaishijian1': '<S27>:355' */
    localB->skt += 0.002;
  } else {
    sf_internal_predicateOutput = ((rtu_jsdw == 1.0) && (rtu_skdw == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S27>:357' */
      localDW->is_zidong = kaiguangai1108_IN_on8;

      /* Entry 'on8': '<S27>:352' */
      localB->skhx = 0.0;
    }
  }
}

/* Function for Chart: '<S17>/1#1' */
static void kaiguangai1108_songkaishijian2(real_T rtu_kgdw1, real_T rtu_kgdw2,
  real_T rtu_skdw, real_T rtu_jsdw, B_u1_kaiguangai1108_T *localB,
  DW_u1_kaiguangai1108_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'songkaishijian2': '<S27>:365' */
  sf_internal_predicateOutput = ((rtu_kgdw1 == 0.0) || (rtu_kgdw2 == 0.0) ||
    (rtu_jsdw == 0.0) || (rtu_skdw == 0.0));
  if (sf_internal_predicateOutput) {
    /* Transition: '<S27>:360' */
    localDW->is_zidong = kaiguangai11_IN_songkaishijian2;

    /* Entry 'songkaishijian2': '<S27>:365' */
    localB->kgt += 0.002;
  } else {
    sf_internal_predicateOutput = ((rtu_kgdw1 == 1.0) && (rtu_kgdw2 == 1.0) &&
      (rtu_jsdw == 1.0) && (rtu_skdw == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S27>:362' */
      localDW->is_zidong = kaiguangai1108_IN_on9;

      /* Entry 'on9': '<S27>:358' */
      localB->kghx = 0.0;
      localB->kgzhiling1 = 0.0;
      localB->kgzhiling2 = 0.0;
    }
  }
}

/* Function for Chart: '<S17>/1#1' */
static void kaiguangai1108_songkaishijian3(real_T rtu_kgdw1, real_T rtu_kgdw2,
  real_T rtu_sddw, real_T rtu_yjdw, real_T rtu_skdw, real_T rtu_jsdw,
  B_u1_kaiguangai1108_T *localB, DW_u1_kaiguangai1108_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'songkaishijian3': '<S27>:387' */
  sf_internal_predicateOutput = ((rtu_kgdw1 == 0.0) || (rtu_kgdw2 == 0.0) ||
    (rtu_sddw == 0.0) || (rtu_yjdw == 0.0));
  if (sf_internal_predicateOutput) {
    /* Transition: '<S27>:382' */
    localDW->is_zidong = kaiguangai11_IN_songkaishijian3;

    /* Entry 'songkaishijian3': '<S27>:387' */
    localB->sdt += 0.002;
  } else {
    sf_internal_predicateOutput = ((rtu_kgdw1 == 1.0) && (rtu_kgdw2 == 1.0) &&
      (rtu_jsdw == 1.0) && (rtu_skdw == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S27>:383' */
      localDW->is_zidong = kaiguangai1108_IN_on13;

      /* Entry 'on13': '<S27>:381' */
      localB->yjhx = 0.0;
    }
  }
}

/* Function for Chart: '<S17>/1#1' */
static void kaiguangai1108_songkaishijian4(real_T rtu_kgdw1, real_T rtu_kgdw2,
  real_T rtu_skdw, real_T rtu_jsdw, B_u1_kaiguangai1108_T *localB,
  DW_u1_kaiguangai1108_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'songkaishijian4': '<S27>:392' */
  sf_internal_predicateOutput = ((rtu_kgdw1 == 0.0) || (rtu_kgdw2 == 0.0) ||
    (rtu_jsdw == 0.0) || (rtu_skdw == 0.0));
  if (sf_internal_predicateOutput) {
    /* Transition: '<S27>:391' */
    localDW->is_zidong = kaiguangai11_IN_songkaishijian4;

    /* Entry 'songkaishijian4': '<S27>:392' */
    localB->jst += 0.002;
  } else {
    sf_internal_predicateOutput = ((rtu_kgdw1 == 1.0) && (rtu_kgdw2 == 1.0) &&
      (rtu_jsdw == 1.0) && (rtu_skdw == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S27>:395' */
      localDW->is_zidong = kaiguangai1108_IN_on15;

      /* Entry 'on15': '<S27>:398' */
      localB->skhx = 0.0;
    }
  }
}

/* Function for Chart: '<S17>/1#1' */
static void kaiguangai1108_songkaishijian5(real_T rtu_ggdw1, real_T rtu_ggdw2,
  real_T rtu_skdw, real_T rtu_jsdw, B_u1_kaiguangai1108_T *localB,
  DW_u1_kaiguangai1108_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'songkaishijian5': '<S27>:404' */
  sf_internal_predicateOutput = ((rtu_ggdw1 == 1.0) && (rtu_ggdw2 == 1.0) &&
    (rtu_jsdw == 1.0) && (rtu_skdw == 1.0));
  if (sf_internal_predicateOutput) {
    /* Transition: '<S27>:399' */
    localDW->is_zidong = kaiguangai1108_IN_on17;

    /* Entry 'on17': '<S27>:401' */
    localB->gghx = 0.0;
    localB->ggzhiling1 = 0.0;
    localB->ggzhiling2 = 0.0;
  } else {
    sf_internal_predicateOutput = ((rtu_ggdw1 == 0.0) || (rtu_ggdw2 == 0.0) ||
      (rtu_jsdw == 0.0) || (rtu_skdw == 0.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S27>:408' */
      localDW->is_zidong = kaiguangai11_IN_songkaishijian5;

      /* Entry 'songkaishijian5': '<S27>:404' */
      localB->ggt += 0.002;
    }
  }
}

/* Function for Chart: '<S17>/1#1' */
static void kaiguangai1108_songkaishijian6(real_T rtu_ggdw1, real_T rtu_ggdw2,
  real_T rtu_sddw, real_T rtu_yjdw, B_u1_kaiguangai1108_T *localB,
  DW_u1_kaiguangai1108_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'songkaishijian6': '<S27>:417' */
  sf_internal_predicateOutput = ((rtu_sddw == 1.0) && (rtu_yjdw == 1.0) &&
    (rtu_ggdw1 == 1.0) && (rtu_ggdw2 == 1.0));
  if (sf_internal_predicateOutput) {
    /* Transition: '<S27>:411' */
    localDW->is_zidong = kaiguangai1108_IN_on19;

    /* Entry 'on19': '<S27>:415' */
    localB->yjhx = 0.0;
  } else {
    sf_internal_predicateOutput = ((rtu_sddw == 0.0) || (rtu_yjdw == 0.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S27>:409' */
      localDW->is_zidong = kaiguangai11_IN_songkaishijian6;

      /* Entry 'songkaishijian6': '<S27>:417' */
      localB->yjt += 0.002;
    }
  }
}

/* Function for Chart: '<S17>/1#1' */
static void kaiguangai1108_suodingshijian(real_T rtu_kgdw1, real_T rtu_kgdw2,
  real_T rtu_sddw, real_T rtu_yjdw, B_u1_kaiguangai1108_T *localB,
  DW_u1_kaiguangai1108_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'suodingshijian': '<S27>:97' */
  /* Transition: '<S27>:384' */
  if (localB->sdt > 2.0) {
    /* Transition: '<S27>:385' */
    localDW->is_zidong = kaiguangai1108_IN_on12;

    /* Entry 'on12': '<S27>:378' */
    localB->sdyichang = 1.0;
  } else {
    if (localB->sdt <= 2.0) {
      /* Transition: '<S27>:379' */
      sf_internal_predicateOutput = ((rtu_kgdw1 == 0.0) || (rtu_kgdw2 == 0.0) ||
        (rtu_sddw == 0.0) || (rtu_yjdw == 0.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S27>:99' */
        localDW->is_zidong = kaiguangai110_IN_suodingshijian;

        /* Entry 'suodingshijian': '<S27>:97' */
        localB->sdt += 0.002;
      } else {
        sf_internal_predicateOutput = ((rtu_kgdw1 == 1.0) && (rtu_kgdw2 == 1.0) &&
          (rtu_sddw == 1.0) && (rtu_yjdw == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S27>:101' */
          localDW->is_zidong = kaiguangai1108_IN_t4guiling;

          /* Entry 't4guiling': '<S27>:100' */
          localDW->t4 = 0.0;
        }
      }
    }
  }
}

/* Function for Chart: '<S17>/1#1' */
static void kaiguangai1108_t2guiling(real_T rtu_t3, B_u1_kaiguangai1108_T
  *localB, DW_u1_kaiguangai1108_T *localDW)
{
  /* During 't2guiling': '<S27>:83' */
  /* Transition: '<S27>:85' */
  if (localDW->t2 < rtu_t3) {
    /* Transition: '<S27>:79' */
    localDW->is_zidong = kaiguangai110_IN_yanchishijian2;
    localDW->temporalCounter_i1 = 0U;

    /* Entry 'yanchishijian2': '<S27>:69' */
    localDW->t2++;
  } else {
    if (localDW->t2 >= rtu_t3) {
      /* Transition: '<S27>:112' */
      localDW->is_zidong = kaiguangai1108_IN_on3;

      /* Entry 'on3': '<S27>:81' */
      localB->kghx = 0.0;
      localB->kgzhiling1 = 0.0;
      localB->kgzhiling2 = 0.0;
      localB->yjhx = 1.0;
    }
  }
}

/* Function for Chart: '<S17>/1#1' */
static void kaiguangai1108_t4guiling(real_T rtu_t5, B_u1_kaiguangai1108_T
  *localB, DW_u1_kaiguangai1108_T *localDW)
{
  /* During 't4guiling': '<S27>:100' */
  /* Transition: '<S27>:110' */
  if (localDW->t4 < rtu_t5) {
    /* Transition: '<S27>:109' */
    localDW->is_zidong = kaiguangai110_IN_yanchishijian3;
    localDW->temporalCounter_i1 = 0U;

    /* Entry 'yanchishijian3': '<S27>:108' */
    localDW->t4++;
  } else {
    if (localDW->t4 >= rtu_t5) {
      /* Transition: '<S27>:114' */
      localDW->is_zidong = kaiguangai1108_IN_on4;

      /* Entry 'on4': '<S27>:113' */
      localB->yjhx = 0.0;
      localB->skhx = 1.0;
    }
  }
}

/* Function for Chart: '<S17>/1#1' */
static void kaiguangai1108_t6guiling(real_T rtu_t7, B_u1_kaiguangai1108_T
  *localB, DW_u1_kaiguangai1108_T *localDW)
{
  /* During 't6guiling': '<S27>:140' */
  /* Transition: '<S27>:141' */
  if (localDW->t6 < rtu_t7) {
    /* Transition: '<S27>:127' */
    localDW->is_zidong = kaiguangai110_IN_yanchishijian4;
    localDW->temporalCounter_i1 = 0U;

    /* Entry 'yanchishijian4': '<S27>:126' */
    localDW->t6++;
  } else {
    if (localDW->t6 >= rtu_t7) {
      /* Transition: '<S27>:129' */
      localDW->is_zidong = kaiguangai1108_IN_on5;

      /* Entry 'on5': '<S27>:131' */
      localB->skhx = 0.0;
      localB->gghx = 1.0;
      localB->ggzhiling1 = 1.0;
      localB->ggzhiling2 = 1.0;
    }
  }
}

/* Function for Chart: '<S17>/1#1' */
static void kaiguangai1108_t8guiling(real_T rtu_t9, B_u1_kaiguangai1108_T
  *localB, DW_u1_kaiguangai1108_T *localDW)
{
  /* During 't8guiling': '<S27>:148' */
  /* Transition: '<S27>:156' */
  if (localDW->t8 < rtu_t9) {
    /* Transition: '<S27>:151' */
    localDW->is_zidong = kaiguangai110_IN_yanchishijian5;
    localDW->temporalCounter_i1 = 0U;

    /* Entry 'yanchishijian5': '<S27>:153' */
    localDW->t8++;
  } else {
    if (localDW->t8 >= rtu_t9) {
      /* Transition: '<S27>:169' */
      localDW->is_zidong = kaiguangai1108_IN_on6;

      /* Entry 'on6': '<S27>:157' */
      localB->gghx = 0.0;
      localB->ggzhiling1 = 0.0;
      localB->ggzhiling2 = 0.0;
      localB->yjhx = 1.0;
    }
  }
}

/* Function for Chart: '<S17>/1#1' */
static void kaiguangai1108_tguiling(real_T rtu_t1, B_u1_kaiguangai1108_T *localB,
  DW_u1_kaiguangai1108_T *localDW)
{
  /* During 'tguiling': '<S27>:52' */
  /* Transition: '<S27>:55' */
  if (localDW->t < rtu_t1) {
    /* Transition: '<S27>:57' */
    localDW->is_zidong = kaiguangai110_IN_yanchishijian1;
    localDW->temporalCounter_i1 = 0U;

    /* Entry 'yanchishijian1': '<S27>:56' */
    localDW->t++;
  } else {
    if (localDW->t >= rtu_t1) {
      /* Transition: '<S27>:111' */
      localDW->is_zidong = kaiguangai1108_IN_on2;

      /* Entry 'on2': '<S27>:60' */
      localB->skhx = 0.0;
      localB->kghx = 1.0;
      localB->kgzhiling1 = 1.0;
      localB->kgzhiling2 = 1.0;
    }
  }
}

/* Function for Chart: '<S17>/1#1' */
static void kaiguangai1108_yajinshijian(real_T rtu_ggdw1, real_T rtu_ggdw2,
  real_T rtu_sddw, real_T rtu_yjdw, B_u1_kaiguangai1108_T *localB,
  DW_u1_kaiguangai1108_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'yajinshijian': '<S27>:161' */
  /* Transition: '<S27>:414' */
  if (localB->yjt > 2.0) {
    /* Transition: '<S27>:416' */
    localDW->is_zidong = kaiguangai1108_IN_on18;

    /* Entry 'on18': '<S27>:413' */
    localB->ggyichang = 1.0;
  } else {
    if (localB->yjt <= 2.0) {
      /* Transition: '<S27>:418' */
      sf_internal_predicateOutput = ((rtu_sddw == 0.0) || (rtu_yjdw == 0.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S27>:158' */
        localDW->is_zidong = kaiguangai1108_IN_yajinshijian;

        /* Entry 'yajinshijian': '<S27>:161' */
        localB->yjt += 0.002;
      } else {
        sf_internal_predicateOutput = ((rtu_sddw == 1.0) && (rtu_yjdw == 1.0) &&
          (rtu_ggdw1 == 1.0) && (rtu_ggdw2 == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S27>:167' */
          localDW->is_zidong = kaiguangai1108_IN_t10guiling;

          /* Entry 't10guiling': '<S27>:336' */
          localDW->t10 = 0.0;
        }
      }
    }
  }
}

/* Function for Chart: '<S17>/1#1' */
static void kaiguangai1108_yanchishijian1(real_T rtu_t1, B_u1_kaiguangai1108_T
  *localB, DW_u1_kaiguangai1108_T *localDW)
{
  /* During 'yanchishijian1': '<S27>:56' */
  if (localDW->temporalCounter_i1 >= 500) {
    /* Transition: '<S27>:58' */
    if (localDW->t < rtu_t1) {
      /* Transition: '<S27>:57' */
      localDW->is_zidong = kaiguangai110_IN_yanchishijian1;
      localDW->temporalCounter_i1 = 0U;

      /* Entry 'yanchishijian1': '<S27>:56' */
      localDW->t++;
    } else {
      if (localDW->t >= rtu_t1) {
        /* Transition: '<S27>:111' */
        localDW->is_zidong = kaiguangai1108_IN_on2;

        /* Entry 'on2': '<S27>:60' */
        localB->skhx = 0.0;
        localB->kghx = 1.0;
        localB->kgzhiling1 = 1.0;
        localB->kgzhiling2 = 1.0;
      }
    }
  }
}

/* Function for Chart: '<S17>/1#1' */
static void kaiguangai1108_yanchishijian2(real_T rtu_t3, B_u1_kaiguangai1108_T
  *localB, DW_u1_kaiguangai1108_T *localDW)
{
  /* During 'yanchishijian2': '<S27>:69' */
  if (localDW->temporalCounter_i1 >= 500) {
    /* Transition: '<S27>:80' */
    if (localDW->t2 < rtu_t3) {
      /* Transition: '<S27>:79' */
      localDW->is_zidong = kaiguangai110_IN_yanchishijian2;
      localDW->temporalCounter_i1 = 0U;

      /* Entry 'yanchishijian2': '<S27>:69' */
      localDW->t2++;
    } else {
      if (localDW->t2 >= rtu_t3) {
        /* Transition: '<S27>:112' */
        localDW->is_zidong = kaiguangai1108_IN_on3;

        /* Entry 'on3': '<S27>:81' */
        localB->kghx = 0.0;
        localB->kgzhiling1 = 0.0;
        localB->kgzhiling2 = 0.0;
        localB->yjhx = 1.0;
      }
    }
  }
}

/* Function for Chart: '<S17>/1#1' */
static void kaiguangai1108_yanchishijian3(real_T rtu_t5, B_u1_kaiguangai1108_T
  *localB, DW_u1_kaiguangai1108_T *localDW)
{
  /* During 'yanchishijian3': '<S27>:108' */
  if (localDW->temporalCounter_i1 >= 500) {
    /* Transition: '<S27>:107' */
    if (localDW->t4 < rtu_t5) {
      /* Transition: '<S27>:109' */
      localDW->is_zidong = kaiguangai110_IN_yanchishijian3;
      localDW->temporalCounter_i1 = 0U;

      /* Entry 'yanchishijian3': '<S27>:108' */
      localDW->t4++;
    } else {
      if (localDW->t4 >= rtu_t5) {
        /* Transition: '<S27>:114' */
        localDW->is_zidong = kaiguangai1108_IN_on4;

        /* Entry 'on4': '<S27>:113' */
        localB->yjhx = 0.0;
        localB->skhx = 1.0;
      }
    }
  }
}

/* Function for Chart: '<S17>/1#1' */
static void kaiguangai1108_yanchishijian4(real_T rtu_t7, B_u1_kaiguangai1108_T
  *localB, DW_u1_kaiguangai1108_T *localDW)
{
  /* During 'yanchishijian4': '<S27>:126' */
  if (localDW->temporalCounter_i1 >= 500) {
    /* Transition: '<S27>:128' */
    if (localDW->t6 < rtu_t7) {
      /* Transition: '<S27>:127' */
      localDW->is_zidong = kaiguangai110_IN_yanchishijian4;
      localDW->temporalCounter_i1 = 0U;

      /* Entry 'yanchishijian4': '<S27>:126' */
      localDW->t6++;
    } else {
      if (localDW->t6 >= rtu_t7) {
        /* Transition: '<S27>:129' */
        localDW->is_zidong = kaiguangai1108_IN_on5;

        /* Entry 'on5': '<S27>:131' */
        localB->skhx = 0.0;
        localB->gghx = 1.0;
        localB->ggzhiling1 = 1.0;
        localB->ggzhiling2 = 1.0;
      }
    }
  }
}

/* Function for Chart: '<S17>/1#1' */
static void kaiguangai1108_yanchishijian5(real_T rtu_t9, B_u1_kaiguangai1108_T
  *localB, DW_u1_kaiguangai1108_T *localDW)
{
  /* During 'yanchishijian5': '<S27>:153' */
  if (localDW->temporalCounter_i1 >= 500) {
    /* Transition: '<S27>:155' */
    if (localDW->t8 < rtu_t9) {
      /* Transition: '<S27>:151' */
      localDW->is_zidong = kaiguangai110_IN_yanchishijian5;
      localDW->temporalCounter_i1 = 0U;

      /* Entry 'yanchishijian5': '<S27>:153' */
      localDW->t8++;
    } else {
      if (localDW->t8 >= rtu_t9) {
        /* Transition: '<S27>:169' */
        localDW->is_zidong = kaiguangai1108_IN_on6;

        /* Entry 'on6': '<S27>:157' */
        localB->gghx = 0.0;
        localB->ggzhiling1 = 0.0;
        localB->ggzhiling2 = 0.0;
        localB->yjhx = 1.0;
      }
    }
  }
}

/* Function for Chart: '<S17>/1#1' */
static void kaiguangai1108_enter_atomic_off(B_u1_kaiguangai1108_T *localB)
{
  /* Entry 'off': '<S27>:165' */
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

/* Function for Chart: '<S17>/1#1' */
static void kaiguangai1108_zidong(boolean_T rtu_start, real_T rtu_kgdw1, real_T
  rtu_kgdw2, real_T rtu_ggdw1, real_T rtu_ggdw2, real_T rtu_sddw, real_T
  rtu_yjdw, real_T rtu_skdw, real_T rtu_jsdw, real_T rtu_t1, real_T rtu_t3,
  real_T rtu_t5, real_T rtu_t7, real_T rtu_t9, real_T rtu_t11, real_T
  rtu_shedingcishu, real_T rtu_jieshu, B_u1_kaiguangai1108_T *localB,
  DW_u1_kaiguangai1108_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'zidong': '<S27>:374' */
  switch (localDW->is_zidong) {
   case kaiguangai1108_IN_chushihua:
    /* During 'chushihua': '<S27>:3' */
    sf_internal_predicateOutput = (rtu_start && (rtu_ggdw1 == 1.0) && (rtu_ggdw2
      == 1.0) && (rtu_yjdw == 1.0) && (rtu_sddw == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S27>:181' */
      localDW->is_zidong = kaiguangai1108_IN_on1;

      /* Entry 'on1': '<S27>:12' */
      localB->skhx = 1.0;
    }
    break;

   case kaiguangai110_IN_guangaishijian:
    /* During 'guangaishijian': '<S27>:143' */
    /* Transition: '<S27>:407' */
    if (localB->ggt > 12.0) {
      /* Transition: '<S27>:406' */
      localDW->is_zidong = kaiguangai1108_IN_on16;

      /* Entry 'on16': '<S27>:400' */
      localB->ggyichang = 1.0;
    } else {
      if (localB->ggt <= 12.0) {
        /* Transition: '<S27>:402' */
        sf_internal_predicateOutput = ((rtu_ggdw1 == 0.0) || (rtu_ggdw2 == 0.0) ||
          (rtu_jsdw == 0.0) || (rtu_skdw == 0.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S27>:144' */
          localDW->is_zidong = kaiguangai110_IN_guangaishijian;

          /* Entry 'guangaishijian': '<S27>:143' */
          localB->ggt += 0.002;
        } else {
          sf_internal_predicateOutput = ((rtu_ggdw1 == 1.0) && (rtu_ggdw2 == 1.0)
            && (rtu_jsdw == 1.0) && (rtu_skdw == 1.0));
          if (sf_internal_predicateOutput) {
            /* Transition: '<S27>:145' */
            localDW->is_zidong = kaiguangai1108_IN_t8guiling;

            /* Entry 't8guiling': '<S27>:148' */
            localDW->t8 = 0.0;
          }
        }
      }
    }
    break;

   case kaiguangai1108_IN_jiesuoshijian:
    /* During 'jiesuoshijian': '<S27>:116' */
    /* Transition: '<S27>:393' */
    if (localB->jst > 2.0) {
      /* Transition: '<S27>:389' */
      localDW->is_zidong = kaiguangai1108_IN_on14;

      /* Entry 'on14': '<S27>:394' */
      localB->jsyichang = 1.0;
    } else {
      if (localB->jst <= 2.0) {
        /* Transition: '<S27>:396' */
        sf_internal_predicateOutput = ((rtu_kgdw1 == 0.0) || (rtu_kgdw2 == 0.0) ||
          (rtu_jsdw == 0.0) || (rtu_skdw == 0.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S27>:117' */
          localDW->is_zidong = kaiguangai1108_IN_jiesuoshijian;

          /* Entry 'jiesuoshijian': '<S27>:116' */
          localB->jst += 0.002;
        } else {
          sf_internal_predicateOutput = ((rtu_kgdw1 == 1.0) && (rtu_kgdw2 == 1.0)
            && (rtu_jsdw == 1.0) && (rtu_skdw == 1.0));
          if (sf_internal_predicateOutput) {
            /* Transition: '<S27>:120' */
            localDW->is_zidong = kaiguangai1108_IN_t6guiling;

            /* Entry 't6guiling': '<S27>:140' */
            localDW->t6 = 0.0;
          }
        }
      }
    }
    break;

   case kaiguangai1108_IN_kaigaishijian:
    /* During 'kaigaishijian': '<S27>:62' */
    /* Transition: '<S27>:363' */
    if (localB->kgt > 12.0) {
      /* Transition: '<S27>:364' */
      localDW->is_zidong = kaiguangai1108_IN_on11;

      /* Entry 'on11': '<S27>:376' */
      localB->kgyichang = 1.0;
    } else {
      if (localB->kgt <= 12.0) {
        /* Transition: '<S27>:359' */
        sf_internal_predicateOutput = ((rtu_kgdw1 == 0.0) || (rtu_kgdw2 == 0.0) ||
          (rtu_jsdw == 0.0) || (rtu_skdw == 0.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S27>:64' */
          localDW->is_zidong = kaiguangai1108_IN_kaigaishijian;

          /* Entry 'kaigaishijian': '<S27>:62' */
          localB->kgt += 0.002;
        } else {
          sf_internal_predicateOutput = ((rtu_kgdw1 == 1.0) && (rtu_kgdw2 == 1.0)
            && (rtu_jsdw == 1.0) && (rtu_skdw == 1.0));
          if (sf_internal_predicateOutput) {
            /* Transition: '<S27>:84' */
            localDW->is_zidong = kaiguangai1108_IN_t2guiling;

            /* Entry 't2guiling': '<S27>:83' */
            localDW->t2 = 0.0;
          }
        }
      }
    }
    break;

   case kaiguangai1108_IN_off_b:
    /* During 'off': '<S27>:165' */
    /* Transition: '<S27>:188' */
    localDW->is_zidong = kaiguangai1108_IN_on7;

    /* Entry 'on7': '<S27>:170' */
    localB->yikaicishu++;
    break;

   case kaiguangai1108_IN_on1:
    /* During 'on1': '<S27>:12' */
    /* Transition: '<S27>:49' */
    sf_internal_predicateOutput = ((rtu_jsdw == 0.0) || (rtu_skdw == 0.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S27>:50' */
      localDW->is_zidong = kaiguangai110_IN_songkaishijian;

      /* Entry 'songkaishijian': '<S27>:33' */
      localB->skt += 0.002;
    } else {
      sf_internal_predicateOutput = ((rtu_jsdw == 1.0) && (rtu_skdw == 1.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S27>:53' */
        localDW->is_zidong = kaiguangai1108_IN_tguiling;

        /* Entry 'tguiling': '<S27>:52' */
        localDW->t = 0.0;
      }
    }
    break;

   case kaiguangai1108_IN_on10:
    /* During 'on10': '<S27>:366' */
    /* Transition: '<S27>:367' */
    localDW->is_zidong = kaiguangai11_IN_songkaishijian1;

    /* Entry 'songkaishijian1': '<S27>:355' */
    localB->skt += 0.002;
    break;

   case kaiguangai1108_IN_on11:
    /* During 'on11': '<S27>:376' */
    /* Transition: '<S27>:377' */
    localDW->is_zidong = kaiguangai11_IN_songkaishijian2;

    /* Entry 'songkaishijian2': '<S27>:365' */
    localB->kgt += 0.002;
    break;

   case kaiguangai1108_IN_on12:
    /* During 'on12': '<S27>:378' */
    /* Transition: '<S27>:380' */
    localDW->is_zidong = kaiguangai11_IN_songkaishijian3;

    /* Entry 'songkaishijian3': '<S27>:387' */
    localB->sdt += 0.002;
    break;

   case kaiguangai1108_IN_on13:
    /* During 'on13': '<S27>:381' */
    break;

   case kaiguangai1108_IN_on14:
    /* During 'on14': '<S27>:394' */
    /* Transition: '<S27>:388' */
    localDW->is_zidong = kaiguangai11_IN_songkaishijian4;

    /* Entry 'songkaishijian4': '<S27>:392' */
    localB->jst += 0.002;
    break;

   case kaiguangai1108_IN_on15:
    /* During 'on15': '<S27>:398' */
    break;

   case kaiguangai1108_IN_on16:
    /* During 'on16': '<S27>:400' */
    /* Transition: '<S27>:405' */
    localDW->is_zidong = kaiguangai11_IN_songkaishijian5;

    /* Entry 'songkaishijian5': '<S27>:404' */
    localB->ggt += 0.002;
    break;

   case kaiguangai1108_IN_on17:
    /* During 'on17': '<S27>:401' */
    break;

   case kaiguangai1108_IN_on18:
    /* During 'on18': '<S27>:413' */
    /* Transition: '<S27>:412' */
    localDW->is_zidong = kaiguangai11_IN_songkaishijian6;

    /* Entry 'songkaishijian6': '<S27>:417' */
    localB->yjt += 0.002;
    break;

   case kaiguangai1108_IN_on19:
    /* During 'on19': '<S27>:415' */
    break;

   case kaiguangai1108_IN_on2:
    /* During 'on2': '<S27>:60' */
    /* Transition: '<S27>:87' */
    sf_internal_predicateOutput = ((rtu_kgdw1 == 0.0) || (rtu_kgdw2 == 0.0) ||
      (rtu_jsdw == 0.0) || (rtu_skdw == 0.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S27>:64' */
      localDW->is_zidong = kaiguangai1108_IN_kaigaishijian;

      /* Entry 'kaigaishijian': '<S27>:62' */
      localB->kgt += 0.002;
    } else {
      sf_internal_predicateOutput = ((rtu_kgdw1 == 1.0) && (rtu_kgdw2 == 1.0) &&
        (rtu_jsdw == 1.0) && (rtu_skdw == 1.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S27>:84' */
        localDW->is_zidong = kaiguangai1108_IN_t2guiling;

        /* Entry 't2guiling': '<S27>:83' */
        localDW->t2 = 0.0;
      }
    }
    break;

   case kaiguangai1108_IN_on3:
    /* During 'on3': '<S27>:81' */
    /* Transition: '<S27>:103' */
    sf_internal_predicateOutput = ((rtu_kgdw1 == 0.0) || (rtu_kgdw2 == 0.0) ||
      (rtu_sddw == 0.0) || (rtu_yjdw == 0.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S27>:99' */
      localDW->is_zidong = kaiguangai110_IN_suodingshijian;

      /* Entry 'suodingshijian': '<S27>:97' */
      localB->sdt += 0.002;
    } else {
      sf_internal_predicateOutput = ((rtu_kgdw1 == 1.0) && (rtu_kgdw2 == 1.0) &&
        (rtu_sddw == 1.0) && (rtu_yjdw == 1.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S27>:101' */
        localDW->is_zidong = kaiguangai1108_IN_t4guiling;

        /* Entry 't4guiling': '<S27>:100' */
        localDW->t4 = 0.0;
      }
    }
    break;

   case kaiguangai1108_IN_on4:
    kaiguangai1108_on4(rtu_kgdw1, rtu_kgdw2, rtu_skdw, rtu_jsdw, localB, localDW);
    break;

   case kaiguangai1108_IN_on5:
    kaiguangai1108_on5(rtu_ggdw1, rtu_ggdw2, rtu_skdw, rtu_jsdw, localB, localDW);
    break;

   case kaiguangai1108_IN_on6:
    kaiguangai1108_on6(rtu_ggdw1, rtu_ggdw2, rtu_sddw, rtu_yjdw, localB, localDW);
    break;

   case kaiguangai1108_IN_on7:
    kaiguangai1108_on7(rtu_shedingcishu, rtu_jieshu, localB, localDW);
    break;

   case kaiguangai1108_IN_on8:
    /* During 'on8': '<S27>:352' */
    break;

   case kaiguangai1108_IN_on9:
    /* During 'on9': '<S27>:358' */
    break;

   case kaiguangai110_IN_songkaishijian:
    kaiguangai1108_songkaishijian(rtu_skdw, rtu_jsdw, localB, localDW);
    break;

   case kaiguangai11_IN_songkaishijian1:
    kaiguangai1108_songkaishijian1(rtu_skdw, rtu_jsdw, localB, localDW);
    break;

   case kaiguangai11_IN_songkaishijian2:
    kaiguangai1108_songkaishijian2(rtu_kgdw1, rtu_kgdw2, rtu_skdw, rtu_jsdw,
      localB, localDW);
    break;

   case kaiguangai11_IN_songkaishijian3:
    kaiguangai1108_songkaishijian3(rtu_kgdw1, rtu_kgdw2, rtu_sddw, rtu_yjdw,
      rtu_skdw, rtu_jsdw, localB, localDW);
    break;

   case kaiguangai11_IN_songkaishijian4:
    kaiguangai1108_songkaishijian4(rtu_kgdw1, rtu_kgdw2, rtu_skdw, rtu_jsdw,
      localB, localDW);
    break;

   case kaiguangai11_IN_songkaishijian5:
    kaiguangai1108_songkaishijian5(rtu_ggdw1, rtu_ggdw2, rtu_skdw, rtu_jsdw,
      localB, localDW);
    break;

   case kaiguangai11_IN_songkaishijian6:
    kaiguangai1108_songkaishijian6(rtu_ggdw1, rtu_ggdw2, rtu_sddw, rtu_yjdw,
      localB, localDW);
    break;

   case kaiguangai1108_IN_start:
    /* During 'start': '<S27>:197' */
    if (rtu_start) {
      /* Transition: '<S27>:198' */
      localDW->is_zidong = kaiguangai1108_IN_chushihua;
      kaiguang_enter_atomic_chushihua(localB);
    }
    break;

   case kaiguangai1108_IN_stop:
    /* During 'stop': '<S27>:193' */
    break;

   case kaiguangai110_IN_suodingshijian:
    kaiguangai1108_suodingshijian(rtu_kgdw1, rtu_kgdw2, rtu_sddw, rtu_yjdw,
      localB, localDW);
    break;

   case kaiguangai1108_IN_t10guiling:
    /* During 't10guiling': '<S27>:336' */
    /* Transition: '<S27>:340' */
    if (localDW->t10 < rtu_t11) {
      /* Transition: '<S27>:341' */
      localDW->is_zidong = kaiguangai110_IN_yanchishijian6;
      localDW->temporalCounter_i1 = 0U;

      /* Entry 'yanchishijian6': '<S27>:337' */
      localDW->t10++;
    } else {
      if (localDW->t10 >= rtu_t11) {
        /* Transition: '<S27>:342' */
        localDW->is_zidong = kaiguangai1108_IN_off_b;
        kaiguangai1108_enter_atomic_off(localB);
      }
    }
    break;

   case kaiguangai1108_IN_t2guiling:
    kaiguangai1108_t2guiling(rtu_t3, localB, localDW);
    break;

   case kaiguangai1108_IN_t4guiling:
    kaiguangai1108_t4guiling(rtu_t5, localB, localDW);
    break;

   case kaiguangai1108_IN_t6guiling:
    kaiguangai1108_t6guiling(rtu_t7, localB, localDW);
    break;

   case kaiguangai1108_IN_t8guiling:
    kaiguangai1108_t8guiling(rtu_t9, localB, localDW);
    break;

   case kaiguangai1108_IN_tguiling:
    kaiguangai1108_tguiling(rtu_t1, localB, localDW);
    break;

   case kaiguangai1108_IN_yajinshijian:
    kaiguangai1108_yajinshijian(rtu_ggdw1, rtu_ggdw2, rtu_sddw, rtu_yjdw, localB,
      localDW);
    break;

   case kaiguangai110_IN_yanchishijian1:
    kaiguangai1108_yanchishijian1(rtu_t1, localB, localDW);
    break;

   case kaiguangai110_IN_yanchishijian2:
    kaiguangai1108_yanchishijian2(rtu_t3, localB, localDW);
    break;

   case kaiguangai110_IN_yanchishijian3:
    kaiguangai1108_yanchishijian3(rtu_t5, localB, localDW);
    break;

   case kaiguangai110_IN_yanchishijian4:
    kaiguangai1108_yanchishijian4(rtu_t7, localB, localDW);
    break;

   case kaiguangai110_IN_yanchishijian5:
    kaiguangai1108_yanchishijian5(rtu_t9, localB, localDW);
    break;

   default:
    /* During 'yanchishijian6': '<S27>:337' */
    if (localDW->temporalCounter_i1 >= 500) {
      /* Transition: '<S27>:343' */
      if (localDW->t10 < rtu_t11) {
        /* Transition: '<S27>:341' */
        localDW->is_zidong = kaiguangai110_IN_yanchishijian6;
        localDW->temporalCounter_i1 = 0U;

        /* Entry 'yanchishijian6': '<S27>:337' */
        localDW->t10++;
      } else {
        if (localDW->t10 >= rtu_t11) {
          /* Transition: '<S27>:342' */
          localDW->is_zidong = kaiguangai1108_IN_off_b;
          kaiguangai1108_enter_atomic_off(localB);
        }
      }
    }
    break;
  }
}

/*
 * System initialize for atomic system:
 *    '<S17>/1#1'
 *    '<S17>/1#2'
 *    '<S17>/1#3'
 *    '<S17>/1#4'
 *    '<S17>/1#5'
 *    '<S17>/1#6'
 *    '<S17>/1#7'
 */
void kaiguangai1108_u1_Init(DW_u1_kaiguangai1108_T *localDW)
{
  localDW->sfEvent = kaiguangai1108_CALL_EVENT_k;
  localDW->is_zidong = kaiguangai_IN_NO_ACTIVE_CHILD_a;
  localDW->temporalCounter_i1 = 0U;
  localDW->is_active_c2_kaiguangai1108 = 0U;
  localDW->is_c2_kaiguangai1108 = kaiguangai_IN_NO_ACTIVE_CHILD_a;
}

/*
 * Output and update for atomic system:
 *    '<S17>/1#1'
 *    '<S17>/1#2'
 *    '<S17>/1#3'
 *    '<S17>/1#4'
 *    '<S17>/1#5'
 *    '<S17>/1#6'
 *    '<S17>/1#7'
 */
void kaiguangai1108_u1(boolean_T rtu_start, real_T rtu_kgdw1, real_T rtu_kgdw2,
  real_T rtu_ggdw1, real_T rtu_ggdw2, real_T rtu_sddw, real_T rtu_yjdw, real_T
  rtu_skdw, real_T rtu_jsdw, real_T rtu_t1, real_T rtu_t3, real_T rtu_t5, real_T
  rtu_t7, real_T rtu_t9, real_T rtu_t11, real_T rtu_shedingcishu, real_T
  rtu_jieshu, B_u1_kaiguangai1108_T *localB, DW_u1_kaiguangai1108_T *localDW)
{
  /* Gateway: Subsystem1/zidong/1#1 */
  localDW->sfEvent = kaiguangai1108_CALL_EVENT_k;
  if (localDW->temporalCounter_i1 < 511U) {
    localDW->temporalCounter_i1++;
  }

  /* During: Subsystem1/zidong/1#1 */
  if (localDW->is_active_c2_kaiguangai1108 == 0U) {
    /* Entry: Subsystem1/zidong/1#1 */
    localDW->is_active_c2_kaiguangai1108 = 1U;

    /* Entry Internal: Subsystem1/zidong/1#1 */
    /* Transition: '<S27>:375' */
    localDW->is_c2_kaiguangai1108 = kaiguangai1108_IN_zidong;

    /* Entry Internal 'zidong': '<S27>:374' */
    /* Transition: '<S27>:199' */
    localDW->is_zidong = kaiguangai1108_IN_start;

    /* Entry 'start': '<S27>:197' */
    localB->yikaicishu = 0.0;
  } else {
    kaiguangai1108_zidong(rtu_start, rtu_kgdw1, rtu_kgdw2, rtu_ggdw1, rtu_ggdw2,
                          rtu_sddw, rtu_yjdw, rtu_skdw, rtu_jsdw, rtu_t1, rtu_t3,
                          rtu_t5, rtu_t7, rtu_t9, rtu_t11, rtu_shedingcishu,
                          rtu_jieshu, localB, localDW);
  }
}

/* Function for Chart: '<S9>/jinjichuli' */
static void kaiguangai_exit_internal_MANUAL(DW_jinjichuli_kaiguangai1108_T
  *localDW)
{
  /* Exit Internal 'MANUAL': '<S36>:3' */
  /* Exit Internal 'jiesuo': '<S36>:246' */
  localDW->is_jiesuo = kaiguanga_IN_NO_ACTIVE_CHILD_af;
  localDW->is_active_jiesuo = 0U;

  /* Exit Internal 'suoding': '<S36>:243' */
  localDW->is_suoding = kaiguanga_IN_NO_ACTIVE_CHILD_af;
  localDW->is_active_suoding = 0U;

  /* Exit Internal 'yajin': '<S36>:214' */
  localDW->is_yajin = kaiguanga_IN_NO_ACTIVE_CHILD_af;
  localDW->is_active_yajin = 0U;

  /* Exit Internal 'songkai': '<S36>:208' */
  localDW->is_songkai = kaiguanga_IN_NO_ACTIVE_CHILD_af;
  localDW->is_active_songkai = 0U;

  /* Exit Internal 'guangai': '<S36>:202' */
  localDW->is_guangai = kaiguanga_IN_NO_ACTIVE_CHILD_af;
  localDW->is_active_guangai = 0U;

  /* Exit Internal 'kaigai': '<S36>:7' */
  localDW->is_kaigai = kaiguanga_IN_NO_ACTIVE_CHILD_af;
  localDW->is_active_kaigai = 0U;
}

/*
 * System initialize for atomic system:
 *    '<S9>/jinjichuli'
 *    '<S9>/jinjichuli1'
 *    '<S9>/jinjichuli2'
 *    '<S9>/jinjichuli3'
 *    '<S9>/jinjichuli4'
 *    '<S9>/jinjichuli5'
 *    '<S9>/jinjichuli6'
 *    '<S9>/jinjichuli7'
 */
void kaiguangai1108_jinjichuli_Init(B_jinjichuli_kaiguangai1108_T *localB,
  DW_jinjichuli_kaiguangai1108_T *localDW)
{
  localDW->sfEvent = kaiguangai1108_CALL_EVENT_o;
  localDW->is_active_guangai = 0U;
  localDW->is_guangai = kaiguanga_IN_NO_ACTIVE_CHILD_af;
  localDW->is_active_jiesuo = 0U;
  localDW->is_jiesuo = kaiguanga_IN_NO_ACTIVE_CHILD_af;
  localDW->is_active_kaigai = 0U;
  localDW->is_kaigai = kaiguanga_IN_NO_ACTIVE_CHILD_af;
  localDW->is_active_songkai = 0U;
  localDW->is_songkai = kaiguanga_IN_NO_ACTIVE_CHILD_af;
  localDW->is_active_suoding = 0U;
  localDW->is_suoding = kaiguanga_IN_NO_ACTIVE_CHILD_af;
  localDW->is_active_yajin = 0U;
  localDW->is_yajin = kaiguanga_IN_NO_ACTIVE_CHILD_af;
  localDW->temporalCounter_i1 = 0U;
  localDW->is_active_c18_kaiguangai1108 = 0U;
  localDW->is_c18_kaiguangai1108 = kaiguanga_IN_NO_ACTIVE_CHILD_af;
  localB->skhx = 0.0;
  localB->kghx = 0.0;
  localB->yjhx = 0.0;
  localB->gghx = 0.0;
}

/*
 * Output and update for atomic system:
 *    '<S9>/jinjichuli'
 *    '<S9>/jinjichuli1'
 *    '<S9>/jinjichuli2'
 *    '<S9>/jinjichuli3'
 *    '<S9>/jinjichuli4'
 *    '<S9>/jinjichuli5'
 *    '<S9>/jinjichuli6'
 *    '<S9>/jinjichuli7'
 */
void kaiguangai1108_jinjichuli(real_T rtu_tiaoshi, real_T rtu_songkai, real_T
  rtu_kaigai, real_T rtu_suoding, real_T rtu_jiesuo, real_T rtu_guangai, real_T
  rtu_yajin, real_T rtu_jiting, B_jinjichuli_kaiguangai1108_T *localB,
  DW_jinjichuli_kaiguangai1108_T *localDW)
{
  /* Gateway: tiaoshimoshi/jinjichuli */
  localDW->sfEvent = kaiguangai1108_CALL_EVENT_o;
  if (localDW->temporalCounter_i1 < 511U) {
    localDW->temporalCounter_i1++;
  }

  /* During: tiaoshimoshi/jinjichuli */
  if (localDW->is_active_c18_kaiguangai1108 == 0U) {
    /* Entry: tiaoshimoshi/jinjichuli */
    localDW->is_active_c18_kaiguangai1108 = 1U;

    /* Entry Internal: tiaoshimoshi/jinjichuli */
    /* Transition: '<S36>:57' */
    localDW->is_c18_kaiguangai1108 = kaiguangai1108_IN_off1_c;
  } else {
    switch (localDW->is_c18_kaiguangai1108) {
     case kaiguangai1108_IN_MANUAL:
      /* During 'MANUAL': '<S36>:3' */
      if (rtu_jiting == 1.0) {
        /* Transition: '<S36>:98' */
        kaiguangai_exit_internal_MANUAL(localDW);
        localDW->is_c18_kaiguangai1108 = kaiguangai1108_IN_end;

        /* Entry 'end': '<S36>:43' */
        localB->skhx = 0.0;
        localB->kghx = 0.0;
        localB->yjhx = 0.0;
        localB->gghx = 0.0;
      } else {
        /* During 'kaigai': '<S36>:7' */
        if (localDW->is_kaigai == kaiguangai1108_IN_A) {
          /* During 'A': '<S36>:11' */
          if (rtu_kaigai == 1.0) {
            /* Transition: '<S36>:69' */
            localDW->is_kaigai = kaiguangai1108_IN_on_g;

            /* Entry 'on': '<S36>:15' */
            localB->kghx = 1.0;
          }
        } else {
          /* During 'on': '<S36>:15' */
          if (rtu_kaigai == 0.0) {
            /* Transition: '<S36>:65' */
            localDW->is_kaigai = kaiguangai1108_IN_A;

            /* Entry 'A': '<S36>:11' */
            localB->kghx = 0.0;
          }
        }

        /* During 'guangai': '<S36>:202' */
        if (localDW->is_guangai == kaiguangai1108_IN_A) {
          /* During 'A': '<S36>:201' */
          if (rtu_guangai == 1.0) {
            /* Transition: '<S36>:197' */
            localDW->is_guangai = kaiguangai1108_IN_on_g;

            /* Entry 'on': '<S36>:200' */
            localB->gghx = 1.0;
          }
        } else {
          /* During 'on': '<S36>:200' */
          if (rtu_guangai == 0.0) {
            /* Transition: '<S36>:198' */
            localDW->is_guangai = kaiguangai1108_IN_A;

            /* Entry 'A': '<S36>:201' */
            localB->gghx = 0.0;
          }
        }

        /* During 'songkai': '<S36>:208' */
        if (localDW->is_songkai == kaiguangai1108_IN_A) {
          /* During 'A': '<S36>:207' */
          if (rtu_songkai == 1.0) {
            /* Transition: '<S36>:203' */
            localDW->is_songkai = kaiguangai1108_IN_on_g;

            /* Entry 'on': '<S36>:204' */
            localB->skhx = 1.0;
          }
        } else {
          /* During 'on': '<S36>:204' */
          if (rtu_songkai == 0.0) {
            /* Transition: '<S36>:205' */
            localDW->is_songkai = kaiguangai1108_IN_A;

            /* Entry 'A': '<S36>:207' */
            localB->skhx = 0.0;
          }
        }

        /* During 'yajin': '<S36>:214' */
        if (localDW->is_yajin == kaiguangai1108_IN_A) {
          /* During 'A': '<S36>:210' */
          if (rtu_yajin == 1.0) {
            /* Transition: '<S36>:209' */
            localDW->is_yajin = kaiguangai1108_IN_on_g;

            /* Entry 'on': '<S36>:213' */
            localB->yjhx = 1.0;
          }
        } else {
          /* During 'on': '<S36>:213' */
          if (rtu_yajin == 0.0) {
            /* Transition: '<S36>:211' */
            localDW->is_yajin = kaiguangai1108_IN_A;

            /* Entry 'A': '<S36>:210' */
            localB->yjhx = 0.0;
          }
        }

        /* During 'suoding': '<S36>:243' */
        if (localDW->is_suoding == kaiguangai1108_IN_A) {
          /* During 'A': '<S36>:244' */
          if (rtu_suoding == 1.0) {
            /* Transition: '<S36>:239' */
            localDW->is_suoding = kaiguangai1108_IN_on_g;

            /* Entry 'on': '<S36>:242' */
            localB->yjhx = 1.0;
          }
        } else {
          /* During 'on': '<S36>:242' */
          if (rtu_suoding == 0.0) {
            /* Transition: '<S36>:240' */
            localDW->is_suoding = kaiguangai1108_IN_A;

            /* Entry 'A': '<S36>:244' */
            localB->yjhx = 0.0;
          }
        }

        /* During 'jiesuo': '<S36>:246' */
        if (localDW->is_jiesuo == kaiguangai1108_IN_A) {
          /* During 'A': '<S36>:247' */
          if (rtu_jiesuo == 1.0) {
            /* Transition: '<S36>:245' */
            localDW->is_jiesuo = kaiguangai1108_IN_on_g;

            /* Entry 'on': '<S36>:250' */
            localB->skhx = 1.0;
          }
        } else {
          /* During 'on': '<S36>:250' */
          if (rtu_jiesuo == 0.0) {
            /* Transition: '<S36>:248' */
            localDW->is_jiesuo = kaiguangai1108_IN_A;

            /* Entry 'A': '<S36>:247' */
            localB->skhx = 0.0;
          }
        }
      }
      break;

     case kaiguangai1108_IN_end:
      /* During 'end': '<S36>:43' */
      break;

     case kaiguangai1108_IN_off1_c:
      /* During 'off1': '<S36>:2' */
      if (rtu_tiaoshi == 1.0) {
        /* Transition: '<S36>:56' */
        localDW->is_c18_kaiguangai1108 = kaiguangai1108_IN_on1_e;
        localDW->temporalCounter_i1 = 0U;

        /* Entry 'on1': '<S36>:1' */
        localB->skhx = 0.0;
        localB->kghx = 0.0;
        localB->yjhx = 0.0;
        localB->gghx = 0.0;
      }
      break;

     default:
      /* During 'on1': '<S36>:1' */
      if (localDW->temporalCounter_i1 >= 500) {
        /* Transition: '<S36>:97' */
        localDW->is_c18_kaiguangai1108 = kaiguangai1108_IN_MANUAL;

        /* Entry Internal 'MANUAL': '<S36>:3' */
        localDW->is_active_kaigai = 1U;

        /* Entry Internal 'kaigai': '<S36>:7' */
        /* Transition: '<S36>:61' */
        localDW->is_kaigai = kaiguangai1108_IN_A;

        /* Entry 'A': '<S36>:11' */
        localB->kghx = 0.0;
        localDW->is_active_guangai = 1U;

        /* Entry Internal 'guangai': '<S36>:202' */
        /* Transition: '<S36>:199' */
        localDW->is_guangai = kaiguangai1108_IN_A;

        /* Entry 'A': '<S36>:201' */
        localB->gghx = 0.0;
        localDW->is_active_songkai = 1U;

        /* Entry Internal 'songkai': '<S36>:208' */
        /* Transition: '<S36>:206' */
        localDW->is_songkai = kaiguangai1108_IN_A;

        /* Entry 'A': '<S36>:207' */
        localDW->is_active_yajin = 1U;

        /* Entry Internal 'yajin': '<S36>:214' */
        /* Transition: '<S36>:212' */
        localDW->is_yajin = kaiguangai1108_IN_A;

        /* Entry 'A': '<S36>:210' */
        localDW->is_active_suoding = 1U;

        /* Entry Internal 'suoding': '<S36>:243' */
        /* Transition: '<S36>:241' */
        localDW->is_suoding = kaiguangai1108_IN_A;

        /* Entry 'A': '<S36>:244' */
        localB->yjhx = 0.0;
        localDW->is_active_jiesuo = 1U;

        /* Entry Internal 'jiesuo': '<S36>:246' */
        /* Transition: '<S36>:249' */
        localDW->is_jiesuo = kaiguangai1108_IN_A;

        /* Entry 'A': '<S36>:247' */
        localB->skhx = 0.0;
      }
      break;
    }
  }
}

/* Function for Chart: '<S17>/1#' */
static void kaiguangai11_enter_atomic_off_n(void)
{
  /* Entry 'off': '<S26>:165' */
  kaiguangai1108_B.skhx = 0.0;
  kaiguangai1108_B.kghx = 0.0;
  kaiguangai1108_B.kgzhiling1 = 0.0;
  kaiguangai1108_B.kgzhiling2 = 0.0;
  kaiguangai1108_B.yjhx = 0.0;
  kaiguangai1108_B.gghx = 0.0;
  kaiguangai1108_B.ggzhiling1 = 0.0;
  kaiguangai1108_B.ggzhiling2 = 0.0;
  kaiguangai1108_B.skt = 0.0;
  kaiguangai1108_B.kgt = 0.0;
  kaiguangai1108_B.sdt = 0.0;
  kaiguangai1108_B.jst = 0.0;
  kaiguangai1108_B.ggt = 0.0;
  kaiguangai1108_B.yjt = 0.0;
}

/* Function for Chart: '<S17>/1#' */
static void kaiguangai1108_on4_d(void)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'on4': '<S26>:113' */
  /* Transition: '<S26>:123' */
  sf_internal_predicateOutput = ((kaiguangai1108_B.DataTypeConversion1[0] == 0.0)
    || (kaiguangai1108_B.DataTypeConversion2[0] == 0.0) ||
    (kaiguangai1108_B.DataTypeConversion4[8] == 0.0) ||
    (kaiguangai1108_B.DataTypeConversion5[8] == 0.0));
  if (sf_internal_predicateOutput) {
    /* Transition: '<S26>:117' */
    kaiguangai1108_DW.is_zidong = kaiguangai11_IN_jiesuoshijian_j;

    /* Entry 'jiesuoshijian': '<S26>:116' */
    kaiguangai1108_B.jst += 0.002;
  } else {
    sf_internal_predicateOutput = ((kaiguangai1108_B.DataTypeConversion1[0] ==
      1.0) && (kaiguangai1108_B.DataTypeConversion2[0] == 1.0) &&
      (kaiguangai1108_B.DataTypeConversion4[8] == 1.0) &&
      (kaiguangai1108_B.DataTypeConversion5[8] == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S26>:120' */
      kaiguangai1108_DW.is_zidong = kaiguangai1108_IN_t6guiling_m;

      /* Entry 't6guiling': '<S26>:140' */
      kaiguangai1108_DW.t6 = 0.0;
    }
  }
}

/* Function for Chart: '<S17>/1#' */
static void kaiguangai1108_on5_f(void)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'on5': '<S26>:131' */
  /* Transition: '<S26>:150' */
  sf_internal_predicateOutput = ((kaiguangai1108_B.DataTypeConversion1[8] == 0.0)
    || (kaiguangai1108_B.DataTypeConversion2[8] == 0.0) ||
    (kaiguangai1108_B.DataTypeConversion4[8] == 0.0) ||
    (kaiguangai1108_B.DataTypeConversion5[8] == 0.0));
  if (sf_internal_predicateOutput) {
    /* Transition: '<S26>:144' */
    kaiguangai1108_DW.is_zidong = kaiguangai1_IN_guangaishijian_o;

    /* Entry 'guangaishijian': '<S26>:143' */
    kaiguangai1108_B.ggt += 0.002;
  } else {
    sf_internal_predicateOutput = ((kaiguangai1108_B.DataTypeConversion1[8] ==
      1.0) && (kaiguangai1108_B.DataTypeConversion2[8] == 1.0) &&
      (kaiguangai1108_B.DataTypeConversion4[8] == 1.0) &&
      (kaiguangai1108_B.DataTypeConversion5[8] == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S26>:145' */
      kaiguangai1108_DW.is_zidong = kaiguangai1108_IN_t8guiling_j;

      /* Entry 't8guiling': '<S26>:148' */
      kaiguangai1108_DW.t8 = 0.0;
    }
  }
}

/* Function for Chart: '<S17>/1#' */
static void kaiguangai1108_on6_n(void)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'on6': '<S26>:157' */
  /* Transition: '<S26>:164' */
  sf_internal_predicateOutput = ((kaiguangai1108_B.DataTypeConversion4[0] == 0.0)
    || (kaiguangai1108_B.DataTypeConversion5[0] == 0.0));
  if (sf_internal_predicateOutput) {
    /* Transition: '<S26>:158' */
    kaiguangai1108_DW.is_zidong = kaiguangai110_IN_yajinshijian_o;

    /* Entry 'yajinshijian': '<S26>:161' */
    kaiguangai1108_B.yjt += 0.002;
  } else {
    sf_internal_predicateOutput = ((kaiguangai1108_B.DataTypeConversion4[0] ==
      1.0) && (kaiguangai1108_B.DataTypeConversion5[0] == 1.0) &&
      (kaiguangai1108_B.DataTypeConversion1[8] == 1.0) &&
      (kaiguangai1108_B.DataTypeConversion2[8] == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S26>:167' */
      kaiguangai1108_DW.is_zidong = kaiguangai1108_IN_t10guiling_b;

      /* Entry 't10guiling': '<S26>:336' */
      kaiguangai1108_DW.t10 = 0.0;
    }
  }
}

/* Function for Chart: '<S17>/1#' */
static void kaigua_enter_atomic_chushihua_h(void)
{
  /* Entry 'chushihua': '<S26>:3' */
  kaiguangai1108_B.skhx = 0.0;
  kaiguangai1108_B.kghx = 0.0;
  kaiguangai1108_B.kgzhiling1 = 0.0;
  kaiguangai1108_B.kgzhiling2 = 0.0;
  kaiguangai1108_B.yjhx = 0.0;
  kaiguangai1108_B.gghx = 0.0;
  kaiguangai1108_B.ggzhiling1 = 0.0;
  kaiguangai1108_B.ggzhiling2 = 0.0;
  kaiguangai1108_B.skt = 0.0;
  kaiguangai1108_B.kgt = 0.0;
  kaiguangai1108_B.sdt = 0.0;
  kaiguangai1108_B.jst = 0.0;
  kaiguangai1108_B.ggt = 0.0;
  kaiguangai1108_B.yjt = 0.0;
  kaiguangai1108_B.skyichang = 0.0;
  kaiguangai1108_B.kgyichang = 0.0;
  kaiguangai1108_B.sdyichang = 0.0;
  kaiguangai1108_B.jsyichang = 0.0;
  kaiguangai1108_B.ggyichang = 0.0;
  kaiguangai1108_B.yjyichang = 0.0;
}

/* Function for Chart: '<S17>/1#' */
static void kaiguangai1108_on7_o(void)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'on7': '<S26>:170' */
  /* Transition: '<S26>:191' */
  sf_internal_predicateOutput = ((kaiguangai1108_B.yikaicishu <
    kaiguangai1108_B.zidong_shedingcishu) && (kaiguangai1108_B.jieshu == 0.0));
  if (sf_internal_predicateOutput) {
    /* Transition: '<S26>:192' */
    kaiguangai1108_DW.is_zidong = kaiguangai1108_IN_chushihua_i;
    kaigua_enter_atomic_chushihua_h();
  } else {
    sf_internal_predicateOutput = ((kaiguangai1108_B.yikaicishu >=
      kaiguangai1108_B.zidong_shedingcishu) || (kaiguangai1108_B.jieshu == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S26>:195' */
      kaiguangai1108_DW.is_zidong = kaiguangai1108_IN_stop_g;

      /* Entry 'stop': '<S26>:193' */
      kaiguangai1108_B.skhx = 0.0;
      kaiguangai1108_B.kghx = 0.0;
      kaiguangai1108_B.kgzhiling1 = 0.0;
      kaiguangai1108_B.kgzhiling2 = 0.0;
      kaiguangai1108_B.yjhx = 0.0;
      kaiguangai1108_B.gghx = 0.0;
      kaiguangai1108_B.ggzhiling1 = 0.0;
      kaiguangai1108_B.ggzhiling2 = 0.0;
      kaiguangai1108_B.skt = 0.0;
      kaiguangai1108_B.kgt = 0.0;
      kaiguangai1108_B.sdt = 0.0;
      kaiguangai1108_B.jst = 0.0;
      kaiguangai1108_B.ggt = 0.0;
      kaiguangai1108_B.yjt = 0.0;
    }
  }
}

/* Function for Chart: '<S17>/1#' */
static void kaiguangai1108_songkaishijian_l(void)
{
  boolean_T sf_internal_predicateOutput;
  boolean_T guard1 = false;

  /* During 'songkaishijian': '<S26>:33' */
  /* Transition: '<S26>:349' */
  guard1 = false;
  if (kaiguangai1108_B.skt <= 2000.0) {
    /* Transition: '<S26>:350' */
    sf_internal_predicateOutput = ((kaiguangai1108_B.DataTypeConversion4[8] ==
      0.0) || (kaiguangai1108_B.DataTypeConversion5[8] == 0.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S26>:50' */
      kaiguangai1108_DW.is_zidong = kaiguangai1_IN_songkaishijian_d;

      /* Entry 'songkaishijian': '<S26>:33' */
      kaiguangai1108_B.skt += 0.002;
    } else {
      sf_internal_predicateOutput = ((kaiguangai1108_B.DataTypeConversion4[8] ==
        1.0) && (kaiguangai1108_B.DataTypeConversion5[8] == 1.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S26>:53' */
        kaiguangai1108_DW.is_zidong = kaiguangai1108_IN_tguiling_p;

        /* Entry 'tguiling': '<S26>:52' */
        kaiguangai1108_DW.t = 0.0;
      } else {
        guard1 = true;
      }
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    if (kaiguangai1108_B.skt > 2000.0) {
      /* Transition: '<S26>:353' */
      kaiguangai1108_DW.is_zidong = kaiguangai1108_IN_on10_j;

      /* Entry 'on10': '<S26>:366' */
      kaiguangai1108_B.skyichang = 1.0;
    }
  }
}

/* Function for Chart: '<S17>/1#' */
static void kaiguangai110_songkaishijian1_g(void)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'songkaishijian1': '<S26>:355' */
  sf_internal_predicateOutput = ((kaiguangai1108_B.DataTypeConversion4[8] == 0.0)
    || (kaiguangai1108_B.DataTypeConversion5[8] == 0.0));
  if (sf_internal_predicateOutput) {
    /* Transition: '<S26>:356' */
    kaiguangai1108_DW.is_zidong = kaiguangai_IN_songkaishijian1_o;

    /* Entry 'songkaishijian1': '<S26>:355' */
    kaiguangai1108_B.skt += 0.002;
  } else {
    sf_internal_predicateOutput = ((kaiguangai1108_B.DataTypeConversion4[8] ==
      1.0) && (kaiguangai1108_B.DataTypeConversion5[8] == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S26>:357' */
      kaiguangai1108_DW.is_zidong = kaiguangai1108_IN_on8_e;

      /* Entry 'on8': '<S26>:352' */
      kaiguangai1108_B.skhx = 0.0;
    }
  }
}

/* Function for Chart: '<S17>/1#' */
static void kaiguangai110_songkaishijian2_p(void)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'songkaishijian2': '<S26>:365' */
  sf_internal_predicateOutput = ((kaiguangai1108_B.DataTypeConversion1[0] == 0.0)
    || (kaiguangai1108_B.DataTypeConversion2[0] == 0.0) ||
    (kaiguangai1108_B.DataTypeConversion4[8] == 0.0) ||
    (kaiguangai1108_B.DataTypeConversion5[8] == 0.0));
  if (sf_internal_predicateOutput) {
    /* Transition: '<S26>:360' */
    kaiguangai1108_DW.is_zidong = kaiguangai_IN_songkaishijian2_l;

    /* Entry 'songkaishijian2': '<S26>:365' */
    kaiguangai1108_B.kgt += 0.002;
  } else {
    sf_internal_predicateOutput = ((kaiguangai1108_B.DataTypeConversion1[0] ==
      1.0) && (kaiguangai1108_B.DataTypeConversion2[0] == 1.0) &&
      (kaiguangai1108_B.DataTypeConversion4[8] == 1.0) &&
      (kaiguangai1108_B.DataTypeConversion5[8] == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S26>:362' */
      kaiguangai1108_DW.is_zidong = kaiguangai1108_IN_on9_i;

      /* Entry 'on9': '<S26>:358' */
      kaiguangai1108_B.kghx = 0.0;
      kaiguangai1108_B.kgzhiling1 = 0.0;
      kaiguangai1108_B.kgzhiling2 = 0.0;
    }
  }
}

/* Function for Chart: '<S17>/1#' */
static void kaiguangai110_songkaishijian3_d(void)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'songkaishijian3': '<S26>:387' */
  sf_internal_predicateOutput = ((kaiguangai1108_B.DataTypeConversion1[0] == 0.0)
    || (kaiguangai1108_B.DataTypeConversion2[0] == 0.0) ||
    (kaiguangai1108_B.DataTypeConversion4[0] == 0.0) ||
    (kaiguangai1108_B.DataTypeConversion5[0] == 0.0));
  if (sf_internal_predicateOutput) {
    /* Transition: '<S26>:382' */
    kaiguangai1108_DW.is_zidong = kaiguangai_IN_songkaishijian3_f;

    /* Entry 'songkaishijian3': '<S26>:387' */
    kaiguangai1108_B.sdt += 0.002;
  } else {
    sf_internal_predicateOutput = ((kaiguangai1108_B.DataTypeConversion1[0] ==
      1.0) && (kaiguangai1108_B.DataTypeConversion2[0] == 1.0) &&
      (kaiguangai1108_B.DataTypeConversion4[8] == 1.0) &&
      (kaiguangai1108_B.DataTypeConversion5[8] == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S26>:383' */
      kaiguangai1108_DW.is_zidong = kaiguangai1108_IN_on13_f;

      /* Entry 'on13': '<S26>:381' */
      kaiguangai1108_B.yjhx = 0.0;
    }
  }
}

/* Function for Chart: '<S17>/1#' */
static void kaiguangai110_songkaishijian4_k(void)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'songkaishijian4': '<S26>:392' */
  sf_internal_predicateOutput = ((kaiguangai1108_B.DataTypeConversion1[0] == 0.0)
    || (kaiguangai1108_B.DataTypeConversion2[0] == 0.0) ||
    (kaiguangai1108_B.DataTypeConversion4[8] == 0.0) ||
    (kaiguangai1108_B.DataTypeConversion5[8] == 0.0));
  if (sf_internal_predicateOutput) {
    /* Transition: '<S26>:391' */
    kaiguangai1108_DW.is_zidong = kaiguangai_IN_songkaishijian4_h;

    /* Entry 'songkaishijian4': '<S26>:392' */
    kaiguangai1108_B.jst += 0.002;
  } else {
    sf_internal_predicateOutput = ((kaiguangai1108_B.DataTypeConversion1[0] ==
      1.0) && (kaiguangai1108_B.DataTypeConversion2[0] == 1.0) &&
      (kaiguangai1108_B.DataTypeConversion4[8] == 1.0) &&
      (kaiguangai1108_B.DataTypeConversion5[8] == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S26>:395' */
      kaiguangai1108_DW.is_zidong = kaiguangai1108_IN_on15_k;

      /* Entry 'on15': '<S26>:398' */
      kaiguangai1108_B.skhx = 0.0;
    }
  }
}

/* Function for Chart: '<S17>/1#' */
static void kaiguangai110_songkaishijian5_c(void)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'songkaishijian5': '<S26>:404' */
  sf_internal_predicateOutput = ((kaiguangai1108_B.DataTypeConversion1[8] == 1.0)
    && (kaiguangai1108_B.DataTypeConversion2[8] == 1.0) &&
    (kaiguangai1108_B.DataTypeConversion4[8] == 1.0) &&
    (kaiguangai1108_B.DataTypeConversion5[8] == 1.0));
  if (sf_internal_predicateOutput) {
    /* Transition: '<S26>:399' */
    kaiguangai1108_DW.is_zidong = kaiguangai1108_IN_on17_h;

    /* Entry 'on17': '<S26>:401' */
    kaiguangai1108_B.gghx = 0.0;
    kaiguangai1108_B.ggzhiling1 = 0.0;
    kaiguangai1108_B.ggzhiling2 = 0.0;
  } else {
    sf_internal_predicateOutput = ((kaiguangai1108_B.DataTypeConversion1[8] ==
      0.0) || (kaiguangai1108_B.DataTypeConversion2[8] == 0.0) ||
      (kaiguangai1108_B.DataTypeConversion4[8] == 0.0) ||
      (kaiguangai1108_B.DataTypeConversion5[8] == 0.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S26>:408' */
      kaiguangai1108_DW.is_zidong = kaiguangai_IN_songkaishijian5_j;

      /* Entry 'songkaishijian5': '<S26>:404' */
      kaiguangai1108_B.ggt += 0.002;
    }
  }
}

/* Function for Chart: '<S17>/1#' */
static void kaiguangai110_songkaishijian6_d(void)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'songkaishijian6': '<S26>:417' */
  sf_internal_predicateOutput = ((kaiguangai1108_B.DataTypeConversion4[0] == 1.0)
    && (kaiguangai1108_B.DataTypeConversion5[0] == 1.0) &&
    (kaiguangai1108_B.DataTypeConversion1[8] == 1.0) &&
    (kaiguangai1108_B.DataTypeConversion2[8] == 1.0));
  if (sf_internal_predicateOutput) {
    /* Transition: '<S26>:411' */
    kaiguangai1108_DW.is_zidong = kaiguangai1108_IN_on19_l;

    /* Entry 'on19': '<S26>:415' */
    kaiguangai1108_B.yjhx = 0.0;
  } else {
    sf_internal_predicateOutput = ((kaiguangai1108_B.DataTypeConversion4[0] ==
      0.0) || (kaiguangai1108_B.DataTypeConversion5[0] == 0.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S26>:409' */
      kaiguangai1108_DW.is_zidong = kaiguangai_IN_songkaishijian6_e;

      /* Entry 'songkaishijian6': '<S26>:417' */
      kaiguangai1108_B.yjt += 0.002;
    }
  }
}

/* Function for Chart: '<S17>/1#' */
static void kaiguangai1108_suodingshijian_g(void)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'suodingshijian': '<S26>:97' */
  /* Transition: '<S26>:384' */
  if (kaiguangai1108_B.sdt > 2000.0) {
    /* Transition: '<S26>:385' */
    kaiguangai1108_DW.is_zidong = kaiguangai1108_IN_on12_j;

    /* Entry 'on12': '<S26>:378' */
    kaiguangai1108_B.sdyichang = 1.0;
  } else {
    if (kaiguangai1108_B.sdt <= 2000.0) {
      /* Transition: '<S26>:379' */
      sf_internal_predicateOutput = ((kaiguangai1108_B.DataTypeConversion1[0] ==
        0.0) || (kaiguangai1108_B.DataTypeConversion2[0] == 0.0) ||
        (kaiguangai1108_B.DataTypeConversion4[0] == 0.0) ||
        (kaiguangai1108_B.DataTypeConversion5[0] == 0.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S26>:99' */
        kaiguangai1108_DW.is_zidong = kaiguangai1_IN_suodingshijian_g;

        /* Entry 'suodingshijian': '<S26>:97' */
        kaiguangai1108_B.sdt += 0.002;
      } else {
        sf_internal_predicateOutput = ((kaiguangai1108_B.DataTypeConversion1[0] ==
          1.0) && (kaiguangai1108_B.DataTypeConversion2[0] == 1.0) &&
          (kaiguangai1108_B.DataTypeConversion4[0] == 1.0) &&
          (kaiguangai1108_B.DataTypeConversion5[0] == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S26>:101' */
          kaiguangai1108_DW.is_zidong = kaiguangai1108_IN_t4guiling_d;

          /* Entry 't4guiling': '<S26>:100' */
          kaiguangai1108_DW.t4 = 0.0;
        }
      }
    }
  }
}

/* Function for Chart: '<S17>/1#' */
static void kaiguangai1108_t2guiling_p(void)
{
  /* During 't2guiling': '<S26>:83' */
  /* Transition: '<S26>:85' */
  if (kaiguangai1108_DW.t2 < kaiguangai1108_B.u_m) {
    /* Transition: '<S26>:79' */
    kaiguangai1108_DW.is_zidong = kaiguangai1_IN_yanchishijian2_h;
    kaiguangai1108_DW.temporalCounter_i1 = 0U;

    /* Entry 'yanchishijian2': '<S26>:69' */
    kaiguangai1108_DW.t2 += 0.002;
  } else {
    if (kaiguangai1108_DW.t2 >= kaiguangai1108_B.u_m) {
      /* Transition: '<S26>:112' */
      kaiguangai1108_DW.is_zidong = kaiguangai1108_IN_on3_g;

      /* Entry 'on3': '<S26>:81' */
      kaiguangai1108_B.kghx = 0.0;
      kaiguangai1108_B.kgzhiling1 = 0.0;
      kaiguangai1108_B.kgzhiling2 = 0.0;
      kaiguangai1108_B.yjhx = 1.0;
    }
  }
}

/* Function for Chart: '<S17>/1#' */
static void kaiguangai1108_t4guiling_l(void)
{
  /* During 't4guiling': '<S26>:100' */
  /* Transition: '<S26>:110' */
  if (kaiguangai1108_DW.t4 < kaiguangai1108_B.u_m5) {
    /* Transition: '<S26>:109' */
    kaiguangai1108_DW.is_zidong = kaiguangai1_IN_yanchishijian3_f;
    kaiguangai1108_DW.temporalCounter_i1 = 0U;

    /* Entry 'yanchishijian3': '<S26>:108' */
    kaiguangai1108_DW.t4 += 0.002;
  } else {
    if (kaiguangai1108_DW.t4 >= kaiguangai1108_B.u_m5) {
      /* Transition: '<S26>:114' */
      kaiguangai1108_DW.is_zidong = kaiguangai1108_IN_on4_m;

      /* Entry 'on4': '<S26>:113' */
      kaiguangai1108_B.yjhx = 0.0;
      kaiguangai1108_B.skhx = 1.0;
    }
  }
}

/* Function for Chart: '<S17>/1#' */
static void kaiguangai1108_t6guiling_c(void)
{
  /* During 't6guiling': '<S26>:140' */
  /* Transition: '<S26>:141' */
  if (kaiguangai1108_DW.t6 < kaiguangai1108_B.u_gd) {
    /* Transition: '<S26>:127' */
    kaiguangai1108_DW.is_zidong = kaiguangai1_IN_yanchishijian4_a;
    kaiguangai1108_DW.temporalCounter_i1 = 0U;

    /* Entry 'yanchishijian4': '<S26>:126' */
    kaiguangai1108_DW.t6 += 0.002;
  } else {
    if (kaiguangai1108_DW.t6 >= kaiguangai1108_B.u_gd) {
      /* Transition: '<S26>:129' */
      kaiguangai1108_DW.is_zidong = kaiguangai1108_IN_on5_a;

      /* Entry 'on5': '<S26>:131' */
      kaiguangai1108_B.skhx = 0.0;
      kaiguangai1108_B.gghx = 1.0;
      kaiguangai1108_B.ggzhiling1 = 1.0;
      kaiguangai1108_B.ggzhiling2 = 1.0;
    }
  }
}

/* Function for Chart: '<S17>/1#' */
static void kaiguangai1108_t8guiling_c(void)
{
  /* During 't8guiling': '<S26>:148' */
  /* Transition: '<S26>:156' */
  if (kaiguangai1108_DW.t8 < kaiguangai1108_B.u_gh) {
    /* Transition: '<S26>:151' */
    kaiguangai1108_DW.is_zidong = kaiguangai1_IN_yanchishijian5_i;
    kaiguangai1108_DW.temporalCounter_i1 = 0U;

    /* Entry 'yanchishijian5': '<S26>:153' */
    kaiguangai1108_DW.t8 += 0.002;
  } else {
    if (kaiguangai1108_DW.t8 >= kaiguangai1108_B.u_gh) {
      /* Transition: '<S26>:169' */
      kaiguangai1108_DW.is_zidong = kaiguangai1108_IN_on6_g;

      /* Entry 'on6': '<S26>:157' */
      kaiguangai1108_B.gghx = 0.0;
      kaiguangai1108_B.ggzhiling1 = 0.0;
      kaiguangai1108_B.ggzhiling2 = 0.0;
      kaiguangai1108_B.yjhx = 1.0;
    }
  }
}

/* Function for Chart: '<S17>/1#' */
static void kaiguangai1108_tguiling_g(void)
{
  /* During 'tguiling': '<S26>:52' */
  /* Transition: '<S26>:55' */
  if (kaiguangai1108_DW.t < kaiguangai1108_B.u_g) {
    /* Transition: '<S26>:57' */
    kaiguangai1108_DW.is_zidong = kaiguangai1_IN_yanchishijian1_f;
    kaiguangai1108_DW.temporalCounter_i1 = 0U;

    /* Entry 'yanchishijian1': '<S26>:56' */
    kaiguangai1108_DW.t += 0.002;
  } else {
    if (kaiguangai1108_DW.t >= kaiguangai1108_B.u_g) {
      /* Transition: '<S26>:111' */
      kaiguangai1108_DW.is_zidong = kaiguangai1108_IN_on2_j;

      /* Entry 'on2': '<S26>:60' */
      kaiguangai1108_B.skhx = 0.0;
      kaiguangai1108_B.kghx = 1.0;
      kaiguangai1108_B.kgzhiling1 = 1.0;
      kaiguangai1108_B.kgzhiling2 = 1.0;
    }
  }
}

/* Function for Chart: '<S17>/1#' */
static void kaiguangai1108_yajinshijian_h(void)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'yajinshijian': '<S26>:161' */
  /* Transition: '<S26>:414' */
  if (kaiguangai1108_B.yjt > 2000.0) {
    /* Transition: '<S26>:416' */
    kaiguangai1108_DW.is_zidong = kaiguangai1108_IN_on18_b;

    /* Entry 'on18': '<S26>:413' */
    kaiguangai1108_B.ggyichang = 1.0;
  } else {
    if (kaiguangai1108_B.yjt <= 2000.0) {
      /* Transition: '<S26>:418' */
      sf_internal_predicateOutput = ((kaiguangai1108_B.DataTypeConversion4[0] ==
        0.0) || (kaiguangai1108_B.DataTypeConversion5[0] == 0.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S26>:158' */
        kaiguangai1108_DW.is_zidong = kaiguangai110_IN_yajinshijian_o;

        /* Entry 'yajinshijian': '<S26>:161' */
        kaiguangai1108_B.yjt += 0.002;
      } else {
        sf_internal_predicateOutput = ((kaiguangai1108_B.DataTypeConversion4[0] ==
          1.0) && (kaiguangai1108_B.DataTypeConversion5[0] == 1.0) &&
          (kaiguangai1108_B.DataTypeConversion1[8] == 1.0) &&
          (kaiguangai1108_B.DataTypeConversion2[8] == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S26>:167' */
          kaiguangai1108_DW.is_zidong = kaiguangai1108_IN_t10guiling_b;

          /* Entry 't10guiling': '<S26>:336' */
          kaiguangai1108_DW.t10 = 0.0;
        }
      }
    }
  }
}

/* Function for Chart: '<S17>/1#' */
static void kaiguangai1108_yanchishijian1_b(void)
{
  /* During 'yanchishijian1': '<S26>:56' */
  if (kaiguangai1108_DW.temporalCounter_i1 >= 1) {
    /* Transition: '<S26>:58' */
    if (kaiguangai1108_DW.t < kaiguangai1108_B.u_g) {
      /* Transition: '<S26>:57' */
      kaiguangai1108_DW.is_zidong = kaiguangai1_IN_yanchishijian1_f;
      kaiguangai1108_DW.temporalCounter_i1 = 0U;

      /* Entry 'yanchishijian1': '<S26>:56' */
      kaiguangai1108_DW.t += 0.002;
    } else {
      if (kaiguangai1108_DW.t >= kaiguangai1108_B.u_g) {
        /* Transition: '<S26>:111' */
        kaiguangai1108_DW.is_zidong = kaiguangai1108_IN_on2_j;

        /* Entry 'on2': '<S26>:60' */
        kaiguangai1108_B.skhx = 0.0;
        kaiguangai1108_B.kghx = 1.0;
        kaiguangai1108_B.kgzhiling1 = 1.0;
        kaiguangai1108_B.kgzhiling2 = 1.0;
      }
    }
  }
}

/* Function for Chart: '<S17>/1#' */
static void kaiguangai1108_yanchishijian2_c(void)
{
  /* During 'yanchishijian2': '<S26>:69' */
  if (kaiguangai1108_DW.temporalCounter_i1 >= 1) {
    /* Transition: '<S26>:80' */
    if (kaiguangai1108_DW.t2 < kaiguangai1108_B.u_m) {
      /* Transition: '<S26>:79' */
      kaiguangai1108_DW.is_zidong = kaiguangai1_IN_yanchishijian2_h;
      kaiguangai1108_DW.temporalCounter_i1 = 0U;

      /* Entry 'yanchishijian2': '<S26>:69' */
      kaiguangai1108_DW.t2 += 0.002;
    } else {
      if (kaiguangai1108_DW.t2 >= kaiguangai1108_B.u_m) {
        /* Transition: '<S26>:112' */
        kaiguangai1108_DW.is_zidong = kaiguangai1108_IN_on3_g;

        /* Entry 'on3': '<S26>:81' */
        kaiguangai1108_B.kghx = 0.0;
        kaiguangai1108_B.kgzhiling1 = 0.0;
        kaiguangai1108_B.kgzhiling2 = 0.0;
        kaiguangai1108_B.yjhx = 1.0;
      }
    }
  }
}

/* Function for Chart: '<S17>/1#' */
static void kaiguangai1108_yanchishijian3_i(void)
{
  /* During 'yanchishijian3': '<S26>:108' */
  if (kaiguangai1108_DW.temporalCounter_i1 >= 1) {
    /* Transition: '<S26>:107' */
    if (kaiguangai1108_DW.t4 < kaiguangai1108_B.u_m5) {
      /* Transition: '<S26>:109' */
      kaiguangai1108_DW.is_zidong = kaiguangai1_IN_yanchishijian3_f;
      kaiguangai1108_DW.temporalCounter_i1 = 0U;

      /* Entry 'yanchishijian3': '<S26>:108' */
      kaiguangai1108_DW.t4 += 0.002;
    } else {
      if (kaiguangai1108_DW.t4 >= kaiguangai1108_B.u_m5) {
        /* Transition: '<S26>:114' */
        kaiguangai1108_DW.is_zidong = kaiguangai1108_IN_on4_m;

        /* Entry 'on4': '<S26>:113' */
        kaiguangai1108_B.yjhx = 0.0;
        kaiguangai1108_B.skhx = 1.0;
      }
    }
  }
}

/* Function for Chart: '<S17>/1#' */
static void kaiguangai1108_yanchishijian4_f(void)
{
  /* During 'yanchishijian4': '<S26>:126' */
  if (kaiguangai1108_DW.temporalCounter_i1 >= 1) {
    /* Transition: '<S26>:128' */
    if (kaiguangai1108_DW.t6 < kaiguangai1108_B.u_gd) {
      /* Transition: '<S26>:127' */
      kaiguangai1108_DW.is_zidong = kaiguangai1_IN_yanchishijian4_a;
      kaiguangai1108_DW.temporalCounter_i1 = 0U;

      /* Entry 'yanchishijian4': '<S26>:126' */
      kaiguangai1108_DW.t6 += 0.002;
    } else {
      if (kaiguangai1108_DW.t6 >= kaiguangai1108_B.u_gd) {
        /* Transition: '<S26>:129' */
        kaiguangai1108_DW.is_zidong = kaiguangai1108_IN_on5_a;

        /* Entry 'on5': '<S26>:131' */
        kaiguangai1108_B.skhx = 0.0;
        kaiguangai1108_B.gghx = 1.0;
        kaiguangai1108_B.ggzhiling1 = 1.0;
        kaiguangai1108_B.ggzhiling2 = 1.0;
      }
    }
  }
}

/* Function for Chart: '<S17>/1#' */
static void kaiguangai1108_yanchishijian5_n(void)
{
  /* During 'yanchishijian5': '<S26>:153' */
  if (kaiguangai1108_DW.temporalCounter_i1 >= 1) {
    /* Transition: '<S26>:155' */
    if (kaiguangai1108_DW.t8 < kaiguangai1108_B.u_gh) {
      /* Transition: '<S26>:151' */
      kaiguangai1108_DW.is_zidong = kaiguangai1_IN_yanchishijian5_i;
      kaiguangai1108_DW.temporalCounter_i1 = 0U;

      /* Entry 'yanchishijian5': '<S26>:153' */
      kaiguangai1108_DW.t8 += 0.002;
    } else {
      if (kaiguangai1108_DW.t8 >= kaiguangai1108_B.u_gh) {
        /* Transition: '<S26>:169' */
        kaiguangai1108_DW.is_zidong = kaiguangai1108_IN_on6_g;

        /* Entry 'on6': '<S26>:157' */
        kaiguangai1108_B.gghx = 0.0;
        kaiguangai1108_B.ggzhiling1 = 0.0;
        kaiguangai1108_B.ggzhiling2 = 0.0;
        kaiguangai1108_B.yjhx = 1.0;
      }
    }
  }
}

/* Function for Chart: '<S17>/1#' */
static void kaiguangai1108_zidong_n(void)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'zidong': '<S26>:374' */
  switch (kaiguangai1108_DW.is_zidong) {
   case kaiguangai1108_IN_chushihua_i:
    /* During 'chushihua': '<S26>:3' */
    sf_internal_predicateOutput = (kaiguangai1108_B.LogicalOperator4_l &&
      (kaiguangai1108_B.DataTypeConversion1[8] == 1.0) &&
      (kaiguangai1108_B.DataTypeConversion2[8] == 1.0) &&
      (kaiguangai1108_B.DataTypeConversion5[0] == 1.0) &&
      (kaiguangai1108_B.DataTypeConversion4[0] == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S26>:181' */
      kaiguangai1108_DW.is_zidong = kaiguangai1108_IN_on1_p;

      /* Entry 'on1': '<S26>:12' */
      kaiguangai1108_B.skhx = 1.0;
    }
    break;

   case kaiguangai1_IN_guangaishijian_o:
    /* During 'guangaishijian': '<S26>:143' */
    /* Transition: '<S26>:407' */
    if (kaiguangai1108_B.ggt > 12000.0) {
      /* Transition: '<S26>:406' */
      kaiguangai1108_DW.is_zidong = kaiguangai1108_IN_on16_j;

      /* Entry 'on16': '<S26>:400' */
      kaiguangai1108_B.ggyichang = 1.0;
    } else {
      if (kaiguangai1108_B.ggt <= 12000.0) {
        /* Transition: '<S26>:402' */
        sf_internal_predicateOutput = ((kaiguangai1108_B.DataTypeConversion1[8] ==
          0.0) || (kaiguangai1108_B.DataTypeConversion2[8] == 0.0) ||
          (kaiguangai1108_B.DataTypeConversion4[8] == 0.0) ||
          (kaiguangai1108_B.DataTypeConversion5[8] == 0.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S26>:144' */
          kaiguangai1108_DW.is_zidong = kaiguangai1_IN_guangaishijian_o;

          /* Entry 'guangaishijian': '<S26>:143' */
          kaiguangai1108_B.ggt += 0.002;
        } else {
          sf_internal_predicateOutput = ((kaiguangai1108_B.DataTypeConversion1[8]
            == 1.0) && (kaiguangai1108_B.DataTypeConversion2[8] == 1.0) &&
            (kaiguangai1108_B.DataTypeConversion4[8] == 1.0) &&
            (kaiguangai1108_B.DataTypeConversion5[8] == 1.0));
          if (sf_internal_predicateOutput) {
            /* Transition: '<S26>:145' */
            kaiguangai1108_DW.is_zidong = kaiguangai1108_IN_t8guiling_j;

            /* Entry 't8guiling': '<S26>:148' */
            kaiguangai1108_DW.t8 = 0.0;
          }
        }
      }
    }
    break;

   case kaiguangai11_IN_jiesuoshijian_j:
    /* During 'jiesuoshijian': '<S26>:116' */
    /* Transition: '<S26>:393' */
    if (kaiguangai1108_B.jst > 2000.0) {
      /* Transition: '<S26>:389' */
      kaiguangai1108_DW.is_zidong = kaiguangai1108_IN_on14_i;

      /* Entry 'on14': '<S26>:394' */
      kaiguangai1108_B.jsyichang = 1.0;
    } else {
      if (kaiguangai1108_B.jst <= 2000.0) {
        /* Transition: '<S26>:396' */
        sf_internal_predicateOutput = ((kaiguangai1108_B.DataTypeConversion1[0] ==
          0.0) || (kaiguangai1108_B.DataTypeConversion2[0] == 0.0) ||
          (kaiguangai1108_B.DataTypeConversion4[8] == 0.0) ||
          (kaiguangai1108_B.DataTypeConversion5[8] == 0.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S26>:117' */
          kaiguangai1108_DW.is_zidong = kaiguangai11_IN_jiesuoshijian_j;

          /* Entry 'jiesuoshijian': '<S26>:116' */
          kaiguangai1108_B.jst += 0.002;
        } else {
          sf_internal_predicateOutput = ((kaiguangai1108_B.DataTypeConversion1[0]
            == 1.0) && (kaiguangai1108_B.DataTypeConversion2[0] == 1.0) &&
            (kaiguangai1108_B.DataTypeConversion4[8] == 1.0) &&
            (kaiguangai1108_B.DataTypeConversion5[8] == 1.0));
          if (sf_internal_predicateOutput) {
            /* Transition: '<S26>:120' */
            kaiguangai1108_DW.is_zidong = kaiguangai1108_IN_t6guiling_m;

            /* Entry 't6guiling': '<S26>:140' */
            kaiguangai1108_DW.t6 = 0.0;
          }
        }
      }
    }
    break;

   case kaiguangai11_IN_kaigaishijian_l:
    /* During 'kaigaishijian': '<S26>:62' */
    /* Transition: '<S26>:363' */
    if (kaiguangai1108_B.kgt > 12000.0) {
      /* Transition: '<S26>:364' */
      kaiguangai1108_DW.is_zidong = kaiguangai1108_IN_on11_l;

      /* Entry 'on11': '<S26>:376' */
      kaiguangai1108_B.kgyichang = 1.0;
    } else {
      if (kaiguangai1108_B.kgt <= 12000.0) {
        /* Transition: '<S26>:359' */
        sf_internal_predicateOutput = ((kaiguangai1108_B.DataTypeConversion1[0] ==
          0.0) || (kaiguangai1108_B.DataTypeConversion2[0] == 0.0) ||
          (kaiguangai1108_B.DataTypeConversion4[8] == 0.0) ||
          (kaiguangai1108_B.DataTypeConversion5[8] == 0.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S26>:64' */
          kaiguangai1108_DW.is_zidong = kaiguangai11_IN_kaigaishijian_l;

          /* Entry 'kaigaishijian': '<S26>:62' */
          kaiguangai1108_B.kgt += 0.002;
        } else {
          sf_internal_predicateOutput = ((kaiguangai1108_B.DataTypeConversion1[0]
            == 1.0) && (kaiguangai1108_B.DataTypeConversion2[0] == 1.0) &&
            (kaiguangai1108_B.DataTypeConversion4[8] == 1.0) &&
            (kaiguangai1108_B.DataTypeConversion5[8] == 1.0));
          if (sf_internal_predicateOutput) {
            /* Transition: '<S26>:84' */
            kaiguangai1108_DW.is_zidong = kaiguangai1108_IN_t2guiling_o;

            /* Entry 't2guiling': '<S26>:83' */
            kaiguangai1108_DW.t2 = 0.0;
          }
        }
      }
    }
    break;

   case kaiguangai1108_IN_off_g:
    /* During 'off': '<S26>:165' */
    /* Transition: '<S26>:188' */
    kaiguangai1108_DW.is_zidong = kaiguangai1108_IN_on7_e;

    /* Entry 'on7': '<S26>:170' */
    kaiguangai1108_B.yikaicishu++;
    break;

   case kaiguangai1108_IN_on1_p:
    /* During 'on1': '<S26>:12' */
    /* Transition: '<S26>:49' */
    sf_internal_predicateOutput = ((kaiguangai1108_B.DataTypeConversion4[8] ==
      0.0) || (kaiguangai1108_B.DataTypeConversion5[8] == 0.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S26>:50' */
      kaiguangai1108_DW.is_zidong = kaiguangai1_IN_songkaishijian_d;

      /* Entry 'songkaishijian': '<S26>:33' */
      kaiguangai1108_B.skt += 0.002;
    } else {
      sf_internal_predicateOutput = ((kaiguangai1108_B.DataTypeConversion4[8] ==
        1.0) && (kaiguangai1108_B.DataTypeConversion5[8] == 1.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S26>:53' */
        kaiguangai1108_DW.is_zidong = kaiguangai1108_IN_tguiling_p;

        /* Entry 'tguiling': '<S26>:52' */
        kaiguangai1108_DW.t = 0.0;
      }
    }
    break;

   case kaiguangai1108_IN_on10_j:
    /* During 'on10': '<S26>:366' */
    /* Transition: '<S26>:367' */
    kaiguangai1108_DW.is_zidong = kaiguangai_IN_songkaishijian1_o;

    /* Entry 'songkaishijian1': '<S26>:355' */
    kaiguangai1108_B.skt += 0.002;
    break;

   case kaiguangai1108_IN_on11_l:
    /* During 'on11': '<S26>:376' */
    /* Transition: '<S26>:377' */
    kaiguangai1108_DW.is_zidong = kaiguangai_IN_songkaishijian2_l;

    /* Entry 'songkaishijian2': '<S26>:365' */
    kaiguangai1108_B.kgt += 0.002;
    break;

   case kaiguangai1108_IN_on12_j:
    /* During 'on12': '<S26>:378' */
    /* Transition: '<S26>:380' */
    kaiguangai1108_DW.is_zidong = kaiguangai_IN_songkaishijian3_f;

    /* Entry 'songkaishijian3': '<S26>:387' */
    kaiguangai1108_B.sdt += 0.002;
    break;

   case kaiguangai1108_IN_on13_f:
    /* During 'on13': '<S26>:381' */
    break;

   case kaiguangai1108_IN_on14_i:
    /* During 'on14': '<S26>:394' */
    /* Transition: '<S26>:388' */
    kaiguangai1108_DW.is_zidong = kaiguangai_IN_songkaishijian4_h;

    /* Entry 'songkaishijian4': '<S26>:392' */
    kaiguangai1108_B.jst += 0.002;
    break;

   case kaiguangai1108_IN_on15_k:
    /* During 'on15': '<S26>:398' */
    break;

   case kaiguangai1108_IN_on16_j:
    /* During 'on16': '<S26>:400' */
    /* Transition: '<S26>:405' */
    kaiguangai1108_DW.is_zidong = kaiguangai_IN_songkaishijian5_j;

    /* Entry 'songkaishijian5': '<S26>:404' */
    kaiguangai1108_B.ggt += 0.002;
    break;

   case kaiguangai1108_IN_on17_h:
    /* During 'on17': '<S26>:401' */
    break;

   case kaiguangai1108_IN_on18_b:
    /* During 'on18': '<S26>:413' */
    /* Transition: '<S26>:412' */
    kaiguangai1108_DW.is_zidong = kaiguangai_IN_songkaishijian6_e;

    /* Entry 'songkaishijian6': '<S26>:417' */
    kaiguangai1108_B.yjt += 0.002;
    break;

   case kaiguangai1108_IN_on19_l:
    /* During 'on19': '<S26>:415' */
    break;

   case kaiguangai1108_IN_on2_j:
    /* During 'on2': '<S26>:60' */
    /* Transition: '<S26>:87' */
    sf_internal_predicateOutput = ((kaiguangai1108_B.DataTypeConversion1[0] ==
      0.0) || (kaiguangai1108_B.DataTypeConversion2[0] == 0.0) ||
      (kaiguangai1108_B.DataTypeConversion4[8] == 0.0) ||
      (kaiguangai1108_B.DataTypeConversion5[8] == 0.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S26>:64' */
      kaiguangai1108_DW.is_zidong = kaiguangai11_IN_kaigaishijian_l;

      /* Entry 'kaigaishijian': '<S26>:62' */
      kaiguangai1108_B.kgt += 0.002;
    } else {
      sf_internal_predicateOutput = ((kaiguangai1108_B.DataTypeConversion1[0] ==
        1.0) && (kaiguangai1108_B.DataTypeConversion2[0] == 1.0) &&
        (kaiguangai1108_B.DataTypeConversion4[8] == 1.0) &&
        (kaiguangai1108_B.DataTypeConversion5[8] == 1.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S26>:84' */
        kaiguangai1108_DW.is_zidong = kaiguangai1108_IN_t2guiling_o;

        /* Entry 't2guiling': '<S26>:83' */
        kaiguangai1108_DW.t2 = 0.0;
      }
    }
    break;

   case kaiguangai1108_IN_on3_g:
    /* During 'on3': '<S26>:81' */
    /* Transition: '<S26>:103' */
    sf_internal_predicateOutput = ((kaiguangai1108_B.DataTypeConversion1[0] ==
      0.0) || (kaiguangai1108_B.DataTypeConversion2[0] == 0.0) ||
      (kaiguangai1108_B.DataTypeConversion4[0] == 0.0) ||
      (kaiguangai1108_B.DataTypeConversion5[0] == 0.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S26>:99' */
      kaiguangai1108_DW.is_zidong = kaiguangai1_IN_suodingshijian_g;

      /* Entry 'suodingshijian': '<S26>:97' */
      kaiguangai1108_B.sdt += 0.002;
    } else {
      sf_internal_predicateOutput = ((kaiguangai1108_B.DataTypeConversion1[0] ==
        1.0) && (kaiguangai1108_B.DataTypeConversion2[0] == 1.0) &&
        (kaiguangai1108_B.DataTypeConversion4[0] == 1.0) &&
        (kaiguangai1108_B.DataTypeConversion5[0] == 1.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S26>:101' */
        kaiguangai1108_DW.is_zidong = kaiguangai1108_IN_t4guiling_d;

        /* Entry 't4guiling': '<S26>:100' */
        kaiguangai1108_DW.t4 = 0.0;
      }
    }
    break;

   case kaiguangai1108_IN_on4_m:
    kaiguangai1108_on4_d();
    break;

   case kaiguangai1108_IN_on5_a:
    kaiguangai1108_on5_f();
    break;

   case kaiguangai1108_IN_on6_g:
    kaiguangai1108_on6_n();
    break;

   case kaiguangai1108_IN_on7_e:
    kaiguangai1108_on7_o();
    break;

   case kaiguangai1108_IN_on8_e:
    /* During 'on8': '<S26>:352' */
    break;

   case kaiguangai1108_IN_on9_i:
    /* During 'on9': '<S26>:358' */
    break;

   case kaiguangai1_IN_songkaishijian_d:
    kaiguangai1108_songkaishijian_l();
    break;

   case kaiguangai_IN_songkaishijian1_o:
    kaiguangai110_songkaishijian1_g();
    break;

   case kaiguangai_IN_songkaishijian2_l:
    kaiguangai110_songkaishijian2_p();
    break;

   case kaiguangai_IN_songkaishijian3_f:
    kaiguangai110_songkaishijian3_d();
    break;

   case kaiguangai_IN_songkaishijian4_h:
    kaiguangai110_songkaishijian4_k();
    break;

   case kaiguangai_IN_songkaishijian5_j:
    kaiguangai110_songkaishijian5_c();
    break;

   case kaiguangai_IN_songkaishijian6_e:
    kaiguangai110_songkaishijian6_d();
    break;

   case kaiguangai1108_IN_start_g:
    /* During 'start': '<S26>:197' */
    if (kaiguangai1108_B.LogicalOperator4_l) {
      /* Transition: '<S26>:198' */
      kaiguangai1108_DW.is_zidong = kaiguangai1108_IN_chushihua_i;
      kaigua_enter_atomic_chushihua_h();
    }
    break;

   case kaiguangai1108_IN_stop_g:
    /* During 'stop': '<S26>:193' */
    break;

   case kaiguangai1_IN_suodingshijian_g:
    kaiguangai1108_suodingshijian_g();
    break;

   case kaiguangai1108_IN_t10guiling_b:
    /* During 't10guiling': '<S26>:336' */
    /* Transition: '<S26>:340' */
    if (kaiguangai1108_DW.t10 < kaiguangai1108_B.u_m0) {
      /* Transition: '<S26>:341' */
      kaiguangai1108_DW.is_zidong = kaiguangai1_IN_yanchishijian6_f;
      kaiguangai1108_DW.temporalCounter_i1 = 0U;

      /* Entry 'yanchishijian6': '<S26>:337' */
      kaiguangai1108_DW.t10 += 0.002;
    } else {
      if (kaiguangai1108_DW.t10 >= kaiguangai1108_B.u_m0) {
        /* Transition: '<S26>:342' */
        kaiguangai1108_DW.is_zidong = kaiguangai1108_IN_off_g;
        kaiguangai11_enter_atomic_off_n();
      }
    }
    break;

   case kaiguangai1108_IN_t2guiling_o:
    kaiguangai1108_t2guiling_p();
    break;

   case kaiguangai1108_IN_t4guiling_d:
    kaiguangai1108_t4guiling_l();
    break;

   case kaiguangai1108_IN_t6guiling_m:
    kaiguangai1108_t6guiling_c();
    break;

   case kaiguangai1108_IN_t8guiling_j:
    kaiguangai1108_t8guiling_c();
    break;

   case kaiguangai1108_IN_tguiling_p:
    kaiguangai1108_tguiling_g();
    break;

   case kaiguangai110_IN_yajinshijian_o:
    kaiguangai1108_yajinshijian_h();
    break;

   case kaiguangai1_IN_yanchishijian1_f:
    kaiguangai1108_yanchishijian1_b();
    break;

   case kaiguangai1_IN_yanchishijian2_h:
    kaiguangai1108_yanchishijian2_c();
    break;

   case kaiguangai1_IN_yanchishijian3_f:
    kaiguangai1108_yanchishijian3_i();
    break;

   case kaiguangai1_IN_yanchishijian4_a:
    kaiguangai1108_yanchishijian4_f();
    break;

   case kaiguangai1_IN_yanchishijian5_i:
    kaiguangai1108_yanchishijian5_n();
    break;

   default:
    /* During 'yanchishijian6': '<S26>:337' */
    if (kaiguangai1108_DW.temporalCounter_i1 >= 1) {
      /* Transition: '<S26>:343' */
      if (kaiguangai1108_DW.t10 < kaiguangai1108_B.u_m0) {
        /* Transition: '<S26>:341' */
        kaiguangai1108_DW.is_zidong = kaiguangai1_IN_yanchishijian6_f;
        kaiguangai1108_DW.temporalCounter_i1 = 0U;

        /* Entry 'yanchishijian6': '<S26>:337' */
        kaiguangai1108_DW.t10 += 0.002;
      } else {
        if (kaiguangai1108_DW.t10 >= kaiguangai1108_B.u_m0) {
          /* Transition: '<S26>:342' */
          kaiguangai1108_DW.is_zidong = kaiguangai1108_IN_off_g;
          kaiguangai11_enter_atomic_off_n();
        }
      }
    }
    break;
  }
}

/* Model output function */
static void kaiguangai1108_output(void)
{
  boolean_T sf_internal_predicateOutput;
  int32_T i;

  /* Reset subsysRan breadcrumbs */
  srClearBC(kaiguangai1108_DW.shoudong_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(kaiguangai1108_DW.zidong_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(kaiguangai1108_DW.tiaoshimoshi_SubsysRanBC);

  /* Constant: '<Root>/tiaoshi' */
  kaiguangai1108_B.tiaoshi = kaiguangai1108_P.tiaoshi_Value;

  /* Memory: '<S35>/2' */
  kaiguangai1108_B.u = kaiguangai1108_DW.u_PreviousInput;

  /* Memory: '<S35>/3' */
  kaiguangai1108_B.u_l = kaiguangai1108_DW.u_PreviousInput_c;

  /* Memory: '<S35>/4' */
  kaiguangai1108_B.u_c = kaiguangai1108_DW.u_PreviousInput_j;

  /* Memory: '<S35>/5' */
  kaiguangai1108_B.u_d = kaiguangai1108_DW.u_PreviousInput_b;

  /* Memory: '<S35>/6' */
  kaiguangai1108_B.u_c4 = kaiguangai1108_DW.u_PreviousInput_jh;

  /* Logic: '<S35>/Logical Operator1' */
  kaiguangai1108_B.LogicalOperator1 = ((kaiguangai1108_B.u != 0.0) ||
    (kaiguangai1108_B.u_l != 0.0) || (kaiguangai1108_B.u_c != 0.0) ||
    (kaiguangai1108_B.u_d != 0.0) || (kaiguangai1108_B.u_c4 != 0.0));

  /* Switch: '<S35>/Switch1' incorporates:
   *  Constant: '<S35>/Constant12'
   *  Constant: '<S8>/songkai'
   */
  if (kaiguangai1108_B.LogicalOperator1) {
    kaiguangai1108_B.Switch1 = kaiguangai1108_P.Constant12_Value_b;
  } else {
    kaiguangai1108_B.Switch1 = kaiguangai1108_P.songkai_Value_d;
  }

  /* End of Switch: '<S35>/Switch1' */

  /* Memory: '<S35>/1' */
  kaiguangai1108_B.u_h = kaiguangai1108_DW.u_PreviousInput_g;

  /* Logic: '<S35>/Logical Operator2' */
  kaiguangai1108_B.LogicalOperator2 = ((kaiguangai1108_B.u_h != 0.0) ||
    (kaiguangai1108_B.u_l != 0.0) || (kaiguangai1108_B.u_c != 0.0) ||
    (kaiguangai1108_B.u_d != 0.0) || (kaiguangai1108_B.u_c4 != 0.0));

  /* Switch: '<S35>/Switch2' incorporates:
   *  Constant: '<S35>/Constant16'
   *  Constant: '<S8>/kaigai'
   */
  if (kaiguangai1108_B.LogicalOperator2) {
    kaiguangai1108_B.Switch2 = kaiguangai1108_P.Constant16_Value_o;
  } else {
    kaiguangai1108_B.Switch2 = kaiguangai1108_P.kaigai_Value_n;
  }

  /* End of Switch: '<S35>/Switch2' */

  /* Logic: '<S35>/Logical Operator3' */
  kaiguangai1108_B.LogicalOperator3 = ((kaiguangai1108_B.u_h != 0.0) ||
    (kaiguangai1108_B.u != 0.0) || (kaiguangai1108_B.u_c != 0.0) ||
    (kaiguangai1108_B.u_d != 0.0) || (kaiguangai1108_B.u_c4 != 0.0));

  /* Switch: '<S35>/Switch3' incorporates:
   *  Constant: '<S35>/Constant13'
   *  Constant: '<S8>/suoding'
   */
  if (kaiguangai1108_B.LogicalOperator3) {
    kaiguangai1108_B.Switch3 = kaiguangai1108_P.Constant13_Value_j;
  } else {
    kaiguangai1108_B.Switch3 = kaiguangai1108_P.suoding_Value_b;
  }

  /* End of Switch: '<S35>/Switch3' */

  /* Logic: '<S35>/Logical Operator4' */
  kaiguangai1108_B.LogicalOperator4 = ((kaiguangai1108_B.u_h != 0.0) ||
    (kaiguangai1108_B.u != 0.0) || (kaiguangai1108_B.u_l != 0.0) ||
    (kaiguangai1108_B.u_d != 0.0) || (kaiguangai1108_B.u_c4 != 0.0));

  /* Switch: '<S35>/Switch4' incorporates:
   *  Constant: '<S35>/Constant17'
   *  Constant: '<S8>/jiesuo'
   */
  if (kaiguangai1108_B.LogicalOperator4) {
    kaiguangai1108_B.Switch4 = kaiguangai1108_P.Constant17_Value_e;
  } else {
    kaiguangai1108_B.Switch4 = kaiguangai1108_P.jiesuo_Value_m;
  }

  /* End of Switch: '<S35>/Switch4' */

  /* Logic: '<S35>/Logical Operator5' */
  kaiguangai1108_B.LogicalOperator5 = ((kaiguangai1108_B.u_h != 0.0) ||
    (kaiguangai1108_B.u != 0.0) || (kaiguangai1108_B.u_l != 0.0) ||
    (kaiguangai1108_B.u_c != 0.0) || (kaiguangai1108_B.u_c4 != 0.0));

  /* Switch: '<S35>/Switch5' incorporates:
   *  Constant: '<S35>/Constant18'
   *  Constant: '<S8>/guangai'
   */
  if (kaiguangai1108_B.LogicalOperator5) {
    kaiguangai1108_B.Switch5 = kaiguangai1108_P.Constant18_Value_e;
  } else {
    kaiguangai1108_B.Switch5 = kaiguangai1108_P.guangai_Value_b;
  }

  /* End of Switch: '<S35>/Switch5' */

  /* Logic: '<S35>/Logical Operator6' */
  kaiguangai1108_B.LogicalOperator6 = ((kaiguangai1108_B.u_h != 0.0) ||
    (kaiguangai1108_B.u != 0.0) || (kaiguangai1108_B.u_l != 0.0) ||
    (kaiguangai1108_B.u_c != 0.0) || (kaiguangai1108_B.u_d != 0.0));

  /* Switch: '<S35>/Switch6' incorporates:
   *  Constant: '<S35>/Constant19'
   *  Constant: '<S8>/yajin'
   */
  if (kaiguangai1108_B.LogicalOperator6) {
    kaiguangai1108_B.Switch6 = kaiguangai1108_P.Constant19_Value_f;
  } else {
    kaiguangai1108_B.Switch6 = kaiguangai1108_P.yajin_Value_a;
  }

  /* End of Switch: '<S35>/Switch6' */

  /* Product: '<S8>/Product' incorporates:
   *  Constant: '<S8>/s1'
   */
  kaiguangai1108_B.Product[0] = kaiguangai1108_B.Switch1 *
    kaiguangai1108_P.s1_Value;
  kaiguangai1108_B.Product[1] = kaiguangai1108_B.Switch2 *
    kaiguangai1108_P.s1_Value;
  kaiguangai1108_B.Product[2] = kaiguangai1108_B.Switch3 *
    kaiguangai1108_P.s1_Value;
  kaiguangai1108_B.Product[3] = kaiguangai1108_B.Switch4 *
    kaiguangai1108_P.s1_Value;
  kaiguangai1108_B.Product[4] = kaiguangai1108_B.Switch5 *
    kaiguangai1108_P.s1_Value;
  kaiguangai1108_B.Product[5] = kaiguangai1108_B.Switch6 *
    kaiguangai1108_P.s1_Value;

  /* Product: '<S8>/Product1' incorporates:
   *  Constant: '<S8>/s2'
   */
  kaiguangai1108_B.Product1[0] = kaiguangai1108_B.Switch1 *
    kaiguangai1108_P.s2_Value;
  kaiguangai1108_B.Product1[1] = kaiguangai1108_B.Switch2 *
    kaiguangai1108_P.s2_Value;
  kaiguangai1108_B.Product1[2] = kaiguangai1108_B.Switch3 *
    kaiguangai1108_P.s2_Value;
  kaiguangai1108_B.Product1[3] = kaiguangai1108_B.Switch4 *
    kaiguangai1108_P.s2_Value;
  kaiguangai1108_B.Product1[4] = kaiguangai1108_B.Switch5 *
    kaiguangai1108_P.s2_Value;
  kaiguangai1108_B.Product1[5] = kaiguangai1108_B.Switch6 *
    kaiguangai1108_P.s2_Value;

  /* Product: '<S8>/Product2' incorporates:
   *  Constant: '<S8>/s3'
   */
  kaiguangai1108_B.Product2[0] = kaiguangai1108_B.Switch1 *
    kaiguangai1108_P.s3_Value;
  kaiguangai1108_B.Product2[1] = kaiguangai1108_B.Switch2 *
    kaiguangai1108_P.s3_Value;
  kaiguangai1108_B.Product2[2] = kaiguangai1108_B.Switch3 *
    kaiguangai1108_P.s3_Value;
  kaiguangai1108_B.Product2[3] = kaiguangai1108_B.Switch4 *
    kaiguangai1108_P.s3_Value;
  kaiguangai1108_B.Product2[4] = kaiguangai1108_B.Switch5 *
    kaiguangai1108_P.s3_Value;
  kaiguangai1108_B.Product2[5] = kaiguangai1108_B.Switch6 *
    kaiguangai1108_P.s3_Value;

  /* Product: '<S8>/Product3' incorporates:
   *  Constant: '<S8>/s4'
   */
  kaiguangai1108_B.Product3[0] = kaiguangai1108_B.Switch1 *
    kaiguangai1108_P.s4_Value;
  kaiguangai1108_B.Product3[1] = kaiguangai1108_B.Switch2 *
    kaiguangai1108_P.s4_Value;
  kaiguangai1108_B.Product3[2] = kaiguangai1108_B.Switch3 *
    kaiguangai1108_P.s4_Value;
  kaiguangai1108_B.Product3[3] = kaiguangai1108_B.Switch4 *
    kaiguangai1108_P.s4_Value;
  kaiguangai1108_B.Product3[4] = kaiguangai1108_B.Switch5 *
    kaiguangai1108_P.s4_Value;
  kaiguangai1108_B.Product3[5] = kaiguangai1108_B.Switch6 *
    kaiguangai1108_P.s4_Value;

  /* Product: '<S8>/Product4' incorporates:
   *  Constant: '<S8>/s5'
   */
  kaiguangai1108_B.Product4[0] = kaiguangai1108_B.Switch1 *
    kaiguangai1108_P.s5_Value;
  kaiguangai1108_B.Product4[1] = kaiguangai1108_B.Switch2 *
    kaiguangai1108_P.s5_Value;
  kaiguangai1108_B.Product4[2] = kaiguangai1108_B.Switch3 *
    kaiguangai1108_P.s5_Value;
  kaiguangai1108_B.Product4[3] = kaiguangai1108_B.Switch4 *
    kaiguangai1108_P.s5_Value;
  kaiguangai1108_B.Product4[4] = kaiguangai1108_B.Switch5 *
    kaiguangai1108_P.s5_Value;
  kaiguangai1108_B.Product4[5] = kaiguangai1108_B.Switch6 *
    kaiguangai1108_P.s5_Value;

  /* Product: '<S8>/Product5' incorporates:
   *  Constant: '<S8>/s6'
   */
  kaiguangai1108_B.Product5[0] = kaiguangai1108_B.Switch1 *
    kaiguangai1108_P.s6_Value;
  kaiguangai1108_B.Product5[1] = kaiguangai1108_B.Switch2 *
    kaiguangai1108_P.s6_Value;
  kaiguangai1108_B.Product5[2] = kaiguangai1108_B.Switch3 *
    kaiguangai1108_P.s6_Value;
  kaiguangai1108_B.Product5[3] = kaiguangai1108_B.Switch4 *
    kaiguangai1108_P.s6_Value;
  kaiguangai1108_B.Product5[4] = kaiguangai1108_B.Switch5 *
    kaiguangai1108_P.s6_Value;
  kaiguangai1108_B.Product5[5] = kaiguangai1108_B.Switch6 *
    kaiguangai1108_P.s6_Value;

  /* Product: '<S8>/Product6' incorporates:
   *  Constant: '<S8>/s7'
   */
  kaiguangai1108_B.Product6[0] = kaiguangai1108_B.Switch1 *
    kaiguangai1108_P.s7_Value;
  kaiguangai1108_B.Product6[1] = kaiguangai1108_B.Switch2 *
    kaiguangai1108_P.s7_Value;
  kaiguangai1108_B.Product6[2] = kaiguangai1108_B.Switch3 *
    kaiguangai1108_P.s7_Value;
  kaiguangai1108_B.Product6[3] = kaiguangai1108_B.Switch4 *
    kaiguangai1108_P.s7_Value;
  kaiguangai1108_B.Product6[4] = kaiguangai1108_B.Switch5 *
    kaiguangai1108_P.s7_Value;
  kaiguangai1108_B.Product6[5] = kaiguangai1108_B.Switch6 *
    kaiguangai1108_P.s7_Value;

  /* Product: '<S8>/Product7' incorporates:
   *  Constant: '<S8>/s8'
   */
  kaiguangai1108_B.Product7[0] = kaiguangai1108_B.Switch1 *
    kaiguangai1108_P.s8_Value;
  kaiguangai1108_B.Product7[1] = kaiguangai1108_B.Switch2 *
    kaiguangai1108_P.s8_Value;
  kaiguangai1108_B.Product7[2] = kaiguangai1108_B.Switch3 *
    kaiguangai1108_P.s8_Value;
  kaiguangai1108_B.Product7[3] = kaiguangai1108_B.Switch4 *
    kaiguangai1108_P.s8_Value;
  kaiguangai1108_B.Product7[4] = kaiguangai1108_B.Switch5 *
    kaiguangai1108_P.s8_Value;
  kaiguangai1108_B.Product7[5] = kaiguangai1108_B.Switch6 *
    kaiguangai1108_P.s8_Value;

  /* Constant: '<Root>/jieshu' */
  kaiguangai1108_B.jieshu = kaiguangai1108_P.jieshu_Value;

  /* Outputs for Enabled SubSystem: '<Root>/tiaoshimoshi' incorporates:
   *  EnablePort: '<S9>/Enable'
   */
  if (kaiguangai1108_B.tiaoshi > 0.0) {
    /* Chart: '<S9>/jinjichuli' */
    kaiguangai1108_jinjichuli(kaiguangai1108_B.tiaoshi,
      kaiguangai1108_B.Product[0], kaiguangai1108_B.Product[1],
      kaiguangai1108_B.Product[2], kaiguangai1108_B.Product[3],
      kaiguangai1108_B.Product[4], kaiguangai1108_B.Product[5],
      kaiguangai1108_B.jieshu, &kaiguangai1108_B.sf_jinjichuli,
      &kaiguangai1108_DW.sf_jinjichuli);

    /* Chart: '<S9>/jinjichuli1' */
    kaiguangai1108_jinjichuli(kaiguangai1108_B.tiaoshi,
      kaiguangai1108_B.Product1[0], kaiguangai1108_B.Product1[1],
      kaiguangai1108_B.Product1[2], kaiguangai1108_B.Product1[3],
      kaiguangai1108_B.Product1[4], kaiguangai1108_B.Product1[5],
      kaiguangai1108_B.jieshu, &kaiguangai1108_B.sf_jinjichuli1,
      &kaiguangai1108_DW.sf_jinjichuli1);

    /* Chart: '<S9>/jinjichuli2' */
    kaiguangai1108_jinjichuli(kaiguangai1108_B.tiaoshi,
      kaiguangai1108_B.Product2[0], kaiguangai1108_B.Product2[1],
      kaiguangai1108_B.Product2[2], kaiguangai1108_B.Product2[3],
      kaiguangai1108_B.Product2[4], kaiguangai1108_B.Product2[5],
      kaiguangai1108_B.jieshu, &kaiguangai1108_B.sf_jinjichuli2,
      &kaiguangai1108_DW.sf_jinjichuli2);

    /* Chart: '<S9>/jinjichuli3' */
    kaiguangai1108_jinjichuli(kaiguangai1108_B.tiaoshi,
      kaiguangai1108_B.Product3[0], kaiguangai1108_B.Product3[1],
      kaiguangai1108_B.Product3[2], kaiguangai1108_B.Product3[3],
      kaiguangai1108_B.Product3[4], kaiguangai1108_B.Product3[5],
      kaiguangai1108_B.jieshu, &kaiguangai1108_B.sf_jinjichuli3,
      &kaiguangai1108_DW.sf_jinjichuli3);

    /* Chart: '<S9>/jinjichuli4' */
    kaiguangai1108_jinjichuli(kaiguangai1108_B.tiaoshi,
      kaiguangai1108_B.Product4[0], kaiguangai1108_B.Product4[1],
      kaiguangai1108_B.Product4[2], kaiguangai1108_B.Product4[3],
      kaiguangai1108_B.Product4[4], kaiguangai1108_B.Product4[5],
      kaiguangai1108_B.jieshu, &kaiguangai1108_B.sf_jinjichuli4,
      &kaiguangai1108_DW.sf_jinjichuli4);

    /* Chart: '<S9>/jinjichuli5' */
    kaiguangai1108_jinjichuli(kaiguangai1108_B.tiaoshi,
      kaiguangai1108_B.Product5[0], kaiguangai1108_B.Product5[1],
      kaiguangai1108_B.Product5[2], kaiguangai1108_B.Product5[3],
      kaiguangai1108_B.Product5[4], kaiguangai1108_B.Product5[5],
      kaiguangai1108_B.jieshu, &kaiguangai1108_B.sf_jinjichuli5,
      &kaiguangai1108_DW.sf_jinjichuli5);

    /* Chart: '<S9>/jinjichuli6' */
    kaiguangai1108_jinjichuli(kaiguangai1108_B.tiaoshi,
      kaiguangai1108_B.Product6[0], kaiguangai1108_B.Product6[1],
      kaiguangai1108_B.Product6[2], kaiguangai1108_B.Product6[3],
      kaiguangai1108_B.Product6[4], kaiguangai1108_B.Product6[5],
      kaiguangai1108_B.jieshu, &kaiguangai1108_B.sf_jinjichuli6,
      &kaiguangai1108_DW.sf_jinjichuli6);

    /* Chart: '<S9>/jinjichuli7' */
    kaiguangai1108_jinjichuli(kaiguangai1108_B.tiaoshi,
      kaiguangai1108_B.Product7[0], kaiguangai1108_B.Product7[1],
      kaiguangai1108_B.Product7[2], kaiguangai1108_B.Product7[3],
      kaiguangai1108_B.Product7[4], kaiguangai1108_B.Product7[5],
      kaiguangai1108_B.jieshu, &kaiguangai1108_B.sf_jinjichuli7,
      &kaiguangai1108_DW.sf_jinjichuli7);

    /* Logic: '<S9>/Logical Operator' */
    kaiguangai1108_B.LogicalOperator_e = ((kaiguangai1108_B.sf_jinjichuli.skhx
      != 0.0) || (kaiguangai1108_B.sf_jinjichuli1.skhx != 0.0) ||
      (kaiguangai1108_B.sf_jinjichuli2.skhx != 0.0) ||
      (kaiguangai1108_B.sf_jinjichuli3.skhx != 0.0) ||
      (kaiguangai1108_B.sf_jinjichuli4.skhx != 0.0) ||
      (kaiguangai1108_B.sf_jinjichuli5.skhx != 0.0) ||
      (kaiguangai1108_B.sf_jinjichuli6.skhx != 0.0) ||
      (kaiguangai1108_B.sf_jinjichuli7.skhx != 0.0));

    /* Logic: '<S9>/Logical Operator1' */
    kaiguangai1108_B.LogicalOperator1_kr = ((kaiguangai1108_B.sf_jinjichuli.gghx
      != 0.0) || (kaiguangai1108_B.sf_jinjichuli1.gghx != 0.0) ||
      (kaiguangai1108_B.sf_jinjichuli2.gghx != 0.0) ||
      (kaiguangai1108_B.sf_jinjichuli3.gghx != 0.0) ||
      (kaiguangai1108_B.sf_jinjichuli4.gghx != 0.0) ||
      (kaiguangai1108_B.sf_jinjichuli5.gghx != 0.0) ||
      (kaiguangai1108_B.sf_jinjichuli6.gghx != 0.0) ||
      (kaiguangai1108_B.sf_jinjichuli7.gghx != 0.0));

    /* Logic: '<S9>/Logical Operator4' */
    kaiguangai1108_B.LogicalOperator4_d = ((kaiguangai1108_B.sf_jinjichuli.kghx
      != 0.0) || (kaiguangai1108_B.sf_jinjichuli1.kghx != 0.0) ||
      (kaiguangai1108_B.sf_jinjichuli2.kghx != 0.0) ||
      (kaiguangai1108_B.sf_jinjichuli3.kghx != 0.0) ||
      (kaiguangai1108_B.sf_jinjichuli4.kghx != 0.0) ||
      (kaiguangai1108_B.sf_jinjichuli5.kghx != 0.0) ||
      (kaiguangai1108_B.sf_jinjichuli6.kghx != 0.0) ||
      (kaiguangai1108_B.sf_jinjichuli7.kghx != 0.0));

    /* Logic: '<S9>/Logical Operator5' */
    kaiguangai1108_B.LogicalOperator5_c = ((kaiguangai1108_B.sf_jinjichuli1.yjhx
      != 0.0) || (kaiguangai1108_B.sf_jinjichuli2.yjhx != 0.0) ||
      (kaiguangai1108_B.sf_jinjichuli3.yjhx != 0.0) ||
      (kaiguangai1108_B.sf_jinjichuli4.yjhx != 0.0) ||
      (kaiguangai1108_B.sf_jinjichuli5.yjhx != 0.0) ||
      (kaiguangai1108_B.sf_jinjichuli6.yjhx != 0.0) ||
      (kaiguangai1108_B.sf_jinjichuli7.yjhx != 0.0) ||
      (kaiguangai1108_B.sf_jinjichuli.yjhx != 0.0));
    srUpdateBC(kaiguangai1108_DW.tiaoshimoshi_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<Root>/tiaoshimoshi' */

  /* Memory: '<Root>/memory' */
  kaiguangai1108_B.memory[0] = kaiguangai1108_DW.memory_PreviousInput[0];
  kaiguangai1108_B.memory[1] = kaiguangai1108_DW.memory_PreviousInput[1];
  kaiguangai1108_B.memory[2] = kaiguangai1108_DW.memory_PreviousInput[2];
  kaiguangai1108_B.memory[3] = kaiguangai1108_DW.memory_PreviousInput[3];

  /* Switch: '<Root>/Switch3' */
  if (kaiguangai1108_B.tiaoshi > kaiguangai1108_P.Switch3_Threshold) {
    kaiguangai1108_B.Switch3_g[0] = kaiguangai1108_B.LogicalOperator_e;
    kaiguangai1108_B.Switch3_g[1] = kaiguangai1108_B.LogicalOperator4_d;
    kaiguangai1108_B.Switch3_g[2] = kaiguangai1108_B.LogicalOperator5_c;
    kaiguangai1108_B.Switch3_g[3] = kaiguangai1108_B.LogicalOperator1_kr;
  } else {
    kaiguangai1108_B.Switch3_g[0] = kaiguangai1108_B.memory[0];
    kaiguangai1108_B.Switch3_g[1] = kaiguangai1108_B.memory[1];
    kaiguangai1108_B.Switch3_g[2] = kaiguangai1108_B.memory[2];
    kaiguangai1108_B.Switch3_g[3] = kaiguangai1108_B.memory[3];
  }

  /* End of Switch: '<Root>/Switch3' */

  /* DataTypeConversion: '<S1>/Data Type Conversion6' */
  kaiguangai1108_B.DataTypeConversion6[0] = kaiguangai1108_B.Switch3_g[0];
  kaiguangai1108_B.DataTypeConversion6[1] = kaiguangai1108_B.Switch3_g[1];
  kaiguangai1108_B.DataTypeConversion6[2] = kaiguangai1108_B.Switch3_g[2];
  kaiguangai1108_B.DataTypeConversion6[3] = kaiguangai1108_B.Switch3_g[3];

  /* Constant: '<S1>/Constant' */
  kaiguangai1108_B.Constant = kaiguangai1108_P.Constant_Value;

  /* Level2 S-Function Block: '<S1>/PCI1' (pci1756IO) */
  {
    SimStruct *rts = kaiguangai1108_M->childSfunctions[0];
    sfcnOutputs(rts, 0);
  }

  /* Memory: '<Root>/memory1' */
  memcpy(&kaiguangai1108_B.memory1[0], &kaiguangai1108_DW.memory1_PreviousInput
         [0], sizeof(real_T) << 5U);

  /* Level2 S-Function Block: '<S1>/PCI2' (pci1756IO) */
  {
    SimStruct *rts = kaiguangai1108_M->childSfunctions[1];
    sfcnOutputs(rts, 0);
  }

  /* Constant: '<S1>/Constant1' */
  kaiguangai1108_B.Constant1 = kaiguangai1108_P.Constant1_Value;

  /* Level2 S-Function Block: '<S1>/PCI3' (pci1756IO) */
  {
    SimStruct *rts = kaiguangai1108_M->childSfunctions[2];
    sfcnOutputs(rts, 0);
  }

  /* DataTypeConversion: '<S1>/Data Type Conversion1' */
  memcpy(&kaiguangai1108_B.DataTypeConversion1[0], &kaiguangai1108_B.PCI1_o1[0],
         sizeof(real_T) << 4U);

  /* DataTypeConversion: '<S1>/Data Type Conversion2' */
  memcpy(&kaiguangai1108_B.DataTypeConversion2[0], &kaiguangai1108_B.PCI1_o2[0],
         sizeof(real_T) << 4U);

  /* DataTypeConversion: '<S1>/Data Type Conversion3' */
  memcpy(&kaiguangai1108_B.DataTypeConversion3[0], &kaiguangai1108_B.PCI2_o1[0],
         sizeof(real_T) << 4U);

  /* DataTypeConversion: '<S1>/Data Type Conversion4' */
  memcpy(&kaiguangai1108_B.DataTypeConversion4[0], &kaiguangai1108_B.PCI3_o1[0],
         sizeof(real_T) << 4U);

  /* DataTypeConversion: '<S1>/Data Type Conversion5' */
  memcpy(&kaiguangai1108_B.DataTypeConversion5[0], &kaiguangai1108_B.PCI3_o2[0],
         sizeof(real_T) << 4U);

  /* Constant: '<Root>/start' */
  kaiguangai1108_B.start = kaiguangai1108_P.start_Value;

  /* Constant: '<S11>/t1' */
  kaiguangai1108_B.u_g = kaiguangai1108_P.t1_Value;

  /* Constant: '<S11>/t3' */
  kaiguangai1108_B.u_m = kaiguangai1108_P.t3_Value;

  /* Constant: '<S11>/t5' */
  kaiguangai1108_B.u_m5 = kaiguangai1108_P.t5_Value;

  /* Constant: '<S11>/t7' */
  kaiguangai1108_B.u_gd = kaiguangai1108_P.t7_Value;

  /* Constant: '<S11>/t9' */
  kaiguangai1108_B.u_gh = kaiguangai1108_P.t9_Value;

  /* Constant: '<S11>/t11' */
  kaiguangai1108_B.u_m0 = kaiguangai1108_P.t11_Value;

  /* Constant: '<Root>/zidong_shedingcishu' */
  kaiguangai1108_B.zidong_shedingcishu =
    kaiguangai1108_P.zidong_shedingcishu_Value;

  /* Logic: '<S6>/Logical Operator3' */
  kaiguangai1108_B.LogicalOperator3_e = !(kaiguangai1108_B.tiaoshi != 0.0);

  /* Logic: '<S6>/Logical Operator' incorporates:
   *  Constant: '<Root>/qiehuan'
   */
  kaiguangai1108_B.LogicalOperator = !(kaiguangai1108_P.qiehuan_Value != 0.0);

  /* Logic: '<S6>/Logical Operator1' */
  kaiguangai1108_B.LogicalOperator1_h = (kaiguangai1108_B.LogicalOperator3_e &&
    kaiguangai1108_B.LogicalOperator);

  /* Outputs for Enabled SubSystem: '<S6>/zidong' incorporates:
   *  EnablePort: '<S17>/Enable'
   */
  if (kaiguangai1108_B.LogicalOperator1_h) {
    /* Logic: '<S17>/Logical Operator4' incorporates:
     *  Constant: '<S15>/jinggai1'
     */
    kaiguangai1108_B.LogicalOperator4_l = ((kaiguangai1108_P.jinggai1_Value !=
      0.0) && (kaiguangai1108_B.start != 0.0));

    /* Chart: '<S17>/1#' */
    /* Gateway: Subsystem1/zidong/1# */
    kaiguangai1108_DW.sfEvent = kaiguangai1108_CALL_EVENT_a;
    if (kaiguangai1108_DW.temporalCounter_i1 < 3U) {
      kaiguangai1108_DW.temporalCounter_i1++;
    }

    /* During: Subsystem1/zidong/1# */
    if (kaiguangai1108_DW.is_active_c1_kaiguangai1108 == 0U) {
      /* Entry: Subsystem1/zidong/1# */
      kaiguangai1108_DW.is_active_c1_kaiguangai1108 = 1U;

      /* Entry Internal: Subsystem1/zidong/1# */
      /* Transition: '<S26>:375' */
      kaiguangai1108_DW.is_c1_kaiguangai1108 = kaiguangai1108_IN_zidong_g;

      /* Entry Internal 'zidong': '<S26>:374' */
      /* Transition: '<S26>:199' */
      kaiguangai1108_DW.is_zidong = kaiguangai1108_IN_start_g;

      /* Entry 'start': '<S26>:197' */
      kaiguangai1108_B.yikaicishu = 0.0;
    } else {
      kaiguangai1108_zidong_n();
    }

    /* End of Chart: '<S17>/1#' */

    /* Logic: '<S17>/Logical Operator5' incorporates:
     *  Constant: '<S15>/jinggai2'
     */
    kaiguangai1108_B.LogicalOperator5_m = ((kaiguangai1108_P.jinggai2_Value !=
      0.0) && (kaiguangai1108_B.start != 0.0));

    /* Chart: '<S17>/1#1' */
    kaiguangai1108_u1(kaiguangai1108_B.LogicalOperator5_m,
                      kaiguangai1108_B.DataTypeConversion1[1],
                      kaiguangai1108_B.DataTypeConversion2[1],
                      kaiguangai1108_B.DataTypeConversion1[9],
                      kaiguangai1108_B.DataTypeConversion2[9],
                      kaiguangai1108_B.DataTypeConversion4[1],
                      kaiguangai1108_B.DataTypeConversion4[9],
                      kaiguangai1108_B.DataTypeConversion5[1],
                      kaiguangai1108_B.DataTypeConversion5[9],
                      kaiguangai1108_B.u_g, kaiguangai1108_B.u_m,
                      kaiguangai1108_B.u_m5, kaiguangai1108_B.u_gd,
                      kaiguangai1108_B.u_gh, kaiguangai1108_B.u_m0,
                      kaiguangai1108_B.zidong_shedingcishu,
                      kaiguangai1108_B.jieshu, &kaiguangai1108_B.sf_11,
                      &kaiguangai1108_DW.sf_11);

    /* Logic: '<S17>/Logical Operator6' incorporates:
     *  Constant: '<S15>/jinggai3'
     */
    kaiguangai1108_B.LogicalOperator6_j = ((kaiguangai1108_P.jinggai3_Value !=
      0.0) && (kaiguangai1108_B.start != 0.0));

    /* Chart: '<S17>/1#2' */
    kaiguangai1108_u1(kaiguangai1108_B.LogicalOperator6_j,
                      kaiguangai1108_B.DataTypeConversion1[2],
                      kaiguangai1108_B.DataTypeConversion2[2],
                      kaiguangai1108_B.DataTypeConversion1[10],
                      kaiguangai1108_B.DataTypeConversion2[10],
                      kaiguangai1108_B.DataTypeConversion4[2],
                      kaiguangai1108_B.DataTypeConversion4[10],
                      kaiguangai1108_B.DataTypeConversion5[2],
                      kaiguangai1108_B.DataTypeConversion5[10],
                      kaiguangai1108_B.u_g, kaiguangai1108_B.u_m,
                      kaiguangai1108_B.u_m5, kaiguangai1108_B.u_gd,
                      kaiguangai1108_B.u_gh, kaiguangai1108_B.u_m0,
                      kaiguangai1108_B.zidong_shedingcishu,
                      kaiguangai1108_B.jieshu, &kaiguangai1108_B.sf_12,
                      &kaiguangai1108_DW.sf_12);

    /* Logic: '<S17>/Logical Operator7' incorporates:
     *  Constant: '<S15>/jinggai4'
     */
    kaiguangai1108_B.LogicalOperator7 = ((kaiguangai1108_P.jinggai4_Value != 0.0)
      && (kaiguangai1108_B.start != 0.0));

    /* Chart: '<S17>/1#3' */
    kaiguangai1108_u1(kaiguangai1108_B.LogicalOperator7,
                      kaiguangai1108_B.DataTypeConversion1[3],
                      kaiguangai1108_B.DataTypeConversion2[3],
                      kaiguangai1108_B.DataTypeConversion1[11],
                      kaiguangai1108_B.DataTypeConversion2[11],
                      kaiguangai1108_B.DataTypeConversion4[3],
                      kaiguangai1108_B.DataTypeConversion4[11],
                      kaiguangai1108_B.DataTypeConversion5[3],
                      kaiguangai1108_B.DataTypeConversion5[11],
                      kaiguangai1108_B.u_g, kaiguangai1108_B.u_m,
                      kaiguangai1108_B.u_m5, kaiguangai1108_B.u_gd,
                      kaiguangai1108_B.u_gh, kaiguangai1108_B.u_m0,
                      kaiguangai1108_B.zidong_shedingcishu,
                      kaiguangai1108_B.jieshu, &kaiguangai1108_B.sf_13,
                      &kaiguangai1108_DW.sf_13);

    /* Logic: '<S17>/Logical Operator8' incorporates:
     *  Constant: '<S15>/jinggai5'
     */
    kaiguangai1108_B.LogicalOperator8 = ((kaiguangai1108_P.jinggai5_Value != 0.0)
      && (kaiguangai1108_B.start != 0.0));

    /* Chart: '<S17>/1#4' */
    kaiguangai1108_u1(kaiguangai1108_B.LogicalOperator8,
                      kaiguangai1108_B.DataTypeConversion1[4],
                      kaiguangai1108_B.DataTypeConversion2[4],
                      kaiguangai1108_B.DataTypeConversion1[12],
                      kaiguangai1108_B.DataTypeConversion2[12],
                      kaiguangai1108_B.DataTypeConversion4[4],
                      kaiguangai1108_B.DataTypeConversion4[12],
                      kaiguangai1108_B.DataTypeConversion5[4],
                      kaiguangai1108_B.DataTypeConversion5[12],
                      kaiguangai1108_B.u_g, kaiguangai1108_B.u_m,
                      kaiguangai1108_B.u_m5, kaiguangai1108_B.u_gd,
                      kaiguangai1108_B.u_gh, kaiguangai1108_B.u_m0,
                      kaiguangai1108_B.zidong_shedingcishu,
                      kaiguangai1108_B.jieshu, &kaiguangai1108_B.sf_14,
                      &kaiguangai1108_DW.sf_14);

    /* Logic: '<S17>/Logical Operator9' incorporates:
     *  Constant: '<S15>/jinggai6'
     */
    kaiguangai1108_B.LogicalOperator9 = ((kaiguangai1108_P.jinggai6_Value != 0.0)
      && (kaiguangai1108_B.start != 0.0));

    /* Chart: '<S17>/1#5' */
    kaiguangai1108_u1(kaiguangai1108_B.LogicalOperator9,
                      kaiguangai1108_B.DataTypeConversion1[5],
                      kaiguangai1108_B.DataTypeConversion2[5],
                      kaiguangai1108_B.DataTypeConversion1[13],
                      kaiguangai1108_B.DataTypeConversion2[13],
                      kaiguangai1108_B.DataTypeConversion4[5],
                      kaiguangai1108_B.DataTypeConversion4[13],
                      kaiguangai1108_B.DataTypeConversion5[5],
                      kaiguangai1108_B.DataTypeConversion5[13],
                      kaiguangai1108_B.u_g, kaiguangai1108_B.u_m,
                      kaiguangai1108_B.u_m5, kaiguangai1108_B.u_gd,
                      kaiguangai1108_B.u_gh, kaiguangai1108_B.u_m0,
                      kaiguangai1108_B.zidong_shedingcishu,
                      kaiguangai1108_B.jieshu, &kaiguangai1108_B.sf_15,
                      &kaiguangai1108_DW.sf_15);

    /* Logic: '<S17>/Logical Operator10' incorporates:
     *  Constant: '<S15>/jinggai7'
     */
    kaiguangai1108_B.LogicalOperator10 = ((kaiguangai1108_P.jinggai7_Value !=
      0.0) && (kaiguangai1108_B.start != 0.0));

    /* Chart: '<S17>/1#6' */
    kaiguangai1108_u1(kaiguangai1108_B.LogicalOperator10,
                      kaiguangai1108_B.DataTypeConversion1[6],
                      kaiguangai1108_B.DataTypeConversion2[6],
                      kaiguangai1108_B.DataTypeConversion1[14],
                      kaiguangai1108_B.DataTypeConversion2[14],
                      kaiguangai1108_B.DataTypeConversion4[6],
                      kaiguangai1108_B.DataTypeConversion4[14],
                      kaiguangai1108_B.DataTypeConversion5[6],
                      kaiguangai1108_B.DataTypeConversion5[14],
                      kaiguangai1108_B.u_g, kaiguangai1108_B.u_m,
                      kaiguangai1108_B.u_m5, kaiguangai1108_B.u_gd,
                      kaiguangai1108_B.u_gh, kaiguangai1108_B.u_m0,
                      kaiguangai1108_B.zidong_shedingcishu,
                      kaiguangai1108_B.jieshu, &kaiguangai1108_B.sf_16,
                      &kaiguangai1108_DW.sf_16);

    /* Logic: '<S17>/Logical Operator11' incorporates:
     *  Constant: '<S15>/jinggai8'
     */
    kaiguangai1108_B.LogicalOperator11 = ((kaiguangai1108_P.jinggai8_Value !=
      0.0) && (kaiguangai1108_B.start != 0.0));

    /* Chart: '<S17>/1#7' */
    kaiguangai1108_u1(kaiguangai1108_B.LogicalOperator11,
                      kaiguangai1108_B.DataTypeConversion1[7],
                      kaiguangai1108_B.DataTypeConversion2[7],
                      kaiguangai1108_B.DataTypeConversion1[15],
                      kaiguangai1108_B.DataTypeConversion2[15],
                      kaiguangai1108_B.DataTypeConversion4[7],
                      kaiguangai1108_B.DataTypeConversion4[15],
                      kaiguangai1108_B.DataTypeConversion5[7],
                      kaiguangai1108_B.DataTypeConversion5[15],
                      kaiguangai1108_B.u_g, kaiguangai1108_B.u_m,
                      kaiguangai1108_B.u_m5, kaiguangai1108_B.u_gd,
                      kaiguangai1108_B.u_gh, kaiguangai1108_B.u_m0,
                      kaiguangai1108_B.zidong_shedingcishu,
                      kaiguangai1108_B.jieshu, &kaiguangai1108_B.sf_17,
                      &kaiguangai1108_DW.sf_17);

    /* DataTypeConversion: '<S17>/Data Type Conversion1' */
    kaiguangai1108_B.DataTypeConversion1_b[0] = kaiguangai1108_B.skyichang;
    kaiguangai1108_B.DataTypeConversion1_b[1] = kaiguangai1108_B.kgyichang;
    kaiguangai1108_B.DataTypeConversion1_b[2] = kaiguangai1108_B.sdyichang;
    kaiguangai1108_B.DataTypeConversion1_b[3] = kaiguangai1108_B.jsyichang;
    kaiguangai1108_B.DataTypeConversion1_b[4] = kaiguangai1108_B.ggyichang;
    kaiguangai1108_B.DataTypeConversion1_b[5] = kaiguangai1108_B.yjyichang;

    /* DataTypeConversion: '<S17>/Data Type Conversion2' */
    kaiguangai1108_B.DataTypeConversion2_j[0] = kaiguangai1108_B.sf_11.skyichang;
    kaiguangai1108_B.DataTypeConversion2_j[1] = kaiguangai1108_B.sf_11.kgyichang;
    kaiguangai1108_B.DataTypeConversion2_j[2] = kaiguangai1108_B.sf_11.sdyichang;
    kaiguangai1108_B.DataTypeConversion2_j[3] = kaiguangai1108_B.sf_11.jsyichang;
    kaiguangai1108_B.DataTypeConversion2_j[4] = kaiguangai1108_B.sf_11.ggyichang;
    kaiguangai1108_B.DataTypeConversion2_j[5] = kaiguangai1108_B.sf_11.yjyichang;

    /* DataTypeConversion: '<S17>/Data Type Conversion3' */
    kaiguangai1108_B.DataTypeConversion3_l[0] = kaiguangai1108_B.sf_12.skyichang;
    kaiguangai1108_B.DataTypeConversion3_l[1] = kaiguangai1108_B.sf_12.kgyichang;
    kaiguangai1108_B.DataTypeConversion3_l[2] = kaiguangai1108_B.sf_12.sdyichang;
    kaiguangai1108_B.DataTypeConversion3_l[3] = kaiguangai1108_B.sf_12.jsyichang;
    kaiguangai1108_B.DataTypeConversion3_l[4] = kaiguangai1108_B.sf_12.ggyichang;
    kaiguangai1108_B.DataTypeConversion3_l[5] = kaiguangai1108_B.sf_12.yjyichang;

    /* DataTypeConversion: '<S17>/Data Type Conversion4' */
    kaiguangai1108_B.DataTypeConversion4_m[0] = kaiguangai1108_B.sf_14.skyichang;
    kaiguangai1108_B.DataTypeConversion4_m[1] = kaiguangai1108_B.sf_14.kgyichang;
    kaiguangai1108_B.DataTypeConversion4_m[2] = kaiguangai1108_B.sf_14.sdyichang;
    kaiguangai1108_B.DataTypeConversion4_m[3] = kaiguangai1108_B.sf_14.jsyichang;
    kaiguangai1108_B.DataTypeConversion4_m[4] = kaiguangai1108_B.sf_14.ggyichang;
    kaiguangai1108_B.DataTypeConversion4_m[5] = kaiguangai1108_B.sf_14.yjyichang;

    /* DataTypeConversion: '<S17>/Data Type Conversion5' */
    kaiguangai1108_B.DataTypeConversion5_n[0] = kaiguangai1108_B.sf_15.skyichang;
    kaiguangai1108_B.DataTypeConversion5_n[1] = kaiguangai1108_B.sf_15.kgyichang;
    kaiguangai1108_B.DataTypeConversion5_n[2] = kaiguangai1108_B.sf_15.sdyichang;
    kaiguangai1108_B.DataTypeConversion5_n[3] = kaiguangai1108_B.sf_15.jsyichang;
    kaiguangai1108_B.DataTypeConversion5_n[4] = kaiguangai1108_B.sf_15.ggyichang;
    kaiguangai1108_B.DataTypeConversion5_n[5] = kaiguangai1108_B.sf_15.yjyichang;

    /* DataTypeConversion: '<S17>/Data Type Conversion6' */
    kaiguangai1108_B.DataTypeConversion6_d[0] = kaiguangai1108_B.sf_16.skyichang;
    kaiguangai1108_B.DataTypeConversion6_d[1] = kaiguangai1108_B.sf_16.kgyichang;
    kaiguangai1108_B.DataTypeConversion6_d[2] = kaiguangai1108_B.sf_16.sdyichang;
    kaiguangai1108_B.DataTypeConversion6_d[3] = kaiguangai1108_B.sf_16.jsyichang;
    kaiguangai1108_B.DataTypeConversion6_d[4] = kaiguangai1108_B.sf_16.ggyichang;
    kaiguangai1108_B.DataTypeConversion6_d[5] = kaiguangai1108_B.sf_16.yjyichang;

    /* DataTypeConversion: '<S17>/Data Type Conversion7' */
    kaiguangai1108_B.DataTypeConversion7[0] = kaiguangai1108_B.sf_17.skyichang;
    kaiguangai1108_B.DataTypeConversion7[1] = kaiguangai1108_B.sf_17.kgyichang;
    kaiguangai1108_B.DataTypeConversion7[2] = kaiguangai1108_B.sf_17.sdyichang;
    kaiguangai1108_B.DataTypeConversion7[3] = kaiguangai1108_B.sf_17.jsyichang;
    kaiguangai1108_B.DataTypeConversion7[4] = kaiguangai1108_B.sf_17.ggyichang;
    kaiguangai1108_B.DataTypeConversion7[5] = kaiguangai1108_B.sf_17.yjyichang;

    /* DataTypeConversion: '<S17>/Data Type Conversion8' */
    kaiguangai1108_B.DataTypeConversion8[0] = kaiguangai1108_B.sf_13.skyichang;
    kaiguangai1108_B.DataTypeConversion8[1] = kaiguangai1108_B.sf_13.kgyichang;
    kaiguangai1108_B.DataTypeConversion8[2] = kaiguangai1108_B.sf_13.sdyichang;
    kaiguangai1108_B.DataTypeConversion8[3] = kaiguangai1108_B.sf_13.jsyichang;
    kaiguangai1108_B.DataTypeConversion8[4] = kaiguangai1108_B.sf_13.ggyichang;
    kaiguangai1108_B.DataTypeConversion8[5] = kaiguangai1108_B.sf_13.yjyichang;

    /* Logic: '<S17>/Logical Operator' */
    kaiguangai1108_B.LogicalOperator_c = ((kaiguangai1108_B.skhx != 0.0) ||
      (kaiguangai1108_B.sf_11.skhx != 0.0) || (kaiguangai1108_B.sf_12.skhx !=
      0.0) || (kaiguangai1108_B.sf_13.skhx != 0.0) ||
      (kaiguangai1108_B.sf_14.skhx != 0.0) || (kaiguangai1108_B.sf_15.skhx !=
      0.0) || (kaiguangai1108_B.sf_16.skhx != 0.0) ||
      (kaiguangai1108_B.sf_17.skhx != 0.0));

    /* Logic: '<S17>/Logical Operator1' */
    kaiguangai1108_B.LogicalOperator1_i = ((kaiguangai1108_B.kghx != 0.0) ||
      (kaiguangai1108_B.sf_11.kghx != 0.0) || (kaiguangai1108_B.sf_12.kghx !=
      0.0) || (kaiguangai1108_B.sf_13.kghx != 0.0) ||
      (kaiguangai1108_B.sf_14.kghx != 0.0) || (kaiguangai1108_B.sf_15.kghx !=
      0.0) || (kaiguangai1108_B.sf_16.kghx != 0.0) ||
      (kaiguangai1108_B.sf_17.kghx != 0.0));

    /* Logic: '<S17>/Logical Operator12' */
    kaiguangai1108_B.LogicalOperator12 =
      ((kaiguangai1108_B.DataTypeConversion1_b[0] != 0.0) ||
       (kaiguangai1108_B.DataTypeConversion2_j[0] != 0.0) ||
       (kaiguangai1108_B.DataTypeConversion3_l[0] != 0.0) ||
       (kaiguangai1108_B.DataTypeConversion8[0] != 0.0) ||
       (kaiguangai1108_B.DataTypeConversion4_m[0] != 0.0) ||
       (kaiguangai1108_B.DataTypeConversion5_n[0] != 0.0) ||
       (kaiguangai1108_B.DataTypeConversion6_d[0] != 0.0) ||
       (kaiguangai1108_B.DataTypeConversion7[0] != 0.0));

    /* Logic: '<S17>/Logical Operator13' */
    kaiguangai1108_B.LogicalOperator13 =
      ((kaiguangai1108_B.DataTypeConversion1_b[1] != 0.0) ||
       (kaiguangai1108_B.DataTypeConversion2_j[1] != 0.0) ||
       (kaiguangai1108_B.DataTypeConversion3_l[1] != 0.0) ||
       (kaiguangai1108_B.DataTypeConversion8[1] != 0.0) ||
       (kaiguangai1108_B.DataTypeConversion4_m[1] != 0.0) ||
       (kaiguangai1108_B.DataTypeConversion5_n[1] != 0.0) ||
       (kaiguangai1108_B.DataTypeConversion6_d[1] != 0.0) ||
       (kaiguangai1108_B.DataTypeConversion7[1] != 0.0));

    /* Logic: '<S17>/Logical Operator14' */
    kaiguangai1108_B.LogicalOperator14 =
      ((kaiguangai1108_B.DataTypeConversion1_b[2] != 0.0) ||
       (kaiguangai1108_B.DataTypeConversion2_j[2] != 0.0) ||
       (kaiguangai1108_B.DataTypeConversion3_l[2] != 0.0) ||
       (kaiguangai1108_B.DataTypeConversion8[2] != 0.0) ||
       (kaiguangai1108_B.DataTypeConversion4_m[2] != 0.0) ||
       (kaiguangai1108_B.DataTypeConversion5_n[2] != 0.0) ||
       (kaiguangai1108_B.DataTypeConversion6_d[2] != 0.0) ||
       (kaiguangai1108_B.DataTypeConversion7[2] != 0.0));

    /* Logic: '<S17>/Logical Operator15' */
    kaiguangai1108_B.LogicalOperator15 =
      ((kaiguangai1108_B.DataTypeConversion1_b[3] != 0.0) ||
       (kaiguangai1108_B.DataTypeConversion2_j[3] != 0.0) ||
       (kaiguangai1108_B.DataTypeConversion3_l[3] != 0.0) ||
       (kaiguangai1108_B.DataTypeConversion8[3] != 0.0) ||
       (kaiguangai1108_B.DataTypeConversion4_m[3] != 0.0) ||
       (kaiguangai1108_B.DataTypeConversion5_n[3] != 0.0) ||
       (kaiguangai1108_B.DataTypeConversion6_d[3] != 0.0) ||
       (kaiguangai1108_B.DataTypeConversion7[3] != 0.0));

    /* Logic: '<S17>/Logical Operator16' */
    kaiguangai1108_B.LogicalOperator16 =
      ((kaiguangai1108_B.DataTypeConversion1_b[4] != 0.0) ||
       (kaiguangai1108_B.DataTypeConversion2_j[4] != 0.0) ||
       (kaiguangai1108_B.DataTypeConversion3_l[4] != 0.0) ||
       (kaiguangai1108_B.DataTypeConversion8[4] != 0.0) ||
       (kaiguangai1108_B.DataTypeConversion4_m[4] != 0.0) ||
       (kaiguangai1108_B.DataTypeConversion5_n[4] != 0.0) ||
       (kaiguangai1108_B.DataTypeConversion6_d[4] != 0.0) ||
       (kaiguangai1108_B.DataTypeConversion7[4] != 0.0));

    /* Logic: '<S17>/Logical Operator17' */
    kaiguangai1108_B.LogicalOperator17 =
      ((kaiguangai1108_B.DataTypeConversion1_b[5] != 0.0) ||
       (kaiguangai1108_B.DataTypeConversion2_j[5] != 0.0) ||
       (kaiguangai1108_B.DataTypeConversion3_l[5] != 0.0) ||
       (kaiguangai1108_B.DataTypeConversion8[5] != 0.0) ||
       (kaiguangai1108_B.DataTypeConversion4_m[5] != 0.0) ||
       (kaiguangai1108_B.DataTypeConversion5_n[5] != 0.0) ||
       (kaiguangai1108_B.DataTypeConversion6_d[5] != 0.0) ||
       (kaiguangai1108_B.DataTypeConversion7[5] != 0.0));

    /* Logic: '<S17>/Logical Operator2' */
    kaiguangai1108_B.LogicalOperator2_k = ((kaiguangai1108_B.yjhx != 0.0) ||
      (kaiguangai1108_B.sf_11.yjhx != 0.0) || (kaiguangai1108_B.sf_12.yjhx !=
      0.0) || (kaiguangai1108_B.sf_13.yjhx != 0.0) ||
      (kaiguangai1108_B.sf_14.yjhx != 0.0) || (kaiguangai1108_B.sf_15.yjhx !=
      0.0) || (kaiguangai1108_B.sf_16.yjhx != 0.0) ||
      (kaiguangai1108_B.sf_17.yjhx != 0.0));

    /* Logic: '<S17>/Logical Operator3' */
    kaiguangai1108_B.LogicalOperator3_p = ((kaiguangai1108_B.gghx != 0.0) ||
      (kaiguangai1108_B.sf_11.gghx != 0.0) || (kaiguangai1108_B.sf_12.gghx !=
      0.0) || (kaiguangai1108_B.sf_13.gghx != 0.0) ||
      (kaiguangai1108_B.sf_14.gghx != 0.0) || (kaiguangai1108_B.sf_15.gghx !=
      0.0) || (kaiguangai1108_B.sf_16.gghx != 0.0) ||
      (kaiguangai1108_B.sf_17.gghx != 0.0));
    srUpdateBC(kaiguangai1108_DW.zidong_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<S6>/zidong' */

  /* Memory: '<S34>/2' */
  kaiguangai1108_B.u_gs = kaiguangai1108_DW.u_PreviousInput_o;

  /* Memory: '<S34>/3' */
  kaiguangai1108_B.u_n = kaiguangai1108_DW.u_PreviousInput_h;

  /* Memory: '<S34>/4' */
  kaiguangai1108_B.u_k = kaiguangai1108_DW.u_PreviousInput_js;

  /* Memory: '<S34>/5' */
  kaiguangai1108_B.u_ni = kaiguangai1108_DW.u_PreviousInput_p;

  /* Memory: '<S34>/6' */
  kaiguangai1108_B.u_l4 = kaiguangai1108_DW.u_PreviousInput_bm;

  /* Logic: '<S34>/Logical Operator1' */
  kaiguangai1108_B.LogicalOperator1_k = ((kaiguangai1108_B.u_gs != 0.0) ||
    (kaiguangai1108_B.u_n != 0.0) || (kaiguangai1108_B.u_k != 0.0) ||
    (kaiguangai1108_B.u_ni != 0.0) || (kaiguangai1108_B.u_l4 != 0.0));

  /* Switch: '<S34>/Switch1' incorporates:
   *  Constant: '<S34>/Constant12'
   *  Constant: '<S7>/songkai'
   */
  if (kaiguangai1108_B.LogicalOperator1_k) {
    kaiguangai1108_B.Switch1_d = kaiguangai1108_P.Constant12_Value;
  } else {
    kaiguangai1108_B.Switch1_d = kaiguangai1108_P.songkai_Value;
  }

  /* End of Switch: '<S34>/Switch1' */

  /* Memory: '<S34>/1' */
  kaiguangai1108_B.u_dd = kaiguangai1108_DW.u_PreviousInput_f;

  /* Logic: '<S34>/Logical Operator2' */
  kaiguangai1108_B.LogicalOperator2_j = ((kaiguangai1108_B.u_dd != 0.0) ||
    (kaiguangai1108_B.u_n != 0.0) || (kaiguangai1108_B.u_k != 0.0) ||
    (kaiguangai1108_B.u_ni != 0.0) || (kaiguangai1108_B.u_l4 != 0.0));

  /* Switch: '<S34>/Switch2' incorporates:
   *  Constant: '<S34>/Constant16'
   *  Constant: '<S7>/kaigai'
   */
  if (kaiguangai1108_B.LogicalOperator2_j) {
    kaiguangai1108_B.Switch2_d = kaiguangai1108_P.Constant16_Value;
  } else {
    kaiguangai1108_B.Switch2_d = kaiguangai1108_P.kaigai_Value;
  }

  /* End of Switch: '<S34>/Switch2' */

  /* Logic: '<S34>/Logical Operator3' */
  kaiguangai1108_B.LogicalOperator3_j = ((kaiguangai1108_B.u_dd != 0.0) ||
    (kaiguangai1108_B.u_gs != 0.0) || (kaiguangai1108_B.u_k != 0.0) ||
    (kaiguangai1108_B.u_ni != 0.0) || (kaiguangai1108_B.u_l4 != 0.0));

  /* Switch: '<S34>/Switch3' incorporates:
   *  Constant: '<S34>/Constant13'
   *  Constant: '<S7>/suoding'
   */
  if (kaiguangai1108_B.LogicalOperator3_j) {
    kaiguangai1108_B.Switch3_p = kaiguangai1108_P.Constant13_Value;
  } else {
    kaiguangai1108_B.Switch3_p = kaiguangai1108_P.suoding_Value;
  }

  /* End of Switch: '<S34>/Switch3' */

  /* Logic: '<S34>/Logical Operator4' */
  kaiguangai1108_B.LogicalOperator4_n = ((kaiguangai1108_B.u_dd != 0.0) ||
    (kaiguangai1108_B.u_gs != 0.0) || (kaiguangai1108_B.u_n != 0.0) ||
    (kaiguangai1108_B.u_ni != 0.0) || (kaiguangai1108_B.u_l4 != 0.0));

  /* Switch: '<S34>/Switch4' incorporates:
   *  Constant: '<S34>/Constant17'
   *  Constant: '<S7>/jiesuo'
   */
  if (kaiguangai1108_B.LogicalOperator4_n) {
    kaiguangai1108_B.Switch4_k = kaiguangai1108_P.Constant17_Value;
  } else {
    kaiguangai1108_B.Switch4_k = kaiguangai1108_P.jiesuo_Value;
  }

  /* End of Switch: '<S34>/Switch4' */

  /* Logic: '<S34>/Logical Operator5' */
  kaiguangai1108_B.LogicalOperator5_a = ((kaiguangai1108_B.u_dd != 0.0) ||
    (kaiguangai1108_B.u_gs != 0.0) || (kaiguangai1108_B.u_n != 0.0) ||
    (kaiguangai1108_B.u_k != 0.0) || (kaiguangai1108_B.u_l4 != 0.0));

  /* Switch: '<S34>/Switch5' incorporates:
   *  Constant: '<S34>/Constant18'
   *  Constant: '<S7>/guangai'
   */
  if (kaiguangai1108_B.LogicalOperator5_a) {
    kaiguangai1108_B.Switch5_h = kaiguangai1108_P.Constant18_Value;
  } else {
    kaiguangai1108_B.Switch5_h = kaiguangai1108_P.guangai_Value;
  }

  /* End of Switch: '<S34>/Switch5' */

  /* Logic: '<S34>/Logical Operator6' */
  kaiguangai1108_B.LogicalOperator6_n = ((kaiguangai1108_B.u_dd != 0.0) ||
    (kaiguangai1108_B.u_gs != 0.0) || (kaiguangai1108_B.u_n != 0.0) ||
    (kaiguangai1108_B.u_k != 0.0) || (kaiguangai1108_B.u_ni != 0.0));

  /* Switch: '<S34>/Switch6' incorporates:
   *  Constant: '<S34>/Constant19'
   *  Constant: '<S7>/yajin'
   */
  if (kaiguangai1108_B.LogicalOperator6_n) {
    kaiguangai1108_B.Switch6_c = kaiguangai1108_P.Constant19_Value;
  } else {
    kaiguangai1108_B.Switch6_c = kaiguangai1108_P.yajin_Value;
  }

  /* End of Switch: '<S34>/Switch6' */

  /* Product: '<S7>/Product' incorporates:
   *  Constant: '<S7>/s1'
   */
  kaiguangai1108_B.Product_g[0] = kaiguangai1108_B.Switch1_d *
    kaiguangai1108_P.s1_Value_d;
  kaiguangai1108_B.Product_g[1] = kaiguangai1108_B.Switch2_d *
    kaiguangai1108_P.s1_Value_d;
  kaiguangai1108_B.Product_g[2] = kaiguangai1108_B.Switch3_p *
    kaiguangai1108_P.s1_Value_d;
  kaiguangai1108_B.Product_g[3] = kaiguangai1108_B.Switch4_k *
    kaiguangai1108_P.s1_Value_d;
  kaiguangai1108_B.Product_g[4] = kaiguangai1108_B.Switch5_h *
    kaiguangai1108_P.s1_Value_d;
  kaiguangai1108_B.Product_g[5] = kaiguangai1108_B.Switch6_c *
    kaiguangai1108_P.s1_Value_d;

  /* Product: '<S7>/Product1' incorporates:
   *  Constant: '<S7>/s2'
   */
  kaiguangai1108_B.Product1_k[0] = kaiguangai1108_B.Switch1_d *
    kaiguangai1108_P.s2_Value_o;
  kaiguangai1108_B.Product1_k[1] = kaiguangai1108_B.Switch2_d *
    kaiguangai1108_P.s2_Value_o;
  kaiguangai1108_B.Product1_k[2] = kaiguangai1108_B.Switch3_p *
    kaiguangai1108_P.s2_Value_o;
  kaiguangai1108_B.Product1_k[3] = kaiguangai1108_B.Switch4_k *
    kaiguangai1108_P.s2_Value_o;
  kaiguangai1108_B.Product1_k[4] = kaiguangai1108_B.Switch5_h *
    kaiguangai1108_P.s2_Value_o;
  kaiguangai1108_B.Product1_k[5] = kaiguangai1108_B.Switch6_c *
    kaiguangai1108_P.s2_Value_o;

  /* Product: '<S7>/Product2' incorporates:
   *  Constant: '<S7>/s3'
   */
  kaiguangai1108_B.Product2_m[0] = kaiguangai1108_B.Switch1_d *
    kaiguangai1108_P.s3_Value_d;
  kaiguangai1108_B.Product2_m[1] = kaiguangai1108_B.Switch2_d *
    kaiguangai1108_P.s3_Value_d;
  kaiguangai1108_B.Product2_m[2] = kaiguangai1108_B.Switch3_p *
    kaiguangai1108_P.s3_Value_d;
  kaiguangai1108_B.Product2_m[3] = kaiguangai1108_B.Switch4_k *
    kaiguangai1108_P.s3_Value_d;
  kaiguangai1108_B.Product2_m[4] = kaiguangai1108_B.Switch5_h *
    kaiguangai1108_P.s3_Value_d;
  kaiguangai1108_B.Product2_m[5] = kaiguangai1108_B.Switch6_c *
    kaiguangai1108_P.s3_Value_d;

  /* Product: '<S7>/Product3' incorporates:
   *  Constant: '<S7>/s4'
   */
  kaiguangai1108_B.Product3_p[0] = kaiguangai1108_B.Switch1_d *
    kaiguangai1108_P.s4_Value_n;
  kaiguangai1108_B.Product3_p[1] = kaiguangai1108_B.Switch2_d *
    kaiguangai1108_P.s4_Value_n;
  kaiguangai1108_B.Product3_p[2] = kaiguangai1108_B.Switch3_p *
    kaiguangai1108_P.s4_Value_n;
  kaiguangai1108_B.Product3_p[3] = kaiguangai1108_B.Switch4_k *
    kaiguangai1108_P.s4_Value_n;
  kaiguangai1108_B.Product3_p[4] = kaiguangai1108_B.Switch5_h *
    kaiguangai1108_P.s4_Value_n;
  kaiguangai1108_B.Product3_p[5] = kaiguangai1108_B.Switch6_c *
    kaiguangai1108_P.s4_Value_n;

  /* Product: '<S7>/Product4' incorporates:
   *  Constant: '<S7>/s5'
   */
  kaiguangai1108_B.Product4_l[0] = kaiguangai1108_B.Switch1_d *
    kaiguangai1108_P.s5_Value_j;
  kaiguangai1108_B.Product4_l[1] = kaiguangai1108_B.Switch2_d *
    kaiguangai1108_P.s5_Value_j;
  kaiguangai1108_B.Product4_l[2] = kaiguangai1108_B.Switch3_p *
    kaiguangai1108_P.s5_Value_j;
  kaiguangai1108_B.Product4_l[3] = kaiguangai1108_B.Switch4_k *
    kaiguangai1108_P.s5_Value_j;
  kaiguangai1108_B.Product4_l[4] = kaiguangai1108_B.Switch5_h *
    kaiguangai1108_P.s5_Value_j;
  kaiguangai1108_B.Product4_l[5] = kaiguangai1108_B.Switch6_c *
    kaiguangai1108_P.s5_Value_j;

  /* Product: '<S7>/Product5' incorporates:
   *  Constant: '<S7>/s6'
   */
  kaiguangai1108_B.Product5_f[0] = kaiguangai1108_B.Switch1_d *
    kaiguangai1108_P.s6_Value_i;
  kaiguangai1108_B.Product5_f[1] = kaiguangai1108_B.Switch2_d *
    kaiguangai1108_P.s6_Value_i;
  kaiguangai1108_B.Product5_f[2] = kaiguangai1108_B.Switch3_p *
    kaiguangai1108_P.s6_Value_i;
  kaiguangai1108_B.Product5_f[3] = kaiguangai1108_B.Switch4_k *
    kaiguangai1108_P.s6_Value_i;
  kaiguangai1108_B.Product5_f[4] = kaiguangai1108_B.Switch5_h *
    kaiguangai1108_P.s6_Value_i;
  kaiguangai1108_B.Product5_f[5] = kaiguangai1108_B.Switch6_c *
    kaiguangai1108_P.s6_Value_i;

  /* Product: '<S7>/Product6' incorporates:
   *  Constant: '<S7>/s7'
   */
  kaiguangai1108_B.Product6_p[0] = kaiguangai1108_B.Switch1_d *
    kaiguangai1108_P.s7_Value_m;
  kaiguangai1108_B.Product6_p[1] = kaiguangai1108_B.Switch2_d *
    kaiguangai1108_P.s7_Value_m;
  kaiguangai1108_B.Product6_p[2] = kaiguangai1108_B.Switch3_p *
    kaiguangai1108_P.s7_Value_m;
  kaiguangai1108_B.Product6_p[3] = kaiguangai1108_B.Switch4_k *
    kaiguangai1108_P.s7_Value_m;
  kaiguangai1108_B.Product6_p[4] = kaiguangai1108_B.Switch5_h *
    kaiguangai1108_P.s7_Value_m;
  kaiguangai1108_B.Product6_p[5] = kaiguangai1108_B.Switch6_c *
    kaiguangai1108_P.s7_Value_m;

  /* Product: '<S7>/Product7' incorporates:
   *  Constant: '<S7>/s8'
   */
  kaiguangai1108_B.Product7_l[0] = kaiguangai1108_B.Switch1_d *
    kaiguangai1108_P.s8_Value_p;
  kaiguangai1108_B.Product7_l[1] = kaiguangai1108_B.Switch2_d *
    kaiguangai1108_P.s8_Value_p;
  kaiguangai1108_B.Product7_l[2] = kaiguangai1108_B.Switch3_p *
    kaiguangai1108_P.s8_Value_p;
  kaiguangai1108_B.Product7_l[3] = kaiguangai1108_B.Switch4_k *
    kaiguangai1108_P.s8_Value_p;
  kaiguangai1108_B.Product7_l[4] = kaiguangai1108_B.Switch5_h *
    kaiguangai1108_P.s8_Value_p;
  kaiguangai1108_B.Product7_l[5] = kaiguangai1108_B.Switch6_c *
    kaiguangai1108_P.s8_Value_p;

  /* Logic: '<S6>/Logical Operator2' incorporates:
   *  Constant: '<Root>/qiehuan'
   */
  kaiguangai1108_B.LogicalOperator2_e = ((kaiguangai1108_P.qiehuan_Value != 0.0)
    && kaiguangai1108_B.LogicalOperator3_e);

  /* Outputs for Enabled SubSystem: '<S6>/shoudong' incorporates:
   *  EnablePort: '<S16>/Enable'
   */
  if (kaiguangai1108_B.LogicalOperator2_e) {
    /* Chart: '<S16>/Chart' */
    kaiguangai1108_Chart(kaiguangai1108_B.start,
                         kaiguangai1108_B.DataTypeConversion1[0],
                         kaiguangai1108_B.DataTypeConversion2[0],
                         kaiguangai1108_B.DataTypeConversion1[8],
                         kaiguangai1108_B.DataTypeConversion2[8],
                         kaiguangai1108_B.DataTypeConversion4[0],
                         kaiguangai1108_B.DataTypeConversion4[8],
                         kaiguangai1108_B.DataTypeConversion5[0],
                         kaiguangai1108_B.DataTypeConversion5[8],
                         kaiguangai1108_B.Product_g[0],
                         kaiguangai1108_B.Product_g[1],
                         kaiguangai1108_B.Product_g[2],
                         kaiguangai1108_B.Product_g[3],
                         kaiguangai1108_B.Product_g[4],
                         kaiguangai1108_B.Product_g[5], kaiguangai1108_B.jieshu,
                         &kaiguangai1108_B.sf_Chart_o,
                         &kaiguangai1108_DW.sf_Chart_o);

    /* Chart: '<S16>/Chart1' */
    kaiguangai1108_Chart(kaiguangai1108_B.start,
                         kaiguangai1108_B.DataTypeConversion1[1],
                         kaiguangai1108_B.DataTypeConversion2[1],
                         kaiguangai1108_B.DataTypeConversion1[9],
                         kaiguangai1108_B.DataTypeConversion2[9],
                         kaiguangai1108_B.DataTypeConversion4[1],
                         kaiguangai1108_B.DataTypeConversion4[9],
                         kaiguangai1108_B.DataTypeConversion5[1],
                         kaiguangai1108_B.DataTypeConversion5[9],
                         kaiguangai1108_B.Product1_k[0],
                         kaiguangai1108_B.Product1_k[1],
                         kaiguangai1108_B.Product1_k[2],
                         kaiguangai1108_B.Product1_k[3],
                         kaiguangai1108_B.Product1_k[4],
                         kaiguangai1108_B.Product1_k[5], kaiguangai1108_B.jieshu,
                         &kaiguangai1108_B.sf_Chart1_b,
                         &kaiguangai1108_DW.sf_Chart1_b);

    /* Chart: '<S16>/Chart2' */
    kaiguangai1108_Chart(kaiguangai1108_B.start,
                         kaiguangai1108_B.DataTypeConversion1[2],
                         kaiguangai1108_B.DataTypeConversion2[2],
                         kaiguangai1108_B.DataTypeConversion1[10],
                         kaiguangai1108_B.DataTypeConversion2[10],
                         kaiguangai1108_B.DataTypeConversion4[2],
                         kaiguangai1108_B.DataTypeConversion4[10],
                         kaiguangai1108_B.DataTypeConversion5[2],
                         kaiguangai1108_B.DataTypeConversion5[10],
                         kaiguangai1108_B.Product2_m[0],
                         kaiguangai1108_B.Product2_m[1],
                         kaiguangai1108_B.Product2_m[2],
                         kaiguangai1108_B.Product2_m[3],
                         kaiguangai1108_B.Product2_m[4],
                         kaiguangai1108_B.Product2_m[5], kaiguangai1108_B.jieshu,
                         &kaiguangai1108_B.sf_Chart2,
                         &kaiguangai1108_DW.sf_Chart2);

    /* Chart: '<S16>/Chart3' */
    kaiguangai1108_Chart(kaiguangai1108_B.start,
                         kaiguangai1108_B.DataTypeConversion1[3],
                         kaiguangai1108_B.DataTypeConversion2[3],
                         kaiguangai1108_B.DataTypeConversion1[11],
                         kaiguangai1108_B.DataTypeConversion2[11],
                         kaiguangai1108_B.DataTypeConversion4[3],
                         kaiguangai1108_B.DataTypeConversion4[11],
                         kaiguangai1108_B.DataTypeConversion5[3],
                         kaiguangai1108_B.DataTypeConversion5[11],
                         kaiguangai1108_B.Product3_p[0],
                         kaiguangai1108_B.Product3_p[1],
                         kaiguangai1108_B.Product3_p[2],
                         kaiguangai1108_B.Product3_p[3],
                         kaiguangai1108_B.Product3_p[4],
                         kaiguangai1108_B.Product3_p[5], kaiguangai1108_B.jieshu,
                         &kaiguangai1108_B.sf_Chart3,
                         &kaiguangai1108_DW.sf_Chart3);

    /* Chart: '<S16>/Chart4' */
    kaiguangai1108_Chart(kaiguangai1108_B.start,
                         kaiguangai1108_B.DataTypeConversion1[4],
                         kaiguangai1108_B.DataTypeConversion2[4],
                         kaiguangai1108_B.DataTypeConversion1[12],
                         kaiguangai1108_B.DataTypeConversion2[12],
                         kaiguangai1108_B.DataTypeConversion4[4],
                         kaiguangai1108_B.DataTypeConversion4[12],
                         kaiguangai1108_B.DataTypeConversion5[4],
                         kaiguangai1108_B.DataTypeConversion5[12],
                         kaiguangai1108_B.Product4_l[0],
                         kaiguangai1108_B.Product4_l[1],
                         kaiguangai1108_B.Product4_l[2],
                         kaiguangai1108_B.Product4_l[3],
                         kaiguangai1108_B.Product4_l[4],
                         kaiguangai1108_B.Product4_l[5], kaiguangai1108_B.jieshu,
                         &kaiguangai1108_B.sf_Chart4,
                         &kaiguangai1108_DW.sf_Chart4);

    /* Chart: '<S16>/Chart5' */
    kaiguangai1108_Chart(kaiguangai1108_B.start,
                         kaiguangai1108_B.DataTypeConversion1[5],
                         kaiguangai1108_B.DataTypeConversion2[5],
                         kaiguangai1108_B.DataTypeConversion1[13],
                         kaiguangai1108_B.DataTypeConversion2[13],
                         kaiguangai1108_B.DataTypeConversion4[5],
                         kaiguangai1108_B.DataTypeConversion4[13],
                         kaiguangai1108_B.DataTypeConversion5[5],
                         kaiguangai1108_B.DataTypeConversion5[13],
                         kaiguangai1108_B.Product5_f[0],
                         kaiguangai1108_B.Product5_f[1],
                         kaiguangai1108_B.Product5_f[2],
                         kaiguangai1108_B.Product5_f[3],
                         kaiguangai1108_B.Product5_f[4],
                         kaiguangai1108_B.Product5_f[5], kaiguangai1108_B.jieshu,
                         &kaiguangai1108_B.sf_Chart5,
                         &kaiguangai1108_DW.sf_Chart5);

    /* Chart: '<S16>/Chart6' */
    kaiguangai1108_Chart(kaiguangai1108_B.start,
                         kaiguangai1108_B.DataTypeConversion1[6],
                         kaiguangai1108_B.DataTypeConversion2[6],
                         kaiguangai1108_B.DataTypeConversion1[14],
                         kaiguangai1108_B.DataTypeConversion2[14],
                         kaiguangai1108_B.DataTypeConversion4[6],
                         kaiguangai1108_B.DataTypeConversion4[14],
                         kaiguangai1108_B.DataTypeConversion5[6],
                         kaiguangai1108_B.DataTypeConversion5[14],
                         kaiguangai1108_B.Product6_p[0],
                         kaiguangai1108_B.Product6_p[1],
                         kaiguangai1108_B.Product6_p[2],
                         kaiguangai1108_B.Product6_p[3],
                         kaiguangai1108_B.Product6_p[4],
                         kaiguangai1108_B.Product6_p[5], kaiguangai1108_B.jieshu,
                         &kaiguangai1108_B.sf_Chart6,
                         &kaiguangai1108_DW.sf_Chart6);

    /* Chart: '<S16>/Chart7' */
    kaiguangai1108_Chart(kaiguangai1108_B.start,
                         kaiguangai1108_B.DataTypeConversion1[7],
                         kaiguangai1108_B.DataTypeConversion2[7],
                         kaiguangai1108_B.DataTypeConversion1[15],
                         kaiguangai1108_B.DataTypeConversion2[15],
                         kaiguangai1108_B.DataTypeConversion4[7],
                         kaiguangai1108_B.DataTypeConversion4[15],
                         kaiguangai1108_B.DataTypeConversion5[7],
                         kaiguangai1108_B.DataTypeConversion5[15],
                         kaiguangai1108_B.Product7_l[0],
                         kaiguangai1108_B.Product7_l[1],
                         kaiguangai1108_B.Product7_l[2],
                         kaiguangai1108_B.Product7_l[3],
                         kaiguangai1108_B.Product7_l[4],
                         kaiguangai1108_B.Product7_l[5], kaiguangai1108_B.jieshu,
                         &kaiguangai1108_B.sf_Chart7,
                         &kaiguangai1108_DW.sf_Chart7);

    /* DataTypeConversion: '<S16>/Data Type Conversion1' */
    kaiguangai1108_B.DataTypeConversion1_a[0] =
      (kaiguangai1108_B.sf_Chart6.skyichang != 0.0);
    kaiguangai1108_B.DataTypeConversion1_a[1] =
      (kaiguangai1108_B.sf_Chart6.kgyichang != 0.0);
    kaiguangai1108_B.DataTypeConversion1_a[2] =
      (kaiguangai1108_B.sf_Chart6.sdyichang != 0.0);
    kaiguangai1108_B.DataTypeConversion1_a[3] =
      (kaiguangai1108_B.sf_Chart6.jsyichang != 0.0);
    kaiguangai1108_B.DataTypeConversion1_a[4] =
      (kaiguangai1108_B.sf_Chart6.ggyichang != 0.0);
    kaiguangai1108_B.DataTypeConversion1_a[5] =
      (kaiguangai1108_B.sf_Chart6.yjyichang != 0.0);

    /* DataTypeConversion: '<S16>/Data Type Conversion10' */
    kaiguangai1108_B.DataTypeConversion10[0] =
      (kaiguangai1108_B.sf_Chart5.skyichang != 0.0);
    kaiguangai1108_B.DataTypeConversion10[1] =
      (kaiguangai1108_B.sf_Chart5.kgyichang != 0.0);
    kaiguangai1108_B.DataTypeConversion10[2] =
      (kaiguangai1108_B.sf_Chart5.sdyichang != 0.0);
    kaiguangai1108_B.DataTypeConversion10[3] =
      (kaiguangai1108_B.sf_Chart5.jsyichang != 0.0);
    kaiguangai1108_B.DataTypeConversion10[4] =
      (kaiguangai1108_B.sf_Chart5.ggyichang != 0.0);
    kaiguangai1108_B.DataTypeConversion10[5] =
      (kaiguangai1108_B.sf_Chart5.yjyichang != 0.0);

    /* DataTypeConversion: '<S16>/Data Type Conversion2' */
    kaiguangai1108_B.DataTypeConversion2_p[0] =
      (kaiguangai1108_B.sf_Chart7.skyichang != 0.0);
    kaiguangai1108_B.DataTypeConversion2_p[1] =
      (kaiguangai1108_B.sf_Chart7.kgyichang != 0.0);
    kaiguangai1108_B.DataTypeConversion2_p[2] =
      (kaiguangai1108_B.sf_Chart7.sdyichang != 0.0);
    kaiguangai1108_B.DataTypeConversion2_p[3] =
      (kaiguangai1108_B.sf_Chart7.jsyichang != 0.0);
    kaiguangai1108_B.DataTypeConversion2_p[4] =
      (kaiguangai1108_B.sf_Chart7.ggyichang != 0.0);
    kaiguangai1108_B.DataTypeConversion2_p[5] =
      (kaiguangai1108_B.sf_Chart7.yjyichang != 0.0);

    /* DataTypeConversion: '<S16>/Data Type Conversion5' */
    kaiguangai1108_B.DataTypeConversion5_m[0] =
      (kaiguangai1108_B.sf_Chart_o.skyichang != 0.0);
    kaiguangai1108_B.DataTypeConversion5_m[1] =
      (kaiguangai1108_B.sf_Chart_o.kgyichang != 0.0);
    kaiguangai1108_B.DataTypeConversion5_m[2] =
      (kaiguangai1108_B.sf_Chart_o.sdyichang != 0.0);
    kaiguangai1108_B.DataTypeConversion5_m[3] =
      (kaiguangai1108_B.sf_Chart_o.jsyichang != 0.0);
    kaiguangai1108_B.DataTypeConversion5_m[4] =
      (kaiguangai1108_B.sf_Chart_o.ggyichang != 0.0);
    kaiguangai1108_B.DataTypeConversion5_m[5] =
      (kaiguangai1108_B.sf_Chart_o.yjyichang != 0.0);

    /* DataTypeConversion: '<S16>/Data Type Conversion6' */
    kaiguangai1108_B.DataTypeConversion6_nb[0] =
      (kaiguangai1108_B.sf_Chart1_b.skyichang != 0.0);
    kaiguangai1108_B.DataTypeConversion6_nb[1] =
      (kaiguangai1108_B.sf_Chart1_b.kgyichang != 0.0);
    kaiguangai1108_B.DataTypeConversion6_nb[2] =
      (kaiguangai1108_B.sf_Chart1_b.sdyichang != 0.0);
    kaiguangai1108_B.DataTypeConversion6_nb[3] =
      (kaiguangai1108_B.sf_Chart1_b.jsyichang != 0.0);
    kaiguangai1108_B.DataTypeConversion6_nb[4] =
      (kaiguangai1108_B.sf_Chart1_b.ggyichang != 0.0);
    kaiguangai1108_B.DataTypeConversion6_nb[5] =
      (kaiguangai1108_B.sf_Chart1_b.yjyichang != 0.0);

    /* DataTypeConversion: '<S16>/Data Type Conversion7' */
    kaiguangai1108_B.DataTypeConversion7_d[0] =
      (kaiguangai1108_B.sf_Chart2.skyichang != 0.0);
    kaiguangai1108_B.DataTypeConversion7_d[1] =
      (kaiguangai1108_B.sf_Chart2.kgyichang != 0.0);
    kaiguangai1108_B.DataTypeConversion7_d[2] =
      (kaiguangai1108_B.sf_Chart2.sdyichang != 0.0);
    kaiguangai1108_B.DataTypeConversion7_d[3] =
      (kaiguangai1108_B.sf_Chart2.jsyichang != 0.0);
    kaiguangai1108_B.DataTypeConversion7_d[4] =
      (kaiguangai1108_B.sf_Chart2.ggyichang != 0.0);
    kaiguangai1108_B.DataTypeConversion7_d[5] =
      (kaiguangai1108_B.sf_Chart2.yjyichang != 0.0);

    /* DataTypeConversion: '<S16>/Data Type Conversion8' */
    kaiguangai1108_B.DataTypeConversion8_a[0] =
      (kaiguangai1108_B.sf_Chart3.skyichang != 0.0);
    kaiguangai1108_B.DataTypeConversion8_a[1] =
      (kaiguangai1108_B.sf_Chart3.kgyichang != 0.0);
    kaiguangai1108_B.DataTypeConversion8_a[2] =
      (kaiguangai1108_B.sf_Chart3.sdyichang != 0.0);
    kaiguangai1108_B.DataTypeConversion8_a[3] =
      (kaiguangai1108_B.sf_Chart3.jsyichang != 0.0);
    kaiguangai1108_B.DataTypeConversion8_a[4] =
      (kaiguangai1108_B.sf_Chart3.ggyichang != 0.0);
    kaiguangai1108_B.DataTypeConversion8_a[5] =
      (kaiguangai1108_B.sf_Chart3.yjyichang != 0.0);

    /* DataTypeConversion: '<S16>/Data Type Conversion9' */
    kaiguangai1108_B.DataTypeConversion9[0] =
      (kaiguangai1108_B.sf_Chart4.skyichang != 0.0);
    kaiguangai1108_B.DataTypeConversion9[1] =
      (kaiguangai1108_B.sf_Chart4.kgyichang != 0.0);
    kaiguangai1108_B.DataTypeConversion9[2] =
      (kaiguangai1108_B.sf_Chart4.sdyichang != 0.0);
    kaiguangai1108_B.DataTypeConversion9[3] =
      (kaiguangai1108_B.sf_Chart4.jsyichang != 0.0);
    kaiguangai1108_B.DataTypeConversion9[4] =
      (kaiguangai1108_B.sf_Chart4.ggyichang != 0.0);
    kaiguangai1108_B.DataTypeConversion9[5] =
      (kaiguangai1108_B.sf_Chart4.yjyichang != 0.0);

    /* Logic: '<S16>/Logical Operator' */
    kaiguangai1108_B.LogicalOperator_p = ((kaiguangai1108_B.sf_Chart_o.skhx !=
      0.0) || (kaiguangai1108_B.sf_Chart1_b.skhx != 0.0) ||
      (kaiguangai1108_B.sf_Chart2.skhx != 0.0) ||
      (kaiguangai1108_B.sf_Chart3.skhx != 0.0) ||
      (kaiguangai1108_B.sf_Chart4.skhx != 0.0) ||
      (kaiguangai1108_B.sf_Chart5.skhx != 0.0) ||
      (kaiguangai1108_B.sf_Chart6.skhx != 0.0) ||
      (kaiguangai1108_B.sf_Chart7.skhx != 0.0));

    /* Logic: '<S16>/Logical Operator1' */
    kaiguangai1108_B.LogicalOperator1_f = ((kaiguangai1108_B.sf_Chart_o.kghx !=
      0.0) || (kaiguangai1108_B.sf_Chart1_b.kghx != 0.0) ||
      (kaiguangai1108_B.sf_Chart2.kghx != 0.0) ||
      (kaiguangai1108_B.sf_Chart3.kghx != 0.0) ||
      (kaiguangai1108_B.sf_Chart4.kghx != 0.0) ||
      (kaiguangai1108_B.sf_Chart5.kghx != 0.0) ||
      (kaiguangai1108_B.sf_Chart6.kghx != 0.0) ||
      (kaiguangai1108_B.sf_Chart7.kghx != 0.0));

    /* Logic: '<S16>/Logical Operator2' */
    kaiguangai1108_B.LogicalOperator2_f = ((kaiguangai1108_B.sf_Chart_o.yjhx !=
      0.0) || (kaiguangai1108_B.sf_Chart1_b.yjhx != 0.0) ||
      (kaiguangai1108_B.sf_Chart2.yjhx != 0.0) ||
      (kaiguangai1108_B.sf_Chart3.yjhx != 0.0) ||
      (kaiguangai1108_B.sf_Chart4.yjhx != 0.0) ||
      (kaiguangai1108_B.sf_Chart5.yjhx != 0.0) ||
      (kaiguangai1108_B.sf_Chart6.yjhx != 0.0) ||
      (kaiguangai1108_B.sf_Chart7.yjhx != 0.0));

    /* Logic: '<S16>/Logical Operator3' */
    kaiguangai1108_B.LogicalOperator3_d = ((kaiguangai1108_B.sf_Chart_o.gghx !=
      0.0) || (kaiguangai1108_B.sf_Chart1_b.gghx != 0.0) ||
      (kaiguangai1108_B.sf_Chart2.gghx != 0.0) ||
      (kaiguangai1108_B.sf_Chart3.gghx != 0.0) ||
      (kaiguangai1108_B.sf_Chart4.gghx != 0.0) ||
      (kaiguangai1108_B.sf_Chart5.gghx != 0.0) ||
      (kaiguangai1108_B.sf_Chart6.gghx != 0.0) ||
      (kaiguangai1108_B.sf_Chart7.gghx != 0.0));

    /* Logic: '<S16>/Logical Operator4' */
    kaiguangai1108_B.LogicalOperator4_lm =
      (kaiguangai1108_B.DataTypeConversion5_m[0] ||
       kaiguangai1108_B.DataTypeConversion6_nb[0] ||
       kaiguangai1108_B.DataTypeConversion7_d[0] ||
       kaiguangai1108_B.DataTypeConversion8_a[0] ||
       kaiguangai1108_B.DataTypeConversion9[0] ||
       kaiguangai1108_B.DataTypeConversion10[0] ||
       kaiguangai1108_B.DataTypeConversion1_a[0] ||
       kaiguangai1108_B.DataTypeConversion2_p[0]);

    /* Logic: '<S16>/Logical Operator5' */
    kaiguangai1108_B.LogicalOperator5_ml =
      (kaiguangai1108_B.DataTypeConversion5_m[1] ||
       kaiguangai1108_B.DataTypeConversion6_nb[1] ||
       kaiguangai1108_B.DataTypeConversion7_d[1] ||
       kaiguangai1108_B.DataTypeConversion8_a[1] ||
       kaiguangai1108_B.DataTypeConversion9[1] ||
       kaiguangai1108_B.DataTypeConversion10[1] ||
       kaiguangai1108_B.DataTypeConversion1_a[1] ||
       kaiguangai1108_B.DataTypeConversion2_p[1]);

    /* Logic: '<S16>/Logical Operator6' */
    kaiguangai1108_B.LogicalOperator6_nu =
      (kaiguangai1108_B.DataTypeConversion5_m[2] ||
       kaiguangai1108_B.DataTypeConversion6_nb[2] ||
       kaiguangai1108_B.DataTypeConversion7_d[2] ||
       kaiguangai1108_B.DataTypeConversion8_a[2] ||
       kaiguangai1108_B.DataTypeConversion9[2] ||
       kaiguangai1108_B.DataTypeConversion10[2] ||
       kaiguangai1108_B.DataTypeConversion1_a[2] ||
       kaiguangai1108_B.DataTypeConversion2_p[2]);

    /* Logic: '<S16>/Logical Operator7' */
    kaiguangai1108_B.LogicalOperator7_g =
      (kaiguangai1108_B.DataTypeConversion5_m[3] ||
       kaiguangai1108_B.DataTypeConversion6_nb[3] ||
       kaiguangai1108_B.DataTypeConversion7_d[3] ||
       kaiguangai1108_B.DataTypeConversion8_a[3] ||
       kaiguangai1108_B.DataTypeConversion9[3] ||
       kaiguangai1108_B.DataTypeConversion10[3] ||
       kaiguangai1108_B.DataTypeConversion1_a[3] ||
       kaiguangai1108_B.DataTypeConversion2_p[3]);

    /* Logic: '<S16>/Logical Operator8' */
    kaiguangai1108_B.LogicalOperator8_e =
      (kaiguangai1108_B.DataTypeConversion5_m[4] ||
       kaiguangai1108_B.DataTypeConversion6_nb[4] ||
       kaiguangai1108_B.DataTypeConversion7_d[4] ||
       kaiguangai1108_B.DataTypeConversion8_a[4] ||
       kaiguangai1108_B.DataTypeConversion9[4] ||
       kaiguangai1108_B.DataTypeConversion10[4] ||
       kaiguangai1108_B.DataTypeConversion1_a[4] ||
       kaiguangai1108_B.DataTypeConversion2_p[4]);

    /* Logic: '<S16>/Logical Operator9' */
    kaiguangai1108_B.LogicalOperator9_d =
      (kaiguangai1108_B.DataTypeConversion5_m[5] ||
       kaiguangai1108_B.DataTypeConversion6_nb[5] ||
       kaiguangai1108_B.DataTypeConversion7_d[5] ||
       kaiguangai1108_B.DataTypeConversion8_a[5] ||
       kaiguangai1108_B.DataTypeConversion9[5] ||
       kaiguangai1108_B.DataTypeConversion10[5] ||
       kaiguangai1108_B.DataTypeConversion1_a[5] ||
       kaiguangai1108_B.DataTypeConversion2_p[5]);
    srUpdateBC(kaiguangai1108_DW.shoudong_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<S6>/shoudong' */

  /* MultiPortSwitch: '<S6>/Multiport Switch2' incorporates:
   *  Constant: '<Root>/qiehuan'
   */
  if ((int32_T)kaiguangai1108_P.qiehuan_Value == 0) {
    kaiguangai1108_B.MultiportSwitch2[0] = kaiguangai1108_B.skt;
    kaiguangai1108_B.MultiportSwitch2[1] = kaiguangai1108_B.kgt;
    kaiguangai1108_B.MultiportSwitch2[2] = kaiguangai1108_B.sdt;
    kaiguangai1108_B.MultiportSwitch2[3] = kaiguangai1108_B.jst;
    kaiguangai1108_B.MultiportSwitch2[4] = kaiguangai1108_B.ggt;
    kaiguangai1108_B.MultiportSwitch2[5] = kaiguangai1108_B.yjt;
    kaiguangai1108_B.MultiportSwitch2[6] = kaiguangai1108_B.sf_11.skt;
    kaiguangai1108_B.MultiportSwitch2[7] = kaiguangai1108_B.sf_11.kgt;
    kaiguangai1108_B.MultiportSwitch2[8] = kaiguangai1108_B.sf_11.sdt;
    kaiguangai1108_B.MultiportSwitch2[9] = kaiguangai1108_B.sf_11.jst;
    kaiguangai1108_B.MultiportSwitch2[10] = kaiguangai1108_B.sf_11.ggt;
    kaiguangai1108_B.MultiportSwitch2[11] = kaiguangai1108_B.sf_11.yjt;
    kaiguangai1108_B.MultiportSwitch2[12] = kaiguangai1108_B.sf_12.skt;
    kaiguangai1108_B.MultiportSwitch2[13] = kaiguangai1108_B.sf_12.kgt;
    kaiguangai1108_B.MultiportSwitch2[14] = kaiguangai1108_B.sf_12.sdt;
    kaiguangai1108_B.MultiportSwitch2[15] = kaiguangai1108_B.sf_12.jst;
    kaiguangai1108_B.MultiportSwitch2[16] = kaiguangai1108_B.sf_12.ggt;
    kaiguangai1108_B.MultiportSwitch2[17] = kaiguangai1108_B.sf_12.yjt;
    kaiguangai1108_B.MultiportSwitch2[18] = kaiguangai1108_B.sf_13.skt;
    kaiguangai1108_B.MultiportSwitch2[19] = kaiguangai1108_B.sf_13.kgt;
    kaiguangai1108_B.MultiportSwitch2[20] = kaiguangai1108_B.sf_13.sdt;
    kaiguangai1108_B.MultiportSwitch2[21] = kaiguangai1108_B.sf_13.jst;
    kaiguangai1108_B.MultiportSwitch2[22] = kaiguangai1108_B.sf_13.ggt;
    kaiguangai1108_B.MultiportSwitch2[23] = kaiguangai1108_B.sf_13.yjt;
    kaiguangai1108_B.MultiportSwitch2[24] = kaiguangai1108_B.sf_14.skt;
    kaiguangai1108_B.MultiportSwitch2[25] = kaiguangai1108_B.sf_14.kgt;
    kaiguangai1108_B.MultiportSwitch2[26] = kaiguangai1108_B.sf_14.sdt;
    kaiguangai1108_B.MultiportSwitch2[27] = kaiguangai1108_B.sf_14.jst;
    kaiguangai1108_B.MultiportSwitch2[28] = kaiguangai1108_B.sf_14.ggt;
    kaiguangai1108_B.MultiportSwitch2[29] = kaiguangai1108_B.sf_14.yjt;
    kaiguangai1108_B.MultiportSwitch2[30] = kaiguangai1108_B.sf_15.skt;
    kaiguangai1108_B.MultiportSwitch2[31] = kaiguangai1108_B.sf_15.kgt;
    kaiguangai1108_B.MultiportSwitch2[32] = kaiguangai1108_B.sf_15.sdt;
    kaiguangai1108_B.MultiportSwitch2[33] = kaiguangai1108_B.sf_15.jst;
    kaiguangai1108_B.MultiportSwitch2[34] = kaiguangai1108_B.sf_15.ggt;
    kaiguangai1108_B.MultiportSwitch2[35] = kaiguangai1108_B.sf_15.yjt;
    kaiguangai1108_B.MultiportSwitch2[36] = kaiguangai1108_B.sf_16.skt;
    kaiguangai1108_B.MultiportSwitch2[37] = kaiguangai1108_B.sf_16.kgt;
    kaiguangai1108_B.MultiportSwitch2[38] = kaiguangai1108_B.sf_16.sdt;
    kaiguangai1108_B.MultiportSwitch2[39] = kaiguangai1108_B.sf_16.jst;
    kaiguangai1108_B.MultiportSwitch2[40] = kaiguangai1108_B.sf_16.ggt;
    kaiguangai1108_B.MultiportSwitch2[41] = kaiguangai1108_B.sf_16.yjt;
    kaiguangai1108_B.MultiportSwitch2[42] = kaiguangai1108_B.sf_17.skt;
    kaiguangai1108_B.MultiportSwitch2[43] = kaiguangai1108_B.sf_17.kgt;
    kaiguangai1108_B.MultiportSwitch2[44] = kaiguangai1108_B.sf_17.sdt;
    kaiguangai1108_B.MultiportSwitch2[45] = kaiguangai1108_B.sf_17.jst;
    kaiguangai1108_B.MultiportSwitch2[46] = kaiguangai1108_B.sf_17.ggt;
    kaiguangai1108_B.MultiportSwitch2[47] = kaiguangai1108_B.sf_17.yjt;
  } else {
    kaiguangai1108_B.MultiportSwitch2[0] = kaiguangai1108_B.sf_Chart_o.skt;
    kaiguangai1108_B.MultiportSwitch2[1] = kaiguangai1108_B.sf_Chart_o.kgt;
    kaiguangai1108_B.MultiportSwitch2[2] = kaiguangai1108_B.sf_Chart_o.sdt;
    kaiguangai1108_B.MultiportSwitch2[3] = kaiguangai1108_B.sf_Chart_o.jst;
    kaiguangai1108_B.MultiportSwitch2[4] = kaiguangai1108_B.sf_Chart_o.ggt;
    kaiguangai1108_B.MultiportSwitch2[5] = kaiguangai1108_B.sf_Chart_o.yjt;
    kaiguangai1108_B.MultiportSwitch2[6] = kaiguangai1108_B.sf_Chart1_b.skt;
    kaiguangai1108_B.MultiportSwitch2[7] = kaiguangai1108_B.sf_Chart1_b.kgt;
    kaiguangai1108_B.MultiportSwitch2[8] = kaiguangai1108_B.sf_Chart1_b.sdt;
    kaiguangai1108_B.MultiportSwitch2[9] = kaiguangai1108_B.sf_Chart1_b.jst;
    kaiguangai1108_B.MultiportSwitch2[10] = kaiguangai1108_B.sf_Chart1_b.ggt;
    kaiguangai1108_B.MultiportSwitch2[11] = kaiguangai1108_B.sf_Chart1_b.yjt;
    kaiguangai1108_B.MultiportSwitch2[12] = kaiguangai1108_B.sf_Chart2.skt;
    kaiguangai1108_B.MultiportSwitch2[13] = kaiguangai1108_B.sf_Chart2.kgt;
    kaiguangai1108_B.MultiportSwitch2[14] = kaiguangai1108_B.sf_Chart2.sdt;
    kaiguangai1108_B.MultiportSwitch2[15] = kaiguangai1108_B.sf_Chart2.jst;
    kaiguangai1108_B.MultiportSwitch2[16] = kaiguangai1108_B.sf_Chart2.ggt;
    kaiguangai1108_B.MultiportSwitch2[17] = kaiguangai1108_B.sf_Chart2.yjt;
    kaiguangai1108_B.MultiportSwitch2[18] = kaiguangai1108_B.sf_Chart3.skt;
    kaiguangai1108_B.MultiportSwitch2[19] = kaiguangai1108_B.sf_Chart3.kgt;
    kaiguangai1108_B.MultiportSwitch2[20] = kaiguangai1108_B.sf_Chart3.sdt;
    kaiguangai1108_B.MultiportSwitch2[21] = kaiguangai1108_B.sf_Chart3.jst;
    kaiguangai1108_B.MultiportSwitch2[22] = kaiguangai1108_B.sf_Chart3.ggt;
    kaiguangai1108_B.MultiportSwitch2[23] = kaiguangai1108_B.sf_Chart3.yjt;
    kaiguangai1108_B.MultiportSwitch2[24] = kaiguangai1108_B.sf_Chart4.skt;
    kaiguangai1108_B.MultiportSwitch2[25] = kaiguangai1108_B.sf_Chart4.kgt;
    kaiguangai1108_B.MultiportSwitch2[26] = kaiguangai1108_B.sf_Chart4.sdt;
    kaiguangai1108_B.MultiportSwitch2[27] = kaiguangai1108_B.sf_Chart4.jst;
    kaiguangai1108_B.MultiportSwitch2[28] = kaiguangai1108_B.sf_Chart4.ggt;
    kaiguangai1108_B.MultiportSwitch2[29] = kaiguangai1108_B.sf_Chart4.yjt;
    kaiguangai1108_B.MultiportSwitch2[30] = kaiguangai1108_B.sf_Chart5.skt;
    kaiguangai1108_B.MultiportSwitch2[31] = kaiguangai1108_B.sf_Chart5.kgt;
    kaiguangai1108_B.MultiportSwitch2[32] = kaiguangai1108_B.sf_Chart5.sdt;
    kaiguangai1108_B.MultiportSwitch2[33] = kaiguangai1108_B.sf_Chart5.jst;
    kaiguangai1108_B.MultiportSwitch2[34] = kaiguangai1108_B.sf_Chart5.ggt;
    kaiguangai1108_B.MultiportSwitch2[35] = kaiguangai1108_B.sf_Chart5.yjt;
    kaiguangai1108_B.MultiportSwitch2[36] = kaiguangai1108_B.sf_Chart6.skt;
    kaiguangai1108_B.MultiportSwitch2[37] = kaiguangai1108_B.sf_Chart6.kgt;
    kaiguangai1108_B.MultiportSwitch2[38] = kaiguangai1108_B.sf_Chart6.sdt;
    kaiguangai1108_B.MultiportSwitch2[39] = kaiguangai1108_B.sf_Chart6.jst;
    kaiguangai1108_B.MultiportSwitch2[40] = kaiguangai1108_B.sf_Chart6.ggt;
    kaiguangai1108_B.MultiportSwitch2[41] = kaiguangai1108_B.sf_Chart6.yjt;
    kaiguangai1108_B.MultiportSwitch2[42] = kaiguangai1108_B.sf_Chart7.skt;
    kaiguangai1108_B.MultiportSwitch2[43] = kaiguangai1108_B.sf_Chart7.kgt;
    kaiguangai1108_B.MultiportSwitch2[44] = kaiguangai1108_B.sf_Chart7.sdt;
    kaiguangai1108_B.MultiportSwitch2[45] = kaiguangai1108_B.sf_Chart7.jst;
    kaiguangai1108_B.MultiportSwitch2[46] = kaiguangai1108_B.sf_Chart7.ggt;
    kaiguangai1108_B.MultiportSwitch2[47] = kaiguangai1108_B.sf_Chart7.yjt;
  }

  /* End of MultiPortSwitch: '<S6>/Multiport Switch2' */

  /* MultiPortSwitch: '<Root>/Multiport Switch' incorporates:
   *  Constant: '<Root>/Switch'
   */
  switch ((int32_T)kaiguangai1108_P.Switch_Value) {
   case 1:
    for (i = 0; i < 6; i++) {
      kaiguangai1108_B.MultiportSwitch[i] = kaiguangai1108_B.MultiportSwitch2[i];
    }
    break;

   case 2:
    for (i = 0; i < 6; i++) {
      kaiguangai1108_B.MultiportSwitch[i] = kaiguangai1108_B.MultiportSwitch2[i
        + 6];
    }
    break;

   case 3:
    for (i = 0; i < 6; i++) {
      kaiguangai1108_B.MultiportSwitch[i] = kaiguangai1108_B.MultiportSwitch2[i
        + 12];
    }
    break;

   case 4:
    for (i = 0; i < 6; i++) {
      kaiguangai1108_B.MultiportSwitch[i] = kaiguangai1108_B.MultiportSwitch2[i
        + 18];
    }
    break;

   case 5:
    for (i = 0; i < 6; i++) {
      kaiguangai1108_B.MultiportSwitch[i] = kaiguangai1108_B.MultiportSwitch2[i
        + 24];
    }
    break;

   case 6:
    for (i = 0; i < 6; i++) {
      kaiguangai1108_B.MultiportSwitch[i] = kaiguangai1108_B.MultiportSwitch2[i
        + 30];
    }
    break;

   case 7:
    for (i = 0; i < 6; i++) {
      kaiguangai1108_B.MultiportSwitch[i] = kaiguangai1108_B.MultiportSwitch2[i
        + 36];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      kaiguangai1108_B.MultiportSwitch[i] = kaiguangai1108_B.MultiportSwitch2[i
        + 42];
    }
    break;
  }

  /* End of MultiPortSwitch: '<Root>/Multiport Switch' */

  /* DataTypeConversion: '<Root>/Data Type Conversion' */
  for (i = 0; i < 6; i++) {
    kaiguangai1108_B.DataTypeConversion[i] = kaiguangai1108_B.MultiportSwitch[i];
  }

  /* End of DataTypeConversion: '<Root>/Data Type Conversion' */

  /* MultiPortSwitch: '<S6>/Multiport Switch3' incorporates:
   *  Constant: '<Root>/qiehuan'
   */
  if ((int32_T)kaiguangai1108_P.qiehuan_Value == 0) {
    kaiguangai1108_B.MultiportSwitch3[0] = kaiguangai1108_B.LogicalOperator12;
    kaiguangai1108_B.MultiportSwitch3[1] = kaiguangai1108_B.LogicalOperator13;
    kaiguangai1108_B.MultiportSwitch3[2] = kaiguangai1108_B.LogicalOperator14;
    kaiguangai1108_B.MultiportSwitch3[3] = kaiguangai1108_B.LogicalOperator15;
    kaiguangai1108_B.MultiportSwitch3[4] = kaiguangai1108_B.LogicalOperator16;
    kaiguangai1108_B.MultiportSwitch3[5] = kaiguangai1108_B.LogicalOperator17;
  } else {
    kaiguangai1108_B.MultiportSwitch3[0] = kaiguangai1108_B.LogicalOperator4_lm;
    kaiguangai1108_B.MultiportSwitch3[1] = kaiguangai1108_B.LogicalOperator5_ml;
    kaiguangai1108_B.MultiportSwitch3[2] = kaiguangai1108_B.LogicalOperator6_nu;
    kaiguangai1108_B.MultiportSwitch3[3] = kaiguangai1108_B.LogicalOperator7_g;
    kaiguangai1108_B.MultiportSwitch3[4] = kaiguangai1108_B.LogicalOperator8_e;
    kaiguangai1108_B.MultiportSwitch3[5] = kaiguangai1108_B.LogicalOperator9_d;
  }

  /* End of MultiPortSwitch: '<S6>/Multiport Switch3' */

  /* DataTypeConversion: '<Root>/Data Type Conversion3' */
  for (i = 0; i < 6; i++) {
    kaiguangai1108_B.DataTypeConversion3_o[i] =
      kaiguangai1108_B.MultiportSwitch3[i];
  }

  /* End of DataTypeConversion: '<Root>/Data Type Conversion3' */

  /* MultiPortSwitch: '<Root>/Multiport Switch1' incorporates:
   *  Constant: '<Root>/Switch1'
   */
  switch ((int32_T)kaiguangai1108_P.Switch1_Value) {
   case 1:
    kaiguangai1108_B.MultiportSwitch1[0] = kaiguangai1108_B.DataTypeConversion1
      [0];
    kaiguangai1108_B.MultiportSwitch1[1] = kaiguangai1108_B.DataTypeConversion2
      [0];
    kaiguangai1108_B.MultiportSwitch1[2] = kaiguangai1108_B.DataTypeConversion1
      [8];
    kaiguangai1108_B.MultiportSwitch1[3] = kaiguangai1108_B.DataTypeConversion2
      [8];
    kaiguangai1108_B.MultiportSwitch1[4] = kaiguangai1108_B.DataTypeConversion3
      [0];
    kaiguangai1108_B.MultiportSwitch1[5] = kaiguangai1108_B.DataTypeConversion3
      [8];
    kaiguangai1108_B.MultiportSwitch1[6] = kaiguangai1108_B.DataTypeConversion4
      [0];
    kaiguangai1108_B.MultiportSwitch1[7] = kaiguangai1108_B.DataTypeConversion4
      [8];
    kaiguangai1108_B.MultiportSwitch1[8] = kaiguangai1108_B.DataTypeConversion5
      [0];
    kaiguangai1108_B.MultiportSwitch1[9] = kaiguangai1108_B.DataTypeConversion5
      [8];
    break;

   case 2:
    kaiguangai1108_B.MultiportSwitch1[0] = kaiguangai1108_B.DataTypeConversion1
      [1];
    kaiguangai1108_B.MultiportSwitch1[1] = kaiguangai1108_B.DataTypeConversion2
      [1];
    kaiguangai1108_B.MultiportSwitch1[2] = kaiguangai1108_B.DataTypeConversion1
      [9];
    kaiguangai1108_B.MultiportSwitch1[3] = kaiguangai1108_B.DataTypeConversion2
      [9];
    kaiguangai1108_B.MultiportSwitch1[4] = kaiguangai1108_B.DataTypeConversion3
      [1];
    kaiguangai1108_B.MultiportSwitch1[5] = kaiguangai1108_B.DataTypeConversion3
      [9];
    kaiguangai1108_B.MultiportSwitch1[6] = kaiguangai1108_B.DataTypeConversion4
      [1];
    kaiguangai1108_B.MultiportSwitch1[7] = kaiguangai1108_B.DataTypeConversion4
      [9];
    kaiguangai1108_B.MultiportSwitch1[8] = kaiguangai1108_B.DataTypeConversion5
      [1];
    kaiguangai1108_B.MultiportSwitch1[9] = kaiguangai1108_B.DataTypeConversion5
      [9];
    break;

   case 3:
    kaiguangai1108_B.MultiportSwitch1[0] = kaiguangai1108_B.DataTypeConversion1
      [2];
    kaiguangai1108_B.MultiportSwitch1[1] = kaiguangai1108_B.DataTypeConversion2
      [2];
    kaiguangai1108_B.MultiportSwitch1[2] = kaiguangai1108_B.DataTypeConversion1
      [10];
    kaiguangai1108_B.MultiportSwitch1[3] = kaiguangai1108_B.DataTypeConversion2
      [10];
    kaiguangai1108_B.MultiportSwitch1[4] = kaiguangai1108_B.DataTypeConversion3
      [2];
    kaiguangai1108_B.MultiportSwitch1[5] = kaiguangai1108_B.DataTypeConversion3
      [10];
    kaiguangai1108_B.MultiportSwitch1[6] = kaiguangai1108_B.DataTypeConversion4
      [2];
    kaiguangai1108_B.MultiportSwitch1[7] = kaiguangai1108_B.DataTypeConversion4
      [10];
    kaiguangai1108_B.MultiportSwitch1[8] = kaiguangai1108_B.DataTypeConversion5
      [2];
    kaiguangai1108_B.MultiportSwitch1[9] = kaiguangai1108_B.DataTypeConversion5
      [10];
    break;

   case 4:
    kaiguangai1108_B.MultiportSwitch1[0] = kaiguangai1108_B.DataTypeConversion1
      [3];
    kaiguangai1108_B.MultiportSwitch1[1] = kaiguangai1108_B.DataTypeConversion2
      [3];
    kaiguangai1108_B.MultiportSwitch1[2] = kaiguangai1108_B.DataTypeConversion1
      [11];
    kaiguangai1108_B.MultiportSwitch1[3] = kaiguangai1108_B.DataTypeConversion2
      [11];
    kaiguangai1108_B.MultiportSwitch1[4] = kaiguangai1108_B.DataTypeConversion3
      [3];
    kaiguangai1108_B.MultiportSwitch1[5] = kaiguangai1108_B.DataTypeConversion3
      [11];
    kaiguangai1108_B.MultiportSwitch1[6] = kaiguangai1108_B.DataTypeConversion4
      [3];
    kaiguangai1108_B.MultiportSwitch1[7] = kaiguangai1108_B.DataTypeConversion4
      [11];
    kaiguangai1108_B.MultiportSwitch1[8] = kaiguangai1108_B.DataTypeConversion5
      [3];
    kaiguangai1108_B.MultiportSwitch1[9] = kaiguangai1108_B.DataTypeConversion5
      [11];
    break;

   case 5:
    kaiguangai1108_B.MultiportSwitch1[0] = kaiguangai1108_B.DataTypeConversion1
      [4];
    kaiguangai1108_B.MultiportSwitch1[1] = kaiguangai1108_B.DataTypeConversion2
      [4];
    kaiguangai1108_B.MultiportSwitch1[2] = kaiguangai1108_B.DataTypeConversion1
      [12];
    kaiguangai1108_B.MultiportSwitch1[3] = kaiguangai1108_B.DataTypeConversion2
      [12];
    kaiguangai1108_B.MultiportSwitch1[4] = kaiguangai1108_B.DataTypeConversion3
      [4];
    kaiguangai1108_B.MultiportSwitch1[5] = kaiguangai1108_B.DataTypeConversion3
      [12];
    kaiguangai1108_B.MultiportSwitch1[6] = kaiguangai1108_B.DataTypeConversion4
      [4];
    kaiguangai1108_B.MultiportSwitch1[7] = kaiguangai1108_B.DataTypeConversion4
      [12];
    kaiguangai1108_B.MultiportSwitch1[8] = kaiguangai1108_B.DataTypeConversion5
      [4];
    kaiguangai1108_B.MultiportSwitch1[9] = kaiguangai1108_B.DataTypeConversion5
      [12];
    break;

   case 6:
    kaiguangai1108_B.MultiportSwitch1[0] = kaiguangai1108_B.DataTypeConversion1
      [5];
    kaiguangai1108_B.MultiportSwitch1[1] = kaiguangai1108_B.DataTypeConversion2
      [5];
    kaiguangai1108_B.MultiportSwitch1[2] = kaiguangai1108_B.DataTypeConversion1
      [13];
    kaiguangai1108_B.MultiportSwitch1[3] = kaiguangai1108_B.DataTypeConversion2
      [13];
    kaiguangai1108_B.MultiportSwitch1[4] = kaiguangai1108_B.DataTypeConversion3
      [5];
    kaiguangai1108_B.MultiportSwitch1[5] = kaiguangai1108_B.DataTypeConversion3
      [13];
    kaiguangai1108_B.MultiportSwitch1[6] = kaiguangai1108_B.DataTypeConversion4
      [5];
    kaiguangai1108_B.MultiportSwitch1[7] = kaiguangai1108_B.DataTypeConversion4
      [13];
    kaiguangai1108_B.MultiportSwitch1[8] = kaiguangai1108_B.DataTypeConversion5
      [5];
    kaiguangai1108_B.MultiportSwitch1[9] = kaiguangai1108_B.DataTypeConversion5
      [13];
    break;

   case 7:
    kaiguangai1108_B.MultiportSwitch1[0] = kaiguangai1108_B.DataTypeConversion1
      [6];
    kaiguangai1108_B.MultiportSwitch1[1] = kaiguangai1108_B.DataTypeConversion2
      [6];
    kaiguangai1108_B.MultiportSwitch1[2] = kaiguangai1108_B.DataTypeConversion1
      [14];
    kaiguangai1108_B.MultiportSwitch1[3] = kaiguangai1108_B.DataTypeConversion2
      [14];
    kaiguangai1108_B.MultiportSwitch1[4] = kaiguangai1108_B.DataTypeConversion3
      [6];
    kaiguangai1108_B.MultiportSwitch1[5] = kaiguangai1108_B.DataTypeConversion3
      [14];
    kaiguangai1108_B.MultiportSwitch1[6] = kaiguangai1108_B.DataTypeConversion4
      [6];
    kaiguangai1108_B.MultiportSwitch1[7] = kaiguangai1108_B.DataTypeConversion4
      [14];
    kaiguangai1108_B.MultiportSwitch1[8] = kaiguangai1108_B.DataTypeConversion5
      [6];
    kaiguangai1108_B.MultiportSwitch1[9] = kaiguangai1108_B.DataTypeConversion5
      [14];
    break;

   default:
    kaiguangai1108_B.MultiportSwitch1[0] = kaiguangai1108_B.DataTypeConversion1
      [7];
    kaiguangai1108_B.MultiportSwitch1[1] = kaiguangai1108_B.DataTypeConversion2
      [7];
    kaiguangai1108_B.MultiportSwitch1[2] = kaiguangai1108_B.DataTypeConversion1
      [15];
    kaiguangai1108_B.MultiportSwitch1[3] = kaiguangai1108_B.DataTypeConversion2
      [15];
    kaiguangai1108_B.MultiportSwitch1[4] = kaiguangai1108_B.DataTypeConversion3
      [7];
    kaiguangai1108_B.MultiportSwitch1[5] = kaiguangai1108_B.DataTypeConversion3
      [15];
    kaiguangai1108_B.MultiportSwitch1[6] = kaiguangai1108_B.DataTypeConversion4
      [7];
    kaiguangai1108_B.MultiportSwitch1[7] = kaiguangai1108_B.DataTypeConversion4
      [15];
    kaiguangai1108_B.MultiportSwitch1[8] = kaiguangai1108_B.DataTypeConversion5
      [7];
    kaiguangai1108_B.MultiportSwitch1[9] = kaiguangai1108_B.DataTypeConversion5
      [15];
    break;
  }

  /* End of MultiPortSwitch: '<Root>/Multiport Switch1' */

  /* DataTypeConversion: '<Root>/Data Type Conversion1' */
  memcpy(&kaiguangai1108_B.DataTypeConversion1_j[0],
         &kaiguangai1108_B.MultiportSwitch1[0], 10U * sizeof(real_T));

  /* ok to acquire for <S2>/S-Function */
  kaiguangai1108_DW.SFunction_IWORK.AcquireOK = 1;

  /* ok to acquire for <S3>/S-Function */
  kaiguangai1108_DW.SFunction_IWORK_m.AcquireOK = 1;

  /* ok to acquire for <S4>/S-Function */
  kaiguangai1108_DW.SFunction_IWORK_f.AcquireOK = 1;

  /* ok to acquire for <S5>/S-Function */
  kaiguangai1108_DW.SFunction_IWORK_o.AcquireOK = 1;

  /* MultiPortSwitch: '<Root>/Multiport Switch2' incorporates:
   *  Constant: '<Root>/Switch2'
   */
  switch ((int32_T)kaiguangai1108_P.Switch2_Value) {
   case 1:
    kaiguangai1108_B.MultiportSwitch2_o[0] = kaiguangai1108_B.memory1[0];
    kaiguangai1108_B.MultiportSwitch2_o[1] = kaiguangai1108_B.memory1[1];
    kaiguangai1108_B.MultiportSwitch2_o[2] = kaiguangai1108_B.memory1[2];
    kaiguangai1108_B.MultiportSwitch2_o[3] = kaiguangai1108_B.memory1[3];
    break;

   case 2:
    kaiguangai1108_B.MultiportSwitch2_o[0] = kaiguangai1108_B.memory1[4];
    kaiguangai1108_B.MultiportSwitch2_o[1] = kaiguangai1108_B.memory1[5];
    kaiguangai1108_B.MultiportSwitch2_o[2] = kaiguangai1108_B.memory1[6];
    kaiguangai1108_B.MultiportSwitch2_o[3] = kaiguangai1108_B.memory1[7];
    break;

   case 3:
    kaiguangai1108_B.MultiportSwitch2_o[0] = kaiguangai1108_B.memory1[8];
    kaiguangai1108_B.MultiportSwitch2_o[1] = kaiguangai1108_B.memory1[9];
    kaiguangai1108_B.MultiportSwitch2_o[2] = kaiguangai1108_B.memory1[10];
    kaiguangai1108_B.MultiportSwitch2_o[3] = kaiguangai1108_B.memory1[11];
    break;

   case 4:
    kaiguangai1108_B.MultiportSwitch2_o[0] = kaiguangai1108_B.memory1[12];
    kaiguangai1108_B.MultiportSwitch2_o[1] = kaiguangai1108_B.memory1[13];
    kaiguangai1108_B.MultiportSwitch2_o[2] = kaiguangai1108_B.memory1[14];
    kaiguangai1108_B.MultiportSwitch2_o[3] = kaiguangai1108_B.memory1[15];
    break;

   case 5:
    kaiguangai1108_B.MultiportSwitch2_o[0] = kaiguangai1108_B.memory1[16];
    kaiguangai1108_B.MultiportSwitch2_o[1] = kaiguangai1108_B.memory1[17];
    kaiguangai1108_B.MultiportSwitch2_o[2] = kaiguangai1108_B.memory1[18];
    kaiguangai1108_B.MultiportSwitch2_o[3] = kaiguangai1108_B.memory1[19];
    break;

   case 6:
    kaiguangai1108_B.MultiportSwitch2_o[0] = kaiguangai1108_B.memory1[20];
    kaiguangai1108_B.MultiportSwitch2_o[1] = kaiguangai1108_B.memory1[21];
    kaiguangai1108_B.MultiportSwitch2_o[2] = kaiguangai1108_B.memory1[22];
    kaiguangai1108_B.MultiportSwitch2_o[3] = kaiguangai1108_B.memory1[23];
    break;

   case 7:
    kaiguangai1108_B.MultiportSwitch2_o[0] = kaiguangai1108_B.memory1[24];
    kaiguangai1108_B.MultiportSwitch2_o[1] = kaiguangai1108_B.memory1[25];
    kaiguangai1108_B.MultiportSwitch2_o[2] = kaiguangai1108_B.memory1[26];
    kaiguangai1108_B.MultiportSwitch2_o[3] = kaiguangai1108_B.memory1[27];
    break;

   default:
    kaiguangai1108_B.MultiportSwitch2_o[0] = kaiguangai1108_B.memory1[28];
    kaiguangai1108_B.MultiportSwitch2_o[1] = kaiguangai1108_B.memory1[29];
    kaiguangai1108_B.MultiportSwitch2_o[2] = kaiguangai1108_B.memory1[30];
    kaiguangai1108_B.MultiportSwitch2_o[3] = kaiguangai1108_B.memory1[31];
    break;
  }

  /* End of MultiPortSwitch: '<Root>/Multiport Switch2' */

  /* DataTypeConversion: '<Root>/Data Type Conversion2' */
  kaiguangai1108_B.DataTypeConversion2_g[0] =
    kaiguangai1108_B.MultiportSwitch2_o[0];
  kaiguangai1108_B.DataTypeConversion2_g[1] =
    kaiguangai1108_B.MultiportSwitch2_o[1];
  kaiguangai1108_B.DataTypeConversion2_g[2] =
    kaiguangai1108_B.MultiportSwitch2_o[2];
  kaiguangai1108_B.DataTypeConversion2_g[3] =
    kaiguangai1108_B.MultiportSwitch2_o[3];

  /* ok to acquire for <S14>/S-Function */
  kaiguangai1108_DW.SFunction_IWORK_j.AcquireOK = 1;

  /* Logic: '<S6>/Logical Operator4' */
  kaiguangai1108_B.LogicalOperator4_i = ((kaiguangai1108_B.DataTypeConversion3[0]
    != 0.0) || (kaiguangai1108_B.DataTypeConversion3[1] != 0.0) ||
    (kaiguangai1108_B.DataTypeConversion3[2] != 0.0) ||
    (kaiguangai1108_B.DataTypeConversion3[3] != 0.0) ||
    (kaiguangai1108_B.DataTypeConversion3[4] != 0.0) ||
    (kaiguangai1108_B.DataTypeConversion3[5] != 0.0) ||
    (kaiguangai1108_B.DataTypeConversion3[6] != 0.0) ||
    (kaiguangai1108_B.DataTypeConversion3[7] != 0.0));

  /* MultiPortSwitch: '<S6>/Multiport Switch' incorporates:
   *  Constant: '<Root>/qiehuan'
   */
  if ((int32_T)kaiguangai1108_P.qiehuan_Value == 0) {
    kaiguangai1108_B.MultiportSwitch_k[0] = kaiguangai1108_B.LogicalOperator_c;
    kaiguangai1108_B.MultiportSwitch_k[1] = kaiguangai1108_B.LogicalOperator1_i;
    kaiguangai1108_B.MultiportSwitch_k[2] = kaiguangai1108_B.LogicalOperator2_k;
    kaiguangai1108_B.MultiportSwitch_k[3] = kaiguangai1108_B.LogicalOperator3_p;
  } else {
    kaiguangai1108_B.MultiportSwitch_k[0] = kaiguangai1108_B.LogicalOperator_p;
    kaiguangai1108_B.MultiportSwitch_k[1] = kaiguangai1108_B.LogicalOperator1_f;
    kaiguangai1108_B.MultiportSwitch_k[2] = kaiguangai1108_B.LogicalOperator2_f;
    kaiguangai1108_B.MultiportSwitch_k[3] = kaiguangai1108_B.LogicalOperator3_d;
  }

  /* End of MultiPortSwitch: '<S6>/Multiport Switch' */

  /* Chart: '<S6>/Chart' */
  /* Gateway: Subsystem1/Chart */
  kaiguangai1108_DW.sfEvent_e = kaiguangai1108_CALL_EVENT_a;

  /* During: Subsystem1/Chart */
  if (kaiguangai1108_DW.is_active_c26_kaiguangai1108 == 0U) {
    /* Entry: Subsystem1/Chart */
    kaiguangai1108_DW.is_active_c26_kaiguangai1108 = 1U;

    /* Entry Internal: Subsystem1/Chart */
    /* Transition: '<S12>:2' */
    kaiguangai1108_DW.is_c26_kaiguangai1108 = kaiguangai1108_IN_off_o;

    /* Entry 'off': '<S12>:1' */
    kaiguangai1108_B.kaigaihuanchongyichang = 0.0;
    kaiguangai1108_DW.t_p = 0.0;
  } else {
    switch (kaiguangai1108_DW.is_c26_kaiguangai1108) {
     case kaiguangai1108_IN_off_o:
      /* During 'off': '<S12>:1' */
      if (kaiguangai1108_B.MultiportSwitch_k[1]) {
        /* Transition: '<S12>:4' */
        kaiguangai1108_DW.is_c26_kaiguangai1108 = kaiguangai1108_IN_on_l;

        /* Entry 'on': '<S12>:3' */
        kaiguangai1108_DW.t_p += 0.002;
      }
      break;

     case kaiguangai1108_IN_on_l:
      /* During 'on': '<S12>:3' */
      sf_internal_predicateOutput = ((kaiguangai1108_DW.t_p <= 8.0) &&
        (!kaiguangai1108_B.LogicalOperator4_i));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S12>:11' */
        kaiguangai1108_DW.is_c26_kaiguangai1108 = kaiguangai1108_IN_on_l;

        /* Entry 'on': '<S12>:3' */
        kaiguangai1108_DW.t_p += 0.002;
      } else {
        sf_internal_predicateOutput = ((kaiguangai1108_DW.t_p > 8.0) &&
          kaiguangai1108_B.LogicalOperator4_i);
        if (sf_internal_predicateOutput) {
          /* Transition: '<S12>:13' */
          kaiguangai1108_DW.is_c26_kaiguangai1108 = kaiguangai1108_IN_on1_f;

          /* Entry 'on1': '<S12>:12' */
          kaiguangai1108_B.kaigaihuanchongyichang = 1.0;
        }
      }
      break;

     default:
      /* During 'on1': '<S12>:12' */
      break;
    }
  }

  /* End of Chart: '<S6>/Chart' */

  /* Logic: '<S6>/Logical Operator5' */
  kaiguangai1108_B.LogicalOperator5_av = ((kaiguangai1108_B.DataTypeConversion3
    [8] != 0.0) || (kaiguangai1108_B.DataTypeConversion3[9] != 0.0) ||
    (kaiguangai1108_B.DataTypeConversion3[10] != 0.0) ||
    (kaiguangai1108_B.DataTypeConversion3[11] != 0.0) ||
    (kaiguangai1108_B.DataTypeConversion3[12] != 0.0) ||
    (kaiguangai1108_B.DataTypeConversion3[13] != 0.0) ||
    (kaiguangai1108_B.DataTypeConversion3[14] != 0.0) ||
    (kaiguangai1108_B.DataTypeConversion3[15] != 0.0));

  /* Chart: '<S6>/Chart1' */
  /* Gateway: Subsystem1/Chart1 */
  kaiguangai1108_DW.sfEvent_i = kaiguangai1108_CALL_EVENT_a;

  /* During: Subsystem1/Chart1 */
  if (kaiguangai1108_DW.is_active_c27_kaiguangai1108 == 0U) {
    /* Entry: Subsystem1/Chart1 */
    kaiguangai1108_DW.is_active_c27_kaiguangai1108 = 1U;

    /* Entry Internal: Subsystem1/Chart1 */
    /* Transition: '<S13>:2' */
    kaiguangai1108_DW.is_c27_kaiguangai1108 = kaiguangai1108_IN_off_o;

    /* Entry 'off': '<S13>:1' */
    kaiguangai1108_B.guangaihuanchongyichang = 0.0;
    kaiguangai1108_DW.t_b = 0.0;
  } else {
    switch (kaiguangai1108_DW.is_c27_kaiguangai1108) {
     case kaiguangai1108_IN_off_o:
      /* During 'off': '<S13>:1' */
      if (kaiguangai1108_B.MultiportSwitch_k[3]) {
        /* Transition: '<S13>:4' */
        kaiguangai1108_DW.is_c27_kaiguangai1108 = kaiguangai1108_IN_on_l;

        /* Entry 'on': '<S13>:3' */
        kaiguangai1108_DW.t_b += 0.002;
      }
      break;

     case kaiguangai1108_IN_on_l:
      /* During 'on': '<S13>:3' */
      sf_internal_predicateOutput = ((kaiguangai1108_DW.t_b <= 8.0) &&
        (!kaiguangai1108_B.LogicalOperator5_av));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S13>:11' */
        kaiguangai1108_DW.is_c27_kaiguangai1108 = kaiguangai1108_IN_on_l;

        /* Entry 'on': '<S13>:3' */
        kaiguangai1108_DW.t_b += 0.002;
      } else {
        sf_internal_predicateOutput = ((kaiguangai1108_DW.t_b > 8.0) &&
          kaiguangai1108_B.LogicalOperator5_av);
        if (sf_internal_predicateOutput) {
          /* Transition: '<S13>:13' */
          kaiguangai1108_DW.is_c27_kaiguangai1108 = kaiguangai1108_IN_on1_f;

          /* Entry 'on1': '<S13>:12' */
          kaiguangai1108_B.guangaihuanchongyichang = 1.0;
        }
      }
      break;

     default:
      /* During 'on1': '<S13>:12' */
      break;
    }
  }

  /* End of Chart: '<S6>/Chart1' */

  /* DataTypeConversion: '<S6>/Data Type Conversion1' */
  kaiguangai1108_B.DataTypeConversion1_i =
    kaiguangai1108_B.kaigaihuanchongyichang;

  /* DataTypeConversion: '<S6>/Data Type Conversion2' */
  kaiguangai1108_B.DataTypeConversion2_a =
    kaiguangai1108_B.guangaihuanchongyichang;

  /* DataTypeConversion: '<S6>/Data Type Conversion6' */
  kaiguangai1108_B.DataTypeConversion6_n[0] = kaiguangai1108_B.yikaicishu;
  kaiguangai1108_B.DataTypeConversion6_n[1] = kaiguangai1108_B.sf_11.yikaicishu;
  kaiguangai1108_B.DataTypeConversion6_n[2] = kaiguangai1108_B.sf_12.yikaicishu;
  kaiguangai1108_B.DataTypeConversion6_n[3] = kaiguangai1108_B.sf_13.yikaicishu;
  kaiguangai1108_B.DataTypeConversion6_n[4] = kaiguangai1108_B.sf_14.yikaicishu;
  kaiguangai1108_B.DataTypeConversion6_n[5] = kaiguangai1108_B.sf_15.yikaicishu;
  kaiguangai1108_B.DataTypeConversion6_n[6] = kaiguangai1108_B.sf_16.yikaicishu;
  kaiguangai1108_B.DataTypeConversion6_n[7] = kaiguangai1108_B.sf_17.yikaicishu;

  /* MultiPortSwitch: '<S6>/Multiport Switch1' incorporates:
   *  Constant: '<Root>/qiehuan'
   */
  if ((int32_T)kaiguangai1108_P.qiehuan_Value == 0) {
    /* DataTypeConversion: '<S6>/Data Type Conversion4' */
    kaiguangai1108_B.DataTypeConversion4_d[0] = kaiguangai1108_B.kgzhiling1;
    kaiguangai1108_B.DataTypeConversion4_d[1] = kaiguangai1108_B.kgzhiling2;
    kaiguangai1108_B.DataTypeConversion4_d[2] = kaiguangai1108_B.ggzhiling1;
    kaiguangai1108_B.DataTypeConversion4_d[3] = kaiguangai1108_B.ggzhiling2;
    kaiguangai1108_B.DataTypeConversion4_d[4] =
      kaiguangai1108_B.sf_11.kgzhiling1;
    kaiguangai1108_B.DataTypeConversion4_d[5] =
      kaiguangai1108_B.sf_11.kgzhiling2;
    kaiguangai1108_B.DataTypeConversion4_d[6] =
      kaiguangai1108_B.sf_11.ggzhiling1;
    kaiguangai1108_B.DataTypeConversion4_d[7] =
      kaiguangai1108_B.sf_11.ggzhiling2;
    kaiguangai1108_B.DataTypeConversion4_d[8] =
      kaiguangai1108_B.sf_12.kgzhiling1;
    kaiguangai1108_B.DataTypeConversion4_d[9] =
      kaiguangai1108_B.sf_12.kgzhiling2;
    kaiguangai1108_B.DataTypeConversion4_d[10] =
      kaiguangai1108_B.sf_12.ggzhiling1;
    kaiguangai1108_B.DataTypeConversion4_d[11] =
      kaiguangai1108_B.sf_12.ggzhiling2;
    kaiguangai1108_B.DataTypeConversion4_d[12] =
      kaiguangai1108_B.sf_13.kgzhiling1;
    kaiguangai1108_B.DataTypeConversion4_d[13] =
      kaiguangai1108_B.sf_13.kgzhiling2;
    kaiguangai1108_B.DataTypeConversion4_d[14] =
      kaiguangai1108_B.sf_13.ggzhiling1;
    kaiguangai1108_B.DataTypeConversion4_d[15] =
      kaiguangai1108_B.sf_13.ggzhiling2;
    kaiguangai1108_B.DataTypeConversion4_d[16] =
      kaiguangai1108_B.sf_14.kgzhiling1;
    kaiguangai1108_B.DataTypeConversion4_d[17] =
      kaiguangai1108_B.sf_14.kgzhiling2;
    kaiguangai1108_B.DataTypeConversion4_d[18] =
      kaiguangai1108_B.sf_14.ggzhiling1;
    kaiguangai1108_B.DataTypeConversion4_d[19] =
      kaiguangai1108_B.sf_14.ggzhiling2;
    kaiguangai1108_B.DataTypeConversion4_d[20] =
      kaiguangai1108_B.sf_15.kgzhiling1;
    kaiguangai1108_B.DataTypeConversion4_d[21] =
      kaiguangai1108_B.sf_15.kgzhiling2;
    kaiguangai1108_B.DataTypeConversion4_d[22] =
      kaiguangai1108_B.sf_15.ggzhiling1;
    kaiguangai1108_B.DataTypeConversion4_d[23] =
      kaiguangai1108_B.sf_15.ggzhiling2;
    kaiguangai1108_B.DataTypeConversion4_d[24] =
      kaiguangai1108_B.sf_16.kgzhiling1;
    kaiguangai1108_B.DataTypeConversion4_d[25] =
      kaiguangai1108_B.sf_16.kgzhiling2;
    kaiguangai1108_B.DataTypeConversion4_d[26] =
      kaiguangai1108_B.sf_16.ggzhiling1;
    kaiguangai1108_B.DataTypeConversion4_d[27] =
      kaiguangai1108_B.sf_16.ggzhiling2;
    kaiguangai1108_B.DataTypeConversion4_d[28] =
      kaiguangai1108_B.sf_17.kgzhiling1;
    kaiguangai1108_B.DataTypeConversion4_d[29] =
      kaiguangai1108_B.sf_17.kgzhiling2;
    kaiguangai1108_B.DataTypeConversion4_d[30] =
      kaiguangai1108_B.sf_17.ggzhiling1;
    kaiguangai1108_B.DataTypeConversion4_d[31] =
      kaiguangai1108_B.sf_17.ggzhiling2;
    memcpy(&kaiguangai1108_B.MultiportSwitch1_i[0],
           &kaiguangai1108_B.DataTypeConversion4_d[0], sizeof(real_T) << 5U);
  } else {
    kaiguangai1108_B.MultiportSwitch1_i[0] =
      kaiguangai1108_B.sf_Chart_o.kgzhiling1;
    kaiguangai1108_B.MultiportSwitch1_i[1] =
      kaiguangai1108_B.sf_Chart_o.kgzhiling2;
    kaiguangai1108_B.MultiportSwitch1_i[2] =
      kaiguangai1108_B.sf_Chart_o.ggzhiling1;
    kaiguangai1108_B.MultiportSwitch1_i[3] =
      kaiguangai1108_B.sf_Chart_o.ggzhiling2;
    kaiguangai1108_B.MultiportSwitch1_i[4] =
      kaiguangai1108_B.sf_Chart1_b.kgzhiling1;
    kaiguangai1108_B.MultiportSwitch1_i[5] =
      kaiguangai1108_B.sf_Chart1_b.kgzhiling2;
    kaiguangai1108_B.MultiportSwitch1_i[6] =
      kaiguangai1108_B.sf_Chart1_b.ggzhiling1;
    kaiguangai1108_B.MultiportSwitch1_i[7] =
      kaiguangai1108_B.sf_Chart1_b.ggzhiling2;
    kaiguangai1108_B.MultiportSwitch1_i[8] =
      kaiguangai1108_B.sf_Chart2.kgzhiling1;
    kaiguangai1108_B.MultiportSwitch1_i[9] =
      kaiguangai1108_B.sf_Chart2.kgzhiling2;
    kaiguangai1108_B.MultiportSwitch1_i[10] =
      kaiguangai1108_B.sf_Chart2.ggzhiling1;
    kaiguangai1108_B.MultiportSwitch1_i[11] =
      kaiguangai1108_B.sf_Chart2.ggzhiling2;
    kaiguangai1108_B.MultiportSwitch1_i[12] =
      kaiguangai1108_B.sf_Chart3.kgzhiling1;
    kaiguangai1108_B.MultiportSwitch1_i[13] =
      kaiguangai1108_B.sf_Chart3.kgzhiling2;
    kaiguangai1108_B.MultiportSwitch1_i[14] =
      kaiguangai1108_B.sf_Chart3.ggzhiling1;
    kaiguangai1108_B.MultiportSwitch1_i[15] =
      kaiguangai1108_B.sf_Chart3.ggzhiling2;
    kaiguangai1108_B.MultiportSwitch1_i[16] =
      kaiguangai1108_B.sf_Chart4.kgzhiling1;
    kaiguangai1108_B.MultiportSwitch1_i[17] =
      kaiguangai1108_B.sf_Chart4.kgzhiling2;
    kaiguangai1108_B.MultiportSwitch1_i[18] =
      kaiguangai1108_B.sf_Chart4.ggzhiling1;
    kaiguangai1108_B.MultiportSwitch1_i[19] =
      kaiguangai1108_B.sf_Chart4.ggzhiling2;
    kaiguangai1108_B.MultiportSwitch1_i[20] =
      kaiguangai1108_B.sf_Chart5.kgzhiling1;
    kaiguangai1108_B.MultiportSwitch1_i[21] =
      kaiguangai1108_B.sf_Chart5.kgzhiling2;
    kaiguangai1108_B.MultiportSwitch1_i[22] =
      kaiguangai1108_B.sf_Chart5.ggzhiling1;
    kaiguangai1108_B.MultiportSwitch1_i[23] =
      kaiguangai1108_B.sf_Chart5.ggzhiling2;
    kaiguangai1108_B.MultiportSwitch1_i[24] =
      kaiguangai1108_B.sf_Chart6.kgzhiling1;
    kaiguangai1108_B.MultiportSwitch1_i[25] =
      kaiguangai1108_B.sf_Chart6.kgzhiling2;
    kaiguangai1108_B.MultiportSwitch1_i[26] =
      kaiguangai1108_B.sf_Chart6.ggzhiling1;
    kaiguangai1108_B.MultiportSwitch1_i[27] =
      kaiguangai1108_B.sf_Chart6.ggzhiling2;
    kaiguangai1108_B.MultiportSwitch1_i[28] =
      kaiguangai1108_B.sf_Chart7.kgzhiling1;
    kaiguangai1108_B.MultiportSwitch1_i[29] =
      kaiguangai1108_B.sf_Chart7.kgzhiling2;
    kaiguangai1108_B.MultiportSwitch1_i[30] =
      kaiguangai1108_B.sf_Chart7.ggzhiling1;
    kaiguangai1108_B.MultiportSwitch1_i[31] =
      kaiguangai1108_B.sf_Chart7.ggzhiling2;
  }

  /* End of MultiPortSwitch: '<S6>/Multiport Switch1' */
}

/* Model update function */
static void kaiguangai1108_update(void)
{
  /* Update for Memory: '<S35>/2' */
  kaiguangai1108_DW.u_PreviousInput = kaiguangai1108_B.Switch2;

  /* Update for Memory: '<S35>/3' */
  kaiguangai1108_DW.u_PreviousInput_c = kaiguangai1108_B.Switch3;

  /* Update for Memory: '<S35>/4' */
  kaiguangai1108_DW.u_PreviousInput_j = kaiguangai1108_B.Switch4;

  /* Update for Memory: '<S35>/5' */
  kaiguangai1108_DW.u_PreviousInput_b = kaiguangai1108_B.Switch5;

  /* Update for Memory: '<S35>/6' */
  kaiguangai1108_DW.u_PreviousInput_jh = kaiguangai1108_B.Switch6;

  /* Update for Memory: '<S35>/1' */
  kaiguangai1108_DW.u_PreviousInput_g = kaiguangai1108_B.Switch1;

  /* Update for Memory: '<Root>/memory' */
  kaiguangai1108_DW.memory_PreviousInput[0] =
    kaiguangai1108_B.MultiportSwitch_k[0];
  kaiguangai1108_DW.memory_PreviousInput[1] =
    kaiguangai1108_B.MultiportSwitch_k[1];
  kaiguangai1108_DW.memory_PreviousInput[2] =
    kaiguangai1108_B.MultiportSwitch_k[2];
  kaiguangai1108_DW.memory_PreviousInput[3] =
    kaiguangai1108_B.MultiportSwitch_k[3];

  /* Update for Memory: '<Root>/memory1' */
  memcpy(&kaiguangai1108_DW.memory1_PreviousInput[0],
         &kaiguangai1108_B.MultiportSwitch1_i[0], sizeof(real_T) << 5U);

  /* Update for Memory: '<S34>/2' */
  kaiguangai1108_DW.u_PreviousInput_o = kaiguangai1108_B.Switch2_d;

  /* Update for Memory: '<S34>/3' */
  kaiguangai1108_DW.u_PreviousInput_h = kaiguangai1108_B.Switch3_p;

  /* Update for Memory: '<S34>/4' */
  kaiguangai1108_DW.u_PreviousInput_js = kaiguangai1108_B.Switch4_k;

  /* Update for Memory: '<S34>/5' */
  kaiguangai1108_DW.u_PreviousInput_p = kaiguangai1108_B.Switch5_h;

  /* Update for Memory: '<S34>/6' */
  kaiguangai1108_DW.u_PreviousInput_bm = kaiguangai1108_B.Switch6_c;

  /* Update for Memory: '<S34>/1' */
  kaiguangai1108_DW.u_PreviousInput_f = kaiguangai1108_B.Switch1_d;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++kaiguangai1108_M->Timing.clockTick0)) {
    ++kaiguangai1108_M->Timing.clockTickH0;
  }

  kaiguangai1108_M->Timing.t[0] = kaiguangai1108_M->Timing.clockTick0 *
    kaiguangai1108_M->Timing.stepSize0 + kaiguangai1108_M->Timing.clockTickH0 *
    kaiguangai1108_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
static void kaiguangai1108_initialize(void)
{
  /* Start for Constant: '<Root>/tiaoshi' */
  kaiguangai1108_B.tiaoshi = kaiguangai1108_P.tiaoshi_Value;

  /* Start for Constant: '<Root>/jieshu' */
  kaiguangai1108_B.jieshu = kaiguangai1108_P.jieshu_Value;

  /* Start for Constant: '<S1>/Constant' */
  kaiguangai1108_B.Constant = kaiguangai1108_P.Constant_Value;

  /* Level2 S-Function Block: '<S1>/PCI1' (pci1756IO) */
  {
    SimStruct *rts = kaiguangai1108_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S1>/PCI2' (pci1756IO) */
  {
    SimStruct *rts = kaiguangai1108_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Constant: '<S1>/Constant1' */
  kaiguangai1108_B.Constant1 = kaiguangai1108_P.Constant1_Value;

  /* Level2 S-Function Block: '<S1>/PCI3' (pci1756IO) */
  {
    SimStruct *rts = kaiguangai1108_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Constant: '<Root>/start' */
  kaiguangai1108_B.start = kaiguangai1108_P.start_Value;

  /* Start for Constant: '<S11>/t1' */
  kaiguangai1108_B.u_g = kaiguangai1108_P.t1_Value;

  /* Start for Constant: '<S11>/t3' */
  kaiguangai1108_B.u_m = kaiguangai1108_P.t3_Value;

  /* Start for Constant: '<S11>/t5' */
  kaiguangai1108_B.u_m5 = kaiguangai1108_P.t5_Value;

  /* Start for Constant: '<S11>/t7' */
  kaiguangai1108_B.u_gd = kaiguangai1108_P.t7_Value;

  /* Start for Constant: '<S11>/t9' */
  kaiguangai1108_B.u_gh = kaiguangai1108_P.t9_Value;

  /* Start for Constant: '<S11>/t11' */
  kaiguangai1108_B.u_m0 = kaiguangai1108_P.t11_Value;

  /* Start for Constant: '<Root>/zidong_shedingcishu' */
  kaiguangai1108_B.zidong_shedingcishu =
    kaiguangai1108_P.zidong_shedingcishu_Value;

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
        xpceScopeAcqOK(4, &kaiguangai1108_DW.SFunction_IWORK.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(4);
    }
  }

  /* S-Function Block: <S3>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(3)) == 0) {
      if ((i = rl32eDefScope(3,2)) != 0) {
        printf("Error creating scope 3\n");
      } else {
        rl32eAddSignal(3, rl32eGetSignalNo("Data Type Conversion3/s1"));
        rl32eAddSignal(3, rl32eGetSignalNo("Data Type Conversion3/s2"));
        rl32eAddSignal(3, rl32eGetSignalNo("Data Type Conversion3/s3"));
        rl32eAddSignal(3, rl32eGetSignalNo("Data Type Conversion3/s4"));
        rl32eAddSignal(3, rl32eGetSignalNo("Data Type Conversion3/s5"));
        rl32eAddSignal(3, rl32eGetSignalNo("Data Type Conversion3/s6"));
        rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo("Data Type Conversion3/s1"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo("Data Type Conversion3/s2"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo("Data Type Conversion3/s3"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo("Data Type Conversion3/s4"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo("Data Type Conversion3/s5"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo("Data Type Conversion3/s6"),
          "%15.6f");
        rl32eSetScope(3, 4, 250);
        rl32eSetScope(3, 5, 0);
        rl32eSetScope(3, 6, 1);
        rl32eSetScope(3, 0, 0);
        rl32eSetScope(3, 3, rl32eGetSignalNo("Data Type Conversion3/s1"));
        rl32eSetScope(3, 1, 0.0);
        rl32eSetScope(3, 2, 0);
        rl32eSetScope(3, 9, 0);
        rl32eSetTargetScope(3, 1, 0.0);
        rl32eSetTargetScope(3, 11, 0.0);
        rl32eSetTargetScope(3, 10, 0.0);
        xpceScopeAcqOK(3, &kaiguangai1108_DW.SFunction_IWORK_m.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(3);
    }
  }

  /* S-Function Block: <S4>/S-Function (scblock) */
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
        xpceScopeAcqOK(2, &kaiguangai1108_DW.SFunction_IWORK_f.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(2);
    }
  }

  /* S-Function Block: <S5>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(5)) == 0) {
      if ((i = rl32eDefScope(5,2)) != 0) {
        printf("Error creating scope 5\n");
      } else {
        rl32eAddSignal(5, rl32eGetSignalNo("Data Type Conversion1/s1"));
        rl32eAddSignal(5, rl32eGetSignalNo("Data Type Conversion1/s2"));
        rl32eAddSignal(5, rl32eGetSignalNo("Data Type Conversion1/s3"));
        rl32eAddSignal(5, rl32eGetSignalNo("Data Type Conversion1/s4"));
        rl32eAddSignal(5, rl32eGetSignalNo("Data Type Conversion1/s5"));
        rl32eAddSignal(5, rl32eGetSignalNo("Data Type Conversion1/s6"));
        rl32eAddSignal(5, rl32eGetSignalNo("Data Type Conversion1/s7"));
        rl32eAddSignal(5, rl32eGetSignalNo("Data Type Conversion1/s8"));
        rl32eAddSignal(5, rl32eGetSignalNo("Data Type Conversion1/s9"));
        rl32eAddSignal(5, rl32eGetSignalNo("Data Type Conversion1/s10"));
        rl32eSetTargetScopeSigFt(5,rl32eGetSignalNo("Data Type Conversion1/s1"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(5,rl32eGetSignalNo("Data Type Conversion1/s2"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(5,rl32eGetSignalNo("Data Type Conversion1/s3"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(5,rl32eGetSignalNo("Data Type Conversion1/s4"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(5,rl32eGetSignalNo("Data Type Conversion1/s5"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(5,rl32eGetSignalNo("Data Type Conversion1/s6"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(5,rl32eGetSignalNo("Data Type Conversion1/s7"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(5,rl32eGetSignalNo("Data Type Conversion1/s8"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(5,rl32eGetSignalNo("Data Type Conversion1/s9"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(5,rl32eGetSignalNo("Data Type Conversion1/s10"),
          "%15.6f");
        rl32eSetScope(5, 4, 250);
        rl32eSetScope(5, 5, 0);
        rl32eSetScope(5, 6, 1);
        rl32eSetScope(5, 0, 0);
        rl32eSetScope(5, 3, rl32eGetSignalNo("Data Type Conversion1/s1"));
        rl32eSetScope(5, 1, 0.0);
        rl32eSetScope(5, 2, 0);
        rl32eSetScope(5, 9, 0);
        rl32eSetTargetScope(5, 1, 0.0);
        rl32eSetTargetScope(5, 11, 0.0);
        rl32eSetTargetScope(5, 10, 0.0);
        xpceScopeAcqOK(5, &kaiguangai1108_DW.SFunction_IWORK_o.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(5);
    }
  }

  /* S-Function Block: <S14>/S-Function (scblock) */
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
        xpceScopeAcqOK(1, &kaiguangai1108_DW.SFunction_IWORK_j.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(1);
    }
  }

  {
    int32_T i;

    /* InitializeConditions for Memory: '<S35>/2' */
    kaiguangai1108_DW.u_PreviousInput = kaiguangai1108_P.u_X0;

    /* InitializeConditions for Memory: '<S35>/3' */
    kaiguangai1108_DW.u_PreviousInput_c = kaiguangai1108_P.u_X0_f;

    /* InitializeConditions for Memory: '<S35>/4' */
    kaiguangai1108_DW.u_PreviousInput_j = kaiguangai1108_P.u_X0_a;

    /* InitializeConditions for Memory: '<S35>/5' */
    kaiguangai1108_DW.u_PreviousInput_b = kaiguangai1108_P.u_X0_n;

    /* InitializeConditions for Memory: '<S35>/6' */
    kaiguangai1108_DW.u_PreviousInput_jh = kaiguangai1108_P.u_X0_j;

    /* InitializeConditions for Memory: '<S35>/1' */
    kaiguangai1108_DW.u_PreviousInput_g = kaiguangai1108_P.u_X0_p;

    /* InitializeConditions for Memory: '<Root>/memory' */
    kaiguangai1108_DW.memory_PreviousInput[0] = kaiguangai1108_P.memory_X0;
    kaiguangai1108_DW.memory_PreviousInput[1] = kaiguangai1108_P.memory_X0;
    kaiguangai1108_DW.memory_PreviousInput[2] = kaiguangai1108_P.memory_X0;
    kaiguangai1108_DW.memory_PreviousInput[3] = kaiguangai1108_P.memory_X0;

    /* InitializeConditions for Memory: '<Root>/memory1' */
    for (i = 0; i < 32; i++) {
      kaiguangai1108_DW.memory1_PreviousInput[i] = kaiguangai1108_P.memory1_X0;
    }

    /* End of InitializeConditions for Memory: '<Root>/memory1' */

    /* InitializeConditions for Memory: '<S34>/2' */
    kaiguangai1108_DW.u_PreviousInput_o = kaiguangai1108_P.u_X0_g;

    /* InitializeConditions for Memory: '<S34>/3' */
    kaiguangai1108_DW.u_PreviousInput_h = kaiguangai1108_P.u_X0_o;

    /* InitializeConditions for Memory: '<S34>/4' */
    kaiguangai1108_DW.u_PreviousInput_js = kaiguangai1108_P.u_X0_h;

    /* InitializeConditions for Memory: '<S34>/5' */
    kaiguangai1108_DW.u_PreviousInput_p = kaiguangai1108_P.u_X0_i;

    /* InitializeConditions for Memory: '<S34>/6' */
    kaiguangai1108_DW.u_PreviousInput_bm = kaiguangai1108_P.u_X0_i1;

    /* InitializeConditions for Memory: '<S34>/1' */
    kaiguangai1108_DW.u_PreviousInput_f = kaiguangai1108_P.u_X0_im;

    /* SystemInitialize for Enabled SubSystem: '<Root>/tiaoshimoshi' */
    /* SystemInitialize for Chart: '<S9>/jinjichuli' */
    kaiguangai1108_jinjichuli_Init(&kaiguangai1108_B.sf_jinjichuli,
      &kaiguangai1108_DW.sf_jinjichuli);

    /* SystemInitialize for Chart: '<S9>/jinjichuli1' */
    kaiguangai1108_jinjichuli_Init(&kaiguangai1108_B.sf_jinjichuli1,
      &kaiguangai1108_DW.sf_jinjichuli1);

    /* SystemInitialize for Chart: '<S9>/jinjichuli2' */
    kaiguangai1108_jinjichuli_Init(&kaiguangai1108_B.sf_jinjichuli2,
      &kaiguangai1108_DW.sf_jinjichuli2);

    /* SystemInitialize for Chart: '<S9>/jinjichuli3' */
    kaiguangai1108_jinjichuli_Init(&kaiguangai1108_B.sf_jinjichuli3,
      &kaiguangai1108_DW.sf_jinjichuli3);

    /* SystemInitialize for Chart: '<S9>/jinjichuli4' */
    kaiguangai1108_jinjichuli_Init(&kaiguangai1108_B.sf_jinjichuli4,
      &kaiguangai1108_DW.sf_jinjichuli4);

    /* SystemInitialize for Chart: '<S9>/jinjichuli5' */
    kaiguangai1108_jinjichuli_Init(&kaiguangai1108_B.sf_jinjichuli5,
      &kaiguangai1108_DW.sf_jinjichuli5);

    /* SystemInitialize for Chart: '<S9>/jinjichuli6' */
    kaiguangai1108_jinjichuli_Init(&kaiguangai1108_B.sf_jinjichuli6,
      &kaiguangai1108_DW.sf_jinjichuli6);

    /* SystemInitialize for Chart: '<S9>/jinjichuli7' */
    kaiguangai1108_jinjichuli_Init(&kaiguangai1108_B.sf_jinjichuli7,
      &kaiguangai1108_DW.sf_jinjichuli7);

    /* SystemInitialize for Outport: '<S9>/tiaoshi_huanxiangxinhao' */
    kaiguangai1108_B.LogicalOperator_e =
      kaiguangai1108_P.tiaoshi_huanxiangxinhao_Y0;
    kaiguangai1108_B.LogicalOperator4_d =
      kaiguangai1108_P.tiaoshi_huanxiangxinhao_Y0;
    kaiguangai1108_B.LogicalOperator5_c =
      kaiguangai1108_P.tiaoshi_huanxiangxinhao_Y0;
    kaiguangai1108_B.LogicalOperator1_kr =
      kaiguangai1108_P.tiaoshi_huanxiangxinhao_Y0;

    /* End of SystemInitialize for SubSystem: '<Root>/tiaoshimoshi' */

    /* SystemInitialize for Enabled SubSystem: '<S6>/zidong' */
    /* SystemInitialize for Chart: '<S17>/1#' */
    kaiguangai1108_DW.sfEvent = kaiguangai1108_CALL_EVENT_a;
    kaiguangai1108_DW.is_zidong = kaiguangai_IN_NO_ACTIVE_CHILD_j;
    kaiguangai1108_DW.temporalCounter_i1 = 0U;
    kaiguangai1108_DW.is_active_c1_kaiguangai1108 = 0U;
    kaiguangai1108_DW.is_c1_kaiguangai1108 = kaiguangai_IN_NO_ACTIVE_CHILD_j;

    /* SystemInitialize for Chart: '<S17>/1#1' */
    kaiguangai1108_u1_Init(&kaiguangai1108_DW.sf_11);

    /* SystemInitialize for Chart: '<S17>/1#2' */
    kaiguangai1108_u1_Init(&kaiguangai1108_DW.sf_12);

    /* SystemInitialize for Chart: '<S17>/1#3' */
    kaiguangai1108_u1_Init(&kaiguangai1108_DW.sf_13);

    /* SystemInitialize for Chart: '<S17>/1#4' */
    kaiguangai1108_u1_Init(&kaiguangai1108_DW.sf_14);

    /* SystemInitialize for Chart: '<S17>/1#5' */
    kaiguangai1108_u1_Init(&kaiguangai1108_DW.sf_15);

    /* SystemInitialize for Chart: '<S17>/1#6' */
    kaiguangai1108_u1_Init(&kaiguangai1108_DW.sf_16);

    /* SystemInitialize for Chart: '<S17>/1#7' */
    kaiguangai1108_u1_Init(&kaiguangai1108_DW.sf_17);

    /* SystemInitialize for Outport: '<S17>/songkaihuanxiang' */
    kaiguangai1108_B.LogicalOperator_c = kaiguangai1108_P.songkaihuanxiang_Y0_m;

    /* SystemInitialize for Outport: '<S17>/kaigaihuanxiang' */
    kaiguangai1108_B.LogicalOperator1_i = kaiguangai1108_P.kaigaihuanxiang_Y0_d;

    /* SystemInitialize for Outport: '<S17>/yajinhuanxiang' */
    kaiguangai1108_B.LogicalOperator2_k = kaiguangai1108_P.yajinhuanxiang_Y0_k;

    /* SystemInitialize for Outport: '<S17>/guangaihuanxiang' */
    kaiguangai1108_B.LogicalOperator3_p = kaiguangai1108_P.guangaihuanxiang_Y0_l;

    /* SystemInitialize for Outport: '<S17>/zdyichangxinhao' */
    kaiguangai1108_B.LogicalOperator12 = kaiguangai1108_P.zdyichangxinhao_Y0;
    kaiguangai1108_B.LogicalOperator13 = kaiguangai1108_P.zdyichangxinhao_Y0;
    kaiguangai1108_B.LogicalOperator14 = kaiguangai1108_P.zdyichangxinhao_Y0;
    kaiguangai1108_B.LogicalOperator15 = kaiguangai1108_P.zdyichangxinhao_Y0;
    kaiguangai1108_B.LogicalOperator16 = kaiguangai1108_P.zdyichangxinhao_Y0;
    kaiguangai1108_B.LogicalOperator17 = kaiguangai1108_P.zdyichangxinhao_Y0;

    /* End of SystemInitialize for SubSystem: '<S6>/zidong' */

    /* SystemInitialize for Enabled SubSystem: '<S6>/shoudong' */
    /* SystemInitialize for Chart: '<S16>/Chart' */
    kaiguangai1108_Chart_Init(&kaiguangai1108_DW.sf_Chart_o);

    /* SystemInitialize for Chart: '<S16>/Chart1' */
    kaiguangai1108_Chart_Init(&kaiguangai1108_DW.sf_Chart1_b);

    /* SystemInitialize for Chart: '<S16>/Chart2' */
    kaiguangai1108_Chart_Init(&kaiguangai1108_DW.sf_Chart2);

    /* SystemInitialize for Chart: '<S16>/Chart3' */
    kaiguangai1108_Chart_Init(&kaiguangai1108_DW.sf_Chart3);

    /* SystemInitialize for Chart: '<S16>/Chart4' */
    kaiguangai1108_Chart_Init(&kaiguangai1108_DW.sf_Chart4);

    /* SystemInitialize for Chart: '<S16>/Chart5' */
    kaiguangai1108_Chart_Init(&kaiguangai1108_DW.sf_Chart5);

    /* SystemInitialize for Chart: '<S16>/Chart6' */
    kaiguangai1108_Chart_Init(&kaiguangai1108_DW.sf_Chart6);

    /* SystemInitialize for Chart: '<S16>/Chart7' */
    kaiguangai1108_Chart_Init(&kaiguangai1108_DW.sf_Chart7);

    /* SystemInitialize for Outport: '<S16>/songkaihuanxiang' */
    kaiguangai1108_B.LogicalOperator_p = kaiguangai1108_P.songkaihuanxiang_Y0;

    /* SystemInitialize for Outport: '<S16>/kaigaihuanxiang' */
    kaiguangai1108_B.LogicalOperator1_f = kaiguangai1108_P.kaigaihuanxiang_Y0;

    /* SystemInitialize for Outport: '<S16>/yajinhuanxiang' */
    kaiguangai1108_B.LogicalOperator2_f = kaiguangai1108_P.yajinhuanxiang_Y0;

    /* SystemInitialize for Outport: '<S16>/guangaihuanxiang' */
    kaiguangai1108_B.LogicalOperator3_d = kaiguangai1108_P.guangaihuanxiang_Y0;

    /* SystemInitialize for Outport: '<S16>/sdyichangxinhao' */
    kaiguangai1108_B.LogicalOperator4_lm = kaiguangai1108_P.sdyichangxinhao_Y0;
    kaiguangai1108_B.LogicalOperator5_ml = kaiguangai1108_P.sdyichangxinhao_Y0;
    kaiguangai1108_B.LogicalOperator6_nu = kaiguangai1108_P.sdyichangxinhao_Y0;
    kaiguangai1108_B.LogicalOperator7_g = kaiguangai1108_P.sdyichangxinhao_Y0;
    kaiguangai1108_B.LogicalOperator8_e = kaiguangai1108_P.sdyichangxinhao_Y0;
    kaiguangai1108_B.LogicalOperator9_d = kaiguangai1108_P.sdyichangxinhao_Y0;

    /* End of SystemInitialize for SubSystem: '<S6>/shoudong' */

    /* SystemInitialize for Chart: '<S6>/Chart' */
    kaiguangai1108_DW.sfEvent_e = kaiguangai1108_CALL_EVENT_a;
    kaiguangai1108_DW.is_active_c26_kaiguangai1108 = 0U;
    kaiguangai1108_DW.is_c26_kaiguangai1108 = kaiguangai_IN_NO_ACTIVE_CHILD_j;

    /* SystemInitialize for Chart: '<S6>/Chart1' */
    kaiguangai1108_DW.sfEvent_i = kaiguangai1108_CALL_EVENT_a;
    kaiguangai1108_DW.is_active_c27_kaiguangai1108 = 0U;
    kaiguangai1108_DW.is_c27_kaiguangai1108 = kaiguangai_IN_NO_ACTIVE_CHILD_j;
  }
}

/* Model terminate function */
static void kaiguangai1108_terminate(void)
{
  /* Level2 S-Function Block: '<S1>/PCI1' (pci1756IO) */
  {
    SimStruct *rts = kaiguangai1108_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S1>/PCI2' (pci1756IO) */
  {
    SimStruct *rts = kaiguangai1108_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S1>/PCI3' (pci1756IO) */
  {
    SimStruct *rts = kaiguangai1108_M->childSfunctions[2];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  kaiguangai1108_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  kaiguangai1108_update();
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
  kaiguangai1108_initialize();
}

void MdlTerminate(void)
{
  kaiguangai1108_terminate();
}

/* Registration function */
RT_MODEL_kaiguangai1108_T *kaiguangai1108(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)kaiguangai1108_M, 0,
                sizeof(RT_MODEL_kaiguangai1108_T));
  rtsiSetSolverName(&kaiguangai1108_M->solverInfo,"FixedStepDiscrete");
  kaiguangai1108_M->solverInfoPtr = (&kaiguangai1108_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = kaiguangai1108_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    kaiguangai1108_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    kaiguangai1108_M->Timing.sampleTimes =
      (&kaiguangai1108_M->Timing.sampleTimesArray[0]);
    kaiguangai1108_M->Timing.offsetTimes =
      (&kaiguangai1108_M->Timing.offsetTimesArray[0]);

    /* task periods */
    kaiguangai1108_M->Timing.sampleTimes[0] = (0.002);

    /* task offsets */
    kaiguangai1108_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(kaiguangai1108_M, &kaiguangai1108_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = kaiguangai1108_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    kaiguangai1108_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(kaiguangai1108_M, -1);
  kaiguangai1108_M->Timing.stepSize0 = 0.002;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    kaiguangai1108_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(kaiguangai1108_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(kaiguangai1108_M->rtwLogInfo, (NULL));
    rtliSetLogT(kaiguangai1108_M->rtwLogInfo, "tout");
    rtliSetLogX(kaiguangai1108_M->rtwLogInfo, "");
    rtliSetLogXFinal(kaiguangai1108_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(kaiguangai1108_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(kaiguangai1108_M->rtwLogInfo, 2);
    rtliSetLogMaxRows(kaiguangai1108_M->rtwLogInfo, 0);
    rtliSetLogDecimation(kaiguangai1108_M->rtwLogInfo, 1);
    rtliSetLogY(kaiguangai1108_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(kaiguangai1108_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(kaiguangai1108_M->rtwLogInfo, (NULL));
  }

  kaiguangai1108_M->solverInfoPtr = (&kaiguangai1108_M->solverInfo);
  kaiguangai1108_M->Timing.stepSize = (0.002);
  rtsiSetFixedStepSize(&kaiguangai1108_M->solverInfo, 0.002);
  rtsiSetSolverMode(&kaiguangai1108_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  kaiguangai1108_M->blockIO = ((void *) &kaiguangai1108_B);
  (void) memset(((void *) &kaiguangai1108_B), 0,
                sizeof(B_kaiguangai1108_T));

  /* parameters */
  kaiguangai1108_M->defaultParam = ((real_T *)&kaiguangai1108_P);

  /* states (dwork) */
  kaiguangai1108_M->dwork = ((void *) &kaiguangai1108_DW);
  (void) memset((void *)&kaiguangai1108_DW, 0,
                sizeof(DW_kaiguangai1108_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  kaiguangai1108_InitializeDataMapInfo(kaiguangai1108_M);

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &kaiguangai1108_M->NonInlinedSFcns.sfcnInfo;
    kaiguangai1108_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(kaiguangai1108_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &kaiguangai1108_M->Sizes.numSampTimes);
    kaiguangai1108_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr
      (kaiguangai1108_M)[0]);
    rtssSetTPtrPtr(sfcnInfo,kaiguangai1108_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(kaiguangai1108_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(kaiguangai1108_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (kaiguangai1108_M));
    rtssSetStepSizePtr(sfcnInfo, &kaiguangai1108_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(kaiguangai1108_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &kaiguangai1108_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &kaiguangai1108_M->zCCacheNeedsReset);
    rtssSetBlkStateChangePtr(sfcnInfo, &kaiguangai1108_M->blkStateChange);
    rtssSetSampleHitsPtr(sfcnInfo, &kaiguangai1108_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &kaiguangai1108_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &kaiguangai1108_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &kaiguangai1108_M->solverInfoPtr);
  }

  kaiguangai1108_M->Sizes.numSFcns = (3);

  /* register each child */
  {
    (void) memset((void *)&kaiguangai1108_M->NonInlinedSFcns.childSFunctions[0],
                  0,
                  3*sizeof(SimStruct));
    kaiguangai1108_M->childSfunctions =
      (&kaiguangai1108_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    kaiguangai1108_M->childSfunctions[0] =
      (&kaiguangai1108_M->NonInlinedSFcns.childSFunctions[0]);
    kaiguangai1108_M->childSfunctions[1] =
      (&kaiguangai1108_M->NonInlinedSFcns.childSFunctions[1]);
    kaiguangai1108_M->childSfunctions[2] =
      (&kaiguangai1108_M->NonInlinedSFcns.childSFunctions[2]);

    /* Level2 S-Function Block: kaiguangai1108/<S1>/PCI1 (pci1756IO) */
    {
      SimStruct *rts = kaiguangai1108_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = kaiguangai1108_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = kaiguangai1108_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = kaiguangai1108_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &kaiguangai1108_M->NonInlinedSFcns.blkInfo2[0]);
      }

      ssSetRTWSfcnInfo(rts, kaiguangai1108_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &kaiguangai1108_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &kaiguangai1108_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &kaiguangai1108_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &kaiguangai1108_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &kaiguangai1108_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 32);
        ssSetPortInfoForInputs(rts,
          &kaiguangai1108_M->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn0.UPtrs0;
          sfcnUPtrs[0] = &kaiguangai1108_B.DataTypeConversion6[1];
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn0.UPtrs1;
          sfcnUPtrs[0] = &kaiguangai1108_B.DataTypeConversion6[3];
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn0.UPtrs2;
          sfcnUPtrs[0] = &kaiguangai1108_B.DataTypeConversion6[0];
          ssSetInputPortSignalPtrs(rts, 2, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }

        /* port 3 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn0.UPtrs3;
          sfcnUPtrs[0] = &kaiguangai1108_B.DataTypeConversion6[2];
          ssSetInputPortSignalPtrs(rts, 3, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidth(rts, 3, 1);
        }

        /* port 4 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn0.UPtrs4;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant;
          ssSetInputPortSignalPtrs(rts, 4, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidth(rts, 4, 1);
        }

        /* port 5 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn0.UPtrs5;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant;
          ssSetInputPortSignalPtrs(rts, 5, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 5, 1);
          ssSetInputPortWidth(rts, 5, 1);
        }

        /* port 6 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn0.UPtrs6;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant;
          ssSetInputPortSignalPtrs(rts, 6, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 6, 1);
          ssSetInputPortWidth(rts, 6, 1);
        }

        /* port 7 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn0.UPtrs7;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant;
          ssSetInputPortSignalPtrs(rts, 7, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 7, 1);
          ssSetInputPortWidth(rts, 7, 1);
        }

        /* port 8 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn0.UPtrs8;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant;
          ssSetInputPortSignalPtrs(rts, 8, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 8, 1);
          ssSetInputPortWidth(rts, 8, 1);
        }

        /* port 9 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn0.UPtrs9;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant;
          ssSetInputPortSignalPtrs(rts, 9, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 9, 1);
          ssSetInputPortWidth(rts, 9, 1);
        }

        /* port 10 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn0.UPtrs10;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant;
          ssSetInputPortSignalPtrs(rts, 10, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 10, 1);
          ssSetInputPortWidth(rts, 10, 1);
        }

        /* port 11 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn0.UPtrs11;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant;
          ssSetInputPortSignalPtrs(rts, 11, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 11, 1);
          ssSetInputPortWidth(rts, 11, 1);
        }

        /* port 12 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn0.UPtrs12;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant;
          ssSetInputPortSignalPtrs(rts, 12, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 12, 1);
          ssSetInputPortWidth(rts, 12, 1);
        }

        /* port 13 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn0.UPtrs13;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant;
          ssSetInputPortSignalPtrs(rts, 13, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 13, 1);
          ssSetInputPortWidth(rts, 13, 1);
        }

        /* port 14 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn0.UPtrs14;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant;
          ssSetInputPortSignalPtrs(rts, 14, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 14, 1);
          ssSetInputPortWidth(rts, 14, 1);
        }

        /* port 15 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn0.UPtrs15;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant;
          ssSetInputPortSignalPtrs(rts, 15, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 15, 1);
          ssSetInputPortWidth(rts, 15, 1);
        }

        /* port 16 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn0.UPtrs16;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant;
          ssSetInputPortSignalPtrs(rts, 16, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 16, 1);
          ssSetInputPortWidth(rts, 16, 1);
        }

        /* port 17 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn0.UPtrs17;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant;
          ssSetInputPortSignalPtrs(rts, 17, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 17, 1);
          ssSetInputPortWidth(rts, 17, 1);
        }

        /* port 18 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn0.UPtrs18;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant;
          ssSetInputPortSignalPtrs(rts, 18, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 18, 1);
          ssSetInputPortWidth(rts, 18, 1);
        }

        /* port 19 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn0.UPtrs19;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant;
          ssSetInputPortSignalPtrs(rts, 19, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 19, 1);
          ssSetInputPortWidth(rts, 19, 1);
        }

        /* port 20 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn0.UPtrs20;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant;
          ssSetInputPortSignalPtrs(rts, 20, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 20, 1);
          ssSetInputPortWidth(rts, 20, 1);
        }

        /* port 21 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn0.UPtrs21;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant;
          ssSetInputPortSignalPtrs(rts, 21, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 21, 1);
          ssSetInputPortWidth(rts, 21, 1);
        }

        /* port 22 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn0.UPtrs22;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant;
          ssSetInputPortSignalPtrs(rts, 22, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 22, 1);
          ssSetInputPortWidth(rts, 22, 1);
        }

        /* port 23 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn0.UPtrs23;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant;
          ssSetInputPortSignalPtrs(rts, 23, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 23, 1);
          ssSetInputPortWidth(rts, 23, 1);
        }

        /* port 24 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn0.UPtrs24;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant;
          ssSetInputPortSignalPtrs(rts, 24, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 24, 1);
          ssSetInputPortWidth(rts, 24, 1);
        }

        /* port 25 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn0.UPtrs25;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant;
          ssSetInputPortSignalPtrs(rts, 25, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 25, 1);
          ssSetInputPortWidth(rts, 25, 1);
        }

        /* port 26 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn0.UPtrs26;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant;
          ssSetInputPortSignalPtrs(rts, 26, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 26, 1);
          ssSetInputPortWidth(rts, 26, 1);
        }

        /* port 27 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn0.UPtrs27;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant;
          ssSetInputPortSignalPtrs(rts, 27, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 27, 1);
          ssSetInputPortWidth(rts, 27, 1);
        }

        /* port 28 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn0.UPtrs28;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant;
          ssSetInputPortSignalPtrs(rts, 28, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 28, 1);
          ssSetInputPortWidth(rts, 28, 1);
        }

        /* port 29 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn0.UPtrs29;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant;
          ssSetInputPortSignalPtrs(rts, 29, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 29, 1);
          ssSetInputPortWidth(rts, 29, 1);
        }

        /* port 30 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn0.UPtrs30;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant;
          ssSetInputPortSignalPtrs(rts, 30, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 30, 1);
          ssSetInputPortWidth(rts, 30, 1);
        }

        /* port 31 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn0.UPtrs31;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant;
          ssSetInputPortSignalPtrs(rts, 31, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 31, 1);
          ssSetInputPortWidth(rts, 31, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &kaiguangai1108_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 16);
          ssSetOutputPortSignal(rts, 0, ((real_T *) kaiguangai1108_B.PCI1_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 16);
          ssSetOutputPortSignal(rts, 1, ((real_T *) kaiguangai1108_B.PCI1_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI1");
      ssSetPath(rts, "kaiguangai1108/PCI-1756/PCI1");
      ssSetRTModel(rts,kaiguangai1108_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &kaiguangai1108_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)kaiguangai1108_P.PCI1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)kaiguangai1108_P.PCI1_P2_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &kaiguangai1108_DW.PCI1_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &kaiguangai1108_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &kaiguangai1108_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 6);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &kaiguangai1108_DW.PCI1_IWORK[0]);
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

    /* Level2 S-Function Block: kaiguangai1108/<S1>/PCI2 (pci1756IO) */
    {
      SimStruct *rts = kaiguangai1108_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = kaiguangai1108_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = kaiguangai1108_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = kaiguangai1108_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &kaiguangai1108_M->NonInlinedSFcns.blkInfo2[1]);
      }

      ssSetRTWSfcnInfo(rts, kaiguangai1108_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &kaiguangai1108_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &kaiguangai1108_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &kaiguangai1108_M->NonInlinedSFcns.methods4[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &kaiguangai1108_M->NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts,
          &kaiguangai1108_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 32);
        ssSetPortInfoForInputs(rts,
          &kaiguangai1108_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn1.UPtrs0;
          sfcnUPtrs[0] = &kaiguangai1108_B.memory1[0];
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn1.UPtrs1;
          sfcnUPtrs[0] = &kaiguangai1108_B.memory1[4];
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn1.UPtrs2;
          sfcnUPtrs[0] = &kaiguangai1108_B.memory1[8];
          ssSetInputPortSignalPtrs(rts, 2, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }

        /* port 3 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn1.UPtrs3;
          sfcnUPtrs[0] = &kaiguangai1108_B.memory1[12];
          ssSetInputPortSignalPtrs(rts, 3, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidth(rts, 3, 1);
        }

        /* port 4 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn1.UPtrs4;
          sfcnUPtrs[0] = &kaiguangai1108_B.memory1[16];
          ssSetInputPortSignalPtrs(rts, 4, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidth(rts, 4, 1);
        }

        /* port 5 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn1.UPtrs5;
          sfcnUPtrs[0] = &kaiguangai1108_B.memory1[20];
          ssSetInputPortSignalPtrs(rts, 5, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 5, 1);
          ssSetInputPortWidth(rts, 5, 1);
        }

        /* port 6 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn1.UPtrs6;
          sfcnUPtrs[0] = &kaiguangai1108_B.memory1[24];
          ssSetInputPortSignalPtrs(rts, 6, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 6, 1);
          ssSetInputPortWidth(rts, 6, 1);
        }

        /* port 7 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn1.UPtrs7;
          sfcnUPtrs[0] = &kaiguangai1108_B.memory1[28];
          ssSetInputPortSignalPtrs(rts, 7, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 7, 1);
          ssSetInputPortWidth(rts, 7, 1);
        }

        /* port 8 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn1.UPtrs8;
          sfcnUPtrs[0] = &kaiguangai1108_B.memory1[1];
          ssSetInputPortSignalPtrs(rts, 8, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 8, 1);
          ssSetInputPortWidth(rts, 8, 1);
        }

        /* port 9 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn1.UPtrs9;
          sfcnUPtrs[0] = &kaiguangai1108_B.memory1[5];
          ssSetInputPortSignalPtrs(rts, 9, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 9, 1);
          ssSetInputPortWidth(rts, 9, 1);
        }

        /* port 10 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn1.UPtrs10;
          sfcnUPtrs[0] = &kaiguangai1108_B.memory1[9];
          ssSetInputPortSignalPtrs(rts, 10, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 10, 1);
          ssSetInputPortWidth(rts, 10, 1);
        }

        /* port 11 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn1.UPtrs11;
          sfcnUPtrs[0] = &kaiguangai1108_B.memory1[13];
          ssSetInputPortSignalPtrs(rts, 11, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 11, 1);
          ssSetInputPortWidth(rts, 11, 1);
        }

        /* port 12 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn1.UPtrs12;
          sfcnUPtrs[0] = &kaiguangai1108_B.memory1[17];
          ssSetInputPortSignalPtrs(rts, 12, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 12, 1);
          ssSetInputPortWidth(rts, 12, 1);
        }

        /* port 13 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn1.UPtrs13;
          sfcnUPtrs[0] = &kaiguangai1108_B.memory1[21];
          ssSetInputPortSignalPtrs(rts, 13, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 13, 1);
          ssSetInputPortWidth(rts, 13, 1);
        }

        /* port 14 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn1.UPtrs14;
          sfcnUPtrs[0] = &kaiguangai1108_B.memory1[25];
          ssSetInputPortSignalPtrs(rts, 14, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 14, 1);
          ssSetInputPortWidth(rts, 14, 1);
        }

        /* port 15 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn1.UPtrs15;
          sfcnUPtrs[0] = &kaiguangai1108_B.memory1[29];
          ssSetInputPortSignalPtrs(rts, 15, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 15, 1);
          ssSetInputPortWidth(rts, 15, 1);
        }

        /* port 16 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn1.UPtrs16;
          sfcnUPtrs[0] = &kaiguangai1108_B.memory1[2];
          ssSetInputPortSignalPtrs(rts, 16, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 16, 1);
          ssSetInputPortWidth(rts, 16, 1);
        }

        /* port 17 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn1.UPtrs17;
          sfcnUPtrs[0] = &kaiguangai1108_B.memory1[6];
          ssSetInputPortSignalPtrs(rts, 17, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 17, 1);
          ssSetInputPortWidth(rts, 17, 1);
        }

        /* port 18 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn1.UPtrs18;
          sfcnUPtrs[0] = &kaiguangai1108_B.memory1[10];
          ssSetInputPortSignalPtrs(rts, 18, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 18, 1);
          ssSetInputPortWidth(rts, 18, 1);
        }

        /* port 19 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn1.UPtrs19;
          sfcnUPtrs[0] = &kaiguangai1108_B.memory1[14];
          ssSetInputPortSignalPtrs(rts, 19, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 19, 1);
          ssSetInputPortWidth(rts, 19, 1);
        }

        /* port 20 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn1.UPtrs20;
          sfcnUPtrs[0] = &kaiguangai1108_B.memory1[18];
          ssSetInputPortSignalPtrs(rts, 20, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 20, 1);
          ssSetInputPortWidth(rts, 20, 1);
        }

        /* port 21 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn1.UPtrs21;
          sfcnUPtrs[0] = &kaiguangai1108_B.memory1[22];
          ssSetInputPortSignalPtrs(rts, 21, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 21, 1);
          ssSetInputPortWidth(rts, 21, 1);
        }

        /* port 22 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn1.UPtrs22;
          sfcnUPtrs[0] = &kaiguangai1108_B.memory1[26];
          ssSetInputPortSignalPtrs(rts, 22, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 22, 1);
          ssSetInputPortWidth(rts, 22, 1);
        }

        /* port 23 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn1.UPtrs23;
          sfcnUPtrs[0] = &kaiguangai1108_B.memory1[30];
          ssSetInputPortSignalPtrs(rts, 23, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 23, 1);
          ssSetInputPortWidth(rts, 23, 1);
        }

        /* port 24 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn1.UPtrs24;
          sfcnUPtrs[0] = &kaiguangai1108_B.memory1[3];
          ssSetInputPortSignalPtrs(rts, 24, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 24, 1);
          ssSetInputPortWidth(rts, 24, 1);
        }

        /* port 25 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn1.UPtrs25;
          sfcnUPtrs[0] = &kaiguangai1108_B.memory1[7];
          ssSetInputPortSignalPtrs(rts, 25, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 25, 1);
          ssSetInputPortWidth(rts, 25, 1);
        }

        /* port 26 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn1.UPtrs26;
          sfcnUPtrs[0] = &kaiguangai1108_B.memory1[11];
          ssSetInputPortSignalPtrs(rts, 26, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 26, 1);
          ssSetInputPortWidth(rts, 26, 1);
        }

        /* port 27 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn1.UPtrs27;
          sfcnUPtrs[0] = &kaiguangai1108_B.memory1[15];
          ssSetInputPortSignalPtrs(rts, 27, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 27, 1);
          ssSetInputPortWidth(rts, 27, 1);
        }

        /* port 28 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn1.UPtrs28;
          sfcnUPtrs[0] = &kaiguangai1108_B.memory1[19];
          ssSetInputPortSignalPtrs(rts, 28, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 28, 1);
          ssSetInputPortWidth(rts, 28, 1);
        }

        /* port 29 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn1.UPtrs29;
          sfcnUPtrs[0] = &kaiguangai1108_B.memory1[23];
          ssSetInputPortSignalPtrs(rts, 29, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 29, 1);
          ssSetInputPortWidth(rts, 29, 1);
        }

        /* port 30 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn1.UPtrs30;
          sfcnUPtrs[0] = &kaiguangai1108_B.memory1[27];
          ssSetInputPortSignalPtrs(rts, 30, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 30, 1);
          ssSetInputPortWidth(rts, 30, 1);
        }

        /* port 31 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn1.UPtrs31;
          sfcnUPtrs[0] = &kaiguangai1108_B.memory1[31];
          ssSetInputPortSignalPtrs(rts, 31, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 31, 1);
          ssSetInputPortWidth(rts, 31, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &kaiguangai1108_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 16);
          ssSetOutputPortSignal(rts, 0, ((real_T *) kaiguangai1108_B.PCI2_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 16);
          ssSetOutputPortSignal(rts, 1, ((real_T *) kaiguangai1108_B.PCI2_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI2");
      ssSetPath(rts, "kaiguangai1108/PCI-1756/PCI2");
      ssSetRTModel(rts,kaiguangai1108_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &kaiguangai1108_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)kaiguangai1108_P.PCI2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)kaiguangai1108_P.PCI2_P2_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &kaiguangai1108_DW.PCI2_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &kaiguangai1108_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &kaiguangai1108_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 6);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &kaiguangai1108_DW.PCI2_IWORK[0]);
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

    /* Level2 S-Function Block: kaiguangai1108/<S1>/PCI3 (pci1756IO) */
    {
      SimStruct *rts = kaiguangai1108_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod = kaiguangai1108_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset = kaiguangai1108_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = kaiguangai1108_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &kaiguangai1108_M->NonInlinedSFcns.blkInfo2[2]);
      }

      ssSetRTWSfcnInfo(rts, kaiguangai1108_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &kaiguangai1108_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &kaiguangai1108_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &kaiguangai1108_M->NonInlinedSFcns.methods4[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &kaiguangai1108_M->NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts,
          &kaiguangai1108_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 32);
        ssSetPortInfoForInputs(rts,
          &kaiguangai1108_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn2.UPtrs0;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn2.UPtrs1;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn2.UPtrs2;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 2, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }

        /* port 3 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn2.UPtrs3;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 3, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidth(rts, 3, 1);
        }

        /* port 4 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn2.UPtrs4;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 4, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidth(rts, 4, 1);
        }

        /* port 5 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn2.UPtrs5;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 5, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 5, 1);
          ssSetInputPortWidth(rts, 5, 1);
        }

        /* port 6 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn2.UPtrs6;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 6, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 6, 1);
          ssSetInputPortWidth(rts, 6, 1);
        }

        /* port 7 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn2.UPtrs7;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 7, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 7, 1);
          ssSetInputPortWidth(rts, 7, 1);
        }

        /* port 8 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn2.UPtrs8;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 8, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 8, 1);
          ssSetInputPortWidth(rts, 8, 1);
        }

        /* port 9 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn2.UPtrs9;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 9, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 9, 1);
          ssSetInputPortWidth(rts, 9, 1);
        }

        /* port 10 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn2.UPtrs10;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 10, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 10, 1);
          ssSetInputPortWidth(rts, 10, 1);
        }

        /* port 11 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn2.UPtrs11;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 11, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 11, 1);
          ssSetInputPortWidth(rts, 11, 1);
        }

        /* port 12 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn2.UPtrs12;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 12, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 12, 1);
          ssSetInputPortWidth(rts, 12, 1);
        }

        /* port 13 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn2.UPtrs13;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 13, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 13, 1);
          ssSetInputPortWidth(rts, 13, 1);
        }

        /* port 14 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn2.UPtrs14;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 14, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 14, 1);
          ssSetInputPortWidth(rts, 14, 1);
        }

        /* port 15 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn2.UPtrs15;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 15, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 15, 1);
          ssSetInputPortWidth(rts, 15, 1);
        }

        /* port 16 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn2.UPtrs16;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 16, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 16, 1);
          ssSetInputPortWidth(rts, 16, 1);
        }

        /* port 17 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn2.UPtrs17;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 17, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 17, 1);
          ssSetInputPortWidth(rts, 17, 1);
        }

        /* port 18 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn2.UPtrs18;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 18, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 18, 1);
          ssSetInputPortWidth(rts, 18, 1);
        }

        /* port 19 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn2.UPtrs19;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 19, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 19, 1);
          ssSetInputPortWidth(rts, 19, 1);
        }

        /* port 20 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn2.UPtrs20;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 20, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 20, 1);
          ssSetInputPortWidth(rts, 20, 1);
        }

        /* port 21 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn2.UPtrs21;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 21, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 21, 1);
          ssSetInputPortWidth(rts, 21, 1);
        }

        /* port 22 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn2.UPtrs22;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 22, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 22, 1);
          ssSetInputPortWidth(rts, 22, 1);
        }

        /* port 23 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn2.UPtrs23;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 23, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 23, 1);
          ssSetInputPortWidth(rts, 23, 1);
        }

        /* port 24 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn2.UPtrs24;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 24, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 24, 1);
          ssSetInputPortWidth(rts, 24, 1);
        }

        /* port 25 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn2.UPtrs25;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 25, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 25, 1);
          ssSetInputPortWidth(rts, 25, 1);
        }

        /* port 26 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn2.UPtrs26;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 26, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 26, 1);
          ssSetInputPortWidth(rts, 26, 1);
        }

        /* port 27 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn2.UPtrs27;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 27, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 27, 1);
          ssSetInputPortWidth(rts, 27, 1);
        }

        /* port 28 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn2.UPtrs28;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 28, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 28, 1);
          ssSetInputPortWidth(rts, 28, 1);
        }

        /* port 29 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn2.UPtrs29;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 29, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 29, 1);
          ssSetInputPortWidth(rts, 29, 1);
        }

        /* port 30 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn2.UPtrs30;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 30, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 30, 1);
          ssSetInputPortWidth(rts, 30, 1);
        }

        /* port 31 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &kaiguangai1108_M->NonInlinedSFcns.Sfcn2.UPtrs31;
          sfcnUPtrs[0] = &kaiguangai1108_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 31, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 31, 1);
          ssSetInputPortWidth(rts, 31, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &kaiguangai1108_M->NonInlinedSFcns.Sfcn2.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 16);
          ssSetOutputPortSignal(rts, 0, ((real_T *) kaiguangai1108_B.PCI3_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 16);
          ssSetOutputPortSignal(rts, 1, ((real_T *) kaiguangai1108_B.PCI3_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI3");
      ssSetPath(rts, "kaiguangai1108/PCI-1756/PCI3");
      ssSetRTModel(rts,kaiguangai1108_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &kaiguangai1108_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)kaiguangai1108_P.PCI3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)kaiguangai1108_P.PCI3_P2_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &kaiguangai1108_DW.PCI3_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &kaiguangai1108_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &kaiguangai1108_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 6);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &kaiguangai1108_DW.PCI3_IWORK[0]);
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
  kaiguangai1108_M->Sizes.numContStates = (0);/* Number of continuous states */
  kaiguangai1108_M->Sizes.numY = (0);  /* Number of model outputs */
  kaiguangai1108_M->Sizes.numU = (0);  /* Number of model inputs */
  kaiguangai1108_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  kaiguangai1108_M->Sizes.numSampTimes = (1);/* Number of sample times */
  kaiguangai1108_M->Sizes.numBlocks = (266);/* Number of blocks */
  kaiguangai1108_M->Sizes.numBlockIO = (510);/* Number of block outputs */
  kaiguangai1108_M->Sizes.numBlockPrms = (114);/* Sum of parameter "widths" */
  return kaiguangai1108_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
