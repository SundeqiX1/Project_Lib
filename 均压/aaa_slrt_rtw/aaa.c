/*
 * aaa.c
 *
 * Code generation for model "aaa".
 *
 * Model version              : 1.100
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Fri May 21 16:12:18 2021
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

/* Named constants for Chart: '<S18>/Chart1' */
#define aaa_CALL_EVENT                 (-1)
#define aaa_IN_NO_ACTIVE_CHILD         ((uint8_T)0U)
#define aaa_IN_on1                     ((uint8_T)1U)
#define aaa_IN_on2                     ((uint8_T)2U)

/* Named constants for Chart: '<S25>/Chart' */
#define aaa_CALL_EVENT_n               (-1)
#define aaa_IN_NO_ACTIVE_CHILD_c       ((uint8_T)0U)
#define aaa_IN_jiance1_32              ((uint8_T)1U)
#define aaa_IN_jiance1_34              ((uint8_T)2U)
#define aaa_IN_jiance1_36              ((uint8_T)3U)
#define aaa_IN_jiaya1                  ((uint8_T)4U)
#define aaa_IN_jiaya1_1                ((uint8_T)5U)
#define aaa_IN_jiaya1_2                ((uint8_T)6U)
#define aaa_IN_jiaya1_3                ((uint8_T)7U)
#define aaa_IN_jiaya2                  ((uint8_T)8U)
#define aaa_IN_jiaya7_1                ((uint8_T)9U)
#define aaa_IN_jiaya7_2                ((uint8_T)10U)
#define aaa_IN_jiaya7_3                ((uint8_T)11U)
#define aaa_IN_off1                    ((uint8_T)1U)
#define aaa_IN_off10                   ((uint8_T)2U)
#define aaa_IN_off11                   ((uint8_T)3U)
#define aaa_IN_off111                  ((uint8_T)1U)
#define aaa_IN_off1_b                  ((uint8_T)12U)
#define aaa_IN_off2                    ((uint8_T)4U)
#define aaa_IN_off2_o                  ((uint8_T)2U)
#define aaa_IN_off2_ox                 ((uint8_T)13U)
#define aaa_IN_off3                    ((uint8_T)5U)
#define aaa_IN_off3_p                  ((uint8_T)3U)
#define aaa_IN_off3_p3                 ((uint8_T)14U)
#define aaa_IN_off4                    ((uint8_T)6U)
#define aaa_IN_off4_g                  ((uint8_T)4U)
#define aaa_IN_off4_gz                 ((uint8_T)15U)
#define aaa_IN_off5                    ((uint8_T)7U)
#define aaa_IN_off6                    ((uint8_T)8U)
#define aaa_IN_off6_h                  ((uint8_T)16U)
#define aaa_IN_off7                    ((uint8_T)9U)
#define aaa_IN_off8                    ((uint8_T)10U)
#define aaa_IN_off9                    ((uint8_T)11U)
#define aaa_IN_on1_a                   ((uint8_T)12U)
#define aaa_IN_on1_ah                  ((uint8_T)3U)
#define aaa_IN_on1_ahr                 ((uint8_T)5U)
#define aaa_IN_on1_ahrj                ((uint8_T)17U)
#define aaa_IN_on2_h                   ((uint8_T)13U)
#define aaa_IN_on2_hu                  ((uint8_T)6U)
#define aaa_IN_on2_huv                 ((uint8_T)5U)
#define aaa_IN_on3                     ((uint8_T)14U)
#define aaa_IN_on3_f                   ((uint8_T)7U)
#define aaa_IN_on3_fz                  ((uint8_T)6U)
#define aaa_IN_on4                     ((uint8_T)15U)
#define aaa_IN_on41                    ((uint8_T)16U)
#define aaa_IN_on5                     ((uint8_T)17U)
#define aaa_IN_on6                     ((uint8_T)18U)
#define aaa_IN_on7                     ((uint8_T)19U)
#define aaa_IN_on71                    ((uint8_T)20U)
#define aaa_IN_on72                    ((uint8_T)21U)
#define aaa_IN_on73                    ((uint8_T)22U)
#define aaa_IN_on8                     ((uint8_T)23U)
#define aaa_IN_shoudong                ((uint8_T)2U)
#define aaa_IN_start                   ((uint8_T)3U)
#define aaa_IN_start_c                 ((uint8_T)24U)
#define aaa_IN_xieya1                  ((uint8_T)4U)
#define aaa_IN_xieya1_1                ((uint8_T)5U)
#define aaa_IN_xieya1_2                ((uint8_T)6U)
#define aaa_IN_xieya1_3                ((uint8_T)7U)
#define aaa_IN_xieya2                  ((uint8_T)8U)
#define aaa_IN_xieya7_1                ((uint8_T)9U)
#define aaa_IN_xieya7_2                ((uint8_T)10U)
#define aaa_IN_xieya7_3                ((uint8_T)11U)
#define aaa_IN_xieya8                  ((uint8_T)12U)

/* Named constants for Chart: '<S26>/Chart' */
#define aaa_IN_SCjiaya                 ((uint8_T)1U)
#define aaa_IN_SCzhushui               ((uint8_T)2U)
#define aaa_IN_SXQjunya                ((uint8_T)3U)
#define aaa_IN_SXQxieya                ((uint8_T)4U)
#define aaa_IN_kaiguangai              ((uint8_T)5U)
#define aaa_IN_off5_p                  ((uint8_T)5U)
#define aaa_IN_off6_i                  ((uint8_T)6U)
#define aaa_IN_off7_p                  ((uint8_T)7U)
#define aaa_IN_on1_j                   ((uint8_T)8U)
#define aaa_IN_on2_c                   ((uint8_T)9U)
#define aaa_IN_on3_p                   ((uint8_T)10U)
#define aaa_IN_on4_p                   ((uint8_T)11U)
#define aaa_IN_on5_b                   ((uint8_T)12U)
#define aaa_IN_on6_n                   ((uint8_T)13U)
#define aaa_IN_on7_o                   ((uint8_T)14U)
#define aaa_IN_on8_n                   ((uint8_T)15U)
#define aaa_IN_start_i                 ((uint8_T)2U)
#define aaa_IN_start_ie                ((uint8_T)16U)
#define aaa_IN_zidong                  ((uint8_T)3U)

/* Named constants for Chart: '<S19>/jinjichuli' */
#define aaa_IN_A                       ((uint8_T)1U)
#define aaa_IN_MANUAL                  ((uint8_T)1U)
#define aaa_IN_end                     ((uint8_T)2U)
#define aaa_IN_off1_n                  ((uint8_T)3U)
#define aaa_IN_on                      ((uint8_T)2U)
#define aaa_IN_on1_n                   ((uint8_T)4U)

const real_T aaa_RGND = 0.0;           /* real_T ground */

/* Block signals (auto storage) */
B_aaa_T aaa_B;

/* Block states (auto storage) */
DW_aaa_T aaa_DW;

/* Real-time model */
RT_MODEL_aaa_T aaa_M_;
RT_MODEL_aaa_T *const aaa_M = &aaa_M_;

/* Forward declaration for local functions */
static void aaa_exit_internal_MANUAL(void);
static void aaa_MANUAL(void);
static void aaa_jiaya2_b(void);
static void aaa_jiaya7_2_g(void);
static void aaa_jiaya7_3_i(void);
static void aaa_off2_g(void);
static void aaa_off3_g(void);
static void aaa_off4_a(void);
static void aaa_SXQjunya_o(void);
static void aaa_SXQxieya_k(void);
static void aaa_zidong(void);
static void aaa_enter_atomic_start_c(void);
static void aaa_enter_atomic_start(void);
static void aaa_kaiguangai(void);
static void aaa_xieya2(void);
static void aaa_xieya7_1(void);
static void aaa_xieya7_2(void);
static void aaa_xieya7_3(void);
static void aaa_SXQxieya(void);
static void aaa_jiaya1_1(void);
static void aaa_jiaya1_2(void);
static void aaa_jiaya1_3(void);
static void aaa_jiaya2(void);
static void aaa_jiaya7_1(void);
static void aaa_jiaya7_2(void);
static void aaa_jiaya7_3(void);
static void aaa_off2(void);
static void aaa_off3(void);
static void aaa_off4(void);
static void aaa_SXQjunya(void);
static void aaa_shoudong(void);
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
 *    '<Root>/Subsystem3'
 *    '<Root>/Subsystem4'
 */
void aaa_Subsystem3_Init(B_Subsystem3_aaa_T *localB, P_Subsystem3_aaa_T *localP)
{
  /* SystemInitialize for Outport: '<S15>/Out1' */
  localB->Add = localP->Out1_Y0;
}

/*
 * Output and update for enable system:
 *    '<Root>/Subsystem3'
 *    '<Root>/Subsystem4'
 */
void aaa_Subsystem3(boolean_T rtu_Enable, real_T rtu_In1, B_Subsystem3_aaa_T
                    *localB, DW_Subsystem3_aaa_T *localDW, P_Subsystem3_aaa_T
                    *localP)
{
  /* Outputs for Enabled SubSystem: '<Root>/Subsystem3' incorporates:
   *  EnablePort: '<S15>/Enable'
   */
  if (rtu_Enable) {
    /* Sum: '<S15>/Add' incorporates:
     *  Constant: '<S15>/Constant'
     */
    localB->Add = rtu_In1 - localP->Constant_Value;
    srUpdateBC(localDW->Subsystem3_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<Root>/Subsystem3' */
}

/*
 * System initialize for atomic system:
 *    '<S18>/Chart1'
 *    '<S20>/Chart'
 */
void aaa_Chart1_Init(B_Chart1_aaa_T *localB, DW_Chart1_aaa_T *localDW)
{
  localDW->sfEvent = aaa_CALL_EVENT;
  localDW->is_active_c8_aaa = 0U;
  localDW->is_c8_aaa = aaa_IN_NO_ACTIVE_CHILD;
  localDW->x = 0.0;
  localB->t = 0.0;
}

/*
 * Output and update for atomic system:
 *    '<S18>/Chart1'
 *    '<S20>/Chart'
 */
void aaa_Chart1(real_T rtu_a, B_Chart1_aaa_T *localB, DW_Chart1_aaa_T *localDW)
{
  /* Gateway: guangaiquxian/Chart1 */
  localDW->sfEvent = aaa_CALL_EVENT;

  /* During: guangaiquxian/Chart1 */
  if (localDW->is_active_c8_aaa == 0U) {
    /* Entry: guangaiquxian/Chart1 */
    localDW->is_active_c8_aaa = 1U;

    /* Entry Internal: guangaiquxian/Chart1 */
    /* Transition: '<S53>:2' */
    localDW->is_c8_aaa = aaa_IN_on1;

    /* Entry 'on1': '<S53>:1' */
    localDW->x = 0.0;
    localB->t = 0.0;
  } else if (localDW->is_c8_aaa == aaa_IN_on1) {
    /* During 'on1': '<S53>:1' */
    if (rtu_a == 1.0) {
      /* Transition: '<S53>:5' */
      localDW->is_c8_aaa = aaa_IN_on2;

      /* Entry 'on2': '<S53>:3' */
      localDW->x++;
      localB->t = localDW->x * 0.002;
    }
  } else {
    /* During 'on2': '<S53>:3' */
    /* Transition: '<S53>:15' */
    if (rtu_a == 1.0) {
      /* Transition: '<S53>:16' */
      localDW->is_c8_aaa = aaa_IN_on2;

      /* Entry 'on2': '<S53>:3' */
      localDW->x++;
      localB->t = localDW->x * 0.002;
    } else {
      if (rtu_a == 0.0) {
        /* Transition: '<S53>:7' */
        localDW->is_c8_aaa = aaa_IN_on1;

        /* Entry 'on1': '<S53>:1' */
        localDW->x = 0.0;
        localB->t = 0.0;
      }
    }
  }
}

/* Function for Chart: '<S19>/jinjichuli' */
static void aaa_exit_internal_MANUAL(void)
{
  /* Exit Internal 'MANUAL': '<S54>:3' */
  /* Exit Internal 'kaigai': '<S54>:173' */
  aaa_DW.is_kaigai = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_DW.is_active_kaigai = 0U;

  /* Exit Internal 'yajin': '<S54>:50' */
  aaa_DW.is_yajin = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_DW.is_active_yajin = 0U;

  /* Exit Internal 'kiagai': '<S54>:44' */
  aaa_DW.is_kiagai = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_DW.is_active_kiagai = 0U;

  /* Exit Internal 'fa4_13': '<S54>:40' */
  aaa_DW.is_fa4_13 = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_DW.is_active_fa4_13 = 0U;

  /* Exit Internal 'fa4_11': '<S54>:31' */
  aaa_DW.is_fa4_11 = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_DW.is_active_fa4_11 = 0U;

  /* Exit Internal 'fa4_12': '<S54>:30' */
  aaa_DW.is_fa4_12 = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_DW.is_active_fa4_12 = 0U;

  /* Exit Internal 'fa4_10': '<S54>:29' */
  aaa_DW.is_fa4_10 = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_DW.is_active_fa4_10 = 0U;

  /* Exit Internal 'fa4_9': '<S54>:28' */
  aaa_DW.is_fa4_9 = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_DW.is_active_fa4_9 = 0U;

  /* Exit Internal 'fa4_7': '<S54>:19' */
  aaa_DW.is_fa4_7 = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_DW.is_active_fa4_7 = 0U;

  /* Exit Internal 'fa4_8': '<S54>:18' */
  aaa_DW.is_fa4_8 = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_DW.is_active_fa4_8 = 0U;

  /* Exit Internal 'fa4_6': '<S54>:17' */
  aaa_DW.is_fa4_6 = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_DW.is_active_fa4_6 = 0U;

  /* Exit Internal 'fa4_5': '<S54>:16' */
  aaa_DW.is_fa4_5 = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_DW.is_active_fa4_5 = 0U;

  /* Exit Internal 'fa4_1': '<S54>:7' */
  aaa_DW.is_fa4_1 = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_DW.is_active_fa4_1 = 0U;

  /* Exit Internal 'fa4_3': '<S54>:6' */
  aaa_DW.is_fa4_3 = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_DW.is_active_fa4_3 = 0U;

  /* Exit Internal 'fa4_2': '<S54>:5' */
  aaa_DW.is_fa4_2 = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_DW.is_active_fa4_2 = 0U;

  /* Exit Internal 'fa4_4': '<S54>:4' */
  aaa_DW.is_fa4_4 = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_DW.is_active_fa4_4 = 0U;
}

/* Function for Chart: '<S19>/jinjichuli' */
static void aaa_MANUAL(void)
{
  /* During 'MANUAL': '<S54>:3' */
  if (aaa_B.jiting == 1.0) {
    /* Transition: '<S54>:98' */
    aaa_exit_internal_MANUAL();
    aaa_DW.is_c2_aaa = aaa_IN_end;

    /* Entry 'end': '<S54>:43' */
    aaa_B.diancifa11_1 = 0.0;
    aaa_B.diancifa11_2 = 0.0;
    aaa_B.diancifa11_5 = 0.0;
    aaa_B.diancifa20 = 0.0;
    aaa_B.diancifa16_1 = 0.0;
    aaa_B.diancifa3 = 0.0;
    aaa_B.diancifa21 = 0.0;
    aaa_B.xuansong = 0.0;
    aaa_B.xuanjin = 0.0;
    aaa_B.suoding = 0.0;
    aaa_B.jiesuo = 0.0;
    aaa_B.bililiuliangfa18_1 = 0.0;
    aaa_B.bililiuliangfa18_2 = 0.0;
    aaa_B.bililiuliangfa18_3 = 0.0;
    aaa_B.bililiuliangfa18_4 = 0.0;
    aaa_B.kaiguangaifa = 0.0;
  } else {
    /* During 'fa4_4': '<S54>:4' */
    if (aaa_DW.is_fa4_4 == aaa_IN_A) {
      /* During 'A': '<S54>:8' */
      if (aaa_B.fa20 == 1.0) {
        /* Transition: '<S54>:66' */
        aaa_DW.is_fa4_4 = aaa_IN_on;

        /* Entry 'on': '<S54>:12' */
        aaa_B.diancifa20 = 1.0;
      }
    } else {
      /* During 'on': '<S54>:12' */
      if (aaa_B.fa20 == 0.0) {
        /* Transition: '<S54>:62' */
        aaa_DW.is_fa4_4 = aaa_IN_A;

        /* Entry 'A': '<S54>:8' */
        aaa_B.diancifa20 = 0.0;
      }
    }

    /* During 'fa4_2': '<S54>:5' */
    if (aaa_DW.is_fa4_2 == aaa_IN_A) {
      /* During 'A': '<S54>:9' */
      if (aaa_B.fa11_2 == 1.0) {
        /* Transition: '<S54>:67' */
        aaa_DW.is_fa4_2 = aaa_IN_on;

        /* Entry 'on': '<S54>:13' */
        aaa_B.diancifa11_2 = 1.0;
      }
    } else {
      /* During 'on': '<S54>:13' */
      if (aaa_B.fa11_2 == 0.0) {
        /* Transition: '<S54>:63' */
        aaa_DW.is_fa4_2 = aaa_IN_A;

        /* Entry 'A': '<S54>:9' */
        aaa_B.diancifa11_2 = 0.0;
      }
    }

    /* During 'fa4_3': '<S54>:6' */
    if (aaa_DW.is_fa4_3 == aaa_IN_A) {
      /* During 'A': '<S54>:10' */
      if (aaa_B.fa11_5 == 1.0) {
        /* Transition: '<S54>:68' */
        aaa_DW.is_fa4_3 = aaa_IN_on;

        /* Entry 'on': '<S54>:14' */
        aaa_B.diancifa11_5 = 1.0;
      }
    } else {
      /* During 'on': '<S54>:14' */
      if (aaa_B.fa11_5 == 0.0) {
        /* Transition: '<S54>:64' */
        aaa_DW.is_fa4_3 = aaa_IN_A;

        /* Entry 'A': '<S54>:10' */
        aaa_B.diancifa11_5 = 0.0;
      }
    }

    /* During 'fa4_1': '<S54>:7' */
    if (aaa_DW.is_fa4_1 == aaa_IN_A) {
      /* During 'A': '<S54>:11' */
      if (aaa_B.fa11_1 == 1.0) {
        /* Transition: '<S54>:69' */
        aaa_DW.is_fa4_1 = aaa_IN_on;

        /* Entry 'on': '<S54>:15' */
        aaa_B.diancifa11_1 = 1.0;
      }
    } else {
      /* During 'on': '<S54>:15' */
      if (aaa_B.fa11_1 == 0.0) {
        /* Transition: '<S54>:65' */
        aaa_DW.is_fa4_1 = aaa_IN_A;

        /* Entry 'A': '<S54>:11' */
        aaa_B.diancifa11_1 = 0.0;
      }
    }

    /* During 'fa4_5': '<S54>:16' */
    if (aaa_DW.is_fa4_5 == aaa_IN_A) {
      /* During 'A': '<S54>:20' */
      if (aaa_B.fa16_1 == 1.0) {
        /* Transition: '<S54>:78' */
        aaa_DW.is_fa4_5 = aaa_IN_on;

        /* Entry 'on': '<S54>:24' */
        aaa_B.diancifa16_1 = 1.0;
      }
    } else {
      /* During 'on': '<S54>:24' */
      if (aaa_B.fa16_1 == 0.0) {
        /* Transition: '<S54>:74' */
        aaa_DW.is_fa4_5 = aaa_IN_A;

        /* Entry 'A': '<S54>:20' */
        aaa_B.diancifa16_1 = 0.0;
      }
    }

    /* During 'fa4_6': '<S54>:17' */
    if (aaa_DW.is_fa4_6 == aaa_IN_A) {
      /* During 'A': '<S54>:21' */
      if (aaa_B.fa3 == 1.0) {
        /* Transition: '<S54>:79' */
        aaa_DW.is_fa4_6 = aaa_IN_on;

        /* Entry 'on': '<S54>:25' */
        aaa_B.diancifa3 = 1.0;
      }
    } else {
      /* During 'on': '<S54>:25' */
      if (aaa_B.fa3 == 0.0) {
        /* Transition: '<S54>:75' */
        aaa_DW.is_fa4_6 = aaa_IN_A;

        /* Entry 'A': '<S54>:21' */
        aaa_B.diancifa3 = 0.0;
      }
    }

    /* During 'fa4_8': '<S54>:18' */
    if (aaa_DW.is_fa4_8 == aaa_IN_A) {
      /* During 'A': '<S54>:22' */
      if (aaa_B.suodingmingling == 1.0) {
        /* Transition: '<S54>:80' */
        aaa_DW.is_fa4_8 = aaa_IN_on;

        /* Entry 'on': '<S54>:26' */
        aaa_B.xuansong = 1.0;
      }
    } else {
      /* During 'on': '<S54>:26' */
      if (aaa_B.suodingmingling == 0.0) {
        /* Transition: '<S54>:76' */
        aaa_DW.is_fa4_8 = aaa_IN_A;

        /* Entry 'A': '<S54>:22' */
        aaa_B.xuansong = 0.0;
      }
    }

    /* During 'fa4_7': '<S54>:19' */
    if (aaa_DW.is_fa4_7 == aaa_IN_A) {
      /* During 'A': '<S54>:23' */
      if (aaa_B.fa21 == 1.0) {
        /* Transition: '<S54>:81' */
        aaa_DW.is_fa4_7 = aaa_IN_on;

        /* Entry 'on': '<S54>:27' */
        aaa_B.diancifa21 = 1.0;
      }
    } else {
      /* During 'on': '<S54>:27' */
      if (aaa_B.fa21 == 0.0) {
        /* Transition: '<S54>:77' */
        aaa_DW.is_fa4_7 = aaa_IN_A;

        /* Entry 'A': '<S54>:23' */
        aaa_B.diancifa21 = 0.0;
      }
    }

    /* During 'fa4_9': '<S54>:28' */
    if (aaa_DW.is_fa4_9 == aaa_IN_A) {
      /* During 'A': '<S54>:32' */
      if (aaa_B.jiesuomingling == 1.0) {
        /* Transition: '<S54>:90' */
        aaa_DW.is_fa4_9 = aaa_IN_on;

        /* Entry 'on': '<S54>:36' */
        aaa_B.xuanjin = 1.0;
      }
    } else {
      /* During 'on': '<S54>:36' */
      if (aaa_B.jiesuomingling == 0.0) {
        /* Transition: '<S54>:86' */
        aaa_DW.is_fa4_9 = aaa_IN_A;

        /* Entry 'A': '<S54>:32' */
        aaa_B.xuanjin = 0.0;
      }
    }

    /* During 'fa4_10': '<S54>:29' */
    if (aaa_DW.is_fa4_10 == aaa_IN_A) {
      /* During 'A': '<S54>:33' */
      if (aaa_B.xuansongmingling == 1.0) {
        /* Transition: '<S54>:91' */
        aaa_DW.is_fa4_10 = aaa_IN_on;

        /* Entry 'on': '<S54>:37' */
        aaa_B.suoding = 1.0;
      }
    } else {
      /* During 'on': '<S54>:37' */
      if (aaa_B.xuansongmingling == 0.0) {
        /* Transition: '<S54>:87' */
        aaa_DW.is_fa4_10 = aaa_IN_A;

        /* Entry 'A': '<S54>:33' */
        aaa_B.suoding = 0.0;
      }
    }

    /* During 'fa4_12': '<S54>:30' */
    if (aaa_DW.is_fa4_12 == aaa_IN_A) {
      /* During 'A': '<S54>:34' */
      if (aaa_B.fa18_1 != 0.0) {
        /* Transition: '<S54>:92' */
        aaa_DW.is_fa4_12 = aaa_IN_on;

        /* Entry 'on': '<S54>:38' */
        aaa_B.bililiuliangfa18_1 = aaa_B.fa18_1;
      }
    } else {
      /* During 'on': '<S54>:38' */
      if (aaa_B.fa18_1 != 0.0) {
        /* Transition: '<S54>:179' */
        aaa_DW.is_fa4_12 = aaa_IN_on;

        /* Entry 'on': '<S54>:38' */
        aaa_B.bililiuliangfa18_1 = aaa_B.fa18_1;
      } else {
        if (aaa_B.fa18_1 == 0.0) {
          /* Transition: '<S54>:88' */
          aaa_DW.is_fa4_12 = aaa_IN_A;

          /* Entry 'A': '<S54>:34' */
          aaa_B.bililiuliangfa18_1 = 0.0;
        }
      }
    }

    /* During 'fa4_11': '<S54>:31' */
    if (aaa_DW.is_fa4_11 == aaa_IN_A) {
      /* During 'A': '<S54>:35' */
      if (aaa_B.xuanjinmingling == 1.0) {
        /* Transition: '<S54>:93' */
        aaa_DW.is_fa4_11 = aaa_IN_on;

        /* Entry 'on': '<S54>:39' */
        aaa_B.jiesuo = 1.0;
      }
    } else {
      /* During 'on': '<S54>:39' */
      if (aaa_B.xuanjinmingling == 0.0) {
        /* Transition: '<S54>:89' */
        aaa_DW.is_fa4_11 = aaa_IN_A;

        /* Entry 'A': '<S54>:35' */
        aaa_B.jiesuo = 0.0;
      }
    }

    /* During 'fa4_13': '<S54>:40' */
    if (aaa_DW.is_fa4_13 == aaa_IN_A) {
      /* During 'A': '<S54>:41' */
      if (aaa_B.fa18_2 != 0.0) {
        /* Transition: '<S54>:96' */
        aaa_DW.is_fa4_13 = aaa_IN_on;

        /* Entry 'on': '<S54>:42' */
        aaa_B.bililiuliangfa18_2 = aaa_B.fa18_2;
      }
    } else {
      /* During 'on': '<S54>:42' */
      if (aaa_B.fa18_2 != 0.0) {
        /* Transition: '<S54>:180' */
        aaa_DW.is_fa4_13 = aaa_IN_on;

        /* Entry 'on': '<S54>:42' */
        aaa_B.bililiuliangfa18_2 = aaa_B.fa18_2;
      } else {
        if (aaa_B.fa18_2 == 0.0) {
          /* Transition: '<S54>:95' */
          aaa_DW.is_fa4_13 = aaa_IN_A;

          /* Entry 'A': '<S54>:41' */
          aaa_B.bililiuliangfa18_2 = 0.0;
        }
      }
    }

    /* During 'kiagai': '<S54>:44' */
    if (aaa_DW.is_kiagai == aaa_IN_A) {
      /* During 'A': '<S54>:45' */
      if (aaa_B.fa18_3 != 0.0) {
        /* Transition: '<S54>:100' */
        aaa_DW.is_kiagai = aaa_IN_on;

        /* Entry 'on': '<S54>:46' */
        aaa_B.bililiuliangfa18_3 = aaa_B.fa18_3;
      }
    } else {
      /* During 'on': '<S54>:46' */
      if (aaa_B.fa18_3 != 0.0) {
        /* Transition: '<S54>:181' */
        aaa_DW.is_kiagai = aaa_IN_on;

        /* Entry 'on': '<S54>:46' */
        aaa_B.bililiuliangfa18_3 = aaa_B.fa18_3;
      } else {
        if (aaa_B.fa18_3 == 0.0) {
          /* Transition: '<S54>:99' */
          aaa_DW.is_kiagai = aaa_IN_A;

          /* Entry 'A': '<S54>:45' */
          aaa_B.bililiuliangfa18_3 = 0.0;
        }
      }
    }

    /* During 'yajin': '<S54>:50' */
    if (aaa_DW.is_yajin == aaa_IN_A) {
      /* During 'A': '<S54>:51' */
      if (aaa_B.fa18_4 != 0.0) {
        /* Transition: '<S54>:106' */
        aaa_DW.is_yajin = aaa_IN_on;

        /* Entry 'on': '<S54>:52' */
        aaa_B.bililiuliangfa18_4 = aaa_B.fa18_4;
      }
    } else {
      /* During 'on': '<S54>:52' */
      if (aaa_B.fa18_4 != 0.0) {
        /* Transition: '<S54>:184' */
        aaa_DW.is_yajin = aaa_IN_on;

        /* Entry 'on': '<S54>:52' */
        aaa_B.bililiuliangfa18_4 = aaa_B.fa18_4;
      } else {
        if (aaa_B.fa18_4 == 0.0) {
          /* Transition: '<S54>:105' */
          aaa_DW.is_yajin = aaa_IN_A;

          /* Entry 'A': '<S54>:51' */
          aaa_B.bililiuliangfa18_4 = 0.0;
        }
      }
    }

    /* During 'kaigai': '<S54>:173' */
    if (aaa_DW.is_kaigai == aaa_IN_A) {
      /* During 'A': '<S54>:177' */
      if (aaa_B.fa_kgg != 0.0) {
        /* Transition: '<S54>:176' */
        aaa_DW.is_kaigai = aaa_IN_on;

        /* Entry 'on': '<S54>:178' */
        aaa_B.kaiguangaifa = aaa_B.fa_kgg;
      }
    } else {
      /* During 'on': '<S54>:178' */
      if (aaa_B.fa_kgg != 0.0) {
        /* Transition: '<S54>:183' */
        aaa_DW.is_kaigai = aaa_IN_on;

        /* Entry 'on': '<S54>:178' */
        aaa_B.kaiguangaifa = aaa_B.fa_kgg;
      } else {
        if (aaa_B.fa_kgg == 0.0) {
          /* Transition: '<S54>:175' */
          aaa_DW.is_kaigai = aaa_IN_A;

          /* Entry 'A': '<S54>:177' */
          aaa_B.kaiguangaifa = 0.0;
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
static void aaa_jiaya2_b(void)
{
  boolean_T guard1 = false;

  /* During 'jiaya2': '<S37>:1239' */
  /* Transition: '<S37>:1208' */
  guard1 = false;
  if (aaa_DW.p0_1 >= aaa_B.u_l) {
    /* Transition: '<S37>:1212' */
    if ((aaa_B.DataTypeConversion27[2] < aaa_B.u_l) &&
        (aaa_B.DataTypeConversion27[4] < aaa_B.u_l)) {
      /* Transition: '<S37>:1203' */
      aaa_DW.is_SXQjunya = aaa_IN_jiaya7_1;
      aaa_DW.temporalCounter_i1_e = 0U;

      /* Entry 'jiaya7_1': '<S37>:1237' */
      aaa_B.bililiuliangfa18_3_j = 1.0;
      aaa_B.bililiuliangfa18_4_e = 1.0;
    } else if ((aaa_B.DataTypeConversion27[2] >= aaa_B.u_l) &&
               (aaa_B.DataTypeConversion27[4] < aaa_B.u_l)) {
      /* Transition: '<S37>:1209' */
      aaa_DW.is_SXQjunya = aaa_IN_jiaya7_2;
      aaa_DW.temporalCounter_i1_e = 0U;

      /* Entry 'jiaya7_2': '<S37>:1243' */
      aaa_B.bililiuliangfa18_3_j = 1.0;
      aaa_B.bililiuliangfa18_4_e = 0.0;
    } else if ((aaa_B.DataTypeConversion27[2] < aaa_B.u_l) &&
               (aaa_B.DataTypeConversion27[4] >= aaa_B.u_l)) {
      /* Transition: '<S37>:1207' */
      aaa_DW.is_SXQjunya = aaa_IN_jiaya7_3;
      aaa_DW.temporalCounter_i1_e = 0U;

      /* Entry 'jiaya7_3': '<S37>:1238' */
      aaa_B.bililiuliangfa18_3_j = 0.0;
      aaa_B.bililiuliangfa18_4_e = 1.0;
    } else if ((aaa_DW.temporalCounter_i1_e >= 250) &&
               ((aaa_B.DataTypeConversion27[2] >= aaa_B.u_l) &&
                (aaa_B.DataTypeConversion27[4] >= aaa_B.u_l))) {
      /* Transition: '<S37>:1222' */
      aaa_DW.is_SXQjunya = aaa_IN_off4_gz;
      aaa_DW.temporalCounter_i1_e = 0U;

      /* Entry 'off4': '<S37>:1246' */
      aaa_B.bililiuliangfa18_3_j = 0.0;
      aaa_B.bililiuliangfa18_4_e = 0.0;
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    if (aaa_DW.p0_1 < aaa_B.u_l) {
      /* Transition: '<S37>:1211' */
      if ((aaa_B.DataTypeConversion27[2] < aaa_DW.p0_1) &&
          (aaa_B.DataTypeConversion27[4] < aaa_DW.p0_1)) {
        /* Transition: '<S37>:1205' */
        aaa_DW.is_SXQjunya = aaa_IN_jiaya1_1;

        /* Entry 'jiaya1_1': '<S37>:1236' */
        aaa_B.bililiuliangfa18_3_j = 1.0;
        aaa_B.bililiuliangfa18_4_e = 1.0;
      } else if ((aaa_B.DataTypeConversion27[2] >= aaa_DW.p0_1) &&
                 (aaa_B.DataTypeConversion27[4] < aaa_DW.p0_1)) {
        /* Transition: '<S37>:1218' */
        aaa_DW.is_SXQjunya = aaa_IN_jiaya1_2;

        /* Entry 'jiaya1_2': '<S37>:1244' */
        aaa_B.bililiuliangfa18_3_j = 1.0;
        aaa_B.bililiuliangfa18_4_e = 0.0;
      } else if ((aaa_B.DataTypeConversion27[2] < aaa_DW.p0_1) &&
                 (aaa_B.DataTypeConversion27[4] >= aaa_DW.p0_1)) {
        /* Transition: '<S37>:1213' */
        aaa_DW.is_SXQjunya = aaa_IN_jiaya1_3;

        /* Entry 'jiaya1_3': '<S37>:1245' */
        aaa_B.bililiuliangfa18_3_j = 0.0;
        aaa_B.bililiuliangfa18_4_e = 1.0;
      } else {
        if ((aaa_B.DataTypeConversion27[2] >= aaa_DW.p0_1) &&
            (aaa_B.DataTypeConversion27[4] >= aaa_DW.p0_1)) {
          /* Transition: '<S37>:1202' */
          aaa_DW.is_SXQjunya = aaa_IN_jiaya2;
          aaa_DW.temporalCounter_i1_e = 0U;

          /* Entry 'jiaya2': '<S37>:1239' */
          aaa_B.bililiuliangfa18_3_j = 1.0;
          aaa_B.bililiuliangfa18_4_e = 1.0;
          aaa_DW.p0_1 += 0.03;
        }
      }
    }
  }
}

/* Function for Chart: '<S26>/Chart' */
static void aaa_jiaya7_2_g(void)
{
  /* During 'jiaya7_2': '<S37>:1243' */
  /* Transition: '<S37>:1214' */
  if ((aaa_B.DataTypeConversion27[2] < aaa_B.u_l) &&
      (aaa_B.DataTypeConversion27[4] < aaa_B.u_l)) {
    /* Transition: '<S37>:1203' */
    aaa_DW.is_SXQjunya = aaa_IN_jiaya7_1;
    aaa_DW.temporalCounter_i1_e = 0U;

    /* Entry 'jiaya7_1': '<S37>:1237' */
    aaa_B.bililiuliangfa18_3_j = 1.0;
    aaa_B.bililiuliangfa18_4_e = 1.0;
  } else if ((aaa_B.DataTypeConversion27[2] >= aaa_B.u_l) &&
             (aaa_B.DataTypeConversion27[4] < aaa_B.u_l)) {
    /* Transition: '<S37>:1209' */
    aaa_DW.is_SXQjunya = aaa_IN_jiaya7_2;
    aaa_DW.temporalCounter_i1_e = 0U;

    /* Entry 'jiaya7_2': '<S37>:1243' */
    aaa_B.bililiuliangfa18_3_j = 1.0;
    aaa_B.bililiuliangfa18_4_e = 0.0;
  } else if ((aaa_B.DataTypeConversion27[2] < aaa_B.u_l) &&
             (aaa_B.DataTypeConversion27[4] >= aaa_B.u_l)) {
    /* Transition: '<S37>:1207' */
    aaa_DW.is_SXQjunya = aaa_IN_jiaya7_3;
    aaa_DW.temporalCounter_i1_e = 0U;

    /* Entry 'jiaya7_3': '<S37>:1238' */
    aaa_B.bililiuliangfa18_3_j = 0.0;
    aaa_B.bililiuliangfa18_4_e = 1.0;
  } else {
    if ((aaa_DW.temporalCounter_i1_e >= 250) && ((aaa_B.DataTypeConversion27[2] >=
          aaa_B.u_l) && (aaa_B.DataTypeConversion27[4] >= aaa_B.u_l))) {
      /* Transition: '<S37>:1222' */
      aaa_DW.is_SXQjunya = aaa_IN_off4_gz;
      aaa_DW.temporalCounter_i1_e = 0U;

      /* Entry 'off4': '<S37>:1246' */
      aaa_B.bililiuliangfa18_3_j = 0.0;
      aaa_B.bililiuliangfa18_4_e = 0.0;
    }
  }
}

/* Function for Chart: '<S26>/Chart' */
static void aaa_jiaya7_3_i(void)
{
  /* During 'jiaya7_3': '<S37>:1238' */
  /* Transition: '<S37>:1201' */
  if ((aaa_B.DataTypeConversion27[2] < aaa_B.u_l) &&
      (aaa_B.DataTypeConversion27[4] < aaa_B.u_l)) {
    /* Transition: '<S37>:1203' */
    aaa_DW.is_SXQjunya = aaa_IN_jiaya7_1;
    aaa_DW.temporalCounter_i1_e = 0U;

    /* Entry 'jiaya7_1': '<S37>:1237' */
    aaa_B.bililiuliangfa18_3_j = 1.0;
    aaa_B.bililiuliangfa18_4_e = 1.0;
  } else if ((aaa_B.DataTypeConversion27[2] >= aaa_B.u_l) &&
             (aaa_B.DataTypeConversion27[4] < aaa_B.u_l)) {
    /* Transition: '<S37>:1209' */
    aaa_DW.is_SXQjunya = aaa_IN_jiaya7_2;
    aaa_DW.temporalCounter_i1_e = 0U;

    /* Entry 'jiaya7_2': '<S37>:1243' */
    aaa_B.bililiuliangfa18_3_j = 1.0;
    aaa_B.bililiuliangfa18_4_e = 0.0;
  } else if ((aaa_B.DataTypeConversion27[2] < aaa_B.u_l) &&
             (aaa_B.DataTypeConversion27[4] >= aaa_B.u_l)) {
    /* Transition: '<S37>:1207' */
    aaa_DW.is_SXQjunya = aaa_IN_jiaya7_3;
    aaa_DW.temporalCounter_i1_e = 0U;

    /* Entry 'jiaya7_3': '<S37>:1238' */
    aaa_B.bililiuliangfa18_3_j = 0.0;
    aaa_B.bililiuliangfa18_4_e = 1.0;
  } else {
    if ((aaa_DW.temporalCounter_i1_e >= 250) && ((aaa_B.DataTypeConversion27[2] >=
          aaa_B.u_l) && (aaa_B.DataTypeConversion27[4] >= aaa_B.u_l))) {
      /* Transition: '<S37>:1222' */
      aaa_DW.is_SXQjunya = aaa_IN_off4_gz;
      aaa_DW.temporalCounter_i1_e = 0U;

      /* Entry 'off4': '<S37>:1246' */
      aaa_B.bililiuliangfa18_3_j = 0.0;
      aaa_B.bililiuliangfa18_4_e = 0.0;
    }
  }
}

/* Function for Chart: '<S26>/Chart' */
static void aaa_off2_g(void)
{
  boolean_T guard1 = false;

  /* During 'off2': '<S37>:1248' */
  if (aaa_DW.temporalCounter_i1_e >= 1000) {
    /* Transition: '<S37>:1234' */
    guard1 = false;
    if ((aaa_B.DataTypeConversion27[2] < aaa_B.u_l) ||
        (aaa_B.DataTypeConversion27[2] > aaa_B.u_l + 0.005) ||
        (aaa_B.DataTypeConversion27[4] < aaa_B.u_l) ||
        (aaa_B.DataTypeConversion27[4] > aaa_B.u_l + 0.005)) {
      /* Transition: '<S37>:1229' */
      if ((aaa_B.DataTypeConversion27[2] <= aaa_B.u_l + 0.005) &&
          (aaa_B.DataTypeConversion27[4] > aaa_B.u_l + 0.005)) {
        /* Transition: '<S37>:1226' */
        aaa_DW.is_SXQjunya = aaa_IN_jiance1_34;
        aaa_DW.temporalCounter_i1_e = 0U;

        /* Entry 'jiance1_34': '<S37>:1249' */
        aaa_B.bililiuliangfa18_1_f = 1.0;
        aaa_B.bililiuliangfa18_2_l = 0.0;
      } else if ((aaa_B.DataTypeConversion27[2] >= aaa_B.u_l) &&
                 (aaa_B.DataTypeConversion27[4] >= aaa_B.u_l) &&
                 (aaa_B.DataTypeConversion27[2] <= aaa_B.u_l + 0.005) &&
                 (aaa_B.DataTypeConversion27[4] <= aaa_B.u_l + 0.005)) {
        /* Transition: '<S37>:1227' */
        aaa_DW.is_SXQjunya = aaa_IN_off2_ox;
        aaa_DW.temporalCounter_i1_e = 0U;

        /* Entry 'off2': '<S37>:1248' */
        aaa_B.bililiuliangfa18_1_f = 0.0;
        aaa_B.bililiuliangfa18_2_l = 0.0;
        aaa_B.bililiuliangfa18_3_j = 0.0;
        aaa_B.bililiuliangfa18_4_e = 0.0;
      } else if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_l + 0.005) &&
                 (aaa_B.DataTypeConversion27[4] <= aaa_B.u_l + 0.005)) {
        /* Transition: '<S37>:1231' */
        aaa_DW.is_SXQjunya = aaa_IN_jiance1_36;
        aaa_DW.temporalCounter_i1_e = 0U;

        /* Entry 'jiance1_36': '<S37>:1251' */
        aaa_B.bililiuliangfa18_1_f = 0.0;
        aaa_B.bililiuliangfa18_2_l = 1.0;
      } else if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_l + 0.005) &&
                 (aaa_B.DataTypeConversion27[4] > aaa_B.u_l + 0.005)) {
        /* Transition: '<S37>:1233' */
        aaa_DW.is_SXQjunya = aaa_IN_jiance1_32;
        aaa_DW.temporalCounter_i1_e = 0U;

        /* Entry 'jiance1_32': '<S37>:1250' */
        aaa_B.bililiuliangfa18_1_f = 1.0;
        aaa_B.bililiuliangfa18_2_l = 1.0;
      } else if ((aaa_DW.temporalCounter_i1_e >= 250) &&
                 ((aaa_B.DataTypeConversion27[2] <= aaa_B.u_l + 0.005) &&
                  (aaa_B.DataTypeConversion27[4] <= aaa_B.u_l + 0.005))) {
        /* Transition: '<S37>:1223' */
        aaa_DW.is_SXQjunya = aaa_IN_off3_p3;
        aaa_DW.temporalCounter_i1_e = 0U;

        /* Entry 'off3': '<S37>:1247' */
        aaa_B.bililiuliangfa18_1_f = 0.0;
        aaa_B.bililiuliangfa18_2_l = 0.0;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      if ((aaa_B.DataTypeConversion27[2] >= aaa_B.u_l) &&
          (aaa_B.DataTypeConversion27[2] <= aaa_B.u_l + 0.005) &&
          (aaa_B.DataTypeConversion27[4] >= aaa_B.u_l) &&
          (aaa_B.DataTypeConversion27[4] <= aaa_B.u_l + 0.005)) {
        /* Transition: '<S37>:1235' */
        aaa_DW.is_SXQjunya = aaa_IN_off6_h;
        aaa_DW.temporalCounter_i1_e = 0U;

        /* Entry 'off6': '<S37>:1252' */
        aaa_B.diancifa11_1_k = 0.0;
        aaa_B.diancifa11_5_b = 0.0;
        aaa_B.SXQjunyawancheng = 1.0;
      }
    }
  }
}

/* Function for Chart: '<S26>/Chart' */
static void aaa_off3_g(void)
{
  boolean_T guard1 = false;

  /* During 'off3': '<S37>:1247' */
  guard1 = false;
  if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_l + 0.005) ||
      (aaa_B.DataTypeConversion27[4] > aaa_B.u_l + 0.005)) {
    /* Transition: '<S37>:1225' */
    if ((aaa_B.DataTypeConversion27[2] <= aaa_B.u_l + 0.005) &&
        (aaa_B.DataTypeConversion27[4] > aaa_B.u_l + 0.005)) {
      /* Transition: '<S37>:1226' */
      aaa_DW.is_SXQjunya = aaa_IN_jiance1_34;
      aaa_DW.temporalCounter_i1_e = 0U;

      /* Entry 'jiance1_34': '<S37>:1249' */
      aaa_B.bililiuliangfa18_1_f = 1.0;
      aaa_B.bililiuliangfa18_2_l = 0.0;
    } else if ((aaa_B.DataTypeConversion27[2] >= aaa_B.u_l) &&
               (aaa_B.DataTypeConversion27[4] >= aaa_B.u_l) &&
               (aaa_B.DataTypeConversion27[2] <= aaa_B.u_l + 0.005) &&
               (aaa_B.DataTypeConversion27[4] <= aaa_B.u_l + 0.005)) {
      /* Transition: '<S37>:1227' */
      aaa_DW.is_SXQjunya = aaa_IN_off2_ox;
      aaa_DW.temporalCounter_i1_e = 0U;

      /* Entry 'off2': '<S37>:1248' */
      aaa_B.bililiuliangfa18_1_f = 0.0;
      aaa_B.bililiuliangfa18_2_l = 0.0;
      aaa_B.bililiuliangfa18_3_j = 0.0;
      aaa_B.bililiuliangfa18_4_e = 0.0;
    } else if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_l + 0.005) &&
               (aaa_B.DataTypeConversion27[4] <= aaa_B.u_l + 0.005)) {
      /* Transition: '<S37>:1231' */
      aaa_DW.is_SXQjunya = aaa_IN_jiance1_36;
      aaa_DW.temporalCounter_i1_e = 0U;

      /* Entry 'jiance1_36': '<S37>:1251' */
      aaa_B.bililiuliangfa18_1_f = 0.0;
      aaa_B.bililiuliangfa18_2_l = 1.0;
    } else if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_l + 0.005) &&
               (aaa_B.DataTypeConversion27[4] > aaa_B.u_l + 0.005)) {
      /* Transition: '<S37>:1233' */
      aaa_DW.is_SXQjunya = aaa_IN_jiance1_32;
      aaa_DW.temporalCounter_i1_e = 0U;

      /* Entry 'jiance1_32': '<S37>:1250' */
      aaa_B.bililiuliangfa18_1_f = 1.0;
      aaa_B.bililiuliangfa18_2_l = 1.0;
    } else if ((aaa_DW.temporalCounter_i1_e >= 250) &&
               ((aaa_B.DataTypeConversion27[2] <= aaa_B.u_l + 0.005) &&
                (aaa_B.DataTypeConversion27[4] <= aaa_B.u_l + 0.005))) {
      /* Transition: '<S37>:1223' */
      aaa_DW.is_SXQjunya = aaa_IN_off3_p3;
      aaa_DW.temporalCounter_i1_e = 0U;

      /* Entry 'off3': '<S37>:1247' */
      aaa_B.bililiuliangfa18_1_f = 0.0;
      aaa_B.bililiuliangfa18_2_l = 0.0;
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    if ((aaa_B.DataTypeConversion27[2] <= aaa_B.u_l + 0.005) &&
        (aaa_B.DataTypeConversion27[4] <= aaa_B.u_l + 0.005)) {
      /* Transition: '<S37>:1220' */
      if ((aaa_B.DataTypeConversion27[2] < aaa_B.u_l) &&
          (aaa_B.DataTypeConversion27[4] < aaa_B.u_l)) {
        /* Transition: '<S37>:1203' */
        aaa_DW.is_SXQjunya = aaa_IN_jiaya7_1;
        aaa_DW.temporalCounter_i1_e = 0U;

        /* Entry 'jiaya7_1': '<S37>:1237' */
        aaa_B.bililiuliangfa18_3_j = 1.0;
        aaa_B.bililiuliangfa18_4_e = 1.0;
      } else if ((aaa_B.DataTypeConversion27[2] >= aaa_B.u_l) &&
                 (aaa_B.DataTypeConversion27[4] < aaa_B.u_l)) {
        /* Transition: '<S37>:1209' */
        aaa_DW.is_SXQjunya = aaa_IN_jiaya7_2;
        aaa_DW.temporalCounter_i1_e = 0U;

        /* Entry 'jiaya7_2': '<S37>:1243' */
        aaa_B.bililiuliangfa18_3_j = 1.0;
        aaa_B.bililiuliangfa18_4_e = 0.0;
      } else if ((aaa_B.DataTypeConversion27[2] < aaa_B.u_l) &&
                 (aaa_B.DataTypeConversion27[4] >= aaa_B.u_l)) {
        /* Transition: '<S37>:1207' */
        aaa_DW.is_SXQjunya = aaa_IN_jiaya7_3;
        aaa_DW.temporalCounter_i1_e = 0U;

        /* Entry 'jiaya7_3': '<S37>:1238' */
        aaa_B.bililiuliangfa18_3_j = 0.0;
        aaa_B.bililiuliangfa18_4_e = 1.0;
      } else {
        if ((aaa_DW.temporalCounter_i1_e >= 250) &&
            ((aaa_B.DataTypeConversion27[2] >= aaa_B.u_l) &&
             (aaa_B.DataTypeConversion27[4] >= aaa_B.u_l))) {
          /* Transition: '<S37>:1222' */
          aaa_DW.is_SXQjunya = aaa_IN_off4_gz;
          aaa_DW.temporalCounter_i1_e = 0U;

          /* Entry 'off4': '<S37>:1246' */
          aaa_B.bililiuliangfa18_3_j = 0.0;
          aaa_B.bililiuliangfa18_4_e = 0.0;
        }
      }
    }
  }
}

/* Function for Chart: '<S26>/Chart' */
static void aaa_off4_a(void)
{
  /* During 'off4': '<S37>:1246' */
  /* Transition: '<S37>:1224' */
  if ((aaa_B.DataTypeConversion27[2] <= aaa_B.u_l + 0.005) &&
      (aaa_B.DataTypeConversion27[4] > aaa_B.u_l + 0.005)) {
    /* Transition: '<S37>:1226' */
    aaa_DW.is_SXQjunya = aaa_IN_jiance1_34;
    aaa_DW.temporalCounter_i1_e = 0U;

    /* Entry 'jiance1_34': '<S37>:1249' */
    aaa_B.bililiuliangfa18_1_f = 1.0;
    aaa_B.bililiuliangfa18_2_l = 0.0;
  } else if ((aaa_B.DataTypeConversion27[2] >= aaa_B.u_l) &&
             (aaa_B.DataTypeConversion27[4] >= aaa_B.u_l) &&
             (aaa_B.DataTypeConversion27[2] <= aaa_B.u_l + 0.005) &&
             (aaa_B.DataTypeConversion27[4] <= aaa_B.u_l + 0.005)) {
    /* Transition: '<S37>:1227' */
    aaa_DW.is_SXQjunya = aaa_IN_off2_ox;
    aaa_DW.temporalCounter_i1_e = 0U;

    /* Entry 'off2': '<S37>:1248' */
    aaa_B.bililiuliangfa18_1_f = 0.0;
    aaa_B.bililiuliangfa18_2_l = 0.0;
    aaa_B.bililiuliangfa18_3_j = 0.0;
    aaa_B.bililiuliangfa18_4_e = 0.0;
  } else if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_l + 0.005) &&
             (aaa_B.DataTypeConversion27[4] <= aaa_B.u_l + 0.005)) {
    /* Transition: '<S37>:1231' */
    aaa_DW.is_SXQjunya = aaa_IN_jiance1_36;
    aaa_DW.temporalCounter_i1_e = 0U;

    /* Entry 'jiance1_36': '<S37>:1251' */
    aaa_B.bililiuliangfa18_1_f = 0.0;
    aaa_B.bililiuliangfa18_2_l = 1.0;
  } else if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_l + 0.005) &&
             (aaa_B.DataTypeConversion27[4] > aaa_B.u_l + 0.005)) {
    /* Transition: '<S37>:1233' */
    aaa_DW.is_SXQjunya = aaa_IN_jiance1_32;
    aaa_DW.temporalCounter_i1_e = 0U;

    /* Entry 'jiance1_32': '<S37>:1250' */
    aaa_B.bililiuliangfa18_1_f = 1.0;
    aaa_B.bililiuliangfa18_2_l = 1.0;
  } else if ((aaa_DW.temporalCounter_i1_e >= 250) &&
             ((aaa_B.DataTypeConversion27[2] <= aaa_B.u_l + 0.005) &&
              (aaa_B.DataTypeConversion27[4] <= aaa_B.u_l + 0.005))) {
    /* Transition: '<S37>:1223' */
    aaa_DW.is_SXQjunya = aaa_IN_off3_p3;
    aaa_DW.temporalCounter_i1_e = 0U;

    /* Entry 'off3': '<S37>:1247' */
    aaa_B.bililiuliangfa18_1_f = 0.0;
    aaa_B.bililiuliangfa18_2_l = 0.0;
  } else {
    if ((aaa_B.DataTypeConversion27[2] < aaa_B.u_l) ||
        (aaa_B.DataTypeConversion27[4] < aaa_B.u_l)) {
      /* Transition: '<S37>:1219' */
      if ((aaa_B.DataTypeConversion27[2] < aaa_B.u_l) &&
          (aaa_B.DataTypeConversion27[4] < aaa_B.u_l)) {
        /* Transition: '<S37>:1203' */
        aaa_DW.is_SXQjunya = aaa_IN_jiaya7_1;
        aaa_DW.temporalCounter_i1_e = 0U;

        /* Entry 'jiaya7_1': '<S37>:1237' */
        aaa_B.bililiuliangfa18_3_j = 1.0;
        aaa_B.bililiuliangfa18_4_e = 1.0;
      } else if ((aaa_B.DataTypeConversion27[2] >= aaa_B.u_l) &&
                 (aaa_B.DataTypeConversion27[4] < aaa_B.u_l)) {
        /* Transition: '<S37>:1209' */
        aaa_DW.is_SXQjunya = aaa_IN_jiaya7_2;
        aaa_DW.temporalCounter_i1_e = 0U;

        /* Entry 'jiaya7_2': '<S37>:1243' */
        aaa_B.bililiuliangfa18_3_j = 1.0;
        aaa_B.bililiuliangfa18_4_e = 0.0;
      } else if ((aaa_B.DataTypeConversion27[2] < aaa_B.u_l) &&
                 (aaa_B.DataTypeConversion27[4] >= aaa_B.u_l)) {
        /* Transition: '<S37>:1207' */
        aaa_DW.is_SXQjunya = aaa_IN_jiaya7_3;
        aaa_DW.temporalCounter_i1_e = 0U;

        /* Entry 'jiaya7_3': '<S37>:1238' */
        aaa_B.bililiuliangfa18_3_j = 0.0;
        aaa_B.bililiuliangfa18_4_e = 1.0;
      } else {
        if ((aaa_DW.temporalCounter_i1_e >= 250) &&
            ((aaa_B.DataTypeConversion27[2] >= aaa_B.u_l) &&
             (aaa_B.DataTypeConversion27[4] >= aaa_B.u_l))) {
          /* Transition: '<S37>:1222' */
          aaa_DW.is_SXQjunya = aaa_IN_off4_gz;
          aaa_DW.temporalCounter_i1_e = 0U;

          /* Entry 'off4': '<S37>:1246' */
          aaa_B.bililiuliangfa18_3_j = 0.0;
          aaa_B.bililiuliangfa18_4_e = 0.0;
        }
      }
    }
  }
}

/* Function for Chart: '<S26>/Chart' */
static void aaa_SXQjunya_o(void)
{
  /* During 'SXQjunya': '<S37>:1194' */
  switch (aaa_DW.is_SXQjunya) {
   case aaa_IN_jiance1_32:
    /* During 'jiance1_32': '<S37>:1250' */
    /* Transition: '<S37>:1230' */
    if ((aaa_B.DataTypeConversion27[2] <= aaa_B.u_l + 0.005) &&
        (aaa_B.DataTypeConversion27[4] > aaa_B.u_l + 0.005)) {
      /* Transition: '<S37>:1226' */
      aaa_DW.is_SXQjunya = aaa_IN_jiance1_34;
      aaa_DW.temporalCounter_i1_e = 0U;

      /* Entry 'jiance1_34': '<S37>:1249' */
      aaa_B.bililiuliangfa18_1_f = 1.0;
      aaa_B.bililiuliangfa18_2_l = 0.0;
    } else if ((aaa_B.DataTypeConversion27[2] >= aaa_B.u_l) &&
               (aaa_B.DataTypeConversion27[4] >= aaa_B.u_l) &&
               (aaa_B.DataTypeConversion27[2] <= aaa_B.u_l + 0.005) &&
               (aaa_B.DataTypeConversion27[4] <= aaa_B.u_l + 0.005)) {
      /* Transition: '<S37>:1227' */
      aaa_DW.is_SXQjunya = aaa_IN_off2_ox;
      aaa_DW.temporalCounter_i1_e = 0U;

      /* Entry 'off2': '<S37>:1248' */
      aaa_B.bililiuliangfa18_1_f = 0.0;
      aaa_B.bililiuliangfa18_2_l = 0.0;
      aaa_B.bililiuliangfa18_3_j = 0.0;
      aaa_B.bililiuliangfa18_4_e = 0.0;
    } else if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_l + 0.005) &&
               (aaa_B.DataTypeConversion27[4] <= aaa_B.u_l + 0.005)) {
      /* Transition: '<S37>:1231' */
      aaa_DW.is_SXQjunya = aaa_IN_jiance1_36;
      aaa_DW.temporalCounter_i1_e = 0U;

      /* Entry 'jiance1_36': '<S37>:1251' */
      aaa_B.bililiuliangfa18_1_f = 0.0;
      aaa_B.bililiuliangfa18_2_l = 1.0;
    } else if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_l + 0.005) &&
               (aaa_B.DataTypeConversion27[4] > aaa_B.u_l + 0.005)) {
      /* Transition: '<S37>:1233' */
      aaa_DW.is_SXQjunya = aaa_IN_jiance1_32;
      aaa_DW.temporalCounter_i1_e = 0U;

      /* Entry 'jiance1_32': '<S37>:1250' */
      aaa_B.bililiuliangfa18_1_f = 1.0;
      aaa_B.bililiuliangfa18_2_l = 1.0;
    } else {
      if ((aaa_DW.temporalCounter_i1_e >= 250) && ((aaa_B.DataTypeConversion27[2]
            <= aaa_B.u_l + 0.005) && (aaa_B.DataTypeConversion27[4] <= aaa_B.u_l
            + 0.005))) {
        /* Transition: '<S37>:1223' */
        aaa_DW.is_SXQjunya = aaa_IN_off3_p3;
        aaa_DW.temporalCounter_i1_e = 0U;

        /* Entry 'off3': '<S37>:1247' */
        aaa_B.bililiuliangfa18_1_f = 0.0;
        aaa_B.bililiuliangfa18_2_l = 0.0;
      }
    }
    break;

   case aaa_IN_jiance1_34:
    /* During 'jiance1_34': '<S37>:1249' */
    /* Transition: '<S37>:1228' */
    if ((aaa_B.DataTypeConversion27[2] <= aaa_B.u_l + 0.005) &&
        (aaa_B.DataTypeConversion27[4] > aaa_B.u_l + 0.005)) {
      /* Transition: '<S37>:1226' */
      aaa_DW.is_SXQjunya = aaa_IN_jiance1_34;
      aaa_DW.temporalCounter_i1_e = 0U;

      /* Entry 'jiance1_34': '<S37>:1249' */
      aaa_B.bililiuliangfa18_1_f = 1.0;
      aaa_B.bililiuliangfa18_2_l = 0.0;
    } else if ((aaa_B.DataTypeConversion27[2] >= aaa_B.u_l) &&
               (aaa_B.DataTypeConversion27[4] >= aaa_B.u_l) &&
               (aaa_B.DataTypeConversion27[2] <= aaa_B.u_l + 0.005) &&
               (aaa_B.DataTypeConversion27[4] <= aaa_B.u_l + 0.005)) {
      /* Transition: '<S37>:1227' */
      aaa_DW.is_SXQjunya = aaa_IN_off2_ox;
      aaa_DW.temporalCounter_i1_e = 0U;

      /* Entry 'off2': '<S37>:1248' */
      aaa_B.bililiuliangfa18_1_f = 0.0;
      aaa_B.bililiuliangfa18_2_l = 0.0;
      aaa_B.bililiuliangfa18_3_j = 0.0;
      aaa_B.bililiuliangfa18_4_e = 0.0;
    } else if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_l + 0.005) &&
               (aaa_B.DataTypeConversion27[4] <= aaa_B.u_l + 0.005)) {
      /* Transition: '<S37>:1231' */
      aaa_DW.is_SXQjunya = aaa_IN_jiance1_36;
      aaa_DW.temporalCounter_i1_e = 0U;

      /* Entry 'jiance1_36': '<S37>:1251' */
      aaa_B.bililiuliangfa18_1_f = 0.0;
      aaa_B.bililiuliangfa18_2_l = 1.0;
    } else if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_l + 0.005) &&
               (aaa_B.DataTypeConversion27[4] > aaa_B.u_l + 0.005)) {
      /* Transition: '<S37>:1233' */
      aaa_DW.is_SXQjunya = aaa_IN_jiance1_32;
      aaa_DW.temporalCounter_i1_e = 0U;

      /* Entry 'jiance1_32': '<S37>:1250' */
      aaa_B.bililiuliangfa18_1_f = 1.0;
      aaa_B.bililiuliangfa18_2_l = 1.0;
    } else {
      if ((aaa_DW.temporalCounter_i1_e >= 250) && ((aaa_B.DataTypeConversion27[2]
            <= aaa_B.u_l + 0.005) && (aaa_B.DataTypeConversion27[4] <= aaa_B.u_l
            + 0.005))) {
        /* Transition: '<S37>:1223' */
        aaa_DW.is_SXQjunya = aaa_IN_off3_p3;
        aaa_DW.temporalCounter_i1_e = 0U;

        /* Entry 'off3': '<S37>:1247' */
        aaa_B.bililiuliangfa18_1_f = 0.0;
        aaa_B.bililiuliangfa18_2_l = 0.0;
      }
    }
    break;

   case aaa_IN_jiance1_36:
    /* During 'jiance1_36': '<S37>:1251' */
    /* Transition: '<S37>:1232' */
    if ((aaa_B.DataTypeConversion27[2] <= aaa_B.u_l + 0.005) &&
        (aaa_B.DataTypeConversion27[4] > aaa_B.u_l + 0.005)) {
      /* Transition: '<S37>:1226' */
      aaa_DW.is_SXQjunya = aaa_IN_jiance1_34;
      aaa_DW.temporalCounter_i1_e = 0U;

      /* Entry 'jiance1_34': '<S37>:1249' */
      aaa_B.bililiuliangfa18_1_f = 1.0;
      aaa_B.bililiuliangfa18_2_l = 0.0;
    } else if ((aaa_B.DataTypeConversion27[2] >= aaa_B.u_l) &&
               (aaa_B.DataTypeConversion27[4] >= aaa_B.u_l) &&
               (aaa_B.DataTypeConversion27[2] <= aaa_B.u_l + 0.005) &&
               (aaa_B.DataTypeConversion27[4] <= aaa_B.u_l + 0.005)) {
      /* Transition: '<S37>:1227' */
      aaa_DW.is_SXQjunya = aaa_IN_off2_ox;
      aaa_DW.temporalCounter_i1_e = 0U;

      /* Entry 'off2': '<S37>:1248' */
      aaa_B.bililiuliangfa18_1_f = 0.0;
      aaa_B.bililiuliangfa18_2_l = 0.0;
      aaa_B.bililiuliangfa18_3_j = 0.0;
      aaa_B.bililiuliangfa18_4_e = 0.0;
    } else if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_l + 0.005) &&
               (aaa_B.DataTypeConversion27[4] <= aaa_B.u_l + 0.005)) {
      /* Transition: '<S37>:1231' */
      aaa_DW.is_SXQjunya = aaa_IN_jiance1_36;
      aaa_DW.temporalCounter_i1_e = 0U;

      /* Entry 'jiance1_36': '<S37>:1251' */
      aaa_B.bililiuliangfa18_1_f = 0.0;
      aaa_B.bililiuliangfa18_2_l = 1.0;
    } else if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_l + 0.005) &&
               (aaa_B.DataTypeConversion27[4] > aaa_B.u_l + 0.005)) {
      /* Transition: '<S37>:1233' */
      aaa_DW.is_SXQjunya = aaa_IN_jiance1_32;
      aaa_DW.temporalCounter_i1_e = 0U;

      /* Entry 'jiance1_32': '<S37>:1250' */
      aaa_B.bililiuliangfa18_1_f = 1.0;
      aaa_B.bililiuliangfa18_2_l = 1.0;
    } else {
      if ((aaa_DW.temporalCounter_i1_e >= 250) && ((aaa_B.DataTypeConversion27[2]
            <= aaa_B.u_l + 0.005) && (aaa_B.DataTypeConversion27[4] <= aaa_B.u_l
            + 0.005))) {
        /* Transition: '<S37>:1223' */
        aaa_DW.is_SXQjunya = aaa_IN_off3_p3;
        aaa_DW.temporalCounter_i1_e = 0U;

        /* Entry 'off3': '<S37>:1247' */
        aaa_B.bililiuliangfa18_1_f = 0.0;
        aaa_B.bililiuliangfa18_2_l = 0.0;
      }
    }
    break;

   case aaa_IN_jiaya1:
    /* During 'jiaya1': '<S37>:1241' */
    /* Transition: '<S37>:1210' */
    if ((aaa_B.DataTypeConversion27[2] < aaa_DW.p0_1) &&
        (aaa_B.DataTypeConversion27[4] < aaa_DW.p0_1)) {
      /* Transition: '<S37>:1205' */
      aaa_DW.is_SXQjunya = aaa_IN_jiaya1_1;

      /* Entry 'jiaya1_1': '<S37>:1236' */
      aaa_B.bililiuliangfa18_3_j = 1.0;
      aaa_B.bililiuliangfa18_4_e = 1.0;
    } else if ((aaa_B.DataTypeConversion27[2] >= aaa_DW.p0_1) &&
               (aaa_B.DataTypeConversion27[4] < aaa_DW.p0_1)) {
      /* Transition: '<S37>:1218' */
      aaa_DW.is_SXQjunya = aaa_IN_jiaya1_2;

      /* Entry 'jiaya1_2': '<S37>:1244' */
      aaa_B.bililiuliangfa18_3_j = 1.0;
      aaa_B.bililiuliangfa18_4_e = 0.0;
    } else if ((aaa_B.DataTypeConversion27[2] < aaa_DW.p0_1) &&
               (aaa_B.DataTypeConversion27[4] >= aaa_DW.p0_1)) {
      /* Transition: '<S37>:1213' */
      aaa_DW.is_SXQjunya = aaa_IN_jiaya1_3;

      /* Entry 'jiaya1_3': '<S37>:1245' */
      aaa_B.bililiuliangfa18_3_j = 0.0;
      aaa_B.bililiuliangfa18_4_e = 1.0;
    } else {
      if ((aaa_B.DataTypeConversion27[2] >= aaa_DW.p0_1) &&
          (aaa_B.DataTypeConversion27[4] >= aaa_DW.p0_1)) {
        /* Transition: '<S37>:1202' */
        aaa_DW.is_SXQjunya = aaa_IN_jiaya2;
        aaa_DW.temporalCounter_i1_e = 0U;

        /* Entry 'jiaya2': '<S37>:1239' */
        aaa_B.bililiuliangfa18_3_j = 1.0;
        aaa_B.bililiuliangfa18_4_e = 1.0;
        aaa_DW.p0_1 += 0.03;
      }
    }
    break;

   case aaa_IN_jiaya1_1:
    /* During 'jiaya1_1': '<S37>:1236' */
    /* Transition: '<S37>:1200' */
    if ((aaa_B.DataTypeConversion27[2] < aaa_DW.p0_1) &&
        (aaa_B.DataTypeConversion27[4] < aaa_DW.p0_1)) {
      /* Transition: '<S37>:1205' */
      aaa_DW.is_SXQjunya = aaa_IN_jiaya1_1;

      /* Entry 'jiaya1_1': '<S37>:1236' */
      aaa_B.bililiuliangfa18_3_j = 1.0;
      aaa_B.bililiuliangfa18_4_e = 1.0;
    } else if ((aaa_B.DataTypeConversion27[2] >= aaa_DW.p0_1) &&
               (aaa_B.DataTypeConversion27[4] < aaa_DW.p0_1)) {
      /* Transition: '<S37>:1218' */
      aaa_DW.is_SXQjunya = aaa_IN_jiaya1_2;

      /* Entry 'jiaya1_2': '<S37>:1244' */
      aaa_B.bililiuliangfa18_3_j = 1.0;
      aaa_B.bililiuliangfa18_4_e = 0.0;
    } else if ((aaa_B.DataTypeConversion27[2] < aaa_DW.p0_1) &&
               (aaa_B.DataTypeConversion27[4] >= aaa_DW.p0_1)) {
      /* Transition: '<S37>:1213' */
      aaa_DW.is_SXQjunya = aaa_IN_jiaya1_3;

      /* Entry 'jiaya1_3': '<S37>:1245' */
      aaa_B.bililiuliangfa18_3_j = 0.0;
      aaa_B.bililiuliangfa18_4_e = 1.0;
    } else {
      if ((aaa_B.DataTypeConversion27[2] >= aaa_DW.p0_1) &&
          (aaa_B.DataTypeConversion27[4] >= aaa_DW.p0_1)) {
        /* Transition: '<S37>:1202' */
        aaa_DW.is_SXQjunya = aaa_IN_jiaya2;
        aaa_DW.temporalCounter_i1_e = 0U;

        /* Entry 'jiaya2': '<S37>:1239' */
        aaa_B.bililiuliangfa18_3_j = 1.0;
        aaa_B.bililiuliangfa18_4_e = 1.0;
        aaa_DW.p0_1 += 0.03;
      }
    }
    break;

   case aaa_IN_jiaya1_2:
    /* During 'jiaya1_2': '<S37>:1244' */
    /* Transition: '<S37>:1221' */
    if ((aaa_B.DataTypeConversion27[2] < aaa_DW.p0_1) &&
        (aaa_B.DataTypeConversion27[4] < aaa_DW.p0_1)) {
      /* Transition: '<S37>:1205' */
      aaa_DW.is_SXQjunya = aaa_IN_jiaya1_1;

      /* Entry 'jiaya1_1': '<S37>:1236' */
      aaa_B.bililiuliangfa18_3_j = 1.0;
      aaa_B.bililiuliangfa18_4_e = 1.0;
    } else if ((aaa_B.DataTypeConversion27[2] >= aaa_DW.p0_1) &&
               (aaa_B.DataTypeConversion27[4] < aaa_DW.p0_1)) {
      /* Transition: '<S37>:1218' */
      aaa_DW.is_SXQjunya = aaa_IN_jiaya1_2;

      /* Entry 'jiaya1_2': '<S37>:1244' */
      aaa_B.bililiuliangfa18_3_j = 1.0;
      aaa_B.bililiuliangfa18_4_e = 0.0;
    } else if ((aaa_B.DataTypeConversion27[2] < aaa_DW.p0_1) &&
               (aaa_B.DataTypeConversion27[4] >= aaa_DW.p0_1)) {
      /* Transition: '<S37>:1213' */
      aaa_DW.is_SXQjunya = aaa_IN_jiaya1_3;

      /* Entry 'jiaya1_3': '<S37>:1245' */
      aaa_B.bililiuliangfa18_3_j = 0.0;
      aaa_B.bililiuliangfa18_4_e = 1.0;
    } else {
      if ((aaa_B.DataTypeConversion27[2] >= aaa_DW.p0_1) &&
          (aaa_B.DataTypeConversion27[4] >= aaa_DW.p0_1)) {
        /* Transition: '<S37>:1202' */
        aaa_DW.is_SXQjunya = aaa_IN_jiaya2;
        aaa_DW.temporalCounter_i1_e = 0U;

        /* Entry 'jiaya2': '<S37>:1239' */
        aaa_B.bililiuliangfa18_3_j = 1.0;
        aaa_B.bililiuliangfa18_4_e = 1.0;
        aaa_DW.p0_1 += 0.03;
      }
    }
    break;

   case aaa_IN_jiaya1_3:
    /* During 'jiaya1_3': '<S37>:1245' */
    /* Transition: '<S37>:1217' */
    if ((aaa_B.DataTypeConversion27[2] < aaa_DW.p0_1) &&
        (aaa_B.DataTypeConversion27[4] < aaa_DW.p0_1)) {
      /* Transition: '<S37>:1205' */
      aaa_DW.is_SXQjunya = aaa_IN_jiaya1_1;

      /* Entry 'jiaya1_1': '<S37>:1236' */
      aaa_B.bililiuliangfa18_3_j = 1.0;
      aaa_B.bililiuliangfa18_4_e = 1.0;
    } else if ((aaa_B.DataTypeConversion27[2] >= aaa_DW.p0_1) &&
               (aaa_B.DataTypeConversion27[4] < aaa_DW.p0_1)) {
      /* Transition: '<S37>:1218' */
      aaa_DW.is_SXQjunya = aaa_IN_jiaya1_2;

      /* Entry 'jiaya1_2': '<S37>:1244' */
      aaa_B.bililiuliangfa18_3_j = 1.0;
      aaa_B.bililiuliangfa18_4_e = 0.0;
    } else if ((aaa_B.DataTypeConversion27[2] < aaa_DW.p0_1) &&
               (aaa_B.DataTypeConversion27[4] >= aaa_DW.p0_1)) {
      /* Transition: '<S37>:1213' */
      aaa_DW.is_SXQjunya = aaa_IN_jiaya1_3;

      /* Entry 'jiaya1_3': '<S37>:1245' */
      aaa_B.bililiuliangfa18_3_j = 0.0;
      aaa_B.bililiuliangfa18_4_e = 1.0;
    } else {
      if ((aaa_B.DataTypeConversion27[2] >= aaa_DW.p0_1) &&
          (aaa_B.DataTypeConversion27[4] >= aaa_DW.p0_1)) {
        /* Transition: '<S37>:1202' */
        aaa_DW.is_SXQjunya = aaa_IN_jiaya2;
        aaa_DW.temporalCounter_i1_e = 0U;

        /* Entry 'jiaya2': '<S37>:1239' */
        aaa_B.bililiuliangfa18_3_j = 1.0;
        aaa_B.bililiuliangfa18_4_e = 1.0;
        aaa_DW.p0_1 += 0.03;
      }
    }
    break;

   case aaa_IN_jiaya2:
    aaa_jiaya2_b();
    break;

   case aaa_IN_jiaya7_1:
    /* During 'jiaya7_1': '<S37>:1237' */
    /* Transition: '<S37>:1206' */
    if ((aaa_B.DataTypeConversion27[2] < aaa_B.u_l) &&
        (aaa_B.DataTypeConversion27[4] < aaa_B.u_l)) {
      /* Transition: '<S37>:1203' */
      aaa_DW.is_SXQjunya = aaa_IN_jiaya7_1;
      aaa_DW.temporalCounter_i1_e = 0U;

      /* Entry 'jiaya7_1': '<S37>:1237' */
      aaa_B.bililiuliangfa18_3_j = 1.0;
      aaa_B.bililiuliangfa18_4_e = 1.0;
    } else if ((aaa_B.DataTypeConversion27[2] >= aaa_B.u_l) &&
               (aaa_B.DataTypeConversion27[4] < aaa_B.u_l)) {
      /* Transition: '<S37>:1209' */
      aaa_DW.is_SXQjunya = aaa_IN_jiaya7_2;
      aaa_DW.temporalCounter_i1_e = 0U;

      /* Entry 'jiaya7_2': '<S37>:1243' */
      aaa_B.bililiuliangfa18_3_j = 1.0;
      aaa_B.bililiuliangfa18_4_e = 0.0;
    } else if ((aaa_B.DataTypeConversion27[2] < aaa_B.u_l) &&
               (aaa_B.DataTypeConversion27[4] >= aaa_B.u_l)) {
      /* Transition: '<S37>:1207' */
      aaa_DW.is_SXQjunya = aaa_IN_jiaya7_3;
      aaa_DW.temporalCounter_i1_e = 0U;

      /* Entry 'jiaya7_3': '<S37>:1238' */
      aaa_B.bililiuliangfa18_3_j = 0.0;
      aaa_B.bililiuliangfa18_4_e = 1.0;
    } else {
      if ((aaa_DW.temporalCounter_i1_e >= 250) && ((aaa_B.DataTypeConversion27[2]
            >= aaa_B.u_l) && (aaa_B.DataTypeConversion27[4] >= aaa_B.u_l))) {
        /* Transition: '<S37>:1222' */
        aaa_DW.is_SXQjunya = aaa_IN_off4_gz;
        aaa_DW.temporalCounter_i1_e = 0U;

        /* Entry 'off4': '<S37>:1246' */
        aaa_B.bililiuliangfa18_3_j = 0.0;
        aaa_B.bililiuliangfa18_4_e = 0.0;
      }
    }
    break;

   case aaa_IN_jiaya7_2:
    aaa_jiaya7_2_g();
    break;

   case aaa_IN_jiaya7_3:
    aaa_jiaya7_3_i();
    break;

   case aaa_IN_off1_b:
    /* During 'off1': '<S37>:1240' */
    /* Transition: '<S37>:1216' */
    aaa_DW.is_SXQjunya = aaa_IN_on1_ahrj;
    aaa_DW.temporalCounter_i1_e = 0U;

    /* Entry 'on1': '<S37>:1242' */
    aaa_B.diancifa11_1_k = 1.0;
    aaa_B.diancifa11_5_b = 1.0;
    break;

   case aaa_IN_off2_ox:
    aaa_off2_g();
    break;

   case aaa_IN_off3_p3:
    aaa_off3_g();
    break;

   case aaa_IN_off4_gz:
    aaa_off4_a();
    break;

   case aaa_IN_off6_h:
    /* During 'off6': '<S37>:1252' */
    if (aaa_DW.temporalCounter_i1_e >= 1000) {
      /* Transition: '<S37>:1187' */
      aaa_DW.is_SXQjunya = aaa_IN_NO_ACTIVE_CHILD_c;
      aaa_DW.is_zidong = aaa_IN_kaiguangai;

      /* Entry Internal 'kaiguangai': '<S37>:939' */
      /* Transition: '<S37>:1188' */
      aaa_DW.is_kaiguangai = aaa_IN_start_ie;

      /* Entry 'start': '<S37>:953' */
      aaa_B.xuansong_i = 0.0;
      aaa_B.xuanjin_i = 0.0;
      aaa_B.suoding_k = 0.0;
      aaa_B.jiesuo_p = 0.0;
      aaa_B.kaigaikaishi = 0.0;
      aaa_B.guangaikaishi = 0.0;
      aaa_B.diancifa20_j = 0.0;
    }
    break;

   default:
    /* During 'on1': '<S37>:1242' */
    if (aaa_DW.temporalCounter_i1_e >= 500) {
      /* Transition: '<S37>:1215' */
      aaa_DW.is_SXQjunya = aaa_IN_jiaya1;

      /* Entry 'jiaya1': '<S37>:1241' */
      aaa_B.bililiuliangfa18_3_j = 1.0;
      aaa_B.bililiuliangfa18_4_e = 1.0;
      aaa_DW.p0_1 = aaa_B.u_p;
    }
    break;
  }
}

/* Function for Chart: '<S26>/Chart' */
static void aaa_SXQxieya_k(void)
{
  boolean_T guard1 = false;

  /* During 'SXQxieya': '<S37>:1106' */
  guard1 = false;
  switch (aaa_DW.is_SXQxieya) {
   case aaa_IN_off1:
    /* During 'off1': '<S37>:1135' */
    /* Transition: '<S37>:1112' */
    aaa_DW.is_SXQxieya = aaa_IN_on1_ah;
    aaa_DW.temporalCounter_i1_e = 0U;

    /* Entry 'on1': '<S37>:1136' */
    aaa_B.diancifa11_5_b = 1.0;
    break;

   case aaa_IN_off2_o:
    /* During 'off2': '<S37>:1145' */
    break;

   case aaa_IN_on1_ah:
    /* During 'on1': '<S37>:1136' */
    if (aaa_DW.temporalCounter_i1_e >= 20) {
      /* Transition: '<S37>:1113' */
      aaa_DW.is_SXQxieya = aaa_IN_xieya1;

      /* Entry 'xieya1': '<S37>:1137' */
      aaa_B.bililiuliangfa18_1_f = 1.0;
      aaa_B.bililiuliangfa18_2_l = 1.0;
      aaa_DW.p0_2 = aaa_B.u_l;
    }
    break;

   case aaa_IN_xieya1:
    /* During 'xieya1': '<S37>:1137' */
    /* Transition: '<S37>:1114' */
    if ((aaa_B.DataTypeConversion27[2] > aaa_DW.p0_2) &&
        (aaa_B.DataTypeConversion27[4] > aaa_DW.p0_2)) {
      /* Transition: '<S37>:1116' */
      aaa_DW.is_SXQxieya = aaa_IN_xieya1_1;

      /* Entry 'xieya1_1': '<S37>:1139' */
      aaa_B.bililiuliangfa18_1_f = 1.0;
      aaa_B.bililiuliangfa18_2_l = 1.0;
    } else if ((aaa_B.DataTypeConversion27[2] <= aaa_DW.p0_2) &&
               (aaa_B.DataTypeConversion27[4] > aaa_DW.p0_2)) {
      /* Transition: '<S37>:1115' */
      aaa_DW.is_SXQxieya = aaa_IN_xieya1_2;

      /* Entry 'xieya1_2': '<S37>:1138' */
      aaa_B.bililiuliangfa18_1_f = 1.0;
      aaa_B.bililiuliangfa18_2_l = 0.0;
    } else if ((aaa_B.DataTypeConversion27[2] > aaa_DW.p0_2) &&
               (aaa_B.DataTypeConversion27[4] <= aaa_DW.p0_2)) {
      /* Transition: '<S37>:1120' */
      aaa_DW.is_SXQxieya = aaa_IN_xieya1_3;

      /* Entry 'xieya1_3': '<S37>:1140' */
      aaa_B.bililiuliangfa18_1_f = 0.0;
      aaa_B.bililiuliangfa18_2_l = 1.0;
    } else {
      if ((aaa_B.DataTypeConversion27[2] <= aaa_DW.p0_2) &&
          (aaa_B.DataTypeConversion27[4] <= aaa_DW.p0_2)) {
        /* Transition: '<S37>:1121' */
        aaa_DW.is_SXQxieya = aaa_IN_xieya2;

        /* Entry 'xieya2': '<S37>:1141' */
        aaa_B.bililiuliangfa18_1_f = 1.0;
        aaa_B.bililiuliangfa18_2_l = 1.0;
        aaa_DW.p0_2 -= 0.03;
      }
    }
    break;

   case aaa_IN_xieya1_1:
    /* During 'xieya1_1': '<S37>:1139' */
    /* Transition: '<S37>:1119' */
    if ((aaa_B.DataTypeConversion27[2] > aaa_DW.p0_2) &&
        (aaa_B.DataTypeConversion27[4] > aaa_DW.p0_2)) {
      /* Transition: '<S37>:1116' */
      aaa_DW.is_SXQxieya = aaa_IN_xieya1_1;

      /* Entry 'xieya1_1': '<S37>:1139' */
      aaa_B.bililiuliangfa18_1_f = 1.0;
      aaa_B.bililiuliangfa18_2_l = 1.0;
    } else if ((aaa_B.DataTypeConversion27[2] <= aaa_DW.p0_2) &&
               (aaa_B.DataTypeConversion27[4] > aaa_DW.p0_2)) {
      /* Transition: '<S37>:1115' */
      aaa_DW.is_SXQxieya = aaa_IN_xieya1_2;

      /* Entry 'xieya1_2': '<S37>:1138' */
      aaa_B.bililiuliangfa18_1_f = 1.0;
      aaa_B.bililiuliangfa18_2_l = 0.0;
    } else if ((aaa_B.DataTypeConversion27[2] > aaa_DW.p0_2) &&
               (aaa_B.DataTypeConversion27[4] <= aaa_DW.p0_2)) {
      /* Transition: '<S37>:1120' */
      aaa_DW.is_SXQxieya = aaa_IN_xieya1_3;

      /* Entry 'xieya1_3': '<S37>:1140' */
      aaa_B.bililiuliangfa18_1_f = 0.0;
      aaa_B.bililiuliangfa18_2_l = 1.0;
    } else {
      if ((aaa_B.DataTypeConversion27[2] <= aaa_DW.p0_2) &&
          (aaa_B.DataTypeConversion27[4] <= aaa_DW.p0_2)) {
        /* Transition: '<S37>:1121' */
        aaa_DW.is_SXQxieya = aaa_IN_xieya2;

        /* Entry 'xieya2': '<S37>:1141' */
        aaa_B.bililiuliangfa18_1_f = 1.0;
        aaa_B.bililiuliangfa18_2_l = 1.0;
        aaa_DW.p0_2 -= 0.03;
      }
    }
    break;

   case aaa_IN_xieya1_2:
    /* During 'xieya1_2': '<S37>:1138' */
    /* Transition: '<S37>:1117' */
    if ((aaa_B.DataTypeConversion27[2] > aaa_DW.p0_2) &&
        (aaa_B.DataTypeConversion27[4] > aaa_DW.p0_2)) {
      /* Transition: '<S37>:1116' */
      aaa_DW.is_SXQxieya = aaa_IN_xieya1_1;

      /* Entry 'xieya1_1': '<S37>:1139' */
      aaa_B.bililiuliangfa18_1_f = 1.0;
      aaa_B.bililiuliangfa18_2_l = 1.0;
    } else if ((aaa_B.DataTypeConversion27[2] <= aaa_DW.p0_2) &&
               (aaa_B.DataTypeConversion27[4] > aaa_DW.p0_2)) {
      /* Transition: '<S37>:1115' */
      aaa_DW.is_SXQxieya = aaa_IN_xieya1_2;

      /* Entry 'xieya1_2': '<S37>:1138' */
      aaa_B.bililiuliangfa18_1_f = 1.0;
      aaa_B.bililiuliangfa18_2_l = 0.0;
    } else if ((aaa_B.DataTypeConversion27[2] > aaa_DW.p0_2) &&
               (aaa_B.DataTypeConversion27[4] <= aaa_DW.p0_2)) {
      /* Transition: '<S37>:1120' */
      aaa_DW.is_SXQxieya = aaa_IN_xieya1_3;

      /* Entry 'xieya1_3': '<S37>:1140' */
      aaa_B.bililiuliangfa18_1_f = 0.0;
      aaa_B.bililiuliangfa18_2_l = 1.0;
    } else {
      if ((aaa_B.DataTypeConversion27[2] <= aaa_DW.p0_2) &&
          (aaa_B.DataTypeConversion27[4] <= aaa_DW.p0_2)) {
        /* Transition: '<S37>:1121' */
        aaa_DW.is_SXQxieya = aaa_IN_xieya2;

        /* Entry 'xieya2': '<S37>:1141' */
        aaa_B.bililiuliangfa18_1_f = 1.0;
        aaa_B.bililiuliangfa18_2_l = 1.0;
        aaa_DW.p0_2 -= 0.03;
      }
    }
    break;

   case aaa_IN_xieya1_3:
    /* During 'xieya1_3': '<S37>:1140' */
    /* Transition: '<S37>:1118' */
    if ((aaa_B.DataTypeConversion27[2] > aaa_DW.p0_2) &&
        (aaa_B.DataTypeConversion27[4] > aaa_DW.p0_2)) {
      /* Transition: '<S37>:1116' */
      aaa_DW.is_SXQxieya = aaa_IN_xieya1_1;

      /* Entry 'xieya1_1': '<S37>:1139' */
      aaa_B.bililiuliangfa18_1_f = 1.0;
      aaa_B.bililiuliangfa18_2_l = 1.0;
    } else if ((aaa_B.DataTypeConversion27[2] <= aaa_DW.p0_2) &&
               (aaa_B.DataTypeConversion27[4] > aaa_DW.p0_2)) {
      /* Transition: '<S37>:1115' */
      aaa_DW.is_SXQxieya = aaa_IN_xieya1_2;

      /* Entry 'xieya1_2': '<S37>:1138' */
      aaa_B.bililiuliangfa18_1_f = 1.0;
      aaa_B.bililiuliangfa18_2_l = 0.0;
    } else if ((aaa_B.DataTypeConversion27[2] > aaa_DW.p0_2) &&
               (aaa_B.DataTypeConversion27[4] <= aaa_DW.p0_2)) {
      /* Transition: '<S37>:1120' */
      aaa_DW.is_SXQxieya = aaa_IN_xieya1_3;

      /* Entry 'xieya1_3': '<S37>:1140' */
      aaa_B.bililiuliangfa18_1_f = 0.0;
      aaa_B.bililiuliangfa18_2_l = 1.0;
    } else {
      if ((aaa_B.DataTypeConversion27[2] <= aaa_DW.p0_2) &&
          (aaa_B.DataTypeConversion27[4] <= aaa_DW.p0_2)) {
        /* Transition: '<S37>:1121' */
        aaa_DW.is_SXQxieya = aaa_IN_xieya2;

        /* Entry 'xieya2': '<S37>:1141' */
        aaa_B.bililiuliangfa18_1_f = 1.0;
        aaa_B.bililiuliangfa18_2_l = 1.0;
        aaa_DW.p0_2 -= 0.03;
      }
    }
    break;

   case aaa_IN_xieya2:
    /* During 'xieya2': '<S37>:1141' */
    /* Transition: '<S37>:1123' */
    if (aaa_DW.p0_2 <= aaa_B.u_p) {
      /* Transition: '<S37>:1124' */
      if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_p) &&
          (aaa_B.DataTypeConversion27[4] > aaa_B.u_p)) {
        /* Transition: '<S37>:1127' */
        aaa_DW.is_SXQxieya = aaa_IN_xieya7_1;

        /* Entry 'xieya7_1': '<S37>:1143' */
        aaa_B.bililiuliangfa18_1_f = 1.0;
        aaa_B.bililiuliangfa18_2_l = 1.0;
      } else if ((aaa_B.DataTypeConversion27[2] <= aaa_B.u_p) &&
                 (aaa_B.DataTypeConversion27[4] > aaa_B.u_p)) {
        /* Transition: '<S37>:1125' */
        aaa_DW.is_SXQxieya = aaa_IN_xieya7_2;

        /* Entry 'xieya7_2': '<S37>:1142' */
        aaa_B.bililiuliangfa18_1_f = 1.0;
        aaa_B.bililiuliangfa18_2_l = 0.0;
      } else if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_p) &&
                 (aaa_B.DataTypeConversion27[4] <= aaa_B.u_p)) {
        /* Transition: '<S37>:1129' */
        aaa_DW.is_SXQxieya = aaa_IN_xieya7_3;

        /* Entry 'xieya7_3': '<S37>:1144' */
        aaa_B.bililiuliangfa18_1_f = 0.0;
        aaa_B.bililiuliangfa18_2_l = 1.0;
      } else if ((aaa_B.DataTypeConversion27[2] <= aaa_B.u_p) &&
                 (aaa_B.DataTypeConversion27[4] <= aaa_B.u_p)) {
        /* Transition: '<S37>:1131' */
        aaa_DW.is_SXQxieya = aaa_IN_xieya8;
        aaa_DW.temporalCounter_i1_e = 0U;

        /* Entry 'xieya8': '<S37>:1146' */
        aaa_B.bililiuliangfa18_1_f = 1.0;
        aaa_B.bililiuliangfa18_2_l = 1.0;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }
    break;

   case aaa_IN_xieya7_1:
    /* During 'xieya7_1': '<S37>:1143' */
    /* Transition: '<S37>:1130' */
    if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_p) &&
        (aaa_B.DataTypeConversion27[4] > aaa_B.u_p)) {
      /* Transition: '<S37>:1127' */
      aaa_DW.is_SXQxieya = aaa_IN_xieya7_1;

      /* Entry 'xieya7_1': '<S37>:1143' */
      aaa_B.bililiuliangfa18_1_f = 1.0;
      aaa_B.bililiuliangfa18_2_l = 1.0;
    } else if ((aaa_B.DataTypeConversion27[2] <= aaa_B.u_p) &&
               (aaa_B.DataTypeConversion27[4] > aaa_B.u_p)) {
      /* Transition: '<S37>:1125' */
      aaa_DW.is_SXQxieya = aaa_IN_xieya7_2;

      /* Entry 'xieya7_2': '<S37>:1142' */
      aaa_B.bililiuliangfa18_1_f = 1.0;
      aaa_B.bililiuliangfa18_2_l = 0.0;
    } else if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_p) &&
               (aaa_B.DataTypeConversion27[4] <= aaa_B.u_p)) {
      /* Transition: '<S37>:1129' */
      aaa_DW.is_SXQxieya = aaa_IN_xieya7_3;

      /* Entry 'xieya7_3': '<S37>:1144' */
      aaa_B.bililiuliangfa18_1_f = 0.0;
      aaa_B.bililiuliangfa18_2_l = 1.0;
    } else {
      if ((aaa_B.DataTypeConversion27[2] <= aaa_B.u_p) &&
          (aaa_B.DataTypeConversion27[4] <= aaa_B.u_p)) {
        /* Transition: '<S37>:1131' */
        aaa_DW.is_SXQxieya = aaa_IN_xieya8;
        aaa_DW.temporalCounter_i1_e = 0U;

        /* Entry 'xieya8': '<S37>:1146' */
        aaa_B.bililiuliangfa18_1_f = 1.0;
        aaa_B.bililiuliangfa18_2_l = 1.0;
      }
    }
    break;

   case aaa_IN_xieya7_2:
    /* During 'xieya7_2': '<S37>:1142' */
    /* Transition: '<S37>:1126' */
    if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_p) &&
        (aaa_B.DataTypeConversion27[4] > aaa_B.u_p)) {
      /* Transition: '<S37>:1127' */
      aaa_DW.is_SXQxieya = aaa_IN_xieya7_1;

      /* Entry 'xieya7_1': '<S37>:1143' */
      aaa_B.bililiuliangfa18_1_f = 1.0;
      aaa_B.bililiuliangfa18_2_l = 1.0;
    } else if ((aaa_B.DataTypeConversion27[2] <= aaa_B.u_p) &&
               (aaa_B.DataTypeConversion27[4] > aaa_B.u_p)) {
      /* Transition: '<S37>:1125' */
      aaa_DW.is_SXQxieya = aaa_IN_xieya7_2;

      /* Entry 'xieya7_2': '<S37>:1142' */
      aaa_B.bililiuliangfa18_1_f = 1.0;
      aaa_B.bililiuliangfa18_2_l = 0.0;
    } else if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_p) &&
               (aaa_B.DataTypeConversion27[4] <= aaa_B.u_p)) {
      /* Transition: '<S37>:1129' */
      aaa_DW.is_SXQxieya = aaa_IN_xieya7_3;

      /* Entry 'xieya7_3': '<S37>:1144' */
      aaa_B.bililiuliangfa18_1_f = 0.0;
      aaa_B.bililiuliangfa18_2_l = 1.0;
    } else {
      if ((aaa_B.DataTypeConversion27[2] <= aaa_B.u_p) &&
          (aaa_B.DataTypeConversion27[4] <= aaa_B.u_p)) {
        /* Transition: '<S37>:1131' */
        aaa_DW.is_SXQxieya = aaa_IN_xieya8;
        aaa_DW.temporalCounter_i1_e = 0U;

        /* Entry 'xieya8': '<S37>:1146' */
        aaa_B.bililiuliangfa18_1_f = 1.0;
        aaa_B.bililiuliangfa18_2_l = 1.0;
      }
    }
    break;

   case aaa_IN_xieya7_3:
    /* During 'xieya7_3': '<S37>:1144' */
    /* Transition: '<S37>:1128' */
    if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_p) &&
        (aaa_B.DataTypeConversion27[4] > aaa_B.u_p)) {
      /* Transition: '<S37>:1127' */
      aaa_DW.is_SXQxieya = aaa_IN_xieya7_1;

      /* Entry 'xieya7_1': '<S37>:1143' */
      aaa_B.bililiuliangfa18_1_f = 1.0;
      aaa_B.bililiuliangfa18_2_l = 1.0;
    } else if ((aaa_B.DataTypeConversion27[2] <= aaa_B.u_p) &&
               (aaa_B.DataTypeConversion27[4] > aaa_B.u_p)) {
      /* Transition: '<S37>:1125' */
      aaa_DW.is_SXQxieya = aaa_IN_xieya7_2;

      /* Entry 'xieya7_2': '<S37>:1142' */
      aaa_B.bililiuliangfa18_1_f = 1.0;
      aaa_B.bililiuliangfa18_2_l = 0.0;
    } else if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_p) &&
               (aaa_B.DataTypeConversion27[4] <= aaa_B.u_p)) {
      /* Transition: '<S37>:1129' */
      aaa_DW.is_SXQxieya = aaa_IN_xieya7_3;

      /* Entry 'xieya7_3': '<S37>:1144' */
      aaa_B.bililiuliangfa18_1_f = 0.0;
      aaa_B.bililiuliangfa18_2_l = 1.0;
    } else {
      if ((aaa_B.DataTypeConversion27[2] <= aaa_B.u_p) &&
          (aaa_B.DataTypeConversion27[4] <= aaa_B.u_p)) {
        /* Transition: '<S37>:1131' */
        aaa_DW.is_SXQxieya = aaa_IN_xieya8;
        aaa_DW.temporalCounter_i1_e = 0U;

        /* Entry 'xieya8': '<S37>:1146' */
        aaa_B.bililiuliangfa18_1_f = 1.0;
        aaa_B.bililiuliangfa18_2_l = 1.0;
      }
    }
    break;

   default:
    /* During 'xieya8': '<S37>:1146' */
    if (aaa_DW.temporalCounter_i1_e >= 1000) {
      /* Transition: '<S37>:1134' */
      if ((aaa_B.DataTypeConversion27[2] <= aaa_B.u_p) &&
          (aaa_B.DataTypeConversion27[4] <= aaa_B.u_p)) {
        /* Transition: '<S37>:1133' */
        aaa_DW.is_SXQxieya = aaa_IN_off2_o;

        /* Entry 'off2': '<S37>:1145' */
        aaa_B.diancifa11_5_b = 0.0;
        aaa_B.bililiuliangfa18_1_f = 0.0;
        aaa_B.bililiuliangfa18_2_l = 0.0;
        aaa_B.SXQxieyawancheng = 1.0;
      } else {
        if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_p) ||
            (aaa_B.DataTypeConversion27[4] > aaa_B.u_p)) {
          /* Transition: '<S37>:1132' */
          if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_p) &&
              (aaa_B.DataTypeConversion27[4] > aaa_B.u_p)) {
            /* Transition: '<S37>:1127' */
            aaa_DW.is_SXQxieya = aaa_IN_xieya7_1;

            /* Entry 'xieya7_1': '<S37>:1143' */
            aaa_B.bililiuliangfa18_1_f = 1.0;
            aaa_B.bililiuliangfa18_2_l = 1.0;
          } else if ((aaa_B.DataTypeConversion27[2] <= aaa_B.u_p) &&
                     (aaa_B.DataTypeConversion27[4] > aaa_B.u_p)) {
            /* Transition: '<S37>:1125' */
            aaa_DW.is_SXQxieya = aaa_IN_xieya7_2;

            /* Entry 'xieya7_2': '<S37>:1142' */
            aaa_B.bililiuliangfa18_1_f = 1.0;
            aaa_B.bililiuliangfa18_2_l = 0.0;
          } else if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_p) &&
                     (aaa_B.DataTypeConversion27[4] <= aaa_B.u_p)) {
            /* Transition: '<S37>:1129' */
            aaa_DW.is_SXQxieya = aaa_IN_xieya7_3;

            /* Entry 'xieya7_3': '<S37>:1144' */
            aaa_B.bililiuliangfa18_1_f = 0.0;
            aaa_B.bililiuliangfa18_2_l = 1.0;
          } else {
            if ((aaa_B.DataTypeConversion27[2] <= aaa_B.u_p) &&
                (aaa_B.DataTypeConversion27[4] <= aaa_B.u_p)) {
              /* Transition: '<S37>:1131' */
              aaa_DW.is_SXQxieya = aaa_IN_xieya8;
              aaa_DW.temporalCounter_i1_e = 0U;

              /* Entry 'xieya8': '<S37>:1146' */
              aaa_B.bililiuliangfa18_1_f = 1.0;
              aaa_B.bililiuliangfa18_2_l = 1.0;
            }
          }
        }
      }
    }
    break;
  }

  if (guard1) {
    if (aaa_DW.p0_2 > aaa_B.u_p) {
      /* Transition: '<S37>:1122' */
      if ((aaa_B.DataTypeConversion27[2] > aaa_DW.p0_2) &&
          (aaa_B.DataTypeConversion27[4] > aaa_DW.p0_2)) {
        /* Transition: '<S37>:1116' */
        aaa_DW.is_SXQxieya = aaa_IN_xieya1_1;

        /* Entry 'xieya1_1': '<S37>:1139' */
        aaa_B.bililiuliangfa18_1_f = 1.0;
        aaa_B.bililiuliangfa18_2_l = 1.0;
      } else if ((aaa_B.DataTypeConversion27[2] <= aaa_DW.p0_2) &&
                 (aaa_B.DataTypeConversion27[4] > aaa_DW.p0_2)) {
        /* Transition: '<S37>:1115' */
        aaa_DW.is_SXQxieya = aaa_IN_xieya1_2;

        /* Entry 'xieya1_2': '<S37>:1138' */
        aaa_B.bililiuliangfa18_1_f = 1.0;
        aaa_B.bililiuliangfa18_2_l = 0.0;
      } else if ((aaa_B.DataTypeConversion27[2] > aaa_DW.p0_2) &&
                 (aaa_B.DataTypeConversion27[4] <= aaa_DW.p0_2)) {
        /* Transition: '<S37>:1120' */
        aaa_DW.is_SXQxieya = aaa_IN_xieya1_3;

        /* Entry 'xieya1_3': '<S37>:1140' */
        aaa_B.bililiuliangfa18_1_f = 0.0;
        aaa_B.bililiuliangfa18_2_l = 1.0;
      } else {
        if ((aaa_B.DataTypeConversion27[2] <= aaa_DW.p0_2) &&
            (aaa_B.DataTypeConversion27[4] <= aaa_DW.p0_2)) {
          /* Transition: '<S37>:1121' */
          aaa_DW.is_SXQxieya = aaa_IN_xieya2;

          /* Entry 'xieya2': '<S37>:1141' */
          aaa_B.bililiuliangfa18_1_f = 1.0;
          aaa_B.bililiuliangfa18_2_l = 1.0;
          aaa_DW.p0_2 -= 0.03;
        }
      }
    }
  }
}

/* Function for Chart: '<S26>/Chart' */
static void aaa_zidong(void)
{
  /* During 'zidong': '<S37>:1170' */
  if ((aaa_B.DataTypeConversion13 == 1.0) || (aaa_B.DataTypeConversion6 == 0.0))
  {
    /* Transition: '<S37>:1175' */
    /* Exit Internal 'zidong': '<S37>:1170' */
    /* Exit Internal 'SCjiaya': '<S37>:44' */
    aaa_DW.is_SCjiaya = aaa_IN_NO_ACTIVE_CHILD_c;
    aaa_DW.is_zidong = aaa_IN_NO_ACTIVE_CHILD_c;

    /* Exit Internal 'SCzhushui': '<S37>:28' */
    aaa_DW.is_SCzhushui = aaa_IN_NO_ACTIVE_CHILD_c;

    /* Exit Internal 'SXQjunya': '<S37>:1194' */
    aaa_DW.is_SXQjunya = aaa_IN_NO_ACTIVE_CHILD_c;

    /* Exit Internal 'SXQxieya': '<S37>:1106' */
    aaa_DW.is_SXQxieya = aaa_IN_NO_ACTIVE_CHILD_c;

    /* Exit Internal 'kaiguangai': '<S37>:939' */
    aaa_DW.is_kaiguangai = aaa_IN_NO_ACTIVE_CHILD_c;
    aaa_DW.is_c1_aaa = aaa_IN_off111;

    /* Entry 'off111': '<S37>:1174' */
    aaa_B.diancifa11_1_k = 0.0;
    aaa_B.diancifa11_2_p = 0.0;
    aaa_B.diancifa11_5_b = 0.0;
    aaa_B.diancifa20_j = 0.0;
    aaa_B.diancifa16_1_c = 0.0;
    aaa_B.diancifa3_c = 0.0;
    aaa_B.diancifa21_d = 0.0;
    aaa_B.bililiuliangfa18_1_f = 0.0;
    aaa_B.bililiuliangfa18_2_l = 0.0;
    aaa_B.bililiuliangfa18_3_j = 0.0;
    aaa_B.bililiuliangfa18_4_e = 0.0;
    aaa_B.xuansong_i = 0.0;
    aaa_B.xuanjin_i = 0.0;
    aaa_B.suoding_k = 0.0;
    aaa_B.jiesuo_p = 0.0;
    aaa_B.SCzhushuiwancheng = 0.0;
    aaa_B.SCjiayawancheng = 0.0;
    aaa_B.SXQjunyawancheng = 0.0;
    aaa_B.SQshiyabuchangwancheng = 0.0;
    aaa_B.kaigaikaishi = 0.0;
    aaa_B.kaigaiwancheng = 0.0;
    aaa_B.SQxuanjinjianyawancheng = 0.0;
    aaa_B.guangaikaishi = 0.0;
    aaa_B.guangaiwancheng = 0.0;
    aaa_B.SXQxieyawancheng = 0.0;
  } else {
    switch (aaa_DW.is_zidong) {
     case aaa_IN_SCjiaya:
      /* During 'SCjiaya': '<S37>:44' */
      switch (aaa_DW.is_SCjiaya) {
       case aaa_IN_off1:
        /* During 'off1': '<S37>:56' */
        /* Transition: '<S37>:47' */
        aaa_DW.is_SCjiaya = aaa_IN_on1_ahr;

        /* Entry 'on1': '<S37>:57' */
        aaa_B.diancifa11_1_k = 1.0;
        aaa_B.diancifa11_2_p = 1.0;
        aaa_B.diancifa16_1_c = 0.0;
        break;

       case aaa_IN_off2_o:
        /* During 'off2': '<S37>:58' */
        if (aaa_DW.temporalCounter_i1_e >= 1000) {
          /* Transition: '<S37>:50' */
          if (aaa_B.DataTypeConversion27[0] < aaa_B.u) {
            /* Transition: '<S37>:51' */
            aaa_DW.is_SCjiaya = aaa_IN_on3_f;

            /* Entry 'on3': '<S37>:59' */
            aaa_B.diancifa11_1_k = 1.0;
            aaa_B.diancifa11_2_p = 1.0;
            aaa_B.diancifa16_1_c = 0.0;
          } else if (aaa_B.DataTypeConversion27[0] > aaa_B.u + 0.005) {
            /* Transition: '<S37>:52' */
            aaa_DW.is_SCjiaya = aaa_IN_on2_hu;

            /* Entry 'on2': '<S37>:60' */
            aaa_B.diancifa16_1_c = 1.0;
          } else {
            if ((aaa_B.DataTypeConversion27[0] >= aaa_B.u) &&
                (aaa_B.DataTypeConversion27[0] <= aaa_B.u + 0.005)) {
              /* Transition: '<S37>:53' */
              aaa_DW.is_SCjiaya = aaa_IN_off3_p;

              /* Entry 'off3': '<S37>:61' */
              aaa_B.diancifa11_1_k = 0.0;
              aaa_B.diancifa11_2_p = 0.0;
              aaa_B.diancifa16_1_c = 0.0;
            }
          }
        }
        break;

       case aaa_IN_off3_p:
        /* During 'off3': '<S37>:61' */
        /* Transition: '<S37>:66' */
        aaa_DW.is_SCjiaya = aaa_IN_off4_g;
        aaa_DW.temporalCounter_i1_e = 0U;

        /* Entry 'off4': '<S37>:65' */
        aaa_B.SCjiayawancheng = 1.0;
        break;

       case aaa_IN_off4_g:
        /* During 'off4': '<S37>:65' */
        if (aaa_DW.temporalCounter_i1_e >= 1000) {
          /* Transition: '<S37>:1180' */
          aaa_DW.is_SCjiaya = aaa_IN_NO_ACTIVE_CHILD_c;
          aaa_DW.is_zidong = aaa_IN_SXQjunya;

          /* Entry Internal 'SXQjunya': '<S37>:1194' */
          /* Transition: '<S37>:1204' */
          aaa_DW.is_SXQjunya = aaa_IN_off1_b;

          /* Entry 'off1': '<S37>:1240' */
          aaa_B.diancifa11_1_k = 0.0;
          aaa_B.diancifa11_5_b = 0.0;
          aaa_B.diancifa20_j = 0.0;
          aaa_B.bililiuliangfa18_1_f = 0.0;
          aaa_B.bililiuliangfa18_2_l = 0.0;
          aaa_B.bililiuliangfa18_3_j = 0.0;
          aaa_B.bililiuliangfa18_4_e = 0.0;
        }
        break;

       case aaa_IN_on1_ahr:
        /* During 'on1': '<S37>:57' */
        if (aaa_B.DataTypeConversion27[0] >= aaa_B.u) {
          /* Transition: '<S37>:48' */
          aaa_DW.is_SCjiaya = aaa_IN_off2_o;
          aaa_DW.temporalCounter_i1_e = 0U;

          /* Entry 'off2': '<S37>:58' */
          aaa_B.diancifa11_1_k = 0.0;
          aaa_B.diancifa11_2_p = 0.0;
          aaa_B.diancifa16_1_c = 0.0;
        }
        break;

       case aaa_IN_on2_hu:
        /* During 'on2': '<S37>:60' */
        /* Transition: '<S37>:54' */
        if (aaa_B.DataTypeConversion27[0] < aaa_B.u) {
          /* Transition: '<S37>:51' */
          aaa_DW.is_SCjiaya = aaa_IN_on3_f;

          /* Entry 'on3': '<S37>:59' */
          aaa_B.diancifa11_1_k = 1.0;
          aaa_B.diancifa11_2_p = 1.0;
          aaa_B.diancifa16_1_c = 0.0;
        } else if (aaa_B.DataTypeConversion27[0] > aaa_B.u + 0.005) {
          /* Transition: '<S37>:52' */
          aaa_DW.is_SCjiaya = aaa_IN_on2_hu;

          /* Entry 'on2': '<S37>:60' */
          aaa_B.diancifa16_1_c = 1.0;
        } else {
          if ((aaa_B.DataTypeConversion27[0] >= aaa_B.u) &&
              (aaa_B.DataTypeConversion27[0] <= aaa_B.u + 0.005)) {
            /* Transition: '<S37>:53' */
            aaa_DW.is_SCjiaya = aaa_IN_off3_p;

            /* Entry 'off3': '<S37>:61' */
            aaa_B.diancifa11_1_k = 0.0;
            aaa_B.diancifa11_2_p = 0.0;
            aaa_B.diancifa16_1_c = 0.0;
          }
        }
        break;

       default:
        /* During 'on3': '<S37>:59' */
        /* Transition: '<S37>:49' */
        if (aaa_B.DataTypeConversion27[0] < aaa_B.u) {
          /* Transition: '<S37>:51' */
          aaa_DW.is_SCjiaya = aaa_IN_on3_f;

          /* Entry 'on3': '<S37>:59' */
          aaa_B.diancifa11_1_k = 1.0;
          aaa_B.diancifa11_2_p = 1.0;
          aaa_B.diancifa16_1_c = 0.0;
        } else if (aaa_B.DataTypeConversion27[0] > aaa_B.u + 0.005) {
          /* Transition: '<S37>:52' */
          aaa_DW.is_SCjiaya = aaa_IN_on2_hu;

          /* Entry 'on2': '<S37>:60' */
          aaa_B.diancifa16_1_c = 1.0;
        } else {
          if ((aaa_B.DataTypeConversion27[0] >= aaa_B.u) &&
              (aaa_B.DataTypeConversion27[0] <= aaa_B.u + 0.005)) {
            /* Transition: '<S37>:53' */
            aaa_DW.is_SCjiaya = aaa_IN_off3_p;

            /* Entry 'off3': '<S37>:61' */
            aaa_B.diancifa11_1_k = 0.0;
            aaa_B.diancifa11_2_p = 0.0;
            aaa_B.diancifa16_1_c = 0.0;
          }
        }
        break;
      }
      break;

     case aaa_IN_SCzhushui:
      /* During 'SCzhushui': '<S37>:28' */
      switch (aaa_DW.is_SCzhushui) {
       case aaa_IN_off1:
        /* During 'off1': '<S37>:40' */
        /* Transition: '<S37>:33' */
        aaa_DW.is_SCzhushui = aaa_IN_off2_o;

        /* Entry 'off2': '<S37>:39' */
        aaa_B.diancifa16_1_c = 0.0;
        break;

       case aaa_IN_off2_o:
        /* During 'off2': '<S37>:39' */
        /* Transition: '<S37>:34' */
        aaa_DW.is_SCzhushui = aaa_IN_off3_p;
        aaa_DW.temporalCounter_i1_e = 0U;

        /* Entry 'off3': '<S37>:38' */
        aaa_B.SCzhushuiwancheng = 1.0;
        break;

       case aaa_IN_off3_p:
        /* During 'off3': '<S37>:38' */
        if (aaa_DW.temporalCounter_i1_e >= 1000) {
          /* Transition: '<S37>:1179' */
          aaa_DW.is_SCzhushui = aaa_IN_NO_ACTIVE_CHILD_c;
          aaa_DW.is_zidong = aaa_IN_SCjiaya;

          /* Entry Internal 'SCjiaya': '<S37>:44' */
          /* Transition: '<S37>:1184' */
          aaa_DW.is_SCjiaya = aaa_IN_off1;

          /* Entry 'off1': '<S37>:56' */
          aaa_B.diancifa11_1_k = 0.0;
          aaa_B.diancifa11_2_p = 0.0;
          aaa_B.diancifa16_1_c = 0.0;
        }
        break;

       case aaa_IN_off4_g:
        /* During 'off4': '<S37>:37' */
        /* Transition: '<S37>:30' */
        aaa_DW.is_SCzhushui = aaa_IN_on2_huv;
        aaa_DW.temporalCounter_i1_e = 0U;

        /* Entry 'on2': '<S37>:35' */
        aaa_B.diancifa16_1_c = 1.0;
        break;

       case aaa_IN_on2_huv:
        /* During 'on2': '<S37>:35' */
        if (aaa_DW.temporalCounter_i1_e >= 20) {
          /* Transition: '<S37>:31' */
          aaa_DW.is_SCzhushui = aaa_IN_on3_fz;

          /* Entry 'on3': '<S37>:36' */
          aaa_B.diancifa3_c = 1.0;
        }
        break;

       default:
        /* During 'on3': '<S37>:36' */
        if (aaa_B.DataTypeConversion28 == 1.0) {
          /* Transition: '<S37>:32' */
          aaa_DW.is_SCzhushui = aaa_IN_off1;

          /* Entry 'off1': '<S37>:40' */
          aaa_B.diancifa3_c = 0.0;
        }
        break;
      }
      break;

     case aaa_IN_SXQjunya:
      aaa_SXQjunya_o();
      break;

     case aaa_IN_SXQxieya:
      aaa_SXQxieya_k();
      break;

     default:
      /* During 'kaiguangai': '<S37>:939' */
      switch (aaa_DW.is_kaiguangai) {
       case aaa_IN_off1:
        /* During 'off1': '<S37>:958' */
        if (aaa_DW.temporalCounter_i1_e >= 20) {
          /* Transition: '<S37>:1157' */
          aaa_DW.is_kaiguangai = aaa_IN_off2_o;
          aaa_DW.temporalCounter_i1_e = 0U;

          /* Entry 'off2': '<S37>:1156' */
          aaa_B.diancifa20_j = 0.0;
          aaa_B.SQshiyabuchangwancheng = 1.0;
        }
        break;

       case aaa_IN_off2_o:
        /* During 'off2': '<S37>:1156' */
        if (aaa_DW.temporalCounter_i1_e >= 500) {
          /* Transition: '<S37>:947' */
          aaa_DW.is_kaiguangai = aaa_IN_on3_p;

          /* Entry 'on3': '<S37>:960' */
          aaa_B.kaigaikaishi = 1.0;
        }
        break;

       case aaa_IN_off3_p:
        /* During 'off3': '<S37>:964' */
        if (aaa_DW.temporalCounter_i1_e >= 20) {
          /* Transition: '<S37>:952' */
          aaa_DW.is_kaiguangai = aaa_IN_off4_g;
          aaa_DW.temporalCounter_i1_e = 0U;

          /* Entry 'off4': '<S37>:965' */
          aaa_B.kaigaiwancheng = 1.0;
        }
        break;

       case aaa_IN_off4_g:
        /* During 'off4': '<S37>:965' */
        if (aaa_DW.temporalCounter_i1_e >= 2500) {
          /* Transition: '<S37>:941' */
          aaa_DW.is_kaiguangai = aaa_IN_on5_b;

          /* Entry 'on5': '<S37>:954' */
          aaa_B.jiesuo_p = 1.0;
          aaa_B.xuansong_i = 1.0;
        }
        break;

       case aaa_IN_off5_p:
        /* During 'off5': '<S37>:955' */
        if (aaa_DW.temporalCounter_i1_e >= 500) {
          /* Transition: '<S37>:944' */
          aaa_DW.is_kaiguangai = aaa_IN_on6_n;

          /* Entry 'on6': '<S37>:957' */
          aaa_B.guangaikaishi = 1.0;
        }
        break;

       case aaa_IN_off6_i:
        /* During 'off6': '<S37>:961' */
        if (aaa_DW.temporalCounter_i1_e >= 20) {
          /* Transition: '<S37>:950' */
          aaa_DW.is_kaiguangai = aaa_IN_off7_p;
          aaa_DW.temporalCounter_i1_e = 0U;

          /* Entry 'off7': '<S37>:963' */
          aaa_B.diancifa20_j = 0.0;
          aaa_B.SQxuanjinjianyawancheng = 1.0;
          aaa_B.guangaiwancheng = 1.0;
        }
        break;

       case aaa_IN_off7_p:
        /* During 'off7': '<S37>:963' */
        if (aaa_DW.temporalCounter_i1_e >= 1000) {
          /* Transition: '<S37>:1189' */
          aaa_DW.is_kaiguangai = aaa_IN_NO_ACTIVE_CHILD_c;
          aaa_DW.is_zidong = aaa_IN_SXQxieya;

          /* Entry Internal 'SXQxieya': '<S37>:1106' */
          /* Transition: '<S37>:1181' */
          aaa_DW.is_SXQxieya = aaa_IN_off1;

          /* Entry 'off1': '<S37>:1135' */
          aaa_B.diancifa11_1_k = 0.0;
          aaa_B.bililiuliangfa18_3_j = 0.0;
          aaa_B.bililiuliangfa18_4_e = 0.0;
        }
        break;

       case aaa_IN_on1_j:
        /* During 'on1': '<S37>:324' */
        if ((aaa_B.DataTypeConversion1 == 1.0) && (aaa_B.DataTypeConversion27[0]
             >= aaa_B.DataTypeConversion27[2] - 0.01) &&
            (aaa_B.DataTypeConversion27[0] <= aaa_B.DataTypeConversion27[2] +
             0.01)) {
          /* Transition: '<S37>:1151' */
          aaa_DW.is_kaiguangai = aaa_IN_on2_c;

          /* Entry 'on2': '<S37>:956' */
          aaa_B.xuansong_i = 1.0;
          aaa_B.jiesuo_p = 1.0;
        }
        break;

       case aaa_IN_on2_c:
        /* During 'on2': '<S37>:956' */
        if ((aaa_B.DataTypeConversion24[6] == 1.0) &&
            (aaa_B.DataTypeConversion24[7] == 1.0) &&
            (aaa_B.DataTypeConversion24[8] == 1.0) &&
            (aaa_B.DataTypeConversion24[9] == 1.0)) {
          /* Transition: '<S37>:945' */
          aaa_DW.is_kaiguangai = aaa_IN_off1;
          aaa_DW.temporalCounter_i1_e = 0U;

          /* Entry 'off1': '<S37>:958' */
          aaa_B.xuansong_i = 0.0;
          aaa_B.jiesuo_p = 0.0;
        }
        break;

       case aaa_IN_on3_p:
        /* During 'on3': '<S37>:960' */
        if (aaa_B.DataTypeConversion24[0] == 1.0) {
          /* Transition: '<S37>:949' */
          aaa_DW.is_kaiguangai = aaa_IN_on4_p;

          /* Entry 'on4': '<S37>:962' */
          aaa_B.kaigaikaishi = 0.0;
          aaa_B.suoding_k = 1.0;
        }
        break;

       case aaa_IN_on4_p:
        /* During 'on4': '<S37>:962' */
        if ((aaa_B.DataTypeConversion24[10] == 1.0) &&
            (aaa_B.DataTypeConversion24[11] == 1.0)) {
          /* Transition: '<S37>:951' */
          aaa_DW.is_kaiguangai = aaa_IN_off3_p;
          aaa_DW.temporalCounter_i1_e = 0U;

          /* Entry 'off3': '<S37>:964' */
          aaa_B.suoding_k = 0.0;
        }
        break;

       case aaa_IN_on5_b:
        /* During 'on5': '<S37>:954' */
        if ((aaa_B.DataTypeConversion24[8] == 1.0) &&
            (aaa_B.DataTypeConversion24[9] == 1.0) &&
            (aaa_B.DataTypeConversion24[6] == 1.0) &&
            (aaa_B.DataTypeConversion24[7] == 1.0)) {
          /* Transition: '<S37>:942' */
          aaa_DW.is_kaiguangai = aaa_IN_off5_p;
          aaa_DW.temporalCounter_i1_e = 0U;

          /* Entry 'off5': '<S37>:955' */
          aaa_B.jiesuo_p = 0.0;
          aaa_B.xuansong_i = 0.0;
        }
        break;

       case aaa_IN_on6_n:
        /* During 'on6': '<S37>:957' */
        if (aaa_B.DataTypeConversion24[2] == 1.0) {
          /* Transition: '<S37>:946' */
          aaa_DW.is_kaiguangai = aaa_IN_on7_o;

          /* Entry 'on7': '<S37>:959' */
          aaa_B.guangaikaishi = 0.0;
          aaa_B.diancifa20_j = 1.0;
        }
        break;

       case aaa_IN_on7_o:
        /* During 'on7': '<S37>:959' */
        /* Transition: '<S37>:1155' */
        aaa_DW.is_kaiguangai = aaa_IN_on8_n;

        /* Entry 'on8': '<S37>:1153' */
        aaa_B.xuanjin_i = 1.0;
        break;

       case aaa_IN_on8_n:
        /* During 'on8': '<S37>:1153' */
        if ((aaa_B.DataTypeConversion24[4] == 1.0) &&
            (aaa_B.DataTypeConversion24[5] == 1.0)) {
          /* Transition: '<S37>:948' */
          aaa_DW.is_kaiguangai = aaa_IN_off6_i;
          aaa_DW.temporalCounter_i1_e = 0U;

          /* Entry 'off6': '<S37>:961' */
          aaa_B.xuanjin_i = 0.0;
        }
        break;

       default:
        /* During 'start': '<S37>:953' */
        /* Transition: '<S37>:943' */
        aaa_DW.is_kaiguangai = aaa_IN_on1_j;

        /* Entry 'on1': '<S37>:324' */
        aaa_B.diancifa20_j = 1.0;
        break;
      }
      break;
    }
  }
}

/* Function for Chart: '<S26>/Chart' */
static void aaa_enter_atomic_start_c(void)
{
  /* Entry 'start': '<S37>:27' */
  aaa_B.diancifa11_1_k = 0.0;
  aaa_B.diancifa11_2_p = 0.0;
  aaa_B.diancifa11_5_b = 0.0;
  aaa_B.diancifa20_j = 0.0;
  aaa_B.diancifa16_1_c = 0.0;
  aaa_B.diancifa3_c = 0.0;
  aaa_B.diancifa21_d = 0.0;
  aaa_B.bililiuliangfa18_1_f = 0.0;
  aaa_B.bililiuliangfa18_2_l = 0.0;
  aaa_B.bililiuliangfa18_3_j = 0.0;
  aaa_B.bililiuliangfa18_4_e = 0.0;
  aaa_B.xuansong_i = 0.0;
  aaa_B.xuanjin_i = 0.0;
  aaa_B.suoding_k = 0.0;
  aaa_B.jiesuo_p = 0.0;
  aaa_B.kaigaikaishi = 0.0;
  aaa_B.guangaikaishi = 0.0;
}

/* Function for Chart: '<S25>/Chart' */
static void aaa_enter_atomic_start(void)
{
  /* Entry 'start': '<S27>:27' */
  aaa_B.diancifa11_1_l = 0.0;
  aaa_B.diancifa11_2_i = 0.0;
  aaa_B.diancifa11_5_k = 0.0;
  aaa_B.diancifa20_l = 0.0;
  aaa_B.diancifa16_1_cy = 0.0;
  aaa_B.diancifa3_m = 0.0;
  aaa_B.diancifa21_h = 0.0;
  aaa_B.bililiuliangfa18_1_b = 0.0;
  aaa_B.bililiuliangfa18_2_j = 0.0;
  aaa_B.bililiuliangfa18_3_l = 0.0;
  aaa_B.bililiuliangfa18_4_l = 0.0;
  aaa_B.xuansong_g = 0.0;
  aaa_B.xuanjin_l = 0.0;
  aaa_B.suoding_j = 0.0;
  aaa_B.jiesuo_k = 0.0;
  aaa_B.kaigaikaishi_e = 0.0;
  aaa_B.guangaikaishi_o = 0.0;
}

/* Function for Chart: '<S25>/Chart' */
static void aaa_kaiguangai(void)
{
  /* During 'kaiguangai': '<S27>:1243' */
  switch (aaa_DW.is_kaiguangai_c) {
   case aaa_IN_off1:
    /* During 'off1': '<S27>:1293' */
    if (aaa_DW.temporalCounter_i1_i >= 200) {
      /* Transition: '<S27>:1263' */
      aaa_DW.is_kaiguangai_c = aaa_IN_off2;
      aaa_DW.temporalCounter_i1_i = 0U;

      /* Entry 'off2': '<S27>:1295' */
      aaa_B.diancifa20_l = 0.0;
      aaa_B.SQshiyabuchangwancheng_l = 1.0;
    }
    break;

   case aaa_IN_off10:
    /* During 'off10': '<S27>:1290' */
    if (aaa_B.Switch2_a == 1.0) {
      /* Transition: '<S27>:1253' */
      aaa_DW.is_kaiguangai_c = aaa_IN_on5;

      /* Entry 'on5': '<S27>:1288' */
      aaa_B.jiesuo_k = 1.0;
    }
    break;

   case aaa_IN_off11:
    /* During 'off11': '<S27>:1303' */
    if (aaa_B.Switch2_k == 1.0) {
      /* Transition: '<S27>:1275' */
      aaa_DW.is_kaiguangai_c = aaa_IN_on8;

      /* Entry 'on8': '<S27>:1301' */
      aaa_B.xuanjin_l = 1.0;
    }
    break;

   case aaa_IN_off2:
    /* During 'off2': '<S27>:1295' */
    if ((aaa_DW.temporalCounter_i1_i >= 500) && (aaa_B.Switch == 1.0)) {
      /* Transition: '<S27>:1268' */
      aaa_DW.is_kaiguangai_c = aaa_IN_on3;

      /* Entry 'on3': '<S27>:1298' */
      aaa_B.kaigaikaishi_e = 1.0;
    }
    break;

   case aaa_IN_off3:
    /* During 'off3': '<S27>:1307' */
    if (aaa_DW.temporalCounter_i1_i >= 200) {
      /* Transition: '<S27>:1285' */
      aaa_DW.is_kaiguangai_c = aaa_IN_off4;

      /* Entry 'off4': '<S27>:1309' */
      aaa_B.kaigaiwancheng_b = 1.0;
    }
    break;

   case aaa_IN_off4:
    /* During 'off4': '<S27>:1309' */
    if (aaa_B.Switch2_a == 1.0) {
      /* Transition: '<S27>:1252' */
      aaa_DW.is_kaiguangai_c = aaa_IN_on5;

      /* Entry 'on5': '<S27>:1288' */
      aaa_B.jiesuo_k = 1.0;
    }
    break;

   case aaa_IN_off5:
    /* During 'off5': '<S27>:1292' */
    if ((aaa_DW.temporalCounter_i1_i >= 500) && (aaa_B.Switch2 == 1.0)) {
      /* Transition: '<S27>:1262' */
      aaa_DW.is_kaiguangai_c = aaa_IN_on6;

      /* Entry 'on6': '<S27>:1294' */
      aaa_B.guangaikaishi_o = 1.0;
    }
    break;

   case aaa_IN_off6:
    /* During 'off6': '<S27>:1305' */
    if (aaa_DW.temporalCounter_i1_i >= 200) {
      /* Transition: '<S27>:1284' */
      aaa_DW.is_kaiguangai_c = aaa_IN_off7;

      /* Entry 'off7': '<S27>:1308' */
      aaa_B.diancifa20_l = 0.0;
      aaa_B.SQxuanjinjianyawancheng_n = 1.0;
      aaa_B.guangaiwancheng_f = 1.0;
    }
    break;

   case aaa_IN_off7:
    /* During 'off7': '<S27>:1308' */
    /* Transition: '<S27>:1587' */
    aaa_DW.is_kaiguangai_c = aaa_IN_start_c;

    /* Entry 'start': '<S27>:1286' */
    aaa_B.xuansong_g = 0.0;
    aaa_B.xuanjin_l = 0.0;
    aaa_B.suoding_j = 0.0;
    aaa_B.jiesuo_k = 0.0;
    aaa_B.kaigaikaishi_e = 0.0;
    aaa_B.guangaikaishi_o = 0.0;
    aaa_B.diancifa20_l = 0.0;
    break;

   case aaa_IN_off8:
    /* During 'off8': '<S27>:1291' */
    if (aaa_B.Switch_k == 1.0) {
      /* Transition: '<S27>:1256' */
      aaa_DW.is_kaiguangai_c = aaa_IN_on2_h;

      /* Entry 'on2': '<S27>:1289' */
      aaa_B.xuansong_g = 1.0;
    }
    break;

   case aaa_IN_off9:
    /* During 'off9': '<S27>:1306' */
    if (aaa_B.suoding_j == 1.0) {
      /* Transition: '<S27>:1280' */
      aaa_DW.is_kaiguangai_c = aaa_IN_on41;

      /* Entry 'on41': '<S27>:1304' */
      aaa_B.suoding_j = 1.0;
    }
    break;

   case aaa_IN_on1_a:
    /* During 'on1': '<S27>:1287' */
    if ((aaa_B.DataTypeConversion1 == 1.0) && (aaa_B.DataTypeConversion27[0] >=
         aaa_B.DataTypeConversion27[2] - 0.01) && (aaa_B.DataTypeConversion27[0]
         <= aaa_B.DataTypeConversion27[2] + 0.01) && (aaa_B.Switch_k == 1.0)) {
      /* Transition: '<S27>:1255' */
      aaa_DW.is_kaiguangai_c = aaa_IN_on2_h;

      /* Entry 'on2': '<S27>:1289' */
      aaa_B.xuansong_g = 1.0;
    }
    break;

   case aaa_IN_on2_h:
    /* During 'on2': '<S27>:1289' */
    /* Transition: '<S27>:1259' */
    if ((aaa_B.DataTypeConversion24[6] == 1.0) && (aaa_B.DataTypeConversion24[7]
         == 1.0)) {
      /* Transition: '<S27>:1261' */
      aaa_DW.is_kaiguangai_c = aaa_IN_off1;
      aaa_DW.temporalCounter_i1_i = 0U;

      /* Entry 'off1': '<S27>:1293' */
      aaa_B.xuansong_g = 0.0;
    } else {
      if (aaa_B.Switch_k == 0.0) {
        /* Transition: '<S27>:1260' */
        aaa_DW.is_kaiguangai_c = aaa_IN_off8;

        /* Entry 'off8': '<S27>:1291' */
        aaa_B.xuansong_g = 0.0;
      }
    }
    break;

   case aaa_IN_on3:
    /* During 'on3': '<S27>:1298' */
    /* Transition: '<S27>:1271' */
    if (aaa_B.DataTypeConversion24[0] == 1.0) {
      /* Transition: '<S27>:1274' */
      aaa_DW.is_kaiguangai_c = aaa_IN_on4;

      /* Entry 'on4': '<S27>:1302' */
      aaa_B.kaigaikaishi_e = 0.0;
    } else {
      if (aaa_B.Switch == 0.0) {
        /* Transition: '<S27>:1273' */
        aaa_DW.is_kaiguangai_c = aaa_IN_on72;

        /* Entry 'on72': '<S27>:1300' */
        aaa_B.kaigaikaishi_e = 0.0;
      }
    }
    break;

   case aaa_IN_on4:
    /* During 'on4': '<S27>:1302' */
    if (aaa_B.Switch_d == 1.0) {
      /* Transition: '<S27>:1277' */
      aaa_DW.is_kaiguangai_c = aaa_IN_on41;

      /* Entry 'on41': '<S27>:1304' */
      aaa_B.suoding_j = 1.0;
    }
    break;

   case aaa_IN_on41:
    /* During 'on41': '<S27>:1304' */
    /* Transition: '<S27>:1281' */
    if ((aaa_B.DataTypeConversion24[10] == 1.0) && (aaa_B.DataTypeConversion24
         [11] == 1.0)) {
      /* Transition: '<S27>:1283' */
      aaa_DW.is_kaiguangai_c = aaa_IN_off3;
      aaa_DW.temporalCounter_i1_i = 0U;

      /* Entry 'off3': '<S27>:1307' */
      aaa_B.suoding_j = 0.0;
    } else {
      if (aaa_B.suoding_j == 0.0) {
        /* Transition: '<S27>:1282' */
        aaa_DW.is_kaiguangai_c = aaa_IN_off9;

        /* Entry 'off9': '<S27>:1306' */
        aaa_B.suoding_j = 0.0;
      }
    }
    break;

   case aaa_IN_on5:
    /* During 'on5': '<S27>:1288' */
    /* Transition: '<S27>:1254' */
    if ((aaa_B.DataTypeConversion24[8] == 1.0) && (aaa_B.DataTypeConversion24[9]
         == 1.0)) {
      /* Transition: '<S27>:1258' */
      aaa_DW.is_kaiguangai_c = aaa_IN_off5;
      aaa_DW.temporalCounter_i1_i = 0U;

      /* Entry 'off5': '<S27>:1292' */
      aaa_B.jiesuo_k = 0.0;
    } else {
      if (aaa_B.Switch2_a == 0.0) {
        /* Transition: '<S27>:1257' */
        aaa_DW.is_kaiguangai_c = aaa_IN_off10;

        /* Entry 'off10': '<S27>:1290' */
        aaa_B.jiesuo_k = 0.0;
      }
    }
    break;

   case aaa_IN_on6:
    /* During 'on6': '<S27>:1294' */
    /* Transition: '<S27>:1265' */
    if (aaa_B.DataTypeConversion24[2] == 1.0) {
      /* Transition: '<S27>:1267' */
      aaa_DW.is_kaiguangai_c = aaa_IN_on7;

      /* Entry 'on7': '<S27>:1297' */
      aaa_B.guangaikaishi_o = 0.0;
    } else {
      if (aaa_B.Switch2 == 0.0) {
        /* Transition: '<S27>:1266' */
        aaa_DW.is_kaiguangai_c = aaa_IN_on73;

        /* Entry 'on73': '<S27>:1296' */
        aaa_B.guangaikaishi_o = 0.0;
      }
    }
    break;

   case aaa_IN_on7:
    /* During 'on7': '<S27>:1297' */
    if (aaa_B.DataTypeConversion22 == 1.0) {
      /* Transition: '<S27>:1269' */
      aaa_DW.is_kaiguangai_c = aaa_IN_on71;

      /* Entry 'on71': '<S27>:1299' */
      aaa_B.diancifa20_l = 1.0;
    }
    break;

   case aaa_IN_on71:
    /* During 'on71': '<S27>:1299' */
    if (aaa_B.Switch2_k == 1.0) {
      /* Transition: '<S27>:1272' */
      aaa_DW.is_kaiguangai_c = aaa_IN_on8;

      /* Entry 'on8': '<S27>:1301' */
      aaa_B.xuanjin_l = 1.0;
    }
    break;

   case aaa_IN_on72:
    /* During 'on72': '<S27>:1300' */
    if (aaa_B.Switch == 1.0) {
      /* Transition: '<S27>:1270' */
      aaa_DW.is_kaiguangai_c = aaa_IN_on3;

      /* Entry 'on3': '<S27>:1298' */
      aaa_B.kaigaikaishi_e = 1.0;
    }
    break;

   case aaa_IN_on73:
    /* During 'on73': '<S27>:1296' */
    if (aaa_B.Switch2 == 1.0) {
      /* Transition: '<S27>:1264' */
      aaa_DW.is_kaiguangai_c = aaa_IN_on6;

      /* Entry 'on6': '<S27>:1294' */
      aaa_B.guangaikaishi_o = 1.0;
    }
    break;

   case aaa_IN_on8:
    /* During 'on8': '<S27>:1301' */
    /* Transition: '<S27>:1276' */
    if ((aaa_B.DataTypeConversion24[4] == 1.0) && (aaa_B.DataTypeConversion24[5]
         == 1.0)) {
      /* Transition: '<S27>:1279' */
      aaa_DW.is_kaiguangai_c = aaa_IN_off6;
      aaa_DW.temporalCounter_i1_i = 0U;

      /* Entry 'off6': '<S27>:1305' */
      aaa_B.xuanjin_l = 0.0;
    } else {
      if (aaa_B.Switch2_k == 0.0) {
        /* Transition: '<S27>:1278' */
        aaa_DW.is_kaiguangai_c = aaa_IN_off11;

        /* Entry 'off11': '<S27>:1303' */
        aaa_B.xuanjin_l = 0.0;
      }
    }
    break;

   default:
    /* During 'start': '<S27>:1286' */
    if (aaa_B.DataTypeConversion18 == 1.0) {
      /* Transition: '<S27>:1251' */
      aaa_DW.is_kaiguangai_c = aaa_IN_on1_a;

      /* Entry 'on1': '<S27>:1287' */
      aaa_B.diancifa20_l = 1.0;
    }
    break;
  }
}

/* Function for Chart: '<S25>/Chart' */
static void aaa_xieya2(void)
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
  if (aaa_B.p0_2 <= aaa_B.u_p) {
    /* Transition: '<S27>:1459' */
    if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_p) &&
        (aaa_B.DataTypeConversion27[4] > aaa_B.u_p)) {
      /* Transition: '<S27>:1463' */
      if (aaa_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1461' */
        aaa_DW.is_SXQxieya_o = aaa_IN_xieya7_1;

        /* Entry 'xieya7_1': '<S27>:1481' */
        aaa_B.bililiuliangfa18_1_b = 1.0;
        aaa_B.bililiuliangfa18_2_j = 1.0;
      } else if (aaa_B.DataTypeConversion12 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] <= aaa_B.u_p) &&
        (aaa_B.DataTypeConversion27[4] > aaa_B.u_p)) {
      /* Transition: '<S27>:1462' */
      if (aaa_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1460' */
        aaa_DW.is_SXQxieya_o = aaa_IN_xieya7_2;

        /* Entry 'xieya7_2': '<S27>:1482' */
        aaa_B.bililiuliangfa18_1_b = 1.0;
        aaa_B.bililiuliangfa18_2_j = 0.0;
      } else if (aaa_B.DataTypeConversion12 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_p) &&
        (aaa_B.DataTypeConversion27[4] <= aaa_B.u_p)) {
      /* Transition: '<S27>:1466' */
      if (aaa_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1471' */
        aaa_DW.is_SXQxieya_o = aaa_IN_xieya7_3;

        /* Entry 'xieya7_3': '<S27>:1484' */
        aaa_B.bililiuliangfa18_1_b = 0.0;
        aaa_B.bililiuliangfa18_2_j = 1.0;
      } else if (aaa_B.DataTypeConversion12 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] <= aaa_B.u_p) &&
        (aaa_B.DataTypeConversion27[4] <= aaa_B.u_p)) {
      /* Transition: '<S27>:1467' */
      if (aaa_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1470' */
        aaa_DW.is_SXQxieya_o = aaa_IN_xieya8;
        aaa_DW.temporalCounter_i2 = 0U;

        /* Entry 'xieya8': '<S27>:1483' */
        aaa_B.bililiuliangfa18_1_b = 1.0;
        aaa_B.bililiuliangfa18_2_j = 1.0;
      } else if (aaa_B.DataTypeConversion12 == 0.0) {
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
    if (aaa_B.p0_2 > aaa_B.u_p) {
      /* Transition: '<S27>:1455' */
      if ((aaa_B.DataTypeConversion27[2] > aaa_B.p0_2) &&
          (aaa_B.DataTypeConversion27[4] > aaa_B.p0_2)) {
        /* Transition: '<S27>:1449' */
        if (aaa_B.DataTypeConversion12 == 1.0) {
          /* Transition: '<S27>:1447' */
          aaa_DW.is_SXQxieya_o = aaa_IN_xieya1_1;

          /* Entry 'xieya1_1': '<S27>:1477' */
          aaa_B.bililiuliangfa18_1_b = 1.0;
          aaa_B.bililiuliangfa18_2_j = 1.0;
        } else if (aaa_B.DataTypeConversion12 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] <= aaa_B.p0_2) &&
        (aaa_B.DataTypeConversion27[4] > aaa_B.p0_2)) {
      /* Transition: '<S27>:1446' */
      if (aaa_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1448' */
        aaa_DW.is_SXQxieya_o = aaa_IN_xieya1_2;

        /* Entry 'xieya1_2': '<S27>:1478' */
        aaa_B.bililiuliangfa18_1_b = 1.0;
        aaa_B.bililiuliangfa18_2_j = 0.0;
      } else if (aaa_B.DataTypeConversion12 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] > aaa_B.p0_2) &&
        (aaa_B.DataTypeConversion27[4] <= aaa_B.p0_2)) {
      /* Transition: '<S27>:1454' */
      if (aaa_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1457' */
        aaa_DW.is_SXQxieya_o = aaa_IN_xieya1_3;

        /* Entry 'xieya1_3': '<S27>:1480' */
        aaa_B.bililiuliangfa18_1_b = 0.0;
        aaa_B.bililiuliangfa18_2_j = 1.0;
      } else if (aaa_B.DataTypeConversion12 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] <= aaa_B.p0_2) &&
        (aaa_B.DataTypeConversion27[4] <= aaa_B.p0_2)) {
      /* Transition: '<S27>:1453' */
      if (aaa_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1456' */
        aaa_DW.is_SXQxieya_o = aaa_IN_xieya2;

        /* Entry 'xieya2': '<S27>:1479' */
        aaa_B.bililiuliangfa18_1_b = 1.0;
        aaa_B.bililiuliangfa18_2_j = 1.0;
        aaa_B.p0_2 -= 0.03;
      } else {
        if (aaa_B.DataTypeConversion12 == 0.0) {
          /* Transition: '<S27>:1438' */
          guard2 = true;
        }
      }
    }
  }

  if (guard2) {
    /* Transition: '<S27>:1433' */
    aaa_DW.is_SXQxieya_o = aaa_IN_off1;

    /* Entry 'off1': '<S27>:1474' */
    aaa_B.diancifa11_1_l = 0.0;
    aaa_B.diancifa11_5_k = 0.0;
    aaa_B.bililiuliangfa18_1_b = 0.0;
    aaa_B.bililiuliangfa18_2_j = 0.0;
    aaa_B.bililiuliangfa18_3_l = 0.0;
    aaa_B.bililiuliangfa18_4_l = 0.0;
  }

  if (guard1) {
    /* Transition: '<S27>:1434' */
    aaa_DW.is_SXQxieya_o = aaa_IN_off1;

    /* Entry 'off1': '<S27>:1474' */
    aaa_B.diancifa11_1_l = 0.0;
    aaa_B.diancifa11_5_k = 0.0;
    aaa_B.bililiuliangfa18_1_b = 0.0;
    aaa_B.bililiuliangfa18_2_j = 0.0;
    aaa_B.bililiuliangfa18_3_l = 0.0;
    aaa_B.bililiuliangfa18_4_l = 0.0;
  }
}

/* Function for Chart: '<S25>/Chart' */
static void aaa_xieya7_1(void)
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
  if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_p) &&
      (aaa_B.DataTypeConversion27[4] > aaa_B.u_p)) {
    /* Transition: '<S27>:1463' */
    if (aaa_B.DataTypeConversion12 == 1.0) {
      /* Transition: '<S27>:1461' */
      aaa_DW.is_SXQxieya_o = aaa_IN_xieya7_1;

      /* Entry 'xieya7_1': '<S27>:1481' */
      aaa_B.bililiuliangfa18_1_b = 1.0;
      aaa_B.bililiuliangfa18_2_j = 1.0;
    } else if (aaa_B.DataTypeConversion12 == 0.0) {
      /* Transition: '<S27>:1439' */
      guard1 = true;
    } else {
      guard4 = true;
    }
  } else {
    guard4 = true;
  }

  if (guard4) {
    if ((aaa_B.DataTypeConversion27[2] <= aaa_B.u_p) &&
        (aaa_B.DataTypeConversion27[4] > aaa_B.u_p)) {
      /* Transition: '<S27>:1462' */
      if (aaa_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1460' */
        aaa_DW.is_SXQxieya_o = aaa_IN_xieya7_2;

        /* Entry 'xieya7_2': '<S27>:1482' */
        aaa_B.bililiuliangfa18_1_b = 1.0;
        aaa_B.bililiuliangfa18_2_j = 0.0;
      } else if (aaa_B.DataTypeConversion12 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_p) &&
        (aaa_B.DataTypeConversion27[4] <= aaa_B.u_p)) {
      /* Transition: '<S27>:1466' */
      if (aaa_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1471' */
        aaa_DW.is_SXQxieya_o = aaa_IN_xieya7_3;

        /* Entry 'xieya7_3': '<S27>:1484' */
        aaa_B.bililiuliangfa18_1_b = 0.0;
        aaa_B.bililiuliangfa18_2_j = 1.0;
      } else if (aaa_B.DataTypeConversion12 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] <= aaa_B.u_p) &&
        (aaa_B.DataTypeConversion27[4] <= aaa_B.u_p)) {
      /* Transition: '<S27>:1467' */
      if (aaa_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1470' */
        aaa_DW.is_SXQxieya_o = aaa_IN_xieya8;
        aaa_DW.temporalCounter_i2 = 0U;

        /* Entry 'xieya8': '<S27>:1483' */
        aaa_B.bililiuliangfa18_1_b = 1.0;
        aaa_B.bililiuliangfa18_2_j = 1.0;
      } else {
        if (aaa_B.DataTypeConversion12 == 0.0) {
          /* Transition: '<S27>:1440' */
          guard1 = true;
        }
      }
    }
  }

  if (guard1) {
    /* Transition: '<S27>:1434' */
    aaa_DW.is_SXQxieya_o = aaa_IN_off1;

    /* Entry 'off1': '<S27>:1474' */
    aaa_B.diancifa11_1_l = 0.0;
    aaa_B.diancifa11_5_k = 0.0;
    aaa_B.bililiuliangfa18_1_b = 0.0;
    aaa_B.bililiuliangfa18_2_j = 0.0;
    aaa_B.bililiuliangfa18_3_l = 0.0;
    aaa_B.bililiuliangfa18_4_l = 0.0;
  }
}

/* Function for Chart: '<S25>/Chart' */
static void aaa_xieya7_2(void)
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
  if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_p) &&
      (aaa_B.DataTypeConversion27[4] > aaa_B.u_p)) {
    /* Transition: '<S27>:1463' */
    if (aaa_B.DataTypeConversion12 == 1.0) {
      /* Transition: '<S27>:1461' */
      aaa_DW.is_SXQxieya_o = aaa_IN_xieya7_1;

      /* Entry 'xieya7_1': '<S27>:1481' */
      aaa_B.bililiuliangfa18_1_b = 1.0;
      aaa_B.bililiuliangfa18_2_j = 1.0;
    } else if (aaa_B.DataTypeConversion12 == 0.0) {
      /* Transition: '<S27>:1439' */
      guard1 = true;
    } else {
      guard4 = true;
    }
  } else {
    guard4 = true;
  }

  if (guard4) {
    if ((aaa_B.DataTypeConversion27[2] <= aaa_B.u_p) &&
        (aaa_B.DataTypeConversion27[4] > aaa_B.u_p)) {
      /* Transition: '<S27>:1462' */
      if (aaa_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1460' */
        aaa_DW.is_SXQxieya_o = aaa_IN_xieya7_2;

        /* Entry 'xieya7_2': '<S27>:1482' */
        aaa_B.bililiuliangfa18_1_b = 1.0;
        aaa_B.bililiuliangfa18_2_j = 0.0;
      } else if (aaa_B.DataTypeConversion12 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_p) &&
        (aaa_B.DataTypeConversion27[4] <= aaa_B.u_p)) {
      /* Transition: '<S27>:1466' */
      if (aaa_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1471' */
        aaa_DW.is_SXQxieya_o = aaa_IN_xieya7_3;

        /* Entry 'xieya7_3': '<S27>:1484' */
        aaa_B.bililiuliangfa18_1_b = 0.0;
        aaa_B.bililiuliangfa18_2_j = 1.0;
      } else if (aaa_B.DataTypeConversion12 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] <= aaa_B.u_p) &&
        (aaa_B.DataTypeConversion27[4] <= aaa_B.u_p)) {
      /* Transition: '<S27>:1467' */
      if (aaa_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1470' */
        aaa_DW.is_SXQxieya_o = aaa_IN_xieya8;
        aaa_DW.temporalCounter_i2 = 0U;

        /* Entry 'xieya8': '<S27>:1483' */
        aaa_B.bililiuliangfa18_1_b = 1.0;
        aaa_B.bililiuliangfa18_2_j = 1.0;
      } else {
        if (aaa_B.DataTypeConversion12 == 0.0) {
          /* Transition: '<S27>:1440' */
          guard1 = true;
        }
      }
    }
  }

  if (guard1) {
    /* Transition: '<S27>:1434' */
    aaa_DW.is_SXQxieya_o = aaa_IN_off1;

    /* Entry 'off1': '<S27>:1474' */
    aaa_B.diancifa11_1_l = 0.0;
    aaa_B.diancifa11_5_k = 0.0;
    aaa_B.bililiuliangfa18_1_b = 0.0;
    aaa_B.bililiuliangfa18_2_j = 0.0;
    aaa_B.bililiuliangfa18_3_l = 0.0;
    aaa_B.bililiuliangfa18_4_l = 0.0;
  }
}

/* Function for Chart: '<S25>/Chart' */
static void aaa_xieya7_3(void)
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
  if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_p) &&
      (aaa_B.DataTypeConversion27[4] > aaa_B.u_p)) {
    /* Transition: '<S27>:1463' */
    if (aaa_B.DataTypeConversion12 == 1.0) {
      /* Transition: '<S27>:1461' */
      aaa_DW.is_SXQxieya_o = aaa_IN_xieya7_1;

      /* Entry 'xieya7_1': '<S27>:1481' */
      aaa_B.bililiuliangfa18_1_b = 1.0;
      aaa_B.bililiuliangfa18_2_j = 1.0;
    } else if (aaa_B.DataTypeConversion12 == 0.0) {
      /* Transition: '<S27>:1439' */
      guard1 = true;
    } else {
      guard4 = true;
    }
  } else {
    guard4 = true;
  }

  if (guard4) {
    if ((aaa_B.DataTypeConversion27[2] <= aaa_B.u_p) &&
        (aaa_B.DataTypeConversion27[4] > aaa_B.u_p)) {
      /* Transition: '<S27>:1462' */
      if (aaa_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1460' */
        aaa_DW.is_SXQxieya_o = aaa_IN_xieya7_2;

        /* Entry 'xieya7_2': '<S27>:1482' */
        aaa_B.bililiuliangfa18_1_b = 1.0;
        aaa_B.bililiuliangfa18_2_j = 0.0;
      } else if (aaa_B.DataTypeConversion12 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_p) &&
        (aaa_B.DataTypeConversion27[4] <= aaa_B.u_p)) {
      /* Transition: '<S27>:1466' */
      if (aaa_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1471' */
        aaa_DW.is_SXQxieya_o = aaa_IN_xieya7_3;

        /* Entry 'xieya7_3': '<S27>:1484' */
        aaa_B.bililiuliangfa18_1_b = 0.0;
        aaa_B.bililiuliangfa18_2_j = 1.0;
      } else if (aaa_B.DataTypeConversion12 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] <= aaa_B.u_p) &&
        (aaa_B.DataTypeConversion27[4] <= aaa_B.u_p)) {
      /* Transition: '<S27>:1467' */
      if (aaa_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1470' */
        aaa_DW.is_SXQxieya_o = aaa_IN_xieya8;
        aaa_DW.temporalCounter_i2 = 0U;

        /* Entry 'xieya8': '<S27>:1483' */
        aaa_B.bililiuliangfa18_1_b = 1.0;
        aaa_B.bililiuliangfa18_2_j = 1.0;
      } else {
        if (aaa_B.DataTypeConversion12 == 0.0) {
          /* Transition: '<S27>:1440' */
          guard1 = true;
        }
      }
    }
  }

  if (guard1) {
    /* Transition: '<S27>:1434' */
    aaa_DW.is_SXQxieya_o = aaa_IN_off1;

    /* Entry 'off1': '<S27>:1474' */
    aaa_B.diancifa11_1_l = 0.0;
    aaa_B.diancifa11_5_k = 0.0;
    aaa_B.bililiuliangfa18_1_b = 0.0;
    aaa_B.bililiuliangfa18_2_j = 0.0;
    aaa_B.bililiuliangfa18_3_l = 0.0;
    aaa_B.bililiuliangfa18_4_l = 0.0;
  }
}

/* Function for Chart: '<S25>/Chart' */
static void aaa_SXQxieya(void)
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
  switch (aaa_DW.is_SXQxieya_o) {
   case aaa_IN_off1:
    /* During 'off1': '<S27>:1474' */
    if (aaa_B.DataTypeConversion12 == 1.0) {
      /* Transition: '<S27>:1443' */
      aaa_DW.is_SXQxieya_o = aaa_IN_on1_ah;
      aaa_DW.temporalCounter_i2 = 0U;

      /* Entry 'on1': '<S27>:1475' */
      aaa_B.diancifa11_5_k = 1.0;
    }
    break;

   case aaa_IN_off2_o:
    /* During 'off2': '<S27>:1485' */
    break;

   case aaa_IN_on1_ah:
    /* During 'on1': '<S27>:1475' */
    if (aaa_DW.temporalCounter_i2 >= 500) {
      /* Transition: '<S27>:1444' */
      aaa_DW.is_SXQxieya_o = aaa_IN_xieya1;

      /* Entry 'xieya1': '<S27>:1476' */
      aaa_B.bililiuliangfa18_1_b = 1.0;
      aaa_B.bililiuliangfa18_2_j = 1.0;
      aaa_B.p0_2 = aaa_B.u_l;
    }
    break;

   case aaa_IN_xieya1:
    /* During 'xieya1': '<S27>:1476' */
    /* Transition: '<S27>:1445' */
    if ((aaa_B.DataTypeConversion27[2] > aaa_B.p0_2) &&
        (aaa_B.DataTypeConversion27[4] > aaa_B.p0_2)) {
      /* Transition: '<S27>:1449' */
      if (aaa_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1447' */
        aaa_DW.is_SXQxieya_o = aaa_IN_xieya1_1;

        /* Entry 'xieya1_1': '<S27>:1477' */
        aaa_B.bililiuliangfa18_1_b = 1.0;
        aaa_B.bililiuliangfa18_2_j = 1.0;
      } else if (aaa_B.DataTypeConversion12 == 0.0) {
        /* Transition: '<S27>:1437' */
        guard2 = true;
      } else {
        guard17 = true;
      }
    } else {
      guard17 = true;
    }
    break;

   case aaa_IN_xieya1_1:
    /* During 'xieya1_1': '<S27>:1477' */
    /* Transition: '<S27>:1451' */
    if ((aaa_B.DataTypeConversion27[2] > aaa_B.p0_2) &&
        (aaa_B.DataTypeConversion27[4] > aaa_B.p0_2)) {
      /* Transition: '<S27>:1449' */
      if (aaa_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1447' */
        aaa_DW.is_SXQxieya_o = aaa_IN_xieya1_1;

        /* Entry 'xieya1_1': '<S27>:1477' */
        aaa_B.bililiuliangfa18_1_b = 1.0;
        aaa_B.bililiuliangfa18_2_j = 1.0;
      } else if (aaa_B.DataTypeConversion12 == 0.0) {
        /* Transition: '<S27>:1437' */
        guard3 = true;
      } else {
        guard18 = true;
      }
    } else {
      guard18 = true;
    }
    break;

   case aaa_IN_xieya1_2:
    /* During 'xieya1_2': '<S27>:1478' */
    /* Transition: '<S27>:1450' */
    if ((aaa_B.DataTypeConversion27[2] > aaa_B.p0_2) &&
        (aaa_B.DataTypeConversion27[4] > aaa_B.p0_2)) {
      /* Transition: '<S27>:1449' */
      if (aaa_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1447' */
        aaa_DW.is_SXQxieya_o = aaa_IN_xieya1_1;

        /* Entry 'xieya1_1': '<S27>:1477' */
        aaa_B.bililiuliangfa18_1_b = 1.0;
        aaa_B.bililiuliangfa18_2_j = 1.0;
      } else if (aaa_B.DataTypeConversion12 == 0.0) {
        /* Transition: '<S27>:1437' */
        guard4 = true;
      } else {
        guard19 = true;
      }
    } else {
      guard19 = true;
    }
    break;

   case aaa_IN_xieya1_3:
    /* During 'xieya1_3': '<S27>:1480' */
    /* Transition: '<S27>:1452' */
    if ((aaa_B.DataTypeConversion27[2] > aaa_B.p0_2) &&
        (aaa_B.DataTypeConversion27[4] > aaa_B.p0_2)) {
      /* Transition: '<S27>:1449' */
      if (aaa_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1447' */
        aaa_DW.is_SXQxieya_o = aaa_IN_xieya1_1;

        /* Entry 'xieya1_1': '<S27>:1477' */
        aaa_B.bililiuliangfa18_1_b = 1.0;
        aaa_B.bililiuliangfa18_2_j = 1.0;
      } else if (aaa_B.DataTypeConversion12 == 0.0) {
        /* Transition: '<S27>:1437' */
        guard5 = true;
      } else {
        guard20 = true;
      }
    } else {
      guard20 = true;
    }
    break;

   case aaa_IN_xieya2:
    aaa_xieya2();
    break;

   case aaa_IN_xieya7_1:
    aaa_xieya7_1();
    break;

   case aaa_IN_xieya7_2:
    aaa_xieya7_2();
    break;

   case aaa_IN_xieya7_3:
    aaa_xieya7_3();
    break;

   default:
    /* During 'xieya8': '<S27>:1483' */
    if (aaa_DW.temporalCounter_i2 >= 1000) {
      /* Transition: '<S27>:1472' */
      if ((aaa_B.DataTypeConversion27[2] <= aaa_B.u_p) &&
          (aaa_B.DataTypeConversion27[4] <= aaa_B.u_p)) {
        /* Transition: '<S27>:1473' */
        aaa_DW.is_SXQxieya_o = aaa_IN_off2_o;

        /* Entry 'off2': '<S27>:1485' */
        aaa_B.diancifa11_5_k = 0.0;
        aaa_B.bililiuliangfa18_1_b = 0.0;
        aaa_B.bililiuliangfa18_2_j = 0.0;
        aaa_B.SXQxieyawancheng_g = 1.0;
      } else {
        if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_p) ||
            (aaa_B.DataTypeConversion27[4] > aaa_B.u_p)) {
          /* Transition: '<S27>:1469' */
          if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_p) &&
              (aaa_B.DataTypeConversion27[4] > aaa_B.u_p)) {
            /* Transition: '<S27>:1463' */
            if (aaa_B.DataTypeConversion12 == 1.0) {
              /* Transition: '<S27>:1461' */
              aaa_DW.is_SXQxieya_o = aaa_IN_xieya7_1;

              /* Entry 'xieya7_1': '<S27>:1481' */
              aaa_B.bililiuliangfa18_1_b = 1.0;
              aaa_B.bililiuliangfa18_2_j = 1.0;
            } else if (aaa_B.DataTypeConversion12 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] <= aaa_B.p0_2) &&
        (aaa_B.DataTypeConversion27[4] > aaa_B.p0_2)) {
      /* Transition: '<S27>:1446' */
      if (aaa_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1448' */
        aaa_DW.is_SXQxieya_o = aaa_IN_xieya1_2;

        /* Entry 'xieya1_2': '<S27>:1478' */
        aaa_B.bililiuliangfa18_1_b = 1.0;
        aaa_B.bililiuliangfa18_2_j = 0.0;
      } else if (aaa_B.DataTypeConversion12 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] <= aaa_B.p0_2) &&
        (aaa_B.DataTypeConversion27[4] > aaa_B.p0_2)) {
      /* Transition: '<S27>:1446' */
      if (aaa_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1448' */
        aaa_DW.is_SXQxieya_o = aaa_IN_xieya1_2;

        /* Entry 'xieya1_2': '<S27>:1478' */
        aaa_B.bililiuliangfa18_1_b = 1.0;
        aaa_B.bililiuliangfa18_2_j = 0.0;
      } else if (aaa_B.DataTypeConversion12 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] <= aaa_B.p0_2) &&
        (aaa_B.DataTypeConversion27[4] > aaa_B.p0_2)) {
      /* Transition: '<S27>:1446' */
      if (aaa_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1448' */
        aaa_DW.is_SXQxieya_o = aaa_IN_xieya1_2;

        /* Entry 'xieya1_2': '<S27>:1478' */
        aaa_B.bililiuliangfa18_1_b = 1.0;
        aaa_B.bililiuliangfa18_2_j = 0.0;
      } else if (aaa_B.DataTypeConversion12 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] <= aaa_B.p0_2) &&
        (aaa_B.DataTypeConversion27[4] > aaa_B.p0_2)) {
      /* Transition: '<S27>:1446' */
      if (aaa_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1448' */
        aaa_DW.is_SXQxieya_o = aaa_IN_xieya1_2;

        /* Entry 'xieya1_2': '<S27>:1478' */
        aaa_B.bililiuliangfa18_1_b = 1.0;
        aaa_B.bililiuliangfa18_2_j = 0.0;
      } else if (aaa_B.DataTypeConversion12 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] <= aaa_B.u_p) &&
        (aaa_B.DataTypeConversion27[4] > aaa_B.u_p)) {
      /* Transition: '<S27>:1462' */
      if (aaa_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1460' */
        aaa_DW.is_SXQxieya_o = aaa_IN_xieya7_2;

        /* Entry 'xieya7_2': '<S27>:1482' */
        aaa_B.bililiuliangfa18_1_b = 1.0;
        aaa_B.bililiuliangfa18_2_j = 0.0;
      } else if (aaa_B.DataTypeConversion12 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] > aaa_B.p0_2) &&
        (aaa_B.DataTypeConversion27[4] <= aaa_B.p0_2)) {
      /* Transition: '<S27>:1454' */
      if (aaa_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1457' */
        aaa_DW.is_SXQxieya_o = aaa_IN_xieya1_3;

        /* Entry 'xieya1_3': '<S27>:1480' */
        aaa_B.bililiuliangfa18_1_b = 0.0;
        aaa_B.bililiuliangfa18_2_j = 1.0;
      } else if (aaa_B.DataTypeConversion12 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] > aaa_B.p0_2) &&
        (aaa_B.DataTypeConversion27[4] <= aaa_B.p0_2)) {
      /* Transition: '<S27>:1454' */
      if (aaa_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1457' */
        aaa_DW.is_SXQxieya_o = aaa_IN_xieya1_3;

        /* Entry 'xieya1_3': '<S27>:1480' */
        aaa_B.bililiuliangfa18_1_b = 0.0;
        aaa_B.bililiuliangfa18_2_j = 1.0;
      } else if (aaa_B.DataTypeConversion12 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] > aaa_B.p0_2) &&
        (aaa_B.DataTypeConversion27[4] <= aaa_B.p0_2)) {
      /* Transition: '<S27>:1454' */
      if (aaa_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1457' */
        aaa_DW.is_SXQxieya_o = aaa_IN_xieya1_3;

        /* Entry 'xieya1_3': '<S27>:1480' */
        aaa_B.bililiuliangfa18_1_b = 0.0;
        aaa_B.bililiuliangfa18_2_j = 1.0;
      } else if (aaa_B.DataTypeConversion12 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] > aaa_B.p0_2) &&
        (aaa_B.DataTypeConversion27[4] <= aaa_B.p0_2)) {
      /* Transition: '<S27>:1454' */
      if (aaa_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1457' */
        aaa_DW.is_SXQxieya_o = aaa_IN_xieya1_3;

        /* Entry 'xieya1_3': '<S27>:1480' */
        aaa_B.bililiuliangfa18_1_b = 0.0;
        aaa_B.bililiuliangfa18_2_j = 1.0;
      } else if (aaa_B.DataTypeConversion12 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_p) &&
        (aaa_B.DataTypeConversion27[4] <= aaa_B.u_p)) {
      /* Transition: '<S27>:1466' */
      if (aaa_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1471' */
        aaa_DW.is_SXQxieya_o = aaa_IN_xieya7_3;

        /* Entry 'xieya7_3': '<S27>:1484' */
        aaa_B.bililiuliangfa18_1_b = 0.0;
        aaa_B.bililiuliangfa18_2_j = 1.0;
      } else if (aaa_B.DataTypeConversion12 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] <= aaa_B.p0_2) &&
        (aaa_B.DataTypeConversion27[4] <= aaa_B.p0_2)) {
      /* Transition: '<S27>:1453' */
      if (aaa_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1456' */
        aaa_DW.is_SXQxieya_o = aaa_IN_xieya2;

        /* Entry 'xieya2': '<S27>:1479' */
        aaa_B.bililiuliangfa18_1_b = 1.0;
        aaa_B.bililiuliangfa18_2_j = 1.0;
        aaa_B.p0_2 -= 0.03;
      } else {
        if (aaa_B.DataTypeConversion12 == 0.0) {
          /* Transition: '<S27>:1438' */
          guard5 = true;
        }
      }
    }
  }

  if (guard9) {
    if ((aaa_B.DataTypeConversion27[2] <= aaa_B.p0_2) &&
        (aaa_B.DataTypeConversion27[4] <= aaa_B.p0_2)) {
      /* Transition: '<S27>:1453' */
      if (aaa_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1456' */
        aaa_DW.is_SXQxieya_o = aaa_IN_xieya2;

        /* Entry 'xieya2': '<S27>:1479' */
        aaa_B.bililiuliangfa18_1_b = 1.0;
        aaa_B.bililiuliangfa18_2_j = 1.0;
        aaa_B.p0_2 -= 0.03;
      } else {
        if (aaa_B.DataTypeConversion12 == 0.0) {
          /* Transition: '<S27>:1438' */
          guard4 = true;
        }
      }
    }
  }

  if (guard8) {
    if ((aaa_B.DataTypeConversion27[2] <= aaa_B.p0_2) &&
        (aaa_B.DataTypeConversion27[4] <= aaa_B.p0_2)) {
      /* Transition: '<S27>:1453' */
      if (aaa_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1456' */
        aaa_DW.is_SXQxieya_o = aaa_IN_xieya2;

        /* Entry 'xieya2': '<S27>:1479' */
        aaa_B.bililiuliangfa18_1_b = 1.0;
        aaa_B.bililiuliangfa18_2_j = 1.0;
        aaa_B.p0_2 -= 0.03;
      } else {
        if (aaa_B.DataTypeConversion12 == 0.0) {
          /* Transition: '<S27>:1438' */
          guard3 = true;
        }
      }
    }
  }

  if (guard7) {
    if ((aaa_B.DataTypeConversion27[2] <= aaa_B.p0_2) &&
        (aaa_B.DataTypeConversion27[4] <= aaa_B.p0_2)) {
      /* Transition: '<S27>:1453' */
      if (aaa_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1456' */
        aaa_DW.is_SXQxieya_o = aaa_IN_xieya2;

        /* Entry 'xieya2': '<S27>:1479' */
        aaa_B.bililiuliangfa18_1_b = 1.0;
        aaa_B.bililiuliangfa18_2_j = 1.0;
        aaa_B.p0_2 -= 0.03;
      } else {
        if (aaa_B.DataTypeConversion12 == 0.0) {
          /* Transition: '<S27>:1438' */
          guard2 = true;
        }
      }
    }
  }

  if (guard6) {
    if ((aaa_B.DataTypeConversion27[2] <= aaa_B.u_p) &&
        (aaa_B.DataTypeConversion27[4] <= aaa_B.u_p)) {
      /* Transition: '<S27>:1467' */
      if (aaa_B.DataTypeConversion12 == 1.0) {
        /* Transition: '<S27>:1470' */
        aaa_DW.is_SXQxieya_o = aaa_IN_xieya8;
        aaa_DW.temporalCounter_i2 = 0U;

        /* Entry 'xieya8': '<S27>:1483' */
        aaa_B.bililiuliangfa18_1_b = 1.0;
        aaa_B.bililiuliangfa18_2_j = 1.0;
      } else {
        if (aaa_B.DataTypeConversion12 == 0.0) {
          /* Transition: '<S27>:1440' */
          guard1 = true;
        }
      }
    }
  }

  if (guard5) {
    /* Transition: '<S27>:1433' */
    aaa_DW.is_SXQxieya_o = aaa_IN_off1;

    /* Entry 'off1': '<S27>:1474' */
    aaa_B.diancifa11_1_l = 0.0;
    aaa_B.diancifa11_5_k = 0.0;
    aaa_B.bililiuliangfa18_1_b = 0.0;
    aaa_B.bililiuliangfa18_2_j = 0.0;
    aaa_B.bililiuliangfa18_3_l = 0.0;
    aaa_B.bililiuliangfa18_4_l = 0.0;
  }

  if (guard4) {
    /* Transition: '<S27>:1433' */
    aaa_DW.is_SXQxieya_o = aaa_IN_off1;

    /* Entry 'off1': '<S27>:1474' */
    aaa_B.diancifa11_1_l = 0.0;
    aaa_B.diancifa11_5_k = 0.0;
    aaa_B.bililiuliangfa18_1_b = 0.0;
    aaa_B.bililiuliangfa18_2_j = 0.0;
    aaa_B.bililiuliangfa18_3_l = 0.0;
    aaa_B.bililiuliangfa18_4_l = 0.0;
  }

  if (guard3) {
    /* Transition: '<S27>:1433' */
    aaa_DW.is_SXQxieya_o = aaa_IN_off1;

    /* Entry 'off1': '<S27>:1474' */
    aaa_B.diancifa11_1_l = 0.0;
    aaa_B.diancifa11_5_k = 0.0;
    aaa_B.bililiuliangfa18_1_b = 0.0;
    aaa_B.bililiuliangfa18_2_j = 0.0;
    aaa_B.bililiuliangfa18_3_l = 0.0;
    aaa_B.bililiuliangfa18_4_l = 0.0;
  }

  if (guard2) {
    /* Transition: '<S27>:1433' */
    aaa_DW.is_SXQxieya_o = aaa_IN_off1;

    /* Entry 'off1': '<S27>:1474' */
    aaa_B.diancifa11_1_l = 0.0;
    aaa_B.diancifa11_5_k = 0.0;
    aaa_B.bililiuliangfa18_1_b = 0.0;
    aaa_B.bililiuliangfa18_2_j = 0.0;
    aaa_B.bililiuliangfa18_3_l = 0.0;
    aaa_B.bililiuliangfa18_4_l = 0.0;
  }

  if (guard1) {
    /* Transition: '<S27>:1434' */
    aaa_DW.is_SXQxieya_o = aaa_IN_off1;

    /* Entry 'off1': '<S27>:1474' */
    aaa_B.diancifa11_1_l = 0.0;
    aaa_B.diancifa11_5_k = 0.0;
    aaa_B.bililiuliangfa18_1_b = 0.0;
    aaa_B.bililiuliangfa18_2_j = 0.0;
    aaa_B.bililiuliangfa18_3_l = 0.0;
    aaa_B.bililiuliangfa18_4_l = 0.0;
  }
}

/* Function for Chart: '<S25>/Chart' */
static void aaa_jiaya1_1(void)
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
  if ((aaa_B.DataTypeConversion27[2] < aaa_B.p0_1) &&
      (aaa_B.DataTypeConversion27[4] < aaa_B.p0_1)) {
    /* Transition: '<S27>:1522' */
    if (aaa_B.DataTypeConversion11 == 1.0) {
      /* Transition: '<S27>:1512' */
      aaa_DW.is_SXQjunya_c = aaa_IN_jiaya1_1;

      /* Entry 'jiaya1_1': '<S27>:1570' */
      aaa_B.bililiuliangfa18_3_l = 1.0;
      aaa_B.bililiuliangfa18_4_l = 1.0;
    } else if (aaa_B.DataTypeConversion11 == 0.0) {
      /* Transition: '<S27>:1523' */
      guard1 = true;
    } else {
      guard4 = true;
    }
  } else {
    guard4 = true;
  }

  if (guard4) {
    if ((aaa_B.DataTypeConversion27[2] >= aaa_B.p0_1) &&
        (aaa_B.DataTypeConversion27[4] < aaa_B.p0_1)) {
      /* Transition: '<S27>:1536' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1540' */
        aaa_DW.is_SXQjunya_c = aaa_IN_jiaya1_2;

        /* Entry 'jiaya1_2': '<S27>:1578' */
        aaa_B.bililiuliangfa18_3_l = 1.0;
        aaa_B.bililiuliangfa18_4_l = 0.0;
      } else if (aaa_B.DataTypeConversion11 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] < aaa_B.p0_1) &&
        (aaa_B.DataTypeConversion27[4] >= aaa_B.p0_1)) {
      /* Transition: '<S27>:1530' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1542' */
        aaa_DW.is_SXQjunya_c = aaa_IN_jiaya1_3;

        /* Entry 'jiaya1_3': '<S27>:1579' */
        aaa_B.bililiuliangfa18_3_l = 0.0;
        aaa_B.bililiuliangfa18_4_l = 1.0;
      } else if (aaa_B.DataTypeConversion11 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] >= aaa_B.p0_1) &&
        (aaa_B.DataTypeConversion27[4] >= aaa_B.p0_1)) {
      /* Transition: '<S27>:1518' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1509' */
        aaa_DW.is_SXQjunya_c = aaa_IN_jiaya2;
        aaa_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiaya2': '<S27>:1573' */
        aaa_B.bililiuliangfa18_3_l = 1.0;
        aaa_B.bililiuliangfa18_4_l = 1.0;
        aaa_B.p0_1 += 0.03;
      } else {
        if (aaa_B.DataTypeConversion11 == 0.0) {
          /* Transition: '<S27>:1519' */
          guard1 = true;
        }
      }
    }
  }

  if (guard1) {
    /* Transition: '<S27>:1544' */
    aaa_DW.is_SXQjunya_c = aaa_IN_off1_b;

    /* Entry 'off1': '<S27>:1574' */
    aaa_B.diancifa11_1_l = 0.0;
    aaa_B.diancifa11_5_k = 0.0;
    aaa_B.diancifa20_l = 0.0;
    aaa_B.bililiuliangfa18_1_b = 0.0;
    aaa_B.bililiuliangfa18_2_j = 0.0;
    aaa_B.bililiuliangfa18_3_l = 0.0;
    aaa_B.bililiuliangfa18_4_l = 0.0;
  }
}

/* Function for Chart: '<S25>/Chart' */
static void aaa_jiaya1_2(void)
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
  if ((aaa_B.DataTypeConversion27[2] < aaa_B.p0_1) &&
      (aaa_B.DataTypeConversion27[4] < aaa_B.p0_1)) {
    /* Transition: '<S27>:1522' */
    if (aaa_B.DataTypeConversion11 == 1.0) {
      /* Transition: '<S27>:1512' */
      aaa_DW.is_SXQjunya_c = aaa_IN_jiaya1_1;

      /* Entry 'jiaya1_1': '<S27>:1570' */
      aaa_B.bililiuliangfa18_3_l = 1.0;
      aaa_B.bililiuliangfa18_4_l = 1.0;
    } else if (aaa_B.DataTypeConversion11 == 0.0) {
      /* Transition: '<S27>:1523' */
      guard1 = true;
    } else {
      guard4 = true;
    }
  } else {
    guard4 = true;
  }

  if (guard4) {
    if ((aaa_B.DataTypeConversion27[2] >= aaa_B.p0_1) &&
        (aaa_B.DataTypeConversion27[4] < aaa_B.p0_1)) {
      /* Transition: '<S27>:1536' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1540' */
        aaa_DW.is_SXQjunya_c = aaa_IN_jiaya1_2;

        /* Entry 'jiaya1_2': '<S27>:1578' */
        aaa_B.bililiuliangfa18_3_l = 1.0;
        aaa_B.bililiuliangfa18_4_l = 0.0;
      } else if (aaa_B.DataTypeConversion11 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] < aaa_B.p0_1) &&
        (aaa_B.DataTypeConversion27[4] >= aaa_B.p0_1)) {
      /* Transition: '<S27>:1530' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1542' */
        aaa_DW.is_SXQjunya_c = aaa_IN_jiaya1_3;

        /* Entry 'jiaya1_3': '<S27>:1579' */
        aaa_B.bililiuliangfa18_3_l = 0.0;
        aaa_B.bililiuliangfa18_4_l = 1.0;
      } else if (aaa_B.DataTypeConversion11 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] >= aaa_B.p0_1) &&
        (aaa_B.DataTypeConversion27[4] >= aaa_B.p0_1)) {
      /* Transition: '<S27>:1518' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1509' */
        aaa_DW.is_SXQjunya_c = aaa_IN_jiaya2;
        aaa_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiaya2': '<S27>:1573' */
        aaa_B.bililiuliangfa18_3_l = 1.0;
        aaa_B.bililiuliangfa18_4_l = 1.0;
        aaa_B.p0_1 += 0.03;
      } else {
        if (aaa_B.DataTypeConversion11 == 0.0) {
          /* Transition: '<S27>:1519' */
          guard1 = true;
        }
      }
    }
  }

  if (guard1) {
    /* Transition: '<S27>:1544' */
    aaa_DW.is_SXQjunya_c = aaa_IN_off1_b;

    /* Entry 'off1': '<S27>:1574' */
    aaa_B.diancifa11_1_l = 0.0;
    aaa_B.diancifa11_5_k = 0.0;
    aaa_B.diancifa20_l = 0.0;
    aaa_B.bililiuliangfa18_1_b = 0.0;
    aaa_B.bililiuliangfa18_2_j = 0.0;
    aaa_B.bililiuliangfa18_3_l = 0.0;
    aaa_B.bililiuliangfa18_4_l = 0.0;
  }
}

/* Function for Chart: '<S25>/Chart' */
static void aaa_jiaya1_3(void)
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
  if ((aaa_B.DataTypeConversion27[2] < aaa_B.p0_1) &&
      (aaa_B.DataTypeConversion27[4] < aaa_B.p0_1)) {
    /* Transition: '<S27>:1522' */
    if (aaa_B.DataTypeConversion11 == 1.0) {
      /* Transition: '<S27>:1512' */
      aaa_DW.is_SXQjunya_c = aaa_IN_jiaya1_1;

      /* Entry 'jiaya1_1': '<S27>:1570' */
      aaa_B.bililiuliangfa18_3_l = 1.0;
      aaa_B.bililiuliangfa18_4_l = 1.0;
    } else if (aaa_B.DataTypeConversion11 == 0.0) {
      /* Transition: '<S27>:1523' */
      guard1 = true;
    } else {
      guard4 = true;
    }
  } else {
    guard4 = true;
  }

  if (guard4) {
    if ((aaa_B.DataTypeConversion27[2] >= aaa_B.p0_1) &&
        (aaa_B.DataTypeConversion27[4] < aaa_B.p0_1)) {
      /* Transition: '<S27>:1536' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1540' */
        aaa_DW.is_SXQjunya_c = aaa_IN_jiaya1_2;

        /* Entry 'jiaya1_2': '<S27>:1578' */
        aaa_B.bililiuliangfa18_3_l = 1.0;
        aaa_B.bililiuliangfa18_4_l = 0.0;
      } else if (aaa_B.DataTypeConversion11 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] < aaa_B.p0_1) &&
        (aaa_B.DataTypeConversion27[4] >= aaa_B.p0_1)) {
      /* Transition: '<S27>:1530' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1542' */
        aaa_DW.is_SXQjunya_c = aaa_IN_jiaya1_3;

        /* Entry 'jiaya1_3': '<S27>:1579' */
        aaa_B.bililiuliangfa18_3_l = 0.0;
        aaa_B.bililiuliangfa18_4_l = 1.0;
      } else if (aaa_B.DataTypeConversion11 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] >= aaa_B.p0_1) &&
        (aaa_B.DataTypeConversion27[4] >= aaa_B.p0_1)) {
      /* Transition: '<S27>:1518' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1509' */
        aaa_DW.is_SXQjunya_c = aaa_IN_jiaya2;
        aaa_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiaya2': '<S27>:1573' */
        aaa_B.bililiuliangfa18_3_l = 1.0;
        aaa_B.bililiuliangfa18_4_l = 1.0;
        aaa_B.p0_1 += 0.03;
      } else {
        if (aaa_B.DataTypeConversion11 == 0.0) {
          /* Transition: '<S27>:1519' */
          guard1 = true;
        }
      }
    }
  }

  if (guard1) {
    /* Transition: '<S27>:1544' */
    aaa_DW.is_SXQjunya_c = aaa_IN_off1_b;

    /* Entry 'off1': '<S27>:1574' */
    aaa_B.diancifa11_1_l = 0.0;
    aaa_B.diancifa11_5_k = 0.0;
    aaa_B.diancifa20_l = 0.0;
    aaa_B.bililiuliangfa18_1_b = 0.0;
    aaa_B.bililiuliangfa18_2_j = 0.0;
    aaa_B.bililiuliangfa18_3_l = 0.0;
    aaa_B.bililiuliangfa18_4_l = 0.0;
  }
}

/* Function for Chart: '<S25>/Chart' */
static void aaa_jiaya2(void)
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
  if (aaa_B.p0_1 >= aaa_B.u_l) {
    /* Transition: '<S27>:1529' */
    if ((aaa_B.DataTypeConversion27[2] < aaa_B.u_l) &&
        (aaa_B.DataTypeConversion27[4] < aaa_B.u_l)) {
      /* Transition: '<S27>:1516' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1510' */
        aaa_DW.is_SXQjunya_c = aaa_IN_jiaya7_1;
        aaa_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiaya7_1': '<S27>:1571' */
        aaa_B.bililiuliangfa18_3_l = 1.0;
        aaa_B.bililiuliangfa18_4_l = 1.0;
      } else if (aaa_B.DataTypeConversion11 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] >= aaa_B.u_l) &&
        (aaa_B.DataTypeConversion27[4] < aaa_B.u_l)) {
      /* Transition: '<S27>:1524' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1526' */
        aaa_DW.is_SXQjunya_c = aaa_IN_jiaya7_2;
        aaa_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiaya7_2': '<S27>:1577' */
        aaa_B.bililiuliangfa18_3_l = 1.0;
        aaa_B.bililiuliangfa18_4_l = 0.0;
      } else if (aaa_B.DataTypeConversion11 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] < aaa_B.u_l) &&
        (aaa_B.DataTypeConversion27[4] >= aaa_B.u_l)) {
      /* Transition: '<S27>:1521' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1514' */
        aaa_DW.is_SXQjunya_c = aaa_IN_jiaya7_3;
        aaa_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiaya7_3': '<S27>:1572' */
        aaa_B.bililiuliangfa18_3_l = 0.0;
        aaa_B.bililiuliangfa18_4_l = 1.0;
      } else if (aaa_B.DataTypeConversion11 == 0.0) {
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
    if ((aaa_DW.temporalCounter_i5 >= 250) && ((aaa_B.DataTypeConversion27[2] >=
          aaa_B.u_l) && (aaa_B.DataTypeConversion27[4] >= aaa_B.u_l))) {
      /* Transition: '<S27>:1539' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1546' */
        aaa_DW.is_SXQjunya_c = aaa_IN_off4_gz;
        aaa_DW.temporalCounter_i5 = 0U;

        /* Entry 'off4': '<S27>:1580' */
        aaa_B.bililiuliangfa18_3_l = 0.0;
        aaa_B.bililiuliangfa18_4_l = 0.0;
      } else if (aaa_B.DataTypeConversion11 == 0.0) {
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
    if (aaa_B.p0_1 < aaa_B.u_l) {
      /* Transition: '<S27>:1528' */
      if ((aaa_B.DataTypeConversion27[2] < aaa_B.p0_1) &&
          (aaa_B.DataTypeConversion27[4] < aaa_B.p0_1)) {
        /* Transition: '<S27>:1522' */
        if (aaa_B.DataTypeConversion11 == 1.0) {
          /* Transition: '<S27>:1512' */
          aaa_DW.is_SXQjunya_c = aaa_IN_jiaya1_1;

          /* Entry 'jiaya1_1': '<S27>:1570' */
          aaa_B.bililiuliangfa18_3_l = 1.0;
          aaa_B.bililiuliangfa18_4_l = 1.0;
        } else if (aaa_B.DataTypeConversion11 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] >= aaa_B.p0_1) &&
        (aaa_B.DataTypeConversion27[4] < aaa_B.p0_1)) {
      /* Transition: '<S27>:1536' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1540' */
        aaa_DW.is_SXQjunya_c = aaa_IN_jiaya1_2;

        /* Entry 'jiaya1_2': '<S27>:1578' */
        aaa_B.bililiuliangfa18_3_l = 1.0;
        aaa_B.bililiuliangfa18_4_l = 0.0;
      } else if (aaa_B.DataTypeConversion11 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] < aaa_B.p0_1) &&
        (aaa_B.DataTypeConversion27[4] >= aaa_B.p0_1)) {
      /* Transition: '<S27>:1530' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1542' */
        aaa_DW.is_SXQjunya_c = aaa_IN_jiaya1_3;

        /* Entry 'jiaya1_3': '<S27>:1579' */
        aaa_B.bililiuliangfa18_3_l = 0.0;
        aaa_B.bililiuliangfa18_4_l = 1.0;
      } else if (aaa_B.DataTypeConversion11 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] >= aaa_B.p0_1) &&
        (aaa_B.DataTypeConversion27[4] >= aaa_B.p0_1)) {
      /* Transition: '<S27>:1518' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1509' */
        aaa_DW.is_SXQjunya_c = aaa_IN_jiaya2;
        aaa_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiaya2': '<S27>:1573' */
        aaa_B.bililiuliangfa18_3_l = 1.0;
        aaa_B.bililiuliangfa18_4_l = 1.0;
        aaa_B.p0_1 += 0.03;
      } else {
        if (aaa_B.DataTypeConversion11 == 0.0) {
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
    /* Transition: '<S27>:1544' */
    aaa_DW.is_SXQjunya_c = aaa_IN_off1_b;

    /* Entry 'off1': '<S27>:1574' */
    aaa_B.diancifa11_1_l = 0.0;
    aaa_B.diancifa11_5_k = 0.0;
    aaa_B.diancifa20_l = 0.0;
    aaa_B.bililiuliangfa18_1_b = 0.0;
    aaa_B.bililiuliangfa18_2_j = 0.0;
    aaa_B.bililiuliangfa18_3_l = 0.0;
    aaa_B.bililiuliangfa18_4_l = 0.0;
  }
}

/* Function for Chart: '<S25>/Chart' */
static void aaa_jiaya7_1(void)
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
  if ((aaa_B.DataTypeConversion27[2] < aaa_B.u_l) &&
      (aaa_B.DataTypeConversion27[4] < aaa_B.u_l)) {
    /* Transition: '<S27>:1516' */
    if (aaa_B.DataTypeConversion11 == 1.0) {
      /* Transition: '<S27>:1510' */
      aaa_DW.is_SXQjunya_c = aaa_IN_jiaya7_1;
      aaa_DW.temporalCounter_i5 = 0U;

      /* Entry 'jiaya7_1': '<S27>:1571' */
      aaa_B.bililiuliangfa18_3_l = 1.0;
      aaa_B.bililiuliangfa18_4_l = 1.0;
    } else if (aaa_B.DataTypeConversion11 == 0.0) {
      /* Transition: '<S27>:1515' */
      guard1 = true;
    } else {
      guard4 = true;
    }
  } else {
    guard4 = true;
  }

  if (guard4) {
    if ((aaa_B.DataTypeConversion27[2] >= aaa_B.u_l) &&
        (aaa_B.DataTypeConversion27[4] < aaa_B.u_l)) {
      /* Transition: '<S27>:1524' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1526' */
        aaa_DW.is_SXQjunya_c = aaa_IN_jiaya7_2;
        aaa_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiaya7_2': '<S27>:1577' */
        aaa_B.bililiuliangfa18_3_l = 1.0;
        aaa_B.bililiuliangfa18_4_l = 0.0;
      } else if (aaa_B.DataTypeConversion11 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] < aaa_B.u_l) &&
        (aaa_B.DataTypeConversion27[4] >= aaa_B.u_l)) {
      /* Transition: '<S27>:1521' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1514' */
        aaa_DW.is_SXQjunya_c = aaa_IN_jiaya7_3;
        aaa_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiaya7_3': '<S27>:1572' */
        aaa_B.bililiuliangfa18_3_l = 0.0;
        aaa_B.bililiuliangfa18_4_l = 1.0;
      } else if (aaa_B.DataTypeConversion11 == 0.0) {
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
    if ((aaa_DW.temporalCounter_i5 >= 250) && ((aaa_B.DataTypeConversion27[2] >=
          aaa_B.u_l) && (aaa_B.DataTypeConversion27[4] >= aaa_B.u_l))) {
      /* Transition: '<S27>:1539' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1546' */
        aaa_DW.is_SXQjunya_c = aaa_IN_off4_gz;
        aaa_DW.temporalCounter_i5 = 0U;

        /* Entry 'off4': '<S27>:1580' */
        aaa_B.bililiuliangfa18_3_l = 0.0;
        aaa_B.bililiuliangfa18_4_l = 0.0;
      } else {
        if (aaa_B.DataTypeConversion11 == 0.0) {
          /* Transition: '<S27>:1545' */
          guard1 = true;
        }
      }
    }
  }

  if (guard1) {
    /* Transition: '<S27>:1548' */
    /* Transition: '<S27>:1544' */
    aaa_DW.is_SXQjunya_c = aaa_IN_off1_b;

    /* Entry 'off1': '<S27>:1574' */
    aaa_B.diancifa11_1_l = 0.0;
    aaa_B.diancifa11_5_k = 0.0;
    aaa_B.diancifa20_l = 0.0;
    aaa_B.bililiuliangfa18_1_b = 0.0;
    aaa_B.bililiuliangfa18_2_j = 0.0;
    aaa_B.bililiuliangfa18_3_l = 0.0;
    aaa_B.bililiuliangfa18_4_l = 0.0;
  }
}

/* Function for Chart: '<S25>/Chart' */
static void aaa_jiaya7_2(void)
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
  if ((aaa_B.DataTypeConversion27[2] < aaa_B.u_l) &&
      (aaa_B.DataTypeConversion27[4] < aaa_B.u_l)) {
    /* Transition: '<S27>:1516' */
    if (aaa_B.DataTypeConversion11 == 1.0) {
      /* Transition: '<S27>:1510' */
      aaa_DW.is_SXQjunya_c = aaa_IN_jiaya7_1;
      aaa_DW.temporalCounter_i5 = 0U;

      /* Entry 'jiaya7_1': '<S27>:1571' */
      aaa_B.bililiuliangfa18_3_l = 1.0;
      aaa_B.bililiuliangfa18_4_l = 1.0;
    } else if (aaa_B.DataTypeConversion11 == 0.0) {
      /* Transition: '<S27>:1515' */
      guard1 = true;
    } else {
      guard4 = true;
    }
  } else {
    guard4 = true;
  }

  if (guard4) {
    if ((aaa_B.DataTypeConversion27[2] >= aaa_B.u_l) &&
        (aaa_B.DataTypeConversion27[4] < aaa_B.u_l)) {
      /* Transition: '<S27>:1524' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1526' */
        aaa_DW.is_SXQjunya_c = aaa_IN_jiaya7_2;
        aaa_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiaya7_2': '<S27>:1577' */
        aaa_B.bililiuliangfa18_3_l = 1.0;
        aaa_B.bililiuliangfa18_4_l = 0.0;
      } else if (aaa_B.DataTypeConversion11 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] < aaa_B.u_l) &&
        (aaa_B.DataTypeConversion27[4] >= aaa_B.u_l)) {
      /* Transition: '<S27>:1521' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1514' */
        aaa_DW.is_SXQjunya_c = aaa_IN_jiaya7_3;
        aaa_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiaya7_3': '<S27>:1572' */
        aaa_B.bililiuliangfa18_3_l = 0.0;
        aaa_B.bililiuliangfa18_4_l = 1.0;
      } else if (aaa_B.DataTypeConversion11 == 0.0) {
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
    if ((aaa_DW.temporalCounter_i5 >= 250) && ((aaa_B.DataTypeConversion27[2] >=
          aaa_B.u_l) && (aaa_B.DataTypeConversion27[4] >= aaa_B.u_l))) {
      /* Transition: '<S27>:1539' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1546' */
        aaa_DW.is_SXQjunya_c = aaa_IN_off4_gz;
        aaa_DW.temporalCounter_i5 = 0U;

        /* Entry 'off4': '<S27>:1580' */
        aaa_B.bililiuliangfa18_3_l = 0.0;
        aaa_B.bililiuliangfa18_4_l = 0.0;
      } else {
        if (aaa_B.DataTypeConversion11 == 0.0) {
          /* Transition: '<S27>:1545' */
          guard1 = true;
        }
      }
    }
  }

  if (guard1) {
    /* Transition: '<S27>:1548' */
    /* Transition: '<S27>:1544' */
    aaa_DW.is_SXQjunya_c = aaa_IN_off1_b;

    /* Entry 'off1': '<S27>:1574' */
    aaa_B.diancifa11_1_l = 0.0;
    aaa_B.diancifa11_5_k = 0.0;
    aaa_B.diancifa20_l = 0.0;
    aaa_B.bililiuliangfa18_1_b = 0.0;
    aaa_B.bililiuliangfa18_2_j = 0.0;
    aaa_B.bililiuliangfa18_3_l = 0.0;
    aaa_B.bililiuliangfa18_4_l = 0.0;
  }
}

/* Function for Chart: '<S25>/Chart' */
static void aaa_jiaya7_3(void)
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
  if ((aaa_B.DataTypeConversion27[2] < aaa_B.u_l) &&
      (aaa_B.DataTypeConversion27[4] < aaa_B.u_l)) {
    /* Transition: '<S27>:1516' */
    if (aaa_B.DataTypeConversion11 == 1.0) {
      /* Transition: '<S27>:1510' */
      aaa_DW.is_SXQjunya_c = aaa_IN_jiaya7_1;
      aaa_DW.temporalCounter_i5 = 0U;

      /* Entry 'jiaya7_1': '<S27>:1571' */
      aaa_B.bililiuliangfa18_3_l = 1.0;
      aaa_B.bililiuliangfa18_4_l = 1.0;
    } else if (aaa_B.DataTypeConversion11 == 0.0) {
      /* Transition: '<S27>:1515' */
      guard1 = true;
    } else {
      guard4 = true;
    }
  } else {
    guard4 = true;
  }

  if (guard4) {
    if ((aaa_B.DataTypeConversion27[2] >= aaa_B.u_l) &&
        (aaa_B.DataTypeConversion27[4] < aaa_B.u_l)) {
      /* Transition: '<S27>:1524' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1526' */
        aaa_DW.is_SXQjunya_c = aaa_IN_jiaya7_2;
        aaa_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiaya7_2': '<S27>:1577' */
        aaa_B.bililiuliangfa18_3_l = 1.0;
        aaa_B.bililiuliangfa18_4_l = 0.0;
      } else if (aaa_B.DataTypeConversion11 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] < aaa_B.u_l) &&
        (aaa_B.DataTypeConversion27[4] >= aaa_B.u_l)) {
      /* Transition: '<S27>:1521' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1514' */
        aaa_DW.is_SXQjunya_c = aaa_IN_jiaya7_3;
        aaa_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiaya7_3': '<S27>:1572' */
        aaa_B.bililiuliangfa18_3_l = 0.0;
        aaa_B.bililiuliangfa18_4_l = 1.0;
      } else if (aaa_B.DataTypeConversion11 == 0.0) {
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
    if ((aaa_DW.temporalCounter_i5 >= 250) && ((aaa_B.DataTypeConversion27[2] >=
          aaa_B.u_l) && (aaa_B.DataTypeConversion27[4] >= aaa_B.u_l))) {
      /* Transition: '<S27>:1539' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1546' */
        aaa_DW.is_SXQjunya_c = aaa_IN_off4_gz;
        aaa_DW.temporalCounter_i5 = 0U;

        /* Entry 'off4': '<S27>:1580' */
        aaa_B.bililiuliangfa18_3_l = 0.0;
        aaa_B.bililiuliangfa18_4_l = 0.0;
      } else {
        if (aaa_B.DataTypeConversion11 == 0.0) {
          /* Transition: '<S27>:1545' */
          guard1 = true;
        }
      }
    }
  }

  if (guard1) {
    /* Transition: '<S27>:1548' */
    /* Transition: '<S27>:1544' */
    aaa_DW.is_SXQjunya_c = aaa_IN_off1_b;

    /* Entry 'off1': '<S27>:1574' */
    aaa_B.diancifa11_1_l = 0.0;
    aaa_B.diancifa11_5_k = 0.0;
    aaa_B.diancifa20_l = 0.0;
    aaa_B.bililiuliangfa18_1_b = 0.0;
    aaa_B.bililiuliangfa18_2_j = 0.0;
    aaa_B.bililiuliangfa18_3_l = 0.0;
    aaa_B.bililiuliangfa18_4_l = 0.0;
  }
}

/* Function for Chart: '<S25>/Chart' */
static void aaa_off2(void)
{
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  boolean_T guard4 = false;
  boolean_T guard5 = false;

  /* During 'off2': '<S27>:1582' */
  if (aaa_DW.temporalCounter_i5 >= 1000) {
    /* Transition: '<S27>:1566' */
    guard1 = false;
    guard2 = false;
    guard3 = false;
    guard4 = false;
    guard5 = false;
    if ((aaa_B.DataTypeConversion27[2] < aaa_B.u_l) ||
        (aaa_B.DataTypeConversion27[2] > aaa_B.u_l + 0.005) ||
        (aaa_B.DataTypeConversion27[4] < aaa_B.u_l) ||
        (aaa_B.DataTypeConversion27[4] > aaa_B.u_l + 0.005)) {
      /* Transition: '<S27>:1561' */
      if ((aaa_B.DataTypeConversion27[2] <= aaa_B.u_l + 0.005) &&
          (aaa_B.DataTypeConversion27[4] > aaa_B.u_l + 0.005)) {
        /* Transition: '<S27>:1557' */
        if (aaa_B.DataTypeConversion11 == 1.0) {
          /* Transition: '<S27>:1558' */
          aaa_DW.is_SXQjunya_c = aaa_IN_jiance1_34;
          aaa_DW.temporalCounter_i5 = 0U;

          /* Entry 'jiance1_34': '<S27>:1583' */
          aaa_B.bililiuliangfa18_1_b = 1.0;
          aaa_B.bililiuliangfa18_2_j = 0.0;
        } else if (aaa_B.DataTypeConversion11 == 0.0) {
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
      if ((aaa_B.DataTypeConversion27[2] >= aaa_B.u_l) &&
          (aaa_B.DataTypeConversion27[4] >= aaa_B.u_l) &&
          (aaa_B.DataTypeConversion27[2] <= aaa_B.u_l + 0.005) &&
          (aaa_B.DataTypeConversion27[4] <= aaa_B.u_l + 0.005)) {
        /* Transition: '<S27>:1559' */
        aaa_DW.is_SXQjunya_c = aaa_IN_off2_ox;
        aaa_DW.temporalCounter_i5 = 0U;

        /* Entry 'off2': '<S27>:1582' */
        aaa_B.bililiuliangfa18_1_b = 0.0;
        aaa_B.bililiuliangfa18_2_j = 0.0;
        aaa_B.bililiuliangfa18_3_l = 0.0;
        aaa_B.bililiuliangfa18_4_l = 0.0;
      } else if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_l + 0.005) &&
                 (aaa_B.DataTypeConversion27[4] <= aaa_B.u_l + 0.005)) {
        /* Transition: '<S27>:1563' */
        if (aaa_B.DataTypeConversion11 == 1.0) {
          /* Transition: '<S27>:1567' */
          aaa_DW.is_SXQjunya_c = aaa_IN_jiance1_36;
          aaa_DW.temporalCounter_i5 = 0U;

          /* Entry 'jiance1_36': '<S27>:1585' */
          aaa_B.bililiuliangfa18_1_b = 0.0;
          aaa_B.bililiuliangfa18_2_j = 1.0;
        } else if (aaa_B.DataTypeConversion11 == 0.0) {
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
      if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_l + 0.005) &&
          (aaa_B.DataTypeConversion27[4] > aaa_B.u_l + 0.005)) {
        /* Transition: '<S27>:1565' */
        if (aaa_B.DataTypeConversion11 == 1.0) {
          /* Transition: '<S27>:1569' */
          aaa_DW.is_SXQjunya_c = aaa_IN_jiance1_32;
          aaa_DW.temporalCounter_i5 = 0U;

          /* Entry 'jiance1_32': '<S27>:1584' */
          aaa_B.bililiuliangfa18_1_b = 1.0;
          aaa_B.bililiuliangfa18_2_j = 1.0;
        } else if (aaa_B.DataTypeConversion11 == 0.0) {
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
      if ((aaa_DW.temporalCounter_i5 >= 250) && ((aaa_B.DataTypeConversion27[2] <=
            aaa_B.u_l + 0.005) && (aaa_B.DataTypeConversion27[4] <= aaa_B.u_l +
            0.005))) {
        /* Transition: '<S27>:1553' */
        if (aaa_B.DataTypeConversion11 == 1.0) {
          /* Transition: '<S27>:1547' */
          aaa_DW.is_SXQjunya_c = aaa_IN_off3_p3;
          aaa_DW.temporalCounter_i5 = 0U;

          /* Entry 'off3': '<S27>:1581' */
          aaa_B.bililiuliangfa18_1_b = 0.0;
          aaa_B.bililiuliangfa18_2_j = 0.0;
        } else if (aaa_B.DataTypeConversion11 == 0.0) {
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
      if ((aaa_B.DataTypeConversion27[2] >= aaa_B.u_l) &&
          (aaa_B.DataTypeConversion27[2] <= aaa_B.u_l + 0.005) &&
          (aaa_B.DataTypeConversion27[4] >= aaa_B.u_l) &&
          (aaa_B.DataTypeConversion27[4] <= aaa_B.u_l + 0.005)) {
        /* Transition: '<S27>:1568' */
        aaa_DW.is_SXQjunya_c = aaa_IN_off6_h;

        /* Entry 'off6': '<S27>:1586' */
        aaa_B.diancifa11_1_l = 0.0;
        aaa_B.diancifa11_5_k = 0.0;
        aaa_B.SXQjunyawancheng_h = 1.0;
      }
    }

    if (guard1) {
      /* Transition: '<S27>:1549' */
      /* Transition: '<S27>:1548' */
      /* Transition: '<S27>:1544' */
      aaa_DW.is_SXQjunya_c = aaa_IN_off1_b;

      /* Entry 'off1': '<S27>:1574' */
      aaa_B.diancifa11_1_l = 0.0;
      aaa_B.diancifa11_5_k = 0.0;
      aaa_B.diancifa20_l = 0.0;
      aaa_B.bililiuliangfa18_1_b = 0.0;
      aaa_B.bililiuliangfa18_2_j = 0.0;
      aaa_B.bililiuliangfa18_3_l = 0.0;
      aaa_B.bililiuliangfa18_4_l = 0.0;
    }
  }
}

/* Function for Chart: '<S25>/Chart' */
static void aaa_off3(void)
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
  if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_l + 0.005) ||
      (aaa_B.DataTypeConversion27[4] > aaa_B.u_l + 0.005)) {
    /* Transition: '<S27>:1550' */
    if ((aaa_B.DataTypeConversion27[2] <= aaa_B.u_l + 0.005) &&
        (aaa_B.DataTypeConversion27[4] > aaa_B.u_l + 0.005)) {
      /* Transition: '<S27>:1557' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1558' */
        aaa_DW.is_SXQjunya_c = aaa_IN_jiance1_34;
        aaa_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiance1_34': '<S27>:1583' */
        aaa_B.bililiuliangfa18_1_b = 1.0;
        aaa_B.bililiuliangfa18_2_j = 0.0;
      } else if (aaa_B.DataTypeConversion11 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] >= aaa_B.u_l) &&
        (aaa_B.DataTypeConversion27[4] >= aaa_B.u_l) &&
        (aaa_B.DataTypeConversion27[2] <= aaa_B.u_l + 0.005) &&
        (aaa_B.DataTypeConversion27[4] <= aaa_B.u_l + 0.005)) {
      /* Transition: '<S27>:1559' */
      aaa_DW.is_SXQjunya_c = aaa_IN_off2_ox;
      aaa_DW.temporalCounter_i5 = 0U;

      /* Entry 'off2': '<S27>:1582' */
      aaa_B.bililiuliangfa18_1_b = 0.0;
      aaa_B.bililiuliangfa18_2_j = 0.0;
      aaa_B.bililiuliangfa18_3_l = 0.0;
      aaa_B.bililiuliangfa18_4_l = 0.0;
    } else if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_l + 0.005) &&
               (aaa_B.DataTypeConversion27[4] <= aaa_B.u_l + 0.005)) {
      /* Transition: '<S27>:1563' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1567' */
        aaa_DW.is_SXQjunya_c = aaa_IN_jiance1_36;
        aaa_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiance1_36': '<S27>:1585' */
        aaa_B.bililiuliangfa18_1_b = 0.0;
        aaa_B.bililiuliangfa18_2_j = 1.0;
      } else if (aaa_B.DataTypeConversion11 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_l + 0.005) &&
        (aaa_B.DataTypeConversion27[4] > aaa_B.u_l + 0.005)) {
      /* Transition: '<S27>:1565' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1569' */
        aaa_DW.is_SXQjunya_c = aaa_IN_jiance1_32;
        aaa_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiance1_32': '<S27>:1584' */
        aaa_B.bililiuliangfa18_1_b = 1.0;
        aaa_B.bililiuliangfa18_2_j = 1.0;
      } else if (aaa_B.DataTypeConversion11 == 0.0) {
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
    if ((aaa_DW.temporalCounter_i5 >= 250) && ((aaa_B.DataTypeConversion27[2] <=
          aaa_B.u_l + 0.005) && (aaa_B.DataTypeConversion27[4] <= aaa_B.u_l +
          0.005))) {
      /* Transition: '<S27>:1553' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1547' */
        aaa_DW.is_SXQjunya_c = aaa_IN_off3_p3;
        aaa_DW.temporalCounter_i5 = 0U;

        /* Entry 'off3': '<S27>:1581' */
        aaa_B.bililiuliangfa18_1_b = 0.0;
        aaa_B.bililiuliangfa18_2_j = 0.0;
      } else if (aaa_B.DataTypeConversion11 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] <= aaa_B.u_l + 0.005) &&
        (aaa_B.DataTypeConversion27[4] <= aaa_B.u_l + 0.005)) {
      /* Transition: '<S27>:1535' */
      if ((aaa_B.DataTypeConversion27[2] < aaa_B.u_l) &&
          (aaa_B.DataTypeConversion27[4] < aaa_B.u_l)) {
        /* Transition: '<S27>:1516' */
        if (aaa_B.DataTypeConversion11 == 1.0) {
          /* Transition: '<S27>:1510' */
          aaa_DW.is_SXQjunya_c = aaa_IN_jiaya7_1;
          aaa_DW.temporalCounter_i5 = 0U;

          /* Entry 'jiaya7_1': '<S27>:1571' */
          aaa_B.bililiuliangfa18_3_l = 1.0;
          aaa_B.bililiuliangfa18_4_l = 1.0;
        } else if (aaa_B.DataTypeConversion11 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] >= aaa_B.u_l) &&
        (aaa_B.DataTypeConversion27[4] < aaa_B.u_l)) {
      /* Transition: '<S27>:1524' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1526' */
        aaa_DW.is_SXQjunya_c = aaa_IN_jiaya7_2;
        aaa_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiaya7_2': '<S27>:1577' */
        aaa_B.bililiuliangfa18_3_l = 1.0;
        aaa_B.bililiuliangfa18_4_l = 0.0;
      } else if (aaa_B.DataTypeConversion11 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] < aaa_B.u_l) &&
        (aaa_B.DataTypeConversion27[4] >= aaa_B.u_l)) {
      /* Transition: '<S27>:1521' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1514' */
        aaa_DW.is_SXQjunya_c = aaa_IN_jiaya7_3;
        aaa_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiaya7_3': '<S27>:1572' */
        aaa_B.bililiuliangfa18_3_l = 0.0;
        aaa_B.bililiuliangfa18_4_l = 1.0;
      } else if (aaa_B.DataTypeConversion11 == 0.0) {
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
    if ((aaa_DW.temporalCounter_i5 >= 250) && ((aaa_B.DataTypeConversion27[2] >=
          aaa_B.u_l) && (aaa_B.DataTypeConversion27[4] >= aaa_B.u_l))) {
      /* Transition: '<S27>:1539' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1546' */
        aaa_DW.is_SXQjunya_c = aaa_IN_off4_gz;
        aaa_DW.temporalCounter_i5 = 0U;

        /* Entry 'off4': '<S27>:1580' */
        aaa_B.bililiuliangfa18_3_l = 0.0;
        aaa_B.bililiuliangfa18_4_l = 0.0;
      } else {
        if (aaa_B.DataTypeConversion11 == 0.0) {
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
    /* Transition: '<S27>:1544' */
    aaa_DW.is_SXQjunya_c = aaa_IN_off1_b;

    /* Entry 'off1': '<S27>:1574' */
    aaa_B.diancifa11_1_l = 0.0;
    aaa_B.diancifa11_5_k = 0.0;
    aaa_B.diancifa20_l = 0.0;
    aaa_B.bililiuliangfa18_1_b = 0.0;
    aaa_B.bililiuliangfa18_2_j = 0.0;
    aaa_B.bililiuliangfa18_3_l = 0.0;
    aaa_B.bililiuliangfa18_4_l = 0.0;
  }
}

/* Function for Chart: '<S25>/Chart' */
static void aaa_off4(void)
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
  if ((aaa_B.DataTypeConversion27[2] <= aaa_B.u_l + 0.005) &&
      (aaa_B.DataTypeConversion27[4] > aaa_B.u_l + 0.005)) {
    /* Transition: '<S27>:1557' */
    if (aaa_B.DataTypeConversion11 == 1.0) {
      /* Transition: '<S27>:1558' */
      aaa_DW.is_SXQjunya_c = aaa_IN_jiance1_34;
      aaa_DW.temporalCounter_i5 = 0U;

      /* Entry 'jiance1_34': '<S27>:1583' */
      aaa_B.bililiuliangfa18_1_b = 1.0;
      aaa_B.bililiuliangfa18_2_j = 0.0;
    } else if (aaa_B.DataTypeConversion11 == 0.0) {
      /* Transition: '<S27>:1554' */
      guard2 = true;
    } else {
      guard9 = true;
    }
  } else {
    guard9 = true;
  }

  if (guard9) {
    if ((aaa_B.DataTypeConversion27[2] >= aaa_B.u_l) &&
        (aaa_B.DataTypeConversion27[4] >= aaa_B.u_l) &&
        (aaa_B.DataTypeConversion27[2] <= aaa_B.u_l + 0.005) &&
        (aaa_B.DataTypeConversion27[4] <= aaa_B.u_l + 0.005)) {
      /* Transition: '<S27>:1559' */
      aaa_DW.is_SXQjunya_c = aaa_IN_off2_ox;
      aaa_DW.temporalCounter_i5 = 0U;

      /* Entry 'off2': '<S27>:1582' */
      aaa_B.bililiuliangfa18_1_b = 0.0;
      aaa_B.bililiuliangfa18_2_j = 0.0;
      aaa_B.bililiuliangfa18_3_l = 0.0;
      aaa_B.bililiuliangfa18_4_l = 0.0;
    } else if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_l + 0.005) &&
               (aaa_B.DataTypeConversion27[4] <= aaa_B.u_l + 0.005)) {
      /* Transition: '<S27>:1563' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1567' */
        aaa_DW.is_SXQjunya_c = aaa_IN_jiance1_36;
        aaa_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiance1_36': '<S27>:1585' */
        aaa_B.bililiuliangfa18_1_b = 0.0;
        aaa_B.bililiuliangfa18_2_j = 1.0;
      } else if (aaa_B.DataTypeConversion11 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_l + 0.005) &&
        (aaa_B.DataTypeConversion27[4] > aaa_B.u_l + 0.005)) {
      /* Transition: '<S27>:1565' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1569' */
        aaa_DW.is_SXQjunya_c = aaa_IN_jiance1_32;
        aaa_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiance1_32': '<S27>:1584' */
        aaa_B.bililiuliangfa18_1_b = 1.0;
        aaa_B.bililiuliangfa18_2_j = 1.0;
      } else if (aaa_B.DataTypeConversion11 == 0.0) {
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
    if ((aaa_DW.temporalCounter_i5 >= 250) && ((aaa_B.DataTypeConversion27[2] <=
          aaa_B.u_l + 0.005) && (aaa_B.DataTypeConversion27[4] <= aaa_B.u_l +
          0.005))) {
      /* Transition: '<S27>:1553' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1547' */
        aaa_DW.is_SXQjunya_c = aaa_IN_off3_p3;
        aaa_DW.temporalCounter_i5 = 0U;

        /* Entry 'off3': '<S27>:1581' */
        aaa_B.bililiuliangfa18_1_b = 0.0;
        aaa_B.bililiuliangfa18_2_j = 0.0;
      } else if (aaa_B.DataTypeConversion11 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] < aaa_B.u_l) ||
        (aaa_B.DataTypeConversion27[4] < aaa_B.u_l)) {
      /* Transition: '<S27>:1537' */
      if ((aaa_B.DataTypeConversion27[2] < aaa_B.u_l) &&
          (aaa_B.DataTypeConversion27[4] < aaa_B.u_l)) {
        /* Transition: '<S27>:1516' */
        if (aaa_B.DataTypeConversion11 == 1.0) {
          /* Transition: '<S27>:1510' */
          aaa_DW.is_SXQjunya_c = aaa_IN_jiaya7_1;
          aaa_DW.temporalCounter_i5 = 0U;

          /* Entry 'jiaya7_1': '<S27>:1571' */
          aaa_B.bililiuliangfa18_3_l = 1.0;
          aaa_B.bililiuliangfa18_4_l = 1.0;
        } else if (aaa_B.DataTypeConversion11 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] >= aaa_B.u_l) &&
        (aaa_B.DataTypeConversion27[4] < aaa_B.u_l)) {
      /* Transition: '<S27>:1524' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1526' */
        aaa_DW.is_SXQjunya_c = aaa_IN_jiaya7_2;
        aaa_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiaya7_2': '<S27>:1577' */
        aaa_B.bililiuliangfa18_3_l = 1.0;
        aaa_B.bililiuliangfa18_4_l = 0.0;
      } else if (aaa_B.DataTypeConversion11 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] < aaa_B.u_l) &&
        (aaa_B.DataTypeConversion27[4] >= aaa_B.u_l)) {
      /* Transition: '<S27>:1521' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1514' */
        aaa_DW.is_SXQjunya_c = aaa_IN_jiaya7_3;
        aaa_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiaya7_3': '<S27>:1572' */
        aaa_B.bililiuliangfa18_3_l = 0.0;
        aaa_B.bililiuliangfa18_4_l = 1.0;
      } else if (aaa_B.DataTypeConversion11 == 0.0) {
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
    if ((aaa_DW.temporalCounter_i5 >= 250) && ((aaa_B.DataTypeConversion27[2] >=
          aaa_B.u_l) && (aaa_B.DataTypeConversion27[4] >= aaa_B.u_l))) {
      /* Transition: '<S27>:1539' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1546' */
        aaa_DW.is_SXQjunya_c = aaa_IN_off4_gz;
        aaa_DW.temporalCounter_i5 = 0U;

        /* Entry 'off4': '<S27>:1580' */
        aaa_B.bililiuliangfa18_3_l = 0.0;
        aaa_B.bililiuliangfa18_4_l = 0.0;
      } else {
        if (aaa_B.DataTypeConversion11 == 0.0) {
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
    /* Transition: '<S27>:1544' */
    aaa_DW.is_SXQjunya_c = aaa_IN_off1_b;

    /* Entry 'off1': '<S27>:1574' */
    aaa_B.diancifa11_1_l = 0.0;
    aaa_B.diancifa11_5_k = 0.0;
    aaa_B.diancifa20_l = 0.0;
    aaa_B.bililiuliangfa18_1_b = 0.0;
    aaa_B.bililiuliangfa18_2_j = 0.0;
    aaa_B.bililiuliangfa18_3_l = 0.0;
    aaa_B.bililiuliangfa18_4_l = 0.0;
  }
}

/* Function for Chart: '<S25>/Chart' */
static void aaa_SXQjunya(void)
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
  switch (aaa_DW.is_SXQjunya_c) {
   case aaa_IN_jiance1_32:
    /* During 'jiance1_32': '<S27>:1584' */
    /* Transition: '<S27>:1562' */
    if ((aaa_B.DataTypeConversion27[2] <= aaa_B.u_l + 0.005) &&
        (aaa_B.DataTypeConversion27[4] > aaa_B.u_l + 0.005)) {
      /* Transition: '<S27>:1557' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1558' */
        aaa_DW.is_SXQjunya_c = aaa_IN_jiance1_34;
        aaa_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiance1_34': '<S27>:1583' */
        aaa_B.bililiuliangfa18_1_b = 1.0;
        aaa_B.bililiuliangfa18_2_j = 0.0;
      } else if (aaa_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1554' */
        guard1 = true;
      } else {
        guard13 = true;
      }
    } else {
      guard13 = true;
    }
    break;

   case aaa_IN_jiance1_34:
    /* During 'jiance1_34': '<S27>:1583' */
    /* Transition: '<S27>:1560' */
    if ((aaa_B.DataTypeConversion27[2] <= aaa_B.u_l + 0.005) &&
        (aaa_B.DataTypeConversion27[4] > aaa_B.u_l + 0.005)) {
      /* Transition: '<S27>:1557' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1558' */
        aaa_DW.is_SXQjunya_c = aaa_IN_jiance1_34;
        aaa_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiance1_34': '<S27>:1583' */
        aaa_B.bililiuliangfa18_1_b = 1.0;
        aaa_B.bililiuliangfa18_2_j = 0.0;
      } else if (aaa_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1554' */
        guard2 = true;
      } else {
        guard14 = true;
      }
    } else {
      guard14 = true;
    }
    break;

   case aaa_IN_jiance1_36:
    /* During 'jiance1_36': '<S27>:1585' */
    /* Transition: '<S27>:1564' */
    if ((aaa_B.DataTypeConversion27[2] <= aaa_B.u_l + 0.005) &&
        (aaa_B.DataTypeConversion27[4] > aaa_B.u_l + 0.005)) {
      /* Transition: '<S27>:1557' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1558' */
        aaa_DW.is_SXQjunya_c = aaa_IN_jiance1_34;
        aaa_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiance1_34': '<S27>:1583' */
        aaa_B.bililiuliangfa18_1_b = 1.0;
        aaa_B.bililiuliangfa18_2_j = 0.0;
      } else if (aaa_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1554' */
        guard3 = true;
      } else {
        guard15 = true;
      }
    } else {
      guard15 = true;
    }
    break;

   case aaa_IN_jiaya1:
    /* During 'jiaya1': '<S27>:1575' */
    /* Transition: '<S27>:1527' */
    if ((aaa_B.DataTypeConversion27[2] < aaa_B.p0_1) &&
        (aaa_B.DataTypeConversion27[4] < aaa_B.p0_1)) {
      /* Transition: '<S27>:1522' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1512' */
        aaa_DW.is_SXQjunya_c = aaa_IN_jiaya1_1;

        /* Entry 'jiaya1_1': '<S27>:1570' */
        aaa_B.bililiuliangfa18_3_l = 1.0;
        aaa_B.bililiuliangfa18_4_l = 1.0;
      } else if (aaa_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1523' */
        guard4 = true;
      } else {
        guard16 = true;
      }
    } else {
      guard16 = true;
    }
    break;

   case aaa_IN_jiaya1_1:
    aaa_jiaya1_1();
    break;

   case aaa_IN_jiaya1_2:
    aaa_jiaya1_2();
    break;

   case aaa_IN_jiaya1_3:
    aaa_jiaya1_3();
    break;

   case aaa_IN_jiaya2:
    aaa_jiaya2();
    break;

   case aaa_IN_jiaya7_1:
    aaa_jiaya7_1();
    break;

   case aaa_IN_jiaya7_2:
    aaa_jiaya7_2();
    break;

   case aaa_IN_jiaya7_3:
    aaa_jiaya7_3();
    break;

   case aaa_IN_off1_b:
    /* During 'off1': '<S27>:1574' */
    if (aaa_B.DataTypeConversion11 == 1.0) {
      /* Transition: '<S27>:1533' */
      aaa_DW.is_SXQjunya_c = aaa_IN_on1_ahrj;
      aaa_DW.temporalCounter_i5 = 0U;

      /* Entry 'on1': '<S27>:1576' */
      aaa_B.diancifa11_1_l = 1.0;
      aaa_B.diancifa11_5_k = 1.0;
    }
    break;

   case aaa_IN_off2_ox:
    aaa_off2();
    break;

   case aaa_IN_off3_p3:
    aaa_off3();
    break;

   case aaa_IN_off4_gz:
    aaa_off4();
    break;

   case aaa_IN_off6_h:
    /* During 'off6': '<S27>:1586' */
    break;

   default:
    /* During 'on1': '<S27>:1576' */
    if (aaa_DW.temporalCounter_i5 >= 500) {
      /* Transition: '<S27>:1531' */
      aaa_DW.is_SXQjunya_c = aaa_IN_jiaya1;

      /* Entry 'jiaya1': '<S27>:1575' */
      aaa_B.bililiuliangfa18_3_l = 1.0;
      aaa_B.bililiuliangfa18_4_l = 1.0;
      aaa_B.p0_1 = aaa_B.u_p;
    }
    break;
  }

  if (guard16) {
    if ((aaa_B.DataTypeConversion27[2] >= aaa_B.p0_1) &&
        (aaa_B.DataTypeConversion27[4] < aaa_B.p0_1)) {
      /* Transition: '<S27>:1536' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1540' */
        aaa_DW.is_SXQjunya_c = aaa_IN_jiaya1_2;

        /* Entry 'jiaya1_2': '<S27>:1578' */
        aaa_B.bililiuliangfa18_3_l = 1.0;
        aaa_B.bililiuliangfa18_4_l = 0.0;
      } else if (aaa_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1541' */
        guard4 = true;
      } else {
        guard12 = true;
      }
    } else {
      guard12 = true;
    }
  }

  if (guard15) {
    if ((aaa_B.DataTypeConversion27[2] >= aaa_B.u_l) &&
        (aaa_B.DataTypeConversion27[4] >= aaa_B.u_l) &&
        (aaa_B.DataTypeConversion27[2] <= aaa_B.u_l + 0.005) &&
        (aaa_B.DataTypeConversion27[4] <= aaa_B.u_l + 0.005)) {
      /* Transition: '<S27>:1559' */
      aaa_DW.is_SXQjunya_c = aaa_IN_off2_ox;
      aaa_DW.temporalCounter_i5 = 0U;

      /* Entry 'off2': '<S27>:1582' */
      aaa_B.bililiuliangfa18_1_b = 0.0;
      aaa_B.bililiuliangfa18_2_j = 0.0;
      aaa_B.bililiuliangfa18_3_l = 0.0;
      aaa_B.bililiuliangfa18_4_l = 0.0;
    } else if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_l + 0.005) &&
               (aaa_B.DataTypeConversion27[4] <= aaa_B.u_l + 0.005)) {
      /* Transition: '<S27>:1563' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1567' */
        aaa_DW.is_SXQjunya_c = aaa_IN_jiance1_36;
        aaa_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiance1_36': '<S27>:1585' */
        aaa_B.bililiuliangfa18_1_b = 0.0;
        aaa_B.bililiuliangfa18_2_j = 1.0;
      } else if (aaa_B.DataTypeConversion11 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] >= aaa_B.u_l) &&
        (aaa_B.DataTypeConversion27[4] >= aaa_B.u_l) &&
        (aaa_B.DataTypeConversion27[2] <= aaa_B.u_l + 0.005) &&
        (aaa_B.DataTypeConversion27[4] <= aaa_B.u_l + 0.005)) {
      /* Transition: '<S27>:1559' */
      aaa_DW.is_SXQjunya_c = aaa_IN_off2_ox;
      aaa_DW.temporalCounter_i5 = 0U;

      /* Entry 'off2': '<S27>:1582' */
      aaa_B.bililiuliangfa18_1_b = 0.0;
      aaa_B.bililiuliangfa18_2_j = 0.0;
      aaa_B.bililiuliangfa18_3_l = 0.0;
      aaa_B.bililiuliangfa18_4_l = 0.0;
    } else if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_l + 0.005) &&
               (aaa_B.DataTypeConversion27[4] <= aaa_B.u_l + 0.005)) {
      /* Transition: '<S27>:1563' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1567' */
        aaa_DW.is_SXQjunya_c = aaa_IN_jiance1_36;
        aaa_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiance1_36': '<S27>:1585' */
        aaa_B.bililiuliangfa18_1_b = 0.0;
        aaa_B.bililiuliangfa18_2_j = 1.0;
      } else if (aaa_B.DataTypeConversion11 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] >= aaa_B.u_l) &&
        (aaa_B.DataTypeConversion27[4] >= aaa_B.u_l) &&
        (aaa_B.DataTypeConversion27[2] <= aaa_B.u_l + 0.005) &&
        (aaa_B.DataTypeConversion27[4] <= aaa_B.u_l + 0.005)) {
      /* Transition: '<S27>:1559' */
      aaa_DW.is_SXQjunya_c = aaa_IN_off2_ox;
      aaa_DW.temporalCounter_i5 = 0U;

      /* Entry 'off2': '<S27>:1582' */
      aaa_B.bililiuliangfa18_1_b = 0.0;
      aaa_B.bililiuliangfa18_2_j = 0.0;
      aaa_B.bililiuliangfa18_3_l = 0.0;
      aaa_B.bililiuliangfa18_4_l = 0.0;
    } else if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_l + 0.005) &&
               (aaa_B.DataTypeConversion27[4] <= aaa_B.u_l + 0.005)) {
      /* Transition: '<S27>:1563' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1567' */
        aaa_DW.is_SXQjunya_c = aaa_IN_jiance1_36;
        aaa_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiance1_36': '<S27>:1585' */
        aaa_B.bililiuliangfa18_1_b = 0.0;
        aaa_B.bililiuliangfa18_2_j = 1.0;
      } else if (aaa_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1555' */
        guard1 = true;
      } else {
        guard9 = true;
      }
    } else {
      guard9 = true;
    }
  }

  if (guard12) {
    if ((aaa_B.DataTypeConversion27[2] < aaa_B.p0_1) &&
        (aaa_B.DataTypeConversion27[4] >= aaa_B.p0_1)) {
      /* Transition: '<S27>:1530' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1542' */
        aaa_DW.is_SXQjunya_c = aaa_IN_jiaya1_3;

        /* Entry 'jiaya1_3': '<S27>:1579' */
        aaa_B.bililiuliangfa18_3_l = 0.0;
        aaa_B.bililiuliangfa18_4_l = 1.0;
      } else if (aaa_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1543' */
        guard4 = true;
      } else {
        guard8 = true;
      }
    } else {
      guard8 = true;
    }
  }

  if (guard11) {
    if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_l + 0.005) &&
        (aaa_B.DataTypeConversion27[4] > aaa_B.u_l + 0.005)) {
      /* Transition: '<S27>:1565' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1569' */
        aaa_DW.is_SXQjunya_c = aaa_IN_jiance1_32;
        aaa_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiance1_32': '<S27>:1584' */
        aaa_B.bililiuliangfa18_1_b = 1.0;
        aaa_B.bililiuliangfa18_2_j = 1.0;
      } else if (aaa_B.DataTypeConversion11 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_l + 0.005) &&
        (aaa_B.DataTypeConversion27[4] > aaa_B.u_l + 0.005)) {
      /* Transition: '<S27>:1565' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1569' */
        aaa_DW.is_SXQjunya_c = aaa_IN_jiance1_32;
        aaa_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiance1_32': '<S27>:1584' */
        aaa_B.bililiuliangfa18_1_b = 1.0;
        aaa_B.bililiuliangfa18_2_j = 1.0;
      } else if (aaa_B.DataTypeConversion11 == 0.0) {
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
    if ((aaa_B.DataTypeConversion27[2] > aaa_B.u_l + 0.005) &&
        (aaa_B.DataTypeConversion27[4] > aaa_B.u_l + 0.005)) {
      /* Transition: '<S27>:1565' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1569' */
        aaa_DW.is_SXQjunya_c = aaa_IN_jiance1_32;
        aaa_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiance1_32': '<S27>:1584' */
        aaa_B.bililiuliangfa18_1_b = 1.0;
        aaa_B.bililiuliangfa18_2_j = 1.0;
      } else if (aaa_B.DataTypeConversion11 == 0.0) {
        /* Transition: '<S27>:1556' */
        guard1 = true;
      } else {
        guard5 = true;
      }
    } else {
      guard5 = true;
    }
  }

  if (guard8) {
    if ((aaa_B.DataTypeConversion27[2] >= aaa_B.p0_1) &&
        (aaa_B.DataTypeConversion27[4] >= aaa_B.p0_1)) {
      /* Transition: '<S27>:1518' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1509' */
        aaa_DW.is_SXQjunya_c = aaa_IN_jiaya2;
        aaa_DW.temporalCounter_i5 = 0U;

        /* Entry 'jiaya2': '<S27>:1573' */
        aaa_B.bililiuliangfa18_3_l = 1.0;
        aaa_B.bililiuliangfa18_4_l = 1.0;
        aaa_B.p0_1 += 0.03;
      } else {
        if (aaa_B.DataTypeConversion11 == 0.0) {
          /* Transition: '<S27>:1519' */
          guard4 = true;
        }
      }
    }
  }

  if (guard7) {
    if ((aaa_DW.temporalCounter_i5 >= 250) && ((aaa_B.DataTypeConversion27[2] <=
          aaa_B.u_l + 0.005) && (aaa_B.DataTypeConversion27[4] <= aaa_B.u_l +
          0.005))) {
      /* Transition: '<S27>:1553' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1547' */
        aaa_DW.is_SXQjunya_c = aaa_IN_off3_p3;
        aaa_DW.temporalCounter_i5 = 0U;

        /* Entry 'off3': '<S27>:1581' */
        aaa_B.bililiuliangfa18_1_b = 0.0;
        aaa_B.bililiuliangfa18_2_j = 0.0;
      } else {
        if (aaa_B.DataTypeConversion11 == 0.0) {
          /* Transition: '<S27>:1552' */
          guard3 = true;
        }
      }
    }
  }

  if (guard6) {
    if ((aaa_DW.temporalCounter_i5 >= 250) && ((aaa_B.DataTypeConversion27[2] <=
          aaa_B.u_l + 0.005) && (aaa_B.DataTypeConversion27[4] <= aaa_B.u_l +
          0.005))) {
      /* Transition: '<S27>:1553' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1547' */
        aaa_DW.is_SXQjunya_c = aaa_IN_off3_p3;
        aaa_DW.temporalCounter_i5 = 0U;

        /* Entry 'off3': '<S27>:1581' */
        aaa_B.bililiuliangfa18_1_b = 0.0;
        aaa_B.bililiuliangfa18_2_j = 0.0;
      } else {
        if (aaa_B.DataTypeConversion11 == 0.0) {
          /* Transition: '<S27>:1552' */
          guard2 = true;
        }
      }
    }
  }

  if (guard5) {
    if ((aaa_DW.temporalCounter_i5 >= 250) && ((aaa_B.DataTypeConversion27[2] <=
          aaa_B.u_l + 0.005) && (aaa_B.DataTypeConversion27[4] <= aaa_B.u_l +
          0.005))) {
      /* Transition: '<S27>:1553' */
      if (aaa_B.DataTypeConversion11 == 1.0) {
        /* Transition: '<S27>:1547' */
        aaa_DW.is_SXQjunya_c = aaa_IN_off3_p3;
        aaa_DW.temporalCounter_i5 = 0U;

        /* Entry 'off3': '<S27>:1581' */
        aaa_B.bililiuliangfa18_1_b = 0.0;
        aaa_B.bililiuliangfa18_2_j = 0.0;
      } else {
        if (aaa_B.DataTypeConversion11 == 0.0) {
          /* Transition: '<S27>:1552' */
          guard1 = true;
        }
      }
    }
  }

  if (guard4) {
    /* Transition: '<S27>:1544' */
    aaa_DW.is_SXQjunya_c = aaa_IN_off1_b;

    /* Entry 'off1': '<S27>:1574' */
    aaa_B.diancifa11_1_l = 0.0;
    aaa_B.diancifa11_5_k = 0.0;
    aaa_B.diancifa20_l = 0.0;
    aaa_B.bililiuliangfa18_1_b = 0.0;
    aaa_B.bililiuliangfa18_2_j = 0.0;
    aaa_B.bililiuliangfa18_3_l = 0.0;
    aaa_B.bililiuliangfa18_4_l = 0.0;
  }

  if (guard3) {
    /* Transition: '<S27>:1549' */
    /* Transition: '<S27>:1548' */
    /* Transition: '<S27>:1544' */
    aaa_DW.is_SXQjunya_c = aaa_IN_off1_b;

    /* Entry 'off1': '<S27>:1574' */
    aaa_B.diancifa11_1_l = 0.0;
    aaa_B.diancifa11_5_k = 0.0;
    aaa_B.diancifa20_l = 0.0;
    aaa_B.bililiuliangfa18_1_b = 0.0;
    aaa_B.bililiuliangfa18_2_j = 0.0;
    aaa_B.bililiuliangfa18_3_l = 0.0;
    aaa_B.bililiuliangfa18_4_l = 0.0;
  }

  if (guard2) {
    /* Transition: '<S27>:1549' */
    /* Transition: '<S27>:1548' */
    /* Transition: '<S27>:1544' */
    aaa_DW.is_SXQjunya_c = aaa_IN_off1_b;

    /* Entry 'off1': '<S27>:1574' */
    aaa_B.diancifa11_1_l = 0.0;
    aaa_B.diancifa11_5_k = 0.0;
    aaa_B.diancifa20_l = 0.0;
    aaa_B.bililiuliangfa18_1_b = 0.0;
    aaa_B.bililiuliangfa18_2_j = 0.0;
    aaa_B.bililiuliangfa18_3_l = 0.0;
    aaa_B.bililiuliangfa18_4_l = 0.0;
  }

  if (guard1) {
    /* Transition: '<S27>:1549' */
    /* Transition: '<S27>:1548' */
    /* Transition: '<S27>:1544' */
    aaa_DW.is_SXQjunya_c = aaa_IN_off1_b;

    /* Entry 'off1': '<S27>:1574' */
    aaa_B.diancifa11_1_l = 0.0;
    aaa_B.diancifa11_5_k = 0.0;
    aaa_B.diancifa20_l = 0.0;
    aaa_B.bililiuliangfa18_1_b = 0.0;
    aaa_B.bililiuliangfa18_2_j = 0.0;
    aaa_B.bililiuliangfa18_3_l = 0.0;
    aaa_B.bililiuliangfa18_4_l = 0.0;
  }
}

/* Function for Chart: '<S25>/Chart' */
static void aaa_shoudong(void)
{
  boolean_T guard1 = false;

  /* During 'shoudong': '<S27>:1197' */
  if ((aaa_B.DataTypeConversion13 == 1.0) || (aaa_B.DataTypeConversion6 == 0.0))
  {
    /* Transition: '<S27>:1175' */
    /* Exit Internal 'shoudong': '<S27>:1197' */
    /* Exit Internal 'SXQjunya': '<S27>:1486' */
    aaa_DW.is_SXQjunya_c = aaa_IN_NO_ACTIVE_CHILD_c;
    aaa_DW.is_active_SXQjunya = 0U;

    /* Exit Internal 'SXQxieya': '<S27>:1417' */
    aaa_DW.is_SXQxieya_o = aaa_IN_NO_ACTIVE_CHILD_c;
    aaa_DW.is_active_SXQxieya = 0U;

    /* Exit Internal 'SCzhushui': '<S27>:1337' */
    aaa_DW.is_SCzhushui_f = aaa_IN_NO_ACTIVE_CHILD_c;
    aaa_DW.is_active_SCzhushui = 0U;

    /* Exit Internal 'SCjiaya': '<S27>:1310' */
    aaa_DW.is_SCjiaya_k = aaa_IN_NO_ACTIVE_CHILD_c;
    aaa_DW.is_active_SCjiaya = 0U;

    /* Exit Internal 'kaiguangai': '<S27>:1243' */
    aaa_DW.is_kaiguangai_c = aaa_IN_NO_ACTIVE_CHILD_c;
    aaa_DW.is_active_kaiguangai = 0U;
    aaa_DW.is_c4_aaa = aaa_IN_off111;

    /* Entry 'off111': '<S27>:1174' */
    aaa_B.diancifa11_1_l = 0.0;
    aaa_B.diancifa11_2_i = 0.0;
    aaa_B.diancifa11_5_k = 0.0;
    aaa_B.diancifa20_l = 0.0;
    aaa_B.diancifa16_1_cy = 0.0;
    aaa_B.diancifa3_m = 0.0;
    aaa_B.diancifa21_h = 0.0;
    aaa_B.bililiuliangfa18_1_b = 0.0;
    aaa_B.bililiuliangfa18_2_j = 0.0;
    aaa_B.bililiuliangfa18_3_l = 0.0;
    aaa_B.bililiuliangfa18_4_l = 0.0;
    aaa_B.xuansong_g = 0.0;
    aaa_B.xuanjin_l = 0.0;
    aaa_B.suoding_j = 0.0;
    aaa_B.jiesuo_k = 0.0;
    aaa_B.SCzhushuiwancheng_c = 0.0;
    aaa_B.SCjiayawancheng_k = 0.0;
    aaa_B.SXQjunyawancheng_h = 0.0;
    aaa_B.SQshiyabuchangwancheng_l = 0.0;
    aaa_B.kaigaikaishi_e = 0.0;
    aaa_B.kaigaiwancheng_b = 0.0;
    aaa_B.SQxuanjinjianyawancheng_n = 0.0;
    aaa_B.guangaikaishi_o = 0.0;
    aaa_B.guangaiwancheng_f = 0.0;
    aaa_B.SXQxieyawancheng_g = 0.0;
  } else {
    aaa_kaiguangai();

    /* During 'SCjiaya': '<S27>:1310' */
    guard1 = false;
    switch (aaa_DW.is_SCjiaya_k) {
     case aaa_IN_off1:
      /* During 'off1': '<S27>:1330' */
      if (aaa_B.DataTypeConversion9 == 1.0) {
        /* Transition: '<S27>:1317' */
        aaa_DW.is_SCjiaya_k = aaa_IN_on1_ahr;

        /* Entry 'on1': '<S27>:1331' */
        aaa_B.diancifa11_1_l = 1.0;
        aaa_B.diancifa11_2_i = 1.0;
        aaa_B.diancifa16_1_cy = 0.0;
      }
      break;

     case aaa_IN_off2_o:
      /* During 'off2': '<S27>:1332' */
      /* Transition: '<S27>:1322' */
      if (aaa_DW.temporalCounter_i3 >= 1000) {
        /* Transition: '<S27>:1324' */
        if (aaa_B.DataTypeConversion27[0] < aaa_B.u) {
          /* Transition: '<S27>:1327' */
          aaa_DW.is_SCjiaya_k = aaa_IN_on3_f;

          /* Entry 'on3': '<S27>:1333' */
          aaa_B.diancifa11_1_l = 1.0;
          aaa_B.diancifa11_2_i = 1.0;
          aaa_B.diancifa16_1_cy = 0.0;
        } else if (aaa_B.DataTypeConversion27[0] > aaa_B.u + 0.005) {
          /* Transition: '<S27>:1326' */
          aaa_DW.is_SCjiaya_k = aaa_IN_on2_hu;

          /* Entry 'on2': '<S27>:1334' */
          aaa_B.diancifa16_1_cy = 1.0;
        } else if ((aaa_B.DataTypeConversion27[0] >= aaa_B.u) &&
                   (aaa_B.DataTypeConversion27[0] <= aaa_B.u + 0.005)) {
          /* Transition: '<S27>:1328' */
          aaa_DW.is_SCjiaya_k = aaa_IN_off3_p;

          /* Entry 'off3': '<S27>:1335' */
          aaa_B.diancifa11_1_l = 0.0;
          aaa_B.diancifa11_2_i = 0.0;
          aaa_B.diancifa16_1_cy = 0.0;
        } else {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }
      break;

     case aaa_IN_off3_p:
      /* During 'off3': '<S27>:1335' */
      /* Transition: '<S27>:1329' */
      aaa_DW.is_SCjiaya_k = aaa_IN_off4_g;

      /* Entry 'off4': '<S27>:1336' */
      aaa_B.SCjiayawancheng_k = 1.0;
      break;

     case aaa_IN_off4_g:
      /* During 'off4': '<S27>:1336' */
      break;

     case aaa_IN_on1_ahr:
      /* During 'on1': '<S27>:1331' */
      /* Transition: '<S27>:1318' */
      if (aaa_B.DataTypeConversion27[0] >= aaa_B.u) {
        /* Transition: '<S27>:1321' */
        aaa_DW.is_SCjiaya_k = aaa_IN_off2_o;
        aaa_DW.temporalCounter_i3 = 0U;

        /* Entry 'off2': '<S27>:1332' */
        aaa_B.diancifa11_1_l = 0.0;
        aaa_B.diancifa11_2_i = 0.0;
        aaa_B.diancifa16_1_cy = 0.0;
      } else {
        if (aaa_B.DataTypeConversion9 == 0.0) {
          /* Transition: '<S27>:1319' */
          /* Transition: '<S27>:1316' */
          aaa_DW.is_SCjiaya_k = aaa_IN_off1;

          /* Entry 'off1': '<S27>:1330' */
          aaa_B.diancifa11_1_l = 0.0;
          aaa_B.diancifa11_2_i = 0.0;
          aaa_B.diancifa16_1_cy = 0.0;
        }
      }
      break;

     case aaa_IN_on2_hu:
      /* During 'on2': '<S27>:1334' */
      /* Transition: '<S27>:1325' */
      if (aaa_B.DataTypeConversion27[0] < aaa_B.u) {
        /* Transition: '<S27>:1327' */
        aaa_DW.is_SCjiaya_k = aaa_IN_on3_f;

        /* Entry 'on3': '<S27>:1333' */
        aaa_B.diancifa11_1_l = 1.0;
        aaa_B.diancifa11_2_i = 1.0;
        aaa_B.diancifa16_1_cy = 0.0;
      } else if (aaa_B.DataTypeConversion27[0] > aaa_B.u + 0.005) {
        /* Transition: '<S27>:1326' */
        aaa_DW.is_SCjiaya_k = aaa_IN_on2_hu;

        /* Entry 'on2': '<S27>:1334' */
        aaa_B.diancifa16_1_cy = 1.0;
      } else {
        if ((aaa_B.DataTypeConversion27[0] >= aaa_B.u) &&
            (aaa_B.DataTypeConversion27[0] <= aaa_B.u + 0.005)) {
          /* Transition: '<S27>:1328' */
          aaa_DW.is_SCjiaya_k = aaa_IN_off3_p;

          /* Entry 'off3': '<S27>:1335' */
          aaa_B.diancifa11_1_l = 0.0;
          aaa_B.diancifa11_2_i = 0.0;
          aaa_B.diancifa16_1_cy = 0.0;
        }
      }
      break;

     default:
      /* During 'on3': '<S27>:1333' */
      /* Transition: '<S27>:1323' */
      if (aaa_B.DataTypeConversion27[0] < aaa_B.u) {
        /* Transition: '<S27>:1327' */
        aaa_DW.is_SCjiaya_k = aaa_IN_on3_f;

        /* Entry 'on3': '<S27>:1333' */
        aaa_B.diancifa11_1_l = 1.0;
        aaa_B.diancifa11_2_i = 1.0;
        aaa_B.diancifa16_1_cy = 0.0;
      } else if (aaa_B.DataTypeConversion27[0] > aaa_B.u + 0.005) {
        /* Transition: '<S27>:1326' */
        aaa_DW.is_SCjiaya_k = aaa_IN_on2_hu;

        /* Entry 'on2': '<S27>:1334' */
        aaa_B.diancifa16_1_cy = 1.0;
      } else {
        if ((aaa_B.DataTypeConversion27[0] >= aaa_B.u) &&
            (aaa_B.DataTypeConversion27[0] <= aaa_B.u + 0.005)) {
          /* Transition: '<S27>:1328' */
          aaa_DW.is_SCjiaya_k = aaa_IN_off3_p;

          /* Entry 'off3': '<S27>:1335' */
          aaa_B.diancifa11_1_l = 0.0;
          aaa_B.diancifa11_2_i = 0.0;
          aaa_B.diancifa16_1_cy = 0.0;
        }
      }
      break;
    }

    if (guard1) {
      if (aaa_B.DataTypeConversion9 == 0.0) {
        /* Transition: '<S27>:1320' */
        /* Transition: '<S27>:1316' */
        aaa_DW.is_SCjiaya_k = aaa_IN_off1;

        /* Entry 'off1': '<S27>:1330' */
        aaa_B.diancifa11_1_l = 0.0;
        aaa_B.diancifa11_2_i = 0.0;
        aaa_B.diancifa16_1_cy = 0.0;
      }
    }

    /* During 'SCzhushui': '<S27>:1337' */
    switch (aaa_DW.is_SCzhushui_f) {
     case aaa_IN_off1:
      /* During 'off1': '<S27>:1350' */
      /* Transition: '<S27>:1345' */
      aaa_DW.is_SCzhushui_f = aaa_IN_off2_o;

      /* Entry 'off2': '<S27>:1351' */
      aaa_B.diancifa16_1_cy = 0.0;
      break;

     case aaa_IN_off2_o:
      /* During 'off2': '<S27>:1351' */
      /* Transition: '<S27>:1346' */
      aaa_DW.is_SCzhushui_f = aaa_IN_off3_p;

      /* Entry 'off3': '<S27>:1352' */
      aaa_B.SCzhushuiwancheng_c = 1.0;
      break;

     case aaa_IN_off3_p:
      /* During 'off3': '<S27>:1352' */
      break;

     case aaa_IN_off4_g:
      /* During 'off4': '<S27>:1347' */
      if (aaa_B.DataTypeConversion8 == 1.0) {
        /* Transition: '<S27>:1341' */
        aaa_DW.is_SCzhushui_f = aaa_IN_on2_huv;
        aaa_DW.temporalCounter_i4 = 0U;

        /* Entry 'on2': '<S27>:1348' */
        aaa_B.diancifa16_1_cy = 1.0;
      }
      break;

     case aaa_IN_on2_huv:
      /* During 'on2': '<S27>:1348' */
      if (aaa_DW.temporalCounter_i4 >= 20) {
        /* Transition: '<S27>:1342' */
        aaa_DW.is_SCzhushui_f = aaa_IN_on3_fz;

        /* Entry 'on3': '<S27>:1349' */
        aaa_B.diancifa3_m = 1.0;
      }
      break;

     default:
      /* During 'on3': '<S27>:1349' */
      /* Transition: '<S27>:1343' */
      if (aaa_B.DataTypeConversion28 == 1.0) {
        /* Transition: '<S27>:1344' */
        aaa_DW.is_SCzhushui_f = aaa_IN_off1;

        /* Entry 'off1': '<S27>:1350' */
        aaa_B.diancifa3_m = 0.0;
      } else {
        if (aaa_B.DataTypeConversion8 == 0.0) {
          /* Transition: '<S27>:1340' */
          aaa_DW.is_SCzhushui_f = aaa_IN_off4_g;

          /* Entry 'off4': '<S27>:1347' */
          aaa_B.diancifa16_1_cy = 0.0;
          aaa_B.diancifa3_m = 0.0;
        }
      }
      break;
    }

    aaa_SXQxieya();
    aaa_SXQjunya();
  }
}

/* Model output function */
static void aaa_output(void)
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
  srClearBC(aaa_DW.shoudong_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(aaa_DW.zidong_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(aaa_DW.Subsystem3.Subsystem3_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(aaa_DW.jinjichuli_SubsysRanBC);

  /* DataTypeConversion: '<Root>/Data Type Conversion3' incorporates:
   *  Constant: '<Root>/tiaoshi'
   */
  aaa_B.DataTypeConversion3 = aaa_P.tiaoshi_Value;

  /* Constant: '<S21>/fa11_1' */
  aaa_B.fa11_1 = aaa_P.fa11_1_Value;

  /* Constant: '<S21>/fa11_2' */
  aaa_B.fa11_2 = aaa_P.fa11_2_Value;

  /* Constant: '<S21>/fa11_5' */
  aaa_B.fa11_5 = aaa_P.fa11_5_Value;

  /* Constant: '<S21>/fa20' */
  aaa_B.fa20 = aaa_P.fa20_Value;

  /* Constant: '<S21>/fa16_1' */
  aaa_B.fa16_1 = aaa_P.fa16_1_Value;

  /* Constant: '<S21>/fa3' */
  aaa_B.fa3 = aaa_P.fa3_Value;

  /* Constant: '<S21>/fa21' */
  aaa_B.fa21 = aaa_P.fa21_Value;

  /* Constant: '<S21>/xuansongmingling' */
  aaa_B.xuansongmingling = aaa_P.xuansongmingling_Value;

  /* Constant: '<S21>/xuanjinmingling' */
  aaa_B.xuanjinmingling = aaa_P.xuanjinmingling_Value;

  /* Constant: '<S21>/suodingmingling' */
  aaa_B.suodingmingling = aaa_P.suodingmingling_Value;

  /* Constant: '<S21>/jiesuomingling' */
  aaa_B.jiesuomingling = aaa_P.jiesuomingling_Value;

  /* Constant: '<S21>/fa18_1' */
  aaa_B.fa18_1 = aaa_P.fa18_1_Value;

  /* Constant: '<S21>/fa18_2' */
  aaa_B.fa18_2 = aaa_P.fa18_2_Value;

  /* Constant: '<S21>/fa18_3' */
  aaa_B.fa18_3 = aaa_P.fa18_3_Value;

  /* Constant: '<S21>/fa18_4' */
  aaa_B.fa18_4 = aaa_P.fa18_4_Value;

  /* Constant: '<S21>/fa_kgg' */
  aaa_B.fa_kgg = aaa_P.fa_kgg_Value;

  /* Constant: '<Root>/jiting' */
  aaa_B.jiting = aaa_P.jiting_Value;

  /* Outputs for Enabled SubSystem: '<Root>/jinjichuli' incorporates:
   *  EnablePort: '<S19>/Enable'
   */
  if (aaa_B.DataTypeConversion3 > 0.0) {
    if (!aaa_DW.jinjichuli_MODE) {
      /* SystemReset for Chart: '<S19>/jinjichuli' */
      aaa_DW.sfEvent = aaa_CALL_EVENT_n;
      aaa_DW.is_active_fa4_1 = 0U;
      aaa_DW.is_fa4_1 = aaa_IN_NO_ACTIVE_CHILD_c;
      aaa_DW.is_active_fa4_10 = 0U;
      aaa_DW.is_fa4_10 = aaa_IN_NO_ACTIVE_CHILD_c;
      aaa_DW.is_active_fa4_11 = 0U;
      aaa_DW.is_fa4_11 = aaa_IN_NO_ACTIVE_CHILD_c;
      aaa_DW.is_active_fa4_12 = 0U;
      aaa_DW.is_fa4_12 = aaa_IN_NO_ACTIVE_CHILD_c;
      aaa_DW.is_active_fa4_13 = 0U;
      aaa_DW.is_fa4_13 = aaa_IN_NO_ACTIVE_CHILD_c;
      aaa_DW.is_active_fa4_2 = 0U;
      aaa_DW.is_fa4_2 = aaa_IN_NO_ACTIVE_CHILD_c;
      aaa_DW.is_active_fa4_3 = 0U;
      aaa_DW.is_fa4_3 = aaa_IN_NO_ACTIVE_CHILD_c;
      aaa_DW.is_active_fa4_4 = 0U;
      aaa_DW.is_fa4_4 = aaa_IN_NO_ACTIVE_CHILD_c;
      aaa_DW.is_active_fa4_5 = 0U;
      aaa_DW.is_fa4_5 = aaa_IN_NO_ACTIVE_CHILD_c;
      aaa_DW.is_active_fa4_6 = 0U;
      aaa_DW.is_fa4_6 = aaa_IN_NO_ACTIVE_CHILD_c;
      aaa_DW.is_active_fa4_7 = 0U;
      aaa_DW.is_fa4_7 = aaa_IN_NO_ACTIVE_CHILD_c;
      aaa_DW.is_active_fa4_8 = 0U;
      aaa_DW.is_fa4_8 = aaa_IN_NO_ACTIVE_CHILD_c;
      aaa_DW.is_active_fa4_9 = 0U;
      aaa_DW.is_fa4_9 = aaa_IN_NO_ACTIVE_CHILD_c;
      aaa_DW.is_active_kaigai = 0U;
      aaa_DW.is_kaigai = aaa_IN_NO_ACTIVE_CHILD_c;
      aaa_DW.is_active_kiagai = 0U;
      aaa_DW.is_kiagai = aaa_IN_NO_ACTIVE_CHILD_c;
      aaa_DW.is_active_yajin = 0U;
      aaa_DW.is_yajin = aaa_IN_NO_ACTIVE_CHILD_c;
      aaa_DW.temporalCounter_i1 = 0U;
      aaa_DW.is_active_c2_aaa = 0U;
      aaa_DW.is_c2_aaa = aaa_IN_NO_ACTIVE_CHILD_c;
      aaa_B.diancifa11_1 = 0.0;
      aaa_B.diancifa11_2 = 0.0;
      aaa_B.diancifa11_5 = 0.0;
      aaa_B.diancifa20 = 0.0;
      aaa_B.diancifa16_1 = 0.0;
      aaa_B.diancifa3 = 0.0;
      aaa_B.diancifa21 = 0.0;
      aaa_B.suoding = 0.0;
      aaa_B.jiesuo = 0.0;
      aaa_B.xuansong = 0.0;
      aaa_B.xuanjin = 0.0;
      aaa_B.bililiuliangfa18_1 = 0.0;
      aaa_B.bililiuliangfa18_2 = 0.0;
      aaa_B.bililiuliangfa18_3 = 0.0;
      aaa_B.bililiuliangfa18_4 = 0.0;
      aaa_B.kaiguangaifa = 0.0;
      aaa_DW.jinjichuli_MODE = true;
    }

    /* Chart: '<S19>/jinjichuli' */
    /* Gateway: jinjichuli/jinjichuli */
    aaa_DW.sfEvent = aaa_CALL_EVENT_n;
    if (aaa_DW.temporalCounter_i1 < 511U) {
      aaa_DW.temporalCounter_i1++;
    }

    /* During: jinjichuli/jinjichuli */
    if (aaa_DW.is_active_c2_aaa == 0U) {
      /* Entry: jinjichuli/jinjichuli */
      aaa_DW.is_active_c2_aaa = 1U;

      /* Entry Internal: jinjichuli/jinjichuli */
      /* Transition: '<S54>:57' */
      aaa_DW.is_c2_aaa = aaa_IN_off1_n;
    } else {
      switch (aaa_DW.is_c2_aaa) {
       case aaa_IN_MANUAL:
        aaa_MANUAL();
        break;

       case aaa_IN_end:
        /* During 'end': '<S54>:43' */
        break;

       case aaa_IN_off1_n:
        /* During 'off1': '<S54>:2' */
        if (aaa_B.DataTypeConversion3 == 1.0) {
          /* Transition: '<S54>:56' */
          aaa_DW.is_c2_aaa = aaa_IN_on1_n;
          aaa_DW.temporalCounter_i1 = 0U;

          /* Entry 'on1': '<S54>:1' */
          aaa_B.diancifa11_1 = 0.0;
          aaa_B.diancifa11_2 = 0.0;
          aaa_B.diancifa11_5 = 0.0;
          aaa_B.diancifa20 = 0.0;
          aaa_B.diancifa16_1 = 0.0;
          aaa_B.diancifa3 = 0.0;
          aaa_B.diancifa21 = 0.0;
          aaa_B.xuansong = 0.0;
          aaa_B.xuanjin = 0.0;
          aaa_B.suoding = 0.0;
          aaa_B.jiesuo = 0.0;
          aaa_B.bililiuliangfa18_1 = 0.0;
          aaa_B.bililiuliangfa18_2 = 0.0;
          aaa_B.bililiuliangfa18_3 = 0.0;
          aaa_B.bililiuliangfa18_4 = 0.0;
          aaa_B.kaiguangaifa = 0.0;
        }
        break;

       default:
        /* During 'on1': '<S54>:1' */
        if (aaa_DW.temporalCounter_i1 >= 500) {
          /* Transition: '<S54>:97' */
          aaa_DW.is_c2_aaa = aaa_IN_MANUAL;

          /* Entry Internal 'MANUAL': '<S54>:3' */
          aaa_DW.is_active_fa4_4 = 1U;

          /* Entry Internal 'fa4_4': '<S54>:4' */
          /* Transition: '<S54>:58' */
          aaa_DW.is_fa4_4 = aaa_IN_A;

          /* Entry 'A': '<S54>:8' */
          aaa_B.diancifa20 = 0.0;
          aaa_DW.is_active_fa4_2 = 1U;

          /* Entry Internal 'fa4_2': '<S54>:5' */
          /* Transition: '<S54>:59' */
          aaa_DW.is_fa4_2 = aaa_IN_A;

          /* Entry 'A': '<S54>:9' */
          aaa_B.diancifa11_2 = 0.0;
          aaa_DW.is_active_fa4_3 = 1U;

          /* Entry Internal 'fa4_3': '<S54>:6' */
          /* Transition: '<S54>:60' */
          aaa_DW.is_fa4_3 = aaa_IN_A;

          /* Entry 'A': '<S54>:10' */
          aaa_B.diancifa11_5 = 0.0;
          aaa_DW.is_active_fa4_1 = 1U;

          /* Entry Internal 'fa4_1': '<S54>:7' */
          /* Transition: '<S54>:61' */
          aaa_DW.is_fa4_1 = aaa_IN_A;

          /* Entry 'A': '<S54>:11' */
          aaa_B.diancifa11_1 = 0.0;
          aaa_DW.is_active_fa4_5 = 1U;

          /* Entry Internal 'fa4_5': '<S54>:16' */
          /* Transition: '<S54>:70' */
          aaa_DW.is_fa4_5 = aaa_IN_A;

          /* Entry 'A': '<S54>:20' */
          aaa_B.diancifa16_1 = 0.0;
          aaa_DW.is_active_fa4_6 = 1U;

          /* Entry Internal 'fa4_6': '<S54>:17' */
          /* Transition: '<S54>:71' */
          aaa_DW.is_fa4_6 = aaa_IN_A;

          /* Entry 'A': '<S54>:21' */
          aaa_B.diancifa3 = 0.0;
          aaa_DW.is_active_fa4_8 = 1U;

          /* Entry Internal 'fa4_8': '<S54>:18' */
          /* Transition: '<S54>:72' */
          aaa_DW.is_fa4_8 = aaa_IN_A;

          /* Entry 'A': '<S54>:22' */
          aaa_B.xuansong = 0.0;
          aaa_DW.is_active_fa4_7 = 1U;

          /* Entry Internal 'fa4_7': '<S54>:19' */
          /* Transition: '<S54>:73' */
          aaa_DW.is_fa4_7 = aaa_IN_A;

          /* Entry 'A': '<S54>:23' */
          aaa_B.diancifa21 = 0.0;
          aaa_DW.is_active_fa4_9 = 1U;

          /* Entry Internal 'fa4_9': '<S54>:28' */
          /* Transition: '<S54>:82' */
          aaa_DW.is_fa4_9 = aaa_IN_A;

          /* Entry 'A': '<S54>:32' */
          aaa_B.xuanjin = 0.0;
          aaa_DW.is_active_fa4_10 = 1U;

          /* Entry Internal 'fa4_10': '<S54>:29' */
          /* Transition: '<S54>:83' */
          aaa_DW.is_fa4_10 = aaa_IN_A;

          /* Entry 'A': '<S54>:33' */
          aaa_B.suoding = 0.0;
          aaa_DW.is_active_fa4_12 = 1U;

          /* Entry Internal 'fa4_12': '<S54>:30' */
          /* Transition: '<S54>:84' */
          aaa_DW.is_fa4_12 = aaa_IN_A;

          /* Entry 'A': '<S54>:34' */
          aaa_B.bililiuliangfa18_1 = 0.0;
          aaa_DW.is_active_fa4_11 = 1U;

          /* Entry Internal 'fa4_11': '<S54>:31' */
          /* Transition: '<S54>:85' */
          aaa_DW.is_fa4_11 = aaa_IN_A;

          /* Entry 'A': '<S54>:35' */
          aaa_B.jiesuo = 0.0;
          aaa_DW.is_active_fa4_13 = 1U;

          /* Entry Internal 'fa4_13': '<S54>:40' */
          /* Transition: '<S54>:94' */
          aaa_DW.is_fa4_13 = aaa_IN_A;

          /* Entry 'A': '<S54>:41' */
          aaa_B.bililiuliangfa18_2 = 0.0;
          aaa_DW.is_active_kiagai = 1U;

          /* Entry Internal 'kiagai': '<S54>:44' */
          /* Transition: '<S54>:101' */
          aaa_DW.is_kiagai = aaa_IN_A;

          /* Entry 'A': '<S54>:45' */
          aaa_B.bililiuliangfa18_3 = 0.0;
          aaa_DW.is_active_yajin = 1U;

          /* Entry Internal 'yajin': '<S54>:50' */
          /* Transition: '<S54>:108' */
          aaa_DW.is_yajin = aaa_IN_A;

          /* Entry 'A': '<S54>:51' */
          aaa_B.bililiuliangfa18_4 = 0.0;
          aaa_DW.is_active_kaigai = 1U;

          /* Entry Internal 'kaigai': '<S54>:173' */
          /* Transition: '<S54>:174' */
          aaa_DW.is_kaigai = aaa_IN_A;

          /* Entry 'A': '<S54>:177' */
          aaa_B.kaiguangaifa = 0.0;
        }
        break;
      }
    }

    /* End of Chart: '<S19>/jinjichuli' */
    srUpdateBC(aaa_DW.jinjichuli_SubsysRanBC);
  } else {
    if (aaa_DW.jinjichuli_MODE) {
      aaa_DW.jinjichuli_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<Root>/jinjichuli' */

  /* DataTypeConversion: '<Root>/Data Type Conversion4' incorporates:
   *  Constant: '<Root>/qiehuan'
   */
  aaa_B.DataTypeConversion4 = aaa_P.qiehuan_Value;

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
        memcpy( (&aaa_B.yalichuanganqi3402_o1), p_data, 8);
      }

      flags = saveAndDisableInterrupts();
      stat = CANPC_read_rcv_data_mbx( 1, 6, p_data, &time );
      restoreInterrupts(flags);
      if (stat > 0 || stat == -1 || stat == -2) {
        memcpy( (&aaa_B.yalichuanganqi3402_o2), p_data, 8);
      }
    }
  }

  /* Bit Unpacking: <S17>/CAN bit-unpacking 7 */
  {
    const uint32_T *y = (const uint32_T *)&aaa_B.yalichuanganqi3402_o1;

    /* Output Port 1 */
    aaa_B.CANbitunpacking7_o1 = (uint16_T)
      (y[0] & 0xffff);

    /* Output Port 2 */
    aaa_B.CANbitunpacking7_o2 = (uint16_T)
      ((y[0] & (0xffff << 16)) >> 16);

    /* Output Port 3 */
    aaa_B.CANbitunpacking7_o3 = (uint16_T)
      (y[1] & 0xffff);

    /* Output Port 4 */
    aaa_B.CANbitunpacking7_o4 = (uint16_T)
      ((y[1] & (0xffff << 16)) >> 16);
  }

  /* DataTypeConversion: '<S17>/Data Type Conversion49' */
  aaa_B.DataTypeConversion49 = aaa_B.CANbitunpacking7_o1;

  /* Lookup_n-D: '<S17>/1-D Lookup Table1' */
  aaa_B.uDLookupTable1 = look1_binlxpw(aaa_B.DataTypeConversion49,
    aaa_P.uDLookupTable1_bp01Data, aaa_P.uDLookupTable1_tableData, 1U);

  /* RelationalOperator: '<S47>/Compare' incorporates:
   *  Constant: '<S47>/Constant'
   */
  aaa_B.Compare = (aaa_B.uDLookupTable1 >= aaa_P.CompareToConstant1_const);

  /* DataTypeConversion: '<S17>/Data Type Conversion50' */
  aaa_B.DataTypeConversion50 = aaa_B.CANbitunpacking7_o2;

  /* Lookup_n-D: '<S17>/1-D Lookup Table2' */
  aaa_B.uDLookupTable2 = look1_binlxpw(aaa_B.DataTypeConversion50,
    aaa_P.uDLookupTable2_bp01Data, aaa_P.uDLookupTable2_tableData, 1U);

  /* RelationalOperator: '<S49>/Compare' incorporates:
   *  Constant: '<S49>/Constant'
   */
  aaa_B.Compare_l = (aaa_B.uDLookupTable2 >= aaa_P.CompareToConstant3_const);

  /* DataTypeConversion: '<S17>/Data Type Conversion51' */
  aaa_B.DataTypeConversion51 = aaa_B.CANbitunpacking7_o3;

  /* Lookup_n-D: '<S17>/1-D Lookup Table3' */
  aaa_B.uDLookupTable3 = look1_binlxpw(aaa_B.DataTypeConversion51,
    aaa_P.uDLookupTable3_bp01Data, aaa_P.uDLookupTable3_tableData, 1U);

  /* RelationalOperator: '<S50>/Compare' incorporates:
   *  Constant: '<S50>/Constant'
   */
  aaa_B.Compare_i = (aaa_B.uDLookupTable3 >= aaa_P.CompareToConstant5_const);

  /* DataTypeConversion: '<S17>/Data Type Conversion52' */
  aaa_B.DataTypeConversion52 = aaa_B.CANbitunpacking7_o4;

  /* Lookup_n-D: '<S17>/1-D Lookup Table4' */
  aaa_B.uDLookupTable4 = look1_binlxpw(aaa_B.DataTypeConversion52,
    aaa_P.uDLookupTable4_bp01Data, aaa_P.uDLookupTable4_tableData, 1U);

  /* RelationalOperator: '<S51>/Compare' incorporates:
   *  Constant: '<S51>/Constant'
   */
  aaa_B.Compare_h = (aaa_B.uDLookupTable4 >= aaa_P.CompareToConstant7_const);

  /* Bit Unpacking: <S17>/CAN bit-unpacking 6 */
  {
    const uint32_T *y = (const uint32_T *)&aaa_B.yalichuanganqi3402_o2;

    /* Output Port 1 */
    aaa_B.CANbitunpacking6_o1 = (uint16_T)
      (y[0] & 0xffff);

    /* Output Port 2 */
    aaa_B.CANbitunpacking6_o2 = (uint16_T)
      ((y[0] & (0xffff << 16)) >> 16);
  }

  /* DataTypeConversion: '<S17>/Data Type Conversion53' */
  aaa_B.DataTypeConversion53 = aaa_B.CANbitunpacking6_o1;

  /* Lookup_n-D: '<S17>/1-D Lookup Table5' */
  aaa_B.uDLookupTable5 = look1_binlxpw(aaa_B.DataTypeConversion53,
    aaa_P.uDLookupTable5_bp01Data, aaa_P.uDLookupTable5_tableData, 1U);

  /* RelationalOperator: '<S52>/Compare' incorporates:
   *  Constant: '<S52>/Constant'
   */
  aaa_B.Compare_lr = (aaa_B.uDLookupTable5 >= aaa_P.CompareToConstant9_const);

  /* DataTypeConversion: '<S17>/Data Type Conversion54' */
  aaa_B.DataTypeConversion54 = aaa_B.CANbitunpacking6_o2;

  /* Lookup_n-D: '<S17>/1-D Lookup Table6' */
  aaa_B.uDLookupTable6 = look1_binlxpw(aaa_B.DataTypeConversion54,
    aaa_P.uDLookupTable6_bp01Data, aaa_P.uDLookupTable6_tableData, 1U);

  /* RelationalOperator: '<S48>/Compare' incorporates:
   *  Constant: '<S48>/Constant'
   */
  aaa_B.Compare_o = (aaa_B.uDLookupTable6 >= aaa_P.CompareToConstant11_const);

  /* Logic: '<S46>/Logical Operator' */
  aaa_B.LogicalOperator = (aaa_B.Compare || aaa_B.Compare_l || aaa_B.Compare_i ||
    aaa_B.Compare_h || aaa_B.Compare_lr || aaa_B.Compare_o);

  /* Logic: '<Root>/Logical Operator4' incorporates:
   *  Constant: '<Root>/Constant2'
   */
  aaa_B.LogicalOperator4 = (aaa_P.Constant2_Value_p != 0.0) ^
    aaa_B.LogicalOperator;

  /* Logic: '<Root>/Logical Operator3' incorporates:
   *  Constant: '<Root>/kaishi'
   */
  aaa_B.LogicalOperator3 = ((aaa_P.kaishi_Value != 0.0) &&
    aaa_B.LogicalOperator4);

  /* DataTypeConversion: '<Root>/Data Type Conversion6' */
  aaa_B.DataTypeConversion6 = aaa_B.LogicalOperator3;

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
        memcpy( (&aaa_B.tonggai1808Receive), p_data, 8);
      }
    }
  }

  /* Bit Unpacking: <S17>/CAN bit-unpacking 2 */
  {
    const uint32_T *y = (const uint32_T *)&aaa_B.tonggai1808Receive;

    /* Output Port 1 */
    aaa_B.CANbitunpacking2_o1 = (boolean_T)
      (y[0] & 0x1);

    /* Output Port 2 */
    aaa_B.CANbitunpacking2_o2 = (boolean_T)
      ((y[0] & (0x1 << 1)) >> 1);

    /* Output Port 3 */
    aaa_B.CANbitunpacking2_o3 = (boolean_T)
      ((y[0] & (0x1 << 2)) >> 2);

    /* Output Port 4 */
    aaa_B.CANbitunpacking2_o4 = (boolean_T)
      ((y[0] & (0x1 << 3)) >> 3);

    /* Output Port 5 */
    aaa_B.CANbitunpacking2_o5 = (boolean_T)
      ((y[0] & (0x1 << 4)) >> 4);

    /* Output Port 6 */
    aaa_B.CANbitunpacking2_o6 = (boolean_T)
      ((y[0] & (0x1 << 5)) >> 5);

    /* Output Port 7 */
    aaa_B.CANbitunpacking2_o7 = (boolean_T)
      ((y[0] & (0x1 << 6)) >> 6);

    /* Output Port 8 */
    aaa_B.CANbitunpacking2_o8 = (boolean_T)
      ((y[0] & (0x1 << 7)) >> 7);

    /* Output Port 9 */
    aaa_B.CANbitunpacking2_o9 = (boolean_T)
      ((y[0] & (0x1 << 8)) >> 8);

    /* Output Port 10 */
    aaa_B.CANbitunpacking2_o10 = (boolean_T)
      ((y[0] & (0x1 << 9)) >> 9);

    /* Output Port 11 */
    aaa_B.CANbitunpacking2_o11 = (boolean_T)
      ((y[0] & (0x1 << 10)) >> 10);

    /* Output Port 12 */
    aaa_B.CANbitunpacking2_o12 = (boolean_T)
      ((y[0] & (0x1 << 11)) >> 11);

    /* Output Port 13 */
    aaa_B.CANbitunpacking2_o13 = (boolean_T)
      ((y[0] & (0x1 << 12)) >> 12);

    /* Output Port 14 */
    aaa_B.CANbitunpacking2_o14 = (boolean_T)
      ((y[0] & (0x1 << 13)) >> 13);

    /* Output Port 15 */
    aaa_B.CANbitunpacking2_o15 = (boolean_T)
      ((y[0] & (0x1 << 14)) >> 14);

    /* Output Port 16 */
    aaa_B.CANbitunpacking2_o16 = (boolean_T)
      ((y[0] & (0x1 << 15)) >> 15);
  }

  /* Logic: '<S17>/Logical Operator1' */
  aaa_B.LogicalOperator1[0] = !aaa_B.CANbitunpacking2_o1;
  aaa_B.LogicalOperator1[1] = !aaa_B.CANbitunpacking2_o2;
  aaa_B.LogicalOperator1[2] = !aaa_B.CANbitunpacking2_o3;
  aaa_B.LogicalOperator1[3] = !aaa_B.CANbitunpacking2_o4;
  aaa_B.LogicalOperator1[4] = !aaa_B.CANbitunpacking2_o5;
  aaa_B.LogicalOperator1[5] = !aaa_B.CANbitunpacking2_o6;
  aaa_B.LogicalOperator1[6] = !aaa_B.CANbitunpacking2_o7;
  aaa_B.LogicalOperator1[7] = !aaa_B.CANbitunpacking2_o8;
  aaa_B.LogicalOperator1[8] = !aaa_B.CANbitunpacking2_o9;
  aaa_B.LogicalOperator1[9] = !aaa_B.CANbitunpacking2_o10;
  aaa_B.LogicalOperator1[10] = !aaa_B.CANbitunpacking2_o11;
  aaa_B.LogicalOperator1[11] = !aaa_B.CANbitunpacking2_o12;
  aaa_B.LogicalOperator1[12] = !aaa_B.CANbitunpacking2_o13;
  aaa_B.LogicalOperator1[13] = !aaa_B.CANbitunpacking2_o14;
  aaa_B.LogicalOperator1[14] = !aaa_B.CANbitunpacking2_o15;
  aaa_B.LogicalOperator1[15] = !aaa_B.CANbitunpacking2_o16;

  /* Step: '<S17>/Step' */
  u0 = aaa_M->Timing.t[0];
  if (u0 < aaa_P.Step_Time) {
    aaa_B.Step = aaa_P.Step_Y0;
  } else {
    aaa_B.Step = aaa_P.Step_YFinal;
  }

  /* End of Step: '<S17>/Step' */

  /* Product: '<S17>/Product' */
  for (i = 0; i < 16; i++) {
    aaa_B.Product[i] = (real_T)aaa_B.LogicalOperator1[i] * aaa_B.Step;
  }

  /* End of Product: '<S17>/Product' */

  /* DataTypeConversion: '<Root>/Data Type Conversion24' */
  memcpy(&aaa_B.DataTypeConversion24[0], &aaa_B.Product[4], 12U * sizeof(real_T));

  /* Logic: '<Root>/Logical Operator1' */
  aaa_B.LogicalOperator1_p = ((aaa_B.DataTypeConversion24[4] != 0.0) &&
    (aaa_B.DataTypeConversion24[5] != 0.0));

  /* Logic: '<Root>/Logical Operator2' incorporates:
   *  Constant: '<Root>/SCzhushui'
   */
  aaa_B.LogicalOperator2 = ((aaa_P.SCzhushui_Value != 0.0) &&
    aaa_B.LogicalOperator1_p);

  /* DataTypeConversion: '<Root>/Data Type Conversion8' */
  aaa_B.DataTypeConversion8 = aaa_B.LogicalOperator2;

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
        memcpy( (&aaa_B.liuliangji), p_data, 8);
      }

      flags = saveAndDisableInterrupts();
      stat = CANPC_read_rcv_data_mbx( 1, 7, p_data, &time );
      restoreInterrupts(flags);
      if (stat > 0 || stat == -1 || stat == -2) {
        memcpy( (&aaa_B.liuliangji_fuqiuyeweiji3402_o2), p_data, 8);
      }
    }
  }

  /* Bit Unpacking: <S17>/CAN bit-unpacking 8 */
  {
    const uint32_T *y = (const uint32_T *)&aaa_B.liuliangji_fuqiuyeweiji3402_o2;

    /* Output Port 1 */
    aaa_B.CANbitunpacking8 = (boolean_T)
      (y[0] & 0x1);
  }

  /* Logic: '<S17>/Logical Operator' */
  aaa_B.LogicalOperator_e = !aaa_B.CANbitunpacking8;

  /* Step: '<S17>/Step1' */
  u0 = aaa_M->Timing.t[0];
  if (u0 < aaa_P.Step1_Time) {
    aaa_B.Step1 = aaa_P.Step1_Y0;
  } else {
    aaa_B.Step1 = aaa_P.Step1_YFinal;
  }

  /* End of Step: '<S17>/Step1' */

  /* Product: '<S17>/Product1' */
  aaa_B.Product1 = (real_T)aaa_B.LogicalOperator_e * aaa_B.Step1;

  /* DataTypeConversion: '<Root>/Data Type Conversion28' */
  aaa_B.DataTypeConversion28 = aaa_B.Product1;

  /* Logic: '<Root>/Logical Operator7' incorporates:
   *  Constant: '<Root>/SCjiaya'
   */
  aaa_B.LogicalOperator7 = ((aaa_P.SCjiaya_Value != 0.0) &&
    aaa_B.LogicalOperator1_p);

  /* DataTypeConversion: '<Root>/Data Type Conversion9' */
  aaa_B.DataTypeConversion9 = aaa_B.LogicalOperator7;

  /* Logic: '<Root>/Logical Operator8' incorporates:
   *  Constant: '<Root>/SXQjunya'
   */
  aaa_B.LogicalOperator8 = ((aaa_P.SXQjunya_Value != 0.0) &&
    aaa_B.LogicalOperator1_p);

  /* DataTypeConversion: '<Root>/Data Type Conversion11' */
  aaa_B.DataTypeConversion11 = aaa_B.LogicalOperator8;

  /* Logic: '<Root>/Logical Operator9' incorporates:
   *  Constant: '<Root>/SXQxieya'
   */
  aaa_B.LogicalOperator9 = ((aaa_P.SXQxieya_Value != 0.0) &&
    aaa_B.LogicalOperator1_p);

  /* DataTypeConversion: '<Root>/Data Type Conversion12' */
  aaa_B.DataTypeConversion12 = aaa_B.LogicalOperator9;

  /* DataTypeConversion: '<Root>/Data Type Conversion27' */
  aaa_B.DataTypeConversion27[0] = aaa_B.uDLookupTable1;
  aaa_B.DataTypeConversion27[1] = aaa_B.uDLookupTable2;
  aaa_B.DataTypeConversion27[2] = aaa_B.uDLookupTable3;
  aaa_B.DataTypeConversion27[3] = aaa_B.uDLookupTable4;
  aaa_B.DataTypeConversion27[4] = aaa_B.uDLookupTable5;
  aaa_B.DataTypeConversion27[5] = aaa_B.uDLookupTable6;

  /* Constant: '<Root>/Constant' */
  aaa_B.u = aaa_P.Constant_Value_fv;

  /* Bit Unpacking: <S17>/CAN bit-unpacking 5 */
  {
    const uint32_T *y = (const uint32_T *)&aaa_B.liuliangji;

    /* Output Port 1 */
    aaa_B.CANbitunpacking5_o1 = (uint16_T)
      (y[0] & 0xffff);

    /* Output Port 2 */
    aaa_B.CANbitunpacking5_o2 = (uint16_T)
      ((y[0] & (0xffff << 16)) >> 16);

    /* Output Port 3 */
    aaa_B.CANbitunpacking5_o3 = (uint16_T)
      (y[1] & 0xffff);
  }

  /* Sum: '<Root>/Add' */
  aaa_B.Add_f = (uint16_T)((uint32_T)aaa_B.CANbitunpacking5_o1 +
    aaa_B.CANbitunpacking5_o2);

  /* RelationalOperator: '<S3>/Compare' incorporates:
   *  Constant: '<S3>/Constant'
   */
  aaa_B.Compare_iu = (aaa_B.Add_f <= aaa_P.CompareToConstant2_const);

  /* RelationalOperator: '<S4>/Compare' incorporates:
   *  Constant: '<S4>/Constant'
   */
  aaa_B.Compare_f = (aaa_B.Add_f >= aaa_P.CompareToConstant3_const_p);

  /* Logic: '<Root>/Logical Operator10' */
  aaa_B.LogicalOperator10 = (aaa_B.Compare_iu && aaa_B.Compare_f);

  /* DataTypeConversion: '<Root>/Data Type Conversion1' */
  aaa_B.DataTypeConversion1 = aaa_B.LogicalOperator10;

  /* Constant: '<Root>/Constant8' */
  aaa_B.u_p = aaa_P.Constant8_Value_i;

  /* Constant: '<Root>/Constant7' */
  aaa_B.u_l = aaa_P.Constant7_Value_ab;

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
        memcpy( (&aaa_B.kaiguangaiweiyi3402), p_data, 8);
      }
    }
  }

  /* Bit Unpacking: <S17>/CAN bit-unpacking 4 */
  {
    const uint32_T *y = (const uint32_T *)&aaa_B.kaiguangaiweiyi3402;

    /* Output Port 1 */
    aaa_B.CANbitunpacking4_o1 = (uint16_T)
      (y[0] & 0xffff);

    /* Output Port 2 */
    aaa_B.CANbitunpacking4_o2 = (uint16_T)
      ((y[0] & (0xffff << 16)) >> 16);
  }

  /* DataTypeConversion: '<S17>/Data Type Conversion48' */
  aaa_B.DataTypeConversion48 = aaa_B.CANbitunpacking4_o1;

  /* Lookup_n-D: '<S17>/1-D Lookup Table' */
  aaa_B.uDLookupTable = look1_binlxpw(aaa_B.DataTypeConversion48,
    aaa_P.uDLookupTable_bp01Data, aaa_P.uDLookupTable_tableData, 1U);

  /* DataTypeConversion: '<Root>/Data Type Conversion26' */
  aaa_B.DataTypeConversion26 = aaa_B.uDLookupTable;

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
        memcpy( (&aaa_B.tonggai3402Receive_o1), p_data, 8);
      }

      flags = saveAndDisableInterrupts();
      stat = CANPC_read_rcv_data_mbx( 1, 5, p_data, &time );
      restoreInterrupts(flags);
      if (stat > 0 || stat == -1 || stat == -2) {
        memcpy( (&aaa_B.tonggai3402Receive_o2), p_data, 8);
      }
    }
  }

  /* Bit Unpacking: <S17>/CAN bit-unpacking 3 */
  {
    const uint32_T *y = (const uint32_T *)&aaa_B.tonggai3402Receive_o1;

    /* Output Port 1 */
    aaa_B.CANbitunpacking3_o1 = (uint16_T)
      (y[0] & 0xffff);

    /* Output Port 2 */
    aaa_B.CANbitunpacking3_o2 = (uint16_T)
      ((y[0] & (0xffff << 16)) >> 16);

    /* Output Port 3 */
    aaa_B.CANbitunpacking3_o3 = (uint16_T)
      (y[1] & 0xffff);

    /* Output Port 4 */
    aaa_B.CANbitunpacking3_o4 = (uint16_T)
      ((y[1] & (0xffff << 16)) >> 16);
  }

  /* Bit Unpacking: <S17>/CAN bit-unpacking 9 */
  {
    const uint32_T *y = (const uint32_T *)&aaa_B.tonggai3402Receive_o2;

    /* Output Port 1 */
    aaa_B.CANbitunpacking9_o1 = (uint16_T)
      (y[0] & 0xffff);

    /* Output Port 2 */
    aaa_B.CANbitunpacking9_o2 = (uint16_T)
      ((y[0] & (0xffff << 16)) >> 16);

    /* Output Port 3 */
    aaa_B.CANbitunpacking9_o3 = (uint16_T)
      (y[1] & 0xffff);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion25' */
  aaa_B.DataTypeConversion25[0] = aaa_B.CANbitunpacking3_o1;
  aaa_B.DataTypeConversion25[1] = aaa_B.CANbitunpacking3_o2;
  aaa_B.DataTypeConversion25[2] = aaa_B.CANbitunpacking3_o3;
  aaa_B.DataTypeConversion25[3] = aaa_B.CANbitunpacking3_o4;
  aaa_B.DataTypeConversion25[4] = aaa_B.CANbitunpacking9_o1;
  aaa_B.DataTypeConversion25[5] = aaa_B.CANbitunpacking9_o2;
  aaa_B.DataTypeConversion25[6] = aaa_B.CANbitunpacking9_o3;

  /* DataTypeConversion: '<Root>/Data Type Conversion13' */
  aaa_B.DataTypeConversion13 = aaa_B.jiting;

  /* Memory: '<Root>/Memory' */
  aaa_B.Memory = aaa_DW.Memory_PreviousInput;

  /* Chart: '<S20>/Chart' */
  aaa_Chart1(aaa_B.Memory, &aaa_B.sf_Chart, &aaa_DW.sf_Chart);

  /* Saturate: '<S20>/Saturation' */
  u0 = aaa_B.sf_Chart.t;
  tmp = aaa_P.Saturation_LowerSat;
  tmp_0 = aaa_P.Saturation_UpperSat;
  if (u0 > tmp_0) {
    aaa_B.Saturation = tmp_0;
  } else if (u0 < tmp) {
    aaa_B.Saturation = tmp;
  } else {
    aaa_B.Saturation = u0;
  }

  /* End of Saturate: '<S20>/Saturation' */

  /* Fcn: '<S20>/Fcn' */
  tmp = aaa_B.Saturation;
  u0 = rt_powd_snf(tmp, 16.0);
  tmp_0 = aaa_B.Saturation;
  tmp = rt_powd_snf(tmp_0, 15.0);
  tmp_1 = aaa_B.Saturation;
  tmp_0 = rt_powd_snf(tmp_1, 14.0);
  tmp_2 = aaa_B.Saturation;
  tmp_1 = rt_powd_snf(tmp_2, 13.0);
  tmp_3 = aaa_B.Saturation;
  tmp_2 = rt_powd_snf(tmp_3, 12.0);
  tmp_4 = aaa_B.Saturation;
  tmp_3 = rt_powd_snf(tmp_4, 11.0);
  tmp_5 = aaa_B.Saturation;
  tmp_4 = rt_powd_snf(tmp_5, 10.0);
  tmp_6 = aaa_B.Saturation;
  tmp_5 = rt_powd_snf(tmp_6, 9.0);
  tmp_7 = aaa_B.Saturation;
  tmp_6 = rt_powd_snf(tmp_7, 8.0);
  tmp_8 = aaa_B.Saturation;
  tmp_7 = rt_powd_snf(tmp_8, 7.0);
  tmp_9 = aaa_B.Saturation;
  tmp_8 = rt_powd_snf(tmp_9, 6.0);
  tmp_a = aaa_B.Saturation;
  tmp_9 = rt_powd_snf(tmp_a, 5.0);
  tmp_b = aaa_B.Saturation;
  tmp_a = rt_powd_snf(tmp_b, 4.0);
  tmp_c = aaa_B.Saturation;
  tmp_b = rt_powd_snf(tmp_c, 3.0);
  tmp_c = aaa_B.Saturation;
  tmp_c = rt_powd_snf(tmp_c, 2.0);
  aaa_B.Fcn = (((((((((((((((3.76012794303783e-12 * u0 - 3.77787151438439e-10 *
    tmp) + 1.7036671670252e-8 * tmp_0) - 4.53918294904343e-7 * tmp_1) +
    7.91595568148143e-6 * tmp_2) - 9.46991801150381e-5 * tmp_3) +
                        0.000795158956924619 * tmp_4) - 0.00475883386986616 *
                       tmp_5) + 0.0207391801532158 * tmp_6) - 0.0673081776269616
                     * tmp_7) + 0.155366359479885 * tmp_8) - 0.201490925155371 *
                   tmp_9) - 0.0768516231318135 * tmp_a) + 2.18034933328387 *
                 tmp_b) + 0.0584293012534094 * tmp_c) - 0.00654372848246011 *
               aaa_B.Saturation) + 20.0002376678902;

  /* Saturate: '<S20>/Saturation1' */
  u0 = aaa_B.Fcn;
  tmp = aaa_P.Saturation1_LowerSat;
  tmp_0 = aaa_P.Saturation1_UpperSat;
  if (u0 > tmp_0) {
    aaa_B.Saturation1 = tmp_0;
  } else if (u0 < tmp) {
    aaa_B.Saturation1 = tmp;
  } else {
    aaa_B.Saturation1 = u0;
  }

  /* End of Saturate: '<S20>/Saturation1' */

  /* Logic: '<Root>/Logical Operator11' */
  aaa_B.LogicalOperator11 = !(aaa_B.Memory != 0.0);

  /* Outputs for Enabled SubSystem: '<Root>/Subsystem3' */
  aaa_Subsystem3(aaa_B.LogicalOperator11, aaa_B.DataTypeConversion26,
                 &aaa_B.Subsystem3, &aaa_DW.Subsystem3, (P_Subsystem3_aaa_T *)
                 &aaa_P.Subsystem3);

  /* End of Outputs for SubSystem: '<Root>/Subsystem3' */

  /* Sum: '<S20>/Add' */
  aaa_B.Add = aaa_B.Saturation1 + aaa_B.Subsystem3.Add;

  /* DataTypeConversion: '<Root>/Data Type Conversion34' */
  aaa_B.DataTypeConversion34 = aaa_B.Add;

  /* Memory: '<Root>/Memory1' */
  aaa_B.Memory1 = aaa_DW.Memory1_PreviousInput;

  /* Chart: '<S18>/Chart1' */
  aaa_Chart1(aaa_B.Memory1, &aaa_B.sf_Chart1, &aaa_DW.sf_Chart1);

  /* Saturate: '<S18>/Saturation' */
  u0 = aaa_B.sf_Chart1.t;
  tmp = aaa_P.Saturation_LowerSat_m;
  tmp_0 = aaa_P.Saturation_UpperSat_i;
  if (u0 > tmp_0) {
    aaa_B.Saturation_m = tmp_0;
  } else if (u0 < tmp) {
    aaa_B.Saturation_m = tmp;
  } else {
    aaa_B.Saturation_m = u0;
  }

  /* End of Saturate: '<S18>/Saturation' */

  /* Fcn: '<S18>/Fcn' */
  tmp = aaa_B.Saturation_m;
  u0 = rt_powd_snf(tmp, 16.0);
  tmp_0 = aaa_B.Saturation_m;
  tmp = rt_powd_snf(tmp_0, 15.0);
  tmp_1 = aaa_B.Saturation_m;
  tmp_0 = rt_powd_snf(tmp_1, 14.0);
  tmp_2 = aaa_B.Saturation_m;
  tmp_1 = rt_powd_snf(tmp_2, 13.0);
  tmp_3 = aaa_B.Saturation_m;
  tmp_2 = rt_powd_snf(tmp_3, 12.0);
  tmp_4 = aaa_B.Saturation_m;
  tmp_3 = rt_powd_snf(tmp_4, 11.0);
  tmp_5 = aaa_B.Saturation_m;
  tmp_4 = rt_powd_snf(tmp_5, 10.0);
  tmp_6 = aaa_B.Saturation_m;
  tmp_5 = rt_powd_snf(tmp_6, 9.0);
  tmp_7 = aaa_B.Saturation_m;
  tmp_6 = rt_powd_snf(tmp_7, 8.0);
  tmp_8 = aaa_B.Saturation_m;
  tmp_7 = rt_powd_snf(tmp_8, 7.0);
  tmp_9 = aaa_B.Saturation_m;
  tmp_8 = rt_powd_snf(tmp_9, 6.0);
  tmp_a = aaa_B.Saturation_m;
  tmp_9 = rt_powd_snf(tmp_a, 5.0);
  tmp_b = aaa_B.Saturation_m;
  tmp_a = rt_powd_snf(tmp_b, 4.0);
  tmp_c = aaa_B.Saturation_m;
  tmp_b = rt_powd_snf(tmp_c, 3.0);
  tmp_c = aaa_B.Saturation_m;
  tmp_c = rt_powd_snf(tmp_c, 2.0);
  aaa_B.Fcn_l = (((((((((((((((3.76012963313985e-12 * u0 - 3.44037229998304e-10 *
    tmp) + 1.39996774652558e-8 * tmp_0) - 3.34309394387153e-7 * tmp_1) +
    5.2186051950651e-6 * tmp_2) - 5.63398801585665e-5 * tmp_3) +
    0.000435175092700704 * tmp_4) - 0.00244274561068785 * tmp_5) +
                        0.00982136561852038 * tmp_6) - 0.0269377658736148 *
                       tmp_7) + 0.0514170009108526 * tmp_8) - 0.103245210636221 *
                     tmp_9) + 0.431283025667506 * tmp_a) - 2.79148222601809 *
                   tmp_b) + 0.0172306812740196 * tmp_c) - 0.00241932536131526 *
                 aaa_B.Saturation_m) + 600.000082443648;

  /* Saturate: '<S18>/Saturation1' */
  u0 = aaa_B.Fcn_l;
  tmp = aaa_P.Saturation1_LowerSat_k;
  tmp_0 = aaa_P.Saturation1_UpperSat_f;
  if (u0 > tmp_0) {
    aaa_B.Saturation1_h = tmp_0;
  } else if (u0 < tmp) {
    aaa_B.Saturation1_h = tmp;
  } else {
    aaa_B.Saturation1_h = u0;
  }

  /* End of Saturate: '<S18>/Saturation1' */

  /* Logic: '<Root>/Logical Operator12' */
  aaa_B.LogicalOperator12 = !(aaa_B.Memory1 != 0.0);

  /* Outputs for Enabled SubSystem: '<Root>/Subsystem4' */
  aaa_Subsystem3(aaa_B.LogicalOperator12, aaa_B.DataTypeConversion26,
                 &aaa_B.Subsystem4, &aaa_DW.Subsystem4, (P_Subsystem3_aaa_T *)
                 &aaa_P.Subsystem4);

  /* End of Outputs for SubSystem: '<Root>/Subsystem4' */

  /* Sum: '<S18>/Add' */
  aaa_B.Add_o = aaa_B.Saturation1_h + aaa_B.Subsystem4.Add;

  /* DataTypeConversion: '<Root>/Data Type Conversion35' */
  aaa_B.DataTypeConversion35 = aaa_B.Add_o;

  /* DataTypeConversion: '<Root>/Data Type Conversion14' incorporates:
   *  Constant: '<Root>/zidongkaigai'
   */
  aaa_B.DataTypeConversion14 = aaa_P.zidongkaigai_Value;

  /* DataTypeConversion: '<Root>/Data Type Conversion15' incorporates:
   *  Constant: '<Root>/zidongguangai'
   */
  aaa_B.DataTypeConversion15 = aaa_P.zidongguangai_Value;

  /* Logic: '<S14>/Logical Operator3' */
  aaa_B.LogicalOperator3_o = !(aaa_B.DataTypeConversion4 != 0.0);

  /* Logic: '<S14>/Logical Operator2' */
  aaa_B.LogicalOperator2_j = !(aaa_B.DataTypeConversion3 != 0.0);

  /* Logic: '<S14>/Logical Operator' */
  aaa_B.LogicalOperator_n = (aaa_B.LogicalOperator3_o &&
    aaa_B.LogicalOperator2_j);

  /* DataTypeConversion: '<S14>/Data Type Conversion5' */
  aaa_B.DataTypeConversion5 = aaa_B.LogicalOperator_n;

  /* Outputs for Enabled SubSystem: '<S14>/zidong' incorporates:
   *  EnablePort: '<S26>/Enable'
   */
  if (aaa_B.DataTypeConversion5 > 0.0) {
    if (!aaa_DW.zidong_MODE) {
      aaa_DW.zidong_MODE = true;
    }
  } else {
    if (aaa_DW.zidong_MODE) {
      aaa_DW.zidong_MODE = false;
    }
  }

  if (aaa_DW.zidong_MODE) {
    /* Chart: '<S26>/Chart' */
    /* Gateway: Subsystem2/zidong/Chart */
    aaa_DW.sfEvent_d = aaa_CALL_EVENT_n;
    if (aaa_DW.temporalCounter_i1_e < 4095U) {
      aaa_DW.temporalCounter_i1_e++;
    }

    /* During: Subsystem2/zidong/Chart */
    if (aaa_DW.is_active_c1_aaa == 0U) {
      /* Entry: Subsystem2/zidong/Chart */
      aaa_DW.is_active_c1_aaa = 1U;

      /* Entry Internal: Subsystem2/zidong/Chart */
      /* Transition: '<S37>:42' */
      aaa_DW.is_c1_aaa = aaa_IN_start_i;
      aaa_enter_atomic_start_c();
    } else {
      switch (aaa_DW.is_c1_aaa) {
       case aaa_IN_off111:
        /* During 'off111': '<S37>:1174' */
        if ((aaa_B.DataTypeConversion6 == 0.0) && (aaa_B.DataTypeConversion13 ==
             0.0)) {
          /* Transition: '<S37>:1193' */
          aaa_DW.is_c1_aaa = aaa_IN_start_i;
          aaa_enter_atomic_start_c();
        }
        break;

       case aaa_IN_start_i:
        /* During 'start': '<S37>:27' */
        if (aaa_B.DataTypeConversion6 == 1.0) {
          /* Transition: '<S37>:1159' */
          aaa_DW.is_c1_aaa = aaa_IN_zidong;

          /* Entry Internal 'zidong': '<S37>:1170' */
          /* Transition: '<S37>:1190' */
          aaa_DW.is_zidong = aaa_IN_SCzhushui;

          /* Entry Internal 'SCzhushui': '<S37>:28' */
          /* Transition: '<S37>:29' */
          aaa_DW.is_SCzhushui = aaa_IN_off4_g;

          /* Entry 'off4': '<S37>:37' */
          aaa_B.diancifa16_1_c = 0.0;
          aaa_B.diancifa3_c = 0.0;
        }
        break;

       default:
        aaa_zidong();
        break;
      }
    }

    /* End of Chart: '<S26>/Chart' */

    /* Switch: '<S38>/Switch1' incorporates:
     *  Constant: '<S38>/Constant2'
     *  Constant: '<S38>/Constant3'
     */
    if (aaa_B.DataTypeConversion27[2] >= aaa_P.Switch1_Threshold_g) {
      aaa_B.Switch1_b = aaa_P.Constant2_Value_c;
    } else {
      aaa_B.Switch1_b = aaa_P.Constant3_Value_f;
    }

    /* End of Switch: '<S38>/Switch1' */

    /* Switch: '<S38>/Switch2' incorporates:
     *  Constant: '<S38>/Constant4'
     *  Constant: '<S38>/Constant5'
     */
    if (aaa_B.DataTypeConversion27[2] >= aaa_P.Switch2_Threshold_f) {
      aaa_B.Switch2_f = aaa_P.Constant4_Value_o;
    } else {
      aaa_B.Switch2_f = aaa_P.Constant5_Value_n;
    }

    /* End of Switch: '<S38>/Switch2' */

    /* Switch: '<S38>/Switch3' incorporates:
     *  Constant: '<S38>/Constant6'
     *  Constant: '<S38>/Constant7'
     */
    if (aaa_B.DataTypeConversion27[2] >= aaa_P.Switch3_Threshold_e) {
      aaa_B.Switch3_o = aaa_P.Constant6_Value_m;
    } else {
      aaa_B.Switch3_o = aaa_P.Constant7_Value_a;
    }

    /* End of Switch: '<S38>/Switch3' */

    /* Switch: '<S38>/Switch4' incorporates:
     *  Constant: '<S38>/Constant8'
     *  Constant: '<S38>/Constant9'
     */
    if (aaa_B.DataTypeConversion27[2] >= aaa_P.Switch4_Threshold_b) {
      aaa_B.Switch4_d = aaa_P.Constant8_Value_f;
    } else {
      aaa_B.Switch4_d = aaa_P.Constant9_Value_e;
    }

    /* End of Switch: '<S38>/Switch4' */

    /* Switch: '<S38>/Switch5' incorporates:
     *  Constant: '<S38>/Constant10'
     *  Constant: '<S38>/Constant11'
     */
    if (aaa_B.DataTypeConversion27[2] >= aaa_P.Switch5_Threshold_n) {
      aaa_B.Switch5_l = aaa_P.Constant10_Value_m;
    } else {
      aaa_B.Switch5_l = aaa_P.Constant11_Value_et;
    }

    /* End of Switch: '<S38>/Switch5' */

    /* Switch: '<S38>/Switch6' incorporates:
     *  Constant: '<S38>/Constant12'
     *  Constant: '<S38>/Constant13'
     */
    if (aaa_B.DataTypeConversion27[2] >= aaa_P.Switch6_Threshold_l) {
      aaa_B.Switch6_d = aaa_P.Constant12_Value_d;
    } else {
      aaa_B.Switch6_d = aaa_P.Constant13_Value_b;
    }

    /* End of Switch: '<S38>/Switch6' */

    /* Switch: '<S38>/Switch7' incorporates:
     *  Constant: '<S38>/Constant14'
     *  Constant: '<S38>/Constant15'
     */
    if (aaa_B.DataTypeConversion27[2] >= aaa_P.Switch7_Threshold_d) {
      aaa_B.Switch7_c = aaa_P.Constant14_Value_i;
    } else {
      aaa_B.Switch7_c = aaa_P.Constant15_Value_o;
    }

    /* End of Switch: '<S38>/Switch7' */

    /* Switch: '<S38>/Switch8' incorporates:
     *  Constant: '<S38>/Constant16'
     *  Constant: '<S38>/Constant17'
     */
    if (aaa_B.DataTypeConversion27[2] >= aaa_P.Switch8_Threshold_n) {
      aaa_B.Switch8_h = aaa_P.Constant16_Value_i;
    } else {
      aaa_B.Switch8_h = aaa_P.Constant17_Value_j;
    }

    /* End of Switch: '<S38>/Switch8' */

    /* Switch: '<S38>/Switch9' incorporates:
     *  Constant: '<S38>/Constant18'
     *  Constant: '<S38>/Constant19'
     */
    if (aaa_B.DataTypeConversion27[2] >= aaa_P.Switch9_Threshold_g) {
      aaa_B.Switch9_e = aaa_P.Constant18_Value_c;
    } else {
      aaa_B.Switch9_e = aaa_P.Constant19_Value_o;
    }

    /* End of Switch: '<S38>/Switch9' */

    /* Sum: '<S38>/Sum of Elements' incorporates:
     *  Constant: '<S38>/Constant1'
     */
    tmpForInput[0] = aaa_P.Constant1_Value_n;
    tmpForInput[1] = aaa_B.Switch1_b;
    tmpForInput[2] = aaa_B.Switch2_f;
    tmpForInput[3] = aaa_B.Switch3_o;
    tmpForInput[4] = aaa_B.Switch4_d;
    tmpForInput[5] = aaa_B.Switch5_l;
    tmpForInput[6] = aaa_B.Switch6_d;
    tmpForInput[7] = aaa_B.Switch7_c;
    tmpForInput[8] = aaa_B.Switch8_h;
    tmpForInput[9] = aaa_B.Switch9_e;
    u0 = tmpForInput[0];
    for (i = 0; i < 9; i++) {
      tmp_d = i + 1;
      u0 += tmpForInput[tmp_d];
    }

    aaa_B.SumofElements = u0;

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
    switch ((int32_T)aaa_B.SumofElements) {
     case 1:
      aaa_B.MultiportSwitch_l = aaa_P.Constant20_Value_d;
      break;

     case 2:
      aaa_B.MultiportSwitch_l = aaa_P.Constant21_Value_e;
      break;

     case 3:
      aaa_B.MultiportSwitch_l = aaa_P.Constant22_Value_oa;
      break;

     case 4:
      aaa_B.MultiportSwitch_l = aaa_P.Constant23_Value_i;
      break;

     case 5:
      aaa_B.MultiportSwitch_l = aaa_P.Constant24_Value_jx;
      break;

     case 6:
      aaa_B.MultiportSwitch_l = aaa_P.Constant25_Value_a;
      break;

     case 7:
      aaa_B.MultiportSwitch_l = aaa_P.Constant26_Value_g;
      break;

     case 8:
      aaa_B.MultiportSwitch_l = aaa_P.Constant27_Value_j;
      break;

     case 9:
      aaa_B.MultiportSwitch_l = aaa_P.Constant28_Value_j;
      break;

     default:
      aaa_B.MultiportSwitch_l = aaa_P.Constant29_Value_o;
      break;
    }

    /* End of MultiPortSwitch: '<S38>/Multiport Switch' */

    /* Product: '<S38>/Product' */
    aaa_B.Product_l = aaa_B.MultiportSwitch_l * aaa_B.bililiuliangfa18_2_l;

    /* Gain: '<S38>/Gain' */
    aaa_B.Gain_d = aaa_P.Gain_Gain_d * aaa_B.Product_l;

    /* Product: '<S38>/Product1' */
    aaa_B.Product1_g = aaa_B.MultiportSwitch_l * aaa_B.bililiuliangfa18_4_e;

    /* Gain: '<S38>/Gain1' */
    aaa_B.Gain1 = aaa_P.Gain1_Gain_m * aaa_B.Product1_g;

    /* Sum: '<S39>/Sum1' */
    aaa_B.Sum1 = aaa_B.DataTypeConversion35 - aaa_B.DataTypeConversion26;

    /* Gain: '<S39>/Gain1' */
    aaa_B.Gain1_e = aaa_P.Gain1_Gain_b * aaa_B.Sum1;

    /* Sum: '<S39>/Sum' */
    aaa_B.Sum = aaa_B.DataTypeConversion34 - aaa_B.DataTypeConversion26;

    /* Gain: '<S39>/Gain' */
    aaa_B.Gain_i = aaa_P.Gain_Gain_f * aaa_B.Sum;

    /* Product: '<S39>/Product' incorporates:
     *  Constant: '<S39>/Constant'
     */
    aaa_B.Product_b = aaa_B.guangaikaishi * aaa_P.Constant_Value_p;

    /* Sum: '<S39>/Add1' */
    aaa_B.Add1_g = aaa_B.kaigaikaishi + aaa_B.Product_b;

    /* MultiPortSwitch: '<S39>/Multiport Switch' incorporates:
     *  Constant: '<S39>/Constant1'
     */
    switch ((int32_T)aaa_B.Add1_g) {
     case 1:
      aaa_B.MultiportSwitch_le = aaa_B.Gain_i;
      break;

     case 2:
      aaa_B.MultiportSwitch_le = aaa_B.Gain1_e;
      break;

     default:
      aaa_B.MultiportSwitch_le = aaa_P.Constant1_Value_ok;
      break;
    }

    /* End of MultiPortSwitch: '<S39>/Multiport Switch' */

    /* Switch: '<S41>/Switch1' incorporates:
     *  Constant: '<S41>/Constant2'
     *  Constant: '<S41>/Constant3'
     */
    if (aaa_B.DataTypeConversion27[4] >= aaa_P.Switch1_Threshold_o) {
      aaa_B.Switch1_i = aaa_P.Constant2_Value_h;
    } else {
      aaa_B.Switch1_i = aaa_P.Constant3_Value_j;
    }

    /* End of Switch: '<S41>/Switch1' */

    /* Switch: '<S41>/Switch2' incorporates:
     *  Constant: '<S41>/Constant4'
     *  Constant: '<S41>/Constant5'
     */
    if (aaa_B.DataTypeConversion27[4] >= aaa_P.Switch2_Threshold_fg) {
      aaa_B.Switch2_h = aaa_P.Constant4_Value_bs;
    } else {
      aaa_B.Switch2_h = aaa_P.Constant5_Value_mz;
    }

    /* End of Switch: '<S41>/Switch2' */

    /* Switch: '<S41>/Switch3' incorporates:
     *  Constant: '<S41>/Constant6'
     *  Constant: '<S41>/Constant7'
     */
    if (aaa_B.DataTypeConversion27[4] >= aaa_P.Switch3_Threshold_d) {
      aaa_B.Switch3_a = aaa_P.Constant6_Value_f;
    } else {
      aaa_B.Switch3_a = aaa_P.Constant7_Value_o;
    }

    /* End of Switch: '<S41>/Switch3' */

    /* Switch: '<S41>/Switch4' incorporates:
     *  Constant: '<S41>/Constant8'
     *  Constant: '<S41>/Constant9'
     */
    if (aaa_B.DataTypeConversion27[4] >= aaa_P.Switch4_Threshold_n) {
      aaa_B.Switch4_p = aaa_P.Constant8_Value_m;
    } else {
      aaa_B.Switch4_p = aaa_P.Constant9_Value_d;
    }

    /* End of Switch: '<S41>/Switch4' */

    /* Switch: '<S41>/Switch5' incorporates:
     *  Constant: '<S41>/Constant10'
     *  Constant: '<S41>/Constant11'
     */
    if (aaa_B.DataTypeConversion27[4] >= aaa_P.Switch5_Threshold_d) {
      aaa_B.Switch5_g = aaa_P.Constant10_Value_a;
    } else {
      aaa_B.Switch5_g = aaa_P.Constant11_Value_n;
    }

    /* End of Switch: '<S41>/Switch5' */

    /* Switch: '<S41>/Switch6' incorporates:
     *  Constant: '<S41>/Constant12'
     *  Constant: '<S41>/Constant13'
     */
    if (aaa_B.DataTypeConversion27[4] >= aaa_P.Switch6_Threshold_j) {
      aaa_B.Switch6_b = aaa_P.Constant12_Value_j;
    } else {
      aaa_B.Switch6_b = aaa_P.Constant13_Value_k;
    }

    /* End of Switch: '<S41>/Switch6' */

    /* Switch: '<S41>/Switch7' incorporates:
     *  Constant: '<S41>/Constant14'
     *  Constant: '<S41>/Constant15'
     */
    if (aaa_B.DataTypeConversion27[4] >= aaa_P.Switch7_Threshold_o) {
      aaa_B.Switch7_m = aaa_P.Constant14_Value_gi;
    } else {
      aaa_B.Switch7_m = aaa_P.Constant15_Value_b;
    }

    /* End of Switch: '<S41>/Switch7' */

    /* Switch: '<S41>/Switch8' incorporates:
     *  Constant: '<S41>/Constant16'
     *  Constant: '<S41>/Constant17'
     */
    if (aaa_B.DataTypeConversion27[4] >= aaa_P.Switch8_Threshold_m) {
      aaa_B.Switch8_k = aaa_P.Constant16_Value_n;
    } else {
      aaa_B.Switch8_k = aaa_P.Constant17_Value_i;
    }

    /* End of Switch: '<S41>/Switch8' */

    /* Switch: '<S41>/Switch9' incorporates:
     *  Constant: '<S41>/Constant18'
     *  Constant: '<S41>/Constant19'
     */
    if (aaa_B.DataTypeConversion27[4] >= aaa_P.Switch9_Threshold_f) {
      aaa_B.Switch9_n = aaa_P.Constant18_Value_g;
    } else {
      aaa_B.Switch9_n = aaa_P.Constant19_Value_gf;
    }

    /* End of Switch: '<S41>/Switch9' */

    /* Sum: '<S41>/Sum of Elements' incorporates:
     *  Constant: '<S41>/Constant1'
     */
    tmpForInput[0] = aaa_P.Constant1_Value_er;
    tmpForInput[1] = aaa_B.Switch1_i;
    tmpForInput[2] = aaa_B.Switch2_h;
    tmpForInput[3] = aaa_B.Switch3_a;
    tmpForInput[4] = aaa_B.Switch4_p;
    tmpForInput[5] = aaa_B.Switch5_g;
    tmpForInput[6] = aaa_B.Switch6_b;
    tmpForInput[7] = aaa_B.Switch7_m;
    tmpForInput[8] = aaa_B.Switch8_k;
    tmpForInput[9] = aaa_B.Switch9_n;
    u0 = tmpForInput[0];
    for (i = 0; i < 9; i++) {
      tmp_d = i + 1;
      u0 += tmpForInput[tmp_d];
    }

    aaa_B.SumofElements_i = u0;

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
    switch ((int32_T)aaa_B.SumofElements_i) {
     case 1:
      aaa_B.MultiportSwitch_p = aaa_P.Constant20_Value_db;
      break;

     case 2:
      aaa_B.MultiportSwitch_p = aaa_P.Constant21_Value_f;
      break;

     case 3:
      aaa_B.MultiportSwitch_p = aaa_P.Constant22_Value_l;
      break;

     case 4:
      aaa_B.MultiportSwitch_p = aaa_P.Constant23_Value_d;
      break;

     case 5:
      aaa_B.MultiportSwitch_p = aaa_P.Constant24_Value_p;
      break;

     case 6:
      aaa_B.MultiportSwitch_p = aaa_P.Constant25_Value_o;
      break;

     case 7:
      aaa_B.MultiportSwitch_p = aaa_P.Constant26_Value_e;
      break;

     case 8:
      aaa_B.MultiportSwitch_p = aaa_P.Constant27_Value_i;
      break;

     case 9:
      aaa_B.MultiportSwitch_p = aaa_P.Constant28_Value_e;
      break;

     default:
      aaa_B.MultiportSwitch_p = aaa_P.Constant29_Value_p;
      break;
    }

    /* End of MultiPortSwitch: '<S41>/Multiport Switch' */

    /* Product: '<S41>/Product' */
    aaa_B.Product_l1 = aaa_B.MultiportSwitch_p * aaa_B.bililiuliangfa18_1_f;

    /* Product: '<S41>/Product1' */
    aaa_B.Product1_l = aaa_B.MultiportSwitch_p * aaa_B.bililiuliangfa18_3_j;

    /* Product: '<S40>/Product' incorporates:
     *  Constant: '<S40>/Constant'
     */
    aaa_B.Product_d = 0.0 * aaa_P.Constant_Value_f;

    /* Sum: '<S40>/Add1' */
    aaa_B.Add1_p = aaa_B.Product_d;

    /* FromWorkspace: '<S42>/FromWs' */
    {
      real_T *pDataValues = (real_T *) aaa_DW.FromWs_PWORK.DataPtr;
      real_T *pTimeValues = (real_T *) aaa_DW.FromWs_PWORK.TimePtr;
      int_T currTimeIndex = aaa_DW.FromWs_IWORK.PrevIndex;
      real_T t = aaa_M->Timing.t[0];

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

      aaa_DW.FromWs_IWORK.PrevIndex = currTimeIndex;

      /* Post output */
      {
        real_T t1 = pTimeValues[currTimeIndex];
        real_T t2 = pTimeValues[currTimeIndex + 1];
        if (t1 == t2) {
          if (t < t1) {
            aaa_B.FromWs = pDataValues[currTimeIndex];
          } else {
            aaa_B.FromWs = pDataValues[currTimeIndex + 1];
          }
        } else {
          real_T f1 = (t2 - t) / (t2 - t1);
          real_T f2 = 1.0 - f1;
          real_T d1;
          real_T d2;
          int_T TimeIndex= currTimeIndex;
          d1 = pDataValues[TimeIndex];
          d2 = pDataValues[TimeIndex + 1];
          aaa_B.FromWs = (real_T) rtInterpolate(d1, d2, f1, f2);
          pDataValues += 6;
        }
      }
    }

    /* FromWorkspace: '<S43>/FromWs' */
    {
      real_T *pDataValues = (real_T *) aaa_DW.FromWs_PWORK_n.DataPtr;
      real_T *pTimeValues = (real_T *) aaa_DW.FromWs_PWORK_n.TimePtr;
      int_T currTimeIndex = aaa_DW.FromWs_IWORK_f.PrevIndex;
      real_T t = aaa_M->Timing.t[0];

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

      aaa_DW.FromWs_IWORK_f.PrevIndex = currTimeIndex;

      /* Post output */
      {
        real_T t1 = pTimeValues[currTimeIndex];
        real_T t2 = pTimeValues[currTimeIndex + 1];
        if (t1 == t2) {
          if (t < t1) {
            aaa_B.FromWs_c = pDataValues[currTimeIndex];
          } else {
            aaa_B.FromWs_c = pDataValues[currTimeIndex + 1];
          }
        } else {
          real_T f1 = (t2 - t) / (t2 - t1);
          real_T f2 = 1.0 - f1;
          real_T d1;
          real_T d2;
          int_T TimeIndex= currTimeIndex;
          d1 = pDataValues[TimeIndex];
          d2 = pDataValues[TimeIndex + 1];
          aaa_B.FromWs_c = (real_T) rtInterpolate(d1, d2, f1, f2);
          pDataValues += 6;
        }
      }
    }

    /* FromWorkspace: '<S44>/FromWs' */
    {
      real_T *pDataValues = (real_T *) aaa_DW.FromWs_PWORK_g.DataPtr;
      real_T *pTimeValues = (real_T *) aaa_DW.FromWs_PWORK_g.TimePtr;
      int_T currTimeIndex = aaa_DW.FromWs_IWORK_c.PrevIndex;
      real_T t = aaa_M->Timing.t[0];

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

      aaa_DW.FromWs_IWORK_c.PrevIndex = currTimeIndex;

      /* Post output */
      {
        real_T t1 = pTimeValues[currTimeIndex];
        real_T t2 = pTimeValues[currTimeIndex + 1];
        if (t1 == t2) {
          if (t < t1) {
            aaa_B.FromWs_c1 = pDataValues[currTimeIndex];
          } else {
            aaa_B.FromWs_c1 = pDataValues[currTimeIndex + 1];
          }
        } else {
          real_T f1 = (t2 - t) / (t2 - t1);
          real_T f2 = 1.0 - f1;
          real_T d1;
          real_T d2;
          int_T TimeIndex= currTimeIndex;
          d1 = pDataValues[TimeIndex];
          d2 = pDataValues[TimeIndex + 1];
          aaa_B.FromWs_c1 = (real_T) rtInterpolate(d1, d2, f1, f2);
          pDataValues += 6;
        }
      }
    }

    /* FromWorkspace: '<S45>/FromWs' */
    {
      real_T *pDataValues = (real_T *) aaa_DW.FromWs_PWORK_i.DataPtr;
      real_T *pTimeValues = (real_T *) aaa_DW.FromWs_PWORK_i.TimePtr;
      int_T currTimeIndex = aaa_DW.FromWs_IWORK_j.PrevIndex;
      real_T t = aaa_M->Timing.t[0];

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

      aaa_DW.FromWs_IWORK_j.PrevIndex = currTimeIndex;

      /* Post output */
      {
        real_T t1 = pTimeValues[currTimeIndex];
        real_T t2 = pTimeValues[currTimeIndex + 1];
        if (t1 == t2) {
          if (t < t1) {
            aaa_B.FromWs_n = pDataValues[currTimeIndex];
          } else {
            aaa_B.FromWs_n = pDataValues[currTimeIndex + 1];
          }
        } else {
          real_T f1 = (t2 - t) / (t2 - t1);
          real_T f2 = 1.0 - f1;
          real_T d1;
          real_T d2;
          int_T TimeIndex= currTimeIndex;
          d1 = pDataValues[TimeIndex];
          d2 = pDataValues[TimeIndex + 1];
          aaa_B.FromWs_n = (real_T) rtInterpolate(d1, d2, f1, f2);
          pDataValues += 6;
        }
      }
    }

    /* MultiPortSwitch: '<S40>/Multiport Switch' incorporates:
     *  Constant: '<S40>/Constant1'
     */
    switch ((int32_T)aaa_B.Add1_p) {
     case 1:
      /* Sum: '<S40>/Sum' */
      aaa_B.Sum_p = aaa_B.FromWs - aaa_B.DataTypeConversion25[2];

      /* Gain: '<S40>/Gain' */
      aaa_B.Gain_ic = aaa_P.Gain_Gain_er * aaa_B.Sum_p;
      aaa_B.MultiportSwitch_o = aaa_B.Gain_ic;
      break;

     case 2:
      /* Sum: '<S40>/Sum1' */
      aaa_B.Sum1_i = aaa_B.FromWs_c - aaa_B.DataTypeConversion25[2];

      /* Gain: '<S40>/Gain1' */
      aaa_B.Gain1_f = aaa_P.Gain1_Gain_e * aaa_B.Sum1_i;
      aaa_B.MultiportSwitch_o = aaa_B.Gain1_f;
      break;

     default:
      aaa_B.MultiportSwitch_o = aaa_P.Constant1_Value_ol;
      break;
    }

    /* End of MultiPortSwitch: '<S40>/Multiport Switch' */

    /* MultiPortSwitch: '<S40>/Multiport Switch1' incorporates:
     *  Constant: '<S40>/Constant2'
     */
    switch ((int32_T)aaa_B.Add1_p) {
     case 1:
      /* Sum: '<S40>/Sum2' */
      aaa_B.Sum2 = aaa_B.FromWs_c1 - aaa_B.DataTypeConversion25[3];

      /* Gain: '<S40>/Gain2' */
      aaa_B.Gain2 = aaa_P.Gain2_Gain_a * aaa_B.Sum2;
      aaa_B.MultiportSwitch1_h = aaa_B.Gain2;
      break;

     case 2:
      /* Sum: '<S40>/Sum3' */
      aaa_B.Sum3 = aaa_B.FromWs_n - aaa_B.DataTypeConversion25[3];

      /* Gain: '<S40>/Gain3' */
      aaa_B.Gain3 = aaa_P.Gain3_Gain_d * aaa_B.Sum3;
      aaa_B.MultiportSwitch1_h = aaa_B.Gain3;
      break;

     default:
      aaa_B.MultiportSwitch1_h = aaa_P.Constant2_Value_f;
      break;
    }

    /* End of MultiPortSwitch: '<S40>/Multiport Switch1' */
    srUpdateBC(aaa_DW.zidong_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<S14>/zidong' */

  /* Memory: '<S22>/Memory' */
  aaa_B.Memory_n = aaa_DW.Memory_PreviousInput_c;

  /* Switch: '<S22>/Switch' incorporates:
   *  Constant: '<S22>/Constant'
   */
  if (aaa_B.Memory_n > aaa_P.Switch_Threshold) {
    aaa_B.Switch = aaa_P.Constant_Value;
  } else {
    /* DataTypeConversion: '<Root>/Data Type Conversion16' incorporates:
     *  Constant: '<Root>/kaigai'
     */
    aaa_B.DataTypeConversion16 = aaa_P.kaigai_Value;
    aaa_B.Switch = aaa_B.DataTypeConversion16;
  }

  /* End of Switch: '<S22>/Switch' */

  /* Memory: '<S22>/Memory1' */
  aaa_B.Memory1_o = aaa_DW.Memory1_PreviousInput_n;

  /* Switch: '<S22>/Switch2' incorporates:
   *  Constant: '<S22>/Constant2'
   */
  if (aaa_B.Memory1_o > aaa_P.Switch2_Threshold_l) {
    aaa_B.Switch2 = aaa_P.Constant2_Value;
  } else {
    /* DataTypeConversion: '<Root>/Data Type Conversion17' incorporates:
     *  Constant: '<Root>/guangai'
     */
    aaa_B.DataTypeConversion17 = aaa_P.guangai_Value;
    aaa_B.Switch2 = aaa_B.DataTypeConversion17;
  }

  /* End of Switch: '<S22>/Switch2' */

  /* DataTypeConversion: '<Root>/Data Type Conversion18' incorporates:
   *  Constant: '<Root>/shiyabuchang'
   */
  aaa_B.DataTypeConversion18 = aaa_P.shiyabuchang_Value;

  /* Memory: '<S23>/Memory' */
  aaa_B.Memory_a = aaa_DW.Memory_PreviousInput_g;

  /* Switch: '<S23>/Switch' incorporates:
   *  Constant: '<S23>/Constant'
   */
  if (aaa_B.Memory_a > aaa_P.Switch_Threshold_n) {
    aaa_B.Switch_k = aaa_P.Constant_Value_l;
  } else {
    /* DataTypeConversion: '<Root>/Data Type Conversion19' incorporates:
     *  Constant: '<Root>/xuansong'
     */
    aaa_B.DataTypeConversion19 = aaa_P.xuansong_Value;
    aaa_B.Switch_k = aaa_B.DataTypeConversion19;
  }

  /* End of Switch: '<S23>/Switch' */

  /* Memory: '<S24>/Memory' */
  aaa_B.Memory_ni = aaa_DW.Memory_PreviousInput_o;

  /* Switch: '<S24>/Switch' incorporates:
   *  Constant: '<S24>/Constant'
   */
  if (aaa_B.Memory_ni > aaa_P.Switch_Threshold_b) {
    aaa_B.Switch_d = aaa_P.Constant_Value_k;
  } else {
    /* DataTypeConversion: '<Root>/Data Type Conversion20' incorporates:
     *  Constant: '<Root>/suoding'
     */
    aaa_B.DataTypeConversion20 = aaa_P.suoding_Value;
    aaa_B.Switch_d = aaa_B.DataTypeConversion20;
  }

  /* End of Switch: '<S24>/Switch' */

  /* Memory: '<S24>/Memory1' */
  aaa_B.Memory1_k = aaa_DW.Memory1_PreviousInput_f;

  /* Switch: '<S24>/Switch2' incorporates:
   *  Constant: '<S24>/Constant2'
   */
  if (aaa_B.Memory1_k > aaa_P.Switch2_Threshold_j) {
    aaa_B.Switch2_a = aaa_P.Constant2_Value_j;
  } else {
    /* DataTypeConversion: '<Root>/Data Type Conversion21' incorporates:
     *  Constant: '<Root>/jiesuo'
     */
    aaa_B.DataTypeConversion21 = aaa_P.jiesuo_Value;
    aaa_B.Switch2_a = aaa_B.DataTypeConversion21;
  }

  /* End of Switch: '<S24>/Switch2' */

  /* DataTypeConversion: '<Root>/Data Type Conversion22' incorporates:
   *  Constant: '<Root>/xuanjinjianya'
   */
  aaa_B.DataTypeConversion22 = aaa_P.xuanjinjianya_Value;

  /* Memory: '<S23>/Memory1' */
  aaa_B.Memory1_n = aaa_DW.Memory1_PreviousInput_d;

  /* Switch: '<S23>/Switch2' incorporates:
   *  Constant: '<S23>/Constant2'
   */
  if (aaa_B.Memory1_n > aaa_P.Switch2_Threshold_o) {
    aaa_B.Switch2_k = aaa_P.Constant2_Value_a;
  } else {
    /* DataTypeConversion: '<Root>/Data Type Conversion23' incorporates:
     *  Constant: '<Root>/xuanjin'
     */
    aaa_B.DataTypeConversion23 = aaa_P.xuanjin_Value;
    aaa_B.Switch2_k = aaa_B.DataTypeConversion23;
  }

  /* End of Switch: '<S23>/Switch2' */

  /* Logic: '<S14>/Logical Operator1' */
  aaa_B.LogicalOperator1_pe = ((aaa_B.DataTypeConversion4 != 0.0) &&
    aaa_B.LogicalOperator2_j);

  /* DataTypeConversion: '<S14>/Data Type Conversion1' */
  aaa_B.DataTypeConversion1_c = aaa_B.LogicalOperator1_pe;

  /* Outputs for Enabled SubSystem: '<S14>/shoudong' incorporates:
   *  EnablePort: '<S25>/Enable'
   */
  if (aaa_B.DataTypeConversion1_c > 0.0) {
    if (!aaa_DW.shoudong_MODE) {
      aaa_DW.shoudong_MODE = true;
    }
  } else {
    if (aaa_DW.shoudong_MODE) {
      aaa_DW.shoudong_MODE = false;
    }
  }

  if (aaa_DW.shoudong_MODE) {
    /* ok to acquire for <S29>/S-Function */
    aaa_DW.SFunction_IWORK_p4.AcquireOK = 1;

    /* Chart: '<S25>/Chart' */
    /* Gateway: Subsystem2/shoudong/Chart */
    aaa_DW.sfEvent_e = aaa_CALL_EVENT_n;
    if (aaa_DW.temporalCounter_i1_i < 511U) {
      aaa_DW.temporalCounter_i1_i++;
    }

    if (aaa_DW.temporalCounter_i2 < 1023U) {
      aaa_DW.temporalCounter_i2++;
    }

    if (aaa_DW.temporalCounter_i3 < 1023U) {
      aaa_DW.temporalCounter_i3++;
    }

    if (aaa_DW.temporalCounter_i4 < 31U) {
      aaa_DW.temporalCounter_i4++;
    }

    if (aaa_DW.temporalCounter_i5 < 1023U) {
      aaa_DW.temporalCounter_i5++;
    }

    /* During: Subsystem2/shoudong/Chart */
    if (aaa_DW.is_active_c4_aaa == 0U) {
      /* Entry: Subsystem2/shoudong/Chart */
      aaa_DW.is_active_c4_aaa = 1U;

      /* Entry Internal: Subsystem2/shoudong/Chart */
      /* Transition: '<S27>:42' */
      aaa_DW.is_c4_aaa = aaa_IN_start;
      aaa_enter_atomic_start();
    } else {
      switch (aaa_DW.is_c4_aaa) {
       case aaa_IN_off111:
        /* During 'off111': '<S27>:1174' */
        if ((aaa_B.DataTypeConversion6 == 0.0) && (aaa_B.DataTypeConversion13 ==
             0.0)) {
          /* Transition: '<S27>:1196' */
          aaa_DW.is_c4_aaa = aaa_IN_start;
          aaa_enter_atomic_start();
        }
        break;

       case aaa_IN_shoudong:
        aaa_shoudong();
        break;

       default:
        /* During 'start': '<S27>:27' */
        if (aaa_B.DataTypeConversion6 == 1.0) {
          /* Transition: '<S27>:1159' */
          aaa_DW.is_c4_aaa = aaa_IN_shoudong;

          /* Entry Internal 'shoudong': '<S27>:1197' */
          aaa_DW.is_active_kaiguangai = 1U;

          /* Entry Internal 'kaiguangai': '<S27>:1243' */
          /* Transition: '<S27>:1250' */
          aaa_DW.is_kaiguangai_c = aaa_IN_start_c;

          /* Entry 'start': '<S27>:1286' */
          aaa_B.xuansong_g = 0.0;
          aaa_B.xuanjin_l = 0.0;
          aaa_B.suoding_j = 0.0;
          aaa_B.jiesuo_k = 0.0;
          aaa_B.kaigaikaishi_e = 0.0;
          aaa_B.guangaikaishi_o = 0.0;
          aaa_DW.is_active_SCjiaya = 1U;

          /* Entry Internal 'SCjiaya': '<S27>:1310' */
          /* Transition: '<S27>:1315' */
          aaa_DW.is_SCjiaya_k = aaa_IN_off1;

          /* Entry 'off1': '<S27>:1330' */
          aaa_B.diancifa11_2_i = 0.0;
          aaa_DW.is_active_SCzhushui = 1U;

          /* Entry Internal 'SCzhushui': '<S27>:1337' */
          /* Transition: '<S27>:1339' */
          aaa_DW.is_SCzhushui_f = aaa_IN_off4_g;

          /* Entry 'off4': '<S27>:1347' */
          aaa_B.diancifa16_1_cy = 0.0;
          aaa_B.diancifa3_m = 0.0;
          aaa_DW.is_active_SXQxieya = 1U;

          /* Entry Internal 'SXQxieya': '<S27>:1417' */
          /* Transition: '<S27>:1432' */
          aaa_DW.is_SXQxieya_o = aaa_IN_off1;

          /* Entry 'off1': '<S27>:1474' */
          aaa_DW.is_active_SXQjunya = 1U;

          /* Entry Internal 'SXQjunya': '<S27>:1486' */
          /* Transition: '<S27>:1511' */
          aaa_DW.is_SXQjunya_c = aaa_IN_off1_b;

          /* Entry 'off1': '<S27>:1574' */
          aaa_B.diancifa11_1_l = 0.0;
          aaa_B.diancifa11_5_k = 0.0;
          aaa_B.diancifa20_l = 0.0;
          aaa_B.bililiuliangfa18_1_b = 0.0;
          aaa_B.bililiuliangfa18_2_j = 0.0;
          aaa_B.bililiuliangfa18_3_l = 0.0;
          aaa_B.bililiuliangfa18_4_l = 0.0;
        }
        break;
      }
    }

    /* End of Chart: '<S25>/Chart' */

    /* Product: '<S28>/Product' incorporates:
     *  Constant: '<S28>/Constant'
     */
    aaa_B.Product_f = aaa_P.Constant_Value_c * aaa_B.bililiuliangfa18_2_j;

    /* Gain: '<S28>/Gain' */
    aaa_B.Gain_m = aaa_P.Gain_Gain_e * aaa_B.Product_f;

    /* Product: '<S28>/Product1' incorporates:
     *  Constant: '<S28>/Constant'
     */
    aaa_B.Product1_n = aaa_P.Constant_Value_c * aaa_B.bililiuliangfa18_4_l;

    /* Gain: '<S28>/Gain1' */
    aaa_B.Gain1_a = aaa_P.Gain1_Gain_f * aaa_B.Product1_n;

    /* Switch: '<S28>/Switch1' incorporates:
     *  Constant: '<S28>/Constant2'
     *  Constant: '<S28>/Constant3'
     */
    if (aaa_B.DataTypeConversion27[2] >= aaa_P.Switch1_Threshold) {
      aaa_B.Switch1_j = aaa_P.Constant2_Value_e;
    } else {
      aaa_B.Switch1_j = aaa_P.Constant3_Value_a;
    }

    /* End of Switch: '<S28>/Switch1' */

    /* Switch: '<S28>/Switch2' incorporates:
     *  Constant: '<S28>/Constant4'
     *  Constant: '<S28>/Constant5'
     */
    if (aaa_B.DataTypeConversion27[2] >= aaa_P.Switch2_Threshold) {
      aaa_B.Switch2_d = aaa_P.Constant4_Value;
    } else {
      aaa_B.Switch2_d = aaa_P.Constant5_Value;
    }

    /* End of Switch: '<S28>/Switch2' */

    /* Switch: '<S28>/Switch3' incorporates:
     *  Constant: '<S28>/Constant6'
     *  Constant: '<S28>/Constant7'
     */
    if (aaa_B.DataTypeConversion27[2] >= aaa_P.Switch3_Threshold) {
      aaa_B.Switch3_i = aaa_P.Constant6_Value;
    } else {
      aaa_B.Switch3_i = aaa_P.Constant7_Value;
    }

    /* End of Switch: '<S28>/Switch3' */

    /* Switch: '<S28>/Switch4' incorporates:
     *  Constant: '<S28>/Constant8'
     *  Constant: '<S28>/Constant9'
     */
    if (aaa_B.DataTypeConversion27[2] >= aaa_P.Switch4_Threshold) {
      aaa_B.Switch4_j = aaa_P.Constant8_Value;
    } else {
      aaa_B.Switch4_j = aaa_P.Constant9_Value;
    }

    /* End of Switch: '<S28>/Switch4' */

    /* Switch: '<S28>/Switch5' incorporates:
     *  Constant: '<S28>/Constant10'
     *  Constant: '<S28>/Constant11'
     */
    if (aaa_B.DataTypeConversion27[2] >= aaa_P.Switch5_Threshold) {
      aaa_B.Switch5_lr = aaa_P.Constant10_Value;
    } else {
      aaa_B.Switch5_lr = aaa_P.Constant11_Value;
    }

    /* End of Switch: '<S28>/Switch5' */

    /* Switch: '<S28>/Switch6' incorporates:
     *  Constant: '<S28>/Constant12'
     *  Constant: '<S28>/Constant13'
     */
    if (aaa_B.DataTypeConversion27[2] >= aaa_P.Switch6_Threshold) {
      aaa_B.Switch6_a = aaa_P.Constant12_Value;
    } else {
      aaa_B.Switch6_a = aaa_P.Constant13_Value;
    }

    /* End of Switch: '<S28>/Switch6' */

    /* Switch: '<S28>/Switch7' incorporates:
     *  Constant: '<S28>/Constant14'
     *  Constant: '<S28>/Constant15'
     */
    if (aaa_B.DataTypeConversion27[2] >= aaa_P.Switch7_Threshold) {
      aaa_B.Switch7_k = aaa_P.Constant14_Value;
    } else {
      aaa_B.Switch7_k = aaa_P.Constant15_Value;
    }

    /* End of Switch: '<S28>/Switch7' */

    /* Switch: '<S28>/Switch8' incorporates:
     *  Constant: '<S28>/Constant16'
     *  Constant: '<S28>/Constant17'
     */
    if (aaa_B.DataTypeConversion27[2] >= aaa_P.Switch8_Threshold) {
      aaa_B.Switch8_o = aaa_P.Constant16_Value;
    } else {
      aaa_B.Switch8_o = aaa_P.Constant17_Value;
    }

    /* End of Switch: '<S28>/Switch8' */

    /* Switch: '<S28>/Switch9' incorporates:
     *  Constant: '<S28>/Constant18'
     *  Constant: '<S28>/Constant19'
     */
    if (aaa_B.DataTypeConversion27[2] >= aaa_P.Switch9_Threshold) {
      aaa_B.Switch9_b = aaa_P.Constant18_Value;
    } else {
      aaa_B.Switch9_b = aaa_P.Constant19_Value;
    }

    /* End of Switch: '<S28>/Switch9' */

    /* Sum: '<S28>/Sum of Elements' incorporates:
     *  Constant: '<S28>/Constant1'
     */
    tmpForInput[0] = aaa_P.Constant1_Value_b;
    tmpForInput[1] = aaa_B.Switch1_j;
    tmpForInput[2] = aaa_B.Switch2_d;
    tmpForInput[3] = aaa_B.Switch3_i;
    tmpForInput[4] = aaa_B.Switch4_j;
    tmpForInput[5] = aaa_B.Switch5_lr;
    tmpForInput[6] = aaa_B.Switch6_a;
    tmpForInput[7] = aaa_B.Switch7_k;
    tmpForInput[8] = aaa_B.Switch8_o;
    tmpForInput[9] = aaa_B.Switch9_b;
    u0 = tmpForInput[0];
    for (i = 0; i < 9; i++) {
      tmp_d = i + 1;
      u0 += tmpForInput[tmp_d];
    }

    aaa_B.SumofElements_c = u0;

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
    switch ((int32_T)aaa_B.SumofElements_c) {
     case 1:
      aaa_B.MultiportSwitch_g = aaa_P.Constant20_Value;
      break;

     case 2:
      aaa_B.MultiportSwitch_g = aaa_P.Constant21_Value;
      break;

     case 3:
      aaa_B.MultiportSwitch_g = aaa_P.Constant22_Value;
      break;

     case 4:
      aaa_B.MultiportSwitch_g = aaa_P.Constant23_Value;
      break;

     case 5:
      aaa_B.MultiportSwitch_g = aaa_P.Constant24_Value;
      break;

     case 6:
      aaa_B.MultiportSwitch_g = aaa_P.Constant25_Value;
      break;

     case 7:
      aaa_B.MultiportSwitch_g = aaa_P.Constant26_Value;
      break;

     case 8:
      aaa_B.MultiportSwitch_g = aaa_P.Constant27_Value;
      break;

     case 9:
      aaa_B.MultiportSwitch_g = aaa_P.Constant28_Value;
      break;

     default:
      aaa_B.MultiportSwitch_g = aaa_P.Constant29_Value;
      break;
    }

    /* End of MultiPortSwitch: '<S28>/Multiport Switch' */

    /* Sum: '<S30>/Sum1' */
    aaa_B.Sum1_o = aaa_B.DataTypeConversion35 - aaa_B.DataTypeConversion26;

    /* Gain: '<S30>/Gain1' */
    aaa_B.Gain1_n = aaa_P.Gain1_Gain_n * aaa_B.Sum1_o;

    /* Sum: '<S30>/Sum' */
    aaa_B.Sum_d = aaa_B.DataTypeConversion34 - aaa_B.DataTypeConversion26;

    /* Gain: '<S30>/Gain' */
    aaa_B.Gain_dy = aaa_P.Gain_Gain_h * aaa_B.Sum_d;

    /* Product: '<S30>/Product' incorporates:
     *  Constant: '<S30>/Constant'
     */
    aaa_B.Product_p = aaa_B.guangaikaishi_o * aaa_P.Constant_Value_h;

    /* Sum: '<S30>/Add1' */
    aaa_B.Add1_h = aaa_B.kaigaikaishi_e + aaa_B.Product_p;

    /* MultiPortSwitch: '<S30>/Multiport Switch' incorporates:
     *  Constant: '<S30>/Constant1'
     */
    switch ((int32_T)aaa_B.Add1_h) {
     case 1:
      aaa_B.MultiportSwitch_b = aaa_B.Gain_dy;
      break;

     case 2:
      aaa_B.MultiportSwitch_b = aaa_B.Gain1_n;
      break;

     default:
      aaa_B.MultiportSwitch_b = aaa_P.Constant1_Value_o;
      break;
    }

    /* End of MultiPortSwitch: '<S30>/Multiport Switch' */

    /* Product: '<S32>/Product' incorporates:
     *  Constant: '<S32>/Constant'
     */
    aaa_B.Product_i = aaa_P.Constant_Value_a * aaa_B.bililiuliangfa18_1_b;

    /* Product: '<S32>/Product1' incorporates:
     *  Constant: '<S32>/Constant'
     */
    aaa_B.Product1_lf = aaa_P.Constant_Value_a * aaa_B.bililiuliangfa18_3_l;

    /* Switch: '<S32>/Switch1' incorporates:
     *  Constant: '<S32>/Constant2'
     *  Constant: '<S32>/Constant3'
     */
    if (aaa_B.DataTypeConversion27[4] >= aaa_P.Switch1_Threshold_m) {
      aaa_B.Switch1_ip = aaa_P.Constant2_Value_l;
    } else {
      aaa_B.Switch1_ip = aaa_P.Constant3_Value_o;
    }

    /* End of Switch: '<S32>/Switch1' */

    /* Switch: '<S32>/Switch2' incorporates:
     *  Constant: '<S32>/Constant4'
     *  Constant: '<S32>/Constant5'
     */
    if (aaa_B.DataTypeConversion27[4] >= aaa_P.Switch2_Threshold_a) {
      aaa_B.Switch2_e = aaa_P.Constant4_Value_b;
    } else {
      aaa_B.Switch2_e = aaa_P.Constant5_Value_m;
    }

    /* End of Switch: '<S32>/Switch2' */

    /* Switch: '<S32>/Switch3' incorporates:
     *  Constant: '<S32>/Constant6'
     *  Constant: '<S32>/Constant7'
     */
    if (aaa_B.DataTypeConversion27[4] >= aaa_P.Switch3_Threshold_l) {
      aaa_B.Switch3_f = aaa_P.Constant6_Value_d;
    } else {
      aaa_B.Switch3_f = aaa_P.Constant7_Value_j;
    }

    /* End of Switch: '<S32>/Switch3' */

    /* Switch: '<S32>/Switch4' incorporates:
     *  Constant: '<S32>/Constant8'
     *  Constant: '<S32>/Constant9'
     */
    if (aaa_B.DataTypeConversion27[4] >= aaa_P.Switch4_Threshold_a) {
      aaa_B.Switch4_f = aaa_P.Constant8_Value_j;
    } else {
      aaa_B.Switch4_f = aaa_P.Constant9_Value_n;
    }

    /* End of Switch: '<S32>/Switch4' */

    /* Switch: '<S32>/Switch5' incorporates:
     *  Constant: '<S32>/Constant10'
     *  Constant: '<S32>/Constant11'
     */
    if (aaa_B.DataTypeConversion27[4] >= aaa_P.Switch5_Threshold_o) {
      aaa_B.Switch5_m = aaa_P.Constant10_Value_h;
    } else {
      aaa_B.Switch5_m = aaa_P.Constant11_Value_e;
    }

    /* End of Switch: '<S32>/Switch5' */

    /* Switch: '<S32>/Switch6' incorporates:
     *  Constant: '<S32>/Constant12'
     *  Constant: '<S32>/Constant13'
     */
    if (aaa_B.DataTypeConversion27[4] >= aaa_P.Switch6_Threshold_b) {
      aaa_B.Switch6_i = aaa_P.Constant12_Value_k;
    } else {
      aaa_B.Switch6_i = aaa_P.Constant13_Value_g;
    }

    /* End of Switch: '<S32>/Switch6' */

    /* Switch: '<S32>/Switch7' incorporates:
     *  Constant: '<S32>/Constant14'
     *  Constant: '<S32>/Constant15'
     */
    if (aaa_B.DataTypeConversion27[4] >= aaa_P.Switch7_Threshold_g) {
      aaa_B.Switch7_n = aaa_P.Constant14_Value_g;
    } else {
      aaa_B.Switch7_n = aaa_P.Constant15_Value_a;
    }

    /* End of Switch: '<S32>/Switch7' */

    /* Switch: '<S32>/Switch8' incorporates:
     *  Constant: '<S32>/Constant16'
     *  Constant: '<S32>/Constant17'
     */
    if (aaa_B.DataTypeConversion27[4] >= aaa_P.Switch8_Threshold_i) {
      aaa_B.Switch8_i = aaa_P.Constant16_Value_g;
    } else {
      aaa_B.Switch8_i = aaa_P.Constant17_Value_a;
    }

    /* End of Switch: '<S32>/Switch8' */

    /* Switch: '<S32>/Switch9' incorporates:
     *  Constant: '<S32>/Constant18'
     *  Constant: '<S32>/Constant19'
     */
    if (aaa_B.DataTypeConversion27[4] >= aaa_P.Switch9_Threshold_e) {
      aaa_B.Switch9_g = aaa_P.Constant18_Value_n;
    } else {
      aaa_B.Switch9_g = aaa_P.Constant19_Value_g;
    }

    /* End of Switch: '<S32>/Switch9' */

    /* Sum: '<S32>/Sum of Elements' incorporates:
     *  Constant: '<S32>/Constant1'
     */
    tmpForInput[0] = aaa_P.Constant1_Value_e;
    tmpForInput[1] = aaa_B.Switch1_ip;
    tmpForInput[2] = aaa_B.Switch2_e;
    tmpForInput[3] = aaa_B.Switch3_f;
    tmpForInput[4] = aaa_B.Switch4_f;
    tmpForInput[5] = aaa_B.Switch5_m;
    tmpForInput[6] = aaa_B.Switch6_i;
    tmpForInput[7] = aaa_B.Switch7_n;
    tmpForInput[8] = aaa_B.Switch8_i;
    tmpForInput[9] = aaa_B.Switch9_g;
    u0 = tmpForInput[0];
    for (i = 0; i < 9; i++) {
      tmp_d = i + 1;
      u0 += tmpForInput[tmp_d];
    }

    aaa_B.SumofElements_a = u0;

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
    switch ((int32_T)aaa_B.SumofElements_a) {
     case 1:
      aaa_B.MultiportSwitch_c = aaa_P.Constant20_Value_e;
      break;

     case 2:
      aaa_B.MultiportSwitch_c = aaa_P.Constant21_Value_g;
      break;

     case 3:
      aaa_B.MultiportSwitch_c = aaa_P.Constant22_Value_o;
      break;

     case 4:
      aaa_B.MultiportSwitch_c = aaa_P.Constant23_Value_g;
      break;

     case 5:
      aaa_B.MultiportSwitch_c = aaa_P.Constant24_Value_j;
      break;

     case 6:
      aaa_B.MultiportSwitch_c = aaa_P.Constant25_Value_f;
      break;

     case 7:
      aaa_B.MultiportSwitch_c = aaa_P.Constant26_Value_f;
      break;

     case 8:
      aaa_B.MultiportSwitch_c = aaa_P.Constant27_Value_l;
      break;

     case 9:
      aaa_B.MultiportSwitch_c = aaa_P.Constant28_Value_n;
      break;

     default:
      aaa_B.MultiportSwitch_c = aaa_P.Constant29_Value_b;
      break;
    }

    /* End of MultiPortSwitch: '<S32>/Multiport Switch' */

    /* Product: '<S31>/Product' incorporates:
     *  Constant: '<S31>/Constant'
     */
    aaa_B.Product_m = 0.0 * aaa_P.Constant_Value_cx;

    /* Sum: '<S31>/Add1' */
    aaa_B.Add1_gl = aaa_B.Product_m;

    /* FromWorkspace: '<S33>/FromWs' */
    {
      real_T *pDataValues = (real_T *) aaa_DW.FromWs_PWORK_ih.DataPtr;
      real_T *pTimeValues = (real_T *) aaa_DW.FromWs_PWORK_ih.TimePtr;
      int_T currTimeIndex = aaa_DW.FromWs_IWORK_a.PrevIndex;
      real_T t = aaa_M->Timing.t[0];

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

      aaa_DW.FromWs_IWORK_a.PrevIndex = currTimeIndex;

      /* Post output */
      {
        real_T t1 = pTimeValues[currTimeIndex];
        real_T t2 = pTimeValues[currTimeIndex + 1];
        if (t1 == t2) {
          if (t < t1) {
            aaa_B.FromWs_i = pDataValues[currTimeIndex];
          } else {
            aaa_B.FromWs_i = pDataValues[currTimeIndex + 1];
          }
        } else {
          real_T f1 = (t2 - t) / (t2 - t1);
          real_T f2 = 1.0 - f1;
          real_T d1;
          real_T d2;
          int_T TimeIndex= currTimeIndex;
          d1 = pDataValues[TimeIndex];
          d2 = pDataValues[TimeIndex + 1];
          aaa_B.FromWs_i = (real_T) rtInterpolate(d1, d2, f1, f2);
          pDataValues += 6;
        }
      }
    }

    /* FromWorkspace: '<S34>/FromWs' */
    {
      real_T *pDataValues = (real_T *) aaa_DW.FromWs_PWORK_gq.DataPtr;
      real_T *pTimeValues = (real_T *) aaa_DW.FromWs_PWORK_gq.TimePtr;
      int_T currTimeIndex = aaa_DW.FromWs_IWORK_n.PrevIndex;
      real_T t = aaa_M->Timing.t[0];

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

      aaa_DW.FromWs_IWORK_n.PrevIndex = currTimeIndex;

      /* Post output */
      {
        real_T t1 = pTimeValues[currTimeIndex];
        real_T t2 = pTimeValues[currTimeIndex + 1];
        if (t1 == t2) {
          if (t < t1) {
            aaa_B.FromWs_l = pDataValues[currTimeIndex];
          } else {
            aaa_B.FromWs_l = pDataValues[currTimeIndex + 1];
          }
        } else {
          real_T f1 = (t2 - t) / (t2 - t1);
          real_T f2 = 1.0 - f1;
          real_T d1;
          real_T d2;
          int_T TimeIndex= currTimeIndex;
          d1 = pDataValues[TimeIndex];
          d2 = pDataValues[TimeIndex + 1];
          aaa_B.FromWs_l = (real_T) rtInterpolate(d1, d2, f1, f2);
          pDataValues += 6;
        }
      }
    }

    /* FromWorkspace: '<S35>/FromWs' */
    {
      real_T *pDataValues = (real_T *) aaa_DW.FromWs_PWORK_nl.DataPtr;
      real_T *pTimeValues = (real_T *) aaa_DW.FromWs_PWORK_nl.TimePtr;
      int_T currTimeIndex = aaa_DW.FromWs_IWORK_jn.PrevIndex;
      real_T t = aaa_M->Timing.t[0];

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

      aaa_DW.FromWs_IWORK_jn.PrevIndex = currTimeIndex;

      /* Post output */
      {
        real_T t1 = pTimeValues[currTimeIndex];
        real_T t2 = pTimeValues[currTimeIndex + 1];
        if (t1 == t2) {
          if (t < t1) {
            aaa_B.FromWs_a = pDataValues[currTimeIndex];
          } else {
            aaa_B.FromWs_a = pDataValues[currTimeIndex + 1];
          }
        } else {
          real_T f1 = (t2 - t) / (t2 - t1);
          real_T f2 = 1.0 - f1;
          real_T d1;
          real_T d2;
          int_T TimeIndex= currTimeIndex;
          d1 = pDataValues[TimeIndex];
          d2 = pDataValues[TimeIndex + 1];
          aaa_B.FromWs_a = (real_T) rtInterpolate(d1, d2, f1, f2);
          pDataValues += 6;
        }
      }
    }

    /* FromWorkspace: '<S36>/FromWs' */
    {
      real_T *pDataValues = (real_T *) aaa_DW.FromWs_PWORK_k.DataPtr;
      real_T *pTimeValues = (real_T *) aaa_DW.FromWs_PWORK_k.TimePtr;
      int_T currTimeIndex = aaa_DW.FromWs_IWORK_p.PrevIndex;
      real_T t = aaa_M->Timing.t[0];

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

      aaa_DW.FromWs_IWORK_p.PrevIndex = currTimeIndex;

      /* Post output */
      {
        real_T t1 = pTimeValues[currTimeIndex];
        real_T t2 = pTimeValues[currTimeIndex + 1];
        if (t1 == t2) {
          if (t < t1) {
            aaa_B.FromWs_g = pDataValues[currTimeIndex];
          } else {
            aaa_B.FromWs_g = pDataValues[currTimeIndex + 1];
          }
        } else {
          real_T f1 = (t2 - t) / (t2 - t1);
          real_T f2 = 1.0 - f1;
          real_T d1;
          real_T d2;
          int_T TimeIndex= currTimeIndex;
          d1 = pDataValues[TimeIndex];
          d2 = pDataValues[TimeIndex + 1];
          aaa_B.FromWs_g = (real_T) rtInterpolate(d1, d2, f1, f2);
          pDataValues += 6;
        }
      }
    }

    /* MultiPortSwitch: '<S31>/Multiport Switch' incorporates:
     *  Constant: '<S31>/Constant1'
     */
    switch ((int32_T)aaa_B.Add1_gl) {
     case 1:
      /* Sum: '<S31>/Sum' */
      aaa_B.Sum_j = aaa_B.FromWs_i - aaa_B.DataTypeConversion25[2];

      /* Gain: '<S31>/Gain' */
      aaa_B.Gain_c = aaa_P.Gain_Gain * aaa_B.Sum_j;
      aaa_B.MultiportSwitch_ok = aaa_B.Gain_c;
      break;

     case 2:
      /* Sum: '<S31>/Sum1' */
      aaa_B.Sum1_d = aaa_B.FromWs_l - aaa_B.DataTypeConversion25[2];

      /* Gain: '<S31>/Gain1' */
      aaa_B.Gain1_o = aaa_P.Gain1_Gain * aaa_B.Sum1_d;
      aaa_B.MultiportSwitch_ok = aaa_B.Gain1_o;
      break;

     default:
      aaa_B.MultiportSwitch_ok = aaa_P.Constant1_Value_p;
      break;
    }

    /* End of MultiPortSwitch: '<S31>/Multiport Switch' */

    /* MultiPortSwitch: '<S31>/Multiport Switch1' incorporates:
     *  Constant: '<S31>/Constant2'
     */
    switch ((int32_T)aaa_B.Add1_gl) {
     case 1:
      /* Sum: '<S31>/Sum2' */
      aaa_B.Sum2_e = aaa_B.FromWs_a - aaa_B.DataTypeConversion25[3];

      /* Gain: '<S31>/Gain2' */
      aaa_B.Gain2_c = aaa_P.Gain2_Gain * aaa_B.Sum2_e;
      aaa_B.MultiportSwitch1_c = aaa_B.Gain2_c;
      break;

     case 2:
      /* Sum: '<S31>/Sum3' */
      aaa_B.Sum3_n = aaa_B.FromWs_g - aaa_B.DataTypeConversion25[3];

      /* Gain: '<S31>/Gain3' */
      aaa_B.Gain3_j = aaa_P.Gain3_Gain * aaa_B.Sum3_n;
      aaa_B.MultiportSwitch1_c = aaa_B.Gain3_j;
      break;

     default:
      aaa_B.MultiportSwitch1_c = aaa_P.Constant2_Value_lo;
      break;
    }

    /* End of MultiPortSwitch: '<S31>/Multiport Switch1' */
    srUpdateBC(aaa_DW.shoudong_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<S14>/shoudong' */

  /* MultiPortSwitch: '<S14>/Multiport Switch1' */
  if ((int32_T)aaa_B.DataTypeConversion4 == 0) {
    aaa_B.MultiportSwitch1[0] = aaa_B.diancifa11_1_k;
    aaa_B.MultiportSwitch1[1] = aaa_B.diancifa11_2_p;
    aaa_B.MultiportSwitch1[2] = aaa_B.diancifa11_5_b;
    aaa_B.MultiportSwitch1[3] = aaa_B.diancifa20_j;
    aaa_B.MultiportSwitch1[4] = aaa_B.diancifa16_1_c;
    aaa_B.MultiportSwitch1[5] = aaa_B.diancifa3_c;
    aaa_B.MultiportSwitch1[6] = aaa_B.diancifa21_d;
    aaa_B.MultiportSwitch1[7] = aaa_B.suoding_k;
    aaa_B.MultiportSwitch1[8] = aaa_B.jiesuo_p;
    aaa_B.MultiportSwitch1[9] = aaa_B.xuansong_i;
    aaa_B.MultiportSwitch1[10] = aaa_B.xuanjin_i;
    aaa_B.MultiportSwitch1[11] = aaa_B.Product_l1;
    aaa_B.MultiportSwitch1[12] = aaa_B.Gain_d;
    aaa_B.MultiportSwitch1[13] = aaa_B.Product1_l;
    aaa_B.MultiportSwitch1[14] = aaa_B.Gain1;
    aaa_B.MultiportSwitch1[15] = aaa_B.MultiportSwitch_le;
  } else {
    aaa_B.MultiportSwitch1[0] = aaa_B.diancifa11_1_l;
    aaa_B.MultiportSwitch1[1] = aaa_B.diancifa11_2_i;
    aaa_B.MultiportSwitch1[2] = aaa_B.diancifa11_5_k;
    aaa_B.MultiportSwitch1[3] = aaa_B.diancifa20_l;
    aaa_B.MultiportSwitch1[4] = aaa_B.diancifa16_1_cy;
    aaa_B.MultiportSwitch1[5] = aaa_B.diancifa3_m;
    aaa_B.MultiportSwitch1[6] = aaa_B.diancifa21_h;
    aaa_B.MultiportSwitch1[7] = aaa_B.suoding_j;
    aaa_B.MultiportSwitch1[8] = aaa_B.jiesuo_k;
    aaa_B.MultiportSwitch1[9] = aaa_B.xuansong_g;
    aaa_B.MultiportSwitch1[10] = aaa_B.xuanjin_l;
    aaa_B.MultiportSwitch1[11] = aaa_B.Product_i;
    aaa_B.MultiportSwitch1[12] = aaa_B.Gain_m;
    aaa_B.MultiportSwitch1[13] = aaa_B.Product1_lf;
    aaa_B.MultiportSwitch1[14] = aaa_B.Gain1_a;
    aaa_B.MultiportSwitch1[15] = aaa_B.MultiportSwitch_b;
  }

  /* End of MultiPortSwitch: '<S14>/Multiport Switch1' */

  /* Switch: '<S13>/Switch1' */
  if (aaa_B.DataTypeConversion3 >= aaa_P.Switch1_Threshold_k) {
    aaa_B.Switch1 = aaa_B.diancifa11_1;
  } else {
    aaa_B.Switch1 = aaa_B.MultiportSwitch1[0];
  }

  /* End of Switch: '<S13>/Switch1' */

  /* Switch: '<S13>/Switch2' */
  if (aaa_B.DataTypeConversion3 >= aaa_P.Switch2_Threshold_b) {
    aaa_B.Switch2_o = aaa_B.diancifa11_2;
  } else {
    aaa_B.Switch2_o = aaa_B.MultiportSwitch1[1];
  }

  /* End of Switch: '<S13>/Switch2' */

  /* Switch: '<S13>/Switch3' */
  if (aaa_B.DataTypeConversion3 >= aaa_P.Switch3_Threshold_p) {
    aaa_B.Switch3 = aaa_B.diancifa11_5;
  } else {
    aaa_B.Switch3 = aaa_B.MultiportSwitch1[2];
  }

  /* End of Switch: '<S13>/Switch3' */

  /* Switch: '<S13>/Switch4' */
  if (aaa_B.DataTypeConversion3 >= aaa_P.Switch4_Threshold_j) {
    aaa_B.Switch4 = aaa_B.diancifa20;
  } else {
    aaa_B.Switch4 = aaa_B.MultiportSwitch1[3];
  }

  /* End of Switch: '<S13>/Switch4' */

  /* Switch: '<S13>/Switch5' */
  if (aaa_B.DataTypeConversion3 >= aaa_P.Switch5_Threshold_i) {
    aaa_B.Switch5 = aaa_B.diancifa16_1;
  } else {
    aaa_B.Switch5 = aaa_B.MultiportSwitch1[4];
  }

  /* End of Switch: '<S13>/Switch5' */

  /* Switch: '<S13>/Switch6' */
  if (aaa_B.DataTypeConversion3 >= aaa_P.Switch6_Threshold_o) {
    aaa_B.Switch6 = aaa_B.diancifa3;
  } else {
    aaa_B.Switch6 = aaa_B.MultiportSwitch1[5];
  }

  /* End of Switch: '<S13>/Switch6' */

  /* Switch: '<S13>/Switch7' */
  if (aaa_B.DataTypeConversion3 >= aaa_P.Switch7_Threshold_l) {
    aaa_B.Switch7 = aaa_B.diancifa21;
  } else {
    aaa_B.Switch7 = aaa_B.MultiportSwitch1[6];
  }

  /* End of Switch: '<S13>/Switch7' */

  /* Switch: '<S13>/Switch8' */
  if (aaa_B.DataTypeConversion3 >= aaa_P.Switch8_Threshold_c) {
    aaa_B.Switch8 = aaa_B.suoding;
  } else {
    aaa_B.Switch8 = aaa_B.MultiportSwitch1[7];
  }

  /* End of Switch: '<S13>/Switch8' */

  /* Switch: '<S13>/Switch9' */
  if (aaa_B.DataTypeConversion3 >= aaa_P.Switch9_Threshold_k) {
    aaa_B.Switch9 = aaa_B.jiesuo;
  } else {
    aaa_B.Switch9 = aaa_B.MultiportSwitch1[8];
  }

  /* End of Switch: '<S13>/Switch9' */

  /* Switch: '<S13>/Switch10' */
  if (aaa_B.DataTypeConversion3 >= aaa_P.Switch10_Threshold) {
    aaa_B.Switch10 = aaa_B.xuansong;
  } else {
    aaa_B.Switch10 = aaa_B.MultiportSwitch1[9];
  }

  /* End of Switch: '<S13>/Switch10' */

  /* Switch: '<S13>/Switch11' */
  if (aaa_B.DataTypeConversion3 >= aaa_P.Switch11_Threshold) {
    aaa_B.Switch11 = aaa_B.xuanjin;
  } else {
    aaa_B.Switch11 = aaa_B.MultiportSwitch1[10];
  }

  /* End of Switch: '<S13>/Switch11' */

  /* DataTypeConversion: '<Root>/Data Type Conversion7' */
  aaa_B.DataTypeConversion7[0] = aaa_B.Switch1;
  aaa_B.DataTypeConversion7[1] = aaa_B.Switch2_o;
  aaa_B.DataTypeConversion7[2] = aaa_B.Switch3;
  aaa_B.DataTypeConversion7[3] = aaa_B.Switch4;
  aaa_B.DataTypeConversion7[4] = aaa_B.Switch5;
  aaa_B.DataTypeConversion7[5] = aaa_B.Switch6;
  aaa_B.DataTypeConversion7[6] = aaa_B.Switch7;
  aaa_B.DataTypeConversion7[7] = aaa_B.Switch8;
  aaa_B.DataTypeConversion7[8] = aaa_B.Switch9;
  aaa_B.DataTypeConversion7[9] = aaa_B.Switch10;
  aaa_B.DataTypeConversion7[10] = aaa_B.Switch11;

  /* Constant: '<Root>/diancifa11_3' */
  aaa_B.diancifa11_3 = aaa_P.diancifa11_3_Value;

  /* Constant: '<Root>/diancifa11_4' */
  aaa_B.diancifa11_4 = aaa_P.diancifa11_4_Value;

  /* Logic: '<S5>/Logical Operator' incorporates:
   *  Constant: '<Root>/SCxieya'
   */
  aaa_B.LogicalOperator_h = ((aaa_B.DataTypeConversion7[4] != 0.0) ||
    (aaa_P.SCxieya_Value != 0.0));

  /* DataTypeConversion: '<S5>/Data Type Conversion1' */
  aaa_B.DataTypeConversion1_m = aaa_B.LogicalOperator_h;

  /* Constant: '<Root>/diancifa16_2' */
  aaa_B.diancifa16_2 = aaa_P.diancifa16_2_Value;

  /* Constant: '<Root>/diancifa16_3' */
  aaa_B.diancifa16_3 = aaa_P.diancifa16_3_Value;

  /* Logic: '<S5>/Logical Operator1' incorporates:
   *  Constant: '<Root>/BCQbushui'
   */
  aaa_B.LogicalOperator1_o = ((aaa_B.DataTypeConversion7[6] != 0.0) ||
    (aaa_P.BCQbushui_Value != 0.0));

  /* DataTypeConversion: '<S5>/Data Type Conversion2' */
  aaa_B.DataTypeConversion2 = aaa_B.LogicalOperator1_o;

  /* Constant: '<S5>/constant' */
  aaa_B.constant = aaa_P.constant_Value;

  /* Level2 S-Function Block: '<S5>/PCI1716DIO1' (pci1716DIO) */
  {
    SimStruct *rts = aaa_M->childSfunctions[0];
    sfcnOutputs(rts, 1);
  }

  /* DataTypeConversion: '<S5>/Data Type Conversion' */
  aaa_B.DataTypeConversion[0] = aaa_B.DataTypeConversion7[0];
  aaa_B.DataTypeConversion[1] = aaa_B.DataTypeConversion7[1];
  aaa_B.DataTypeConversion[2] = aaa_B.diancifa11_3;
  aaa_B.DataTypeConversion[3] = aaa_B.diancifa11_4;
  aaa_B.DataTypeConversion[4] = aaa_B.DataTypeConversion7[2];
  aaa_B.DataTypeConversion[5] = aaa_B.DataTypeConversion1_m;
  aaa_B.DataTypeConversion[6] = aaa_B.diancifa16_2;
  aaa_B.DataTypeConversion[7] = aaa_B.diancifa16_3;
  aaa_B.DataTypeConversion[8] = aaa_B.DataTypeConversion7[3];
  aaa_B.DataTypeConversion[9] = aaa_B.DataTypeConversion2;
  aaa_B.DataTypeConversion[10] = aaa_B.DataTypeConversion7[5];
  aaa_B.DataTypeConversion[11] = aaa_B.DataTypeConversion7[7];
  aaa_B.DataTypeConversion[12] = aaa_B.DataTypeConversion7[8];
  aaa_B.DataTypeConversion[13] = aaa_B.DataTypeConversion7[9];
  aaa_B.DataTypeConversion[14] = aaa_B.DataTypeConversion7[10];

  /* Switch: '<S13>/Switch12' */
  if (aaa_B.DataTypeConversion3 >= aaa_P.Switch12_Threshold) {
    aaa_B.Switch12 = aaa_B.bililiuliangfa18_1;
  } else {
    aaa_B.Switch12 = aaa_B.MultiportSwitch1[11];
  }

  /* End of Switch: '<S13>/Switch12' */

  /* Switch: '<S13>/Switch13' */
  if (aaa_B.DataTypeConversion3 >= aaa_P.Switch13_Threshold) {
    aaa_B.Switch13 = aaa_B.bililiuliangfa18_2;
  } else {
    aaa_B.Switch13 = aaa_B.MultiportSwitch1[12];
  }

  /* End of Switch: '<S13>/Switch13' */

  /* Switch: '<S13>/Switch14' */
  if (aaa_B.DataTypeConversion3 >= aaa_P.Switch14_Threshold) {
    aaa_B.Switch14 = aaa_B.bililiuliangfa18_3;
  } else {
    aaa_B.Switch14 = aaa_B.MultiportSwitch1[13];
  }

  /* End of Switch: '<S13>/Switch14' */

  /* Switch: '<S13>/Switch17' */
  if (aaa_B.DataTypeConversion3 >= aaa_P.Switch17_Threshold) {
    aaa_B.Switch17 = aaa_B.bililiuliangfa18_4;
  } else {
    aaa_B.Switch17 = aaa_B.MultiportSwitch1[14];
  }

  /* End of Switch: '<S13>/Switch17' */

  /* Switch: '<S13>/Switch18' */
  if (aaa_B.DataTypeConversion3 >= aaa_P.Switch18_Threshold) {
    aaa_B.Switch18 = aaa_B.kaiguangaifa;
  } else {
    aaa_B.Switch18 = aaa_B.MultiportSwitch1[15];
  }

  /* End of Switch: '<S13>/Switch18' */

  /* DataTypeConversion: '<Root>/Data Type Conversion5' */
  aaa_B.DataTypeConversion5_b[0] = aaa_B.Switch12;
  aaa_B.DataTypeConversion5_b[1] = aaa_B.Switch13;
  aaa_B.DataTypeConversion5_b[2] = aaa_B.Switch14;
  aaa_B.DataTypeConversion5_b[3] = aaa_B.Switch17;
  aaa_B.DataTypeConversion5_b[4] = aaa_B.Switch18;

  /* MultiPortSwitch: '<S14>/Multiport Switch' */
  if ((int32_T)aaa_B.DataTypeConversion4 == 0) {
    aaa_B.MultiportSwitch[0] = aaa_B.SCzhushuiwancheng;
    aaa_B.MultiportSwitch[1] = aaa_B.SCjiayawancheng;
    aaa_B.MultiportSwitch[2] = aaa_B.SXQjunyawancheng;
    aaa_B.MultiportSwitch[3] = aaa_B.SXQxieyawancheng;
    aaa_B.MultiportSwitch[4] = aaa_B.SQshiyabuchangwancheng;
    aaa_B.MultiportSwitch[5] = aaa_B.SQxuanjinjianyawancheng;
    aaa_B.MultiportSwitch[6] = aaa_B.kaigaiwancheng;
    aaa_B.MultiportSwitch[7] = aaa_B.guangaiwancheng;
  } else {
    aaa_B.MultiportSwitch[0] = aaa_B.SCzhushuiwancheng_c;
    aaa_B.MultiportSwitch[1] = aaa_B.SCjiayawancheng_k;
    aaa_B.MultiportSwitch[2] = aaa_B.SXQjunyawancheng_h;
    aaa_B.MultiportSwitch[3] = aaa_B.SXQxieyawancheng_g;
    aaa_B.MultiportSwitch[4] = aaa_B.SQshiyabuchangwancheng_l;
    aaa_B.MultiportSwitch[5] = aaa_B.SQxuanjinjianyawancheng_n;
    aaa_B.MultiportSwitch[6] = aaa_B.kaigaiwancheng_b;
    aaa_B.MultiportSwitch[7] = aaa_B.guangaiwancheng_f;
  }

  /* End of MultiPortSwitch: '<S14>/Multiport Switch' */

  /* Lookup_n-D: '<Root>/1-D Lookup Table' */
  aaa_B.uDLookupTable_j = look1_binlxpw(aaa_B.uDLookupTable,
    aaa_P.uDLookupTable_bp01Data_m, aaa_P.uDLookupTable_tableData_c, 1U);

  /* Gain: '<Root>/Gain' */
  aaa_B.Gain = aaa_P.Gain_Gain_b * aaa_B.uDLookupTable_j;

  /* DataTypeConversion: '<S6>/Data Type Conversion' */
  for (i = 0; i < 5; i++) {
    aaa_B.DataTypeConversion_g[i] = aaa_B.DataTypeConversion5_b[i];
  }

  /* End of DataTypeConversion: '<S6>/Data Type Conversion' */

  /* Saturate: '<S6>/Saturation' */
  u0 = aaa_B.DataTypeConversion_g[0];
  tmp = aaa_P.Saturation_LowerSat_c;
  tmp_0 = aaa_P.Saturation_UpperSat_e;
  if (u0 > tmp_0) {
    aaa_B.Saturation_e = tmp_0;
  } else if (u0 < tmp) {
    aaa_B.Saturation_e = tmp;
  } else {
    aaa_B.Saturation_e = u0;
  }

  /* End of Saturate: '<S6>/Saturation' */

  /* Saturate: '<S6>/Saturation1' */
  u0 = aaa_B.DataTypeConversion_g[1];
  tmp = aaa_P.Saturation1_LowerSat_c;
  tmp_0 = aaa_P.Saturation1_UpperSat_i;
  if (u0 > tmp_0) {
    aaa_B.Saturation1_p = tmp_0;
  } else if (u0 < tmp) {
    aaa_B.Saturation1_p = tmp;
  } else {
    aaa_B.Saturation1_p = u0;
  }

  /* End of Saturate: '<S6>/Saturation1' */

  /* Saturate: '<S6>/Saturation2' */
  u0 = aaa_B.DataTypeConversion_g[2];
  tmp = aaa_P.Saturation2_LowerSat;
  tmp_0 = aaa_P.Saturation2_UpperSat;
  if (u0 > tmp_0) {
    aaa_B.Saturation2 = tmp_0;
  } else if (u0 < tmp) {
    aaa_B.Saturation2 = tmp;
  } else {
    aaa_B.Saturation2 = u0;
  }

  /* End of Saturate: '<S6>/Saturation2' */

  /* Saturate: '<S6>/Saturation3' */
  u0 = aaa_B.DataTypeConversion_g[3];
  tmp = aaa_P.Saturation3_LowerSat;
  tmp_0 = aaa_P.Saturation3_UpperSat;
  if (u0 > tmp_0) {
    aaa_B.Saturation3 = tmp_0;
  } else if (u0 < tmp) {
    aaa_B.Saturation3 = tmp;
  } else {
    aaa_B.Saturation3 = u0;
  }

  /* End of Saturate: '<S6>/Saturation3' */

  /* Saturate: '<S6>/Saturation4' */
  u0 = aaa_B.DataTypeConversion_g[4];
  tmp = aaa_P.Saturation4_LowerSat;
  tmp_0 = aaa_P.Saturation4_UpperSat;
  if (u0 > tmp_0) {
    aaa_B.Saturation4 = tmp_0;
  } else if (u0 < tmp) {
    aaa_B.Saturation4 = tmp;
  } else {
    aaa_B.Saturation4 = u0;
  }

  /* End of Saturate: '<S6>/Saturation4' */

  /* Saturate: '<S6>/Saturation5' incorporates:
   *  Constant: '<S6>/Constant'
   */
  u0 = aaa_P.Constant_Value_f1;
  tmp = aaa_P.Saturation5_LowerSat;
  tmp_0 = aaa_P.Saturation5_UpperSat;
  if (u0 > tmp_0) {
    aaa_B.Saturation5 = tmp_0;
  } else if (u0 < tmp) {
    aaa_B.Saturation5 = tmp;
  } else {
    aaa_B.Saturation5 = u0;
  }

  /* End of Saturate: '<S6>/Saturation5' */

  /* Saturate: '<S6>/Saturation6' incorporates:
   *  Constant: '<S6>/Constant1'
   */
  u0 = aaa_P.Constant1_Value_m;
  tmp = aaa_P.Saturation6_LowerSat;
  tmp_0 = aaa_P.Saturation6_UpperSat;
  if (u0 > tmp_0) {
    aaa_B.Saturation6 = tmp_0;
  } else if (u0 < tmp) {
    aaa_B.Saturation6 = tmp;
  } else {
    aaa_B.Saturation6 = u0;
  }

  /* End of Saturate: '<S6>/Saturation6' */

  /* Saturate: '<S6>/Saturation7' incorporates:
   *  Constant: '<Root>/bilijianyafa'
   */
  u0 = aaa_P.bilijianyafa_Value;
  tmp = aaa_P.Saturation7_LowerSat;
  tmp_0 = aaa_P.Saturation7_UpperSat;
  if (u0 > tmp_0) {
    aaa_B.Saturation7 = tmp_0;
  } else if (u0 < tmp) {
    aaa_B.Saturation7 = tmp;
  } else {
    aaa_B.Saturation7 = u0;
  }

  /* End of Saturate: '<S6>/Saturation7' */

  /* Level2 S-Function Block: '<S6>/PCI-6208A DA ' (da6208) */
  {
    SimStruct *rts = aaa_M->childSfunctions[1];
    sfcnOutputs(rts, 1);
  }

  /* ok to acquire for <S7>/S-Function */
  aaa_DW.SFunction_IWORK.AcquireOK = 1;

  /* ok to acquire for <S8>/S-Function */
  aaa_DW.SFunction_IWORK_n.AcquireOK = 1;

  /* ok to acquire for <S9>/S-Function */
  aaa_DW.SFunction_IWORK_p.AcquireOK = 1;

  /* ok to acquire for <S10>/S-Function */
  aaa_DW.SFunction_IWORK_i.AcquireOK = 1;

  /* ok to acquire for <S11>/S-Function */
  aaa_DW.SFunction_IWORK_g.AcquireOK = 1;

  /* ok to acquire for <S12>/S-Function */
  aaa_DW.SFunction_IWORK_c.AcquireOK = 1;

  /* Sum: '<Root>/Add1' */
  aaa_B.Add1 = aaa_B.DataTypeConversion27[0] - aaa_B.DataTypeConversion27[2];

  /* RelationalOperator: '<S1>/Compare' incorporates:
   *  Constant: '<S1>/Constant'
   */
  aaa_B.Compare_m = (aaa_B.Add1 <= aaa_P.CompareToConstant_const);

  /* RelationalOperator: '<S2>/Compare' incorporates:
   *  Constant: '<S2>/Constant'
   */
  aaa_B.Compare_lg = (aaa_B.Add1 >= aaa_P.CompareToConstant1_const_k);

  /* DataTypeConversion: '<Root>/Data Type Conversion10' */
  memcpy(&aaa_B.DataTypeConversion10[0], &aaa_B.MultiportSwitch[0], sizeof
         (real_T) << 3U);

  /* Logic: '<Root>/Logical Operator' */
  aaa_B.LogicalOperator_k = (aaa_B.Compare_m && aaa_B.Compare_lg);

  /* Memory: '<Root>/Memory2' */
  aaa_B.Memory2 = aaa_DW.Memory2_PreviousInput;

  /* Logic: '<Root>/Logical Operator5' */
  aaa_B.LogicalOperator5 = (aaa_B.LogicalOperator_k || (aaa_B.Memory2 != 0.0));

  /* Logic: '<Root>/Logical Operator6' incorporates:
   *  Constant: '<Root>/shiyabuchang'
   */
  aaa_B.LogicalOperator6 = (aaa_B.LogicalOperator5 && (aaa_P.shiyabuchang_Value
    != 0.0));

  /* Switch: '<Root>/Switch' incorporates:
   *  Constant: '<Root>/Constant1'
   *  Constant: '<Root>/Constant3'
   */
  if (aaa_B.LogicalOperator6) {
    aaa_B.Switch_kw = aaa_P.Constant1_Value;
  } else {
    aaa_B.Switch_kw = aaa_P.Constant3_Value;
  }

  /* End of Switch: '<Root>/Switch' */

  /* DataTypeConversion: '<Root>/Data Type Conversion30' */
  aaa_B.DataTypeConversion30 = aaa_B.Switch_kw;

  /* DataTypeConversion: '<Root>/Data Type Conversion31' incorporates:
   *  Constant: '<Root>/xuanjinjianya'
   */
  aaa_B.DataTypeConversion31 = aaa_P.xuanjinjianya_Value;

  /* MultiPortSwitch: '<S14>/Multiport Switch2' incorporates:
   *  MultiPortSwitch: '<S14>/Multiport Switch3'
   */
  if ((int32_T)aaa_B.DataTypeConversion4 == 0) {
    aaa_B.MultiportSwitch2 = aaa_B.kaigaikaishi;
    aaa_B.MultiportSwitch3 = aaa_B.guangaikaishi;
  } else {
    aaa_B.MultiportSwitch2 = aaa_B.kaigaikaishi_e;
    aaa_B.MultiportSwitch3 = aaa_B.guangaikaishi_o;
  }

  /* End of MultiPortSwitch: '<S14>/Multiport Switch2' */

  /* DataTypeConversion: '<Root>/Data Type Conversion32' */
  aaa_B.DataTypeConversion32 = aaa_B.MultiportSwitch2;

  /* DataTypeConversion: '<Root>/Data Type Conversion33' */
  aaa_B.DataTypeConversion33 = aaa_B.MultiportSwitch3;

  /* DataTypeConversion: '<S17>/Data Type Conversion' incorporates:
   *  Constant: '<S17>/Constant'
   */
  u0 = floor(aaa_P.Constant_Value_fr);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  aaa_B.DataTypeConversion_n = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)
    (uint8_T)-u0 : (int32_T)(uint8_T)u0);

  /* End of DataTypeConversion: '<S17>/Data Type Conversion' */

  /* DataTypeConversion: '<S17>/Data Type Conversion1' incorporates:
   *  Constant: '<S17>/Constant1'
   */
  u0 = floor(aaa_P.Constant1_Value_f);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  aaa_B.DataTypeConversion1_e = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)
    (uint8_T)-u0 : (int32_T)(uint8_T)u0);

  /* End of DataTypeConversion: '<S17>/Data Type Conversion1' */

  /* DataTypeConversion: '<S17>/Data Type Conversion2' incorporates:
   *  Constant: '<S17>/Constant2'
   */
  u0 = floor(aaa_P.Constant2_Value_d);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  aaa_B.DataTypeConversion2_b = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)
    (uint8_T)-u0 : (int32_T)(uint8_T)u0);

  /* End of DataTypeConversion: '<S17>/Data Type Conversion2' */

  /* DataTypeConversion: '<S17>/Data Type Conversion3' incorporates:
   *  Constant: '<S17>/Constant3'
   */
  u0 = floor(aaa_P.Constant3_Value_m);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  aaa_B.DataTypeConversion3_p = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)
    (uint8_T)-u0 : (int32_T)(uint8_T)u0);

  /* End of DataTypeConversion: '<S17>/Data Type Conversion3' */

  /* DataTypeConversion: '<S17>/Data Type Conversion4' incorporates:
   *  Constant: '<S17>/Constant4'
   */
  u0 = floor(aaa_P.Constant4_Value_k);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  aaa_B.DataTypeConversion4_o = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)
    (uint8_T)-u0 : (int32_T)(uint8_T)u0);

  /* End of DataTypeConversion: '<S17>/Data Type Conversion4' */

  /* DataTypeConversion: '<S17>/Data Type Conversion5' incorporates:
   *  Constant: '<S17>/Constant5'
   */
  u0 = floor(aaa_P.Constant5_Value_j);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  aaa_B.DataTypeConversion5_e = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)
    (uint8_T)-u0 : (int32_T)(uint8_T)u0);

  /* End of DataTypeConversion: '<S17>/Data Type Conversion5' */

  /* DataTypeConversion: '<S17>/Data Type Conversion6' incorporates:
   *  Constant: '<S17>/Constant6'
   */
  u0 = floor(aaa_P.Constant6_Value_h);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  aaa_B.DataTypeConversion6_g = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)
    (uint8_T)-u0 : (int32_T)(uint8_T)u0);

  /* End of DataTypeConversion: '<S17>/Data Type Conversion6' */

  /* DataTypeConversion: '<S17>/Data Type Conversion7' incorporates:
   *  Constant: '<S17>/Constant7'
   */
  u0 = floor(aaa_P.Constant7_Value_c);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  aaa_B.DataTypeConversion7_m = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)
    (uint8_T)-u0 : (int32_T)(uint8_T)u0);

  /* End of DataTypeConversion: '<S17>/Data Type Conversion7' */

  /* ManualSwitch: '<S17>/Manual Switch2' */
  if (aaa_P.ManualSwitch2_CurrentSetting == 1) {
    aaa_B.ManualSwitch2[0] = aaa_B.DataTypeConversion_n;
    aaa_B.ManualSwitch2[1] = aaa_B.DataTypeConversion1_e;
    aaa_B.ManualSwitch2[2] = aaa_B.DataTypeConversion2_b;
    aaa_B.ManualSwitch2[3] = aaa_B.DataTypeConversion3_p;
    aaa_B.ManualSwitch2[4] = aaa_B.DataTypeConversion4_o;
    aaa_B.ManualSwitch2[5] = aaa_B.DataTypeConversion5_e;
    aaa_B.ManualSwitch2[6] = aaa_B.DataTypeConversion6_g;
    aaa_B.ManualSwitch2[7] = aaa_B.DataTypeConversion7_m;
  } else {
    /* DataTypeConversion: '<S17>/Data Type Conversion30' incorporates:
     *  Constant: '<S17>/Constant30'
     */
    u0 = floor(aaa_P.Constant30_Value);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaa_B.DataTypeConversion30_b = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion30' */

    /* DataTypeConversion: '<S17>/Data Type Conversion31' incorporates:
     *  Constant: '<S17>/Constant31'
     */
    u0 = floor(aaa_P.Constant31_Value);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaa_B.DataTypeConversion31_i = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion31' */

    /* DataTypeConversion: '<S17>/Data Type Conversion24' incorporates:
     *  Constant: '<S17>/Constant24'
     */
    u0 = floor(aaa_P.Constant24_Value_pr);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaa_B.DataTypeConversion24_p = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion24' */

    /* DataTypeConversion: '<S17>/Data Type Conversion25' incorporates:
     *  Constant: '<S17>/Constant25'
     */
    u0 = floor(aaa_P.Constant25_Value_i);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaa_B.DataTypeConversion25_m = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion25' */

    /* DataTypeConversion: '<S17>/Data Type Conversion26' incorporates:
     *  Constant: '<S17>/Constant26'
     */
    u0 = floor(aaa_P.Constant26_Value_k);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaa_B.DataTypeConversion26_o = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion26' */

    /* DataTypeConversion: '<S17>/Data Type Conversion27' incorporates:
     *  Constant: '<S17>/Constant27'
     */
    u0 = floor(aaa_P.Constant27_Value_ig);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaa_B.DataTypeConversion27_j = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion27' */

    /* DataTypeConversion: '<S17>/Data Type Conversion28' incorporates:
     *  Constant: '<S17>/Constant28'
     */
    u0 = floor(aaa_P.Constant28_Value_a);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaa_B.DataTypeConversion28_f = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion28' */

    /* DataTypeConversion: '<S17>/Data Type Conversion29' incorporates:
     *  Constant: '<S17>/Constant29'
     */
    u0 = floor(aaa_P.Constant29_Value_h);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaa_B.DataTypeConversion29_d = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion29' */
    aaa_B.ManualSwitch2[0] = aaa_B.DataTypeConversion30_b;
    aaa_B.ManualSwitch2[1] = aaa_B.DataTypeConversion31_i;
    aaa_B.ManualSwitch2[2] = aaa_B.DataTypeConversion24_p;
    aaa_B.ManualSwitch2[3] = aaa_B.DataTypeConversion25_m;
    aaa_B.ManualSwitch2[4] = aaa_B.DataTypeConversion26_o;
    aaa_B.ManualSwitch2[5] = aaa_B.DataTypeConversion27_j;
    aaa_B.ManualSwitch2[6] = aaa_B.DataTypeConversion28_f;
    aaa_B.ManualSwitch2[7] = aaa_B.DataTypeConversion29_d;
  }

  /* End of ManualSwitch: '<S17>/Manual Switch2' */
  /* Bit Packing: <S17>/CAN bit-packing 2 */
  {
    uint32_T *y = (uint32_T *)&aaa_B.CANbitpacking2;
    y[0] =
      ((uint32_T)(aaa_B.ManualSwitch2[0] & 0xff) |
       ((uint32_T)(aaa_B.ManualSwitch2[1] & 0xff) << 8) |
       ((uint32_T)(aaa_B.ManualSwitch2[2] & 0xff) << 16) |
       ((uint32_T)(aaa_B.ManualSwitch2[3] & 0xff) << 24));
    y[1] =
      ((uint32_T)(aaa_B.ManualSwitch2[4] & 0xff) |
       ((uint32_T)(aaa_B.ManualSwitch2[5] & 0xff) << 8) |
       ((uint32_T)(aaa_B.ManualSwitch2[6] & 0xff) << 16) |
       ((uint32_T)(aaa_B.ManualSwitch2[7] & 0xff) << 24));
  }

  /* S-Function (canac2objsendx): '<S17>/kaiguangaiweiyi3402Send' */
  {
    /*------------ S-Function Block: <S17>/kaiguangaiweiyi3402Send ------------*/
    if (!g_xpccanac2busstatusx[1-1]) {
      int_T stat;
      EFLAGS_T flags;
      flags = saveAndDisableInterrupts();
      stat = CANPC_write_object2_mbx( 1, 1, 8, (uint8_T *)&aaa_B.CANbitpacking2);
      restoreInterrupts(flags);
      ;
    }
  }

  /* ManualSwitch: '<S17>/Manual Switch4' */
  if (aaa_P.ManualSwitch4_CurrentSetting == 1) {
    aaa_B.ManualSwitch4[0] = aaa_B.DataTypeConversion_n;
    aaa_B.ManualSwitch4[1] = aaa_B.DataTypeConversion1_e;
    aaa_B.ManualSwitch4[2] = aaa_B.DataTypeConversion2_b;
    aaa_B.ManualSwitch4[3] = aaa_B.DataTypeConversion3_p;
    aaa_B.ManualSwitch4[4] = aaa_B.DataTypeConversion4_o;
    aaa_B.ManualSwitch4[5] = aaa_B.DataTypeConversion5_e;
    aaa_B.ManualSwitch4[6] = aaa_B.DataTypeConversion6_g;
    aaa_B.ManualSwitch4[7] = aaa_B.DataTypeConversion7_m;
  } else {
    /* DataTypeConversion: '<S17>/Data Type Conversion46' incorporates:
     *  Constant: '<S17>/Constant46'
     */
    u0 = floor(aaa_P.Constant46_Value);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaa_B.DataTypeConversion46 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)
      (uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion46' */

    /* DataTypeConversion: '<S17>/Data Type Conversion47' incorporates:
     *  Constant: '<S17>/Constant47'
     */
    u0 = floor(aaa_P.Constant47_Value);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaa_B.DataTypeConversion47 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)
      (uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion47' */

    /* DataTypeConversion: '<S17>/Data Type Conversion40' incorporates:
     *  Constant: '<S17>/Constant40'
     */
    u0 = floor(aaa_P.Constant40_Value);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaa_B.DataTypeConversion40 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)
      (uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion40' */

    /* DataTypeConversion: '<S17>/Data Type Conversion41' incorporates:
     *  Constant: '<S17>/Constant41'
     */
    u0 = floor(aaa_P.Constant41_Value);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaa_B.DataTypeConversion41 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)
      (uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion41' */

    /* DataTypeConversion: '<S17>/Data Type Conversion42' incorporates:
     *  Constant: '<S17>/Constant42'
     */
    u0 = floor(aaa_P.Constant42_Value);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaa_B.DataTypeConversion42 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)
      (uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion42' */

    /* DataTypeConversion: '<S17>/Data Type Conversion43' incorporates:
     *  Constant: '<S17>/Constant43'
     */
    u0 = floor(aaa_P.Constant43_Value);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaa_B.DataTypeConversion43 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)
      (uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion43' */

    /* DataTypeConversion: '<S17>/Data Type Conversion44' incorporates:
     *  Constant: '<S17>/Constant44'
     */
    u0 = floor(aaa_P.Constant44_Value);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaa_B.DataTypeConversion44 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)
      (uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion44' */

    /* DataTypeConversion: '<S17>/Data Type Conversion45' incorporates:
     *  Constant: '<S17>/Constant45'
     */
    u0 = floor(aaa_P.Constant45_Value);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaa_B.DataTypeConversion45 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)
      (uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion45' */
    aaa_B.ManualSwitch4[0] = aaa_B.DataTypeConversion46;
    aaa_B.ManualSwitch4[1] = aaa_B.DataTypeConversion47;
    aaa_B.ManualSwitch4[2] = aaa_B.DataTypeConversion40;
    aaa_B.ManualSwitch4[3] = aaa_B.DataTypeConversion41;
    aaa_B.ManualSwitch4[4] = aaa_B.DataTypeConversion42;
    aaa_B.ManualSwitch4[5] = aaa_B.DataTypeConversion43;
    aaa_B.ManualSwitch4[6] = aaa_B.DataTypeConversion44;
    aaa_B.ManualSwitch4[7] = aaa_B.DataTypeConversion45;
  }

  /* End of ManualSwitch: '<S17>/Manual Switch4' */
  /* Bit Packing: <S17>/CAN bit-packing 4 */
  {
    uint32_T *y = (uint32_T *)&aaa_B.CANbitpacking4;
    y[0] =
      ((uint32_T)(aaa_B.ManualSwitch4[0] & 0xff) |
       ((uint32_T)(aaa_B.ManualSwitch4[1] & 0xff) << 8) |
       ((uint32_T)(aaa_B.ManualSwitch4[2] & 0xff) << 16) |
       ((uint32_T)(aaa_B.ManualSwitch4[3] & 0xff) << 24));
    y[1] =
      ((uint32_T)(aaa_B.ManualSwitch4[4] & 0xff) |
       ((uint32_T)(aaa_B.ManualSwitch4[5] & 0xff) << 8) |
       ((uint32_T)(aaa_B.ManualSwitch4[6] & 0xff) << 16) |
       ((uint32_T)(aaa_B.ManualSwitch4[7] & 0xff) << 24));
  }

  /* S-Function (canac2objsendx): '<S17>/liuliangji_fuqiuyeweiji3402Send' */
  {
    /*------------ S-Function Block: <S17>/liuliangji_fuqiuyeweiji3402Send ------------*/
    if (!g_xpccanac2busstatusx[1-1]) {
      int_T stat;
      EFLAGS_T flags;
      flags = saveAndDisableInterrupts();
      stat = CANPC_write_object2_mbx( 1, 3, 8, (uint8_T *)&aaa_B.CANbitpacking4);
      restoreInterrupts(flags);
      ;
    }
  }

  /* ManualSwitch: '<S17>/Manual Switch' */
  if (aaa_P.ManualSwitch_CurrentSetting == 1) {
    aaa_B.ManualSwitch[0] = aaa_B.DataTypeConversion_n;
    aaa_B.ManualSwitch[1] = aaa_B.DataTypeConversion1_e;
    aaa_B.ManualSwitch[2] = aaa_B.DataTypeConversion2_b;
    aaa_B.ManualSwitch[3] = aaa_B.DataTypeConversion3_p;
    aaa_B.ManualSwitch[4] = aaa_B.DataTypeConversion4_o;
    aaa_B.ManualSwitch[5] = aaa_B.DataTypeConversion5_e;
    aaa_B.ManualSwitch[6] = aaa_B.DataTypeConversion6_g;
    aaa_B.ManualSwitch[7] = aaa_B.DataTypeConversion7_m;
  } else {
    /* DataTypeConversion: '<S17>/Data Type Conversion8' incorporates:
     *  Constant: '<S17>/Constant8'
     */
    u0 = floor(aaa_P.Constant8_Value_p);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaa_B.DataTypeConversion8_l = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion8' */

    /* DataTypeConversion: '<S17>/Data Type Conversion9' incorporates:
     *  Constant: '<S17>/Constant9'
     */
    u0 = floor(aaa_P.Constant9_Value_i);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaa_B.DataTypeConversion9_p = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion9' */

    /* DataTypeConversion: '<S17>/Data Type Conversion10' incorporates:
     *  Constant: '<S17>/Constant10'
     */
    u0 = floor(aaa_P.Constant10_Value_f);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaa_B.DataTypeConversion10_e = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion10' */

    /* DataTypeConversion: '<S17>/Data Type Conversion11' incorporates:
     *  Constant: '<S17>/Constant11'
     */
    u0 = floor(aaa_P.Constant11_Value_d);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaa_B.DataTypeConversion11_i = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion11' */

    /* DataTypeConversion: '<S17>/Data Type Conversion12' incorporates:
     *  Constant: '<S17>/Constant12'
     */
    u0 = floor(aaa_P.Constant12_Value_i);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaa_B.DataTypeConversion12_h = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion12' */

    /* DataTypeConversion: '<S17>/Data Type Conversion13' incorporates:
     *  Constant: '<S17>/Constant13'
     */
    u0 = floor(aaa_P.Constant13_Value_e);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaa_B.DataTypeConversion13_f = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion13' */

    /* DataTypeConversion: '<S17>/Data Type Conversion14' incorporates:
     *  Constant: '<S17>/Constant14'
     */
    u0 = floor(aaa_P.Constant14_Value_b);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaa_B.DataTypeConversion14_p = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion14' */

    /* DataTypeConversion: '<S17>/Data Type Conversion15' incorporates:
     *  Constant: '<S17>/Constant15'
     */
    u0 = floor(aaa_P.Constant15_Value_br);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaa_B.DataTypeConversion15_i = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion15' */
    aaa_B.ManualSwitch[0] = aaa_B.DataTypeConversion8_l;
    aaa_B.ManualSwitch[1] = aaa_B.DataTypeConversion9_p;
    aaa_B.ManualSwitch[2] = aaa_B.DataTypeConversion10_e;
    aaa_B.ManualSwitch[3] = aaa_B.DataTypeConversion11_i;
    aaa_B.ManualSwitch[4] = aaa_B.DataTypeConversion12_h;
    aaa_B.ManualSwitch[5] = aaa_B.DataTypeConversion13_f;
    aaa_B.ManualSwitch[6] = aaa_B.DataTypeConversion14_p;
    aaa_B.ManualSwitch[7] = aaa_B.DataTypeConversion15_i;
  }

  /* End of ManualSwitch: '<S17>/Manual Switch' */
  /* Bit Packing: <S17>/CAN bit-packing  */
  {
    uint32_T *y = (uint32_T *)&aaa_B.CANbitpacking;
    y[0] =
      ((uint32_T)(aaa_B.ManualSwitch[0] & 0xff) |
       ((uint32_T)(aaa_B.ManualSwitch[1] & 0xff) << 8) |
       ((uint32_T)(aaa_B.ManualSwitch[2] & 0xff) << 16) |
       ((uint32_T)(aaa_B.ManualSwitch[3] & 0xff) << 24));
    y[1] =
      ((uint32_T)(aaa_B.ManualSwitch[4] & 0xff) |
       ((uint32_T)(aaa_B.ManualSwitch[5] & 0xff) << 8) |
       ((uint32_T)(aaa_B.ManualSwitch[6] & 0xff) << 16) |
       ((uint32_T)(aaa_B.ManualSwitch[7] & 0xff) << 24));
  }

  /* S-Function (canac2objsendx): '<S17>/tonggai1808Send' */
  {
    /*------------ S-Function Block: <S17>/tonggai1808Send ------------*/
    if (!g_xpccanac2busstatusx[1-1]) {
      int_T stat;
      EFLAGS_T flags;
      flags = saveAndDisableInterrupts();
      stat = CANPC_write_object_mbx( 1, 0, 8, (uint8_T *)&aaa_B.CANbitpacking);
      restoreInterrupts(flags);
      ;
    }
  }

  /* ManualSwitch: '<S17>/Manual Switch1' */
  if (aaa_P.ManualSwitch1_CurrentSetting == 1) {
    aaa_B.ManualSwitch1[0] = aaa_B.DataTypeConversion_n;
    aaa_B.ManualSwitch1[1] = aaa_B.DataTypeConversion1_e;
    aaa_B.ManualSwitch1[2] = aaa_B.DataTypeConversion2_b;
    aaa_B.ManualSwitch1[3] = aaa_B.DataTypeConversion3_p;
    aaa_B.ManualSwitch1[4] = aaa_B.DataTypeConversion4_o;
    aaa_B.ManualSwitch1[5] = aaa_B.DataTypeConversion5_e;
    aaa_B.ManualSwitch1[6] = aaa_B.DataTypeConversion6_g;
    aaa_B.ManualSwitch1[7] = aaa_B.DataTypeConversion7_m;
  } else {
    /* DataTypeConversion: '<S17>/Data Type Conversion22' incorporates:
     *  Constant: '<S17>/Constant22'
     */
    u0 = floor(aaa_P.Constant22_Value_d);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaa_B.DataTypeConversion22_l = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion22' */

    /* DataTypeConversion: '<S17>/Data Type Conversion23' incorporates:
     *  Constant: '<S17>/Constant23'
     */
    u0 = floor(aaa_P.Constant23_Value_j);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaa_B.DataTypeConversion23_c = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion23' */

    /* DataTypeConversion: '<S17>/Data Type Conversion16' incorporates:
     *  Constant: '<S17>/Constant16'
     */
    u0 = floor(aaa_P.Constant16_Value_k);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaa_B.DataTypeConversion16_o = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion16' */

    /* DataTypeConversion: '<S17>/Data Type Conversion17' incorporates:
     *  Constant: '<S17>/Constant17'
     */
    u0 = floor(aaa_P.Constant17_Value_m);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaa_B.DataTypeConversion17_o = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion17' */

    /* DataTypeConversion: '<S17>/Data Type Conversion18' incorporates:
     *  Constant: '<S17>/Constant18'
     */
    u0 = floor(aaa_P.Constant18_Value_l);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaa_B.DataTypeConversion18_o = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion18' */

    /* DataTypeConversion: '<S17>/Data Type Conversion19' incorporates:
     *  Constant: '<S17>/Constant19'
     */
    u0 = floor(aaa_P.Constant19_Value_b);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaa_B.DataTypeConversion19_j = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion19' */

    /* DataTypeConversion: '<S17>/Data Type Conversion20' incorporates:
     *  Constant: '<S17>/Constant20'
     */
    u0 = floor(aaa_P.Constant20_Value_o);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaa_B.DataTypeConversion20_a = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion20' */

    /* DataTypeConversion: '<S17>/Data Type Conversion21' incorporates:
     *  Constant: '<S17>/Constant21'
     */
    u0 = floor(aaa_P.Constant21_Value_p);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaa_B.DataTypeConversion21_m = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion21' */
    aaa_B.ManualSwitch1[0] = aaa_B.DataTypeConversion22_l;
    aaa_B.ManualSwitch1[1] = aaa_B.DataTypeConversion23_c;
    aaa_B.ManualSwitch1[2] = aaa_B.DataTypeConversion16_o;
    aaa_B.ManualSwitch1[3] = aaa_B.DataTypeConversion17_o;
    aaa_B.ManualSwitch1[4] = aaa_B.DataTypeConversion18_o;
    aaa_B.ManualSwitch1[5] = aaa_B.DataTypeConversion19_j;
    aaa_B.ManualSwitch1[6] = aaa_B.DataTypeConversion20_a;
    aaa_B.ManualSwitch1[7] = aaa_B.DataTypeConversion21_m;
  }

  /* End of ManualSwitch: '<S17>/Manual Switch1' */
  /* Bit Packing: <S17>/CAN bit-packing 1 */
  {
    uint32_T *y = (uint32_T *)&aaa_B.CANbitpacking1;
    y[0] =
      ((uint32_T)(aaa_B.ManualSwitch1[0] & 0xff) |
       ((uint32_T)(aaa_B.ManualSwitch1[1] & 0xff) << 8) |
       ((uint32_T)(aaa_B.ManualSwitch1[2] & 0xff) << 16) |
       ((uint32_T)(aaa_B.ManualSwitch1[3] & 0xff) << 24));
    y[1] =
      ((uint32_T)(aaa_B.ManualSwitch1[4] & 0xff) |
       ((uint32_T)(aaa_B.ManualSwitch1[5] & 0xff) << 8) |
       ((uint32_T)(aaa_B.ManualSwitch1[6] & 0xff) << 16) |
       ((uint32_T)(aaa_B.ManualSwitch1[7] & 0xff) << 24));
  }

  /* S-Function (canac2objsendx): '<S17>/tonggai3402Send' */
  {
    /*------------ S-Function Block: <S17>/tonggai3402Send ------------*/
    if (!g_xpccanac2busstatusx[1-1]) {
      int_T stat;
      EFLAGS_T flags;
      flags = saveAndDisableInterrupts();
      stat = CANPC_write_object2_mbx( 1, 0, 8, (uint8_T *)&aaa_B.CANbitpacking1);
      restoreInterrupts(flags);
      ;
    }
  }

  /* ManualSwitch: '<S17>/Manual Switch3' */
  if (aaa_P.ManualSwitch3_CurrentSetting == 1) {
    aaa_B.ManualSwitch3[0] = aaa_B.DataTypeConversion_n;
    aaa_B.ManualSwitch3[1] = aaa_B.DataTypeConversion1_e;
    aaa_B.ManualSwitch3[2] = aaa_B.DataTypeConversion2_b;
    aaa_B.ManualSwitch3[3] = aaa_B.DataTypeConversion3_p;
    aaa_B.ManualSwitch3[4] = aaa_B.DataTypeConversion4_o;
    aaa_B.ManualSwitch3[5] = aaa_B.DataTypeConversion5_e;
    aaa_B.ManualSwitch3[6] = aaa_B.DataTypeConversion6_g;
    aaa_B.ManualSwitch3[7] = aaa_B.DataTypeConversion7_m;
  } else {
    /* DataTypeConversion: '<S17>/Data Type Conversion38' incorporates:
     *  Constant: '<S17>/Constant38'
     */
    u0 = floor(aaa_P.Constant38_Value);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaa_B.DataTypeConversion38 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)
      (uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion38' */

    /* DataTypeConversion: '<S17>/Data Type Conversion39' incorporates:
     *  Constant: '<S17>/Constant39'
     */
    u0 = floor(aaa_P.Constant39_Value);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaa_B.DataTypeConversion39 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)
      (uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion39' */

    /* DataTypeConversion: '<S17>/Data Type Conversion32' incorporates:
     *  Constant: '<S17>/Constant32'
     */
    u0 = floor(aaa_P.Constant32_Value);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaa_B.DataTypeConversion32_h = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion32' */

    /* DataTypeConversion: '<S17>/Data Type Conversion33' incorporates:
     *  Constant: '<S17>/Constant33'
     */
    u0 = floor(aaa_P.Constant33_Value);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaa_B.DataTypeConversion33_b = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion33' */

    /* DataTypeConversion: '<S17>/Data Type Conversion34' incorporates:
     *  Constant: '<S17>/Constant34'
     */
    u0 = floor(aaa_P.Constant34_Value);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaa_B.DataTypeConversion34_j = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion34' */

    /* DataTypeConversion: '<S17>/Data Type Conversion35' incorporates:
     *  Constant: '<S17>/Constant35'
     */
    u0 = floor(aaa_P.Constant35_Value);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaa_B.DataTypeConversion35_b = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
      -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion35' */

    /* DataTypeConversion: '<S17>/Data Type Conversion36' incorporates:
     *  Constant: '<S17>/Constant36'
     */
    u0 = floor(aaa_P.Constant36_Value);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaa_B.DataTypeConversion36 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)
      (uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion36' */

    /* DataTypeConversion: '<S17>/Data Type Conversion37' incorporates:
     *  Constant: '<S17>/Constant37'
     */
    u0 = floor(aaa_P.Constant37_Value);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 256.0);
    }

    aaa_B.DataTypeConversion37 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)-(int8_T)
      (uint8_T)-u0 : (int32_T)(uint8_T)u0);

    /* End of DataTypeConversion: '<S17>/Data Type Conversion37' */
    aaa_B.ManualSwitch3[0] = aaa_B.DataTypeConversion38;
    aaa_B.ManualSwitch3[1] = aaa_B.DataTypeConversion39;
    aaa_B.ManualSwitch3[2] = aaa_B.DataTypeConversion32_h;
    aaa_B.ManualSwitch3[3] = aaa_B.DataTypeConversion33_b;
    aaa_B.ManualSwitch3[4] = aaa_B.DataTypeConversion34_j;
    aaa_B.ManualSwitch3[5] = aaa_B.DataTypeConversion35_b;
    aaa_B.ManualSwitch3[6] = aaa_B.DataTypeConversion36;
    aaa_B.ManualSwitch3[7] = aaa_B.DataTypeConversion37;
  }

  /* End of ManualSwitch: '<S17>/Manual Switch3' */
  /* Bit Packing: <S17>/CAN bit-packing 3 */
  {
    uint32_T *y = (uint32_T *)&aaa_B.CANbitpacking3;
    y[0] =
      ((uint32_T)(aaa_B.ManualSwitch3[0] & 0xff) |
       ((uint32_T)(aaa_B.ManualSwitch3[1] & 0xff) << 8) |
       ((uint32_T)(aaa_B.ManualSwitch3[2] & 0xff) << 16) |
       ((uint32_T)(aaa_B.ManualSwitch3[3] & 0xff) << 24));
    y[1] =
      ((uint32_T)(aaa_B.ManualSwitch3[4] & 0xff) |
       ((uint32_T)(aaa_B.ManualSwitch3[5] & 0xff) << 8) |
       ((uint32_T)(aaa_B.ManualSwitch3[6] & 0xff) << 16) |
       ((uint32_T)(aaa_B.ManualSwitch3[7] & 0xff) << 24));
  }

  /* S-Function (canac2objsendx): '<S17>/yalichuanganqi3402Send' */
  {
    /*------------ S-Function Block: <S17>/yalichuanganqi3402Send ------------*/
    if (!g_xpccanac2busstatusx[1-1]) {
      int_T stat;
      EFLAGS_T flags;
      flags = saveAndDisableInterrupts();
      stat = CANPC_write_object2_mbx( 1, 2, 8, (uint8_T *)&aaa_B.CANbitpacking3);
      restoreInterrupts(flags);
      ;
    }
  }

  /* Level2 S-Function Block: '<S17>/Setup ' (canac2pcisetupx) */
  {
    SimStruct *rts = aaa_M->childSfunctions[2];
    sfcnOutputs(rts, 1);
  }

  /* Level2 S-Function Block: '<Root>/PCI-1784' (adpci_1784) */
  {
    SimStruct *rts = aaa_M->childSfunctions[3];
    sfcnOutputs(rts, 1);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion2' */
  aaa_B.DataTypeConversion2_c = aaa_B.PCI1784_o1;

  /* DataTypeConversion: '<Root>/Data Type Conversion29' */
  aaa_B.DataTypeConversion29 = aaa_B.PCI1784_o2;
}

/* Model update function */
static void aaa_update(void)
{
  /* Update for Memory: '<Root>/Memory' */
  aaa_DW.Memory_PreviousInput = aaa_B.DataTypeConversion32;

  /* Update for Memory: '<Root>/Memory1' */
  aaa_DW.Memory1_PreviousInput = aaa_B.DataTypeConversion33;

  /* Update for Memory: '<S22>/Memory' */
  aaa_DW.Memory_PreviousInput_c = aaa_B.Switch2;

  /* Update for Memory: '<S22>/Memory1' */
  aaa_DW.Memory1_PreviousInput_n = aaa_B.Switch;

  /* Update for Memory: '<S23>/Memory' */
  aaa_DW.Memory_PreviousInput_g = aaa_B.Switch2_k;

  /* Update for Memory: '<S24>/Memory' */
  aaa_DW.Memory_PreviousInput_o = aaa_B.Switch2_a;

  /* Update for Memory: '<S24>/Memory1' */
  aaa_DW.Memory1_PreviousInput_f = aaa_B.Switch_d;

  /* Update for Memory: '<S23>/Memory1' */
  aaa_DW.Memory1_PreviousInput_d = aaa_B.Switch_k;

  /* Update for Memory: '<Root>/Memory2' */
  aaa_DW.Memory2_PreviousInput = aaa_B.Switch_kw;

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
    if (!(++aaa_M->Timing.clockTick1)) {
      ++aaa_M->Timing.clockTickH1;
    }

    aaa_M->Timing.t[1] = aaa_M->Timing.clockTick1 * aaa_M->Timing.stepSize1 +
      aaa_M->Timing.clockTickH1 * aaa_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Model initialize function */
static void aaa_initialize(void)
{
  /* Start for Constant: '<S21>/fa11_1' */
  aaa_B.fa11_1 = aaa_P.fa11_1_Value;

  /* Start for Constant: '<S21>/fa11_2' */
  aaa_B.fa11_2 = aaa_P.fa11_2_Value;

  /* Start for Constant: '<S21>/fa11_5' */
  aaa_B.fa11_5 = aaa_P.fa11_5_Value;

  /* Start for Constant: '<S21>/fa20' */
  aaa_B.fa20 = aaa_P.fa20_Value;

  /* Start for Constant: '<S21>/fa16_1' */
  aaa_B.fa16_1 = aaa_P.fa16_1_Value;

  /* Start for Constant: '<S21>/fa3' */
  aaa_B.fa3 = aaa_P.fa3_Value;

  /* Start for Constant: '<S21>/fa21' */
  aaa_B.fa21 = aaa_P.fa21_Value;

  /* Start for Constant: '<S21>/xuansongmingling' */
  aaa_B.xuansongmingling = aaa_P.xuansongmingling_Value;

  /* Start for Constant: '<S21>/xuanjinmingling' */
  aaa_B.xuanjinmingling = aaa_P.xuanjinmingling_Value;

  /* Start for Constant: '<S21>/suodingmingling' */
  aaa_B.suodingmingling = aaa_P.suodingmingling_Value;

  /* Start for Constant: '<S21>/jiesuomingling' */
  aaa_B.jiesuomingling = aaa_P.jiesuomingling_Value;

  /* Start for Constant: '<S21>/fa18_1' */
  aaa_B.fa18_1 = aaa_P.fa18_1_Value;

  /* Start for Constant: '<S21>/fa18_2' */
  aaa_B.fa18_2 = aaa_P.fa18_2_Value;

  /* Start for Constant: '<S21>/fa18_3' */
  aaa_B.fa18_3 = aaa_P.fa18_3_Value;

  /* Start for Constant: '<S21>/fa18_4' */
  aaa_B.fa18_4 = aaa_P.fa18_4_Value;

  /* Start for Constant: '<S21>/fa_kgg' */
  aaa_B.fa_kgg = aaa_P.fa_kgg_Value;

  /* Start for Constant: '<Root>/jiting' */
  aaa_B.jiting = aaa_P.jiting_Value;

  /* Start for Enabled SubSystem: '<Root>/jinjichuli' */
  aaa_DW.jinjichuli_MODE = false;

  /* End of Start for SubSystem: '<Root>/jinjichuli' */
  /* Start for Constant: '<Root>/Constant' */
  aaa_B.u = aaa_P.Constant_Value_fv;

  /* Start for Constant: '<Root>/Constant8' */
  aaa_B.u_p = aaa_P.Constant8_Value_i;

  /* Start for Constant: '<Root>/Constant7' */
  aaa_B.u_l = aaa_P.Constant7_Value_ab;

  /* Start for Enabled SubSystem: '<S14>/zidong' */
  aaa_DW.zidong_MODE = false;

  /* Start for FromWorkspace: '<S42>/FromWs' */
  {
    static real_T pTimeValues0[] = { 0.0, 4.0, 4.0, 6.0, 6.0, 10.0 } ;

    static real_T pDataValues0[] = { 0.0, 0.0, 1.0, 1.0, 0.0, 0.0 } ;

    aaa_DW.FromWs_PWORK.TimePtr = (void *) pTimeValues0;
    aaa_DW.FromWs_PWORK.DataPtr = (void *) pDataValues0;
    aaa_DW.FromWs_IWORK.PrevIndex = 0;
  }

  /* Start for FromWorkspace: '<S43>/FromWs' */
  {
    static real_T pTimeValues0[] = { 0.0, 4.0, 4.0, 6.0, 6.0, 10.0 } ;

    static real_T pDataValues0[] = { 0.0, 0.0, 1.0, 1.0, 0.0, 0.0 } ;

    aaa_DW.FromWs_PWORK_n.TimePtr = (void *) pTimeValues0;
    aaa_DW.FromWs_PWORK_n.DataPtr = (void *) pDataValues0;
    aaa_DW.FromWs_IWORK_f.PrevIndex = 0;
  }

  /* Start for FromWorkspace: '<S44>/FromWs' */
  {
    static real_T pTimeValues0[] = { 0.0, 4.0, 4.0, 6.0, 6.0, 10.0 } ;

    static real_T pDataValues0[] = { 0.0, 0.0, 1.0, 1.0, 0.0, 0.0 } ;

    aaa_DW.FromWs_PWORK_g.TimePtr = (void *) pTimeValues0;
    aaa_DW.FromWs_PWORK_g.DataPtr = (void *) pDataValues0;
    aaa_DW.FromWs_IWORK_c.PrevIndex = 0;
  }

  /* Start for FromWorkspace: '<S45>/FromWs' */
  {
    static real_T pTimeValues0[] = { 0.0, 4.0, 4.0, 6.0, 6.0, 10.0 } ;

    static real_T pDataValues0[] = { 0.0, 0.0, 1.0, 1.0, 0.0, 0.0 } ;

    aaa_DW.FromWs_PWORK_i.TimePtr = (void *) pTimeValues0;
    aaa_DW.FromWs_PWORK_i.DataPtr = (void *) pDataValues0;
    aaa_DW.FromWs_IWORK_j.PrevIndex = 0;
  }

  /* End of Start for SubSystem: '<S14>/zidong' */

  /* Start for Enabled SubSystem: '<S14>/shoudong' */
  aaa_DW.shoudong_MODE = false;

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
        xpceScopeAcqOK(5, &aaa_DW.SFunction_IWORK_p4.AcquireOK);
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

    aaa_DW.FromWs_PWORK_ih.TimePtr = (void *) pTimeValues0;
    aaa_DW.FromWs_PWORK_ih.DataPtr = (void *) pDataValues0;
    aaa_DW.FromWs_IWORK_a.PrevIndex = 0;
  }

  /* Start for FromWorkspace: '<S34>/FromWs' */
  {
    static real_T pTimeValues0[] = { 0.0, 4.0, 4.0, 6.0, 6.0, 10.0 } ;

    static real_T pDataValues0[] = { 0.0, 0.0, 1.0, 1.0, 0.0, 0.0 } ;

    aaa_DW.FromWs_PWORK_gq.TimePtr = (void *) pTimeValues0;
    aaa_DW.FromWs_PWORK_gq.DataPtr = (void *) pDataValues0;
    aaa_DW.FromWs_IWORK_n.PrevIndex = 0;
  }

  /* Start for FromWorkspace: '<S35>/FromWs' */
  {
    static real_T pTimeValues0[] = { 0.0, 4.0, 4.0, 6.0, 6.0, 10.0 } ;

    static real_T pDataValues0[] = { 0.0, 0.0, 1.0, 1.0, 0.0, 0.0 } ;

    aaa_DW.FromWs_PWORK_nl.TimePtr = (void *) pTimeValues0;
    aaa_DW.FromWs_PWORK_nl.DataPtr = (void *) pDataValues0;
    aaa_DW.FromWs_IWORK_jn.PrevIndex = 0;
  }

  /* Start for FromWorkspace: '<S36>/FromWs' */
  {
    static real_T pTimeValues0[] = { 0.0, 4.0, 4.0, 6.0, 6.0, 10.0 } ;

    static real_T pDataValues0[] = { 0.0, 0.0, 1.0, 1.0, 0.0, 0.0 } ;

    aaa_DW.FromWs_PWORK_k.TimePtr = (void *) pTimeValues0;
    aaa_DW.FromWs_PWORK_k.DataPtr = (void *) pDataValues0;
    aaa_DW.FromWs_IWORK_p.PrevIndex = 0;
  }

  /* End of Start for SubSystem: '<S14>/shoudong' */

  /* Start for Constant: '<Root>/diancifa11_3' */
  aaa_B.diancifa11_3 = aaa_P.diancifa11_3_Value;

  /* Start for Constant: '<Root>/diancifa11_4' */
  aaa_B.diancifa11_4 = aaa_P.diancifa11_4_Value;

  /* Start for Constant: '<Root>/diancifa16_2' */
  aaa_B.diancifa16_2 = aaa_P.diancifa16_2_Value;

  /* Start for Constant: '<Root>/diancifa16_3' */
  aaa_B.diancifa16_3 = aaa_P.diancifa16_3_Value;

  /* Start for Constant: '<S5>/constant' */
  aaa_B.constant = aaa_P.constant_Value;

  /* Level2 S-Function Block: '<S5>/PCI1716DIO1' (pci1716DIO) */
  {
    SimStruct *rts = aaa_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<S6>/PCI-6208A DA ' (da6208) */
  {
    SimStruct *rts = aaa_M->childSfunctions[1];
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
        xpceScopeAcqOK(3, &aaa_DW.SFunction_IWORK.AcquireOK);
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
        xpceScopeAcqOK(1, &aaa_DW.SFunction_IWORK_n.AcquireOK);
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
        xpceScopeAcqOK(2, &aaa_DW.SFunction_IWORK_p.AcquireOK);
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
        xpceScopeAcqOK(4, &aaa_DW.SFunction_IWORK_i.AcquireOK);
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
        xpceScopeAcqOK(6, &aaa_DW.SFunction_IWORK_g.AcquireOK);
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
        xpceScopeAcqOK(7, &aaa_DW.SFunction_IWORK_c.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(7);
    }
  }

  /* Bit Packing: <S17>/CAN bit-packing 2 */
  aaa_B.CANbitpacking2 = 0.0;

  /* Bit Packing: <S17>/CAN bit-packing 4 */
  aaa_B.CANbitpacking4 = 0.0;

  /* Bit Packing: <S17>/CAN bit-packing  */
  aaa_B.CANbitpacking = 0.0;

  /* Bit Packing: <S17>/CAN bit-packing 1 */
  aaa_B.CANbitpacking1 = 0.0;

  /* Bit Packing: <S17>/CAN bit-packing 3 */
  aaa_B.CANbitpacking3 = 0.0;

  /* Level2 S-Function Block: '<S17>/Setup ' (canac2pcisetupx) */
  {
    SimStruct *rts = aaa_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Level2 S-Function Block: '<Root>/PCI-1784' (adpci_1784) */
  {
    SimStruct *rts = aaa_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* InitializeConditions for Memory: '<Root>/Memory' */
  aaa_DW.Memory_PreviousInput = aaa_P.Memory_X0;

  /* InitializeConditions for Memory: '<Root>/Memory1' */
  aaa_DW.Memory1_PreviousInput = aaa_P.Memory1_X0;

  /* InitializeConditions for Memory: '<S22>/Memory' */
  aaa_DW.Memory_PreviousInput_c = aaa_P.Memory_X0_j;

  /* InitializeConditions for Memory: '<S22>/Memory1' */
  aaa_DW.Memory1_PreviousInput_n = aaa_P.Memory1_X0_k;

  /* InitializeConditions for Memory: '<S23>/Memory' */
  aaa_DW.Memory_PreviousInput_g = aaa_P.Memory_X0_l;

  /* InitializeConditions for Memory: '<S24>/Memory' */
  aaa_DW.Memory_PreviousInput_o = aaa_P.Memory_X0_k;

  /* InitializeConditions for Memory: '<S24>/Memory1' */
  aaa_DW.Memory1_PreviousInput_f = aaa_P.Memory1_X0_e;

  /* InitializeConditions for Memory: '<S23>/Memory1' */
  aaa_DW.Memory1_PreviousInput_d = aaa_P.Memory1_X0_a;

  /* InitializeConditions for Memory: '<Root>/Memory2' */
  aaa_DW.Memory2_PreviousInput = aaa_P.Memory2_X0;

  /* SystemInitialize for Enabled SubSystem: '<Root>/jinjichuli' */
  /* SystemInitialize for Chart: '<S19>/jinjichuli' */
  aaa_DW.sfEvent = aaa_CALL_EVENT_n;
  aaa_DW.is_active_fa4_1 = 0U;
  aaa_DW.is_fa4_1 = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_DW.is_active_fa4_10 = 0U;
  aaa_DW.is_fa4_10 = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_DW.is_active_fa4_11 = 0U;
  aaa_DW.is_fa4_11 = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_DW.is_active_fa4_12 = 0U;
  aaa_DW.is_fa4_12 = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_DW.is_active_fa4_13 = 0U;
  aaa_DW.is_fa4_13 = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_DW.is_active_fa4_2 = 0U;
  aaa_DW.is_fa4_2 = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_DW.is_active_fa4_3 = 0U;
  aaa_DW.is_fa4_3 = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_DW.is_active_fa4_4 = 0U;
  aaa_DW.is_fa4_4 = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_DW.is_active_fa4_5 = 0U;
  aaa_DW.is_fa4_5 = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_DW.is_active_fa4_6 = 0U;
  aaa_DW.is_fa4_6 = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_DW.is_active_fa4_7 = 0U;
  aaa_DW.is_fa4_7 = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_DW.is_active_fa4_8 = 0U;
  aaa_DW.is_fa4_8 = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_DW.is_active_fa4_9 = 0U;
  aaa_DW.is_fa4_9 = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_DW.is_active_kaigai = 0U;
  aaa_DW.is_kaigai = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_DW.is_active_kiagai = 0U;
  aaa_DW.is_kiagai = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_DW.is_active_yajin = 0U;
  aaa_DW.is_yajin = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_DW.temporalCounter_i1 = 0U;
  aaa_DW.is_active_c2_aaa = 0U;
  aaa_DW.is_c2_aaa = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_B.diancifa11_1 = 0.0;
  aaa_B.diancifa11_2 = 0.0;
  aaa_B.diancifa11_5 = 0.0;
  aaa_B.diancifa20 = 0.0;
  aaa_B.diancifa16_1 = 0.0;
  aaa_B.diancifa3 = 0.0;
  aaa_B.diancifa21 = 0.0;
  aaa_B.suoding = 0.0;
  aaa_B.jiesuo = 0.0;
  aaa_B.xuansong = 0.0;
  aaa_B.xuanjin = 0.0;
  aaa_B.bililiuliangfa18_1 = 0.0;
  aaa_B.bililiuliangfa18_2 = 0.0;
  aaa_B.bililiuliangfa18_3 = 0.0;
  aaa_B.bililiuliangfa18_4 = 0.0;
  aaa_B.kaiguangaifa = 0.0;

  /* End of SystemInitialize for SubSystem: '<Root>/jinjichuli' */

  /* SystemInitialize for Chart: '<S20>/Chart' */
  aaa_Chart1_Init(&aaa_B.sf_Chart, &aaa_DW.sf_Chart);

  /* SystemInitialize for Enabled SubSystem: '<Root>/Subsystem3' */
  aaa_Subsystem3_Init(&aaa_B.Subsystem3, (P_Subsystem3_aaa_T *)&aaa_P.Subsystem3);

  /* End of SystemInitialize for SubSystem: '<Root>/Subsystem3' */

  /* SystemInitialize for Chart: '<S18>/Chart1' */
  aaa_Chart1_Init(&aaa_B.sf_Chart1, &aaa_DW.sf_Chart1);

  /* SystemInitialize for Enabled SubSystem: '<Root>/Subsystem4' */
  aaa_Subsystem3_Init(&aaa_B.Subsystem4, (P_Subsystem3_aaa_T *)&aaa_P.Subsystem4);

  /* End of SystemInitialize for SubSystem: '<Root>/Subsystem4' */

  /* SystemInitialize for Enabled SubSystem: '<S14>/zidong' */
  /* SystemInitialize for Chart: '<S26>/Chart' */
  aaa_DW.sfEvent_d = aaa_CALL_EVENT_n;
  aaa_DW.is_zidong = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_DW.is_SCjiaya = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_DW.is_SCzhushui = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_DW.is_SXQjunya = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_DW.is_SXQxieya = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_DW.is_kaiguangai = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_DW.temporalCounter_i1_e = 0U;
  aaa_DW.is_active_c1_aaa = 0U;
  aaa_DW.is_c1_aaa = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_DW.p0_1 = 0.0;
  aaa_DW.p0_2 = 0.0;
  aaa_B.diancifa11_1_k = 0.0;
  aaa_B.diancifa11_2_p = 0.0;
  aaa_B.diancifa11_5_b = 0.0;
  aaa_B.diancifa20_j = 0.0;
  aaa_B.diancifa16_1_c = 0.0;
  aaa_B.diancifa3_c = 0.0;
  aaa_B.diancifa21_d = 0.0;
  aaa_B.suoding_k = 0.0;
  aaa_B.jiesuo_p = 0.0;
  aaa_B.xuansong_i = 0.0;
  aaa_B.xuanjin_i = 0.0;
  aaa_B.bililiuliangfa18_1_f = 0.0;
  aaa_B.bililiuliangfa18_2_l = 0.0;
  aaa_B.bililiuliangfa18_3_j = 0.0;
  aaa_B.bililiuliangfa18_4_e = 0.0;
  aaa_B.kaigaikaishi = 0.0;
  aaa_B.guangaikaishi = 0.0;
  aaa_B.SCzhushuiwancheng = 0.0;
  aaa_B.SCjiayawancheng = 0.0;
  aaa_B.SXQjunyawancheng = 0.0;
  aaa_B.SXQxieyawancheng = 0.0;
  aaa_B.SQshiyabuchangwancheng = 0.0;
  aaa_B.SQxuanjinjianyawancheng = 0.0;
  aaa_B.kaigaiwancheng = 0.0;
  aaa_B.guangaiwancheng = 0.0;

  /* SystemInitialize for Outport: '<S26>/bililiuliangfa18_1' */
  aaa_B.Product_l1 = aaa_P.bililiuliangfa18_1_Y0_o;

  /* SystemInitialize for Outport: '<S26>/bililiuliangfa18_2' */
  aaa_B.Gain_d = aaa_P.bililiuliangfa18_2_Y0_f;

  /* SystemInitialize for Outport: '<S26>/bililiuliangfa18_3' */
  aaa_B.Product1_l = aaa_P.bililiuliangfa18_3_Y0_i;

  /* SystemInitialize for Outport: '<S26>/bililiuliangfa18_4' */
  aaa_B.Gain1 = aaa_P.bililiuliangfa18_4_Y0_j;

  /* SystemInitialize for Outport: '<S26>/kaiguangaifa' */
  aaa_B.MultiportSwitch_le = aaa_P.kaiguangaifa_Y0_f;

  /* End of SystemInitialize for SubSystem: '<S14>/zidong' */

  /* SystemInitialize for Enabled SubSystem: '<S14>/shoudong' */
  /* SystemInitialize for Chart: '<S25>/Chart' */
  aaa_DW.sfEvent_e = aaa_CALL_EVENT_n;
  aaa_DW.is_active_SCjiaya = 0U;
  aaa_DW.is_SCjiaya_k = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_DW.temporalCounter_i3 = 0U;
  aaa_DW.is_active_SCzhushui = 0U;
  aaa_DW.is_SCzhushui_f = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_DW.temporalCounter_i4 = 0U;
  aaa_DW.is_active_SXQjunya = 0U;
  aaa_DW.is_SXQjunya_c = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_DW.temporalCounter_i5 = 0U;
  aaa_DW.is_active_SXQxieya = 0U;
  aaa_DW.is_SXQxieya_o = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_DW.temporalCounter_i2 = 0U;
  aaa_DW.is_active_kaiguangai = 0U;
  aaa_DW.is_kaiguangai_c = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_DW.temporalCounter_i1_i = 0U;
  aaa_DW.is_active_c4_aaa = 0U;
  aaa_DW.is_c4_aaa = aaa_IN_NO_ACTIVE_CHILD_c;
  aaa_B.diancifa11_1_l = 0.0;
  aaa_B.diancifa11_2_i = 0.0;
  aaa_B.diancifa11_5_k = 0.0;
  aaa_B.diancifa20_l = 0.0;
  aaa_B.diancifa16_1_cy = 0.0;
  aaa_B.diancifa3_m = 0.0;
  aaa_B.diancifa21_h = 0.0;
  aaa_B.suoding_j = 0.0;
  aaa_B.jiesuo_k = 0.0;
  aaa_B.xuansong_g = 0.0;
  aaa_B.xuanjin_l = 0.0;
  aaa_B.bililiuliangfa18_1_b = 0.0;
  aaa_B.bililiuliangfa18_2_j = 0.0;
  aaa_B.bililiuliangfa18_3_l = 0.0;
  aaa_B.bililiuliangfa18_4_l = 0.0;
  aaa_B.kaigaikaishi_e = 0.0;
  aaa_B.guangaikaishi_o = 0.0;
  aaa_B.SCzhushuiwancheng_c = 0.0;
  aaa_B.SCjiayawancheng_k = 0.0;
  aaa_B.SXQjunyawancheng_h = 0.0;
  aaa_B.SXQxieyawancheng_g = 0.0;
  aaa_B.SQshiyabuchangwancheng_l = 0.0;
  aaa_B.SQxuanjinjianyawancheng_n = 0.0;
  aaa_B.kaigaiwancheng_b = 0.0;
  aaa_B.guangaiwancheng_f = 0.0;
  aaa_B.p0_1 = 0.0;
  aaa_B.p0_2 = 0.0;

  /* SystemInitialize for Outport: '<S25>/bililiuliangfa18_1' */
  aaa_B.Product_i = aaa_P.bililiuliangfa18_1_Y0;

  /* SystemInitialize for Outport: '<S25>/bililiuliangfa18_2' */
  aaa_B.Gain_m = aaa_P.bililiuliangfa18_2_Y0;

  /* SystemInitialize for Outport: '<S25>/bililiuliangfa18_3' */
  aaa_B.Product1_lf = aaa_P.bililiuliangfa18_3_Y0;

  /* SystemInitialize for Outport: '<S25>/bililiuliangfa18_4' */
  aaa_B.Gain1_a = aaa_P.bililiuliangfa18_4_Y0;

  /* SystemInitialize for Outport: '<S25>/kaiguangaifa' */
  aaa_B.MultiportSwitch_b = aaa_P.kaiguangaifa_Y0;

  /* End of SystemInitialize for SubSystem: '<S14>/shoudong' */
}

/* Model terminate function */
static void aaa_terminate(void)
{
  /* Level2 S-Function Block: '<S5>/PCI1716DIO1' (pci1716DIO) */
  {
    SimStruct *rts = aaa_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S6>/PCI-6208A DA ' (da6208) */
  {
    SimStruct *rts = aaa_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<S17>/Setup ' (canac2pcisetupx) */
  {
    SimStruct *rts = aaa_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Level2 S-Function Block: '<Root>/PCI-1784' (adpci_1784) */
  {
    SimStruct *rts = aaa_M->childSfunctions[3];
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

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&aaa_M->solverInfo, &aaa_M->Timing.simTimeStep);
    rtsiSetTPtr(&aaa_M->solverInfo, &rtmGetTPtr(aaa_M));
    rtsiSetStepSizePtr(&aaa_M->solverInfo, &aaa_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&aaa_M->solverInfo, (&rtmGetErrorStatus(aaa_M)));
    rtsiSetRTModelPtr(&aaa_M->solverInfo, aaa_M);
  }

  rtsiSetSimTimeStep(&aaa_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&aaa_M->solverInfo,"FixedStepDiscrete");
  aaa_M->solverInfoPtr = (&aaa_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = aaa_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    aaa_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    aaa_M->Timing.sampleTimes = (&aaa_M->Timing.sampleTimesArray[0]);
    aaa_M->Timing.offsetTimes = (&aaa_M->Timing.offsetTimesArray[0]);

    /* task periods */
    aaa_M->Timing.sampleTimes[0] = (0.0);
    aaa_M->Timing.sampleTimes[1] = (0.002);

    /* task offsets */
    aaa_M->Timing.offsetTimes[0] = (0.0);
    aaa_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(aaa_M, &aaa_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = aaa_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    aaa_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(aaa_M, -1);
  aaa_M->Timing.stepSize0 = 0.002;
  aaa_M->Timing.stepSize1 = 0.002;

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
    aaa_M->NonInlinedSFcns.taskTimePtrs[1] = &(rtmGetTPtr(aaa_M)[1]);
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

  aaa_M->Sizes.numSFcns = (4);

  /* register each child */
  {
    (void) memset((void *)&aaa_M->NonInlinedSFcns.childSFunctions[0], 0,
                  4*sizeof(SimStruct));
    aaa_M->childSfunctions = (&aaa_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    aaa_M->childSfunctions[0] = (&aaa_M->NonInlinedSFcns.childSFunctions[0]);
    aaa_M->childSfunctions[1] = (&aaa_M->NonInlinedSFcns.childSFunctions[1]);
    aaa_M->childSfunctions[2] = (&aaa_M->NonInlinedSFcns.childSFunctions[2]);
    aaa_M->childSfunctions[3] = (&aaa_M->NonInlinedSFcns.childSFunctions[3]);

    /* Level2 S-Function Block: aaa/<S5>/PCI1716DIO1 (pci1716DIO) */
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
        _ssSetNumInputPorts(rts, 18);
        ssSetPortInfoForInputs(rts, &aaa_M->NonInlinedSFcns.Sfcn0.inputPortInfo
          [0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs0;
          sfcnUPtrs[0] = (real_T*)&aaa_RGND;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs1;
          sfcnUPtrs[0] = (real_T*)&aaa_RGND;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs2;
          sfcnUPtrs[0] = &aaa_B.DataTypeConversion7[0];
          ssSetInputPortSignalPtrs(rts, 2, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }

        /* port 3 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs3;
          sfcnUPtrs[0] = &aaa_B.DataTypeConversion7[1];
          ssSetInputPortSignalPtrs(rts, 3, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidth(rts, 3, 1);
        }

        /* port 4 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs4;
          sfcnUPtrs[0] = &aaa_B.diancifa11_3;
          ssSetInputPortSignalPtrs(rts, 4, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidth(rts, 4, 1);
        }

        /* port 5 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs5;
          sfcnUPtrs[0] = &aaa_B.diancifa11_4;
          ssSetInputPortSignalPtrs(rts, 5, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 5, 1);
          ssSetInputPortWidth(rts, 5, 1);
        }

        /* port 6 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs6;
          sfcnUPtrs[0] = &aaa_B.DataTypeConversion7[2];
          ssSetInputPortSignalPtrs(rts, 6, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 6, 1);
          ssSetInputPortWidth(rts, 6, 1);
        }

        /* port 7 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs7;
          sfcnUPtrs[0] = &aaa_B.DataTypeConversion1_m;
          ssSetInputPortSignalPtrs(rts, 7, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 7, 1);
          ssSetInputPortWidth(rts, 7, 1);
        }

        /* port 8 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs8;
          sfcnUPtrs[0] = &aaa_B.diancifa16_2;
          ssSetInputPortSignalPtrs(rts, 8, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 8, 1);
          ssSetInputPortWidth(rts, 8, 1);
        }

        /* port 9 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs9;
          sfcnUPtrs[0] = &aaa_B.diancifa16_3;
          ssSetInputPortSignalPtrs(rts, 9, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 9, 1);
          ssSetInputPortWidth(rts, 9, 1);
        }

        /* port 10 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs10;
          sfcnUPtrs[0] = &aaa_B.DataTypeConversion7[5];
          ssSetInputPortSignalPtrs(rts, 10, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 10, 1);
          ssSetInputPortWidth(rts, 10, 1);
        }

        /* port 11 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs11;
          sfcnUPtrs[0] = &aaa_B.DataTypeConversion7[3];
          ssSetInputPortSignalPtrs(rts, 11, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 11, 1);
          ssSetInputPortWidth(rts, 11, 1);
        }

        /* port 12 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs12;
          sfcnUPtrs[0] = &aaa_B.DataTypeConversion2;
          ssSetInputPortSignalPtrs(rts, 12, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 12, 1);
          ssSetInputPortWidth(rts, 12, 1);
        }

        /* port 13 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs13;
          sfcnUPtrs[0] = &aaa_B.constant;
          ssSetInputPortSignalPtrs(rts, 13, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 13, 1);
          ssSetInputPortWidth(rts, 13, 1);
        }

        /* port 14 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs14;
          sfcnUPtrs[0] = &aaa_B.DataTypeConversion7[7];
          ssSetInputPortSignalPtrs(rts, 14, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 14, 1);
          ssSetInputPortWidth(rts, 14, 1);
        }

        /* port 15 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs15;
          sfcnUPtrs[0] = &aaa_B.DataTypeConversion7[8];
          ssSetInputPortSignalPtrs(rts, 15, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 15, 1);
          ssSetInputPortWidth(rts, 15, 1);
        }

        /* port 16 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs16;
          sfcnUPtrs[0] = &aaa_B.DataTypeConversion7[9];
          ssSetInputPortSignalPtrs(rts, 16, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 16, 1);
          ssSetInputPortWidth(rts, 16, 1);
        }

        /* port 17 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn0.UPtrs17;
          sfcnUPtrs[0] = &aaa_B.DataTypeConversion7[10];
          ssSetInputPortSignalPtrs(rts, 17, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 17, 1);
          ssSetInputPortWidth(rts, 17, 1);
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
          ssSetOutputPortWidth(rts, 0, 8);
          ssSetOutputPortSignal(rts, 0, ((real_T *) aaa_B.PCI1716DIO1_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 16);
          ssSetOutputPortSignal(rts, 1, ((real_T *) aaa_B.PCI1716DIO1_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI1716DIO1");
      ssSetPath(rts, "aaa/PCI1716/PCI1716DIO1");
      ssSetRTModel(rts,aaa_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **) &aaa_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)aaa_P.PCI1716DIO1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)aaa_P.PCI1716DIO1_P2_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &aaa_DW.PCI1716DIO1_IWORK[0]);

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
        ssSetDWork(rts, 0, &aaa_DW.PCI1716DIO1_IWORK[0]);
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

    /* Level2 S-Function Block: aaa/<S6>/PCI-6208A DA  (da6208) */
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
        _ssSetNumInputPorts(rts, 8);
        ssSetPortInfoForInputs(rts, &aaa_M->NonInlinedSFcns.Sfcn1.inputPortInfo
          [0]);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn1.UPtrs0;
          sfcnUPtrs[0] = &aaa_B.Saturation_e;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn1.UPtrs1;
          sfcnUPtrs[0] = &aaa_B.Saturation1_p;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn1.UPtrs2;
          sfcnUPtrs[0] = &aaa_B.Saturation2;
          ssSetInputPortSignalPtrs(rts, 2, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }

        /* port 3 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn1.UPtrs3;
          sfcnUPtrs[0] = &aaa_B.Saturation3;
          ssSetInputPortSignalPtrs(rts, 3, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidth(rts, 3, 1);
        }

        /* port 4 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn1.UPtrs4;
          sfcnUPtrs[0] = &aaa_B.Saturation4;
          ssSetInputPortSignalPtrs(rts, 4, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidth(rts, 4, 1);
        }

        /* port 5 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn1.UPtrs5;
          sfcnUPtrs[0] = &aaa_B.Saturation5;
          ssSetInputPortSignalPtrs(rts, 5, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 5, 1);
          ssSetInputPortWidth(rts, 5, 1);
        }

        /* port 6 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn1.UPtrs6;
          sfcnUPtrs[0] = &aaa_B.Saturation6;
          ssSetInputPortSignalPtrs(rts, 6, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 6, 1);
          ssSetInputPortWidth(rts, 6, 1);
        }

        /* port 7 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &aaa_M->NonInlinedSFcns.Sfcn1.UPtrs7;
          sfcnUPtrs[0] = &aaa_B.Saturation7;
          ssSetInputPortSignalPtrs(rts, 7, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 7, 1);
          ssSetInputPortWidth(rts, 7, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-6208A DA ");
      ssSetPath(rts, "aaa/PCI6208/PCI-6208A DA ");
      ssSetRTModel(rts,aaa_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **) &aaa_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)aaa_P.PCI6208ADA_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)aaa_P.PCI6208ADA_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)aaa_P.PCI6208ADA_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)aaa_P.PCI6208ADA_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)aaa_P.PCI6208ADA_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)aaa_P.PCI6208ADA_P6_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &aaa_DW.PCI6208ADA_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &aaa_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &aaa_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 3);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &aaa_DW.PCI6208ADA_IWORK[0]);
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

    /* Level2 S-Function Block: aaa/<S17>/Setup  (canac2pcisetupx) */
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

      /* path info */
      ssSetModelName(rts, "Setup ");
      ssSetPath(rts, "aaa/chuanganqi/Setup ");
      ssSetRTModel(rts,aaa_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **) &aaa_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 24);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)aaa_P.Setup_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)aaa_P.Setup_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)aaa_P.Setup_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)aaa_P.Setup_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)aaa_P.Setup_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)aaa_P.Setup_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)aaa_P.Setup_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)aaa_P.Setup_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)aaa_P.Setup_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)aaa_P.Setup_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)aaa_P.Setup_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)aaa_P.Setup_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)aaa_P.Setup_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)aaa_P.Setup_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)aaa_P.Setup_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)aaa_P.Setup_P16_Size);
        ssSetSFcnParam(rts, 16, (mxArray*)aaa_P.Setup_P17_Size);
        ssSetSFcnParam(rts, 17, (mxArray*)aaa_P.Setup_P18_Size);
        ssSetSFcnParam(rts, 18, (mxArray*)aaa_P.Setup_P19_Size);
        ssSetSFcnParam(rts, 19, (mxArray*)aaa_P.Setup_P20_Size);
        ssSetSFcnParam(rts, 20, (mxArray*)aaa_P.Setup_P21_Size);
        ssSetSFcnParam(rts, 21, (mxArray*)aaa_P.Setup_P22_Size);
        ssSetSFcnParam(rts, 22, (mxArray*)aaa_P.Setup_P23_Size);
        ssSetSFcnParam(rts, 23, (mxArray*)aaa_P.Setup_P24_Size);
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

    /* Level2 S-Function Block: aaa/<Root>/PCI-1784 (adpci_1784) */
    {
      SimStruct *rts = aaa_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod = aaa_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset = aaa_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap = aaa_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      /* Set up the mdlInfo pointer */
      {
        ssSetBlkInfo2Ptr(rts, &aaa_M->NonInlinedSFcns.blkInfo2[3]);
      }

      ssSetRTWSfcnInfo(rts, aaa_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &aaa_M->NonInlinedSFcns.methods2[3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &aaa_M->NonInlinedSFcns.methods3[3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &aaa_M->NonInlinedSFcns.methods4[3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &aaa_M->NonInlinedSFcns.statesInfo2[3]);
        ssSetPeriodicStatesInfo(rts, &aaa_M->NonInlinedSFcns.periodicStatesInfo
          [3]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &aaa_M->NonInlinedSFcns.Sfcn3.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 8);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *) &aaa_B.PCI1784_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *) &aaa_B.PCI1784_o2));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *) &aaa_B.PCI1784_o3));
        }

        /* port 3 */
        {
          _ssSetOutputPortNumDimensions(rts, 3, 1);
          ssSetOutputPortWidth(rts, 3, 1);
          ssSetOutputPortSignal(rts, 3, ((real_T *) &aaa_B.PCI1784_o4));
        }

        /* port 4 */
        {
          _ssSetOutputPortNumDimensions(rts, 4, 1);
          ssSetOutputPortWidth(rts, 4, 1);
          ssSetOutputPortSignal(rts, 4, ((real_T *) &aaa_B.PCI1784_o5));
        }

        /* port 5 */
        {
          _ssSetOutputPortNumDimensions(rts, 5, 1);
          ssSetOutputPortWidth(rts, 5, 1);
          ssSetOutputPortSignal(rts, 5, ((real_T *) &aaa_B.PCI1784_o6));
        }

        /* port 6 */
        {
          _ssSetOutputPortNumDimensions(rts, 6, 1);
          ssSetOutputPortWidth(rts, 6, 1);
          ssSetOutputPortSignal(rts, 6, ((real_T *) &aaa_B.PCI1784_o7));
        }

        /* port 7 */
        {
          _ssSetOutputPortNumDimensions(rts, 7, 1);
          ssSetOutputPortWidth(rts, 7, 1);
          ssSetOutputPortSignal(rts, 7, ((real_T *) &aaa_B.PCI1784_o8));
        }
      }

      /* path info */
      ssSetModelName(rts, "PCI-1784");
      ssSetPath(rts, "aaa/PCI-1784");
      ssSetRTModel(rts,aaa_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **) &aaa_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)aaa_P.PCI1784_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)aaa_P.PCI1784_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)aaa_P.PCI1784_P3_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &aaa_DW.PCI1784_RWORK[0]);
      ssSetIWork(rts, (int_T *) &aaa_DW.PCI1784_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &aaa_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &aaa_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 64);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &aaa_DW.PCI1784_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidth(rts, 1, 66);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &aaa_DW.PCI1784_IWORK[0]);
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
  aaa_M->Sizes.numContStates = (0);    /* Number of continuous states */
  aaa_M->Sizes.numY = (0);             /* Number of model outputs */
  aaa_M->Sizes.numU = (0);             /* Number of model inputs */
  aaa_M->Sizes.sysDirFeedThru = (0);   /* The model is not direct feedthrough */
  aaa_M->Sizes.numSampTimes = (2);     /* Number of sample times */
  aaa_M->Sizes.numBlocks = (761);      /* Number of blocks */
  aaa_M->Sizes.numBlockIO = (457);     /* Number of block outputs */
  aaa_M->Sizes.numBlockPrms = (556);   /* Sum of parameter "widths" */
  return aaa_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
