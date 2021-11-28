/*
 * untitled_data.c
 *
 * Code generation for model "untitled".
 *
 * Model version              : 1.0
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Tue Mar 02 16:42:12 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "untitled.h"
#include "untitled_private.h"

/* Block parameters (auto storage) */
P_untitled_T untitled_P = {
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
  { 2.0, 14.0 },
  5.0,                                 /* Expression: 5
                                        * Referenced by: '<Root>/Constant'
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
  { 1.0, 2.0 },

  /*  Expression: pcislot
   * Referenced by: '<Root>/PCI-6208A DA '
   */
  { 2.0, 13.0 },

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
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
};
