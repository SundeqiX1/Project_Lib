/*
 * Copy_2_of_canceshi.h
 *
 * Real-Time Workshop code generation for Simulink model "Copy_2_of_canceshi.mdl".
 *
 * Model version              : 1.43
 * Real-Time Workshop version : 7.6  (R2010b)  03-Aug-2010
 * C source code generated on : Mon May 25 23:21:43 2020
 *
 * Target selection: xpctarget.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */
#ifndef RTW_HEADER_Copy_2_of_canceshi_h_
#define RTW_HEADER_Copy_2_of_canceshi_h_
#include "rtw_modelmap.h"
#ifndef Copy_2_of_canceshi_COMMON_INCLUDES_
# define Copy_2_of_canceshi_COMMON_INCLUDES_
#include <xpcimports.h>
#include <xpcdatatypes.h>
#include <stddef.h>
#include <can_def.h>
#include <canlay2_mb1.h>
#include <canlay2_mb2.h>
#include <canlay2_mb3.h>
#include <xpcPCFunctions.h>
#include <math.h>
#include <string.h>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#include "canac2globals.h"
#include "rtGetInf.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#endif                                 /* Copy_2_of_canceshi_COMMON_INCLUDES_ */

#include "Copy_2_of_canceshi_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlkStateChangeFlag
# define rtmGetBlkStateChangeFlag(rtm) ((rtm)->ModelData.blkStateChange)
#endif

#ifndef rtmSetBlkStateChangeFlag
# define rtmSetBlkStateChangeFlag(rtm, val) ((rtm)->ModelData.blkStateChange = (val))
#endif

#ifndef rtmGetBlockIO
# define rtmGetBlockIO(rtm)            ((rtm)->ModelData.blockIO)
#endif

#ifndef rtmSetBlockIO
# define rtmSetBlockIO(rtm, val)       ((rtm)->ModelData.blockIO = (val))
#endif

#ifndef rtmGetChecksums
# define rtmGetChecksums(rtm)          ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
# define rtmSetChecksums(rtm, val)     ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
# define rtmGetConstBlockIO(rtm)       ((rtm)->ModelData.constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
# define rtmSetConstBlockIO(rtm, val)  ((rtm)->ModelData.constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->ModelData.contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->ModelData.contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->ModelData.contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->ModelData.contStates = (val))
#endif

#ifndef rtmGetDataMapInfo
# define rtmGetDataMapInfo(rtm)        ((rtm)->DataMapInfo)
#endif

#ifndef rtmSetDataMapInfo
# define rtmSetDataMapInfo(rtm, val)   ((rtm)->DataMapInfo = (val))
#endif

#ifndef rtmGetDefaultParam
# define rtmGetDefaultParam(rtm)       ((rtm)->ModelData.defaultParam)
#endif

#ifndef rtmSetDefaultParam
# define rtmSetDefaultParam(rtm, val)  ((rtm)->ModelData.defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->ModelData.derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->ModelData.derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
# define rtmGetDirectFeedThrough(rtm)  ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
# define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
# define rtmGetErrorStatusFlag(rtm)    ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
# define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
# define rtmSetFinalTime(rtm, val)     ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
# define rtmGetFirstInitCondFlag(rtm)  ()
#endif

#ifndef rtmSetFirstInitCondFlag
# define rtmSetFirstInitCondFlag(rtm, val) ()
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ()
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ()
#endif

#ifndef rtmGetMdlRefGlobalTID
# define rtmGetMdlRefGlobalTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefGlobalTID
# define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
# define rtmGetMdlRefTriggerTID(rtm)   ()
#endif

#ifndef rtmSetMdlRefTriggerTID
# define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
# define rtmGetModelMappingInfo(rtm)   ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
# define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
# define rtmGetModelName(rtm)          ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
# define rtmSetModelName(rtm, val)     ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
# define rtmGetNonInlinedSFcns(rtm)    ((rtm)->NonInlinedSFcns)
#endif

#ifndef rtmSetNonInlinedSFcns
# define rtmSetNonInlinedSFcns(rtm, val) ((rtm)->NonInlinedSFcns = (val))
#endif

#ifndef rtmGetNumBlockIO
# define rtmGetNumBlockIO(rtm)         ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
# define rtmSetNumBlockIO(rtm, val)    ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
# define rtmGetNumBlockParams(rtm)     ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
# define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
# define rtmGetNumBlocks(rtm)          ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
# define rtmSetNumBlocks(rtm, val)     ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
# define rtmGetNumContStates(rtm)      ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
# define rtmSetNumContStates(rtm, val) ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
# define rtmGetNumDWork(rtm)           ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
# define rtmSetNumDWork(rtm, val)      ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
# define rtmGetNumInputPorts(rtm)      ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
# define rtmSetNumInputPorts(rtm, val) ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
# define rtmGetNumNonSampledZCs(rtm)   ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
# define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
# define rtmGetNumOutputPorts(rtm)     ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
# define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumSFcnParams
# define rtmGetNumSFcnParams(rtm)      ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
# define rtmSetNumSFcnParams(rtm, val) ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
# define rtmGetNumSFunctions(rtm)      ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
# define rtmSetNumSFunctions(rtm, val) ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
# define rtmGetNumSampleTimes(rtm)     ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
# define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
# define rtmGetNumU(rtm)               ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
# define rtmSetNumU(rtm, val)          ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
# define rtmGetNumY(rtm)               ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
# define rtmSetNumY(rtm, val)          ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ()
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ()
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ()
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ()
#endif

