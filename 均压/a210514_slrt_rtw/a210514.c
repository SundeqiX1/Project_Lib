/*
 * a210514.c
 *
 * Code generation for model "a210514".
 *
 * Model version              : 1.0
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Fri May 14 16:08:56 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rt_logging_mmi.h"
#include "a210514_capi.h"
#include "a210514.h"
#include "a210514_private.h"

/* Block signals (auto storage) */
B_a210514_T a210514_B;

/* Real-time model */
RT_MODEL_a210514_T a210514_M_;
RT_MODEL_a210514_T *const a210514_M = &a210514_M_;

/* Forward declaration for local functions */
static void a210514_dec2bin(real_T d, char_T s_data[], int32_T s_sizes[2]);

/* Function for MATLAB Function: '<Root>/anti_v' */
static void a210514_dec2bin(real_T d, char_T s_data[], int32_T s_sizes[2])
{
  real_T di;
  real_T olddi;
  int32_T firstcol;
  int32_T b_j;
  boolean_T p;
  char_T s_data_0[52];
  boolean_T exitg1;
  boolean_T exitg2;
  s_sizes[0] = 1;
  s_sizes[1] = 52;
  for (firstcol = 0; firstcol < 52; firstcol++) {
    s_data[firstcol] = '0';
  }

  di = d;
  firstcol = 52;
  exitg2 = false;
  while ((!exitg2) && (firstcol > 0)) {
    olddi = di;
    di = floor(di / 2.0);
    if (2.0 * di < olddi) {
      s_data[firstcol - 1] = '1';
    }

    if (di > 0.0) {
      firstcol--;
    } else {
      exitg2 = true;
    }
  }

  firstcol = 52;
  b_j = 1;
  exitg1 = false;
  while ((!exitg1) && (b_j <= 51)) {
    p = false;
    if (s_data[b_j - 1] != '0') {
      p = true;
    }

    if (p) {
      firstcol = b_j;
      exitg1 = true;
    } else {
      b_j++;
    }
  }

  if (firstcol > 1) {
    for (b_j = firstcol; b_j < 53; b_j++) {
      s_data[b_j - firstcol] = s_data[b_j - 1];
    }

    b_j = 53 - firstcol;
    for (firstcol = 0; firstcol < b_j; firstcol++) {
      s_data_0[firstcol] = s_data[firstcol];
    }

    s_sizes[0] = 1;
    s_sizes[1] = b_j;
    for (firstcol = 0; firstcol < b_j; firstcol++) {
      s_data[firstcol] = s_data_0[firstcol];
    }
  }
}

