/*
 * aaa_data.c
 *
 * Code generation for model "aaa".
 *
 * Model version              : 1.66
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Wed Sep 29 09:32:02 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "aaa.h"
#include "aaa_private.h"

/* Block parameters (auto storage) */
P_aaa_T aaa_P = {
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S14>/kaishi1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S14>/kaishi2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S14>/kaishi3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S14>/kaishi4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S14>/kaishi5'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S14>/kaishi6'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S14>/kaishi7'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S14>/kaishi8'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S3>/yajin'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S31>/Constant19'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S3>/guangai'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S31>/Constant18'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S3>/jiesuo'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S31>/Constant17'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S3>/suoding'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S31>/Constant13'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S3>/kaigai'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S31>/Constant16'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S3>/songkai'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S31>/Constant12'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S4>/yajin'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S32>/Constant19'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S4>/guangai'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S32>/Constant18'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S4>/jiesuo'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S32>/Constant17'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S4>/suoding'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S32>/Constant13'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S4>/kaigai'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S32>/Constant16'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S4>/songkai'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S32>/Constant12'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<Root>/tiaoshi'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S32>/2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S32>/3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S32>/4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S32>/5'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S32>/6'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S32>/1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S4>/s1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S4>/s2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S4>/s3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S4>/s4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S4>/s5'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S4>/s6'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S4>/s7'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S4>/s8'
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
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/start'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/t1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/t3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/t5'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/t7'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/t9'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/t11'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<Root>/zidong_shedingcishu'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S31>/2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S31>/3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S31>/4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S31>/5'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S31>/6'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S31>/1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S3>/s1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S3>/s2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S3>/s3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S3>/s4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S3>/s5'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S3>/s6'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S3>/s7'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S3>/s8'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<Root>/Switch1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<Root>/Switch2'
                                        */
  0,                                   /* Computed Parameter: songkaihuanxiang_Y0
                                        * Referenced by: '<S13>/songkaihuanxiang'
                                        */
  0,                                   /* Computed Parameter: kaigaihuanxiang_Y0
                                        * Referenced by: '<S13>/kaigaihuanxiang'
                                        */
  0,                                   /* Computed Parameter: yajinhuanxiang_Y0
                                        * Referenced by: '<S13>/yajinhuanxiang'
                                        */
  0,                                   /* Computed Parameter: guangaihuanxiang_Y0
                                        * Referenced by: '<S13>/guangaihuanxiang'
                                        */
  0,                                   /* Computed Parameter: songkaihuanxiang_Y0_m
                                        * Referenced by: '<S14>/songkaihuanxiang'
                                        */
  0,                                   /* Computed Parameter: kaigaihuanxiang_Y0_d
                                        * Referenced by: '<S14>/kaigaihuanxiang'
                                        */
  0,                                   /* Computed Parameter: yajinhuanxiang_Y0_k
                                        * Referenced by: '<S14>/yajinhuanxiang'
                                        */
  0,                                   /* Computed Parameter: guangaihuanxiang_Y0_l
                                        * Referenced by: '<S14>/guangaihuanxiang'
                                        */
  0,                                   /* Computed Parameter: tiaoshi_huanxiangxinhao_Y0
                                        * Referenced by: '<S5>/tiaoshi_huanxiangxinhao'
                                        */
  0                                    /* Computed Parameter: memory_X0
                                        * Referenced by: '<Root>/memory'
                                        */
};
