/*
 * untitled1.c
 *
 * Real-Time Workshop code generation for Simulink model "untitled1.mdl".
 *
 * Model version              : 1.6
 * Real-Time Workshop version : 7.6  (R2010b)  03-Aug-2010
 * C source code generated on : Mon Nov 22 17:31:02 2021
 *
 * Target selection: xpctarget.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rt_logging_mmi.h"
#include "untitled1_capi.h"
#include "untitled1.h"
#include "untitled1_private.h"
#include <stdio.h>
#include "untitled1_dt.h"

/* Block signals (auto storage) */
BlockIO_untitled1 untitled1_B;

/* Block states (auto storage) */
D_Work_untitled1 untitled1_DWork;

/* Real-time model */
rtModel_untitled1 untitled1_rtM_;
rtModel_untitled1 *untitled1_rtM = &untitled1_rtM_;

/* Model output function */
void untitled1_output(int_T tid)
{
  real_T tmp;

  /* DataTypeConversion: '<Root>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Constant'
   */
  tmp = untitled1_P.Constant_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  untitled1_B.DataTypeConversion = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<Root>/Data Type Conversion1' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  tmp = untitled1_P.Constant1_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  untitled1_B.DataTypeConversion1 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<Root>/Data Type Conversion2' incorporates:
   *  Constant: '<Root>/Constant2'
   */
  tmp = untitled1_P.Constant2_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  untitled1_B.DataTypeConversion2 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<Root>/Data Type Conversion3' incorporates:
   *  Constant: '<Root>/Constant3'
   */
  tmp = untitled1_P.Constant3_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  untitled1_B.DataTypeConversion3 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<Root>/Data Type Conversion4' incorporates:
   *  Constant: '<Root>/Constant4'
   */
  tmp = untitled1_P.Constant4_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  untitled1_B.DataTypeConversion4 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<Root>/Data Type Conversion5' incorporates:
   *  Constant: '<Root>/Constant5'
   */
  tmp = untitled1_P.Constant5_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  untitled1_B.DataTypeConversion5 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<Root>/Data Type Conversion6' incorporates:
   *  Constant: '<Root>/Constant6'
   */
  tmp = untitled1_P.Constant6_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  untitled1_B.DataTypeConversion6 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* DataTypeConversion: '<Root>/Data Type Conversion7' incorporates:
   *  Constant: '<Root>/Constant7'
   */
  tmp = untitled1_P.Constant7_Value;
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(floor(tmp), 256.0);
  }

  untitled1_B.DataTypeConversion7 = (uint8_T)(tmp < 0.0 ? (uint8_T)(int8_T)
    (-((int8_T)(uint8_T)(-tmp))) : (uint8_T)tmp);

  /* SignalConversion: '<Root>/TmpSignal ConversionAtSerial SendInport1' */
  untitled1_B.TmpSignalConversionAtSerialSend[0] =
    untitled1_B.DataTypeConversion;
  untitled1_B.TmpSignalConversionAtSerialSend[1] =
    untitled1_B.DataTypeConversion1;
  untitled1_B.TmpSignalConversionAtSerialSend[2] =
    untitled1_B.DataTypeConversion2;
  untitled1_B.TmpSignalConversionAtSerialSend[3] =
    untitled1_B.DataTypeConversion3;
  untitled1_B.TmpSignalConversionAtSerialSend[4] =
    untitled1_B.DataTypeConversion4;
  untitled1_B.TmpSignalConversionAtSerialSend[5] =
    untitled1_B.DataTypeConversion5;
  untitled1_B.TmpSignalConversionAtSerialSend[6] =
    untitled1_B.DataTypeConversion6;
  untitled1_B.TmpSignalConversionAtSerialSend[7] =
    untitled1_B.DataTypeConversion7;

  /* ok to acquire for <S2>/S-Function */
  untitled1_DWork.SFunction_IWORK.AcquireOK = 1;

  /* DataTypeConversion: '<Root>/position2' incorporates:
   *  Constant: '<Root>/Constant8'
   */
  untitled1_B.position2 = untitled1_P.Constant8_Value;

  /* ok to acquire for <S1>/S-Function */
  untitled1_DWork.SFunction_IWORK_a.AcquireOK = 1;

  /* DataTypeConversion: '<Root>/phase' */
  untitled1_B.phase = (real_T)untitled1_B.SerialReceive[1];

  /* DataTypeConversion: '<Root>/position' */
  untitled1_B.position = (real_T)untitled1_B.SerialReceive[0];

  /* tid is required for a uniform function interface.
   * Argument tid is not used in the function. */
  UNUSED_PARAMETER(tid);
}