#ifndef rtmGetOffsetTimeArray
# define rtmGetOffsetTimeArray(rtm)    ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
# define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
# define rtmGetOffsetTimePtr(rtm)      ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
# define rtmSetOffsetTimePtr(rtm, val) ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
# define rtmGetOptions(rtm)            ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
# define rtmSetOptions(rtm, val)       ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
# define rtmGetParamIsMalloced(rtm)    ()
#endif

#ifndef rtmSetParamIsMalloced
# define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
# define rtmGetPath(rtm)               ((rtm)->path)
#endif

#ifndef rtmSetPath
# define rtmSetPath(rtm, val)          ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
# define rtmGetPerTaskSampleHits(rtm)  ()
#endif

#ifndef rtmSetPerTaskSampleHits
# define rtmSetPerTaskSampleHits(rtm, val) ()
#endif

#ifndef rtmGetPerTaskSampleHitsArray
# define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
# define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
# define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
# define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPrevZCSigState
# define rtmGetPrevZCSigState(rtm)     ((rtm)->ModelData.prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
# define rtmSetPrevZCSigState(rtm, val) ((rtm)->ModelData.prevZCSigState = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
# define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
# define rtmGetRTWGeneratedSFcn(rtm)   ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
# define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmSetRTWLogInfo
# define rtmSetRTWLogInfo(rtm, val)    ((rtm)->rtwLogInfo = (val))
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
# define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
# define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
# define rtmGetRTWSfcnInfo(rtm)        ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
# define rtmSetRTWSfcnInfo(rtm, val)   ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
# define rtmGetRTWSolverInfo(rtm)      ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
# define rtmSetRTWSolverInfo(rtm, val) ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
# define rtmGetRTWSolverInfoPtr(rtm)   ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
# define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
# define rtmGetReservedForXPC(rtm)     ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
# define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
# define rtmGetRootDWork(rtm)          ((rtm)->Work.dwork)
#endif

#ifndef rtmSetRootDWork
# define rtmSetRootDWork(rtm, val)     ((rtm)->Work.dwork = (val))
#endif

#ifndef rtmGetSFunctions
# define rtmGetSFunctions(rtm)         ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
# define rtmSetSFunctions(rtm, val)    ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
# define rtmGetSampleHitArray(rtm)     ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
# define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
# define rtmGetSampleHitPtr(rtm)       ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
# define rtmSetSampleHitPtr(rtm, val)  ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
# define rtmGetSampleTimeArray(rtm)    ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
# define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
# define rtmGetSampleTimePtr(rtm)      ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
# define rtmSetSampleTimePtr(rtm, val) ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
# define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
# define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
# define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
# define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSimMode
# define rtmGetSimMode(rtm)            ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
# define rtmSetSimMode(rtm, val)       ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
# define rtmGetSimTimeStep(rtm)        ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
# define rtmSetSimTimeStep(rtm, val)   ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
# define rtmGetStartTime(rtm)          ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
# define rtmSetStartTime(rtm, val)     ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
# define rtmGetStepSize(rtm)           ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
# define rtmSetStepSize(rtm, val)      ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
# define rtmGetStopRequestedFlag(rtm)  ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
# define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetTaskCounters
# define rtmGetTaskCounters(rtm)       ()
#endif

#ifndef rtmSetTaskCounters
# define rtmSetTaskCounters(rtm, val)  ()
#endif

#ifndef rtmGetTaskTimeArray
# define rtmGetTaskTimeArray(rtm)      ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
# define rtmSetTaskTimeArray(rtm, val) ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
# define rtmGetTimePtr(rtm)            ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
# define rtmSetTimePtr(rtm, val)       ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
# define rtmGetTimingData(rtm)         ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
# define rtmSetTimingData(rtm, val)    ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
# define rtmGetU(rtm)                  ((rtm)->ModelData.inputs)
#endif

#ifndef rtmSetU
# define rtmSetU(rtm, val)             ((rtm)->ModelData.inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
# define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
# define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
# define rtmGetY(rtm)                  ((rtm)->ModelData.outputs)
#endif

#ifndef rtmSetY
# define rtmSetY(rtm, val)             ((rtm)->ModelData.outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->ModelData.zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->ModelData.zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
# define rtmGetZCSignalValues(rtm)     ((rtm)->ModelData.zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
# define rtmSetZCSignalValues(rtm, val) ((rtm)->ModelData.zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
# define rtmGet_TimeOfLastOutput(rtm)  ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
# define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->ModelData.derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->ModelData.derivs = (val))
#endif

#ifndef rtmGetChecksumVal
# define rtmGetChecksumVal(rtm, idx)   ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
# define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
# define rtmGetDWork(rtm, idx)         ((rtm)->Work.dwork[idx])
#endif

