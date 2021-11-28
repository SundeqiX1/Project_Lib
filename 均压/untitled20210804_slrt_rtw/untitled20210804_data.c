/*
 * untitled20210804_data.c
 *
 * Code generation for model "untitled20210804".
 *
 * Model version              : 1.3
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Thu Aug 05 10:14:40 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "untitled20210804.h"
#include "untitled20210804_private.h"

/* Block parameters (auto storage) */
P_untitled20210804_T untitled20210804_P = {
  43.0,                                /* Expression: 43
                                        * Referenced by: '<Root>/Constant22'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<Root>/Constant23'
                                        */
  32.0,                                /* Expression: 32
                                        * Referenced by: '<Root>/Constant16'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<Root>/Constant17'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant18'
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
  43.0,                                /* Expression: 43
                                        * Referenced by: '<Root>/Constant8'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<Root>/Constant9'
                                        */
  32.0,                                /* Expression: 32
                                        * Referenced by: '<Root>/Constant10'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<Root>/Constant11'
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

  /*  Expression: [0 600]
   * Referenced by: '<Root>/1-D Lookup Table'
   */
  { 0.0, 600.0 },

  /*  Expression: [3002 43350]
   * Referenced by: '<Root>/1-D Lookup Table'
   */
  { 3002.0, 43350.0 },
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<Root>/Gain'
                                        */
  43.0,                                /* Expression: 43
                                        * Referenced by: '<Root>/Constant'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<Root>/Constant1'
                                        */
  32.0,                                /* Expression: 32
                                        * Referenced by: '<Root>/Constant2'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<Root>/Constant3'
                                        */
  255.0,                               /* Expression: 255
                                        * Referenced by: '<Root>/Constant4'
                                        */
  255.0,                               /* Expression: 255
                                        * Referenced by: '<Root>/Constant5'
                                        */
  255.0,                               /* Expression: 255
                                        * Referenced by: '<Root>/Constant6'
                                        */
  255.0,                               /* Expression: 255
                                        * Referenced by: '<Root>/Constant7'
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
  { 1.0, 2.0 },

  /*  Expression: can1SendS
   * Referenced by: '<Root>/Setup '
   */
  { 1537.0, 1538.0 },

  /*  Computed Parameter: Setup_P4_Size
   * Referenced by: '<Root>/Setup '
   */
  { 1.0, 2.0 },

  /*  Expression: can1RecS
   * Referenced by: '<Root>/Setup '
   */
  { 385.0, 386.0 },

  /*  Computed Parameter: Setup_P5_Size
   * Referenced by: '<Root>/Setup '
   */
  { 0.0, 0.0 },

  /*  Computed Parameter: Setup_P6_Size
   * Referenced by: '<Root>/Setup '
   */
  { 0.0, 0.0 },

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
  { 1.0, 2.0 },

  /*  Expression: can1RecSI
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
  0U,                                  /* Computed Parameter: ManualSwitch_CurrentSetting
                                        * Referenced by: '<Root>/Manual Switch'
                                        */
  0U                                   /* Computed Parameter: ManualSwitch1_CurrentSetting
                                        * Referenced by: '<Root>/Manual Switch1'
                                        */
};