/* Model update function */
void untitled1_update(int_T tid)
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
  if (!(++untitled1_rtM->Timing.clockTick0)) {
    ++untitled1_rtM->Timing.clockTickH0;
  }

  untitled1_rtM->Timing.t[0] = untitled1_rtM->Timing.clockTick0 *
    untitled1_rtM->Timing.stepSize0 + untitled1_rtM->Timing.clockTickH0 *
    untitled1_rtM->Timing.stepSize0 * 4294967296.0;

  {
    /* Update absolute timer for sample time: [0.2s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++untitled1_rtM->Timing.clockTick1)) {
      ++untitled1_rtM->Timing.clockTickH1;
    }

    untitled1_rtM->Timing.t[1] = untitled1_rtM->Timing.clockTick1 *
      untitled1_rtM->Timing.stepSize1 + untitled1_rtM->Timing.clockTickH1 *
      untitled1_rtM->Timing.stepSize1 * 4294967296.0;
  }

  /* tid is required for a uniform function interface.
   * Argument tid is not used in the function. */
  UNUSED_PARAMETER(tid);
}

/* Model initialize function */
void untitled1_initialize(boolean_T firstTime)
{
  (void)firstTime;

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)untitled1_rtM, 0,
                sizeof(rtModel_untitled1));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&untitled1_rtM->solverInfo,
                          &untitled1_rtM->Timing.simTimeStep);
    rtsiSetTPtr(&untitled1_rtM->solverInfo, &rtmGetTPtr(untitled1_rtM));
    rtsiSetStepSizePtr(&untitled1_rtM->solverInfo,
                       &untitled1_rtM->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&untitled1_rtM->solverInfo, (&rtmGetErrorStatus
      (untitled1_rtM)));
    rtsiSetRTModelPtr(&untitled1_rtM->solverInfo, untitled1_rtM);
  }

  rtsiSetSimTimeStep(&untitled1_rtM->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&untitled1_rtM->solverInfo,"FixedStepDiscrete");

  /* Initialize timing info */
  {
    int_T *mdlTsMap = untitled1_rtM->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    untitled1_rtM->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    untitled1_rtM->Timing.sampleTimes = (&untitled1_rtM->
      Timing.sampleTimesArray[0]);
    untitled1_rtM->Timing.offsetTimes = (&untitled1_rtM->
      Timing.offsetTimesArray[0]);

    /* task periods */
    untitled1_rtM->Timing.sampleTimes[0] = (0.0);
    untitled1_rtM->Timing.sampleTimes[1] = (0.2);

    /* task offsets */
    untitled1_rtM->Timing.offsetTimes[0] = (0.0);
    untitled1_rtM->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(untitled1_rtM, &untitled1_rtM->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = untitled1_rtM->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    untitled1_rtM->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(untitled1_rtM, -1);
  untitled1_rtM->Timing.stepSize0 = 0.2;
  untitled1_rtM->Timing.stepSize1 = 0.2;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    untitled1_rtM->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(untitled1_rtM->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(untitled1_rtM->rtwLogInfo, (NULL));
    rtliSetLogT(untitled1_rtM->rtwLogInfo, "tout");
    rtliSetLogX(untitled1_rtM->rtwLogInfo, "");
    rtliSetLogXFinal(untitled1_rtM->rtwLogInfo, "");
    rtliSetSigLog(untitled1_rtM->rtwLogInfo, "");
    rtliSetLogVarNameModifier(untitled1_rtM->rtwLogInfo, "rt_");
    rtliSetLogFormat(untitled1_rtM->rtwLogInfo, 0);
    rtliSetLogMaxRows(untitled1_rtM->rtwLogInfo, 1000);
    rtliSetLogDecimation(untitled1_rtM->rtwLogInfo, 1);
    rtliSetLogY(untitled1_rtM->rtwLogInfo, "");
    rtliSetLogYSignalInfo(untitled1_rtM->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(untitled1_rtM->rtwLogInfo, (NULL));
  }

  /* external mode info */
  untitled1_rtM->Sizes.checksums[0] = (3235195853U);
  untitled1_rtM->Sizes.checksums[1] = (1275154781U);
  untitled1_rtM->Sizes.checksums[2] = (943126447U);
  untitled1_rtM->Sizes.checksums[3] = (1573400751U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[1];
    untitled1_rtM->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(untitled1_rtM->extModeInfo,
      &untitled1_rtM->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(untitled1_rtM->extModeInfo,
                        untitled1_rtM->Sizes.checksums);
    rteiSetTPtr(untitled1_rtM->extModeInfo, rtmGetTPtr(untitled1_rtM));
  }

  untitled1_rtM->solverInfoPtr = (&untitled1_rtM->solverInfo);
  untitled1_rtM->Timing.stepSize = (0.2);
  rtsiSetFixedStepSize(&untitled1_rtM->solverInfo, 0.2);
  rtsiSetSolverMode(&untitled1_rtM->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  untitled1_rtM->ModelData.blockIO = ((void *) &untitled1_B);
  (void) memset(((void *) &untitled1_B), 0,
                sizeof(BlockIO_untitled1));

  /* parameters */
  untitled1_rtM->ModelData.defaultParam = ((real_T *)&untitled1_P);

  /* states (dwork) */
  untitled1_rtM->Work.dwork = ((void *) &untitled1_DWork);
  (void) memset((void *)&untitled1_DWork, 0,
                sizeof(D_Work_untitled1));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    untitled1_rtM->SpecialInfo.mappingInfo = (&dtInfo);
    untitled1_rtM->SpecialInfo.xpcData = ((void*) &dtInfo);
    dtInfo.numDataTypes = 14;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.B = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.P = &rtPTransTable;
  }

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  untitled1_InitializeDataMapInfo(untitled1_rtM);
}

/* Model terminate function */
void untitled1_terminate(void)
{
}

/*========================================================================*
 * Start of GRT compatible call interface                                 *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  untitled1_output(tid);
}

void MdlUpdate(int_T tid)
{
  untitled1_update(tid);
}

void MdlInitializeSizes(void)
{
  untitled1_rtM->Sizes.numContStates = (0);/* Number of continuous states */
  untitled1_rtM->Sizes.numY = (0);     /* Number of model outputs */
  untitled1_rtM->Sizes.numU = (0);     /* Number of model inputs */
  untitled1_rtM->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  untitled1_rtM->Sizes.numSampTimes = (2);/* Number of sample times */
  untitled1_rtM->Sizes.numBlocks = (33);/* Number of blocks */
  untitled1_rtM->Sizes.numBlockIO = (14);/* Number of block outputs */
  untitled1_rtM->Sizes.numBlockPrms = (9);/* Sum of parameter "widths" */
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  /* S-Function Block: <S2>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(2)) == 0) {
      if ((i = rl32eDefScope(2,2)) != 0) {
        printf("Error creating scope 2\n");
      } else {
        rl32eAddSignal(2, rl32eGetSignalNo("position2"));
        rl32eSetTargetScopeSigFt(2,rl32eGetSignalNo("position2"),"%15.6f");
        rl32eSetScope(2, 4, 250);
        rl32eSetScope(2, 40, 0);
        rl32eSetScope(2, 7, 1);
        rl32eSetScope(2, 0, 0);
        rl32eSetScope(2, 3, rl32eGetSignalNo("position2"));
        rl32eSetScope(2, 1, 0.0);
        rl32eSetScope(2, 2, 0);
        rl32eSetScope(2, 10, 0);
        rl32eSetTargetScope(2, 1, 0.0);
        rl32eSetTargetScope(2, 11, 0.0);
        rl32eSetTargetScope(2, 10, 0.0);
        xpceScopeAcqOK(2, &untitled1_DWork.SFunction_IWORK.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(2);
    }
  }

  /* S-Function Block: <S1>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(1)) == 0) {
      if ((i = rl32eDefScope(1,2)) != 0) {
        printf("Error creating scope 1\n");
      } else {
        rl32eAddSignal(1, rl32eGetSignalNo("Serial Receive/s1"));
        rl32eAddSignal(1, rl32eGetSignalNo("Serial Receive/s2"));
        rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo("Serial Receive/s1"),
          "%15.6f");
        rl32eSetTargetScopeSigFt(1,rl32eGetSignalNo("Serial Receive/s2"),
          "%15.6f");
        rl32eSetScope(1, 4, 250);
        rl32eSetScope(1, 40, 0);
        rl32eSetScope(1, 7, 1);
        rl32eSetScope(1, 0, 0);
        rl32eSetScope(1, 3, rl32eGetSignalNo("Serial Receive/s1"));
        rl32eSetScope(1, 1, 0.0);
        rl32eSetScope(1, 2, 0);
        rl32eSetScope(1, 10, 0);
        rl32eSetTargetScope(1, 1, 0.0);
        rl32eSetTargetScope(1, 11, 0.0);
        rl32eSetTargetScope(1, 10, 0.0);
        xpceScopeAcqOK(1, &untitled1_DWork.SFunction_IWORK_a.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(1);
    }
  }

  MdlInitialize();
}

void MdlTerminate(void)
{
  untitled1_terminate();
}

rtModel_untitled1 *untitled1(void)
{
  untitled1_initialize(1);
  return untitled1_rtM;
}

/*========================================================================*
 * End of GRT compatible call interface                                   *
 *========================================================================*/
