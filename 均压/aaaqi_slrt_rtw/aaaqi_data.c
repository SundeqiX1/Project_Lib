/*
 * aaaqi_data.c
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

#include "aaaqi.h"
#include "aaaqi_private.h"

/* Block parameters (auto storage) */
P_aaaqi_T aaaqi_P = {
  0.33,                                /* Mask Parameter: CompareToConstant1_const
                                        * Referenced by: '<S47>/Constant'
                                        */
  0.33,                                /* Mask Parameter: CompareToConstant3_const
                                        * Referenced by: '<S49>/Constant'
                                        */
  0.33,                                /* Mask Parameter: CompareToConstant5_const
                                        * Referenced by: '<S50>/Constant'
                                        */
  0.33,                                /* Mask Parameter: CompareToConstant7_const
                                        * Referenced by: '<S51>/Constant'
                                        */
  0.33,                                /* Mask Parameter: CompareToConstant9_const
                                        * Referenced by: '<S52>/Constant'
                                        */
  0.33,                                /* Mask Parameter: CompareToConstant11_const
                                        * Referenced by: '<S48>/Constant'
                                        */
  0.01,                                /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S1>/Constant'
                                        */
  -0.01,                               /* Mask Parameter: CompareToConstant1_const_o
                                        * Referenced by: '<S2>/Constant'
                                        */
  999U,                                /* Mask Parameter: CompareToConstant2_const
                                        * Referenced by: '<S3>/Constant'
                                        */
  100U,                                /* Mask Parameter: CompareToConstant3_const_e
                                        * Referenced by: '<S4>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant3'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<Root>/Constant1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/guangai'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S22>/Constant2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/kaigai'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S22>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/xuanjin'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S23>/Constant2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/xuansong'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S23>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/jiesuo'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S24>/Constant2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/suoding'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S24>/Constant'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S28>/Constant19'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S28>/Constant18'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S28>/Constant17'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S28>/Constant16'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S28>/Constant15'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S28>/Constant14'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S28>/Constant13'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S28>/Constant12'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S28>/Constant11'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S28>/Constant10'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S28>/Constant9'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S28>/Constant8'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S28>/Constant7'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S28>/Constant6'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S28>/Constant5'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S28>/Constant4'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S28>/Constant3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S28>/Constant2'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S28>/Constant29'
                                        */
  6.0,                                 /* Expression: 6
                                        * Referenced by: '<S28>/Constant28'
                                        */
  4.0,                                 /* Expression: 4
                                        * Referenced by: '<S28>/Constant27'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S28>/Constant26'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S28>/Constant25'
                                        */
  1.5,                                 /* Expression: 1.5
                                        * Referenced by: '<S28>/Constant24'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S28>/Constant23'
                                        */
  0.6,                                 /* Expression: 0.6
                                        * Referenced by: '<S28>/Constant22'
                                        */
  0.4,                                 /* Expression: 0.4
                                        * Referenced by: '<S28>/Constant21'
                                        */
  0.2,                                 /* Expression: 0.2
                                        * Referenced by: '<S28>/Constant20'
                                        */
  -0.05,                               /* Expression: -0.05
                                        * Referenced by: '<S30>/Constant1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S31>/Gain3'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S31>/Gain2'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S31>/Gain1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S31>/Gain'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S32>/Constant19'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S32>/Constant18'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S32>/Constant17'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S32>/Constant16'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S32>/Constant15'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S32>/Constant14'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S32>/Constant13'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S32>/Constant12'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S32>/Constant11'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S32>/Constant10'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S32>/Constant9'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S32>/Constant8'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S32>/Constant7'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S32>/Constant6'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S32>/Constant5'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S32>/Constant4'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S32>/Constant3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S32>/Constant2'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S32>/Constant29'
                                        */
  6.0,                                 /* Expression: 6
                                        * Referenced by: '<S32>/Constant28'
                                        */
  4.0,                                 /* Expression: 4
                                        * Referenced by: '<S32>/Constant27'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S32>/Constant26'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S32>/Constant25'
                                        */
  1.5,                                 /* Expression: 1.5
                                        * Referenced by: '<S32>/Constant24'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S32>/Constant23'
                                        */
  0.6,                                 /* Expression: 0.6
                                        * Referenced by: '<S32>/Constant22'
                                        */
  0.4,                                 /* Expression: 0.4
                                        * Referenced by: '<S32>/Constant21'
                                        */
  0.2,                                 /* Expression: 0.2
                                        * Referenced by: '<S32>/Constant20'
                                        */
  0.0,                                 /* Computed Parameter: bililiuliangfa18_1_Y0
                                        * Referenced by: '<S25>/bililiuliangfa18_1'
                                        */
  0.0,                                 /* Computed Parameter: bililiuliangfa18_2_Y0
                                        * Referenced by: '<S25>/bililiuliangfa18_2'
                                        */
  0.0,                                 /* Computed Parameter: bililiuliangfa18_3_Y0
                                        * Referenced by: '<S25>/bililiuliangfa18_3'
                                        */
  0.0,                                 /* Computed Parameter: bililiuliangfa18_4_Y0
                                        * Referenced by: '<S25>/bililiuliangfa18_4'
                                        */
  0.0,                                 /* Computed Parameter: kaiguangaifa_Y0
                                        * Referenced by: '<S25>/kaiguangaifa'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S28>/Constant'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S28>/Gain'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S28>/Gain1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S28>/Constant1'
                                        */
  0.28,                                /* Expression: 0.28
                                        * Referenced by: '<S28>/Switch1'
                                        */
  0.26,                                /* Expression: 0.26
                                        * Referenced by: '<S28>/Switch2'
                                        */
  0.24,                                /* Expression: 0.24
                                        * Referenced by: '<S28>/Switch3'
                                        */
  0.22,                                /* Expression: 0.22
                                        * Referenced by: '<S28>/Switch4'
                                        */
  0.2,                                 /* Expression: 0.20
                                        * Referenced by: '<S28>/Switch5'
                                        */
  0.18,                                /* Expression: 0.18
                                        * Referenced by: '<S28>/Switch6'
                                        */
  0.16,                                /* Expression: 0.16
                                        * Referenced by: '<S28>/Switch7'
                                        */
  0.14,                                /* Expression: 0.14
                                        * Referenced by: '<S28>/Switch8'
                                        */
  0.12,                                /* Expression: 0.12
                                        * Referenced by: '<S28>/Switch9'
                                        */
  0.15,                                /* Expression: 0.15
                                        * Referenced by: '<S30>/Gain1'
                                        */
  0.15,                                /* Expression: 0.15
                                        * Referenced by: '<S30>/Gain'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S30>/Constant'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S32>/Constant'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S32>/Constant1'
                                        */
  0.28,                                /* Expression: 0.28
                                        * Referenced by: '<S32>/Switch1'
                                        */
  0.26,                                /* Expression: 0.26
                                        * Referenced by: '<S32>/Switch2'
                                        */
  0.24,                                /* Expression: 0.24
                                        * Referenced by: '<S32>/Switch3'
                                        */
  0.22,                                /* Expression: 0.22
                                        * Referenced by: '<S32>/Switch4'
                                        */
  0.2,                                 /* Expression: 0.20
                                        * Referenced by: '<S32>/Switch5'
                                        */
  0.18,                                /* Expression: 0.18
                                        * Referenced by: '<S32>/Switch6'
                                        */
  0.16,                                /* Expression: 0.16
                                        * Referenced by: '<S32>/Switch7'
                                        */
  0.14,                                /* Expression: 0.14
                                        * Referenced by: '<S32>/Switch8'
                                        */
  0.12,                                /* Expression: 0.12
                                        * Referenced by: '<S32>/Switch9'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S31>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S31>/Constant1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S31>/Constant2'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S38>/Constant19'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S38>/Constant18'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S38>/Constant17'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S38>/Constant16'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S38>/Constant15'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S38>/Constant14'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S38>/Constant13'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S38>/Constant12'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S38>/Constant11'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S38>/Constant10'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S38>/Constant9'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S38>/Constant8'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S38>/Constant7'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S38>/Constant6'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S38>/Constant5'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S38>/Constant4'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S38>/Constant3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S38>/Constant2'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S38>/Constant29'
                                        */
  6.0,                                 /* Expression: 6
                                        * Referenced by: '<S38>/Constant28'
                                        */
  4.0,                                 /* Expression: 4
                                        * Referenced by: '<S38>/Constant27'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S38>/Constant26'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S38>/Constant25'
                                        */
  1.5,                                 /* Expression: 1.5
                                        * Referenced by: '<S38>/Constant24'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S38>/Constant23'
                                        */
  0.6,                                 /* Expression: 0.6
                                        * Referenced by: '<S38>/Constant22'
                                        */
  0.4,                                 /* Expression: 0.4
                                        * Referenced by: '<S38>/Constant21'
                                        */
  0.2,                                 /* Expression: 0.2
                                        * Referenced by: '<S38>/Constant20'
                                        */
  -0.05,                               /* Expression: -0.05
                                        * Referenced by: '<S39>/Constant1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S40>/Gain3'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S40>/Gain2'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S40>/Gain1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S40>/Gain'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S41>/Constant19'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S41>/Constant18'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S41>/Constant17'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S41>/Constant16'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S41>/Constant15'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S41>/Constant14'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S41>/Constant13'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S41>/Constant12'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S41>/Constant11'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S41>/Constant10'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S41>/Constant9'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S41>/Constant8'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S41>/Constant7'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S41>/Constant6'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S41>/Constant5'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S41>/Constant4'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S41>/Constant3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S41>/Constant2'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S41>/Constant29'
                                        */
  6.0,                                 /* Expression: 6
                                        * Referenced by: '<S41>/Constant28'
                                        */
  4.0,                                 /* Expression: 4
                                        * Referenced by: '<S41>/Constant27'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S41>/Constant26'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S41>/Constant25'
                                        */
  1.5,                                 /* Expression: 1.5
                                        * Referenced by: '<S41>/Constant24'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S41>/Constant23'
                                        */
  0.6,                                 /* Expression: 0.6
                                        * Referenced by: '<S41>/Constant22'
                                        */
  0.4,                                 /* Expression: 0.4
                                        * Referenced by: '<S41>/Constant21'
                                        */
  0.2,                                 /* Expression: 0.2
                                        * Referenced by: '<S41>/Constant20'
                                        */
  0.0,                                 /* Computed Parameter: bililiuliangfa18_1_Y0_e
                                        * Referenced by: '<S26>/bililiuliangfa18_1'
                                        */
  0.0,                                 /* Computed Parameter: bililiuliangfa18_2_Y0_j
                                        * Referenced by: '<S26>/bililiuliangfa18_2'
                                        */
  0.0,                                 /* Computed Parameter: bililiuliangfa18_3_Y0_d
                                        * Referenced by: '<S26>/bililiuliangfa18_3'
                                        */
  0.0,                                 /* Computed Parameter: bililiuliangfa18_4_Y0_j
                                        * Referenced by: '<S26>/bililiuliangfa18_4'
                                        */
  0.0,                                 /* Computed Parameter: kaiguangaifa_Y0_i
                                        * Referenced by: '<S26>/kaiguangaifa'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S38>/Constant1'
                                        */
  0.28,                                /* Expression: 0.28
                                        * Referenced by: '<S38>/Switch1'
                                        */
  0.26,                                /* Expression: 0.26
                                        * Referenced by: '<S38>/Switch2'
                                        */
  0.24,                                /* Expression: 0.24
                                        * Referenced by: '<S38>/Switch3'
                                        */
  0.22,                                /* Expression: 0.22
                                        * Referenced by: '<S38>/Switch4'
                                        */
  0.2,                                 /* Expression: 0.20
                                        * Referenced by: '<S38>/Switch5'
                                        */
  0.18,                                /* Expression: 0.18
                                        * Referenced by: '<S38>/Switch6'
                                        */
  0.16,                                /* Expression: 0.16
                                        * Referenced by: '<S38>/Switch7'
                                        */
  0.14,                                /* Expression: 0.14
                                        * Referenced by: '<S38>/Switch8'
                                        */
  0.12,                                /* Expression: 0.12
                                        * Referenced by: '<S38>/Switch9'
                                        */
  0.8,                                 /* Expression: 0.8
                                        * Referenced by: '<S38>/Gain'
                                        */
  0.8,                                 /* Expression: 0.8
                                        * Referenced by: '<S38>/Gain1'
                                        */
  0.15,                                /* Expression: 0.15
                                        * Referenced by: '<S39>/Gain1'
                                        */
  0.15,                                /* Expression: 0.15
                                        * Referenced by: '<S39>/Gain'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S39>/Constant'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S41>/Constant1'
                                        */
  0.28,                                /* Expression: 0.28
                                        * Referenced by: '<S41>/Switch1'
                                        */
  0.26,                                /* Expression: 0.26
                                        * Referenced by: '<S41>/Switch2'
                                        */
  0.24,                                /* Expression: 0.24
                                        * Referenced by: '<S41>/Switch3'
                                        */
  0.22,                                /* Expression: 0.22
                                        * Referenced by: '<S41>/Switch4'
                                        */
  0.2,                                 /* Expression: 0.20
                                        * Referenced by: '<S41>/Switch5'
                                        */
  0.18,                                /* Expression: 0.18
                                        * Referenced by: '<S41>/Switch6'
                                        */
  0.16,                                /* Expression: 0.16
                                        * Referenced by: '<S41>/Switch7'
                                        */
  0.14,                                /* Expression: 0.14
                                        * Referenced by: '<S41>/Switch8'
                                        */
  0.12,                                /* Expression: 0.12
                                        * Referenced by: '<S41>/Switch9'
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S40>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S40>/Constant1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S40>/Constant2'
                                        */
  43.0,                                /* Expression: 43
                                        * Referenced by: '<S17>/Constant46'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S17>/Constant47'
                                        */
  32.0,                                /* Expression: 32
                                        * Referenced by: '<S17>/Constant40'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S17>/Constant41'
                                        */
  7.0,                                 /* Expression: 7
                                        * Referenced by: '<S17>/Constant42'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S17>/Constant43'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S17>/Constant44'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S17>/Constant45'
                                        */
  43.0,                                /* Expression: 43
                                        * Referenced by: '<S17>/Constant38'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S17>/Constant39'
                                        */
  32.0,                                /* Expression: 32
                                        * Referenced by: '<S17>/Constant32'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S17>/Constant33'
                                        */
  255.0,                               /* Expression: 255
                                        * Referenced by: '<S17>/Constant34'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S17>/Constant35'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S17>/Constant36'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S17>/Constant37'
                                        */
  43.0,                                /* Expression: 43
                                        * Referenced by: '<S17>/Constant30'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S17>/Constant31'
                                        */
  32.0,                                /* Expression: 32
                                        * Referenced by: '<S17>/Constant24'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S17>/Constant25'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S17>/Constant26'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S17>/Constant27'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S17>/Constant28'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S17>/Constant29'
                                        */
  43.0,                                /* Expression: 43
                                        * Referenced by: '<S17>/Constant22'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S17>/Constant23'
                                        */
  32.0,                                /* Expression: 32
                                        * Referenced by: '<S17>/Constant16'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S17>/Constant17'
                                        */
  255.0,                               /* Expression: 255
                                        * Referenced by: '<S17>/Constant18'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S17>/Constant19'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S17>/Constant20'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S17>/Constant21'
                                        */
  43.0,                                /* Expression: 43
                                        * Referenced by: '<S17>/Constant8'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S17>/Constant9'
                                        */
  32.0,                                /* Expression: 32
                                        * Referenced by: '<S17>/Constant10'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S17>/Constant11'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S17>/Constant12'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S17>/Constant13'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S17>/Constant14'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S17>/Constant15'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/tiaoshi'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S21>/fa11_1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S21>/fa11_2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S21>/fa11_5'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S21>/fa20'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S21>/fa16_1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S21>/fa3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S21>/fa21'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S21>/xuansongmingling'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S21>/xuanjinmingling'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S21>/suodingmingling'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S21>/jiesuomingling'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S21>/fa18_1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S21>/fa18_2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S21>/fa18_3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S21>/fa18_4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S21>/fa_kgg'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/jiting'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<Root>/qiehuan'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/kaishi'
                                        */

  /*  Expression: [0 0.5]
   * Referenced by: '<S17>/1-D Lookup Table1'
   */
  { 0.0, 0.5 },

  /*  Expression: [1022 6022]
   * Referenced by: '<S17>/1-D Lookup Table1'
   */
  { 1022.0, 6022.0 },

  /*  Expression: [0 0.5]
   * Referenced by: '<S17>/1-D Lookup Table2'
   */
  { 0.0, 0.5 },

  /*  Expression: [1024 6018]
   * Referenced by: '<S17>/1-D Lookup Table2'
   */
  { 1024.0, 6018.0 },

  /*  Expression: [0 0.5]
   * Referenced by: '<S17>/1-D Lookup Table3'
   */
  { 0.0, 0.5 },

  /*  Expression: [999 5991]
   * Referenced by: '<S17>/1-D Lookup Table3'
   */
  { 999.0, 5991.0 },

  /*  Expression: [0 0.5]
   * Referenced by: '<S17>/1-D Lookup Table4'
   */
  { 0.0, 0.5 },

  /*  Expression: [1006 6005]
   * Referenced by: '<S17>/1-D Lookup Table4'
   */
  { 1006.0, 6005.0 },

  /*  Expression: [0 0.5]
   * Referenced by: '<S17>/1-D Lookup Table5'
   */
  { 0.0, 0.5 },

  /*  Expression: [1010 6012]
   * Referenced by: '<S17>/1-D Lookup Table5'
   */
  { 1010.0, 6012.0 },

  /*  Expression: [0 0.5]
   * Referenced by: '<S17>/1-D Lookup Table6'
   */
  { 0.0, 0.5 },

  /*  Expression: [1024 6020]
   * Referenced by: '<S17>/1-D Lookup Table6'
   */
  { 1024.0, 6020.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<Root>/Constant2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/SCzhushui'
                                        */
  0.2,                                 /* Expression: 0.2
                                        * Referenced by: '<S17>/Step'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S17>/Step'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S17>/Step'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<Root>/Constant'
                                        */
  0.2,                                 /* Expression: 0.2
                                        * Referenced by: '<S17>/Step1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S17>/Step1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S17>/Step1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/SCjiaya'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/SXQjunya'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/SXQxieya'
                                        */
  0.33,                                /* Expression: 0.33
                                        * Referenced by: '<Root>/水舱最大压力'
                                        */
  0.03,                                /* Expression: 0.03
                                        * Referenced by: '<Root>/凸膜上下腔最小压力'
                                        */
  0.33,                                /* Expression: 0.33
                                        * Referenced by: '<Root>/凸膜上下腔最大压力'
                                        */

  /*  Expression: [0 600]
   * Referenced by: '<S17>/1-D Lookup Table'
   */
  { 0.0, 600.0 },

  /*  Expression: [80 8500]
   * Referenced by: '<S17>/1-D Lookup Table'
   */
  { 80.0, 8500.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Memory'
                                        */
  12.0,                                /* Expression: 12
                                        * Referenced by: '<S20>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S20>/Saturation'
                                        */
  600.0,                               /* Expression: 600
                                        * Referenced by: '<S20>/Saturation1'
                                        */
  20.0,                                /* Expression: 20
                                        * Referenced by: '<S20>/Saturation1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Memory1'
                                        */
  12.0,                                /* Expression: 12
                                        * Referenced by: '<S18>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S18>/Saturation'
                                        */
  600.0,                               /* Expression: 600
                                        * Referenced by: '<S18>/Saturation1'
                                        */
  20.0,                                /* Expression: 20
                                        * Referenced by: '<S18>/Saturation1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/zidongkaigai'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/zidongguangai'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S22>/Memory'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S22>/Switch'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S22>/Memory1'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S22>/Switch2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/shiyabuchang'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S23>/Memory'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S23>/Switch'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S24>/Memory'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S24>/Switch'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S24>/Memory1'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S24>/Switch2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/xuanjinjianya'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S23>/Memory1'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S23>/Switch2'
                                        */
  0.33,                                /* Expression: 0.33
                                        * Referenced by: '<Root>/带气注水最大压力'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S13>/Switch1'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S13>/Switch2'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S13>/Switch3'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S13>/Switch4'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S13>/Switch5'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S13>/Switch6'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S13>/Switch7'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S13>/Switch8'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S13>/Switch9'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S13>/Switch10'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S13>/Switch11'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/diancifa11_3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/diancifa11_4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/SCxieya'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/diancifa16_2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/diancifa16_3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/BCQbushui'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S5>/constant'
                                        */

  /*  Computed Parameter: PCI1716DIO1_P1_Size
   * Referenced by: '<S5>/PCI1716DIO1'
   */
  { 1.0, 2.0 },

  /*  Expression: [SampleTime SampleOffset]
   * Referenced by: '<S5>/PCI1716DIO1'
   */
  { -1.0, 0.0 },

  /*  Computed Parameter: PCI1716DIO1_P2_Size
   * Referenced by: '<S5>/PCI1716DIO1'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: SLOT
                                        * Referenced by: '<S5>/PCI1716DIO1'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S13>/Switch12'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S13>/Switch13'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S13>/Switch14'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S13>/Switch17'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<S13>/Switch18'
                                        */

  /*  Expression: [0 115]
   * Referenced by: '<Root>/1-D Lookup Table'
   */
  { 0.0, 115.0 },

  /*  Expression: [0 600]
   * Referenced by: '<Root>/1-D Lookup Table'
   */
  { 0.0, 600.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<Root>/Gain'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S6>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S6>/Saturation'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S6>/Saturation1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S6>/Saturation1'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S6>/Saturation2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S6>/Saturation2'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S6>/Saturation3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S6>/Saturation3'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S6>/Saturation4'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S6>/Saturation4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S6>/Constant'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S6>/Saturation5'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S6>/Saturation5'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S6>/Constant1'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S6>/Saturation6'
                                        */
  -10.0,                               /* Expression: -10
                                        * Referenced by: '<S6>/Saturation6'
                                        */
  5.0,                                 /* Expression: 5
                                        * Referenced by: '<Root>/bilijianyafa'
                                        */
  10.0,                                /* Expression: 10
                                        * Referenced by: '<S6>/Saturation7'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S6>/Saturation7'
                                        */

  /*  Computed Parameter: PCI6208ADA_P1_Size
   * Referenced by: '<S6>/PCI-6208A DA '
   */
  { 1.0, 8.0 },

  /*  Expression: channel
   * Referenced by: '<S6>/PCI-6208A DA '
   */
  { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0 },

  /*  Computed Parameter: PCI6208ADA_P2_Size
   * Referenced by: '<S6>/PCI-6208A DA '
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: range
                                        * Referenced by: '<S6>/PCI-6208A DA '
                                        */

  /*  Computed Parameter: PCI6208ADA_P3_Size
   * Referenced by: '<S6>/PCI-6208A DA '
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: sampletime
                                        * Referenced by: '<S6>/PCI-6208A DA '
                                        */

  /*  Computed Parameter: PCI6208ADA_P4_Size
   * Referenced by: '<S6>/PCI-6208A DA '
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: pcislot
                                        * Referenced by: '<S6>/PCI-6208A DA '
                                        */

  /*  Computed Parameter: PCI6208ADA_P5_Size
   * Referenced by: '<S6>/PCI-6208A DA '
   */
  { 1.0, 8.0 },

  /*  Expression: reset
   * Referenced by: '<S6>/PCI-6208A DA '
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /*  Computed Parameter: PCI6208ADA_P6_Size
   * Referenced by: '<S6>/PCI-6208A DA '
   */
  { 1.0, 8.0 },

  /*  Expression: initval
   * Referenced by: '<S6>/PCI-6208A DA '
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Memory2'
                                        */
  43.0,                                /* Expression: 43
                                        * Referenced by: '<S17>/Constant'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S17>/Constant1'
                                        */
  32.0,                                /* Expression: 32
                                        * Referenced by: '<S17>/Constant2'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S17>/Constant3'
                                        */
  255.0,                               /* Expression: 255
                                        * Referenced by: '<S17>/Constant4'
                                        */
  255.0,                               /* Expression: 255
                                        * Referenced by: '<S17>/Constant5'
                                        */
  255.0,                               /* Expression: 255
                                        * Referenced by: '<S17>/Constant6'
                                        */
  255.0,                               /* Expression: 255
                                        * Referenced by: '<S17>/Constant7'
                                        */

  /*  Computed Parameter: Setup_P1_Size
   * Referenced by: '<S17>/Setup '
   */
  { 1.0, 4.0 },

  /*  Expression: can1UserBR
   * Referenced by: '<S17>/Setup '
   */
  { 1.0, 1.0, 4.0, 3.0 },

  /*  Computed Parameter: Setup_P2_Size
   * Referenced by: '<S17>/Setup '
   */
  { 1.0, 4.0 },

  /*  Expression: can2UserBR
   * Referenced by: '<S17>/Setup '
   */
  { 1.0, 1.0, 8.0, 7.0 },

  /*  Computed Parameter: Setup_P3_Size
   * Referenced by: '<S17>/Setup '
   */
  { 1.0, 1.0 },
  1537.0,                              /* Expression: can1SendS
                                        * Referenced by: '<S17>/Setup '
                                        */

  /*  Computed Parameter: Setup_P4_Size
   * Referenced by: '<S17>/Setup '
   */
  { 1.0, 8.0 },

  /*  Expression: can1RecS
   * Referenced by: '<S17>/Setup '
   */
  { 385.0, 386.0, 387.0, 388.0, 389.0, 642.0, 644.0, 1157.0 },

  /*  Computed Parameter: Setup_P5_Size
   * Referenced by: '<S17>/Setup '
   */
  { 1.0, 4.0 },

  /*  Expression: can2SendS
   * Referenced by: '<S17>/Setup '
   */
  { 1538.0, 1539.0, 1540.0, 1541.0 },

  /*  Computed Parameter: Setup_P6_Size
   * Referenced by: '<S17>/Setup '
   */
  { 0.0, 0.0 },

  /*  Computed Parameter: Setup_P7_Size
   * Referenced by: '<S17>/Setup '
   */
  { 0.0, 0.0 },

  /*  Computed Parameter: Setup_P8_Size
   * Referenced by: '<S17>/Setup '
   */
  { 0.0, 0.0 },

  /*  Computed Parameter: Setup_P9_Size
   * Referenced by: '<S17>/Setup '
   */
  { 0.0, 0.0 },

  /*  Computed Parameter: Setup_P10_Size
   * Referenced by: '<S17>/Setup '
   */
  { 0.0, 0.0 },

  /*  Computed Parameter: Setup_P11_Size
   * Referenced by: '<S17>/Setup '
   */
  { 1.0, 8.0 },

  /*  Expression: can1RecSI
   * Referenced by: '<S17>/Setup '
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /*  Computed Parameter: Setup_P12_Size
   * Referenced by: '<S17>/Setup '
   */
  { 0.0, 0.0 },

  /*  Computed Parameter: Setup_P13_Size
   * Referenced by: '<S17>/Setup '
   */
  { 0.0, 0.0 },

  /*  Computed Parameter: Setup_P14_Size
   * Referenced by: '<S17>/Setup '
   */
  { 0.0, 0.0 },

  /*  Computed Parameter: Setup_P15_Size
   * Referenced by: '<S17>/Setup '
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: initarray
                                        * Referenced by: '<S17>/Setup '
                                        */

  /*  Computed Parameter: Setup_P16_Size
   * Referenced by: '<S17>/Setup '
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: termarray
                                        * Referenced by: '<S17>/Setup '
                                        */

  /*  Computed Parameter: Setup_P17_Size
   * Referenced by: '<S17>/Setup '
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: ioBaseAddress
                                        * Referenced by: '<S17>/Setup '
                                        */

  /*  Computed Parameter: Setup_P18_Size
   * Referenced by: '<S17>/Setup '
   */
  { 1.0, 1.0 },
  819200.0,                            /* Expression: memBaseAddress
                                        * Referenced by: '<S17>/Setup '
                                        */

  /*  Computed Parameter: Setup_P19_Size
   * Referenced by: '<S17>/Setup '
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: intNo
                                        * Referenced by: '<S17>/Setup '
                                        */

  /*  Computed Parameter: Setup_P20_Size
   * Referenced by: '<S17>/Setup '
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: board
                                        * Referenced by: '<S17>/Setup '
                                        */

  /*  Computed Parameter: Setup_P21_Size
   * Referenced by: '<S17>/Setup '
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: can1bus
                                        * Referenced by: '<S17>/Setup '
                                        */

  /*  Computed Parameter: Setup_P22_Size
   * Referenced by: '<S17>/Setup '
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: can2bus
                                        * Referenced by: '<S17>/Setup '
                                        */

  /*  Computed Parameter: Setup_P23_Size
   * Referenced by: '<S17>/Setup '
   */
  { 1.0, 1.0 },
  0.0,                                 /* Expression: bus_off_out
                                        * Referenced by: '<S17>/Setup '
                                        */

  /*  Computed Parameter: Setup_P24_Size
   * Referenced by: '<S17>/Setup '
   */
  { 1.0, 1.0 },
  1.0,                                 /* Expression: bus_off_rec
                                        * Referenced by: '<S17>/Setup '
                                        */

  /*  Computed Parameter: PCI1784_P1_Size
   * Referenced by: '<Root>/PCI-1784'
   */
  { 1.0, 8.0 },

  /*  Expression: channel
   * Referenced by: '<Root>/PCI-1784'
   */
  { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0 },

  /*  Computed Parameter: PCI1784_P2_Size
   * Referenced by: '<Root>/PCI-1784'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: sampletime
                                        * Referenced by: '<Root>/PCI-1784'
                                        */

  /*  Computed Parameter: PCI1784_P3_Size
   * Referenced by: '<Root>/PCI-1784'
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: slot
                                        * Referenced by: '<Root>/PCI-1784'
                                        */
  0U,                                  /* Computed Parameter: ManualSwitch2_CurrentSetting
                                        * Referenced by: '<S17>/Manual Switch2'
                                        */
  0U,                                  /* Computed Parameter: ManualSwitch4_CurrentSetting
                                        * Referenced by: '<S17>/Manual Switch4'
                                        */
  0U,                                  /* Computed Parameter: ManualSwitch_CurrentSetting
                                        * Referenced by: '<S17>/Manual Switch'
                                        */
  0U,                                  /* Computed Parameter: ManualSwitch1_CurrentSetting
                                        * Referenced by: '<S17>/Manual Switch1'
                                        */
  0U,                                  /* Computed Parameter: ManualSwitch3_CurrentSetting
                                        * Referenced by: '<S17>/Manual Switch3'
                                        */

  /* Start of '<Root>/Subsystem5' */
  {
    0.0,                               /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S16>/Out1'
                                        */
    600.0                              /* Expression: 600
                                        * Referenced by: '<S16>/Constant'
                                        */
  }
  /* End of '<Root>/Subsystem5' */
  ,

  /* Start of '<Root>/Subsystem4' */
  {
    0.0,                               /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S15>/Out1'
                                        */
    20.0                               /* Expression: 20
                                        * Referenced by: '<S15>/Constant'
                                        */
  }
  /* End of '<Root>/Subsystem4' */
};
