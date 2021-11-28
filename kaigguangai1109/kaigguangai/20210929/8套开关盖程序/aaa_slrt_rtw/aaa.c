/*
 * aaa.c
 *
 * Code generation for model "aaa".
 *
 * Model version              : 1.66
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Wed Sep 29 09:32:02 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rt_logging_mmi.h"
#include "aaa_capi.h"
#include "aaa.h"
#include "aaa_private.h"

/* Named constants for Chart: '<S13>/Chart' */
#define aaa_CALL_EVENT                 (-1)
#define aaa_IN_NO_ACTIVE_CHILD         ((uint8_T)0U)
#define aaa_IN_off                     ((uint8_T)1U)
#define aaa_IN_off1                    ((uint8_T)2U)
#define aaa_IN_on                      ((uint8_T)2U)
#define aaa_IN_shoudong                ((uint8_T)3U)
#define aaa_IN_t                       ((uint8_T)3U)
#define aaa_IN_t1                      ((uint8_T)4U)
#define aaa_IN_t2                      ((uint8_T)5U)
#define aaa_IN_t2_o                    ((uint8_T)4U)
#define aaa_IN_t3                      ((uint8_T)5U)

/* Named constants for Chart: '<S14>/1#' */
#define aaa_CALL_EVENT_j               (-1)
#define aaa_IN_NO_ACTIVE_CHILD_m       ((uint8_T)0U)
#define aaa_IN_chushihua               ((uint8_T)1U)
#define aaa_IN_guangaishijian          ((uint8_T)2U)
#define aaa_IN_jiesuoshijian           ((uint8_T)3U)
#define aaa_IN_kaigaishijian           ((uint8_T)4U)
#define aaa_IN_off_g                   ((uint8_T)5U)
#define aaa_IN_on1                     ((uint8_T)6U)
#define aaa_IN_on10                    ((uint8_T)7U)
#define aaa_IN_on11                    ((uint8_T)8U)
#define aaa_IN_on12                    ((uint8_T)9U)
#define aaa_IN_on13                    ((uint8_T)10U)
#define aaa_IN_on14                    ((uint8_T)11U)
#define aaa_IN_on15                    ((uint8_T)12U)
#define aaa_IN_on16                    ((uint8_T)13U)
#define aaa_IN_on17                    ((uint8_T)14U)
#define aaa_IN_on18                    ((uint8_T)15U)
#define aaa_IN_on19                    ((uint8_T)16U)
#define aaa_IN_on2                     ((uint8_T)17U)
#define aaa_IN_on3                     ((uint8_T)18U)
#define aaa_IN_on4                     ((uint8_T)19U)
#define aaa_IN_on5                     ((uint8_T)20U)
#define aaa_IN_on6                     ((uint8_T)21U)
#define aaa_IN_on7                     ((uint8_T)22U)
#define aaa_IN_on8                     ((uint8_T)23U)
#define aaa_IN_on9                     ((uint8_T)24U)
#define aaa_IN_songkaishijian          ((uint8_T)25U)
#define aaa_IN_songkaishijian1         ((uint8_T)26U)
#define aaa_IN_songkaishijian2         ((uint8_T)27U)
#define aaa_IN_songkaishijian3         ((uint8_T)28U)
#define aaa_IN_songkaishijian4         ((uint8_T)29U)
#define aaa_IN_songkaishijian5         ((uint8_T)30U)
#define aaa_IN_songkaishijian6         ((uint8_T)31U)
#define aaa_IN_start                   ((uint8_T)32U)
#define aaa_IN_stop                    ((uint8_T)33U)
#define aaa_IN_suodingshijian          ((uint8_T)34U)
#define aaa_IN_t10guiling              ((uint8_T)35U)
#define aaa_IN_t2guiling               ((uint8_T)36U)
#define aaa_IN_t4guiling               ((uint8_T)37U)
#define aaa_IN_t6guiling               ((uint8_T)38U)
#define aaa_IN_t8guiling               ((uint8_T)39U)
#define aaa_IN_tguiling                ((uint8_T)40U)
#define aaa_IN_yajinshijian            ((uint8_T)41U)
#define aaa_IN_yanchishijian1          ((uint8_T)42U)
#define aaa_IN_yanchishijian2          ((uint8_T)43U)
#define aaa_IN_yanchishijian3          ((uint8_T)44U)
#define aaa_IN_yanchishijian4          ((uint8_T)45U)
#define aaa_IN_yanchishijian5          ((uint8_T)46U)
#define aaa_IN_yanchishijian6          ((uint8_T)47U)
#define aaa_IN_zidong                  ((uint8_T)1U)

/* Named constants for Chart: '<S5>/jinjichuli' */
#define aaa_CALL_EVENT_o               (-1)
#define aaa_IN_A                       ((uint8_T)1U)
#define aaa_IN_MANUAL                  ((uint8_T)1U)
#define aaa_IN_NO_ACTIVE_CHILD_a       ((uint8_T)0U)
#define aaa_IN_end                     ((uint8_T)2U)
#define aaa_IN_off1_c                  ((uint8_T)3U)
#define aaa_IN_on1_e                   ((uint8_T)4U)
#define aaa_IN_on_g                    ((uint8_T)2U)

/* Named constants for Chart: '<S2>/Chart' */
#define aaa_CALL_EVENT_a               (-1)
#define aaa_IN_NO_ACTIVE_CHILD_j       ((uint8_T)0U)
#define aaa_IN_off_o                   ((uint8_T)1U)
#define aaa_IN_on1_f                   ((uint8_T)3U)
#define aaa_IN_on_l                    ((uint8_T)2U)

/* Block signals (auto storage) */
B_aaa_T aaa_B;

/* Block states (auto storage) */
DW_aaa_T aaa_DW;

/* Real-time model */
RT_MODEL_aaa_T aaa_M_;
RT_MODEL_aaa_T *const aaa_M = &aaa_M_;

/* Forward declaration for local functions */
static void aaa_songkai(real_T rtu_sddw, real_T rtu_jsdw, real_T rtu_yjdw,
  real_T rtu_skdw, real_T rtu_songkai, B_Chart_aaa_T *localB, DW_Chart_aaa_T
  *localDW);
static void aaa_kaigai(real_T rtu_kgdw1, real_T rtu_kgdw2, real_T rtu_jsdw,
  real_T rtu_skdw, real_T rtu_kaigai, B_Chart_aaa_T *localB, DW_Chart_aaa_T
  *localDW);
static void aaa_exit_internal_shoudong(DW_Chart_aaa_T *localDW);
static void aaa_suoding(real_T rtu_kgdw1, real_T rtu_kgdw2, real_T rtu_sddw,
  real_T rtu_jsdw, real_T rtu_yjdw, real_T rtu_skdw, real_T rtu_suoding,
  B_Chart_aaa_T *localB, DW_Chart_aaa_T *localDW);
static void aaa_jiesuo(real_T rtu_kgdw1, real_T rtu_kgdw2, real_T rtu_sddw,
  real_T rtu_jsdw, real_T rtu_yjdw, real_T rtu_skdw, real_T rtu_jiesuo,
  B_Chart_aaa_T *localB, DW_Chart_aaa_T *localDW);
static void aaa_shoudong(real_T rtu_kgdw1, real_T rtu_kgdw2, real_T rtu_ggdw1,
  real_T rtu_ggdw2, real_T rtu_sddw, real_T rtu_jsdw, real_T rtu_yjdw, real_T
  rtu_skdw, real_T rtu_songkai, real_T rtu_kaigai, real_T rtu_suoding, real_T
  rtu_jiesuo, real_T rtu_guangai, real_T rtu_yajin, real_T rtu_jieshu,
  B_Chart_aaa_T *localB, DW_Chart_aaa_T *localDW);

/* Forward declaration for local functions */
static void aaa_on4(real_T rtu_kgdw1, real_T rtu_kgdw2, real_T rtu_skdw, real_T
                    rtu_jsdw, B_u_aaa_T *localB, DW_u_aaa_T *localDW);
static void aaa_on5(real_T rtu_ggdw1, real_T rtu_ggdw2, real_T rtu_skdw, real_T
                    rtu_jsdw, B_u_aaa_T *localB, DW_u_aaa_T *localDW);
static void aaa_on6(real_T rtu_ggdw1, real_T rtu_ggdw2, real_T rtu_sddw, real_T
                    rtu_yjdw, B_u_aaa_T *localB, DW_u_aaa_T *localDW);
static void aaa_enter_atomic_chushihua(B_u_aaa_T *localB);
static void aaa_on7(real_T rtu_shedingcishu, real_T rtu_jieshu, B_u_aaa_T
                    *localB, DW_u_aaa_T *localDW);
static void aaa_songkaishijian(real_T rtu_skdw, real_T rtu_jsdw, B_u_aaa_T
  *localB, DW_u_aaa_T *localDW);
static void aaa_songkaishijian1(real_T rtu_skdw, real_T rtu_jsdw, B_u_aaa_T
  *localB, DW_u_aaa_T *localDW);
static void aaa_songkaishijian2(real_T rtu_kgdw1, real_T rtu_kgdw2, real_T
  rtu_skdw, real_T rtu_jsdw, B_u_aaa_T *localB, DW_u_aaa_T *localDW);
static void aaa_songkaishijian3(real_T rtu_kgdw1, real_T rtu_kgdw2, real_T
  rtu_sddw, real_T rtu_yjdw, real_T rtu_skdw, real_T rtu_jsdw, B_u_aaa_T *localB,
  DW_u_aaa_T *localDW);
static void aaa_songkaishijian4(real_T rtu_kgdw1, real_T rtu_kgdw2, real_T
  rtu_skdw, real_T rtu_jsdw, B_u_aaa_T *localB, DW_u_aaa_T *localDW);
static void aaa_songkaishijian5(real_T rtu_ggdw1, real_T rtu_ggdw2, real_T
  rtu_skdw, real_T rtu_jsdw, B_u_aaa_T *localB, DW_u_aaa_T *localDW);
static void aaa_songkaishijian6(real_T rtu_ggdw1, real_T rtu_ggdw2, real_T
  rtu_sddw, real_T rtu_yjdw, B_u_aaa_T *localB, DW_u_aaa_T *localDW);
static void aaa_suodingshijian(real_T rtu_kgdw1, real_T rtu_kgdw2, real_T
  rtu_sddw, real_T rtu_yjdw, B_u_aaa_T *localB, DW_u_aaa_T *localDW);
static void aaa_t2guiling(real_T rtu_t3, B_u_aaa_T *localB, DW_u_aaa_T *localDW);
static void aaa_t4guiling(real_T rtu_t5, B_u_aaa_T *localB, DW_u_aaa_T *localDW);
static void aaa_t6guiling(real_T rtu_t7, B_u_aaa_T *localB, DW_u_aaa_T *localDW);
static void aaa_t8guiling(real_T rtu_t9, B_u_aaa_T *localB, DW_u_aaa_T *localDW);
static void aaa_tguiling(real_T rtu_t1, B_u_aaa_T *localB, DW_u_aaa_T *localDW);
static void aaa_yajinshijian(real_T rtu_ggdw1, real_T rtu_ggdw2, real_T rtu_sddw,
  real_T rtu_yjdw, B_u_aaa_T *localB, DW_u_aaa_T *localDW);
static void aaa_yanchishijian1(real_T rtu_t1, B_u_aaa_T *localB, DW_u_aaa_T
  *localDW);
static void aaa_yanchishijian2(real_T rtu_t3, B_u_aaa_T *localB, DW_u_aaa_T
  *localDW);
static void aaa_yanchishijian3(real_T rtu_t5, B_u_aaa_T *localB, DW_u_aaa_T
  *localDW);
static void aaa_yanchishijian4(real_T rtu_t7, B_u_aaa_T *localB, DW_u_aaa_T
  *localDW);
static void aaa_yanchishijian5(real_T rtu_t9, B_u_aaa_T *localB, DW_u_aaa_T
  *localDW);
static void aaa_enter_atomic_off(B_u_aaa_T *localB);
static void aaa_zidong(boolean_T rtu_start, real_T rtu_kgdw1, real_T rtu_kgdw2,
  real_T rtu_ggdw1, real_T rtu_ggdw2, real_T rtu_sddw, real_T rtu_yjdw, real_T
  rtu_skdw, real_T rtu_jsdw, real_T rtu_t1, real_T rtu_t3, real_T rtu_t5, real_T
  rtu_t7, real_T rtu_t9, real_T rtu_t11, real_T rtu_shedingcishu, real_T
  rtu_jieshu, B_u_aaa_T *localB, DW_u_aaa_T *localDW);

/* Forward declaration for local functions */
static void aaa_exit_internal_MANUAL(DW_jinjichuli_aaa_T *localDW);