#ifndef rtmSetDWork
# define rtmSetDWork(rtm, idx, val)    ((rtm)->Work.dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
# define rtmGetOffsetTime(rtm, idx)    ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
# define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
# define rtmGetSFunction(rtm, idx)     ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
# define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
# define rtmGetSampleTime(rtm, idx)    ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
# define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
# define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
# define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTime
# define rtmGetVarNextHitTime(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTime
# define rtmSetVarNextHitTime(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
# define rtmIsContinuousTask(rtm, tid) 0
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsSampleHit
# define rtmIsSampleHit(rtm, sti, tid) ((rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
# define rtmSetT(rtm, val)                                       /* Do Nothing */
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
# define rtmGetTStart(rtm)             ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
# define rtmSetTStart(rtm, val)        ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetTaskTime
# define rtmGetTaskTime(rtm, sti)      (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
# define rtmSetTaskTime(rtm, sti, val) (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
# define rtmGetTimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)

/* Definition for use in the target main file */
#define Copy_2_of_canceshi_rtModel     rtModel_Copy_2_of_canceshi

/* user code (top of export header file) */
#include "xpcdatatypes.h"

/* Block signals (auto storage) */
typedef struct {
  real_T TmpSignalConversionAtPCL731Inpo[24];
  real_T PCL731[24];                   /* '<Root>/PCL731' */
  real_T sifufa;                       /* '<Root>/sifufa' */
  real_T MultiportSwitch;              /* '<S9>/Multiport Switch' */
  real_T CANbitpacking3;               /* '<S10>/CAN bit-packing 3' */
  real_T CANbitpacking2;               /* '<S2>/CAN bit-packing 2' */
  real_T CANbitpacking2_p;             /* '<S11>/CAN bit-packing 2' */
  real_T SwitchControl;                /* '<S3>/SwitchControl' */
  real_T CANbitpacking3_h;             /* '<S14>/CAN bit-packing 3' */
  real_T CANbitpacking2_j;             /* '<S1>/CAN bit-packing 2' */
  real_T CANbitpacking1;               /* '<S1>/CAN bit-packing 1' */
  real_T SwitchControl_b;              /* '<S12>/SwitchControl' */
  real_T u02Receive;                   /* '<Root>/3402Receive ' */
  real_T yyy;                          /* '<Root>/yyy' */
  real_T u02Receive1_o1;               /* '<Root>/3402Receive 1' */
  real_T u02Receive1_o2;               /* '<Root>/3402Receive 1' */
  real_T u02Receive1_o3;               /* '<Root>/3402Receive 1' */
  real_T u02Receive1_o4;               /* '<Root>/3402Receive 1' */
  real_T DataTypeConversion1[4];       /* '<Root>/Data Type Conversion1' */
  real_T DataTypeConversion2[5];       /* '<Root>/Data Type Conversion2' */
  real_T DataTypeConversion3[5];       /* '<Root>/Data Type Conversion3' */
  real_T DataTypeConversion4[4];       /* '<Root>/Data Type Conversion4' */
  real_T u02Receive2;                  /* '<Root>/3402Receive 2' */
  real_T CANbitpacking;                /* '<Root>/CAN bit-packing ' */
  real_T CANbitpacking4;               /* '<Root>/CAN bit-packing 4' */
  real_T SwitchControl_h;              /* '<S4>/SwitchControl' */
  real_T CANbitpacking1_a;             /* '<Root>/CAN bit-packing 1' */
  real_T CANbitpacking5;               /* '<Root>/CAN bit-packing 5' */
  real_T SwitchControl_p;              /* '<S5>/SwitchControl' */
  real_T CANbitpacking2_i;             /* '<Root>/CAN bit-packing 2' */
  real_T CANbitpacking6;               /* '<Root>/CAN bit-packing 6' */
  real_T SwitchControl_pr;             /* '<S6>/SwitchControl' */
  real_T CANbitpacking3_d;             /* '<Root>/CAN bit-packing 3' */
  real_T CANbitpacking7;               /* '<Root>/CAN bit-packing 7' */
  real_T SwitchControl_c;              /* '<S7>/SwitchControl' */
  real_T SwitchControl_m;              /* '<S13>/SwitchControl' */
  uint16_T CANbitunpacking_o1;         /* '<Root>/CAN bit-unpacking ' */
  uint16_T CANbitunpacking_o2;         /* '<Root>/CAN bit-unpacking ' */
  uint16_T CANbitunpacking_o3;         /* '<Root>/CAN bit-unpacking ' */
  uint16_T CANbitunpacking_o4;         /* '<Root>/CAN bit-unpacking ' */
  uint16_T right7;                     /* '<Root>/right7' */
  uint8_T DataTypeConversion17;        /* '<S10>/Data Type Conversion17' */
  uint8_T DataTypeConversion18;        /* '<S10>/Data Type Conversion18' */
  uint8_T DataTypeConversion7;         /* '<S2>/Data Type Conversion7' */
  uint8_T DataTypeConversion16;        /* '<S2>/Data Type Conversion16' */
  uint8_T DataTypeConversion1_k;       /* '<S2>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_n;       /* '<S2>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_b;       /* '<S2>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_a;       /* '<S2>/Data Type Conversion4' */
  uint8_T DataTypeConversion5;         /* '<S2>/Data Type Conversion5' */
  uint8_T DataTypeConversion6;         /* '<S2>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_b;       /* '<S11>/Data Type Conversion7' */
  uint8_T DataTypeConversion16_g;      /* '<S11>/Data Type Conversion16' */
  uint8_T DataTypeConversion1_k5;      /* '<S11>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_a;       /* '<S11>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_e;       /* '<S11>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_p;       /* '<S11>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_a;       /* '<S11>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_d;       /* '<S11>/Data Type Conversion6' */
  uint8_T DataTypeConversion24;        /* '<S14>/Data Type Conversion24' */
  uint8_T DataTypeConversion18_g;      /* '<S14>/Data Type Conversion18' */
  uint8_T DataTypeConversion17_m;      /* '<S14>/Data Type Conversion17' */
  uint8_T DataTypeConversion19;        /* '<S14>/Data Type Conversion19' */
  uint8_T DataTypeConversion20;        /* '<S14>/Data Type Conversion20' */
  uint8_T DataTypeConversion21;        /* '<S14>/Data Type Conversion21' */
  uint8_T DataTypeConversion22;        /* '<S14>/Data Type Conversion22' */
  uint8_T DataTypeConversion23;        /* '<S14>/Data Type Conversion23' */
  uint8_T DataTypeConversion7_j;       /* '<S1>/Data Type Conversion7' */
  uint8_T DataTypeConversion16_h;      /* '<S1>/Data Type Conversion16' */
  uint8_T DataTypeConversion1_o;       /* '<S1>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_d;       /* '<S1>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_j;       /* '<S1>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_k;       /* '<S1>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_k;       /* '<S1>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_g;       /* '<S1>/Data Type Conversion6' */
  uint8_T DataTypeConversion15;        /* '<S1>/Data Type Conversion15' */
  uint8_T DataTypeConversion9;         /* '<S1>/Data Type Conversion9' */
  uint8_T DataTypeConversion8;         /* '<S1>/Data Type Conversion8' */
  uint8_T DataTypeConversion10;        /* '<S1>/Data Type Conversion10' */
  uint8_T DataTypeConversion11;        /* '<S1>/Data Type Conversion11' */
  uint8_T DataTypeConversion12;        /* '<S1>/Data Type Conversion12' */
  uint8_T DataTypeConversion13;        /* '<S1>/Data Type Conversion13' */
  uint8_T DataTypeConversion14;        /* '<S1>/Data Type Conversion14' */
  uint8_T CANbitunpacking2_o1;         /* '<Root>/CAN bit-unpacking 2' */
  uint8_T CANbitunpacking2_o2;         /* '<Root>/CAN bit-unpacking 2' */
  uint8_T CANbitunpacking2_o3;         /* '<Root>/CAN bit-unpacking 2' */
  uint8_T CANbitunpacking2_o4;         /* '<Root>/CAN bit-unpacking 2' */
  uint8_T CANbitunpacking3_o1;         /* '<Root>/CAN bit-unpacking 3' */
  uint8_T CANbitunpacking3_o2;         /* '<Root>/CAN bit-unpacking 3' */
  uint8_T CANbitunpacking3_o3;         /* '<Root>/CAN bit-unpacking 3' */
  uint8_T CANbitunpacking3_o4;         /* '<Root>/CAN bit-unpacking 3' */
  uint8_T CANbitunpacking4_o1;         /* '<Root>/CAN bit-unpacking 4' */
  uint8_T CANbitunpacking4_o2;         /* '<Root>/CAN bit-unpacking 4' */
  uint8_T CANbitunpacking4_o3;         /* '<Root>/CAN bit-unpacking 4' */
  uint8_T CANbitunpacking4_o4;         /* '<Root>/CAN bit-unpacking 4' */
  uint8_T CANbitunpacking4_o5;         /* '<Root>/CAN bit-unpacking 4' */
  uint8_T CANbitunpacking5_o1;         /* '<Root>/CAN bit-unpacking 5' */
  uint8_T CANbitunpacking5_o2;         /* '<Root>/CAN bit-unpacking 5' */
  uint8_T CANbitunpacking5_o3;         /* '<Root>/CAN bit-unpacking 5' */
  uint8_T CANbitunpacking5_o4;         /* '<Root>/CAN bit-unpacking 5' */
  uint8_T CANbitunpacking5_o5;         /* '<Root>/CAN bit-unpacking 5' */
  uint8_T CANbitunpacking1_o1;         /* '<Root>/CAN bit-unpacking 1' */
  uint8_T CANbitunpacking1_o2;         /* '<Root>/CAN bit-unpacking 1' */
  uint8_T CANbitunpacking1_o3;         /* '<Root>/CAN bit-unpacking 1' */
  uint8_T CANbitunpacking1_o4;         /* '<Root>/CAN bit-unpacking 1' */
  uint8_T CANbitunpacking1_o5;         /* '<Root>/CAN bit-unpacking 1' */
  uint8_T CANbitunpacking1_o6;         /* '<Root>/CAN bit-unpacking 1' */
  uint8_T CANbitunpacking1_o7;         /* '<Root>/CAN bit-unpacking 1' */
  uint8_T CANbitunpacking1_o8;         /* '<Root>/CAN bit-unpacking 1' */
  uint8_T DataTypeConversion;          /* '<Root>/Data Type Conversion' */
  uint8_T DataTypeConversion5_b;       /* '<Root>/Data Type Conversion5' */
  uint8_T DataTypeConversion12_d;      /* '<Root>/Data Type Conversion12' */
  uint8_T DataTypeConversion13_e;      /* '<Root>/Data Type Conversion13' */
  uint8_T DataTypeConversion6_c;       /* '<Root>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_l;       /* '<Root>/Data Type Conversion7' */
  uint8_T DataTypeConversion14_c;      /* '<Root>/Data Type Conversion14' */
  uint8_T DataTypeConversion15_c;      /* '<Root>/Data Type Conversion15' */
  uint8_T DataTypeConversion8_g;       /* '<Root>/Data Type Conversion8' */
  uint8_T DataTypeConversion9_m;       /* '<Root>/Data Type Conversion9' */
  uint8_T DataTypeConversion16_a;      /* '<Root>/Data Type Conversion16' */
  uint8_T DataTypeConversion17_o;      /* '<Root>/Data Type Conversion17' */
  uint8_T DataTypeConversion10_o;      /* '<Root>/Data Type Conversion10' */
  uint8_T DataTypeConversion11_i;      /* '<Root>/Data Type Conversion11' */
  uint8_T DataTypeConversion18_j;      /* '<Root>/Data Type Conversion18' */
  uint8_T DataTypeConversion19_o;      /* '<Root>/Data Type Conversion19' */
} BlockIO_Copy_2_of_canceshi;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<Root>/Scope' */

  struct {
    void *LoggedData;
  } ToWorkspace_PWORK;                 /* '<Root>/To Workspace' */

  int_T PCL731_IWORK[2];               /* '<Root>/PCL731' */
  struct {
    int_T AcquireOK;
  } SFunction_IWORK;                   /* '<S8>/S-Function' */
} D_Work_Copy_2_of_canceshi;

