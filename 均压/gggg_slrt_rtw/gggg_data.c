/*
 * gggg_data.c
 *
 * Code generation for model "gggg".
 *
 * Model version              : 1.108
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Wed May 26 00:09:20 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "gggg.h"
#include "gggg_private.h"

/* Block parameters (auto storage) */
P_gggg_T gggg_P = {
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant4'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S2>/Constant21'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Constant12'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S2>/Constant31'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Constant10'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S2>/Constant9'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Constant24'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S2>/Constant17'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S2>/Constant18'
                                        */
  134.0,                               /* Expression: 134
                                        * Referenced by: '<S2>/Constant7'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Constant16'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S2>/Constant1'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S2>/Constant2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Constant3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Constant4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Constant5'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Constant6'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Constant22'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S2>/Constant14'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S2>/Constant15'
                                        */
  134.0,                               /* Expression: 134
                                        * Referenced by: '<S2>/Constant29'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Constant13'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S2>/Constant11'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S2>/Constant19'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Constant25'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Constant26'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Constant27'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Constant28'
                                        */
  15.0,                                /* Expression: 15
                                        * Referenced by: '<S2>/Constant8'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/Constant23'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S3>/Constant2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S3>/Constant1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S3>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S3>/Memory'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S3>/Memory2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Ðý½ô1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<Root>/Constant7'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Ô¤ÐýËÉ1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/ÐýËÉ1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S3>/Memory1'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<Root>/Constant5'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<Root>/Constant6'
                                        */
  -10.0,                               /* Computed Parameter: s1_A
                                        * Referenced by: '<S2>/s1'
                                        */
  10.0,                                /* Computed Parameter: s1_B
                                        * Referenced by: '<S2>/s1'
                                        */
  1.0,                                 /* Computed Parameter: s1_C
                                        * Referenced by: '<S2>/s1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/s1'
                                        */
  1.5258750179940191E-5,               /* Expression: 59.9953/3931862
                                        * Referenced by: '<S2>/Gain3'
                                        */
  1.25,                                /* Expression: 1.25
                                        * Referenced by: '<S2>/Gain4'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S2>/Gain6'
                                        */
  -10.0,                               /* Computed Parameter: s4_A
                                        * Referenced by: '<S2>/s4'
                                        */
  10.0,                                /* Computed Parameter: s4_B
                                        * Referenced by: '<S2>/s4'
                                        */
  1.0,                                 /* Computed Parameter: s4_C
                                        * Referenced by: '<S2>/s4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/s4'
                                        */
  1.5258750179940191E-5,               /* Expression: 59.9953/3931862
                                        * Referenced by: '<S2>/Gain9'
                                        */
  1.25,                                /* Expression: 1.25
                                        * Referenced by: '<S2>/Gain10'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S2>/Gain11'
                                        */
  -10.0,                               /* Computed Parameter: s3_A
                                        * Referenced by: '<S2>/s3'
                                        */
  10.0,                                /* Computed Parameter: s3_B
                                        * Referenced by: '<S2>/s3'
                                        */
  1.0,                                 /* Computed Parameter: s3_C
                                        * Referenced by: '<S2>/s3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/s3'
                                        */
  1.1739E-5,                           /* Expression: 1.1739e-5
                                        * Referenced by: '<S2>/Gain'
                                        */
  0.19894367886486919,                 /* Expression: 1.25/(2*pi)
                                        * Referenced by: '<S2>/Gain2'
                                        */
  -10.0,                               /* Computed Parameter: s5_A
                                        * Referenced by: '<S2>/s5'
                                        */
  10.0,                                /* Computed Parameter: s5_B
                                        * Referenced by: '<S2>/s5'
                                        */
  1.0,                                 /* Computed Parameter: s5_C
                                        * Referenced by: '<S2>/s5'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S2>/s5'
                                        */
  1.1739E-5,                           /* Expression: 1.1739e-5
                                        * Referenced by: '<S2>/Gain7'
                                        */
  0.19894367886486919,                 /* Expression: 1.25/(2*pi)
                                        * Referenced by: '<S2>/Gain8'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S2>/Switch2'
                                        */
  0.0,                                 /* Expression: 0.0
                                        * Referenced by: '<S2>/Delay1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/¸´Î»'
                                        */
  5.026548245743669,                   /* Expression: (2*pi)/1.25
                                        * Referenced by: '<S2>/Gain13'
                                        */
  85546.0,                             /* Expression: 85546
                                        * Referenced by: '<S2>/Gain12'
                                        */
  2.147483647E+9,                      /* Expression: 2147483647
                                        * Referenced by: '<S2>/Saturation1'
                                        */
  -2.147483647E+9,                     /* Expression: -2147483647
                                        * Referenced by: '<S2>/Saturation1'
                                        */
  5.026548245743669,                   /* Expression: (2*pi)/1.25
                                        * Referenced by: '<S2>/Gain5'
                                        */
  85546.0,                             /* Expression: 85546
                                        * Referenced by: '<S2>/Gain1'
                                        */
  2.147483647E+9,                      /* Expression: 2147483647
                                        * Referenced by: '<S2>/Saturation'
                                        */
  -2.147483647E+9,                     /* Expression: -2147483647
                                        * Referenced by: '<S2>/Saturation'
                                        */

  /*  Computed Parameter: Setup_P1_Size
   * Referenced by: '<S2>/Setup '
   */
  { 1.0, 4.0 },

  /*  Expression: can1UserBR
   * Referenced by: '<S2>/Setup '
   */
  { 1.0, 1.0, 4.0, 3.0 },

  /*  Computed Parameter: Setup_P2_Size
   * Referenced by: '<S2>/Setup '
   */
  { 1.0, 4.0 },

  /*  Expression: can2UserBR
   * Referenced by: '<S2>/Setup '
   */
  { 1.0, 1.0, 8.0, 7.0 },

  /*  Computed Parameter: Setup_P3_Size
   * Referenced by: '<S2>/Setup '
   */
  { 0.0, 0.0 },

  /*  Computed Parameter: Setup_P4_Size
   * Referenced by: '<S2>/Setup '
   */
  { 0.0, 0.0 },

  /*  Computed Parameter: Setup_P5_Size
   * Referenced by: '<S2>/Setup '
   */
  { 1.0, 3.0 },

  /*  Expression: can2SendS
   * Referenced by: '<S2>/Setup '
   */
  { 0.0, 513.0, 514.0 },

  /*  Computed Parameter: Setup_P6_Size
   * Referenced by: '<S2>/Setup '
   */
  { 1.0, 4.0 },

  /*  Expression: can2RecS
   * Referenced by: '<S2>/Setup '
   */
  { 385.0, 386.0, 641.0, 642.0 },

  /*  Computed Parameter: Setup_P7_Size
   * Referenced by: '<S2>/Setup '
   */
  { 0.0, 0.0 },

  /*  Computed Parameter: Setup_P8_Size
   * Referenced by: '<S2>/Setup '
   */
  { 0.0, 0.0 },

  /*  Computed Parameter: Setup_P9_Size
   * Referenced by: '<S2>/Setup '
   */
  { 0.0, 0.0 },

  /*  Computed Parameter: Setup_P10_Size
   * Referenced by: '<S2>/Setup '
   */
  { 0.0, 0.0 },

  /*  Computed Parameter: Setup_P11_Size
   * Referenced by: '<S2>/Setup '
   */
  { 0.0, 0.0 },

  /*  Computed Parameter: Setup_P12_Size
   * Referenced by: '<S2>/Setup '
   */
  { 0.0, 0.0 },

  /*  Computed Parameter: Setup_P13_Size
   * Referenced by: '<S2>/Setup '
   */
  { 1.0, 4.0 },

  /*  Expression: can2RecSI
   * Referenced by: '<S2>/Setup '
   */
  { 0.0, 0.0, 0.0, 0.0 },

  /*  Computed Parameter: Setup_P14_Size
   * Referenced by: '<S2>/Setup '
   */
  { 0.0, 0.0 },

  /*  Computed Parameter: Setup_P15_Size
   * Referenced by: '<S2>/Setup '
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: initarray
                                        * Referenced by: '<S2>/Setup '
                                        */

  /*  Computed Parameter: Setup_P16_Size
   * Referenced by: '<S2>/Setup '
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: termarray
                                        * Referenced by: '<S2>/Setup '
                                        */

  /*  Computed Parameter: Setup_P17_Size
   * Referenced by: '<S2>/Setup '
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: ioBaseAddress
                                        * Referenced by: '<S2>/Setup '
                                        */

  /*  Computed Parameter: Setup_P18_Size
   * Referenced by: '<S2>/Setup '
   */
  { 1.0, 1.0 },
  819200.0,                            /* Expression: memBaseAddress
                                        * Referenced by: '<S2>/Setup '
                                        */

  /*  Computed Parameter: Setup_P19_Size
   * Referenced by: '<S2>/Setup '
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: intNo
                                        * Referenced by: '<S2>/Setup '
                                        */

  /*  Computed Parameter: Setup_P20_Size
   * Referenced by: '<S2>/Setup '
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: board
                                        * Referenced by: '<S2>/Setup '
                                        */

  /*  Computed Parameter: Setup_P21_Size
   * Referenced by: '<S2>/Setup '
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: can1bus
                                        * Referenced by: '<S2>/Setup '
                                        */

  /*  Computed Parameter: Setup_P22_Size
   * Referenced by: '<S2>/Setup '
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: can2bus
                                        * Referenced by: '<S2>/Setup '
                                        */

  /*  Computed Parameter: Setup_P23_Size
   * Referenced by: '<S2>/Setup '
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: bus_off_out
                                        * Referenced by: '<S2>/Setup '
                                        */

  /*  Computed Parameter: Setup_P24_Size
   * Referenced by: '<S2>/Setup '
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: bus_off_rec
                                        * Referenced by: '<S2>/Setup '
                                        */
  250U,                                /* Computed Parameter: Delay_DelayLength
                                        * Referenced by: '<S2>/Delay'
                                        */
  10U,                                 /* Computed Parameter: Delay1_DelayLength
                                        * Referenced by: '<S2>/Delay1'
                                        */
  0U,                                  /* Computed Parameter: ManualSwitch3_CurrentSetting
                                        * Referenced by: '<S2>/Manual Switch3'
                                        */
  0U,                                  /* Computed Parameter: ManualSwitch1_CurrentSetting
                                        * Referenced by: '<S2>/Manual Switch1'
                                        */
  1U,                                  /* Computed Parameter: ManualSwitch_CurrentSetting
                                        * Referenced by: '<Root>/Manual Switch'
                                        */
  1U,                                  /* Computed Parameter: ManualSwitch_CurrentSetting_c
                                        * Referenced by: '<S2>/Manual Switch'
                                        */
  0,                                   /* Computed Parameter: Delay_InitialCondition
                                        * Referenced by: '<S2>/Delay'
                                        */

  /* Start of '<S2>/Subsystem2' */
  {
    0.0,                               /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S9>/Out1'
                                        */
    0.0                                /* Expression: 0
                                        * Referenced by: '<S9>/Constant'
                                        */
  }
  /* End of '<S2>/Subsystem2' */
  ,

  /* Start of '<S2>/Subsystem1' */
  {
    0.0,                               /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S8>/Out1'
                                        */
    0.0                                /* Expression: 0
                                        * Referenced by: '<S8>/Constant'
                                        */
  }
  /* End of '<S2>/Subsystem1' */
};