/* Function for Chart: '<S13>/Chart' */
static void aaa_songkai(real_T rtu_sddw, real_T rtu_jsdw, real_T rtu_yjdw,
  real_T rtu_skdw, real_T rtu_songkai, B_Chart_aaa_T *localB, DW_Chart_aaa_T
  *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'songkai': '<S15>:1' */
  switch (localDW->is_songkai) {
   case aaa_IN_off:
    /* During 'off': '<S15>:15' */
    sf_internal_predicateOutput = ((rtu_songkai == 1.0) && (rtu_yjdw == 1.0) &&
      (rtu_sddw == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S15>:18' */
      localDW->is_songkai = aaa_IN_on;

      /* Entry 'on': '<S15>:17' */
      localB->skhx = 1.0;
      localB->skyichang = 0.0;
    }
    break;

   case aaa_IN_on:
    /* During 'on': '<S15>:17' */
    /* Transition: '<S15>:20' */
    if (rtu_skdw == 0.0) {
      /* Transition: '<S15>:22' */
      localDW->is_songkai = aaa_IN_t;
      localDW->temporalCounter_i1 = 0U;

      /* Entry 't': '<S15>:21' */
      localB->skt += 0.002;
    } else {
      sf_internal_predicateOutput = ((rtu_skdw == 1.0) && (rtu_jsdw == 1.0) &&
        (rtu_songkai == 0.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S15>:23' */
        localDW->is_songkai = aaa_IN_off;

        /* Entry 'off': '<S15>:15' */
        localB->skhx = 0.0;
        localB->skt = 0.0;
      } else {
        if (localB->skt > 2.0) {
          /* Transition: '<S15>:128' */
          localDW->is_songkai = aaa_IN_t1;

          /* Entry 't1': '<S15>:127' */
          localB->skyichang = 1.0;
        }
      }
    }
    break;

   case aaa_IN_t:
    /* During 't': '<S15>:21' */
    if (localDW->temporalCounter_i1 >= 1) {
      /* Transition: '<S15>:24' */
      if (rtu_skdw == 0.0) {
        /* Transition: '<S15>:22' */
        localDW->is_songkai = aaa_IN_t;
        localDW->temporalCounter_i1 = 0U;

        /* Entry 't': '<S15>:21' */
        localB->skt += 0.002;
      } else {
        sf_internal_predicateOutput = ((rtu_skdw == 1.0) && (rtu_jsdw == 1.0) &&
          (rtu_songkai == 0.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S15>:23' */
          localDW->is_songkai = aaa_IN_off;

          /* Entry 'off': '<S15>:15' */
          localB->skhx = 0.0;
          localB->skt = 0.0;
        } else {
          if (localB->skt > 2.0) {
            /* Transition: '<S15>:128' */
            localDW->is_songkai = aaa_IN_t1;

            /* Entry 't1': '<S15>:127' */
            localB->skyichang = 1.0;
          }
        }
      }
    }
    break;

   case aaa_IN_t1:
    /* During 't1': '<S15>:127' */
    /* Transition: '<S15>:131' */
    localDW->is_songkai = aaa_IN_t2;

    /* Entry 't2': '<S15>:130' */
    localB->skt += 0.002;
    break;

   default:
    /* During 't2': '<S15>:130' */
    if (rtu_skdw == 0.0) {
      /* Transition: '<S15>:134' */
      localDW->is_songkai = aaa_IN_t2;

      /* Entry 't2': '<S15>:130' */
      localB->skt += 0.002;
    } else {
      sf_internal_predicateOutput = ((rtu_skdw == 1.0) && (rtu_jsdw == 1.0) &&
        (rtu_songkai == 0.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S15>:135' */
        localDW->is_songkai = aaa_IN_off;

        /* Entry 'off': '<S15>:15' */
        localB->skhx = 0.0;
        localB->skt = 0.0;
      }
    }
    break;
  }
}

/* Function for Chart: '<S13>/Chart' */
static void aaa_kaigai(real_T rtu_kgdw1, real_T rtu_kgdw2, real_T rtu_jsdw,
  real_T rtu_skdw, real_T rtu_kaigai, B_Chart_aaa_T *localB, DW_Chart_aaa_T
  *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'kaigai': '<S15>:32' */
  switch (localDW->is_kaigai) {
   case aaa_IN_off:
    /* During 'off': '<S15>:33' */
    sf_internal_predicateOutput = ((rtu_kaigai == 1.0) && (rtu_skdw == 1.0) &&
      (rtu_jsdw == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S15>:36' */
      localDW->is_kaigai = aaa_IN_on;

      /* Entry 'on': '<S15>:37' */
      localB->kghx = 1.0;
      localB->kgzhiling1 = 1.0;
      localB->kgzhiling2 = 1.0;
      localB->kgyichang = 0.0;
    }
    break;

   case aaa_IN_on:
    /* During 'on': '<S15>:37' */
    /* Transition: '<S15>:38' */
    sf_internal_predicateOutput = ((rtu_kgdw1 == 0.0) && (rtu_kgdw2 == 0.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S15>:40' */
      localDW->is_kaigai = aaa_IN_t;
      localDW->temporalCounter_i2 = 0U;

      /* Entry 't': '<S15>:41' */
      localB->kgt++;
    } else {
      sf_internal_predicateOutput = ((rtu_kgdw1 == 1.0) && (rtu_kgdw2 == 1.0) &&
        (rtu_kaigai == 0.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S15>:35' */
        localDW->is_kaigai = aaa_IN_off;

        /* Entry 'off': '<S15>:33' */
        localB->kghx = 0.0;
        localB->kgt = 0.0;
        localB->kgzhiling1 = 0.0;
        localB->kgzhiling2 = 0.0;
      } else {
        if (localB->kgt > 12.0) {
          /* Transition: '<S15>:138' */
          localDW->is_kaigai = aaa_IN_t1;

          /* Entry 't1': '<S15>:141' */
          localB->kgyichang = 1.0;
        }
      }
    }
    break;

   case aaa_IN_t:
    /* During 't': '<S15>:41' */
    if (localDW->temporalCounter_i2 >= 1) {
      /* Transition: '<S15>:42' */
      sf_internal_predicateOutput = ((rtu_kgdw1 == 0.0) && (rtu_kgdw2 == 0.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S15>:40' */
        localDW->is_kaigai = aaa_IN_t;
        localDW->temporalCounter_i2 = 0U;

        /* Entry 't': '<S15>:41' */
        localB->kgt++;
      } else {
        sf_internal_predicateOutput = ((rtu_kgdw1 == 1.0) && (rtu_kgdw2 == 1.0) &&
          (rtu_kaigai == 0.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S15>:35' */
          localDW->is_kaigai = aaa_IN_off;

          /* Entry 'off': '<S15>:33' */
          localB->kghx = 0.0;
          localB->kgt = 0.0;
          localB->kgzhiling1 = 0.0;
          localB->kgzhiling2 = 0.0;
        } else {
          if (localB->kgt > 12.0) {
            /* Transition: '<S15>:138' */
            localDW->is_kaigai = aaa_IN_t1;

            /* Entry 't1': '<S15>:141' */
            localB->kgyichang = 1.0;
          }
        }
      }
    }
    break;

   case aaa_IN_t1:
    /* During 't1': '<S15>:141' */
    /* Transition: '<S15>:140' */
    localDW->is_kaigai = aaa_IN_t2;

    /* Entry 't2': '<S15>:137' */
    localB->kgt += 0.002;
    break;

   default:
    /* During 't2': '<S15>:137' */
    sf_internal_predicateOutput = ((rtu_kgdw1 == 0.0) && (rtu_kgdw2 == 0.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S15>:136' */
      localDW->is_kaigai = aaa_IN_t2;

      /* Entry 't2': '<S15>:137' */
      localB->kgt += 0.002;
    } else {
      sf_internal_predicateOutput = ((rtu_kgdw1 == 1.0) && (rtu_kgdw2 == 1.0) &&
        (rtu_kaigai == 0.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S15>:139' */
        localDW->is_kaigai = aaa_IN_off;

        /* Entry 'off': '<S15>:33' */
        localB->kghx = 0.0;
        localB->kgt = 0.0;
        localB->kgzhiling1 = 0.0;
        localB->kgzhiling2 = 0.0;
      }
    }
    break;
  }
}

/* Function for Chart: '<S13>/Chart' */
static void aaa_exit_internal_shoudong(DW_Chart_aaa_T *localDW)
{
  /* Exit Internal 'shoudong': '<S15>:7' */
  /* Exit Internal 'yajin': '<S15>:87' */
  localDW->is_yajin = aaa_IN_NO_ACTIVE_CHILD;
  localDW->is_active_yajin = 0U;

  /* Exit Internal 'guangai': '<S15>:86' */
  localDW->is_guangai = aaa_IN_NO_ACTIVE_CHILD;
  localDW->is_active_guangai = 0U;

  /* Exit Internal 'jiesuo': '<S15>:63' */
  localDW->is_jiesuo = aaa_IN_NO_ACTIVE_CHILD;
  localDW->is_active_jiesuo = 0U;

  /* Exit Internal 'suoding': '<S15>:53' */
  localDW->is_suoding = aaa_IN_NO_ACTIVE_CHILD;
  localDW->is_active_suoding = 0U;

  /* Exit Internal 'kaigai': '<S15>:32' */
  localDW->is_kaigai = aaa_IN_NO_ACTIVE_CHILD;
  localDW->is_active_kaigai = 0U;

  /* Exit Internal 'songkai': '<S15>:1' */
  localDW->is_songkai = aaa_IN_NO_ACTIVE_CHILD;
  localDW->is_active_songkai = 0U;
}

/* Function for Chart: '<S13>/Chart' */
static void aaa_suoding(real_T rtu_kgdw1, real_T rtu_kgdw2, real_T rtu_sddw,
  real_T rtu_jsdw, real_T rtu_yjdw, real_T rtu_skdw, real_T rtu_suoding,
  B_Chart_aaa_T *localB, DW_Chart_aaa_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'suoding': '<S15>:53' */
  switch (localDW->is_suoding) {
   case aaa_IN_off:
    /* During 'off': '<S15>:43' */
    sf_internal_predicateOutput = ((rtu_suoding == 1.0) && (rtu_skdw == 1.0) &&
      (rtu_jsdw == 1.0) && (rtu_kgdw1 == 1.0) && (rtu_kgdw2 == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S15>:46' */
      localDW->is_suoding = aaa_IN_on;

      /* Entry 'on': '<S15>:50' */
      localB->yjhx = 1.0;
      localB->sdyichang = 0.0;
    }
    break;

   case aaa_IN_on:
    /* During 'on': '<S15>:50' */
    /* Transition: '<S15>:49' */
    sf_internal_predicateOutput = ((rtu_sddw == 0.0) && (rtu_yjdw == 0.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S15>:47' */
      localDW->is_suoding = aaa_IN_t;
      localDW->temporalCounter_i4 = 0U;

      /* Entry 't': '<S15>:52' */
      localB->sdt++;
    } else {
      sf_internal_predicateOutput = ((rtu_sddw == 1.0) && (rtu_yjdw == 1.0) &&
        (rtu_suoding == 0.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S15>:45' */
        localDW->is_suoding = aaa_IN_off;

        /* Entry 'off': '<S15>:43' */
        localB->yjhx = 0.0;
        localB->sdt = 0.0;
      } else {
        if (localB->sdt > 2.0) {
          /* Transition: '<S15>:144' */
          localDW->is_suoding = aaa_IN_t1;

          /* Entry 't1': '<S15>:147' */
          localB->sdyichang = 1.0;
        }
      }
    }
    break;

   case aaa_IN_t:
    /* During 't': '<S15>:52' */
    if (localDW->temporalCounter_i4 >= 1) {
      /* Transition: '<S15>:51' */
      sf_internal_predicateOutput = ((rtu_sddw == 0.0) && (rtu_yjdw == 0.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S15>:47' */
        localDW->is_suoding = aaa_IN_t;
        localDW->temporalCounter_i4 = 0U;

        /* Entry 't': '<S15>:52' */
        localB->sdt++;
      } else {
        sf_internal_predicateOutput = ((rtu_sddw == 1.0) && (rtu_yjdw == 1.0) &&
          (rtu_suoding == 0.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S15>:45' */
          localDW->is_suoding = aaa_IN_off;

          /* Entry 'off': '<S15>:43' */
          localB->yjhx = 0.0;
          localB->sdt = 0.0;
        } else {
          if (localB->sdt > 2.0) {
            /* Transition: '<S15>:144' */
            localDW->is_suoding = aaa_IN_t1;

            /* Entry 't1': '<S15>:147' */
            localB->sdyichang = 1.0;
          }
        }
      }
    }
    break;

   case aaa_IN_t1:
    /* During 't1': '<S15>:147' */
    /* Transition: '<S15>:146' */
    localDW->is_suoding = aaa_IN_t2;

    /* Entry 't2': '<S15>:143' */
    localB->sdt += 0.002;
    break;

   default:
    /* During 't2': '<S15>:143' */
    sf_internal_predicateOutput = ((rtu_sddw == 0.0) && (rtu_yjdw == 0.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S15>:142' */
      localDW->is_suoding = aaa_IN_t2;

      /* Entry 't2': '<S15>:143' */
      localB->sdt += 0.002;
    } else {
      sf_internal_predicateOutput = ((rtu_sddw == 1.0) && (rtu_yjdw == 1.0) &&
        (rtu_suoding == 0.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S15>:145' */
        localDW->is_suoding = aaa_IN_off;

        /* Entry 'off': '<S15>:43' */
        localB->yjhx = 0.0;
        localB->sdt = 0.0;
      }
    }
    break;
  }
}

/* Function for Chart: '<S13>/Chart' */
static void aaa_jiesuo(real_T rtu_kgdw1, real_T rtu_kgdw2, real_T rtu_sddw,
  real_T rtu_jsdw, real_T rtu_yjdw, real_T rtu_skdw, real_T rtu_jiesuo,
  B_Chart_aaa_T *localB, DW_Chart_aaa_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'jiesuo': '<S15>:63' */
  switch (localDW->is_jiesuo) {
   case aaa_IN_off:
    /* During 'off': '<S15>:55' */
    sf_internal_predicateOutput = ((rtu_jiesuo == 1.0) && (rtu_yjdw == 1.0) &&
      (rtu_sddw == 1.0) && (rtu_kgdw1 == 1.0) && (rtu_kgdw2 == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S15>:59' */
      localDW->is_jiesuo = aaa_IN_on;

      /* Entry 'on': '<S15>:61' */
      localB->skhx = 1.0;
      localB->jsyichang = 0.0;
    }
    break;

   case aaa_IN_on:
    /* During 'on': '<S15>:61' */
    /* Transition: '<S15>:57' */
    sf_internal_predicateOutput = ((rtu_jsdw == 0.0) && (rtu_skdw == 0.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S15>:62' */
      localDW->is_jiesuo = aaa_IN_t;
      localDW->temporalCounter_i3 = 0U;

      /* Entry 't': '<S15>:64' */
      localB->jst++;
    } else {
      sf_internal_predicateOutput = ((rtu_jsdw == 1.0) && (rtu_skdw == 1.0) &&
        (rtu_jiesuo == 0.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S15>:56' */
        localDW->is_jiesuo = aaa_IN_off;

        /* Entry 'off': '<S15>:55' */
        localB->skhx = 0.0;
        localB->jst = 0.0;
      } else {
        if (localB->sdt > 2.0) {
          /* Transition: '<S15>:148' */
          localDW->is_jiesuo = aaa_IN_t1;

          /* Entry 't1': '<S15>:153' */
          localB->jsyichang = 1.0;
        }
      }
    }
    break;

   case aaa_IN_t:
    /* During 't': '<S15>:64' */
    if (localDW->temporalCounter_i3 >= 1) {
      /* Transition: '<S15>:58' */
      sf_internal_predicateOutput = ((rtu_jsdw == 0.0) && (rtu_skdw == 0.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S15>:62' */
        localDW->is_jiesuo = aaa_IN_t;
        localDW->temporalCounter_i3 = 0U;

        /* Entry 't': '<S15>:64' */
        localB->jst++;
      } else {
        sf_internal_predicateOutput = ((rtu_jsdw == 1.0) && (rtu_skdw == 1.0) &&
          (rtu_jiesuo == 0.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S15>:56' */
          localDW->is_jiesuo = aaa_IN_off;

          /* Entry 'off': '<S15>:55' */
          localB->skhx = 0.0;
          localB->jst = 0.0;
        } else {
          if (localB->sdt > 2.0) {
            /* Transition: '<S15>:148' */
            localDW->is_jiesuo = aaa_IN_t1;

            /* Entry 't1': '<S15>:153' */
            localB->jsyichang = 1.0;
          }
        }
      }
    }
    break;

   case aaa_IN_t1:
    /* During 't1': '<S15>:153' */
    /* Transition: '<S15>:150' */
    localDW->is_jiesuo = aaa_IN_t2;

    /* Entry 't2': '<S15>:149' */
    localB->jst += 0.002;
    break;

   default:
    /* During 't2': '<S15>:149' */
    sf_internal_predicateOutput = ((rtu_jsdw == 0.0) && (rtu_skdw == 0.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S15>:151' */
      localDW->is_jiesuo = aaa_IN_t2;

      /* Entry 't2': '<S15>:149' */
      localB->jst += 0.002;
    } else {
      sf_internal_predicateOutput = ((rtu_jsdw == 1.0) && (rtu_skdw == 1.0) &&
        (rtu_jiesuo == 0.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S15>:152' */
        localDW->is_jiesuo = aaa_IN_off;

        /* Entry 'off': '<S15>:55' */
        localB->skhx = 0.0;
        localB->jst = 0.0;
      }
    }
    break;
  }
}

/* Function for Chart: '<S13>/Chart' */
static void aaa_shoudong(real_T rtu_kgdw1, real_T rtu_kgdw2, real_T rtu_ggdw1,
  real_T rtu_ggdw2, real_T rtu_sddw, real_T rtu_jsdw, real_T rtu_yjdw, real_T
  rtu_skdw, real_T rtu_songkai, real_T rtu_kaigai, real_T rtu_suoding, real_T
  rtu_jiesuo, real_T rtu_guangai, real_T rtu_yajin, real_T rtu_jieshu,
  B_Chart_aaa_T *localB, DW_Chart_aaa_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'shoudong': '<S15>:7' */
  if (rtu_jieshu == 1.0) {
    /* Transition: '<S15>:126' */
    aaa_exit_internal_shoudong(localDW);
    localDW->is_c10_aaa = aaa_IN_off1;

    /* Entry 'off1': '<S15>:123' */
    localB->skhx = 0.0;
    localB->kghx = 0.0;
    localB->gghx = 0.0;
    localB->yjhx = 0.0;
    localB->kgzhiling1 = 0.0;
    localB->kgzhiling2 = 0.0;
    localB->ggzhiling1 = 0.0;
    localB->ggzhiling2 = 0.0;
  } else {
    aaa_songkai(rtu_sddw, rtu_jsdw, rtu_yjdw, rtu_skdw, rtu_songkai, localB,
                localDW);
    aaa_kaigai(rtu_kgdw1, rtu_kgdw2, rtu_jsdw, rtu_skdw, rtu_kaigai, localB,
               localDW);
    aaa_suoding(rtu_kgdw1, rtu_kgdw2, rtu_sddw, rtu_jsdw, rtu_yjdw, rtu_skdw,
                rtu_suoding, localB, localDW);
    aaa_jiesuo(rtu_kgdw1, rtu_kgdw2, rtu_sddw, rtu_jsdw, rtu_yjdw, rtu_skdw,
               rtu_jiesuo, localB, localDW);

    /* During 'guangai': '<S15>:86' */
    switch (localDW->is_guangai) {
     case aaa_IN_off:
      /* During 'off': '<S15>:76' */
      sf_internal_predicateOutput = ((rtu_guangai == 1.0) && (rtu_skdw == 1.0) &&
        (rtu_jsdw == 1.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S15>:79' */
        localDW->is_guangai = aaa_IN_on;

        /* Entry 'on': '<S15>:83' */
        localB->gghx = 1.0;
        localB->ggzhiling1 = 1.0;
        localB->ggzhiling2 = 1.0;
        localB->ggyichang = 0.0;
      }
      break;

     case aaa_IN_on:
      /* During 'on': '<S15>:83' */
      /* Transition: '<S15>:82' */
      sf_internal_predicateOutput = ((rtu_ggdw1 == 0.0) && (rtu_ggdw2 == 0.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S15>:80' */
        localDW->is_guangai = aaa_IN_t;
        localDW->temporalCounter_i6 = 0U;

        /* Entry 't': '<S15>:85' */
        localB->ggt++;
      } else {
        sf_internal_predicateOutput = ((rtu_ggdw1 == 1.0) && (rtu_ggdw2 == 1.0) &&
          (rtu_guangai == 0.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S15>:78' */
          localDW->is_guangai = aaa_IN_off;

          /* Entry 'off': '<S15>:76' */
          localB->gghx = 0.0;
          localB->ggt = 0.0;
          localB->ggzhiling1 = 0.0;
          localB->ggzhiling2 = 0.0;
        } else {
          if (localB->ggt > 12.0) {
            /* Transition: '<S15>:154' */
            localDW->is_guangai = aaa_IN_t1;

            /* Entry 't1': '<S15>:159' */
            localB->ggyichang = 1.0;
          }
        }
      }
      break;

     case aaa_IN_t:
      /* During 't': '<S15>:85' */
      if (localDW->temporalCounter_i6 >= 1) {
        /* Transition: '<S15>:84' */
        sf_internal_predicateOutput = ((rtu_ggdw1 == 0.0) && (rtu_ggdw2 == 0.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S15>:80' */
          localDW->is_guangai = aaa_IN_t;
          localDW->temporalCounter_i6 = 0U;

          /* Entry 't': '<S15>:85' */
          localB->ggt++;
        } else {
          sf_internal_predicateOutput = ((rtu_ggdw1 == 1.0) && (rtu_ggdw2 == 1.0)
            && (rtu_guangai == 0.0));
          if (sf_internal_predicateOutput) {
            /* Transition: '<S15>:78' */
            localDW->is_guangai = aaa_IN_off;

            /* Entry 'off': '<S15>:76' */
            localB->gghx = 0.0;
            localB->ggt = 0.0;
            localB->ggzhiling1 = 0.0;
            localB->ggzhiling2 = 0.0;
          } else {
            if (localB->ggt > 12.0) {
              /* Transition: '<S15>:154' */
              localDW->is_guangai = aaa_IN_t1;

              /* Entry 't1': '<S15>:159' */
              localB->ggyichang = 1.0;
            }
          }
        }
      }
      break;

     case aaa_IN_t1:
      /* During 't1': '<S15>:159' */
      /* Transition: '<S15>:156' */
      localDW->is_guangai = aaa_IN_t2;

      /* Entry 't2': '<S15>:155' */
      localB->sdt += 0.002;
      break;

     default:
      /* During 't2': '<S15>:155' */
      sf_internal_predicateOutput = ((rtu_ggdw1 == 0.0) && (rtu_ggdw2 == 0.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S15>:157' */
        localDW->is_guangai = aaa_IN_t2;

        /* Entry 't2': '<S15>:155' */
        localB->sdt += 0.002;
      } else {
        sf_internal_predicateOutput = ((rtu_ggdw1 == 1.0) && (rtu_ggdw2 == 1.0) &&
          (rtu_guangai == 0.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S15>:158' */
          localDW->is_guangai = aaa_IN_off;

          /* Entry 'off': '<S15>:76' */
          localB->gghx = 0.0;
          localB->ggt = 0.0;
          localB->ggzhiling1 = 0.0;
          localB->ggzhiling2 = 0.0;
        }
      }
      break;
    }

    /* During 'yajin': '<S15>:87' */
    switch (localDW->is_yajin) {
     case aaa_IN_off:
      /* During 'off': '<S15>:88' */
      sf_internal_predicateOutput = ((rtu_yajin == 1.0) && (rtu_ggdw1 == 1.0) &&
        (rtu_ggdw2 == 1.0) && (rtu_jsdw == 1.0) && (rtu_skdw == 1.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S15>:91' */
        localDW->is_yajin = aaa_IN_on;

        /* Entry 'on': '<S15>:92' */
        localB->yjhx = 1.0;
        localB->yjyichang = 0.0;
      }
      break;

     case aaa_IN_on:
      /* During 'on': '<S15>:92' */
      /* Transition: '<S15>:93' */
      sf_internal_predicateOutput = ((rtu_yjdw == 0.0) && (rtu_sddw == 0.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S15>:95' */
        localDW->is_yajin = aaa_IN_t;
        localDW->temporalCounter_i5 = 0U;

        /* Entry 't': '<S15>:96' */
        localB->yjt++;
      } else {
        sf_internal_predicateOutput = ((rtu_yjdw == 1.0) && (rtu_sddw == 1.0) &&
          (rtu_yajin == 0.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S15>:90' */
          localDW->is_yajin = aaa_IN_off;

          /* Entry 'off': '<S15>:88' */
          localB->yjhx = 0.0;
          localB->yjt = 0.0;
        } else {
          if (localB->ggt > 12.0) {
            /* Transition: '<S15>:161' */
            localDW->is_yajin = aaa_IN_t3;

            /* Entry 't3': '<S15>:172' */
            localB->yjyichang = 1.0;
          }
        }
      }
      break;

     case aaa_IN_t:
      /* During 't': '<S15>:96' */
      if (localDW->temporalCounter_i5 >= 1) {
        /* Transition: '<S15>:97' */
        sf_internal_predicateOutput = ((rtu_yjdw == 0.0) && (rtu_sddw == 0.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S15>:95' */
          localDW->is_yajin = aaa_IN_t;
          localDW->temporalCounter_i5 = 0U;

          /* Entry 't': '<S15>:96' */
          localB->yjt++;
        } else {
          sf_internal_predicateOutput = ((rtu_yjdw == 1.0) && (rtu_sddw == 1.0) &&
            (rtu_yajin == 0.0));
          if (sf_internal_predicateOutput) {
            /* Transition: '<S15>:90' */
            localDW->is_yajin = aaa_IN_off;

            /* Entry 'off': '<S15>:88' */
            localB->yjhx = 0.0;
            localB->yjt = 0.0;
          } else {
            if (localB->ggt > 12.0) {
              /* Transition: '<S15>:161' */
              localDW->is_yajin = aaa_IN_t3;

              /* Entry 't3': '<S15>:172' */
              localB->yjyichang = 1.0;
            }
          }
        }
      }
      break;

     case aaa_IN_t2_o:
      /* During 't2': '<S15>:162' */
      sf_internal_predicateOutput = ((rtu_yjdw == 0.0) && (rtu_sddw == 0.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S15>:164' */
        localDW->is_yajin = aaa_IN_t2_o;

        /* Entry 't2': '<S15>:162' */
        localB->sdt += 0.002;
      } else {
        sf_internal_predicateOutput = ((rtu_yjdw == 1.0) && (rtu_sddw == 1.0) &&
          (rtu_yajin == 0.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S15>:165' */
          localDW->is_yajin = aaa_IN_off;

          /* Entry 'off': '<S15>:88' */
          localB->yjhx = 0.0;
          localB->yjt = 0.0;
        }
      }
      break;

     default:
      /* During 't3': '<S15>:172' */
      /* Transition: '<S15>:163' */
      localDW->is_yajin = aaa_IN_t2_o;

      /* Entry 't2': '<S15>:162' */
      localB->sdt += 0.002;
      break;
    }
  }
}

/*
 * System initialize for atomic system:
 *    '<S13>/Chart'
 *    '<S13>/Chart1'
 *    '<S13>/Chart2'
 *    '<S13>/Chart3'
 *    '<S13>/Chart4'
 *    '<S13>/Chart5'
 *    '<S13>/Chart6'
 *    '<S13>/Chart7'
 */
void aaa_Chart_Init(DW_Chart_aaa_T *localDW)
{
  localDW->sfEvent = aaa_CALL_EVENT;
  localDW->is_active_guangai = 0U;
  localDW->is_guangai = aaa_IN_NO_ACTIVE_CHILD;
  localDW->temporalCounter_i6 = 0U;
  localDW->is_active_jiesuo = 0U;
  localDW->is_jiesuo = aaa_IN_NO_ACTIVE_CHILD;
  localDW->temporalCounter_i3 = 0U;
  localDW->is_active_kaigai = 0U;
  localDW->is_kaigai = aaa_IN_NO_ACTIVE_CHILD;
  localDW->temporalCounter_i2 = 0U;
  localDW->is_active_songkai = 0U;
  localDW->is_songkai = aaa_IN_NO_ACTIVE_CHILD;
  localDW->temporalCounter_i1 = 0U;
  localDW->is_active_suoding = 0U;
  localDW->is_suoding = aaa_IN_NO_ACTIVE_CHILD;
  localDW->temporalCounter_i4 = 0U;
  localDW->is_active_yajin = 0U;
  localDW->is_yajin = aaa_IN_NO_ACTIVE_CHILD;
  localDW->temporalCounter_i5 = 0U;
  localDW->is_active_c10_aaa = 0U;
  localDW->is_c10_aaa = aaa_IN_NO_ACTIVE_CHILD;
}

/*
 * Output and update for atomic system:
 *    '<S13>/Chart'
 *    '<S13>/Chart1'
 *    '<S13>/Chart2'
 *    '<S13>/Chart3'
 *    '<S13>/Chart4'
 *    '<S13>/Chart5'
 *    '<S13>/Chart6'
 *    '<S13>/Chart7'
 */
void aaa_Chart(real_T rtu_start, real_T rtu_kgdw1, real_T rtu_kgdw2, real_T
               rtu_ggdw1, real_T rtu_ggdw2, real_T rtu_sddw, real_T rtu_jsdw,
               real_T rtu_yjdw, real_T rtu_skdw, real_T rtu_songkai, real_T
               rtu_kaigai, real_T rtu_suoding, real_T rtu_jiesuo, real_T
               rtu_guangai, real_T rtu_yajin, real_T rtu_jieshu, B_Chart_aaa_T
               *localB, DW_Chart_aaa_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* Gateway: Subsystem1/shoudong/Chart */
  localDW->sfEvent = aaa_CALL_EVENT;
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
  if (localDW->is_active_c10_aaa == 0U) {
    /* Entry: Subsystem1/shoudong/Chart */
    localDW->is_active_c10_aaa = 1U;

    /* Entry Internal: Subsystem1/shoudong/Chart */
    /* Transition: '<S15>:120' */
    localDW->is_c10_aaa = aaa_IN_off;

    /* Entry 'off': '<S15>:121' */
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
    switch (localDW->is_c10_aaa) {
     case aaa_IN_off:
      /* During 'off': '<S15>:121' */
      sf_internal_predicateOutput = ((rtu_start == 1.0) && (rtu_jieshu == 0.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S15>:122' */
        localDW->is_c10_aaa = aaa_IN_shoudong;

        /* Entry Internal 'shoudong': '<S15>:7' */
        localDW->is_active_songkai = 1U;

        /* Entry Internal 'songkai': '<S15>:1' */
        /* Transition: '<S15>:16' */
        localDW->is_songkai = aaa_IN_off;

        /* Entry 'off': '<S15>:15' */
        localB->skt = 0.0;
        localDW->is_active_kaigai = 1U;

        /* Entry Internal 'kaigai': '<S15>:32' */
        /* Transition: '<S15>:34' */
        localDW->is_kaigai = aaa_IN_off;

        /* Entry 'off': '<S15>:33' */
        localB->kghx = 0.0;
        localB->kgt = 0.0;
        localB->kgzhiling1 = 0.0;
        localB->kgzhiling2 = 0.0;
        localDW->is_active_suoding = 1U;

        /* Entry Internal 'suoding': '<S15>:53' */
        /* Transition: '<S15>:44' */
        localDW->is_suoding = aaa_IN_off;

        /* Entry 'off': '<S15>:43' */
        localB->sdt = 0.0;
        localDW->is_active_jiesuo = 1U;

        /* Entry Internal 'jiesuo': '<S15>:63' */
        /* Transition: '<S15>:54' */
        localDW->is_jiesuo = aaa_IN_off;

        /* Entry 'off': '<S15>:55' */
        localB->skhx = 0.0;
        localB->jst = 0.0;
        localDW->is_active_guangai = 1U;

        /* Entry Internal 'guangai': '<S15>:86' */
        /* Transition: '<S15>:77' */
        localDW->is_guangai = aaa_IN_off;

        /* Entry 'off': '<S15>:76' */
        localB->gghx = 0.0;
        localB->ggt = 0.0;
        localB->ggzhiling1 = 0.0;
        localB->ggzhiling2 = 0.0;
        localDW->is_active_yajin = 1U;

        /* Entry Internal 'yajin': '<S15>:87' */
        /* Transition: '<S15>:89' */
        localDW->is_yajin = aaa_IN_off;

        /* Entry 'off': '<S15>:88' */
        localB->yjhx = 0.0;
        localB->yjt = 0.0;
      }
      break;

     case aaa_IN_off1:
      /* During 'off1': '<S15>:123' */
      break;

     default:
      aaa_shoudong(rtu_kgdw1, rtu_kgdw2, rtu_ggdw1, rtu_ggdw2, rtu_sddw,
                   rtu_jsdw, rtu_yjdw, rtu_skdw, rtu_songkai, rtu_kaigai,
                   rtu_suoding, rtu_jiesuo, rtu_guangai, rtu_yajin, rtu_jieshu,
                   localB, localDW);
      break;
    }
  }
}

/* Function for Chart: '<S14>/1#' */
static void aaa_on4(real_T rtu_kgdw1, real_T rtu_kgdw2, real_T rtu_skdw, real_T
                    rtu_jsdw, B_u_aaa_T *localB, DW_u_aaa_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'on4': '<S23>:113' */
  /* Transition: '<S23>:123' */
  sf_internal_predicateOutput = ((rtu_kgdw1 == 0.0) || (rtu_kgdw2 == 0.0) ||
    (rtu_jsdw == 0.0) || (rtu_skdw == 0.0));
  if (sf_internal_predicateOutput) {
    /* Transition: '<S23>:117' */
    localDW->is_zidong = aaa_IN_jiesuoshijian;

    /* Entry 'jiesuoshijian': '<S23>:116' */
    localB->jst += 0.002;
  } else {
    sf_internal_predicateOutput = ((rtu_kgdw1 == 1.0) && (rtu_kgdw2 == 1.0) &&
      (rtu_jsdw == 1.0) && (rtu_skdw == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S23>:120' */
      localDW->is_zidong = aaa_IN_t6guiling;

      /* Entry 't6guiling': '<S23>:140' */
      localDW->t6 = 0.0;
    }
  }
}

/* Function for Chart: '<S14>/1#' */
static void aaa_on5(real_T rtu_ggdw1, real_T rtu_ggdw2, real_T rtu_skdw, real_T
                    rtu_jsdw, B_u_aaa_T *localB, DW_u_aaa_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'on5': '<S23>:131' */
  /* Transition: '<S23>:150' */
  sf_internal_predicateOutput = ((rtu_ggdw1 == 0.0) || (rtu_ggdw2 == 0.0) ||
    (rtu_jsdw == 0.0) || (rtu_skdw == 0.0));
  if (sf_internal_predicateOutput) {
    /* Transition: '<S23>:144' */
    localDW->is_zidong = aaa_IN_guangaishijian;

    /* Entry 'guangaishijian': '<S23>:143' */
    localB->ggt += 0.002;
  } else {
    sf_internal_predicateOutput = ((rtu_ggdw1 == 1.0) && (rtu_ggdw2 == 1.0) &&
      (rtu_jsdw == 1.0) && (rtu_skdw == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S23>:145' */
      localDW->is_zidong = aaa_IN_t8guiling;

      /* Entry 't8guiling': '<S23>:148' */
      localDW->t8 = 0.0;
    }
  }
}

/* Function for Chart: '<S14>/1#' */
static void aaa_on6(real_T rtu_ggdw1, real_T rtu_ggdw2, real_T rtu_sddw, real_T
                    rtu_yjdw, B_u_aaa_T *localB, DW_u_aaa_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'on6': '<S23>:157' */
  /* Transition: '<S23>:164' */
  sf_internal_predicateOutput = ((rtu_sddw == 0.0) || (rtu_yjdw == 0.0));
  if (sf_internal_predicateOutput) {
    /* Transition: '<S23>:158' */
    localDW->is_zidong = aaa_IN_yajinshijian;

    /* Entry 'yajinshijian': '<S23>:161' */
    localB->yjt += 0.002;
  } else {
    sf_internal_predicateOutput = ((rtu_sddw == 1.0) && (rtu_yjdw == 1.0) &&
      (rtu_ggdw1 == 1.0) && (rtu_ggdw2 == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S23>:167' */
      localDW->is_zidong = aaa_IN_t10guiling;

      /* Entry 't10guiling': '<S23>:336' */
      localDW->t10 = 0.0;
    }
  }
}

/* Function for Chart: '<S14>/1#' */
static void aaa_enter_atomic_chushihua(B_u_aaa_T *localB)
{
  /* Entry 'chushihua': '<S23>:3' */
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

/* Function for Chart: '<S14>/1#' */
static void aaa_on7(real_T rtu_shedingcishu, real_T rtu_jieshu, B_u_aaa_T
                    *localB, DW_u_aaa_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'on7': '<S23>:170' */
  /* Transition: '<S23>:191' */
  sf_internal_predicateOutput = ((localB->yikaicishu < rtu_shedingcishu) &&
    (rtu_jieshu == 0.0));
  if (sf_internal_predicateOutput) {
    /* Transition: '<S23>:192' */
    localDW->is_zidong = aaa_IN_chushihua;
    aaa_enter_atomic_chushihua(localB);
  } else {
    sf_internal_predicateOutput = ((localB->yikaicishu >= rtu_shedingcishu) ||
      (rtu_jieshu == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S23>:195' */
      localDW->is_zidong = aaa_IN_stop;

      /* Entry 'stop': '<S23>:193' */
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

/* Function for Chart: '<S14>/1#' */
static void aaa_songkaishijian(real_T rtu_skdw, real_T rtu_jsdw, B_u_aaa_T
  *localB, DW_u_aaa_T *localDW)
{
  boolean_T sf_internal_predicateOutput;
  boolean_T guard1 = false;

  /* During 'songkaishijian': '<S23>:33' */
  /* Transition: '<S23>:349' */
  guard1 = false;
  if (localB->skt <= 2.0) {
    /* Transition: '<S23>:350' */
    sf_internal_predicateOutput = ((rtu_jsdw == 0.0) || (rtu_skdw == 0.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S23>:50' */
      localDW->is_zidong = aaa_IN_songkaishijian;

      /* Entry 'songkaishijian': '<S23>:33' */
      localB->skt += 0.002;
    } else {
      sf_internal_predicateOutput = ((rtu_jsdw == 1.0) && (rtu_skdw == 1.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S23>:53' */
        localDW->is_zidong = aaa_IN_tguiling;

        /* Entry 'tguiling': '<S23>:52' */
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
      /* Transition: '<S23>:353' */
      localDW->is_zidong = aaa_IN_on10;

      /* Entry 'on10': '<S23>:366' */
      localB->skyichang = 1.0;
    }
  }
}

/* Function for Chart: '<S14>/1#' */
static void aaa_songkaishijian1(real_T rtu_skdw, real_T rtu_jsdw, B_u_aaa_T
  *localB, DW_u_aaa_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'songkaishijian1': '<S23>:355' */
  sf_internal_predicateOutput = ((rtu_jsdw == 0.0) || (rtu_skdw == 0.0));
  if (sf_internal_predicateOutput) {
    /* Transition: '<S23>:356' */
    localDW->is_zidong = aaa_IN_songkaishijian1;

    /* Entry 'songkaishijian1': '<S23>:355' */
    localB->skt += 0.002;
  } else {
    sf_internal_predicateOutput = ((rtu_jsdw == 1.0) && (rtu_skdw == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S23>:357' */
      localDW->is_zidong = aaa_IN_on8;

      /* Entry 'on8': '<S23>:352' */
      localB->skhx = 0.0;
    }
  }
}

/* Function for Chart: '<S14>/1#' */
static void aaa_songkaishijian2(real_T rtu_kgdw1, real_T rtu_kgdw2, real_T
  rtu_skdw, real_T rtu_jsdw, B_u_aaa_T *localB, DW_u_aaa_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'songkaishijian2': '<S23>:365' */
  sf_internal_predicateOutput = ((rtu_kgdw1 == 0.0) || (rtu_kgdw2 == 0.0) ||
    (rtu_jsdw == 0.0) || (rtu_skdw == 0.0));
  if (sf_internal_predicateOutput) {
    /* Transition: '<S23>:360' */
    localDW->is_zidong = aaa_IN_songkaishijian2;

    /* Entry 'songkaishijian2': '<S23>:365' */
    localB->kgt += 0.002;
  } else {
    sf_internal_predicateOutput = ((rtu_kgdw1 == 1.0) && (rtu_kgdw2 == 1.0) &&
      (rtu_jsdw == 1.0) && (rtu_skdw == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S23>:362' */
      localDW->is_zidong = aaa_IN_on9;

      /* Entry 'on9': '<S23>:358' */
      localB->kghx = 0.0;
      localB->kgzhiling1 = 0.0;
      localB->kgzhiling2 = 0.0;
    }
  }
}

/* Function for Chart: '<S14>/1#' */
static void aaa_songkaishijian3(real_T rtu_kgdw1, real_T rtu_kgdw2, real_T
  rtu_sddw, real_T rtu_yjdw, real_T rtu_skdw, real_T rtu_jsdw, B_u_aaa_T *localB,
  DW_u_aaa_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'songkaishijian3': '<S23>:387' */
  sf_internal_predicateOutput = ((rtu_kgdw1 == 0.0) || (rtu_kgdw2 == 0.0) ||
    (rtu_sddw == 0.0) || (rtu_yjdw == 0.0));
  if (sf_internal_predicateOutput) {
    /* Transition: '<S23>:382' */
    localDW->is_zidong = aaa_IN_songkaishijian3;

    /* Entry 'songkaishijian3': '<S23>:387' */
    localB->sdt += 0.002;
  } else {
    sf_internal_predicateOutput = ((rtu_kgdw1 == 1.0) && (rtu_kgdw2 == 1.0) &&
      (rtu_jsdw == 1.0) && (rtu_skdw == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S23>:383' */
      localDW->is_zidong = aaa_IN_on13;

      /* Entry 'on13': '<S23>:381' */
      localB->yjhx = 0.0;
    }
  }
}

/* Function for Chart: '<S14>/1#' */
static void aaa_songkaishijian4(real_T rtu_kgdw1, real_T rtu_kgdw2, real_T
  rtu_skdw, real_T rtu_jsdw, B_u_aaa_T *localB, DW_u_aaa_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'songkaishijian4': '<S23>:392' */
  sf_internal_predicateOutput = ((rtu_kgdw1 == 0.0) || (rtu_kgdw2 == 0.0) ||
    (rtu_jsdw == 0.0) || (rtu_skdw == 0.0));
  if (sf_internal_predicateOutput) {
    /* Transition: '<S23>:391' */
    localDW->is_zidong = aaa_IN_songkaishijian4;

    /* Entry 'songkaishijian4': '<S23>:392' */
    localB->jst += 0.002;
  } else {
    sf_internal_predicateOutput = ((rtu_kgdw1 == 1.0) && (rtu_kgdw2 == 1.0) &&
      (rtu_jsdw == 1.0) && (rtu_skdw == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S23>:395' */
      localDW->is_zidong = aaa_IN_on15;

      /* Entry 'on15': '<S23>:398' */
      localB->skhx = 0.0;
    }
  }
}

/* Function for Chart: '<S14>/1#' */
static void aaa_songkaishijian5(real_T rtu_ggdw1, real_T rtu_ggdw2, real_T
  rtu_skdw, real_T rtu_jsdw, B_u_aaa_T *localB, DW_u_aaa_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'songkaishijian5': '<S23>:404' */
  sf_internal_predicateOutput = ((rtu_ggdw1 == 1.0) && (rtu_ggdw2 == 1.0) &&
    (rtu_jsdw == 1.0) && (rtu_skdw == 1.0));
  if (sf_internal_predicateOutput) {
    /* Transition: '<S23>:399' */
    localDW->is_zidong = aaa_IN_on17;

    /* Entry 'on17': '<S23>:401' */
    localB->gghx = 0.0;
    localB->ggzhiling1 = 0.0;
    localB->ggzhiling2 = 0.0;
  } else {
    sf_internal_predicateOutput = ((rtu_ggdw1 == 0.0) || (rtu_ggdw2 == 0.0) ||
      (rtu_jsdw == 0.0) || (rtu_skdw == 0.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S23>:408' */
      localDW->is_zidong = aaa_IN_songkaishijian5;

      /* Entry 'songkaishijian5': '<S23>:404' */
      localB->ggt += 0.002;
    }
  }
}

/* Function for Chart: '<S14>/1#' */
static void aaa_songkaishijian6(real_T rtu_ggdw1, real_T rtu_ggdw2, real_T
  rtu_sddw, real_T rtu_yjdw, B_u_aaa_T *localB, DW_u_aaa_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'songkaishijian6': '<S23>:417' */
  sf_internal_predicateOutput = ((rtu_sddw == 1.0) && (rtu_yjdw == 1.0) &&
    (rtu_ggdw1 == 1.0) && (rtu_ggdw2 == 1.0));
  if (sf_internal_predicateOutput) {
    /* Transition: '<S23>:411' */
    localDW->is_zidong = aaa_IN_on19;

    /* Entry 'on19': '<S23>:415' */
    localB->yjhx = 0.0;
  } else {
    sf_internal_predicateOutput = ((rtu_sddw == 0.0) || (rtu_yjdw == 0.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S23>:409' */
      localDW->is_zidong = aaa_IN_songkaishijian6;

      /* Entry 'songkaishijian6': '<S23>:417' */
      localB->yjt += 0.002;
    }
  }
}

/* Function for Chart: '<S14>/1#' */
static void aaa_suodingshijian(real_T rtu_kgdw1, real_T rtu_kgdw2, real_T
  rtu_sddw, real_T rtu_yjdw, B_u_aaa_T *localB, DW_u_aaa_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'suodingshijian': '<S23>:97' */
  /* Transition: '<S23>:384' */
  if (localB->sdt > 2.0) {
    /* Transition: '<S23>:385' */
    localDW->is_zidong = aaa_IN_on12;

    /* Entry 'on12': '<S23>:378' */
    localB->sdyichang = 1.0;
  } else {
    if (localB->sdt <= 2.0) {
      /* Transition: '<S23>:379' */
      sf_internal_predicateOutput = ((rtu_kgdw1 == 0.0) || (rtu_kgdw2 == 0.0) ||
        (rtu_sddw == 0.0) || (rtu_yjdw == 0.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S23>:99' */
        localDW->is_zidong = aaa_IN_suodingshijian;

        /* Entry 'suodingshijian': '<S23>:97' */
        localB->sdt += 0.002;
      } else {
        sf_internal_predicateOutput = ((rtu_kgdw1 == 1.0) && (rtu_kgdw2 == 1.0) &&
          (rtu_sddw == 1.0) && (rtu_yjdw == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S23>:101' */
          localDW->is_zidong = aaa_IN_t4guiling;

          /* Entry 't4guiling': '<S23>:100' */
          localDW->t4 = 0.0;
        }
      }
    }
  }
}

/* Function for Chart: '<S14>/1#' */
static void aaa_t2guiling(real_T rtu_t3, B_u_aaa_T *localB, DW_u_aaa_T *localDW)
{
  /* During 't2guiling': '<S23>:83' */
  /* Transition: '<S23>:85' */
  if (localDW->t2 < rtu_t3) {
    /* Transition: '<S23>:79' */
    localDW->is_zidong = aaa_IN_yanchishijian2;
    localDW->temporalCounter_i1 = 0U;

    /* Entry 'yanchishijian2': '<S23>:69' */
    localDW->t2++;
  } else {
    if (localDW->t2 >= rtu_t3) {
      /* Transition: '<S23>:112' */
      localDW->is_zidong = aaa_IN_on3;

      /* Entry 'on3': '<S23>:81' */
      localB->kghx = 0.0;
      localB->kgzhiling1 = 0.0;
      localB->kgzhiling2 = 0.0;
      localB->yjhx = 1.0;
    }
  }
}

/* Function for Chart: '<S14>/1#' */
static void aaa_t4guiling(real_T rtu_t5, B_u_aaa_T *localB, DW_u_aaa_T *localDW)
{
  /* During 't4guiling': '<S23>:100' */
  /* Transition: '<S23>:110' */
  if (localDW->t4 < rtu_t5) {
    /* Transition: '<S23>:109' */
    localDW->is_zidong = aaa_IN_yanchishijian3;
    localDW->temporalCounter_i1 = 0U;

    /* Entry 'yanchishijian3': '<S23>:108' */
    localDW->t4++;
  } else {
    if (localDW->t4 >= rtu_t5) {
      /* Transition: '<S23>:114' */
      localDW->is_zidong = aaa_IN_on4;

      /* Entry 'on4': '<S23>:113' */
      localB->yjhx = 0.0;
      localB->skhx = 1.0;
    }
  }
}

/* Function for Chart: '<S14>/1#' */
static void aaa_t6guiling(real_T rtu_t7, B_u_aaa_T *localB, DW_u_aaa_T *localDW)
{
  /* During 't6guiling': '<S23>:140' */
  /* Transition: '<S23>:141' */
  if (localDW->t6 < rtu_t7) {
    /* Transition: '<S23>:127' */
    localDW->is_zidong = aaa_IN_yanchishijian4;
    localDW->temporalCounter_i1 = 0U;

    /* Entry 'yanchishijian4': '<S23>:126' */
    localDW->t6++;
  } else {
    if (localDW->t6 >= rtu_t7) {
      /* Transition: '<S23>:129' */
      localDW->is_zidong = aaa_IN_on5;

      /* Entry 'on5': '<S23>:131' */
      localB->skhx = 0.0;
      localB->gghx = 1.0;
      localB->ggzhiling1 = 1.0;
      localB->ggzhiling2 = 1.0;
    }
  }
}

/* Function for Chart: '<S14>/1#' */
static void aaa_t8guiling(real_T rtu_t9, B_u_aaa_T *localB, DW_u_aaa_T *localDW)
{
  /* During 't8guiling': '<S23>:148' */
  /* Transition: '<S23>:156' */
  if (localDW->t8 < rtu_t9) {
    /* Transition: '<S23>:151' */
    localDW->is_zidong = aaa_IN_yanchishijian5;
    localDW->temporalCounter_i1 = 0U;

    /* Entry 'yanchishijian5': '<S23>:153' */
    localDW->t8++;
  } else {
    if (localDW->t8 >= rtu_t9) {
      /* Transition: '<S23>:169' */
      localDW->is_zidong = aaa_IN_on6;

      /* Entry 'on6': '<S23>:157' */
      localB->gghx = 0.0;
      localB->ggzhiling1 = 0.0;
      localB->ggzhiling2 = 0.0;
      localB->yjhx = 1.0;
    }
  }
}

/* Function for Chart: '<S14>/1#' */
static void aaa_tguiling(real_T rtu_t1, B_u_aaa_T *localB, DW_u_aaa_T *localDW)
{
  /* During 'tguiling': '<S23>:52' */
  /* Transition: '<S23>:55' */
  if (localDW->t < rtu_t1) {
    /* Transition: '<S23>:57' */
    localDW->is_zidong = aaa_IN_yanchishijian1;
    localDW->temporalCounter_i1 = 0U;

    /* Entry 'yanchishijian1': '<S23>:56' */
    localDW->t++;
  } else {
    if (localDW->t >= rtu_t1) {
      /* Transition: '<S23>:111' */
      localDW->is_zidong = aaa_IN_on2;

      /* Entry 'on2': '<S23>:60' */
      localB->skhx = 0.0;
      localB->kghx = 1.0;
      localB->kgzhiling1 = 1.0;
      localB->kgzhiling2 = 1.0;
    }
  }
}

/* Function for Chart: '<S14>/1#' */
static void aaa_yajinshijian(real_T rtu_ggdw1, real_T rtu_ggdw2, real_T rtu_sddw,
  real_T rtu_yjdw, B_u_aaa_T *localB, DW_u_aaa_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'yajinshijian': '<S23>:161' */
  /* Transition: '<S23>:414' */
  if (localB->yjt > 2.0) {
    /* Transition: '<S23>:416' */
    localDW->is_zidong = aaa_IN_on18;

    /* Entry 'on18': '<S23>:413' */
    localB->ggyichang = 1.0;
  } else {
    if (localB->yjt <= 2.0) {
      /* Transition: '<S23>:418' */
      sf_internal_predicateOutput = ((rtu_sddw == 0.0) || (rtu_yjdw == 0.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S23>:158' */
        localDW->is_zidong = aaa_IN_yajinshijian;

        /* Entry 'yajinshijian': '<S23>:161' */
        localB->yjt += 0.002;
      } else {
        sf_internal_predicateOutput = ((rtu_sddw == 1.0) && (rtu_yjdw == 1.0) &&
          (rtu_ggdw1 == 1.0) && (rtu_ggdw2 == 1.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S23>:167' */
          localDW->is_zidong = aaa_IN_t10guiling;

          /* Entry 't10guiling': '<S23>:336' */
          localDW->t10 = 0.0;
        }
      }
    }
  }
}

/* Function for Chart: '<S14>/1#' */
static void aaa_yanchishijian1(real_T rtu_t1, B_u_aaa_T *localB, DW_u_aaa_T
  *localDW)
{
  /* During 'yanchishijian1': '<S23>:56' */
  if (localDW->temporalCounter_i1 >= 500) {
    /* Transition: '<S23>:58' */
    if (localDW->t < rtu_t1) {
      /* Transition: '<S23>:57' */
      localDW->is_zidong = aaa_IN_yanchishijian1;
      localDW->temporalCounter_i1 = 0U;

      /* Entry 'yanchishijian1': '<S23>:56' */
      localDW->t++;
    } else {
      if (localDW->t >= rtu_t1) {
        /* Transition: '<S23>:111' */
        localDW->is_zidong = aaa_IN_on2;

        /* Entry 'on2': '<S23>:60' */
        localB->skhx = 0.0;
        localB->kghx = 1.0;
        localB->kgzhiling1 = 1.0;
        localB->kgzhiling2 = 1.0;
      }
    }
  }
}

/* Function for Chart: '<S14>/1#' */
static void aaa_yanchishijian2(real_T rtu_t3, B_u_aaa_T *localB, DW_u_aaa_T
  *localDW)
{
  /* During 'yanchishijian2': '<S23>:69' */
  if (localDW->temporalCounter_i1 >= 500) {
    /* Transition: '<S23>:80' */
    if (localDW->t2 < rtu_t3) {
      /* Transition: '<S23>:79' */
      localDW->is_zidong = aaa_IN_yanchishijian2;
      localDW->temporalCounter_i1 = 0U;

      /* Entry 'yanchishijian2': '<S23>:69' */
      localDW->t2++;
    } else {
      if (localDW->t2 >= rtu_t3) {
        /* Transition: '<S23>:112' */
        localDW->is_zidong = aaa_IN_on3;

        /* Entry 'on3': '<S23>:81' */
        localB->kghx = 0.0;
        localB->kgzhiling1 = 0.0;
        localB->kgzhiling2 = 0.0;
        localB->yjhx = 1.0;
      }
    }
  }
}

/* Function for Chart: '<S14>/1#' */
static void aaa_yanchishijian3(real_T rtu_t5, B_u_aaa_T *localB, DW_u_aaa_T
  *localDW)
{
  /* During 'yanchishijian3': '<S23>:108' */
  if (localDW->temporalCounter_i1 >= 500) {
    /* Transition: '<S23>:107' */
    if (localDW->t4 < rtu_t5) {
      /* Transition: '<S23>:109' */
      localDW->is_zidong = aaa_IN_yanchishijian3;
      localDW->temporalCounter_i1 = 0U;

      /* Entry 'yanchishijian3': '<S23>:108' */
      localDW->t4++;
    } else {
      if (localDW->t4 >= rtu_t5) {
        /* Transition: '<S23>:114' */
        localDW->is_zidong = aaa_IN_on4;

        /* Entry 'on4': '<S23>:113' */
        localB->yjhx = 0.0;
        localB->skhx = 1.0;
      }
    }
  }
}

/* Function for Chart: '<S14>/1#' */
static void aaa_yanchishijian4(real_T rtu_t7, B_u_aaa_T *localB, DW_u_aaa_T
  *localDW)
{
  /* During 'yanchishijian4': '<S23>:126' */
  if (localDW->temporalCounter_i1 >= 500) {
    /* Transition: '<S23>:128' */
    if (localDW->t6 < rtu_t7) {
      /* Transition: '<S23>:127' */
      localDW->is_zidong = aaa_IN_yanchishijian4;
      localDW->temporalCounter_i1 = 0U;

      /* Entry 'yanchishijian4': '<S23>:126' */
      localDW->t6++;
    } else {
      if (localDW->t6 >= rtu_t7) {
        /* Transition: '<S23>:129' */
        localDW->is_zidong = aaa_IN_on5;

        /* Entry 'on5': '<S23>:131' */
        localB->skhx = 0.0;
        localB->gghx = 1.0;
        localB->ggzhiling1 = 1.0;
        localB->ggzhiling2 = 1.0;
      }
    }
  }
}

/* Function for Chart: '<S14>/1#' */
static void aaa_yanchishijian5(real_T rtu_t9, B_u_aaa_T *localB, DW_u_aaa_T
  *localDW)
{
  /* During 'yanchishijian5': '<S23>:153' */
  if (localDW->temporalCounter_i1 >= 500) {
    /* Transition: '<S23>:155' */
    if (localDW->t8 < rtu_t9) {
      /* Transition: '<S23>:151' */
      localDW->is_zidong = aaa_IN_yanchishijian5;
      localDW->temporalCounter_i1 = 0U;

      /* Entry 'yanchishijian5': '<S23>:153' */
      localDW->t8++;
    } else {
      if (localDW->t8 >= rtu_t9) {
        /* Transition: '<S23>:169' */
        localDW->is_zidong = aaa_IN_on6;

        /* Entry 'on6': '<S23>:157' */
        localB->gghx = 0.0;
        localB->ggzhiling1 = 0.0;
        localB->ggzhiling2 = 0.0;
        localB->yjhx = 1.0;
      }
    }
  }
}

/* Function for Chart: '<S14>/1#' */
static void aaa_enter_atomic_off(B_u_aaa_T *localB)
{
  /* Entry 'off': '<S23>:165' */
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

/* Function for Chart: '<S14>/1#' */
static void aaa_zidong(boolean_T rtu_start, real_T rtu_kgdw1, real_T rtu_kgdw2,
  real_T rtu_ggdw1, real_T rtu_ggdw2, real_T rtu_sddw, real_T rtu_yjdw, real_T
  rtu_skdw, real_T rtu_jsdw, real_T rtu_t1, real_T rtu_t3, real_T rtu_t5, real_T
  rtu_t7, real_T rtu_t9, real_T rtu_t11, real_T rtu_shedingcishu, real_T
  rtu_jieshu, B_u_aaa_T *localB, DW_u_aaa_T *localDW)
{
  boolean_T sf_internal_predicateOutput;

  /* During 'zidong': '<S23>:374' */
  switch (localDW->is_zidong) {
   case aaa_IN_chushihua:
    /* During 'chushihua': '<S23>:3' */
    sf_internal_predicateOutput = (rtu_start && (rtu_ggdw1 == 1.0) && (rtu_ggdw2
      == 1.0) && (rtu_yjdw == 1.0) && (rtu_sddw == 1.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S23>:181' */
      localDW->is_zidong = aaa_IN_on1;

      /* Entry 'on1': '<S23>:12' */
      localB->skhx = 1.0;
    }
    break;

   case aaa_IN_guangaishijian:
    /* During 'guangaishijian': '<S23>:143' */
    /* Transition: '<S23>:407' */
    if (localB->ggt > 12.0) {
      /* Transition: '<S23>:406' */
      localDW->is_zidong = aaa_IN_on16;

      /* Entry 'on16': '<S23>:400' */
      localB->ggyichang = 1.0;
    } else {
      if (localB->ggt <= 12.0) {
        /* Transition: '<S23>:402' */
        sf_internal_predicateOutput = ((rtu_ggdw1 == 0.0) || (rtu_ggdw2 == 0.0) ||
          (rtu_jsdw == 0.0) || (rtu_skdw == 0.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S23>:144' */
          localDW->is_zidong = aaa_IN_guangaishijian;

          /* Entry 'guangaishijian': '<S23>:143' */
          localB->ggt += 0.002;
        } else {
          sf_internal_predicateOutput = ((rtu_ggdw1 == 1.0) && (rtu_ggdw2 == 1.0)
            && (rtu_jsdw == 1.0) && (rtu_skdw == 1.0));
          if (sf_internal_predicateOutput) {
            /* Transition: '<S23>:145' */
            localDW->is_zidong = aaa_IN_t8guiling;

            /* Entry 't8guiling': '<S23>:148' */
            localDW->t8 = 0.0;
          }
        }
      }
    }
    break;

   case aaa_IN_jiesuoshijian:
    /* During 'jiesuoshijian': '<S23>:116' */
    /* Transition: '<S23>:393' */
    if (localB->jst > 2.0) {
      /* Transition: '<S23>:389' */
      localDW->is_zidong = aaa_IN_on14;

      /* Entry 'on14': '<S23>:394' */
      localB->jsyichang = 1.0;
    } else {
      if (localB->jst <= 2.0) {
        /* Transition: '<S23>:396' */
        sf_internal_predicateOutput = ((rtu_kgdw1 == 0.0) || (rtu_kgdw2 == 0.0) ||
          (rtu_jsdw == 0.0) || (rtu_skdw == 0.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S23>:117' */
          localDW->is_zidong = aaa_IN_jiesuoshijian;

          /* Entry 'jiesuoshijian': '<S23>:116' */
          localB->jst += 0.002;
        } else {
          sf_internal_predicateOutput = ((rtu_kgdw1 == 1.0) && (rtu_kgdw2 == 1.0)
            && (rtu_jsdw == 1.0) && (rtu_skdw == 1.0));
          if (sf_internal_predicateOutput) {
            /* Transition: '<S23>:120' */
            localDW->is_zidong = aaa_IN_t6guiling;

            /* Entry 't6guiling': '<S23>:140' */
            localDW->t6 = 0.0;
          }
        }
      }
    }
    break;

   case aaa_IN_kaigaishijian:
    /* During 'kaigaishijian': '<S23>:62' */
    /* Transition: '<S23>:363' */
    if (localB->kgt > 12.0) {
      /* Transition: '<S23>:364' */
      localDW->is_zidong = aaa_IN_on11;

      /* Entry 'on11': '<S23>:376' */
      localB->kgyichang = 1.0;
    } else {
      if (localB->kgt <= 12.0) {
        /* Transition: '<S23>:359' */
        sf_internal_predicateOutput = ((rtu_kgdw1 == 0.0) || (rtu_kgdw2 == 0.0) ||
          (rtu_jsdw == 0.0) || (rtu_skdw == 0.0));
        if (sf_internal_predicateOutput) {
          /* Transition: '<S23>:64' */
          localDW->is_zidong = aaa_IN_kaigaishijian;

          /* Entry 'kaigaishijian': '<S23>:62' */
          localB->kgt += 0.002;
        } else {
          sf_internal_predicateOutput = ((rtu_kgdw1 == 1.0) && (rtu_kgdw2 == 1.0)
            && (rtu_jsdw == 1.0) && (rtu_skdw == 1.0));
          if (sf_internal_predicateOutput) {
            /* Transition: '<S23>:84' */
            localDW->is_zidong = aaa_IN_t2guiling;

            /* Entry 't2guiling': '<S23>:83' */
            localDW->t2 = 0.0;
          }
        }
      }
    }
    break;

   case aaa_IN_off_g:
    /* During 'off': '<S23>:165' */
    /* Transition: '<S23>:188' */
    localDW->is_zidong = aaa_IN_on7;

    /* Entry 'on7': '<S23>:170' */
    localB->yikaicishu++;
    break;

   case aaa_IN_on1:
    /* During 'on1': '<S23>:12' */
    /* Transition: '<S23>:49' */
    sf_internal_predicateOutput = ((rtu_jsdw == 0.0) || (rtu_skdw == 0.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S23>:50' */
      localDW->is_zidong = aaa_IN_songkaishijian;

      /* Entry 'songkaishijian': '<S23>:33' */
      localB->skt += 0.002;
    } else {
      sf_internal_predicateOutput = ((rtu_jsdw == 1.0) && (rtu_skdw == 1.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S23>:53' */
        localDW->is_zidong = aaa_IN_tguiling;

        /* Entry 'tguiling': '<S23>:52' */
        localDW->t = 0.0;
      }
    }
    break;

   case aaa_IN_on10:
    /* During 'on10': '<S23>:366' */
    /* Transition: '<S23>:367' */
    localDW->is_zidong = aaa_IN_songkaishijian1;

    /* Entry 'songkaishijian1': '<S23>:355' */
    localB->skt += 0.002;
    break;

   case aaa_IN_on11:
    /* During 'on11': '<S23>:376' */
    /* Transition: '<S23>:377' */
    localDW->is_zidong = aaa_IN_songkaishijian2;

    /* Entry 'songkaishijian2': '<S23>:365' */
    localB->kgt += 0.002;
    break;

   case aaa_IN_on12:
    /* During 'on12': '<S23>:378' */
    /* Transition: '<S23>:380' */
    localDW->is_zidong = aaa_IN_songkaishijian3;

    /* Entry 'songkaishijian3': '<S23>:387' */
    localB->sdt += 0.002;
    break;

   case aaa_IN_on13:
    /* During 'on13': '<S23>:381' */
    break;

   case aaa_IN_on14:
    /* During 'on14': '<S23>:394' */
    /* Transition: '<S23>:388' */
    localDW->is_zidong = aaa_IN_songkaishijian4;

    /* Entry 'songkaishijian4': '<S23>:392' */
    localB->jst += 0.002;
    break;

   case aaa_IN_on15:
    /* During 'on15': '<S23>:398' */
    break;

   case aaa_IN_on16:
    /* During 'on16': '<S23>:400' */
    /* Transition: '<S23>:405' */
    localDW->is_zidong = aaa_IN_songkaishijian5;

    /* Entry 'songkaishijian5': '<S23>:404' */
    localB->ggt += 0.002;
    break;

   case aaa_IN_on17:
    /* During 'on17': '<S23>:401' */
    break;

   case aaa_IN_on18:
    /* During 'on18': '<S23>:413' */
    /* Transition: '<S23>:412' */
    localDW->is_zidong = aaa_IN_songkaishijian6;

    /* Entry 'songkaishijian6': '<S23>:417' */
    localB->yjt += 0.002;
    break;

   case aaa_IN_on19:
    /* During 'on19': '<S23>:415' */
    break;

   case aaa_IN_on2:
    /* During 'on2': '<S23>:60' */
    /* Transition: '<S23>:87' */
    sf_internal_predicateOutput = ((rtu_kgdw1 == 0.0) || (rtu_kgdw2 == 0.0) ||
      (rtu_jsdw == 0.0) || (rtu_skdw == 0.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S23>:64' */
      localDW->is_zidong = aaa_IN_kaigaishijian;

      /* Entry 'kaigaishijian': '<S23>:62' */
      localB->kgt += 0.002;
    } else {
      sf_internal_predicateOutput = ((rtu_kgdw1 == 1.0) && (rtu_kgdw2 == 1.0) &&
        (rtu_jsdw == 1.0) && (rtu_skdw == 1.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S23>:84' */
        localDW->is_zidong = aaa_IN_t2guiling;

        /* Entry 't2guiling': '<S23>:83' */
        localDW->t2 = 0.0;
      }
    }
    break;

   case aaa_IN_on3:
    /* During 'on3': '<S23>:81' */
    /* Transition: '<S23>:103' */
    sf_internal_predicateOutput = ((rtu_kgdw1 == 0.0) || (rtu_kgdw2 == 0.0) ||
      (rtu_sddw == 0.0) || (rtu_yjdw == 0.0));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S23>:99' */
      localDW->is_zidong = aaa_IN_suodingshijian;

      /* Entry 'suodingshijian': '<S23>:97' */
      localB->sdt += 0.002;
    } else {
      sf_internal_predicateOutput = ((rtu_kgdw1 == 1.0) && (rtu_kgdw2 == 1.0) &&
        (rtu_sddw == 1.0) && (rtu_yjdw == 1.0));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S23>:101' */
        localDW->is_zidong = aaa_IN_t4guiling;

        /* Entry 't4guiling': '<S23>:100' */
        localDW->t4 = 0.0;
      }
    }
    break;

   case aaa_IN_on4:
    aaa_on4(rtu_kgdw1, rtu_kgdw2, rtu_skdw, rtu_jsdw, localB, localDW);
    break;

   case aaa_IN_on5:
    aaa_on5(rtu_ggdw1, rtu_ggdw2, rtu_skdw, rtu_jsdw, localB, localDW);
    break;

   case aaa_IN_on6:
    aaa_on6(rtu_ggdw1, rtu_ggdw2, rtu_sddw, rtu_yjdw, localB, localDW);
    break;

   case aaa_IN_on7:
    aaa_on7(rtu_shedingcishu, rtu_jieshu, localB, localDW);
    break;

   case aaa_IN_on8:
    /* During 'on8': '<S23>:352' */
    break;

   case aaa_IN_on9:
    /* During 'on9': '<S23>:358' */
    break;

   case aaa_IN_songkaishijian:
    aaa_songkaishijian(rtu_skdw, rtu_jsdw, localB, localDW);
    break;

   case aaa_IN_songkaishijian1:
    aaa_songkaishijian1(rtu_skdw, rtu_jsdw, localB, localDW);
    break;

   case aaa_IN_songkaishijian2:
    aaa_songkaishijian2(rtu_kgdw1, rtu_kgdw2, rtu_skdw, rtu_jsdw, localB,
                        localDW);
    break;

   case aaa_IN_songkaishijian3:
    aaa_songkaishijian3(rtu_kgdw1, rtu_kgdw2, rtu_sddw, rtu_yjdw, rtu_skdw,
                        rtu_jsdw, localB, localDW);
    break;

   case aaa_IN_songkaishijian4:
    aaa_songkaishijian4(rtu_kgdw1, rtu_kgdw2, rtu_skdw, rtu_jsdw, localB,
                        localDW);
    break;

   case aaa_IN_songkaishijian5:
    aaa_songkaishijian5(rtu_ggdw1, rtu_ggdw2, rtu_skdw, rtu_jsdw, localB,
                        localDW);
    break;

   case aaa_IN_songkaishijian6:
    aaa_songkaishijian6(rtu_ggdw1, rtu_ggdw2, rtu_sddw, rtu_yjdw, localB,
                        localDW);
    break;

   case aaa_IN_start:
    /* During 'start': '<S23>:197' */
    if (rtu_start) {
      /* Transition: '<S23>:198' */
      localDW->is_zidong = aaa_IN_chushihua;
      aaa_enter_atomic_chushihua(localB);
    }
    break;

   case aaa_IN_stop:
    /* During 'stop': '<S23>:193' */
    break;

   case aaa_IN_suodingshijian:
    aaa_suodingshijian(rtu_kgdw1, rtu_kgdw2, rtu_sddw, rtu_yjdw, localB, localDW);
    break;

   case aaa_IN_t10guiling:
    /* During 't10guiling': '<S23>:336' */
    /* Transition: '<S23>:340' */
    if (localDW->t10 < rtu_t11) {
      /* Transition: '<S23>:341' */
      localDW->is_zidong = aaa_IN_yanchishijian6;
      localDW->temporalCounter_i1 = 0U;

      /* Entry 'yanchishijian6': '<S23>:337' */
      localDW->t10++;
    } else {
      if (localDW->t10 >= rtu_t11) {
        /* Transition: '<S23>:342' */
        localDW->is_zidong = aaa_IN_off_g;
        aaa_enter_atomic_off(localB);
      }
    }
    break;

   case aaa_IN_t2guiling:
    aaa_t2guiling(rtu_t3, localB, localDW);
    break;

   case aaa_IN_t4guiling:
    aaa_t4guiling(rtu_t5, localB, localDW);
    break;

   case aaa_IN_t6guiling:
    aaa_t6guiling(rtu_t7, localB, localDW);
    break;

   case aaa_IN_t8guiling:
    aaa_t8guiling(rtu_t9, localB, localDW);
    break;

   case aaa_IN_tguiling:
    aaa_tguiling(rtu_t1, localB, localDW);
    break;

   case aaa_IN_yajinshijian:
    aaa_yajinshijian(rtu_ggdw1, rtu_ggdw2, rtu_sddw, rtu_yjdw, localB, localDW);
    break;

   case aaa_IN_yanchishijian1:
    aaa_yanchishijian1(rtu_t1, localB, localDW);
    break;

   case aaa_IN_yanchishijian2:
    aaa_yanchishijian2(rtu_t3, localB, localDW);
    break;

   case aaa_IN_yanchishijian3:
    aaa_yanchishijian3(rtu_t5, localB, localDW);
    break;

   case aaa_IN_yanchishijian4:
    aaa_yanchishijian4(rtu_t7, localB, localDW);
    break;

   case aaa_IN_yanchishijian5:
    aaa_yanchishijian5(rtu_t9, localB, localDW);
    break;

   default:
    /* During 'yanchishijian6': '<S23>:337' */
    if (localDW->temporalCounter_i1 >= 500) {
      /* Transition: '<S23>:343' */
      if (localDW->t10 < rtu_t11) {
        /* Transition: '<S23>:341' */
        localDW->is_zidong = aaa_IN_yanchishijian6;
        localDW->temporalCounter_i1 = 0U;

        /* Entry 'yanchishijian6': '<S23>:337' */
        localDW->t10++;
      } else {
        if (localDW->t10 >= rtu_t11) {
          /* Transition: '<S23>:342' */
          localDW->is_zidong = aaa_IN_off_g;
          aaa_enter_atomic_off(localB);
        }
      }
    }
    break;
  }
}

/*
 * System initialize for atomic system:
 *    '<S14>/1#'
 *    '<S14>/1#1'
 *    '<S14>/1#2'
 *    '<S14>/1#3'
 *    '<S14>/1#4'
 *    '<S14>/1#5'
 *    '<S14>/1#6'
 *    '<S14>/1#7'
 */
void aaa_u_Init(DW_u_aaa_T *localDW)
{
  localDW->sfEvent = aaa_CALL_EVENT_j;
  localDW->is_zidong = aaa_IN_NO_ACTIVE_CHILD_m;
  localDW->temporalCounter_i1 = 0U;
  localDW->is_active_c1_aaa = 0U;
  localDW->is_c1_aaa = aaa_IN_NO_ACTIVE_CHILD_m;
}

/*
 * Output and update for atomic system:
 *    '<S14>/1#'
 *    '<S14>/1#1'
 *    '<S14>/1#2'
 *    '<S14>/1#3'
 *    '<S14>/1#4'
 *    '<S14>/1#5'
 *    '<S14>/1#6'
 *    '<S14>/1#7'
 */
void aaa_u(boolean_T rtu_start, real_T rtu_kgdw1, real_T rtu_kgdw2, real_T
           rtu_ggdw1, real_T rtu_ggdw2, real_T rtu_sddw, real_T rtu_yjdw, real_T
           rtu_skdw, real_T rtu_jsdw, real_T rtu_t1, real_T rtu_t3, real_T
           rtu_t5, real_T rtu_t7, real_T rtu_t9, real_T rtu_t11, real_T
           rtu_shedingcishu, real_T rtu_jieshu, B_u_aaa_T *localB, DW_u_aaa_T
           *localDW)
{
  /* Gateway: Subsystem1/zidong/1# */
  localDW->sfEvent = aaa_CALL_EVENT_j;
  if (localDW->temporalCounter_i1 < 511U) {
    localDW->temporalCounter_i1++;
  }

  /* During: Subsystem1/zidong/1# */
  if (localDW->is_active_c1_aaa == 0U) {
    /* Entry: Subsystem1/zidong/1# */
    localDW->is_active_c1_aaa = 1U;

    /* Entry Internal: Subsystem1/zidong/1# */
    /* Transition: '<S23>:375' */
    localDW->is_c1_aaa = aaa_IN_zidong;

    /* Entry Internal 'zidong': '<S23>:374' */
    /* Transition: '<S23>:199' */
    localDW->is_zidong = aaa_IN_start;

    /* Entry 'start': '<S23>:197' */
    localB->yikaicishu = 0.0;
  } else {
    aaa_zidong(rtu_start, rtu_kgdw1, rtu_kgdw2, rtu_ggdw1, rtu_ggdw2, rtu_sddw,
               rtu_yjdw, rtu_skdw, rtu_jsdw, rtu_t1, rtu_t3, rtu_t5, rtu_t7,
               rtu_t9, rtu_t11, rtu_shedingcishu, rtu_jieshu, localB, localDW);
  }
}

/* Function for Chart: '<S5>/jinjichuli' */
static void aaa_exit_internal_MANUAL(DW_jinjichuli_aaa_T *localDW)
{
  /* Exit Internal 'MANUAL': '<S33>:3' */
  /* Exit Internal 'jiesuo': '<S33>:246' */
  localDW->is_jiesuo = aaa_IN_NO_ACTIVE_CHILD_a;
  localDW->is_active_jiesuo = 0U;

  /* Exit Internal 'suoding': '<S33>:243' */
  localDW->is_suoding = aaa_IN_NO_ACTIVE_CHILD_a;
  localDW->is_active_suoding = 0U;

  /* Exit Internal 'yajin': '<S33>:214' */
  localDW->is_yajin = aaa_IN_NO_ACTIVE_CHILD_a;
  localDW->is_active_yajin = 0U;

  /* Exit Internal 'songkai': '<S33>:208' */
  localDW->is_songkai = aaa_IN_NO_ACTIVE_CHILD_a;
  localDW->is_active_songkai = 0U;

  /* Exit Internal 'guangai': '<S33>:202' */
  localDW->is_guangai = aaa_IN_NO_ACTIVE_CHILD_a;
  localDW->is_active_guangai = 0U;

  /* Exit Internal 'kaigai': '<S33>:7' */
  localDW->is_kaigai = aaa_IN_NO_ACTIVE_CHILD_a;
  localDW->is_active_kaigai = 0U;
}

/*
 * System initialize for atomic system:
 *    '<S5>/jinjichuli'
 *    '<S5>/jinjichuli1'
 *    '<S5>/jinjichuli2'
 *    '<S5>/jinjichuli3'
 *    '<S5>/jinjichuli4'
 *    '<S5>/jinjichuli5'
 *    '<S5>/jinjichuli6'
 *    '<S5>/jinjichuli7'
 */
void aaa_jinjichuli_Init(B_jinjichuli_aaa_T *localB, DW_jinjichuli_aaa_T
  *localDW)
{
  localDW->sfEvent = aaa_CALL_EVENT_o;
  localDW->is_active_guangai = 0U;
  localDW->is_guangai = aaa_IN_NO_ACTIVE_CHILD_a;
  localDW->is_active_jiesuo = 0U;
  localDW->is_jiesuo = aaa_IN_NO_ACTIVE_CHILD_a;
  localDW->is_active_kaigai = 0U;
  localDW->is_kaigai = aaa_IN_NO_ACTIVE_CHILD_a;
  localDW->is_active_songkai = 0U;
  localDW->is_songkai = aaa_IN_NO_ACTIVE_CHILD_a;
  localDW->is_active_suoding = 0U;
  localDW->is_suoding = aaa_IN_NO_ACTIVE_CHILD_a;
  localDW->is_active_yajin = 0U;
  localDW->is_yajin = aaa_IN_NO_ACTIVE_CHILD_a;
  localDW->temporalCounter_i1 = 0U;
  localDW->is_active_c18_aaa = 0U;
  localDW->is_c18_aaa = aaa_IN_NO_ACTIVE_CHILD_a;
  localB->skhx = 0.0;
  localB->kghx = 0.0;
  localB->yjhx = 0.0;
  localB->gghx = 0.0;
}

/*
 * Output and update for atomic system:
 *    '<S5>/jinjichuli'
 *    '<S5>/jinjichuli1'
 *    '<S5>/jinjichuli2'
 *    '<S5>/jinjichuli3'
 *    '<S5>/jinjichuli4'
 *    '<S5>/jinjichuli5'
 *    '<S5>/jinjichuli6'
 *    '<S5>/jinjichuli7'
 */
void aaa_jinjichuli(real_T rtu_tiaoshi, real_T rtu_songkai, real_T rtu_kaigai,
                    real_T rtu_suoding, real_T rtu_jiesuo, real_T rtu_guangai,
                    real_T rtu_yajin, real_T rtu_jiting, B_jinjichuli_aaa_T
                    *localB, DW_jinjichuli_aaa_T *localDW)
{
  /* Gateway: tiaoshimoshi/jinjichuli */
  localDW->sfEvent = aaa_CALL_EVENT_o;
  if (localDW->temporalCounter_i1 < 511U) {
    localDW->temporalCounter_i1++;
  }

  /* During: tiaoshimoshi/jinjichuli */
  if (localDW->is_active_c18_aaa == 0U) {
    /* Entry: tiaoshimoshi/jinjichuli */
    localDW->is_active_c18_aaa = 1U;

    /* Entry Internal: tiaoshimoshi/jinjichuli */
    /* Transition: '<S33>:57' */
    localDW->is_c18_aaa = aaa_IN_off1_c;
  } else {
    switch (localDW->is_c18_aaa) {
     case aaa_IN_MANUAL:
      /* During 'MANUAL': '<S33>:3' */
      if (rtu_jiting == 1.0) {
        /* Transition: '<S33>:98' */
        aaa_exit_internal_MANUAL(localDW);
        localDW->is_c18_aaa = aaa_IN_end;

        /* Entry 'end': '<S33>:43' */
        localB->skhx = 0.0;
        localB->kghx = 0.0;
        localB->yjhx = 0.0;
        localB->gghx = 0.0;
      } else {
        /* During 'kaigai': '<S33>:7' */
        if (localDW->is_kaigai == aaa_IN_A) {
          /* During 'A': '<S33>:11' */
          if (rtu_kaigai == 1.0) {
            /* Transition: '<S33>:69' */
            localDW->is_kaigai = aaa_IN_on_g;

            /* Entry 'on': '<S33>:15' */
            localB->kghx = 1.0;
          }
        } else {
          /* During 'on': '<S33>:15' */
          if (rtu_kaigai == 0.0) {
            /* Transition: '<S33>:65' */
            localDW->is_kaigai = aaa_IN_A;

            /* Entry 'A': '<S33>:11' */
            localB->kghx = 0.0;
          }
        }

        /* During 'guangai': '<S33>:202' */
        if (localDW->is_guangai == aaa_IN_A) {
          /* During 'A': '<S33>:201' */
          if (rtu_guangai == 1.0) {
            /* Transition: '<S33>:197' */
            localDW->is_guangai = aaa_IN_on_g;

            /* Entry 'on': '<S33>:200' */
            localB->gghx = 1.0;
          }
        } else {
          /* During 'on': '<S33>:200' */
          if (rtu_guangai == 0.0) {
            /* Transition: '<S33>:198' */
            localDW->is_guangai = aaa_IN_A;

            /* Entry 'A': '<S33>:201' */
            localB->gghx = 0.0;
          }
        }

        /* During 'songkai': '<S33>:208' */
        if (localDW->is_songkai == aaa_IN_A) {
          /* During 'A': '<S33>:207' */
          if (rtu_songkai == 1.0) {
            /* Transition: '<S33>:203' */
            localDW->is_songkai = aaa_IN_on_g;

            /* Entry 'on': '<S33>:204' */
            localB->skhx = 1.0;
          }
        } else {
          /* During 'on': '<S33>:204' */
          if (rtu_songkai == 0.0) {
            /* Transition: '<S33>:205' */
            localDW->is_songkai = aaa_IN_A;

            /* Entry 'A': '<S33>:207' */
            localB->skhx = 0.0;
          }
        }

        /* During 'yajin': '<S33>:214' */
        if (localDW->is_yajin == aaa_IN_A) {
          /* During 'A': '<S33>:210' */
          if (rtu_yajin == 1.0) {
            /* Transition: '<S33>:209' */
            localDW->is_yajin = aaa_IN_on_g;

            /* Entry 'on': '<S33>:213' */
            localB->yjhx = 1.0;
          }
        } else {
          /* During 'on': '<S33>:213' */
          if (rtu_yajin == 0.0) {
            /* Transition: '<S33>:211' */
            localDW->is_yajin = aaa_IN_A;

            /* Entry 'A': '<S33>:210' */
            localB->yjhx = 0.0;
          }
        }

        /* During 'suoding': '<S33>:243' */
        if (localDW->is_suoding == aaa_IN_A) {
          /* During 'A': '<S33>:244' */
          if (rtu_suoding == 1.0) {
            /* Transition: '<S33>:239' */
            localDW->is_suoding = aaa_IN_on_g;

            /* Entry 'on': '<S33>:242' */
            localB->yjhx = 1.0;
          }
        } else {
          /* During 'on': '<S33>:242' */
          if (rtu_suoding == 0.0) {
            /* Transition: '<S33>:240' */
            localDW->is_suoding = aaa_IN_A;

            /* Entry 'A': '<S33>:244' */
            localB->yjhx = 0.0;
          }
        }

        /* During 'jiesuo': '<S33>:246' */
        if (localDW->is_jiesuo == aaa_IN_A) {
          /* During 'A': '<S33>:247' */
          if (rtu_jiesuo == 1.0) {
            /* Transition: '<S33>:245' */
            localDW->is_jiesuo = aaa_IN_on_g;

            /* Entry 'on': '<S33>:250' */
            localB->skhx = 1.0;
          }
        } else {
          /* During 'on': '<S33>:250' */
          if (rtu_jiesuo == 0.0) {
            /* Transition: '<S33>:248' */
            localDW->is_jiesuo = aaa_IN_A;

            /* Entry 'A': '<S33>:247' */
            localB->skhx = 0.0;
          }
        }
      }
      break;

     case aaa_IN_end:
      /* During 'end': '<S33>:43' */
      break;

     case aaa_IN_off1_c:
      /* During 'off1': '<S33>:2' */
      if (rtu_tiaoshi == 1.0) {
        /* Transition: '<S33>:56' */
        localDW->is_c18_aaa = aaa_IN_on1_e;
        localDW->temporalCounter_i1 = 0U;

        /* Entry 'on1': '<S33>:1' */
        localB->skhx = 0.0;
        localB->kghx = 0.0;
        localB->yjhx = 0.0;
        localB->gghx = 0.0;
      }
      break;

     default:
      /* During 'on1': '<S33>:1' */
      if (localDW->temporalCounter_i1 >= 500) {
        /* Transition: '<S33>:97' */
        localDW->is_c18_aaa = aaa_IN_MANUAL;

        /* Entry Internal 'MANUAL': '<S33>:3' */
        localDW->is_active_kaigai = 1U;

        /* Entry Internal 'kaigai': '<S33>:7' */
        /* Transition: '<S33>:61' */
        localDW->is_kaigai = aaa_IN_A;

        /* Entry 'A': '<S33>:11' */
        localB->kghx = 0.0;
        localDW->is_active_guangai = 1U;

        /* Entry Internal 'guangai': '<S33>:202' */
        /* Transition: '<S33>:199' */
        localDW->is_guangai = aaa_IN_A;

        /* Entry 'A': '<S33>:201' */
        localB->gghx = 0.0;
        localDW->is_active_songkai = 1U;

        /* Entry Internal 'songkai': '<S33>:208' */
        /* Transition: '<S33>:206' */
        localDW->is_songkai = aaa_IN_A;

        /* Entry 'A': '<S33>:207' */
        localDW->is_active_yajin = 1U;

        /* Entry Internal 'yajin': '<S33>:214' */
        /* Transition: '<S33>:212' */
        localDW->is_yajin = aaa_IN_A;

        /* Entry 'A': '<S33>:210' */
        localDW->is_active_suoding = 1U;

        /* Entry Internal 'suoding': '<S33>:243' */
        /* Transition: '<S33>:241' */
        localDW->is_suoding = aaa_IN_A;

        /* Entry 'A': '<S33>:244' */
        localB->yjhx = 0.0;
        localDW->is_active_jiesuo = 1U;

        /* Entry Internal 'jiesuo': '<S33>:246' */
        /* Transition: '<S33>:249' */
        localDW->is_jiesuo = aaa_IN_A;

        /* Entry 'A': '<S33>:247' */
        localB->skhx = 0.0;
      }
      break;
    }
  }
}

/* Model output function */
static void aaa_output(void)
{
  boolean_T sf_internal_predicateOutput;
  int32_T i;

  /* Reset subsysRan breadcrumbs */
  srClearBC(aaa_DW.shoudong_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(aaa_DW.zidong_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(aaa_DW.tiaoshimoshi_SubsysRanBC);

  /* Constant: '<Root>/tiaoshi' */
  aaa_B.tiaoshi = aaa_P.tiaoshi_Value;

  /* Memory: '<S32>/2' */
  aaa_B.u = aaa_DW.u_PreviousInput;

  /* Memory: '<S32>/3' */
  aaa_B.u_l = aaa_DW.u_PreviousInput_c;

  /* Memory: '<S32>/4' */
  aaa_B.u_c = aaa_DW.u_PreviousInput_j;

  /* Memory: '<S32>/5' */
  aaa_B.u_d = aaa_DW.u_PreviousInput_b;

  /* Memory: '<S32>/6' */
  aaa_B.u_c4 = aaa_DW.u_PreviousInput_jh;

  /* Logic: '<S32>/Logical Operator1' */
  aaa_B.LogicalOperator1 = ((aaa_B.u != 0.0) || (aaa_B.u_l != 0.0) || (aaa_B.u_c
    != 0.0) || (aaa_B.u_d != 0.0) || (aaa_B.u_c4 != 0.0));

  /* Switch: '<S32>/Switch1' incorporates:
   *  Constant: '<S32>/Constant12'
   *  Constant: '<S4>/songkai'
   */
  if (aaa_B.LogicalOperator1) {
    aaa_B.Switch1 = aaa_P.Constant12_Value_b;
  } else {
    aaa_B.Switch1 = aaa_P.songkai_Value_d;
  }

  /* End of Switch: '<S32>/Switch1' */

  /* Memory: '<S32>/1' */
  aaa_B.u_h = aaa_DW.u_PreviousInput_g;

  /* Logic: '<S32>/Logical Operator2' */
  aaa_B.LogicalOperator2 = ((aaa_B.u_h != 0.0) || (aaa_B.u_l != 0.0) ||
    (aaa_B.u_c != 0.0) || (aaa_B.u_d != 0.0) || (aaa_B.u_c4 != 0.0));

  /* Switch: '<S32>/Switch2' incorporates:
   *  Constant: '<S32>/Constant16'
   *  Constant: '<S4>/kaigai'
   */
  if (aaa_B.LogicalOperator2) {
    aaa_B.Switch2 = aaa_P.Constant16_Value_o;
  } else {
    aaa_B.Switch2 = aaa_P.kaigai_Value_n;
  }

  /* End of Switch: '<S32>/Switch2' */

  /* Logic: '<S32>/Logical Operator3' */
  aaa_B.LogicalOperator3 = ((aaa_B.u_h != 0.0) || (aaa_B.u != 0.0) || (aaa_B.u_c
    != 0.0) || (aaa_B.u_d != 0.0) || (aaa_B.u_c4 != 0.0));

  /* Switch: '<S32>/Switch3' incorporates:
   *  Constant: '<S32>/Constant13'
   *  Constant: '<S4>/suoding'
   */
  if (aaa_B.LogicalOperator3) {
    aaa_B.Switch3 = aaa_P.Constant13_Value_j;
  } else {
    aaa_B.Switch3 = aaa_P.suoding_Value_b;
  }

  /* End of Switch: '<S32>/Switch3' */

  /* Logic: '<S32>/Logical Operator4' */
  aaa_B.LogicalOperator4 = ((aaa_B.u_h != 0.0) || (aaa_B.u != 0.0) || (aaa_B.u_l
    != 0.0) || (aaa_B.u_d != 0.0) || (aaa_B.u_c4 != 0.0));

  /* Switch: '<S32>/Switch4' incorporates:
   *  Constant: '<S32>/Constant17'
   *  Constant: '<S4>/jiesuo'
   */
  if (aaa_B.LogicalOperator4) {
    aaa_B.Switch4 = aaa_P.Constant17_Value_e;
  } else {
    aaa_B.Switch4 = aaa_P.jiesuo_Value_m;
  }

  /* End of Switch: '<S32>/Switch4' */

  /* Logic: '<S32>/Logical Operator5' */
  aaa_B.LogicalOperator5 = ((aaa_B.u_h != 0.0) || (aaa_B.u != 0.0) || (aaa_B.u_l
    != 0.0) || (aaa_B.u_c != 0.0) || (aaa_B.u_c4 != 0.0));

  /* Switch: '<S32>/Switch5' incorporates:
   *  Constant: '<S32>/Constant18'
   *  Constant: '<S4>/guangai'
   */
  if (aaa_B.LogicalOperator5) {
    aaa_B.Switch5 = aaa_P.Constant18_Value_e;
  } else {
    aaa_B.Switch5 = aaa_P.guangai_Value_b;
  }

  /* End of Switch: '<S32>/Switch5' */

  /* Logic: '<S32>/Logical Operator6' */
  aaa_B.LogicalOperator6 = ((aaa_B.u_h != 0.0) || (aaa_B.u != 0.0) || (aaa_B.u_l
    != 0.0) || (aaa_B.u_c != 0.0) || (aaa_B.u_d != 0.0));

  /* Switch: '<S32>/Switch6' incorporates:
   *  Constant: '<S32>/Constant19'
   *  Constant: '<S4>/yajin'
   */
  if (aaa_B.LogicalOperator6) {
    aaa_B.Switch6 = aaa_P.Constant19_Value_f;
  } else {
    aaa_B.Switch6 = aaa_P.yajin_Value_a;
  }

  /* End of Switch: '<S32>/Switch6' */

  /* Product: '<S4>/Product' incorporates:
   *  Constant: '<S4>/s1'
   */
  aaa_B.Product[0] = aaa_B.Switch1 * aaa_P.s1_Value;
  aaa_B.Product[1] = aaa_B.Switch2 * aaa_P.s1_Value;
  aaa_B.Product[2] = aaa_B.Switch3 * aaa_P.s1_Value;
  aaa_B.Product[3] = aaa_B.Switch4 * aaa_P.s1_Value;
  aaa_B.Product[4] = aaa_B.Switch5 * aaa_P.s1_Value;
  aaa_B.Product[5] = aaa_B.Switch6 * aaa_P.s1_Value;

  /* Product: '<S4>/Product1' incorporates:
   *  Constant: '<S4>/s2'
   */
  aaa_B.Product1[0] = aaa_B.Switch1 * aaa_P.s2_Value;
  aaa_B.Product1[1] = aaa_B.Switch2 * aaa_P.s2_Value;
  aaa_B.Product1[2] = aaa_B.Switch3 * aaa_P.s2_Value;
  aaa_B.Product1[3] = aaa_B.Switch4 * aaa_P.s2_Value;
  aaa_B.Product1[4] = aaa_B.Switch5 * aaa_P.s2_Value;
  aaa_B.Product1[5] = aaa_B.Switch6 * aaa_P.s2_Value;

  /* Product: '<S4>/Product2' incorporates:
   *  Constant: '<S4>/s3'
   */
  aaa_B.Product2[0] = aaa_B.Switch1 * aaa_P.s3_Value;
  aaa_B.Product2[1] = aaa_B.Switch2 * aaa_P.s3_Value;
  aaa_B.Product2[2] = aaa_B.Switch3 * aaa_P.s3_Value;
  aaa_B.Product2[3] = aaa_B.Switch4 * aaa_P.s3_Value;
  aaa_B.Product2[4] = aaa_B.Switch5 * aaa_P.s3_Value;
  aaa_B.Product2[5] = aaa_B.Switch6 * aaa_P.s3_Value;

  /* Product: '<S4>/Product3' incorporates:
   *  Constant: '<S4>/s4'
   */
  aaa_B.Product3[0] = aaa_B.Switch1 * aaa_P.s4_Value;
  aaa_B.Product3[1] = aaa_B.Switch2 * aaa_P.s4_Value;
  aaa_B.Product3[2] = aaa_B.Switch3 * aaa_P.s4_Value;
  aaa_B.Product3[3] = aaa_B.Switch4 * aaa_P.s4_Value;
  aaa_B.Product3[4] = aaa_B.Switch5 * aaa_P.s4_Value;
  aaa_B.Product3[5] = aaa_B.Switch6 * aaa_P.s4_Value;

  /* Product: '<S4>/Product4' incorporates:
   *  Constant: '<S4>/s5'
   */
  aaa_B.Product4[0] = aaa_B.Switch1 * aaa_P.s5_Value;
  aaa_B.Product4[1] = aaa_B.Switch2 * aaa_P.s5_Value;
  aaa_B.Product4[2] = aaa_B.Switch3 * aaa_P.s5_Value;
  aaa_B.Product4[3] = aaa_B.Switch4 * aaa_P.s5_Value;
  aaa_B.Product4[4] = aaa_B.Switch5 * aaa_P.s5_Value;
  aaa_B.Product4[5] = aaa_B.Switch6 * aaa_P.s5_Value;

  /* Product: '<S4>/Product5' incorporates:
   *  Constant: '<S4>/s6'
   */
  aaa_B.Product5[0] = aaa_B.Switch1 * aaa_P.s6_Value;
  aaa_B.Product5[1] = aaa_B.Switch2 * aaa_P.s6_Value;
  aaa_B.Product5[2] = aaa_B.Switch3 * aaa_P.s6_Value;
  aaa_B.Product5[3] = aaa_B.Switch4 * aaa_P.s6_Value;
  aaa_B.Product5[4] = aaa_B.Switch5 * aaa_P.s6_Value;
  aaa_B.Product5[5] = aaa_B.Switch6 * aaa_P.s6_Value;

  /* Product: '<S4>/Product6' incorporates:
   *  Constant: '<S4>/s7'
   */
  aaa_B.Product6[0] = aaa_B.Switch1 * aaa_P.s7_Value;
  aaa_B.Product6[1] = aaa_B.Switch2 * aaa_P.s7_Value;
  aaa_B.Product6[2] = aaa_B.Switch3 * aaa_P.s7_Value;
  aaa_B.Product6[3] = aaa_B.Switch4 * aaa_P.s7_Value;
  aaa_B.Product6[4] = aaa_B.Switch5 * aaa_P.s7_Value;
  aaa_B.Product6[5] = aaa_B.Switch6 * aaa_P.s7_Value;

  /* Product: '<S4>/Product7' incorporates:
   *  Constant: '<S4>/s8'
   */
  aaa_B.Product7[0] = aaa_B.Switch1 * aaa_P.s8_Value;
  aaa_B.Product7[1] = aaa_B.Switch2 * aaa_P.s8_Value;
  aaa_B.Product7[2] = aaa_B.Switch3 * aaa_P.s8_Value;
  aaa_B.Product7[3] = aaa_B.Switch4 * aaa_P.s8_Value;
  aaa_B.Product7[4] = aaa_B.Switch5 * aaa_P.s8_Value;
  aaa_B.Product7[5] = aaa_B.Switch6 * aaa_P.s8_Value;

  /* Constant: '<Root>/jieshu' */
  aaa_B.jieshu = aaa_P.jieshu_Value;

  /* Outputs for Enabled SubSystem: '<Root>/tiaoshimoshi' incorporates:
   *  EnablePort: '<S5>/Enable'
   */
  if (aaa_B.tiaoshi > 0.0) {
    /* Chart: '<S5>/jinjichuli' */
    aaa_jinjichuli(aaa_B.tiaoshi, aaa_B.Product[0], aaa_B.Product[1],
                   aaa_B.Product[2], aaa_B.Product[3], aaa_B.Product[4],
                   aaa_B.Product[5], aaa_B.jieshu, &aaa_B.sf_jinjichuli,
                   &aaa_DW.sf_jinjichuli);

    /* Chart: '<S5>/jinjichuli1' */
    aaa_jinjichuli(aaa_B.tiaoshi, aaa_B.Product1[0], aaa_B.Product1[1],
                   aaa_B.Product1[2], aaa_B.Product1[3], aaa_B.Product1[4],
                   aaa_B.Product1[5], aaa_B.jieshu, &aaa_B.sf_jinjichuli1,
                   &aaa_DW.sf_jinjichuli1);

    /* Chart: '<S5>/jinjichuli2' */
    aaa_jinjichuli(aaa_B.tiaoshi, aaa_B.Product2[0], aaa_B.Product2[1],
                   aaa_B.Product2[2], aaa_B.Product2[3], aaa_B.Product2[4],
                   aaa_B.Product2[5], aaa_B.jieshu, &aaa_B.sf_jinjichuli2,
                   &aaa_DW.sf_jinjichuli2);

    /* Chart: '<S5>/jinjichuli3' */
    aaa_jinjichuli(aaa_B.tiaoshi, aaa_B.Product3[0], aaa_B.Product3[1],
                   aaa_B.Product3[2], aaa_B.Product3[3], aaa_B.Product3[4],
                   aaa_B.Product3[5], aaa_B.jieshu, &aaa_B.sf_jinjichuli3,
                   &aaa_DW.sf_jinjichuli3);

    /* Chart: '<S5>/jinjichuli4' */
    aaa_jinjichuli(aaa_B.tiaoshi, aaa_B.Product4[0], aaa_B.Product4[1],
                   aaa_B.Product4[2], aaa_B.Product4[3], aaa_B.Product4[4],
                   aaa_B.Product4[5], aaa_B.jieshu, &aaa_B.sf_jinjichuli4,
                   &aaa_DW.sf_jinjichuli4);

    /* Chart: '<S5>/jinjichuli5' */
    aaa_jinjichuli(aaa_B.tiaoshi, aaa_B.Product5[0], aaa_B.Product5[1],
                   aaa_B.Product5[2], aaa_B.Product5[3], aaa_B.Product5[4],
                   aaa_B.Product5[5], aaa_B.jieshu, &aaa_B.sf_jinjichuli5,
                   &aaa_DW.sf_jinjichuli5);

    /* Chart: '<S5>/jinjichuli6' */
    aaa_jinjichuli(aaa_B.tiaoshi, aaa_B.Product6[0], aaa_B.Product6[1],
                   aaa_B.Product6[2], aaa_B.Product6[3], aaa_B.Product6[4],
                   aaa_B.Product6[5], aaa_B.jieshu, &aaa_B.sf_jinjichuli6,
                   &aaa_DW.sf_jinjichuli6);

    /* Chart: '<S5>/jinjichuli7' */
    aaa_jinjichuli(aaa_B.tiaoshi, aaa_B.Product7[0], aaa_B.Product7[1],
                   aaa_B.Product7[2], aaa_B.Product7[3], aaa_B.Product7[4],
                   aaa_B.Product7[5], aaa_B.jieshu, &aaa_B.sf_jinjichuli7,
                   &aaa_DW.sf_jinjichuli7);

    /* Logic: '<S5>/Logical Operator' */
    aaa_B.LogicalOperator_e = ((aaa_B.sf_jinjichuli.skhx != 0.0) ||
      (aaa_B.sf_jinjichuli1.skhx != 0.0) || (aaa_B.sf_jinjichuli2.skhx != 0.0) ||
      (aaa_B.sf_jinjichuli3.skhx != 0.0) || (aaa_B.sf_jinjichuli4.skhx != 0.0) ||
      (aaa_B.sf_jinjichuli5.skhx != 0.0) || (aaa_B.sf_jinjichuli6.skhx != 0.0) ||
      (aaa_B.sf_jinjichuli7.skhx != 0.0));

    /* Logic: '<S5>/Logical Operator1' */
    aaa_B.LogicalOperator1_kr = ((aaa_B.sf_jinjichuli.gghx != 0.0) ||
      (aaa_B.sf_jinjichuli1.gghx != 0.0) || (aaa_B.sf_jinjichuli2.gghx != 0.0) ||
      (aaa_B.sf_jinjichuli3.gghx != 0.0) || (aaa_B.sf_jinjichuli4.gghx != 0.0) ||
      (aaa_B.sf_jinjichuli5.gghx != 0.0) || (aaa_B.sf_jinjichuli6.gghx != 0.0) ||
      (aaa_B.sf_jinjichuli7.gghx != 0.0));

    /* Logic: '<S5>/Logical Operator4' */
    aaa_B.LogicalOperator4_d = ((aaa_B.sf_jinjichuli.kghx != 0.0) ||
      (aaa_B.sf_jinjichuli1.kghx != 0.0) || (aaa_B.sf_jinjichuli2.kghx != 0.0) ||
      (aaa_B.sf_jinjichuli3.kghx != 0.0) || (aaa_B.sf_jinjichuli4.kghx != 0.0) ||
      (aaa_B.sf_jinjichuli5.kghx != 0.0) || (aaa_B.sf_jinjichuli6.kghx != 0.0) ||
      (aaa_B.sf_jinjichuli7.kghx != 0.0));

    /* Logic: '<S5>/Logical Operator5' */
    aaa_B.LogicalOperator5_c = ((aaa_B.sf_jinjichuli1.yjhx != 0.0) ||
      (aaa_B.sf_jinjichuli2.yjhx != 0.0) || (aaa_B.sf_jinjichuli3.yjhx != 0.0) ||
      (aaa_B.sf_jinjichuli4.yjhx != 0.0) || (aaa_B.sf_jinjichuli5.yjhx != 0.0) ||
      (aaa_B.sf_jinjichuli6.yjhx != 0.0) || (aaa_B.sf_jinjichuli7.yjhx != 0.0) ||
      (aaa_B.sf_jinjichuli.yjhx != 0.0));
    srUpdateBC(aaa_DW.tiaoshimoshi_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<Root>/tiaoshimoshi' */

  /* Memory: '<Root>/memory' */
  aaa_B.memory[0] = aaa_DW.memory_PreviousInput[0];
  aaa_B.memory[1] = aaa_DW.memory_PreviousInput[1];
  aaa_B.memory[2] = aaa_DW.memory_PreviousInput[2];
  aaa_B.memory[3] = aaa_DW.memory_PreviousInput[3];

  /* Switch: '<Root>/Switch3' */
  if (aaa_B.tiaoshi > aaa_P.Switch3_Threshold) {
    aaa_B.Switch3_g[0] = aaa_B.LogicalOperator_e;
    aaa_B.Switch3_g[1] = aaa_B.LogicalOperator4_d;
    aaa_B.Switch3_g[2] = aaa_B.LogicalOperator5_c;
    aaa_B.Switch3_g[3] = aaa_B.LogicalOperator1_kr;
  } else {
    aaa_B.Switch3_g[0] = aaa_B.memory[0];
    aaa_B.Switch3_g[1] = aaa_B.memory[1];
    aaa_B.Switch3_g[2] = aaa_B.memory[2];
    aaa_B.Switch3_g[3] = aaa_B.memory[3];
  }

  /* End of Switch: '<Root>/Switch3' */

  /* DataTypeConversion: '<S1>/Data Type Conversion6' */
  aaa_B.DataTypeConversion6[0] = aaa_B.Switch3_g[0];
  aaa_B.DataTypeConversion6[1] = aaa_B.Switch3_g[1];
  aaa_B.DataTypeConversion6[2] = aaa_B.Switch3_g[2];
  aaa_B.DataTypeConversion6[3] = aaa_B.Switch3_g[3];

  /* Constant: '<S1>/Constant' */
  aaa_B.Constant = aaa_P.Constant_Value;

  /* Level2 S-Function Block: '<S1>/PCI1' (pci1756IO) */
  {
    SimStruct *rts = aaa_M->childSfunctions[0];
    sfcnOutputs(rts, 0);
  }

  /* Memory: '<Root>/memory1' */
  memcpy(&aaa_B.memory1[0], &aaa_DW.memory1_PreviousInput[0], sizeof(real_T) <<
         5U);

  /* Level2 S-Function Block: '<S1>/PCI2' (pci1756IO) */
  {
    SimStruct *rts = aaa_M->childSfunctions[1];
    sfcnOutputs(rts, 0);
  }

  /* Constant: '<S1>/Constant1' */
  aaa_B.Constant1 = aaa_P.Constant1_Value;

  /* Level2 S-Function Block: '<S1>/PCI3' (pci1756IO) */
  {
    SimStruct *rts = aaa_M->childSfunctions[2];
    sfcnOutputs(rts, 0);
  }

  /* DataTypeConversion: '<S1>/Data Type Conversion1' */
  memcpy(&aaa_B.DataTypeConversion1[0], &aaa_B.PCI1_o1[0], sizeof(real_T) << 4U);

  /* DataTypeConversion: '<S1>/Data Type Conversion2' */
  memcpy(&aaa_B.DataTypeConversion2[0], &aaa_B.PCI1_o2[0], sizeof(real_T) << 4U);

  /* DataTypeConversion: '<S1>/Data Type Conversion3' */
  memcpy(&aaa_B.DataTypeConversion3[0], &aaa_B.PCI2_o1[0], sizeof(real_T) << 4U);

  /* DataTypeConversion: '<S1>/Data Type Conversion4' */
  memcpy(&aaa_B.DataTypeConversion4[0], &aaa_B.PCI3_o1[0], sizeof(real_T) << 4U);

  /* DataTypeConversion: '<S1>/Data Type Conversion5' */
  memcpy(&aaa_B.DataTypeConversion5[0], &aaa_B.PCI3_o2[0], sizeof(real_T) << 4U);

  /* Constant: '<Root>/start' */
  aaa_B.start = aaa_P.start_Value;

  /* Constant: '<S7>/t1' */
  aaa_B.u_g = aaa_P.t1_Value;

  /* Constant: '<S7>/t3' */
  aaa_B.u_m = aaa_P.t3_Value;

  /* Constant: '<S7>/t5' */
  aaa_B.u_m5 = aaa_P.t5_Value;

  /* Constant: '<S7>/t7' */
  aaa_B.u_gd = aaa_P.t7_Value;

  /* Constant: '<S7>/t9' */
  aaa_B.u_gh = aaa_P.t9_Value;

  /* Constant: '<S7>/t11' */
  aaa_B.u_m0 = aaa_P.t11_Value;

  /* Constant: '<Root>/zidong_shedingcishu' */
  aaa_B.zidong_shedingcishu = aaa_P.zidong_shedingcishu_Value;

  /* Logic: '<S2>/Logical Operator3' */
  aaa_B.LogicalOperator3_e = !(aaa_B.tiaoshi != 0.0);

  /* Logic: '<S2>/Logical Operator' incorporates:
   *  Constant: '<Root>/qiehuan'
   */
  aaa_B.LogicalOperator = !(aaa_P.qiehuan_Value != 0.0);

  /* Logic: '<S2>/Logical Operator1' */
  aaa_B.LogicalOperator1_h = (aaa_B.LogicalOperator3_e && aaa_B.LogicalOperator);

  /* Outputs for Enabled SubSystem: '<S2>/zidong' incorporates:
   *  EnablePort: '<S14>/Enable'
   */
  if (aaa_B.LogicalOperator1_h) {
    /* Logic: '<S14>/Logical Operator4' incorporates:
     *  Constant: '<S14>/kaishi1'
     */
    aaa_B.LogicalOperator4_l = ((aaa_P.kaishi1_Value != 0.0) && (aaa_B.start !=
      0.0));

    /* Chart: '<S14>/1#' */
    aaa_u(aaa_B.LogicalOperator4_l, aaa_B.DataTypeConversion1[0],
          aaa_B.DataTypeConversion2[0], aaa_B.DataTypeConversion1[8],
          aaa_B.DataTypeConversion2[8], aaa_B.DataTypeConversion4[0],
          aaa_B.DataTypeConversion4[8], aaa_B.DataTypeConversion5[0],
          aaa_B.DataTypeConversion5[8], aaa_B.u_g, aaa_B.u_m, aaa_B.u_m5,
          aaa_B.u_gd, aaa_B.u_gh, aaa_B.u_m0, aaa_B.zidong_shedingcishu,
          aaa_B.jieshu, &aaa_B.sf_1, &aaa_DW.sf_1);

    /* Logic: '<S14>/Logical Operator5' incorporates:
     *  Constant: '<S14>/kaishi2'
     */
    aaa_B.LogicalOperator5_m = ((aaa_P.kaishi2_Value != 0.0) && (aaa_B.start !=
      0.0));

    /* Chart: '<S14>/1#1' */
    aaa_u(aaa_B.LogicalOperator5_m, aaa_B.DataTypeConversion1[1],
          aaa_B.DataTypeConversion2[1], aaa_B.DataTypeConversion1[9],
          aaa_B.DataTypeConversion2[9], aaa_B.DataTypeConversion4[1],
          aaa_B.DataTypeConversion4[9], aaa_B.DataTypeConversion5[1],
          aaa_B.DataTypeConversion5[9], aaa_B.u_g, aaa_B.u_m, aaa_B.u_m5,
          aaa_B.u_gd, aaa_B.u_gh, aaa_B.u_m0, aaa_B.zidong_shedingcishu,
          aaa_B.jieshu, &aaa_B.sf_11, &aaa_DW.sf_11);

    /* Logic: '<S14>/Logical Operator6' incorporates:
     *  Constant: '<S14>/kaishi3'
     */
    aaa_B.LogicalOperator6_j = ((aaa_P.kaishi3_Value != 0.0) && (aaa_B.start !=
      0.0));

    /* Chart: '<S14>/1#2' */
    aaa_u(aaa_B.LogicalOperator6_j, aaa_B.DataTypeConversion1[2],
          aaa_B.DataTypeConversion2[2], aaa_B.DataTypeConversion1[10],
          aaa_B.DataTypeConversion2[10], aaa_B.DataTypeConversion4[2],
          aaa_B.DataTypeConversion4[10], aaa_B.DataTypeConversion5[2],
          aaa_B.DataTypeConversion5[10], aaa_B.u_g, aaa_B.u_m, aaa_B.u_m5,
          aaa_B.u_gd, aaa_B.u_gh, aaa_B.u_m0, aaa_B.zidong_shedingcishu,
          aaa_B.jieshu, &aaa_B.sf_12, &aaa_DW.sf_12);

    /* Logic: '<S14>/Logical Operator7' incorporates:
     *  Constant: '<S14>/kaishi4'
     */
    aaa_B.LogicalOperator7 = ((aaa_P.kaishi4_Value != 0.0) && (aaa_B.start !=
      0.0));

    /* Chart: '<S14>/1#3' */
    aaa_u(aaa_B.LogicalOperator7, aaa_B.DataTypeConversion1[3],
          aaa_B.DataTypeConversion2[3], aaa_B.DataTypeConversion1[11],
          aaa_B.DataTypeConversion2[11], aaa_B.DataTypeConversion4[3],
          aaa_B.DataTypeConversion4[11], aaa_B.DataTypeConversion5[3],
          aaa_B.DataTypeConversion5[11], aaa_B.u_g, aaa_B.u_m, aaa_B.u_m5,
          aaa_B.u_gd, aaa_B.u_gh, aaa_B.u_m0, aaa_B.zidong_shedingcishu,
          aaa_B.jieshu, &aaa_B.sf_13, &aaa_DW.sf_13);

    /* Logic: '<S14>/Logical Operator8' incorporates:
     *  Constant: '<S14>/kaishi5'
     */
    aaa_B.LogicalOperator8 = ((aaa_P.kaishi5_Value != 0.0) && (aaa_B.start !=
      0.0));

    /* Chart: '<S14>/1#4' */
    aaa_u(aaa_B.LogicalOperator8, aaa_B.DataTypeConversion1[4],
          aaa_B.DataTypeConversion2[4], aaa_B.DataTypeConversion1[12],
          aaa_B.DataTypeConversion2[12], aaa_B.DataTypeConversion4[4],
          aaa_B.DataTypeConversion4[12], aaa_B.DataTypeConversion5[4],
          aaa_B.DataTypeConversion5[12], aaa_B.u_g, aaa_B.u_m, aaa_B.u_m5,
          aaa_B.u_gd, aaa_B.u_gh, aaa_B.u_m0, aaa_B.zidong_shedingcishu,
          aaa_B.jieshu, &aaa_B.sf_14, &aaa_DW.sf_14);

    /* Logic: '<S14>/Logical Operator9' incorporates:
     *  Constant: '<S14>/kaishi6'
     */
    aaa_B.LogicalOperator9 = ((aaa_P.kaishi6_Value != 0.0) && (aaa_B.start !=
      0.0));

    /* Chart: '<S14>/1#5' */
    aaa_u(aaa_B.LogicalOperator9, aaa_B.DataTypeConversion1[5],
          aaa_B.DataTypeConversion2[5], aaa_B.DataTypeConversion1[13],
          aaa_B.DataTypeConversion2[13], aaa_B.DataTypeConversion4[5],
          aaa_B.DataTypeConversion4[13], aaa_B.DataTypeConversion5[5],
          aaa_B.DataTypeConversion5[13], aaa_B.u_g, aaa_B.u_m, aaa_B.u_m5,
          aaa_B.u_gd, aaa_B.u_gh, aaa_B.u_m0, aaa_B.zidong_shedingcishu,
          aaa_B.jieshu, &aaa_B.sf_15, &aaa_DW.sf_15);

    /* Logic: '<S14>/Logical Operator10' incorporates:
     *  Constant: '<S14>/kaishi7'
     */
    aaa_B.LogicalOperator10 = ((aaa_P.kaishi7_Value != 0.0) && (aaa_B.start !=
      0.0));

    /* Chart: '<S14>/1#6' */
    aaa_u(aaa_B.LogicalOperator10, aaa_B.DataTypeConversion1[6],
          aaa_B.DataTypeConversion2[6], aaa_B.DataTypeConversion1[14],
          aaa_B.DataTypeConversion2[14], aaa_B.DataTypeConversion4[6],
          aaa_B.DataTypeConversion4[14], aaa_B.DataTypeConversion5[6],
          aaa_B.DataTypeConversion5[14], aaa_B.u_g, aaa_B.u_m, aaa_B.u_m5,
          aaa_B.u_gd, aaa_B.u_gh, aaa_B.u_m0, aaa_B.zidong_shedingcishu,
          aaa_B.jieshu, &aaa_B.sf_16, &aaa_DW.sf_16);

    /* Logic: '<S14>/Logical Operator11' incorporates:
     *  Constant: '<S14>/kaishi8'
     */
    aaa_B.LogicalOperator11 = ((aaa_P.kaishi8_Value != 0.0) && (aaa_B.start !=
      0.0));

    /* Chart: '<S14>/1#7' */
    aaa_u(aaa_B.LogicalOperator11, aaa_B.DataTypeConversion1[7],
          aaa_B.DataTypeConversion2[7], aaa_B.DataTypeConversion1[15],
          aaa_B.DataTypeConversion2[15], aaa_B.DataTypeConversion4[7],
          aaa_B.DataTypeConversion4[15], aaa_B.DataTypeConversion5[7],
          aaa_B.DataTypeConversion5[15], aaa_B.u_g, aaa_B.u_m, aaa_B.u_m5,
          aaa_B.u_gd, aaa_B.u_gh, aaa_B.u_m0, aaa_B.zidong_shedingcishu,
          aaa_B.jieshu, &aaa_B.sf_17, &aaa_DW.sf_17);

    /* DataTypeConversion: '<S14>/Data Type Conversion1' */
    aaa_B.DataTypeConversion1_b[0] = aaa_B.sf_1.skyichang;
    aaa_B.DataTypeConversion1_b[1] = aaa_B.sf_1.kgyichang;
    aaa_B.DataTypeConversion1_b[2] = aaa_B.sf_1.sdyichang;
    aaa_B.DataTypeConversion1_b[3] = aaa_B.sf_1.jsyichang;
    aaa_B.DataTypeConversion1_b[4] = aaa_B.sf_1.ggyichang;
    aaa_B.DataTypeConversion1_b[5] = aaa_B.sf_1.yjyichang;

    /* DataTypeConversion: '<S14>/Data Type Conversion2' */
    aaa_B.DataTypeConversion2_j[0] = aaa_B.sf_11.skyichang;
    aaa_B.DataTypeConversion2_j[1] = aaa_B.sf_11.kgyichang;
    aaa_B.DataTypeConversion2_j[2] = aaa_B.sf_11.sdyichang;
    aaa_B.DataTypeConversion2_j[3] = aaa_B.sf_11.jsyichang;
    aaa_B.DataTypeConversion2_j[4] = aaa_B.sf_11.ggyichang;
    aaa_B.DataTypeConversion2_j[5] = aaa_B.sf_11.yjyichang;

    /* DataTypeConversion: '<S14>/Data Type Conversion3' */
    aaa_B.DataTypeConversion3_l[0] = aaa_B.sf_12.skyichang;
    aaa_B.DataTypeConversion3_l[1] = aaa_B.sf_12.kgyichang;
    aaa_B.DataTypeConversion3_l[2] = aaa_B.sf_12.sdyichang;
    aaa_B.DataTypeConversion3_l[3] = aaa_B.sf_12.jsyichang;
    aaa_B.DataTypeConversion3_l[4] = aaa_B.sf_12.ggyichang;
    aaa_B.DataTypeConversion3_l[5] = aaa_B.sf_12.yjyichang;

    /* DataTypeConversion: '<S14>/Data Type Conversion4' */
    aaa_B.DataTypeConversion4_m[0] = aaa_B.sf_14.skyichang;
    aaa_B.DataTypeConversion4_m[1] = aaa_B.sf_14.kgyichang;
    aaa_B.DataTypeConversion4_m[2] = aaa_B.sf_14.sdyichang;
    aaa_B.DataTypeConversion4_m[3] = aaa_B.sf_14.jsyichang;
    aaa_B.DataTypeConversion4_m[4] = aaa_B.sf_14.ggyichang;
    aaa_B.DataTypeConversion4_m[5] = aaa_B.sf_14.yjyichang;

    /* DataTypeConversion: '<S14>/Data Type Conversion5' */
    aaa_B.DataTypeConversion5_n[0] = aaa_B.sf_15.skyichang;
    aaa_B.DataTypeConversion5_n[1] = aaa_B.sf_15.kgyichang;
    aaa_B.DataTypeConversion5_n[2] = aaa_B.sf_15.sdyichang;
    aaa_B.DataTypeConversion5_n[3] = aaa_B.sf_15.jsyichang;
    aaa_B.DataTypeConversion5_n[4] = aaa_B.sf_15.ggyichang;
    aaa_B.DataTypeConversion5_n[5] = aaa_B.sf_15.yjyichang;

    /* DataTypeConversion: '<S14>/Data Type Conversion6' */
    aaa_B.DataTypeConversion6_d[0] = aaa_B.sf_16.skyichang;
    aaa_B.DataTypeConversion6_d[1] = aaa_B.sf_16.kgyichang;
    aaa_B.DataTypeConversion6_d[2] = aaa_B.sf_16.sdyichang;
    aaa_B.DataTypeConversion6_d[3] = aaa_B.sf_16.jsyichang;
    aaa_B.DataTypeConversion6_d[4] = aaa_B.sf_16.ggyichang;
    aaa_B.DataTypeConversion6_d[5] = aaa_B.sf_16.yjyichang;

    /* DataTypeConversion: '<S14>/Data Type Conversion7' */
    aaa_B.DataTypeConversion7[0] = aaa_B.sf_17.skyichang;
    aaa_B.DataTypeConversion7[1] = aaa_B.sf_17.kgyichang;
    aaa_B.DataTypeConversion7[2] = aaa_B.sf_17.sdyichang;
    aaa_B.DataTypeConversion7[3] = aaa_B.sf_17.jsyichang;
    aaa_B.DataTypeConversion7[4] = aaa_B.sf_17.ggyichang;
    aaa_B.DataTypeConversion7[5] = aaa_B.sf_17.yjyichang;

    /* DataTypeConversion: '<S14>/Data Type Conversion8' */
    aaa_B.DataTypeConversion8[0] = aaa_B.sf_13.skyichang;
    aaa_B.DataTypeConversion8[1] = aaa_B.sf_13.kgyichang;
    aaa_B.DataTypeConversion8[2] = aaa_B.sf_13.sdyichang;
    aaa_B.DataTypeConversion8[3] = aaa_B.sf_13.jsyichang;
    aaa_B.DataTypeConversion8[4] = aaa_B.sf_13.ggyichang;
    aaa_B.DataTypeConversion8[5] = aaa_B.sf_13.yjyichang;

    /* Logic: '<S14>/Logical Operator' */
    aaa_B.LogicalOperator_c = ((aaa_B.sf_1.skhx != 0.0) || (aaa_B.sf_11.skhx !=
      0.0) || (aaa_B.sf_12.skhx != 0.0) || (aaa_B.sf_13.skhx != 0.0) ||
      (aaa_B.sf_14.skhx != 0.0) || (aaa_B.sf_15.skhx != 0.0) ||
      (aaa_B.sf_16.skhx != 0.0) || (aaa_B.sf_17.skhx != 0.0));

    /* Logic: '<S14>/Logical Operator1' */
    aaa_B.LogicalOperator1_i = ((aaa_B.sf_1.kghx != 0.0) || (aaa_B.sf_11.kghx !=
      0.0) || (aaa_B.sf_12.kghx != 0.0) || (aaa_B.sf_13.kghx != 0.0) ||
      (aaa_B.sf_14.kghx != 0.0) || (aaa_B.sf_15.kghx != 0.0) ||
      (aaa_B.sf_16.kghx != 0.0) || (aaa_B.sf_17.kghx != 0.0));

    /* Logic: '<S14>/Logical Operator2' */
    aaa_B.LogicalOperator2_k = ((aaa_B.sf_1.yjhx != 0.0) || (aaa_B.sf_11.yjhx !=
      0.0) || (aaa_B.sf_12.yjhx != 0.0) || (aaa_B.sf_13.yjhx != 0.0) ||
      (aaa_B.sf_14.yjhx != 0.0) || (aaa_B.sf_15.yjhx != 0.0) ||
      (aaa_B.sf_16.yjhx != 0.0) || (aaa_B.sf_17.yjhx != 0.0));

    /* Logic: '<S14>/Logical Operator3' */
    aaa_B.LogicalOperator3_p = ((aaa_B.sf_1.gghx != 0.0) || (aaa_B.sf_11.gghx !=
      0.0) || (aaa_B.sf_12.gghx != 0.0) || (aaa_B.sf_13.gghx != 0.0) ||
      (aaa_B.sf_14.gghx != 0.0) || (aaa_B.sf_15.gghx != 0.0) ||
      (aaa_B.sf_16.gghx != 0.0) || (aaa_B.sf_17.gghx != 0.0));
    srUpdateBC(aaa_DW.zidong_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<S2>/zidong' */

  /* Memory: '<S31>/2' */
  aaa_B.u_gs = aaa_DW.u_PreviousInput_o;

  /* Memory: '<S31>/3' */
  aaa_B.u_n = aaa_DW.u_PreviousInput_h;

  /* Memory: '<S31>/4' */
  aaa_B.u_k = aaa_DW.u_PreviousInput_js;

  /* Memory: '<S31>/5' */
  aaa_B.u_ni = aaa_DW.u_PreviousInput_p;

  /* Memory: '<S31>/6' */
  aaa_B.u_l4 = aaa_DW.u_PreviousInput_bm;

  /* Logic: '<S31>/Logical Operator1' */
  aaa_B.LogicalOperator1_k = ((aaa_B.u_gs != 0.0) || (aaa_B.u_n != 0.0) ||
    (aaa_B.u_k != 0.0) || (aaa_B.u_ni != 0.0) || (aaa_B.u_l4 != 0.0));

  /* Switch: '<S31>/Switch1' incorporates:
   *  Constant: '<S31>/Constant12'
   *  Constant: '<S3>/songkai'
   */
  if (aaa_B.LogicalOperator1_k) {
    aaa_B.Switch1_d = aaa_P.Constant12_Value;
  } else {
    aaa_B.Switch1_d = aaa_P.songkai_Value;
  }

  /* End of Switch: '<S31>/Switch1' */

  /* Memory: '<S31>/1' */
  aaa_B.u_dd = aaa_DW.u_PreviousInput_f;

  /* Logic: '<S31>/Logical Operator2' */
  aaa_B.LogicalOperator2_j = ((aaa_B.u_dd != 0.0) || (aaa_B.u_n != 0.0) ||
    (aaa_B.u_k != 0.0) || (aaa_B.u_ni != 0.0) || (aaa_B.u_l4 != 0.0));

  /* Switch: '<S31>/Switch2' incorporates:
   *  Constant: '<S31>/Constant16'
   *  Constant: '<S3>/kaigai'
   */
  if (aaa_B.LogicalOperator2_j) {
    aaa_B.Switch2_d = aaa_P.Constant16_Value;
  } else {
    aaa_B.Switch2_d = aaa_P.kaigai_Value;
  }

  /* End of Switch: '<S31>/Switch2' */

  /* Logic: '<S31>/Logical Operator3' */
  aaa_B.LogicalOperator3_j = ((aaa_B.u_dd != 0.0) || (aaa_B.u_gs != 0.0) ||
    (aaa_B.u_k != 0.0) || (aaa_B.u_ni != 0.0) || (aaa_B.u_l4 != 0.0));

  /* Switch: '<S31>/Switch3' incorporates:
   *  Constant: '<S31>/Constant13'
   *  Constant: '<S3>/suoding'
   */
  if (aaa_B.LogicalOperator3_j) {
    aaa_B.Switch3_p = aaa_P.Constant13_Value;
  } else {
    aaa_B.Switch3_p = aaa_P.suoding_Value;
  }

  /* End of Switch: '<S31>/Switch3' */

  /* Logic: '<S31>/Logical Operator4' */
  aaa_B.LogicalOperator4_n = ((aaa_B.u_dd != 0.0) || (aaa_B.u_gs != 0.0) ||
    (aaa_B.u_n != 0.0) || (aaa_B.u_ni != 0.0) || (aaa_B.u_l4 != 0.0));

  /* Switch: '<S31>/Switch4' incorporates:
   *  Constant: '<S31>/Constant17'
   *  Constant: '<S3>/jiesuo'
   */
  if (aaa_B.LogicalOperator4_n) {
    aaa_B.Switch4_k = aaa_P.Constant17_Value;
  } else {
    aaa_B.Switch4_k = aaa_P.jiesuo_Value;
  }

  /* End of Switch: '<S31>/Switch4' */

  /* Logic: '<S31>/Logical Operator5' */
  aaa_B.LogicalOperator5_a = ((aaa_B.u_dd != 0.0) || (aaa_B.u_gs != 0.0) ||
    (aaa_B.u_n != 0.0) || (aaa_B.u_k != 0.0) || (aaa_B.u_l4 != 0.0));

  /* Switch: '<S31>/Switch5' incorporates:
   *  Constant: '<S31>/Constant18'
   *  Constant: '<S3>/guangai'
   */
  if (aaa_B.LogicalOperator5_a) {
    aaa_B.Switch5_h = aaa_P.Constant18_Value;
  } else {
    aaa_B.Switch5_h = aaa_P.guangai_Value;
  }

  /* End of Switch: '<S31>/Switch5' */

  /* Logic: '<S31>/Logical Operator6' */
  aaa_B.LogicalOperator6_n = ((aaa_B.u_dd != 0.0) || (aaa_B.u_gs != 0.0) ||
    (aaa_B.u_n != 0.0) || (aaa_B.u_k != 0.0) || (aaa_B.u_ni != 0.0));

  /* Switch: '<S31>/Switch6' incorporates:
   *  Constant: '<S31>/Constant19'
   *  Constant: '<S3>/yajin'
   */
  if (aaa_B.LogicalOperator6_n) {
    aaa_B.Switch6_c = aaa_P.Constant19_Value;
  } else {
    aaa_B.Switch6_c = aaa_P.yajin_Value;
  }

  /* End of Switch: '<S31>/Switch6' */

  /* Product: '<S3>/Product' incorporates:
   *  Constant: '<S3>/s1'
   */
  aaa_B.Product_g[0] = aaa_B.Switch1_d * aaa_P.s1_Value_d;
  aaa_B.Product_g[1] = aaa_B.Switch2_d * aaa_P.s1_Value_d;
  aaa_B.Product_g[2] = aaa_B.Switch3_p * aaa_P.s1_Value_d;
  aaa_B.Product_g[3] = aaa_B.Switch4_k * aaa_P.s1_Value_d;
  aaa_B.Product_g[4] = aaa_B.Switch5_h * aaa_P.s1_Value_d;
  aaa_B.Product_g[5] = aaa_B.Switch6_c * aaa_P.s1_Value_d;

  /* Product: '<S3>/Product1' incorporates:
   *  Constant: '<S3>/s2'
   */
  aaa_B.Product1_k[0] = aaa_B.Switch1_d * aaa_P.s2_Value_o;
  aaa_B.Product1_k[1] = aaa_B.Switch2_d * aaa_P.s2_Value_o;
  aaa_B.Product1_k[2] = aaa_B.Switch3_p * aaa_P.s2_Value_o;
  aaa_B.Product1_k[3] = aaa_B.Switch4_k * aaa_P.s2_Value_o;
  aaa_B.Product1_k[4] = aaa_B.Switch5_h * aaa_P.s2_Value_o;
  aaa_B.Product1_k[5] = aaa_B.Switch6_c * aaa_P.s2_Value_o;

  /* Product: '<S3>/Product2' incorporates:
   *  Constant: '<S3>/s3'
   */
  aaa_B.Product2_m[0] = aaa_B.Switch1_d * aaa_P.s3_Value_d;
  aaa_B.Product2_m[1] = aaa_B.Switch2_d * aaa_P.s3_Value_d;
  aaa_B.Product2_m[2] = aaa_B.Switch3_p * aaa_P.s3_Value_d;
  aaa_B.Product2_m[3] = aaa_B.Switch4_k * aaa_P.s3_Value_d;
  aaa_B.Product2_m[4] = aaa_B.Switch5_h * aaa_P.s3_Value_d;
  aaa_B.Product2_m[5] = aaa_B.Switch6_c * aaa_P.s3_Value_d;

  /* Product: '<S3>/Product3' incorporates:
   *  Constant: '<S3>/s4'
   */
  aaa_B.Product3_p[0] = aaa_B.Switch1_d * aaa_P.s4_Value_n;
  aaa_B.Product3_p[1] = aaa_B.Switch2_d * aaa_P.s4_Value_n;
  aaa_B.Product3_p[2] = aaa_B.Switch3_p * aaa_P.s4_Value_n;
  aaa_B.Product3_p[3] = aaa_B.Switch4_k * aaa_P.s4_Value_n;
  aaa_B.Product3_p[4] = aaa_B.Switch5_h * aaa_P.s4_Value_n;
  aaa_B.Product3_p[5] = aaa_B.Switch6_c * aaa_P.s4_Value_n;

  /* Product: '<S3>/Product4' incorporates:
   *  Constant: '<S3>/s5'
   */
  aaa_B.Product4_l[0] = aaa_B.Switch1_d * aaa_P.s5_Value_j;
  aaa_B.Product4_l[1] = aaa_B.Switch2_d * aaa_P.s5_Value_j;
  aaa_B.Product4_l[2] = aaa_B.Switch3_p * aaa_P.s5_Value_j;
  aaa_B.Product4_l[3] = aaa_B.Switch4_k * aaa_P.s5_Value_j;
  aaa_B.Product4_l[4] = aaa_B.Switch5_h * aaa_P.s5_Value_j;
  aaa_B.Product4_l[5] = aaa_B.Switch6_c * aaa_P.s5_Value_j;

  /* Product: '<S3>/Product5' incorporates:
   *  Constant: '<S3>/s6'
   */
  aaa_B.Product5_f[0] = aaa_B.Switch1_d * aaa_P.s6_Value_i;
  aaa_B.Product5_f[1] = aaa_B.Switch2_d * aaa_P.s6_Value_i;
  aaa_B.Product5_f[2] = aaa_B.Switch3_p * aaa_P.s6_Value_i;
  aaa_B.Product5_f[3] = aaa_B.Switch4_k * aaa_P.s6_Value_i;
  aaa_B.Product5_f[4] = aaa_B.Switch5_h * aaa_P.s6_Value_i;
  aaa_B.Product5_f[5] = aaa_B.Switch6_c * aaa_P.s6_Value_i;

  /* Product: '<S3>/Product6' incorporates:
   *  Constant: '<S3>/s7'
   */
  aaa_B.Product6_p[0] = aaa_B.Switch1_d * aaa_P.s7_Value_m;
  aaa_B.Product6_p[1] = aaa_B.Switch2_d * aaa_P.s7_Value_m;
  aaa_B.Product6_p[2] = aaa_B.Switch3_p * aaa_P.s7_Value_m;
  aaa_B.Product6_p[3] = aaa_B.Switch4_k * aaa_P.s7_Value_m;
  aaa_B.Product6_p[4] = aaa_B.Switch5_h * aaa_P.s7_Value_m;
  aaa_B.Product6_p[5] = aaa_B.Switch6_c * aaa_P.s7_Value_m;

  /* Product: '<S3>/Product7' incorporates:
   *  Constant: '<S3>/s8'
   */
  aaa_B.Product7_l[0] = aaa_B.Switch1_d * aaa_P.s8_Value_p;
  aaa_B.Product7_l[1] = aaa_B.Switch2_d * aaa_P.s8_Value_p;
  aaa_B.Product7_l[2] = aaa_B.Switch3_p * aaa_P.s8_Value_p;
  aaa_B.Product7_l[3] = aaa_B.Switch4_k * aaa_P.s8_Value_p;
  aaa_B.Product7_l[4] = aaa_B.Switch5_h * aaa_P.s8_Value_p;
  aaa_B.Product7_l[5] = aaa_B.Switch6_c * aaa_P.s8_Value_p;

  /* Logic: '<S2>/Logical Operator2' incorporates:
   *  Constant: '<Root>/qiehuan'
   */
  aaa_B.LogicalOperator2_e = ((aaa_P.qiehuan_Value != 0.0) &&
    aaa_B.LogicalOperator3_e);

  /* Outputs for Enabled SubSystem: '<S2>/shoudong' incorporates:
   *  EnablePort: '<S13>/Enable'
   */
  if (aaa_B.LogicalOperator2_e) {
    /* Chart: '<S13>/Chart' */
    aaa_Chart(aaa_B.start, aaa_B.DataTypeConversion1[0],
              aaa_B.DataTypeConversion2[0], aaa_B.DataTypeConversion1[8],
              aaa_B.DataTypeConversion2[8], aaa_B.DataTypeConversion4[0],
              aaa_B.DataTypeConversion4[8], aaa_B.DataTypeConversion5[0],
              aaa_B.DataTypeConversion5[8], aaa_B.Product_g[0], aaa_B.Product_g
              [1], aaa_B.Product_g[2], aaa_B.Product_g[3], aaa_B.Product_g[4],
              aaa_B.Product_g[5], aaa_B.jieshu, &aaa_B.sf_Chart_o,
              &aaa_DW.sf_Chart_o);

    /* Chart: '<S13>/Chart1' */
    aaa_Chart(aaa_B.start, aaa_B.DataTypeConversion1[1],
              aaa_B.DataTypeConversion2[1], aaa_B.DataTypeConversion1[9],
              aaa_B.DataTypeConversion2[9], aaa_B.DataTypeConversion4[1],
              aaa_B.DataTypeConversion4[9], aaa_B.DataTypeConversion5[1],
              aaa_B.DataTypeConversion5[9], aaa_B.Product1_k[0],
              aaa_B.Product1_k[1], aaa_B.Product1_k[2], aaa_B.Product1_k[3],
              aaa_B.Product1_k[4], aaa_B.Product1_k[5], aaa_B.jieshu,
              &aaa_B.sf_Chart1_d, &aaa_DW.sf_Chart1_d);

    /* Chart: '<S13>/Chart2' */
    aaa_Chart(aaa_B.start, aaa_B.DataTypeConversion1[2],
              aaa_B.DataTypeConversion2[2], aaa_B.DataTypeConversion1[10],
              aaa_B.DataTypeConversion2[10], aaa_B.DataTypeConversion4[2],
              aaa_B.DataTypeConversion4[10], aaa_B.DataTypeConversion5[2],
              aaa_B.DataTypeConversion5[10], aaa_B.Product2_m[0],
              aaa_B.Product2_m[1], aaa_B.Product2_m[2], aaa_B.Product2_m[3],
              aaa_B.Product2_m[4], aaa_B.Product2_m[5], aaa_B.jieshu,
              &aaa_B.sf_Chart2, &aaa_DW.sf_Chart2);

    /* Chart: '<S13>/Chart3' */
    aaa_Chart(aaa_B.start, aaa_B.DataTypeConversion1[3],
              aaa_B.DataTypeConversion2[3], aaa_B.DataTypeConversion1[11],
              aaa_B.DataTypeConversion2[11], aaa_B.DataTypeConversion4[3],
              aaa_B.DataTypeConversion4[11], aaa_B.DataTypeConversion5[3],
              aaa_B.DataTypeConversion5[11], aaa_B.Product3_p[0],
              aaa_B.Product3_p[1], aaa_B.Product3_p[2], aaa_B.Product3_p[3],
              aaa_B.Product3_p[4], aaa_B.Product3_p[5], aaa_B.jieshu,
              &aaa_B.sf_Chart3, &aaa_DW.sf_Chart3);

    /* Chart: '<S13>/Chart4' */
    aaa_Chart(aaa_B.start, aaa_B.DataTypeConversion1[4],
              aaa_B.DataTypeConversion2[4], aaa_B.DataTypeConversion1[12],
              aaa_B.DataTypeConversion2[12], aaa_B.DataTypeConversion4[4],
              aaa_B.DataTypeConversion4[12], aaa_B.DataTypeConversion5[4],
              aaa_B.DataTypeConversion5[12], aaa_B.Product4_l[0],
              aaa_B.Product4_l[1], aaa_B.Product4_l[2], aaa_B.Product4_l[3],
              aaa_B.Product4_l[4], aaa_B.Product4_l[5], aaa_B.jieshu,
              &aaa_B.sf_Chart4, &aaa_DW.sf_Chart4);

    /* Chart: '<S13>/Chart5' */
    aaa_Chart(aaa_B.start, aaa_B.DataTypeConversion1[5],
              aaa_B.DataTypeConversion2[5], aaa_B.DataTypeConversion1[13],
              aaa_B.DataTypeConversion2[13], aaa_B.DataTypeConversion4[5],
              aaa_B.DataTypeConversion4[13], aaa_B.DataTypeConversion5[5],
              aaa_B.DataTypeConversion5[13], aaa_B.Product5_f[0],
              aaa_B.Product5_f[1], aaa_B.Product5_f[2], aaa_B.Product5_f[3],
              aaa_B.Product5_f[4], aaa_B.Product5_f[5], aaa_B.jieshu,
              &aaa_B.sf_Chart5, &aaa_DW.sf_Chart5);

    /* Chart: '<S13>/Chart6' */
    aaa_Chart(aaa_B.start, aaa_B.DataTypeConversion1[6],
              aaa_B.DataTypeConversion2[6], aaa_B.DataTypeConversion1[14],
              aaa_B.DataTypeConversion2[14], aaa_B.DataTypeConversion4[6],
              aaa_B.DataTypeConversion4[14], aaa_B.DataTypeConversion5[6],
              aaa_B.DataTypeConversion5[14], aaa_B.Product6_p[0],
              aaa_B.Product6_p[1], aaa_B.Product6_p[2], aaa_B.Product6_p[3],
              aaa_B.Product6_p[4], aaa_B.Product6_p[5], aaa_B.jieshu,
              &aaa_B.sf_Chart6, &aaa_DW.sf_Chart6);

    /* Chart: '<S13>/Chart7' */
    aaa_Chart(aaa_B.start, aaa_B.DataTypeConversion1[7],
              aaa_B.DataTypeConversion2[7], aaa_B.DataTypeConversion1[15],
              aaa_B.DataTypeConversion2[15], aaa_B.DataTypeConversion4[7],
              aaa_B.DataTypeConversion4[15], aaa_B.DataTypeConversion5[7],
              aaa_B.DataTypeConversion5[15], aaa_B.Product7_l[0],
              aaa_B.Product7_l[1], aaa_B.Product7_l[2], aaa_B.Product7_l[3],
              aaa_B.Product7_l[4], aaa_B.Product7_l[5], aaa_B.jieshu,
              &aaa_B.sf_Chart7, &aaa_DW.sf_Chart7);

    /* DataTypeConversion: '<S13>/Data Type Conversion1' */
    aaa_B.DataTypeConversion1_a[0] = aaa_B.sf_Chart6.skyichang;
    aaa_B.DataTypeConversion1_a[1] = aaa_B.sf_Chart6.kgyichang;
    aaa_B.DataTypeConversion1_a[2] = aaa_B.sf_Chart6.sdyichang;
    aaa_B.DataTypeConversion1_a[3] = aaa_B.sf_Chart6.jsyichang;
    aaa_B.DataTypeConversion1_a[4] = aaa_B.sf_Chart6.ggyichang;
    aaa_B.DataTypeConversion1_a[5] = aaa_B.sf_Chart6.yjyichang;

    /* DataTypeConversion: '<S13>/Data Type Conversion10' */
    aaa_B.DataTypeConversion10[0] = aaa_B.sf_Chart5.skyichang;
    aaa_B.DataTypeConversion10[1] = aaa_B.sf_Chart5.kgyichang;
    aaa_B.DataTypeConversion10[2] = aaa_B.sf_Chart5.sdyichang;
    aaa_B.DataTypeConversion10[3] = aaa_B.sf_Chart5.jsyichang;
    aaa_B.DataTypeConversion10[4] = aaa_B.sf_Chart5.ggyichang;
    aaa_B.DataTypeConversion10[5] = aaa_B.sf_Chart5.yjyichang;

    /* DataTypeConversion: '<S13>/Data Type Conversion2' */
    aaa_B.DataTypeConversion2_p[0] = aaa_B.sf_Chart7.skyichang;
    aaa_B.DataTypeConversion2_p[1] = aaa_B.sf_Chart7.kgyichang;
    aaa_B.DataTypeConversion2_p[2] = aaa_B.sf_Chart7.sdyichang;
    aaa_B.DataTypeConversion2_p[3] = aaa_B.sf_Chart7.jsyichang;
    aaa_B.DataTypeConversion2_p[4] = aaa_B.sf_Chart7.ggyichang;
    aaa_B.DataTypeConversion2_p[5] = aaa_B.sf_Chart7.yjyichang;

    /* DataTypeConversion: '<S13>/Data Type Conversion5' */
    aaa_B.DataTypeConversion5_m[0] = aaa_B.sf_Chart_o.skyichang;
    aaa_B.DataTypeConversion5_m[1] = aaa_B.sf_Chart_o.kgyichang;
    aaa_B.DataTypeConversion5_m[2] = aaa_B.sf_Chart_o.sdyichang;
    aaa_B.DataTypeConversion5_m[3] = aaa_B.sf_Chart_o.jsyichang;
    aaa_B.DataTypeConversion5_m[4] = aaa_B.sf_Chart_o.ggyichang;
    aaa_B.DataTypeConversion5_m[5] = aaa_B.sf_Chart_o.yjyichang;

    /* DataTypeConversion: '<S13>/Data Type Conversion6' */
    aaa_B.DataTypeConversion6_nb[0] = aaa_B.sf_Chart1_d.skyichang;
    aaa_B.DataTypeConversion6_nb[1] = aaa_B.sf_Chart1_d.kgyichang;
    aaa_B.DataTypeConversion6_nb[2] = aaa_B.sf_Chart1_d.sdyichang;
    aaa_B.DataTypeConversion6_nb[3] = aaa_B.sf_Chart1_d.jsyichang;
    aaa_B.DataTypeConversion6_nb[4] = aaa_B.sf_Chart1_d.ggyichang;
    aaa_B.DataTypeConversion6_nb[5] = aaa_B.sf_Chart1_d.yjyichang;

    /* DataTypeConversion: '<S13>/Data Type Conversion7' */
    aaa_B.DataTypeConversion7_d[0] = aaa_B.sf_Chart2.skyichang;
    aaa_B.DataTypeConversion7_d[1] = aaa_B.sf_Chart2.kgyichang;
    aaa_B.DataTypeConversion7_d[2] = aaa_B.sf_Chart2.sdyichang;
    aaa_B.DataTypeConversion7_d[3] = aaa_B.sf_Chart2.jsyichang;
    aaa_B.DataTypeConversion7_d[4] = aaa_B.sf_Chart2.ggyichang;
    aaa_B.DataTypeConversion7_d[5] = aaa_B.sf_Chart2.yjyichang;

    /* DataTypeConversion: '<S13>/Data Type Conversion8' */
    aaa_B.DataTypeConversion8_a[0] = aaa_B.sf_Chart3.skyichang;
    aaa_B.DataTypeConversion8_a[1] = aaa_B.sf_Chart3.kgyichang;
    aaa_B.DataTypeConversion8_a[2] = aaa_B.sf_Chart3.sdyichang;
    aaa_B.DataTypeConversion8_a[3] = aaa_B.sf_Chart3.jsyichang;
    aaa_B.DataTypeConversion8_a[4] = aaa_B.sf_Chart3.ggyichang;
    aaa_B.DataTypeConversion8_a[5] = aaa_B.sf_Chart3.yjyichang;

    /* DataTypeConversion: '<S13>/Data Type Conversion9' */
    aaa_B.DataTypeConversion9[0] = aaa_B.sf_Chart4.skyichang;
    aaa_B.DataTypeConversion9[1] = aaa_B.sf_Chart4.kgyichang;
    aaa_B.DataTypeConversion9[2] = aaa_B.sf_Chart4.sdyichang;
    aaa_B.DataTypeConversion9[3] = aaa_B.sf_Chart4.jsyichang;
    aaa_B.DataTypeConversion9[4] = aaa_B.sf_Chart4.ggyichang;
    aaa_B.DataTypeConversion9[5] = aaa_B.sf_Chart4.yjyichang;

    /* Logic: '<S13>/Logical Operator' */
    aaa_B.LogicalOperator_p = ((aaa_B.sf_Chart_o.skhx != 0.0) ||
      (aaa_B.sf_Chart1_d.skhx != 0.0) || (aaa_B.sf_Chart2.skhx != 0.0) ||
      (aaa_B.sf_Chart3.skhx != 0.0) || (aaa_B.sf_Chart4.skhx != 0.0) ||
      (aaa_B.sf_Chart5.skhx != 0.0) || (aaa_B.sf_Chart6.skhx != 0.0) ||
      (aaa_B.sf_Chart7.skhx != 0.0));

    /* Logic: '<S13>/Logical Operator1' */
    aaa_B.LogicalOperator1_f = ((aaa_B.sf_Chart_o.kghx != 0.0) ||
      (aaa_B.sf_Chart1_d.kghx != 0.0) || (aaa_B.sf_Chart2.kghx != 0.0) ||
      (aaa_B.sf_Chart3.kghx != 0.0) || (aaa_B.sf_Chart4.kghx != 0.0) ||
      (aaa_B.sf_Chart5.kghx != 0.0) || (aaa_B.sf_Chart6.kghx != 0.0) ||
      (aaa_B.sf_Chart7.kghx != 0.0));

    /* Logic: '<S13>/Logical Operator2' */
    aaa_B.LogicalOperator2_f = ((aaa_B.sf_Chart_o.yjhx != 0.0) ||
      (aaa_B.sf_Chart1_d.yjhx != 0.0) || (aaa_B.sf_Chart2.yjhx != 0.0) ||
      (aaa_B.sf_Chart3.yjhx != 0.0) || (aaa_B.sf_Chart4.yjhx != 0.0) ||
      (aaa_B.sf_Chart5.yjhx != 0.0) || (aaa_B.sf_Chart6.yjhx != 0.0) ||
      (aaa_B.sf_Chart7.yjhx != 0.0));

    /* Logic: '<S13>/Logical Operator3' */
    aaa_B.LogicalOperator3_d = ((aaa_B.sf_Chart_o.gghx != 0.0) ||
      (aaa_B.sf_Chart1_d.gghx != 0.0) || (aaa_B.sf_Chart2.gghx != 0.0) ||
      (aaa_B.sf_Chart3.gghx != 0.0) || (aaa_B.sf_Chart4.gghx != 0.0) ||
      (aaa_B.sf_Chart5.gghx != 0.0) || (aaa_B.sf_Chart6.gghx != 0.0) ||
      (aaa_B.sf_Chart7.gghx != 0.0));
    srUpdateBC(aaa_DW.shoudong_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<S2>/shoudong' */

  /* MultiPortSwitch: '<S2>/Multiport Switch2' incorporates:
   *  Constant: '<Root>/qiehuan'
   */
  if ((int32_T)aaa_P.qiehuan_Value == 0) {
    aaa_B.MultiportSwitch2[0] = aaa_B.sf_1.skt;
    aaa_B.MultiportSwitch2[1] = aaa_B.sf_1.kgt;
    aaa_B.MultiportSwitch2[2] = aaa_B.sf_1.sdt;
    aaa_B.MultiportSwitch2[3] = aaa_B.sf_1.jst;
    aaa_B.MultiportSwitch2[4] = aaa_B.sf_1.ggt;
    aaa_B.MultiportSwitch2[5] = aaa_B.sf_1.yjt;
    aaa_B.MultiportSwitch2[6] = aaa_B.sf_11.skt;
    aaa_B.MultiportSwitch2[7] = aaa_B.sf_11.kgt;
    aaa_B.MultiportSwitch2[8] = aaa_B.sf_11.sdt;
    aaa_B.MultiportSwitch2[9] = aaa_B.sf_11.jst;
    aaa_B.MultiportSwitch2[10] = aaa_B.sf_11.ggt;
    aaa_B.MultiportSwitch2[11] = aaa_B.sf_11.yjt;
    aaa_B.MultiportSwitch2[12] = aaa_B.sf_12.skt;
    aaa_B.MultiportSwitch2[13] = aaa_B.sf_12.kgt;
    aaa_B.MultiportSwitch2[14] = aaa_B.sf_12.sdt;
    aaa_B.MultiportSwitch2[15] = aaa_B.sf_12.jst;
    aaa_B.MultiportSwitch2[16] = aaa_B.sf_12.ggt;
    aaa_B.MultiportSwitch2[17] = aaa_B.sf_12.yjt;
    aaa_B.MultiportSwitch2[18] = aaa_B.sf_13.skt;
    aaa_B.MultiportSwitch2[19] = aaa_B.sf_13.kgt;
    aaa_B.MultiportSwitch2[20] = aaa_B.sf_13.sdt;
    aaa_B.MultiportSwitch2[21] = aaa_B.sf_13.jst;
    aaa_B.MultiportSwitch2[22] = aaa_B.sf_13.ggt;
    aaa_B.MultiportSwitch2[23] = aaa_B.sf_13.yjt;
    aaa_B.MultiportSwitch2[24] = aaa_B.sf_14.skt;
    aaa_B.MultiportSwitch2[25] = aaa_B.sf_14.kgt;
    aaa_B.MultiportSwitch2[26] = aaa_B.sf_14.sdt;
    aaa_B.MultiportSwitch2[27] = aaa_B.sf_14.jst;
    aaa_B.MultiportSwitch2[28] = aaa_B.sf_14.ggt;
    aaa_B.MultiportSwitch2[29] = aaa_B.sf_14.yjt;
    aaa_B.MultiportSwitch2[30] = aaa_B.sf_15.skt;
    aaa_B.MultiportSwitch2[31] = aaa_B.sf_15.kgt;
    aaa_B.MultiportSwitch2[32] = aaa_B.sf_15.sdt;
    aaa_B.MultiportSwitch2[33] = aaa_B.sf_15.jst;
    aaa_B.MultiportSwitch2[34] = aaa_B.sf_15.ggt;
    aaa_B.MultiportSwitch2[35] = aaa_B.sf_15.yjt;
    aaa_B.MultiportSwitch2[36] = aaa_B.sf_16.skt;
    aaa_B.MultiportSwitch2[37] = aaa_B.sf_16.kgt;
    aaa_B.MultiportSwitch2[38] = aaa_B.sf_16.sdt;
    aaa_B.MultiportSwitch2[39] = aaa_B.sf_16.jst;
    aaa_B.MultiportSwitch2[40] = aaa_B.sf_16.ggt;
    aaa_B.MultiportSwitch2[41] = aaa_B.sf_16.yjt;
    aaa_B.MultiportSwitch2[42] = aaa_B.sf_17.skt;
    aaa_B.MultiportSwitch2[43] = aaa_B.sf_17.kgt;
    aaa_B.MultiportSwitch2[44] = aaa_B.sf_17.sdt;
    aaa_B.MultiportSwitch2[45] = aaa_B.sf_17.jst;
    aaa_B.MultiportSwitch2[46] = aaa_B.sf_17.ggt;
    aaa_B.MultiportSwitch2[47] = aaa_B.sf_17.yjt;
  } else {
    aaa_B.MultiportSwitch2[0] = aaa_B.sf_Chart_o.skt;
    aaa_B.MultiportSwitch2[1] = aaa_B.sf_Chart_o.kgt;
    aaa_B.MultiportSwitch2[2] = aaa_B.sf_Chart_o.sdt;
    aaa_B.MultiportSwitch2[3] = aaa_B.sf_Chart_o.jst;
    aaa_B.MultiportSwitch2[4] = aaa_B.sf_Chart_o.ggt;
    aaa_B.MultiportSwitch2[5] = aaa_B.sf_Chart_o.yjt;
    aaa_B.MultiportSwitch2[6] = aaa_B.sf_Chart1_d.skt;
    aaa_B.MultiportSwitch2[7] = aaa_B.sf_Chart1_d.kgt;
    aaa_B.MultiportSwitch2[8] = aaa_B.sf_Chart1_d.sdt;
    aaa_B.MultiportSwitch2[9] = aaa_B.sf_Chart1_d.jst;
    aaa_B.MultiportSwitch2[10] = aaa_B.sf_Chart1_d.ggt;
    aaa_B.MultiportSwitch2[11] = aaa_B.sf_Chart1_d.yjt;
    aaa_B.MultiportSwitch2[12] = aaa_B.sf_Chart2.skt;
    aaa_B.MultiportSwitch2[13] = aaa_B.sf_Chart2.kgt;
    aaa_B.MultiportSwitch2[14] = aaa_B.sf_Chart2.sdt;
    aaa_B.MultiportSwitch2[15] = aaa_B.sf_Chart2.jst;
    aaa_B.MultiportSwitch2[16] = aaa_B.sf_Chart2.ggt;
    aaa_B.MultiportSwitch2[17] = aaa_B.sf_Chart2.yjt;
    aaa_B.MultiportSwitch2[18] = aaa_B.sf_Chart3.skt;
    aaa_B.MultiportSwitch2[19] = aaa_B.sf_Chart3.kgt;
    aaa_B.MultiportSwitch2[20] = aaa_B.sf_Chart3.sdt;
    aaa_B.MultiportSwitch2[21] = aaa_B.sf_Chart3.jst;
    aaa_B.MultiportSwitch2[22] = aaa_B.sf_Chart3.ggt;
    aaa_B.MultiportSwitch2[23] = aaa_B.sf_Chart3.yjt;
    aaa_B.MultiportSwitch2[24] = aaa_B.sf_Chart4.skt;
    aaa_B.MultiportSwitch2[25] = aaa_B.sf_Chart4.kgt;
    aaa_B.MultiportSwitch2[26] = aaa_B.sf_Chart4.sdt;
    aaa_B.MultiportSwitch2[27] = aaa_B.sf_Chart4.jst;
    aaa_B.MultiportSwitch2[28] = aaa_B.sf_Chart4.ggt;
    aaa_B.MultiportSwitch2[29] = aaa_B.sf_Chart4.yjt;
    aaa_B.MultiportSwitch2[30] = aaa_B.sf_Chart5.skt;
    aaa_B.MultiportSwitch2[31] = aaa_B.sf_Chart5.kgt;
    aaa_B.MultiportSwitch2[32] = aaa_B.sf_Chart5.sdt;
    aaa_B.MultiportSwitch2[33] = aaa_B.sf_Chart5.jst;
    aaa_B.MultiportSwitch2[34] = aaa_B.sf_Chart5.ggt;
    aaa_B.MultiportSwitch2[35] = aaa_B.sf_Chart5.yjt;
    aaa_B.MultiportSwitch2[36] = aaa_B.sf_Chart6.skt;
    aaa_B.MultiportSwitch2[37] = aaa_B.sf_Chart6.kgt;
    aaa_B.MultiportSwitch2[38] = aaa_B.sf_Chart6.sdt;
    aaa_B.MultiportSwitch2[39] = aaa_B.sf_Chart6.jst;
    aaa_B.MultiportSwitch2[40] = aaa_B.sf_Chart6.ggt;
    aaa_B.MultiportSwitch2[41] = aaa_B.sf_Chart6.yjt;
    aaa_B.MultiportSwitch2[42] = aaa_B.sf_Chart7.skt;
    aaa_B.MultiportSwitch2[43] = aaa_B.sf_Chart7.kgt;
    aaa_B.MultiportSwitch2[44] = aaa_B.sf_Chart7.sdt;
    aaa_B.MultiportSwitch2[45] = aaa_B.sf_Chart7.jst;
    aaa_B.MultiportSwitch2[46] = aaa_B.sf_Chart7.ggt;
    aaa_B.MultiportSwitch2[47] = aaa_B.sf_Chart7.yjt;
  }

  /* End of MultiPortSwitch: '<S2>/Multiport Switch2' */

  /* MultiPortSwitch: '<Root>/Multiport Switch' incorporates:
   *  Constant: '<Root>/Switch'
   */
  switch ((int32_T)aaa_P.Switch_Value) {
   case 1:
    for (i = 0; i < 6; i++) {
      aaa_B.MultiportSwitch[i] = aaa_B.MultiportSwitch2[i];
    }
    break;

   case 2:
    for (i = 0; i < 6; i++) {
      aaa_B.MultiportSwitch[i] = aaa_B.MultiportSwitch2[i + 6];
    }
    break;

   case 3:
    for (i = 0; i < 6; i++) {
      aaa_B.MultiportSwitch[i] = aaa_B.MultiportSwitch2[i + 12];
    }
    break;

   case 4:
    for (i = 0; i < 6; i++) {
      aaa_B.MultiportSwitch[i] = aaa_B.MultiportSwitch2[i + 18];
    }
    break;

   case 5:
    for (i = 0; i < 6; i++) {
      aaa_B.MultiportSwitch[i] = aaa_B.MultiportSwitch2[i + 24];
    }
    break;

   case 6:
    for (i = 0; i < 6; i++) {
      aaa_B.MultiportSwitch[i] = aaa_B.MultiportSwitch2[i + 30];
    }
    break;

   case 7:
    for (i = 0; i < 6; i++) {
      aaa_B.MultiportSwitch[i] = aaa_B.MultiportSwitch2[i + 36];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      aaa_B.MultiportSwitch[i] = aaa_B.MultiportSwitch2[i + 42];
    }
    break;
  }

  /* End of MultiPortSwitch: '<Root>/Multiport Switch' */

  /* DataTypeConversion: '<Root>/Data Type Conversion' */
  for (i = 0; i < 6; i++) {
    aaa_B.DataTypeConversion[i] = aaa_B.MultiportSwitch[i];
  }

  /* End of DataTypeConversion: '<Root>/Data Type Conversion' */

  /* MultiPortSwitch: '<Root>/Multiport Switch1' incorporates:
   *  Constant: '<Root>/Switch1'
   */
  switch ((int32_T)aaa_P.Switch1_Value) {
   case 1:
    aaa_B.MultiportSwitch1[0] = aaa_B.DataTypeConversion1[0];
    aaa_B.MultiportSwitch1[1] = aaa_B.DataTypeConversion2[0];
    aaa_B.MultiportSwitch1[2] = aaa_B.DataTypeConversion1[8];
    aaa_B.MultiportSwitch1[3] = aaa_B.DataTypeConversion2[8];
    aaa_B.MultiportSwitch1[4] = aaa_B.DataTypeConversion3[0];
    aaa_B.MultiportSwitch1[5] = aaa_B.DataTypeConversion3[8];
    aaa_B.MultiportSwitch1[6] = aaa_B.DataTypeConversion4[0];
    aaa_B.MultiportSwitch1[7] = aaa_B.DataTypeConversion4[8];
    aaa_B.MultiportSwitch1[8] = aaa_B.DataTypeConversion5[0];
    aaa_B.MultiportSwitch1[9] = aaa_B.DataTypeConversion5[8];
    break;

   case 2:
    aaa_B.MultiportSwitch1[0] = aaa_B.DataTypeConversion1[1];
    aaa_B.MultiportSwitch1[1] = aaa_B.DataTypeConversion2[1];
    aaa_B.MultiportSwitch1[2] = aaa_B.DataTypeConversion1[9];
    aaa_B.MultiportSwitch1[3] = aaa_B.DataTypeConversion2[9];
    aaa_B.MultiportSwitch1[4] = aaa_B.DataTypeConversion3[1];
    aaa_B.MultiportSwitch1[5] = aaa_B.DataTypeConversion3[9];
    aaa_B.MultiportSwitch1[6] = aaa_B.DataTypeConversion4[1];
    aaa_B.MultiportSwitch1[7] = aaa_B.DataTypeConversion4[9];
    aaa_B.MultiportSwitch1[8] = aaa_B.DataTypeConversion5[1];
    aaa_B.MultiportSwitch1[9] = aaa_B.DataTypeConversion5[9];
    break;

   case 3:
    aaa_B.MultiportSwitch1[0] = aaa_B.DataTypeConversion1[2];
    aaa_B.MultiportSwitch1[1] = aaa_B.DataTypeConversion2[2];
    aaa_B.MultiportSwitch1[2] = aaa_B.DataTypeConversion1[10];
    aaa_B.MultiportSwitch1[3] = aaa_B.DataTypeConversion2[10];
    aaa_B.MultiportSwitch1[4] = aaa_B.DataTypeConversion3[2];
    aaa_B.MultiportSwitch1[5] = aaa_B.DataTypeConversion3[10];
    aaa_B.MultiportSwitch1[6] = aaa_B.DataTypeConversion4[2];
    aaa_B.MultiportSwitch1[7] = aaa_B.DataTypeConversion4[10];
    aaa_B.MultiportSwitch1[8] = aaa_B.DataTypeConversion5[2];
    aaa_B.MultiportSwitch1[9] = aaa_B.DataTypeConversion5[10];
    break;

   case 4:
    aaa_B.MultiportSwitch1[0] = aaa_B.DataTypeConversion1[3];
    aaa_B.MultiportSwitch1[1] = aaa_B.DataTypeConversion2[3];
    aaa_B.MultiportSwitch1[2] = aaa_B.DataTypeConversion1[11];
    aaa_B.MultiportSwitch1[3] = aaa_B.DataTypeConversion2[11];
    aaa_B.MultiportSwitch1[4] = aaa_B.DataTypeConversion3[3];
    aaa_B.MultiportSwitch1[5] = aaa_B.DataTypeConversion3[11];
    aaa_B.MultiportSwitch1[6] = aaa_B.DataTypeConversion4[3];
    aaa_B.MultiportSwitch1[7] = aaa_B.DataTypeConversion4[11];
    aaa_B.MultiportSwitch1[8] = aaa_B.DataTypeConversion5[3];
    aaa_B.MultiportSwitch1[9] = aaa_B.DataTypeConversion5[11];
    break;

   case 5:
    aaa_B.MultiportSwitch1[0] = aaa_B.DataTypeConversion1[4];
    aaa_B.MultiportSwitch1[1] = aaa_B.DataTypeConversion2[4];
    aaa_B.MultiportSwitch1[2] = aaa_B.DataTypeConversion1[12];
    aaa_B.MultiportSwitch1[3] = aaa_B.DataTypeConversion2[12];
    aaa_B.MultiportSwitch1[4] = aaa_B.DataTypeConversion3[4];
    aaa_B.MultiportSwitch1[5] = aaa_B.DataTypeConversion3[12];
    aaa_B.MultiportSwitch1[6] = aaa_B.DataTypeConversion4[4];
    aaa_B.MultiportSwitch1[7] = aaa_B.DataTypeConversion4[12];
    aaa_B.MultiportSwitch1[8] = aaa_B.DataTypeConversion5[4];
    aaa_B.MultiportSwitch1[9] = aaa_B.DataTypeConversion5[12];
    break;

   case 6:
    aaa_B.MultiportSwitch1[0] = aaa_B.DataTypeConversion1[5];
    aaa_B.MultiportSwitch1[1] = aaa_B.DataTypeConversion2[5];
    aaa_B.MultiportSwitch1[2] = aaa_B.DataTypeConversion1[13];
    aaa_B.MultiportSwitch1[3] = aaa_B.DataTypeConversion2[13];
    aaa_B.MultiportSwitch1[4] = aaa_B.DataTypeConversion3[5];
    aaa_B.MultiportSwitch1[5] = aaa_B.DataTypeConversion3[13];
    aaa_B.MultiportSwitch1[6] = aaa_B.DataTypeConversion4[5];
    aaa_B.MultiportSwitch1[7] = aaa_B.DataTypeConversion4[13];
    aaa_B.MultiportSwitch1[8] = aaa_B.DataTypeConversion5[5];
    aaa_B.MultiportSwitch1[9] = aaa_B.DataTypeConversion5[13];
    break;

   case 7:
    aaa_B.MultiportSwitch1[0] = aaa_B.DataTypeConversion1[6];
    aaa_B.MultiportSwitch1[1] = aaa_B.DataTypeConversion2[6];
    aaa_B.MultiportSwitch1[2] = aaa_B.DataTypeConversion1[14];
    aaa_B.MultiportSwitch1[3] = aaa_B.DataTypeConversion2[14];
    aaa_B.MultiportSwitch1[4] = aaa_B.DataTypeConversion3[6];
    aaa_B.MultiportSwitch1[5] = aaa_B.DataTypeConversion3[14];
    aaa_B.MultiportSwitch1[6] = aaa_B.DataTypeConversion4[6];
    aaa_B.MultiportSwitch1[7] = aaa_B.DataTypeConversion4[14];
    aaa_B.MultiportSwitch1[8] = aaa_B.DataTypeConversion5[6];
    aaa_B.MultiportSwitch1[9] = aaa_B.DataTypeConversion5[14];
    break;

   default:
    aaa_B.MultiportSwitch1[0] = aaa_B.DataTypeConversion1[7];
    aaa_B.MultiportSwitch1[1] = aaa_B.DataTypeConversion2[7];
    aaa_B.MultiportSwitch1[2] = aaa_B.DataTypeConversion1[15];
    aaa_B.MultiportSwitch1[3] = aaa_B.DataTypeConversion2[15];
    aaa_B.MultiportSwitch1[4] = aaa_B.DataTypeConversion3[7];
    aaa_B.MultiportSwitch1[5] = aaa_B.DataTypeConversion3[15];
    aaa_B.MultiportSwitch1[6] = aaa_B.DataTypeConversion4[7];
    aaa_B.MultiportSwitch1[7] = aaa_B.DataTypeConversion4[15];
    aaa_B.MultiportSwitch1[8] = aaa_B.DataTypeConversion5[7];
    aaa_B.MultiportSwitch1[9] = aaa_B.DataTypeConversion5[15];
    break;
  }

  /* End of MultiPortSwitch: '<Root>/Multiport Switch1' */

  /* DataTypeConversion: '<Root>/Data Type Conversion1' */
  memcpy(&aaa_B.DataTypeConversion1_j[0], &aaa_B.MultiportSwitch1[0], 10U *
         sizeof(real_T));

  /* MultiPortSwitch: '<Root>/Multiport Switch2' incorporates:
   *  Constant: '<Root>/Switch2'
   */
  switch ((int32_T)aaa_P.Switch2_Value) {
   case 1:
    aaa_B.MultiportSwitch2_o[0] = aaa_B.memory1[0];
    aaa_B.MultiportSwitch2_o[1] = aaa_B.memory1[1];
    aaa_B.MultiportSwitch2_o[2] = aaa_B.memory1[2];
    aaa_B.MultiportSwitch2_o[3] = aaa_B.memory1[3];
    break;

   case 2:
    aaa_B.MultiportSwitch2_o[0] = aaa_B.memory1[4];
    aaa_B.MultiportSwitch2_o[1] = aaa_B.memory1[5];
    aaa_B.MultiportSwitch2_o[2] = aaa_B.memory1[6];
    aaa_B.MultiportSwitch2_o[3] = aaa_B.memory1[7];
    break;

   case 3:
    aaa_B.MultiportSwitch2_o[0] = aaa_B.memory1[8];
    aaa_B.MultiportSwitch2_o[1] = aaa_B.memory1[9];
    aaa_B.MultiportSwitch2_o[2] = aaa_B.memory1[10];
    aaa_B.MultiportSwitch2_o[3] = aaa_B.memory1[11];
    break;

   case 4:
    aaa_B.MultiportSwitch2_o[0] = aaa_B.memory1[12];
    aaa_B.MultiportSwitch2_o[1] = aaa_B.memory1[13];
    aaa_B.MultiportSwitch2_o[2] = aaa_B.memory1[14];
    aaa_B.MultiportSwitch2_o[3] = aaa_B.memory1[15];
    break;

   case 5:
    aaa_B.MultiportSwitch2_o[0] = aaa_B.memory1[16];
    aaa_B.MultiportSwitch2_o[1] = aaa_B.memory1[17];
    aaa_B.MultiportSwitch2_o[2] = aaa_B.memory1[18];
    aaa_B.MultiportSwitch2_o[3] = aaa_B.memory1[19];
    break;

   case 6:
    aaa_B.MultiportSwitch2_o[0] = aaa_B.memory1[20];
    aaa_B.MultiportSwitch2_o[1] = aaa_B.memory1[21];
    aaa_B.MultiportSwitch2_o[2] = aaa_B.memory1[22];
    aaa_B.MultiportSwitch2_o[3] = aaa_B.memory1[23];
    break;

   case 7:
    aaa_B.MultiportSwitch2_o[0] = aaa_B.memory1[24];
    aaa_B.MultiportSwitch2_o[1] = aaa_B.memory1[25];
    aaa_B.MultiportSwitch2_o[2] = aaa_B.memory1[26];
    aaa_B.MultiportSwitch2_o[3] = aaa_B.memory1[27];
    break;

   default:
    aaa_B.MultiportSwitch2_o[0] = aaa_B.memory1[28];
    aaa_B.MultiportSwitch2_o[1] = aaa_B.memory1[29];
    aaa_B.MultiportSwitch2_o[2] = aaa_B.memory1[30];
    aaa_B.MultiportSwitch2_o[3] = aaa_B.memory1[31];
    break;
  }

  /* End of MultiPortSwitch: '<Root>/Multiport Switch2' */

  /* DataTypeConversion: '<Root>/Data Type Conversion2' */
  aaa_B.DataTypeConversion2_g[0] = aaa_B.MultiportSwitch2_o[0];
  aaa_B.DataTypeConversion2_g[1] = aaa_B.MultiportSwitch2_o[1];
  aaa_B.DataTypeConversion2_g[2] = aaa_B.MultiportSwitch2_o[2];
  aaa_B.DataTypeConversion2_g[3] = aaa_B.MultiportSwitch2_o[3];

  /* ok to acquire for <S10>/S-Function */
  aaa_DW.SFunction_IWORK.AcquireOK = 1;

  /* ok to acquire for <S11>/S-Function */
  aaa_DW.SFunction_IWORK_f.AcquireOK = 1;

  /* ok to acquire for <S12>/S-Function */
  aaa_DW.SFunction_IWORK_c.AcquireOK = 1;

  /* Logic: '<S2>/Logical Operator4' */
  aaa_B.LogicalOperator4_i = ((aaa_B.DataTypeConversion3[0] != 0.0) ||
    (aaa_B.DataTypeConversion3[1] != 0.0) || (aaa_B.DataTypeConversion3[2] !=
    0.0) || (aaa_B.DataTypeConversion3[3] != 0.0) || (aaa_B.DataTypeConversion3
    [4] != 0.0) || (aaa_B.DataTypeConversion3[5] != 0.0) ||
    (aaa_B.DataTypeConversion3[6] != 0.0) || (aaa_B.DataTypeConversion3[7] !=
    0.0));

  /* MultiPortSwitch: '<S2>/Multiport Switch' incorporates:
   *  Constant: '<Root>/qiehuan'
   */
  if ((int32_T)aaa_P.qiehuan_Value == 0) {
    aaa_B.MultiportSwitch_k[0] = aaa_B.LogicalOperator_c;
    aaa_B.MultiportSwitch_k[1] = aaa_B.LogicalOperator1_i;
    aaa_B.MultiportSwitch_k[2] = aaa_B.LogicalOperator2_k;
    aaa_B.MultiportSwitch_k[3] = aaa_B.LogicalOperator3_p;
  } else {
    aaa_B.MultiportSwitch_k[0] = aaa_B.LogicalOperator_p;
    aaa_B.MultiportSwitch_k[1] = aaa_B.LogicalOperator1_f;
    aaa_B.MultiportSwitch_k[2] = aaa_B.LogicalOperator2_f;
    aaa_B.MultiportSwitch_k[3] = aaa_B.LogicalOperator3_d;
  }

  /* End of MultiPortSwitch: '<S2>/Multiport Switch' */

  /* Chart: '<S2>/Chart' */
  /* Gateway: Subsystem1/Chart */
  aaa_DW.sfEvent_e = aaa_CALL_EVENT_a;

  /* During: Subsystem1/Chart */
  if (aaa_DW.is_active_c26_aaa == 0U) {
    /* Entry: Subsystem1/Chart */
    aaa_DW.is_active_c26_aaa = 1U;

    /* Entry Internal: Subsystem1/Chart */
    /* Transition: '<S8>:2' */
    aaa_DW.is_c26_aaa = aaa_IN_off_o;

    /* Entry 'off': '<S8>:1' */
    aaa_B.kaigaihuanchongyichang = 0.0;
    aaa_DW.t_p = 0.0;
  } else {
    switch (aaa_DW.is_c26_aaa) {
     case aaa_IN_off_o:
      /* During 'off': '<S8>:1' */
      if (aaa_B.MultiportSwitch_k[1]) {
        /* Transition: '<S8>:4' */
        aaa_DW.is_c26_aaa = aaa_IN_on_l;

        /* Entry 'on': '<S8>:3' */
        aaa_DW.t_p += 0.002;
      }
      break;

     case aaa_IN_on_l:
      /* During 'on': '<S8>:3' */
      sf_internal_predicateOutput = ((aaa_DW.t_p <= 8.0) &&
        (!aaa_B.LogicalOperator4_i));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S8>:11' */
        aaa_DW.is_c26_aaa = aaa_IN_on_l;

        /* Entry 'on': '<S8>:3' */
        aaa_DW.t_p += 0.002;
      } else {
        sf_internal_predicateOutput = ((aaa_DW.t_p > 8.0) &&
          aaa_B.LogicalOperator4_i);
        if (sf_internal_predicateOutput) {
          /* Transition: '<S8>:13' */
          aaa_DW.is_c26_aaa = aaa_IN_on1_f;

          /* Entry 'on1': '<S8>:12' */
          aaa_B.kaigaihuanchongyichang = 1.0;
        }
      }
      break;

     default:
      /* During 'on1': '<S8>:12' */
      break;
    }
  }

  /* End of Chart: '<S2>/Chart' */

  /* Logic: '<S2>/Logical Operator5' */
  aaa_B.LogicalOperator5_av = ((aaa_B.DataTypeConversion3[8] != 0.0) ||
    (aaa_B.DataTypeConversion3[9] != 0.0) || (aaa_B.DataTypeConversion3[10] !=
    0.0) || (aaa_B.DataTypeConversion3[11] != 0.0) ||
    (aaa_B.DataTypeConversion3[12] != 0.0) || (aaa_B.DataTypeConversion3[13] !=
    0.0) || (aaa_B.DataTypeConversion3[14] != 0.0) ||
    (aaa_B.DataTypeConversion3[15] != 0.0));

  /* Chart: '<S2>/Chart1' */
  /* Gateway: Subsystem1/Chart1 */
  aaa_DW.sfEvent = aaa_CALL_EVENT_a;

  /* During: Subsystem1/Chart1 */
  if (aaa_DW.is_active_c27_aaa == 0U) {
    /* Entry: Subsystem1/Chart1 */
    aaa_DW.is_active_c27_aaa = 1U;

    /* Entry Internal: Subsystem1/Chart1 */
    /* Transition: '<S9>:2' */
    aaa_DW.is_c27_aaa = aaa_IN_off_o;

    /* Entry 'off': '<S9>:1' */
    aaa_B.guangaihuanchongyichang = 0.0;
    aaa_DW.t = 0.0;
  } else {
    switch (aaa_DW.is_c27_aaa) {
     case aaa_IN_off_o:
      /* During 'off': '<S9>:1' */
      if (aaa_B.MultiportSwitch_k[3]) {
        /* Transition: '<S9>:4' */
        aaa_DW.is_c27_aaa = aaa_IN_on_l;

        /* Entry 'on': '<S9>:3' */
        aaa_DW.t += 0.002;
      }
      break;

     case aaa_IN_on_l:
      /* During 'on': '<S9>:3' */
      sf_internal_predicateOutput = ((aaa_DW.t <= 8.0) &&
        (!aaa_B.LogicalOperator5_av));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S9>:11' */
        aaa_DW.is_c27_aaa = aaa_IN_on_l;

        /* Entry 'on': '<S9>:3' */
        aaa_DW.t += 0.002;
      } else {
        sf_internal_predicateOutput = ((aaa_DW.t > 8.0) &&
          aaa_B.LogicalOperator5_av);
        if (sf_internal_predicateOutput) {
          /* Transition: '<S9>:13' */
          aaa_DW.is_c27_aaa = aaa_IN_on1_f;

          /* Entry 'on1': '<S9>:12' */
          aaa_B.guangaihuanchongyichang = 1.0;
        }
      }
      break;

     default:
      /* During 'on1': '<S9>:12' */
      break;
    }
  }

  /* End of Chart: '<S2>/Chart1' */

  /* DataTypeConversion: '<S2>/Data Type Conversion1' */
  aaa_B.DataTypeConversion1_i = aaa_B.kaigaihuanchongyichang;

  /* DataTypeConversion: '<S2>/Data Type Conversion2' */
  aaa_B.DataTypeConversion2_a = aaa_B.guangaihuanchongyichang;

  /* DataTypeConversion: '<S2>/Data Type Conversion6' */
  aaa_B.DataTypeConversion6_n[0] = aaa_B.sf_1.yikaicishu;
  aaa_B.DataTypeConversion6_n[1] = aaa_B.sf_11.yikaicishu;
  aaa_B.DataTypeConversion6_n[2] = aaa_B.sf_12.yikaicishu;
  aaa_B.DataTypeConversion6_n[3] = aaa_B.sf_13.yikaicishu;
  aaa_B.DataTypeConversion6_n[4] = aaa_B.sf_14.yikaicishu;
  aaa_B.DataTypeConversion6_n[5] = aaa_B.sf_15.yikaicishu;
  aaa_B.DataTypeConversion6_n[6] = aaa_B.sf_16.yikaicishu;
  aaa_B.DataTypeConversion6_n[7] = aaa_B.sf_17.yikaicishu;

  /* MultiPortSwitch: '<S2>/Multiport Switch1' incorporates:
   *  Constant: '<Root>/qiehuan'
   */
  if ((int32_T)aaa_P.qiehuan_Value == 0) {
    /* DataTypeConversion: '<S2>/Data Type Conversion4' */
    aaa_B.DataTypeConversion4_d[0] = aaa_B.sf_1.kgzhiling1;
    aaa_B.DataTypeConversion4_d[1] = aaa_B.sf_1.kgzhiling2;
    aaa_B.DataTypeConversion4_d[2] = aaa_B.sf_1.ggzhiling1;
    aaa_B.DataTypeConversion4_d[3] = aaa_B.sf_1.ggzhiling2;
    aaa_B.DataTypeConversion4_d[4] = aaa_B.sf_11.kgzhiling1;
    aaa_B.DataTypeConversion4_d[5] = aaa_B.sf_11.kgzhiling2;
    aaa_B.DataTypeConversion4_d[6] = aaa_B.sf_11.ggzhiling1;
    aaa_B.DataTypeConversion4_d[7] = aaa_B.sf_11.ggzhiling2;
    aaa_B.DataTypeConversion4_d[8] = aaa_B.sf_12.kgzhiling1;
    aaa_B.DataTypeConversion4_d[9] = aaa_B.sf_12.kgzhiling2;
    aaa_B.DataTypeConversion4_d[10] = aaa_B.sf_12.ggzhiling1;
    aaa_B.DataTypeConversion4_d[11] = aaa_B.sf_12.ggzhiling2;
    aaa_B.DataTypeConversion4_d[12] = aaa_B.sf_13.kgzhiling1;
    aaa_B.DataTypeConversion4_d[13] = aaa_B.sf_13.kgzhiling2;
    aaa_B.DataTypeConversion4_d[14] = aaa_B.sf_13.ggzhiling1;
    aaa_B.DataTypeConversion4_d[15] = aaa_B.sf_13.ggzhiling2;
    aaa_B.DataTypeConversion4_d[16] = aaa_B.sf_14.kgzhiling1;
    aaa_B.DataTypeConversion4_d[17] = aaa_B.sf_14.kgzhiling2;
    aaa_B.DataTypeConversion4_d[18] = aaa_B.sf_14.ggzhiling1;
    aaa_B.DataTypeConversion4_d[19] = aaa_B.sf_14.ggzhiling2;
    aaa_B.DataTypeConversion4_d[20] = aaa_B.sf_15.kgzhiling1;
    aaa_B.DataTypeConversion4_d[21] = aaa_B.sf_15.kgzhiling2;
    aaa_B.DataTypeConversion4_d[22] = aaa_B.sf_15.ggzhiling1;
    aaa_B.DataTypeConversion4_d[23] = aaa_B.sf_15.ggzhiling2;
    aaa_B.DataTypeConversion4_d[24] = aaa_B.sf_16.kgzhiling1;
    aaa_B.DataTypeConversion4_d[25] = aaa_B.sf_16.kgzhiling2;
    aaa_B.DataTypeConversion4_d[26] = aaa_B.sf_16.ggzhiling1;
    aaa_B.DataTypeConversion4_d[27] = aaa_B.sf_16.ggzhiling2;
    aaa_B.DataTypeConversion4_d[28] = aaa_B.sf_17.kgzhiling1;
    aaa_B.DataTypeConversion4_d[29] = aaa_B.sf_17.kgzhiling2;
    aaa_B.DataTypeConversion4_d[30] = aaa_B.sf_17.ggzhiling1;
    aaa_B.DataTypeConversion4_d[31] = aaa_B.sf_17.ggzhiling2;
    memcpy(&aaa_B.MultiportSwitch1_i[0], &aaa_B.DataTypeConversion4_d[0], sizeof
           (real_T) << 5U);
  } else {
    aaa_B.MultiportSwitch1_i[0] = aaa_B.sf_Chart_o.kgzhiling1;
    aaa_B.MultiportSwitch1_i[1] = aaa_B.sf_Chart_o.kgzhiling2;
    aaa_B.MultiportSwitch1_i[2] = aaa_B.sf_Chart_o.ggzhiling1;
    aaa_B.MultiportSwitch1_i[3] = aaa_B.sf_Chart_o.ggzhiling2;
    aaa_B.MultiportSwitch1_i[4] = aaa_B.sf_Chart1_d.kgzhiling1;
    aaa_B.MultiportSwitch1_i[5] = aaa_B.sf_Chart1_d.kgzhiling2;
    aaa_B.MultiportSwitch1_i[6] = aaa_B.sf_Chart1_d.ggzhiling1;
    aaa_B.MultiportSwitch1_i[7] = aaa_B.sf_Chart1_d.ggzhiling2;
    aaa_B.MultiportSwitch1_i[8] = aaa_B.sf_Chart2.kgzhiling1;
    aaa_B.MultiportSwitch1_i[9] = aaa_B.sf_Chart2.kgzhiling2;
    aaa_B.MultiportSwitch1_i[10] = aaa_B.sf_Chart2.ggzhiling1;
    aaa_B.MultiportSwitch1_i[11] = aaa_B.sf_Chart2.ggzhiling2;
    aaa_B.MultiportSwitch1_i[12] = aaa_B.sf_Chart3.kgzhiling1;
    aaa_B.MultiportSwitch1_i[13] = aaa_B.sf_Chart3.kgzhiling2;
    aaa_B.MultiportSwitch1_i[14] = aaa_B.sf_Chart3.ggzhiling1;
    aaa_B.MultiportSwitch1_i[15] = aaa_B.sf_Chart3.ggzhiling2;
    aaa_B.MultiportSwitch1_i[16] = aaa_B.sf_Chart4.kgzhiling1;
    aaa_B.MultiportSwitch1_i[17] = aaa_B.sf_Chart4.kgzhiling2;
    aaa_B.MultiportSwitch1_i[18] = aaa_B.sf_Chart4.ggzhiling1;
    aaa_B.MultiportSwitch1_i[19] = aaa_B.sf_Chart4.ggzhiling2;
    aaa_B.MultiportSwitch1_i[20] = aaa_B.sf_Chart5.kgzhiling1;
    aaa_B.MultiportSwitch1_i[21] = aaa_B.sf_Chart5.kgzhiling2;
    aaa_B.MultiportSwitch1_i[22] = aaa_B.sf_Chart5.ggzhiling1;
    aaa_B.MultiportSwitch1_i[23] = aaa_B.sf_Chart5.ggzhiling2;
    aaa_B.MultiportSwitch1_i[24] = aaa_B.sf_Chart6.kgzhiling1;
    aaa_B.MultiportSwitch1_i[25] = aaa_B.sf_Chart6.kgzhiling2;
    aaa_B.MultiportSwitch1_i[26] = aaa_B.sf_Chart6.ggzhiling1;
    aaa_B.MultiportSwitch1_i[27] = aaa_B.sf_Chart6.ggzhiling2;
    aaa_B.MultiportSwitch1_i[28] = aaa_B.sf_Chart7.kgzhiling1;
    aaa_B.MultiportSwitch1_i[29] = aaa_B.sf_Chart7.kgzhiling2;
    aaa_B.MultiportSwitch1_i[30] = aaa_B.sf_Chart7.ggzhiling1;
    aaa_B.MultiportSwitch1_i[31] = aaa_B.sf_Chart7.ggzhiling2;
  }

  /* End of MultiPortSwitch: '<S2>/Multiport Switch1' */
}

/* Model update function */
static void aaa_update(void)
{
  /* Update for Memory: '<S32>/2' */
  aaa_DW.u_PreviousInput = aaa_B.Switch2;

  /* Update for Memory: '<S32>/3' */
  aaa_DW.u_PreviousInput_c = aaa_B.Switch3;

  /* Update for Memory: '<S32>/4' */
  aaa_DW.u_PreviousInput_j = aaa_B.Switch4;

  /* Update for Memory: '<S32>/5' */
  aaa_DW.u_PreviousInput_b = aaa_B.Switch5;

  /* Update for Memory: '<S32>/6' */
  aaa_DW.u_PreviousInput_jh = aaa_B.Switch6;

  /* Update for Memory: '<S32>/1' */
  aaa_DW.u_PreviousInput_g = aaa_B.Switch1;

  /* Update for Memory: '<Root>/memory' */
  aaa_DW.memory_PreviousInput[0] = aaa_B.MultiportSwitch_k[0];
  aaa_DW.memory_PreviousInput[1] = aaa_B.MultiportSwitch_k[1];
  aaa_DW.memory_PreviousInput[2] = aaa_B.MultiportSwitch_k[2];
  aaa_DW.memory_PreviousInput[3] = aaa_B.MultiportSwitch_k[3];

  /* Update for Memory: '<Root>/memory1' */
  memcpy(&aaa_DW.memory1_PreviousInput[0], &aaa_B.MultiportSwitch1_i[0], sizeof
         (real_T) << 5U);

  /* Update for Memory: '<S31>/2' */
  aaa_DW.u_PreviousInput_o = aaa_B.Switch2_d;

  /* Update for Memory: '<S31>/3' */
  aaa_DW.u_PreviousInput_h = aaa_B.Switch3_p;

  /* Update for Memory: '<S31>/4' */
  aaa_DW.u_PreviousInput_js = aaa_B.Switch4_k;

  /* Update for Memory: '<S31>/5' */
  aaa_DW.u_PreviousInput_p = aaa_B.Switch5_h;

  /* Update for Memory: '<S31>/6' */
  aaa_DW.u_PreviousInput_bm = aaa_B.Switch6_c;

  /* Update for Memory: '<S31>/1' */
  aaa_DW.u_PreviousInput_f = aaa_B.Switch1_d;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++aaa_M->Timing.clockTick0)) {
    ++aaa_M->Timing.clockTickH0;
  }

  aaa_M->Timing.t[0] = aaa_M->Timing.clockTick0 * aaa_M->Timing.stepSize0 +
    aaa_M->Timing.clockTickH0 * aaa_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
static void aaa_initialize(void)
{
  /* Start for Constant: '<Root>/tiaoshi' */
  aaa_B.tiaoshi = aaa_P.tiaoshi_Value;

  /* Start for Constant: '<Root>/jieshu' */
  aaa_B.jieshu = aaa_P.jieshu_Value;

  /* Start for Constant: '<S1>/Constant' */
  aaa_B.Constant = aaa_P.Constant_Value;

  /* Level2 S-Function Block: '<S1>/PCI1' (pci1756IO) */
  {
    SimStruct *rts = aaa_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S1>/PCI2' (pci1756IO) */
  {
    SimStruct *rts = aaa_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Constant: '<S1>/Constant1' */
  aaa_B.Constant1 = aaa_P.Constant1_Value;

  /* Level2 S-Function Block: '<S1>/PCI3' (pci1756IO) */
  {
    SimStruct *rts = aaa_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Constant: '<Root>/start' */
  aaa_B.start = aaa_P.start_Value;

  /* Start for Constant: '<S7>/t1' */
  aaa_B.u_g = aaa_P.t1_Value;

  /* Start for Constant: '<S7>/t3' */
  aaa_B.u_m = aaa_P.t3_Value;

  /* Start for Constant: '<S7>/t5' */
  aaa_B.u_m5 = aaa_P.t5_Value;

  /* Start for Constant: '<S7>/t7' */
  aaa_B.u_gd = aaa_P.t7_Value;

  /* Start for Constant: '<S7>/t9' */
  aaa_B.u_gh = aaa_P.t9_Value;

  /* Start for Constant: '<S7>/t11' */
  aaa_B.u_m0 = aaa_P.t11_Value;

  /* Start for Constant: '<Root>/zidong_shedingcishu' */
  aaa_B.zidong_shedingcishu = aaa_P.zidong_shedingcishu_Value;

  /* S-Function Block: <S10>/S-Function (scblock) */
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
        xpceScopeAcqOK(1, &aaa_DW.SFunction_IWORK.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(1);
    }
  }

  /* S-Function Block: <S11>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(2)) == 0) {
      if ((i = rl32eDefScope(2,2)) != 0) {
        printf("Error creating scope 2\n");
      } else {
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#/p9"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#/p10"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#/p11"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#/p12"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#/p13"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#/p14"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#1/p9"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#1/p10"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#1/p11"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#1/p12"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#1/p13"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#1/p14"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#2/p9"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#2/p10"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#2/p11"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#2/p12"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#2/p13"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#2/p14"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#3/p9"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#3/p10"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#3/p11"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#3/p12"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#3/p13"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#3/p14"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#4/p9"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#4/p10"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#4/p11"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#4/p12"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#4/p13"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#4/p14"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#5/p9"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#5/p10"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#5/p11"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#5/p12"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#5/p13"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#5/p14"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#6/p9"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#6/p10"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#6/p11"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#6/p12"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#6/p13"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#6/p14"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#7/p9"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#7/p10"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#7/p11"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#7/p12"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#7/p13"));
        rl32eAddSignal(2, rl32eGetSignalNo("Subsystem1/zidong/1#7/p14"));
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("Subsystem1/zidong/1#/p9"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("Subsystem1/zidong/1#/p10"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("Subsystem1/zidong/1#/p11"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("Subsystem1/zidong/1#/p12"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("Subsystem1/zidong/1#/p13"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("Subsystem1/zidong/1#/p14"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("Subsystem1/zidong/1#1/p9"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("Subsystem1/zidong/1#1/p10"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("Subsystem1/zidong/1#1/p11"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("Subsystem1/zidong/1#1/p12"),
          "%15.6f");
        rl32eSetScope(2, 4, 250);
        rl32eSetScope(2, 5, 0);
        rl32eSetScope(2, 6, 1);
        rl32eSetScope(2, 0, 0);
        rl32eSetScope(2, 3, rl32eGetSignalNo("Subsystem1/zidong/1#/p9"));
        rl32eSetScope(2, 1, 0.0);
        rl32eSetScope(2, 2, 0);
        rl32eSetScope(2, 9, 0);
        rl32eSetTargetScope(2, 1, 0.0);
        rl32eSetTargetScope(2, 11, 0.0);
        rl32eSetTargetScope(2, 10, 0.0);
        xpceScopeAcqOK(2, &aaa_DW.SFunction_IWORK_f.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(2);
    }
  }

  /* S-Function Block: <S12>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(3)) == 0) {
      if ((i = rl32eDefScope(3,2)) != 0) {
        printf("Error creating scope 3\n");
      } else {
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart/p9"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart/p10"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart/p11"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart/p12"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart/p13"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart/p14"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart1/p9"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart1/p10"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart1/p11"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart1/p12"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart1/p13"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart1/p14"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart2/p9"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart2/p10"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart2/p11"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart2/p12"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart2/p13"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart2/p14"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart3/p9"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart3/p10"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart3/p11"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart3/p12"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart3/p13"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart3/p14"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart4/p9"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart4/p10"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart4/p11"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart4/p12"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart4/p13"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart4/p14"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart5/p9"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart5/p10"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart5/p11"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart5/p12"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart5/p13"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart5/p14"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart6/p9"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart6/p10"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart6/p11"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart6/p12"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart6/p13"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart6/p14"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart7/p9"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart7/p10"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart7/p11"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart7/p12"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart7/p13"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem1/shoudong/Chart7/p14"));
        rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo(
          "Subsystem1/shoudong/Chart/p9"),"%15.6f");
        rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo(
          "Subsystem1/shoudong/Chart/p10"),"%15.6f");
        rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo(
          "Subsystem1/shoudong/Chart/p11"),"%15.6f");
        rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo(
          "Subsystem1/shoudong/Chart/p12"),"%15.6f");
        rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo(
          "Subsystem1/shoudong/Chart/p13"),"%15.6f");
        rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo(
          "Subsystem1/shoudong/Chart/p14"),"%15.6f");
        rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo(
          "Subsystem1/shoudong/Chart1/p9"),"%15.6f");
        rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo(
          "Subsystem1/shoudong/Chart1/p10"),"%15.6f");
        rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo(
          "Subsystem1/shoudong/Chart1/p11"),"%15.6f");
        rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo(
          "Subsystem1/shoudong/Chart1/p12"),"%15.6f");
        rl32eSetScope(3, 4, 250);
        rl32eSetScope(3, 5, 0);
        rl32eSetScope(3, 6, 1);
        rl32eSetScope(3, 0, 0);
        rl32eSetScope(3, 3, rl32eGetSignalNo("Subsystem1/shoudong/Chart/p9"));
        rl32eSetScope(3, 1, 0.0);
        rl32eSetScope(3, 2, 0);
        rl32eSetScope(3, 9, 0);
        rl32eSetTargetScope(3, 1, 0.0);
        rl32eSetTargetScope(3, 11, 0.0);
        rl32eSetTargetScope(3, 10, 0.0);
        xpceScopeAcqOK(3, &aaa_DW.SFunction_IWORK_c.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(3);
    }
  }

  {
    int32_T i;

    /* InitializeConditions for Memory: '<S32>/2' */
    aaa_DW.u_PreviousInput = aaa_P.u_X0;

    /* InitializeConditions for Memory: '<S32>/3' */
    aaa_DW.u_PreviousInput_c = aaa_P.u_X0_f;

    /* InitializeConditions for Memory: '<S32>/4' */
    aaa_DW.u_PreviousInput_j = aaa_P.u_X0_a;

    /* InitializeConditions for Memory: '<S32>/5' */
    aaa_DW.u_PreviousInput_b = aaa_P.u_X0_n;

    /* InitializeConditions for Memory: '<S32>/6' */
    aaa_DW.u_PreviousInput_jh = aaa_P.u_X0_j;

    /* InitializeConditions for Memory: '<S32>/1' */
    aaa_DW.u_PreviousInput_g = aaa_P.u_X0_p;

    /* InitializeConditions for Memory: '<Root>/memory' */
    aaa_DW.memory_PreviousInput[0] = aaa_P.memory_X0;
    aaa_DW.memory_PreviousInput[1] = aaa_P.memory_X0;
    aaa_DW.memory_PreviousInput[2] = aaa_P.memory_X0;
    aaa_DW.memory_PreviousInput[3] = aaa_P.memory_X0;

    /* InitializeConditions for Memory: '<Root>/memory1' */
    for (i = 0; i < 32; i++) {
      aaa_DW.memory1_PreviousInput[i] = aaa_P.memory1_X0;
    }

    /* End of InitializeConditions for Memory: '<Root>/memory1' */

    /* InitializeConditions for Memory: '<S31>/2' */
    aaa_DW.u_PreviousInput_o = aaa_P.u_X0_g;

    /* InitializeConditions for Memory: '<S31>/3' */
    aaa_DW.u_PreviousInput_h = aaa_P.u_X0_o;

    /* InitializeConditions for Memory: '<S31>/4' */
    aaa_DW.u_PreviousInput_js = aaa_P.u_X0_h;

    /* InitializeConditions for Memory: '<S31>/5' */
    aaa_DW.u_PreviousInput_p = aaa_P.u_X0_i;

    /* InitializeConditions for Memory: '<S31>/6' */
    aaa_DW.u_PreviousInput_bm = aaa_P.u_X0_i1;

    /* InitializeConditions for Memory: '<S31>/1' */
    aaa_DW.u_PreviousInput_f = aaa_P.u_X0_im;

    /* SystemInitialize for Enabled SubSystem: '<Root>/tiaoshimoshi' */
    /* SystemInitialize for Chart: '<S5>/jinjichuli' */
    aaa_jinjichuli_Init(&aaa_B.sf_jinjichuli, &aaa_DW.sf_jinjichuli);

    /* SystemInitialize for Chart: '<S5>/jinjichuli1' */
    aaa_jinjichuli_Init(&aaa_B.sf_jinjichuli1, &aaa_DW.sf_jinjichuli1);

    /* SystemInitialize for Chart: '<S5>/jinjichuli2' */
    aaa_jinjichuli_Init(&aaa_B.sf_jinjichuli2, &aaa_DW.sf_jinjichuli2);

    /* SystemInitialize for Chart: '<S5>/jinjichuli3' */
    aaa_jinjichuli_Init(&aaa_B.sf_jinjichuli3, &aaa_DW.sf_jinjichuli3);

    /* SystemInitialize for Chart: '<S5>/jinjichuli4' */
    aaa_jinjichuli_Init(&aaa_B.sf_jinjichuli4, &aaa_DW.sf_jinjichuli4);

    /* SystemInitialize for Chart: '<S5>/jinjichuli5' */
    aaa_jinjichuli_Init(&aaa_B.sf_jinjichuli5, &aaa_DW.sf_jinjichuli5);

    /* SystemInitialize for Chart: '<S5>/jinjichuli6' */
    aaa_jinjichuli_Init(&aaa_B.sf_jinjichuli6, &aaa_DW.sf_jinjichuli6);

    /* SystemInitialize for Chart: '<S5>/jinjichuli7' */
    aaa_jinjichuli_Init(&aaa_B.sf_jinjichuli7, &aaa_DW.sf_jinjichuli7);

    /* SystemInitialize for Outport: '<S5>/tiaoshi_huanxiangxinhao' */
    aaa_B.LogicalOperator_e = aaa_P.tiaoshi_huanxiangxinhao_Y0;
    aaa_B.LogicalOperator4_d = aaa_P.tiaoshi_huanxiangxinhao_Y0;
    aaa_B.LogicalOperator5_c = aaa_P.tiaoshi_huanxiangxinhao_Y0;
    aaa_B.LogicalOperator1_kr = aaa_P.tiaoshi_huanxiangxinhao_Y0;

    /* End of SystemInitialize for SubSystem: '<Root>/tiaoshimoshi' */

    /* SystemInitialize for Enabled SubSystem: '<S2>/zidong' */
    /* SystemInitialize for Chart: '<S14>/1#' */
    aaa_u_Init(&aaa_DW.sf_1);

    /* SystemInitialize for Chart: '<S14>/1#1' */
    aaa_u_Init(&aaa_DW.sf_11);

    /* SystemInitialize for Chart: '<S14>/1#2' */
    aaa_u_Init(&aaa_DW.sf_12);

    /* SystemInitialize for Chart: '<S14>/1#3' */
    aaa_u_Init(&aaa_DW.sf_13);

    /* SystemInitialize for Chart: '<S14>/1#4' */
    aaa_u_Init(&aaa_DW.sf_14);

    /* SystemInitialize for Chart: '<S14>/1#5' */
    aaa_u_Init(&aaa_DW.sf_15);

    /* SystemInitialize for Chart: '<S14>/1#6' */
    aaa_u_Init(&aaa_DW.sf_16);

    /* SystemInitialize for Chart: '<S14>/1#7' */
    aaa_u_Init(&aaa_DW.sf_17);

    /* SystemInitialize for Outport: '<S14>/songkaihuanxiang' */
    aaa_B.LogicalOperator_c = aaa_P.songkaihuanxiang_Y0_m;

    /* SystemInitialize for Outport: '<S14>/kaigaihuanxiang' */
    aaa_B.LogicalOperator1_i = aaa_P.kaigaihuanxiang_Y0_d;

    /* SystemInitialize for Outport: '<S14>/yajinhuanxiang' */
    aaa_B.LogicalOperator2_k = aaa_P.yajinhuanxiang_Y0_k;

    /* SystemInitialize for Outport: '<S14>/guangaihuanxiang' */
    aaa_B.LogicalOperator3_p = aaa_P.guangaihuanxiang_Y0_l;

    /* End of SystemInitialize for SubSystem: '<S2>/zidong' */

    /* SystemInitialize for Enabled SubSystem: '<S2>/shoudong' */
    /* SystemInitialize for Chart: '<S13>/Chart' */
    aaa_Chart_Init(&aaa_DW.sf_Chart_o);

    /* SystemInitialize for Chart: '<S13>/Chart1' */
    aaa_Chart_Init(&aaa_DW.sf_Chart1_d);

    /* SystemInitialize for Chart: '<S13>/Chart2' */
    aaa_Chart_Init(&aaa_DW.sf_Chart2);

    /* SystemInitialize for Chart: '<S13>/Chart3' */
    aaa_Chart_Init(&aaa_DW.sf_Chart3);

    /* SystemInitialize for Chart: '<S13>/Chart4' */
    aaa_Chart_Init(&aaa_DW.sf_Chart4);

    /* SystemInitialize for Chart: '<S13>/Chart5' */
    aaa_Chart_Init(&aaa_DW.sf_Chart5);

    /* SystemInitialize for Chart: '<S13>/Chart6' */
    aaa_Chart_Init(&aaa_DW.sf_Chart6);

    /* SystemInitialize for Chart: '<S13>/Chart7' */
    aaa_Chart_Init(&aaa_DW.sf_Chart7);

    /* SystemInitialize for Outport: '<S13>/songkaihuanxiang' */
    aaa_B.LogicalOperator_p = aaa_P.songkaihuanxiang_Y0;

    /* SystemInitialize for Outport: '<S13>/kaigaihuanxiang' */
    aaa_B.LogicalOperator1_f = aaa_P.kaigaihuanxiang_Y0;

    /* SystemInitialize for Outport: '<S13>/yajinhuanxiang' */
    aaa_B.LogicalOperator2_f = aaa_P.yajinhuanxiang_Y0;

    /* SystemInitialize for Outport: '<S13>/guangaihuanxiang' */
    aaa_B.LogicalOperator3_d = aaa_P.guangaihuanxiang_Y0;

    /* End of SystemInitialize for SubSystem: '<S2>/shoudong' */

    /* SystemInitialize for Chart: '<S2>/Chart' */
    aaa_DW.sfEvent_e = aaa_CALL_EVENT_a;
    aaa_DW.is_active_c26_aaa = 0U;
    aaa_DW.is_c26_aaa = aaa_IN_NO_ACTIVE_CHILD_j;

    /* SystemInitialize for Chart: '<S2>/Chart1' */
    aaa_DW.sfEvent = aaa_CALL_EVENT_a;
    aaa_DW.is_active_c27_aaa = 0U;
    aaa_DW.is_c27_aaa = aaa_IN_NO_ACTIVE_CHILD_j;
  }
}

/* Model terminate function */
static void aaa_terminate(void)
{
  /* Level2 S-Function Block: '<S1>/PCI1' (pci1756IO) */
  {
    SimStruct *rts = aaa_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S1>/PCI2' (pci1756IO) */
  {
    SimStruct *rts = aaa_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S1>/PCI3' (pci1756IO) */
  {
    SimStruct *rts = aaa_M->childSfunctions[2];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  aaa_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  aaa_update();
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
  aaa_initialize();
}

void MdlTerminate(void)
{
  aaa_terminate();
}

/* Registration function */
RT_MODEL_aaa_T *aaa(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)aaa_M, 0,
                sizeof(RT_MODEL_aaa_T));
  rtsiSetSolverName(&aaa_M->solverInfo,"FixedStepDiscrete");
  aaa_M->solverInfoPtr = (&aaa_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = aaa_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    aaa_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    aaa_M->Timing.sampleTimes = (&aaa_M->Timing.sampleTimesArray[0]);
    aaa_M->Timing.offsetTimes = (&aaa_M->Timing.offsetTimesArray[0]);

    /* task periods */
    aaa_M->Timing.sampleTimes[0] = (0.002);

    /* task offsets */
    aaa_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(aaa_M, &aaa_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = aaa_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    aaa_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(aaa_M, -1);
  aaa_M->Timing.stepSize0 = 0.002;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    aaa_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(aaa_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(aaa_M->rtwLogInfo, (NULL));
    rtliSetLogT(aaa_M->rtwLogInfo, "tout");
    rtliSetLogX(aaa_M->rtwLogInfo, "");
    rtliSetLogXFinal(aaa_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(aaa_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(aaa_M->rtwLogInfo, 2);
    rtliSetLogMaxRows(aaa_M->rtwLogInfo, 0);
    rtliSetLogDecimation(aaa_M->rtwLogInfo, 1);
    rtliSetLogY(aaa_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(aaa_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(aaa_M->rtwLogInfo, (NULL));
  }

  aaa_M->solverInfoPtr = (&aaa_M->solverInfo);
  aaa_M->Timing.stepSize = (0.002);
  rtsiSetFixedStepSize(&aaa_M->solverInfo, 0.002);
  rtsiSetSolverMode(&aaa_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  aaa_M->blockIO = ((void *) &aaa_B);
  (void) memset(((void *) &aaa_B), 0,
                sizeof(B_aaa_T));

  /* parameters */
  aaa_M->defaultParam = ((real_T *)&aaa_P);

  /* states (dwork) */
  aaa_M->dwork = ((void *) &aaa_DW);
  (void) memset((void *)&aaa_DW, 0,
                sizeof(DW_aaa_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  aaa_InitializeDataMapInfo(aaa_M);

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &aaa_M->NonInlinedSFcns.sfcnInfo;
    aaa_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(aaa_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &aaa_M->Sizes.numSampTimes);
    aaa_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr(aaa_M)[0]);
    rtssSetTPtrPtr(sfcnInfo,aaa_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(aaa_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(aaa_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput(aaa_M));
    rtssSetStepSizePtr(sfcnInfo, &aaa_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(aaa_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo, &aaa_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &aaa_M->zCCacheNeedsReset);
    rtssSetBlkStateChangePtr(sfcnInfo, &aaa_M->blkStateChange);
    rtssSetSampleHitsPtr(sfcnInfo, &aaa_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo, &aaa_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &aaa_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &aaa_M->solverInfoPtr);
  }

  aaa_M->Sizes.numSFcns = (3);

  /* register each child */
  {
    (void) memset((void *)&aaa_M->NonInlinedSFcns.childSFunctions[0], 0,
                  3*sizeof(SimStruct));
    aaa_M->childSfunctions = (&aaa_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    aaa_M->childSfunctions[0] = (&aaa_M->NonInlinedSFcns.childSFunctions[0]);
    aaa_M->childSfunctions[1] = (&aaa_M->NonInlinedSFcns.childSFunctions[1]);
    aaa_M->childSfunctions[2] = (&aaa_M->NonInlinedSFcns.childSFunctions[2]);

    /* Level2 S-Function Block: aaa/<S1>/PCI1 (pci1756IO) */
    {
      SimStruct *rts = aaa_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = aaa_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = aaa_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = aaa_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &aaa_M->NonInlinedSFcns.blkInfo2[0]);
      }

      ssSetRTWSfcnInfo(rts, aaa_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &aaa_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &aaa_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &aaa_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &aaa_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts, &aaa_M->NonInlinedSFcns.periodicStatesInfo
          [0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 32);
        ssSetPortInfoForInputs(rts, &aaa_M->NonInlinedSFcns.Sfcn0.inputPortInfo
          [0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs0;
          sfcnUPtrs[0] = &aaa_B.DataTypeConversion6[1];
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs1;
          sfcnUPtrs[0] = &aaa_B.DataTypeConversion6[3];
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs2;
          sfcnUPtrs[0] = &aaa_B.DataTypeConversion6[0];
          ssSetInputPortSignalPtrs(rts, 2, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }

        /* port 3 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs3;
          sfcnUPtrs[0] = &aaa_B.DataTypeConversion6[2];
          ssSetInputPortSignalPtrs(rts, 3, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidth(rts, 3, 1);
        }

        /* port 4 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs4;
          sfcnUPtrs[0] = &aaa_B.Constant;
          ssSetInputPortSignalPtrs(rts, 4, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidth(rts, 4, 1);
        }

        /* port 5 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs5;
          sfcnUPtrs[0] = &aaa_B.Constant;
          ssSetInputPortSignalPtrs(rts, 5, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 5, 1);
          ssSetInputPortWidth(rts, 5, 1);
        }

        /* port 6 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs6;
          sfcnUPtrs[0] = &aaa_B.Constant;
          ssSetInputPortSignalPtrs(rts, 6, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 6, 1);
          ssSetInputPortWidth(rts, 6, 1);
        }

        /* port 7 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs7;
          sfcnUPtrs[0] = &aaa_B.Constant;
          ssSetInputPortSignalPtrs(rts, 7, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 7, 1);
          ssSetInputPortWidth(rts, 7, 1);
        }

        /* port 8 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs8;
          sfcnUPtrs[0] = &aaa_B.Constant;
          ssSetInputPortSignalPtrs(rts, 8, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 8, 1);
          ssSetInputPortWidth(rts, 8, 1);
        }

        /* port 9 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs9;
          sfcnUPtrs[0] = &aaa_B.Constant;
          ssSetInputPortSignalPtrs(rts, 9, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 9, 1);
          ssSetInputPortWidth(rts, 9, 1);
        }

        /* port 10 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs10;
          sfcnUPtrs[0] = &aaa_B.Constant;
          ssSetInputPortSignalPtrs(rts, 10, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 10, 1);
          ssSetInputPortWidth(rts, 10, 1);
        }

        /* port 11 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs11;
          sfcnUPtrs[0] = &aaa_B.Constant;
          ssSetInputPortSignalPtrs(rts, 11, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 11, 1);
          ssSetInputPortWidth(rts, 11, 1);
        }

        /* port 12 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs12;
          sfcnUPtrs[0] = &aaa_B.Constant;
          ssSetInputPortSignalPtrs(rts, 12, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 12, 1);
          ssSetInputPortWidth(rts, 12, 1);
        }

        /* port 13 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs13;
          sfcnUPtrs[0] = &aaa_B.Constant;
          ssSetInputPortSignalPtrs(rts, 13, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 13, 1);
          ssSetInputPortWidth(rts, 13, 1);
        }

        /* port 14 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs14;
          sfcnUPtrs[0] = &aaa_B.Constant;
          ssSetInputPortSignalPtrs(rts, 14, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 14, 1);
          ssSetInputPortWidth(rts, 14, 1);
        }

        /* port 15 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs15;
          sfcnUPtrs[0] = &aaa_B.Constant;
          ssSetInputPortSignalPtrs(rts, 15, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 15, 1);
          ssSetInputPortWidth(rts, 15, 1);
        }

        /* port 16 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs16;
          sfcnUPtrs[0] = &aaa_B.Constant;
          ssSetInputPortSignalPtrs(rts, 16, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 16, 1);
          ssSetInputPortWidth(rts, 16, 1);
        }

        /* port 17 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs17;
          sfcnUPtrs[0] = &aaa_B.Constant;
          ssSetInputPortSignalPtrs(rts, 17, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 17, 1);
          ssSetInputPortWidth(rts, 17, 1);
        }

        /* port 18 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs18;
          sfcnUPtrs[0] = &aaa_B.Constant;
          ssSetInputPortSignalPtrs(rts, 18, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 18, 1);
          ssSetInputPortWidth(rts, 18, 1);
        }

        /* port 19 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs19;
          sfcnUPtrs[0] = &aaa_B.Constant;
          ssSetInputPortSignalPtrs(rts, 19, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 19, 1);
          ssSetInputPortWidth(rts, 19, 1);
        }

        /* port 20 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs20;
          sfcnUPtrs[0] = &aaa_B.Constant;
          ssSetInputPortSignalPtrs(rts, 20, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 20, 1);
          ssSetInputPortWidth(rts, 20, 1);
        }

        /* port 21 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs21;
          sfcnUPtrs[0] = &aaa_B.Constant;
          ssSetInputPortSignalPtrs(rts, 21, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 21, 1);
          ssSetInputPortWidth(rts, 21, 1);
        }

        /* port 22 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs22;
          sfcnUPtrs[0] = &aaa_B.Constant;
          ssSetInputPortSignalPtrs(rts, 22, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 22, 1);
          ssSetInputPortWidth(rts, 22, 1);
        }

        /* port 23 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs23;
          sfcnUPtrs[0] = &aaa_B.Constant;
          ssSetInputPortSignalPtrs(rts, 23, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 23, 1);
          ssSetInputPortWidth(rts, 23, 1);
        }

        /* port 24 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs24;
          sfcnUPtrs[0] = &aaa_B.Constant;
          ssSetInputPortSignalPtrs(rts, 24, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 24, 1);
          ssSetInputPortWidth(rts, 24, 1);
        }

        /* port 25 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs25;
          sfcnUPtrs[0] = &aaa_B.Constant;
          ssSetInputPortSignalPtrs(rts, 25, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 25, 1);
          ssSetInputPortWidth(rts, 25, 1);
        }

        /* port 26 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs26;
          sfcnUPtrs[0] = &aaa_B.Constant;
          ssSetInputPortSignalPtrs(rts, 26, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 26, 1);
          ssSetInputPortWidth(rts, 26, 1);
        }

        /* port 27 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs27;
          sfcnUPtrs[0] = &aaa_B.Constant;
          ssSetInputPortSignalPtrs(rts, 27, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 27, 1);
          ssSetInputPortWidth(rts, 27, 1);
        }

        /* port 28 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs28;
          sfcnUPtrs[0] = &aaa_B.Constant;
          ssSetInputPortSignalPtrs(rts, 28, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 28, 1);
          ssSetInputPortWidth(rts, 28, 1);
        }

        /* port 29 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs29;
          sfcnUPtrs[0] = &aaa_B.Constant;
          ssSetInputPortSignalPtrs(rts, 29, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 29, 1);
          ssSetInputPortWidth(rts, 29, 1);
        }

        /* port 30 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs30;
          sfcnUPtrs[0] = &aaa_B.Constant;
          ssSetInputPortSignalPtrs(rts, 30, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 30, 1);
          ssSetInputPortWidth(rts, 30, 1);
        }

        /* port 31 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs31;
          sfcnUPtrs[0] = &aaa_B.Constant;
          ssSetInputPortSignalPtrs(rts, 31, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 31, 1);
          ssSetInputPortWidth(rts, 31, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &aaa_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 16);
          ssSetOutputPortSignal(rts, 0, ((real_T *) aaa_B.PCI1_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 16);
          ssSetOutputPortSignal(rts, 1, ((real_T *) aaa_B.PCI1_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI1");
      ssSetPath(rts, "aaa/PCI-1756/PCI1");
      ssSetRTModel(rts,aaa_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **) &aaa_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)aaa_P.PCI1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)aaa_P.PCI1_P2_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &aaa_DW.PCI1_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &aaa_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &aaa_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 6);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &aaa_DW.PCI1_IWORK[0]);
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

    /* Level2 S-Function Block: aaa/<S1>/PCI2 (pci1756IO) */
    {
      SimStruct *rts = aaa_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = aaa_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = aaa_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = aaa_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &aaa_M->NonInlinedSFcns.blkInfo2[1]);
      }

      ssSetRTWSfcnInfo(rts, aaa_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &aaa_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &aaa_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &aaa_M->NonInlinedSFcns.methods4[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &aaa_M->NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts, &aaa_M->NonInlinedSFcns.periodicStatesInfo
          [1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 32);
        ssSetPortInfoForInputs(rts, &aaa_M->NonInlinedSFcns.Sfcn1.inputPortInfo
          [0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn1.UPtrs0;
          sfcnUPtrs[0] = &aaa_B.memory1[0];
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn1.UPtrs1;
          sfcnUPtrs[0] = &aaa_B.memory1[4];
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn1.UPtrs2;
          sfcnUPtrs[0] = &aaa_B.memory1[8];
          ssSetInputPortSignalPtrs(rts, 2, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }

        /* port 3 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn1.UPtrs3;
          sfcnUPtrs[0] = &aaa_B.memory1[12];
          ssSetInputPortSignalPtrs(rts, 3, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidth(rts, 3, 1);
        }

        /* port 4 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn1.UPtrs4;
          sfcnUPtrs[0] = &aaa_B.memory1[16];
          ssSetInputPortSignalPtrs(rts, 4, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidth(rts, 4, 1);
        }

        /* port 5 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn1.UPtrs5;
          sfcnUPtrs[0] = &aaa_B.memory1[20];
          ssSetInputPortSignalPtrs(rts, 5, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 5, 1);
          ssSetInputPortWidth(rts, 5, 1);
        }

        /* port 6 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn1.UPtrs6;
          sfcnUPtrs[0] = &aaa_B.memory1[24];
          ssSetInputPortSignalPtrs(rts, 6, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 6, 1);
          ssSetInputPortWidth(rts, 6, 1);
        }

        /* port 7 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn1.UPtrs7;
          sfcnUPtrs[0] = &aaa_B.memory1[28];
          ssSetInputPortSignalPtrs(rts, 7, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 7, 1);
          ssSetInputPortWidth(rts, 7, 1);
        }

        /* port 8 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn1.UPtrs8;
          sfcnUPtrs[0] = &aaa_B.memory1[1];
          ssSetInputPortSignalPtrs(rts, 8, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 8, 1);
          ssSetInputPortWidth(rts, 8, 1);
        }

        /* port 9 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn1.UPtrs9;
          sfcnUPtrs[0] = &aaa_B.memory1[5];
          ssSetInputPortSignalPtrs(rts, 9, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 9, 1);
          ssSetInputPortWidth(rts, 9, 1);
        }

        /* port 10 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn1.UPtrs10;
          sfcnUPtrs[0] = &aaa_B.memory1[9];
          ssSetInputPortSignalPtrs(rts, 10, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 10, 1);
          ssSetInputPortWidth(rts, 10, 1);
        }

        /* port 11 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn1.UPtrs11;
          sfcnUPtrs[0] = &aaa_B.memory1[13];
          ssSetInputPortSignalPtrs(rts, 11, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 11, 1);
          ssSetInputPortWidth(rts, 11, 1);
        }

        /* port 12 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn1.UPtrs12;
          sfcnUPtrs[0] = &aaa_B.memory1[17];
          ssSetInputPortSignalPtrs(rts, 12, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 12, 1);
          ssSetInputPortWidth(rts, 12, 1);
        }

        /* port 13 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn1.UPtrs13;
          sfcnUPtrs[0] = &aaa_B.memory1[21];
          ssSetInputPortSignalPtrs(rts, 13, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 13, 1);
          ssSetInputPortWidth(rts, 13, 1);
        }

        /* port 14 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn1.UPtrs14;
          sfcnUPtrs[0] = &aaa_B.memory1[25];
          ssSetInputPortSignalPtrs(rts, 14, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 14, 1);
          ssSetInputPortWidth(rts, 14, 1);
        }

        /* port 15 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn1.UPtrs15;
          sfcnUPtrs[0] = &aaa_B.memory1[29];
          ssSetInputPortSignalPtrs(rts, 15, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 15, 1);
          ssSetInputPortWidth(rts, 15, 1);
        }

        /* port 16 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn1.UPtrs16;
          sfcnUPtrs[0] = &aaa_B.memory1[2];
          ssSetInputPortSignalPtrs(rts, 16, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 16, 1);
          ssSetInputPortWidth(rts, 16, 1);
        }

        /* port 17 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn1.UPtrs17;
          sfcnUPtrs[0] = &aaa_B.memory1[6];
          ssSetInputPortSignalPtrs(rts, 17, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 17, 1);
          ssSetInputPortWidth(rts, 17, 1);
        }

        /* port 18 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn1.UPtrs18;
          sfcnUPtrs[0] = &aaa_B.memory1[10];
          ssSetInputPortSignalPtrs(rts, 18, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 18, 1);
          ssSetInputPortWidth(rts, 18, 1);
        }

        /* port 19 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn1.UPtrs19;
          sfcnUPtrs[0] = &aaa_B.memory1[14];
          ssSetInputPortSignalPtrs(rts, 19, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 19, 1);
          ssSetInputPortWidth(rts, 19, 1);
        }

        /* port 20 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn1.UPtrs20;
          sfcnUPtrs[0] = &aaa_B.memory1[18];
          ssSetInputPortSignalPtrs(rts, 20, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 20, 1);
          ssSetInputPortWidth(rts, 20, 1);
        }

        /* port 21 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn1.UPtrs21;
          sfcnUPtrs[0] = &aaa_B.memory1[22];
          ssSetInputPortSignalPtrs(rts, 21, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 21, 1);
          ssSetInputPortWidth(rts, 21, 1);
        }

        /* port 22 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn1.UPtrs22;
          sfcnUPtrs[0] = &aaa_B.memory1[26];
          ssSetInputPortSignalPtrs(rts, 22, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 22, 1);
          ssSetInputPortWidth(rts, 22, 1);
        }

        /* port 23 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn1.UPtrs23;
          sfcnUPtrs[0] = &aaa_B.memory1[30];
          ssSetInputPortSignalPtrs(rts, 23, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 23, 1);
          ssSetInputPortWidth(rts, 23, 1);
        }

        /* port 24 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn1.UPtrs24;
          sfcnUPtrs[0] = &aaa_B.memory1[3];
          ssSetInputPortSignalPtrs(rts, 24, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 24, 1);
          ssSetInputPortWidth(rts, 24, 1);
        }

        /* port 25 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn1.UPtrs25;
          sfcnUPtrs[0] = &aaa_B.memory1[7];
          ssSetInputPortSignalPtrs(rts, 25, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 25, 1);
          ssSetInputPortWidth(rts, 25, 1);
        }

        /* port 26 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn1.UPtrs26;
          sfcnUPtrs[0] = &aaa_B.memory1[11];
          ssSetInputPortSignalPtrs(rts, 26, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 26, 1);
          ssSetInputPortWidth(rts, 26, 1);
        }

        /* port 27 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn1.UPtrs27;
          sfcnUPtrs[0] = &aaa_B.memory1[15];
          ssSetInputPortSignalPtrs(rts, 27, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 27, 1);
          ssSetInputPortWidth(rts, 27, 1);
        }

        /* port 28 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn1.UPtrs28;
          sfcnUPtrs[0] = &aaa_B.memory1[19];
          ssSetInputPortSignalPtrs(rts, 28, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 28, 1);
          ssSetInputPortWidth(rts, 28, 1);
        }

        /* port 29 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn1.UPtrs29;
          sfcnUPtrs[0] = &aaa_B.memory1[23];
          ssSetInputPortSignalPtrs(rts, 29, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 29, 1);
          ssSetInputPortWidth(rts, 29, 1);
        }

        /* port 30 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn1.UPtrs30;
          sfcnUPtrs[0] = &aaa_B.memory1[27];
          ssSetInputPortSignalPtrs(rts, 30, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 30, 1);
          ssSetInputPortWidth(rts, 30, 1);
        }

        /* port 31 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn1.UPtrs31;
          sfcnUPtrs[0] = &aaa_B.memory1[31];
          ssSetInputPortSignalPtrs(rts, 31, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 31, 1);
          ssSetInputPortWidth(rts, 31, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &aaa_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 16);
          ssSetOutputPortSignal(rts, 0, ((real_T *) aaa_B.PCI2_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 16);
          ssSetOutputPortSignal(rts, 1, ((real_T *) aaa_B.PCI2_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI2");
      ssSetPath(rts, "aaa/PCI-1756/PCI2");
      ssSetRTModel(rts,aaa_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **) &aaa_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)aaa_P.PCI2_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)aaa_P.PCI2_P2_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &aaa_DW.PCI2_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &aaa_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &aaa_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 6);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &aaa_DW.PCI2_IWORK[0]);
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

    /* Level2 S-Function Block: aaa/<S1>/PCI3 (pci1756IO) */
    {
      SimStruct *rts = aaa_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod = aaa_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset = aaa_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = aaa_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &aaa_M->NonInlinedSFcns.blkInfo2[2]);
      }

      ssSetRTWSfcnInfo(rts, aaa_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &aaa_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &aaa_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &aaa_M->NonInlinedSFcns.methods4[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &aaa_M->NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts, &aaa_M->NonInlinedSFcns.periodicStatesInfo
          [2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 32);
        ssSetPortInfoForInputs(rts, &aaa_M->NonInlinedSFcns.Sfcn2.inputPortInfo
          [0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn2.UPtrs0;
          sfcnUPtrs[0] = &aaa_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn2.UPtrs1;
          sfcnUPtrs[0] = &aaa_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn2.UPtrs2;
          sfcnUPtrs[0] = &aaa_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 2, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }

        /* port 3 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn2.UPtrs3;
          sfcnUPtrs[0] = &aaa_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 3, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidth(rts, 3, 1);
        }

        /* port 4 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn2.UPtrs4;
          sfcnUPtrs[0] = &aaa_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 4, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidth(rts, 4, 1);
        }

        /* port 5 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn2.UPtrs5;
          sfcnUPtrs[0] = &aaa_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 5, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 5, 1);
          ssSetInputPortWidth(rts, 5, 1);
        }

        /* port 6 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn2.UPtrs6;
          sfcnUPtrs[0] = &aaa_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 6, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 6, 1);
          ssSetInputPortWidth(rts, 6, 1);
        }

        /* port 7 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn2.UPtrs7;
          sfcnUPtrs[0] = &aaa_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 7, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 7, 1);
          ssSetInputPortWidth(rts, 7, 1);
        }

        /* port 8 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn2.UPtrs8;
          sfcnUPtrs[0] = &aaa_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 8, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 8, 1);
          ssSetInputPortWidth(rts, 8, 1);
        }

        /* port 9 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn2.UPtrs9;
          sfcnUPtrs[0] = &aaa_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 9, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 9, 1);
          ssSetInputPortWidth(rts, 9, 1);
        }

        /* port 10 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn2.UPtrs10;
          sfcnUPtrs[0] = &aaa_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 10, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 10, 1);
          ssSetInputPortWidth(rts, 10, 1);
        }

        /* port 11 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn2.UPtrs11;
          sfcnUPtrs[0] = &aaa_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 11, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 11, 1);
          ssSetInputPortWidth(rts, 11, 1);
        }

        /* port 12 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn2.UPtrs12;
          sfcnUPtrs[0] = &aaa_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 12, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 12, 1);
          ssSetInputPortWidth(rts, 12, 1);
        }

        /* port 13 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn2.UPtrs13;
          sfcnUPtrs[0] = &aaa_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 13, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 13, 1);
          ssSetInputPortWidth(rts, 13, 1);
        }

        /* port 14 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn2.UPtrs14;
          sfcnUPtrs[0] = &aaa_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 14, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 14, 1);
          ssSetInputPortWidth(rts, 14, 1);
        }

        /* port 15 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn2.UPtrs15;
          sfcnUPtrs[0] = &aaa_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 15, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 15, 1);
          ssSetInputPortWidth(rts, 15, 1);
        }

        /* port 16 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn2.UPtrs16;
          sfcnUPtrs[0] = &aaa_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 16, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 16, 1);
          ssSetInputPortWidth(rts, 16, 1);
        }

        /* port 17 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn2.UPtrs17;
          sfcnUPtrs[0] = &aaa_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 17, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 17, 1);
          ssSetInputPortWidth(rts, 17, 1);
        }

        /* port 18 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn2.UPtrs18;
          sfcnUPtrs[0] = &aaa_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 18, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 18, 1);
          ssSetInputPortWidth(rts, 18, 1);
        }

        /* port 19 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn2.UPtrs19;
          sfcnUPtrs[0] = &aaa_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 19, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 19, 1);
          ssSetInputPortWidth(rts, 19, 1);
        }

        /* port 20 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn2.UPtrs20;
          sfcnUPtrs[0] = &aaa_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 20, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 20, 1);
          ssSetInputPortWidth(rts, 20, 1);
        }

        /* port 21 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn2.UPtrs21;
          sfcnUPtrs[0] = &aaa_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 21, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 21, 1);
          ssSetInputPortWidth(rts, 21, 1);
        }

        /* port 22 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn2.UPtrs22;
          sfcnUPtrs[0] = &aaa_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 22, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 22, 1);
          ssSetInputPortWidth(rts, 22, 1);
        }

        /* port 23 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn2.UPtrs23;
          sfcnUPtrs[0] = &aaa_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 23, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 23, 1);
          ssSetInputPortWidth(rts, 23, 1);
        }

        /* port 24 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn2.UPtrs24;
          sfcnUPtrs[0] = &aaa_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 24, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 24, 1);
          ssSetInputPortWidth(rts, 24, 1);
        }

        /* port 25 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn2.UPtrs25;
          sfcnUPtrs[0] = &aaa_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 25, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 25, 1);
          ssSetInputPortWidth(rts, 25, 1);
        }

        /* port 26 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn2.UPtrs26;
          sfcnUPtrs[0] = &aaa_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 26, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 26, 1);
          ssSetInputPortWidth(rts, 26, 1);
        }

        /* port 27 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn2.UPtrs27;
          sfcnUPtrs[0] = &aaa_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 27, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 27, 1);
          ssSetInputPortWidth(rts, 27, 1);
        }

        /* port 28 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn2.UPtrs28;
          sfcnUPtrs[0] = &aaa_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 28, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 28, 1);
          ssSetInputPortWidth(rts, 28, 1);
        }

        /* port 29 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn2.UPtrs29;
          sfcnUPtrs[0] = &aaa_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 29, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 29, 1);
          ssSetInputPortWidth(rts, 29, 1);
        }

        /* port 30 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn2.UPtrs30;
          sfcnUPtrs[0] = &aaa_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 30, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 30, 1);
          ssSetInputPortWidth(rts, 30, 1);
        }

        /* port 31 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn2.UPtrs31;
          sfcnUPtrs[0] = &aaa_B.Constant1;
          ssSetInputPortSignalPtrs(rts, 31, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 31, 1);
          ssSetInputPortWidth(rts, 31, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &aaa_M->NonInlinedSFcns.Sfcn2.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 16);
          ssSetOutputPortSignal(rts, 0, ((real_T *) aaa_B.PCI3_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 16);
          ssSetOutputPortSignal(rts, 1, ((real_T *) aaa_B.PCI3_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI3");
      ssSetPath(rts, "aaa/PCI-1756/PCI3");
      ssSetRTModel(rts,aaa_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **) &aaa_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)aaa_P.PCI3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)aaa_P.PCI3_P2_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &aaa_DW.PCI3_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &aaa_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &aaa_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 6);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &aaa_DW.PCI3_IWORK[0]);
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
  aaa_M->Sizes.numContStates = (0);    /* Number of continuous states */
  aaa_M->Sizes.numY = (0);             /* Number of model outputs */
  aaa_M->Sizes.numU = (0);             /* Number of model inputs */
  aaa_M->Sizes.sysDirFeedThru = (0);   /* The model is not direct feedthrough */
  aaa_M->Sizes.numSampTimes = (1);     /* Number of sample times */
  aaa_M->Sizes.numBlocks = (247);      /* Number of blocks */
  aaa_M->Sizes.numBlockIO = (496);     /* Number of block outputs */
  aaa_M->Sizes.numBlockPrms = (112);   /* Sum of parameter "widths" */
  return aaa_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
