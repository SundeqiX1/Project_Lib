/*
 * Copy_3_of_canceshi_data.c
 *
 * Real-Time Workshop code generation for Simulink model "Copy_3_of_canceshi.mdl".
 *
 * Model version              : 1.71
 * Real-Time Workshop version : 7.6  (R2010b)  03-Aug-2010
 * C source code generated on : Wed May 27 09:28:19 2020
 *
 * Target selection: xpctarget.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Copy_3_of_canceshi.h"
#include "Copy_3_of_canceshi_private.h"

/* Block parameters (auto storage) */
Parameters_Copy_3_of_canceshi Copy_3_of_canceshi_P = {
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<Root>/baozhuay'
                                        */
  0.0,                                 /* Expression: vinit
                                        * Referenced by: '<S2>/Integer Delay'
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
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<Root>/shengjiangy'
                                        */
  0.0,                                 /* Expression: vinit
                                        * Referenced by: '<S3>/Integer Delay'
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
                                        * Referenced by: '<S1>/Integer Delay'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<Root>/constant5'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<Root>/constant14'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/constant15'
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
  { 0.0, 0.0 },

  /*  Computed Parameter: Setup_P5_Size
   * Referenced by: '<Root>/Setup '
   */
  { 1.0, 3.0 },

  /*  Expression: can2SendS
   * Referenced by: '<Root>/Setup '
   */
  { 2.0, 3.0, 4.0 },

  /*  Computed Parameter: Setup_P6_Size
   * Referenced by: '<Root>/Setup '
   */
  { 1.0, 4.0 },

  /*  Expression: can2RecS
   * Referenced by: '<Root>/Setup '
   */
  { 1.0, 2.0, 3.0, 4.0 },

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
  { 0.0, 0.0 },

  /*  Computed Parameter: Setup_P12_Size
   * Referenced by: '<Root>/Setup '
   */
  { 0.0, 0.0 },

  /*  Computed Parameter: Setup_P13_Size
   * Referenced by: '<Root>/Setup '
   */
  { 1.0, 4.0 },

  /*  Expression: can2RecSI
   * Referenced by: '<Root>/Setup '
   */
  { 0.0, 0.0, 0.0, 0.0 },

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
  1.0                                  /* Expression: bus_off_rec
                                        * Referenced by: '<Root>/Setup '
                                        */
};
