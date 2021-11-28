/*
 * kaiguangai1108_data.c
 *
 * Code generation for model "kaiguangai1108".
 *
 * Model version              : 1.85
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Tue Nov 09 15:31:44 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "kaiguangai1108.h"
#include "kaiguangai1108_private.h"

/* Block parameters (auto storage) */
P_kaiguangai1108_T kaiguangai1108_P = {
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/yajin'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S34>/Constant19'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/guangai'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S34>/Constant18'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/jiesuo'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S34>/Constant17'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/suoding'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S34>/Constant13'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/kaigai'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S34>/Constant16'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/songkai'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S34>/Constant12'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/yajin'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S35>/Constant19'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/guangai'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S35>/Constant18'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/jiesuo'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S35>/Constant17'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/suoding'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S35>/Constant13'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/kaigai'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S35>/Constant16'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/songkai'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S35>/Constant12'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/tiaoshi'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S35>/2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S35>/3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S35>/4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S35>/5'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S35>/6'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S35>/1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S8>/s1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/s2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/s3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/s4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/s5'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/s6'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/s7'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/s8'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/jieshu'
                                        */
  0.5,                                 /* Expression: 0.5
                                        * Referenced by: '<Root>/Switch3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Constant'
                                        */

  /*  Computed Parameter: PCI1_P1_Size
   * Referenced by: '<S1>/PCI1'
   */
  { 1.0, 2.0 },

  /*  Expression: [SampleTime SampleOffset]
   * Referenced by: '<S1>/PCI1'
   */
  { 0.002, 0.0 },

  /*  Computed Parameter: PCI1_P2_Size
   * Referenced by: '<S1>/PCI1'
   */
  { 1.0, 2.0 },

  /*  Expression: SLOT
   * Referenced by: '<S1>/PCI1'
   */
  { 4.0, 13.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/memory1'
                                        */

  /*  Computed Parameter: PCI2_P1_Size
   * Referenced by: '<S1>/PCI2'
   */
  { 1.0, 2.0 },

  /*  Expression: [SampleTime SampleOffset]
   * Referenced by: '<S1>/PCI2'
   */
  { 0.002, 0.0 },

  /*  Computed Parameter: PCI2_P2_Size
   * Referenced by: '<S1>/PCI2'
   */
  { 1.0, 2.0 },

  /*  Expression: SLOT
   * Referenced by: '<S1>/PCI2'
   */
  { 4.0, 14.0 },
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Constant1'
                                        */

  /*  Computed Parameter: PCI3_P1_Size
   * Referenced by: '<S1>/PCI3'
   */
  { 1.0, 2.0 },

  /*  Expression: [SampleTime SampleOffset]
   * Referenced by: '<S1>/PCI3'
   */
  { 0.002, 0.0 },

  /*  Computed Parameter: PCI3_P2_Size
   * Referenced by: '<S1>/PCI3'
   */
  { 1.0, 2.0 },

  /*  Expression: SLOT
   * Referenced by: '<S1>/PCI3'
   */
  { 4.0, 15.0 },
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<Root>/Switch'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/qiehuan'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<Root>/start'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S11>/t1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S11>/t3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S11>/t5'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S11>/t7'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S11>/t9'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S11>/t11'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<Root>/zidong_shedingcishu'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S15>/jinggai1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S15>/jinggai2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S15>/jinggai3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S15>/jinggai4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S15>/jinggai5'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S15>/jinggai6'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S15>/jinggai7'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S15>/jinggai8'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S34>/2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S34>/3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S34>/4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S34>/5'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S34>/6'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S34>/1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/s1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/s2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/s3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/s4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/s5'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/s6'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/s7'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/s8'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<Root>/Switch1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<Root>/Switch2'
                                        */
  0,                                   /* Computed Parameter: songkaihuanxiang_Y0
                                        * Referenced by: '<S16>/songkaihuanxiang'
                                        */
  0,                                   /* Computed Parameter: kaigaihuanxiang_Y0
                                        * Referenced by: '<S16>/kaigaihuanxiang'
                                        */
  0,                                   /* Computed Parameter: yajinhuanxiang_Y0
                                        * Referenced by: '<S16>/yajinhuanxiang'
                                        */
  0,                                   /* Computed Parameter: guangaihuanxiang_Y0
                                        * Referenced by: '<S16>/guangaihuanxiang'
                                        */
  0,                                   /* Computed Parameter: sdyichangxinhao_Y0
                                        * Referenced by: '<S16>/sdyichangxinhao'
                                        */
  0,                                   /* Computed Parameter: songkaihuanxiang_Y0_m
                                        * Referenced by: '<S17>/songkaihuanxiang'
                                        */
  0,                                   /* Computed Parameter: kaigaihuanxiang_Y0_d
                                        * Referenced by: '<S17>/kaigaihuanxiang'
                                        */
  0,                                   /* Computed Parameter: yajinhuanxiang_Y0_k
                                        * Referenced by: '<S17>/yajinhuanxiang'
                                        */
  0,                                   /* Computed Parameter: guangaihuanxiang_Y0_l
                                        * Referenced by: '<S17>/guangaihuanxiang'
                                        */
  0,                                   /* Computed Parameter: zdyichangxinhao_Y0
                                        * Referenced by: '<S17>/zdyichangxinhao'
                                        */
  0,                                   /* Computed Parameter: tiaoshi_huanxiangxinhao_Y0
                                        * Referenced by: '<S9>/tiaoshi_huanxiangxinhao'
                                        */
  0                                    /* Computed Parameter: memory_X0
                                        * Referenced by: '<Root>/memory'
                                        */
};
