/*
 * canceshi1_data.c
 *
 * Real-Time Workshop code generation for Simulink model "canceshi1.mdl".
 *
 * Model version              : 1.36
 * Real-Time Workshop version : 7.6  (R2010b)  03-Aug-2010
 * C source code generated on : Mon Jun 01 17:45:50 2020
 *
 * Target selection: xpctarget.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "canceshi1.h"
#include "canceshi1_private.h"

/* Block parameters (auto storage) */
Parameters_canceshi1 canceshi1_P = {
  255.0,                               /* Expression: 255
                                        * Referenced by: '<S4>/Constant1'
                                        */
  223.0,                               /* Expression: 223
                                        * Referenced by: '<S4>/Constant33'
                                        */
  239.0,                               /* Expression: 239
                                        * Referenced by: '<S4>/Constant32'
                                        */
  247.0,                               /* Expression: 247
                                        * Referenced by: '<S4>/Constant31'
                                        */
  251.0,                               /* Expression: 251
                                        * Referenced by: '<S4>/Constant30'
                                        */
  253.0,                               /* Expression: 253
                                        * Referenced by: '<S4>/Constant29'
                                        */
  254.0,                               /* Expression: 254
                                        * Referenced by: '<S4>/Constant28'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/88'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant5'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant6'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant7'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant8'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant9'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant10'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant12'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant13'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant14'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant15'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant11'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant17'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant19'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant20'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant21'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant16'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant23'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant24'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant25'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant26'
                                        */

  /*  Computed Parameter: PCL731_P1_Size
   * Referenced by: '<Root>/PCL731'
   */
  { 1.0, 1.0 },
  520.0,                               /* Expression: BaseAddress
                                        * Referenced by: '<Root>/PCL731'
                                        */

  /*  Computed Parameter: PCL731_P2_Size
   * Referenced by: '<Root>/PCL731'
   */
  { 1.0, 2.0 },

  /*  Expression: [SampleTime SampleOffset]
   * Referenced by: '<Root>/PCL731'
   */
  { -1.0, 0.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/99'
                                        */
  1.0,                                 /* Expression: const
                                        * Referenced by: '<S14>/Constant'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S21>/Constant'
                                        */
  2.0,                                 /* Expression: const
                                        * Referenced by: '<S15>/Constant'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S22>/Constant'
                                        */
  3.0,                                 /* Expression: const
                                        * Referenced by: '<S16>/Constant'
                                        */
  4.0,                                 /* Expression: 4
                                        * Referenced by: '<S23>/Constant'
                                        */
  4.0,                                 /* Expression: const
                                        * Referenced by: '<S17>/Constant'
                                        */
  5.0,                                 /* Expression: 5
                                        * Referenced by: '<S24>/Constant'
                                        */
  5.0,                                 /* Expression: const
                                        * Referenced by: '<S18>/Constant'
                                        */
  6.0,                                 /* Expression: 6
                                        * Referenced by: '<S25>/Constant'
                                        */
  6.0,                                 /* Expression: const
                                        * Referenced by: '<S19>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant18'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<Root>/baozhuay'
                                        */
  0.0,                                 /* Expression: vinit
                                        * Referenced by: '<S6>/Integer Delay'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<Root>/constant1'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<Root>/constant6'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/constant9'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<Root>/constant2'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<Root>/constant10'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/constant11'
                                        */
  43.0,                                /* Expression: 43
                                        * Referenced by: '<S2>/Constant7'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S2>/Constant16'
                                        */
  32.0,                                /* Expression: 32
                                        * Referenced by: '<S2>/Constant1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S2>/Constant2'
                                        */
  255.0,                               /* Expression: 255
                                        * Referenced by: '<S2>/Constant3'
                                        */
  255.0,                               /* Expression: 255
                                        * Referenced by: '<S2>/Constant4'
                                        */
  255.0,                               /* Expression: 255
                                        * Referenced by: '<S2>/Constant5'
                                        */
  255.0,                               /* Expression: 255
                                        * Referenced by: '<S2>/Constant6'
                                        */
  43.0,                                /* Expression: 43
                                        * Referenced by: '<S9>/Constant8'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S9>/Constant16'
                                        */
  32.0,                                /* Expression: 32
                                        * Referenced by: '<S9>/Constant2'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S9>/Constant3'
                                        */
  255.0,                               /* Expression: 255
                                        * Referenced by: '<S9>/Constant4'
                                        */
  255.0,                               /* Expression: 255
                                        * Referenced by: '<S9>/Constant5'
                                        */
  255.0,                               /* Expression: 255
                                        * Referenced by: '<S9>/Constant6'
                                        */
  255.0,                               /* Expression: 255
                                        * Referenced by: '<S9>/Constant7'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<Root>/shengjiangy'
                                        */
  0.0,                                 /* Expression: vinit
                                        * Referenced by: '<S7>/Integer Delay'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<Root>/constant4'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<Root>/constant12'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/constant13'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<Root>/xuanzhuany'
                                        */
  0.0,                                 /* Expression: vinit
                                        * Referenced by: '<S5>/Integer Delay'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<Root>/constant7'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<Root>/constant3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/constant5'
                                        */
  43.0,                                /* Expression: 43
                                        * Referenced by: '<S13>/Constant24'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S13>/Constant18'
                                        */
  32.0,                                /* Expression: 32
                                        * Referenced by: '<S13>/Constant17'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S13>/Constant19'
                                        */
  255.0,                               /* Expression: 255
                                        * Referenced by: '<S13>/Constant20'
                                        */
  255.0,                               /* Expression: 255
                                        * Referenced by: '<S13>/Constant21'
                                        */
  255.0,                               /* Expression: 255
                                        * Referenced by: '<S13>/Constant22'
                                        */
  255.0,                               /* Expression: 255
                                        * Referenced by: '<S13>/Constant23'
                                        */
  43.0,                                /* Expression: 43
                                        * Referenced by: '<S1>/Constant7'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S1>/Constant16'
                                        */
  32.0,                                /* Expression: 32
                                        * Referenced by: '<S1>/Constant1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S1>/Constant2'
                                        */
  255.0,                               /* Expression: 255
                                        * Referenced by: '<S1>/Constant3'
                                        */
  15.0,                                /* Expression: 15
                                        * Referenced by: '<S1>/Constant4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Constant5'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Constant6'
                                        */
  47.0,                                /* Expression: 47
                                        * Referenced by: '<S1>/Constant15'
                                        */
  11.0,                                /* Expression: 11
                                        * Referenced by: '<S1>/Constant9'
                                        */
  32.0,                                /* Expression: 32
                                        * Referenced by: '<S1>/Constant8'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S1>/Constant10'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Constant11'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Constant12'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Constant13'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Constant14'
                                        */

  /*  Computed Parameter: Setup_P1_Size
   * Referenced by: '<Root>/Setup '
   */
  { 1.0, 4.0 },

  /*  Expression: can1UserBR
   * Referenced by: '<Root>/Setup '
   */
  { 1.0, 1.0, 8.0, 7.0 },

  /*  Computed Parameter: Setup_P2_Size
   * Referenced by: '<Root>/Setup '
   */
  { 1.0, 4.0 },

  /*  Expression: can2UserBR
   * Referenced by: '<Root>/Setup '
   */
  { 1.0, 1.0, 8.0, 7.0 },

  /*  Computed Parameter: Setup_P3_Size
   * Referenced by: '<Root>/Setup '
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: can1SendS
                                        * Referenced by: '<Root>/Setup '
                                        */

  /*  Computed Parameter: Setup_P4_Size
   * Referenced by: '<Root>/Setup '
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: can1RecS
                                        * Referenced by: '<Root>/Setup '
                                        */

  /*  Computed Parameter: Setup_P5_Size
   * Referenced by: '<Root>/Setup '
   */
  { 1.0, 6.0 },

  /*  Expression: can2SendS
   * Referenced by: '<Root>/Setup '
   */
  { 2.0, 3.0, 4.0, 513.0, 1537.0, 1538.0 },

  /*  Computed Parameter: Setup_P6_Size
   * Referenced by: '<Root>/Setup '
   */
  { 1.0, 5.0 },

  /*  Expression: can2RecS
   * Referenced by: '<Root>/Setup '
   */
  { 2.0, 3.0, 4.0, 386.0, 1410.0 },

  /*  Computed Parameter: Setup_P7_Size
   * Referenced by: '<Root>/Setup '
   */
  { 0.0, 0.0 },

  /*  Computed Parameter: Setup_P8_Size
   * Referenced by: '<Root>/Setup '
   */
  { 0.0, 0.0 },

  /*  Computed Parameter: Setup_P9_Size
   * Referenced by: '<Root>/Setup '
   */
  { 0.0, 0.0 },

  /*  Computed Parameter: Setup_P10_Size
   * Referenced by: '<Root>/Setup '
   */
  { 0.0, 0.0 },

  /*  Computed Parameter: Setup_P11_Size
   * Referenced by: '<Root>/Setup '
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: can1RecSI
                                        * Referenced by: '<Root>/Setup '
                                        */

  /*  Computed Parameter: Setup_P12_Size
   * Referenced by: '<Root>/Setup '
   */
  { 0.0, 0.0 },

  /*  Computed Parameter: Setup_P13_Size
   * Referenced by: '<Root>/Setup '
   */
  { 1.0, 5.0 },

  /*  Expression: can2RecSI
   * Referenced by: '<Root>/Setup '
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0 },

  /*  Computed Parameter: Setup_P14_Size
   * Referenced by: '<Root>/Setup '
   */
  { 0.0, 0.0 },

  /*  Computed Parameter: Setup_P15_Size
   * Referenced by: '<Root>/Setup '
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: initarray
                                        * Referenced by: '<Root>/Setup '
                                        */

  /*  Computed Parameter: Setup_P16_Size
   * Referenced by: '<Root>/Setup '
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: termarray
                                        * Referenced by: '<Root>/Setup '
                                        */

  /*  Computed Parameter: Setup_P17_Size
   * Referenced by: '<Root>/Setup '
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: ioBaseAddress
                                        * Referenced by: '<Root>/Setup '
                                        */

  /*  Computed Parameter: Setup_P18_Size
   * Referenced by: '<Root>/Setup '
   */
  { 1.0, 1.0 },
  819200.0,                            /* Expression: memBaseAddress
                                        * Referenced by: '<Root>/Setup '
                                        */

  /*  Computed Parameter: Setup_P19_Size
   * Referenced by: '<Root>/Setup '
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: intNo
                                        * Referenced by: '<Root>/Setup '
                                        */

  /*  Computed Parameter: Setup_P20_Size
   * Referenced by: '<Root>/Setup '
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: board
                                        * Referenced by: '<Root>/Setup '
                                        */

  /*  Computed Parameter: Setup_P21_Size
   * Referenced by: '<Root>/Setup '
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: can1bus
                                        * Referenced by: '<Root>/Setup '
                                        */

  /*  Computed Parameter: Setup_P22_Size
   * Referenced by: '<Root>/Setup '
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: can2bus
                                        * Referenced by: '<Root>/Setup '
                                        */

  /*  Computed Parameter: Setup_P23_Size
   * Referenced by: '<Root>/Setup '
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: bus_off_out
                                        * Referenced by: '<Root>/Setup '
                                        */

  /*  Computed Parameter: Setup_P24_Size
   * Referenced by: '<Root>/Setup '
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: bus_off_rec
                                        * Referenced by: '<Root>/Setup '
                                        */
  5200U,                               /* Computed Parameter: Constant_Value_kv
                                        * Referenced by: '<S26>/Constant'
                                        */
  1600U,                               /* Computed Parameter: Constant_Value_ag
                                        * Referenced by: '<S27>/Constant'
                                        */
  4500U,                               /* Computed Parameter: Constant_Value_g
                                        * Referenced by: '<S28>/Constant'
                                        */
  1500U,                               /* Computed Parameter: Constant_Value_p
                                        * Referenced by: '<S29>/Constant'
                                        */

  /*  Computed Parameter: right3_XData
   * Referenced by: '<Root>/right3'
   */
  { 1243U, 3786U },

  /*  Computed Parameter: right3_YData
   * Referenced by: '<Root>/right3'
   */
  { 0U, 3200U },

  /*  Computed Parameter: right1_XData
   * Referenced by: '<Root>/right1'
   */
  { 1243U, 3786U },

  /*  Computed Parameter: right1_YData
   * Referenced by: '<Root>/right1'
   */
  { 0U, 3200U },

  /*  Computed Parameter: right2_XData
   * Referenced by: '<Root>/right2'
   */
  { 1243U, 3786U },

  /*  Computed Parameter: right2_YData
   * Referenced by: '<Root>/right2'
   */
  { 0U, 3200U },
  1U,                                  /* Expression: uint8(1)
                                        * Referenced by: '<S12>/Constant'
                                        */
  0U,                                  /* Expression: uint8(0)
                                        * Referenced by: '<S12>/SwitchControl'
                                        */
  1U,                                  /* Expression: uint8(1)
                                        * Referenced by: '<S3>/Constant'
                                        */
  0U,                                  /* Expression: uint8(0)
                                        * Referenced by: '<S3>/SwitchControl'
                                        */
  1U,                                  /* Expression: uint8(1)
                                        * Referenced by: '<S11>/Constant'
                                        */
  0U                                   /* Expression: uint8(0)
                                        * Referenced by: '<S11>/SwitchControl'
                                        */
};
