/*
 * aaaqi.c
 *
 * Code generation for model "aaaqi".
 *
 * Model version              : 1.84
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Wed May 12 19:16:45 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rt_logging_mmi.h"
#include "aaaqi_capi.h"
#include "aaaqi.h"
#include "aaaqi_private.h"

/* Named constants for Chart: '<S18>/Chart1' */
#define aaaqi_CALL_EVENT               (-1)
#define aaaqi_IN_NO_ACTIVE_CHILD       ((uint8_T)0U)
#define aaaqi_IN_on1                   ((uint8_T)1U)
#define aaaqi_IN_on2                   ((uint8_T)2U)

/* Named constants for Chart: '<S25>/Chart' */
#define aaaqi_CALL_EVENT_h             (-1)
#define aaaqi_IN_NO_ACTIVE_CHILD_o     ((uint8_T)0U)
#define aaaqi_IN_jiance1_32            ((uint8_T)1U)
#define aaaqi_IN_jiance1_34            ((uint8_T)2U)
#define aaaqi_IN_jiance1_36            ((uint8_T)3U)
#define aaaqi_IN_jiaya1                ((uint8_T)4U)
#define aaaqi_IN_jiaya1_1              ((uint8_T)5U)
#define aaaqi_IN_jiaya1_2              ((uint8_T)6U)
#define aaaqi_IN_jiaya1_3              ((uint8_T)7U)
#define aaaqi_IN_jiaya2                ((uint8_T)8U)
#define aaaqi_IN_jiaya7_1              ((uint8_T)9U)
#define aaaqi_IN_jiaya7_2              ((uint8_T)10U)
#define aaaqi_IN_jiaya7_3              ((uint8_T)11U)
#define aaaqi_IN_off1                  ((uint8_T)1U)
#define aaaqi_IN_off10                 ((uint8_T)2U)
#define aaaqi_IN_off11                 ((uint8_T)3U)
#define aaaqi_IN_off111                ((uint8_T)1U)
#define aaaqi_IN_off1_l                ((uint8_T)12U)
#define aaaqi_IN_off2                  ((uint8_T)4U)
#define aaaqi_IN_off2_c                ((uint8_T)2U)
#define aaaqi_IN_off2_cf               ((uint8_T)13U)
#define aaaqi_IN_off3                  ((uint8_T)5U)
#define aaaqi_IN_off3_p                ((uint8_T)3U)
#define aaaqi_IN_off3_pi               ((uint8_T)14U)
#define aaaqi_IN_off4                  ((uint8_T)6U)
#define aaaqi_IN_off4_c                ((uint8_T)4U)
#define aaaqi_IN_off4_cw               ((uint8_T)15U)
#define aaaqi_IN_off5                  ((uint8_T)7U)
#define aaaqi_IN_off6                  ((uint8_T)8U)
#define aaaqi_IN_off6_i                ((uint8_T)16U)
#define aaaqi_IN_off7                  ((uint8_T)9U)
#define aaaqi_IN_off8                  ((uint8_T)10U)
#define aaaqi_IN_off9                  ((uint8_T)11U)
#define aaaqi_IN_on1_o                 ((uint8_T)12U)
#define aaaqi_IN_on1_o5                ((uint8_T)3U)
#define aaaqi_IN_on1_o5w               ((uint8_T)5U)
#define aaaqi_IN_on1_o5w1              ((uint8_T)17U)
#define aaaqi_IN_on2_a                 ((uint8_T)13U)
#define aaaqi_IN_on2_at                ((uint8_T)6U)
#define aaaqi_IN_on2_atj               ((uint8_T)5U)
#define aaaqi_IN_on2_atja              ((uint8_T)18U)
#define aaaqi_IN_on3                   ((uint8_T)14U)
#define aaaqi_IN_on3_e                 ((uint8_T)7U)
#define aaaqi_IN_on3_e1                ((uint8_T)6U)
#define aaaqi_IN_on3_e1g               ((uint8_T)19U)
#define aaaqi_IN_on4                   ((uint8_T)15U)
#define aaaqi_IN_on41                  ((uint8_T)16U)
#define aaaqi_IN_on4_n                 ((uint8_T)20U)
#define aaaqi_IN_on5                   ((uint8_T)17U)
#define aaaqi_IN_on5_g                 ((uint8_T)21U)
#define aaaqi_IN_on6                   ((uint8_T)18U)
#define aaaqi_IN_on6_p                 ((uint8_T)22U)
#define aaaqi_IN_on7                   ((uint8_T)19U)
#define aaaqi_IN_on71                  ((uint8_T)20U)
#define aaaqi_IN_on72                  ((uint8_T)21U)
#define aaaqi_IN_on73                  ((uint8_T)22U)
#define aaaqi_IN_on8                   ((uint8_T)23U)
#define aaaqi_IN_shoudong              ((uint8_T)2U)
#define aaaqi_IN_start                 ((uint8_T)3U)
#define aaaqi_IN_start_d               ((uint8_T)24U)
#define aaaqi_IN_xieya1                ((uint8_T)4U)
#define aaaqi_IN_xieya1_1              ((uint8_T)5U)
#define aaaqi_IN_xieya1_2              ((uint8_T)6U)
#define aaaqi_IN_xieya1_3              ((uint8_T)7U)
#define aaaqi_IN_xieya2                ((uint8_T)8U)
#define aaaqi_IN_xieya7_1              ((uint8_T)9U)
#define aaaqi_IN_xieya7_2              ((uint8_T)10U)
#define aaaqi_IN_xieya7_3              ((uint8_T)11U)
#define aaaqi_IN_xieya8                ((uint8_T)12U)

/* Named constants for Chart: '<S26>/Chart' */
#define aaaqi_IN_SCjiaya               ((uint8_T)1U)
#define aaaqi_IN_SCzhushui             ((uint8_T)2U)
#define aaaqi_IN_SXQjunya              ((uint8_T)3U)
#define aaaqi_IN_SXQxieya              ((uint8_T)4U)
#define aaaqi_IN_kaiguangai            ((uint8_T)5U)
#define aaaqi_IN_off5_m                ((uint8_T)5U)
#define aaaqi_IN_off6_m                ((uint8_T)6U)
#define aaaqi_IN_off7_o                ((uint8_T)7U)
#define aaaqi_IN_on1_k                 ((uint8_T)8U)
#define aaaqi_IN_on2_g                 ((uint8_T)9U)
#define aaaqi_IN_on3_ec                ((uint8_T)10U)
#define aaaqi_IN_on4_k                 ((uint8_T)11U)
#define aaaqi_IN_on5_n                 ((uint8_T)12U)
#define aaaqi_IN_on6_e                 ((uint8_T)13U)
#define aaaqi_IN_on7_g                 ((uint8_T)14U)
#define aaaqi_IN_on8_g                 ((uint8_T)15U)
#define aaaqi_IN_start_i               ((uint8_T)2U)
#define aaaqi_IN_start_i5              ((uint8_T)16U)
#define aaaqi_IN_zidong                ((uint8_T)3U)

/* Named constants for Chart: '<S19>/jinjichuli' */
#define aaaqi_IN_A                     ((uint8_T)1U)
#define aaaqi_IN_MANUAL                ((uint8_T)1U)
#define aaaqi_IN_end                   ((uint8_T)2U)
#define aaaqi_IN_off1_d                ((uint8_T)3U)
#define aaaqi_IN_on                    ((uint8_T)2U)
#define aaaqi_IN_on1_kh                ((uint8_T)4U)

const real_T aaaqi_RGND = 0.0;         /* real_T ground */

/* Block signals (auto storage) */
B_aaaqi_T aaaqi_B;

/* Block states (auto storage) */
DW_aaaqi_T aaaqi_DW;

/* Real-time model */
RT_MODEL_aaaqi_T aaaqi_M_;
RT_MODEL_aaaqi_T *const aaaqi_M = &aaaqi_M_;

/* Forward declaration for local functions */
static void aaaqi_exit_internal_MANUAL(void);
static void aaaqi_MANUAL(void);
static void aaaqi_jiaya2_j(void);
static void aaaqi_jiaya7_2_o(void);
static void aaaqi_jiaya7_3_j(void);
static void aaaqi_off2_n(void);
static void aaaqi_off3_g(void);
static void aaaqi_off4_o(void);
static void aaaqi_SXQjunya_l(void);
static void aaaqi_SXQxieya_e(void);
static void aaaqi_zidong(void);
static void aaaqi_enter_atomic_start_k(void);
static void aaaqi_enter_atomic_start(void);
static void aaaqi_kaiguangai(void);
static void aaaqi_xieya2(void);
static void aaaqi_xieya7_1(void);
static void aaaqi_xieya7_2(void);
static void aaaqi_xieya7_3(void);
static void aaaqi_SXQxieya(void);
static void aaaqi_jiaya1(void);
static void aaaqi_jiaya1_1(void);
static void aaaqi_jiaya1_2(void);
static void aaaqi_jiaya1_3(void);
static void aaaqi_jiaya2(void);
static void aaaqi_jiaya7_1(void);
static void aaaqi_jiaya7_2(void);
static void aaaqi_jiaya7_3(void);
static void aaaqi_off2(void);
static void aaaqi_off3(void);
static void aaaqi_off4(void);
static void aaaqi_on2(void);
static void aaaqi_on3(void);
static void aaaqi_on4(void);
static void aaaqi_on5(void);
static void aaaqi_SXQjunya(void);
static void aaaqi_shoudong(void);
real_T look1_binlxpw(real_T u0, const real_T bp0[], const real_T table[],
                     uint32_T maxIndex)
{
  real_T frac;
  uint32_T iRght;
  uint32_T iLeft;
  uint32_T bpIdx;

  /* Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear'
     Extrapolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Linear'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = (u0 - bp0[0U]) / (bp0[1U] - bp0[0U]);
  } else if (u0 < bp0[maxIndex]) {
    /* Binary Search */
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1U;
    frac = (u0 - bp0[maxIndex - 1U]) / (bp0[maxIndex] - bp0[maxIndex - 1U]);
  }

  /* Interpolation 1-D
     Interpolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  return (table[iLeft + 1U] - table[iLeft]) * frac + table[iLeft];
}

/*
 * System initialize for enable system:
 *    '<Root>/Subsystem4'
 *    '<Root>/Subsystem5'
 */
void aaaqi_Subsystem4_Init(B_Subsystem4_aaaqi_T *localB, P_Subsystem4_aaaqi_T
  *localP)
{
  /* SystemInitialize for Outport: '<S15>/Out1' */
  localB->Add = localP->Out1_Y0;
}

/*
 * Output and update for enable system:
 *    '<Root>/Subsystem4'
 *    '<Root>/Subsystem5'
 */
void aaaqi_Subsystem4(boolean_T rtu_Enable, real_T rtu_In1, B_Subsystem4_aaaqi_T
                      *localB, DW_Subsystem4_aaaqi_T *localDW,
                      P_Subsystem4_aaaqi_T *localP)
{
  /* Outputs for Enabled SubSystem: '<Root>/Subsystem4' incorporates:
   *  EnablePort: '<S15>/Enable'
   */
  if (rtu_Enable) {
    /* Sum: '<S15>/Add' incorporates:
     *  Constant: '<S15>/Constant'
     */
    localB->Add = rtu_In1 - localP->Constant_Value;
    srUpdateBC(localDW->Subsystem4_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<Root>/Subsystem4' */
}

/*
 * System initialize for atomic system:
 *    '<S18>/Chart1'
 *    '<S20>/Chart'
 */
void aaaqi_Chart1_Init(B_Chart1_aaaqi_T *localB, DW_Chart1_aaaqi_T *localDW)
{
  localDW->sfEvent = aaaqi_CALL_EVENT;
  localDW->is_active_c8_aaaqi = 0U;
  localDW->is_c8_aaaqi = aaaqi_IN_NO_ACTIVE_CHILD;
  localDW->x = 0.0;
  localB->t = 0.0;
}

/*
 * Output and update for atomic system:
 *    '<S18>/Chart1'
 *    '<S20>/Chart'
 */
void aaaqi_Chart1(real_T rtu_a, B_Chart1_aaaqi_T *localB, DW_Chart1_aaaqi_T
                  *localDW)
{
  /* Gateway: guangaiquxian/Chart1 */
  localDW->sfEvent = aaaqi_CALL_EVENT;

  /* During: guangaiquxian/Chart1 */
  if (localDW->is_active_c8_aaaqi == 0U) {
    /* Entry: guangaiquxian/Chart1 */
    localDW->is_active_c8_aaaqi = 1U;

    /* Entry Internal: guangaiquxian/Chart1 */
    /* Transition: '<S53>:2' */
    localDW->is_c8_aaaqi = aaaqi_IN_on1;

    /* Entry 'on1': '<S53>:1' */
    localDW->x = 0.0;
    localB->t = 0.0;
  } else if (localDW->is_c8_aaaqi == aaaqi_IN_on1) {
    /* During 'on1': '<S53>:1' */
    if (rtu_a == 1.0) {
      /* Transition: '<S53>:5' */
      localDW->is_c8_aaaqi = aaaqi_IN_on2;

      /* Entry 'on2': '<S53>:3' */
      localDW->x++;
      localB->t = localDW->x * 0.002;
    }
  } else {
    /* During 'on2': '<S53>:3' */
    /* Transition: '<S53>:15' */
    if (rtu_a == 1.0) {
      /* Transition: '<S53>:16' */
      localDW->is_c8_aaaqi = aaaqi_IN_on2;

      /* Entry 'on2': '<S53>:3' */
      localDW->x++;
      localB->t = localDW->x * 0.002;
    } else {
      if (rtu_a == 0.0) {
        /* Transition: '<S53>:7' */
        localDW->is_c8_aaaqi = aaaqi_IN_on1;

        /* Entry 'on1': '<S53>:1' */
        localDW->x = 0.0;
        localB->t = 0.0;
      }
    }
  }
}

/* Function for Chart: '<S19>/jinjichuli' */
static void aaaqi_exit_internal_MANUAL(void)
{
  /* Exit Internal 'MANUAL': '<S54>:3' */
  /* Exit Internal 'kaigai': '<S54>:173' */
  aaaqi_DW.is_kaigai = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_DW.is_active_kaigai = 0U;

  /* Exit Internal 'yajin': '<S54>:50' */
  aaaqi_DW.is_yajin = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_DW.is_active_yajin = 0U;

  /* Exit Internal 'kiagai': '<S54>:44' */
  aaaqi_DW.is_kiagai = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_DW.is_active_kiagai = 0U;

  /* Exit Internal 'fa4_13': '<S54>:40' */
  aaaqi_DW.is_fa4_13 = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_DW.is_active_fa4_13 = 0U;

  /* Exit Internal 'fa4_11': '<S54>:31' */
  aaaqi_DW.is_fa4_11 = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_DW.is_active_fa4_11 = 0U;

  /* Exit Internal 'fa4_12': '<S54>:30' */
  aaaqi_DW.is_fa4_12 = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_DW.is_active_fa4_12 = 0U;

  /* Exit Internal 'fa4_10': '<S54>:29' */
  aaaqi_DW.is_fa4_10 = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_DW.is_active_fa4_10 = 0U;

  /* Exit Internal 'fa4_9': '<S54>:28' */
  aaaqi_DW.is_fa4_9 = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_DW.is_active_fa4_9 = 0U;

  /* Exit Internal 'fa4_7': '<S54>:19' */
  aaaqi_DW.is_fa4_7 = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_DW.is_active_fa4_7 = 0U;

  /* Exit Internal 'fa4_8': '<S54>:18' */
  aaaqi_DW.is_fa4_8 = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_DW.is_active_fa4_8 = 0U;

  /* Exit Internal 'fa4_6': '<S54>:17' */
  aaaqi_DW.is_fa4_6 = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_DW.is_active_fa4_6 = 0U;

  /* Exit Internal 'fa4_5': '<S54>:16' */
  aaaqi_DW.is_fa4_5 = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_DW.is_active_fa4_5 = 0U;

  /* Exit Internal 'fa4_1': '<S54>:7' */
  aaaqi_DW.is_fa4_1 = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_DW.is_active_fa4_1 = 0U;

  /* Exit Internal 'fa4_3': '<S54>:6' */
  aaaqi_DW.is_fa4_3 = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_DW.is_active_fa4_3 = 0U;

  /* Exit Internal 'fa4_2': '<S54>:5' */
  aaaqi_DW.is_fa4_2 = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_DW.is_active_fa4_2 = 0U;

  /* Exit Internal 'fa4_4': '<S54>:4' */
  aaaqi_DW.is_fa4_4 = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_DW.is_active_fa4_4 = 0U;
}

/* Function for Chart: '<S19>/jinjichuli' */
static void aaaqi_MANUAL(void)
{
  /* During 'MANUAL': '<S54>:3' */
  if (aaaqi_B.jiting == 1.0) {
    /* Transition: '<S54>:98' */
    aaaqi_exit_internal_MANUAL();
    aaaqi_DW.is_c2_aaaqi = aaaqi_IN_end;

    /* Entry 'end': '<S54>:43' */
    aaaqi_B.diancifa11_1 = 0.0;
    aaaqi_B.diancifa11_2 = 0.0;
    aaaqi_B.diancifa11_5 = 0.0;
    aaaqi_B.diancifa20 = 0.0;
    aaaqi_B.diancifa16_1 = 0.0;
    aaaqi_B.diancifa3 = 0.0;
    aaaqi_B.diancifa21 = 0.0;
    aaaqi_B.xuansong = 0.0;
    aaaqi_B.xuanjin = 0.0;
    aaaqi_B.suoding = 0.0;
    aaaqi_B.jiesuo = 0.0;
    aaaqi_B.bililiuliangfa18_1 = 0.0;
    aaaqi_B.bililiuliangfa18_2 = 0.0;
    aaaqi_B.bililiuliangfa18_3 = 0.0;
    aaaqi_B.bililiuliangfa18_4 = 0.0;
    aaaqi_B.kaiguangaifa = 0.0;
  } else {
    /* During 'fa4_4': '<S54>:4' */
    if (aaaqi_DW.is_fa4_4 == aaaqi_IN_A) {
      /* During 'A': '<S54>:8' */
      if (aaaqi_B.fa20 == 1.0) {
        /* Transition: '<S54>:66' */
        aaaqi_DW.is_fa4_4 = aaaqi_IN_on;

        /* Entry 'on': '<S54>:12' */
        aaaqi_B.diancifa20 = 1.0;
      }
    } else {
      /* During 'on': '<S54>:12' */
      if (aaaqi_B.fa20 == 0.0) {
        /* Transition: '<S54>:62' */
        aaaqi_DW.is_fa4_4 = aaaqi_IN_A;

        /* Entry 'A': '<S54>:8' */
        aaaqi_B.diancifa20 = 0.0;
      }
    }

    /* During 'fa4_2': '<S54>:5' */
    if (aaaqi_DW.is_fa4_2 == aaaqi_IN_A) {
      /* During 'A': '<S54>:9' */
      if (aaaqi_B.fa11_2 == 1.0) {
        /* Transition: '<S54>:67' */
        aaaqi_DW.is_fa4_2 = aaaqi_IN_on;

        /* Entry 'on': '<S54>:13' */
        aaaqi_B.diancifa11_2 = 1.0;
      }
    } else {
      /* During 'on': '<S54>:13' */
      if (aaaqi_B.fa11_2 == 0.0) {
        /* Transition: '<S54>:63' */
        aaaqi_DW.is_fa4_2 = aaaqi_IN_A;

        /* Entry 'A': '<S54>:9' */
        aaaqi_B.diancifa11_2 = 0.0;
      }
    }

    /* During 'fa4_3': '<S54>:6' */
    if (aaaqi_DW.is_fa4_3 == aaaqi_IN_A) {
      /* During 'A': '<S54>:10' */
      if (aaaqi_B.fa11_5 == 1.0) {
        /* Transition: '<S54>:68' */
        aaaqi_DW.is_fa4_3 = aaaqi_IN_on;

        /* Entry 'on': '<S54>:14' */
        aaaqi_B.diancifa11_5 = 1.0;
      }
    } else {
      /* During 'on': '<S54>:14' */
      if (aaaqi_B.fa11_5 == 0.0) {
        /* Transition: '<S54>:64' */
        aaaqi_DW.is_fa4_3 = aaaqi_IN_A;

        /* Entry 'A': '<S54>:10' */
        aaaqi_B.diancifa11_5 = 0.0;
      }
    }

    /* During 'fa4_1': '<S54>:7' */
    if (aaaqi_DW.is_fa4_1 == aaaqi_IN_A) {
      /* During 'A': '<S54>:11' */
      if (aaaqi_B.fa11_1 == 1.0) {
        /* Transition: '<S54>:69' */
        aaaqi_DW.is_fa4_1 = aaaqi_IN_on;

        /* Entry 'on': '<S54>:15' */
        aaaqi_B.diancifa11_1 = 1.0;
      }
    } else {
      /* During 'on': '<S54>:15' */
      if (aaaqi_B.fa11_1 == 0.0) {
        /* Transition: '<S54>:65' */
        aaaqi_DW.is_fa4_1 = aaaqi_IN_A;

        /* Entry 'A': '<S54>:11' */
        aaaqi_B.diancifa11_1 = 0.0;
      }
    }

    /* During 'fa4_5': '<S54>:16' */
    if (aaaqi_DW.is_fa4_5 == aaaqi_IN_A) {
      /* During 'A': '<S54>:20' */
      if (aaaqi_B.fa16_1 == 1.0) {
        /* Transition: '<S54>:78' */
        aaaqi_DW.is_fa4_5 = aaaqi_IN_on;

        /* Entry 'on': '<S54>:24' */
        aaaqi_B.diancifa16_1 = 1.0;
      }
    } else {
      /* During 'on': '<S54>:24' */
      if (aaaqi_B.fa16_1 == 0.0) {
        /* Transition: '<S54>:74' */
        aaaqi_DW.is_fa4_5 = aaaqi_IN_A;

        /* Entry 'A': '<S54>:20' */
        aaaqi_B.diancifa16_1 = 0.0;
      }
    }

    /* During 'fa4_6': '<S54>:17' */
    if (aaaqi_DW.is_fa4_6 == aaaqi_IN_A) {
      /* During 'A': '<S54>:21' */
      if (aaaqi_B.fa3 == 1.0) {
        /* Transition: '<S54>:79' */
        aaaqi_DW.is_fa4_6 = aaaqi_IN_on;

        /* Entry 'on': '<S54>:25' */
        aaaqi_B.diancifa3 = 1.0;
      }
    } else {
      /* During 'on': '<S54>:25' */
      if (aaaqi_B.fa3 == 0.0) {
        /* Transition: '<S54>:75' */
        aaaqi_DW.is_fa4_6 = aaaqi_IN_A;

        /* Entry 'A': '<S54>:21' */
        aaaqi_B.diancifa3 = 0.0;
      }
    }

    /* During 'fa4_8': '<S54>:18' */
    if (aaaqi_DW.is_fa4_8 == aaaqi_IN_A) {
      /* During 'A': '<S54>:22' */
      if (aaaqi_B.suodingmingling == 1.0) {
        /* Transition: '<S54>:80' */
        aaaqi_DW.is_fa4_8 = aaaqi_IN_on;

        /* Entry 'on': '<S54>:26' */
        aaaqi_B.xuansong = 1.0;
      }
    } else {
      /* During 'on': '<S54>:26' */
      if (aaaqi_B.suodingmingling == 0.0) {
        /* Transition: '<S54>:76' */
        aaaqi_DW.is_fa4_8 = aaaqi_IN_A;

        /* Entry 'A': '<S54>:22' */
        aaaqi_B.xuansong = 0.0;
      }
    }

    /* During 'fa4_7': '<S54>:19' */
    if (aaaqi_DW.is_fa4_7 == aaaqi_IN_A) {
      /* During 'A': '<S54>:23' */
      if (aaaqi_B.fa21 == 1.0) {
        /* Transition: '<S54>:81' */
        aaaqi_DW.is_fa4_7 = aaaqi_IN_on;

        /* Entry 'on': '<S54>:27' */
        aaaqi_B.diancifa21 = 1.0;
      }
    } else {
      /* During 'on': '<S54>:27' */
      if (aaaqi_B.fa21 == 0.0) {
        /* Transition: '<S54>:77' */
        aaaqi_DW.is_fa4_7 = aaaqi_IN_A;

        /* Entry 'A': '<S54>:23' */
        aaaqi_B.diancifa21 = 0.0;
      }
    }

    /* During 'fa4_9': '<S54>:28' */
    if (aaaqi_DW.is_fa4_9 == aaaqi_IN_A) {
      /* During 'A': '<S54>:32' */
      if (aaaqi_B.jiesuomingling == 1.0) {
        /* Transition: '<S54>:90' */
        aaaqi_DW.is_fa4_9 = aaaqi_IN_on;

        /* Entry 'on': '<S54>:36' */
        aaaqi_B.xuanjin = 1.0;
      }
    } else {
      /* During 'on': '<S54>:36' */
      if (aaaqi_B.jiesuomingling == 0.0) {
        /* Transition: '<S54>:86' */
        aaaqi_DW.is_fa4_9 = aaaqi_IN_A;

        /* Entry 'A': '<S54>:32' */
        aaaqi_B.xuanjin = 0.0;
      }
    }

    /* During 'fa4_10': '<S54>:29' */
    if (aaaqi_DW.is_fa4_10 == aaaqi_IN_A) {
      /* During 'A': '<S54>:33' */
      if (aaaqi_B.xuansongmingling == 1.0) {
        /* Transition: '<S54>:91' */
        aaaqi_DW.is_fa4_10 = aaaqi_IN_on;

        /* Entry 'on': '<S54>:37' */
        aaaqi_B.suoding = 1.0;
      }
    } else {
      /* During 'on': '<S54>:37' */
      if (aaaqi_B.xuansongmingling == 0.0) {
        /* Transition: '<S54>:87' */
        aaaqi_DW.is_fa4_10 = aaaqi_IN_A;

        /* Entry 'A': '<S54>:33' */
        aaaqi_B.suoding = 0.0;
      }
    }

    /* During 'fa4_12': '<S54>:30' */
    if (aaaqi_DW.is_fa4_12 == aaaqi_IN_A) {
      /* During 'A': '<S54>:34' */
      if (aaaqi_B.fa18_1 != 0.0) {
        /* Transition: '<S54>:92' */
        aaaqi_DW.is_fa4_12 = aaaqi_IN_on;

        /* Entry 'on': '<S54>:38' */
        aaaqi_B.bililiuliangfa18_1 = aaaqi_B.fa18_1;
      }
    } else {
      /* During 'on': '<S54>:38' */
      if (aaaqi_B.fa18_1 != 0.0) {
        /* Transition: '<S54>:179' */
        aaaqi_DW.is_fa4_12 = aaaqi_IN_on;

        /* Entry 'on': '<S54>:38' */
        aaaqi_B.bililiuliangfa18_1 = aaaqi_B.fa18_1;
      } else {
        if (aaaqi_B.fa18_1 == 0.0) {
          /* Transition: '<S54>:88' */
          aaaqi_DW.is_fa4_12 = aaaqi_IN_A;

          /* Entry 'A': '<S54>:34' */
          aaaqi_B.bililiuliangfa18_1 = 0.0;
        }
      }
    }

    /* During 'fa4_11': '<S54>:31' */
    if (aaaqi_DW.is_fa4_11 == aaaqi_IN_A) {
      /* During 'A': '<S54>:35' */
      if (aaaqi_B.xuanjinmingling == 1.0) {
        /* Transition: '<S54>:93' */
        aaaqi_DW.is_fa4_11 = aaaqi_IN_on;

        /* Entry 'on': '<S54>:39' */
        aaaqi_B.jiesuo = 1.0;
      }
    } else {
      /* During 'on': '<S54>:39' */
      if (aaaqi_B.xuanjinmingling == 0.0) {
        /* Transition: '<S54>:89' */
        aaaqi_DW.is_fa4_11 = aaaqi_IN_A;

        /* Entry 'A': '<S54>:35' */
        aaaqi_B.jiesuo = 0.0;
      }
    }

    /* During 'fa4_13': '<S54>:40' */
    if (aaaqi_DW.is_fa4_13 == aaaqi_IN_A) {
      /* During 'A': '<S54>:41' */
      if (aaaqi_B.fa18_2 != 0.0) {
        /* Transition: '<S54>:96' */
        aaaqi_DW.is_fa4_13 = aaaqi_IN_on;

        /* Entry 'on': '<S54>:42' */
        aaaqi_B.bililiuliangfa18_2 = aaaqi_B.fa18_2;
      }
    } else {
      /* During 'on': '<S54>:42' */
      if (aaaqi_B.fa18_2 != 0.0) {
        /* Transition: '<S54>:180' */
        aaaqi_DW.is_fa4_13 = aaaqi_IN_on;

        /* Entry 'on': '<S54>:42' */
        aaaqi_B.bililiuliangfa18_2 = aaaqi_B.fa18_2;
      } else {
        if (aaaqi_B.fa18_2 == 0.0) {
          /* Transition: '<S54>:95' */
          aaaqi_DW.is_fa4_13 = aaaqi_IN_A;

          /* Entry 'A': '<S54>:41' */
          aaaqi_B.bililiuliangfa18_2 = 0.0;
        }
      }
    }

    /* During 'kiagai': '<S54>:44' */
    if (aaaqi_DW.is_kiagai == aaaqi_IN_A) {
      /* During 'A': '<S54>:45' */
      if (aaaqi_B.fa18_3 != 0.0) {
        /* Transition: '<S54>:100' */
        aaaqi_DW.is_kiagai = aaaqi_IN_on;

        /* Entry 'on': '<S54>:46' */
        aaaqi_B.bililiuliangfa18_3 = aaaqi_B.fa18_3;
      }
    } else {
      /* During 'on': '<S54>:46' */
      if (aaaqi_B.fa18_3 != 0.0) {
        /* Transition: '<S54>:181' */
        aaaqi_DW.is_kiagai = aaaqi_IN_on;

        /* Entry 'on': '<S54>:46' */
        aaaqi_B.bililiuliangfa18_3 = aaaqi_B.fa18_3;
      } else {
        if (aaaqi_B.fa18_3 == 0.0) {
          /* Transition: '<S54>:99' */
          aaaqi_DW.is_kiagai = aaaqi_IN_A;

          /* Entry 'A': '<S54>:45' */
          aaaqi_B.bililiuliangfa18_3 = 0.0;
        }
      }
    }

    /* During 'yajin': '<S54>:50' */
    if (aaaqi_DW.is_yajin == aaaqi_IN_A) {
      /* During 'A': '<S54>:51' */
      if (aaaqi_B.fa18_4 != 0.0) {
        /* Transition: '<S54>:106' */
        aaaqi_DW.is_yajin = aaaqi_IN_on;

        /* Entry 'on': '<S54>:52' */
        aaaqi_B.bililiuliangfa18_4 = aaaqi_B.fa18_4;
      }
    } else {
      /* During 'on': '<S54>:52' */
      if (aaaqi_B.fa18_4 != 0.0) {
        /* Transition: '<S54>:184' */
        aaaqi_DW.is_yajin = aaaqi_IN_on;

        /* Entry 'on': '<S54>:52' */
        aaaqi_B.bililiuliangfa18_4 = aaaqi_B.fa18_4;
      } else {
        if (aaaqi_B.fa18_4 == 0.0) {
          /* Transition: '<S54>:105' */
          aaaqi_DW.is_yajin = aaaqi_IN_A;

          /* Entry 'A': '<S54>:51' */
          aaaqi_B.bililiuliangfa18_4 = 0.0;
        }
      }
    }

    /* During 'kaigai': '<S54>:173' */
    if (aaaqi_DW.is_kaigai == aaaqi_IN_A) {
      /* During 'A': '<S54>:177' */
      if (aaaqi_B.fa_kgg != 0.0) {
        /* Transition: '<S54>:176' */
        aaaqi_DW.is_kaigai = aaaqi_IN_on;

        /* Entry 'on': '<S54>:178' */
        aaaqi_B.kaiguangaifa = aaaqi_B.fa_kgg;
      }
    } else {
      /* During 'on': '<S54>:178' */
      if (aaaqi_B.fa_kgg != 0.0) {
        /* Transition: '<S54>:183' */
        aaaqi_DW.is_kaigai = aaaqi_IN_on;

        /* Entry 'on': '<S54>:178' */
        aaaqi_B.kaiguangaifa = aaaqi_B.fa_kgg;
      } else {
        if (aaaqi_B.fa_kgg == 0.0) {
          /* Transition: '<S54>:175' */
          aaaqi_DW.is_kaigai = aaaqi_IN_A;

          /* Entry 'A': '<S54>:177' */
          aaaqi_B.kaiguangaifa = 0.0;
        }
      }
    }
  }
}

real_T rt_powd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T tmp;
  real_T tmp_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else {
    tmp = fabs(u0);
    tmp_0 = fabs(u1);
    if (rtIsInf(u1)) {
      if (tmp == 1.0) {
        y = (rtNaN);
      } else if (tmp > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (tmp_0 == 0.0) {
      y = 1.0;
    } else if (tmp_0 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

/* Function for Chart: '<S26>/Chart' */
static void aaaqi_jiaya2_j(void)
{
  boolean_T guard1 = false;

  /* During 'jiaya2': '<S37>:1239' */
  /* Transition: '<S37>:1208' */
  guard1 = false;
  if (aaaqi_DW.p0_1 >= aaaqi_B.u_m) {
    /* Transition: '<S37>:1212' */
    if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.u_m) &&
        (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.u_m)) {
      /* Transition: '<S37>:1203' */
      aaaqi_DW.is_SXQjunya = aaaqi_IN_jiaya7_1;
      aaaqi_DW.temporalCounter_i1_c = 0U;

      /* Entry 'jiaya7_1': '<S37>:1237' */
      aaaqi_B.bililiuliangfa18_3_p = 1.0;
      aaaqi_B.bililiuliangfa18_4_c = 1.0;
    } else if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.u_m) &&
               (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.u_m)) {
      /* Transition: '<S37>:1209' */
      aaaqi_DW.is_SXQjunya = aaaqi_IN_jiaya7_2;
      aaaqi_DW.temporalCounter_i1_c = 0U;

      /* Entry 'jiaya7_2': '<S37>:1243' */
      aaaqi_B.bililiuliangfa18_3_p = 1.0;
      aaaqi_B.bililiuliangfa18_4_c = 0.0;
    } else if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.u_m) &&
               (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.u_m)) {
      /* Transition: '<S37>:1207' */
      aaaqi_DW.is_SXQjunya = aaaqi_IN_jiaya7_3;
      aaaqi_DW.temporalCounter_i1_c = 0U;

      /* Entry 'jiaya7_3': '<S37>:1238' */
      aaaqi_B.bililiuliangfa18_3_p = 0.0;
      aaaqi_B.bililiuliangfa18_4_c = 1.0;
    } else if ((aaaqi_DW.temporalCounter_i1_c >= 250) &&
               ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.u_m) &&
                (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.u_m))) {
      /* Transition: '<S37>:1222' */
      aaaqi_DW.is_SXQjunya = aaaqi_IN_off4_cw;
      aaaqi_DW.temporalCounter_i1_c = 0U;

      /* Entry 'off4': '<S37>:1246' */
      aaaqi_B.bililiuliangfa18_3_p = 0.0;
      aaaqi_B.bililiuliangfa18_4_c = 0.0;
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    if (aaaqi_DW.p0_1 < aaaqi_B.u_m) {
      /* Transition: '<S37>:1211' */
      if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_DW.p0_1) &&
          (aaaqi_B.DataTypeConversion27[4] < aaaqi_DW.p0_1)) {
        /* Transition: '<S37>:1205' */
        aaaqi_DW.is_SXQjunya = aaaqi_IN_jiaya1_1;

        /* Entry 'jiaya1_1': '<S37>:1236' */
        aaaqi_B.bililiuliangfa18_3_p = 1.0;
        aaaqi_B.bililiuliangfa18_4_c = 1.0;
      } else if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_DW.p0_1) &&
                 (aaaqi_B.DataTypeConversion27[4] < aaaqi_DW.p0_1)) {
        /* Transition: '<S37>:1218' */
        aaaqi_DW.is_SXQjunya = aaaqi_IN_jiaya1_2;

        /* Entry 'jiaya1_2': '<S37>:1244' */
        aaaqi_B.bililiuliangfa18_3_p = 1.0;
        aaaqi_B.bililiuliangfa18_4_c = 0.0;
      } else if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_DW.p0_1) &&
                 (aaaqi_B.DataTypeConversion27[4] >= aaaqi_DW.p0_1)) {
        /* Transition: '<S37>:1213' */
        aaaqi_DW.is_SXQjunya = aaaqi_IN_jiaya1_3;

        /* Entry 'jiaya1_3': '<S37>:1245' */
        aaaqi_B.bililiuliangfa18_3_p = 0.0;
        aaaqi_B.bililiuliangfa18_4_c = 1.0;
      } else {
        if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_DW.p0_1) &&
            (aaaqi_B.DataTypeConversion27[4] >= aaaqi_DW.p0_1)) {
          /* Transition: '<S37>:1202' */
          aaaqi_DW.is_SXQjunya = aaaqi_IN_jiaya2;
          aaaqi_DW.temporalCounter_i1_c = 0U;

          /* Entry 'jiaya2': '<S37>:1239' */
          aaaqi_B.bililiuliangfa18_3_p = 1.0;
          aaaqi_B.bililiuliangfa18_4_c = 1.0;
          aaaqi_DW.p0_1 += 0.03;
        }
      }
    }
  }
}

/* Function for Chart: '<S26>/Chart' */
static void aaaqi_jiaya7_2_o(void)
{
  /* During 'jiaya7_2': '<S37>:1243' */
  /* Transition: '<S37>:1214' */
  if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.u_m) &&
      (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.u_m)) {
    /* Transition: '<S37>:1203' */
    aaaqi_DW.is_SXQjunya = aaaqi_IN_jiaya7_1;
    aaaqi_DW.temporalCounter_i1_c = 0U;

    /* Entry 'jiaya7_1': '<S37>:1237' */
    aaaqi_B.bililiuliangfa18_3_p = 1.0;
    aaaqi_B.bililiuliangfa18_4_c = 1.0;
  } else if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.u_m) &&
             (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.u_m)) {
    /* Transition: '<S37>:1209' */
    aaaqi_DW.is_SXQjunya = aaaqi_IN_jiaya7_2;
    aaaqi_DW.temporalCounter_i1_c = 0U;

    /* Entry 'jiaya7_2': '<S37>:1243' */
    aaaqi_B.bililiuliangfa18_3_p = 1.0;
    aaaqi_B.bililiuliangfa18_4_c = 0.0;
  } else if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.u_m) &&
             (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.u_m)) {
    /* Transition: '<S37>:1207' */
    aaaqi_DW.is_SXQjunya = aaaqi_IN_jiaya7_3;
    aaaqi_DW.temporalCounter_i1_c = 0U;

    /* Entry 'jiaya7_3': '<S37>:1238' */
    aaaqi_B.bililiuliangfa18_3_p = 0.0;
    aaaqi_B.bililiuliangfa18_4_c = 1.0;
  } else {
    if ((aaaqi_DW.temporalCounter_i1_c >= 250) &&
        ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.u_m) &&
         (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.u_m))) {
      /* Transition: '<S37>:1222' */
      aaaqi_DW.is_SXQjunya = aaaqi_IN_off4_cw;
      aaaqi_DW.temporalCounter_i1_c = 0U;

      /* Entry 'off4': '<S37>:1246' */
      aaaqi_B.bililiuliangfa18_3_p = 0.0;
      aaaqi_B.bililiuliangfa18_4_c = 0.0;
    }
  }
}

/* Function for Chart: '<S26>/Chart' */
static void aaaqi_jiaya7_3_j(void)
{
  /* During 'jiaya7_3': '<S37>:1238' */
  /* Transition: '<S37>:1201' */
  if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.u_m) &&
      (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.u_m)) {
    /* Transition: '<S37>:1203' */
    aaaqi_DW.is_SXQjunya = aaaqi_IN_jiaya7_1;
    aaaqi_DW.temporalCounter_i1_c = 0U;

    /* Entry 'jiaya7_1': '<S37>:1237' */
    aaaqi_B.bililiuliangfa18_3_p = 1.0;
    aaaqi_B.bililiuliangfa18_4_c = 1.0;
  } else if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.u_m) &&
             (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.u_m)) {
    /* Transition: '<S37>:1209' */
    aaaqi_DW.is_SXQjunya = aaaqi_IN_jiaya7_2;
    aaaqi_DW.temporalCounter_i1_c = 0U;

    /* Entry 'jiaya7_2': '<S37>:1243' */
    aaaqi_B.bililiuliangfa18_3_p = 1.0;
    aaaqi_B.bililiuliangfa18_4_c = 0.0;
  } else if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.u_m) &&
             (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.u_m)) {
    /* Transition: '<S37>:1207' */
    aaaqi_DW.is_SXQjunya = aaaqi_IN_jiaya7_3;
    aaaqi_DW.temporalCounter_i1_c = 0U;

    /* Entry 'jiaya7_3': '<S37>:1238' */
    aaaqi_B.bililiuliangfa18_3_p = 0.0;
    aaaqi_B.bililiuliangfa18_4_c = 1.0;
  } else {
    if ((aaaqi_DW.temporalCounter_i1_c >= 250) &&
        ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.u_m) &&
         (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.u_m))) {
      /* Transition: '<S37>:1222' */
      aaaqi_DW.is_SXQjunya = aaaqi_IN_off4_cw;
      aaaqi_DW.temporalCounter_i1_c = 0U;

      /* Entry 'off4': '<S37>:1246' */
      aaaqi_B.bililiuliangfa18_3_p = 0.0;
      aaaqi_B.bililiuliangfa18_4_c = 0.0;
    }
  }
}

/* Function for Chart: '<S26>/Chart' */
static void aaaqi_off2_n(void)
{
  boolean_T guard1 = false;

  /* During 'off2': '<S37>:1248' */
  if (aaaqi_DW.temporalCounter_i1_c >= 1000) {
    /* Transition: '<S37>:1234' */
    guard1 = false;
    if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.u_m) ||
        (aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_m + 0.005) ||
        (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.u_m) ||
        (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_m + 0.005)) {
      /* Transition: '<S37>:1229' */
      if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_m + 0.005) &&
          (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_m + 0.005)) {
        /* Transition: '<S37>:1226' */
        aaaqi_DW.is_SXQjunya = aaaqi_IN_jiance1_34;
        aaaqi_DW.temporalCounter_i1_c = 0U;

        /* Entry 'jiance1_34': '<S37>:1249' */
        aaaqi_B.bililiuliangfa18_1_a = 1.0;
        aaaqi_B.bililiuliangfa18_2_d = 0.0;
      } else if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.u_m) &&
                 (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.u_m) &&
                 (aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_m + 0.005) &&
                 (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_m + 0.005)) {
        /* Transition: '<S37>:1227' */
        aaaqi_DW.is_SXQjunya = aaaqi_IN_off2_cf;
        aaaqi_DW.temporalCounter_i1_c = 0U;

        /* Entry 'off2': '<S37>:1248' */
        aaaqi_B.bililiuliangfa18_1_a = 0.0;
        aaaqi_B.bililiuliangfa18_2_d = 0.0;
        aaaqi_B.bililiuliangfa18_3_p = 0.0;
        aaaqi_B.bililiuliangfa18_4_c = 0.0;
      } else if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_m + 0.005) &&
                 (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_m + 0.005)) {
        /* Transition: '<S37>:1231' */
        aaaqi_DW.is_SXQjunya = aaaqi_IN_jiance1_36;
        aaaqi_DW.temporalCounter_i1_c = 0U;

        /* Entry 'jiance1_36': '<S37>:1251' */
        aaaqi_B.bililiuliangfa18_1_a = 0.0;
        aaaqi_B.bililiuliangfa18_2_d = 1.0;
      } else if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_m + 0.005) &&
                 (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_m + 0.005)) {
        /* Transition: '<S37>:1233' */
        aaaqi_DW.is_SXQjunya = aaaqi_IN_jiance1_32;
        aaaqi_DW.temporalCounter_i1_c = 0U;

        /* Entry 'jiance1_32': '<S37>:1250' */
        aaaqi_B.bililiuliangfa18_1_a = 1.0;
        aaaqi_B.bililiuliangfa18_2_d = 1.0;
      } else if ((aaaqi_DW.temporalCounter_i1_c >= 250) &&
                 ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_m + 0.005) &&
                  (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_m + 0.005))) {
        /* Transition: '<S37>:1223' */
        aaaqi_DW.is_SXQjunya = aaaqi_IN_off3_pi;
        aaaqi_DW.temporalCounter_i1_c = 0U;

        /* Entry 'off3': '<S37>:1247' */
        aaaqi_B.bililiuliangfa18_1_a = 0.0;
        aaaqi_B.bililiuliangfa18_2_d = 0.0;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.u_m) &&
          (aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_m + 0.005) &&
          (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.u_m) &&
          (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_m + 0.005)) {
        /* Transition: '<S37>:1235' */
        aaaqi_DW.is_SXQjunya = aaaqi_IN_off6_i;
        aaaqi_DW.temporalCounter_i1_c = 0U;

        /* Entry 'off6': '<S37>:1252' */
        aaaqi_B.diancifa11_1_l = 0.0;
        aaaqi_B.diancifa11_5_d = 0.0;
        aaaqi_B.SXQjunyawancheng = 1.0;
      }
    }
  }
}

/* Function for Chart: '<S26>/Chart' */
static void aaaqi_off3_g(void)
{
  boolean_T guard1 = false;

  /* During 'off3': '<S37>:1247' */
  guard1 = false;
  if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_m + 0.005) ||
      (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_m + 0.005)) {
    /* Transition: '<S37>:1225' */
    if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_m + 0.005) &&
        (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_m + 0.005)) {
      /* Transition: '<S37>:1226' */
      aaaqi_DW.is_SXQjunya = aaaqi_IN_jiance1_34;
      aaaqi_DW.temporalCounter_i1_c = 0U;

      /* Entry 'jiance1_34': '<S37>:1249' */
      aaaqi_B.bililiuliangfa18_1_a = 1.0;
      aaaqi_B.bililiuliangfa18_2_d = 0.0;
    } else if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.u_m) &&
               (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.u_m) &&
               (aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_m + 0.005) &&
               (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_m + 0.005)) {
      /* Transition: '<S37>:1227' */
      aaaqi_DW.is_SXQjunya = aaaqi_IN_off2_cf;
      aaaqi_DW.temporalCounter_i1_c = 0U;

      /* Entry 'off2': '<S37>:1248' */
      aaaqi_B.bililiuliangfa18_1_a = 0.0;
      aaaqi_B.bililiuliangfa18_2_d = 0.0;
      aaaqi_B.bililiuliangfa18_3_p = 0.0;
      aaaqi_B.bililiuliangfa18_4_c = 0.0;
    } else if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_m + 0.005) &&
               (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_m + 0.005)) {
      /* Transition: '<S37>:1231' */
      aaaqi_DW.is_SXQjunya = aaaqi_IN_jiance1_36;
      aaaqi_DW.temporalCounter_i1_c = 0U;

      /* Entry 'jiance1_36': '<S37>:1251' */
      aaaqi_B.bililiuliangfa18_1_a = 0.0;
      aaaqi_B.bililiuliangfa18_2_d = 1.0;
    } else if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_m + 0.005) &&
               (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_m + 0.005)) {
      /* Transition: '<S37>:1233' */
      aaaqi_DW.is_SXQjunya = aaaqi_IN_jiance1_32;
      aaaqi_DW.temporalCounter_i1_c = 0U;

      /* Entry 'jiance1_32': '<S37>:1250' */
      aaaqi_B.bililiuliangfa18_1_a = 1.0;
      aaaqi_B.bililiuliangfa18_2_d = 1.0;
    } else if ((aaaqi_DW.temporalCounter_i1_c >= 250) &&
               ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_m + 0.005) &&
                (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_m + 0.005))) {
      /* Transition: '<S37>:1223' */
      aaaqi_DW.is_SXQjunya = aaaqi_IN_off3_pi;
      aaaqi_DW.temporalCounter_i1_c = 0U;

      /* Entry 'off3': '<S37>:1247' */
      aaaqi_B.bililiuliangfa18_1_a = 0.0;
      aaaqi_B.bililiuliangfa18_2_d = 0.0;
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_m + 0.005) &&
        (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_m + 0.005)) {
      /* Transition: '<S37>:1220' */
      if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.u_m) &&
          (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.u_m)) {
        /* Transition: '<S37>:1203' */
        aaaqi_DW.is_SXQjunya = aaaqi_IN_jiaya7_1;
        aaaqi_DW.temporalCounter_i1_c = 0U;

        /* Entry 'jiaya7_1': '<S37>:1237' */
        aaaqi_B.bililiuliangfa18_3_p = 1.0;
        aaaqi_B.bililiuliangfa18_4_c = 1.0;
      } else if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.u_m) &&
                 (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.u_m)) {
        /* Transition: '<S37>:1209' */
        aaaqi_DW.is_SXQjunya = aaaqi_IN_jiaya7_2;
        aaaqi_DW.temporalCounter_i1_c = 0U;

        /* Entry 'jiaya7_2': '<S37>:1243' */
        aaaqi_B.bililiuliangfa18_3_p = 1.0;
        aaaqi_B.bililiuliangfa18_4_c = 0.0;
      } else if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.u_m) &&
                 (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.u_m)) {
        /* Transition: '<S37>:1207' */
        aaaqi_DW.is_SXQjunya = aaaqi_IN_jiaya7_3;
        aaaqi_DW.temporalCounter_i1_c = 0U;

        /* Entry 'jiaya7_3': '<S37>:1238' */
        aaaqi_B.bililiuliangfa18_3_p = 0.0;
        aaaqi_B.bililiuliangfa18_4_c = 1.0;
      } else {
        if ((aaaqi_DW.temporalCounter_i1_c >= 250) &&
            ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.u_m) &&
             (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.u_m))) {
          /* Transition: '<S37>:1222' */
          aaaqi_DW.is_SXQjunya = aaaqi_IN_off4_cw;
          aaaqi_DW.temporalCounter_i1_c = 0U;

          /* Entry 'off4': '<S37>:1246' */
          aaaqi_B.bililiuliangfa18_3_p = 0.0;
          aaaqi_B.bililiuliangfa18_4_c = 0.0;
        }
      }
    }
  }
}

/* Function for Chart: '<S26>/Chart' */
static void aaaqi_off4_o(void)
{
  /* During 'off4': '<S37>:1246' */
  /* Transition: '<S37>:1224' */
  if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_m + 0.005) &&
      (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_m + 0.005)) {
    /* Transition: '<S37>:1226' */
    aaaqi_DW.is_SXQjunya = aaaqi_IN_jiance1_34;
    aaaqi_DW.temporalCounter_i1_c = 0U;

    /* Entry 'jiance1_34': '<S37>:1249' */
    aaaqi_B.bililiuliangfa18_1_a = 1.0;
    aaaqi_B.bililiuliangfa18_2_d = 0.0;
  } else if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.u_m) &&
             (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.u_m) &&
             (aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_m + 0.005) &&
             (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_m + 0.005)) {
    /* Transition: '<S37>:1227' */
    aaaqi_DW.is_SXQjunya = aaaqi_IN_off2_cf;
    aaaqi_DW.temporalCounter_i1_c = 0U;

    /* Entry 'off2': '<S37>:1248' */
    aaaqi_B.bililiuliangfa18_1_a = 0.0;
    aaaqi_B.bililiuliangfa18_2_d = 0.0;
    aaaqi_B.bililiuliangfa18_3_p = 0.0;
    aaaqi_B.bililiuliangfa18_4_c = 0.0;
  } else if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_m + 0.005) &&
             (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_m + 0.005)) {
    /* Transition: '<S37>:1231' */
    aaaqi_DW.is_SXQjunya = aaaqi_IN_jiance1_36;
    aaaqi_DW.temporalCounter_i1_c = 0U;

    /* Entry 'jiance1_36': '<S37>:1251' */
    aaaqi_B.bililiuliangfa18_1_a = 0.0;
    aaaqi_B.bililiuliangfa18_2_d = 1.0;
  } else if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_m + 0.005) &&
             (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_m + 0.005)) {
    /* Transition: '<S37>:1233' */
    aaaqi_DW.is_SXQjunya = aaaqi_IN_jiance1_32;
    aaaqi_DW.temporalCounter_i1_c = 0U;

    /* Entry 'jiance1_32': '<S37>:1250' */
    aaaqi_B.bililiuliangfa18_1_a = 1.0;
    aaaqi_B.bililiuliangfa18_2_d = 1.0;
  } else if ((aaaqi_DW.temporalCounter_i1_c >= 250) &&
             ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_m + 0.005) &&
              (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_m + 0.005))) {
    /* Transition: '<S37>:1223' */
    aaaqi_DW.is_SXQjunya = aaaqi_IN_off3_pi;
    aaaqi_DW.temporalCounter_i1_c = 0U;

    /* Entry 'off3': '<S37>:1247' */
    aaaqi_B.bililiuliangfa18_1_a = 0.0;
    aaaqi_B.bililiuliangfa18_2_d = 0.0;
  } else {
    if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.u_m) ||
        (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.u_m)) {
      /* Transition: '<S37>:1219' */
      if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.u_m) &&
          (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.u_m)) {
        /* Transition: '<S37>:1203' */
        aaaqi_DW.is_SXQjunya = aaaqi_IN_jiaya7_1;
        aaaqi_DW.temporalCounter_i1_c = 0U;

        /* Entry 'jiaya7_1': '<S37>:1237' */
        aaaqi_B.bililiuliangfa18_3_p = 1.0;
        aaaqi_B.bililiuliangfa18_4_c = 1.0;
      } else if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.u_m) &&
                 (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.u_m)) {
        /* Transition: '<S37>:1209' */
        aaaqi_DW.is_SXQjunya = aaaqi_IN_jiaya7_2;
        aaaqi_DW.temporalCounter_i1_c = 0U;

        /* Entry 'jiaya7_2': '<S37>:1243' */
        aaaqi_B.bililiuliangfa18_3_p = 1.0;
        aaaqi_B.bililiuliangfa18_4_c = 0.0;
      } else if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.u_m) &&
                 (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.u_m)) {
        /* Transition: '<S37>:1207' */
        aaaqi_DW.is_SXQjunya = aaaqi_IN_jiaya7_3;
        aaaqi_DW.temporalCounter_i1_c = 0U;

        /* Entry 'jiaya7_3': '<S37>:1238' */
        aaaqi_B.bililiuliangfa18_3_p = 0.0;
        aaaqi_B.bililiuliangfa18_4_c = 1.0;
      } else {
        if ((aaaqi_DW.temporalCounter_i1_c >= 250) &&
            ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.u_m) &&
             (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.u_m))) {
          /* Transition: '<S37>:1222' */
          aaaqi_DW.is_SXQjunya = aaaqi_IN_off4_cw;
          aaaqi_DW.temporalCounter_i1_c = 0U;

          /* Entry 'off4': '<S37>:1246' */
          aaaqi_B.bililiuliangfa18_3_p = 0.0;
          aaaqi_B.bililiuliangfa18_4_c = 0.0;
        }
      }
    }
  }
}

/* Function for Chart: '<S26>/Chart' */
static void aaaqi_SXQjunya_l(void)
{
  /* During 'SXQjunya': '<S37>:1194' */
  switch (aaaqi_DW.is_SXQjunya) {
   case aaaqi_IN_jiance1_32:
    /* During 'jiance1_32': '<S37>:1250' */
    /* Transition: '<S37>:1230' */
    if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_m + 0.005) &&
        (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_m + 0.005)) {
      /* Transition: '<S37>:1226' */
      aaaqi_DW.is_SXQjunya = aaaqi_IN_jiance1_34;
      aaaqi_DW.temporalCounter_i1_c = 0U;

      /* Entry 'jiance1_34': '<S37>:1249' */
      aaaqi_B.bililiuliangfa18_1_a = 1.0;
      aaaqi_B.bililiuliangfa18_2_d = 0.0;
    } else if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.u_m) &&
               (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.u_m) &&
               (aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_m + 0.005) &&
               (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_m + 0.005)) {
      /* Transition: '<S37>:1227' */
      aaaqi_DW.is_SXQjunya = aaaqi_IN_off2_cf;
      aaaqi_DW.temporalCounter_i1_c = 0U;

      /* Entry 'off2': '<S37>:1248' */
      aaaqi_B.bililiuliangfa18_1_a = 0.0;
      aaaqi_B.bililiuliangfa18_2_d = 0.0;
      aaaqi_B.bililiuliangfa18_3_p = 0.0;
      aaaqi_B.bililiuliangfa18_4_c = 0.0;
    } else if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_m + 0.005) &&
               (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_m + 0.005)) {
      /* Transition: '<S37>:1231' */
      aaaqi_DW.is_SXQjunya = aaaqi_IN_jiance1_36;
      aaaqi_DW.temporalCounter_i1_c = 0U;

      /* Entry 'jiance1_36': '<S37>:1251' */
      aaaqi_B.bililiuliangfa18_1_a = 0.0;
      aaaqi_B.bililiuliangfa18_2_d = 1.0;
    } else if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_m + 0.005) &&
               (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_m + 0.005)) {
      /* Transition: '<S37>:1233' */
      aaaqi_DW.is_SXQjunya = aaaqi_IN_jiance1_32;
      aaaqi_DW.temporalCounter_i1_c = 0U;

      /* Entry 'jiance1_32': '<S37>:1250' */
      aaaqi_B.bililiuliangfa18_1_a = 1.0;
      aaaqi_B.bililiuliangfa18_2_d = 1.0;
    } else {
      if ((aaaqi_DW.temporalCounter_i1_c >= 250) &&
          ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_m + 0.005) &&
           (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_m + 0.005))) {
        /* Transition: '<S37>:1223' */
        aaaqi_DW.is_SXQjunya = aaaqi_IN_off3_pi;
        aaaqi_DW.temporalCounter_i1_c = 0U;

        /* Entry 'off3': '<S37>:1247' */
        aaaqi_B.bililiuliangfa18_1_a = 0.0;
        aaaqi_B.bililiuliangfa18_2_d = 0.0;
      }
    }
    break;

   case aaaqi_IN_jiance1_34:
    /* During 'jiance1_34': '<S37>:1249' */
    /* Transition: '<S37>:1228' */
    if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_m + 0.005) &&
        (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_m + 0.005)) {
      /* Transition: '<S37>:1226' */
      aaaqi_DW.is_SXQjunya = aaaqi_IN_jiance1_34;
      aaaqi_DW.temporalCounter_i1_c = 0U;

      /* Entry 'jiance1_34': '<S37>:1249' */
      aaaqi_B.bililiuliangfa18_1_a = 1.0;
      aaaqi_B.bililiuliangfa18_2_d = 0.0;
    } else if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.u_m) &&
               (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.u_m) &&
               (aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_m + 0.005) &&
               (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_m + 0.005)) {
      /* Transition: '<S37>:1227' */
      aaaqi_DW.is_SXQjunya = aaaqi_IN_off2_cf;
      aaaqi_DW.temporalCounter_i1_c = 0U;

      /* Entry 'off2': '<S37>:1248' */
      aaaqi_B.bililiuliangfa18_1_a = 0.0;
      aaaqi_B.bililiuliangfa18_2_d = 0.0;
      aaaqi_B.bililiuliangfa18_3_p = 0.0;
      aaaqi_B.bililiuliangfa18_4_c = 0.0;
    } else if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_m + 0.005) &&
               (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_m + 0.005)) {
      /* Transition: '<S37>:1231' */
      aaaqi_DW.is_SXQjunya = aaaqi_IN_jiance1_36;
      aaaqi_DW.temporalCounter_i1_c = 0U;

      /* Entry 'jiance1_36': '<S37>:1251' */
      aaaqi_B.bililiuliangfa18_1_a = 0.0;
      aaaqi_B.bililiuliangfa18_2_d = 1.0;
    } else if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_m + 0.005) &&
               (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_m + 0.005)) {
      /* Transition: '<S37>:1233' */
      aaaqi_DW.is_SXQjunya = aaaqi_IN_jiance1_32;
      aaaqi_DW.temporalCounter_i1_c = 0U;

      /* Entry 'jiance1_32': '<S37>:1250' */
      aaaqi_B.bililiuliangfa18_1_a = 1.0;
      aaaqi_B.bililiuliangfa18_2_d = 1.0;
    } else {
      if ((aaaqi_DW.temporalCounter_i1_c >= 250) &&
          ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_m + 0.005) &&
           (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_m + 0.005))) {
        /* Transition: '<S37>:1223' */
        aaaqi_DW.is_SXQjunya = aaaqi_IN_off3_pi;
        aaaqi_DW.temporalCounter_i1_c = 0U;

        /* Entry 'off3': '<S37>:1247' */
        aaaqi_B.bililiuliangfa18_1_a = 0.0;
        aaaqi_B.bililiuliangfa18_2_d = 0.0;
      }
    }
    break;

   case aaaqi_IN_jiance1_36:
    /* During 'jiance1_36': '<S37>:1251' */
    /* Transition: '<S37>:1232' */
    if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_m + 0.005) &&
        (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_m + 0.005)) {
      /* Transition: '<S37>:1226' */
      aaaqi_DW.is_SXQjunya = aaaqi_IN_jiance1_34;
      aaaqi_DW.temporalCounter_i1_c = 0U;

      /* Entry 'jiance1_34': '<S37>:1249' */
      aaaqi_B.bililiuliangfa18_1_a = 1.0;
      aaaqi_B.bililiuliangfa18_2_d = 0.0;
    } else if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.u_m) &&
               (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.u_m) &&
               (aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_m + 0.005) &&
               (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_m + 0.005)) {
      /* Transition: '<S37>:1227' */
      aaaqi_DW.is_SXQjunya = aaaqi_IN_off2_cf;
      aaaqi_DW.temporalCounter_i1_c = 0U;

      /* Entry 'off2': '<S37>:1248' */
      aaaqi_B.bililiuliangfa18_1_a = 0.0;
      aaaqi_B.bililiuliangfa18_2_d = 0.0;
      aaaqi_B.bililiuliangfa18_3_p = 0.0;
      aaaqi_B.bililiuliangfa18_4_c = 0.0;
    } else if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_m + 0.005) &&
               (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_m + 0.005)) {
      /* Transition: '<S37>:1231' */
      aaaqi_DW.is_SXQjunya = aaaqi_IN_jiance1_36;
      aaaqi_DW.temporalCounter_i1_c = 0U;

      /* Entry 'jiance1_36': '<S37>:1251' */
      aaaqi_B.bililiuliangfa18_1_a = 0.0;
      aaaqi_B.bililiuliangfa18_2_d = 1.0;
    } else if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_m + 0.005) &&
               (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_m + 0.005)) {
      /* Transition: '<S37>:1233' */
      aaaqi_DW.is_SXQjunya = aaaqi_IN_jiance1_32;
      aaaqi_DW.temporalCounter_i1_c = 0U;

      /* Entry 'jiance1_32': '<S37>:1250' */
      aaaqi_B.bililiuliangfa18_1_a = 1.0;
      aaaqi_B.bililiuliangfa18_2_d = 1.0;
    } else {
      if ((aaaqi_DW.temporalCounter_i1_c >= 250) &&
          ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_m + 0.005) &&
           (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_m + 0.005))) {
        /* Transition: '<S37>:1223' */
        aaaqi_DW.is_SXQjunya = aaaqi_IN_off3_pi;
        aaaqi_DW.temporalCounter_i1_c = 0U;

        /* Entry 'off3': '<S37>:1247' */
        aaaqi_B.bililiuliangfa18_1_a = 0.0;
        aaaqi_B.bililiuliangfa18_2_d = 0.0;
      }
    }
    break;

   case aaaqi_IN_jiaya1:
    /* During 'jiaya1': '<S37>:1241' */
    /* Transition: '<S37>:1210' */
    if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_DW.p0_1) &&
        (aaaqi_B.DataTypeConversion27[4] < aaaqi_DW.p0_1)) {
      /* Transition: '<S37>:1205' */
      aaaqi_DW.is_SXQjunya = aaaqi_IN_jiaya1_1;

      /* Entry 'jiaya1_1': '<S37>:1236' */
      aaaqi_B.bililiuliangfa18_3_p = 1.0;
      aaaqi_B.bililiuliangfa18_4_c = 1.0;
    } else if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_DW.p0_1) &&
               (aaaqi_B.DataTypeConversion27[4] < aaaqi_DW.p0_1)) {
      /* Transition: '<S37>:1218' */
      aaaqi_DW.is_SXQjunya = aaaqi_IN_jiaya1_2;

      /* Entry 'jiaya1_2': '<S37>:1244' */
      aaaqi_B.bililiuliangfa18_3_p = 1.0;
      aaaqi_B.bililiuliangfa18_4_c = 0.0;
    } else if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_DW.p0_1) &&
               (aaaqi_B.DataTypeConversion27[4] >= aaaqi_DW.p0_1)) {
      /* Transition: '<S37>:1213' */
      aaaqi_DW.is_SXQjunya = aaaqi_IN_jiaya1_3;

      /* Entry 'jiaya1_3': '<S37>:1245' */
      aaaqi_B.bililiuliangfa18_3_p = 0.0;
      aaaqi_B.bililiuliangfa18_4_c = 1.0;
    } else {
      if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_DW.p0_1) &&
          (aaaqi_B.DataTypeConversion27[4] >= aaaqi_DW.p0_1)) {
        /* Transition: '<S37>:1202' */
        aaaqi_DW.is_SXQjunya = aaaqi_IN_jiaya2;
        aaaqi_DW.temporalCounter_i1_c = 0U;

        /* Entry 'jiaya2': '<S37>:1239' */
        aaaqi_B.bililiuliangfa18_3_p = 1.0;
        aaaqi_B.bililiuliangfa18_4_c = 1.0;
        aaaqi_DW.p0_1 += 0.03;
      }
    }
    break;

   case aaaqi_IN_jiaya1_1:
    /* During 'jiaya1_1': '<S37>:1236' */
    /* Transition: '<S37>:1200' */
    if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_DW.p0_1) &&
        (aaaqi_B.DataTypeConversion27[4] < aaaqi_DW.p0_1)) {
      /* Transition: '<S37>:1205' */
      aaaqi_DW.is_SXQjunya = aaaqi_IN_jiaya1_1;

      /* Entry 'jiaya1_1': '<S37>:1236' */
      aaaqi_B.bililiuliangfa18_3_p = 1.0;
      aaaqi_B.bililiuliangfa18_4_c = 1.0;
    } else if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_DW.p0_1) &&
               (aaaqi_B.DataTypeConversion27[4] < aaaqi_DW.p0_1)) {
      /* Transition: '<S37>:1218' */
      aaaqi_DW.is_SXQjunya = aaaqi_IN_jiaya1_2;

      /* Entry 'jiaya1_2': '<S37>:1244' */
      aaaqi_B.bililiuliangfa18_3_p = 1.0;
      aaaqi_B.bililiuliangfa18_4_c = 0.0;
    } else if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_DW.p0_1) &&
               (aaaqi_B.DataTypeConversion27[4] >= aaaqi_DW.p0_1)) {
      /* Transition: '<S37>:1213' */
      aaaqi_DW.is_SXQjunya = aaaqi_IN_jiaya1_3;

      /* Entry 'jiaya1_3': '<S37>:1245' */
      aaaqi_B.bililiuliangfa18_3_p = 0.0;
      aaaqi_B.bililiuliangfa18_4_c = 1.0;
    } else {
      if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_DW.p0_1) &&
          (aaaqi_B.DataTypeConversion27[4] >= aaaqi_DW.p0_1)) {
        /* Transition: '<S37>:1202' */
        aaaqi_DW.is_SXQjunya = aaaqi_IN_jiaya2;
        aaaqi_DW.temporalCounter_i1_c = 0U;

        /* Entry 'jiaya2': '<S37>:1239' */
        aaaqi_B.bililiuliangfa18_3_p = 1.0;
        aaaqi_B.bililiuliangfa18_4_c = 1.0;
        aaaqi_DW.p0_1 += 0.03;
      }
    }
    break;

   case aaaqi_IN_jiaya1_2:
    /* During 'jiaya1_2': '<S37>:1244' */
    /* Transition: '<S37>:1221' */
    if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_DW.p0_1) &&
        (aaaqi_B.DataTypeConversion27[4] < aaaqi_DW.p0_1)) {
      /* Transition: '<S37>:1205' */
      aaaqi_DW.is_SXQjunya = aaaqi_IN_jiaya1_1;

      /* Entry 'jiaya1_1': '<S37>:1236' */
      aaaqi_B.bililiuliangfa18_3_p = 1.0;
      aaaqi_B.bililiuliangfa18_4_c = 1.0;
    } else if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_DW.p0_1) &&
               (aaaqi_B.DataTypeConversion27[4] < aaaqi_DW.p0_1)) {
      /* Transition: '<S37>:1218' */
      aaaqi_DW.is_SXQjunya = aaaqi_IN_jiaya1_2;

      /* Entry 'jiaya1_2': '<S37>:1244' */
      aaaqi_B.bililiuliangfa18_3_p = 1.0;
      aaaqi_B.bililiuliangfa18_4_c = 0.0;
    } else if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_DW.p0_1) &&
               (aaaqi_B.DataTypeConversion27[4] >= aaaqi_DW.p0_1)) {
      /* Transition: '<S37>:1213' */
      aaaqi_DW.is_SXQjunya = aaaqi_IN_jiaya1_3;

      /* Entry 'jiaya1_3': '<S37>:1245' */
      aaaqi_B.bililiuliangfa18_3_p = 0.0;
      aaaqi_B.bililiuliangfa18_4_c = 1.0;
    } else {
      if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_DW.p0_1) &&
          (aaaqi_B.DataTypeConversion27[4] >= aaaqi_DW.p0_1)) {
        /* Transition: '<S37>:1202' */
        aaaqi_DW.is_SXQjunya = aaaqi_IN_jiaya2;
        aaaqi_DW.temporalCounter_i1_c = 0U;

        /* Entry 'jiaya2': '<S37>:1239' */
        aaaqi_B.bililiuliangfa18_3_p = 1.0;
        aaaqi_B.bililiuliangfa18_4_c = 1.0;
        aaaqi_DW.p0_1 += 0.03;
      }
    }
    break;

   case aaaqi_IN_jiaya1_3:
    /* During 'jiaya1_3': '<S37>:1245' */
    /* Transition: '<S37>:1217' */
    if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_DW.p0_1) &&
        (aaaqi_B.DataTypeConversion27[4] < aaaqi_DW.p0_1)) {
      /* Transition: '<S37>:1205' */
      aaaqi_DW.is_SXQjunya = aaaqi_IN_jiaya1_1;

      /* Entry 'jiaya1_1': '<S37>:1236' */
      aaaqi_B.bililiuliangfa18_3_p = 1.0;
      aaaqi_B.bililiuliangfa18_4_c = 1.0;
    } else if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_DW.p0_1) &&
               (aaaqi_B.DataTypeConversion27[4] < aaaqi_DW.p0_1)) {
      /* Transition: '<S37>:1218' */
      aaaqi_DW.is_SXQjunya = aaaqi_IN_jiaya1_2;

      /* Entry 'jiaya1_2': '<S37>:1244' */
      aaaqi_B.bililiuliangfa18_3_p = 1.0;
      aaaqi_B.bililiuliangfa18_4_c = 0.0;
    } else if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_DW.p0_1) &&
               (aaaqi_B.DataTypeConversion27[4] >= aaaqi_DW.p0_1)) {
      /* Transition: '<S37>:1213' */
      aaaqi_DW.is_SXQjunya = aaaqi_IN_jiaya1_3;

      /* Entry 'jiaya1_3': '<S37>:1245' */
      aaaqi_B.bililiuliangfa18_3_p = 0.0;
      aaaqi_B.bililiuliangfa18_4_c = 1.0;
    } else {
      if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_DW.p0_1) &&
          (aaaqi_B.DataTypeConversion27[4] >= aaaqi_DW.p0_1)) {
        /* Transition: '<S37>:1202' */
        aaaqi_DW.is_SXQjunya = aaaqi_IN_jiaya2;
        aaaqi_DW.temporalCounter_i1_c = 0U;

        /* Entry 'jiaya2': '<S37>:1239' */
        aaaqi_B.bililiuliangfa18_3_p = 1.0;
        aaaqi_B.bililiuliangfa18_4_c = 1.0;
        aaaqi_DW.p0_1 += 0.03;
      }
    }
    break;

   case aaaqi_IN_jiaya2:
    aaaqi_jiaya2_j();
    break;

   case aaaqi_IN_jiaya7_1:
    /* During 'jiaya7_1': '<S37>:1237' */
    /* Transition: '<S37>:1206' */
    if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.u_m) &&
        (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.u_m)) {
      /* Transition: '<S37>:1203' */
      aaaqi_DW.is_SXQjunya = aaaqi_IN_jiaya7_1;
      aaaqi_DW.temporalCounter_i1_c = 0U;

      /* Entry 'jiaya7_1': '<S37>:1237' */
      aaaqi_B.bililiuliangfa18_3_p = 1.0;
      aaaqi_B.bililiuliangfa18_4_c = 1.0;
    } else if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.u_m) &&
               (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.u_m)) {
      /* Transition: '<S37>:1209' */
      aaaqi_DW.is_SXQjunya = aaaqi_IN_jiaya7_2;
      aaaqi_DW.temporalCounter_i1_c = 0U;

      /* Entry 'jiaya7_2': '<S37>:1243' */
      aaaqi_B.bililiuliangfa18_3_p = 1.0;
      aaaqi_B.bililiuliangfa18_4_c = 0.0;
    } else if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.u_m) &&
               (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.u_m)) {
      /* Transition: '<S37>:1207' */
      aaaqi_DW.is_SXQjunya = aaaqi_IN_jiaya7_3;
      aaaqi_DW.temporalCounter_i1_c = 0U;

      /* Entry 'jiaya7_3': '<S37>:1238' */
      aaaqi_B.bililiuliangfa18_3_p = 0.0;
      aaaqi_B.bililiuliangfa18_4_c = 1.0;
    } else {
      if ((aaaqi_DW.temporalCounter_i1_c >= 250) &&
          ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.u_m) &&
           (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.u_m))) {
        /* Transition: '<S37>:1222' */
        aaaqi_DW.is_SXQjunya = aaaqi_IN_off4_cw;
        aaaqi_DW.temporalCounter_i1_c = 0U;

        /* Entry 'off4': '<S37>:1246' */
        aaaqi_B.bililiuliangfa18_3_p = 0.0;
        aaaqi_B.bililiuliangfa18_4_c = 0.0;
      }
    }
    break;

   case aaaqi_IN_jiaya7_2:
    aaaqi_jiaya7_2_o();
    break;

   case aaaqi_IN_jiaya7_3:
    aaaqi_jiaya7_3_j();
    break;

   case aaaqi_IN_off1_l:
    /* During 'off1': '<S37>:1240' */
    /* Transition: '<S37>:1216' */
    aaaqi_DW.is_SXQjunya = aaaqi_IN_on1_o5w1;
    aaaqi_DW.temporalCounter_i1_c = 0U;

    /* Entry 'on1': '<S37>:1242' */
    aaaqi_B.diancifa11_1_l = 1.0;
    aaaqi_B.diancifa11_5_d = 1.0;
    break;

   case aaaqi_IN_off2_cf:
    aaaqi_off2_n();
    break;

   case aaaqi_IN_off3_pi:
    aaaqi_off3_g();
    break;

   case aaaqi_IN_off4_cw:
    aaaqi_off4_o();
    break;

   case aaaqi_IN_off6_i:
    /* During 'off6': '<S37>:1252' */
    if (aaaqi_DW.temporalCounter_i1_c >= 1000) {
      /* Transition: '<S37>:1187' */
      aaaqi_DW.is_SXQjunya = aaaqi_IN_NO_ACTIVE_CHILD_o;
      aaaqi_DW.is_zidong = aaaqi_IN_kaiguangai;

      /* Entry Internal 'kaiguangai': '<S37>:939' */
      /* Transition: '<S37>:1188' */
      aaaqi_DW.is_kaiguangai = aaaqi_IN_start_i5;

      /* Entry 'start': '<S37>:953' */
      aaaqi_B.xuansong_n = 0.0;
      aaaqi_B.xuanjin_b = 0.0;
      aaaqi_B.suoding_a = 0.0;
      aaaqi_B.jiesuo_j = 0.0;
      aaaqi_B.kaigaikaishi = 0.0;
      aaaqi_B.guangaikaishi = 0.0;
      aaaqi_B.diancifa20_n = 0.0;
    }
    break;

   default:
    /* During 'on1': '<S37>:1242' */
    if (aaaqi_DW.temporalCounter_i1_c >= 500) {
      /* Transition: '<S37>:1215' */
      aaaqi_DW.is_SXQjunya = aaaqi_IN_jiaya1;

      /* Entry 'jiaya1': '<S37>:1241' */
      aaaqi_B.bililiuliangfa18_3_p = 1.0;
      aaaqi_B.bililiuliangfa18_4_c = 1.0;
      aaaqi_DW.p0_1 = aaaqi_B.u_c;
    }
    break;
  }
}

/* Function for Chart: '<S26>/Chart' */
static void aaaqi_SXQxieya_e(void)
{
  boolean_T guard1 = false;

  /* During 'SXQxieya': '<S37>:1106' */
  guard1 = false;
  switch (aaaqi_DW.is_SXQxieya) {
   case aaaqi_IN_off1:
    /* During 'off1': '<S37>:1135' */
    /* Transition: '<S37>:1112' */
    aaaqi_DW.is_SXQxieya = aaaqi_IN_on1_o5;
    aaaqi_DW.temporalCounter_i1_c = 0U;

    /* Entry 'on1': '<S37>:1136' */
    aaaqi_B.diancifa11_5_d = 1.0;
    break;

   case aaaqi_IN_off2_c:
    /* During 'off2': '<S37>:1145' */
    break;

   case aaaqi_IN_on1_o5:
    /* During 'on1': '<S37>:1136' */
    if (aaaqi_DW.temporalCounter_i1_c >= 20) {
      /* Transition: '<S37>:1113' */
      aaaqi_DW.is_SXQxieya = aaaqi_IN_xieya1;

      /* Entry 'xieya1': '<S37>:1137' */
      aaaqi_B.bililiuliangfa18_1_a = 1.0;
      aaaqi_B.bililiuliangfa18_2_d = 1.0;
      aaaqi_DW.p0_2 = aaaqi_B.u_m;
    }
    break;

   case aaaqi_IN_xieya1:
    /* During 'xieya1': '<S37>:1137' */
    /* Transition: '<S37>:1114' */
    if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_DW.p0_2) &&
        (aaaqi_B.DataTypeConversion27[4] > aaaqi_DW.p0_2)) {
      /* Transition: '<S37>:1116' */
      aaaqi_DW.is_SXQxieya = aaaqi_IN_xieya1_1;

      /* Entry 'xieya1_1': '<S37>:1139' */
      aaaqi_B.bililiuliangfa18_1_a = 1.0;
      aaaqi_B.bililiuliangfa18_2_d = 1.0;
    } else if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_DW.p0_2) &&
               (aaaqi_B.DataTypeConversion27[4] > aaaqi_DW.p0_2)) {
      /* Transition: '<S37>:1115' */
      aaaqi_DW.is_SXQxieya = aaaqi_IN_xieya1_2;

      /* Entry 'xieya1_2': '<S37>:1138' */
      aaaqi_B.bililiuliangfa18_1_a = 1.0;
      aaaqi_B.bililiuliangfa18_2_d = 0.0;
    } else if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_DW.p0_2) &&
               (aaaqi_B.DataTypeConversion27[4] <= aaaqi_DW.p0_2)) {
      /* Transition: '<S37>:1120' */
      aaaqi_DW.is_SXQxieya = aaaqi_IN_xieya1_3;

      /* Entry 'xieya1_3': '<S37>:1140' */
      aaaqi_B.bililiuliangfa18_1_a = 0.0;
      aaaqi_B.bililiuliangfa18_2_d = 1.0;
    } else {
      if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_DW.p0_2) &&
          (aaaqi_B.DataTypeConversion27[4] <= aaaqi_DW.p0_2)) {
        /* Transition: '<S37>:1121' */
        aaaqi_DW.is_SXQxieya = aaaqi_IN_xieya2;

        /* Entry 'xieya2': '<S37>:1141' */
        aaaqi_B.bililiuliangfa18_1_a = 1.0;
        aaaqi_B.bililiuliangfa18_2_d = 1.0;
        aaaqi_DW.p0_2 -= 0.03;
      }
    }
    break;

   case aaaqi_IN_xieya1_1:
    /* During 'xieya1_1': '<S37>:1139' */
    /* Transition: '<S37>:1119' */
    if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_DW.p0_2) &&
        (aaaqi_B.DataTypeConversion27[4] > aaaqi_DW.p0_2)) {
      /* Transition: '<S37>:1116' */
      aaaqi_DW.is_SXQxieya = aaaqi_IN_xieya1_1;

      /* Entry 'xieya1_1': '<S37>:1139' */
      aaaqi_B.bililiuliangfa18_1_a = 1.0;
      aaaqi_B.bililiuliangfa18_2_d = 1.0;
    } else if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_DW.p0_2) &&
               (aaaqi_B.DataTypeConversion27[4] > aaaqi_DW.p0_2)) {
      /* Transition: '<S37>:1115' */
      aaaqi_DW.is_SXQxieya = aaaqi_IN_xieya1_2;

      /* Entry 'xieya1_2': '<S37>:1138' */
      aaaqi_B.bililiuliangfa18_1_a = 1.0;
      aaaqi_B.bililiuliangfa18_2_d = 0.0;
    } else if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_DW.p0_2) &&
               (aaaqi_B.DataTypeConversion27[4] <= aaaqi_DW.p0_2)) {
      /* Transition: '<S37>:1120' */
      aaaqi_DW.is_SXQxieya = aaaqi_IN_xieya1_3;

      /* Entry 'xieya1_3': '<S37>:1140' */
      aaaqi_B.bililiuliangfa18_1_a = 0.0;
      aaaqi_B.bililiuliangfa18_2_d = 1.0;
    } else {
      if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_DW.p0_2) &&
          (aaaqi_B.DataTypeConversion27[4] <= aaaqi_DW.p0_2)) {
        /* Transition: '<S37>:1121' */
        aaaqi_DW.is_SXQxieya = aaaqi_IN_xieya2;

        /* Entry 'xieya2': '<S37>:1141' */
        aaaqi_B.bililiuliangfa18_1_a = 1.0;
        aaaqi_B.bililiuliangfa18_2_d = 1.0;
        aaaqi_DW.p0_2 -= 0.03;
      }
    }
    break;

   case aaaqi_IN_xieya1_2:
    /* During 'xieya1_2': '<S37>:1138' */
    /* Transition: '<S37>:1117' */
    if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_DW.p0_2) &&
        (aaaqi_B.DataTypeConversion27[4] > aaaqi_DW.p0_2)) {
      /* Transition: '<S37>:1116' */
      aaaqi_DW.is_SXQxieya = aaaqi_IN_xieya1_1;

      /* Entry 'xieya1_1': '<S37>:1139' */
      aaaqi_B.bililiuliangfa18_1_a = 1.0;
      aaaqi_B.bililiuliangfa18_2_d = 1.0;
    } else if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_DW.p0_2) &&
               (aaaqi_B.DataTypeConversion27[4] > aaaqi_DW.p0_2)) {
      /* Transition: '<S37>:1115' */
      aaaqi_DW.is_SXQxieya = aaaqi_IN_xieya1_2;

      /* Entry 'xieya1_2': '<S37>:1138' */
      aaaqi_B.bililiuliangfa18_1_a = 1.0;
      aaaqi_B.bililiuliangfa18_2_d = 0.0;
    } else if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_DW.p0_2) &&
               (aaaqi_B.DataTypeConversion27[4] <= aaaqi_DW.p0_2)) {
      /* Transition: '<S37>:1120' */
      aaaqi_DW.is_SXQxieya = aaaqi_IN_xieya1_3;

      /* Entry 'xieya1_3': '<S37>:1140' */
      aaaqi_B.bililiuliangfa18_1_a = 0.0;
      aaaqi_B.bililiuliangfa18_2_d = 1.0;
    } else {
      if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_DW.p0_2) &&
          (aaaqi_B.DataTypeConversion27[4] <= aaaqi_DW.p0_2)) {
        /* Transition: '<S37>:1121' */
        aaaqi_DW.is_SXQxieya = aaaqi_IN_xieya2;

        /* Entry 'xieya2': '<S37>:1141' */
        aaaqi_B.bililiuliangfa18_1_a = 1.0;
        aaaqi_B.bililiuliangfa18_2_d = 1.0;
        aaaqi_DW.p0_2 -= 0.03;
      }
    }
    break;

   case aaaqi_IN_xieya1_3:
    /* During 'xieya1_3': '<S37>:1140' */
    /* Transition: '<S37>:1118' */
    if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_DW.p0_2) &&
        (aaaqi_B.DataTypeConversion27[4] > aaaqi_DW.p0_2)) {
      /* Transition: '<S37>:1116' */
      aaaqi_DW.is_SXQxieya = aaaqi_IN_xieya1_1;

      /* Entry 'xieya1_1': '<S37>:1139' */
      aaaqi_B.bililiuliangfa18_1_a = 1.0;
      aaaqi_B.bililiuliangfa18_2_d = 1.0;
    } else if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_DW.p0_2) &&
               (aaaqi_B.DataTypeConversion27[4] > aaaqi_DW.p0_2)) {
      /* Transition: '<S37>:1115' */
      aaaqi_DW.is_SXQxieya = aaaqi_IN_xieya1_2;

      /* Entry 'xieya1_2': '<S37>:1138' */
      aaaqi_B.bililiuliangfa18_1_a = 1.0;
      aaaqi_B.bililiuliangfa18_2_d = 0.0;
    } else if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_DW.p0_2) &&
               (aaaqi_B.DataTypeConversion27[4] <= aaaqi_DW.p0_2)) {
      /* Transition: '<S37>:1120' */
      aaaqi_DW.is_SXQxieya = aaaqi_IN_xieya1_3;

      /* Entry 'xieya1_3': '<S37>:1140' */
      aaaqi_B.bililiuliangfa18_1_a = 0.0;
      aaaqi_B.bililiuliangfa18_2_d = 1.0;
    } else {
      if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_DW.p0_2) &&
          (aaaqi_B.DataTypeConversion27[4] <= aaaqi_DW.p0_2)) {
        /* Transition: '<S37>:1121' */
        aaaqi_DW.is_SXQxieya = aaaqi_IN_xieya2;

        /* Entry 'xieya2': '<S37>:1141' */
        aaaqi_B.bililiuliangfa18_1_a = 1.0;
        aaaqi_B.bililiuliangfa18_2_d = 1.0;
        aaaqi_DW.p0_2 -= 0.03;
      }
    }
    break;

   case aaaqi_IN_xieya2:
    /* During 'xieya2': '<S37>:1141' */
    /* Transition: '<S37>:1123' */
    if (aaaqi_DW.p0_2 <= aaaqi_B.u_c) {
      /* Transition: '<S37>:1124' */
      if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_c) &&
          (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_c)) {
        /* Transition: '<S37>:1127' */
        aaaqi_DW.is_SXQxieya = aaaqi_IN_xieya7_1;

        /* Entry 'xieya7_1': '<S37>:1143' */
        aaaqi_B.bililiuliangfa18_1_a = 1.0;
        aaaqi_B.bililiuliangfa18_2_d = 1.0;
      } else if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_c) &&
                 (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_c)) {
        /* Transition: '<S37>:1125' */
        aaaqi_DW.is_SXQxieya = aaaqi_IN_xieya7_2;

        /* Entry 'xieya7_2': '<S37>:1142' */
        aaaqi_B.bililiuliangfa18_1_a = 1.0;
        aaaqi_B.bililiuliangfa18_2_d = 0.0;
      } else if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_c) &&
                 (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_c)) {
        /* Transition: '<S37>:1129' */
        aaaqi_DW.is_SXQxieya = aaaqi_IN_xieya7_3;

        /* Entry 'xieya7_3': '<S37>:1144' */
        aaaqi_B.bililiuliangfa18_1_a = 0.0;
        aaaqi_B.bililiuliangfa18_2_d = 1.0;
      } else if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_c) &&
                 (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_c)) {
        /* Transition: '<S37>:1131' */
        aaaqi_DW.is_SXQxieya = aaaqi_IN_xieya8;
        aaaqi_DW.temporalCounter_i1_c = 0U;

        /* Entry 'xieya8': '<S37>:1146' */
        aaaqi_B.bililiuliangfa18_1_a = 1.0;
        aaaqi_B.bililiuliangfa18_2_d = 1.0;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }
    break;

   case aaaqi_IN_xieya7_1:
    /* During 'xieya7_1': '<S37>:1143' */
    /* Transition: '<S37>:1130' */
    if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_c) &&
        (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_c)) {
      /* Transition: '<S37>:1127' */
      aaaqi_DW.is_SXQxieya = aaaqi_IN_xieya7_1;

      /* Entry 'xieya7_1': '<S37>:1143' */
      aaaqi_B.bililiuliangfa18_1_a = 1.0;
      aaaqi_B.bililiuliangfa18_2_d = 1.0;
    } else if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_c) &&
               (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_c)) {
      /* Transition: '<S37>:1125' */
      aaaqi_DW.is_SXQxieya = aaaqi_IN_xieya7_2;

      /* Entry 'xieya7_2': '<S37>:1142' */
      aaaqi_B.bililiuliangfa18_1_a = 1.0;
      aaaqi_B.bililiuliangfa18_2_d = 0.0;
    } else if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_c) &&
               (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_c)) {
      /* Transition: '<S37>:1129' */
      aaaqi_DW.is_SXQxieya = aaaqi_IN_xieya7_3;

      /* Entry 'xieya7_3': '<S37>:1144' */
      aaaqi_B.bililiuliangfa18_1_a = 0.0;
      aaaqi_B.bililiuliangfa18_2_d = 1.0;
    } else {
      if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_c) &&
          (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_c)) {
        /* Transition: '<S37>:1131' */
        aaaqi_DW.is_SXQxieya = aaaqi_IN_xieya8;
        aaaqi_DW.temporalCounter_i1_c = 0U;

        /* Entry 'xieya8': '<S37>:1146' */
        aaaqi_B.bililiuliangfa18_1_a = 1.0;
        aaaqi_B.bililiuliangfa18_2_d = 1.0;
      }
    }
    break;

   case aaaqi_IN_xieya7_2:
    /* During 'xieya7_2': '<S37>:1142' */
    /* Transition: '<S37>:1126' */
    if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_c) &&
        (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_c)) {
      /* Transition: '<S37>:1127' */
      aaaqi_DW.is_SXQxieya = aaaqi_IN_xieya7_1;

      /* Entry 'xieya7_1': '<S37>:1143' */
      aaaqi_B.bililiuliangfa18_1_a = 1.0;
      aaaqi_B.bililiuliangfa18_2_d = 1.0;
    } else if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_c) &&
               (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_c)) {
      /* Transition: '<S37>:1125' */
      aaaqi_DW.is_SXQxieya = aaaqi_IN_xieya7_2;

      /* Entry 'xieya7_2': '<S37>:1142' */
      aaaqi_B.bililiuliangfa18_1_a = 1.0;
      aaaqi_B.bililiuliangfa18_2_d = 0.0;
    } else if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_c) &&
               (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_c)) {
      /* Transition: '<S37>:1129' */
      aaaqi_DW.is_SXQxieya = aaaqi_IN_xieya7_3;

      /* Entry 'xieya7_3': '<S37>:1144' */
      aaaqi_B.bililiuliangfa18_1_a = 0.0;
      aaaqi_B.bililiuliangfa18_2_d = 1.0;
    } else {
      if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_c) &&
          (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_c)) {
        /* Transition: '<S37>:1131' */
        aaaqi_DW.is_SXQxieya = aaaqi_IN_xieya8;
        aaaqi_DW.temporalCounter_i1_c = 0U;

        /* Entry 'xieya8': '<S37>:1146' */
        aaaqi_B.bililiuliangfa18_1_a = 1.0;
        aaaqi_B.bililiuliangfa18_2_d = 1.0;
      }
    }
    break;

   case aaaqi_IN_xieya7_3:
    /* During 'xieya7_3': '<S37>:1144' */
    /* Transition: '<S37>:1128' */
    if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_c) &&
        (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_c)) {
      /* Transition: '<S37>:1127' */
      aaaqi_DW.is_SXQxieya = aaaqi_IN_xieya7_1;

      /* Entry 'xieya7_1': '<S37>:1143' */
      aaaqi_B.bililiuliangfa18_1_a = 1.0;
      aaaqi_B.bililiuliangfa18_2_d = 1.0;
    } else if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_c) &&
               (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_c)) {
      /* Transition: '<S37>:1125' */
      aaaqi_DW.is_SXQxieya = aaaqi_IN_xieya7_2;

      /* Entry 'xieya7_2': '<S37>:1142' */
      aaaqi_B.bililiuliangfa18_1_a = 1.0;
      aaaqi_B.bililiuliangfa18_2_d = 0.0;
    } else if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_c) &&
               (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_c)) {
      /* Transition: '<S37>:1129' */
      aaaqi_DW.is_SXQxieya = aaaqi_IN_xieya7_3;

      /* Entry 'xieya7_3': '<S37>:1144' */
      aaaqi_B.bililiuliangfa18_1_a = 0.0;
      aaaqi_B.bililiuliangfa18_2_d = 1.0;
    } else {
      if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_c) &&
          (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_c)) {
        /* Transition: '<S37>:1131' */
        aaaqi_DW.is_SXQxieya = aaaqi_IN_xieya8;
        aaaqi_DW.temporalCounter_i1_c = 0U;

        /* Entry 'xieya8': '<S37>:1146' */
        aaaqi_B.bililiuliangfa18_1_a = 1.0;
        aaaqi_B.bililiuliangfa18_2_d = 1.0;
      }
    }
    break;

   default:
    /* During 'xieya8': '<S37>:1146' */
    if (aaaqi_DW.temporalCounter_i1_c >= 1000) {
      /* Transition: '<S37>:1134' */
      if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_c) &&
          (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_c)) {
        /* Transition: '<S37>:1133' */
        aaaqi_DW.is_SXQxieya = aaaqi_IN_off2_c;

        /* Entry 'off2': '<S37>:1145' */
        aaaqi_B.diancifa11_5_d = 0.0;
        aaaqi_B.bililiuliangfa18_1_a = 0.0;
        aaaqi_B.bililiuliangfa18_2_d = 0.0;
        aaaqi_B.SXQxieyawancheng = 1.0;
      } else {
        if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_c) ||
            (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_c)) {
          /* Transition: '<S37>:1132' */
          if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_c) &&
              (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_c)) {
            /* Transition: '<S37>:1127' */
            aaaqi_DW.is_SXQxieya = aaaqi_IN_xieya7_1;

            /* Entry 'xieya7_1': '<S37>:1143' */
            aaaqi_B.bililiuliangfa18_1_a = 1.0;
            aaaqi_B.bililiuliangfa18_2_d = 1.0;
          } else if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_c) &&
                     (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_c)) {
            /* Transition: '<S37>:1125' */
            aaaqi_DW.is_SXQxieya = aaaqi_IN_xieya7_2;

            /* Entry 'xieya7_2': '<S37>:1142' */
            aaaqi_B.bililiuliangfa18_1_a = 1.0;
            aaaqi_B.bililiuliangfa18_2_d = 0.0;
          } else if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_c) &&
                     (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_c)) {
            /* Transition: '<S37>:1129' */
            aaaqi_DW.is_SXQxieya = aaaqi_IN_xieya7_3;

            /* Entry 'xieya7_3': '<S37>:1144' */
            aaaqi_B.bililiuliangfa18_1_a = 0.0;
            aaaqi_B.bililiuliangfa18_2_d = 1.0;
          } else {
            if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_c) &&
                (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_c)) {
              /* Transition: '<S37>:1131' */
              aaaqi_DW.is_SXQxieya = aaaqi_IN_xieya8;
              aaaqi_DW.temporalCounter_i1_c = 0U;

              /* Entry 'xieya8': '<S37>:1146' */
              aaaqi_B.bililiuliangfa18_1_a = 1.0;
              aaaqi_B.bililiuliangfa18_2_d = 1.0;
            }
          }
        }
      }
    }
    break;
  }

  if (guard1) {
    if (aaaqi_DW.p0_2 > aaaqi_B.u_c) {
      /* Transition: '<S37>:1122' */
      if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_DW.p0_2) &&
          (aaaqi_B.DataTypeConversion27[4] > aaaqi_DW.p0_2)) {
        /* Transition: '<S37>:1116' */
        aaaqi_DW.is_SXQxieya = aaaqi_IN_xieya1_1;

        /* Entry 'xieya1_1': '<S37>:1139' */
        aaaqi_B.bililiuliangfa18_1_a = 1.0;
        aaaqi_B.bililiuliangfa18_2_d = 1.0;
      } else if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_DW.p0_2) &&
                 (aaaqi_B.DataTypeConversion27[4] > aaaqi_DW.p0_2)) {
        /* Transition: '<S37>:1115' */
        aaaqi_DW.is_SXQxieya = aaaqi_IN_xieya1_2;

        /* Entry 'xieya1_2': '<S37>:1138' */
        aaaqi_B.bililiuliangfa18_1_a = 1.0;
        aaaqi_B.bililiuliangfa18_2_d = 0.0;
      } else if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_DW.p0_2) &&
                 (aaaqi_B.DataTypeConversion27[4] <= aaaqi_DW.p0_2)) {
        /* Transition: '<S37>:1120' */
        aaaqi_DW.is_SXQxieya = aaaqi_IN_xieya1_3;

        /* Entry 'xieya1_3': '<S37>:1140' */
        aaaqi_B.bililiuliangfa18_1_a = 0.0;
        aaaqi_B.bililiuliangfa18_2_d = 1.0;
      } else {
        if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_DW.p0_2) &&
            (aaaqi_B.DataTypeConversion27[4] <= aaaqi_DW.p0_2)) {
          /* Transition: '<S37>:1121' */
          aaaqi_DW.is_SXQxieya = aaaqi_IN_xieya2;

          /* Entry 'xieya2': '<S37>:1141' */
          aaaqi_B.bililiuliangfa18_1_a = 1.0;
          aaaqi_B.bililiuliangfa18_2_d = 1.0;
          aaaqi_DW.p0_2 -= 0.03;
        }
      }
    }
  }
}

/* Function for Chart: '<S26>/Chart' */
static void aaaqi_zidong(void)
{
  /* During 'zidong': '<S37>:1170' */
  if ((aaaqi_B.DataTypeConversion13 == 1.0) || (aaaqi_B.DataTypeConversion6 ==
       0.0)) {
    /* Transition: '<S37>:1175' */
    /* Exit Internal 'zidong': '<S37>:1170' */
    /* Exit Internal 'SCjiaya': '<S37>:44' */
    aaaqi_DW.is_SCjiaya = aaaqi_IN_NO_ACTIVE_CHILD_o;
    aaaqi_DW.is_zidong = aaaqi_IN_NO_ACTIVE_CHILD_o;

    /* Exit Internal 'SCzhushui': '<S37>:28' */
    aaaqi_DW.is_SCzhushui = aaaqi_IN_NO_ACTIVE_CHILD_o;

    /* Exit Internal 'SXQjunya': '<S37>:1194' */
    aaaqi_DW.is_SXQjunya = aaaqi_IN_NO_ACTIVE_CHILD_o;

    /* Exit Internal 'SXQxieya': '<S37>:1106' */
    aaaqi_DW.is_SXQxieya = aaaqi_IN_NO_ACTIVE_CHILD_o;

    /* Exit Internal 'kaiguangai': '<S37>:939' */
    aaaqi_DW.is_kaiguangai = aaaqi_IN_NO_ACTIVE_CHILD_o;
    aaaqi_DW.is_c1_aaaqi = aaaqi_IN_off111;

    /* Entry 'off111': '<S37>:1174' */
    aaaqi_B.diancifa11_1_l = 0.0;
    aaaqi_B.diancifa11_2_l = 0.0;
    aaaqi_B.diancifa11_5_d = 0.0;
    aaaqi_B.diancifa20_n = 0.0;
    aaaqi_B.diancifa16_1_l = 0.0;
    aaaqi_B.diancifa3_m = 0.0;
    aaaqi_B.diancifa21_a = 0.0;
    aaaqi_B.bililiuliangfa18_1_a = 0.0;
    aaaqi_B.bililiuliangfa18_2_d = 0.0;
    aaaqi_B.bililiuliangfa18_3_p = 0.0;
    aaaqi_B.bililiuliangfa18_4_c = 0.0;
    aaaqi_B.xuansong_n = 0.0;
    aaaqi_B.xuanjin_b = 0.0;
    aaaqi_B.suoding_a = 0.0;
    aaaqi_B.jiesuo_j = 0.0;
    aaaqi_B.SCzhushuiwancheng = 0.0;
    aaaqi_B.SCjiayawancheng = 0.0;
    aaaqi_B.SXQjunyawancheng = 0.0;
    aaaqi_B.SQshiyabuchangwancheng = 0.0;
    aaaqi_B.kaigaikaishi = 0.0;
    aaaqi_B.kaigaiwancheng = 0.0;
    aaaqi_B.SQxuanjinjianyawancheng = 0.0;
    aaaqi_B.guangaikaishi = 0.0;
    aaaqi_B.guangaiwancheng = 0.0;
    aaaqi_B.SXQxieyawancheng = 0.0;
  } else {
    switch (aaaqi_DW.is_zidong) {
     case aaaqi_IN_SCjiaya:
      /* During 'SCjiaya': '<S37>:44' */
      switch (aaaqi_DW.is_SCjiaya) {
       case aaaqi_IN_off1:
        /* During 'off1': '<S37>:56' */
        /* Transition: '<S37>:47' */
        aaaqi_DW.is_SCjiaya = aaaqi_IN_on1_o5w;

        /* Entry 'on1': '<S37>:57' */
        aaaqi_B.diancifa11_1_l = 1.0;
        aaaqi_B.diancifa11_2_l = 1.0;
        aaaqi_B.diancifa16_1_l = 0.0;
        break;

       case aaaqi_IN_off2_c:
        /* During 'off2': '<S37>:58' */
        if (aaaqi_DW.temporalCounter_i1_c >= 1000) {
          /* Transition: '<S37>:50' */
          if (aaaqi_B.DataTypeConversion27[0] < aaaqi_B.u) {
            /* Transition: '<S37>:51' */
            aaaqi_DW.is_SCjiaya = aaaqi_IN_on3_e;

            /* Entry 'on3': '<S37>:59' */
            aaaqi_B.diancifa11_1_l = 1.0;
            aaaqi_B.diancifa11_2_l = 1.0;
            aaaqi_B.diancifa16_1_l = 0.0;
          } else if (aaaqi_B.DataTypeConversion27[0] > aaaqi_B.u + 0.005) {
            /* Transition: '<S37>:52' */
            aaaqi_DW.is_SCjiaya = aaaqi_IN_on2_at;

            /* Entry 'on2': '<S37>:60' */
            aaaqi_B.diancifa16_1_l = 1.0;
          } else {
            if ((aaaqi_B.DataTypeConversion27[0] >= aaaqi_B.u) &&
                (aaaqi_B.DataTypeConversion27[0] <= aaaqi_B.u + 0.005)) {
              /* Transition: '<S37>:53' */
              aaaqi_DW.is_SCjiaya = aaaqi_IN_off3_p;

              /* Entry 'off3': '<S37>:61' */
              aaaqi_B.diancifa11_1_l = 0.0;
              aaaqi_B.diancifa11_2_l = 0.0;
              aaaqi_B.diancifa16_1_l = 0.0;
            }
          }
        }
        break;

       case aaaqi_IN_off3_p:
        /* During 'off3': '<S37>:61' */
        /* Transition: '<S37>:66' */
        aaaqi_DW.is_SCjiaya = aaaqi_IN_off4_c;
        aaaqi_DW.temporalCounter_i1_c = 0U;

        /* Entry 'off4': '<S37>:65' */
        aaaqi_B.SCjiayawancheng = 1.0;
        break;

       case aaaqi_IN_off4_c:
        /* During 'off4': '<S37>:65' */
        if (aaaqi_DW.temporalCounter_i1_c >= 1000) {
          /* Transition: '<S37>:1180' */
          aaaqi_DW.is_SCjiaya = aaaqi_IN_NO_ACTIVE_CHILD_o;
          aaaqi_DW.is_zidong = aaaqi_IN_SXQjunya;

          /* Entry Internal 'SXQjunya': '<S37>:1194' */
          /* Transition: '<S37>:1204' */
          aaaqi_DW.is_SXQjunya = aaaqi_IN_off1_l;

          /* Entry 'off1': '<S37>:1240' */
          aaaqi_B.diancifa11_1_l = 0.0;
          aaaqi_B.diancifa11_5_d = 0.0;
          aaaqi_B.diancifa20_n = 0.0;
          aaaqi_B.bililiuliangfa18_1_a = 0.0;
          aaaqi_B.bililiuliangfa18_2_d = 0.0;
          aaaqi_B.bililiuliangfa18_3_p = 0.0;
          aaaqi_B.bililiuliangfa18_4_c = 0.0;
        }
        break;

       case aaaqi_IN_on1_o5w:
        /* During 'on1': '<S37>:57' */
        if (aaaqi_B.DataTypeConversion27[0] >= aaaqi_B.u) {
          /* Transition: '<S37>:48' */
          aaaqi_DW.is_SCjiaya = aaaqi_IN_off2_c;
          aaaqi_DW.temporalCounter_i1_c = 0U;

          /* Entry 'off2': '<S37>:58' */
          aaaqi_B.diancifa11_1_l = 0.0;
          aaaqi_B.diancifa11_2_l = 0.0;
          aaaqi_B.diancifa16_1_l = 0.0;
        }
        break;

       case aaaqi_IN_on2_at:
        /* During 'on2': '<S37>:60' */
        /* Transition: '<S37>:54' */
        if (aaaqi_B.DataTypeConversion27[0] < aaaqi_B.u) {
          /* Transition: '<S37>:51' */
          aaaqi_DW.is_SCjiaya = aaaqi_IN_on3_e;

          /* Entry 'on3': '<S37>:59' */
          aaaqi_B.diancifa11_1_l = 1.0;
          aaaqi_B.diancifa11_2_l = 1.0;
          aaaqi_B.diancifa16_1_l = 0.0;
        } else if (aaaqi_B.DataTypeConversion27[0] > aaaqi_B.u + 0.005) {
          /* Transition: '<S37>:52' */
          aaaqi_DW.is_SCjiaya = aaaqi_IN_on2_at;

          /* Entry 'on2': '<S37>:60' */
          aaaqi_B.diancifa16_1_l = 1.0;
        } else {
          if ((aaaqi_B.DataTypeConversion27[0] >= aaaqi_B.u) &&
              (aaaqi_B.DataTypeConversion27[0] <= aaaqi_B.u + 0.005)) {
            /* Transition: '<S37>:53' */
            aaaqi_DW.is_SCjiaya = aaaqi_IN_off3_p;

            /* Entry 'off3': '<S37>:61' */
            aaaqi_B.diancifa11_1_l = 0.0;
            aaaqi_B.diancifa11_2_l = 0.0;
            aaaqi_B.diancifa16_1_l = 0.0;
          }
        }
        break;

       default:
        /* During 'on3': '<S37>:59' */
        /* Transition: '<S37>:49' */
        if (aaaqi_B.DataTypeConversion27[0] < aaaqi_B.u) {
          /* Transition: '<S37>:51' */
          aaaqi_DW.is_SCjiaya = aaaqi_IN_on3_e;

          /* Entry 'on3': '<S37>:59' */
          aaaqi_B.diancifa11_1_l = 1.0;
          aaaqi_B.diancifa11_2_l = 1.0;
          aaaqi_B.diancifa16_1_l = 0.0;
        } else if (aaaqi_B.DataTypeConversion27[0] > aaaqi_B.u + 0.005) {
          /* Transition: '<S37>:52' */
          aaaqi_DW.is_SCjiaya = aaaqi_IN_on2_at;

          /* Entry 'on2': '<S37>:60' */
          aaaqi_B.diancifa16_1_l = 1.0;
        } else {
          if ((aaaqi_B.DataTypeConversion27[0] >= aaaqi_B.u) &&
              (aaaqi_B.DataTypeConversion27[0] <= aaaqi_B.u + 0.005)) {
            /* Transition: '<S37>:53' */
            aaaqi_DW.is_SCjiaya = aaaqi_IN_off3_p;

            /* Entry 'off3': '<S37>:61' */
            aaaqi_B.diancifa11_1_l = 0.0;
            aaaqi_B.diancifa11_2_l = 0.0;
            aaaqi_B.diancifa16_1_l = 0.0;
          }
        }
        break;
      }
      break;

     case aaaqi_IN_SCzhushui:
      /* During 'SCzhushui': '<S37>:28' */
      switch (aaaqi_DW.is_SCzhushui) {
       case aaaqi_IN_off1:
        /* During 'off1': '<S37>:40' */
        /* Transition: '<S37>:33' */
        aaaqi_DW.is_SCzhushui = aaaqi_IN_off2_c;

        /* Entry 'off2': '<S37>:39' */
        aaaqi_B.diancifa16_1_l = 0.0;
        break;

       case aaaqi_IN_off2_c:
        /* During 'off2': '<S37>:39' */
        /* Transition: '<S37>:34' */
        aaaqi_DW.is_SCzhushui = aaaqi_IN_off3_p;
        aaaqi_DW.temporalCounter_i1_c = 0U;

        /* Entry 'off3': '<S37>:38' */
        aaaqi_B.SCzhushuiwancheng = 1.0;
        break;

       case aaaqi_IN_off3_p:
        /* During 'off3': '<S37>:38' */
        if (aaaqi_DW.temporalCounter_i1_c >= 1000) {
          /* Transition: '<S37>:1179' */
          aaaqi_DW.is_SCzhushui = aaaqi_IN_NO_ACTIVE_CHILD_o;
          aaaqi_DW.is_zidong = aaaqi_IN_SCjiaya;

          /* Entry Internal 'SCjiaya': '<S37>:44' */
          /* Transition: '<S37>:1184' */
          aaaqi_DW.is_SCjiaya = aaaqi_IN_off1;

          /* Entry 'off1': '<S37>:56' */
          aaaqi_B.diancifa11_1_l = 0.0;
          aaaqi_B.diancifa11_2_l = 0.0;
          aaaqi_B.diancifa16_1_l = 0.0;
        }
        break;

       case aaaqi_IN_off4_c:
        /* During 'off4': '<S37>:37' */
        /* Transition: '<S37>:30' */
        aaaqi_DW.is_SCzhushui = aaaqi_IN_on2_atj;
        aaaqi_DW.temporalCounter_i1_c = 0U;

        /* Entry 'on2': '<S37>:35' */
        aaaqi_B.diancifa16_1_l = 1.0;
        break;

       case aaaqi_IN_on2_atj:
        /* During 'on2': '<S37>:35' */
        if (aaaqi_DW.temporalCounter_i1_c >= 20) {
          /* Transition: '<S37>:31' */
          aaaqi_DW.is_SCzhushui = aaaqi_IN_on3_e1;

          /* Entry 'on3': '<S37>:36' */
          aaaqi_B.diancifa3_m = 1.0;
        }
        break;

       default:
        /* During 'on3': '<S37>:36' */
        if (aaaqi_B.DataTypeConversion28 == 1.0) {
          /* Transition: '<S37>:32' */
          aaaqi_DW.is_SCzhushui = aaaqi_IN_off1;

          /* Entry 'off1': '<S37>:40' */
          aaaqi_B.diancifa3_m = 0.0;
        }
        break;
      }
      break;

     case aaaqi_IN_SXQjunya:
      aaaqi_SXQjunya_l();
      break;

     case aaaqi_IN_SXQxieya:
      aaaqi_SXQxieya_e();
      break;

     default:
      /* During 'kaiguangai': '<S37>:939' */
      switch (aaaqi_DW.is_kaiguangai) {
       case aaaqi_IN_off1:
        /* During 'off1': '<S37>:958' */
        if (aaaqi_DW.temporalCounter_i1_c >= 20) {
          /* Transition: '<S37>:1157' */
          aaaqi_DW.is_kaiguangai = aaaqi_IN_off2_c;
          aaaqi_DW.temporalCounter_i1_c = 0U;

          /* Entry 'off2': '<S37>:1156' */
          aaaqi_B.diancifa20_n = 0.0;
          aaaqi_B.SQshiyabuchangwancheng = 1.0;
        }
        break;

       case aaaqi_IN_off2_c:
        /* During 'off2': '<S37>:1156' */
        if (aaaqi_DW.temporalCounter_i1_c >= 500) {
          /* Transition: '<S37>:947' */
          aaaqi_DW.is_kaiguangai = aaaqi_IN_on3_ec;

          /* Entry 'on3': '<S37>:960' */
          aaaqi_B.kaigaikaishi = 1.0;
        }
        break;

       case aaaqi_IN_off3_p:
        /* During 'off3': '<S37>:964' */
        if (aaaqi_DW.temporalCounter_i1_c >= 20) {
          /* Transition: '<S37>:952' */
          aaaqi_DW.is_kaiguangai = aaaqi_IN_off4_c;
          aaaqi_DW.temporalCounter_i1_c = 0U;

          /* Entry 'off4': '<S37>:965' */
          aaaqi_B.kaigaiwancheng = 1.0;
        }
        break;

       case aaaqi_IN_off4_c:
        /* During 'off4': '<S37>:965' */
        if (aaaqi_DW.temporalCounter_i1_c >= 2500) {
          /* Transition: '<S37>:941' */
          aaaqi_DW.is_kaiguangai = aaaqi_IN_on5_n;

          /* Entry 'on5': '<S37>:954' */
          aaaqi_B.jiesuo_j = 1.0;
          aaaqi_B.xuansong_n = 1.0;
        }
        break;

       case aaaqi_IN_off5_m:
        /* During 'off5': '<S37>:955' */
        if (aaaqi_DW.temporalCounter_i1_c >= 500) {
          /* Transition: '<S37>:944' */
          aaaqi_DW.is_kaiguangai = aaaqi_IN_on6_e;

          /* Entry 'on6': '<S37>:957' */
          aaaqi_B.guangaikaishi = 1.0;
        }
        break;

       case aaaqi_IN_off6_m:
        /* During 'off6': '<S37>:961' */
        if (aaaqi_DW.temporalCounter_i1_c >= 20) {
          /* Transition: '<S37>:950' */
          aaaqi_DW.is_kaiguangai = aaaqi_IN_off7_o;
          aaaqi_DW.temporalCounter_i1_c = 0U;

          /* Entry 'off7': '<S37>:963' */
          aaaqi_B.diancifa20_n = 0.0;
          aaaqi_B.SQxuanjinjianyawancheng = 1.0;
          aaaqi_B.guangaiwancheng = 1.0;
        }
        break;

       case aaaqi_IN_off7_o:
        /* During 'off7': '<S37>:963' */
        if (aaaqi_DW.temporalCounter_i1_c >= 1000) {
          /* Transition: '<S37>:1189' */
          aaaqi_DW.is_kaiguangai = aaaqi_IN_NO_ACTIVE_CHILD_o;
          aaaqi_DW.is_zidong = aaaqi_IN_SXQxieya;

          /* Entry Internal 'SXQxieya': '<S37>:1106' */
          /* Transition: '<S37>:1181' */
          aaaqi_DW.is_SXQxieya = aaaqi_IN_off1;

          /* Entry 'off1': '<S37>:1135' */
          aaaqi_B.diancifa11_1_l = 0.0;
          aaaqi_B.bililiuliangfa18_3_p = 0.0;
          aaaqi_B.bililiuliangfa18_4_c = 0.0;
        }
        break;

       case aaaqi_IN_on1_k:
        /* During 'on1': '<S37>:324' */
        if ((aaaqi_B.DataTypeConversion1 == 1.0) &&
            (aaaqi_B.DataTypeConversion27[0] >= aaaqi_B.DataTypeConversion27[2]
             - 0.01) && (aaaqi_B.DataTypeConversion27[0] <=
                         aaaqi_B.DataTypeConversion27[2] + 0.01)) {
          /* Transition: '<S37>:1151' */
          aaaqi_DW.is_kaiguangai = aaaqi_IN_on2_g;

          /* Entry 'on2': '<S37>:956' */
          aaaqi_B.xuansong_n = 1.0;
          aaaqi_B.jiesuo_j = 1.0;
        }
        break;

       case aaaqi_IN_on2_g:
        /* During 'on2': '<S37>:956' */
        if ((aaaqi_B.DataTypeConversion24[6] == 1.0) &&
            (aaaqi_B.DataTypeConversion24[7] == 1.0) &&
            (aaaqi_B.DataTypeConversion24[8] == 1.0) &&
            (aaaqi_B.DataTypeConversion24[9] == 1.0)) {
          /* Transition: '<S37>:945' */
          aaaqi_DW.is_kaiguangai = aaaqi_IN_off1;
          aaaqi_DW.temporalCounter_i1_c = 0U;

          /* Entry 'off1': '<S37>:958' */
          aaaqi_B.xuansong_n = 0.0;
          aaaqi_B.jiesuo_j = 0.0;
        }
        break;

       case aaaqi_IN_on3_ec:
        /* During 'on3': '<S37>:960' */
        if (aaaqi_B.DataTypeConversion24[0] == 1.0) {
          /* Transition: '<S37>:949' */
          aaaqi_DW.is_kaiguangai = aaaqi_IN_on4_k;

          /* Entry 'on4': '<S37>:962' */
          aaaqi_B.kaigaikaishi = 0.0;
          aaaqi_B.suoding_a = 1.0;
        }
        break;

       case aaaqi_IN_on4_k:
        /* During 'on4': '<S37>:962' */
        if ((aaaqi_B.DataTypeConversion24[10] == 1.0) &&
            (aaaqi_B.DataTypeConversion24[11] == 1.0)) {
          /* Transition: '<S37>:951' */
          aaaqi_DW.is_kaiguangai = aaaqi_IN_off3_p;
          aaaqi_DW.temporalCounter_i1_c = 0U;

          /* Entry 'off3': '<S37>:964' */
          aaaqi_B.suoding_a = 0.0;
        }
        break;

       case aaaqi_IN_on5_n:
        /* During 'on5': '<S37>:954' */
        if ((aaaqi_B.DataTypeConversion24[8] == 1.0) &&
            (aaaqi_B.DataTypeConversion24[9] == 1.0) &&
            (aaaqi_B.DataTypeConversion24[6] == 1.0) &&
            (aaaqi_B.DataTypeConversion24[7] == 1.0)) {
          /* Transition: '<S37>:942' */
          aaaqi_DW.is_kaiguangai = aaaqi_IN_off5_m;
          aaaqi_DW.temporalCounter_i1_c = 0U;

          /* Entry 'off5': '<S37>:955' */
          aaaqi_B.jiesuo_j = 0.0;
          aaaqi_B.xuansong_n = 0.0;
        }
        break;

       case aaaqi_IN_on6_e:
        /* During 'on6': '<S37>:957' */
        if (aaaqi_B.DataTypeConversion24[2] == 1.0) {
          /* Transition: '<S37>:946' */
          aaaqi_DW.is_kaiguangai = aaaqi_IN_on7_g;

          /* Entry 'on7': '<S37>:959' */
          aaaqi_B.guangaikaishi = 0.0;
          aaaqi_B.diancifa20_n = 1.0;
        }
        break;

       case aaaqi_IN_on7_g:
        /* During 'on7': '<S37>:959' */
        /* Transition: '<S37>:1155' */
        aaaqi_DW.is_kaiguangai = aaaqi_IN_on8_g;

        /* Entry 'on8': '<S37>:1153' */
        aaaqi_B.xuanjin_b = 1.0;
        break;

       case aaaqi_IN_on8_g:
        /* During 'on8': '<S37>:1153' */
        if ((aaaqi_B.DataTypeConversion24[4] == 1.0) &&
            (aaaqi_B.DataTypeConversion24[5] == 1.0)) {
          /* Transition: '<S37>:948' */
          aaaqi_DW.is_kaiguangai = aaaqi_IN_off6_m;
          aaaqi_DW.temporalCounter_i1_c = 0U;

          /* Entry 'off6': '<S37>:961' */
          aaaqi_B.xuanjin_b = 0.0;
        }
        break;

       default:
        /* During 'start': '<S37>:953' */
        /* Transition: '<S37>:943' */
        aaaqi_DW.is_kaiguangai = aaaqi_IN_on1_k;

        /* Entry 'on1': '<S37>:324' */
        aaaqi_B.diancifa20_n = 1.0;
        break;
      }
      break;
    }
  }
}

/* Function for Chart: '<S26>/Chart' */
static void aaaqi_enter_atomic_start_k(void)
{
  /* Entry 'start': '<S37>:27' */
  aaaqi_B.diancifa11_1_l = 0.0;
  aaaqi_B.diancifa11_2_l = 0.0;
  aaaqi_B.diancifa11_5_d = 0.0;
  aaaqi_B.diancifa20_n = 0.0;
  aaaqi_B.diancifa16_1_l = 0.0;
  aaaqi_B.diancifa3_m = 0.0;
  aaaqi_B.diancifa21_a = 0.0;
  aaaqi_B.bililiuliangfa18_1_a = 0.0;
  aaaqi_B.bililiuliangfa18_2_d = 0.0;
  aaaqi_B.bililiuliangfa18_3_p = 0.0;
  aaaqi_B.bililiuliangfa18_4_c = 0.0;
  aaaqi_B.xuansong_n = 0.0;
  aaaqi_B.xuanjin_b = 0.0;
  aaaqi_B.suoding_a = 0.0;
  aaaqi_B.jiesuo_j = 0.0;
  aaaqi_B.kaigaikaishi = 0.0;
  aaaqi_B.guangaikaishi = 0.0;
}

/* Function for Chart: '<S25>/Chart' */
static void aaaqi_enter_atomic_start(void)
{
  /* Entry 'start': '<S27>:27' */
  aaaqi_B.diancifa11_1_d = 0.0;
  aaaqi_B.diancifa11_2_b = 0.0;
  aaaqi_B.diancifa11_5_o = 0.0;
  aaaqi_B.diancifa20_i = 0.0;
  aaaqi_B.diancifa16_1_c = 0.0;
  aaaqi_B.diancifa3_l = 0.0;
  aaaqi_B.diancifa21_g = 0.0;
  aaaqi_B.bililiuliangfa18_1_h = 0.0;
  aaaqi_B.bililiuliangfa18_2_i = 0.0;
  aaaqi_B.bililiuliangfa18_3_m = 0.0;
  aaaqi_B.bililiuliangfa18_4_b = 0.0;
  aaaqi_B.xuansong_i = 0.0;
  aaaqi_B.xuanjin_l = 0.0;
  aaaqi_B.suoding_k = 0.0;
  aaaqi_B.jiesuo_g = 0.0;
  aaaqi_B.kaigaikaishi_k = 0.0;
  aaaqi_B.guangaikaishi_j = 0.0;
}

/* Function for Chart: '<S25>/Chart' */
static void aaaqi_kaiguangai(void)
{
  /* During 'kaiguangai': '<S27>:1243' */
  switch (aaaqi_DW.is_kaiguangai_o) {
   case aaaqi_IN_off1:
    /* During 'off1': '<S27>:1293' */
    if (aaaqi_DW.temporalCounter_i1_m >= 200) {
      /* Transition: '<S27>:1263' */
      aaaqi_DW.is_kaiguangai_o = aaaqi_IN_off2;
      aaaqi_DW.temporalCounter_i1_m = 0U;

      /* Entry 'off2': '<S27>:1295' */
      aaaqi_B.diancifa20_i = 0.0;
      aaaqi_B.SQshiyabuchangwancheng_p = 1.0;
    }
    break;

   case aaaqi_IN_off10:
    /* During 'off10': '<S27>:1290' */
    if (aaaqi_B.Switch2_m == 1.0) {
      /* Transition: '<S27>:1253' */
      aaaqi_DW.is_kaiguangai_o = aaaqi_IN_on5;

      /* Entry 'on5': '<S27>:1288' */
      aaaqi_B.jiesuo_g = 1.0;
    }
    break;

   case aaaqi_IN_off11:
    /* During 'off11': '<S27>:1303' */
    if (aaaqi_B.Switch2_a == 1.0) {
      /* Transition: '<S27>:1275' */
      aaaqi_DW.is_kaiguangai_o = aaaqi_IN_on8;

      /* Entry 'on8': '<S27>:1301' */
      aaaqi_B.xuanjin_l = 1.0;
    }
    break;

   case aaaqi_IN_off2:
    /* During 'off2': '<S27>:1295' */
    if ((aaaqi_DW.temporalCounter_i1_m >= 500) && (aaaqi_B.Switch == 1.0)) {
      /* Transition: '<S27>:1268' */
      aaaqi_DW.is_kaiguangai_o = aaaqi_IN_on3;

      /* Entry 'on3': '<S27>:1298' */
      aaaqi_B.kaigaikaishi_k = 1.0;
    }
    break;

   case aaaqi_IN_off3:
    /* During 'off3': '<S27>:1307' */
    if (aaaqi_DW.temporalCounter_i1_m >= 200) {
      /* Transition: '<S27>:1285' */
      aaaqi_DW.is_kaiguangai_o = aaaqi_IN_off4;

      /* Entry 'off4': '<S27>:1309' */
      aaaqi_B.kaigaiwancheng_g = 1.0;
    }
    break;

   case aaaqi_IN_off4:
    /* During 'off4': '<S27>:1309' */
    if (aaaqi_B.Switch2_m == 1.0) {
      /* Transition: '<S27>:1252' */
      aaaqi_DW.is_kaiguangai_o = aaaqi_IN_on5;

      /* Entry 'on5': '<S27>:1288' */
      aaaqi_B.jiesuo_g = 1.0;
    }
    break;

   case aaaqi_IN_off5:
    /* During 'off5': '<S27>:1292' */
    if ((aaaqi_DW.temporalCounter_i1_m >= 500) && (aaaqi_B.Switch2 == 1.0)) {
      /* Transition: '<S27>:1262' */
      aaaqi_DW.is_kaiguangai_o = aaaqi_IN_on6;

      /* Entry 'on6': '<S27>:1294' */
      aaaqi_B.guangaikaishi_j = 1.0;
    }
    break;

   case aaaqi_IN_off6:
    /* During 'off6': '<S27>:1305' */
    if (aaaqi_DW.temporalCounter_i1_m >= 200) {
      /* Transition: '<S27>:1284' */
      aaaqi_DW.is_kaiguangai_o = aaaqi_IN_off7;

      /* Entry 'off7': '<S27>:1308' */
      aaaqi_B.diancifa20_i = 0.0;
      aaaqi_B.SQxuanjinjianyawancheng_m = 1.0;
      aaaqi_B.guangaiwancheng_n = 1.0;
    }
    break;

   case aaaqi_IN_off7:
    /* During 'off7': '<S27>:1308' */
    /* Transition: '<S27>:1587' */
    aaaqi_DW.is_kaiguangai_o = aaaqi_IN_start_d;

    /* Entry 'start': '<S27>:1286' */
    aaaqi_B.xuansong_i = 0.0;
    aaaqi_B.xuanjin_l = 0.0;
    aaaqi_B.suoding_k = 0.0;
    aaaqi_B.jiesuo_g = 0.0;
    aaaqi_B.kaigaikaishi_k = 0.0;
    aaaqi_B.guangaikaishi_j = 0.0;
    aaaqi_B.diancifa20_i = 0.0;
    break;

   case aaaqi_IN_off8:
    /* During 'off8': '<S27>:1291' */
    if (aaaqi_B.Switch_g == 1.0) {
      /* Transition: '<S27>:1256' */
      aaaqi_DW.is_kaiguangai_o = aaaqi_IN_on2_a;

      /* Entry 'on2': '<S27>:1289' */
      aaaqi_B.xuansong_i = 1.0;
    }
    break;

   case aaaqi_IN_off9:
    /* During 'off9': '<S27>:1306' */
    if (aaaqi_B.suoding_k == 1.0) {
      /* Transition: '<S27>:1280' */
      aaaqi_DW.is_kaiguangai_o = aaaqi_IN_on41;

      /* Entry 'on41': '<S27>:1304' */
      aaaqi_B.suoding_k = 1.0;
    }
    break;

   case aaaqi_IN_on1_o:
    /* During 'on1': '<S27>:1287' */
    if ((aaaqi_B.DataTypeConversion1 == 1.0) && (aaaqi_B.DataTypeConversion27[0]
         >= aaaqi_B.DataTypeConversion27[2] - 0.01) &&
        (aaaqi_B.DataTypeConversion27[0] <= aaaqi_B.DataTypeConversion27[2] +
         0.01) && (aaaqi_B.Switch_g == 1.0)) {
      /* Transition: '<S27>:1255' */
      aaaqi_DW.is_kaiguangai_o = aaaqi_IN_on2_a;

      /* Entry 'on2': '<S27>:1289' */
      aaaqi_B.xuansong_i = 1.0;
    }
    break;

   case aaaqi_IN_on2_a:
    /* During 'on2': '<S27>:1289' */
    /* Transition: '<S27>:1259' */
    if ((aaaqi_B.DataTypeConversion24[6] == 1.0) &&
        (aaaqi_B.DataTypeConversion24[7] == 1.0)) {
      /* Transition: '<S27>:1261' */
      aaaqi_DW.is_kaiguangai_o = aaaqi_IN_off1;
      aaaqi_DW.temporalCounter_i1_m = 0U;

      /* Entry 'off1': '<S27>:1293' */
      aaaqi_B.xuansong_i = 0.0;
    } else {
      if (aaaqi_B.Switch_g == 0.0) {
        /* Transition: '<S27>:1260' */
        aaaqi_DW.is_kaiguangai_o = aaaqi_IN_off8;

        /* Entry 'off8': '<S27>:1291' */
        aaaqi_B.xuansong_i = 0.0;
      }
    }
    break;

   case aaaqi_IN_on3:
    /* During 'on3': '<S27>:1298' */
    /* Transition: '<S27>:1271' */
    if (aaaqi_B.DataTypeConversion24[0] == 1.0) {
      /* Transition: '<S27>:1274' */
      aaaqi_DW.is_kaiguangai_o = aaaqi_IN_on4;

      /* Entry 'on4': '<S27>:1302' */
      aaaqi_B.kaigaikaishi_k = 0.0;
    } else {
      if (aaaqi_B.Switch == 0.0) {
        /* Transition: '<S27>:1273' */
        aaaqi_DW.is_kaiguangai_o = aaaqi_IN_on72;

        /* Entry 'on72': '<S27>:1300' */
        aaaqi_B.kaigaikaishi_k = 0.0;
      }
    }
    break;

   case aaaqi_IN_on4:
    /* During 'on4': '<S27>:1302' */
    if (aaaqi_B.Switch_i == 1.0) {
      /* Transition: '<S27>:1277' */
      aaaqi_DW.is_kaiguangai_o = aaaqi_IN_on41;

      /* Entry 'on41': '<S27>:1304' */
      aaaqi_B.suoding_k = 1.0;
    }
    break;

   case aaaqi_IN_on41:
    /* During 'on41': '<S27>:1304' */
    /* Transition: '<S27>:1281' */
    if ((aaaqi_B.DataTypeConversion24[10] == 1.0) &&
        (aaaqi_B.DataTypeConversion24[11] == 1.0)) {
      /* Transition: '<S27>:1283' */
      aaaqi_DW.is_kaiguangai_o = aaaqi_IN_off3;
      aaaqi_DW.temporalCounter_i1_m = 0U;

      /* Entry 'off3': '<S27>:1307' */
      aaaqi_B.suoding_k = 0.0;
    } else {
      if (aaaqi_B.suoding_k == 0.0) {
        /* Transition: '<S27>:1282' */
        aaaqi_DW.is_kaiguangai_o = aaaqi_IN_off9;

        /* Entry 'off9': '<S27>:1306' */
        aaaqi_B.suoding_k = 0.0;
      }
    }
    break;

   case aaaqi_IN_on5:
    /* During 'on5': '<S27>:1288' */
    /* Transition: '<S27>:1254' */
    if ((aaaqi_B.DataTypeConversion24[8] == 1.0) &&
        (aaaqi_B.DataTypeConversion24[9] == 1.0)) {
      /* Transition: '<S27>:1258' */
      aaaqi_DW.is_kaiguangai_o = aaaqi_IN_off5;
      aaaqi_DW.temporalCounter_i1_m = 0U;

      /* Entry 'off5': '<S27>:1292' */
      aaaqi_B.jiesuo_g = 0.0;
    } else {
      if (aaaqi_B.Switch2_m == 0.0) {
        /* Transition: '<S27>:1257' */
        aaaqi_DW.is_kaiguangai_o = aaaqi_IN_off10;

        /* Entry 'off10': '<S27>:1290' */
        aaaqi_B.jiesuo_g = 0.0;
      }
    }
    break;

   case aaaqi_IN_on6:
    /* During 'on6': '<S27>:1294' */
    /* Transition: '<S27>:1265' */
    if (aaaqi_B.DataTypeConversion24[2] == 1.0) {
      /* Transition: '<S27>:1267' */
      aaaqi_DW.is_kaiguangai_o = aaaqi_IN_on7;

      /* Entry 'on7': '<S27>:1297' */
      aaaqi_B.guangaikaishi_j = 0.0;
    } else {
      if (aaaqi_B.Switch2 == 0.0) {
        /* Transition: '<S27>:1266' */
        aaaqi_DW.is_kaiguangai_o = aaaqi_IN_on73;

        /* Entry 'on73': '<S27>:1296' */
        aaaqi_B.guangaikaishi_j = 0.0;
      }
    }
    break;

   case aaaqi_IN_on7:
    /* During 'on7': '<S27>:1297' */
    if (aaaqi_B.DataTypeConversion22 == 1.0) {
      /* Transition: '<S27>:1269' */
      aaaqi_DW.is_kaiguangai_o = aaaqi_IN_on71;

      /* Entry 'on71': '<S27>:1299' */
      aaaqi_B.diancifa20_i = 1.0;
    }
    break;

   case aaaqi_IN_on71:
    /* During 'on71': '<S27>:1299' */
    if (aaaqi_B.Switch2_a == 1.0) {
      /* Transition: '<S27>:1272' */
      aaaqi_DW.is_kaiguangai_o = aaaqi_IN_on8;

      /* Entry 'on8': '<S27>:1301' */
      aaaqi_B.xuanjin_l = 1.0;
    }
    break;

   case aaaqi_IN_on72:
    /* During 'on72': '<S27>:1300' */
    if (aaaqi_B.Switch == 1.0) {
      /* Transition: '<S27>:1270' */
      aaaqi_DW.is_kaiguangai_o = aaaqi_IN_on3;

      /* Entry 'on3': '<S27>:1298' */
      aaaqi_B.kaigaikaishi_k = 1.0;
    }
    break;

   case aaaqi_IN_on73:
    /* During 'on73': '<S27>:1296' */
    if (aaaqi_B.Switch2 == 1.0) {
      /* Transition: '<S27>:1264' */
      aaaqi_DW.is_kaiguangai_o = aaaqi_IN_on6;

      /* Entry 'on6': '<S27>:1294' */
      aaaqi_B.guangaikaishi_j = 1.0;
    }
    break;

   case aaaqi_IN_on8:
    /* During 'on8': '<S27>:1301' */
    /* Transition: '<S27>:1276' */
    if ((aaaqi_B.DataTypeConversion24[4] == 1.0) &&
        (aaaqi_B.DataTypeConversion24[5] == 1.0)) {
      /* Transition: '<S27>:1279' */
      aaaqi_DW.is_kaiguangai_o = aaaqi_IN_off6;
      aaaqi_DW.temporalCounter_i1_m = 0U;

      /* Entry 'off6': '<S27>:1305' */
      aaaqi_B.xuanjin_l = 0.0;
    } else {
      if (aaaqi_B.Switch2_a == 0.0) {
        /* Transition: '<S27>:1278' */
        aaaqi_DW.is_kaiguangai_o = aaaqi_IN_off11;

        /* Entry 'off11': '<S27>:1303' */
        aaaqi_B.xuanjin_l = 0.0;
      }
    }
    break;

   default:
    /* During 'start': '<S27>:1286' */
    if (aaaqi_B.DataTypeConversion18 == 1.0) {
      /* Transition: '<S27>:1251' */
      aaaqi_DW.is_kaiguangai_o = aaaqi_IN_on1_o;

      /* Entry 'on1': '<S27>:1287' */
      aaaqi_B.diancifa20_i = 1.0;
    }
    break;
  }
}

/* Function for Chart: '<S25>/Chart' */
static void aaaqi_xieya2(void)
{
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  boolean_T guard4 = false;
  boolean_T guard5 = false;
  boolean_T guard6 = false;
  boolean_T guard7 = false;
  boolean_T guard8 = false;
  boolean_T guard9 = false;

  /* During 'xieya2': '<S27>:1479' */
  /* Transition: '<S27>:1458' */
  guard1 = false;
  guard2 = false;
  guard3 = false;
  guard4 = false;
  guard5 = false;
  guard6 = false;
  guard7 = false;
  guard8 = false;
  guard9 = false;
  if (aaaqi_B.p0_2 <= aaaqi_B.u_c) {
    /* Transition: '<S27>:1459' */
    if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_c) &&
        (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_c)) {
      /* Transition: '<S27>:1463' */
      if (aaaqi_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1461' */
        aaaqi_DW.is_SXQxieya_l = aaaqi_IN_xieya7_1;

        /* Entry 'xieya7_1': '<S27>:1481' */
        aaaqi_B.bililiuliangfa18_1_h = 1.0;
        aaaqi_B.bililiuliangfa18_2_i = 1.0;
      } else if (aaaqi_B.DataTypeConversion12 == 0.0) {
        /* Transition: '<S27>:1439' */
        guard1 = true;
      } else {
        guard9 = true;
      }
    } else {
      guard9 = true;
    }
  } else {
    guard6 = true;
  }

  if (guard9) {
    if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_c) &&
        (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_c)) {
      /* Transition: '<S27>:1462' */
      if (aaaqi_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1460' */
        aaaqi_DW.is_SXQxieya_l = aaaqi_IN_xieya7_2;

        /* Entry 'xieya7_2': '<S27>:1482' */
        aaaqi_B.bililiuliangfa18_1_h = 1.0;
        aaaqi_B.bililiuliangfa18_2_i = 0.0;
      } else if (aaaqi_B.DataTypeConversion12 == 0.0) {
        /* Transition: '<S27>:1441' */
        guard1 = true;
      } else {
        guard8 = true;
      }
    } else {
      guard8 = true;
    }
  }

  if (guard8) {
    if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_c) &&
        (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_c)) {
      /* Transition: '<S27>:1466' */
      if (aaaqi_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1471' */
        aaaqi_DW.is_SXQxieya_l = aaaqi_IN_xieya7_3;

        /* Entry 'xieya7_3': '<S27>:1484' */
        aaaqi_B.bililiuliangfa18_1_h = 0.0;
        aaaqi_B.bililiuliangfa18_2_i = 1.0;
      } else if (aaaqi_B.DataTypeConversion12 == 0.0) {
        /* Transition: '<S27>:1442' */
        guard1 = true;
      } else {
        guard7 = true;
      }
    } else {
      guard7 = true;
    }
  }

  if (guard7) {
    if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_c) &&
        (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_c)) {
      /* Transition: '<S27>:1467' */
      if (aaaqi_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1470' */
        aaaqi_DW.is_SXQxieya_l = aaaqi_IN_xieya8;
        aaaqi_DW.temporalCounter_i2 = 0U;

        /* Entry 'xieya8': '<S27>:1483' */
        aaaqi_B.bililiuliangfa18_1_h = 1.0;
        aaaqi_B.bililiuliangfa18_2_i = 1.0;
      } else if (aaaqi_B.DataTypeConversion12 == 0.0) {
        /* Transition: '<S27>:1440' */
        guard1 = true;
      } else {
        guard6 = true;
      }
    } else {
      guard6 = true;
    }
  }

  if (guard6) {
    if (aaaqi_B.p0_2 > aaaqi_B.u_c) {
      /* Transition: '<S27>:1455' */
      if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.p0_2) &&
          (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.p0_2)) {
        /* Transition: '<S27>:1449' */
        if (aaaqi_B.DataTypeConversion12 == 1.0) {
          /* Transition: '<S27>:1447' */
          aaaqi_DW.is_SXQxieya_l = aaaqi_IN_xieya1_1;

          /* Entry 'xieya1_1': '<S27>:1477' */
          aaaqi_B.bililiuliangfa18_1_h = 1.0;
          aaaqi_B.bililiuliangfa18_2_i = 1.0;
        } else if (aaaqi_B.DataTypeConversion12 == 0.0) {
          /* Transition: '<S27>:1437' */
          guard2 = true;
        } else {
          guard5 = true;
        }
      } else {
        guard5 = true;
      }
    }
  }

  if (guard5) {
    if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.p0_2) &&
        (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.p0_2)) {
      /* Transition: '<S27>:1446' */
      if (aaaqi_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1448' */
        aaaqi_DW.is_SXQxieya_l = aaaqi_IN_xieya1_2;

        /* Entry 'xieya1_2': '<S27>:1478' */
        aaaqi_B.bililiuliangfa18_1_h = 1.0;
        aaaqi_B.bililiuliangfa18_2_i = 0.0;
      } else if (aaaqi_B.DataTypeConversion12 == 0.0) {
        /* Transition: '<S27>:1435' */
        guard2 = true;
      } else {
        guard4 = true;
      }
    } else {
      guard4 = true;
    }
  }

  if (guard4) {
    if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.p0_2) &&
        (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.p0_2)) {
      /* Transition: '<S27>:1454' */
      if (aaaqi_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1457' */
        aaaqi_DW.is_SXQxieya_l = aaaqi_IN_xieya1_3;

        /* Entry 'xieya1_3': '<S27>:1480' */
        aaaqi_B.bililiuliangfa18_1_h = 0.0;
        aaaqi_B.bililiuliangfa18_2_i = 1.0;
      } else if (aaaqi_B.DataTypeConversion12 == 0.0) {
        /* Transition: '<S27>:1436' */
        guard2 = true;
      } else {
        guard3 = true;
      }
    } else {
      guard3 = true;
    }
  }

  if (guard3) {
    if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.p0_2) &&
        (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.p0_2)) {
      /* Transition: '<S27>:1453' */
      if (aaaqi_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1456' */
        aaaqi_DW.is_SXQxieya_l = aaaqi_IN_xieya2;

        /* Entry 'xieya2': '<S27>:1479' */
        aaaqi_B.bililiuliangfa18_1_h = 1.0;
        aaaqi_B.bililiuliangfa18_2_i = 1.0;
        aaaqi_B.p0_2 -= 0.03;
      } else {
        if (aaaqi_B.DataTypeConversion12 == 0.0) {
          /* Transition: '<S27>:1438' */
          guard2 = true;
        }
      }
    }
  }

  if (guard2) {
    /* Transition: '<S27>:1433' */
    aaaqi_DW.is_SXQxieya_l = aaaqi_IN_off1;

    /* Entry 'off1': '<S27>:1474' */
    aaaqi_B.diancifa11_1_d = 0.0;
    aaaqi_B.diancifa11_5_o = 0.0;
    aaaqi_B.bililiuliangfa18_1_h = 0.0;
    aaaqi_B.bililiuliangfa18_2_i = 0.0;
    aaaqi_B.bililiuliangfa18_3_m = 0.0;
    aaaqi_B.bililiuliangfa18_4_b = 0.0;
  }

  if (guard1) {
    /* Transition: '<S27>:1434' */
    aaaqi_DW.is_SXQxieya_l = aaaqi_IN_off1;

    /* Entry 'off1': '<S27>:1474' */
    aaaqi_B.diancifa11_1_d = 0.0;
    aaaqi_B.diancifa11_5_o = 0.0;
    aaaqi_B.bililiuliangfa18_1_h = 0.0;
    aaaqi_B.bililiuliangfa18_2_i = 0.0;
    aaaqi_B.bililiuliangfa18_3_m = 0.0;
    aaaqi_B.bililiuliangfa18_4_b = 0.0;
  }
}

/* Function for Chart: '<S25>/Chart' */
static void aaaqi_xieya7_1(void)
{
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  boolean_T guard4 = false;

  /* During 'xieya7_1': '<S27>:1481' */
  /* Transition: '<S27>:1464' */
  guard1 = false;
  guard2 = false;
  guard3 = false;
  guard4 = false;
  if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_c) &&
      (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_c)) {
    /* Transition: '<S27>:1463' */
    if (aaaqi_B.DataTypeConversion12 == 1.0) {
      /* Transition: '<S27>:1461' */
      aaaqi_DW.is_SXQxieya_l = aaaqi_IN_xieya7_1;

      /* Entry 'xieya7_1': '<S27>:1481' */
      aaaqi_B.bililiuliangfa18_1_h = 1.0;
      aaaqi_B.bililiuliangfa18_2_i = 1.0;
    } else if (aaaqi_B.DataTypeConversion12 == 0.0) {
      /* Transition: '<S27>:1439' */
      guard1 = true;
    } else {
      guard4 = true;
    }
  } else {
    guard4 = true;
  }

  if (guard4) {
    if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_c) &&
        (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_c)) {
      /* Transition: '<S27>:1462' */
      if (aaaqi_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1460' */
        aaaqi_DW.is_SXQxieya_l = aaaqi_IN_xieya7_2;

        /* Entry 'xieya7_2': '<S27>:1482' */
        aaaqi_B.bililiuliangfa18_1_h = 1.0;
        aaaqi_B.bililiuliangfa18_2_i = 0.0;
      } else if (aaaqi_B.DataTypeConversion12 == 0.0) {
        /* Transition: '<S27>:1441' */
        guard1 = true;
      } else {
        guard3 = true;
      }
    } else {
      guard3 = true;
    }
  }

  if (guard3) {
    if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_c) &&
        (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_c)) {
      /* Transition: '<S27>:1466' */
      if (aaaqi_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1471' */
        aaaqi_DW.is_SXQxieya_l = aaaqi_IN_xieya7_3;

        /* Entry 'xieya7_3': '<S27>:1484' */
        aaaqi_B.bililiuliangfa18_1_h = 0.0;
        aaaqi_B.bililiuliangfa18_2_i = 1.0;
      } else if (aaaqi_B.DataTypeConversion12 == 0.0) {
        /* Transition: '<S27>:1442' */
        guard1 = true;
      } else {
        guard2 = true;
      }
    } else {
      guard2 = true;
    }
  }

  if (guard2) {
    if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_c) &&
        (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_c)) {
      /* Transition: '<S27>:1467' */
      if (aaaqi_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1470' */
        aaaqi_DW.is_SXQxieya_l = aaaqi_IN_xieya8;
        aaaqi_DW.temporalCounter_i2 = 0U;

        /* Entry 'xieya8': '<S27>:1483' */
        aaaqi_B.bililiuliangfa18_1_h = 1.0;
        aaaqi_B.bililiuliangfa18_2_i = 1.0;
      } else {
        if (aaaqi_B.DataTypeConversion12 == 0.0) {
          /* Transition: '<S27>:1440' */
          guard1 = true;
        }
      }
    }
  }

  if (guard1) {
    /* Transition: '<S27>:1434' */
    aaaqi_DW.is_SXQxieya_l = aaaqi_IN_off1;

    /* Entry 'off1': '<S27>:1474' */
    aaaqi_B.diancifa11_1_d = 0.0;
    aaaqi_B.diancifa11_5_o = 0.0;
    aaaqi_B.bililiuliangfa18_1_h = 0.0;
    aaaqi_B.bililiuliangfa18_2_i = 0.0;
    aaaqi_B.bililiuliangfa18_3_m = 0.0;
    aaaqi_B.bililiuliangfa18_4_b = 0.0;
  }
}

/* Function for Chart: '<S25>/Chart' */
static void aaaqi_xieya7_2(void)
{
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  boolean_T guard4 = false;

  /* During 'xieya7_2': '<S27>:1482' */
  /* Transition: '<S27>:1465' */
  guard1 = false;
  guard2 = false;
  guard3 = false;
  guard4 = false;
  if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_c) &&
      (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_c)) {
    /* Transition: '<S27>:1463' */
    if (aaaqi_B.DataTypeConversion12 == 1.0) {
      /* Transition: '<S27>:1461' */
      aaaqi_DW.is_SXQxieya_l = aaaqi_IN_xieya7_1;

      /* Entry 'xieya7_1': '<S27>:1481' */
      aaaqi_B.bililiuliangfa18_1_h = 1.0;
      aaaqi_B.bililiuliangfa18_2_i = 1.0;
    } else if (aaaqi_B.DataTypeConversion12 == 0.0) {
      /* Transition: '<S27>:1439' */
      guard1 = true;
    } else {
      guard4 = true;
    }
  } else {
    guard4 = true;
  }

  if (guard4) {
    if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_c) &&
        (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_c)) {
      /* Transition: '<S27>:1462' */
      if (aaaqi_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1460' */
        aaaqi_DW.is_SXQxieya_l = aaaqi_IN_xieya7_2;

        /* Entry 'xieya7_2': '<S27>:1482' */
        aaaqi_B.bililiuliangfa18_1_h = 1.0;
        aaaqi_B.bililiuliangfa18_2_i = 0.0;
      } else if (aaaqi_B.DataTypeConversion12 == 0.0) {
        /* Transition: '<S27>:1441' */
        guard1 = true;
      } else {
        guard3 = true;
      }
    } else {
      guard3 = true;
    }
  }

  if (guard3) {
    if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_c) &&
        (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_c)) {
      /* Transition: '<S27>:1466' */
      if (aaaqi_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1471' */
        aaaqi_DW.is_SXQxieya_l = aaaqi_IN_xieya7_3;

        /* Entry 'xieya7_3': '<S27>:1484' */
        aaaqi_B.bililiuliangfa18_1_h = 0.0;
        aaaqi_B.bililiuliangfa18_2_i = 1.0;
      } else if (aaaqi_B.DataTypeConversion12 == 0.0) {
        /* Transition: '<S27>:1442' */
        guard1 = true;
      } else {
        guard2 = true;
      }
    } else {
      guard2 = true;
    }
  }

  if (guard2) {
    if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_c) &&
        (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_c)) {
      /* Transition: '<S27>:1467' */
      if (aaaqi_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1470' */
        aaaqi_DW.is_SXQxieya_l = aaaqi_IN_xieya8;
        aaaqi_DW.temporalCounter_i2 = 0U;

        /* Entry 'xieya8': '<S27>:1483' */
        aaaqi_B.bililiuliangfa18_1_h = 1.0;
        aaaqi_B.bililiuliangfa18_2_i = 1.0;
      } else {
        if (aaaqi_B.DataTypeConversion12 == 0.0) {
          /* Transition: '<S27>:1440' */
          guard1 = true;
        }
      }
    }
  }

  if (guard1) {
    /* Transition: '<S27>:1434' */
    aaaqi_DW.is_SXQxieya_l = aaaqi_IN_off1;

    /* Entry 'off1': '<S27>:1474' */
    aaaqi_B.diancifa11_1_d = 0.0;
    aaaqi_B.diancifa11_5_o = 0.0;
    aaaqi_B.bililiuliangfa18_1_h = 0.0;
    aaaqi_B.bililiuliangfa18_2_i = 0.0;
    aaaqi_B.bililiuliangfa18_3_m = 0.0;
    aaaqi_B.bililiuliangfa18_4_b = 0.0;
  }
}

/* Function for Chart: '<S25>/Chart' */
static void aaaqi_xieya7_3(void)
{
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  boolean_T guard4 = false;

  /* During 'xieya7_3': '<S27>:1484' */
  /* Transition: '<S27>:1468' */
  guard1 = false;
  guard2 = false;
  guard3 = false;
  guard4 = false;
  if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_c) &&
      (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_c)) {
    /* Transition: '<S27>:1463' */
    if (aaaqi_B.DataTypeConversion12 == 1.0) {
      /* Transition: '<S27>:1461' */
      aaaqi_DW.is_SXQxieya_l = aaaqi_IN_xieya7_1;

      /* Entry 'xieya7_1': '<S27>:1481' */
      aaaqi_B.bililiuliangfa18_1_h = 1.0;
      aaaqi_B.bililiuliangfa18_2_i = 1.0;
    } else if (aaaqi_B.DataTypeConversion12 == 0.0) {
      /* Transition: '<S27>:1439' */
      guard1 = true;
    } else {
      guard4 = true;
    }
  } else {
    guard4 = true;
  }

  if (guard4) {
    if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_c) &&
        (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_c)) {
      /* Transition: '<S27>:1462' */
      if (aaaqi_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1460' */
        aaaqi_DW.is_SXQxieya_l = aaaqi_IN_xieya7_2;

        /* Entry 'xieya7_2': '<S27>:1482' */
        aaaqi_B.bililiuliangfa18_1_h = 1.0;
        aaaqi_B.bililiuliangfa18_2_i = 0.0;
      } else if (aaaqi_B.DataTypeConversion12 == 0.0) {
        /* Transition: '<S27>:1441' */
        guard1 = true;
      } else {
        guard3 = true;
      }
    } else {
      guard3 = true;
    }
  }

  if (guard3) {
    if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_c) &&
        (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_c)) {
      /* Transition: '<S27>:1466' */
      if (aaaqi_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1471' */
        aaaqi_DW.is_SXQxieya_l = aaaqi_IN_xieya7_3;

        /* Entry 'xieya7_3': '<S27>:1484' */
        aaaqi_B.bililiuliangfa18_1_h = 0.0;
        aaaqi_B.bililiuliangfa18_2_i = 1.0;
      } else if (aaaqi_B.DataTypeConversion12 == 0.0) {
        /* Transition: '<S27>:1442' */
        guard1 = true;
      } else {
        guard2 = true;
      }
    } else {
      guard2 = true;
    }
  }

  if (guard2) {
    if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_c) &&
        (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_c)) {
      /* Transition: '<S27>:1467' */
      if (aaaqi_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1470' */
        aaaqi_DW.is_SXQxieya_l = aaaqi_IN_xieya8;
        aaaqi_DW.temporalCounter_i2 = 0U;

        /* Entry 'xieya8': '<S27>:1483' */
        aaaqi_B.bililiuliangfa18_1_h = 1.0;
        aaaqi_B.bililiuliangfa18_2_i = 1.0;
      } else {
        if (aaaqi_B.DataTypeConversion12 == 0.0) {
          /* Transition: '<S27>:1440' */
          guard1 = true;
        }
      }
    }
  }

  if (guard1) {
    /* Transition: '<S27>:1434' */
    aaaqi_DW.is_SXQxieya_l = aaaqi_IN_off1;

    /* Entry 'off1': '<S27>:1474' */
    aaaqi_B.diancifa11_1_d = 0.0;
    aaaqi_B.diancifa11_5_o = 0.0;
    aaaqi_B.bililiuliangfa18_1_h = 0.0;
    aaaqi_B.bililiuliangfa18_2_i = 0.0;
    aaaqi_B.bililiuliangfa18_3_m = 0.0;
    aaaqi_B.bililiuliangfa18_4_b = 0.0;
  }
}

/* Function for Chart: '<S25>/Chart' */
static void aaaqi_SXQxieya(void)
{
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  boolean_T guard4 = false;
  boolean_T guard5 = false;
  boolean_T guard6 = false;
  boolean_T guard7 = false;
  boolean_T guard8 = false;
  boolean_T guard9 = false;
  boolean_T guard10 = false;
  boolean_T guard11 = false;
  boolean_T guard12 = false;
  boolean_T guard13 = false;
  boolean_T guard14 = false;
  boolean_T guard15 = false;
  boolean_T guard16 = false;
  boolean_T guard17 = false;
  boolean_T guard18 = false;
  boolean_T guard19 = false;
  boolean_T guard20 = false;

  /* During 'SXQxieya': '<S27>:1417' */
  guard1 = false;
  guard2 = false;
  guard3 = false;
  guard4 = false;
  guard5 = false;
  guard6 = false;
  guard7 = false;
  guard8 = false;
  guard9 = false;
  guard10 = false;
  guard11 = false;
  guard12 = false;
  guard13 = false;
  guard14 = false;
  guard15 = false;
  guard16 = false;
  guard17 = false;
  guard18 = false;
  guard19 = false;
  guard20 = false;
  switch (aaaqi_DW.is_SXQxieya_l) {
   case aaaqi_IN_off1:
    /* During 'off1': '<S27>:1474' */
    if (aaaqi_B.DataTypeConversion12 == 1.0) {
      /* Transition: '<S27>:1443' */
      aaaqi_DW.is_SXQxieya_l = aaaqi_IN_on1_o5;
      aaaqi_DW.temporalCounter_i2 = 0U;

      /* Entry 'on1': '<S27>:1475' */
      aaaqi_B.diancifa11_5_o = 1.0;
    }
    break;

   case aaaqi_IN_off2_c:
    /* During 'off2': '<S27>:1485' */
    break;

   case aaaqi_IN_on1_o5:
    /* During 'on1': '<S27>:1475' */
    if (aaaqi_DW.temporalCounter_i2 >= 500) {
      /* Transition: '<S27>:1444' */
      aaaqi_DW.is_SXQxieya_l = aaaqi_IN_xieya1;

      /* Entry 'xieya1': '<S27>:1476' */
      aaaqi_B.bililiuliangfa18_1_h = 1.0;
      aaaqi_B.bililiuliangfa18_2_i = 1.0;
      aaaqi_B.p0_2 = aaaqi_B.u_m;
    }
    break;

   case aaaqi_IN_xieya1:
    /* During 'xieya1': '<S27>:1476' */
    /* Transition: '<S27>:1445' */
    if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.p0_2) &&
        (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.p0_2)) {
      /* Transition: '<S27>:1449' */
      if (aaaqi_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1447' */
        aaaqi_DW.is_SXQxieya_l = aaaqi_IN_xieya1_1;

        /* Entry 'xieya1_1': '<S27>:1477' */
        aaaqi_B.bililiuliangfa18_1_h = 1.0;
        aaaqi_B.bililiuliangfa18_2_i = 1.0;
      } else if (aaaqi_B.DataTypeConversion12 == 0.0) {
        /* Transition: '<S27>:1437' */
        guard2 = true;
      } else {
        guard17 = true;
      }
    } else {
      guard17 = true;
    }
    break;

   case aaaqi_IN_xieya1_1:
    /* During 'xieya1_1': '<S27>:1477' */
    /* Transition: '<S27>:1451' */
    if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.p0_2) &&
        (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.p0_2)) {
      /* Transition: '<S27>:1449' */
      if (aaaqi_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1447' */
        aaaqi_DW.is_SXQxieya_l = aaaqi_IN_xieya1_1;

        /* Entry 'xieya1_1': '<S27>:1477' */
        aaaqi_B.bililiuliangfa18_1_h = 1.0;
        aaaqi_B.bililiuliangfa18_2_i = 1.0;
      } else if (aaaqi_B.DataTypeConversion12 == 0.0) {
        /* Transition: '<S27>:1437' */
        guard3 = true;
      } else {
        guard18 = true;
      }
    } else {
      guard18 = true;
    }
    break;

   case aaaqi_IN_xieya1_2:
    /* During 'xieya1_2': '<S27>:1478' */
    /* Transition: '<S27>:1450' */
    if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.p0_2) &&
        (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.p0_2)) {
      /* Transition: '<S27>:1449' */
      if (aaaqi_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1447' */
        aaaqi_DW.is_SXQxieya_l = aaaqi_IN_xieya1_1;

        /* Entry 'xieya1_1': '<S27>:1477' */
        aaaqi_B.bililiuliangfa18_1_h = 1.0;
        aaaqi_B.bililiuliangfa18_2_i = 1.0;
      } else if (aaaqi_B.DataTypeConversion12 == 0.0) {
        /* Transition: '<S27>:1437' */
        guard4 = true;
      } else {
        guard19 = true;
      }
    } else {
      guard19 = true;
    }
    break;

   case aaaqi_IN_xieya1_3:
    /* During 'xieya1_3': '<S27>:1480' */
    /* Transition: '<S27>:1452' */
    if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.p0_2) &&
        (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.p0_2)) {
      /* Transition: '<S27>:1449' */
      if (aaaqi_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1447' */
        aaaqi_DW.is_SXQxieya_l = aaaqi_IN_xieya1_1;

        /* Entry 'xieya1_1': '<S27>:1477' */
        aaaqi_B.bililiuliangfa18_1_h = 1.0;
        aaaqi_B.bililiuliangfa18_2_i = 1.0;
      } else if (aaaqi_B.DataTypeConversion12 == 0.0) {
        /* Transition: '<S27>:1437' */
        guard5 = true;
      } else {
        guard20 = true;
      }
    } else {
      guard20 = true;
    }
    break;

   case aaaqi_IN_xieya2:
    aaaqi_xieya2();
    break;

   case aaaqi_IN_xieya7_1:
    aaaqi_xieya7_1();
    break;

   case aaaqi_IN_xieya7_2:
    aaaqi_xieya7_2();
    break;

   case aaaqi_IN_xieya7_3:
    aaaqi_xieya7_3();
    break;

   default:
    /* During 'xieya8': '<S27>:1483' */
    if (aaaqi_DW.temporalCounter_i2 >= 1000) {
      /* Transition: '<S27>:1472' */
      if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_c) &&
          (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_c)) {
        /* Transition: '<S27>:1473' */
        aaaqi_DW.is_SXQxieya_l = aaaqi_IN_off2_c;

        /* Entry 'off2': '<S27>:1485' */
        aaaqi_B.diancifa11_5_o = 0.0;
        aaaqi_B.bililiuliangfa18_1_h = 0.0;
        aaaqi_B.bililiuliangfa18_2_i = 0.0;
        aaaqi_B.SXQxieyawancheng_p = 1.0;
      } else {
        if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_c) ||
            (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_c)) {
          /* Transition: '<S27>:1469' */
          if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_c) &&
              (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_c)) {
            /* Transition: '<S27>:1463' */
            if (aaaqi_B.DataTypeConversion12 == 1.0) {
              /* Transition: '<S27>:1461' */
              aaaqi_DW.is_SXQxieya_l = aaaqi_IN_xieya7_1;

              /* Entry 'xieya7_1': '<S27>:1481' */
              aaaqi_B.bililiuliangfa18_1_h = 1.0;
              aaaqi_B.bililiuliangfa18_2_i = 1.0;
            } else if (aaaqi_B.DataTypeConversion12 == 0.0) {
              /* Transition: '<S27>:1439' */
              guard1 = true;
            } else {
              guard16 = true;
            }
          } else {
            guard16 = true;
          }
        }
      }
    }
    break;
  }

  if (guard20) {
    if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.p0_2) &&
        (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.p0_2)) {
      /* Transition: '<S27>:1446' */
      if (aaaqi_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1448' */
        aaaqi_DW.is_SXQxieya_l = aaaqi_IN_xieya1_2;

        /* Entry 'xieya1_2': '<S27>:1478' */
        aaaqi_B.bililiuliangfa18_1_h = 1.0;
        aaaqi_B.bililiuliangfa18_2_i = 0.0;
      } else if (aaaqi_B.DataTypeConversion12 == 0.0) {
        /* Transition: '<S27>:1435' */
        guard5 = true;
      } else {
        guard15 = true;
      }
    } else {
      guard15 = true;
    }
  }

  if (guard19) {
    if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.p0_2) &&
        (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.p0_2)) {
      /* Transition: '<S27>:1446' */
      if (aaaqi_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1448' */
        aaaqi_DW.is_SXQxieya_l = aaaqi_IN_xieya1_2;

        /* Entry 'xieya1_2': '<S27>:1478' */
        aaaqi_B.bililiuliangfa18_1_h = 1.0;
        aaaqi_B.bililiuliangfa18_2_i = 0.0;
      } else if (aaaqi_B.DataTypeConversion12 == 0.0) {
        /* Transition: '<S27>:1435' */
        guard4 = true;
      } else {
        guard14 = true;
      }
    } else {
      guard14 = true;
    }
  }

  if (guard18) {
    if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.p0_2) &&
        (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.p0_2)) {
      /* Transition: '<S27>:1446' */
      if (aaaqi_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1448' */
        aaaqi_DW.is_SXQxieya_l = aaaqi_IN_xieya1_2;

        /* Entry 'xieya1_2': '<S27>:1478' */
        aaaqi_B.bililiuliangfa18_1_h = 1.0;
        aaaqi_B.bililiuliangfa18_2_i = 0.0;
      } else if (aaaqi_B.DataTypeConversion12 == 0.0) {
        /* Transition: '<S27>:1435' */
        guard3 = true;
      } else {
        guard13 = true;
      }
    } else {
      guard13 = true;
    }
  }

  if (guard17) {
    if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.p0_2) &&
        (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.p0_2)) {
      /* Transition: '<S27>:1446' */
      if (aaaqi_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1448' */
        aaaqi_DW.is_SXQxieya_l = aaaqi_IN_xieya1_2;

        /* Entry 'xieya1_2': '<S27>:1478' */
        aaaqi_B.bililiuliangfa18_1_h = 1.0;
        aaaqi_B.bililiuliangfa18_2_i = 0.0;
      } else if (aaaqi_B.DataTypeConversion12 == 0.0) {
        /* Transition: '<S27>:1435' */
        guard2 = true;
      } else {
        guard12 = true;
      }
    } else {
      guard12 = true;
    }
  }

  if (guard16) {
    if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_c) &&
        (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_c)) {
      /* Transition: '<S27>:1462' */
      if (aaaqi_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1460' */
        aaaqi_DW.is_SXQxieya_l = aaaqi_IN_xieya7_2;

        /* Entry 'xieya7_2': '<S27>:1482' */
        aaaqi_B.bililiuliangfa18_1_h = 1.0;
        aaaqi_B.bililiuliangfa18_2_i = 0.0;
      } else if (aaaqi_B.DataTypeConversion12 == 0.0) {
        /* Transition: '<S27>:1441' */
        guard1 = true;
      } else {
        guard11 = true;
      }
    } else {
      guard11 = true;
    }
  }

  if (guard15) {
    if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.p0_2) &&
        (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.p0_2)) {
      /* Transition: '<S27>:1454' */
      if (aaaqi_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1457' */
        aaaqi_DW.is_SXQxieya_l = aaaqi_IN_xieya1_3;

        /* Entry 'xieya1_3': '<S27>:1480' */
        aaaqi_B.bililiuliangfa18_1_h = 0.0;
        aaaqi_B.bililiuliangfa18_2_i = 1.0;
      } else if (aaaqi_B.DataTypeConversion12 == 0.0) {
        /* Transition: '<S27>:1436' */
        guard5 = true;
      } else {
        guard10 = true;
      }
    } else {
      guard10 = true;
    }
  }

  if (guard14) {
    if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.p0_2) &&
        (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.p0_2)) {
      /* Transition: '<S27>:1454' */
      if (aaaqi_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1457' */
        aaaqi_DW.is_SXQxieya_l = aaaqi_IN_xieya1_3;

        /* Entry 'xieya1_3': '<S27>:1480' */
        aaaqi_B.bililiuliangfa18_1_h = 0.0;
        aaaqi_B.bililiuliangfa18_2_i = 1.0;
      } else if (aaaqi_B.DataTypeConversion12 == 0.0) {
        /* Transition: '<S27>:1436' */
        guard4 = true;
      } else {
        guard9 = true;
      }
    } else {
      guard9 = true;
    }
  }

  if (guard13) {
    if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.p0_2) &&
        (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.p0_2)) {
      /* Transition: '<S27>:1454' */
      if (aaaqi_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1457' */
        aaaqi_DW.is_SXQxieya_l = aaaqi_IN_xieya1_3;

        /* Entry 'xieya1_3': '<S27>:1480' */
        aaaqi_B.bililiuliangfa18_1_h = 0.0;
        aaaqi_B.bililiuliangfa18_2_i = 1.0;
      } else if (aaaqi_B.DataTypeConversion12 == 0.0) {
        /* Transition: '<S27>:1436' */
        guard3 = true;
      } else {
        guard8 = true;
      }
    } else {
      guard8 = true;
    }
  }

  if (guard12) {
    if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.p0_2) &&
        (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.p0_2)) {
      /* Transition: '<S27>:1454' */
      if (aaaqi_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1457' */
        aaaqi_DW.is_SXQxieya_l = aaaqi_IN_xieya1_3;

        /* Entry 'xieya1_3': '<S27>:1480' */
        aaaqi_B.bililiuliangfa18_1_h = 0.0;
        aaaqi_B.bililiuliangfa18_2_i = 1.0;
      } else if (aaaqi_B.DataTypeConversion12 == 0.0) {
        /* Transition: '<S27>:1436' */
        guard2 = true;
      } else {
        guard7 = true;
      }
    } else {
      guard7 = true;
    }
  }

  if (guard11) {
    if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_c) &&
        (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_c)) {
      /* Transition: '<S27>:1466' */
      if (aaaqi_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1471' */
        aaaqi_DW.is_SXQxieya_l = aaaqi_IN_xieya7_3;

        /* Entry 'xieya7_3': '<S27>:1484' */
        aaaqi_B.bililiuliangfa18_1_h = 0.0;
        aaaqi_B.bililiuliangfa18_2_i = 1.0;
      } else if (aaaqi_B.DataTypeConversion12 == 0.0) {
        /* Transition: '<S27>:1442' */
        guard1 = true;
      } else {
        guard6 = true;
      }
    } else {
      guard6 = true;
    }
  }

  if (guard10) {
    if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.p0_2) &&
        (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.p0_2)) {
      /* Transition: '<S27>:1453' */
      if (aaaqi_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1456' */
        aaaqi_DW.is_SXQxieya_l = aaaqi_IN_xieya2;

        /* Entry 'xieya2': '<S27>:1479' */
        aaaqi_B.bililiuliangfa18_1_h = 1.0;
        aaaqi_B.bililiuliangfa18_2_i = 1.0;
        aaaqi_B.p0_2 -= 0.03;
      } else {
        if (aaaqi_B.DataTypeConversion12 == 0.0) {
          /* Transition: '<S27>:1438' */
          guard5 = true;
        }
      }
    }
  }

  if (guard9) {
    if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.p0_2) &&
        (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.p0_2)) {
      /* Transition: '<S27>:1453' */
      if (aaaqi_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1456' */
        aaaqi_DW.is_SXQxieya_l = aaaqi_IN_xieya2;

        /* Entry 'xieya2': '<S27>:1479' */
        aaaqi_B.bililiuliangfa18_1_h = 1.0;
        aaaqi_B.bililiuliangfa18_2_i = 1.0;
        aaaqi_B.p0_2 -= 0.03;
      } else {
        if (aaaqi_B.DataTypeConversion12 == 0.0) {
          /* Transition: '<S27>:1438' */
          guard4 = true;
        }
      }
    }
  }

  if (guard8) {
    if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.p0_2) &&
        (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.p0_2)) {
      /* Transition: '<S27>:1453' */
      if (aaaqi_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1456' */
        aaaqi_DW.is_SXQxieya_l = aaaqi_IN_xieya2;

        /* Entry 'xieya2': '<S27>:1479' */
        aaaqi_B.bililiuliangfa18_1_h = 1.0;
        aaaqi_B.bililiuliangfa18_2_i = 1.0;
        aaaqi_B.p0_2 -= 0.03;
      } else {
        if (aaaqi_B.DataTypeConversion12 == 0.0) {
          /* Transition: '<S27>:1438' */
          guard3 = true;
        }
      }
    }
  }

  if (guard7) {
    if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.p0_2) &&
        (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.p0_2)) {
      /* Transition: '<S27>:1453' */
      if (aaaqi_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1456' */
        aaaqi_DW.is_SXQxieya_l = aaaqi_IN_xieya2;

        /* Entry 'xieya2': '<S27>:1479' */
        aaaqi_B.bililiuliangfa18_1_h = 1.0;
        aaaqi_B.bililiuliangfa18_2_i = 1.0;
        aaaqi_B.p0_2 -= 0.03;
      } else {
        if (aaaqi_B.DataTypeConversion12 == 0.0) {
          /* Transition: '<S27>:1438' */
          guard2 = true;
        }
      }
    }
  }

  if (guard6) {
    if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_c) &&
        (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_c)) {
      /* Transition: '<S27>:1467' */
      if (aaaqi_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1470' */
        aaaqi_DW.is_SXQxieya_l = aaaqi_IN_xieya8;
        aaaqi_DW.temporalCounter_i2 = 0U;

        /* Entry 'xieya8': '<S27>:1483' */
        aaaqi_B.bililiuliangfa18_1_h = 1.0;
        aaaqi_B.bililiuliangfa18_2_i = 1.0;
      } else {
        if (aaaqi_B.DataTypeConversion12 == 0.0) {
          /* Transition: '<S27>:1440' */
          guard1 = true;
        }
      }
    }
  }

  if (guard5) {
    /* Transition: '<S27>:1433' */
    aaaqi_DW.is_SXQxieya_l = aaaqi_IN_off1;

    /* Entry 'off1': '<S27>:1474' */
    aaaqi_B.diancifa11_1_d = 0.0;
    aaaqi_B.diancifa11_5_o = 0.0;
    aaaqi_B.bililiuliangfa18_1_h = 0.0;
    aaaqi_B.bililiuliangfa18_2_i = 0.0;
    aaaqi_B.bililiuliangfa18_3_m = 0.0;
    aaaqi_B.bililiuliangfa18_4_b = 0.0;
  }

  if (guard4) {
    /* Transition: '<S27>:1433' */
    aaaqi_DW.is_SXQxieya_l = aaaqi_IN_off1;

    /* Entry 'off1': '<S27>:1474' */
    aaaqi_B.diancifa11_1_d = 0.0;
    aaaqi_B.diancifa11_5_o = 0.0;
    aaaqi_B.bililiuliangfa18_1_h = 0.0;
    aaaqi_B.bililiuliangfa18_2_i = 0.0;
    aaaqi_B.bililiuliangfa18_3_m = 0.0;
    aaaqi_B.bililiuliangfa18_4_b = 0.0;
  }

  if (guard3) {
    /* Transition: '<S27>:1433' */
    aaaqi_DW.is_SXQxieya_l = aaaqi_IN_off1;

    /* Entry 'off1': '<S27>:1474' */
    aaaqi_B.diancifa11_1_d = 0.0;
    aaaqi_B.diancifa11_5_o = 0.0;
    aaaqi_B.bililiuliangfa18_1_h = 0.0;
    aaaqi_B.bililiuliangfa18_2_i = 0.0;
    aaaqi_B.bililiuliangfa18_3_m = 0.0;
    aaaqi_B.bililiuliangfa18_4_b = 0.0;
  }

  if (guard2) {
    /* Transition: '<S27>:1433' */
    aaaqi_DW.is_SXQxieya_l = aaaqi_IN_off1;

    /* Entry 'off1': '<S27>:1474' */
    aaaqi_B.diancifa11_1_d = 0.0;
    aaaqi_B.diancifa11_5_o = 0.0;
    aaaqi_B.bililiuliangfa18_1_h = 0.0;
    aaaqi_B.bililiuliangfa18_2_i = 0.0;
    aaaqi_B.bililiuliangfa18_3_m = 0.0;
    aaaqi_B.bililiuliangfa18_4_b = 0.0;
  }

  if (guard1) {
    /* Transition: '<S27>:1434' */
    aaaqi_DW.is_SXQxieya_l = aaaqi_IN_off1;

    /* Entry 'off1': '<S27>:1474' */
    aaaqi_B.diancifa11_1_d = 0.0;
    aaaqi_B.diancifa11_5_o = 0.0;
    aaaqi_B.bililiuliangfa18_1_h = 0.0;
    aaaqi_B.bililiuliangfa18_2_i = 0.0;
    aaaqi_B.bililiuliangfa18_3_m = 0.0;
    aaaqi_B.bililiuliangfa18_4_b = 0.0;
  }
}

/* Function for Chart: '<S25>/Chart' */
static void aaaqi_jiaya1(void)
{
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  boolean_T guard4 = false;

  /* During 'jiaya1': '<S27>:1575' */
  /* Transition: '<S27>:1527' */
  guard1 = false;
  guard2 = false;
  guard3 = false;
  guard4 = false;
  if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.p0_1) &&
      (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.p0_1)) {
    /* Transition: '<S27>:1522' */
    if (aaaqi_B.DataTypeConversion11 == 1.0) {
      /* Transition: '<S27>:1512' */
      aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiaya1_1;

      /* Entry 'jiaya1_1': '<S27>:1570' */
      aaaqi_B.bililiuliangfa18_3_m = 1.0;
      aaaqi_B.bililiuliangfa18_4_b = 1.0;
    } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
      /* Transition: '<S27>:1523' */
      guard1 = true;
    } else {
      guard4 = true;
    }
  } else {
    guard4 = true;
  }

  if (guard4) {
    if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.p0_1) &&
        (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.p0_1)) {
      /* Transition: '<S27>:1536' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1540' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiaya1_2;

        /* Entry 'jiaya1_2': '<S27>:1578' */
        aaaqi_B.bililiuliangfa18_3_m = 1.0;
        aaaqi_B.bililiuliangfa18_4_b = 0.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1541' */
        guard1 = true;
      } else {
        guard3 = true;
      }
    } else {
      guard3 = true;
    }
  }

  if (guard3) {
    if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.p0_1) &&
        (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.p0_1)) {
      /* Transition: '<S27>:1530' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1542' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiaya1_3;

        /* Entry 'jiaya1_3': '<S27>:1579' */
        aaaqi_B.bililiuliangfa18_3_m = 0.0;
        aaaqi_B.bililiuliangfa18_4_b = 1.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1543' */
        guard1 = true;
      } else {
        guard2 = true;
      }
    } else {
      guard2 = true;
    }
  }

  if (guard2) {
    if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.p0_1) &&
        (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.p0_1)) {
      /* Transition: '<S27>:1518' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1509' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiaya2;
        aaaqi_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiaya2': '<S27>:1573' */
        aaaqi_B.bililiuliangfa18_3_m = 1.0;
        aaaqi_B.bililiuliangfa18_4_b = 1.0;
        aaaqi_B.p0_1 += 0.03;
      } else {
        if (aaaqi_B.DataTypeConversion11 == 0.0) {
          /* Transition: '<S27>:1519' */
          guard1 = true;
        }
      }
    }
  }

  if (guard1) {
    /* Transition: '<S27>:1699' */
    /* Transition: '<S27>:1685' */
    aaaqi_DW.is_SXQjunya_k = aaaqi_IN_off1_l;

    /* Entry 'off1': '<S27>:1673' */
    aaaqi_B.diancifa11_1_d = 0.0;
    aaaqi_B.diancifa11_5_o = 0.0;
    aaaqi_B.diancifa20_i = 0.0;
    aaaqi_B.diancifa3_l = 0.0;
    aaaqi_B.bililiuliangfa18_1_h = 0.0;
    aaaqi_B.bililiuliangfa18_2_i = 0.0;
    aaaqi_B.bililiuliangfa18_3_m = 0.0;
    aaaqi_B.bililiuliangfa18_4_b = 0.0;
  }
}

/* Function for Chart: '<S25>/Chart' */
static void aaaqi_jiaya1_1(void)
{
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  boolean_T guard4 = false;

  /* During 'jiaya1_1': '<S27>:1570' */
  /* Transition: '<S27>:1507' */
  guard1 = false;
  guard2 = false;
  guard3 = false;
  guard4 = false;
  if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.p0_1) &&
      (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.p0_1)) {
    /* Transition: '<S27>:1522' */
    if (aaaqi_B.DataTypeConversion11 == 1.0) {
      /* Transition: '<S27>:1512' */
      aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiaya1_1;

      /* Entry 'jiaya1_1': '<S27>:1570' */
      aaaqi_B.bililiuliangfa18_3_m = 1.0;
      aaaqi_B.bililiuliangfa18_4_b = 1.0;
    } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
      /* Transition: '<S27>:1523' */
      guard1 = true;
    } else {
      guard4 = true;
    }
  } else {
    guard4 = true;
  }

  if (guard4) {
    if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.p0_1) &&
        (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.p0_1)) {
      /* Transition: '<S27>:1536' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1540' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiaya1_2;

        /* Entry 'jiaya1_2': '<S27>:1578' */
        aaaqi_B.bililiuliangfa18_3_m = 1.0;
        aaaqi_B.bililiuliangfa18_4_b = 0.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1541' */
        guard1 = true;
      } else {
        guard3 = true;
      }
    } else {
      guard3 = true;
    }
  }

  if (guard3) {
    if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.p0_1) &&
        (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.p0_1)) {
      /* Transition: '<S27>:1530' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1542' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiaya1_3;

        /* Entry 'jiaya1_3': '<S27>:1579' */
        aaaqi_B.bililiuliangfa18_3_m = 0.0;
        aaaqi_B.bililiuliangfa18_4_b = 1.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1543' */
        guard1 = true;
      } else {
        guard2 = true;
      }
    } else {
      guard2 = true;
    }
  }

  if (guard2) {
    if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.p0_1) &&
        (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.p0_1)) {
      /* Transition: '<S27>:1518' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1509' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiaya2;
        aaaqi_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiaya2': '<S27>:1573' */
        aaaqi_B.bililiuliangfa18_3_m = 1.0;
        aaaqi_B.bililiuliangfa18_4_b = 1.0;
        aaaqi_B.p0_1 += 0.03;
      } else {
        if (aaaqi_B.DataTypeConversion11 == 0.0) {
          /* Transition: '<S27>:1519' */
          guard1 = true;
        }
      }
    }
  }

  if (guard1) {
    /* Transition: '<S27>:1699' */
    /* Transition: '<S27>:1685' */
    aaaqi_DW.is_SXQjunya_k = aaaqi_IN_off1_l;

    /* Entry 'off1': '<S27>:1673' */
    aaaqi_B.diancifa11_1_d = 0.0;
    aaaqi_B.diancifa11_5_o = 0.0;
    aaaqi_B.diancifa20_i = 0.0;
    aaaqi_B.diancifa3_l = 0.0;
    aaaqi_B.bililiuliangfa18_1_h = 0.0;
    aaaqi_B.bililiuliangfa18_2_i = 0.0;
    aaaqi_B.bililiuliangfa18_3_m = 0.0;
    aaaqi_B.bililiuliangfa18_4_b = 0.0;
  }
}

/* Function for Chart: '<S25>/Chart' */
static void aaaqi_jiaya1_2(void)
{
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  boolean_T guard4 = false;

  /* During 'jiaya1_2': '<S27>:1578' */
  /* Transition: '<S27>:1538' */
  guard1 = false;
  guard2 = false;
  guard3 = false;
  guard4 = false;
  if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.p0_1) &&
      (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.p0_1)) {
    /* Transition: '<S27>:1522' */
    if (aaaqi_B.DataTypeConversion11 == 1.0) {
      /* Transition: '<S27>:1512' */
      aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiaya1_1;

      /* Entry 'jiaya1_1': '<S27>:1570' */
      aaaqi_B.bililiuliangfa18_3_m = 1.0;
      aaaqi_B.bililiuliangfa18_4_b = 1.0;
    } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
      /* Transition: '<S27>:1523' */
      guard1 = true;
    } else {
      guard4 = true;
    }
  } else {
    guard4 = true;
  }

  if (guard4) {
    if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.p0_1) &&
        (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.p0_1)) {
      /* Transition: '<S27>:1536' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1540' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiaya1_2;

        /* Entry 'jiaya1_2': '<S27>:1578' */
        aaaqi_B.bililiuliangfa18_3_m = 1.0;
        aaaqi_B.bililiuliangfa18_4_b = 0.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1541' */
        guard1 = true;
      } else {
        guard3 = true;
      }
    } else {
      guard3 = true;
    }
  }

  if (guard3) {
    if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.p0_1) &&
        (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.p0_1)) {
      /* Transition: '<S27>:1530' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1542' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiaya1_3;

        /* Entry 'jiaya1_3': '<S27>:1579' */
        aaaqi_B.bililiuliangfa18_3_m = 0.0;
        aaaqi_B.bililiuliangfa18_4_b = 1.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1543' */
        guard1 = true;
      } else {
        guard2 = true;
      }
    } else {
      guard2 = true;
    }
  }

  if (guard2) {
    if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.p0_1) &&
        (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.p0_1)) {
      /* Transition: '<S27>:1518' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1509' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiaya2;
        aaaqi_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiaya2': '<S27>:1573' */
        aaaqi_B.bililiuliangfa18_3_m = 1.0;
        aaaqi_B.bililiuliangfa18_4_b = 1.0;
        aaaqi_B.p0_1 += 0.03;
      } else {
        if (aaaqi_B.DataTypeConversion11 == 0.0) {
          /* Transition: '<S27>:1519' */
          guard1 = true;
        }
      }
    }
  }

  if (guard1) {
    /* Transition: '<S27>:1699' */
    /* Transition: '<S27>:1685' */
    aaaqi_DW.is_SXQjunya_k = aaaqi_IN_off1_l;

    /* Entry 'off1': '<S27>:1673' */
    aaaqi_B.diancifa11_1_d = 0.0;
    aaaqi_B.diancifa11_5_o = 0.0;
    aaaqi_B.diancifa20_i = 0.0;
    aaaqi_B.diancifa3_l = 0.0;
    aaaqi_B.bililiuliangfa18_1_h = 0.0;
    aaaqi_B.bililiuliangfa18_2_i = 0.0;
    aaaqi_B.bililiuliangfa18_3_m = 0.0;
    aaaqi_B.bililiuliangfa18_4_b = 0.0;
  }
}

/* Function for Chart: '<S25>/Chart' */
static void aaaqi_jiaya1_3(void)
{
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  boolean_T guard4 = false;

  /* During 'jiaya1_3': '<S27>:1579' */
  /* Transition: '<S27>:1534' */
  guard1 = false;
  guard2 = false;
  guard3 = false;
  guard4 = false;
  if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.p0_1) &&
      (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.p0_1)) {
    /* Transition: '<S27>:1522' */
    if (aaaqi_B.DataTypeConversion11 == 1.0) {
      /* Transition: '<S27>:1512' */
      aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiaya1_1;

      /* Entry 'jiaya1_1': '<S27>:1570' */
      aaaqi_B.bililiuliangfa18_3_m = 1.0;
      aaaqi_B.bililiuliangfa18_4_b = 1.0;
    } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
      /* Transition: '<S27>:1523' */
      guard1 = true;
    } else {
      guard4 = true;
    }
  } else {
    guard4 = true;
  }

  if (guard4) {
    if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.p0_1) &&
        (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.p0_1)) {
      /* Transition: '<S27>:1536' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1540' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiaya1_2;

        /* Entry 'jiaya1_2': '<S27>:1578' */
        aaaqi_B.bililiuliangfa18_3_m = 1.0;
        aaaqi_B.bililiuliangfa18_4_b = 0.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1541' */
        guard1 = true;
      } else {
        guard3 = true;
      }
    } else {
      guard3 = true;
    }
  }

  if (guard3) {
    if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.p0_1) &&
        (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.p0_1)) {
      /* Transition: '<S27>:1530' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1542' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiaya1_3;

        /* Entry 'jiaya1_3': '<S27>:1579' */
        aaaqi_B.bililiuliangfa18_3_m = 0.0;
        aaaqi_B.bililiuliangfa18_4_b = 1.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1543' */
        guard1 = true;
      } else {
        guard2 = true;
      }
    } else {
      guard2 = true;
    }
  }

  if (guard2) {
    if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.p0_1) &&
        (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.p0_1)) {
      /* Transition: '<S27>:1518' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1509' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiaya2;
        aaaqi_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiaya2': '<S27>:1573' */
        aaaqi_B.bililiuliangfa18_3_m = 1.0;
        aaaqi_B.bililiuliangfa18_4_b = 1.0;
        aaaqi_B.p0_1 += 0.03;
      } else {
        if (aaaqi_B.DataTypeConversion11 == 0.0) {
          /* Transition: '<S27>:1519' */
          guard1 = true;
        }
      }
    }
  }

  if (guard1) {
    /* Transition: '<S27>:1699' */
    /* Transition: '<S27>:1685' */
    aaaqi_DW.is_SXQjunya_k = aaaqi_IN_off1_l;

    /* Entry 'off1': '<S27>:1673' */
    aaaqi_B.diancifa11_1_d = 0.0;
    aaaqi_B.diancifa11_5_o = 0.0;
    aaaqi_B.diancifa20_i = 0.0;
    aaaqi_B.diancifa3_l = 0.0;
    aaaqi_B.bililiuliangfa18_1_h = 0.0;
    aaaqi_B.bililiuliangfa18_2_i = 0.0;
    aaaqi_B.bililiuliangfa18_3_m = 0.0;
    aaaqi_B.bililiuliangfa18_4_b = 0.0;
  }
}

/* Function for Chart: '<S25>/Chart' */
static void aaaqi_jiaya2(void)
{
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  boolean_T guard4 = false;
  boolean_T guard5 = false;
  boolean_T guard6 = false;
  boolean_T guard7 = false;
  boolean_T guard8 = false;
  boolean_T guard9 = false;

  /* During 'jiaya2': '<S27>:1573' */
  /* Transition: '<S27>:1517' */
  guard1 = false;
  guard2 = false;
  guard3 = false;
  guard4 = false;
  guard5 = false;
  guard6 = false;
  guard7 = false;
  guard8 = false;
  guard9 = false;
  if (aaaqi_B.p0_1 >= aaaqi_B.u_m) {
    /* Transition: '<S27>:1529' */
    if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.u_m) &&
        (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.u_m)) {
      /* Transition: '<S27>:1516' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1510' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiaya7_1;
        aaaqi_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiaya7_1': '<S27>:1571' */
        aaaqi_B.bililiuliangfa18_3_m = 1.0;
        aaaqi_B.bililiuliangfa18_4_b = 1.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1515' */
        guard2 = true;
      } else {
        guard9 = true;
      }
    } else {
      guard9 = true;
    }
  } else {
    guard6 = true;
  }

  if (guard9) {
    if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.u_m) &&
        (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.u_m)) {
      /* Transition: '<S27>:1524' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1526' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiaya7_2;
        aaaqi_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiaya7_2': '<S27>:1577' */
        aaaqi_B.bililiuliangfa18_3_m = 1.0;
        aaaqi_B.bililiuliangfa18_4_b = 0.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1525' */
        guard2 = true;
      } else {
        guard8 = true;
      }
    } else {
      guard8 = true;
    }
  }

  if (guard8) {
    if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.u_m) &&
        (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.u_m)) {
      /* Transition: '<S27>:1521' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1514' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiaya7_3;
        aaaqi_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiaya7_3': '<S27>:1572' */
        aaaqi_B.bililiuliangfa18_3_m = 0.0;
        aaaqi_B.bililiuliangfa18_4_b = 1.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1520' */
        guard2 = true;
      } else {
        guard7 = true;
      }
    } else {
      guard7 = true;
    }
  }

  if (guard7) {
    if ((aaaqi_DW.temporalCounter_i5 >= 250) && ((aaaqi_B.DataTypeConversion27[2]
          >= aaaqi_B.u_m) && (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.u_m)))
    {
      /* Transition: '<S27>:1539' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1546' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_off4_cw;
        aaaqi_DW.temporalCounter_i5 = 0U;

        /* Entry 'off4': '<S27>:1580' */
        aaaqi_B.bililiuliangfa18_3_m = 0.0;
        aaaqi_B.bililiuliangfa18_4_b = 0.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1545' */
        guard2 = true;
      } else {
        guard6 = true;
      }
    } else {
      guard6 = true;
    }
  }

  if (guard6) {
    if (aaaqi_B.p0_1 < aaaqi_B.u_m) {
      /* Transition: '<S27>:1528' */
      if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.p0_1) &&
          (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.p0_1)) {
        /* Transition: '<S27>:1522' */
        if (aaaqi_B.DataTypeConversion11 == 1.0) {
          /* Transition: '<S27>:1512' */
          aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiaya1_1;

          /* Entry 'jiaya1_1': '<S27>:1570' */
          aaaqi_B.bililiuliangfa18_3_m = 1.0;
          aaaqi_B.bililiuliangfa18_4_b = 1.0;
        } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
          /* Transition: '<S27>:1523' */
          guard1 = true;
        } else {
          guard5 = true;
        }
      } else {
        guard5 = true;
      }
    }
  }

  if (guard5) {
    if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.p0_1) &&
        (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.p0_1)) {
      /* Transition: '<S27>:1536' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1540' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiaya1_2;

        /* Entry 'jiaya1_2': '<S27>:1578' */
        aaaqi_B.bililiuliangfa18_3_m = 1.0;
        aaaqi_B.bililiuliangfa18_4_b = 0.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1541' */
        guard1 = true;
      } else {
        guard4 = true;
      }
    } else {
      guard4 = true;
    }
  }

  if (guard4) {
    if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.p0_1) &&
        (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.p0_1)) {
      /* Transition: '<S27>:1530' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1542' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiaya1_3;

        /* Entry 'jiaya1_3': '<S27>:1579' */
        aaaqi_B.bililiuliangfa18_3_m = 0.0;
        aaaqi_B.bililiuliangfa18_4_b = 1.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1543' */
        guard1 = true;
      } else {
        guard3 = true;
      }
    } else {
      guard3 = true;
    }
  }

  if (guard3) {
    if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.p0_1) &&
        (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.p0_1)) {
      /* Transition: '<S27>:1518' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1509' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiaya2;
        aaaqi_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiaya2': '<S27>:1573' */
        aaaqi_B.bililiuliangfa18_3_m = 1.0;
        aaaqi_B.bililiuliangfa18_4_b = 1.0;
        aaaqi_B.p0_1 += 0.03;
      } else {
        if (aaaqi_B.DataTypeConversion11 == 0.0) {
          /* Transition: '<S27>:1519' */
          guard1 = true;
        }
      }
    }
  }

  if (guard2) {
    /* Transition: '<S27>:1548' */
    guard1 = true;
  }

  if (guard1) {
    /* Transition: '<S27>:1699' */
    /* Transition: '<S27>:1685' */
    aaaqi_DW.is_SXQjunya_k = aaaqi_IN_off1_l;

    /* Entry 'off1': '<S27>:1673' */
    aaaqi_B.diancifa11_1_d = 0.0;
    aaaqi_B.diancifa11_5_o = 0.0;
    aaaqi_B.diancifa20_i = 0.0;
    aaaqi_B.diancifa3_l = 0.0;
    aaaqi_B.bililiuliangfa18_1_h = 0.0;
    aaaqi_B.bililiuliangfa18_2_i = 0.0;
    aaaqi_B.bililiuliangfa18_3_m = 0.0;
    aaaqi_B.bililiuliangfa18_4_b = 0.0;
  }
}

/* Function for Chart: '<S25>/Chart' */
static void aaaqi_jiaya7_1(void)
{
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  boolean_T guard4 = false;

  /* During 'jiaya7_1': '<S27>:1571' */
  /* Transition: '<S27>:1513' */
  guard1 = false;
  guard2 = false;
  guard3 = false;
  guard4 = false;
  if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.u_m) &&
      (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.u_m)) {
    /* Transition: '<S27>:1516' */
    if (aaaqi_B.DataTypeConversion11 == 1.0) {
      /* Transition: '<S27>:1510' */
      aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiaya7_1;
      aaaqi_DW.temporalCounter_i5 = 0U;

      /* Entry 'jiaya7_1': '<S27>:1571' */
      aaaqi_B.bililiuliangfa18_3_m = 1.0;
      aaaqi_B.bililiuliangfa18_4_b = 1.0;
    } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
      /* Transition: '<S27>:1515' */
      guard1 = true;
    } else {
      guard4 = true;
    }
  } else {
    guard4 = true;
  }

  if (guard4) {
    if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.u_m) &&
        (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.u_m)) {
      /* Transition: '<S27>:1524' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1526' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiaya7_2;
        aaaqi_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiaya7_2': '<S27>:1577' */
        aaaqi_B.bililiuliangfa18_3_m = 1.0;
        aaaqi_B.bililiuliangfa18_4_b = 0.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1525' */
        guard1 = true;
      } else {
        guard3 = true;
      }
    } else {
      guard3 = true;
    }
  }

  if (guard3) {
    if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.u_m) &&
        (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.u_m)) {
      /* Transition: '<S27>:1521' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1514' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiaya7_3;
        aaaqi_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiaya7_3': '<S27>:1572' */
        aaaqi_B.bililiuliangfa18_3_m = 0.0;
        aaaqi_B.bililiuliangfa18_4_b = 1.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1520' */
        guard1 = true;
      } else {
        guard2 = true;
      }
    } else {
      guard2 = true;
    }
  }

  if (guard2) {
    if ((aaaqi_DW.temporalCounter_i5 >= 250) && ((aaaqi_B.DataTypeConversion27[2]
          >= aaaqi_B.u_m) && (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.u_m)))
    {
      /* Transition: '<S27>:1539' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1546' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_off4_cw;
        aaaqi_DW.temporalCounter_i5 = 0U;

        /* Entry 'off4': '<S27>:1580' */
        aaaqi_B.bililiuliangfa18_3_m = 0.0;
        aaaqi_B.bililiuliangfa18_4_b = 0.0;
      } else {
        if (aaaqi_B.DataTypeConversion11 == 0.0) {
          /* Transition: '<S27>:1545' */
          guard1 = true;
        }
      }
    }
  }

  if (guard1) {
    /* Transition: '<S27>:1548' */
    /* Transition: '<S27>:1699' */
    /* Transition: '<S27>:1685' */
    aaaqi_DW.is_SXQjunya_k = aaaqi_IN_off1_l;

    /* Entry 'off1': '<S27>:1673' */
    aaaqi_B.diancifa11_1_d = 0.0;
    aaaqi_B.diancifa11_5_o = 0.0;
    aaaqi_B.diancifa20_i = 0.0;
    aaaqi_B.diancifa3_l = 0.0;
    aaaqi_B.bililiuliangfa18_1_h = 0.0;
    aaaqi_B.bililiuliangfa18_2_i = 0.0;
    aaaqi_B.bililiuliangfa18_3_m = 0.0;
    aaaqi_B.bililiuliangfa18_4_b = 0.0;
  }
}

/* Function for Chart: '<S25>/Chart' */
static void aaaqi_jiaya7_2(void)
{
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  boolean_T guard4 = false;

  /* During 'jiaya7_2': '<S27>:1577' */
  /* Transition: '<S27>:1532' */
  guard1 = false;
  guard2 = false;
  guard3 = false;
  guard4 = false;
  if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.u_m) &&
      (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.u_m)) {
    /* Transition: '<S27>:1516' */
    if (aaaqi_B.DataTypeConversion11 == 1.0) {
      /* Transition: '<S27>:1510' */
      aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiaya7_1;
      aaaqi_DW.temporalCounter_i5 = 0U;

      /* Entry 'jiaya7_1': '<S27>:1571' */
      aaaqi_B.bililiuliangfa18_3_m = 1.0;
      aaaqi_B.bililiuliangfa18_4_b = 1.0;
    } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
      /* Transition: '<S27>:1515' */
      guard1 = true;
    } else {
      guard4 = true;
    }
  } else {
    guard4 = true;
  }

  if (guard4) {
    if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.u_m) &&
        (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.u_m)) {
      /* Transition: '<S27>:1524' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1526' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiaya7_2;
        aaaqi_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiaya7_2': '<S27>:1577' */
        aaaqi_B.bililiuliangfa18_3_m = 1.0;
        aaaqi_B.bililiuliangfa18_4_b = 0.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1525' */
        guard1 = true;
      } else {
        guard3 = true;
      }
    } else {
      guard3 = true;
    }
  }

  if (guard3) {
    if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.u_m) &&
        (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.u_m)) {
      /* Transition: '<S27>:1521' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1514' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiaya7_3;
        aaaqi_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiaya7_3': '<S27>:1572' */
        aaaqi_B.bililiuliangfa18_3_m = 0.0;
        aaaqi_B.bililiuliangfa18_4_b = 1.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1520' */
        guard1 = true;
      } else {
        guard2 = true;
      }
    } else {
      guard2 = true;
    }
  }

  if (guard2) {
    if ((aaaqi_DW.temporalCounter_i5 >= 250) && ((aaaqi_B.DataTypeConversion27[2]
          >= aaaqi_B.u_m) && (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.u_m)))
    {
      /* Transition: '<S27>:1539' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1546' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_off4_cw;
        aaaqi_DW.temporalCounter_i5 = 0U;

        /* Entry 'off4': '<S27>:1580' */
        aaaqi_B.bililiuliangfa18_3_m = 0.0;
        aaaqi_B.bililiuliangfa18_4_b = 0.0;
      } else {
        if (aaaqi_B.DataTypeConversion11 == 0.0) {
          /* Transition: '<S27>:1545' */
          guard1 = true;
        }
      }
    }
  }

  if (guard1) {
    /* Transition: '<S27>:1548' */
    /* Transition: '<S27>:1699' */
    /* Transition: '<S27>:1685' */
    aaaqi_DW.is_SXQjunya_k = aaaqi_IN_off1_l;

    /* Entry 'off1': '<S27>:1673' */
    aaaqi_B.diancifa11_1_d = 0.0;
    aaaqi_B.diancifa11_5_o = 0.0;
    aaaqi_B.diancifa20_i = 0.0;
    aaaqi_B.diancifa3_l = 0.0;
    aaaqi_B.bililiuliangfa18_1_h = 0.0;
    aaaqi_B.bililiuliangfa18_2_i = 0.0;
    aaaqi_B.bililiuliangfa18_3_m = 0.0;
    aaaqi_B.bililiuliangfa18_4_b = 0.0;
  }
}

/* Function for Chart: '<S25>/Chart' */
static void aaaqi_jiaya7_3(void)
{
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  boolean_T guard4 = false;

  /* During 'jiaya7_3': '<S27>:1572' */
  /* Transition: '<S27>:1508' */
  guard1 = false;
  guard2 = false;
  guard3 = false;
  guard4 = false;
  if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.u_m) &&
      (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.u_m)) {
    /* Transition: '<S27>:1516' */
    if (aaaqi_B.DataTypeConversion11 == 1.0) {
      /* Transition: '<S27>:1510' */
      aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiaya7_1;
      aaaqi_DW.temporalCounter_i5 = 0U;

      /* Entry 'jiaya7_1': '<S27>:1571' */
      aaaqi_B.bililiuliangfa18_3_m = 1.0;
      aaaqi_B.bililiuliangfa18_4_b = 1.0;
    } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
      /* Transition: '<S27>:1515' */
      guard1 = true;
    } else {
      guard4 = true;
    }
  } else {
    guard4 = true;
  }

  if (guard4) {
    if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.u_m) &&
        (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.u_m)) {
      /* Transition: '<S27>:1524' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1526' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiaya7_2;
        aaaqi_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiaya7_2': '<S27>:1577' */
        aaaqi_B.bililiuliangfa18_3_m = 1.0;
        aaaqi_B.bililiuliangfa18_4_b = 0.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1525' */
        guard1 = true;
      } else {
        guard3 = true;
      }
    } else {
      guard3 = true;
    }
  }

  if (guard3) {
    if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.u_m) &&
        (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.u_m)) {
      /* Transition: '<S27>:1521' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1514' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiaya7_3;
        aaaqi_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiaya7_3': '<S27>:1572' */
        aaaqi_B.bililiuliangfa18_3_m = 0.0;
        aaaqi_B.bililiuliangfa18_4_b = 1.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1520' */
        guard1 = true;
      } else {
        guard2 = true;
      }
    } else {
      guard2 = true;
    }
  }

  if (guard2) {
    if ((aaaqi_DW.temporalCounter_i5 >= 250) && ((aaaqi_B.DataTypeConversion27[2]
          >= aaaqi_B.u_m) && (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.u_m)))
    {
      /* Transition: '<S27>:1539' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1546' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_off4_cw;
        aaaqi_DW.temporalCounter_i5 = 0U;

        /* Entry 'off4': '<S27>:1580' */
        aaaqi_B.bililiuliangfa18_3_m = 0.0;
        aaaqi_B.bililiuliangfa18_4_b = 0.0;
      } else {
        if (aaaqi_B.DataTypeConversion11 == 0.0) {
          /* Transition: '<S27>:1545' */
          guard1 = true;
        }
      }
    }
  }

  if (guard1) {
    /* Transition: '<S27>:1548' */
    /* Transition: '<S27>:1699' */
    /* Transition: '<S27>:1685' */
    aaaqi_DW.is_SXQjunya_k = aaaqi_IN_off1_l;

    /* Entry 'off1': '<S27>:1673' */
    aaaqi_B.diancifa11_1_d = 0.0;
    aaaqi_B.diancifa11_5_o = 0.0;
    aaaqi_B.diancifa20_i = 0.0;
    aaaqi_B.diancifa3_l = 0.0;
    aaaqi_B.bililiuliangfa18_1_h = 0.0;
    aaaqi_B.bililiuliangfa18_2_i = 0.0;
    aaaqi_B.bililiuliangfa18_3_m = 0.0;
    aaaqi_B.bililiuliangfa18_4_b = 0.0;
  }
}

/* Function for Chart: '<S25>/Chart' */
static void aaaqi_off2(void)
{
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  boolean_T guard4 = false;
  boolean_T guard5 = false;

  /* During 'off2': '<S27>:1582' */
  if (aaaqi_DW.temporalCounter_i5 >= 1000) {
    /* Transition: '<S27>:1566' */
    guard1 = false;
    guard2 = false;
    guard3 = false;
    guard4 = false;
    guard5 = false;
    if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.u_m) ||
        (aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_m + 0.005) ||
        (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.u_m) ||
        (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_m + 0.005)) {
      /* Transition: '<S27>:1561' */
      if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_m + 0.005) &&
          (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_m + 0.005)) {
        /* Transition: '<S27>:1557' */
        if (aaaqi_B.DataTypeConversion11 == 1.0) {
          /* Transition: '<S27>:1558' */
          aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiance1_34;
          aaaqi_DW.temporalCounter_i5 = 0U;

          /* Entry 'jiance1_34': '<S27>:1583' */
          aaaqi_B.bililiuliangfa18_1_h = 1.0;
          aaaqi_B.bililiuliangfa18_2_i = 0.0;
        } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
          /* Transition: '<S27>:1554' */
          guard1 = true;
        } else {
          guard5 = true;
        }
      } else {
        guard5 = true;
      }
    } else {
      guard2 = true;
    }

    if (guard5) {
      if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.u_m) &&
          (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.u_m) &&
          (aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_m + 0.005) &&
          (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_m + 0.005)) {
        /* Transition: '<S27>:1559' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_off2_cf;
        aaaqi_DW.temporalCounter_i5 = 0U;

        /* Entry 'off2': '<S27>:1582' */
        aaaqi_B.bililiuliangfa18_1_h = 0.0;
        aaaqi_B.bililiuliangfa18_2_i = 0.0;
        aaaqi_B.bililiuliangfa18_3_m = 0.0;
        aaaqi_B.bililiuliangfa18_4_b = 0.0;
      } else if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_m + 0.005) &&
                 (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_m + 0.005)) {
        /* Transition: '<S27>:1563' */
        if (aaaqi_B.DataTypeConversion11 == 1.0) {
          /* Transition: '<S27>:1567' */
          aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiance1_36;
          aaaqi_DW.temporalCounter_i5 = 0U;

          /* Entry 'jiance1_36': '<S27>:1585' */
          aaaqi_B.bililiuliangfa18_1_h = 0.0;
          aaaqi_B.bililiuliangfa18_2_i = 1.0;
        } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
          /* Transition: '<S27>:1555' */
          guard1 = true;
        } else {
          guard4 = true;
        }
      } else {
        guard4 = true;
      }
    }

    if (guard4) {
      if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_m + 0.005) &&
          (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_m + 0.005)) {
        /* Transition: '<S27>:1565' */
        if (aaaqi_B.DataTypeConversion11 == 1.0) {
          /* Transition: '<S27>:1569' */
          aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiance1_32;
          aaaqi_DW.temporalCounter_i5 = 0U;

          /* Entry 'jiance1_32': '<S27>:1584' */
          aaaqi_B.bililiuliangfa18_1_h = 1.0;
          aaaqi_B.bililiuliangfa18_2_i = 1.0;
        } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
          /* Transition: '<S27>:1556' */
          guard1 = true;
        } else {
          guard3 = true;
        }
      } else {
        guard3 = true;
      }
    }

    if (guard3) {
      if ((aaaqi_DW.temporalCounter_i5 >= 250) &&
          ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_m + 0.005) &&
           (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_m + 0.005))) {
        /* Transition: '<S27>:1553' */
        if (aaaqi_B.DataTypeConversion11 == 1.0) {
          /* Transition: '<S27>:1547' */
          aaaqi_DW.is_SXQjunya_k = aaaqi_IN_off3_pi;
          aaaqi_DW.temporalCounter_i5 = 0U;

          /* Entry 'off3': '<S27>:1581' */
          aaaqi_B.bililiuliangfa18_1_h = 0.0;
          aaaqi_B.bililiuliangfa18_2_i = 0.0;
        } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
          /* Transition: '<S27>:1552' */
          guard1 = true;
        } else {
          guard2 = true;
        }
      } else {
        guard2 = true;
      }
    }

    if (guard2) {
      if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.u_m) &&
          (aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_m + 0.005) &&
          (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.u_m) &&
          (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_m + 0.005)) {
        /* Transition: '<S27>:1568' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_off6_i;

        /* Entry 'off6': '<S27>:1586' */
        aaaqi_B.diancifa11_1_d = 0.0;
        aaaqi_B.diancifa11_5_o = 0.0;
        aaaqi_B.SXQjunyawancheng_h = 1.0;
      }
    }

    if (guard1) {
      /* Transition: '<S27>:1549' */
      /* Transition: '<S27>:1548' */
      /* Transition: '<S27>:1699' */
      /* Transition: '<S27>:1685' */
      aaaqi_DW.is_SXQjunya_k = aaaqi_IN_off1_l;

      /* Entry 'off1': '<S27>:1673' */
      aaaqi_B.diancifa11_1_d = 0.0;
      aaaqi_B.diancifa11_5_o = 0.0;
      aaaqi_B.diancifa20_i = 0.0;
      aaaqi_B.diancifa3_l = 0.0;
      aaaqi_B.bililiuliangfa18_1_h = 0.0;
      aaaqi_B.bililiuliangfa18_2_i = 0.0;
      aaaqi_B.bililiuliangfa18_3_m = 0.0;
      aaaqi_B.bililiuliangfa18_4_b = 0.0;
    }
  }
}

/* Function for Chart: '<S25>/Chart' */
static void aaaqi_off3(void)
{
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  boolean_T guard4 = false;
  boolean_T guard5 = false;
  boolean_T guard6 = false;
  boolean_T guard7 = false;
  boolean_T guard8 = false;
  boolean_T guard9 = false;

  /* During 'off3': '<S27>:1581' */
  guard1 = false;
  guard2 = false;
  guard3 = false;
  guard4 = false;
  guard5 = false;
  guard6 = false;
  guard7 = false;
  guard8 = false;
  guard9 = false;
  if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_m + 0.005) ||
      (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_m + 0.005)) {
    /* Transition: '<S27>:1550' */
    if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_m + 0.005) &&
        (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_m + 0.005)) {
      /* Transition: '<S27>:1557' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1558' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiance1_34;
        aaaqi_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiance1_34': '<S27>:1583' */
        aaaqi_B.bililiuliangfa18_1_h = 1.0;
        aaaqi_B.bililiuliangfa18_2_i = 0.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1554' */
        guard2 = true;
      } else {
        guard9 = true;
      }
    } else {
      guard9 = true;
    }
  } else {
    guard6 = true;
  }

  if (guard9) {
    if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.u_m) &&
        (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.u_m) &&
        (aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_m + 0.005) &&
        (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_m + 0.005)) {
      /* Transition: '<S27>:1559' */
      aaaqi_DW.is_SXQjunya_k = aaaqi_IN_off2_cf;
      aaaqi_DW.temporalCounter_i5 = 0U;

      /* Entry 'off2': '<S27>:1582' */
      aaaqi_B.bililiuliangfa18_1_h = 0.0;
      aaaqi_B.bililiuliangfa18_2_i = 0.0;
      aaaqi_B.bililiuliangfa18_3_m = 0.0;
      aaaqi_B.bililiuliangfa18_4_b = 0.0;
    } else if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_m + 0.005) &&
               (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_m + 0.005)) {
      /* Transition: '<S27>:1563' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1567' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiance1_36;
        aaaqi_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiance1_36': '<S27>:1585' */
        aaaqi_B.bililiuliangfa18_1_h = 0.0;
        aaaqi_B.bililiuliangfa18_2_i = 1.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1555' */
        guard2 = true;
      } else {
        guard8 = true;
      }
    } else {
      guard8 = true;
    }
  }

  if (guard8) {
    if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_m + 0.005) &&
        (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_m + 0.005)) {
      /* Transition: '<S27>:1565' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1569' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiance1_32;
        aaaqi_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiance1_32': '<S27>:1584' */
        aaaqi_B.bililiuliangfa18_1_h = 1.0;
        aaaqi_B.bililiuliangfa18_2_i = 1.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1556' */
        guard2 = true;
      } else {
        guard7 = true;
      }
    } else {
      guard7 = true;
    }
  }

  if (guard7) {
    if ((aaaqi_DW.temporalCounter_i5 >= 250) && ((aaaqi_B.DataTypeConversion27[2]
          <= aaaqi_B.u_m + 0.005) && (aaaqi_B.DataTypeConversion27[4] <=
          aaaqi_B.u_m + 0.005))) {
      /* Transition: '<S27>:1553' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1547' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_off3_pi;
        aaaqi_DW.temporalCounter_i5 = 0U;

        /* Entry 'off3': '<S27>:1581' */
        aaaqi_B.bililiuliangfa18_1_h = 0.0;
        aaaqi_B.bililiuliangfa18_2_i = 0.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1552' */
        guard2 = true;
      } else {
        guard6 = true;
      }
    } else {
      guard6 = true;
    }
  }

  if (guard6) {
    if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_m + 0.005) &&
        (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_m + 0.005)) {
      /* Transition: '<S27>:1535' */
      if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.u_m) &&
          (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.u_m)) {
        /* Transition: '<S27>:1516' */
        if (aaaqi_B.DataTypeConversion11 == 1.0) {
          /* Transition: '<S27>:1510' */
          aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiaya7_1;
          aaaqi_DW.temporalCounter_i5 = 0U;

          /* Entry 'jiaya7_1': '<S27>:1571' */
          aaaqi_B.bililiuliangfa18_3_m = 1.0;
          aaaqi_B.bililiuliangfa18_4_b = 1.0;
        } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
          /* Transition: '<S27>:1515' */
          guard1 = true;
        } else {
          guard5 = true;
        }
      } else {
        guard5 = true;
      }
    }
  }

  if (guard5) {
    if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.u_m) &&
        (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.u_m)) {
      /* Transition: '<S27>:1524' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1526' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiaya7_2;
        aaaqi_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiaya7_2': '<S27>:1577' */
        aaaqi_B.bililiuliangfa18_3_m = 1.0;
        aaaqi_B.bililiuliangfa18_4_b = 0.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1525' */
        guard1 = true;
      } else {
        guard4 = true;
      }
    } else {
      guard4 = true;
    }
  }

  if (guard4) {
    if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.u_m) &&
        (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.u_m)) {
      /* Transition: '<S27>:1521' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1514' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiaya7_3;
        aaaqi_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiaya7_3': '<S27>:1572' */
        aaaqi_B.bililiuliangfa18_3_m = 0.0;
        aaaqi_B.bililiuliangfa18_4_b = 1.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1520' */
        guard1 = true;
      } else {
        guard3 = true;
      }
    } else {
      guard3 = true;
    }
  }

  if (guard3) {
    if ((aaaqi_DW.temporalCounter_i5 >= 250) && ((aaaqi_B.DataTypeConversion27[2]
          >= aaaqi_B.u_m) && (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.u_m)))
    {
      /* Transition: '<S27>:1539' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1546' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_off4_cw;
        aaaqi_DW.temporalCounter_i5 = 0U;

        /* Entry 'off4': '<S27>:1580' */
        aaaqi_B.bililiuliangfa18_3_m = 0.0;
        aaaqi_B.bililiuliangfa18_4_b = 0.0;
      } else {
        if (aaaqi_B.DataTypeConversion11 == 0.0) {
          /* Transition: '<S27>:1545' */
          guard1 = true;
        }
      }
    }
  }

  if (guard2) {
    /* Transition: '<S27>:1549' */
    guard1 = true;
  }

  if (guard1) {
    /* Transition: '<S27>:1548' */
    /* Transition: '<S27>:1699' */
    /* Transition: '<S27>:1685' */
    aaaqi_DW.is_SXQjunya_k = aaaqi_IN_off1_l;

    /* Entry 'off1': '<S27>:1673' */
    aaaqi_B.diancifa11_1_d = 0.0;
    aaaqi_B.diancifa11_5_o = 0.0;
    aaaqi_B.diancifa20_i = 0.0;
    aaaqi_B.diancifa3_l = 0.0;
    aaaqi_B.bililiuliangfa18_1_h = 0.0;
    aaaqi_B.bililiuliangfa18_2_i = 0.0;
    aaaqi_B.bililiuliangfa18_3_m = 0.0;
    aaaqi_B.bililiuliangfa18_4_b = 0.0;
  }
}

/* Function for Chart: '<S25>/Chart' */
static void aaaqi_off4(void)
{
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  boolean_T guard4 = false;
  boolean_T guard5 = false;
  boolean_T guard6 = false;
  boolean_T guard7 = false;
  boolean_T guard8 = false;
  boolean_T guard9 = false;

  /* During 'off4': '<S27>:1580' */
  /* Transition: '<S27>:1551' */
  guard1 = false;
  guard2 = false;
  guard3 = false;
  guard4 = false;
  guard5 = false;
  guard6 = false;
  guard7 = false;
  guard8 = false;
  guard9 = false;
  if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_m + 0.005) &&
      (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_m + 0.005)) {
    /* Transition: '<S27>:1557' */
    if (aaaqi_B.DataTypeConversion11 == 1.0) {
      /* Transition: '<S27>:1558' */
      aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiance1_34;
      aaaqi_DW.temporalCounter_i5 = 0U;

      /* Entry 'jiance1_34': '<S27>:1583' */
      aaaqi_B.bililiuliangfa18_1_h = 1.0;
      aaaqi_B.bililiuliangfa18_2_i = 0.0;
    } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
      /* Transition: '<S27>:1554' */
      guard2 = true;
    } else {
      guard9 = true;
    }
  } else {
    guard9 = true;
  }

  if (guard9) {
    if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.u_m) &&
        (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.u_m) &&
        (aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_m + 0.005) &&
        (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_m + 0.005)) {
      /* Transition: '<S27>:1559' */
      aaaqi_DW.is_SXQjunya_k = aaaqi_IN_off2_cf;
      aaaqi_DW.temporalCounter_i5 = 0U;

      /* Entry 'off2': '<S27>:1582' */
      aaaqi_B.bililiuliangfa18_1_h = 0.0;
      aaaqi_B.bililiuliangfa18_2_i = 0.0;
      aaaqi_B.bililiuliangfa18_3_m = 0.0;
      aaaqi_B.bililiuliangfa18_4_b = 0.0;
    } else if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_m + 0.005) &&
               (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_m + 0.005)) {
      /* Transition: '<S27>:1563' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1567' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiance1_36;
        aaaqi_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiance1_36': '<S27>:1585' */
        aaaqi_B.bililiuliangfa18_1_h = 0.0;
        aaaqi_B.bililiuliangfa18_2_i = 1.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1555' */
        guard2 = true;
      } else {
        guard8 = true;
      }
    } else {
      guard8 = true;
    }
  }

  if (guard8) {
    if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_m + 0.005) &&
        (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_m + 0.005)) {
      /* Transition: '<S27>:1565' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1569' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiance1_32;
        aaaqi_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiance1_32': '<S27>:1584' */
        aaaqi_B.bililiuliangfa18_1_h = 1.0;
        aaaqi_B.bililiuliangfa18_2_i = 1.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1556' */
        guard2 = true;
      } else {
        guard7 = true;
      }
    } else {
      guard7 = true;
    }
  }

  if (guard7) {
    if ((aaaqi_DW.temporalCounter_i5 >= 250) && ((aaaqi_B.DataTypeConversion27[2]
          <= aaaqi_B.u_m + 0.005) && (aaaqi_B.DataTypeConversion27[4] <=
          aaaqi_B.u_m + 0.005))) {
      /* Transition: '<S27>:1553' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1547' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_off3_pi;
        aaaqi_DW.temporalCounter_i5 = 0U;

        /* Entry 'off3': '<S27>:1581' */
        aaaqi_B.bililiuliangfa18_1_h = 0.0;
        aaaqi_B.bililiuliangfa18_2_i = 0.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1552' */
        guard2 = true;
      } else {
        guard6 = true;
      }
    } else {
      guard6 = true;
    }
  }

  if (guard6) {
    if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.u_m) ||
        (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.u_m)) {
      /* Transition: '<S27>:1537' */
      if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.u_m) &&
          (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.u_m)) {
        /* Transition: '<S27>:1516' */
        if (aaaqi_B.DataTypeConversion11 == 1.0) {
          /* Transition: '<S27>:1510' */
          aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiaya7_1;
          aaaqi_DW.temporalCounter_i5 = 0U;

          /* Entry 'jiaya7_1': '<S27>:1571' */
          aaaqi_B.bililiuliangfa18_3_m = 1.0;
          aaaqi_B.bililiuliangfa18_4_b = 1.0;
        } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
          /* Transition: '<S27>:1515' */
          guard1 = true;
        } else {
          guard5 = true;
        }
      } else {
        guard5 = true;
      }
    }
  }

  if (guard5) {
    if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.u_m) &&
        (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.u_m)) {
      /* Transition: '<S27>:1524' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1526' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiaya7_2;
        aaaqi_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiaya7_2': '<S27>:1577' */
        aaaqi_B.bililiuliangfa18_3_m = 1.0;
        aaaqi_B.bililiuliangfa18_4_b = 0.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1525' */
        guard1 = true;
      } else {
        guard4 = true;
      }
    } else {
      guard4 = true;
    }
  }

  if (guard4) {
    if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.u_m) &&
        (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.u_m)) {
      /* Transition: '<S27>:1521' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1514' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiaya7_3;
        aaaqi_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiaya7_3': '<S27>:1572' */
        aaaqi_B.bililiuliangfa18_3_m = 0.0;
        aaaqi_B.bililiuliangfa18_4_b = 1.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1520' */
        guard1 = true;
      } else {
        guard3 = true;
      }
    } else {
      guard3 = true;
    }
  }

  if (guard3) {
    if ((aaaqi_DW.temporalCounter_i5 >= 250) && ((aaaqi_B.DataTypeConversion27[2]
          >= aaaqi_B.u_m) && (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.u_m)))
    {
      /* Transition: '<S27>:1539' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1546' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_off4_cw;
        aaaqi_DW.temporalCounter_i5 = 0U;

        /* Entry 'off4': '<S27>:1580' */
        aaaqi_B.bililiuliangfa18_3_m = 0.0;
        aaaqi_B.bililiuliangfa18_4_b = 0.0;
      } else {
        if (aaaqi_B.DataTypeConversion11 == 0.0) {
          /* Transition: '<S27>:1545' */
          guard1 = true;
        }
      }
    }
  }

  if (guard2) {
    /* Transition: '<S27>:1549' */
    guard1 = true;
  }

  if (guard1) {
    /* Transition: '<S27>:1548' */
    /* Transition: '<S27>:1699' */
    /* Transition: '<S27>:1685' */
    aaaqi_DW.is_SXQjunya_k = aaaqi_IN_off1_l;

    /* Entry 'off1': '<S27>:1673' */
    aaaqi_B.diancifa11_1_d = 0.0;
    aaaqi_B.diancifa11_5_o = 0.0;
    aaaqi_B.diancifa20_i = 0.0;
    aaaqi_B.diancifa3_l = 0.0;
    aaaqi_B.bililiuliangfa18_1_h = 0.0;
    aaaqi_B.bililiuliangfa18_2_i = 0.0;
    aaaqi_B.bililiuliangfa18_3_m = 0.0;
    aaaqi_B.bililiuliangfa18_4_b = 0.0;
  }
}

/* Function for Chart: '<S25>/Chart' */
static void aaaqi_on2(void)
{
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  boolean_T guard4 = false;

  /* During 'on2': '<S27>:1674' */
  /* Transition: '<S27>:1689' */
  guard1 = false;
  guard2 = false;
  guard3 = false;
  guard4 = false;
  if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.p0_1) &&
      (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.p0_1)) {
    /* Transition: '<S27>:1700' */
    if (aaaqi_B.DataTypeConversion11 == 1.0) {
      /* Transition: '<S27>:1677' */
      aaaqi_DW.is_SXQjunya_k = aaaqi_IN_on5_g;

      /* Entry 'on5': '<S27>:1671' */
      aaaqi_B.bililiuliangfa18_3_m = 1.0;
      aaaqi_B.diancifa3_l = 1.0;
    } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
      /* Transition: '<S27>:1693' */
      guard1 = true;
    } else {
      guard4 = true;
    }
  } else {
    guard4 = true;
  }

  if (guard4) {
    if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.p0_1) &&
        (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.p0_1)) {
      /* Transition: '<S27>:1701' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1696' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_on3_e1g;

        /* Entry 'on3': '<S27>:1682' */
        aaaqi_B.bililiuliangfa18_3_m = 0.0;
        aaaqi_B.diancifa3_l = 1.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1686' */
        guard1 = true;
      } else {
        guard3 = true;
      }
    } else {
      guard3 = true;
    }
  }

  if (guard3) {
    if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.p0_1) &&
        (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.p0_1)) {
      /* Transition: '<S27>:1694' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1695' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_on4_n;

        /* Entry 'on4': '<S27>:1675' */
        aaaqi_B.bililiuliangfa18_3_m = 1.0;
        aaaqi_B.diancifa3_l = 0.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1698' */
        guard1 = true;
      } else {
        guard2 = true;
      }
    } else {
      guard2 = true;
    }
  }

  if (guard2) {
    if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.p0_1) &&
        (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.p0_1)) {
      /* Transition: '<S27>:1678' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1668' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_on6_p;

        /* Entry 'on6': '<S27>:1664' */
        aaaqi_B.bililiuliangfa18_3_m = 1.0;
        aaaqi_B.diancifa3_l = 1.0;
        aaaqi_B.p0_1 += 0.02;
      } else {
        if (aaaqi_B.DataTypeConversion11 == 0.0) {
          /* Transition: '<S27>:1681' */
          guard1 = true;
        }
      }
    }
  }

  if (guard1) {
    /* Transition: '<S27>:1685' */
    aaaqi_DW.is_SXQjunya_k = aaaqi_IN_off1_l;

    /* Entry 'off1': '<S27>:1673' */
    aaaqi_B.diancifa11_1_d = 0.0;
    aaaqi_B.diancifa11_5_o = 0.0;
    aaaqi_B.diancifa20_i = 0.0;
    aaaqi_B.diancifa3_l = 0.0;
    aaaqi_B.bililiuliangfa18_1_h = 0.0;
    aaaqi_B.bililiuliangfa18_2_i = 0.0;
    aaaqi_B.bililiuliangfa18_3_m = 0.0;
    aaaqi_B.bililiuliangfa18_4_b = 0.0;
  }
}

/* Function for Chart: '<S25>/Chart' */
static void aaaqi_on3(void)
{
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  boolean_T guard4 = false;

  /* During 'on3': '<S27>:1682' */
  /* Transition: '<S27>:1692' */
  guard1 = false;
  guard2 = false;
  guard3 = false;
  guard4 = false;
  if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.p0_1) &&
      (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.p0_1)) {
    /* Transition: '<S27>:1700' */
    if (aaaqi_B.DataTypeConversion11 == 1.0) {
      /* Transition: '<S27>:1677' */
      aaaqi_DW.is_SXQjunya_k = aaaqi_IN_on5_g;

      /* Entry 'on5': '<S27>:1671' */
      aaaqi_B.bililiuliangfa18_3_m = 1.0;
      aaaqi_B.diancifa3_l = 1.0;
    } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
      /* Transition: '<S27>:1693' */
      guard1 = true;
    } else {
      guard4 = true;
    }
  } else {
    guard4 = true;
  }

  if (guard4) {
    if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.p0_1) &&
        (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.p0_1)) {
      /* Transition: '<S27>:1701' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1696' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_on3_e1g;

        /* Entry 'on3': '<S27>:1682' */
        aaaqi_B.bililiuliangfa18_3_m = 0.0;
        aaaqi_B.diancifa3_l = 1.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1686' */
        guard1 = true;
      } else {
        guard3 = true;
      }
    } else {
      guard3 = true;
    }
  }

  if (guard3) {
    if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.p0_1) &&
        (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.p0_1)) {
      /* Transition: '<S27>:1694' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1695' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_on4_n;

        /* Entry 'on4': '<S27>:1675' */
        aaaqi_B.bililiuliangfa18_3_m = 1.0;
        aaaqi_B.diancifa3_l = 0.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1698' */
        guard1 = true;
      } else {
        guard2 = true;
      }
    } else {
      guard2 = true;
    }
  }

  if (guard2) {
    if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.p0_1) &&
        (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.p0_1)) {
      /* Transition: '<S27>:1678' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1668' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_on6_p;

        /* Entry 'on6': '<S27>:1664' */
        aaaqi_B.bililiuliangfa18_3_m = 1.0;
        aaaqi_B.diancifa3_l = 1.0;
        aaaqi_B.p0_1 += 0.02;
      } else {
        if (aaaqi_B.DataTypeConversion11 == 0.0) {
          /* Transition: '<S27>:1681' */
          guard1 = true;
        }
      }
    }
  }

  if (guard1) {
    /* Transition: '<S27>:1685' */
    aaaqi_DW.is_SXQjunya_k = aaaqi_IN_off1_l;

    /* Entry 'off1': '<S27>:1673' */
    aaaqi_B.diancifa11_1_d = 0.0;
    aaaqi_B.diancifa11_5_o = 0.0;
    aaaqi_B.diancifa20_i = 0.0;
    aaaqi_B.diancifa3_l = 0.0;
    aaaqi_B.bililiuliangfa18_1_h = 0.0;
    aaaqi_B.bililiuliangfa18_2_i = 0.0;
    aaaqi_B.bililiuliangfa18_3_m = 0.0;
    aaaqi_B.bililiuliangfa18_4_b = 0.0;
  }
}

/* Function for Chart: '<S25>/Chart' */
static void aaaqi_on4(void)
{
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  boolean_T guard4 = false;

  /* During 'on4': '<S27>:1675' */
  /* Transition: '<S27>:1691' */
  guard1 = false;
  guard2 = false;
  guard3 = false;
  guard4 = false;
  if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.p0_1) &&
      (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.p0_1)) {
    /* Transition: '<S27>:1700' */
    if (aaaqi_B.DataTypeConversion11 == 1.0) {
      /* Transition: '<S27>:1677' */
      aaaqi_DW.is_SXQjunya_k = aaaqi_IN_on5_g;

      /* Entry 'on5': '<S27>:1671' */
      aaaqi_B.bililiuliangfa18_3_m = 1.0;
      aaaqi_B.diancifa3_l = 1.0;
    } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
      /* Transition: '<S27>:1693' */
      guard1 = true;
    } else {
      guard4 = true;
    }
  } else {
    guard4 = true;
  }

  if (guard4) {
    if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.p0_1) &&
        (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.p0_1)) {
      /* Transition: '<S27>:1701' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1696' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_on3_e1g;

        /* Entry 'on3': '<S27>:1682' */
        aaaqi_B.bililiuliangfa18_3_m = 0.0;
        aaaqi_B.diancifa3_l = 1.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1686' */
        guard1 = true;
      } else {
        guard3 = true;
      }
    } else {
      guard3 = true;
    }
  }

  if (guard3) {
    if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.p0_1) &&
        (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.p0_1)) {
      /* Transition: '<S27>:1694' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1695' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_on4_n;

        /* Entry 'on4': '<S27>:1675' */
        aaaqi_B.bililiuliangfa18_3_m = 1.0;
        aaaqi_B.diancifa3_l = 0.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1698' */
        guard1 = true;
      } else {
        guard2 = true;
      }
    } else {
      guard2 = true;
    }
  }

  if (guard2) {
    if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.p0_1) &&
        (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.p0_1)) {
      /* Transition: '<S27>:1678' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1668' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_on6_p;

        /* Entry 'on6': '<S27>:1664' */
        aaaqi_B.bililiuliangfa18_3_m = 1.0;
        aaaqi_B.diancifa3_l = 1.0;
        aaaqi_B.p0_1 += 0.02;
      } else {
        if (aaaqi_B.DataTypeConversion11 == 0.0) {
          /* Transition: '<S27>:1681' */
          guard1 = true;
        }
      }
    }
  }

  if (guard1) {
    /* Transition: '<S27>:1685' */
    aaaqi_DW.is_SXQjunya_k = aaaqi_IN_off1_l;

    /* Entry 'off1': '<S27>:1673' */
    aaaqi_B.diancifa11_1_d = 0.0;
    aaaqi_B.diancifa11_5_o = 0.0;
    aaaqi_B.diancifa20_i = 0.0;
    aaaqi_B.diancifa3_l = 0.0;
    aaaqi_B.bililiuliangfa18_1_h = 0.0;
    aaaqi_B.bililiuliangfa18_2_i = 0.0;
    aaaqi_B.bililiuliangfa18_3_m = 0.0;
    aaaqi_B.bililiuliangfa18_4_b = 0.0;
  }
}

/* Function for Chart: '<S25>/Chart' */
static void aaaqi_on5(void)
{
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  boolean_T guard4 = false;

  /* During 'on5': '<S27>:1671' */
  /* Transition: '<S27>:1669' */
  guard1 = false;
  guard2 = false;
  guard3 = false;
  guard4 = false;
  if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.p0_1) &&
      (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.p0_1)) {
    /* Transition: '<S27>:1700' */
    if (aaaqi_B.DataTypeConversion11 == 1.0) {
      /* Transition: '<S27>:1677' */
      aaaqi_DW.is_SXQjunya_k = aaaqi_IN_on5_g;

      /* Entry 'on5': '<S27>:1671' */
      aaaqi_B.bililiuliangfa18_3_m = 1.0;
      aaaqi_B.diancifa3_l = 1.0;
    } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
      /* Transition: '<S27>:1693' */
      guard1 = true;
    } else {
      guard4 = true;
    }
  } else {
    guard4 = true;
  }

  if (guard4) {
    if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.p0_1) &&
        (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.p0_1)) {
      /* Transition: '<S27>:1701' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1696' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_on3_e1g;

        /* Entry 'on3': '<S27>:1682' */
        aaaqi_B.bililiuliangfa18_3_m = 0.0;
        aaaqi_B.diancifa3_l = 1.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1686' */
        guard1 = true;
      } else {
        guard3 = true;
      }
    } else {
      guard3 = true;
    }
  }

  if (guard3) {
    if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.p0_1) &&
        (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.p0_1)) {
      /* Transition: '<S27>:1694' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1695' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_on4_n;

        /* Entry 'on4': '<S27>:1675' */
        aaaqi_B.bililiuliangfa18_3_m = 1.0;
        aaaqi_B.diancifa3_l = 0.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1698' */
        guard1 = true;
      } else {
        guard2 = true;
      }
    } else {
      guard2 = true;
    }
  }

  if (guard2) {
    if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.p0_1) &&
        (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.p0_1)) {
      /* Transition: '<S27>:1678' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1668' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_on6_p;

        /* Entry 'on6': '<S27>:1664' */
        aaaqi_B.bililiuliangfa18_3_m = 1.0;
        aaaqi_B.diancifa3_l = 1.0;
        aaaqi_B.p0_1 += 0.02;
      } else {
        if (aaaqi_B.DataTypeConversion11 == 0.0) {
          /* Transition: '<S27>:1681' */
          guard1 = true;
        }
      }
    }
  }

  if (guard1) {
    /* Transition: '<S27>:1685' */
    aaaqi_DW.is_SXQjunya_k = aaaqi_IN_off1_l;

    /* Entry 'off1': '<S27>:1673' */
    aaaqi_B.diancifa11_1_d = 0.0;
    aaaqi_B.diancifa11_5_o = 0.0;
    aaaqi_B.diancifa20_i = 0.0;
    aaaqi_B.diancifa3_l = 0.0;
    aaaqi_B.bililiuliangfa18_1_h = 0.0;
    aaaqi_B.bililiuliangfa18_2_i = 0.0;
    aaaqi_B.bililiuliangfa18_3_m = 0.0;
    aaaqi_B.bililiuliangfa18_4_b = 0.0;
  }
}

/* Function for Chart: '<S25>/Chart' */
static void aaaqi_SXQjunya(void)
{
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  boolean_T guard4 = false;
  boolean_T guard5 = false;
  boolean_T guard6 = false;
  boolean_T guard7 = false;
  boolean_T guard8 = false;
  boolean_T guard9 = false;
  boolean_T guard10 = false;
  boolean_T guard11 = false;
  boolean_T guard12 = false;
  boolean_T guard13 = false;
  boolean_T guard14 = false;
  boolean_T guard15 = false;
  boolean_T guard16 = false;

  /* During 'SXQjunya': '<S27>:1486' */
  guard1 = false;
  guard2 = false;
  guard3 = false;
  guard4 = false;
  guard5 = false;
  guard6 = false;
  guard7 = false;
  guard8 = false;
  guard9 = false;
  guard10 = false;
  guard11 = false;
  guard12 = false;
  guard13 = false;
  guard14 = false;
  guard15 = false;
  guard16 = false;
  switch (aaaqi_DW.is_SXQjunya_k) {
   case aaaqi_IN_jiance1_32:
    /* During 'jiance1_32': '<S27>:1584' */
    /* Transition: '<S27>:1562' */
    if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_m + 0.005) &&
        (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_m + 0.005)) {
      /* Transition: '<S27>:1557' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1558' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiance1_34;
        aaaqi_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiance1_34': '<S27>:1583' */
        aaaqi_B.bililiuliangfa18_1_h = 1.0;
        aaaqi_B.bililiuliangfa18_2_i = 0.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1554' */
        guard2 = true;
      } else {
        guard14 = true;
      }
    } else {
      guard14 = true;
    }
    break;

   case aaaqi_IN_jiance1_34:
    /* During 'jiance1_34': '<S27>:1583' */
    /* Transition: '<S27>:1560' */
    if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_m + 0.005) &&
        (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_m + 0.005)) {
      /* Transition: '<S27>:1557' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1558' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiance1_34;
        aaaqi_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiance1_34': '<S27>:1583' */
        aaaqi_B.bililiuliangfa18_1_h = 1.0;
        aaaqi_B.bililiuliangfa18_2_i = 0.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1554' */
        guard3 = true;
      } else {
        guard15 = true;
      }
    } else {
      guard15 = true;
    }
    break;

   case aaaqi_IN_jiance1_36:
    /* During 'jiance1_36': '<S27>:1585' */
    /* Transition: '<S27>:1564' */
    if ((aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_m + 0.005) &&
        (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_m + 0.005)) {
      /* Transition: '<S27>:1557' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1558' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiance1_34;
        aaaqi_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiance1_34': '<S27>:1583' */
        aaaqi_B.bililiuliangfa18_1_h = 1.0;
        aaaqi_B.bililiuliangfa18_2_i = 0.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1554' */
        guard4 = true;
      } else {
        guard16 = true;
      }
    } else {
      guard16 = true;
    }
    break;

   case aaaqi_IN_jiaya1:
    aaaqi_jiaya1();
    break;

   case aaaqi_IN_jiaya1_1:
    aaaqi_jiaya1_1();
    break;

   case aaaqi_IN_jiaya1_2:
    aaaqi_jiaya1_2();
    break;

   case aaaqi_IN_jiaya1_3:
    aaaqi_jiaya1_3();
    break;

   case aaaqi_IN_jiaya2:
    aaaqi_jiaya2();
    break;

   case aaaqi_IN_jiaya7_1:
    aaaqi_jiaya7_1();
    break;

   case aaaqi_IN_jiaya7_2:
    aaaqi_jiaya7_2();
    break;

   case aaaqi_IN_jiaya7_3:
    aaaqi_jiaya7_3();
    break;

   case aaaqi_IN_off1_l:
    /* During 'off1': '<S27>:1673' */
    if (aaaqi_B.DataTypeConversion11 == 1.0) {
      /* Transition: '<S27>:1688' */
      aaaqi_DW.is_SXQjunya_k = aaaqi_IN_on1_o5w1;
      aaaqi_DW.temporalCounter_i5 = 0U;

      /* Entry 'on1': '<S27>:1667' */
      aaaqi_B.diancifa11_1_d = 1.0;
    }
    break;

   case aaaqi_IN_off2_cf:
    aaaqi_off2();
    break;

   case aaaqi_IN_off3_pi:
    aaaqi_off3();
    break;

   case aaaqi_IN_off4_cw:
    aaaqi_off4();
    break;

   case aaaqi_IN_off6_i:
    /* During 'off6': '<S27>:1586' */
    break;

   case aaaqi_IN_on1_o5w1:
    /* During 'on1': '<S27>:1667' */
    if (aaaqi_DW.temporalCounter_i5 >= 500) {
      /* Transition: '<S27>:1697' */
      aaaqi_DW.is_SXQjunya_k = aaaqi_IN_on2_atja;

      /* Entry 'on2': '<S27>:1674' */
      aaaqi_B.bililiuliangfa18_3_m = 1.0;
      aaaqi_B.diancifa3_l = 1.0;
    }
    break;

   case aaaqi_IN_on2_atja:
    aaaqi_on2();
    break;

   case aaaqi_IN_on3_e1g:
    aaaqi_on3();
    break;

   case aaaqi_IN_on4_n:
    aaaqi_on4();
    break;

   case aaaqi_IN_on5_g:
    aaaqi_on5();
    break;

   default:
    /* During 'on6': '<S27>:1664' */
    /* Transition: '<S27>:1679' */
    if (aaaqi_B.p0_1 > aaaqi_B.u_a) {
      /* Transition: '<S27>:1687' */
      aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiaya1;

      /* Entry 'jiaya1': '<S27>:1575' */
      aaaqi_B.diancifa3_l = 0.0;
      aaaqi_B.bililiuliangfa18_3_m = 1.0;
      aaaqi_B.bililiuliangfa18_4_b = 1.0;
      aaaqi_B.p0_1 = aaaqi_B.u_a;
    } else {
      if (aaaqi_B.p0_1 <= aaaqi_B.u_a) {
        /* Transition: '<S27>:1690' */
        if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.p0_1) &&
            (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.p0_1)) {
          /* Transition: '<S27>:1700' */
          if (aaaqi_B.DataTypeConversion11 == 1.0) {
            /* Transition: '<S27>:1677' */
            aaaqi_DW.is_SXQjunya_k = aaaqi_IN_on5_g;

            /* Entry 'on5': '<S27>:1671' */
            aaaqi_B.bililiuliangfa18_3_m = 1.0;
            aaaqi_B.diancifa3_l = 1.0;
          } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
            /* Transition: '<S27>:1693' */
            guard1 = true;
          } else {
            guard13 = true;
          }
        } else {
          guard13 = true;
        }
      }
    }
    break;
  }

  if (guard16) {
    if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.u_m) &&
        (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.u_m) &&
        (aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_m + 0.005) &&
        (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_m + 0.005)) {
      /* Transition: '<S27>:1559' */
      aaaqi_DW.is_SXQjunya_k = aaaqi_IN_off2_cf;
      aaaqi_DW.temporalCounter_i5 = 0U;

      /* Entry 'off2': '<S27>:1582' */
      aaaqi_B.bililiuliangfa18_1_h = 0.0;
      aaaqi_B.bililiuliangfa18_2_i = 0.0;
      aaaqi_B.bililiuliangfa18_3_m = 0.0;
      aaaqi_B.bililiuliangfa18_4_b = 0.0;
    } else if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_m + 0.005) &&
               (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_m + 0.005)) {
      /* Transition: '<S27>:1563' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1567' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiance1_36;
        aaaqi_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiance1_36': '<S27>:1585' */
        aaaqi_B.bililiuliangfa18_1_h = 0.0;
        aaaqi_B.bililiuliangfa18_2_i = 1.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1555' */
        guard4 = true;
      } else {
        guard12 = true;
      }
    } else {
      guard12 = true;
    }
  }

  if (guard15) {
    if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.u_m) &&
        (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.u_m) &&
        (aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_m + 0.005) &&
        (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_m + 0.005)) {
      /* Transition: '<S27>:1559' */
      aaaqi_DW.is_SXQjunya_k = aaaqi_IN_off2_cf;
      aaaqi_DW.temporalCounter_i5 = 0U;

      /* Entry 'off2': '<S27>:1582' */
      aaaqi_B.bililiuliangfa18_1_h = 0.0;
      aaaqi_B.bililiuliangfa18_2_i = 0.0;
      aaaqi_B.bililiuliangfa18_3_m = 0.0;
      aaaqi_B.bililiuliangfa18_4_b = 0.0;
    } else if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_m + 0.005) &&
               (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_m + 0.005)) {
      /* Transition: '<S27>:1563' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1567' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiance1_36;
        aaaqi_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiance1_36': '<S27>:1585' */
        aaaqi_B.bililiuliangfa18_1_h = 0.0;
        aaaqi_B.bililiuliangfa18_2_i = 1.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1555' */
        guard3 = true;
      } else {
        guard11 = true;
      }
    } else {
      guard11 = true;
    }
  }

  if (guard14) {
    if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.u_m) &&
        (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.u_m) &&
        (aaaqi_B.DataTypeConversion27[2] <= aaaqi_B.u_m + 0.005) &&
        (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_m + 0.005)) {
      /* Transition: '<S27>:1559' */
      aaaqi_DW.is_SXQjunya_k = aaaqi_IN_off2_cf;
      aaaqi_DW.temporalCounter_i5 = 0U;

      /* Entry 'off2': '<S27>:1582' */
      aaaqi_B.bililiuliangfa18_1_h = 0.0;
      aaaqi_B.bililiuliangfa18_2_i = 0.0;
      aaaqi_B.bililiuliangfa18_3_m = 0.0;
      aaaqi_B.bililiuliangfa18_4_b = 0.0;
    } else if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_m + 0.005) &&
               (aaaqi_B.DataTypeConversion27[4] <= aaaqi_B.u_m + 0.005)) {
      /* Transition: '<S27>:1563' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1567' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiance1_36;
        aaaqi_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiance1_36': '<S27>:1585' */
        aaaqi_B.bililiuliangfa18_1_h = 0.0;
        aaaqi_B.bililiuliangfa18_2_i = 1.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1555' */
        guard2 = true;
      } else {
        guard10 = true;
      }
    } else {
      guard10 = true;
    }
  }

  if (guard13) {
    if ((aaaqi_B.DataTypeConversion27[2] < aaaqi_B.p0_1) &&
        (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.p0_1)) {
      /* Transition: '<S27>:1701' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1696' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_on3_e1g;

        /* Entry 'on3': '<S27>:1682' */
        aaaqi_B.bililiuliangfa18_3_m = 0.0;
        aaaqi_B.diancifa3_l = 1.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1686' */
        guard1 = true;
      } else {
        guard9 = true;
      }
    } else {
      guard9 = true;
    }
  }

  if (guard12) {
    if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_m + 0.005) &&
        (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_m + 0.005)) {
      /* Transition: '<S27>:1565' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1569' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiance1_32;
        aaaqi_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiance1_32': '<S27>:1584' */
        aaaqi_B.bililiuliangfa18_1_h = 1.0;
        aaaqi_B.bililiuliangfa18_2_i = 1.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1556' */
        guard4 = true;
      } else {
        guard8 = true;
      }
    } else {
      guard8 = true;
    }
  }

  if (guard11) {
    if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_m + 0.005) &&
        (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_m + 0.005)) {
      /* Transition: '<S27>:1565' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1569' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiance1_32;
        aaaqi_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiance1_32': '<S27>:1584' */
        aaaqi_B.bililiuliangfa18_1_h = 1.0;
        aaaqi_B.bililiuliangfa18_2_i = 1.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1556' */
        guard3 = true;
      } else {
        guard7 = true;
      }
    } else {
      guard7 = true;
    }
  }

  if (guard10) {
    if ((aaaqi_B.DataTypeConversion27[2] > aaaqi_B.u_m + 0.005) &&
        (aaaqi_B.DataTypeConversion27[4] > aaaqi_B.u_m + 0.005)) {
      /* Transition: '<S27>:1565' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1569' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_jiance1_32;
        aaaqi_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiance1_32': '<S27>:1584' */
        aaaqi_B.bililiuliangfa18_1_h = 1.0;
        aaaqi_B.bililiuliangfa18_2_i = 1.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1556' */
        guard2 = true;
      } else {
        guard6 = true;
      }
    } else {
      guard6 = true;
    }
  }

  if (guard9) {
    if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.p0_1) &&
        (aaaqi_B.DataTypeConversion27[4] < aaaqi_B.p0_1)) {
      /* Transition: '<S27>:1694' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1695' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_on4_n;

        /* Entry 'on4': '<S27>:1675' */
        aaaqi_B.bililiuliangfa18_3_m = 1.0;
        aaaqi_B.diancifa3_l = 0.0;
      } else if (aaaqi_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1698' */
        guard1 = true;
      } else {
        guard5 = true;
      }
    } else {
      guard5 = true;
    }
  }

  if (guard8) {
    if ((aaaqi_DW.temporalCounter_i5 >= 250) && ((aaaqi_B.DataTypeConversion27[2]
          <= aaaqi_B.u_m + 0.005) && (aaaqi_B.DataTypeConversion27[4] <=
          aaaqi_B.u_m + 0.005))) {
      /* Transition: '<S27>:1553' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1547' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_off3_pi;
        aaaqi_DW.temporalCounter_i5 = 0U;

        /* Entry 'off3': '<S27>:1581' */
        aaaqi_B.bililiuliangfa18_1_h = 0.0;
        aaaqi_B.bililiuliangfa18_2_i = 0.0;
      } else {
        if (aaaqi_B.DataTypeConversion11 == 0.0) {
          /* Transition: '<S27>:1552' */
          guard4 = true;
        }
      }
    }
  }

  if (guard7) {
    if ((aaaqi_DW.temporalCounter_i5 >= 250) && ((aaaqi_B.DataTypeConversion27[2]
          <= aaaqi_B.u_m + 0.005) && (aaaqi_B.DataTypeConversion27[4] <=
          aaaqi_B.u_m + 0.005))) {
      /* Transition: '<S27>:1553' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1547' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_off3_pi;
        aaaqi_DW.temporalCounter_i5 = 0U;

        /* Entry 'off3': '<S27>:1581' */
        aaaqi_B.bililiuliangfa18_1_h = 0.0;
        aaaqi_B.bililiuliangfa18_2_i = 0.0;
      } else {
        if (aaaqi_B.DataTypeConversion11 == 0.0) {
          /* Transition: '<S27>:1552' */
          guard3 = true;
        }
      }
    }
  }

  if (guard6) {
    if ((aaaqi_DW.temporalCounter_i5 >= 250) && ((aaaqi_B.DataTypeConversion27[2]
          <= aaaqi_B.u_m + 0.005) && (aaaqi_B.DataTypeConversion27[4] <=
          aaaqi_B.u_m + 0.005))) {
      /* Transition: '<S27>:1553' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1547' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_off3_pi;
        aaaqi_DW.temporalCounter_i5 = 0U;

        /* Entry 'off3': '<S27>:1581' */
        aaaqi_B.bililiuliangfa18_1_h = 0.0;
        aaaqi_B.bililiuliangfa18_2_i = 0.0;
      } else {
        if (aaaqi_B.DataTypeConversion11 == 0.0) {
          /* Transition: '<S27>:1552' */
          guard2 = true;
        }
      }
    }
  }

  if (guard5) {
    if ((aaaqi_B.DataTypeConversion27[2] >= aaaqi_B.p0_1) &&
        (aaaqi_B.DataTypeConversion27[4] >= aaaqi_B.p0_1)) {
      /* Transition: '<S27>:1678' */
      if (aaaqi_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1668' */
        aaaqi_DW.is_SXQjunya_k = aaaqi_IN_on6_p;

        /* Entry 'on6': '<S27>:1664' */
        aaaqi_B.bililiuliangfa18_3_m = 1.0;
        aaaqi_B.diancifa3_l = 1.0;
        aaaqi_B.p0_1 += 0.02;
      } else {
        if (aaaqi_B.DataTypeConversion11 == 0.0) {
          /* Transition: '<S27>:1681' */
          guard1 = true;
        }
      }
    }
  }

  if (guard4) {
    /* Transition: '<S27>:1549' */
    /* Transition: '<S27>:1548' */
    /* Transition: '<S27>:1699' */
    /* Transition: '<S27>:1685' */
    aaaqi_DW.is_SXQjunya_k = aaaqi_IN_off1_l;

    /* Entry 'off1': '<S27>:1673' */
    aaaqi_B.diancifa11_1_d = 0.0;
    aaaqi_B.diancifa11_5_o = 0.0;
    aaaqi_B.diancifa20_i = 0.0;
    aaaqi_B.diancifa3_l = 0.0;
    aaaqi_B.bililiuliangfa18_1_h = 0.0;
    aaaqi_B.bililiuliangfa18_2_i = 0.0;
    aaaqi_B.bililiuliangfa18_3_m = 0.0;
    aaaqi_B.bililiuliangfa18_4_b = 0.0;
  }

  if (guard3) {
    /* Transition: '<S27>:1549' */
    /* Transition: '<S27>:1548' */
    /* Transition: '<S27>:1699' */
    /* Transition: '<S27>:1685' */
    aaaqi_DW.is_SXQjunya_k = aaaqi_IN_off1_l;

    /* Entry 'off1': '<S27>:1673' */
    aaaqi_B.diancifa11_1_d = 0.0;
    aaaqi_B.diancifa11_5_o = 0.0;
    aaaqi_B.diancifa20_i = 0.0;
    aaaqi_B.diancifa3_l = 0.0;
    aaaqi_B.bililiuliangfa18_1_h = 0.0;
    aaaqi_B.bililiuliangfa18_2_i = 0.0;
    aaaqi_B.bililiuliangfa18_3_m = 0.0;
    aaaqi_B.bililiuliangfa18_4_b = 0.0;
  }

  if (guard2) {
    /* Transition: '<S27>:1549' */
    /* Transition: '<S27>:1548' */
    /* Transition: '<S27>:1699' */
    /* Transition: '<S27>:1685' */
    aaaqi_DW.is_SXQjunya_k = aaaqi_IN_off1_l;

    /* Entry 'off1': '<S27>:1673' */
    aaaqi_B.diancifa11_1_d = 0.0;
    aaaqi_B.diancifa11_5_o = 0.0;
    aaaqi_B.diancifa20_i = 0.0;
    aaaqi_B.diancifa3_l = 0.0;
    aaaqi_B.bililiuliangfa18_1_h = 0.0;
    aaaqi_B.bililiuliangfa18_2_i = 0.0;
    aaaqi_B.bililiuliangfa18_3_m = 0.0;
    aaaqi_B.bililiuliangfa18_4_b = 0.0;
  }

  if (guard1) {
    /* Transition: '<S27>:1685' */
    aaaqi_DW.is_SXQjunya_k = aaaqi_IN_off1_l;

    /* Entry 'off1': '<S27>:1673' */
    aaaqi_B.diancifa11_1_d = 0.0;
    aaaqi_B.diancifa11_5_o = 0.0;
    aaaqi_B.diancifa20_i = 0.0;
    aaaqi_B.diancifa3_l = 0.0;
    aaaqi_B.bililiuliangfa18_1_h = 0.0;
    aaaqi_B.bililiuliangfa18_2_i = 0.0;
    aaaqi_B.bililiuliangfa18_3_m = 0.0;
    aaaqi_B.bililiuliangfa18_4_b = 0.0;
  }
}

/* Function for Chart: '<S25>/Chart' */
static void aaaqi_shoudong(void)
{
  boolean_T guard1 = false;

  /* During 'shoudong': '<S27>:1197' */
  if ((aaaqi_B.DataTypeConversion13 == 1.0) || (aaaqi_B.DataTypeConversion6 ==
       0.0)) {
    /* Transition: '<S27>:1175' */
    /* Exit Internal 'shoudong': '<S27>:1197' */
    /* Exit Internal 'SXQjunya': '<S27>:1486' */
    aaaqi_DW.is_SXQjunya_k = aaaqi_IN_NO_ACTIVE_CHILD_o;
    aaaqi_DW.is_active_SXQjunya = 0U;

    /* Exit Internal 'SXQxieya': '<S27>:1417' */
    aaaqi_DW.is_SXQxieya_l = aaaqi_IN_NO_ACTIVE_CHILD_o;
    aaaqi_DW.is_active_SXQxieya = 0U;

    /* Exit Internal 'SCzhushui': '<S27>:1337' */
    aaaqi_DW.is_SCzhushui_e = aaaqi_IN_NO_ACTIVE_CHILD_o;
    aaaqi_DW.is_active_SCzhushui = 0U;

    /* Exit Internal 'SCjiaya': '<S27>:1310' */
    aaaqi_DW.is_SCjiaya_c = aaaqi_IN_NO_ACTIVE_CHILD_o;
    aaaqi_DW.is_active_SCjiaya = 0U;

    /* Exit Internal 'kaiguangai': '<S27>:1243' */
    aaaqi_DW.is_kaiguangai_o = aaaqi_IN_NO_ACTIVE_CHILD_o;
    aaaqi_DW.is_active_kaiguangai = 0U;
    aaaqi_DW.is_c4_aaaqi = aaaqi_IN_off111;

    /* Entry 'off111': '<S27>:1174' */
    aaaqi_B.diancifa11_1_d = 0.0;
    aaaqi_B.diancifa11_2_b = 0.0;
    aaaqi_B.diancifa11_5_o = 0.0;
    aaaqi_B.diancifa20_i = 0.0;
    aaaqi_B.diancifa16_1_c = 0.0;
    aaaqi_B.diancifa3_l = 0.0;
    aaaqi_B.diancifa21_g = 0.0;
    aaaqi_B.bililiuliangfa18_1_h = 0.0;
    aaaqi_B.bililiuliangfa18_2_i = 0.0;
    aaaqi_B.bililiuliangfa18_3_m = 0.0;
    aaaqi_B.bililiuliangfa18_4_b = 0.0;
    aaaqi_B.xuansong_i = 0.0;
    aaaqi_B.xuanjin_l = 0.0;
    aaaqi_B.suoding_k = 0.0;
    aaaqi_B.jiesuo_g = 0.0;
    aaaqi_B.SCzhushuiwancheng_f = 0.0;
    aaaqi_B.SCjiayawancheng_l = 0.0;
    aaaqi_B.SXQjunyawancheng_h = 0.0;
    aaaqi_B.SQshiyabuchangwancheng_p = 0.0;
    aaaqi_B.kaigaikaishi_k = 0.0;
    aaaqi_B.kaigaiwancheng_g = 0.0;
    aaaqi_B.SQxuanjinjianyawancheng_m = 0.0;
    aaaqi_B.guangaikaishi_j = 0.0;
    aaaqi_B.guangaiwancheng_n = 0.0;
    aaaqi_B.SXQxieyawancheng_p = 0.0;
  } else {
    aaaqi_kaiguangai();

    /* During 'SCjiaya': '<S27>:1310' */
    guard1 = false;
    switch (aaaqi_DW.is_SCjiaya_c) {
     case aaaqi_IN_off1:
      /* During 'off1': '<S27>:1330' */
      if (aaaqi_B.DataTypeConversion9 == 1.0) {
        /* Transition: '<S27>:1317' */
        aaaqi_DW.is_SCjiaya_c = aaaqi_IN_on1_o5w;

        /* Entry 'on1': '<S27>:1331' */
        aaaqi_B.diancifa11_1_d = 1.0;
        aaaqi_B.diancifa11_2_b = 1.0;
        aaaqi_B.diancifa16_1_c = 0.0;
      }
      break;

     case aaaqi_IN_off2_c:
      /* During 'off2': '<S27>:1332' */
      /* Transition: '<S27>:1322' */
      if (aaaqi_DW.temporalCounter_i3 >= 1000) {
        /* Transition: '<S27>:1324' */
        if (aaaqi_B.DataTypeConversion27[0] < aaaqi_B.u) {
          /* Transition: '<S27>:1327' */
          aaaqi_DW.is_SCjiaya_c = aaaqi_IN_on3_e;

          /* Entry 'on3': '<S27>:1333' */
          aaaqi_B.diancifa11_1_d = 1.0;
          aaaqi_B.diancifa11_2_b = 1.0;
          aaaqi_B.diancifa16_1_c = 0.0;
        } else if (aaaqi_B.DataTypeConversion27[0] > aaaqi_B.u + 0.005) {
          /* Transition: '<S27>:1326' */
          aaaqi_DW.is_SCjiaya_c = aaaqi_IN_on2_at;

          /* Entry 'on2': '<S27>:1334' */
          aaaqi_B.diancifa16_1_c = 1.0;
        } else if ((aaaqi_B.DataTypeConversion27[0] >= aaaqi_B.u) &&
                   (aaaqi_B.DataTypeConversion27[0] <= aaaqi_B.u + 0.005)) {
          /* Transition: '<S27>:1328' */
          aaaqi_DW.is_SCjiaya_c = aaaqi_IN_off3_p;

          /* Entry 'off3': '<S27>:1335' */
          aaaqi_B.diancifa11_1_d = 0.0;
          aaaqi_B.diancifa11_2_b = 0.0;
          aaaqi_B.diancifa16_1_c = 0.0;
        } else {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }
      break;

     case aaaqi_IN_off3_p:
      /* During 'off3': '<S27>:1335' */
      /* Transition: '<S27>:1329' */
      aaaqi_DW.is_SCjiaya_c = aaaqi_IN_off4_c;

      /* Entry 'off4': '<S27>:1336' */
      aaaqi_B.SCjiayawancheng_l = 1.0;
      break;

     case aaaqi_IN_off4_c:
      /* During 'off4': '<S27>:1336' */
      break;

     case aaaqi_IN_on1_o5w:
      /* During 'on1': '<S27>:1331' */
      /* Transition: '<S27>:1318' */
      if (aaaqi_B.DataTypeConversion27[0] >= aaaqi_B.u) {
        /* Transition: '<S27>:1321' */
        aaaqi_DW.is_SCjiaya_c = aaaqi_IN_off2_c;
        aaaqi_DW.temporalCounter_i3 = 0U;

        /* Entry 'off2': '<S27>:1332' */
        aaaqi_B.diancifa11_1_d = 0.0;
        aaaqi_B.diancifa11_2_b = 0.0;
        aaaqi_B.diancifa16_1_c = 0.0;
      } else {
        if (aaaqi_B.DataTypeConversion9 == 0.0) {
          /* Transition: '<S27>:1319' */
          /* Transition: '<S27>:1316' */
          aaaqi_DW.is_SCjiaya_c = aaaqi_IN_off1;

          /* Entry 'off1': '<S27>:1330' */
          aaaqi_B.diancifa11_1_d = 0.0;
          aaaqi_B.diancifa11_2_b = 0.0;
          aaaqi_B.diancifa16_1_c = 0.0;
        }
      }
      break;

     case aaaqi_IN_on2_at:
      /* During 'on2': '<S27>:1334' */
      /* Transition: '<S27>:1325' */
      if (aaaqi_B.DataTypeConversion27[0] < aaaqi_B.u) {
        /* Transition: '<S27>:1327' */
        aaaqi_DW.is_SCjiaya_c = aaaqi_IN_on3_e;

        /* Entry 'on3': '<S27>:1333' */
        aaaqi_B.diancifa11_1_d = 1.0;
        aaaqi_B.diancifa11_2_b = 1.0;
        aaaqi_B.diancifa16_1_c = 0.0;
      } else if (aaaqi_B.DataTypeConversion27[0] > aaaqi_B.u + 0.005) {
        /* Transition: '<S27>:1326' */
        aaaqi_DW.is_SCjiaya_c = aaaqi_IN_on2_at;

        /* Entry 'on2': '<S27>:1334' */
        aaaqi_B.diancifa16_1_c = 1.0;
      } else {
        if ((aaaqi_B.DataTypeConversion27[0] >= aaaqi_B.u) &&
            (aaaqi_B.DataTypeConversion27[0] <= aaaqi_B.u + 0.005)) {
          /* Transition: '<S27>:1328' */
          aaaqi_DW.is_SCjiaya_c = aaaqi_IN_off3_p;

          /* Entry 'off3': '<S27>:1335' */
          aaaqi_B.diancifa11_1_d = 0.0;
          aaaqi_B.diancifa11_2_b = 0.0;
          aaaqi_B.diancifa16_1_c = 0.0;
        }
      }
      break;

     default:
      /* During 'on3': '<S27>:1333' */
      /* Transition: '<S27>:1323' */
      if (aaaqi_B.DataTypeConversion27[0] < aaaqi_B.u) {
        /* Transition: '<S27>:1327' */
        aaaqi_DW.is_SCjiaya_c = aaaqi_IN_on3_e;

        /* Entry 'on3': '<S27>:1333' */
        aaaqi_B.diancifa11_1_d = 1.0;
        aaaqi_B.diancifa11_2_b = 1.0;
        aaaqi_B.diancifa16_1_c = 0.0;
      } else if (aaaqi_B.DataTypeConversion27[0] > aaaqi_B.u + 0.005) {
        /* Transition: '<S27>:1326' */
        aaaqi_DW.is_SCjiaya_c = aaaqi_IN_on2_at;

        /* Entry 'on2': '<S27>:1334' */
        aaaqi_B.diancifa16_1_c = 1.0;
      } else {
        if ((aaaqi_B.DataTypeConversion27[0] >= aaaqi_B.u) &&
            (aaaqi_B.DataTypeConversion27[0] <= aaaqi_B.u + 0.005)) {
          /* Transition: '<S27>:1328' */
          aaaqi_DW.is_SCjiaya_c = aaaqi_IN_off3_p;

          /* Entry 'off3': '<S27>:1335' */
          aaaqi_B.diancifa11_1_d = 0.0;
          aaaqi_B.diancifa11_2_b = 0.0;
          aaaqi_B.diancifa16_1_c = 0.0;
        }
      }
      break;
    }

    if (guard1) {
      if (aaaqi_B.DataTypeConversion9 == 0.0) {
        /* Transition: '<S27>:1320' */
        /* Transition: '<S27>:1316' */
        aaaqi_DW.is_SCjiaya_c = aaaqi_IN_off1;

        /* Entry 'off1': '<S27>:1330' */
        aaaqi_B.diancifa11_1_d = 0.0;
        aaaqi_B.diancifa11_2_b = 0.0;
        aaaqi_B.diancifa16_1_c = 0.0;
      }
    }

    /* During 'SCzhushui': '<S27>:1337' */
    switch (aaaqi_DW.is_SCzhushui_e) {
     case aaaqi_IN_off1:
      /* During 'off1': '<S27>:1350' */
      /* Transition: '<S27>:1345' */
      aaaqi_DW.is_SCzhushui_e = aaaqi_IN_off2_c;

      /* Entry 'off2': '<S27>:1351' */
      aaaqi_B.diancifa16_1_c = 0.0;
      break;

     case aaaqi_IN_off2_c:
      /* During 'off2': '<S27>:1351' */
      /* Transition: '<S27>:1346' */
      aaaqi_DW.is_SCzhushui_e = aaaqi_IN_off3_p;

      /* Entry 'off3': '<S27>:1352' */
      aaaqi_B.SCzhushuiwancheng_f = 1.0;
      break;

     case aaaqi_IN_off3_p:
      /* During 'off3': '<S27>:1352' */
      break;

     case aaaqi_IN_off4_c:
      /* During 'off4': '<S27>:1347' */
      if (aaaqi_B.DataTypeConversion8 == 1.0) {
        /* Transition: '<S27>:1341' */
        aaaqi_DW.is_SCzhushui_e = aaaqi_IN_on2_atj;
        aaaqi_DW.temporalCounter_i4 = 0U;

        /* Entry 'on2': '<S27>:1348' */
        aaaqi_B.diancifa16_1_c = 1.0;
      }
      break;

     case aaaqi_IN_on2_atj:
      /* During 'on2': '<S27>:1348' */
      if (aaaqi_DW.temporalCounter_i4 >= 20) {
        /* Transition: '<S27>:1342' */
        aaaqi_DW.is_SCzhushui_e = aaaqi_IN_on3_e1;

        /* Entry 'on3': '<S27>:1349' */
        aaaqi_B.diancifa3_l = 1.0;
      }
      break;

     default:
      /* During 'on3': '<S27>:1349' */
      /* Transition: '<S27>:1343' */
      if (aaaqi_B.DataTypeConversion28 == 1.0) {
        /* Transition: '<S27>:1344' */
        aaaqi_DW.is_SCzhushui_e = aaaqi_IN_off1;

        /* Entry 'off1': '<S27>:1350' */
        aaaqi_B.diancifa3_l = 0.0;
      } else {
        if (aaaqi_B.DataTypeConversion8 == 0.0) {
          /* Transition: '<S27>:1340' */
          aaaqi_DW.is_SCzhushui_e = aaaqi_IN_off4_c;

          /* Entry 'off4': '<S27>:1347' */
          aaaqi_B.diancifa16_1_c = 0.0;
          aaaqi_B.diancifa3_l = 0.0;
        }
      }
      break;
    }

    aaaqi_SXQxieya();
    aaaqi_SXQjunya();
  }
}

/* Model output function */
static void aaaqi_output(void)
{
  real_T tmp;
  real_T tmp_0;
  real_T tmp_1;
  real_T tmp_2;
  real_T tmp_3;
  real_T tmp_4;
  real_T tmp_5;
  real_T tmp_6;
  real_T tmp_7;
  real_T tmp_8;
  real_T tmp_9;
  real_T tmp_a;
  real_T tmp_b;
  real_T tmp_c;
  real_T tmpForInput[10];
  int32_T tmp_d;
  int32_T i;
  real_T u0;

  /* Reset subsysRan breadcrumbs */
  srClearBC(aaaqi_DW.shoudong_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(aaaqi_DW.zidong_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(aaaqi_DW.Subsystem4.Subsystem4_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(aaaqi_DW.jinjichuli_SubsysRanBC);

  /* DataTypeConversion: '<Root>/Data Type Conversion3' incorporates:
   *  Constant: '<Root>/tiaoshi'
   */
  aaaqi_B.DataTypeConversion3 = aaaqi_P.tiaoshi_Value;

  /* Constant: '<S21>/fa11_1' */
  aaaqi_B.fa11_1 = aaaqi_P.fa11_1_Value;

  /* Constant: '<S21>/fa11_2' */
  aaaqi_B.fa11_2 = aaaqi_P.fa11_2_Value;

  /* Constant: '<S21>/fa11_5' */
  aaaqi_B.fa11_5 = aaaqi_P.fa11_5_Value;

  /* Constant: '<S21>/fa20' */
  aaaqi_B.fa20 = aaaqi_P.fa20_Value;

  /* Constant: '<S21>/fa16_1' */
  aaaqi_B.fa16_1 = aaaqi_P.fa16_1_Value;

  /* Constant: '<S21>/fa3' */
  aaaqi_B.fa3 = aaaqi_P.fa3_Value;

  /* Constant: '<S21>/fa21' */
  aaaqi_B.fa21 = aaaqi_P.fa21_Value;

  /* Constant: '<S21>/xuansongmingling' */
  aaaqi_B.xuansongmingling = aaaqi_P.xuansongmingling_Value;

  /* Constant: '<S21>/xuanjinmingling' */
  aaaqi_B.xuanjinmingling = aaaqi_P.xuanjinmingling_Value;

  /* Constant: '<S21>/suodingmingling' */
  aaaqi_B.suodingmingling = aaaqi_P.suodingmingling_Value;

  /* Constant: '<S21>/jiesuomingling' */
  aaaqi_B.jiesuomingling = aaaqi_P.jiesuomingling_Value;

  /* Constant: '<S21>/fa18_1' */
  aaaqi_B.fa18_1 = aaaqi_P.fa18_1_Value;

  /* Constant: '<S21>/fa18_2' */
  aaaqi_B.fa18_2 = aaaqi_P.fa18_2_Value;

  /* Constant: '<S21>/fa18_3' */
  aaaqi_B.fa18_3 = aaaqi_P.fa18_3_Value;

  /* Constant: '<S21>/fa18_4' */
  aaaqi_B.fa18_4 = aaaqi_P.fa18_4_Value;

  /* Constant: '<S21>/fa_kgg' */
  aaaqi_B.fa_kgg = aaaqi_P.fa_kgg_Value;

  /* Constant: '<Root>/jiting' */
  aaaqi_B.jiting = aaaqi_P.jiting_Value;

  /* Outputs for Enabled SubSystem: '<Root>/jinjichuli' incorporates:
   *  EnablePort: '<S19>/Enable'
   */
  if (aaaqi_B.DataTypeConversion3 > 0.0) {
    if (!aaaqi_DW.jinjichuli_MODE) {
      /* SystemReset for Chart: '<S19>/jinjichuli' */
      aaaqi_DW.sfEvent = aaaqi_CALL_EVENT_h;
      aaaqi_DW.is_active_fa4_1 = 0U;
      aaaqi_DW.is_fa4_1 = aaaqi_IN_NO_ACTIVE_CHILD_o;
      aaaqi_DW.is_active_fa4_10 = 0U;
      aaaqi_DW.is_fa4_10 = aaaqi_IN_NO_ACTIVE_CHILD_o;
      aaaqi_DW.is_active_fa4_11 = 0U;
      aaaqi_DW.is_fa4_11 = aaaqi_IN_NO_ACTIVE_CHILD_o;
      aaaqi_DW.is_active_fa4_12 = 0U;
      aaaqi_DW.is_fa4_12 = aaaqi_IN_NO_ACTIVE_CHILD_o;
      aaaqi_DW.is_active_fa4_13 = 0U;
      aaaqi_DW.is_fa4_13 = aaaqi_IN_NO_ACTIVE_CHILD_o;
      aaaqi_DW.is_active_fa4_2 = 0U;
      aaaqi_DW.is_fa4_2 = aaaqi_IN_NO_ACTIVE_CHILD_o;
      aaaqi_DW.is_active_fa4_3 = 0U;
      aaaqi_DW.is_fa4_3 = aaaqi_IN_NO_ACTIVE_CHILD_o;
      aaaqi_DW.is_active_fa4_4 = 0U;
      aaaqi_DW.is_fa4_4 = aaaqi_IN_NO_ACTIVE_CHILD_o;
      aaaqi_DW.is_active_fa4_5 = 0U;
      aaaqi_DW.is_fa4_5 = aaaqi_IN_NO_ACTIVE_CHILD_o;
      aaaqi_DW.is_active_fa4_6 = 0U;
      aaaqi_DW.is_fa4_6 = aaaqi_IN_NO_ACTIVE_CHILD_o;
      aaaqi_DW.is_active_fa4_7 = 0U;
      aaaqi_DW.is_fa4_7 = aaaqi_IN_NO_ACTIVE_CHILD_o;
      aaaqi_DW.is_active_fa4_8 = 0U;
      aaaqi_DW.is_fa4_8 = aaaqi_IN_NO_ACTIVE_CHILD_o;
      aaaqi_DW.is_active_fa4_9 = 0U;
      aaaqi_DW.is_fa4_9 = aaaqi_IN_NO_ACTIVE_CHILD_o;
      aaaqi_DW.is_active_kaigai = 0U;
      aaaqi_DW.is_kaigai = aaaqi_IN_NO_ACTIVE_CHILD_o;
      aaaqi_DW.is_active_kiagai = 0U;
      aaaqi_DW.is_kiagai = aaaqi_IN_NO_ACTIVE_CHILD_o;
      aaaqi_DW.is_active_yajin = 0U;
      aaaqi_DW.is_yajin = aaaqi_IN_NO_ACTIVE_CHILD_o;
      aaaqi_DW.temporalCounter_i1 = 0U;
      aaaqi_DW.is_active_c2_aaaqi = 0U;
      aaaqi_DW.is_c2_aaaqi = aaaqi_IN_NO_ACTIVE_CHILD_o;
      aaaqi_B.diancifa11_1 = 0.0;
      aaaqi_B.diancifa11_2 = 0.0;
      aaaqi_B.diancifa11_5 = 0.0;
      aaaqi_B.diancifa20 = 0.0;
      aaaqi_B.diancifa16_1 = 0.0;
      aaaqi_B.diancifa3 = 0.0;
      aaaqi_B.diancifa21 = 0.0;
      aaaqi_B.suoding = 0.0;
      aaaqi_B.jiesuo = 0.0;
      aaaqi_B.xuansong = 0.0;
      aaaqi_B.xuanjin = 0.0;
      aaaqi_B.bililiuliangfa18_1 = 0.0;
      aaaqi_B.bililiuliangfa18_2 = 0.0;
      aaaqi_B.bililiuliangfa18_3 = 0.0;
      aaaqi_B.bililiuliangfa18_4 = 0.0;
      aaaqi_B.kaiguangaifa = 0.0;
      aaaqi_DW.jinjichuli_MODE = true;
    }

    /* Chart: '<S19>/jinjichuli' */
    /* Gateway: jinjichuli/jinjichuli */
    aaaqi_DW.sfEvent = aaaqi_CALL_EVENT_h;
    if (aaaqi_DW.temporalCounter_i1 < 511U) {
      aaaqi_DW.temporalCounter_i1++;
    }

    /* During: jinjichuli/jinjichuli */
    if (aaaqi_DW.is_active_c2_aaaqi == 0U) {
      /* Entry: jinjichuli/jinjichuli */
      aaaqi_DW.is_active_c2_aaaqi = 1U;

      /* Entry Internal: jinjichuli/jinjichuli */
      /* Transition: '<S54>:57' */
      aaaqi_DW.is_c2_aaaqi = aaaqi_IN_off1_d;
    } else {
      switch (aaaqi_DW.is_c2_aaaqi) {
       case aaaqi_IN_MANUAL:
        aaaqi_MANUAL();
        break;

       case aaaqi_IN_end:
        /* During 'end': '<S54>:43' */
        break;

       case aaaqi_IN_off1_d:
        /* During 'off1': '<S54>:2' */
        if (aaaqi_B.DataTypeConversion3 == 1.0) {
          /* Transition: '<S54>:56' */
          aaaqi_DW.is_c2_aaaqi = aaaqi_IN_on1_kh;
          aaaqi_DW.temporalCounter_i1 = 0U;

          /* Entry 'on1': '<S54>:1' */
          aaaqi_B.diancifa11_1 = 0.0;
          aaaqi_B.diancifa11_2 = 0.0;
          aaaqi_B.diancifa11_5 = 0.0;
          aaaqi_B.diancifa20 = 0.0;
          aaaqi_B.diancifa16_1 = 0.0;
          aaaqi_B.diancifa3 = 0.0;
          aaaqi_B.diancifa21 = 0.0;
          aaaqi_B.xuansong = 0.0;
          aaaqi_B.xuanjin = 0.0;
          aaaqi_B.suoding = 0.0;
          aaaqi_B.jiesuo = 0.0;
          aaaqi_B.bililiuliangfa18_1 = 0.0;
          aaaqi_B.bililiuliangfa18_2 = 0.0;
          aaaqi_B.bililiuliangfa18_3 = 0.0;
          aaaqi_B.bililiuliangfa18_4 = 0.0;
          aaaqi_B.kaiguangaifa = 0.0;
        }
        break;

       default:
        /* During 'on1': '<S54>:1' */
        if (aaaqi_DW.temporalCounter_i1 >= 500) {
          /* Transition: '<S54>:97' */
          aaaqi_DW.is_c2_aaaqi = aaaqi_IN_MANUAL;

          /* Entry Internal 'MANUAL': '<S54>:3' */
          aaaqi_DW.is_active_fa4_4 = 1U;

          /* Entry Internal 'fa4_4': '<S54>:4' */
          /* Transition: '<S54>:58' */
          aaaqi_DW.is_fa4_4 = aaaqi_IN_A;

          /* Entry 'A': '<S54>:8' */
          aaaqi_B.diancifa20 = 0.0;
          aaaqi_DW.is_active_fa4_2 = 1U;

          /* Entry Internal 'fa4_2': '<S54>:5' */
          /* Transition: '<S54>:59' */
          aaaqi_DW.is_fa4_2 = aaaqi_IN_A;

          /* Entry 'A': '<S54>:9' */
          aaaqi_B.diancifa11_2 = 0.0;
          aaaqi_DW.is_active_fa4_3 = 1U;

          /* Entry Internal 'fa4_3': '<S54>:6' */
          /* Transition: '<S54>:60' */
          aaaqi_DW.is_fa4_3 = aaaqi_IN_A;

          /* Entry 'A': '<S54>:10' */
          aaaqi_B.diancifa11_5 = 0.0;
          aaaqi_DW.is_active_fa4_1 = 1U;

          /* Entry Internal 'fa4_1': '<S54>:7' */
          /* Transition: '<S54>:61' */
          aaaqi_DW.is_fa4_1 = aaaqi_IN_A;

          /* Entry 'A': '<S54>:11' */
          aaaqi_B.diancifa11_1 = 0.0;
          aaaqi_DW.is_active_fa4_5 = 1U;

          /* Entry Internal 'fa4_5': '<S54>:16' */
          /* Transition: '<S54>:70' */
          aaaqi_DW.is_fa4_5 = aaaqi_IN_A;

          /* Entry 'A': '<S54>:20' */
          aaaqi_B.diancifa16_1 = 0.0;
          aaaqi_DW.is_active_fa4_6 = 1U;

          /* Entry Internal 'fa4_6': '<S54>:17' */
          /* Transition: '<S54>:71' */
          aaaqi_DW.is_fa4_6 = aaaqi_IN_A;

          /* Entry 'A': '<S54>:21' */
          aaaqi_B.diancifa3 = 0.0;
          aaaqi_DW.is_active_fa4_8 = 1U;

          /* Entry Internal 'fa4_8': '<S54>:18' */
          /* Transition: '<S54>:72' */
          aaaqi_DW.is_fa4_8 = aaaqi_IN_A;

          /* Entry 'A': '<S54>:22' */
          aaaqi_B.xuansong = 0.0;
          aaaqi_DW.is_active_fa4_7 = 1U;

          /* Entry Internal 'fa4_7': '<S54>:19' */
          /* Transition: '<S54>:73' */
          aaaqi_DW.is_fa4_7 = aaaqi_IN_A;

          /* Entry 'A': '<S54>:23' */
          aaaqi_B.diancifa21 = 0.0;
          aaaqi_DW.is_active_fa4_9 = 1U;

          /* Entry Internal 'fa4_9': '<S54>:28' */
          /* Transition: '<S54>:82' */
          aaaqi_DW.is_fa4_9 = aaaqi_IN_A;

          /* Entry 'A': '<S54>:32' */
          aaaqi_B.xuanjin = 0.0;
          aaaqi_DW.is_active_fa4_10 = 1U;

          /* Entry Internal 'fa4_10': '<S54>:29' */
          /* Transition: '<S54>:83' */
          aaaqi_DW.is_fa4_10 = aaaqi_IN_A;

          /* Entry 'A': '<S54>:33' */
          aaaqi_B.suoding = 0.0;
          aaaqi_DW.is_active_fa4_12 = 1U;

          /* Entry Internal 'fa4_12': '<S54>:30' */
          /* Transition: '<S54>:84' */
          aaaqi_DW.is_fa4_12 = aaaqi_IN_A;

          /* Entry 'A': '<S54>:34' */
          aaaqi_B.bililiuliangfa18_1 = 0.0;
          aaaqi_DW.is_active_fa4_11 = 1U;

          /* Entry Internal 'fa4_11': '<S54>:31' */
          /* Transition: '<S54>:85' */
          aaaqi_DW.is_fa4_11 = aaaqi_IN_A;

          /* Entry 'A': '<S54>:35' */
          aaaqi_B.jiesuo = 0.0;
          aaaqi_DW.is_active_fa4_13 = 1U;

          /* Entry Internal 'fa4_13': '<S54>:40' */
          /* Transition: '<S54>:94' */
          aaaqi_DW.is_fa4_13 = aaaqi_IN_A;

          /* Entry 'A': '<S54>:41' */
          aaaqi_B.bililiuliangfa18_2 = 0.0;
          aaaqi_DW.is_active_kiagai = 1U;

          /* Entry Internal 'kiagai': '<S54>:44' */
          /* Transition: '<S54>:101' */
          aaaqi_DW.is_kiagai = aaaqi_IN_A;

          /* Entry 'A': '<S54>:45' */
          aaaqi_B.bililiuliangfa18_3 = 0.0;
          aaaqi_DW.is_active_yajin = 1U;

          /* Entry Internal 'yajin': '<S54>:50' */
          /* Transition: '<S54>:108' */
          aaaqi_DW.is_yajin = aaaqi_IN_A;

          /* Entry 'A': '<S54>:51' */
          aaaqi_B.bililiuliangfa18_4 = 0.0;
          aaaqi_DW.is_active_kaigai = 1U;

          /* Entry Internal 'kaigai': '<S54>:173' */
          /* Transition: '<S54>:174' */
          aaaqi_DW.is_kaigai = aaaqi_IN_A;

          /* Entry 'A': '<S54>:177' */
          aaaqi_B.kaiguangaifa = 0.0;
        }
        break;
      }
    }

    /* End of Chart: '<S19>/jinjichuli' */
    srUpdateBC(aaaqi_DW.jinjichuli_SubsysRanBC);
  } else {
    if (aaaqi_DW.jinjichuli_MODE) {
      aaaqi_DW.jinjichuli_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<Root>/jinjichuli' */

  /* DataTypeConversion: '<Root>/Data Type Conversion4' incorporates:
   *  Constant: '<Root>/qiehuan'
   */
  aaaqi_B.DataTypeConversion4 = aaaqi_P.qiehuan_Value;

  /* S-Function (canac2objreceivex): '<S17>/yalichuanganqi3402' */
  {
    /*------------ S-Function Block: <S17>/yalichuanganqi3402 ------------*/
    if (!g_xpccanac2busstatusx[1-1]) {
      int_T stat;
      EFLAGS_T flags;
      unsigned long time;
      uint8_T p_data[8];
      flags = saveAndDisableInterrupts();
      stat = CANPC_read_rcv_data_mbx( 1, 3, p_data, &time );
      restoreInterrupts(flags);
      if (stat > 0 || stat == -1 || stat == -2) {
        memcpy( (&aaaqi_B.yalichuanganqi3402_o1), p_data, 8);
      }

      flags = saveAndDisableInterrupts();
      stat = CANPC_read_rcv_data_mbx( 1, 6, p_data, &time );
      restoreInterrupts(flags);
      if (stat > 0 || stat == -1 || stat == -2) {
        memcpy( (&aaaqi_B.yalichuanganqi3402_o2), p_data, 8);
      }
    }
  }

  /* Bit Unpacking: <S17>/CAN bit-unpacking 7 */
  {
    const uint32_T *y = (const uint32_T *)&aaaqi_B.yalichuanganqi3402_o1;

    /* Output Port 1 */
    aaaqi_B.CANbitunpacking7_o1 = (uint16_T)
      (y[0] & 0xffff);

    /* Output Port 2 */
    aaaqi_B.CANbitunpacking7_o2 = (uint16_T)
      ((y[0] & (0xffff << 16)) >> 16);

    /* Output Port 3 */
    aaaqi_B.CANbitunpacking7_o3 = (uint16_T)
      (y[1] & 0xffff);

    /* Output Port 4 */
    aaaqi_B.CANbitunpacking7_o4 = (uint16_T)
      ((y[1] & (0xffff << 16)) >> 16);
  }

  /* DataTypeConversion: '<S17>/Data Type Conversion49' */
  aaaqi_B.DataTypeConversion49 = aaaqi_B.CANbitunpacking7_o1;

  /* Lookup_n-D: '<S17>/1-D Lookup Table1' */
  aaaqi_B.uDLookupTable1 = look1_binlxpw(aaaqi_B.DataTypeConversion49,
    aaaqi_P.uDLookupTable1_bp01Data, aaaqi_P.uDLookupTable1_tableData, 1U);

  /* RelationalOperator: '<S47>/Compare' incorporates:
   *  Constant: '<S47>/Constant'
   */
  aaaqi_B.Compare = (aaaqi_B.uDLookupTable1 >= aaaqi_P.CompareToConstant1_const);

  /* DataTypeConversion: '<S17>/Data Type Conversion50' */
  aaaqi_B.DataTypeConversion50 = aaaqi_B.CANbitunpacking7_o2;

  /* Lookup_n-D: '<S17>/1-D Lookup Table2' */
  aaaqi_B.uDLookupTable2 = look1_binlxpw(aaaqi_B.DataTypeConversion50,
    aaaqi_P.uDLookupTable2_bp01Data, aaaqi_P.uDLookupTable2_tableData, 1U);

  /* RelationalOperator: '<S49>/Compare' incorporates:
   *  Constant: '<S49>/Constant'
   */
  aaaqi_B.Compare_o = (aaaqi_B.uDLookupTable2 >=
                       aaaqi_P.CompareToConstant3_const);

  /* DataTypeConversion: '<S17>/Data Type Conversion51' */
  aaaqi_B.DataTypeConversion51 = aaaqi_B.CANbitunpacking7_o3;

  /* Lookup_n-D: '<S17>/1-D Lookup Table3' */
  aaaqi_B.uDLookupTable3 = look1_binlxpw(aaaqi_B.DataTypeConversion51,
    aaaqi_P.uDLookupTable3_bp01Data, aaaqi_P.uDLookupTable3_tableData, 1U);

  /* RelationalOperator: '<S50>/Compare' incorporates:
   *  Constant: '<S50>/Constant'
   */
  aaaqi_B.Compare_p = (aaaqi_B.uDLookupTable3 >=
                       aaaqi_P.CompareToConstant5_const);

  /* DataTypeConversion: '<S17>/Data Type Conversion52' */
  aaaqi_B.DataTypeConversion52 = aaaqi_B.CANbitunpacking7_o4;

  /* Lookup_n-D: '<S17>/1-D Lookup Table4' */
  aaaqi_B.uDLookupTable4 = look1_binlxpw(aaaqi_B.DataTypeConversion52,
    aaaqi_P.uDLookupTable4_bp01Data, aaaqi_P.uDLookupTable4_tableData, 1U);

  /* RelationalOperator: '<S51>/Compare' incorporates:
   *  Constant: '<S51>/Constant'
   */
  aaaqi_B.Compare_j = (aaaqi_B.uDLookupTable4 >=
                       aaaqi_P.CompareToConstant7_const);

  /* Bit Unpacking: <S17>/CAN bit-unpacking 6 */
  {
    const uint32_T *y = (const uint32_T *)&aaaqi_B.yalichuanganqi3402_o2;

    /* Output Port 1 */
    aaaqi_B.CANbitunpacking6_o1 = (uint16_T)
      (y[0] & 0xffff);

    /* Output Port 2 */
    aaaqi_B.CANbitunpacking6_o2 = (uint16_T)
      ((y[0] & (0xffff << 16)) >> 16);
  }

  /* DataTypeConversion: '<S17>/Data Type Conversion53' */
  aaaqi_B.DataTypeConversion53 = aaaqi_B.CANbitunpacking6_o1;

  /* Lookup_n-D: '<S17>/1-D Lookup Table5' */
  aaaqi_B.uDLookupTable5 = look1_binlxpw(aaaqi_B.DataTypeConversion53,
    aaaqi_P.uDLookupTable5_bp01Data, aaaqi_P.uDLookupTable5_tableData, 1U);

  /* RelationalOperator: '<S52>/Compare' incorporates:
   *  Constant: '<S52>/Constant'
   */
  aaaqi_B.Compare_k = (aaaqi_B.uDLookupTable5 >=
                       aaaqi_P.CompareToConstant9_const);

  /* DataTypeConversion: '<S17>/Data Type Conversion54' */
  aaaqi_B.DataTypeConversion54 = aaaqi_B.CANbitunpacking6_o2;

  /* Lookup_n-D: '<S17>/1-D Lookup Table6' */
  aaaqi_B.uDLookupTable6 = look1_binlxpw(aaaqi_B.DataTypeConversion54,
    aaaqi_P.uDLookupTable6_bp01Data, aaaqi_P.uDLookupTable6_tableData, 1U);

  /* RelationalOperator: '<S48>/Compare' incorporates:
   *  Constant: '<S48>/Constant'
   */
  aaaqi_B.Compare_jd = (aaaqi_B.uDLookupTable6 >=
                        aaaqi_P.CompareToConstant11_const);

  /* Logic: '<S46>/Logical Operator' */
  aaaqi_B.LogicalOperator = (aaaqi_B.Compare || aaaqi_B.Compare_o ||
    aaaqi_B.Compare_p || aaaqi_B.Compare_j || aaaqi_B.Compare_k ||
    aaaqi_B.Compare_jd);

  /* Logic: '<Root>/Logical Operator4' incorporates:
   *  Constant: '<Root>/Constant2'
   */
  aaaqi_B.LogicalOperator4 = (aaaqi_P.Constant2_Value_a != 0.0) ^
    aaaqi_B.LogicalOperator;

  /* Logic: '<Root>/Logical Operator3' incorporates:
   *  Constant: '<Root>/kaishi'
   */
  aaaqi_B.LogicalOperator3 = ((aaaqi_P.kaishi_Value != 0.0) &&
    aaaqi_B.LogicalOperator4);

  /* DataTypeConversion: '<Root>/Data Type Conversion6' */
  aaaqi_B.DataTypeConversion6 = aaaqi_B.LogicalOperator3;

  /* S-Function (canac2objreceivex): '<S17>/tonggai1808Receive' */
  {
    /*------------ S-Function Block: <S17>/tonggai1808Receive ------------*/
    if (!g_xpccanac2busstatusx[1-1]) {
      int_T stat;
      EFLAGS_T flags;
      unsigned long time;
      uint8_T p_data[8];
      flags = saveAndDisableInterrupts();
      stat = CANPC_read_rcv_data_mbx( 1, 0, p_data, &time );
      restoreInterrupts(flags);
      if (stat > 0 || stat == -1 || stat == -2) {
        memcpy( (&aaaqi_B.tonggai1808Receive), p_data, 8);
      }
    }
  }

  /* Bit Unpacking: <S17>/CAN bit-unpacking 2 */
  {
    const uint32_T *y = (const uint32_T *)&aaaqi_B.tonggai1808Receive;

    /* Output Port 1 */
    aaaqi_B.CANbitunpacking2_o1 = (boolean_T)
      (y[0] & 0x1);

    /* Output Port 2 */
    aaaqi_B.CANbitunpacking2_o2 = (boolean_T)
      ((y[0] & (0x1 << 1)) >> 1);

    /* Output Port 3 */
    aaaqi_B.CANbitunpacking2_o3 = (boolean_T)
      ((y[0] & (0x1 << 2)) >> 2);

    /* Output Port 4 */
    aaaqi_B.CANbitunpacking2_o4 = (boolean_T)
      ((y[0] & (0x1 << 3)) >> 3);

    /* Output Port 5 */
    aaaqi_B.CANbitunpacking2_o5 = (boolean_T)
      ((y[0] & (0x1 << 4)) >> 4);

    /* Output Port 6 */
    aaaqi_B.CANbitunpacking2_o6 = (boolean_T)
      ((y[0] & (0x1 << 5)) >> 5);

    /* Output Port 7 */
    aaaqi_B.CANbitunpacking2_o7 = (boolean_T)
      ((y[0] & (0x1 << 6)) >> 6);

    /* Output Port 8 */
    aaaqi_B.CANbitunpacking2_o8 = (boolean_T)
      ((y[0] & (0x1 << 7)) >> 7);

    /* Output Port 9 */
    aaaqi_B.CANbitunpacking2_o9 = (boolean_T)
      ((y[0] & (0x1 << 8)) >> 8);

    /* Output Port 10 */
    aaaqi_B.CANbitunpacking2_o10 = (boolean_T)
      ((y[0] & (0x1 << 9)) >> 9);

    /* Output Port 11 */
    aaaqi_B.CANbitunpacking2_o11 = (boolean_T)
      ((y[0] & (0x1 << 10)) >> 10);

    /* Output Port 12 */
    aaaqi_B.CANbitunpacking2_o12 = (boolean_T)
      ((y[0] & (0x1 << 11)) >> 11);

    /* Output Port 13 */
    aaaqi_B.CANbitunpacking2_o13 = (boolean_T)
      ((y[0] & (0x1 << 12)) >> 12);

    /* Output Port 14 */
    aaaqi_B.CANbitunpacking2_o14 = (boolean_T)
      ((y[0] & (0x1 << 13)) >> 13);

    /* Output Port 15 */
    aaaqi_B.CANbitunpacking2_o15 = (boolean_T)
      ((y[0] & (0x1 << 14)) >> 14);

    /* Output Port 16 */
    aaaqi_B.CANbitunpacking2_o16 = (boolean_T)
      ((y[0] & (0x1 << 15)) >> 15);
  }

  /* Logic: '<S17>/Logical Operator1' */
  aaaqi_B.LogicalOperator1[0] = !aaaqi_B.CANbitunpacking2_o1;
  aaaqi_B.LogicalOperator1[1] = !aaaqi_B.CANbitunpacking2_o2;
  aaaqi_B.LogicalOperator1[2] = !aaaqi_B.CANbitunpacking2_o3;
  aaaqi_B.LogicalOperator1[3] = !aaaqi_B.CANbitunpacking2_o4;
  aaaqi_B.LogicalOperator1[4] = !aaaqi_B.CANbitunpacking2_o5;
  aaaqi_B.LogicalOperator1[5] = !aaaqi_B.CANbitunpacking2_o6;
  aaaqi_B.LogicalOperator1[6] = !aaaqi_B.CANbitunpacking2_o7;
  aaaqi_B.LogicalOperator1[7] = !aaaqi_B.CANbitunpacking2_o8;
  aaaqi_B.LogicalOperator1[8] = !aaaqi_B.CANbitunpacking2_o9;
  aaaqi_B.LogicalOperator1[9] = !aaaqi_B.CANbitunpacking2_o10;
  aaaqi_B.LogicalOperator1[10] = !aaaqi_B.CANbitunpacking2_o11;
  aaaqi_B.LogicalOperator1[11] = !aaaqi_B.CANbitunpacking2_o12;
  aaaqi_B.LogicalOperator1[12] = !aaaqi_B.CANbitunpacking2_o13;
  aaaqi_B.LogicalOperator1[13] = !aaaqi_B.CANbitunpacking2_o14;
  aaaqi_B.LogicalOperator1[14] = !aaaqi_B.CANbitunpacking2_o15;
  aaaqi_B.LogicalOperator1[15] = !aaaqi_B.CANbitunpacking2_o16;

  /* Step: '<S17>/Step' */
  u0 = aaaqi_M->Timing.t[0];
  if (u0 < aaaqi_P.Step_Time) {
    aaaqi_B.Step = aaaqi_P.Step_Y0;
  } else {
    aaaqi_B.Step = aaaqi_P.Step_YFinal;
  }

  /* End of Step: '<S17>/Step' */

  /* Product: '<S17>/Product' */
  for (i = 0; i < 16; i++) {
    aaaqi_B.Product[i] = (real_T)aaaqi_B.LogicalOperator1[i] * aaaqi_B.Step;
  }

  /* End of Product: '<S17>/Product' */

  /* DataTypeConversion: '<Root>/Data Type Conversion24' */
  memcpy(&aaaqi_B.DataTypeConversion24[0], &aaaqi_B.Product[4], 12U * sizeof
         (real_T));

  /* Logic: '<Root>/Logical Operator1' incorporates:
   *  Constant: '<Root>/Constant'
   */
  aaaqi_B.LogicalOperator1_j = ((aaaqi_B.DataTypeConversion24[4] != 0.0) &&
    (aaaqi_P.Constant_Value_cb != 0.0));

  /* Logic: '<Root>/Logical Operator2' incorporates:
   *  Constant: '<Root>/SCzhushui'
   */
  aaaqi_B.LogicalOperator2 = ((aaaqi_P.SCzhushui_Value != 0.0) &&
    aaaqi_B.LogicalOperator1_j);

  /* DataTypeConversion: '<Root>/Data Type Conversion8' */
  aaaqi_B.DataTypeConversion8 = aaaqi_B.LogicalOperator2;

  /* S-Function (canac2objreceivex): '<S17>/liuliangji_fuqiuyeweiji3402' */
  {
    /*------------ S-Function Block: <S17>/liuliangji_fuqiuyeweiji3402 ------------*/
    if (!g_xpccanac2busstatusx[1-1]) {
      int_T stat;
      EFLAGS_T flags;
      unsigned long time;
      uint8_T p_data[8];
      flags = saveAndDisableInterrupts();
      stat = CANPC_read_rcv_data_mbx( 1, 4, p_data, &time );
      restoreInterrupts(flags);
      if (stat > 0 || stat == -1 || stat == -2) {
        memcpy( (&aaaqi_B.liuliangji), p_data, 8);
      }

      flags = saveAndDisableInterrupts();
      stat = CANPC_read_rcv_data_mbx( 1, 7, p_data, &time );
      restoreInterrupts(flags);
      if (stat > 0 || stat == -1 || stat == -2) {
        memcpy( (&aaaqi_B.liuliangji_fuqiuyeweiji3402_o2), p_data, 8);
      }
    }
  }

  /* Bit Unpacking: <S17>/CAN bit-unpacking 8 */
  {
    const uint32_T *y = (const uint32_T *)
      &aaaqi_B.liuliangji_fuqiuyeweiji3402_o2;

    /* Output Port 1 */
    aaaqi_B.CANbitunpacking8 = (boolean_T)
      (y[0] & 0x1);
  }

  /* Logic: '<S17>/Logical Operator' */
  aaaqi_B.LogicalOperator_e = !aaaqi_B.CANbitunpacking8;

  /* Step: '<S17>/Step1' */
  u0 = aaaqi_M->Timing.t[0];
  if (u0 < aaaqi_P.Step1_Time) {
    aaaqi_B.Step1 = aaaqi_P.Step1_Y0;
  } else {
    aaaqi_B.Step1 = aaaqi_P.Step1_YFinal;
  }

  /* End of Step: '<S17>/Step1' */

  /* Product: '<S17>/Product1' */
  aaaqi_B.Product1 = (real_T)aaaqi_B.LogicalOperator_e * aaaqi_B.Step1;

  /* DataTypeConversion: '<Root>/Data Type Conversion28' */
  aaaqi_B.DataTypeConversion28 = aaaqi_B.Product1;

  /* Logic: '<Root>/Logical Operator7' incorporates:
   *  Constant: '<Root>/SCjiaya'
   */
  aaaqi_B.LogicalOperator7 = ((aaaqi_P.SCjiaya_Value != 0.0) &&
    aaaqi_B.LogicalOperator1_j);

  /* DataTypeConversion: '<Root>/Data Type Conversion9' */
  aaaqi_B.DataTypeConversion9 = aaaqi_B.LogicalOperator7;

  /* Logic: '<Root>/Logical Operator8' incorporates:
   *  Constant: '<Root>/SXQjunya'
   */
  aaaqi_B.LogicalOperator8 = ((aaaqi_P.SXQjunya_Value != 0.0) &&
    aaaqi_B.LogicalOperator1_j);

  /* DataTypeConversion: '<Root>/Data Type Conversion11' */
  aaaqi_B.DataTypeConversion11 = aaaqi_B.LogicalOperator8;

  /* Logic: '<Root>/Logical Operator9' incorporates:
   *  Constant: '<Root>/SXQxieya'
   */
  aaaqi_B.LogicalOperator9 = ((aaaqi_P.SXQxieya_Value != 0.0) &&
    aaaqi_B.LogicalOperator1_j);

  /* DataTypeConversion: '<Root>/Data Type Conversion12' */
  aaaqi_B.DataTypeConversion12 = aaaqi_B.LogicalOperator9;

  /* DataTypeConversion: '<Root>/Data Type Conversion27' */
  aaaqi_B.DataTypeConversion27[0] = aaaqi_B.uDLookupTable1;
  aaaqi_B.DataTypeConversion27[1] = aaaqi_B.uDLookupTable2;
  aaaqi_B.DataTypeConversion27[2] = aaaqi_B.uDLookupTable3;
  aaaqi_B.DataTypeConversion27[3] = aaaqi_B.uDLookupTable4;
  aaaqi_B.DataTypeConversion27[4] = aaaqi_B.uDLookupTable5;
  aaaqi_B.DataTypeConversion27[5] = aaaqi_B.uDLookupTable6;

  /* Constant: '<Root>/水舱最大压力' */
  aaaqi_B.u = aaaqi_P._Value;

  /* Bit Unpacking: <S17>/CAN bit-unpacking 5 */
  {
    const uint32_T *y = (const uint32_T *)&aaaqi_B.liuliangji;

    /* Output Port 1 */
    aaaqi_B.CANbitunpacking5_o1 = (uint16_T)
      (y[0] & 0xffff);

    /* Output Port 2 */
    aaaqi_B.CANbitunpacking5_o2 = (uint16_T)
      ((y[0] & (0xffff << 16)) >> 16);

    /* Output Port 3 */
    aaaqi_B.CANbitunpacking5_o3 = (uint16_T)
      (y[1] & 0xffff);
  }

  /* Sum: '<Root>/Add' */
  aaaqi_B.Add_l = (uint16_T)((uint32_T)aaaqi_B.CANbitunpacking5_o1 +
    aaaqi_B.CANbitunpacking5_o2);

  /* RelationalOperator: '<S3>/Compare' incorporates:
   *  Constant: '<S3>/Constant'
   */
  aaaqi_B.Compare_c = (aaaqi_B.Add_l <= aaaqi_P.CompareToConstant2_const);

  /* RelationalOperator: '<S4>/Compare' incorporates:
   *  Constant: '<S4>/Constant'
   */
  aaaqi_B.Compare_m = (aaaqi_B.Add_l >= aaaqi_P.CompareToConstant3_const_e);

  /* Logic: '<Root>/Logical Operator10' */
  aaaqi_B.LogicalOperator10 = (aaaqi_B.Compare_c && aaaqi_B.Compare_m);

  /* DataTypeConversion: '<Root>/Data Type Conversion1' */
  aaaqi_B.DataTypeConversion1 = aaaqi_B.LogicalOperator10;

  /* Constant: '<Root>/凸膜上下腔最小压力' */
  aaaqi_B.u_c = aaaqi_P._Value_k;

  /* Constant: '<Root>/凸膜上下腔最大压力' */
  aaaqi_B.u_m = aaaqi_P._Value_g;

  /* S-Function (canac2objreceivex): '<S17>/kaiguangaiweiyi3402' */
  {
    /*------------ S-Function Block: <S17>/kaiguangaiweiyi3402 ------------*/
    if (!g_xpccanac2busstatusx[1-1]) {
      int_T stat;
      EFLAGS_T flags;
      unsigned long time;
      uint8_T p_data[8];
      flags = saveAndDisableInterrupts();
      stat = CANPC_read_rcv_data_mbx( 1, 2, p_data, &time );
      restoreInterrupts(flags);
      if (stat > 0 || stat == -1 || stat == -2) {
        memcpy( (&aaaqi_B.kaiguangaiweiyi3402), p_data, 8);
      }
    }
  }

  /* Bit Unpacking: <S17>/CAN bit-unpacking 4 */
  {
    const uint32_T *y = (const uint32_T *)&aaaqi_B.kaiguangaiweiyi3402;

    /* Output Port 1 */
    aaaqi_B.CANbitunpacking4_o1 = (uint16_T)
      (y[0] & 0xffff);

    /* Output Port 2 */
    aaaqi_B.CANbitunpacking4_o2 = (uint16_T)
      ((y[0] & (0xffff << 16)) >> 16);
  }

  /* DataTypeConversion: '<S17>/Data Type Conversion48' */
  aaaqi_B.DataTypeConversion48 = aaaqi_B.CANbitunpacking4_o1;

  /* Lookup_n-D: '<S17>/1-D Lookup Table' */
  aaaqi_B.uDLookupTable = look1_binlxpw(aaaqi_B.DataTypeConversion48,
    aaaqi_P.uDLookupTable_bp01Data, aaaqi_P.uDLookupTable_tableData, 1U);

  /* DataTypeConversion: '<Root>/Data Type Conversion26' */
  aaaqi_B.DataTypeConversion26 = aaaqi_B.uDLookupTable;

  /* S-Function (canac2objreceivex): '<S17>/tonggai3402Receive' */
  {
    /*------------ S-Function Block: <S17>/tonggai3402Receive ------------*/
    if (!g_xpccanac2busstatusx[1-1]) {
      int_T stat;
      EFLAGS_T flags;
      unsigned long time;
      uint8_T p_data[8];
      flags = saveAndDisableInterrupts();
      stat = CANPC_read_rcv_data_mbx( 1, 1, p_data, &time );
      restoreInterrupts(flags);
      if (stat > 0 || stat == -1 || stat == -2) {
        memcpy( (&aaaqi_B.tonggai3402Receive_o1), p_data, 8);
      }

      flags = saveAndDisableInterrupts();
      stat = CANPC_read_rcv_data_mbx( 1, 5, p_data, &time );
      restoreInterrupts(flags);
      if (stat > 0 || stat == -1 || stat == -2) {
        memcpy( (&aaaqi_B.tonggai3402Receive_o2), p_data, 8);
      }
    }
  }

  /* Bit Unpacking: <S17>/CAN bit-unpacking 3 */
  {
    const uint32_T *y = (const uint32_T *)&aaaqi_B.tonggai3402Receive_o1;

    /* Output Port 1 */
    aaaqi_B.CANbitunpacking3_o1 = (uint16_T)
      (y[0] & 0xffff);

    /* Output Port 2 */
    aaaqi_B.CANbitunpacking3_o2 = (uint16_T)
      ((y[0] & (0xffff << 16)) >> 16);

    /* Output Port 3 */
    aaaqi_B.CANbitunpacking3_o3 = (uint16_T)
      (y[1] & 0xffff);

    /* Output Port 4 */
    aaaqi_B.CANbitunpacking3_o4 = (uint16_T)
      ((y[1] & (0xffff << 16)) >> 16);
  }

  /* Bit Unpacking: <S17>/CAN bit-unpacking 9 */
  {
    const uint32_T *y = (const uint32_T *)&aaaqi_B.tonggai3402Receive_o2;

    /* Output Port 1 */
    aaaqi_B.CANbitunpacking9_o1 = (uint16_T)
      (y[0] & 0xffff);

    /* Output Port 2 */
    aaaqi_B.CANbitunpacking9_o2 = (uint16_T)
      ((y[0] & (0xffff << 16)) >> 16);

    /* Output Port 3 */
    aaaqi_B.CANbitunpacking9_o3 = (uint16_T)
      (y[1] & 0xffff);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion25' */
  aaaqi_B.DataTypeConversion25[0] = aaaqi_B.CANbitunpacking3_o1;
  aaaqi_B.DataTypeConversion25[1] = aaaqi_B.CANbitunpacking3_o2;
  aaaqi_B.DataTypeConversion25[2] = aaaqi_B.CANbitunpacking3_o3;
  aaaqi_B.DataTypeConversion25[3] = aaaqi_B.CANbitunpacking3_o4;
  aaaqi_B.DataTypeConversion25[4] = aaaqi_B.CANbitunpacking9_o1;
  aaaqi_B.DataTypeConversion25[5] = aaaqi_B.CANbitunpacking9_o2;
  aaaqi_B.DataTypeConversion25[6] = aaaqi_B.CANbitunpacking9_o3;

  /* DataTypeConversion: '<Root>/Data Type Conversion13' */
  aaaqi_B.DataTypeConversion13 = aaaqi_B.jiting;

  /* Memory: '<Root>/Memory' */
  aaaqi_B.Memory = aaaqi_DW.Memory_PreviousInput;

  /* Chart: '<S20>/Chart' */
  aaaqi_Chart1(aaaqi_B.Memory, &aaaqi_B.sf_Chart, &aaaqi_DW.sf_Chart);

  /* Saturate: '<S20>/Saturation' */
  u0 = aaaqi_B.sf_Chart.t;
  tmp = aaaqi_P.Saturation_LowerSat;
  tmp_0 = aaaqi_P.Saturation_UpperSat;
  if (u0 > tmp_0) {
    aaaqi_B.Saturation = tmp_0;
  } else if (u0 < tmp) {
    aaaqi_B.Saturation = tmp;
  } else {
    aaaqi_B.Saturation = u0;
  }

  /* End of Saturate: '<S20>/Saturation' */

  /* Fcn: '<S20>/Fcn' */
  tmp = aaaqi_B.Saturation;
  u0 = rt_powd_snf(tmp, 16.0);
  tmp_0 = aaaqi_B.Saturation;
  tmp = rt_powd_snf(tmp_0, 15.0);
  tmp_1 = aaaqi_B.Saturation;
  tmp_0 = rt_powd_snf(tmp_1, 14.0);
  tmp_2 = aaaqi_B.Saturation;
  tmp_1 = rt_powd_snf(tmp_2, 13.0);
  tmp_3 = aaaqi_B.Saturation;
  tmp_2 = rt_powd_snf(tmp_3, 12.0);
  tmp_4 = aaaqi_B.Saturation;
  tmp_3 = rt_powd_snf(tmp_4, 11.0);
  tmp_5 = aaaqi_B.Saturation;
  tmp_4 = rt_powd_snf(tmp_5, 10.0);
  tmp_6 = aaaqi_B.Saturation;
  tmp_5 = rt_powd_snf(tmp_6, 9.0);
  tmp_7 = aaaqi_B.Saturation;
  tmp_6 = rt_powd_snf(tmp_7, 8.0);
  tmp_8 = aaaqi_B.Saturation;
  tmp_7 = rt_powd_snf(tmp_8, 7.0);
  tmp_9 = aaaqi_B.Saturation;
  tmp_8 = rt_powd_snf(tmp_9, 6.0);
  tmp_a = aaaqi_B.Saturation;
  tmp_9 = rt_powd_snf(tmp_a, 5.0);
  tmp_b = aaaqi_B.Saturation;
  tmp_a = rt_powd_snf(tmp_b, 4.0);
  tmp_c = aaaqi_B.Saturation;
  tmp_b = rt_powd_snf(tmp_c, 3.0);
  tmp_c = aaaqi_B.Saturation;
  tmp_c = rt_powd_snf(tmp_c, 2.0);
  aaaqi_B.Fcn = (((((((((((((((3.76012794303783e-12 * u0 - 3.77787151438439e-10 *
    tmp) + 1.7036671670252e-8 * tmp_0) - 4.53918294904343e-7 * tmp_1) +
    7.91595568148143e-6 * tmp_2) - 9.46991801150381e-5 * tmp_3) +
    0.000795158956924619 * tmp_4) - 0.00475883386986616 * tmp_5) +
                        0.0207391801532158 * tmp_6) - 0.0673081776269616 * tmp_7)
                      + 0.155366359479885 * tmp_8) - 0.201490925155371 * tmp_9)
                    - 0.0768516231318135 * tmp_a) + 2.18034933328387 * tmp_b) +
                  0.0584293012534094 * tmp_c) - 0.00654372848246011 *
                 aaaqi_B.Saturation) + 20.0002376678902;

  /* Saturate: '<S20>/Saturation1' */
  u0 = aaaqi_B.Fcn;
  tmp = aaaqi_P.Saturation1_LowerSat;
  tmp_0 = aaaqi_P.Saturation1_UpperSat;
  if (u0 > tmp_0) {
    aaaqi_B.Saturation1 = tmp_0;
  } else if (u0 < tmp) {
    aaaqi_B.Saturation1 = tmp;
  } else {
    aaaqi_B.Saturation1 = u0;
  }

  /* End of Saturate: '<S20>/Saturation1' */

  /* Logic: '<Root>/Logical Operator11' */
  aaaqi_B.LogicalOperator11 = !(aaaqi_B.Memory != 0.0);

  /* Outputs for Enabled SubSystem: '<Root>/Subsystem4' */
  aaaqi_Subsystem4(aaaqi_B.LogicalOperator11, aaaqi_B.DataTypeConversion26,
                   &aaaqi_B.Subsystem4, &aaaqi_DW.Subsystem4,
                   (P_Subsystem4_aaaqi_T *)&aaaqi_P.Subsystem4);

  /* End of Outputs for SubSystem: '<Root>/Subsystem4' */

  /* Sum: '<S20>/Add' */
  aaaqi_B.Add = aaaqi_B.Saturation1 + aaaqi_B.Subsystem4.Add;

  /* DataTypeConversion: '<Root>/Data Type Conversion34' */
  aaaqi_B.DataTypeConversion34 = aaaqi_B.Add;

  /* Memory: '<Root>/Memory1' */
  aaaqi_B.Memory1 = aaaqi_DW.Memory1_PreviousInput;

  /* Chart: '<S18>/Chart1' */
  aaaqi_Chart1(aaaqi_B.Memory1, &aaaqi_B.sf_Chart1, &aaaqi_DW.sf_Chart1);

  /* Saturate: '<S18>/Saturation' */
  u0 = aaaqi_B.sf_Chart1.t;
  tmp = aaaqi_P.Saturation_LowerSat_e;
  tmp_0 = aaaqi_P.Saturation_UpperSat_p;
  if (u0 > tmp_0) {
    aaaqi_B.Saturation_c = tmp_0;
  } else if (u0 < tmp) {
    aaaqi_B.Saturation_c = tmp;
  } else {
    aaaqi_B.Saturation_c = u0;
  }

  /* End of Saturate: '<S18>/Saturation' */

  /* Fcn: '<S18>/Fcn' */
  tmp = aaaqi_B.Saturation_c;
  u0 = rt_powd_snf(tmp, 16.0);
  tmp_0 = aaaqi_B.Saturation_c;
  tmp = rt_powd_snf(tmp_0, 15.0);
  tmp_1 = aaaqi_B.Saturation_c;
  tmp_0 = rt_powd_snf(tmp_1, 14.0);
  tmp_2 = aaaqi_B.Saturation_c;
  tmp_1 = rt_powd_snf(tmp_2, 13.0);
  tmp_3 = aaaqi_B.Saturation_c;
  tmp_2 = rt_powd_snf(tmp_3, 12.0);
  tmp_4 = aaaqi_B.Saturation_c;
  tmp_3 = rt_powd_snf(tmp_4, 11.0);
  tmp_5 = aaaqi_B.Saturation_c;
  tmp_4 = rt_powd_snf(tmp_5, 10.0);
  tmp_6 = aaaqi_B.Saturation_c;
  tmp_5 = rt_powd_snf(tmp_6, 9.0);
  tmp_7 = aaaqi_B.Saturation_c;
  tmp_6 = rt_powd_snf(tmp_7, 8.0);
  tmp_8 = aaaqi_B.Saturation_c;
  tmp_7 = rt_powd_snf(tmp_8, 7.0);
  tmp_9 = aaaqi_B.Saturation_c;
  tmp_8 = rt_powd_snf(tmp_9, 6.0);
  tmp_a = aaaqi_B.Saturation_c;
  tmp_9 = rt_powd_snf(tmp_a, 5.0);
  tmp_b = aaaqi_B.Saturation_c;
  tmp_a = rt_powd_snf(tmp_b, 4.0);
  tmp_c = aaaqi_B.Saturation_c;
  tmp_b = rt_powd_snf(tmp_c, 3.0);
  tmp_c = aaaqi_B.Saturation_c;
  tmp_c = rt_powd_snf(tmp_c, 2.0);
  aaaqi_B.Fcn_o = (((((((((((((((3.76012963313985e-12 * u0 -
    3.44037229998304e-10 * tmp) + 1.39996774652558e-8 * tmp_0) -
    3.34309394387153e-7 * tmp_1) + 5.2186051950651e-6 * tmp_2) -
    5.63398801585665e-5 * tmp_3) + 0.000435175092700704 * tmp_4) -
    0.00244274561068785 * tmp_5) + 0.00982136561852038 * tmp_6) -
    0.0269377658736148 * tmp_7) + 0.0514170009108526 * tmp_8) -
                       0.103245210636221 * tmp_9) + 0.431283025667506 * tmp_a) -
                     2.79148222601809 * tmp_b) + 0.0172306812740196 * tmp_c) -
                   0.00241932536131526 * aaaqi_B.Saturation_c) +
    600.000082443648;

  /* Saturate: '<S18>/Saturation1' */
  u0 = aaaqi_B.Fcn_o;
  tmp = aaaqi_P.Saturation1_LowerSat_m;
  tmp_0 = aaaqi_P.Saturation1_UpperSat_l;
  if (u0 > tmp_0) {
    aaaqi_B.Saturation1_a = tmp_0;
  } else if (u0 < tmp) {
    aaaqi_B.Saturation1_a = tmp;
  } else {
    aaaqi_B.Saturation1_a = u0;
  }

  /* End of Saturate: '<S18>/Saturation1' */

  /* Logic: '<Root>/Logical Operator12' */
  aaaqi_B.LogicalOperator12 = !(aaaqi_B.Memory1 != 0.0);

  /* Outputs for Enabled SubSystem: '<Root>/Subsystem5' */
  aaaqi_Subsystem4(aaaqi_B.LogicalOperator12, aaaqi_B.DataTypeConversion26,
                   &aaaqi_B.Subsystem5, &aaaqi_DW.Subsystem5,
                   (P_Subsystem4_aaaqi_T *)&aaaqi_P.Subsystem5);

  /* End of Outputs for SubSystem: '<Root>/Subsystem5' */

  /* Sum: '<S18>/Add' */
  aaaqi_B.Add_i = aaaqi_B.Saturation1_a + aaaqi_B.Subsystem5.Add;

  /* DataTypeConversion: '<Root>/Data Type Conversion35' */
  aaaqi_B.DataTypeConversion35 = aaaqi_B.Add_i;

  /* DataTypeConversion: '<Root>/Data Type Conversion14' incorporates:
   *  Constant: '<Root>/zidongkaigai'
   */
  aaaqi_B.DataTypeConversion14 = aaaqi_P.zidongkaigai_Value;

  /* DataTypeConversion: '<Root>/Data Type Conversion15' incorporates:
   *  Constant: '<Root>/zidongguangai'
   */
  aaaqi_B.DataTypeConversion15 = aaaqi_P.zidongguangai_Value;

  /* Logic: '<S14>/Logical Operator3' */
  aaaqi_B.LogicalOperator3_k = !(aaaqi_B.DataTypeConversion4 != 0.0);

  /* Logic: '<S14>/Logical Operator2' */
  aaaqi_B.LogicalOperator2_a = !(aaaqi_B.DataTypeConversion3 != 0.0);

  /* Logic: '<S14>/Logical Operator' */
  aaaqi_B.LogicalOperator_j = (aaaqi_B.LogicalOperator3_k &&
    aaaqi_B.LogicalOperator2_a);

  /* DataTypeConversion: '<S14>/Data Type Conversion5' */
  aaaqi_B.DataTypeConversion5 = aaaqi_B.LogicalOperator_j;

  /* Outputs for Enabled SubSystem: '<S14>/zidong' incorporates:
   *  EnablePort: '<S26>/Enable'
   */
  if (aaaqi_B.DataTypeConversion5 > 0.0) {
    if (!aaaqi_DW.zidong_MODE) {
      aaaqi_DW.zidong_MODE = true;
    }
  } else {
    if (aaaqi_DW.zidong_MODE) {
      aaaqi_DW.zidong_MODE = false;
    }
  }

  if (aaaqi_DW.zidong_MODE) {
    /* Chart: '<S26>/Chart' */
    /* Gateway: Subsystem2/zidong/Chart */
    aaaqi_DW.sfEvent_j = aaaqi_CALL_EVENT_h;
    if (aaaqi_DW.temporalCounter_i1_c < 4095U) {
      aaaqi_DW.temporalCounter_i1_c++;
    }

    /* During: Subsystem2/zidong/Chart */
    if (aaaqi_DW.is_active_c1_aaaqi == 0U) {
      /* Entry: Subsystem2/zidong/Chart */
      aaaqi_DW.is_active_c1_aaaqi = 1U;

      /* Entry Internal: Subsystem2/zidong/Chart */
      /* Transition: '<S37>:42' */
      aaaqi_DW.is_c1_aaaqi = aaaqi_IN_start_i;
      aaaqi_enter_atomic_start_k();
    } else {
      switch (aaaqi_DW.is_c1_aaaqi) {
       case aaaqi_IN_off111:
        /* During 'off111': '<S37>:1174' */
        if ((aaaqi_B.DataTypeConversion6 == 0.0) &&
            (aaaqi_B.DataTypeConversion13 == 0.0)) {
          /* Transition: '<S37>:1193' */
          aaaqi_DW.is_c1_aaaqi = aaaqi_IN_start_i;
          aaaqi_enter_atomic_start_k();
        }
        break;

       case aaaqi_IN_start_i:
        /* During 'start': '<S37>:27' */
        if (aaaqi_B.DataTypeConversion6 == 1.0) {
          /* Transition: '<S37>:1159' */
          aaaqi_DW.is_c1_aaaqi = aaaqi_IN_zidong;

          /* Entry Internal 'zidong': '<S37>:1170' */
          /* Transition: '<S37>:1190' */
          aaaqi_DW.is_zidong = aaaqi_IN_SCzhushui;

          /* Entry Internal 'SCzhushui': '<S37>:28' */
          /* Transition: '<S37>:29' */
          aaaqi_DW.is_SCzhushui = aaaqi_IN_off4_c;

          /* Entry 'off4': '<S37>:37' */
          aaaqi_B.diancifa16_1_l = 0.0;
          aaaqi_B.diancifa3_m = 0.0;
        }
        break;

       default:
        aaaqi_zidong();
        break;
      }
    }

    /* End of Chart: '<S26>/Chart' */

    /* Switch: '<S38>/Switch1' incorporates:
     *  Constant: '<S38>/Constant2'
     *  Constant: '<S38>/Constant3'
     */
    if (aaaqi_B.DataTypeConversion27[2] >= aaaqi_P.Switch1_Threshold_od) {
      aaaqi_B.Switch1_a = aaaqi_P.Constant2_Value_p;
    } else {
      aaaqi_B.Switch1_a = aaaqi_P.Constant3_Value_e0;
    }

    /* End of Switch: '<S38>/Switch1' */

    /* Switch: '<S38>/Switch2' incorporates:
     *  Constant: '<S38>/Constant4'
     *  Constant: '<S38>/Constant5'
     */
    if (aaaqi_B.DataTypeConversion27[2] >= aaaqi_P.Switch2_Threshold_j) {
      aaaqi_B.Switch2_h = aaaqi_P.Constant4_Value_f;
    } else {
      aaaqi_B.Switch2_h = aaaqi_P.Constant5_Value_e;
    }

    /* End of Switch: '<S38>/Switch2' */

    /* Switch: '<S38>/Switch3' incorporates:
     *  Constant: '<S38>/Constant6'
     *  Constant: '<S38>/Constant7'
     */
    if (aaaqi_B.DataTypeConversion27[2] >= aaaqi_P.Switch3_Threshold_o) {
      aaaqi_B.Switch3_b = aaaqi_P.Constant6_Value_i;
    } else {
      aaaqi_B.Switch3_b = aaaqi_P.Constant7_Value_c;
    }

    /* End of Switch: '<S38>/Switch3' */

    /* Switch: '<S38>/Switch4' incorporates:
     *  Constant: '<S38>/Constant8'
     *  Constant: '<S38>/Constant9'
     */
    if (aaaqi_B.DataTypeConversion27[2] >= aaaqi_P.Switch4_Threshold_h) {
      aaaqi_B.Switch4_d = aaaqi_P.Constant8_Value_p;
    } else {
      aaaqi_B.Switch4_d = aaaqi_P.Constant9_Value_c;
    }

    /* End of Switch: '<S38>/Switch4' */

    /* Switch: '<S38>/Switch5' incorporates:
     *  Constant: '<S38>/Constant10'
     *  Constant: '<S38>/Constant11'
     */
    if (aaaqi_B.DataTypeConversion27[2] >= aaaqi_P.Switch5_Threshold_e) {
      aaaqi_B.Switch5_g = aaaqi_P.Constant10_Value_o;
    } else {
      aaaqi_B.Switch5_g = aaaqi_P.Constant11_Value_gt;
    }

    /* End of Switch: '<S38>/Switch5' */

    /* Switch: '<S38>/Switch6' incorporates:
     *  Constant: '<S38>/Constant12'
     *  Constant: '<S38>/Constant13'
     */
    if (aaaqi_B.DataTypeConversion27[2] >= aaaqi_P.Switch6_Threshold_a) {
      aaaqi_B.Switch6_a = aaaqi_P.Constant12_Value_o;
    } else {
      aaaqi_B.Switch6_a = aaaqi_P.Constant13_Value_e;
    }

    /* End of Switch: '<S38>/Switch6' */

    /* Switch: '<S38>/Switch7' incorporates:
     *  Constant: '<S38>/Constant14'
     *  Constant: '<S38>/Constant15'
     */
    if (aaaqi_B.DataTypeConversion27[2] >= aaaqi_P.Switch7_Threshold_m) {
      aaaqi_B.Switch7_b = aaaqi_P.Constant14_Value_o;
    } else {
      aaaqi_B.Switch7_b = aaaqi_P.Constant15_Value_n;
    }

    /* End of Switch: '<S38>/Switch7' */

    /* Switch: '<S38>/Switch8' incorporates:
     *  Constant: '<S38>/Constant16'
     *  Constant: '<S38>/Constant17'
     */
    if (aaaqi_B.DataTypeConversion27[2] >= aaaqi_P.Switch8_Threshold_f) {
      aaaqi_B.Switch8_b = aaaqi_P.Constant16_Value_b;
    } else {
      aaaqi_B.Switch8_b = aaaqi_P.Constant17_Value_k;
    }

    /* End of Switch: '<S38>/Switch8' */

    /* Switch: '<S38>/Switch9' incorporates:
     *  Constant: '<S38>/Constant18'
     *  Constant: '<S38>/Constant19'
     */
    if (aaaqi_B.DataTypeConversion27[2] >= aaaqi_P.Switch9_Threshold_o) {
      aaaqi_B.Switch9_a = aaaqi_P.Constant18_Value_dz;
    } else {
      aaaqi_B.Switch9_a = aaaqi_P.Constant19_Value_i;
    }

    /* End of Switch: '<S38>/Switch9' */

    /* Sum: '<S38>/Sum of Elements' incorporates:
     *  Constant: '<S38>/Constant1'
     */
    tmpForInput[0] = aaaqi_P.Constant1_Value_e;
    tmpForInput[1] = aaaqi_B.Switch1_a;
    tmpForInput[2] = aaaqi_B.Switch2_h;
    tmpForInput[3] = aaaqi_B.Switch3_b;
    tmpForInput[4] = aaaqi_B.Switch4_d;
    tmpForInput[5] = aaaqi_B.Switch5_g;
    tmpForInput[6] = aaaqi_B.Switch6_a;
    tmpForInput[7] = aaaqi_B.Switch7_b;
    tmpForInput[8] = aaaqi_B.Switch8_b;
    tmpForInput[9] = aaaqi_B.Switch9_a;
    u0 = tmpForInput[0];
    for (i = 0; i < 9; i++) {
      tmp_d = i + 1;
      u0 += tmpForInput[tmp_d];
    }

    aaaqi_B.SumofElements = u0;

    /* End of Sum: '<S38>/Sum of Elements' */

    /* MultiPortSwitch: '<S38>/Multiport Switch' incorporates:
     *  Constant: '<S38>/Constant20'
     *  Constant: '<S38>/Constant21'
     *  Constant: '<S38>/Constant22'
     *  Constant: '<S38>/Constant23'
     *  Constant: '<S38>/Constant24'
     *  Constant: '<S38>/Constant25'
     *  Constant: '<S38>/Constant26'
     *  Constant: '<S38>/Constant27'
     *  Constant: '<S38>/Constant28'
     *  Constant: '<S38>/Constant29'
     */
    switch ((int32_T)aaaqi_B.SumofElements) {
     case 1:
      aaaqi_B.MultiportSwitch_b = aaaqi_P.Constant20_Value_jg;
      break;

     case 2:
      aaaqi_B.MultiportSwitch_b = aaaqi_P.Constant21_Value_h;
      break;

     case 3:
      aaaqi_B.MultiportSwitch_b = aaaqi_P.Constant22_Value_m;
      break;

     case 4:
      aaaqi_B.MultiportSwitch_b = aaaqi_P.Constant23_Value_j;
      break;

     case 5:
      aaaqi_B.MultiportSwitch_b = aaaqi_P.Constant24_Value_d;
      break;

     case 6:
      aaaqi_B.MultiportSwitch_b = aaaqi_P.Constant25_Value_h;
      break;

     case 7:
      aaaqi_B.MultiportSwitch_b = aaaqi_P.Constant26_Value_f;
      break;

     case 8:
      aaaqi_B.MultiportSwitch_b = aaaqi_P.Constant27_Value_f;
      break;

     case 9:
      aaaqi_B.MultiportSwitch_b = aaaqi_P.Constant28_Value_c;
      break;

     default:
      aaaqi_B.MultiportSwitch_b = aaaqi_P.Constant29_Value_a;
      break;
    }

    /* End of MultiPortSwitch: '<S38>/Multiport Switch' */

    /* Product: '<S38>/Product' */
    aaaqi_B.Product_i = aaaqi_B.MultiportSwitch_b * aaaqi_B.bililiuliangfa18_2_d;

    /* Gain: '<S38>/Gain' */
    aaaqi_B.Gain_f = aaaqi_P.Gain_Gain_j * aaaqi_B.Product_i;

    /* Product: '<S38>/Product1' */
    aaaqi_B.Product1_i = aaaqi_B.MultiportSwitch_b *
      aaaqi_B.bililiuliangfa18_4_c;

    /* Gain: '<S38>/Gain1' */
    aaaqi_B.Gain1 = aaaqi_P.Gain1_Gain_o * aaaqi_B.Product1_i;

    /* Sum: '<S39>/Sum1' */
    aaaqi_B.Sum1 = aaaqi_B.DataTypeConversion35 - aaaqi_B.DataTypeConversion26;

    /* Gain: '<S39>/Gain1' */
    aaaqi_B.Gain1_o = aaaqi_P.Gain1_Gain_ol * aaaqi_B.Sum1;

    /* Sum: '<S39>/Sum' */
    aaaqi_B.Sum = aaaqi_B.DataTypeConversion34 - aaaqi_B.DataTypeConversion26;

    /* Gain: '<S39>/Gain' */
    aaaqi_B.Gain_m = aaaqi_P.Gain_Gain_n * aaaqi_B.Sum;

    /* Product: '<S39>/Product' incorporates:
     *  Constant: '<S39>/Constant'
     */
    aaaqi_B.Product_c = aaaqi_B.guangaikaishi * aaaqi_P.Constant_Value_n;

    /* Sum: '<S39>/Add1' */
    aaaqi_B.Add1_f = aaaqi_B.kaigaikaishi + aaaqi_B.Product_c;

    /* MultiPortSwitch: '<S39>/Multiport Switch' incorporates:
     *  Constant: '<S39>/Constant1'
     */
    switch ((int32_T)aaaqi_B.Add1_f) {
     case 1:
      aaaqi_B.MultiportSwitch_j = aaaqi_B.Gain_m;
      break;

     case 2:
      aaaqi_B.MultiportSwitch_j = aaaqi_B.Gain1_o;
      break;

     default:
      aaaqi_B.MultiportSwitch_j = aaaqi_P.Constant1_Value_d;
      break;
    }

    /* End of MultiPortSwitch: '<S39>/Multiport Switch' */

    /* Switch: '<S41>/Switch1' incorporates:
     *  Constant: '<S41>/Constant2'
     *  Constant: '<S41>/Constant3'
     */
    if (aaaqi_B.DataTypeConversion27[4] >= aaaqi_P.Switch1_Threshold_k) {
      aaaqi_B.Switch1_m = aaaqi_P.Constant2_Value_lm;
    } else {
      aaaqi_B.Switch1_m = aaaqi_P.Constant3_Value_h;
    }

    /* End of Switch: '<S41>/Switch1' */

    /* Switch: '<S41>/Switch2' incorporates:
     *  Constant: '<S41>/Constant4'
     *  Constant: '<S41>/Constant5'
     */
    if (aaaqi_B.DataTypeConversion27[4] >= aaaqi_P.Switch2_Threshold_b) {
      aaaqi_B.Switch2_mu = aaaqi_P.Constant4_Value_j;
    } else {
      aaaqi_B.Switch2_mu = aaaqi_P.Constant5_Value_j;
    }

    /* End of Switch: '<S41>/Switch2' */

    /* Switch: '<S41>/Switch3' incorporates:
     *  Constant: '<S41>/Constant6'
     *  Constant: '<S41>/Constant7'
     */
    if (aaaqi_B.DataTypeConversion27[4] >= aaaqi_P.Switch3_Threshold_i) {
      aaaqi_B.Switch3_l = aaaqi_P.Constant6_Value_h;
    } else {
      aaaqi_B.Switch3_l = aaaqi_P.Constant7_Value_i;
    }

    /* End of Switch: '<S41>/Switch3' */

    /* Switch: '<S41>/Switch4' incorporates:
     *  Constant: '<S41>/Constant8'
     *  Constant: '<S41>/Constant9'
     */
    if (aaaqi_B.DataTypeConversion27[4] >= aaaqi_P.Switch4_Threshold_f) {
      aaaqi_B.Switch4_i = aaaqi_P.Constant8_Value_a;
    } else {
      aaaqi_B.Switch4_i = aaaqi_P.Constant9_Value_n;
    }

    /* End of Switch: '<S41>/Switch4' */

    /* Switch: '<S41>/Switch5' incorporates:
     *  Constant: '<S41>/Constant10'
     *  Constant: '<S41>/Constant11'
     */
    if (aaaqi_B.DataTypeConversion27[4] >= aaaqi_P.Switch5_Threshold_n) {
      aaaqi_B.Switch5_k = aaaqi_P.Constant10_Value_c;
    } else {
      aaaqi_B.Switch5_k = aaaqi_P.Constant11_Value_g2;
    }

    /* End of Switch: '<S41>/Switch5' */

    /* Switch: '<S41>/Switch6' incorporates:
     *  Constant: '<S41>/Constant12'
     *  Constant: '<S41>/Constant13'
     */
    if (aaaqi_B.DataTypeConversion27[4] >= aaaqi_P.Switch6_Threshold_g) {
      aaaqi_B.Switch6_b = aaaqi_P.Constant12_Value_o5;
    } else {
      aaaqi_B.Switch6_b = aaaqi_P.Constant13_Value_j;
    }

    /* End of Switch: '<S41>/Switch6' */

    /* Switch: '<S41>/Switch7' incorporates:
     *  Constant: '<S41>/Constant14'
     *  Constant: '<S41>/Constant15'
     */
    if (aaaqi_B.DataTypeConversion27[4] >= aaaqi_P.Switch7_Threshold_b) {
      aaaqi_B.Switch7_h = aaaqi_P.Constant14_Value_l;
    } else {
      aaaqi_B.Switch7_h = aaaqi_P.Constant15_Value_n5;
    }

    /* End of Switch: '<S41>/Switch7' */

    /* Switch: '<S41>/Switch8' incorporates:
     *  Constant: '<S41>/Constant16'
     *  Constant: '<S41>/Constant17'
     */
    if (aaaqi_B.DataTypeConversion27[4] >= aaaqi_P.Switch8_Threshold_g) {
      aaaqi_B.Switch8_p = aaaqi_P.Constant16_Value_f;
    } else {
      aaaqi_B.Switch8_p = aaaqi_P.Constant17_Value_n;
    }

    /* End of Switch: '<S41>/Switch8' */

    /* Switch: '<S41>/Switch9' incorporates:
     *  Constant: '<S41>/Constant18'
     *  Constant: '<S41>/Constant19'
     */
    if (aaaqi_B.DataTypeConversion27[4] >= aaaqi_P.Switch9_Threshold_a) {
      aaaqi_B.Switch9_h = aaaqi_P.Constant18_Value_g;
    } else {
      aaaqi_B.Switch9_h = aaaqi_P.Constant19_Value_o;
    }

    /* End of Switch: '<S41>/Switch9' */

    /* Sum: '<S41>/Sum of Elements' incorporates:
     *  Constant: '<S41>/Constant1'
     */
    tmpForInput[0] = aaaqi_P.Constant1_Value_k;
    tmpForInput[1] = aaaqi_B.Switch1_m;
    tmpForInput[2] = aaaqi_B.Switch2_mu;
    tmpForInput[3] = aaaqi_B.Switch3_l;
    tmpForInput[4] = aaaqi_B.Switch4_i;
    tmpForInput[5] = aaaqi_B.Switch5_k;
    tmpForInput[6] = aaaqi_B.Switch6_b;
    tmpForInput[7] = aaaqi_B.Switch7_h;
    tmpForInput[8] = aaaqi_B.Switch8_p;
    tmpForInput[9] = aaaqi_B.Switch9_h;
    u0 = tmpForInput[0];
    for (i = 0; i < 9; i++) {
      tmp_d = i + 1;
      u0 += tmpForInput[tmp_d];
    }

    aaaqi_B.SumofElements_f = u0;

    /* End of Sum: '<S41>/Sum of Elements' */

    /* MultiPortSwitch: '<S41>/Multiport Switch' incorporates:
     *  Constant: '<S41>/Constant20'
     *  Constant: '<S41>/Constant21'
     *  Constant: '<S41>/Constant22'
     *  Constant: '<S41>/Constant23'
     *  Constant: '<S41>/Constant24'
     *  Constant: '<S41>/Constant25'
     *  Constant: '<S41>/Constant26'
     *  Constant: '<S41>/Constant27'
     *  Constant: '<S41>/Constant28'
     *  Constant: '<S41>/Constant29'
     */
    switch ((int32_T)aaaqi_B.SumofElements_f) {
     case 1:
      aaaqi_B.MultiportSwitch_d = aaaqi_P.Constant20_Value_o;
      break;

     case 2:
      aaaqi_B.MultiportSwitch_d = aaaqi_P.Constant21_Value_ly;
      break;

     case 3:
      aaaqi_B.MultiportSwitch_d = aaaqi_P.Constant22_Value_l;
      break;

     case 4:
      aaaqi_B.MultiportSwitch_d = aaaqi_P.Constant23_Value_n;
      break;

     case 5:
      aaaqi_B.MultiportSwitch_d = aaaqi_P.Constant24_Value_j;
      break;

     case 6:
      aaaqi_B.MultiportSwitch_d = aaaqi_P.Constant25_Value_c;
      break;

     case 7:
      aaaqi_B.MultiportSwitch_d = aaaqi_P.Constant26_Value_m;
      break;

     case 8:
      aaaqi_B.MultiportSwitch_d = aaaqi_P.Constant27_Value_i;
      break;

     case 9:
      aaaqi_B.MultiportSwitch_d = aaaqi_P.Constant28_Value_o;
      break;

     default:
      aaaqi_B.MultiportSwitch_d = aaaqi_P.Constant29_Value_e;
      break;
    }

    /* End of MultiPortSwitch: '<S41>/Multiport Switch' */

    /* Product: '<S41>/Product' */
    aaaqi_B.Product_j = aaaqi_B.MultiportSwitch_d * aaaqi_B.bililiuliangfa18_1_a;

    /* Product: '<S41>/Product1' */
    aaaqi_B.Product1_b = aaaqi_B.MultiportSwitch_d *
      aaaqi_B.bililiuliangfa18_3_p;

    /* Product: '<S40>/Product' incorporates:
     *  Constant: '<S40>/Constant'
     */
    aaaqi_B.Product_m = 0.0 * aaaqi_P.Constant_Value_na;

    /* Sum: '<S40>/Add1' */
    aaaqi_B.Add1_m = aaaqi_B.Product_m;

    /* FromWorkspace: '<S42>/FromWs' */
    {
      real_T *pDataValues = (real_T *) aaaqi_DW.FromWs_PWORK.DataPtr;
      real_T *pTimeValues = (real_T *) aaaqi_DW.FromWs_PWORK.TimePtr;
      int_T currTimeIndex = aaaqi_DW.FromWs_IWORK.PrevIndex;
      real_T t = aaaqi_M->Timing.t[0];

      /* Get index */
      if (t <= pTimeValues[0]) {
        currTimeIndex = 0;
      } else if (t >= pTimeValues[5]) {
        currTimeIndex = 4;
      } else {
        if (t < pTimeValues[currTimeIndex]) {
          while (t < pTimeValues[currTimeIndex]) {
            currTimeIndex--;
          }
        } else {
          while (t >= pTimeValues[currTimeIndex + 1]) {
            currTimeIndex++;
          }
        }
      }

      aaaqi_DW.FromWs_IWORK.PrevIndex = currTimeIndex;

      /* Post output */
      {
        real_T t1 = pTimeValues[currTimeIndex];
        real_T t2 = pTimeValues[currTimeIndex + 1];
        if (t1 == t2) {
          if (t < t1) {
            aaaqi_B.FromWs = pDataValues[currTimeIndex];
          } else {
            aaaqi_B.FromWs = pDataValues[currTimeIndex + 1];
          }
        } else {
          real_T f1 = (t2 - t) / (t2 - t1);
          real_T f2 = 1.0 - f1;
          real_T d1;
          real_T d2;
          int_T TimeIndex= currTimeIndex;
          d1 = pDataValues[TimeIndex];
          d2 = pDataValues[TimeIndex + 1];
          aaaqi_B.FromWs = (real_T) rtInterpolate(d1, d2, f1, f2);
          pDataValues += 6;
        }
      }
    }

    /* FromWorkspace: '<S43>/FromWs' */
    {
      real_T *pDataValues = (real_T *) aaaqi_DW.FromWs_PWORK_e.DataPtr;
      real_T *pTimeValues = (real_T *) aaaqi_DW.FromWs_PWORK_e.TimePtr;
      int_T currTimeIndex = aaaqi_DW.FromWs_IWORK_o.PrevIndex;
      real_T t = aaaqi_M->Timing.t[0];

      /* Get index */
      if (t <= pTimeValues[0]) {
        currTimeIndex = 0;
      } else if (t >= pTimeValues[5]) {
        currTimeIndex = 4;
      } else {
        if (t < pTimeValues[currTimeIndex]) {
          while (t < pTimeValues[currTimeIndex]) {
            currTimeIndex--;
          }
        } else {
          while (t >= pTimeValues[currTimeIndex + 1]) {
            currTimeIndex++;
          }
        }
      }

      aaaqi_DW.FromWs_IWORK_o.PrevIndex = currTimeIndex;

      /* Post output */
      {
        real_T t1 = pTimeValues[currTimeIndex];
        real_T t2 = pTimeValues[currTimeIndex + 1];
        if (t1 == t2) {
          if (t < t1) {
            aaaqi_B.FromWs_n = pDataValues[currTimeIndex];
          } else {
            aaaqi_B.FromWs_n = pDataValues[currTimeIndex + 1];
          }
        } else {
          real_T f1 = (t2 - t) / (t2 - t1);
          real_T f2 = 1.0 - f1;
          real_T d1;
          real_T d2;
          int_T TimeIndex= currTimeIndex;
          d1 = pDataValues[TimeIndex];
          d2 = pDataValues[TimeIndex + 1];
          aaaqi_B.FromWs_n = (real_T) rtInterpolate(d1, d2, f1, f2);
          pDataValues += 6;
        }
      }
    }

    /* FromWorkspace: '<S44>/FromWs' */
    {
      real_T *pDataValues = (real_T *) aaaqi_DW.FromWs_PWORK_p.DataPtr;
      real_T *pTimeValues = (real_T *) aaaqi_DW.FromWs_PWORK_p.TimePtr;
      int_T currTimeIndex = aaaqi_DW.FromWs_IWORK_f.PrevIndex;
      real_T t = aaaqi_M->Timing.t[0];

      /* Get index */
      if (t <= pTimeValues[0]) {
        currTimeIndex = 0;
      } else if (t >= pTimeValues[5]) {
        currTimeIndex = 4;
      } else {
        if (t < pTimeValues[currTimeIndex]) {
          while (t < pTimeValues[currTimeIndex]) {
            currTimeIndex--;
          }
        } else {
          while (t >= pTimeValues[currTimeIndex + 1]) {
            currTimeIndex++;
          }
        }
      }

      aaaqi_DW.FromWs_IWORK_f.PrevIndex = currTimeIndex;

      /* Post output */
      {
        real_T t1 = pTimeValues[currTimeIndex];
        real_T t2 = pTimeValues[currTimeIndex + 1];
        if (t1 == t2) {
          if (t < t1) {
            aaaqi_B.FromWs_f = pDataValues[currTimeIndex];
          } else {
            aaaqi_B.FromWs_f = pDataValues[currTimeIndex + 1];
          }
        } else {
          real_T f1 = (t2 - t) / (t2 - t1);
          real_T f2 = 1.0 - f1;
          real_T d1;
          real_T d2;
          int_T TimeIndex= currTimeIndex;
          d1 = pDataValues[TimeIndex];
          d2 = pDataValues[TimeIndex + 1];
          aaaqi_B.FromWs_f = (real_T) rtInterpolate(d1, d2, f1, f2);
          pDataValues += 6;
        }
      }
    }

    /* FromWorkspace: '<S45>/FromWs' */
    {
      real_T *pDataValues = (real_T *) aaaqi_DW.FromWs_PWORK_j.DataPtr;
      real_T *pTimeValues = (real_T *) aaaqi_DW.FromWs_PWORK_j.TimePtr;
      int_T currTimeIndex = aaaqi_DW.FromWs_IWORK_om.PrevIndex;
      real_T t = aaaqi_M->Timing.t[0];

      /* Get index */
      if (t <= pTimeValues[0]) {
        currTimeIndex = 0;
      } else if (t >= pTimeValues[5]) {
        currTimeIndex = 4;
      } else {
        if (t < pTimeValues[currTimeIndex]) {
          while (t < pTimeValues[currTimeIndex]) {
            currTimeIndex--;
          }
        } else {
          while (t >= pTimeValues[currTimeIndex + 1]) {
            currTimeIndex++;
          }
        }
      }

      aaaqi_DW.FromWs_IWORK_om.PrevIndex = currTimeIndex;

      /* Post output */
      {
        real_T t1 = pTimeValues[currTimeIndex];
        real_T t2 = pTimeValues[currTimeIndex + 1];
        if (t1 == t2) {
          if (t < t1) {
            aaaqi_B.FromWs_o = pDataValues[currTimeIndex];
          } else {
            aaaqi_B.FromWs_o = pDataValues[currTimeIndex + 1];
          }
        } else {
          real_T f1 = (t2 - t) / (t2 - t1);
          real_T f2 = 1.0 - f1;
          real_T d1;
          real_T d2;
          int_T TimeIndex= currTimeIndex;
          d1 = pDataValues[TimeIndex];
          d2 = pDataValues[TimeIndex + 1];
          aaaqi_B.FromWs_o = (real_T) rtInterpolate(d1, d2, f1, f2);
          pDataValues += 6;
        }
      }
    }

    /* MultiPortSwitch: '<S40>/Multiport Switch' incorporates:
     *  Constant: '<S40>/Constant1'
     */
    switch ((int32_T)aaaqi_B.Add1_m) {
     case 1:
      /* Sum: '<S40>/Sum' */
      aaaqi_B.Sum_m = aaaqi_B.FromWs - aaaqi_B.DataTypeConversion25[2];

      /* Gain: '<S40>/Gain' */
      aaaqi_B.Gain_i = aaaqi_P.Gain_Gain_l0 * aaaqi_B.Sum_m;
      aaaqi_B.MultiportSwitch_m = aaaqi_B.Gain_i;
      break;

     case 2:
      /* Sum: '<S40>/Sum1' */
      aaaqi_B.Sum1_l = aaaqi_B.FromWs_n - aaaqi_B.DataTypeConversion25[2];

      /* Gain: '<S40>/Gain1' */
      aaaqi_B.Gain1_l = aaaqi_P.Gain1_Gain_a * aaaqi_B.Sum1_l;
      aaaqi_B.MultiportSwitch_m = aaaqi_B.Gain1_l;
      break;

     default:
      aaaqi_B.MultiportSwitch_m = aaaqi_P.Constant1_Value_c;
      break;
    }

    /* End of MultiPortSwitch: '<S40>/Multiport Switch' */

    /* MultiPortSwitch: '<S40>/Multiport Switch1' incorporates:
     *  Constant: '<S40>/Constant2'
     */
    switch ((int32_T)aaaqi_B.Add1_m) {
     case 1:
      /* Sum: '<S40>/Sum2' */
      aaaqi_B.Sum2 = aaaqi_B.FromWs_f - aaaqi_B.DataTypeConversion25[3];

      /* Gain: '<S40>/Gain2' */
      aaaqi_B.Gain2 = aaaqi_P.Gain2_Gain_c * aaaqi_B.Sum2;
      aaaqi_B.MultiportSwitch1_d = aaaqi_B.Gain2;
      break;

     case 2:
      /* Sum: '<S40>/Sum3' */
      aaaqi_B.Sum3 = aaaqi_B.FromWs_o - aaaqi_B.DataTypeConversion25[3];

      /* Gain: '<S40>/Gain3' */
      aaaqi_B.Gain3 = aaaqi_P.Gain3_Gain_n * aaaqi_B.Sum3;
      aaaqi_B.MultiportSwitch1_d = aaaqi_B.Gain3;
      break;

     default:
      aaaqi_B.MultiportSwitch1_d = aaaqi_P.Constant2_Value_o;
      break;
    }

    /* End of MultiPortSwitch: '<S40>/Multiport Switch1' */
    srUpdateBC(aaaqi_DW.zidong_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<S14>/zidong' */

  /* Memory: '<S22>/Memory' */
  aaaqi_B.Memory_h = aaaqi_DW.Memory_PreviousInput_d;

  /* Switch: '<S22>/Switch' incorporates:
   *  Constant: '<S22>/Constant'
   */
  if (aaaqi_B.Memory_h > aaaqi_P.Switch_Threshold) {
    aaaqi_B.Switch = aaaqi_P.Constant_Value;
  } else {
    /* DataTypeConversion: '<Root>/Data Type Conversion16' incorporates:
     *  Constant: '<Root>/kaigai'
     */
    aaaqi_B.DataTypeConversion16 = aaaqi_P.kaigai_Value;
    aaaqi_B.Switch = aaaqi_B.DataTypeConversion16;
  }

  /* End of Switch: '<S22>/Switch' */

  /* Memory: '<S22>/Memory1' */
  aaaqi_B.Memory1_c = aaaqi_DW.Memory1_PreviousInput_d;

  /* Switch: '<S22>/Switch2' incorporates:
   *  Constant: '<S22>/Constant2'
   */
  if (aaaqi_B.Memory1_c > aaaqi_P.Switch2_Threshold_d) {
    aaaqi_B.Switch2 = aaaqi_P.Constant2_Value;
  } else {
    /* DataTypeConversion: '<Root>/Data Type Conversion17' incorporates:
     *  Constant: '<Root>/guangai'
     */
    aaaqi_B.DataTypeConversion17 = aaaqi_P.guangai_Value;
    aaaqi_B.Switch2 = aaaqi_B.DataTypeConversion17;
  }

  /* End of Switch: '<S22>/Switch2' */

  /* DataTypeConversion: '<Root>/Data Type Conversion18' incorporates:
   *  Constant: '<Root>/shiyabuchang'
   */
  aaaqi_B.DataTypeConversion18 = aaaqi_P.shiyabuchang_Value;

  /* Memory: '<S23>/Memory' */
  aaaqi_B.Memory_ht = aaaqi_DW.Memory_PreviousInput_c;

  /* Switch: '<S23>/Switch' incorporates:
   *  Constant: '<S23>/Constant'
   */
  if (aaaqi_B.Memory_ht > aaaqi_P.Switch_Threshold_c) {
    aaaqi_B.Switch_g = aaaqi_P.Constant_Value_p;
  } else {
    /* DataTypeConversion: '<Root>/Data Type Conversion19' incorporates:
     *  Constant: '<Root>/xuansong'
     */
    aaaqi_B.DataTypeConversion19 = aaaqi_P.xuansong_Value;
    aaaqi_B.Switch_g = aaaqi_B.DataTypeConversion19;
  }

  /* End of Switch: '<S23>/Switch' */

  /* Memory: '<S24>/Memory' */
  aaaqi_B.Memory_j = aaaqi_DW.Memory_PreviousInput_m;

  /* Switch: '<S24>/Switch' incorporates:
   *  Constant: '<S24>/Constant'
   */
  if (aaaqi_B.Memory_j > aaaqi_P.Switch_Threshold_j) {
    aaaqi_B.Switch_i = aaaqi_P.Constant_Value_e;
  } else {
    /* DataTypeConversion: '<Root>/Data Type Conversion20' incorporates:
     *  Constant: '<Root>/suoding'
     */
    aaaqi_B.DataTypeConversion20 = aaaqi_P.suoding_Value;
    aaaqi_B.Switch_i = aaaqi_B.DataTypeConversion20;
  }

  /* End of Switch: '<S24>/Switch' */

  /* Memory: '<S24>/Memory1' */
  aaaqi_B.Memory1_d = aaaqi_DW.Memory1_PreviousInput_m;

  /* Switch: '<S24>/Switch2' incorporates:
   *  Constant: '<S24>/Constant2'
   */
  if (aaaqi_B.Memory1_d > aaaqi_P.Switch2_Threshold_l) {
    aaaqi_B.Switch2_m = aaaqi_P.Constant2_Value_l;
  } else {
    /* DataTypeConversion: '<Root>/Data Type Conversion21' incorporates:
     *  Constant: '<Root>/jiesuo'
     */
    aaaqi_B.DataTypeConversion21 = aaaqi_P.jiesuo_Value;
    aaaqi_B.Switch2_m = aaaqi_B.DataTypeConversion21;
  }

  /* End of Switch: '<S24>/Switch2' */

  /* DataTypeConversion: '<Root>/Data Type Conversion22' incorporates:
   *  Constant: '<Root>/xuanjinjianya'
   */
  aaaqi_B.DataTypeConversion22 = aaaqi_P.xuanjinjianya_Value;

  /* Memory: '<S23>/Memory1' */
  aaaqi_B.Memory1_o = aaaqi_DW.Memory1_PreviousInput_k;

  /* Switch: '<S23>/Switch2' incorporates:
   *  Constant: '<S23>/Constant2'
   */
  if (aaaqi_B.Memory1_o > aaaqi_P.Switch2_Threshold_g) {
    aaaqi_B.Switch2_a = aaaqi_P.Constant2_Value_f;
  } else {
    /* DataTypeConversion: '<Root>/Data Type Conversion23' incorporates:
     *  Constant: '<Root>/xuanjin'
     */
    aaaqi_B.DataTypeConversion23 = aaaqi_P.xuanjin_Value;
    aaaqi_B.Switch2_a = aaaqi_B.DataTypeConversion23;
  }

  /* End of Switch: '<S23>/Switch2' */

  /* Constant: '<Root>/带气注水最大压力' */
  aaaqi_B.u_a = aaaqi_P._Value_e;

  /* Logic: '<S14>/Logical Operator1' */
  aaaqi_B.LogicalOperator1_e = ((aaaqi_B.DataTypeConversion4 != 0.0) &&
    aaaqi_B.LogicalOperator2_a);

  /* DataTypeConversion: '<S14>/Data Type Conversion1' */
  aaaqi_B.DataTypeConversion1_e = aaaqi_B.LogicalOperator1_e;

  /* Outputs for Enabled SubSystem: '<S14>/shoudong' incorporates:
   *  EnablePort: '<S25>/Enable'
   */
  if (aaaqi_B.DataTypeConversion1_e > 0.0) {
    if (!aaaqi_DW.shoudong_MODE) {
      aaaqi_DW.shoudong_MODE = true;
    }
  } else {
    if (aaaqi_DW.shoudong_MODE) {
      aaaqi_DW.shoudong_MODE = false;
    }
  }

  if (aaaqi_DW.shoudong_MODE) {
    /* ok to acquire for <S29>/S-Function */
    aaaqi_DW.SFunction_IWORK_k.AcquireOK = 1;

    /* Chart: '<S25>/Chart' */
    /* Gateway: Subsystem2/shoudong/Chart */
    aaaqi_DW.sfEvent_l = aaaqi_CALL_EVENT_h;
    if (aaaqi_DW.temporalCounter_i1_m < 511U) {
      aaaqi_DW.temporalCounter_i1_m++;
    }

    if (aaaqi_DW.temporalCounter_i2 < 1023U) {
      aaaqi_DW.temporalCounter_i2++;
    }

    if (aaaqi_DW.temporalCounter_i3 < 1023U) {
      aaaqi_DW.temporalCounter_i3++;
    }

    if (aaaqi_DW.temporalCounter_i4 < 31U) {
      aaaqi_DW.temporalCounter_i4++;
    }

    if (aaaqi_DW.temporalCounter_i5 < 1023U) {
      aaaqi_DW.temporalCounter_i5++;
    }

    /* During: Subsystem2/shoudong/Chart */
    if (aaaqi_DW.is_active_c4_aaaqi == 0U) {
      /* Entry: Subsystem2/shoudong/Chart */
      aaaqi_DW.is_active_c4_aaaqi = 1U;

      /* Entry Internal: Subsystem2/shoudong/Chart */
      /* Transition: '<S27>:42' */
      aaaqi_DW.is_c4_aaaqi = aaaqi_IN_start;
      aaaqi_enter_atomic_start();
    } else {
      switch (aaaqi_DW.is_c4_aaaqi) {
       case aaaqi_IN_off111:
        /* During 'off111': '<S27>:1174' */
        if ((aaaqi_B.DataTypeConversion6 == 0.0) &&
            (aaaqi_B.DataTypeConversion13 == 0.0)) {
          /* Transition: '<S27>:1196' */
          aaaqi_DW.is_c4_aaaqi = aaaqi_IN_start;
          aaaqi_enter_atomic_start();
        }
        break;

       case aaaqi_IN_shoudong:
        aaaqi_shoudong();
        break;

       default:
        /* During 'start': '<S27>:27' */
        if (aaaqi_B.DataTypeConversion6 == 1.0) {
          /* Transition: '<S27>:1159' */
          aaaqi_DW.is_c4_aaaqi = aaaqi_IN_shoudong;

          /* Entry Internal 'shoudong': '<S27>:1197' */
          aaaqi_DW.is_active_kaiguangai = 1U;

          /* Entry Internal 'kaiguangai': '<S27>:1243' */
          /* Transition: '<S27>:1250' */
          aaaqi_DW.is_kaiguangai_o = aaaqi_IN_start_d;

          /* Entry 'start': '<S27>:1286' */
          aaaqi_B.xuansong_i = 0.0;
          aaaqi_B.xuanjin_l = 0.0;
          aaaqi_B.suoding_k = 0.0;
          aaaqi_B.jiesuo_g = 0.0;
          aaaqi_B.kaigaikaishi_k = 0.0;
          aaaqi_B.guangaikaishi_j = 0.0;
          aaaqi_DW.is_active_SCjiaya = 1U;

          /* Entry Internal 'SCjiaya': '<S27>:1310' */
          /* Transition: '<S27>:1315' */
          aaaqi_DW.is_SCjiaya_c = aaaqi_IN_off1;

          /* Entry 'off1': '<S27>:1330' */
          aaaqi_B.diancifa11_2_b = 0.0;
          aaaqi_DW.is_active_SCzhushui = 1U;

          /* Entry Internal 'SCzhushui': '<S27>:1337' */
          /* Transition: '<S27>:1339' */
          aaaqi_DW.is_SCzhushui_e = aaaqi_IN_off4_c;

          /* Entry 'off4': '<S27>:1347' */
          aaaqi_B.diancifa16_1_c = 0.0;
          aaaqi_DW.is_active_SXQxieya = 1U;

          /* Entry Internal 'SXQxieya': '<S27>:1417' */
          /* Transition: '<S27>:1432' */
          aaaqi_DW.is_SXQxieya_l = aaaqi_IN_off1;

          /* Entry 'off1': '<S27>:1474' */
          aaaqi_DW.is_active_SXQjunya = 1U;

          /* Entry Internal 'SXQjunya': '<S27>:1486' */
          /* Transition: '<S27>:1672' */
          aaaqi_DW.is_SXQjunya_k = aaaqi_IN_off1_l;

          /* Entry 'off1': '<S27>:1673' */
          aaaqi_B.diancifa11_1_d = 0.0;
          aaaqi_B.diancifa11_5_o = 0.0;
          aaaqi_B.diancifa20_i = 0.0;
          aaaqi_B.diancifa3_l = 0.0;
          aaaqi_B.bililiuliangfa18_1_h = 0.0;
          aaaqi_B.bililiuliangfa18_2_i = 0.0;
          aaaqi_B.bililiuliangfa18_3_m = 0.0;
          aaaqi_B.bililiuliangfa18_4_b = 0.0;
        }
        break;
      }
    }

    /* End of Chart: '<S25>/Chart' */

    /* Product: '<S28>/Product' incorporates:
     *  Constant: '<S28>/Constant'
     */
    aaaqi_B.Product_k = aaaqi_P.Constant_Value_k * aaaqi_B.bililiuliangfa18_2_i;

    /* Gain: '<S28>/Gain' */
    aaaqi_B.Gain_j = aaaqi_P.Gain_Gain_l * aaaqi_B.Product_k;

    /* Product: '<S28>/Product1' incorporates:
     *  Constant: '<S28>/Constant'
     */
    aaaqi_B.Product1_g = aaaqi_P.Constant_Value_k * aaaqi_B.bililiuliangfa18_4_b;

    /* Gain: '<S28>/Gain1' */
    aaaqi_B.Gain1_of = aaaqi_P.Gain1_Gain_h * aaaqi_B.Product1_g;

    /* Switch: '<S28>/Switch1' incorporates:
     *  Constant: '<S28>/Constant2'
     *  Constant: '<S28>/Constant3'
     */
    if (aaaqi_B.DataTypeConversion27[2] >= aaaqi_P.Switch1_Threshold) {
      aaaqi_B.Switch1_b = aaaqi_P.Constant2_Value_i;
    } else {
      aaaqi_B.Switch1_b = aaaqi_P.Constant3_Value_a;
    }

    /* End of Switch: '<S28>/Switch1' */

    /* Switch: '<S28>/Switch2' incorporates:
     *  Constant: '<S28>/Constant4'
     *  Constant: '<S28>/Constant5'
     */
    if (aaaqi_B.DataTypeConversion27[2] >= aaaqi_P.Switch2_Threshold) {
      aaaqi_B.Switch2_ax = aaaqi_P.Constant4_Value;
    } else {
      aaaqi_B.Switch2_ax = aaaqi_P.Constant5_Value;
    }

    /* End of Switch: '<S28>/Switch2' */

    /* Switch: '<S28>/Switch3' incorporates:
     *  Constant: '<S28>/Constant6'
     *  Constant: '<S28>/Constant7'
     */
    if (aaaqi_B.DataTypeConversion27[2] >= aaaqi_P.Switch3_Threshold) {
      aaaqi_B.Switch3_p = aaaqi_P.Constant6_Value;
    } else {
      aaaqi_B.Switch3_p = aaaqi_P.Constant7_Value;
    }

    /* End of Switch: '<S28>/Switch3' */

    /* Switch: '<S28>/Switch4' incorporates:
     *  Constant: '<S28>/Constant8'
     *  Constant: '<S28>/Constant9'
     */
    if (aaaqi_B.DataTypeConversion27[2] >= aaaqi_P.Switch4_Threshold) {
      aaaqi_B.Switch4_e = aaaqi_P.Constant8_Value;
    } else {
      aaaqi_B.Switch4_e = aaaqi_P.Constant9_Value;
    }

    /* End of Switch: '<S28>/Switch4' */

    /* Switch: '<S28>/Switch5' incorporates:
     *  Constant: '<S28>/Constant10'
     *  Constant: '<S28>/Constant11'
     */
    if (aaaqi_B.DataTypeConversion27[2] >= aaaqi_P.Switch5_Threshold) {
      aaaqi_B.Switch5_o = aaaqi_P.Constant10_Value;
    } else {
      aaaqi_B.Switch5_o = aaaqi_P.Constant11_Value;
    }

    /* End of Switch: '<S28>/Switch5' */

    /* Switch: '<S28>/Switch6' incorporates:
     *  Constant: '<S28>/Constant12'
     *  Constant: '<S28>/Constant13'
     */
    if (aaaqi_B.DataTypeConversion27[2] >= aaaqi_P.Switch6_Threshold) {
      aaaqi_B.Switch6_g = aaaqi_P.Constant12_Value;
    } else {
      aaaqi_B.Switch6_g = aaaqi_P.Constant13_Value;
    }

    /* End of Switch: '<S28>/Switch6' */

    /* Switch: '<S28>/Switch7' incorporates:
     *  Constant: '<S28>/Constant14'
     *  Constant: '<S28>/Constant15'
     */
    if (aaaqi_B.DataTypeConversion27[2] >= aaaqi_P.Switch7_Threshold) {
      aaaqi_B.Switch7_n = aaaqi_P.Constant14_Value;
    } else {
      aaaqi_B.Switch7_n = aaaqi_P.Constant15_Value;
    }

    /* End of Switch: '<S28>/Switch7' */

    /* Switch: '<S28>/Switch8' incorporates:
     *  Constant: '<S28>/Constant16'
     *  Constant: '<S28>/Constant17'
     */
    if (aaaqi_B.DataTypeConversion27[2] >= aaaqi_P.Switch8_Threshold) {
      aaaqi_B.Switch8_g = aaaqi_P.Constant16_Value;
    } else {
      aaaqi_B.Switch8_g = aaaqi_P.Constant17_Value;
    }

    /* End of Switch: '<S28>/Switch8' */

    /* Switch: '<S28>/Switch9' incorporates:
     *  Constant: '<S28>/Constant18'
     *  Constant: '<S28>/Constant19'
     */
    if (aaaqi_B.DataTypeConversion27[2] >= aaaqi_P.Switch9_Threshold) {
      aaaqi_B.Switch9_m = aaaqi_P.Constant18_Value;
    } else {
      aaaqi_B.Switch9_m = aaaqi_P.Constant19_Value;
    }

    /* End of Switch: '<S28>/Switch9' */

    /* Sum: '<S28>/Sum of Elements' incorporates:
     *  Constant: '<S28>/Constant1'
     */
    tmpForInput[0] = aaaqi_P.Constant1_Value_j;
    tmpForInput[1] = aaaqi_B.Switch1_b;
    tmpForInput[2] = aaaqi_B.Switch2_ax;
    tmpForInput[3] = aaaqi_B.Switch3_p;
    tmpForInput[4] = aaaqi_B.Switch4_e;
    tmpForInput[5] = aaaqi_B.Switch5_o;
    tmpForInput[6] = aaaqi_B.Switch6_g;
    tmpForInput[7] = aaaqi_B.Switch7_n;
    tmpForInput[8] = aaaqi_B.Switch8_g;
    tmpForInput[9] = aaaqi_B.Switch9_m;
    u0 = tmpForInput[0];
    for (i = 0; i < 9; i++) {
      tmp_d = i + 1;
      u0 += tmpForInput[tmp_d];
    }

    aaaqi_B.SumofElements_e = u0;

    /* End of Sum: '<S28>/Sum of Elements' */

    /* MultiPortSwitch: '<S28>/Multiport Switch' incorporates:
     *  Constant: '<S28>/Constant20'
     *  Constant: '<S28>/Constant21'
     *  Constant: '<S28>/Constant22'
     *  Constant: '<S28>/Constant23'
     *  Constant: '<S28>/Constant24'
     *  Constant: '<S28>/Constant25'
     *  Constant: '<S28>/Constant26'
     *  Constant: '<S28>/Constant27'
     *  Constant: '<S28>/Constant28'
     *  Constant: '<S28>/Constant29'
     */
    switch ((int32_T)aaaqi_B.SumofElements_e) {
     case 1:
      aaaqi_B.MultiportSwitch_jk = aaaqi_P.Constant20_Value;
      break;

     case 2:
      aaaqi_B.MultiportSwitch_jk = aaaqi_P.Constant21_Value;
      break;

     case 3:
      aaaqi_B.MultiportSwitch_jk = aaaqi_P.Constant22_Value;
      break;

     case 4:
      aaaqi_B.MultiportSwitch_jk = aaaqi_P.Constant23_Value;
      break;

     case 5:
      aaaqi_B.MultiportSwitch_jk = aaaqi_P.Constant24_Value;
      break;

     case 6:
      aaaqi_B.MultiportSwitch_jk = aaaqi_P.Constant25_Value;
      break;

     case 7:
      aaaqi_B.MultiportSwitch_jk = aaaqi_P.Constant26_Value;
      break;

     case 8:
      aaaqi_B.MultiportSwitch_jk = aaaqi_P.Constant27_Value;
      break;

     case 9:
      aaaqi_B.MultiportSwitch_jk = aaaqi_P.Constant28_Value;
      break;

     default:
      aaaqi_B.MultiportSwitch_jk = aaaqi_P.Constant29_Value;
      break;
    }

    /* End of MultiPortSwitch: '<S28>/Multiport Switch' */

    /* Sum: '<S30>/Sum1' */
    aaaqi_B.Sum1_n = aaaqi_B.DataTypeConversion35 - aaaqi_B.DataTypeConversion26;

    /* Gain: '<S30>/Gain1' */
    aaaqi_B.Gain1_j = aaaqi_P.Gain1_Gain_k * aaaqi_B.Sum1_n;

    /* Sum: '<S30>/Sum' */
    aaaqi_B.Sum_h = aaaqi_B.DataTypeConversion34 - aaaqi_B.DataTypeConversion26;

    /* Gain: '<S30>/Gain' */
    aaaqi_B.Gain_p = aaaqi_P.Gain_Gain_p * aaaqi_B.Sum_h;

    /* Product: '<S30>/Product' incorporates:
     *  Constant: '<S30>/Constant'
     */
    aaaqi_B.Product_l = aaaqi_B.guangaikaishi_j * aaaqi_P.Constant_Value_c;

    /* Sum: '<S30>/Add1' */
    aaaqi_B.Add1_mg = aaaqi_B.kaigaikaishi_k + aaaqi_B.Product_l;

    /* MultiPortSwitch: '<S30>/Multiport Switch' incorporates:
     *  Constant: '<S30>/Constant1'
     */
    switch ((int32_T)aaaqi_B.Add1_mg) {
     case 1:
      aaaqi_B.MultiportSwitch_e = aaaqi_B.Gain_p;
      break;

     case 2:
      aaaqi_B.MultiportSwitch_e = aaaqi_B.Gain1_j;
      break;

     default:
      aaaqi_B.MultiportSwitch_e = aaaqi_P.Constant1_Value_i;
      break;
    }

    /* End of MultiPortSwitch: '<S30>/Multiport Switch' */

    /* Product: '<S32>/Product' incorporates:
     *  Constant: '<S32>/Constant'
     */
    aaaqi_B.Product_m3 = aaaqi_P.Constant_Value_g * aaaqi_B.bililiuliangfa18_1_h;

    /* Product: '<S32>/Product1' incorporates:
     *  Constant: '<S32>/Constant'
     */
    aaaqi_B.Product1_bp = aaaqi_P.Constant_Value_g *
      aaaqi_B.bililiuliangfa18_3_m;

    /* Switch: '<S32>/Switch1' incorporates:
     *  Constant: '<S32>/Constant2'
     *  Constant: '<S32>/Constant3'
     */
    if (aaaqi_B.DataTypeConversion27[4] >= aaaqi_P.Switch1_Threshold_o) {
      aaaqi_B.Switch1_bv = aaaqi_P.Constant2_Value_e;
    } else {
      aaaqi_B.Switch1_bv = aaaqi_P.Constant3_Value_e;
    }

    /* End of Switch: '<S32>/Switch1' */

    /* Switch: '<S32>/Switch2' incorporates:
     *  Constant: '<S32>/Constant4'
     *  Constant: '<S32>/Constant5'
     */
    if (aaaqi_B.DataTypeConversion27[4] >= aaaqi_P.Switch2_Threshold_a) {
      aaaqi_B.Switch2_p = aaaqi_P.Constant4_Value_l;
    } else {
      aaaqi_B.Switch2_p = aaaqi_P.Constant5_Value_c;
    }

    /* End of Switch: '<S32>/Switch2' */

    /* Switch: '<S32>/Switch3' incorporates:
     *  Constant: '<S32>/Constant6'
     *  Constant: '<S32>/Constant7'
     */
    if (aaaqi_B.DataTypeConversion27[4] >= aaaqi_P.Switch3_Threshold_b) {
      aaaqi_B.Switch3_m = aaaqi_P.Constant6_Value_p;
    } else {
      aaaqi_B.Switch3_m = aaaqi_P.Constant7_Value_k;
    }

    /* End of Switch: '<S32>/Switch3' */

    /* Switch: '<S32>/Switch4' incorporates:
     *  Constant: '<S32>/Constant8'
     *  Constant: '<S32>/Constant9'
     */
    if (aaaqi_B.DataTypeConversion27[4] >= aaaqi_P.Switch4_Threshold_e) {
      aaaqi_B.Switch4_f = aaaqi_P.Constant8_Value_h;
    } else {
      aaaqi_B.Switch4_f = aaaqi_P.Constant9_Value_b;
    }

    /* End of Switch: '<S32>/Switch4' */

    /* Switch: '<S32>/Switch5' incorporates:
     *  Constant: '<S32>/Constant10'
     *  Constant: '<S32>/Constant11'
     */
    if (aaaqi_B.DataTypeConversion27[4] >= aaaqi_P.Switch5_Threshold_b) {
      aaaqi_B.Switch5_b = aaaqi_P.Constant10_Value_d;
    } else {
      aaaqi_B.Switch5_b = aaaqi_P.Constant11_Value_g;
    }

    /* End of Switch: '<S32>/Switch5' */

    /* Switch: '<S32>/Switch6' incorporates:
     *  Constant: '<S32>/Constant12'
     *  Constant: '<S32>/Constant13'
     */
    if (aaaqi_B.DataTypeConversion27[4] >= aaaqi_P.Switch6_Threshold_h) {
      aaaqi_B.Switch6_k = aaaqi_P.Constant12_Value_n;
    } else {
      aaaqi_B.Switch6_k = aaaqi_P.Constant13_Value_m;
    }

    /* End of Switch: '<S32>/Switch6' */

    /* Switch: '<S32>/Switch7' incorporates:
     *  Constant: '<S32>/Constant14'
     *  Constant: '<S32>/Constant15'
     */
    if (aaaqi_B.DataTypeConversion27[4] >= aaaqi_P.Switch7_Threshold_j) {
      aaaqi_B.Switch7_g = aaaqi_P.Constant14_Value_e;
    } else {
      aaaqi_B.Switch7_g = aaaqi_P.Constant15_Value_f;
    }

    /* End of Switch: '<S32>/Switch7' */

    /* Switch: '<S32>/Switch8' incorporates:
     *  Constant: '<S32>/Constant16'
     *  Constant: '<S32>/Constant17'
     */
    if (aaaqi_B.DataTypeConversion27[4] >= aaaqi_P.Switch8_Threshold_k) {
      aaaqi_B.Switch8_l = aaaqi_P.Constant16_Value_l;
    } else {
      aaaqi_B.Switch8_l = aaaqi_P.Constant17_Value_i;
    }

    /* End of Switch: '<S32>/Switch8' */

    /* Switch: '<S32>/Switch9' incorporates:
     *  Constant: '<S32>/Constant18'
     *  Constant: '<S32>/Constant19'
     */
    if (aaaqi_B.DataTypeConversion27[4] >= aaaqi_P.Switch9_Threshold_c) {
      aaaqi_B.Switch9_o = aaaqi_P.Constant18_Value_d;
    } else {
      aaaqi_B.Switch9_o = aaaqi_P.Constant19_Value_b;
    }

    /* End of Switch: '<S32>/Switch9' */

    /* Sum: '<S32>/Sum of Elements' incorporates:
     *  Constant: '<S32>/Constant1'
     */
    tmpForInput[0] = aaaqi_P.Constant1_Value_f;
    tmpForInput[1] = aaaqi_B.Switch1_bv;
    tmpForInput[2] = aaaqi_B.Switch2_p;
    tmpForInput[3] = aaaqi_B.Switch3_m;
    tmpForInput[4] = aaaqi_B.Switch4_f;
    tmpForInput[5] = aaaqi_B.Switch5_b;
    tmpForInput[6] = aaaqi_B.Switch6_k;
    tmpForInput[7] = aaaqi_B.Switch7_g;
    tmpForInput[8] = aaaqi_B.Switch8_l;
    tmpForInput[9] = aaaqi_B.Switch9_o;
    u0 = tmpForInput[0];
    for (i = 0; i < 9; i++) {
      tmp_d = i + 1;
      u0 += tmpForInput[tmp_d];
    }

    aaaqi_B.SumofElements_d = u0;

    /* End of Sum: '<S32>/Sum of Elements' */

    /* MultiPortSwitch: '<S32>/Multiport Switch' incorporates:
     *  Constant: '<S32>/Constant20'
     *  Constant: '<S32>/Constant21'
     *  Constant: '<S32>/Constant22'
     *  Constant: '<S32>/Constant23'
     *  Constant: '<S32>/Constant24'
     *  Constant: '<S32>/Constant25'
     *  Constant: '<S32>/Constant26'
     *  Constant: '<S32>/Constant27'
     *  Constant: '<S32>/Constant28'
     *  Constant: '<S32>/Constant29'
     */
    switch ((int32_T)aaaqi_B.SumofElements_d) {
     case 1:
      aaaqi_B.MultiportSwitch_l = aaaqi_P.Constant20_Value_j;
      break;

     case 2:
      aaaqi_B.MultiportSwitch_l = aaaqi_P.Constant21_Value_l;
      break;

     case 3:
      aaaqi_B.MultiportSwitch_l = aaaqi_P.Constant22_Value_d;
      break;

     case 4:
      aaaqi_B.MultiportSwitch_l = aaaqi_P.Constant23_Value_g;
      break;

     case 5:
      aaaqi_B.MultiportSwitch_l = aaaqi_P.Constant24_Value_m;
      break;

     case 6:
      aaaqi_B.MultiportSwitch_l = aaaqi_P.Constant25_Value_n;
      break;

     case 7:
      aaaqi_B.MultiportSwitch_l = aaaqi_P.Constant26_Value_l;
      break;

     case 8:
      aaaqi_B.MultiportSwitch_l = aaaqi_P.Constant27_Value_p;
      break;

     case 9:
      aaaqi_B.MultiportSwitch_l = aaaqi_P.Constant28_Value_h;
      break;

     default:
      aaaqi_B.MultiportSwitch_l = aaaqi_P.Constant29_Value_g;
      break;
    }

    /* End of MultiPortSwitch: '<S32>/Multiport Switch' */

    /* Product: '<S31>/Product' incorporates:
     *  Constant: '<S31>/Constant'
     */
    aaaqi_B.Product_e = 0.0 * aaaqi_P.Constant_Value_m;

    /* Sum: '<S31>/Add1' */
    aaaqi_B.Add1_n = aaaqi_B.Product_e;

    /* FromWorkspace: '<S33>/FromWs' */
    {
      real_T *pDataValues = (real_T *) aaaqi_DW.FromWs_PWORK_i.DataPtr;
      real_T *pTimeValues = (real_T *) aaaqi_DW.FromWs_PWORK_i.TimePtr;
      int_T currTimeIndex = aaaqi_DW.FromWs_IWORK_oe.PrevIndex;
      real_T t = aaaqi_M->Timing.t[0];

      /* Get index */
      if (t <= pTimeValues[0]) {
        currTimeIndex = 0;
      } else if (t >= pTimeValues[5]) {
        currTimeIndex = 4;
      } else {
        if (t < pTimeValues[currTimeIndex]) {
          while (t < pTimeValues[currTimeIndex]) {
            currTimeIndex--;
          }
        } else {
          while (t >= pTimeValues[currTimeIndex + 1]) {
            currTimeIndex++;
          }
        }
      }

      aaaqi_DW.FromWs_IWORK_oe.PrevIndex = currTimeIndex;

      /* Post output */
      {
        real_T t1 = pTimeValues[currTimeIndex];
        real_T t2 = pTimeValues[currTimeIndex + 1];
        if (t1 == t2) {
          if (t < t1) {
            aaaqi_B.FromWs_g = pDataValues[currTimeIndex];
          } else {
            aaaqi_B.FromWs_g = pDataValues[currTimeIndex + 1];
          }
        } else {
          real_T f1 = (t2 - t) / (t2 - t1);
          real_T f2 = 1.0 - f1;
          real_T d1;
          real_T d2;
          int_T TimeIndex= currTimeIndex;
          d1 = pDataValues[TimeIndex];
          d2 = pDataValues[TimeIndex + 1];
          aaaqi_B.FromWs_g = (real_T) rtInterpolate(d1, d2, f1, f2);
          pDataValues += 6;
        }
      }
    }

    /* FromWorkspace: '<S34>/FromWs' */
    {
      real_T *pDataValues = (real_T *) aaaqi_DW.FromWs_PWORK_jz.DataPtr;
      real_T *pTimeValues = (real_T *) aaaqi_DW.FromWs_PWORK_jz.TimePtr;
      int_T currTimeIndex = aaaqi_DW.FromWs_IWORK_f0.PrevIndex;
      real_T t = aaaqi_M->Timing.t[0];

      /* Get index */
      if (t <= pTimeValues[0]) {
        currTimeIndex = 0;
      } else if (t >= pTimeValues[5]) {
        currTimeIndex = 4;
      } else {
        if (t < pTimeValues[currTimeIndex]) {
          while (t < pTimeValues[currTimeIndex]) {
            currTimeIndex--;
          }
        } else {
          while (t >= pTimeValues[currTimeIndex + 1]) {
            currTimeIndex++;
          }
        }
      }

      aaaqi_DW.FromWs_IWORK_f0.PrevIndex = currTimeIndex;

      /* Post output */
      {
        real_T t1 = pTimeValues[currTimeIndex];
        real_T t2 = pTimeValues[currTimeIndex + 1];
        if (t1 == t2) {
          if (t < t1) {
            aaaqi_B.FromWs_i = pDataValues[currTimeIndex];
          } else {
            aaaqi_B.FromWs_i = pDataValues[currTimeIndex + 1];
          }
        } else {
          real_T f1 = (t2 - t) / (t2 - t1);
          real_T f2 = 1.0 - f1;
          real_T d1;
          real_T d2;
          int_T TimeIndex= currTimeIndex;
          d1 = pDataValues[TimeIndex];
          d2 = pDataValues[TimeIndex + 1];
          aaaqi_B.FromWs_i = (real_T) rtInterpolate(d1, d2, f1, f2);
          pDataValues += 6;
        }
      }
    }

    /* FromWorkspace: '<S35>/FromWs' */
    {
      real_T *pDataValues = (real_T *) aaaqi_DW.FromWs_PWORK_m.DataPtr;
      real_T *pTimeValues = (real_T *) aaaqi_DW.FromWs_PWORK_m.TimePtr;
      int_T currTimeIndex = aaaqi_DW.FromWs_IWORK_l.PrevIndex;
      real_T t = aaaqi_M->Timing.t[0];

      /* Get index */
      if (t <= pTimeValues[0]) {
        currTimeIndex = 0;
      } else if (t >= pTimeValues[5]) {
        currTimeIndex = 4;
      } else {
        if (t < pTimeValues[currTimeIndex]) {
          while (t < pTimeValues[currTimeIndex]) {
            currTimeIndex--;
          }
        } else {
          while (t >= pTimeValues[currTimeIndex + 1]) {
            currTimeIndex++;
          }
        }
      }

      aaaqi_DW.FromWs_IWORK_l.PrevIndex = currTimeIndex;

      /* Post output */
      {
        real_T t1 = pTimeValues[currTimeIndex];
        real_T t2 = pTimeValues[currTimeIndex + 1];
        if (t1 == t2) {
          if (t < t1) {
            aaaqi_B.FromWs_ou = pDataValues[currTimeIndex];
          } else {
            aaaqi_B.FromWs_ou = pDataValues[currTimeIndex + 1];
          }
        } else {
          real_T f1 = (t2 - t) / (t2 - t1);
          real_T f2 = 1.0 - f1;
          real_T d1;
          real_T d2;
          int_T TimeIndex= currTimeIndex;
          d1 = pDataValues[TimeIndex];
          d2 = pDataValues[TimeIndex + 1];
          aaaqi_B.FromWs_ou = (real_T) rtInterpolate(d1, d2, f1, f2);
          pDataValues += 6;
        }
      }
    }

    /* FromWorkspace: '<S36>/FromWs' */
    {
      real_T *pDataValues = (real_T *) aaaqi_DW.FromWs_PWORK_i2.DataPtr;
      real_T *pTimeValues = (real_T *) aaaqi_DW.FromWs_PWORK_i2.TimePtr;
      int_T currTimeIndex = aaaqi_DW.FromWs_IWORK_d.PrevIndex;
      real_T t = aaaqi_M->Timing.t[0];

      /* Get index */
      if (t <= pTimeValues[0]) {
        currTimeIndex = 0;
      } else if (t >= pTimeValues[5]) {
        currTimeIndex = 4;
      } else {
        if (t < pTimeValues[currTimeIndex]) {
          while (t < pTimeValues[currTimeIndex]) {
            currTimeIndex--;
          }
        } else {
          while (t >= pTimeValues[currTimeIndex + 1]) {
            currTimeIndex++;
          }
        }
      }

      aaaqi_DW.FromWs_IWORK_d.PrevIndex = currTimeIndex;

      /* Post output */
      {
        real_T t1 = pTimeValues[currTimeIndex];
        real_T t2 = pTimeValues[currTimeIndex + 1];
        if (t1 == t2) {
          if (t < t1) {
            aaaqi_B.FromWs_fu = pDataValues[currTimeIndex];
          } else {
            aaaqi_B.FromWs_fu = pDataValues[currTimeIndex + 1];
          }
        } else {
          real_T f1 = (t2 - t) / (t2 - t1);
          real_T f2 = 1.0 - f1;
          real_T d1;
          real_T d2;
          int_T TimeIndex= currTimeIndex;
          d1 = pDataValues[TimeIndex];
          d2 = pDataValues[TimeIndex + 1];
          aaaqi_B.FromWs_fu = (real_T) rtInterpolate(d1, d2, f1, f2);
          pDataValues += 6;
        }
      }
    }

    /* MultiPortSwitch: '<S31>/Multiport Switch' incorporates:
     *  Constant: '<S31>/Constant1'
     */
    switch ((int32_T)aaaqi_B.Add1_n) {
     case 1:
      /* Sum: '<S31>/Sum' */
      aaaqi_B.Sum_l = aaaqi_B.FromWs_g - aaaqi_B.DataTypeConversion25[2];

      /* Gain: '<S31>/Gain' */
      aaaqi_B.Gain_o = aaaqi_P.Gain_Gain * aaaqi_B.Sum_l;
      aaaqi_B.MultiportSwitch_g = aaaqi_B.Gain_o;
      break;

     case 2:
      /* Sum: '<S31>/Sum1' */
      aaaqi_B.Sum1_p = aaaqi_B.FromWs_i - aaaqi_B.DataTypeConversion25[2];

      /* Gain: '<S31>/Gain1' */
      aaaqi_B.Gain1_d = aaaqi_P.Gain1_Gain * aaaqi_B.Sum1_p;
      aaaqi_B.MultiportSwitch_g = aaaqi_B.Gain1_d;
      break;

     default:
      aaaqi_B.MultiportSwitch_g = aaaqi_P.Constant1_Value_m;
      break;
    }

    /* End of MultiPortSwitch: '<S31>/Multiport Switch' */

    /* MultiPortSwitch: '<S31>/Multiport Switch1' incorporates:
     *  Constant: '<S31>/Constant2'
     */
    switch ((int32_T)aaaqi_B.Add1_n) {
     case 1:
      /* Sum: '<S31>/Sum2' */
      aaaqi_B.Sum2_e = aaaqi_B.FromWs_ou - aaaqi_B.DataTypeConversion25[3];

      /* Gain: '<S31>/Gain2' */
      aaaqi_B.Gain2_c = aaaqi_P.Gain2_Gain * aaaqi_B.Sum2_e;
      aaaqi_B.MultiportSwitch1_e = aaaqi_B.Gain2_c;
      break;

     case 2:
      /* Sum: '<S31>/Sum3' */
      aaaqi_B.Sum3_n = aaaqi_B.FromWs_fu - aaaqi_B.DataTypeConversion25[3];

      /* Gain: '<S31>/Gain3' */
      aaaqi_B.Gain3_f = aaaqi_P.Gain3_Gain * aaaqi_B.Sum3_n;
      aaaqi_B.MultiportSwitch1_e = aaaqi_B.Gain3_f;
      break;

     default:
      aaaqi_B.MultiportSwitch1_e = aaaqi_P.Constant2_Value_b;
      break;
    }

    /* End of MultiPortSwitch: '<S31>/Multiport Switch1' */
    srUpdateBC(aaaqi_DW.shoudong_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<S14>/shoudong' */

  /* MultiPortSwitch: '<S14>/Multiport Switch1' */
  if ((int32_T)aaaqi_B.DataTypeConversion4 == 0) {
    aaaqi_B.MultiportSwitch1[0] = aaaqi_B.diancifa11_1_l;
    aaaqi_B.MultiportSwitch1[1] = aaaqi_B.diancifa11_2_l;
    aaaqi_B.MultiportSwitch1[2] = aaaqi_B.diancifa11_5_d;
    aaaqi_B.MultiportSwitch1[3] = aaaqi_B.diancifa20_n;
    aaaqi_B.MultiportSwitch1[4] = aaaqi_B.diancifa16_1_l;
    aaaqi_B.MultiportSwitch1[5] = aaaqi_B.diancifa3_m;
    aaaqi_B.MultiportSwitch1[6] = aaaqi_B.diancifa21_a;
    aaaqi_B.MultiportSwitch1[7] = aaaqi_B.suoding_a;
    aaaqi_B.MultiportSwitch1[8] = aaaqi_B.jiesuo_j;
    aaaqi_B.MultiportSwitch1[9] = aaaqi_B.xuansong_n;
    aaaqi_B.MultiportSwitch1[10] = aaaqi_B.xuanjin_b;
    aaaqi_B.MultiportSwitch1[11] = aaaqi_B.Product_j;
    aaaqi_B.MultiportSwitch1[12] = aaaqi_B.Gain_f;
    aaaqi_B.MultiportSwitch1[13] = aaaqi_B.Product1_b;
    aaaqi_B.MultiportSwitch1[14] = aaaqi_B.Gain1;
    aaaqi_B.MultiportSwitch1[15] = aaaqi_B.MultiportSwitch_j;
  } else {
    aaaqi_B.MultiportSwitch1[0] = aaaqi_B.diancifa11_1_d;
    aaaqi_B.MultiportSwitch1[1] = aaaqi_B.diancifa11_2_b;
    aaaqi_B.MultiportSwitch1[2] = aaaqi_B.diancifa11_5_o;
    aaaqi_B.MultiportSwitch1[3] = aaaqi_B.diancifa20_i;
    aaaqi_B.MultiportSwitch1[4] = aaaqi_B.diancifa16_1_c;
    aaaqi_B.MultiportSwitch1[5] = aaaqi_B.diancifa3_l;
    aaaqi_B.MultiportSwitch1[6] = aaaqi_B.diancifa21_g;
    aaaqi_B.MultiportSwitch1[7] = aaaqi_B.suoding_k;
    aaaqi_B.MultiportSwitch1[8] = aaaqi_B.jiesuo_g;
    aaaqi_B.MultiportSwitch1[9] = aaaqi_B.xuansong_i;
    aaaqi_B.MultiportSwitch1[10] = aaaqi_B.xuanjin_l;
    aaaqi_B.MultiportSwitch1[11] = aaaqi_B.Product_m3;
    aaaqi_B.MultiportSwitch1[12] = aaaqi_B.Gain_j;
    aaaqi_B.MultiportSwitch1[13] = aaaqi_B.Product1_bp;
    aaaqi_B.MultiportSwitch1[14] = aaaqi_B.Gain1_of;
    aaaqi_B.MultiportSwitch1[15] = aaaqi_B.MultiportSwitch_e;
  }

  /* End of MultiPortSwitch: '<S14>/Multiport Switch1' */

  /* Switch: '<S13>/Switch1' */
  if (aaaqi_B.DataTypeConversion3 >= aaaqi_P.Switch1_Threshold_g) {
    aaaqi_B.Switch1 = aaaqi_B.diancifa11_1;
  } else {
    aaaqi_B.Switch1 = aaaqi_B.MultiportSwitch1[0];
  }

  /* End of Switch: '<S13>/Switch1' */

  /* Switch: '<S13>/Switch2' */
  if (aaaqi_B.DataTypeConversion3 >= aaaqi_P.Switch2_Threshold_f) {
    aaaqi_B.Switch2_l = aaaqi_B.diancifa11_2;
  } else {
    aaaqi_B.Switch2_l = aaaqi_B.MultiportSwitch1[1];
  }

  /* End of Switch: '<S13>/Switch2' */

  /* Switch: '<S13>/Switch3' */
  if (aaaqi_B.DataTypeConversion3 >= aaaqi_P.Switch3_Threshold_b4) {
    aaaqi_B.Switch3 = aaaqi_B.diancifa11_5;
  } else {
    aaaqi_B.Switch3 = aaaqi_B.MultiportSwitch1[2];
  }

  /* End of Switch: '<S13>/Switch3' */

  /* Switch: '<S13>/Switch4' */
  if (aaaqi_B.DataTypeConversion3 >= aaaqi_P.Switch4_Threshold_a) {
    aaaqi_B.Switch4 = aaaqi_B.diancifa20;
  } else {
    aaaqi_B.Switch4 = aaaqi_B.MultiportSwitch1[3];
  }

  /* End of Switch: '<S13>/Switch4' */

  /* Switch: '<S13>/Switch5' */
  if (aaaqi_B.DataTypeConversion3 >= aaaqi_P.Switch5_Threshold_j) {
    aaaqi_B.Switch5 = aaaqi_B.diancifa16_1;
  } else {
    aaaqi_B.Switch5 = aaaqi_B.MultiportSwitch1[4];
  }

  /* End of Switch: '<S13>/Switch5' */

  /* Switch: '<S13>/Switch6' */
  if (aaaqi_B.DataTypeConversion3 >= aaaqi_P.Switch6_Threshold_k) {
    aaaqi_B.Switch6 = aaaqi_B.diancifa3;
  } else {
    aaaqi_B.Switch6 = aaaqi_B.MultiportSwitch1[5];
  }

  /* End of Switch: '<S13>/Switch6' */

  /* Switch: '<S13>/Switch7' */
  if (aaaqi_B.DataTypeConversion3 >= aaaqi_P.Switch7_Threshold_e) {
    aaaqi_B.Switch7 = aaaqi_B.diancifa21;
  } else {
    aaaqi_B.Switch7 = aaaqi_B.MultiportSwitch1[6];
  }

  /* End of Switch: '<S13>/Switch7' */

  /* Switch: '<S13>/Switch8' */
  if (aaaqi_B.DataTypeConversion3 >= aaaqi_P.Switch8_Threshold_p) {
    aaaqi_B.Switch8 = aaaqi_B.suoding;
  } else {
    aaaqi_B.Switch8 = aaaqi_B.MultiportSwitch1[7];
  }

  /* End of Switch: '<S13>/Switch8' */

  /* Switch: '<S13>/Switch9' */
  if (aaaqi_B.DataTypeConversion3 >= aaaqi_P.Switch9_Threshold_k) {
    aaaqi_B.Switch9 = aaaqi_B.jiesuo;
  } else {
    aaaqi_B.Switch9 = aaaqi_B.MultiportSwitch1[8];
  }

  /* End of Switch: '<S13>/Switch9' */

  /* Switch: '<S13>/Switch10' */
  if (aaaqi_B.DataTypeConversion3 >= aaaqi_P.Switch10_Threshold) {
    aaaqi_B.Switch10 = aaaqi_B.xuansong;
  } else {
    aaaqi_B.Switch10 = aaaqi_B.MultiportSwitch1[9];
  }

  /* End of Switch: '<S13>/Switch10' */

  /* Switch: '<S13>/Switch11' */
  if (aaaqi_B.DataTypeConversion3 >= aaaqi_P.Switch11_Threshold) {
    aaaqi_B.Switch11 = aaaqi_B.xuanjin;
  } else {
    aaaqi_B.Switch11 = aaaqi_B.MultiportSwitch1[10];
  }

  /* End of Switch: '<S13>/Switch11' */

  /* DataTypeConversion: '<Root>/Data Type Conversion7' */
  aaaqi_B.DataTypeConversion7[0] = aaaqi_B.Switch1;
  aaaqi_B.DataTypeConversion7[1] = aaaqi_B.Switch2_l;
  aaaqi_B.DataTypeConversion7[2] = aaaqi_B.Switch3;
  aaaqi_B.DataTypeConversion7[3] = aaaqi_B.Switch4;
  aaaqi_B.DataTypeConversion7[4] = aaaqi_B.Switch5;
  aaaqi_B.DataTypeConversion7[5] = aaaqi_B.Switch6;
  aaaqi_B.DataTypeConversion7[6] = aaaqi_B.Switch7;
  aaaqi_B.DataTypeConversion7[7] = aaaqi_B.Switch8;
  aaaqi_B.DataTypeConversion7[8] = aaaqi_B.Switch9;
  aaaqi_B.DataTypeConversion7[9] = aaaqi_B.Switch10;
  aaaqi_B.DataTypeConversion7[10] = aaaqi_B.Switch11;

  /* Constant: '<Root>/diancifa11_3' */
  aaaqi_B.diancifa11_3 = aaaqi_P.diancifa11_3_Value;

  /* Constant: '<Root>/diancifa11_4' */
  aaaqi_B.diancifa11_4 = aaaqi_P.diancifa11_4_Value;

  /* Logic: '<S5>/Logical Operator' incorporates:
   *  Constant: '<Root>/SCxieya'
   */
  aaaqi_B.LogicalOperator_jg = ((aaaqi_B.DataTypeConversion7[4] != 0.0) ||
    (aaaqi_P.SCxieya_Value != 0.0));

  /* DataTypeConversion: '<S5>/Data Type Conversion1' */
  aaaqi_B.DataTypeConversion1_k = aaaqi_B.LogicalOperator_jg;

  /* Constant: '<Root>/diancifa16_2' */
  aaaqi_B.diancifa16_2 = aaaqi_P.diancifa16_2_Value;

  /* Constant: '<Root>/diancifa16_3' */
  aaaqi_B.diancifa16_3 = aaaqi_P.diancifa16_3_Value;

  /* Logic: '<S5>/Logical Operator1' incorporates:
   *  Constant: '<Root>/BCQbushui'
   */
  aaaqi_B.LogicalOperator1_g = ((aaaqi_B.DataTypeConversion7[6] != 0.0) ||
    (aaaqi_P.BCQbushui_Value != 0.0));

  /* DataTypeConversion: '<S5>/Data Type Conversion2' */
  aaaqi_B.DataTypeConversion2 = aaaqi_B.LogicalOperator1_g;

  /* Constant: '<S5>/constant' */
  aaaqi_B.constant = aaaqi_P.constant_Value;

  /* Level2 S-Function Block: '<S5>/PCI1716DIO1' (pci1716DIO) */
  {
    SimStruct *rts = aaaqi_M->childSfunctions[0];
    sfcnOutputs(rts, 1);
  }

  /* DataTypeConversion: '<S5>/Data Type Conversion' */
  aaaqi_B.DataTypeConversion[0] = aaaqi_B.DataTypeConversion7[0];
  aaaqi_B.DataTypeConversion[1] = aaaqi_B.DataTypeConversion7[1];
  aaaqi_B.DataTypeConversion[2] = aaaqi_B.diancifa11_3;
  aaaqi_B.DataTypeConversion[3] = aaaqi_B.diancifa11_4;
  aaaqi_B.DataTypeConversion[4] = aaaqi_B.DataTypeConversion7[2];
  aaaqi_B.DataTypeConversion[5] = aaaqi_B.DataTypeConversion1_k;
  aaaqi_B.DataTypeConversion[6] = aaaqi_B.diancifa16_2;
  aaaqi_B.DataTypeConversion[7] = aaaqi_B.diancifa16_3;
  aaaqi_B.DataTypeConversion[8] = aaaqi_B.DataTypeConversion7[3];
  aaaqi_B.DataTypeConversion[9] = aaaqi_B.DataTypeConversion2;
  aaaqi_B.DataTypeConversion[10] = aaaqi_B.DataTypeConversion7[5];
  aaaqi_B.DataTypeConversion[11] = aaaqi_B.DataTypeConversion7[7];
  aaaqi_B.DataTypeConversion[12] = aaaqi_B.DataTypeConversion7[8];
  aaaqi_B.DataTypeConversion[13] = aaaqi_B.DataTypeConversion7[9];
  aaaqi_B.DataTypeConversion[14] = aaaqi_B.DataTypeConversion7[10];

  /* Switch: '<S13>/Switch12' */
  if (aaaqi_B.DataTypeConversion3 >= aaaqi_P.Switch12_Threshold) {
    aaaqi_B.Switch12 = aaaqi_B.bililiuliangfa18_1;
  } else {
    aaaqi_B.Switch12 = aaaqi_B.MultiportSwitch1[11];
  }

  /* End of Switch: '<S13>/Switch12' */

  /* Switch: '<S13>/Switch13' */
  if (aaaqi_B.DataTypeConversion3 >= aaaqi_P.Switch13_Threshold) {
    aaaqi_B.Switch13 = aaaqi_B.bililiuliangfa18_2;
  } else {
    aaaqi_B.Switch13 = aaaqi_B.MultiportSwitch1[12];
  }

  /* End of Switch: '<S13>/Switch13' */

  /* Switch: '<S13>/Switch14' */
  if (aaaqi_B.DataTypeConversion3 >= aaaqi_P.Switch14_Threshold) {
    aaaqi_B.Switch14 = aaaqi_B.bililiuliangfa18_3;
  } else {
    aaaqi_B.Switch14 = aaaqi_B.MultiportSwitch1[13];
  }

  /* End of Switch: '<S13>/Switch14' */

  /* Switch: '<S13>/Switch17' */
  if (aaaqi_B.DataTypeConversion3 >= aaaqi_P.Switch17_Threshold) {
    aaaqi_B.Switch17 = aaaqi_B.bililiuliangfa18_4;
  } else {
    aaaqi_B.Switch17 = aaaqi_B.MultiportSwitch1[14];
  }

  /* End of Switch: '<S13>/Switch17' */

  /* Switch: '<S13>/Switch18' */
  if (aaaqi_B.DataTypeConversion3 >= aaaqi_P.Switch18_Threshold) {
    aaaqi_B.Switch18 = aaaqi_B.kaiguangaifa;
  } else {
    aaaqi_B.Switch18 = aaaqi_B.MultiportSwitch1[15];
  }

  /* End of Switch: '<S13>/Switch18' */

  /* DataTypeConversion: '<Root>/Data Type Conversion5' */
  aaaqi_B.DataTypeConversion5_a[0] = aaaqi_B.Switch12;
  aaaqi_B.DataTypeConversion5_a[1] = aaaqi_B.Switch13;
  aaaqi_B.DataTypeConversion5_a[2] = aaaqi_B.Switch14;
  aaaqi_B.DataTypeConversion5_a[3] = aaaqi_B.Switch17;
  aaaqi_B.DataTypeConversion5_a[4] = aaaqi_B.Switch18;

  /* MultiPortSwitch: '<S14>/Multiport Switch' */
  if ((int32_T)aaaqi_B.DataTypeConversion4 == 0) {
    aaaqi_B.MultiportSwitch[0] = aaaqi_B.SCzhushuiwancheng;
    aaaqi_B.MultiportSwitch[1] = aaaqi_B.SCjiayawancheng;
    aaaqi_B.MultiportSwitch[2] = aaaqi_B.SXQjunyawancheng;
    aaaqi_B.MultiportSwitch[3] = aaaqi_B.SXQxieyawancheng;
    aaaqi_B.MultiportSwitch[4] = aaaqi_B.SQshiyabuchangwancheng;
    aaaqi_B.MultiportSwitch[5] = aaaqi_B.SQxuanjinjianyawancheng;
    aaaqi_B.MultiportSwitch[6] = aaaqi_B.kaigaiwancheng;
    aaaqi_B.MultiportSwitch[7] = aaaqi_B.guangaiwancheng;
  } else {
    aaaqi_B.MultiportSwitch[0] = aaaqi_B.SCzhushuiwancheng_f;
    aaaqi_B.MultiportSwitch[1] = aaaqi_B.SCjiayawancheng_l;
    aaaqi_B.MultiportSwitch[2] = aaaqi_B.SXQjunyawancheng_h;
    aaaqi_B.MultiportSwitch[3] = aaaqi_B.SXQxieyawancheng_p;
    aaaqi_B.MultiportSwitch[4] = aaaqi_B.SQshiyabuchangwancheng_p;
    aaaqi_B.MultiportSwitch[5] = aaaqi_B.SQxuanjinjianyawancheng_m;
    aaaqi_B.MultiportSwitch[6] = aaaqi_B.kaigaiwancheng_g;
    aaaqi_B.MultiportSwitch[7] = aaaqi_B.guangaiwancheng_n;
  }

  /* End of MultiPortSwitch: '<S14>/Multiport Switch' */

  /* Lookup_n-D: '<Root>/1-D Lookup Table' */
  aaaqi_B.uDLookupTable_j = look1_binlxpw(aaaqi_B.uDLookupTable,
    aaaqi_P.uDLookupTable_bp01Data_n, aaaqi_P.uDLookupTable_tableData_h, 1U);

  /* Gain: '<Root>/Gain' */
  aaaqi_B.Gain = aaaqi_P.Gain_Gain_f * aaaqi_B.uDLookupTable_j;

  /* DataTypeConversion: '<S6>/Data Type Conversion' */
  for (i = 0; i < 5; i++) {
    aaaqi_B.DataTypeConversion_p[i] = aaaqi_B.DataTypeConversion5_a[i];
  }

  /* End of DataTypeConversion: '<S6>/Data Type Conversion' */

  /* Saturate: '<S6>/Saturation' */
  u0 = aaaqi_B.DataTypeConversion_p[0];
  tmp = aaaqi_P.Saturation_LowerSat_a;
  tmp_0 = aaaqi_P.Saturation_UpperSat_m;
  if (u0 > tmp_0) {
    aaaqi_B.Saturation_j = tmp_0;
  } else if (u0 < tmp) {
    aaaqi_B.Saturation_j = tmp;
  } else {
    aaaqi_B.Saturation_j = u0;
  }

  /* End of Saturate: '<S6>/Saturation' */

  /* Saturate: '<S6>/Saturation1' */
  u0 = aaaqi_B.DataTypeConversion_p[1];
  tmp = aaaqi_P.Saturation1_LowerSat_b;
  tmp_0 = aaaqi_P.Saturation1_UpperSat_f;
  if (u0 > tmp_0) {
    aaaqi_B.Saturation1_i = tmp_0;
  } else if (u0 < tmp) {
    aaaqi_B.Saturation1_i = tmp;
  } else {
    aaaqi_B.Saturation1_i = u0;
  }

  /* End of Saturate: '<S6>/Saturation1' */

  /* Saturate: '<S6>/Saturation2' */
  u0 = aaaqi_B.DataTypeConversion_p[2];
  tmp = aaaqi_P.Saturation2_LowerSat;
  tmp_0 = aaaqi_P.Saturation2_UpperSat;
  if (u0 > tmp_0) {
    aaaqi_B.Saturation2 = tmp_0;
  } else if (u0 < tmp) {
    aaaqi_B.Saturation2 = tmp;
  } else {
    aaaqi_B.Saturation2 = u0;
  }

  /* End of Saturate: '<S6>/Saturation2' */

  /* Saturate: '<S6>/Saturation3' */
  u0 = aaaqi_B.DataTypeConversion_p[3];
  tmp = aaaqi_P.Saturation3_LowerSat;
  tmp_0 = aaaqi_P.Saturation3_UpperSat;
  if (u0 > tmp_0) {
    aaaqi_B.Saturation3 = tmp_0;
  } else if (u0 < tmp) {
    aaaqi_B.Saturation3 = tmp;
  } else {
    aaaqi_B.Saturation3 = u0;
  }

  /* End of Saturate: '<S6>/Saturation3' */

  /* Saturate: '<S6>/Saturation4' */
  u0 = aaaqi_B.DataTypeConversion_p[4];
  tmp = aaaqi_P.Saturation4_LowerSat;
  tmp_0 = aaaqi_P.Saturation4_UpperSat;
  if (u0 > tmp_0) {
    aaaqi_B.Saturation4 = tmp_0;
  } else if (u0 < tmp) {
    aaaqi_B.Saturation4 = tmp;
  } else {
    aaaqi_B.Saturation4 = u0;
  }

  /* End of Saturate: '<S6>/Saturation4' */

  /* Saturate: '<S6>/Saturation5' incorporates:
   *  Constant: '<S6>/Constant'
   */
  u0 = aaaqi_P.Constant_Value_l;
  tmp = aaaqi_P.Saturation5_LowerSat;
  tmp_0 = aaaqi_P.Saturation5_UpperSat;
  if (u0 > tmp_0) {
    aaaqi_B.Saturation5 = tmp_0;
  } else if (u0 < tmp) {
    aaaqi_B.Saturation5 = tmp;
  } else {
    aaaqi_B.Saturation5 = u0;
  }

  /* End of Saturate: '<S6>/Saturation5' */

  /* Saturate: '<S6>/Saturation6' incorporates:
   *  Constant: '<S6>/Constant1'
   */
  u0 = aaaqi_P.Constant1_Value_n;
  tmp = aaaqi_P.Saturation6_LowerSat;
  tmp_0 = aaaqi_P.Saturation6_UpperSat;
  if (u0 > tmp_0) {
    aaaqi_B.Saturation6 = tmp_0;
  } else if (u0 < tmp) {
    aaaqi_B.Saturation6 = tmp;
  } else {
    aaaqi_B.Saturation6 = u0;
  }

  /* End of Saturate: '<S6>/Saturation6' */

  /* Saturate: '<S6>/Saturation7' incorporates:
   *  Constant: '<Root>/bilijianyafa'
   */
  u0 = aaaqi_P.bilijianyafa_Value;
  tmp = aaaqi_P.Saturation7_LowerSat;
  tmp_0 = aaaqi_P.Saturation7_UpperSat;
  if (u0 > tmp_0) {
    aaaqi_B.Saturation7 = tmp_0;
  } else if (u0 < tmp) {
    aaaqi_B.Saturation7 = tmp;
  } else {
    aaaqi_B.Saturation7 = u0;
  }

  /* End of Saturate: '<S6>/Saturation7' */

  /* Level2 S-Function Block: '<S6>/PCI-6208A DA ' (da6208) */
  {
    SimStruct *rts = aaaqi_M->childSfunctions[1];
    sfcnOutputs(rts, 1);
  }

  /* ok to acquire for <S7>/S-Function */
  aaaqi_DW.SFunction_IWORK.AcquireOK = 1;

  /* ok to acquire for <S8>/S-Function */
  aaaqi_DW.SFunction_IWORK_f.AcquireOK = 1;

  /* ok to acquire for <S9>/S-Function */
  aaaqi_DW.SFunction_IWORK_i.AcquireOK = 1;

  /* ok to acquire for <S10>/S-Function */
  aaaqi_DW.SFunction_IWORK_h.AcquireOK = 1;

  /* ok to acquire for <S11>/S-Function */
  aaaqi_DW.SFunction_IWORK_i5.AcquireOK = 1;

  /* ok to acquire for <S12>/S-Function */
  aaaqi_DW.SFunction_IWORK_b.AcquireOK = 1;

  /* Sum: '<Root>/Add1' */
  aaaqi_B.Add1 = aaaqi_B.DataTypeConversion27[0] - aaaqi_B.DataTypeConversion27
    [2];

  /* RelationalOperator: '<S1>/Compare' incorporates:
   *  Constant: '<S1>/Constant'
   */
  aaaqi_B.Compare_kp = (aaaqi_B.Add1 <= aaaqi_P.CompareToConstant_const);

  /* RelationalOperator: '<S2>/Compare' incorporates:
   *  Constant: '<S2>/Constant'
   */
  aaaqi_B.Compare_cr = (aaaqi_B.Add1 >= aaaqi_P.CompareToConstant1_const_o);

  /* DataTypeConversion: '<Root>/Data Type Conversion10' */
  memcpy(&aaaqi_B.DataTypeConversion10[0], &aaaqi_B.MultiportSwitch[0], sizeof
         (real_T) << 3U);

  /* Logic: '<Root>/Logical Operator' */
  aaaqi_B.LogicalOperator_m = (aaaqi_B.Compare_kp && aaaqi_B.Compare_cr);

  /* Memory: '<Root>/Memory2' */
  aaaqi_B.Memory2 = aaaqi_DW.Memory2_PreviousInput;

  /* Logic: '<Root>/Logical Operator5' */
  aaaqi_B.LogicalOperator5 = (aaaqi_B.LogicalOperator_m || (aaaqi_B.Memory2 !=
    0.0));

  /* Logic: '<Root>/Logical Operator6' incorporates:
   *  Constant: '<Root>/shiyabuchang'
   */
  aaaqi_B.LogicalOperator6 = (aaaqi_B.LogicalOperator5 &&
    (aaaqi_P.shiyabuchang_Value != 0.0));

  /* Switch: '<Root>/Switch' incorporates:
   *  Constant: '<Root>/Constant1'
   *  Constant: '<Root>/Constant3'
   */
  if (aaaqi_B.LogicalOperator6) {
    aaaqi_B.Switch_l = aaaqi_P.Constant1_Value;
  } else {
    aaaqi_B.Switch_l = aaaqi_P.Constant3_Value;
  }

  /* End of Switch: '<Root>/Switch' */

  /* DataTypeConversion: '<Root>/Data Type Conversion30' */
  aaaqi_B.DataTypeConversion30 = aaaqi_B.Switch_l;

  /* DataTypeConversion: '<Root>/Data Type Conversion31' incorporates:
   *  Constant: '<Root>/xuanjinjianya'
   */
  aaaqi_B.DataTypeConversion31 = aaaqi_P.xuanjinjianya_Value;

  /* MultiPortSwitch: '<S14>/Multiport Switch2' incorporates:
   *  MultiPortSwitch: '<S14>/Multiport Switch3'
   */
  if ((int32_T)aaaqi_B.DataTypeConversion4 == 0) {
    aaaqi_B.MultiportSwitch2 = aaaqi_B.kaigaikaishi;
    aaaqi_B.MultiportSwitch3 = aaaqi_B.guangaikaishi;
  } else {
    aaaqi_B.MultiportSwitch2 = aaaqi_B.kaigaikaishi_k;
    aaaqi_B.MultiportSwitch3 = aaaqi_B.guangaikaishi_j;
  }

  /* End of MultiPortSwitch: '<S14>/Multiport Switch2' */

  /* DataTypeConversion: '<Root>/Data Type Conversion32' */
  aaaqi_B.DataTypeConversion32 = aaaqi_B.MultiportSwitch2;

  /* DataTypeConversion: '<Root>/Data Type Conversion33' */
  aaaqi_B.DataTypeConversion33 = aaaqi_B.MultiportSwitch3;

  /* DataTypeConversion: '<S17>/Data Type Conversion' incorporates:
   *  Constant: '<S17>/Constant'
   */
  u0 = floor(aaaqi_P.Constant_Value_o);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  aaaqi_B.DataTypeConversion_n = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)
    (uint8_T)-u0 : (int32_T)(uint8_T)u0);

  /* End of DataTypeConversion: '<S17>/Data Type Conversion' */

  /* DataTypeConversion: '<S17>/Data Type Conversion1' incorporates:
   *  Constant: '<S17>/Constant1'
   */
  u0 = floor(aaaqi_P.Constant1_Value_jd);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  aaaqi_B.DataTypeConversion1_p = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
    -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

  /* End of DataTypeConversion: '<S17>/Data Type Conversion1' */

  /* DataTypeConversion: '<S17>/Data Type Conversion2' incorporates:
   *  Constant: '<S17>/Constant2'
   */
  u0 = floor(aaaqi_P.Constant2_Value_a4);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  aaaqi_B.DataTypeConversion2_c = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
    -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

  /* End of DataTypeConversion: '<S17>/Data Type Conversion2' */

  /* DataTypeConversion: '<S17>/Data Type Conversion3' incorporates:
   *  Constant: '<S17>/Constant3'
   */
  u0 = floor(aaaqi_P.Constant3_Value_d);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  aaaqi_B.DataTypeConversion3_g = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
    -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

  /* End of DataTypeConversion: '<S17>/Data Type Conversion3' */

  /* DataTypeConversion: '<S17>/Data Type Conversion4' incorporates:
   *  Constant: '<S17>/Constant4'
   */
  u0 = floor(aaaqi_P.Constant4_Value_d);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  aaaqi_B.DataTypeConversion4_b = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
    -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

  /* End of DataTypeConversion: '<S17>/Data Type Conversion4' */

  /* DataTypeConversion: '<S17>/Data Type Conversion5' incorporates:
   *  Constant: '<S17>/Constant5'
   */
  u0 = floor(aaaqi_P.Constant5_Value_l);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  aaaqi_B.DataTypeConversion5_i = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
    -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

  /* End of DataTypeConversion: '<S17>/Data Type Conversion5' */

  /* DataTypeConversion: '<S17>/Data Type Conversion6' incorporates:
   *  Constant: '<S17>/Constant6'
   */
  u0 = floor(aaaqi_P.Constant6_Value_j);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  aaaqi_B.DataTypeConversion6_b = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
    -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

  /* End of DataTypeConversion: '<S17>/Data Type Conversion6' */

  /* DataTypeConversion: '<S17>/Data Type Conversion7' incorporates:
   *  Constant: '<S17>/Constant7'
   */
  u0 = floor(aaaqi_P.Constant7_Value_d);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  aaaqi_B.DataTypeConversion7_e = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
    -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

  /* End of DataTypeConversion: '<S17>/Data Type Conversion7' */

  /* ManualSwitch: '<S17>/Manual Switch2' */
  if (aaaqi_P.ManualSwitch2_CurrentSetting == 1) {
    aaaqi_B.ManualSwitch2[0] = aaaqi_B.DataTypeConversion_n;
    aaaqi_B.ManualSwitch2[1] = aaaqi_B.DataTypeConversion1_p;
    aaaqi_B.ManualSwitch2[2] = aaaqi_B.DataTypeConversion2_c;
    aaaqi_B.ManualSwitch2[3] = aaaqi_B.DataTypeConversion3_g;
    aaaqi_B.ManualSwitch2[4] = aaaqi_B.DataTypeConversion4_b;
    aaaqi_B.ManualSwitch2[5] = aaaqi_B.DataTypeConversion5_i;
    aaaqi_B.ManualSwitch2[6] = aaaqi_B.DataTypeConversion6_b;
    aaaqi_B.ManualSwitch2[7] = aaaqi_B.DataTypeConversion7_e;
  } else {
    /* DataTypeConversion: '<S17>/Data Type Conversion30' incorporates:
     *  Constant: '<S17>/Constant30'
     */
    u0 = floor(aaaqi_P.Constant30_Value);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaaqi_B.DataTypeConversion30_e = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion30' */

    /* DataTypeConversion: '<S17>/Data Type Conversion31' incorporates:
     *  Constant: '<S17>/Constant31'
     */
    u0 = floor(aaaqi_P.Constant31_Value);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaaqi_B.DataTypeConversion31_d = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion31' */

    /* DataTypeConversion: '<S17>/Data Type Conversion24' incorporates:
     *  Constant: '<S17>/Constant24'
     */
    u0 = floor(aaaqi_P.Constant24_Value_b);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaaqi_B.DataTypeConversion24_m = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion24' */

    /* DataTypeConversion: '<S17>/Data Type Conversion25' incorporates:
     *  Constant: '<S17>/Constant25'
     */
    u0 = floor(aaaqi_P.Constant25_Value_e);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaaqi_B.DataTypeConversion25_h = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion25' */

    /* DataTypeConversion: '<S17>/Data Type Conversion26' incorporates:
     *  Constant: '<S17>/Constant26'
     */
    u0 = floor(aaaqi_P.Constant26_Value_a);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaaqi_B.DataTypeConversion26_j = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion26' */

    /* DataTypeConversion: '<S17>/Data Type Conversion27' incorporates:
     *  Constant: '<S17>/Constant27'
     */
    u0 = floor(aaaqi_P.Constant27_Value_h);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaaqi_B.DataTypeConversion27_i = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion27' */

    /* DataTypeConversion: '<S17>/Data Type Conversion28' incorporates:
     *  Constant: '<S17>/Constant28'
     */
    u0 = floor(aaaqi_P.Constant28_Value_e);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaaqi_B.DataTypeConversion28_m = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion28' */

    /* DataTypeConversion: '<S17>/Data Type Conversion29' incorporates:
     *  Constant: '<S17>/Constant29'
     */
    u0 = floor(aaaqi_P.Constant29_Value_k);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaaqi_B.DataTypeConversion29_f = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion29' */
    aaaqi_B.ManualSwitch2[0] = aaaqi_B.DataTypeConversion30_e;
    aaaqi_B.ManualSwitch2[1] = aaaqi_B.DataTypeConversion31_d;
    aaaqi_B.ManualSwitch2[2] = aaaqi_B.DataTypeConversion24_m;
    aaaqi_B.ManualSwitch2[3] = aaaqi_B.DataTypeConversion25_h;
    aaaqi_B.ManualSwitch2[4] = aaaqi_B.DataTypeConversion26_j;
    aaaqi_B.ManualSwitch2[5] = aaaqi_B.DataTypeConversion27_i;
    aaaqi_B.ManualSwitch2[6] = aaaqi_B.DataTypeConversion28_m;
    aaaqi_B.ManualSwitch2[7] = aaaqi_B.DataTypeConversion29_f;
  }

  /* End of ManualSwitch: '<S17>/Manual Switch2' */
  /* Bit Packing: <S17>/CAN bit-packing 2 */
  {
    uint32_T *y = (uint32_T *)&aaaqi_B.CANbitpacking2;
    y[0] =
      ((uint32_T)(aaaqi_B.ManualSwitch2[0] & 0xff) |
       ((uint32_T)(aaaqi_B.ManualSwitch2[1] & 0xff) << 8) |
       ((uint32_T)(aaaqi_B.ManualSwitch2[2] & 0xff) << 16) |
       ((uint32_T)(aaaqi_B.ManualSwitch2[3] & 0xff) << 24));
    y[1] =
      ((uint32_T)(aaaqi_B.ManualSwitch2[4] & 0xff) |
       ((uint32_T)(aaaqi_B.ManualSwitch2[5] & 0xff) << 8) |
       ((uint32_T)(aaaqi_B.ManualSwitch2[6] & 0xff) << 16) |
       ((uint32_T)(aaaqi_B.ManualSwitch2[7] & 0xff) << 24));
  }

  /* S-Function (canac2objsendx): '<S17>/kaiguangaiweiyi3402Send' */
  {
    /*------------ S-Function Block: <S17>/kaiguangaiweiyi3402Send ------------*/
    if (!g_xpccanac2busstatusx[1-1]) {
      int_T stat;
      EFLAGS_T flags;
      flags = saveAndDisableInterrupts();
      stat = CANPC_write_object2_mbx( 1, 1, 8, (uint8_T *)
        &aaaqi_B.CANbitpacking2);
      restoreInterrupts(flags);
      ;
    }
  }

  /* ManualSwitch: '<S17>/Manual Switch4' */
  if (aaaqi_P.ManualSwitch4_CurrentSetting == 1) {
    aaaqi_B.ManualSwitch4[0] = aaaqi_B.DataTypeConversion_n;
    aaaqi_B.ManualSwitch4[1] = aaaqi_B.DataTypeConversion1_p;
    aaaqi_B.ManualSwitch4[2] = aaaqi_B.DataTypeConversion2_c;
    aaaqi_B.ManualSwitch4[3] = aaaqi_B.DataTypeConversion3_g;
    aaaqi_B.ManualSwitch4[4] = aaaqi_B.DataTypeConversion4_b;
    aaaqi_B.ManualSwitch4[5] = aaaqi_B.DataTypeConversion5_i;
    aaaqi_B.ManualSwitch4[6] = aaaqi_B.DataTypeConversion6_b;
    aaaqi_B.ManualSwitch4[7] = aaaqi_B.DataTypeConversion7_e;
  } else {
    /* DataTypeConversion: '<S17>/Data Type Conversion46' incorporates:
     *  Constant: '<S17>/Constant46'
     */
    u0 = floor(aaaqi_P.Constant46_Value);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaaqi_B.DataTypeConversion46 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion46' */

    /* DataTypeConversion: '<S17>/Data Type Conversion47' incorporates:
     *  Constant: '<S17>/Constant47'
     */
    u0 = floor(aaaqi_P.Constant47_Value);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaaqi_B.DataTypeConversion47 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion47' */

    /* DataTypeConversion: '<S17>/Data Type Conversion40' incorporates:
     *  Constant: '<S17>/Constant40'
     */
    u0 = floor(aaaqi_P.Constant40_Value);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaaqi_B.DataTypeConversion40 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion40' */

    /* DataTypeConversion: '<S17>/Data Type Conversion41' incorporates:
     *  Constant: '<S17>/Constant41'
     */
    u0 = floor(aaaqi_P.Constant41_Value);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaaqi_B.DataTypeConversion41 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion41' */

    /* DataTypeConversion: '<S17>/Data Type Conversion42' incorporates:
     *  Constant: '<S17>/Constant42'
     */
    u0 = floor(aaaqi_P.Constant42_Value);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaaqi_B.DataTypeConversion42 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion42' */

    /* DataTypeConversion: '<S17>/Data Type Conversion43' incorporates:
     *  Constant: '<S17>/Constant43'
     */
    u0 = floor(aaaqi_P.Constant43_Value);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaaqi_B.DataTypeConversion43 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion43' */

    /* DataTypeConversion: '<S17>/Data Type Conversion44' incorporates:
     *  Constant: '<S17>/Constant44'
     */
    u0 = floor(aaaqi_P.Constant44_Value);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaaqi_B.DataTypeConversion44 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion44' */

    /* DataTypeConversion: '<S17>/Data Type Conversion45' incorporates:
     *  Constant: '<S17>/Constant45'
     */
    u0 = floor(aaaqi_P.Constant45_Value);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaaqi_B.DataTypeConversion45 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion45' */
    aaaqi_B.ManualSwitch4[0] = aaaqi_B.DataTypeConversion46;
    aaaqi_B.ManualSwitch4[1] = aaaqi_B.DataTypeConversion47;
    aaaqi_B.ManualSwitch4[2] = aaaqi_B.DataTypeConversion40;
    aaaqi_B.ManualSwitch4[3] = aaaqi_B.DataTypeConversion41;
    aaaqi_B.ManualSwitch4[4] = aaaqi_B.DataTypeConversion42;
    aaaqi_B.ManualSwitch4[5] = aaaqi_B.DataTypeConversion43;
    aaaqi_B.ManualSwitch4[6] = aaaqi_B.DataTypeConversion44;
    aaaqi_B.ManualSwitch4[7] = aaaqi_B.DataTypeConversion45;
  }

  /* End of ManualSwitch: '<S17>/Manual Switch4' */
  /* Bit Packing: <S17>/CAN bit-packing 4 */
  {
    uint32_T *y = (uint32_T *)&aaaqi_B.CANbitpacking4;
    y[0] =
      ((uint32_T)(aaaqi_B.ManualSwitch4[0] & 0xff) |
       ((uint32_T)(aaaqi_B.ManualSwitch4[1] & 0xff) << 8) |
       ((uint32_T)(aaaqi_B.ManualSwitch4[2] & 0xff) << 16) |
       ((uint32_T)(aaaqi_B.ManualSwitch4[3] & 0xff) << 24));
    y[1] =
      ((uint32_T)(aaaqi_B.ManualSwitch4[4] & 0xff) |
       ((uint32_T)(aaaqi_B.ManualSwitch4[5] & 0xff) << 8) |
       ((uint32_T)(aaaqi_B.ManualSwitch4[6] & 0xff) << 16) |
       ((uint32_T)(aaaqi_B.ManualSwitch4[7] & 0xff) << 24));
  }

  /* S-Function (canac2objsendx): '<S17>/liuliangji_fuqiuyeweiji3402Send' */
  {
    /*------------ S-Function Block: <S17>/liuliangji_fuqiuyeweiji3402Send ------------*/
    if (!g_xpccanac2busstatusx[1-1]) {
      int_T stat;
      EFLAGS_T flags;
      flags = saveAndDisableInterrupts();
      stat = CANPC_write_object2_mbx( 1, 3, 8, (uint8_T *)
        &aaaqi_B.CANbitpacking4);
      restoreInterrupts(flags);
      ;
    }
  }

  /* ManualSwitch: '<S17>/Manual Switch' */
  if (aaaqi_P.ManualSwitch_CurrentSetting == 1) {
    aaaqi_B.ManualSwitch[0] = aaaqi_B.DataTypeConversion_n;
    aaaqi_B.ManualSwitch[1] = aaaqi_B.DataTypeConversion1_p;
    aaaqi_B.ManualSwitch[2] = aaaqi_B.DataTypeConversion2_c;
    aaaqi_B.ManualSwitch[3] = aaaqi_B.DataTypeConversion3_g;
    aaaqi_B.ManualSwitch[4] = aaaqi_B.DataTypeConversion4_b;
    aaaqi_B.ManualSwitch[5] = aaaqi_B.DataTypeConversion5_i;
    aaaqi_B.ManualSwitch[6] = aaaqi_B.DataTypeConversion6_b;
    aaaqi_B.ManualSwitch[7] = aaaqi_B.DataTypeConversion7_e;
  } else {
    /* DataTypeConversion: '<S17>/Data Type Conversion8' incorporates:
     *  Constant: '<S17>/Constant8'
     */
    u0 = floor(aaaqi_P.Constant8_Value_m);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaaqi_B.DataTypeConversion8_e = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion8' */

    /* DataTypeConversion: '<S17>/Data Type Conversion9' incorporates:
     *  Constant: '<S17>/Constant9'
     */
    u0 = floor(aaaqi_P.Constant9_Value_k);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaaqi_B.DataTypeConversion9_b = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion9' */

    /* DataTypeConversion: '<S17>/Data Type Conversion10' incorporates:
     *  Constant: '<S17>/Constant10'
     */
    u0 = floor(aaaqi_P.Constant10_Value_e);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaaqi_B.DataTypeConversion10_c = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion10' */

    /* DataTypeConversion: '<S17>/Data Type Conversion11' incorporates:
     *  Constant: '<S17>/Constant11'
     */
    u0 = floor(aaaqi_P.Constant11_Value_e);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaaqi_B.DataTypeConversion11_l = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion11' */

    /* DataTypeConversion: '<S17>/Data Type Conversion12' incorporates:
     *  Constant: '<S17>/Constant12'
     */
    u0 = floor(aaaqi_P.Constant12_Value_nm);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaaqi_B.DataTypeConversion12_i = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion12' */

    /* DataTypeConversion: '<S17>/Data Type Conversion13' incorporates:
     *  Constant: '<S17>/Constant13'
     */
    u0 = floor(aaaqi_P.Constant13_Value_n);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaaqi_B.DataTypeConversion13_m = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion13' */

    /* DataTypeConversion: '<S17>/Data Type Conversion14' incorporates:
     *  Constant: '<S17>/Constant14'
     */
    u0 = floor(aaaqi_P.Constant14_Value_i);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaaqi_B.DataTypeConversion14_h = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion14' */

    /* DataTypeConversion: '<S17>/Data Type Conversion15' incorporates:
     *  Constant: '<S17>/Constant15'
     */
    u0 = floor(aaaqi_P.Constant15_Value_o);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaaqi_B.DataTypeConversion15_k = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion15' */
    aaaqi_B.ManualSwitch[0] = aaaqi_B.DataTypeConversion8_e;
    aaaqi_B.ManualSwitch[1] = aaaqi_B.DataTypeConversion9_b;
    aaaqi_B.ManualSwitch[2] = aaaqi_B.DataTypeConversion10_c;
    aaaqi_B.ManualSwitch[3] = aaaqi_B.DataTypeConversion11_l;
    aaaqi_B.ManualSwitch[4] = aaaqi_B.DataTypeConversion12_i;
    aaaqi_B.ManualSwitch[5] = aaaqi_B.DataTypeConversion13_m;
    aaaqi_B.ManualSwitch[6] = aaaqi_B.DataTypeConversion14_h;
    aaaqi_B.ManualSwitch[7] = aaaqi_B.DataTypeConversion15_k;
  }

  /* End of ManualSwitch: '<S17>/Manual Switch' */
  /* Bit Packing: <S17>/CAN bit-packing  */
  {
    uint32_T *y = (uint32_T *)&aaaqi_B.CANbitpacking;
    y[0] =
      ((uint32_T)(aaaqi_B.ManualSwitch[0] & 0xff) |
       ((uint32_T)(aaaqi_B.ManualSwitch[1] & 0xff) << 8) |
       ((uint32_T)(aaaqi_B.ManualSwitch[2] & 0xff) << 16) |
       ((uint32_T)(aaaqi_B.ManualSwitch[3] & 0xff) << 24));
    y[1] =
      ((uint32_T)(aaaqi_B.ManualSwitch[4] & 0xff) |
       ((uint32_T)(aaaqi_B.ManualSwitch[5] & 0xff) << 8) |
       ((uint32_T)(aaaqi_B.ManualSwitch[6] & 0xff) << 16) |
       ((uint32_T)(aaaqi_B.ManualSwitch[7] & 0xff) << 24));
  }

  /* S-Function (canac2objsendx): '<S17>/tonggai1808Send' */
  {
    /*------------ S-Function Block: <S17>/tonggai1808Send ------------*/
    if (!g_xpccanac2busstatusx[1-1]) {
      int_T stat;
      EFLAGS_T flags;
      flags = saveAndDisableInterrupts();
      stat = CANPC_write_object_mbx( 1, 0, 8, (uint8_T *)&aaaqi_B.CANbitpacking);
      restoreInterrupts(flags);
      ;
    }
  }

  /* ManualSwitch: '<S17>/Manual Switch1' */
  if (aaaqi_P.ManualSwitch1_CurrentSetting == 1) {
    aaaqi_B.ManualSwitch1[0] = aaaqi_B.DataTypeConversion_n;
    aaaqi_B.ManualSwitch1[1] = aaaqi_B.DataTypeConversion1_p;
    aaaqi_B.ManualSwitch1[2] = aaaqi_B.DataTypeConversion2_c;
    aaaqi_B.ManualSwitch1[3] = aaaqi_B.DataTypeConversion3_g;
    aaaqi_B.ManualSwitch1[4] = aaaqi_B.DataTypeConversion4_b;
    aaaqi_B.ManualSwitch1[5] = aaaqi_B.DataTypeConversion5_i;
    aaaqi_B.ManualSwitch1[6] = aaaqi_B.DataTypeConversion6_b;
    aaaqi_B.ManualSwitch1[7] = aaaqi_B.DataTypeConversion7_e;
  } else {
    /* DataTypeConversion: '<S17>/Data Type Conversion22' incorporates:
     *  Constant: '<S17>/Constant22'
     */
    u0 = floor(aaaqi_P.Constant22_Value_j);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaaqi_B.DataTypeConversion22_l = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion22' */

    /* DataTypeConversion: '<S17>/Data Type Conversion23' incorporates:
     *  Constant: '<S17>/Constant23'
     */
    u0 = floor(aaaqi_P.Constant23_Value_g4);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaaqi_B.DataTypeConversion23_c = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion23' */

    /* DataTypeConversion: '<S17>/Data Type Conversion16' incorporates:
     *  Constant: '<S17>/Constant16'
     */
    u0 = floor(aaaqi_P.Constant16_Value_n);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaaqi_B.DataTypeConversion16_i = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion16' */

    /* DataTypeConversion: '<S17>/Data Type Conversion17' incorporates:
     *  Constant: '<S17>/Constant17'
     */
    u0 = floor(aaaqi_P.Constant17_Value_p);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaaqi_B.DataTypeConversion17_b = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion17' */

    /* DataTypeConversion: '<S17>/Data Type Conversion18' incorporates:
     *  Constant: '<S17>/Constant18'
     */
    u0 = floor(aaaqi_P.Constant18_Value_o);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaaqi_B.DataTypeConversion18_c = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion18' */

    /* DataTypeConversion: '<S17>/Data Type Conversion19' incorporates:
     *  Constant: '<S17>/Constant19'
     */
    u0 = floor(aaaqi_P.Constant19_Value_ol);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaaqi_B.DataTypeConversion19_m = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion19' */

    /* DataTypeConversion: '<S17>/Data Type Conversion20' incorporates:
     *  Constant: '<S17>/Constant20'
     */
    u0 = floor(aaaqi_P.Constant20_Value_b);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaaqi_B.DataTypeConversion20_n = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion20' */

    /* DataTypeConversion: '<S17>/Data Type Conversion21' incorporates:
     *  Constant: '<S17>/Constant21'
     */
    u0 = floor(aaaqi_P.Constant21_Value_e);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaaqi_B.DataTypeConversion21_l = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion21' */
    aaaqi_B.ManualSwitch1[0] = aaaqi_B.DataTypeConversion22_l;
    aaaqi_B.ManualSwitch1[1] = aaaqi_B.DataTypeConversion23_c;
    aaaqi_B.ManualSwitch1[2] = aaaqi_B.DataTypeConversion16_i;
    aaaqi_B.ManualSwitch1[3] = aaaqi_B.DataTypeConversion17_b;
    aaaqi_B.ManualSwitch1[4] = aaaqi_B.DataTypeConversion18_c;
    aaaqi_B.ManualSwitch1[5] = aaaqi_B.DataTypeConversion19_m;
    aaaqi_B.ManualSwitch1[6] = aaaqi_B.DataTypeConversion20_n;
    aaaqi_B.ManualSwitch1[7] = aaaqi_B.DataTypeConversion21_l;
  }

  /* End of ManualSwitch: '<S17>/Manual Switch1' */
  /* Bit Packing: <S17>/CAN bit-packing 1 */
  {
    uint32_T *y = (uint32_T *)&aaaqi_B.CANbitpacking1;
    y[0] =
      ((uint32_T)(aaaqi_B.ManualSwitch1[0] & 0xff) |
       ((uint32_T)(aaaqi_B.ManualSwitch1[1] & 0xff) << 8) |
       ((uint32_T)(aaaqi_B.ManualSwitch1[2] & 0xff) << 16) |
       ((uint32_T)(aaaqi_B.ManualSwitch1[3] & 0xff) << 24));
    y[1] =
      ((uint32_T)(aaaqi_B.ManualSwitch1[4] & 0xff) |
       ((uint32_T)(aaaqi_B.ManualSwitch1[5] & 0xff) << 8) |
       ((uint32_T)(aaaqi_B.ManualSwitch1[6] & 0xff) << 16) |
       ((uint32_T)(aaaqi_B.ManualSwitch1[7] & 0xff) << 24));
  }

  /* S-Function (canac2objsendx): '<S17>/tonggai3402Send' */
  {
    /*------------ S-Function Block: <S17>/tonggai3402Send ------------*/
    if (!g_xpccanac2busstatusx[1-1]) {
      int_T stat;
      EFLAGS_T flags;
      flags = saveAndDisableInterrupts();
      stat = CANPC_write_object2_mbx( 1, 0, 8, (uint8_T *)
        &aaaqi_B.CANbitpacking1);
      restoreInterrupts(flags);
      ;
    }
  }

  /* ManualSwitch: '<S17>/Manual Switch3' */
  if (aaaqi_P.ManualSwitch3_CurrentSetting == 1) {
    aaaqi_B.ManualSwitch3[0] = aaaqi_B.DataTypeConversion_n;
    aaaqi_B.ManualSwitch3[1] = aaaqi_B.DataTypeConversion1_p;
    aaaqi_B.ManualSwitch3[2] = aaaqi_B.DataTypeConversion2_c;
    aaaqi_B.ManualSwitch3[3] = aaaqi_B.DataTypeConversion3_g;
    aaaqi_B.ManualSwitch3[4] = aaaqi_B.DataTypeConversion4_b;
    aaaqi_B.ManualSwitch3[5] = aaaqi_B.DataTypeConversion5_i;
    aaaqi_B.ManualSwitch3[6] = aaaqi_B.DataTypeConversion6_b;
    aaaqi_B.ManualSwitch3[7] = aaaqi_B.DataTypeConversion7_e;
  } else {
    /* DataTypeConversion: '<S17>/Data Type Conversion38' incorporates:
     *  Constant: '<S17>/Constant38'
     */
    u0 = floor(aaaqi_P.Constant38_Value);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaaqi_B.DataTypeConversion38 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion38' */

    /* DataTypeConversion: '<S17>/Data Type Conversion39' incorporates:
     *  Constant: '<S17>/Constant39'
     */
    u0 = floor(aaaqi_P.Constant39_Value);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaaqi_B.DataTypeConversion39 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion39' */

    /* DataTypeConversion: '<S17>/Data Type Conversion32' incorporates:
     *  Constant: '<S17>/Constant32'
     */
    u0 = floor(aaaqi_P.Constant32_Value);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaaqi_B.DataTypeConversion32_g = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion32' */

    /* DataTypeConversion: '<S17>/Data Type Conversion33' incorporates:
     *  Constant: '<S17>/Constant33'
     */
    u0 = floor(aaaqi_P.Constant33_Value);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaaqi_B.DataTypeConversion33_g = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion33' */

    /* DataTypeConversion: '<S17>/Data Type Conversion34' incorporates:
     *  Constant: '<S17>/Constant34'
     */
    u0 = floor(aaaqi_P.Constant34_Value);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaaqi_B.DataTypeConversion34_i = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion34' */

    /* DataTypeConversion: '<S17>/Data Type Conversion35' incorporates:
     *  Constant: '<S17>/Constant35'
     */
    u0 = floor(aaaqi_P.Constant35_Value);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaaqi_B.DataTypeConversion35_a = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion35' */

    /* DataTypeConversion: '<S17>/Data Type Conversion36' incorporates:
     *  Constant: '<S17>/Constant36'
     */
    u0 = floor(aaaqi_P.Constant36_Value);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaaqi_B.DataTypeConversion36 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion36' */

    /* DataTypeConversion: '<S17>/Data Type Conversion37' incorporates:
     *  Constant: '<S17>/Constant37'
     */
    u0 = floor(aaaqi_P.Constant37_Value);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaaqi_B.DataTypeConversion37 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion37' */
    aaaqi_B.ManualSwitch3[0] = aaaqi_B.DataTypeConversion38;
    aaaqi_B.ManualSwitch3[1] = aaaqi_B.DataTypeConversion39;
    aaaqi_B.ManualSwitch3[2] = aaaqi_B.DataTypeConversion32_g;
    aaaqi_B.ManualSwitch3[3] = aaaqi_B.DataTypeConversion33_g;
    aaaqi_B.ManualSwitch3[4] = aaaqi_B.DataTypeConversion34_i;
    aaaqi_B.ManualSwitch3[5] = aaaqi_B.DataTypeConversion35_a;
    aaaqi_B.ManualSwitch3[6] = aaaqi_B.DataTypeConversion36;
    aaaqi_B.ManualSwitch3[7] = aaaqi_B.DataTypeConversion37;
  }

  /* End of ManualSwitch: '<S17>/Manual Switch3' */
  /* Bit Packing: <S17>/CAN bit-packing 3 */
  {
    uint32_T *y = (uint32_T *)&aaaqi_B.CANbitpacking3;
    y[0] =
      ((uint32_T)(aaaqi_B.ManualSwitch3[0] & 0xff) |
       ((uint32_T)(aaaqi_B.ManualSwitch3[1] & 0xff) << 8) |
       ((uint32_T)(aaaqi_B.ManualSwitch3[2] & 0xff) << 16) |
       ((uint32_T)(aaaqi_B.ManualSwitch3[3] & 0xff) << 24));
    y[1] =
      ((uint32_T)(aaaqi_B.ManualSwitch3[4] & 0xff) |
       ((uint32_T)(aaaqi_B.ManualSwitch3[5] & 0xff) << 8) |
       ((uint32_T)(aaaqi_B.ManualSwitch3[6] & 0xff) << 16) |
       ((uint32_T)(aaaqi_B.ManualSwitch3[7] & 0xff) << 24));
  }

  /* S-Function (canac2objsendx): '<S17>/yalichuanganqi3402Send' */
  {
    /*------------ S-Function Block: <S17>/yalichuanganqi3402Send ------------*/
    if (!g_xpccanac2busstatusx[1-1]) {
      int_T stat;
      EFLAGS_T flags;
      flags = saveAndDisableInterrupts();
      stat = CANPC_write_object2_mbx( 1, 2, 8, (uint8_T *)
        &aaaqi_B.CANbitpacking3);
      restoreInterrupts(flags);
      ;
    }
  }

  /* Level2 S-Function Block: '<S17>/Setup ' (canac2pcisetupx) */
  {
    SimStruct *rts = aaaqi_M->childSfunctions[2];
    sfcnOutputs(rts, 1);
  }

  /* Level2 S-Function Block: '<Root>/PCI-1784' (adpci_1784) */
  {
    SimStruct *rts = aaaqi_M->childSfunctions[3];
    sfcnOutputs(rts, 1);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion2' */
  aaaqi_B.DataTypeConversion2_a = aaaqi_B.PCI1784_o1;

  /* DataTypeConversion: '<Root>/Data Type Conversion29' */
  aaaqi_B.DataTypeConversion29 = aaaqi_B.PCI1784_o2;
}

/* Model update function */
static void aaaqi_update(void)
{
  /* Update for Memory: '<Root>/Memory' */
  aaaqi_DW.Memory_PreviousInput = aaaqi_B.DataTypeConversion32;

  /* Update for Memory: '<Root>/Memory1' */
  aaaqi_DW.Memory1_PreviousInput = aaaqi_B.DataTypeConversion33;

  /* Update for Memory: '<S22>/Memory' */
  aaaqi_DW.Memory_PreviousInput_d = aaaqi_B.Switch2;

  /* Update for Memory: '<S22>/Memory1' */
  aaaqi_DW.Memory1_PreviousInput_d = aaaqi_B.Switch;

  /* Update for Memory: '<S23>/Memory' */
  aaaqi_DW.Memory_PreviousInput_c = aaaqi_B.Switch2_a;

  /* Update for Memory: '<S24>/Memory' */
  aaaqi_DW.Memory_PreviousInput_m = aaaqi_B.Switch2_m;

  /* Update for Memory: '<S24>/Memory1' */
  aaaqi_DW.Memory1_PreviousInput_m = aaaqi_B.Switch_i;

  /* Update for Memory: '<S23>/Memory1' */
  aaaqi_DW.Memory1_PreviousInput_k = aaaqi_B.Switch_g;

  /* Update for Memory: '<Root>/Memory2' */
  aaaqi_DW.Memory2_PreviousInput = aaaqi_B.Switch_l;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++aaaqi_M->Timing.clockTick0)) {
    ++aaaqi_M->Timing.clockTickH0;
  }

  aaaqi_M->Timing.t[0] = aaaqi_M->Timing.clockTick0 * aaaqi_M->Timing.stepSize0
    + aaaqi_M->Timing.clockTickH0 * aaaqi_M->Timing.stepSize0 * 4294967296.0;

  {
    /* Update absolute timer for sample time: [0.002s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++aaaqi_M->Timing.clockTick1)) {
      ++aaaqi_M->Timing.clockTickH1;
    }

    aaaqi_M->Timing.t[1] = aaaqi_M->Timing.clockTick1 *
      aaaqi_M->Timing.stepSize1 + aaaqi_M->Timing.clockTickH1 *
      aaaqi_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Model initialize function */
static void aaaqi_initialize(void)
{
  /* Start for Constant: '<S21>/fa11_1' */
  aaaqi_B.fa11_1 = aaaqi_P.fa11_1_Value;

  /* Start for Constant: '<S21>/fa11_2' */
  aaaqi_B.fa11_2 = aaaqi_P.fa11_2_Value;

  /* Start for Constant: '<S21>/fa11_5' */
  aaaqi_B.fa11_5 = aaaqi_P.fa11_5_Value;

  /* Start for Constant: '<S21>/fa20' */
  aaaqi_B.fa20 = aaaqi_P.fa20_Value;

  /* Start for Constant: '<S21>/fa16_1' */
  aaaqi_B.fa16_1 = aaaqi_P.fa16_1_Value;

  /* Start for Constant: '<S21>/fa3' */
  aaaqi_B.fa3 = aaaqi_P.fa3_Value;

  /* Start for Constant: '<S21>/fa21' */
  aaaqi_B.fa21 = aaaqi_P.fa21_Value;

  /* Start for Constant: '<S21>/xuansongmingling' */
  aaaqi_B.xuansongmingling = aaaqi_P.xuansongmingling_Value;

  /* Start for Constant: '<S21>/xuanjinmingling' */
  aaaqi_B.xuanjinmingling = aaaqi_P.xuanjinmingling_Value;

  /* Start for Constant: '<S21>/suodingmingling' */
  aaaqi_B.suodingmingling = aaaqi_P.suodingmingling_Value;

  /* Start for Constant: '<S21>/jiesuomingling' */
  aaaqi_B.jiesuomingling = aaaqi_P.jiesuomingling_Value;

  /* Start for Constant: '<S21>/fa18_1' */
  aaaqi_B.fa18_1 = aaaqi_P.fa18_1_Value;

  /* Start for Constant: '<S21>/fa18_2' */
  aaaqi_B.fa18_2 = aaaqi_P.fa18_2_Value;

  /* Start for Constant: '<S21>/fa18_3' */
  aaaqi_B.fa18_3 = aaaqi_P.fa18_3_Value;

  /* Start for Constant: '<S21>/fa18_4' */
  aaaqi_B.fa18_4 = aaaqi_P.fa18_4_Value;

  /* Start for Constant: '<S21>/fa_kgg' */
  aaaqi_B.fa_kgg = aaaqi_P.fa_kgg_Value;

  /* Start for Constant: '<Root>/jiting' */
  aaaqi_B.jiting = aaaqi_P.jiting_Value;

  /* Start for Enabled SubSystem: '<Root>/jinjichuli' */
  aaaqi_DW.jinjichuli_MODE = false;

  /* End of Start for SubSystem: '<Root>/jinjichuli' */
  /* Start for Constant: '<Root>/水舱最大压力' */
  aaaqi_B.u = aaaqi_P._Value;

  /* Start for Constant: '<Root>/凸膜上下腔最小压力' */
  aaaqi_B.u_c = aaaqi_P._Value_k;

  /* Start for Constant: '<Root>/凸膜上下腔最大压力' */
  aaaqi_B.u_m = aaaqi_P._Value_g;

  /* Start for Enabled SubSystem: '<S14>/zidong' */
  aaaqi_DW.zidong_MODE = false;

  /* Start for FromWorkspace: '<S42>/FromWs' */
  {
    static real_T pTimeValues0[] = { 0.0, 4.0, 4.0, 6.0, 6.0, 10.0 } ;

    static real_T pDataValues0[] = { 0.0, 0.0, 1.0, 1.0, 0.0, 0.0 } ;

    aaaqi_DW.FromWs_PWORK.TimePtr = (void *) pTimeValues0;
    aaaqi_DW.FromWs_PWORK.DataPtr = (void *) pDataValues0;
    aaaqi_DW.FromWs_IWORK.PrevIndex = 0;
  }

  /* Start for FromWorkspace: '<S43>/FromWs' */
  {
    static real_T pTimeValues0[] = { 0.0, 4.0, 4.0, 6.0, 6.0, 10.0 } ;

    static real_T pDataValues0[] = { 0.0, 0.0, 1.0, 1.0, 0.0, 0.0 } ;

    aaaqi_DW.FromWs_PWORK_e.TimePtr = (void *) pTimeValues0;
    aaaqi_DW.FromWs_PWORK_e.DataPtr = (void *) pDataValues0;
    aaaqi_DW.FromWs_IWORK_o.PrevIndex = 0;
  }

  /* Start for FromWorkspace: '<S44>/FromWs' */
  {
    static real_T pTimeValues0[] = { 0.0, 4.0, 4.0, 6.0, 6.0, 10.0 } ;

    static real_T pDataValues0[] = { 0.0, 0.0, 1.0, 1.0, 0.0, 0.0 } ;

    aaaqi_DW.FromWs_PWORK_p.TimePtr = (void *) pTimeValues0;
    aaaqi_DW.FromWs_PWORK_p.DataPtr = (void *) pDataValues0;
    aaaqi_DW.FromWs_IWORK_f.PrevIndex = 0;
  }

  /* Start for FromWorkspace: '<S45>/FromWs' */
  {
    static real_T pTimeValues0[] = { 0.0, 4.0, 4.0, 6.0, 6.0, 10.0 } ;

    static real_T pDataValues0[] = { 0.0, 0.0, 1.0, 1.0, 0.0, 0.0 } ;

    aaaqi_DW.FromWs_PWORK_j.TimePtr = (void *) pTimeValues0;
    aaaqi_DW.FromWs_PWORK_j.DataPtr = (void *) pDataValues0;
    aaaqi_DW.FromWs_IWORK_om.PrevIndex = 0;
  }

  /* End of Start for SubSystem: '<S14>/zidong' */

  /* Start for Constant: '<Root>/带气注水最大压力' */
  aaaqi_B.u_a = aaaqi_P._Value_e;

  /* Start for Enabled SubSystem: '<S14>/shoudong' */
  aaaqi_DW.shoudong_MODE = false;

  /* S-Function Block: <S29>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(5)) == 0) {
      if ((i = rl32eDefScope(5,2)) != 0) {
        printf("Error creating scope 5\n");
      } else {
        rl32eAddSignal(5, rl32eGetSignalNo("Subsystem2/shoudong/Chart/p26"));
        rl32eAddSignal(5, rl32eGetSignalNo("Subsystem2/shoudong/Chart/p27"));
        rl32eSetTargetScopeSigFt(5,rl32eGetSignalNo(
          "Subsystem2/shoudong/Chart/p26"),"%15.6f");
        rl32eSetTargetScopeSigFt(5,rl32eGetSignalNo(
          "Subsystem2/shoudong/Chart/p27"),"%15.6f");
        rl32eSetScope(5, 4, 250);
        rl32eSetScope(5, 5, 0);
        rl32eSetScope(5, 6, 1);
        rl32eSetScope(5, 0, 0);
        rl32eSetScope(5, 3, rl32eGetSignalNo("Subsystem2/shoudong/Chart/p26"));
        rl32eSetScope(5, 1, 0.0);
        rl32eSetScope(5, 2, 0);
        rl32eSetScope(5, 9, 0);
        rl32eSetTargetScope(5, 1, 0.0);
        rl32eSetTargetScope(5, 11, 0.0);
        rl32eSetTargetScope(5, 10, 0.0);
        xpceScopeAcqOK(5, &aaaqi_DW.SFunction_IWORK_k.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(5);
    }
  }

  /* Start for FromWorkspace: '<S33>/FromWs' */
  {
    static real_T pTimeValues0[] = { 0.0, 4.0, 4.0, 6.0, 6.0, 10.0 } ;

    static real_T pDataValues0[] = { 0.0, 0.0, 1.0, 1.0, 0.0, 0.0 } ;

    aaaqi_DW.FromWs_PWORK_i.TimePtr = (void *) pTimeValues0;
    aaaqi_DW.FromWs_PWORK_i.DataPtr = (void *) pDataValues0;
    aaaqi_DW.FromWs_IWORK_oe.PrevIndex = 0;
  }

  /* Start for FromWorkspace: '<S34>/FromWs' */
  {
    static real_T pTimeValues0[] = { 0.0, 4.0, 4.0, 6.0, 6.0, 10.0 } ;

    static real_T pDataValues0[] = { 0.0, 0.0, 1.0, 1.0, 0.0, 0.0 } ;

    aaaqi_DW.FromWs_PWORK_jz.TimePtr = (void *) pTimeValues0;
    aaaqi_DW.FromWs_PWORK_jz.DataPtr = (void *) pDataValues0;
    aaaqi_DW.FromWs_IWORK_f0.PrevIndex = 0;
  }

  /* Start for FromWorkspace: '<S35>/FromWs' */
  {
    static real_T pTimeValues0[] = { 0.0, 4.0, 4.0, 6.0, 6.0, 10.0 } ;

    static real_T pDataValues0[] = { 0.0, 0.0, 1.0, 1.0, 0.0, 0.0 } ;

    aaaqi_DW.FromWs_PWORK_m.TimePtr = (void *) pTimeValues0;
    aaaqi_DW.FromWs_PWORK_m.DataPtr = (void *) pDataValues0;
    aaaqi_DW.FromWs_IWORK_l.PrevIndex = 0;
  }

  /* Start for FromWorkspace: '<S36>/FromWs' */
  {
    static real_T pTimeValues0[] = { 0.0, 4.0, 4.0, 6.0, 6.0, 10.0 } ;

    static real_T pDataValues0[] = { 0.0, 0.0, 1.0, 1.0, 0.0, 0.0 } ;

    aaaqi_DW.FromWs_PWORK_i2.TimePtr = (void *) pTimeValues0;
    aaaqi_DW.FromWs_PWORK_i2.DataPtr = (void *) pDataValues0;
    aaaqi_DW.FromWs_IWORK_d.PrevIndex = 0;
  }

  /* End of Start for SubSystem: '<S14>/shoudong' */

  /* Start for Constant: '<Root>/diancifa11_3' */
  aaaqi_B.diancifa11_3 = aaaqi_P.diancifa11_3_Value;

  /* Start for Constant: '<Root>/diancifa11_4' */
  aaaqi_B.diancifa11_4 = aaaqi_P.diancifa11_4_Value;

  /* Start for Constant: '<Root>/diancifa16_2' */
  aaaqi_B.diancifa16_2 = aaaqi_P.diancifa16_2_Value;

  /* Start for Constant: '<Root>/diancifa16_3' */
  aaaqi_B.diancifa16_3 = aaaqi_P.diancifa16_3_Value;

  /* Start for Constant: '<S5>/constant' */
  aaaqi_B.constant = aaaqi_P.constant_Value;

  /* Level2 S-Function Block: '<S5>/PCI1716DIO1' (pci1716DIO) */
  {
    SimStruct *rts = aaaqi_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S6>/PCI-6208A DA ' (da6208) */
  {
    SimStruct *rts = aaaqi_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* S-Function Block: <S7>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(3)) == 0) {
      if ((i = rl32eDefScope(3,2)) != 0) {
        printf("Error creating scope 3\n");
      } else {
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem2/Multiport Switch/s1"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem2/Multiport Switch/s2"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem2/Multiport Switch/s3"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem2/Multiport Switch/s4"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem2/Multiport Switch/s5"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem2/Multiport Switch/s6"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem2/Multiport Switch/s7"));
        rl32eAddSignal(3, rl32eGetSignalNo("Subsystem2/Multiport Switch/s8"));
        rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo(
          "Subsystem2/Multiport Switch/s1"),"%15.6f");
        rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo(
          "Subsystem2/Multiport Switch/s2"),"%15.6f");
        rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo(
          "Subsystem2/Multiport Switch/s3"),"%15.6f");
        rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo(
          "Subsystem2/Multiport Switch/s4"),"%15.6f");
        rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo(
          "Subsystem2/Multiport Switch/s5"),"%15.6f");
        rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo(
          "Subsystem2/Multiport Switch/s6"),"%15.6f");
        rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo(
          "Subsystem2/Multiport Switch/s7"),"%15.6f");
        rl32eSetTargetScopeSigFt(3,rl32eGetSignalNo(
          "Subsystem2/Multiport Switch/s8"),"%15.6f");
        rl32eSetScope(3, 4, 250);
        rl32eSetScope(3, 5, 0);
        rl32eSetScope(3, 6, 1);
        rl32eSetScope(3, 0, 0);
        rl32eSetScope(3, 3, rl32eGetSignalNo("Subsystem2/Multiport Switch/s1"));
        rl32eSetScope(3, 1, 0.0);
        rl32eSetScope(3, 2, 0);
        rl32eSetScope(3, 9, 0);
        rl32eSetTargetScope(3, 1, 0.0);
        rl32eSetTargetScope(3, 11, 0.0);
        rl32eSetTargetScope(3, 10, 0.0);
        xpceScopeAcqOK(3, &aaaqi_DW.SFunction_IWORK.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(3);
    }
  }

  /* S-Function Block: <S8>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(1)) == 0) {
      if ((i = rl32eDefScope(1,2)) != 0) {
        printf("Error creating scope 1\n");
      } else {
        rl32eAddSignal(1, rl32eGetSignalNo("Data Type Conversion5/s1"));
        rl32eAddSignal(1, rl32eGetSignalNo("Data Type Conversion5/s2"));
        rl32eAddSignal(1, rl32eGetSignalNo("Data Type Conversion5/s3"));
        rl32eAddSignal(1, rl32eGetSignalNo("Data Type Conversion5/s4"));
        rl32eAddSignal(1, rl32eGetSignalNo("Data Type Conversion5/s5"));
        rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo("Data Type Conversion5/s1"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo("Data Type Conversion5/s2"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo("Data Type Conversion5/s3"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo("Data Type Conversion5/s4"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo("Data Type Conversion5/s5"),
          "%15.6f");
        rl32eSetScope(1, 4, 250);
        rl32eSetScope(1, 5, 0);
        rl32eSetScope(1, 6, 1);
        rl32eSetScope(1, 0, 0);
        rl32eSetScope(1, 3, rl32eGetSignalNo("Data Type Conversion5/s1"));
        rl32eSetScope(1, 1, 0.0);
        rl32eSetScope(1, 2, 0);
        rl32eSetScope(1, 9, 0);
        rl32eSetTargetScope(1, 1, 0.0);
        rl32eSetTargetScope(1, 11, 0.0);
        rl32eSetTargetScope(1, 10, 0.0);
        xpceScopeAcqOK(1, &aaaqi_DW.SFunction_IWORK_f.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(1);
    }
  }

  /* S-Function Block: <S9>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(2)) == 0) {
      if ((i = rl32eDefScope(2,2)) != 0) {
        printf("Error creating scope 2\n");
      } else {
        rl32eAddSignal(2, rl32eGetSignalNo("Data Type Conversion7/s1"));
        rl32eAddSignal(2, rl32eGetSignalNo("Data Type Conversion7/s2"));
        rl32eAddSignal(2, rl32eGetSignalNo("Data Type Conversion7/s3"));
        rl32eAddSignal(2, rl32eGetSignalNo("Data Type Conversion7/s4"));
        rl32eAddSignal(2, rl32eGetSignalNo("Data Type Conversion7/s5"));
        rl32eAddSignal(2, rl32eGetSignalNo("Data Type Conversion7/s6"));
        rl32eAddSignal(2, rl32eGetSignalNo("Data Type Conversion7/s7"));
        rl32eAddSignal(2, rl32eGetSignalNo("Data Type Conversion7/s8"));
        rl32eAddSignal(2, rl32eGetSignalNo("Data Type Conversion7/s9"));
        rl32eAddSignal(2, rl32eGetSignalNo("Data Type Conversion7/s10"));
        rl32eAddSignal(2, rl32eGetSignalNo("Data Type Conversion7/s11"));
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("Data Type Conversion7/s1"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("Data Type Conversion7/s2"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("Data Type Conversion7/s3"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("Data Type Conversion7/s4"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("Data Type Conversion7/s5"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("Data Type Conversion7/s6"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("Data Type Conversion7/s7"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("Data Type Conversion7/s8"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("Data Type Conversion7/s9"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("Data Type Conversion7/s10"),
          "%15.6f");
        rl32eSetScope(2, 4, 250);
        rl32eSetScope(2, 5, 0);
        rl32eSetScope(2, 6, 1);
        rl32eSetScope(2, 0, 0);
        rl32eSetScope(2, 3, rl32eGetSignalNo("Data Type Conversion7/s1"));
        rl32eSetScope(2, 1, 0.0);
        rl32eSetScope(2, 2, 0);
        rl32eSetScope(2, 9, 0);
        rl32eSetTargetScope(2, 1, 0.0);
        rl32eSetTargetScope(2, 11, 0.0);
        rl32eSetTargetScope(2, 10, 0.0);
        xpceScopeAcqOK(2, &aaaqi_DW.SFunction_IWORK_i.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(2);
    }
  }

  /* S-Function Block: <S10>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(4)) == 0) {
      if ((i = rl32eDefScope(4,2)) != 0) {
        printf("Error creating scope 4\n");
      } else {
        rl32eAddSignal(4, rl32eGetSignalNo("Data Type Conversion24/s1"));
        rl32eAddSignal(4, rl32eGetSignalNo("Data Type Conversion24/s2"));
        rl32eAddSignal(4, rl32eGetSignalNo("Data Type Conversion24/s3"));
        rl32eAddSignal(4, rl32eGetSignalNo("Data Type Conversion24/s4"));
        rl32eAddSignal(4, rl32eGetSignalNo("Data Type Conversion24/s5"));
        rl32eAddSignal(4, rl32eGetSignalNo("Data Type Conversion24/s6"));
        rl32eAddSignal(4, rl32eGetSignalNo("Data Type Conversion24/s7"));
        rl32eAddSignal(4, rl32eGetSignalNo("Data Type Conversion24/s8"));
        rl32eAddSignal(4, rl32eGetSignalNo("Data Type Conversion24/s9"));
        rl32eAddSignal(4, rl32eGetSignalNo("Data Type Conversion24/s10"));
        rl32eAddSignal(4, rl32eGetSignalNo("Data Type Conversion24/s11"));
        rl32eAddSignal(4, rl32eGetSignalNo("Data Type Conversion24/s12"));
        rl32eSetTargetScopeSigFt(4,rl32eGetSignalNo("Data Type Conversion24/s1"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(4,rl32eGetSignalNo("Data Type Conversion24/s2"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(4,rl32eGetSignalNo("Data Type Conversion24/s3"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(4,rl32eGetSignalNo("Data Type Conversion24/s4"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(4,rl32eGetSignalNo("Data Type Conversion24/s5"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(4,rl32eGetSignalNo("Data Type Conversion24/s6"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(4,rl32eGetSignalNo("Data Type Conversion24/s7"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(4,rl32eGetSignalNo("Data Type Conversion24/s8"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(4,rl32eGetSignalNo("Data Type Conversion24/s9"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(4,rl32eGetSignalNo("Data Type Conversion24/s10"),
          "%15.6f");
        rl32eSetScope(4, 4, 250);
        rl32eSetScope(4, 5, 0);
        rl32eSetScope(4, 6, 1);
        rl32eSetScope(4, 0, 0);
        rl32eSetScope(4, 3, rl32eGetSignalNo("Data Type Conversion24/s1"));
        rl32eSetScope(4, 1, 0.0);
        rl32eSetScope(4, 2, 0);
        rl32eSetScope(4, 9, 0);
        rl32eSetTargetScope(4, 1, 0.0);
        rl32eSetTargetScope(4, 11, 0.0);
        rl32eSetTargetScope(4, 10, 0.0);
        xpceScopeAcqOK(4, &aaaqi_DW.SFunction_IWORK_h.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(4);
    }
  }

  /* S-Function Block: <S11>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(6)) == 0) {
      if ((i = rl32eDefScope(6,2)) != 0) {
        printf("Error creating scope 6\n");
      } else {
        rl32eAddSignal(6, rl32eGetSignalNo("Data Type Conversion27/s1"));
        rl32eAddSignal(6, rl32eGetSignalNo("Data Type Conversion27/s3"));
        rl32eAddSignal(6, rl32eGetSignalNo("Data Type Conversion27/s5"));
        rl32eSetTargetScopeSigFt(6,rl32eGetSignalNo("Data Type Conversion27/s1"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(6,rl32eGetSignalNo("Data Type Conversion27/s3"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(6,rl32eGetSignalNo("Data Type Conversion27/s5"),
          "%15.6f");
        rl32eSetScope(6, 4, 250);
        rl32eSetScope(6, 5, 0);
        rl32eSetScope(6, 6, 1);
        rl32eSetScope(6, 0, 0);
        rl32eSetScope(6, 3, rl32eGetSignalNo("Data Type Conversion27/s1"));
        rl32eSetScope(6, 1, 0.0);
        rl32eSetScope(6, 2, 0);
        rl32eSetScope(6, 9, 0);
        rl32eSetTargetScope(6, 1, 0.0);
        rl32eSetTargetScope(6, 11, 0.0);
        rl32eSetTargetScope(6, 10, 0.0);
        xpceScopeAcqOK(6, &aaaqi_DW.SFunction_IWORK_i5.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(6);
    }
  }

  /* S-Function Block: <S12>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(7)) == 0) {
      if ((i = rl32eDefScope(7,2)) != 0) {
        printf("Error creating scope 7\n");
      } else {
        rl32eAddSignal(7, rl32eGetSignalNo("chuanganqi/CAN bit-unpacking 5/p1"));
        rl32eAddSignal(7, rl32eGetSignalNo("chuanganqi/CAN bit-unpacking 5/p2"));
        rl32eAddSignal(7, rl32eGetSignalNo("chuanganqi/CAN bit-unpacking 5/p3"));
        rl32eSetTargetScopeSigFt(7,rl32eGetSignalNo(
          "chuanganqi/CAN bit-unpacking 5/p1"),"%15.6f");
        rl32eSetTargetScopeSigFt(7,rl32eGetSignalNo(
          "chuanganqi/CAN bit-unpacking 5/p2"),"%15.6f");
        rl32eSetTargetScopeSigFt(7,rl32eGetSignalNo(
          "chuanganqi/CAN bit-unpacking 5/p3"),"%15.6f");
        rl32eSetScope(7, 4, 250);
        rl32eSetScope(7, 5, 0);
        rl32eSetScope(7, 6, 1);
        rl32eSetScope(7, 0, 0);
        rl32eSetScope(7, 3, rl32eGetSignalNo("chuanganqi/CAN bit-unpacking 5/p1"));
        rl32eSetScope(7, 1, 0.0);
        rl32eSetScope(7, 2, 0);
        rl32eSetScope(7, 9, 0);
        rl32eSetTargetScope(7, 1, 0.0);
        rl32eSetTargetScope(7, 11, 0.0);
        rl32eSetTargetScope(7, 10, 0.0);
        xpceScopeAcqOK(7, &aaaqi_DW.SFunction_IWORK_b.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(7);
    }
  }

  /* Bit Packing: <S17>/CAN bit-packing 2 */
  aaaqi_B.CANbitpacking2 = 0.0;

  /* Bit Packing: <S17>/CAN bit-packing 4 */
  aaaqi_B.CANbitpacking4 = 0.0;

  /* Bit Packing: <S17>/CAN bit-packing  */
  aaaqi_B.CANbitpacking = 0.0;

  /* Bit Packing: <S17>/CAN bit-packing 1 */
  aaaqi_B.CANbitpacking1 = 0.0;

  /* Bit Packing: <S17>/CAN bit-packing 3 */
  aaaqi_B.CANbitpacking3 = 0.0;

  /* Level2 S-Function Block: '<S17>/Setup ' (canac2pcisetupx) */
  {
    SimStruct *rts = aaaqi_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<Root>/PCI-1784' (adpci_1784) */
  {
    SimStruct *rts = aaaqi_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* InitializeConditions for Memory: '<Root>/Memory' */
  aaaqi_DW.Memory_PreviousInput = aaaqi_P.Memory_X0;

  /* InitializeConditions for Memory: '<Root>/Memory1' */
  aaaqi_DW.Memory1_PreviousInput = aaaqi_P.Memory1_X0;

  /* InitializeConditions for Memory: '<S22>/Memory' */
  aaaqi_DW.Memory_PreviousInput_d = aaaqi_P.Memory_X0_b;

  /* InitializeConditions for Memory: '<S22>/Memory1' */
  aaaqi_DW.Memory1_PreviousInput_d = aaaqi_P.Memory1_X0_l;

  /* InitializeConditions for Memory: '<S23>/Memory' */
  aaaqi_DW.Memory_PreviousInput_c = aaaqi_P.Memory_X0_k;

  /* InitializeConditions for Memory: '<S24>/Memory' */
  aaaqi_DW.Memory_PreviousInput_m = aaaqi_P.Memory_X0_d;

  /* InitializeConditions for Memory: '<S24>/Memory1' */
  aaaqi_DW.Memory1_PreviousInput_m = aaaqi_P.Memory1_X0_b;

  /* InitializeConditions for Memory: '<S23>/Memory1' */
  aaaqi_DW.Memory1_PreviousInput_k = aaaqi_P.Memory1_X0_lk;

  /* InitializeConditions for Memory: '<Root>/Memory2' */
  aaaqi_DW.Memory2_PreviousInput = aaaqi_P.Memory2_X0;

  /* SystemInitialize for Enabled SubSystem: '<Root>/jinjichuli' */
  /* SystemInitialize for Chart: '<S19>/jinjichuli' */
  aaaqi_DW.sfEvent = aaaqi_CALL_EVENT_h;
  aaaqi_DW.is_active_fa4_1 = 0U;
  aaaqi_DW.is_fa4_1 = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_DW.is_active_fa4_10 = 0U;
  aaaqi_DW.is_fa4_10 = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_DW.is_active_fa4_11 = 0U;
  aaaqi_DW.is_fa4_11 = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_DW.is_active_fa4_12 = 0U;
  aaaqi_DW.is_fa4_12 = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_DW.is_active_fa4_13 = 0U;
  aaaqi_DW.is_fa4_13 = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_DW.is_active_fa4_2 = 0U;
  aaaqi_DW.is_fa4_2 = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_DW.is_active_fa4_3 = 0U;
  aaaqi_DW.is_fa4_3 = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_DW.is_active_fa4_4 = 0U;
  aaaqi_DW.is_fa4_4 = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_DW.is_active_fa4_5 = 0U;
  aaaqi_DW.is_fa4_5 = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_DW.is_active_fa4_6 = 0U;
  aaaqi_DW.is_fa4_6 = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_DW.is_active_fa4_7 = 0U;
  aaaqi_DW.is_fa4_7 = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_DW.is_active_fa4_8 = 0U;
  aaaqi_DW.is_fa4_8 = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_DW.is_active_fa4_9 = 0U;
  aaaqi_DW.is_fa4_9 = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_DW.is_active_kaigai = 0U;
  aaaqi_DW.is_kaigai = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_DW.is_active_kiagai = 0U;
  aaaqi_DW.is_kiagai = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_DW.is_active_yajin = 0U;
  aaaqi_DW.is_yajin = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_DW.temporalCounter_i1 = 0U;
  aaaqi_DW.is_active_c2_aaaqi = 0U;
  aaaqi_DW.is_c2_aaaqi = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_B.diancifa11_1 = 0.0;
  aaaqi_B.diancifa11_2 = 0.0;
  aaaqi_B.diancifa11_5 = 0.0;
  aaaqi_B.diancifa20 = 0.0;
  aaaqi_B.diancifa16_1 = 0.0;
  aaaqi_B.diancifa3 = 0.0;
  aaaqi_B.diancifa21 = 0.0;
  aaaqi_B.suoding = 0.0;
  aaaqi_B.jiesuo = 0.0;
  aaaqi_B.xuansong = 0.0;
  aaaqi_B.xuanjin = 0.0;
  aaaqi_B.bililiuliangfa18_1 = 0.0;
  aaaqi_B.bililiuliangfa18_2 = 0.0;
  aaaqi_B.bililiuliangfa18_3 = 0.0;
  aaaqi_B.bililiuliangfa18_4 = 0.0;
  aaaqi_B.kaiguangaifa = 0.0;

  /* End of SystemInitialize for SubSystem: '<Root>/jinjichuli' */

  /* SystemInitialize for Chart: '<S20>/Chart' */
  aaaqi_Chart1_Init(&aaaqi_B.sf_Chart, &aaaqi_DW.sf_Chart);

  /* SystemInitialize for Enabled SubSystem: '<Root>/Subsystem4' */
  aaaqi_Subsystem4_Init(&aaaqi_B.Subsystem4, (P_Subsystem4_aaaqi_T *)
                        &aaaqi_P.Subsystem4);

  /* End of SystemInitialize for SubSystem: '<Root>/Subsystem4' */

  /* SystemInitialize for Chart: '<S18>/Chart1' */
  aaaqi_Chart1_Init(&aaaqi_B.sf_Chart1, &aaaqi_DW.sf_Chart1);

  /* SystemInitialize for Enabled SubSystem: '<Root>/Subsystem5' */
  aaaqi_Subsystem4_Init(&aaaqi_B.Subsystem5, (P_Subsystem4_aaaqi_T *)
                        &aaaqi_P.Subsystem5);

  /* End of SystemInitialize for SubSystem: '<Root>/Subsystem5' */

  /* SystemInitialize for Enabled SubSystem: '<S14>/zidong' */
  /* SystemInitialize for Chart: '<S26>/Chart' */
  aaaqi_DW.sfEvent_j = aaaqi_CALL_EVENT_h;
  aaaqi_DW.is_zidong = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_DW.is_SCjiaya = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_DW.is_SCzhushui = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_DW.is_SXQjunya = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_DW.is_SXQxieya = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_DW.is_kaiguangai = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_DW.temporalCounter_i1_c = 0U;
  aaaqi_DW.is_active_c1_aaaqi = 0U;
  aaaqi_DW.is_c1_aaaqi = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_DW.p0_1 = 0.0;
  aaaqi_DW.p0_2 = 0.0;
  aaaqi_B.diancifa11_1_l = 0.0;
  aaaqi_B.diancifa11_2_l = 0.0;
  aaaqi_B.diancifa11_5_d = 0.0;
  aaaqi_B.diancifa20_n = 0.0;
  aaaqi_B.diancifa16_1_l = 0.0;
  aaaqi_B.diancifa3_m = 0.0;
  aaaqi_B.diancifa21_a = 0.0;
  aaaqi_B.suoding_a = 0.0;
  aaaqi_B.jiesuo_j = 0.0;
  aaaqi_B.xuansong_n = 0.0;
  aaaqi_B.xuanjin_b = 0.0;
  aaaqi_B.bililiuliangfa18_1_a = 0.0;
  aaaqi_B.bililiuliangfa18_2_d = 0.0;
  aaaqi_B.bililiuliangfa18_3_p = 0.0;
  aaaqi_B.bililiuliangfa18_4_c = 0.0;
  aaaqi_B.kaigaikaishi = 0.0;
  aaaqi_B.guangaikaishi = 0.0;
  aaaqi_B.SCzhushuiwancheng = 0.0;
  aaaqi_B.SCjiayawancheng = 0.0;
  aaaqi_B.SXQjunyawancheng = 0.0;
  aaaqi_B.SXQxieyawancheng = 0.0;
  aaaqi_B.SQshiyabuchangwancheng = 0.0;
  aaaqi_B.SQxuanjinjianyawancheng = 0.0;
  aaaqi_B.kaigaiwancheng = 0.0;
  aaaqi_B.guangaiwancheng = 0.0;

  /* SystemInitialize for Outport: '<S26>/bililiuliangfa18_1' */
  aaaqi_B.Product_j = aaaqi_P.bililiuliangfa18_1_Y0_e;

  /* SystemInitialize for Outport: '<S26>/bililiuliangfa18_2' */
  aaaqi_B.Gain_f = aaaqi_P.bililiuliangfa18_2_Y0_j;

  /* SystemInitialize for Outport: '<S26>/bililiuliangfa18_3' */
  aaaqi_B.Product1_b = aaaqi_P.bililiuliangfa18_3_Y0_d;

  /* SystemInitialize for Outport: '<S26>/bililiuliangfa18_4' */
  aaaqi_B.Gain1 = aaaqi_P.bililiuliangfa18_4_Y0_j;

  /* SystemInitialize for Outport: '<S26>/kaiguangaifa' */
  aaaqi_B.MultiportSwitch_j = aaaqi_P.kaiguangaifa_Y0_i;

  /* End of SystemInitialize for SubSystem: '<S14>/zidong' */

  /* SystemInitialize for Enabled SubSystem: '<S14>/shoudong' */
  /* SystemInitialize for Chart: '<S25>/Chart' */
  aaaqi_DW.sfEvent_l = aaaqi_CALL_EVENT_h;
  aaaqi_DW.is_active_SCjiaya = 0U;
  aaaqi_DW.is_SCjiaya_c = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_DW.temporalCounter_i3 = 0U;
  aaaqi_DW.is_active_SCzhushui = 0U;
  aaaqi_DW.is_SCzhushui_e = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_DW.temporalCounter_i4 = 0U;
  aaaqi_DW.is_active_SXQjunya = 0U;
  aaaqi_DW.is_SXQjunya_k = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_DW.temporalCounter_i5 = 0U;
  aaaqi_DW.is_active_SXQxieya = 0U;
  aaaqi_DW.is_SXQxieya_l = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_DW.temporalCounter_i2 = 0U;
  aaaqi_DW.is_active_kaiguangai = 0U;
  aaaqi_DW.is_kaiguangai_o = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_DW.temporalCounter_i1_m = 0U;
  aaaqi_DW.is_active_c4_aaaqi = 0U;
  aaaqi_DW.is_c4_aaaqi = aaaqi_IN_NO_ACTIVE_CHILD_o;
  aaaqi_B.diancifa11_1_d = 0.0;
  aaaqi_B.diancifa11_2_b = 0.0;
  aaaqi_B.diancifa11_5_o = 0.0;
  aaaqi_B.diancifa20_i = 0.0;
  aaaqi_B.diancifa16_1_c = 0.0;
  aaaqi_B.diancifa3_l = 0.0;
  aaaqi_B.diancifa21_g = 0.0;
  aaaqi_B.suoding_k = 0.0;
  aaaqi_B.jiesuo_g = 0.0;
  aaaqi_B.xuansong_i = 0.0;
  aaaqi_B.xuanjin_l = 0.0;
  aaaqi_B.bililiuliangfa18_1_h = 0.0;
  aaaqi_B.bililiuliangfa18_2_i = 0.0;
  aaaqi_B.bililiuliangfa18_3_m = 0.0;
  aaaqi_B.bililiuliangfa18_4_b = 0.0;
  aaaqi_B.kaigaikaishi_k = 0.0;
  aaaqi_B.guangaikaishi_j = 0.0;
  aaaqi_B.SCzhushuiwancheng_f = 0.0;
  aaaqi_B.SCjiayawancheng_l = 0.0;
  aaaqi_B.SXQjunyawancheng_h = 0.0;
  aaaqi_B.SXQxieyawancheng_p = 0.0;
  aaaqi_B.SQshiyabuchangwancheng_p = 0.0;
  aaaqi_B.SQxuanjinjianyawancheng_m = 0.0;
  aaaqi_B.kaigaiwancheng_g = 0.0;
  aaaqi_B.guangaiwancheng_n = 0.0;
  aaaqi_B.p0_1 = 0.0;
  aaaqi_B.p0_2 = 0.0;

  /* SystemInitialize for Outport: '<S25>/bililiuliangfa18_1' */
  aaaqi_B.Product_m3 = aaaqi_P.bililiuliangfa18_1_Y0;

  /* SystemInitialize for Outport: '<S25>/bililiuliangfa18_2' */
  aaaqi_B.Gain_j = aaaqi_P.bililiuliangfa18_2_Y0;

  /* SystemInitialize for Outport: '<S25>/bililiuliangfa18_3' */
  aaaqi_B.Product1_bp = aaaqi_P.bililiuliangfa18_3_Y0;

  /* SystemInitialize for Outport: '<S25>/bililiuliangfa18_4' */
  aaaqi_B.Gain1_of = aaaqi_P.bililiuliangfa18_4_Y0;

  /* SystemInitialize for Outport: '<S25>/kaiguangaifa' */
  aaaqi_B.MultiportSwitch_e = aaaqi_P.kaiguangaifa_Y0;

  /* End of SystemInitialize for SubSystem: '<S14>/shoudong' */
}

/* Model terminate function */
static void aaaqi_terminate(void)
{
  /* Level2 S-Function Block: '<S5>/PCI1716DIO1' (pci1716DIO) */
  {
    SimStruct *rts = aaaqi_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S6>/PCI-6208A DA ' (da6208) */
  {
    SimStruct *rts = aaaqi_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S17>/Setup ' (canac2pcisetupx) */
  {
    SimStruct *rts = aaaqi_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<Root>/PCI-1784' (adpci_1784) */
  {
    SimStruct *rts = aaaqi_M->childSfunctions[3];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  aaaqi_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  aaaqi_update();
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
  aaaqi_initialize();
}

void MdlTerminate(void)
{
  aaaqi_terminate();
}

/* Registration function */
RT_MODEL_aaaqi_T *aaaqi(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)aaaqi_M, 0,
                sizeof(RT_MODEL_aaaqi_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&aaaqi_M->solverInfo, &aaaqi_M->Timing.simTimeStep);
    rtsiSetTPtr(&aaaqi_M->solverInfo, &rtmGetTPtr(aaaqi_M));
    rtsiSetStepSizePtr(&aaaqi_M->solverInfo, &aaaqi_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&aaaqi_M->solverInfo, (&rtmGetErrorStatus(aaaqi_M)));
    rtsiSetRTModelPtr(&aaaqi_M->solverInfo, aaaqi_M);
  }

  rtsiSetSimTimeStep(&aaaqi_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&aaaqi_M->solverInfo,"FixedStepDiscrete");
  aaaqi_M->solverInfoPtr = (&aaaqi_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = aaaqi_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    aaaqi_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    aaaqi_M->Timing.sampleTimes = (&aaaqi_M->Timing.sampleTimesArray[0]);
    aaaqi_M->Timing.offsetTimes = (&aaaqi_M->Timing.offsetTimesArray[0]);

    /* task periods */
    aaaqi_M->Timing.sampleTimes[0] = (0.0);
    aaaqi_M->Timing.sampleTimes[1] = (0.002);

    /* task offsets */
    aaaqi_M->Timing.offsetTimes[0] = (0.0);
    aaaqi_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(aaaqi_M, &aaaqi_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = aaaqi_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    aaaqi_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(aaaqi_M, -1);
  aaaqi_M->Timing.stepSize0 = 0.002;
  aaaqi_M->Timing.stepSize1 = 0.002;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    aaaqi_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(aaaqi_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(aaaqi_M->rtwLogInfo, (NULL));
    rtliSetLogT(aaaqi_M->rtwLogInfo, "tout");
    rtliSetLogX(aaaqi_M->rtwLogInfo, "");
    rtliSetLogXFinal(aaaqi_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(aaaqi_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(aaaqi_M->rtwLogInfo, 2);
    rtliSetLogMaxRows(aaaqi_M->rtwLogInfo, 0);
    rtliSetLogDecimation(aaaqi_M->rtwLogInfo, 1);
    rtliSetLogY(aaaqi_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(aaaqi_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(aaaqi_M->rtwLogInfo, (NULL));
  }

  aaaqi_M->solverInfoPtr = (&aaaqi_M->solverInfo);
  aaaqi_M->Timing.stepSize = (0.002);
  rtsiSetFixedStepSize(&aaaqi_M->solverInfo, 0.002);
  rtsiSetSolverMode(&aaaqi_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  aaaqi_M->blockIO = ((void *) &aaaqi_B);
  (void) memset(((void *) &aaaqi_B), 0,
                sizeof(B_aaaqi_T));

  /* parameters */
  aaaqi_M->defaultParam = ((real_T *)&aaaqi_P);

  /* states (dwork) */
  aaaqi_M->dwork = ((void *) &aaaqi_DW);
  (void) memset((void *)&aaaqi_DW, 0,
                sizeof(DW_aaaqi_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  aaaqi_InitializeDataMapInfo(aaaqi_M);

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &aaaqi_M->NonInlinedSFcns.sfcnInfo;
    aaaqi_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(aaaqi_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &aaaqi_M->Sizes.numSampTimes);
    aaaqi_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr(aaaqi_M)[0]);
    aaaqi_M->NonInlinedSFcns.taskTimePtrs[1] = &(rtmGetTPtr(aaaqi_M)[1]);
    rtssSetTPtrPtr(sfcnInfo,aaaqi_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(aaaqi_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(aaaqi_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput(aaaqi_M));
    rtssSetStepSizePtr(sfcnInfo, &aaaqi_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(aaaqi_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo, &aaaqi_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &aaaqi_M->zCCacheNeedsReset);
    rtssSetBlkStateChangePtr(sfcnInfo, &aaaqi_M->blkStateChange);
    rtssSetSampleHitsPtr(sfcnInfo, &aaaqi_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo, &aaaqi_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &aaaqi_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &aaaqi_M->solverInfoPtr);
  }

  aaaqi_M->Sizes.numSFcns = (4);

  /* register each child */
  {
    (void) memset((void *)&aaaqi_M->NonInlinedSFcns.childSFunctions[0], 0,
                  4*sizeof(SimStruct));
    aaaqi_M->childSfunctions = (&aaaqi_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    aaaqi_M->childSfunctions[0] = (&aaaqi_M->NonInlinedSFcns.childSFunctions[0]);
    aaaqi_M->childSfunctions[1] = (&aaaqi_M->NonInlinedSFcns.childSFunctions[1]);
    aaaqi_M->childSfunctions[2] = (&aaaqi_M->NonInlinedSFcns.childSFunctions[2]);
    aaaqi_M->childSfunctions[3] = (&aaaqi_M->NonInlinedSFcns.childSFunctions[3]);

    /* Level2 S-Function Block: aaaqi/<S5>/PCI1716DIO1 (pci1716DIO) */
    {
      SimStruct *rts = aaaqi_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = aaaqi_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = aaaqi_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = aaaqi_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &aaaqi_M->NonInlinedSFcns.blkInfo2[0]);
      }

      ssSetRTWSfcnInfo(rts, aaaqi_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &aaaqi_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &aaaqi_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &aaaqi_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &aaaqi_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &aaaqi_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 18);
        ssSetPortInfoForInputs(rts,
          &aaaqi_M->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaaqi_M->NonInlinedSFcns.Sfcn0.UPtrs0;
          sfcnUPtrs[0] = (real_T*)&aaaqi_RGND;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaaqi_M->NonInlinedSFcns.Sfcn0.UPtrs1;
          sfcnUPtrs[0] = (real_T*)&aaaqi_RGND;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaaqi_M->NonInlinedSFcns.Sfcn0.UPtrs2;
          sfcnUPtrs[0] = &aaaqi_B.DataTypeConversion7[0];
          ssSetInputPortSignalPtrs(rts, 2, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }

        /* port 3 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaaqi_M->NonInlinedSFcns.Sfcn0.UPtrs3;
          sfcnUPtrs[0] = &aaaqi_B.DataTypeConversion7[1];
          ssSetInputPortSignalPtrs(rts, 3, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidth(rts, 3, 1);
        }

        /* port 4 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaaqi_M->NonInlinedSFcns.Sfcn0.UPtrs4;
          sfcnUPtrs[0] = &aaaqi_B.diancifa11_3;
          ssSetInputPortSignalPtrs(rts, 4, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidth(rts, 4, 1);
        }

        /* port 5 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaaqi_M->NonInlinedSFcns.Sfcn0.UPtrs5;
          sfcnUPtrs[0] = &aaaqi_B.diancifa11_4;
          ssSetInputPortSignalPtrs(rts, 5, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 5, 1);
          ssSetInputPortWidth(rts, 5, 1);
        }

        /* port 6 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaaqi_M->NonInlinedSFcns.Sfcn0.UPtrs6;
          sfcnUPtrs[0] = &aaaqi_B.DataTypeConversion7[2];
          ssSetInputPortSignalPtrs(rts, 6, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 6, 1);
          ssSetInputPortWidth(rts, 6, 1);
        }

        /* port 7 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaaqi_M->NonInlinedSFcns.Sfcn0.UPtrs7;
          sfcnUPtrs[0] = &aaaqi_B.DataTypeConversion1_k;
          ssSetInputPortSignalPtrs(rts, 7, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 7, 1);
          ssSetInputPortWidth(rts, 7, 1);
        }

        /* port 8 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaaqi_M->NonInlinedSFcns.Sfcn0.UPtrs8;
          sfcnUPtrs[0] = &aaaqi_B.diancifa16_2;
          ssSetInputPortSignalPtrs(rts, 8, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 8, 1);
          ssSetInputPortWidth(rts, 8, 1);
        }

        /* port 9 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaaqi_M->NonInlinedSFcns.Sfcn0.UPtrs9;
          sfcnUPtrs[0] = &aaaqi_B.diancifa16_3;
          ssSetInputPortSignalPtrs(rts, 9, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 9, 1);
          ssSetInputPortWidth(rts, 9, 1);
        }

        /* port 10 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaaqi_M->NonInlinedSFcns.Sfcn0.UPtrs10;
          sfcnUPtrs[0] = &aaaqi_B.DataTypeConversion7[5];
          ssSetInputPortSignalPtrs(rts, 10, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 10, 1);
          ssSetInputPortWidth(rts, 10, 1);
        }

        /* port 11 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaaqi_M->NonInlinedSFcns.Sfcn0.UPtrs11;
          sfcnUPtrs[0] = &aaaqi_B.DataTypeConversion7[3];
          ssSetInputPortSignalPtrs(rts, 11, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 11, 1);
          ssSetInputPortWidth(rts, 11, 1);
        }

        /* port 12 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaaqi_M->NonInlinedSFcns.Sfcn0.UPtrs12;
          sfcnUPtrs[0] = &aaaqi_B.DataTypeConversion2;
          ssSetInputPortSignalPtrs(rts, 12, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 12, 1);
          ssSetInputPortWidth(rts, 12, 1);
        }

        /* port 13 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaaqi_M->NonInlinedSFcns.Sfcn0.UPtrs13;
          sfcnUPtrs[0] = &aaaqi_B.constant;
          ssSetInputPortSignalPtrs(rts, 13, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 13, 1);
          ssSetInputPortWidth(rts, 13, 1);
        }

        /* port 14 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaaqi_M->NonInlinedSFcns.Sfcn0.UPtrs14;
          sfcnUPtrs[0] = &aaaqi_B.DataTypeConversion7[7];
          ssSetInputPortSignalPtrs(rts, 14, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 14, 1);
          ssSetInputPortWidth(rts, 14, 1);
        }

        /* port 15 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaaqi_M->NonInlinedSFcns.Sfcn0.UPtrs15;
          sfcnUPtrs[0] = &aaaqi_B.DataTypeConversion7[8];
          ssSetInputPortSignalPtrs(rts, 15, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 15, 1);
          ssSetInputPortWidth(rts, 15, 1);
        }

        /* port 16 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaaqi_M->NonInlinedSFcns.Sfcn0.UPtrs16;
          sfcnUPtrs[0] = &aaaqi_B.DataTypeConversion7[9];
          ssSetInputPortSignalPtrs(rts, 16, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 16, 1);
          ssSetInputPortWidth(rts, 16, 1);
        }

        /* port 17 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaaqi_M->NonInlinedSFcns.Sfcn0.UPtrs17;
          sfcnUPtrs[0] = &aaaqi_B.DataTypeConversion7[10];
          ssSetInputPortSignalPtrs(rts, 17, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 17, 1);
          ssSetInputPortWidth(rts, 17, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &aaaqi_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 8);
          ssSetOutputPortSignal(rts, 0, ((real_T *) aaaqi_B.PCI1716DIO1_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 16);
          ssSetOutputPortSignal(rts, 1, ((real_T *) aaaqi_B.PCI1716DIO1_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI1716DIO1");
      ssSetPath(rts, "aaaqi/PCI1716/PCI1716DIO1");
      ssSetRTModel(rts,aaaqi_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &aaaqi_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)aaaqi_P.PCI1716DIO1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)aaaqi_P.PCI1716DIO1_P2_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &aaaqi_DW.PCI1716DIO1_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &aaaqi_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &aaaqi_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 6);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &aaaqi_DW.PCI1716DIO1_IWORK[0]);
      }

      /* registration */
      pci1716DIO(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.002);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 0);
      _ssSetInputPortConnected(rts, 1, 0);
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
      _ssSetOutputPortConnected(rts, 0, 0);
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
    }

    /* Level2 S-Function Block: aaaqi/<S6>/PCI-6208A DA  (da6208) */
    {
      SimStruct *rts = aaaqi_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = aaaqi_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = aaaqi_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = aaaqi_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &aaaqi_M->NonInlinedSFcns.blkInfo2[1]);
      }

      ssSetRTWSfcnInfo(rts, aaaqi_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &aaaqi_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &aaaqi_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &aaaqi_M->NonInlinedSFcns.methods4[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &aaaqi_M->NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts,
          &aaaqi_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 8);
        ssSetPortInfoForInputs(rts,
          &aaaqi_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaaqi_M->NonInlinedSFcns.Sfcn1.UPtrs0;
          sfcnUPtrs[0] = &aaaqi_B.Saturation_j;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaaqi_M->NonInlinedSFcns.Sfcn1.UPtrs1;
          sfcnUPtrs[0] = &aaaqi_B.Saturation1_i;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaaqi_M->NonInlinedSFcns.Sfcn1.UPtrs2;
          sfcnUPtrs[0] = &aaaqi_B.Saturation2;
          ssSetInputPortSignalPtrs(rts, 2, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }

        /* port 3 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaaqi_M->NonInlinedSFcns.Sfcn1.UPtrs3;
          sfcnUPtrs[0] = &aaaqi_B.Saturation3;
          ssSetInputPortSignalPtrs(rts, 3, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidth(rts, 3, 1);
        }

        /* port 4 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaaqi_M->NonInlinedSFcns.Sfcn1.UPtrs4;
          sfcnUPtrs[0] = &aaaqi_B.Saturation4;
          ssSetInputPortSignalPtrs(rts, 4, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidth(rts, 4, 1);
        }

        /* port 5 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaaqi_M->NonInlinedSFcns.Sfcn1.UPtrs5;
          sfcnUPtrs[0] = &aaaqi_B.Saturation5;
          ssSetInputPortSignalPtrs(rts, 5, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 5, 1);
          ssSetInputPortWidth(rts, 5, 1);
        }

        /* port 6 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaaqi_M->NonInlinedSFcns.Sfcn1.UPtrs6;
          sfcnUPtrs[0] = &aaaqi_B.Saturation6;
          ssSetInputPortSignalPtrs(rts, 6, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 6, 1);
          ssSetInputPortWidth(rts, 6, 1);
        }

        /* port 7 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaaqi_M->NonInlinedSFcns.Sfcn1.UPtrs7;
          sfcnUPtrs[0] = &aaaqi_B.Saturation7;
          ssSetInputPortSignalPtrs(rts, 7, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 7, 1);
          ssSetInputPortWidth(rts, 7, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-6208A DA ");
      ssSetPath(rts, "aaaqi/PCI6208/PCI-6208A DA ");
      ssSetRTModel(rts,aaaqi_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &aaaqi_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)aaaqi_P.PCI6208ADA_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)aaaqi_P.PCI6208ADA_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)aaaqi_P.PCI6208ADA_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)aaaqi_P.PCI6208ADA_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)aaaqi_P.PCI6208ADA_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)aaaqi_P.PCI6208ADA_P6_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &aaaqi_DW.PCI6208ADA_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &aaaqi_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &aaaqi_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &aaaqi_DW.PCI6208ADA_IWORK[0]);
      }

      /* registration */
      da6208(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.002);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

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

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
      ssSetInputPortBufferDstPort(rts, 3, -1);
      ssSetInputPortBufferDstPort(rts, 4, -1);
      ssSetInputPortBufferDstPort(rts, 5, -1);
      ssSetInputPortBufferDstPort(rts, 6, -1);
      ssSetInputPortBufferDstPort(rts, 7, -1);
    }

    /* Level2 S-Function Block: aaaqi/<S17>/Setup  (canac2pcisetupx) */
    {
      SimStruct *rts = aaaqi_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod = aaaqi_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset = aaaqi_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = aaaqi_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &aaaqi_M->NonInlinedSFcns.blkInfo2[2]);
      }

      ssSetRTWSfcnInfo(rts, aaaqi_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &aaaqi_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &aaaqi_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &aaaqi_M->NonInlinedSFcns.methods4[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &aaaqi_M->NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts,
          &aaaqi_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* path info */
      ssSetModelName(rts, "Setup ");
      ssSetPath(rts, "aaaqi/chuanganqi/Setup ");
      ssSetRTModel(rts,aaaqi_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &aaaqi_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 24);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)aaaqi_P.Setup_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)aaaqi_P.Setup_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)aaaqi_P.Setup_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)aaaqi_P.Setup_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)aaaqi_P.Setup_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)aaaqi_P.Setup_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)aaaqi_P.Setup_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)aaaqi_P.Setup_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)aaaqi_P.Setup_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)aaaqi_P.Setup_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)aaaqi_P.Setup_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)aaaqi_P.Setup_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)aaaqi_P.Setup_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)aaaqi_P.Setup_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)aaaqi_P.Setup_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)aaaqi_P.Setup_P16_Size);
        ssSetSFcnParam(rts, 16, (mxArray*)aaaqi_P.Setup_P17_Size);
        ssSetSFcnParam(rts, 17, (mxArray*)aaaqi_P.Setup_P18_Size);
        ssSetSFcnParam(rts, 18, (mxArray*)aaaqi_P.Setup_P19_Size);
        ssSetSFcnParam(rts, 19, (mxArray*)aaaqi_P.Setup_P20_Size);
        ssSetSFcnParam(rts, 20, (mxArray*)aaaqi_P.Setup_P21_Size);
        ssSetSFcnParam(rts, 21, (mxArray*)aaaqi_P.Setup_P22_Size);
        ssSetSFcnParam(rts, 22, (mxArray*)aaaqi_P.Setup_P23_Size);
        ssSetSFcnParam(rts, 23, (mxArray*)aaaqi_P.Setup_P24_Size);
      }

      /* registration */
      canac2pcisetupx(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.002);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: aaaqi/<Root>/PCI-1784 (adpci_1784) */
    {
      SimStruct *rts = aaaqi_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod = aaaqi_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset = aaaqi_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap = aaaqi_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &aaaqi_M->NonInlinedSFcns.blkInfo2[3]);
      }

      ssSetRTWSfcnInfo(rts, aaaqi_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &aaaqi_M->NonInlinedSFcns.methods2[3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &aaaqi_M->NonInlinedSFcns.methods3[3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &aaaqi_M->NonInlinedSFcns.methods4[3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &aaaqi_M->NonInlinedSFcns.statesInfo2[3]);
        ssSetPeriodicStatesInfo(rts,
          &aaaqi_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &aaaqi_M->NonInlinedSFcns.Sfcn3.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 8);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &aaaqi_B.PCI1784_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *) &aaaqi_B.PCI1784_o2));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *) &aaaqi_B.PCI1784_o3));
        }

        /* port 3 */
        {
          _ssSetOutputPortNumDimensions(rts, 3, 1);
          ssSetOutputPortWidth(rts, 3, 1);
          ssSetOutputPortSignal(rts, 3, ((real_T *) &aaaqi_B.PCI1784_o4));
        }

        /* port 4 */
        {
          _ssSetOutputPortNumDimensions(rts, 4, 1);
          ssSetOutputPortWidth(rts, 4, 1);
          ssSetOutputPortSignal(rts, 4, ((real_T *) &aaaqi_B.PCI1784_o5));
        }

        /* port 5 */
        {
          _ssSetOutputPortNumDimensions(rts, 5, 1);
          ssSetOutputPortWidth(rts, 5, 1);
          ssSetOutputPortSignal(rts, 5, ((real_T *) &aaaqi_B.PCI1784_o6));
        }

        /* port 6 */
        {
          _ssSetOutputPortNumDimensions(rts, 6, 1);
          ssSetOutputPortWidth(rts, 6, 1);
          ssSetOutputPortSignal(rts, 6, ((real_T *) &aaaqi_B.PCI1784_o7));
        }

        /* port 7 */
        {
          _ssSetOutputPortNumDimensions(rts, 7, 1);
          ssSetOutputPortWidth(rts, 7, 1);
          ssSetOutputPortSignal(rts, 7, ((real_T *) &aaaqi_B.PCI1784_o8));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-1784");
      ssSetPath(rts, "aaaqi/PCI-1784");
      ssSetRTModel(rts,aaaqi_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &aaaqi_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)aaaqi_P.PCI1784_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)aaaqi_P.PCI1784_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)aaaqi_P.PCI1784_P3_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &aaaqi_DW.PCI1784_RWORK[0]);
      ssSetIWork(rts, (int_T *) &aaaqi_DW.PCI1784_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &aaaqi_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &aaaqi_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 64);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &aaaqi_DW.PCI1784_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 66);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &aaaqi_DW.PCI1784_IWORK[0]);
      }

      /* registration */
      adpci_1784(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.002);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 0);
      _ssSetOutputPortConnected(rts, 3, 0);
      _ssSetOutputPortConnected(rts, 4, 0);
      _ssSetOutputPortConnected(rts, 5, 0);
      _ssSetOutputPortConnected(rts, 6, 0);
      _ssSetOutputPortConnected(rts, 7, 0);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);
      _ssSetOutputPortBeingMerged(rts, 3, 0);
      _ssSetOutputPortBeingMerged(rts, 4, 0);
      _ssSetOutputPortBeingMerged(rts, 5, 0);
      _ssSetOutputPortBeingMerged(rts, 6, 0);
      _ssSetOutputPortBeingMerged(rts, 7, 0);

      /* Update the BufferDstPort flags for each input port */
    }
  }

  /* Initialize Sizes */
  aaaqi_M->Sizes.numContStates = (0);  /* Number of continuous states */
  aaaqi_M->Sizes.numY = (0);           /* Number of model outputs */
  aaaqi_M->Sizes.numU = (0);           /* Number of model inputs */
  aaaqi_M->Sizes.sysDirFeedThru = (0); /* The model is not direct feedthrough */
  aaaqi_M->Sizes.numSampTimes = (2);   /* Number of sample times */
  aaaqi_M->Sizes.numBlocks = (763);    /* Number of blocks */
  aaaqi_M->Sizes.numBlockIO = (458);   /* Number of block outputs */
  aaaqi_M->Sizes.numBlockPrms = (558); /* Sum of parameter "widths" */
  return aaaqi_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