/* Model output function */
static void a210514_output(void)
{
  char_T BASE[32];
  int32_T b_i;
  real_T p2;
  real_T b_p2;
  real_T c_p2;
  real_T d_p2;
  static const int8_T e[8] = { 24, 25, 26, 27, 28, 29, 30, 31 };

  static const int8_T f[8] = { 16, 17, 18, 19, 20, 21, 22, 23 };

  static const int8_T g[8] = { 8, 9, 10, 11, 12, 13, 14, 15 };

  static const int8_T h[8] = { 0, 1, 2, 3, 4, 5, 6, 7 };

  char_T Vbin_data[52];
  int32_T Vbin_sizes[2];
  real_T u0;

  /* Gain: '<Root>/Gain5' incorporates:
   *  Constant: '<Root>/Constant'
   */
  a210514_B.Gain5 = a210514_P.Gain5_Gain * a210514_P.Constant_Value;

  /* Gain: '<Root>/Gain1' */
  a210514_B.Gain1 = a210514_P.Gain1_Gain * a210514_B.Gain5;

  /* Saturate: '<Root>/Saturation' */
  u0 = a210514_B.Gain1;
  p2 = a210514_P.Saturation_LowerSat;
  b_p2 = a210514_P.Saturation_UpperSat;
  if (u0 > b_p2) {
    a210514_B.Saturation = b_p2;
  } else if (u0 < p2) {
    a210514_B.Saturation = p2;
  } else {
    a210514_B.Saturation = u0;
  }

  /* End of Saturate: '<Root>/Saturation' */

  /* MATLAB Function: '<Root>/anti_v' */
  /* MATLAB Function 'anti_v': '<S1>:1' */
  /* '<S1>:1:3' */
  if (a210514_B.Saturation >= 0.0) {
    /* '<S1>:1:2' */
    /* '<S1>:1:3' */
    for (b_i = 0; b_i < 32; b_i++) {
      BASE[b_i] = '0';
    }

    /* 一共32位 */
    /* '<S1>:1:4' */
    a210514_dec2bin(a210514_B.Saturation, Vbin_data, Vbin_sizes);

    /* '<S1>:1:5' */
    /* '<S1>:1:6' */
    for (b_i = 0; b_i < Vbin_sizes[1]; b_i++) {
      /* '<S1>:1:6' */
      /* '<S1>:1:7' */
      BASE[(b_i - Vbin_sizes[1]) + 32] = Vbin_data[b_i];
    }

    /* '<S1>:1:9' */
  } else {
    /* '<S1>:1:11' */
    for (b_i = 0; b_i < 32; b_i++) {
      BASE[b_i] = '0';
    }

    /* 一共32位 */
    /* '<S1>:1:12' */
    /* bin2dec('11111111111111111111111111111111')（一共32位）=4294967295 */
    /* '<S1>:1:13' */
    a210514_dec2bin((4.294967295E+9 + a210514_B.Saturation) + 1.0, Vbin_data,
                    Vbin_sizes);

    /* '<S1>:1:14' */
    /* '<S1>:1:15' */
    for (b_i = 0; b_i < Vbin_sizes[1]; b_i++) {
      /* '<S1>:1:15' */
      /* '<S1>:1:16' */
      BASE[(b_i - Vbin_sizes[1]) + 32] = Vbin_data[b_i];
    }

    /* '<S1>:1:18' */
  }

  /* '<S1>:1:20' */
  /* '<S1>:1:21' */
  /* '<S1>:1:22' */
  /* '<S1>:1:23' */
  /* '<S1>:1:24' */
  u0 = 0.0;
  p2 = 1.0;
  for (b_i = 0; b_i < 8; b_i++) {
    if (BASE[h[7 - b_i]] == '1') {
      u0 += p2;
    }

    p2 += p2;
  }

  /* '<S1>:1:25' */
  p2 = 0.0;
  b_p2 = 1.0;
  for (b_i = 0; b_i < 8; b_i++) {
    if (BASE[g[7 - b_i]] == '1') {
      p2 += b_p2;
    }

    b_p2 += b_p2;
  }

  /* '<S1>:1:26' */
  b_p2 = 0.0;
  c_p2 = 1.0;
  for (b_i = 0; b_i < 8; b_i++) {
    if (BASE[f[7 - b_i]] == '1') {
      b_p2 += c_p2;
    }

    c_p2 += c_p2;
  }

  /* '<S1>:1:27' */
  c_p2 = 0.0;
  d_p2 = 1.0;
  for (b_i = 0; b_i < 8; b_i++) {
    if (BASE[e[7 - b_i]] == '1') {
      c_p2 += d_p2;
    }

    d_p2 += d_p2;
  }

  a210514_B.a = c_p2;
  a210514_B.b = b_p2;
  a210514_B.c = p2;
  a210514_B.d = u0;

  /* End of MATLAB Function: '<Root>/anti_v' */

  /* DataTypeConversion: '<Root>/Data Type Conversion19' */
  u0 = floor(a210514_B.a);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  a210514_B.DataTypeConversion19 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
    -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

  /* End of DataTypeConversion: '<Root>/Data Type Conversion19' */

  /* DataTypeConversion: '<Root>/Data Type Conversion20' */
  u0 = floor(a210514_B.b);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  a210514_B.DataTypeConversion20 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
    -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

  /* End of DataTypeConversion: '<Root>/Data Type Conversion20' */

  /* DataTypeConversion: '<Root>/Data Type Conversion21' */
  u0 = floor(a210514_B.c);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  a210514_B.DataTypeConversion21 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
    -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

  /* End of DataTypeConversion: '<Root>/Data Type Conversion21' */

  /* DataTypeConversion: '<Root>/Data Type Conversion22' */
  u0 = floor(a210514_B.d);
  if (rtIsNaN(u0) || rtIsInf(u0)) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  a210514_B.DataTypeConversion22 = (uint8_T)(u0 < 0.0 ? (int32_T)(uint8_T)
    -(int8_T)(uint8_T)-u0 : (int32_T)(uint8_T)u0);

  /* End of DataTypeConversion: '<Root>/Data Type Conversion22' */
}

