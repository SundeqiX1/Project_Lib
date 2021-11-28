/*
 * faren_data.c
 *
 * Real-Time Workshop code generation for Simulink model "faren.mdl".
 *
 * Model version              : 1.1
 * Real-Time Workshop version : 7.6  (R2010b)  03-Aug-2010
 * C source code generated on : Tue May 26 00:27:35 2020
 *
 * Target selection: xpctarget.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "faren.h"
#include "faren_private.h"

/* Block parameters (auto storage) */
Parameters_faren faren_P = {
  43.0,                                /* Expression: 43
                                        * Referenced by: '<S4>/Constant24'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S4>/Constant18'
                                        */
  32.0,                                /* Expression: 32
                                        * Referenced by: '<S4>/Constant17'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S4>/Constant19'
                                        */
  255.0,                               /* Expression: 255
                                        * Referenced by: '<S4>/Constant20'
                                        */
  255.0,                               /* Expression: 255
                                        * Referenced by: '<S4>/Constant21'
                                        */
  255.0,                               /* Expression: 255
                                        * Referenced by: '<S4>/Constant22'
                                        */
  255.0,                               /* Expression: 255
                                        * Referenced by: '<S4>/Constant23'
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
  { 32.0, 4.0, 16.0, 8.0 },

  /*  Computed Parameter: Setup_P2_Size
   * Referenced by: '<Root>/Setup '
   */
  { 1.0, 4.0 },

  /*  Expression: can2UserBR
   * Referenced by: '<Root>/Setup '
   */
  { 32.0, 4.0, 16.0, 8.0 },

  /*  Computed Parameter: Setup_P3_Size
   * Referenced by: '<Root>/Setup '
   */
  { 0.0, 0.0 },

  /*  Computed Parameter: Setup_P4_Size
   * Referenced by: '<Root>/Setup '
   */
  { 0.0, 0.0 },

  /*  Computed Parameter: Setup_P5_Size
   * Referenced by: '<Root>/Setup '
   */
  { 1.0, 1.0 },
  1538.0,                              /* Expression: can2SendS
                                        * Referenced by: '<Root>/Setup '
                                        */

  /*  Computed Parameter: Setup_P6_Size
   * Referenced by: '<Root>/Setup '
   */
  { 1.0, 2.0 },

  /*  Expression: can2RecS
   * Referenced by: '<Root>/Setup '
   */
  { 386.0, 1410.0 },

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
  { 1.0, 2.0 },

  /*  Expression: can2RecSI
   * Referenced by: '<Root>/Setup '
   */
  { 0.0, 0.0 },

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
  2.0,                                 /* Expression: can1bus
                                        * Referenced by: '<Root>/Setup '
                                        */

  /*  Computed Parameter: Setup_P22_Size
   * Referenced by: '<Root>/Setup '
   */
  { 1.0, 1.0 },
  2.0,                                 /* Expression: can2bus
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
  1U,                                  /* Expression: uint8(1)
                                        * Referenced by: '<S3>/Constant'
                                        */
  1U,                                  /* Expression: uint8(1)
                                        * Referenced by: '<S3>/SwitchControl'
                                        */
  1U,                                  /* Expression: uint8(1)
                                        * Referenced by: '<S2>/Constant'
                                        */
  0U                                   /* Expression: uint8(0)
                                        * Referenced by: '<S2>/SwitchControl'
                                        */
};
