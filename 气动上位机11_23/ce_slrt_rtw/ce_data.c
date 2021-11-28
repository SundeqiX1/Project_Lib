/*
 * ce_data.c
 *
 * Code generation for model "ce".
 *
 * Model version              : 1.259
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Tue Nov 23 18:58:58 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ce.h"
#include "ce_private.h"

/* Block parameters (auto storage) */
P_ce_T ce_P = {
  0.0,                                 /* Computed Parameter: Out5t1_Y0
                                        * Referenced by: '<S6>/Out-5t1'
                                        */
  0.0,                                 /* Computed Parameter: Out5t2_Y0
                                        * Referenced by: '<S6>/Out-5t2'
                                        */
  0.0,                                 /* Computed Parameter: Out150t1_Y0
                                        * Referenced by: '<S6>/Out-150t1'
                                        */
  0.0,                                 /* Computed Parameter: Out150t2_Y0
                                        * Referenced by: '<S6>/Out-150t2'
                                        */
  0.0,                                 /* Computed Parameter: Outwy1_Y0
                                        * Referenced by: '<S6>/Out-wy1'
                                        */
  0.0,                                 /* Computed Parameter: Outwy2_Y0
                                        * Referenced by: '<S6>/Out-wy2'
                                        */
  0.0,                                 /* Computed Parameter: Outs1_Y0
                                        * Referenced by: '<S6>/Out-s1'
                                        */
  0.0,                                 /* Computed Parameter: Outs2_Y0
                                        * Referenced by: '<S6>/Out-s2'
                                        */
  0.0,                                 /* Computed Parameter: Outs3_Y0
                                        * Referenced by: '<S6>/Out-s3'
                                        */
  0.0,                                 /* Computed Parameter: Outs4_Y0
                                        * Referenced by: '<S6>/Out-s4'
                                        */
  0.0,                                 /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S7>/Out1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S4>/Switch'
                                        */
  5.0,                                 /* Expression: 5
                                        * Referenced by: '<S4>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S4>/Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S5>/Switch2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S5>/Constant1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/cns2'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S5>/Gain4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S5>/Switch4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S5>/Switch1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S5>/Constant4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S5>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/cns1'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<S5>/Gain3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S5>/Switch3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S5>/Switch'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S5>/Constant3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S5>/Constant2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/cns3'
                                        */

  /*  Computed Parameter: PCI1_P1_Size
   * Referenced by: '<Root>/PCI-1'
   */
  { 1.0, 2.0 },

  /*  Expression: [SampleTime SampleOffset]
   * Referenced by: '<Root>/PCI-1'
   */
  { 0.001, 0.0 },

  /*  Computed Parameter: PCI1_P2_Size
   * Referenced by: '<Root>/PCI-1'
   */
  { 1.0, 2.0 },

  /*  Expression: SLOT
   * Referenced by: '<Root>/PCI-1'
   */
  { 2.0, 13.0 },

  /*  Computed Parameter: PCI2_P1_Size
   * Referenced by: '<Root>/PCI-2'
   */
  { 1.0, 2.0 },

  /*  Expression: [SampleTime SampleOffset]
   * Referenced by: '<Root>/PCI-2'
   */
  { 0.001, 0.0 },

  /*  Computed Parameter: PCI2_P2_Size
   * Referenced by: '<Root>/PCI-2'
   */
  { 1.0, 2.0 },

  /*  Expression: SLOT
   * Referenced by: '<Root>/PCI-2'
   */
  { 2.0, 12.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/zidong'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/shoudong'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/start'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/jt'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/fby'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/by'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/fqyc'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/bdqy'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/fq'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/rqfq'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/qfq'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Memory'
                                        */

  /*  Computed Parameter: AnalogFilterDesign2_A
   * Referenced by: '<Root>/Analog Filter Design2'
   */
  { -308.12278316637941, -157.07963267948969, 157.07963267948966,
    157.07963267948966, -261.213882569283, -157.07963267948966,
    157.07963267948966, 157.07963267948966, -174.5375362607551,
    -157.07963267948966, 157.07963267948963, 157.07963267948969,
    -61.289432243233541, -157.07963267948969, 157.07963267948963 },
  157.07963267948966,                  /* Computed Parameter: AnalogFilterDesign2_B
                                        * Referenced by: '<Root>/Analog Filter Design2'
                                        */
  1.0000000000000004,                  /* Computed Parameter: AnalogFilterDesign2_C
                                        * Referenced by: '<Root>/Analog Filter Design2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Analog Filter Design2'
                                        */

  /*  Computed Parameter: AnalogFilterDesign4_A
   * Referenced by: '<Root>/Analog Filter Design4'
   */
  { -308.12278316637941, -157.07963267948969, 157.07963267948966,
    157.07963267948966, -261.213882569283, -157.07963267948966,
    157.07963267948966, 157.07963267948966, -174.5375362607551,
    -157.07963267948966, 157.07963267948963, 157.07963267948969,
    -61.289432243233541, -157.07963267948969, 157.07963267948963 },
  157.07963267948966,                  /* Computed Parameter: AnalogFilterDesign4_B
                                        * Referenced by: '<Root>/Analog Filter Design4'
                                        */
  1.0000000000000004,                  /* Computed Parameter: AnalogFilterDesign4_C
                                        * Referenced by: '<Root>/Analog Filter Design4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Analog Filter Design4'
                                        */
  -1.5,                                /* Expression: -1.5
                                        * Referenced by: '<Root>/Switch'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/fby_qfkk'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/exp_ready'
                                        */

  /*  Computed Parameter: AnalogFilterDesign6_A
   * Referenced by: '<Root>/Analog Filter Design6'
   */
  { -308.12278316637941, -157.07963267948969, 157.07963267948966,
    157.07963267948966, -261.213882569283, -157.07963267948966,
    157.07963267948966, 157.07963267948966, -174.5375362607551,
    -157.07963267948966, 157.07963267948963, 157.07963267948969,
    -61.289432243233541, -157.07963267948969, 157.07963267948963 },
  157.07963267948966,                  /* Computed Parameter: AnalogFilterDesign6_B
                                        * Referenced by: '<Root>/Analog Filter Design6'
                                        */
  1.0000000000000004,                  /* Computed Parameter: AnalogFilterDesign6_C
                                        * Referenced by: '<Root>/Analog Filter Design6'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Analog Filter Design6'
                                        */

  /*  Expression: [-0.16 10]
   * Referenced by: '<Root>/biaoding4'
   */
  { -0.16, 10.0 },

  /*  Expression: [0 5]
   * Referenced by: '<Root>/biaoding4'
   */
  { 0.0, 5.0 },

  /*  Computed Parameter: AnalogFilterDesign5_A
   * Referenced by: '<Root>/Analog Filter Design5'
   */
  { -308.12278316637941, -157.07963267948969, 157.07963267948966,
    157.07963267948966, -261.213882569283, -157.07963267948966,
    157.07963267948966, 157.07963267948966, -174.5375362607551,
    -157.07963267948966, 157.07963267948963, 157.07963267948969,
    -61.289432243233541, -157.07963267948969, 157.07963267948963 },
  157.07963267948966,                  /* Computed Parameter: AnalogFilterDesign5_B
                                        * Referenced by: '<Root>/Analog Filter Design5'
                                        */
  1.0000000000000004,                  /* Computed Parameter: AnalogFilterDesign5_C
                                        * Referenced by: '<Root>/Analog Filter Design5'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Analog Filter Design5'
                                        */

  /*  Expression: [-0.063 5]
   * Referenced by: '<Root>/biaoding5'
   */
  { -0.063, 5.0 },

  /*  Expression: [0 100]
   * Referenced by: '<Root>/biaoding5'
   */
  { 0.0, 100.0 },

  /*  Expression: [-0.052 5]
   * Referenced by: '<Root>/biaoding6'
   */
  { -0.052, 5.0 },

  /*  Expression: [0 100]
   * Referenced by: '<Root>/biaoding6'
   */
  { 0.0, 100.0 },

  /*  Expression: [-0.065 5]
   * Referenced by: '<Root>/biaoding7'
   */
  { -0.065, 5.0 },

  /*  Expression: [0 100]
   * Referenced by: '<Root>/biaoding7'
   */
  { 0.0, 100.0 },

  /*  Expression: [-0.002 10]
   * Referenced by: '<Root>/biaoding8'
   */
  { -0.002, 10.0 },

  /*  Expression: [0 5]
   * Referenced by: '<Root>/biaoding8'
   */
  { 0.0, 5.0 },

  /*  Expression: [0 10]
   * Referenced by: '<Root>/biaoding9'
   */
  { 0.0, 10.0 },

  /*  Expression: [0 150]
   * Referenced by: '<Root>/biaoding9'
   */
  { 0.0, 150.0 },

  /*  Expression: [0 10]
   * Referenced by: '<Root>/biaoding11'
   */
  { 0.0, 10.0 },

  /*  Expression: [0 150]
   * Referenced by: '<Root>/biaoding11'
   */
  { 0.0, 150.0 },

  /*  Computed Parameter: AnalogFilterDesign7_A
   * Referenced by: '<Root>/Analog Filter Design7'
   */
  { -369.74733979965526, -188.4955592153876, 188.49555921538757,
    188.49555921538757, -313.45665908313958, -188.49555921538757,
    188.49555921538757, 188.49555921538757, -209.4450435129061,
    -188.49555921538757, 188.49555921538754, 188.4955592153876,
    -73.54731869188025, -188.4955592153876, 188.49555921538754 },
  188.49555921538757,                  /* Computed Parameter: AnalogFilterDesign7_B
                                        * Referenced by: '<Root>/Analog Filter Design7'
                                        */
  1.0000000000000004,                  /* Computed Parameter: AnalogFilterDesign7_C
                                        * Referenced by: '<Root>/Analog Filter Design7'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Analog Filter Design7'
                                        */
  42.985,                              /* Expression: 42.985
                                        * Referenced by: '<Root>/Gain2'
                                        */

  /*  Computed Parameter: AnalogFilterDesign9_A
   * Referenced by: '<Root>/Analog Filter Design9'
   */
  { -369.74733979965526, -188.4955592153876, 188.49555921538757,
    188.49555921538757, -313.45665908313958, -188.49555921538757,
    188.49555921538757, 188.49555921538757, -209.4450435129061,
    -188.49555921538757, 188.49555921538754, 188.4955592153876,
    -73.54731869188025, -188.4955592153876, 188.49555921538754 },
  188.49555921538757,                  /* Computed Parameter: AnalogFilterDesign9_B
                                        * Referenced by: '<Root>/Analog Filter Design9'
                                        */
  1.0000000000000004,                  /* Computed Parameter: AnalogFilterDesign9_C
                                        * Referenced by: '<Root>/Analog Filter Design9'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Analog Filter Design9'
                                        */
  42.985,                              /* Expression: 42.985
                                        * Referenced by: '<Root>/Gain'
                                        */

  /*  Computed Parameter: AnalogFilterDesign8_A
   * Referenced by: '<Root>/Analog Filter Design8'
   */
  { -369.74733979965526, -188.4955592153876, 188.49555921538757,
    188.49555921538757, -313.45665908313958, -188.49555921538757,
    188.49555921538757, 188.49555921538757, -209.4450435129061,
    -188.49555921538757, 188.49555921538754, 188.4955592153876,
    -73.54731869188025, -188.4955592153876, 188.49555921538754 },
  188.49555921538757,                  /* Computed Parameter: AnalogFilterDesign8_B
                                        * Referenced by: '<Root>/Analog Filter Design8'
                                        */
  1.0000000000000004,                  /* Computed Parameter: AnalogFilterDesign8_C
                                        * Referenced by: '<Root>/Analog Filter Design8'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Analog Filter Design8'
                                        */
  -97.0874,                            /* Expression: -97.0874
                                        * Referenced by: '<Root>/Gain3'
                                        */

  /*  Computed Parameter: AnalogFilterDesign10_A
   * Referenced by: '<Root>/Analog Filter Design10'
   */
  { -369.74733979965526, -188.4955592153876, 188.49555921538757,
    188.49555921538757, -313.45665908313958, -188.49555921538757,
    188.49555921538757, 188.49555921538757, -209.4450435129061,
    -188.49555921538757, 188.49555921538754, 188.4955592153876,
    -73.54731869188025, -188.4955592153876, 188.49555921538754 },
  188.49555921538757,                  /* Computed Parameter: AnalogFilterDesign10_B
                                        * Referenced by: '<Root>/Analog Filter Design10'
                                        */
  1.0000000000000004,                  /* Computed Parameter: AnalogFilterDesign10_C
                                        * Referenced by: '<Root>/Analog Filter Design10'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Analog Filter Design10'
                                        */
  42.985,                              /* Expression: 42.985
                                        * Referenced by: '<Root>/Gain1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/t0'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S5>/Switch6'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S5>/Switch7'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S5>/Constant5'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/P'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/cns'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S8>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/Switch'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/I'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/Integrator'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/D'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Switch1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S5>/Switch5'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S5>/Switch8'
                                        */

  /*  Computed Parameter: AnalogFilterDesign3_A
   * Referenced by: '<Root>/Analog Filter Design3'
   */
  { -308.12278316637941, -157.07963267948969, 157.07963267948966,
    157.07963267948966, -261.213882569283, -157.07963267948966,
    157.07963267948966, 157.07963267948966, -174.5375362607551,
    -157.07963267948966, 157.07963267948963, 157.07963267948969,
    -61.289432243233541, -157.07963267948969, 157.07963267948963 },
  157.07963267948966,                  /* Computed Parameter: AnalogFilterDesign3_B
                                        * Referenced by: '<Root>/Analog Filter Design3'
                                        */
  1.0000000000000004,                  /* Computed Parameter: AnalogFilterDesign3_C
                                        * Referenced by: '<Root>/Analog Filter Design3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Analog Filter Design3'
                                        */

  /*  Computed Parameter: AnalogFilterDesign1_A
   * Referenced by: '<Root>/Analog Filter Design1'
   */
  { -308.12278316637941, -157.07963267948969, 157.07963267948966,
    157.07963267948966, -261.213882569283, -157.07963267948966,
    157.07963267948966, 157.07963267948966, -174.5375362607551,
    -157.07963267948966, 157.07963267948963, 157.07963267948969,
    -61.289432243233541, -157.07963267948969, 157.07963267948963 },
  157.07963267948966,                  /* Computed Parameter: AnalogFilterDesign1_B
                                        * Referenced by: '<Root>/Analog Filter Design1'
                                        */
  1.0000000000000004,                  /* Computed Parameter: AnalogFilterDesign1_C
                                        * Referenced by: '<Root>/Analog Filter Design1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Analog Filter Design1'
                                        */

  /*  Computed Parameter: PCI6208ADA_P1_Size
   * Referenced by: '<Root>/PCI-6208A DA '
   */
  { 1.0, 8.0 },

  /*  Expression: channel
   * Referenced by: '<Root>/PCI-6208A DA '
   */
  { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0 },

  /*  Computed Parameter: PCI6208ADA_P2_Size
   * Referenced by: '<Root>/PCI-6208A DA '
   */
  { 1.0, 1.0 },
  3.0,                                 /* Expression: range
                                        * Referenced by: '<Root>/PCI-6208A DA '
                                        */

  /*  Computed Parameter: PCI6208ADA_P3_Size
   * Referenced by: '<Root>/PCI-6208A DA '
   */
  { 1.0, 1.0 },
  0.001,                               /* Expression: sampletime
                                        * Referenced by: '<Root>/PCI-6208A DA '
                                        */

  /*  Computed Parameter: PCI6208ADA_P4_Size
   * Referenced by: '<Root>/PCI-6208A DA '
   */
  { 1.0, 1.0 },
  -1.0,                                /* Expression: pcislot
                                        * Referenced by: '<Root>/PCI-6208A DA '
                                        */

  /*  Computed Parameter: PCI6208ADA_P5_Size
   * Referenced by: '<Root>/PCI-6208A DA '
   */
  { 1.0, 8.0 },

  /*  Expression: reset
   * Referenced by: '<Root>/PCI-6208A DA '
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /*  Computed Parameter: PCI6208ADA_P6_Size
   * Referenced by: '<Root>/PCI-6208A DA '
   */
  { 1.0, 8.0 },

  /*  Expression: initval
   * Referenced by: '<Root>/PCI-6208A DA '
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S3>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/time'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S3>/Switch'
                                        */

  /*  Expression: [0 5]
   * Referenced by: '<Root>/biaoding1'
   */
  { 0.0, 5.0 },

  /*  Expression: [0.01 2]
   * Referenced by: '<Root>/biaoding1'
   */
  { 0.01, 2.0 },

  /*  Expression: [0 5]
   * Referenced by: '<Root>/biaoding10'
   */
  { 0.0, 5.0 },

  /*  Expression: [0.01 2]
   * Referenced by: '<Root>/biaoding10'
   */
  { 0.01, 2.0 },

  /*  Expression: [0 5]
   * Referenced by: '<Root>/biaoding2'
   */
  { 0.0, 5.0 },

  /*  Expression: [0.01 2]
   * Referenced by: '<Root>/biaoding2'
   */
  { 0.01, 2.0 },

  /*  Expression: [0 5]
   * Referenced by: '<Root>/biaoding3'
   */
  { 0.0, 5.0 },

  /*  Expression: [0.01 2]
   * Referenced by: '<Root>/biaoding3'
   */
  { 0.01, 2.0 }
};