/* Model update function */
static void a210514_update(void)
{
  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++a210514_M->Timing.clockTick0)) {
    ++a210514_M->Timing.clockTickH0;
  }

  a210514_M->Timing.t[0] = a210514_M->Timing.clockTick0 *
    a210514_M->Timing.stepSize0 + a210514_M->Timing.clockTickH0 *
    a210514_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
static void a210514_initialize(void)
{
}

/* Model terminate function */
static void a210514_terminate(void)
{
  /* (no terminate code required) */
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  a210514_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  a210514_update();
  UNUSED_PARAMETER(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  a210514_initialize();
}

void MdlTerminate(void)
{
  a210514_terminate();
}

/* Registration function */
RT_MODEL_a210514_T *a210514(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)a210514_M, 0,
                sizeof(RT_MODEL_a210514_T));

  /* Initialize timing info */
  {
    int_T *mdlTsMap = a210514_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    a210514_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    a210514_M->Timing.sampleTimes = (&a210514_M->Timing.sampleTimesArray[0]);
    a210514_M->Timing.offsetTimes = (&a210514_M->Timing.offsetTimesArray[0]);

    /* task periods */
    a210514_M->Timing.sampleTimes[0] = (0.001);

    /* task offsets */
    a210514_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(a210514_M, &a210514_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = a210514_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    a210514_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(a210514_M, -1);
  a210514_M->Timing.stepSize0 = 0.001;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    a210514_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(a210514_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(a210514_M->rtwLogInfo, (NULL));
    rtliSetLogT(a210514_M->rtwLogInfo, "tout");
    rtliSetLogX(a210514_M->rtwLogInfo, "");
    rtliSetLogXFinal(a210514_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(a210514_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(a210514_M->rtwLogInfo, 2);
    rtliSetLogMaxRows(a210514_M->rtwLogInfo, 0);
    rtliSetLogDecimation(a210514_M->rtwLogInfo, 1);
    rtliSetLogY(a210514_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(a210514_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(a210514_M->rtwLogInfo, (NULL));
  }

  a210514_M->solverInfoPtr = (&a210514_M->solverInfo);
  a210514_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&a210514_M->solverInfo, 0.001);
  rtsiSetSolverMode(&a210514_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  a210514_M->blockIO = ((void *) &a210514_B);
  (void) memset(((void *) &a210514_B), 0,
                sizeof(B_a210514_T));

  /* parameters */
  a210514_M->defaultParam = ((real_T *)&a210514_P);

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  a210514_InitializeDataMapInfo(a210514_M);

  /* Initialize Sizes */
  a210514_M->Sizes.numContStates = (0);/* Number of continuous states */
  a210514_M->Sizes.numY = (0);         /* Number of model outputs */
  a210514_M->Sizes.numU = (0);         /* Number of model inputs */
  a210514_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  a210514_M->Sizes.numSampTimes = (1); /* Number of sample times */
  a210514_M->Sizes.numBlocks = (14);   /* Number of blocks */
  a210514_M->Sizes.numBlockIO = (11);  /* Number of block outputs */
  a210514_M->Sizes.numBlockPrms = (5); /* Sum of parameter "widths" */
  return a210514_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