/* Backward compatible GRT Identifiers */
#define rtB                            Copy_2_of_canceshi_B
#define BlockIO                        BlockIO_Copy_2_of_canceshi
#define rtXdot                         Copy_2_of_canceshi_Xdot
#define StateDerivatives               StateDerivatives_Copy_2_of_canceshi
#define tXdis                          Copy_2_of_canceshi_Xdis
#define StateDisabled                  StateDisabled_Copy_2_of_canceshi
#define rtP                            Copy_2_of_canceshi_P
#define Parameters                     Parameters_Copy_2_of_canceshi
#define rtDWork                        Copy_2_of_canceshi_DWork
#define D_Work                         D_Work_Copy_2_of_canceshi

/* Parameters (auto storage) */
struct Parameters_Copy_2_of_canceshi_ {
  real_T Constant33_Value;             /* Expression: 223
                                        * Referenced by: '<S9>/Constant33'
                                        */
  real_T Constant32_Value;             /* Expression: 239
                                        * Referenced by: '<S9>/Constant32'
                                        */
  real_T Constant31_Value;             /* Expression: 247
                                        * Referenced by: '<S9>/Constant31'
                                        */
  real_T Constant30_Value;             /* Expression: 251
                                        * Referenced by: '<S9>/Constant30'
                                        */
  real_T Constant29_Value;             /* Expression: 253
                                        * Referenced by: '<S9>/Constant29'
                                        */
  real_T Constant28_Value;             /* Expression: 254
                                        * Referenced by: '<S9>/Constant28'
                                        */
  real_T u_Value;                      /* Expression: 0
                                        * Referenced by: '<Root>/88'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T Constant3_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant3'
                                        */
  real_T Constant4_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant4'
                                        */
  real_T Constant5_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant5'
                                        */
  real_T Constant6_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant6'
                                        */
  real_T Constant7_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant7'
                                        */
  real_T Constant8_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant8'
                                        */
  real_T Constant9_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant9'
                                        */
  real_T Constant10_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant10'
                                        */
  real_T Constant12_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant12'
                                        */
  real_T Constant13_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant13'
                                        */
  real_T Constant14_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant14'
                                        */
  real_T Constant15_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant15'
                                        */
  real_T Constant11_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant11'
                                        */
  real_T Constant17_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant17'
                                        */
  real_T Constant19_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant19'
                                        */
  real_T Constant20_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant20'
                                        */
  real_T Constant21_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant21'
                                        */
  real_T Constant16_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant16'
                                        */
  real_T Constant23_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant23'
                                        */
  real_T Constant24_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant24'
                                        */
  real_T Constant25_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant25'
                                        */
  real_T Constant26_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant26'
                                        */
  real_T PCL731_P1_Size[2];            /* Computed Parameter: PCL731_P1_Size
                                        * Referenced by: '<Root>/PCL731'
                                        */
  real_T PCL731_P1;                    /* Expression: BaseAddress
                                        * Referenced by: '<Root>/PCL731'
                                        */
  real_T PCL731_P2_Size[2];            /* Computed Parameter: PCL731_P2_Size
                                        * Referenced by: '<Root>/PCL731'
                                        */
  real_T PCL731_P2[2];                 /* Expression: [SampleTime SampleOffset]
                                        * Referenced by: '<Root>/PCL731'
                                        */
  real_T u_Value_a;                    /* Expression: 0
                                        * Referenced by: '<Root>/99'
                                        */
  real_T Constant18_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/Constant18'
                                        */
  real_T Constant7_Value_b;            /* Expression: 43
                                        * Referenced by: '<S2>/Constant7'
                                        */
  real_T Constant16_Value_o;           /* Expression: 3
                                        * Referenced by: '<S2>/Constant16'
                                        */
  real_T Constant1_Value;              /* Expression: 32
                                        * Referenced by: '<S2>/Constant1'
                                        */
  real_T Constant2_Value_b;            /* Expression: 1
                                        * Referenced by: '<S2>/Constant2'
                                        */
  real_T Constant3_Value_m;            /* Expression: 255
                                        * Referenced by: '<S2>/Constant3'
                                        */
  real_T Constant4_Value_c;            /* Expression: 255
                                        * Referenced by: '<S2>/Constant4'
                                        */
  real_T Constant5_Value_d;            /* Expression: 255
                                        * Referenced by: '<S2>/Constant5'
                                        */
  real_T Constant6_Value_b;            /* Expression: 255
                                        * Referenced by: '<S2>/Constant6'
                                        */
  real_T Constant8_Value_e;            /* Expression: 43
                                        * Referenced by: '<S11>/Constant8'
                                        */
  real_T Constant16_Value_p;           /* Expression: 1
                                        * Referenced by: '<S11>/Constant16'
                                        */
  real_T Constant2_Value_m;            /* Expression: 32
                                        * Referenced by: '<S11>/Constant2'
                                        */
  real_T Constant3_Value_j;            /* Expression: 1
                                        * Referenced by: '<S11>/Constant3'
                                        */
  real_T Constant4_Value_l;            /* Expression: 255
                                        * Referenced by: '<S11>/Constant4'
                                        */
  real_T Constant5_Value_l;            /* Expression: 255
                                        * Referenced by: '<S11>/Constant5'
                                        */
  real_T Constant6_Value_n;            /* Expression: 255
                                        * Referenced by: '<S11>/Constant6'
                                        */
  real_T Constant7_Value_i;            /* Expression: 255
                                        * Referenced by: '<S11>/Constant7'
                                        */
  real_T Constant24_Value_i;           /* Expression: 43
                                        * Referenced by: '<S14>/Constant24'
                                        */
  real_T Constant18_Value_e;           /* Expression: 3
                                        * Referenced by: '<S14>/Constant18'
                                        */
  real_T Constant17_Value_l;           /* Expression: 32
                                        * Referenced by: '<S14>/Constant17'
                                        */
  real_T Constant19_Value_l;           /* Expression: 1
                                        * Referenced by: '<S14>/Constant19'
                                        */
  real_T Constant20_Value_d;           /* Expression: 255
                                        * Referenced by: '<S14>/Constant20'
                                        */
  real_T Constant21_Value_l;           /* Expression: 255
                                        * Referenced by: '<S14>/Constant21'
                                        */
  real_T Constant22_Value;             /* Expression: 255
                                        * Referenced by: '<S14>/Constant22'
                                        */
  real_T Constant23_Value_m;           /* Expression: 255
                                        * Referenced by: '<S14>/Constant23'
                                        */
  real_T Constant7_Value_d;            /* Expression: 43
                                        * Referenced by: '<S1>/Constant7'
                                        */
  real_T Constant16_Value_f;           /* Expression: 3
                                        * Referenced by: '<S1>/Constant16'
                                        */
  real_T Constant1_Value_a;            /* Expression: 32
                                        * Referenced by: '<S1>/Constant1'
                                        */
  real_T Constant2_Value_g;            /* Expression: 1
                                        * Referenced by: '<S1>/Constant2'
                                        */
  real_T Constant3_Value_c;            /* Expression: 255
                                        * Referenced by: '<S1>/Constant3'
                                        */
  real_T Constant4_Value_h;            /* Expression: 15
                                        * Referenced by: '<S1>/Constant4'
                                        */
  real_T Constant5_Value_h;            /* Expression: 0
                                        * Referenced by: '<S1>/Constant5'
                                        */
  real_T Constant6_Value_d;            /* Expression: 0
                                        * Referenced by: '<S1>/Constant6'
                                        */
  real_T Constant15_Value_k;           /* Expression: 47
                                        * Referenced by: '<S1>/Constant15'
                                        */
  real_T Constant9_Value_j;            /* Expression: 11
                                        * Referenced by: '<S1>/Constant9'
                                        */
  real_T Constant8_Value_f;            /* Expression: 32
                                        * Referenced by: '<S1>/Constant8'
                                        */
  real_T Constant10_Value_m;           /* Expression: 1
                                        * Referenced by: '<S1>/Constant10'
                                        */
  real_T Constant11_Value_g;           /* Expression: 0
                                        * Referenced by: '<S1>/Constant11'
                                        */
  real_T Constant12_Value_f;           /* Expression: 0
                                        * Referenced by: '<S1>/Constant12'
                                        */
  real_T Constant13_Value_e;           /* Expression: 0
                                        * Referenced by: '<S1>/Constant13'
                                        */
  real_T Constant14_Value_n;           /* Expression: 0
                                        * Referenced by: '<S1>/Constant14'
                                        */
  real_T constant1_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/constant1'
                                        */
  real_T constant3_Value;              /* Expression: 3
                                        * Referenced by: '<Root>/constant3'
                                        */
  real_T constant6_Value;              /* Expression: 2
                                        * Referenced by: '<Root>/constant6'
                                        */
  real_T constant9_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/constant9'
                                        */
  real_T constant2_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/constant2'
                                        */
  real_T constant10_Value;             /* Expression: 2
                                        * Referenced by: '<Root>/constant10'
                                        */
  real_T constant11_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/constant11'
                                        */
  real_T constant4_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/constant4'
                                        */
  real_T constant7_Value;              /* Expression: 3
                                        * Referenced by: '<Root>/constant7'
                                        */
  real_T constant12_Value;             /* Expression: 2
                                        * Referenced by: '<Root>/constant12'
                                        */
  real_T constant13_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/constant13'
                                        */
  real_T constant5_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/constant5'
                                        */
  real_T constant8_Value;              /* Expression: 3
                                        * Referenced by: '<Root>/constant8'
                                        */
  real_T constant14_Value;             /* Expression: 2
                                        * Referenced by: '<Root>/constant14'
                                        */
  real_T constant15_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/constant15'
                                        */
  real_T Setup_P1_Size[2];             /* Computed Parameter: Setup_P1_Size
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T Setup_P1[4];                  /* Expression: can1UserBR
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T Setup_P2_Size[2];             /* Computed Parameter: Setup_P2_Size
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T Setup_P2[4];                  /* Expression: can2UserBR
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T Setup_P3_Size[2];             /* Computed Parameter: Setup_P3_Size
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T Setup_P4_Size[2];             /* Computed Parameter: Setup_P4_Size
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T Setup_P5_Size[2];             /* Computed Parameter: Setup_P5_Size
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T Setup_P5[7];                  /* Expression: can2SendS
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T Setup_P6_Size[2];             /* Computed Parameter: Setup_P6_Size
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T Setup_P6[6];                  /* Expression: can2RecS
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T Setup_P7_Size[2];             /* Computed Parameter: Setup_P7_Size
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T Setup_P8_Size[2];             /* Computed Parameter: Setup_P8_Size
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T Setup_P9_Size[2];             /* Computed Parameter: Setup_P9_Size
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T Setup_P10_Size[2];            /* Computed Parameter: Setup_P10_Size
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T Setup_P11_Size[2];            /* Computed Parameter: Setup_P11_Size
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T Setup_P12_Size[2];            /* Computed Parameter: Setup_P12_Size
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T Setup_P13_Size[2];            /* Computed Parameter: Setup_P13_Size
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T Setup_P13[6];                 /* Expression: can2RecSI
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T Setup_P14_Size[2];            /* Computed Parameter: Setup_P14_Size
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T Setup_P15_Size[2];            /* Computed Parameter: Setup_P15_Size
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T Setup_P15;                    /* Expression: initarray
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T Setup_P16_Size[2];            /* Computed Parameter: Setup_P16_Size
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T Setup_P16;                    /* Expression: termarray
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T Setup_P17_Size[2];            /* Computed Parameter: Setup_P17_Size
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T Setup_P17;                    /* Expression: ioBaseAddress
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T Setup_P18_Size[2];            /* Computed Parameter: Setup_P18_Size
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T Setup_P18;                    /* Expression: memBaseAddress
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T Setup_P19_Size[2];            /* Computed Parameter: Setup_P19_Size
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T Setup_P19;                    /* Expression: intNo
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T Setup_P20_Size[2];            /* Computed Parameter: Setup_P20_Size
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T Setup_P20;                    /* Expression: board
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T Setup_P21_Size[2];            /* Computed Parameter: Setup_P21_Size
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T Setup_P21;                    /* Expression: can1bus
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T Setup_P22_Size[2];            /* Computed Parameter: Setup_P22_Size
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T Setup_P22;                    /* Expression: can2bus
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T Setup_P23_Size[2];            /* Computed Parameter: Setup_P23_Size
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T Setup_P23;                    /* Expression: bus_off_out
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T Setup_P24_Size[2];            /* Computed Parameter: Setup_P24_Size
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T Setup_P24;                    /* Expression: bus_off_rec
                                        * Referenced by: '<Root>/Setup '
                                        */
  uint16_T right7_XData[2];            /* Computed Parameter: right7_XData
                                        * Referenced by: '<Root>/right7'
                                        */
  uint16_T right7_YData[2];            /* Computed Parameter: right7_YData
                                        * Referenced by: '<Root>/right7'
                                        */
  uint8_T Constant_Value;              /* Expression: uint8(1)
                                        * Referenced by: '<S13>/Constant'
                                        */
  uint8_T SwitchControl_Threshold;     /* Expression: uint8(0)
                                        * Referenced by: '<S13>/SwitchControl'
                                        */
  uint8_T Constant_Value_i;            /* Expression: uint8(1)
                                        * Referenced by: '<S3>/Constant'
                                        */
  uint8_T SwitchControl_Threshold_h;   /* Expression: uint8(0)
                                        * Referenced by: '<S3>/SwitchControl'
                                        */
  uint8_T Constant_Value_l;            /* Expression: uint8(1)
                                        * Referenced by: '<S12>/Constant'
                                        */
  uint8_T SwitchControl_Threshold_hn;  /* Expression: uint8(0)
                                        * Referenced by: '<S12>/SwitchControl'
                                        */
  uint8_T Constant_Value_p;            /* Expression: uint8(1)
                                        * Referenced by: '<S4>/Constant'
                                        */
  uint8_T SwitchControl_Threshold_b;   /* Expression: uint8(0)
                                        * Referenced by: '<S4>/SwitchControl'
                                        */
  uint8_T Constant_Value_k;            /* Expression: uint8(1)
                                        * Referenced by: '<S5>/Constant'
                                        */
  uint8_T SwitchControl_Threshold_g;   /* Expression: uint8(0)
                                        * Referenced by: '<S5>/SwitchControl'
                                        */
  uint8_T Constant_Value_g;            /* Expression: uint8(1)
                                        * Referenced by: '<S6>/Constant'
                                        */
  uint8_T SwitchControl_Threshold_e;   /* Expression: uint8(0)
                                        * Referenced by: '<S6>/SwitchControl'
                                        */
  uint8_T Constant_Value_a;            /* Expression: uint8(1)
                                        * Referenced by: '<S7>/Constant'
                                        */
  uint8_T SwitchControl_Threshold_p;   /* Expression: uint8(0)
                                        * Referenced by: '<S7>/SwitchControl'
                                        */
};

/* Real-time Model Data Structure */
struct rtModel_Copy_2_of_canceshi {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWLogInfo *rtwLogInfo;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * NonInlinedSFcns:
   * The following substructure contains information regarding
   * non-inlined s-functions used in the model.
   */
  struct {
    RTWSfcnInfo sfcnInfo;
    SimStruct childSFunctions[2];
    SimStruct *childSFunctionPtrs[2];
    struct _ssBlkInfo2 blkInfo2[2];
    struct _ssSFcnModelMethods2 methods2[2];
    struct _ssSFcnModelMethods3 methods3[2];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn0;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      uint_T attribs[24];
      mxArray *params[24];
    } Sfcn1;
  } NonInlinedSFcns;

  /*
   * DataMapInfo:
   * The following substructure contains information regarding
   * structures generated in the model's C API.
   */
  struct {
    rtwCAPI_ModelMappingInfo mmi;
  } DataMapInfo;

  /*
   * ModelData:
   * The following substructure contains information regarding
   * the data used in the model.
   */
  struct {
    void *blockIO;
    const void *constBlockIO;
    real_T *defaultParam;
    ZCSigState *prevZCSigState;
    real_T *contStates;
    real_T *derivs;
    real_T *zcSignalValues;
    void *inputs;
    void *outputs;
    boolean_T *contStateDisabled;
    boolean_T zCCacheNeedsReset;
    boolean_T derivCacheNeedsReset;
    boolean_T blkStateChange;
  } ModelData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[1];
    time_T offsetTimesArray[1];
    int_T sampleTimeTaskIDArray[1];
    int_T sampleHitArray[1];
    int_T perTaskSampleHitsArray[1];
    time_T tArray[1];
  } Timing;

  /*
   * Work:
   * The following substructure contains information regarding
   * the work vectors in the model.
   */
  struct {
    void *dwork;
  } Work;
};

/* Block parameters (auto storage) */
extern Parameters_Copy_2_of_canceshi Copy_2_of_canceshi_P;

/* Block signals (auto storage) */
extern BlockIO_Copy_2_of_canceshi Copy_2_of_canceshi_B;

/* Block states (auto storage) */
extern D_Work_Copy_2_of_canceshi Copy_2_of_canceshi_DWork;

/* Model entry point functions */
extern void Copy_2_of_canceshi_initialize(boolean_T firstTime);
extern void Copy_2_of_canceshi_output(int_T tid);
extern void Copy_2_of_canceshi_update(int_T tid);
extern void Copy_2_of_canceshi_terminate(void);

/* Real-time Model object */
extern struct rtModel_Copy_2_of_canceshi *Copy_2_of_canceshi_rtM;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : Copy_2_of_canceshi
 * '<S1>'   : Copy_2_of_canceshi/255_15shineng
 * '<S2>'   : Copy_2_of_canceshi/255shineng
 * '<S3>'   : Copy_2_of_canceshi/Manual Switch
 * '<S4>'   : Copy_2_of_canceshi/Manual Switch1
 * '<S5>'   : Copy_2_of_canceshi/Manual Switch2
 * '<S6>'   : Copy_2_of_canceshi/Manual Switch3
 * '<S7>'   : Copy_2_of_canceshi/Manual Switch4
 * '<S8>'   : Copy_2_of_canceshi/Scope (xPC)
 * '<S9>'   : Copy_2_of_canceshi/Subsystem
 * '<S10>'  : Copy_2_of_canceshi/Subsystem1
 * '<S11>'  : Copy_2_of_canceshi/Subsystem4
 * '<S12>'  : Copy_2_of_canceshi/255_15shineng/Manual Switch
 * '<S13>'  : Copy_2_of_canceshi/255_15shineng/Manual Switch1
 * '<S14>'  : Copy_2_of_canceshi/255_15shineng/jihuo
 */
#endif                                 /* RTW_HEADER_Copy_2_of_canceshi_h_ */
