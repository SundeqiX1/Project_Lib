/*
 * kaiguangai1108.h
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

#ifndef RTW_HEADER_kaiguangai1108_h_
#define RTW_HEADER_kaiguangai1108_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef kaiguangai1108_COMMON_INCLUDES_
# define kaiguangai1108_COMMON_INCLUDES_
#include <xpcimports.h>
#include <xpcdatatypes.h>
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_logging.h"
#include "xpcimports.h"
#endif                                 /* kaiguangai1108_COMMON_INCLUDES_ */

#include "kaiguangai1108_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlkStateChangeFlag
# define rtmGetBlkStateChangeFlag(rtm) ((rtm)->blkStateChange)
#endif

#ifndef rtmSetBlkStateChangeFlag
# define rtmSetBlkStateChangeFlag(rtm, val) ((rtm)->blkStateChange = (val))
#endif

#ifndef rtmGetBlockIO
# define rtmGetBlockIO(rtm)            ((rtm)->blockIO)
#endif

#ifndef rtmSetBlockIO
# define rtmSetBlockIO(rtm, val)       ((rtm)->blockIO = (val))
#endif

#ifndef rtmGetChecksums
# define rtmGetChecksums(rtm)          ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
# define rtmSetChecksums(rtm, val)     ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
# define rtmGetConstBlockIO(rtm)       ((rtm)->constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
# define rtmSetConstBlockIO(rtm, val)  ((rtm)->constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->contStates = (val))
#endif

#ifndef rtmGetDataMapInfo
# define rtmGetDataMapInfo(rtm)        ((rtm)->DataMapInfo)
#endif

#ifndef rtmSetDataMapInfo
# define rtmSetDataMapInfo(rtm, val)   ((rtm)->DataMapInfo = (val))
#endif

#ifndef rtmGetDefaultParam
# define rtmGetDefaultParam(rtm)       ((rtm)->defaultParam)
#endif

#ifndef rtmSetDefaultParam
# define rtmSetDefaultParam(rtm, val)  ((rtm)->defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
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

#ifndef rtmGetNumPeriodicContStates
# define rtmGetNumPeriodicContStates(rtm) ((rtm)->Sizes.numPeriodicContStates)
#endif

#ifndef rtmSetNumPeriodicContStates
# define rtmSetNumPeriodicContStates(rtm, val) ((rtm)->Sizes.numPeriodicContStates = (val))
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

#ifndef rtmGetPeriodicContStateIndices
# define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
# define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
# define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
# define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetPrevZCSigState
# define rtmGetPrevZCSigState(rtm)     ((rtm)->prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
# define rtmSetPrevZCSigState(rtm, val) ((rtm)->prevZCSigState = (val))
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
# define rtmGetRootDWork(rtm)          ((rtm)->dwork)
#endif

#ifndef rtmSetRootDWork
# define rtmSetRootDWork(rtm, val)     ((rtm)->dwork = (val))
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

#ifndef rtmGetSelf
# define rtmGetSelf(rtm)               ()
#endif

#ifndef rtmSetSelf
# define rtmSetSelf(rtm, val)          ()
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
# define rtmGetU(rtm)                  ((rtm)->inputs)
#endif

#ifndef rtmSetU
# define rtmSetU(rtm, val)             ((rtm)->inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
# define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
# define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
# define rtmGetY(rtm)                  ((rtm)->outputs)
#endif

#ifndef rtmSetY
# define rtmSetY(rtm, val)             ((rtm)->outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
# define rtmGetZCSignalValues(rtm)     ((rtm)->zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
# define rtmSetZCSignalValues(rtm, val) ((rtm)->zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
# define rtmGet_TimeOfLastOutput(rtm)  ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
# define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->derivs = (val))
#endif

#ifndef rtmGetChecksumVal
# define rtmGetChecksumVal(rtm, idx)   ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
# define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
# define rtmGetDWork(rtm, idx)         ((rtm)->dwork[idx])
#endif

#ifndef rtmSetDWork
# define rtmSetDWork(rtm, idx, val)    ((rtm)->dwork[idx] = (val))
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

#ifndef rtmGetVarNextHitTimeList
# define rtmGetVarNextHitTimeList(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTimeList
# define rtmSetVarNextHitTimeList(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
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
#define rtModel_kaiguangai1108         RT_MODEL_kaiguangai1108_T

/* Definition for use in the target main file */
#define kaiguangai1108_rtModel         RT_MODEL_kaiguangai1108_T

/* user code (top of export header file) */
#include "xpcdatatypes.h"

/* Block signals for system '<S16>/Chart' */
typedef struct {
  real_T skhx;                         /* '<S16>/Chart' */
  real_T kghx;                         /* '<S16>/Chart' */
  real_T yjhx;                         /* '<S16>/Chart' */
  real_T gghx;                         /* '<S16>/Chart' */
  real_T kgzhiling1;                   /* '<S16>/Chart' */
  real_T kgzhiling2;                   /* '<S16>/Chart' */
  real_T ggzhiling1;                   /* '<S16>/Chart' */
  real_T ggzhiling2;                   /* '<S16>/Chart' */
  real_T skt;                          /* '<S16>/Chart' */
  real_T kgt;                          /* '<S16>/Chart' */
  real_T sdt;                          /* '<S16>/Chart' */
  real_T jst;                          /* '<S16>/Chart' */
  real_T ggt;                          /* '<S16>/Chart' */
  real_T yjt;                          /* '<S16>/Chart' */
  real_T skyichang;                    /* '<S16>/Chart' */
  real_T kgyichang;                    /* '<S16>/Chart' */
  real_T sdyichang;                    /* '<S16>/Chart' */
  real_T jsyichang;                    /* '<S16>/Chart' */
  real_T ggyichang;                    /* '<S16>/Chart' */
  real_T yjyichang;                    /* '<S16>/Chart' */
} B_Chart_kaiguangai1108_T;

/* Block states (auto storage) for system '<S16>/Chart' */
typedef struct {
  int32_T sfEvent;                     /* '<S16>/Chart' */
  uint8_T is_active_c10_kaiguangai1108;/* '<S16>/Chart' */
  uint8_T is_c10_kaiguangai1108;       /* '<S16>/Chart' */
  uint8_T is_songkai;                  /* '<S16>/Chart' */
  uint8_T is_active_songkai;           /* '<S16>/Chart' */
  uint8_T is_kaigai;                   /* '<S16>/Chart' */
  uint8_T is_active_kaigai;            /* '<S16>/Chart' */
  uint8_T is_jiesuo_songkai;           /* '<S16>/Chart' */
  uint8_T is_active_jiesuo_songkai;    /* '<S16>/Chart' */
  uint8_T is_suoding_yajin;            /* '<S16>/Chart' */
  uint8_T is_active_suoding_yajin;     /* '<S16>/Chart' */
  uint8_T is_yajin;                    /* '<S16>/Chart' */
  uint8_T is_active_yajin;             /* '<S16>/Chart' */
  uint8_T is_guangai;                  /* '<S16>/Chart' */
  uint8_T is_active_guangai;           /* '<S16>/Chart' */
  uint8_T temporalCounter_i1;          /* '<S16>/Chart' */
  uint8_T temporalCounter_i2;          /* '<S16>/Chart' */
  uint8_T temporalCounter_i3;          /* '<S16>/Chart' */
  uint8_T temporalCounter_i4;          /* '<S16>/Chart' */
  uint8_T temporalCounter_i5;          /* '<S16>/Chart' */
  uint8_T temporalCounter_i6;          /* '<S16>/Chart' */
} DW_Chart_kaiguangai1108_T;

/* Block signals for system '<S17>/1#1' */
typedef struct {
  real_T skhx;                         /* '<S17>/1#1' */
  real_T kghx;                         /* '<S17>/1#1' */
  real_T kgzhiling1;                   /* '<S17>/1#1' */
  real_T kgzhiling2;                   /* '<S17>/1#1' */
  real_T yjhx;                         /* '<S17>/1#1' */
  real_T gghx;                         /* '<S17>/1#1' */
  real_T ggzhiling1;                   /* '<S17>/1#1' */
  real_T ggzhiling2;                   /* '<S17>/1#1' */
  real_T skt;                          /* '<S17>/1#1' */
  real_T kgt;                          /* '<S17>/1#1' */
  real_T sdt;                          /* '<S17>/1#1' */
  real_T jst;                          /* '<S17>/1#1' */
  real_T ggt;                          /* '<S17>/1#1' */
  real_T yjt;                          /* '<S17>/1#1' */
  real_T yikaicishu;                   /* '<S17>/1#1' */
  real_T skyichang;                    /* '<S17>/1#1' */
  real_T kgyichang;                    /* '<S17>/1#1' */
  real_T sdyichang;                    /* '<S17>/1#1' */
  real_T jsyichang;                    /* '<S17>/1#1' */
  real_T ggyichang;                    /* '<S17>/1#1' */
  real_T yjyichang;                    /* '<S17>/1#1' */
} B_u1_kaiguangai1108_T;

/* Block states (auto storage) for system '<S17>/1#1' */
typedef struct {
  real_T t;                            /* '<S17>/1#1' */
  real_T t2;                           /* '<S17>/1#1' */
  real_T t4;                           /* '<S17>/1#1' */
  real_T t6;                           /* '<S17>/1#1' */
  real_T t8;                           /* '<S17>/1#1' */
  real_T t10;                          /* '<S17>/1#1' */
  int32_T sfEvent;                     /* '<S17>/1#1' */
  uint16_T temporalCounter_i1;         /* '<S17>/1#1' */
  uint8_T is_active_c2_kaiguangai1108; /* '<S17>/1#1' */
  uint8_T is_c2_kaiguangai1108;        /* '<S17>/1#1' */
  uint8_T is_zidong;                   /* '<S17>/1#1' */
} DW_u1_kaiguangai1108_T;

/* Block signals for system '<S9>/jinjichuli' */
typedef struct {
  real_T skhx;                         /* '<S9>/jinjichuli' */
  real_T kghx;                         /* '<S9>/jinjichuli' */
  real_T yjhx;                         /* '<S9>/jinjichuli' */
  real_T gghx;                         /* '<S9>/jinjichuli' */
} B_jinjichuli_kaiguangai1108_T;

/* Block states (auto storage) for system '<S9>/jinjichuli' */
typedef struct {
  int32_T sfEvent;                     /* '<S9>/jinjichuli' */
  uint16_T temporalCounter_i1;         /* '<S9>/jinjichuli' */
  uint8_T is_active_c18_kaiguangai1108;/* '<S9>/jinjichuli' */
  uint8_T is_c18_kaiguangai1108;       /* '<S9>/jinjichuli' */
  uint8_T is_kaigai;                   /* '<S9>/jinjichuli' */
  uint8_T is_active_kaigai;            /* '<S9>/jinjichuli' */
  uint8_T is_guangai;                  /* '<S9>/jinjichuli' */
  uint8_T is_active_guangai;           /* '<S9>/jinjichuli' */
  uint8_T is_songkai;                  /* '<S9>/jinjichuli' */
  uint8_T is_active_songkai;           /* '<S9>/jinjichuli' */
  uint8_T is_yajin;                    /* '<S9>/jinjichuli' */
  uint8_T is_active_yajin;             /* '<S9>/jinjichuli' */
  uint8_T is_suoding;                  /* '<S9>/jinjichuli' */
  uint8_T is_active_suoding;           /* '<S9>/jinjichuli' */
  uint8_T is_jiesuo;                   /* '<S9>/jinjichuli' */
  uint8_T is_active_jiesuo;            /* '<S9>/jinjichuli' */
} DW_jinjichuli_kaiguangai1108_T;

/* Block signals (auto storage) */
typedef struct {
  real_T tiaoshi;                      /* '<Root>/tiaoshi' */
  real_T u;                            /* '<S35>/2' */
  real_T u_l;                          /* '<S35>/3' */
  real_T u_c;                          /* '<S35>/4' */
  real_T u_d;                          /* '<S35>/5' */
  real_T u_c4;                         /* '<S35>/6' */
  real_T Switch1;                      /* '<S35>/Switch1' */
  real_T u_h;                          /* '<S35>/1' */
  real_T Switch2;                      /* '<S35>/Switch2' */
  real_T Switch3;                      /* '<S35>/Switch3' */
  real_T Switch4;                      /* '<S35>/Switch4' */
  real_T Switch5;                      /* '<S35>/Switch5' */
  real_T Switch6;                      /* '<S35>/Switch6' */
  real_T Product[6];                   /* '<S8>/Product' */
  real_T Product1[6];                  /* '<S8>/Product1' */
  real_T Product2[6];                  /* '<S8>/Product2' */
  real_T Product3[6];                  /* '<S8>/Product3' */
  real_T Product4[6];                  /* '<S8>/Product4' */
  real_T Product5[6];                  /* '<S8>/Product5' */
  real_T Product6[6];                  /* '<S8>/Product6' */
  real_T Product7[6];                  /* '<S8>/Product7' */
  real_T jieshu;                       /* '<Root>/jieshu' */
  real_T DataTypeConversion6[4];       /* '<S1>/Data Type Conversion6' */
  real_T Constant;                     /* '<S1>/Constant' */
  real_T PCI1_o1[16];                  /* '<S1>/PCI1' */
  real_T PCI1_o2[16];                  /* '<S1>/PCI1' */
  real_T memory1[32];                  /* '<Root>/memory1' */
  real_T PCI2_o1[16];                  /* '<S1>/PCI2' */
  real_T PCI2_o2[16];                  /* '<S1>/PCI2' */
  real_T Constant1;                    /* '<S1>/Constant1' */
  real_T PCI3_o1[16];                  /* '<S1>/PCI3' */
  real_T PCI3_o2[16];                  /* '<S1>/PCI3' */
  real_T DataTypeConversion1[16];      /* '<S1>/Data Type Conversion1' */
  real_T DataTypeConversion2[16];      /* '<S1>/Data Type Conversion2' */
  real_T DataTypeConversion3[16];      /* '<S1>/Data Type Conversion3' */
  real_T DataTypeConversion4[16];      /* '<S1>/Data Type Conversion4' */
  real_T DataTypeConversion5[16];      /* '<S1>/Data Type Conversion5' */
  real_T start;                        /* '<Root>/start' */
  real_T u_g;                          /* '<S11>/t1' */
  real_T u_m;                          /* '<S11>/t3' */
  real_T u_m5;                         /* '<S11>/t5' */
  real_T u_gd;                         /* '<S11>/t7' */
  real_T u_gh;                         /* '<S11>/t9' */
  real_T u_m0;                         /* '<S11>/t11' */
  real_T zidong_shedingcishu;          /* '<Root>/zidong_shedingcishu' */
  real_T u_gs;                         /* '<S34>/2' */
  real_T u_n;                          /* '<S34>/3' */
  real_T u_k;                          /* '<S34>/4' */
  real_T u_ni;                         /* '<S34>/5' */
  real_T u_l4;                         /* '<S34>/6' */
  real_T Switch1_d;                    /* '<S34>/Switch1' */
  real_T u_dd;                         /* '<S34>/1' */
  real_T Switch2_d;                    /* '<S34>/Switch2' */
  real_T Switch3_p;                    /* '<S34>/Switch3' */
  real_T Switch4_k;                    /* '<S34>/Switch4' */
  real_T Switch5_h;                    /* '<S34>/Switch5' */
  real_T Switch6_c;                    /* '<S34>/Switch6' */
  real_T Product_g[6];                 /* '<S7>/Product' */
  real_T Product1_k[6];                /* '<S7>/Product1' */
  real_T Product2_m[6];                /* '<S7>/Product2' */
  real_T Product3_p[6];                /* '<S7>/Product3' */
  real_T Product4_l[6];                /* '<S7>/Product4' */
  real_T Product5_f[6];                /* '<S7>/Product5' */
  real_T Product6_p[6];                /* '<S7>/Product6' */
  real_T Product7_l[6];                /* '<S7>/Product7' */
  real_T MultiportSwitch2[48];         /* '<S6>/Multiport Switch2' */
  real_T MultiportSwitch[6];           /* '<Root>/Multiport Switch' */
  real_T DataTypeConversion[6];        /* '<Root>/Data Type Conversion' */
  real_T DataTypeConversion3_o[6];     /* '<Root>/Data Type Conversion3' */
  real_T MultiportSwitch1[10];         /* '<Root>/Multiport Switch1' */
  real_T DataTypeConversion1_j[10];    /* '<Root>/Data Type Conversion1' */
  real_T MultiportSwitch2_o[4];        /* '<Root>/Multiport Switch2' */
  real_T DataTypeConversion2_g[4];     /* '<Root>/Data Type Conversion2' */
  real_T DataTypeConversion1_i;        /* '<S6>/Data Type Conversion1' */
  real_T DataTypeConversion2_a;        /* '<S6>/Data Type Conversion2' */
  real_T DataTypeConversion6_n[8];     /* '<S6>/Data Type Conversion6' */
  real_T MultiportSwitch1_i[32];       /* '<S6>/Multiport Switch1' */
  real_T DataTypeConversion1_b[6];     /* '<S17>/Data Type Conversion1' */
  real_T DataTypeConversion2_j[6];     /* '<S17>/Data Type Conversion2' */
  real_T DataTypeConversion3_l[6];     /* '<S17>/Data Type Conversion3' */
  real_T DataTypeConversion4_m[6];     /* '<S17>/Data Type Conversion4' */
  real_T DataTypeConversion5_n[6];     /* '<S17>/Data Type Conversion5' */
  real_T DataTypeConversion6_d[6];     /* '<S17>/Data Type Conversion6' */
  real_T DataTypeConversion7[6];       /* '<S17>/Data Type Conversion7' */
  real_T DataTypeConversion8[6];       /* '<S17>/Data Type Conversion8' */
  real_T skhx;                         /* '<S17>/1#' */
  real_T kghx;                         /* '<S17>/1#' */
  real_T kgzhiling1;                   /* '<S17>/1#' */
  real_T kgzhiling2;                   /* '<S17>/1#' */
  real_T yjhx;                         /* '<S17>/1#' */
  real_T gghx;                         /* '<S17>/1#' */
  real_T ggzhiling1;                   /* '<S17>/1#' */
  real_T ggzhiling2;                   /* '<S17>/1#' */
  real_T skt;                          /* '<S17>/1#' */
  real_T kgt;                          /* '<S17>/1#' */
  real_T sdt;                          /* '<S17>/1#' */
  real_T jst;                          /* '<S17>/1#' */
  real_T ggt;                          /* '<S17>/1#' */
  real_T yjt;                          /* '<S17>/1#' */
  real_T yikaicishu;                   /* '<S17>/1#' */
  real_T skyichang;                    /* '<S17>/1#' */
  real_T kgyichang;                    /* '<S17>/1#' */
  real_T sdyichang;                    /* '<S17>/1#' */
  real_T jsyichang;                    /* '<S17>/1#' */
  real_T ggyichang;                    /* '<S17>/1#' */
  real_T yjyichang;                    /* '<S17>/1#' */
  real_T guangaihuanchongyichang;      /* '<S6>/Chart1' */
  real_T kaigaihuanchongyichang;       /* '<S6>/Chart' */
  real_T DataTypeConversion4_d[32];    /* '<S6>/Data Type Conversion4' */
  boolean_T LogicalOperator1;          /* '<S35>/Logical Operator1' */
  boolean_T LogicalOperator2;          /* '<S35>/Logical Operator2' */
  boolean_T LogicalOperator3;          /* '<S35>/Logical Operator3' */
  boolean_T LogicalOperator4;          /* '<S35>/Logical Operator4' */
  boolean_T LogicalOperator5;          /* '<S35>/Logical Operator5' */
  boolean_T LogicalOperator6;          /* '<S35>/Logical Operator6' */
  boolean_T memory[4];                 /* '<Root>/memory' */
  boolean_T Switch3_g[4];              /* '<Root>/Switch3' */
  boolean_T LogicalOperator3_e;        /* '<S6>/Logical Operator3' */
  boolean_T LogicalOperator;           /* '<S6>/Logical Operator' */
  boolean_T LogicalOperator1_h;        /* '<S6>/Logical Operator1' */
  boolean_T LogicalOperator1_k;        /* '<S34>/Logical Operator1' */
  boolean_T LogicalOperator2_j;        /* '<S34>/Logical Operator2' */
  boolean_T LogicalOperator3_j;        /* '<S34>/Logical Operator3' */
  boolean_T LogicalOperator4_n;        /* '<S34>/Logical Operator4' */
  boolean_T LogicalOperator5_a;        /* '<S34>/Logical Operator5' */
  boolean_T LogicalOperator6_n;        /* '<S34>/Logical Operator6' */
  boolean_T LogicalOperator2_e;        /* '<S6>/Logical Operator2' */
  boolean_T MultiportSwitch3[6];       /* '<S6>/Multiport Switch3' */
  boolean_T LogicalOperator4_i;        /* '<S6>/Logical Operator4' */
  boolean_T MultiportSwitch_k[4];      /* '<S6>/Multiport Switch' */
  boolean_T LogicalOperator5_av;       /* '<S6>/Logical Operator5' */
  boolean_T LogicalOperator_e;         /* '<S9>/Logical Operator' */
  boolean_T LogicalOperator1_kr;       /* '<S9>/Logical Operator1' */
  boolean_T LogicalOperator4_d;        /* '<S9>/Logical Operator4' */
  boolean_T LogicalOperator5_c;        /* '<S9>/Logical Operator5' */
  boolean_T LogicalOperator4_l;        /* '<S17>/Logical Operator4' */
  boolean_T LogicalOperator5_m;        /* '<S17>/Logical Operator5' */
  boolean_T LogicalOperator6_j;        /* '<S17>/Logical Operator6' */
  boolean_T LogicalOperator7;          /* '<S17>/Logical Operator7' */
  boolean_T LogicalOperator8;          /* '<S17>/Logical Operator8' */
  boolean_T LogicalOperator9;          /* '<S17>/Logical Operator9' */
  boolean_T LogicalOperator10;         /* '<S17>/Logical Operator10' */
  boolean_T LogicalOperator11;         /* '<S17>/Logical Operator11' */
  boolean_T LogicalOperator_c;         /* '<S17>/Logical Operator' */
  boolean_T LogicalOperator1_i;        /* '<S17>/Logical Operator1' */
  boolean_T LogicalOperator12;         /* '<S17>/Logical Operator12' */
  boolean_T LogicalOperator13;         /* '<S17>/Logical Operator13' */
  boolean_T LogicalOperator14;         /* '<S17>/Logical Operator14' */
  boolean_T LogicalOperator15;         /* '<S17>/Logical Operator15' */
  boolean_T LogicalOperator16;         /* '<S17>/Logical Operator16' */
  boolean_T LogicalOperator17;         /* '<S17>/Logical Operator17' */
  boolean_T LogicalOperator2_k;        /* '<S17>/Logical Operator2' */
  boolean_T LogicalOperator3_p;        /* '<S17>/Logical Operator3' */
  boolean_T DataTypeConversion1_a[6];  /* '<S16>/Data Type Conversion1' */
  boolean_T DataTypeConversion10[6];   /* '<S16>/Data Type Conversion10' */
  boolean_T DataTypeConversion2_p[6];  /* '<S16>/Data Type Conversion2' */
  boolean_T DataTypeConversion5_m[6];  /* '<S16>/Data Type Conversion5' */
  boolean_T DataTypeConversion6_nb[6]; /* '<S16>/Data Type Conversion6' */
  boolean_T DataTypeConversion7_d[6];  /* '<S16>/Data Type Conversion7' */
  boolean_T DataTypeConversion8_a[6];  /* '<S16>/Data Type Conversion8' */
  boolean_T DataTypeConversion9[6];    /* '<S16>/Data Type Conversion9' */
  boolean_T LogicalOperator_p;         /* '<S16>/Logical Operator' */
  boolean_T LogicalOperator1_f;        /* '<S16>/Logical Operator1' */
  boolean_T LogicalOperator2_f;        /* '<S16>/Logical Operator2' */
  boolean_T LogicalOperator3_d;        /* '<S16>/Logical Operator3' */
  boolean_T LogicalOperator4_lm;       /* '<S16>/Logical Operator4' */
  boolean_T LogicalOperator5_ml;       /* '<S16>/Logical Operator5' */
  boolean_T LogicalOperator6_nu;       /* '<S16>/Logical Operator6' */
  boolean_T LogicalOperator7_g;        /* '<S16>/Logical Operator7' */
  boolean_T LogicalOperator8_e;        /* '<S16>/Logical Operator8' */
  boolean_T LogicalOperator9_d;        /* '<S16>/Logical Operator9' */
  B_jinjichuli_kaiguangai1108_T sf_jinjichuli7;/* '<S9>/jinjichuli7' */
  B_jinjichuli_kaiguangai1108_T sf_jinjichuli6;/* '<S9>/jinjichuli6' */
  B_jinjichuli_kaiguangai1108_T sf_jinjichuli5;/* '<S9>/jinjichuli5' */
  B_jinjichuli_kaiguangai1108_T sf_jinjichuli4;/* '<S9>/jinjichuli4' */
  B_jinjichuli_kaiguangai1108_T sf_jinjichuli3;/* '<S9>/jinjichuli3' */
  B_jinjichuli_kaiguangai1108_T sf_jinjichuli2;/* '<S9>/jinjichuli2' */
  B_jinjichuli_kaiguangai1108_T sf_jinjichuli1;/* '<S9>/jinjichuli1' */
  B_jinjichuli_kaiguangai1108_T sf_jinjichuli;/* '<S9>/jinjichuli' */
  B_u1_kaiguangai1108_T sf_17;         /* '<S17>/1#7' */
  B_u1_kaiguangai1108_T sf_16;         /* '<S17>/1#6' */
  B_u1_kaiguangai1108_T sf_15;         /* '<S17>/1#5' */
  B_u1_kaiguangai1108_T sf_14;         /* '<S17>/1#4' */
  B_u1_kaiguangai1108_T sf_13;         /* '<S17>/1#3' */
  B_u1_kaiguangai1108_T sf_12;         /* '<S17>/1#2' */
  B_u1_kaiguangai1108_T sf_11;         /* '<S17>/1#1' */
  B_Chart_kaiguangai1108_T sf_Chart7;  /* '<S16>/Chart7' */
  B_Chart_kaiguangai1108_T sf_Chart6;  /* '<S16>/Chart6' */
  B_Chart_kaiguangai1108_T sf_Chart5;  /* '<S16>/Chart5' */
  B_Chart_kaiguangai1108_T sf_Chart4;  /* '<S16>/Chart4' */
  B_Chart_kaiguangai1108_T sf_Chart3;  /* '<S16>/Chart3' */
  B_Chart_kaiguangai1108_T sf_Chart2;  /* '<S16>/Chart2' */
  B_Chart_kaiguangai1108_T sf_Chart1_b;/* '<S16>/Chart1' */
  B_Chart_kaiguangai1108_T sf_Chart_o; /* '<S16>/Chart' */
} B_kaiguangai1108_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T u_PreviousInput;              /* '<S35>/2' */
  real_T u_PreviousInput_c;            /* '<S35>/3' */
  real_T u_PreviousInput_j;            /* '<S35>/4' */
  real_T u_PreviousInput_b;            /* '<S35>/5' */
  real_T u_PreviousInput_jh;           /* '<S35>/6' */
  real_T u_PreviousInput_g;            /* '<S35>/1' */
  real_T memory1_PreviousInput[32];    /* '<Root>/memory1' */
  real_T u_PreviousInput_o;            /* '<S34>/2' */
  real_T u_PreviousInput_h;            /* '<S34>/3' */
  real_T u_PreviousInput_js;           /* '<S34>/4' */
  real_T u_PreviousInput_p;            /* '<S34>/5' */
  real_T u_PreviousInput_bm;           /* '<S34>/6' */
  real_T u_PreviousInput_f;            /* '<S34>/1' */
  real_T t;                            /* '<S17>/1#' */
  real_T t2;                           /* '<S17>/1#' */
  real_T t4;                           /* '<S17>/1#' */
  real_T t6;                           /* '<S17>/1#' */
  real_T t8;                           /* '<S17>/1#' */
  real_T t10;                          /* '<S17>/1#' */
  real_T t_b;                          /* '<S6>/Chart1' */
  real_T t_p;                          /* '<S6>/Chart' */
  int32_T sfEvent;                     /* '<S17>/1#' */
  int32_T sfEvent_i;                   /* '<S6>/Chart1' */
  int32_T sfEvent_e;                   /* '<S6>/Chart' */
  int_T PCI1_IWORK[6];                 /* '<S1>/PCI1' */
  int_T PCI2_IWORK[6];                 /* '<S1>/PCI2' */
  int_T PCI3_IWORK[6];                 /* '<S1>/PCI3' */
  struct {
    int_T AcquireOK;
  } SFunction_IWORK;                   /* '<S2>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_m;                 /* '<S3>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_f;                 /* '<S4>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_o;                 /* '<S5>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_j;                 /* '<S14>/S-Function' */

  int8_T tiaoshimoshi_SubsysRanBC;     /* '<Root>/tiaoshimoshi' */
  int8_T zidong_SubsysRanBC;           /* '<S6>/zidong' */
  int8_T shoudong_SubsysRanBC;         /* '<S6>/shoudong' */
  uint8_T is_active_c1_kaiguangai1108; /* '<S17>/1#' */
  uint8_T is_c1_kaiguangai1108;        /* '<S17>/1#' */
  uint8_T is_zidong;                   /* '<S17>/1#' */
  uint8_T temporalCounter_i1;          /* '<S17>/1#' */
  uint8_T is_active_c27_kaiguangai1108;/* '<S6>/Chart1' */
  uint8_T is_c27_kaiguangai1108;       /* '<S6>/Chart1' */
  uint8_T is_active_c26_kaiguangai1108;/* '<S6>/Chart' */
  uint8_T is_c26_kaiguangai1108;       /* '<S6>/Chart' */
  boolean_T memory_PreviousInput[4];   /* '<Root>/memory' */
  DW_jinjichuli_kaiguangai1108_T sf_jinjichuli7;/* '<S9>/jinjichuli7' */
  DW_jinjichuli_kaiguangai1108_T sf_jinjichuli6;/* '<S9>/jinjichuli6' */
  DW_jinjichuli_kaiguangai1108_T sf_jinjichuli5;/* '<S9>/jinjichuli5' */
  DW_jinjichuli_kaiguangai1108_T sf_jinjichuli4;/* '<S9>/jinjichuli4' */
  DW_jinjichuli_kaiguangai1108_T sf_jinjichuli3;/* '<S9>/jinjichuli3' */
  DW_jinjichuli_kaiguangai1108_T sf_jinjichuli2;/* '<S9>/jinjichuli2' */
  DW_jinjichuli_kaiguangai1108_T sf_jinjichuli1;/* '<S9>/jinjichuli1' */
  DW_jinjichuli_kaiguangai1108_T sf_jinjichuli;/* '<S9>/jinjichuli' */
  DW_u1_kaiguangai1108_T sf_17;        /* '<S17>/1#7' */
  DW_u1_kaiguangai1108_T sf_16;        /* '<S17>/1#6' */
  DW_u1_kaiguangai1108_T sf_15;        /* '<S17>/1#5' */
  DW_u1_kaiguangai1108_T sf_14;        /* '<S17>/1#4' */
  DW_u1_kaiguangai1108_T sf_13;        /* '<S17>/1#3' */
  DW_u1_kaiguangai1108_T sf_12;        /* '<S17>/1#2' */
  DW_u1_kaiguangai1108_T sf_11;        /* '<S17>/1#1' */
  DW_Chart_kaiguangai1108_T sf_Chart7; /* '<S16>/Chart7' */
  DW_Chart_kaiguangai1108_T sf_Chart6; /* '<S16>/Chart6' */
  DW_Chart_kaiguangai1108_T sf_Chart5; /* '<S16>/Chart5' */
  DW_Chart_kaiguangai1108_T sf_Chart4; /* '<S16>/Chart4' */
  DW_Chart_kaiguangai1108_T sf_Chart3; /* '<S16>/Chart3' */
  DW_Chart_kaiguangai1108_T sf_Chart2; /* '<S16>/Chart2' */
  DW_Chart_kaiguangai1108_T sf_Chart1_b;/* '<S16>/Chart1' */
  DW_Chart_kaiguangai1108_T sf_Chart_o;/* '<S16>/Chart' */
} DW_kaiguangai1108_T;

/* Backward compatible GRT Identifiers */
#define rtB                            kaiguangai1108_B
#define BlockIO                        B_kaiguangai1108_T
#define rtP                            kaiguangai1108_P
#define Parameters                     P_kaiguangai1108_T
#define rtDWork                        kaiguangai1108_DW
#define D_Work                         DW_kaiguangai1108_T

/* Parameters (auto storage) */
struct P_kaiguangai1108_T_ {
  real_T yajin_Value;                  /* Expression: 0
                                        * Referenced by: '<S7>/yajin'
                                        */
  real_T Constant19_Value;             /* Expression: 0
                                        * Referenced by: '<S34>/Constant19'
                                        */
  real_T guangai_Value;                /* Expression: 0
                                        * Referenced by: '<S7>/guangai'
                                        */
  real_T Constant18_Value;             /* Expression: 0
                                        * Referenced by: '<S34>/Constant18'
                                        */
  real_T jiesuo_Value;                 /* Expression: 0
                                        * Referenced by: '<S7>/jiesuo'
                                        */
  real_T Constant17_Value;             /* Expression: 0
                                        * Referenced by: '<S34>/Constant17'
                                        */
  real_T suoding_Value;                /* Expression: 0
                                        * Referenced by: '<S7>/suoding'
                                        */
  real_T Constant13_Value;             /* Expression: 0
                                        * Referenced by: '<S34>/Constant13'
                                        */
  real_T kaigai_Value;                 /* Expression: 0
                                        * Referenced by: '<S7>/kaigai'
                                        */
  real_T Constant16_Value;             /* Expression: 0
                                        * Referenced by: '<S34>/Constant16'
                                        */
  real_T songkai_Value;                /* Expression: 0
                                        * Referenced by: '<S7>/songkai'
                                        */
  real_T Constant12_Value;             /* Expression: 0
                                        * Referenced by: '<S34>/Constant12'
                                        */
  real_T yajin_Value_a;                /* Expression: 0
                                        * Referenced by: '<S8>/yajin'
                                        */
  real_T Constant19_Value_f;           /* Expression: 0
                                        * Referenced by: '<S35>/Constant19'
                                        */
  real_T guangai_Value_b;              /* Expression: 0
                                        * Referenced by: '<S8>/guangai'
                                        */
  real_T Constant18_Value_e;           /* Expression: 0
                                        * Referenced by: '<S35>/Constant18'
                                        */
  real_T jiesuo_Value_m;               /* Expression: 0
                                        * Referenced by: '<S8>/jiesuo'
                                        */
  real_T Constant17_Value_e;           /* Expression: 0
                                        * Referenced by: '<S35>/Constant17'
                                        */
  real_T suoding_Value_b;              /* Expression: 0
                                        * Referenced by: '<S8>/suoding'
                                        */
  real_T Constant13_Value_j;           /* Expression: 0
                                        * Referenced by: '<S35>/Constant13'
                                        */
  real_T kaigai_Value_n;               /* Expression: 0
                                        * Referenced by: '<S8>/kaigai'
                                        */
  real_T Constant16_Value_o;           /* Expression: 0
                                        * Referenced by: '<S35>/Constant16'
                                        */
  real_T songkai_Value_d;              /* Expression: 0
                                        * Referenced by: '<S8>/songkai'
                                        */
  real_T Constant12_Value_b;           /* Expression: 0
                                        * Referenced by: '<S35>/Constant12'
                                        */
  real_T tiaoshi_Value;                /* Expression: 0
                                        * Referenced by: '<Root>/tiaoshi'
                                        */
  real_T u_X0;                         /* Expression: 0
                                        * Referenced by: '<S35>/2'
                                        */
  real_T u_X0_f;                       /* Expression: 0
                                        * Referenced by: '<S35>/3'
                                        */
  real_T u_X0_a;                       /* Expression: 0
                                        * Referenced by: '<S35>/4'
                                        */
  real_T u_X0_n;                       /* Expression: 0
                                        * Referenced by: '<S35>/5'
                                        */
  real_T u_X0_j;                       /* Expression: 0
                                        * Referenced by: '<S35>/6'
                                        */
  real_T u_X0_p;                       /* Expression: 0
                                        * Referenced by: '<S35>/1'
                                        */
  real_T s1_Value;                     /* Expression: 1
                                        * Referenced by: '<S8>/s1'
                                        */
  real_T s2_Value;                     /* Expression: 0
                                        * Referenced by: '<S8>/s2'
                                        */
  real_T s3_Value;                     /* Expression: 0
                                        * Referenced by: '<S8>/s3'
                                        */
  real_T s4_Value;                     /* Expression: 0
                                        * Referenced by: '<S8>/s4'
                                        */
  real_T s5_Value;                     /* Expression: 0
                                        * Referenced by: '<S8>/s5'
                                        */
  real_T s6_Value;                     /* Expression: 0
                                        * Referenced by: '<S8>/s6'
                                        */
  real_T s7_Value;                     /* Expression: 0
                                        * Referenced by: '<S8>/s7'
                                        */
  real_T s8_Value;                     /* Expression: 0
                                        * Referenced by: '<S8>/s8'
                                        */
  real_T jieshu_Value;                 /* Expression: 0
                                        * Referenced by: '<Root>/jieshu'
                                        */
  real_T Switch3_Threshold;            /* Expression: 0.5
                                        * Referenced by: '<Root>/Switch3'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T PCI1_P1_Size[2];              /* Computed Parameter: PCI1_P1_Size
                                        * Referenced by: '<S1>/PCI1'
                                        */
  real_T PCI1_P1[2];                   /* Expression: [SampleTime SampleOffset]
                                        * Referenced by: '<S1>/PCI1'
                                        */
  real_T PCI1_P2_Size[2];              /* Computed Parameter: PCI1_P2_Size
                                        * Referenced by: '<S1>/PCI1'
                                        */
  real_T PCI1_P2[2];                   /* Expression: SLOT
                                        * Referenced by: '<S1>/PCI1'
                                        */
  real_T memory1_X0;                   /* Expression: 0
                                        * Referenced by: '<Root>/memory1'
                                        */
  real_T PCI2_P1_Size[2];              /* Computed Parameter: PCI2_P1_Size
                                        * Referenced by: '<S1>/PCI2'
                                        */
  real_T PCI2_P1[2];                   /* Expression: [SampleTime SampleOffset]
                                        * Referenced by: '<S1>/PCI2'
                                        */
  real_T PCI2_P2_Size[2];              /* Computed Parameter: PCI2_P2_Size
                                        * Referenced by: '<S1>/PCI2'
                                        */
  real_T PCI2_P2[2];                   /* Expression: SLOT
                                        * Referenced by: '<S1>/PCI2'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S1>/Constant1'
                                        */
  real_T PCI3_P1_Size[2];              /* Computed Parameter: PCI3_P1_Size
                                        * Referenced by: '<S1>/PCI3'
                                        */
  real_T PCI3_P1[2];                   /* Expression: [SampleTime SampleOffset]
                                        * Referenced by: '<S1>/PCI3'
                                        */
  real_T PCI3_P2_Size[2];              /* Computed Parameter: PCI3_P2_Size
                                        * Referenced by: '<S1>/PCI3'
                                        */
  real_T PCI3_P2[2];                   /* Expression: SLOT
                                        * Referenced by: '<S1>/PCI3'
                                        */
  real_T Switch_Value;                 /* Expression: 1
                                        * Referenced by: '<Root>/Switch'
                                        */
  real_T qiehuan_Value;                /* Expression: 0
                                        * Referenced by: '<Root>/qiehuan'
                                        */
  real_T start_Value;                  /* Expression: 1
                                        * Referenced by: '<Root>/start'
                                        */
  real_T t1_Value;                     /* Expression: 0
                                        * Referenced by: '<S11>/t1'
                                        */
  real_T t3_Value;                     /* Expression: 0
                                        * Referenced by: '<S11>/t3'
                                        */
  real_T t5_Value;                     /* Expression: 0
                                        * Referenced by: '<S11>/t5'
                                        */
  real_T t7_Value;                     /* Expression: 0
                                        * Referenced by: '<S11>/t7'
                                        */
  real_T t9_Value;                     /* Expression: 0
                                        * Referenced by: '<S11>/t9'
                                        */
  real_T t11_Value;                    /* Expression: 0
                                        * Referenced by: '<S11>/t11'
                                        */
  real_T zidong_shedingcishu_Value;    /* Expression: 1
                                        * Referenced by: '<Root>/zidong_shedingcishu'
                                        */
  real_T jinggai1_Value;               /* Expression: 1
                                        * Referenced by: '<S15>/jinggai1'
                                        */
  real_T jinggai2_Value;               /* Expression: 0
                                        * Referenced by: '<S15>/jinggai2'
                                        */
  real_T jinggai3_Value;               /* Expression: 0
                                        * Referenced by: '<S15>/jinggai3'
                                        */
  real_T jinggai4_Value;               /* Expression: 0
                                        * Referenced by: '<S15>/jinggai4'
                                        */
  real_T jinggai5_Value;               /* Expression: 0
                                        * Referenced by: '<S15>/jinggai5'
                                        */
  real_T jinggai6_Value;               /* Expression: 0
                                        * Referenced by: '<S15>/jinggai6'
                                        */
  real_T jinggai7_Value;               /* Expression: 0
                                        * Referenced by: '<S15>/jinggai7'
                                        */
  real_T jinggai8_Value;               /* Expression: 0
                                        * Referenced by: '<S15>/jinggai8'
                                        */
  real_T u_X0_g;                       /* Expression: 0
                                        * Referenced by: '<S34>/2'
                                        */
  real_T u_X0_o;                       /* Expression: 0
                                        * Referenced by: '<S34>/3'
                                        */
  real_T u_X0_h;                       /* Expression: 0
                                        * Referenced by: '<S34>/4'
                                        */
  real_T u_X0_i;                       /* Expression: 0
                                        * Referenced by: '<S34>/5'
                                        */
  real_T u_X0_i1;                      /* Expression: 0
                                        * Referenced by: '<S34>/6'
                                        */
  real_T u_X0_im;                      /* Expression: 0
                                        * Referenced by: '<S34>/1'
                                        */
  real_T s1_Value_d;                   /* Expression: 0
                                        * Referenced by: '<S7>/s1'
                                        */
  real_T s2_Value_o;                   /* Expression: 0
                                        * Referenced by: '<S7>/s2'
                                        */
  real_T s3_Value_d;                   /* Expression: 0
                                        * Referenced by: '<S7>/s3'
                                        */
  real_T s4_Value_n;                   /* Expression: 0
                                        * Referenced by: '<S7>/s4'
                                        */
  real_T s5_Value_j;                   /* Expression: 0
                                        * Referenced by: '<S7>/s5'
                                        */
  real_T s6_Value_i;                   /* Expression: 0
                                        * Referenced by: '<S7>/s6'
                                        */
  real_T s7_Value_m;                   /* Expression: 0
                                        * Referenced by: '<S7>/s7'
                                        */
  real_T s8_Value_p;                   /* Expression: 0
                                        * Referenced by: '<S7>/s8'
                                        */
  real_T Switch1_Value;                /* Expression: 1
                                        * Referenced by: '<Root>/Switch1'
                                        */
  real_T Switch2_Value;                /* Expression: 1
                                        * Referenced by: '<Root>/Switch2'
                                        */
  boolean_T songkaihuanxiang_Y0;       /* Computed Parameter: songkaihuanxiang_Y0
                                        * Referenced by: '<S16>/songkaihuanxiang'
                                        */
  boolean_T kaigaihuanxiang_Y0;        /* Computed Parameter: kaigaihuanxiang_Y0
                                        * Referenced by: '<S16>/kaigaihuanxiang'
                                        */
  boolean_T yajinhuanxiang_Y0;         /* Computed Parameter: yajinhuanxiang_Y0
                                        * Referenced by: '<S16>/yajinhuanxiang'
                                        */
  boolean_T guangaihuanxiang_Y0;       /* Computed Parameter: guangaihuanxiang_Y0
                                        * Referenced by: '<S16>/guangaihuanxiang'
                                        */
  boolean_T sdyichangxinhao_Y0;        /* Computed Parameter: sdyichangxinhao_Y0
                                        * Referenced by: '<S16>/sdyichangxinhao'
                                        */
  boolean_T songkaihuanxiang_Y0_m;     /* Computed Parameter: songkaihuanxiang_Y0_m
                                        * Referenced by: '<S17>/songkaihuanxiang'
                                        */
  boolean_T kaigaihuanxiang_Y0_d;      /* Computed Parameter: kaigaihuanxiang_Y0_d
                                        * Referenced by: '<S17>/kaigaihuanxiang'
                                        */
  boolean_T yajinhuanxiang_Y0_k;       /* Computed Parameter: yajinhuanxiang_Y0_k
                                        * Referenced by: '<S17>/yajinhuanxiang'
                                        */
  boolean_T guangaihuanxiang_Y0_l;     /* Computed Parameter: guangaihuanxiang_Y0_l
                                        * Referenced by: '<S17>/guangaihuanxiang'
                                        */
  boolean_T zdyichangxinhao_Y0;        /* Computed Parameter: zdyichangxinhao_Y0
                                        * Referenced by: '<S17>/zdyichangxinhao'
                                        */
  boolean_T tiaoshi_huanxiangxinhao_Y0;/* Computed Parameter: tiaoshi_huanxiangxinhao_Y0
                                        * Referenced by: '<S9>/tiaoshi_huanxiangxinhao'
                                        */
  boolean_T memory_X0;                 /* Computed Parameter: memory_X0
                                        * Referenced by: '<Root>/memory'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_kaiguangai1108_T {
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
    time_T *taskTimePtrs[1];
    SimStruct childSFunctions[3];
    SimStruct *childSFunctionPtrs[3];
    struct _ssBlkInfo2 blkInfo2[3];
    struct _ssSFcnModelMethods2 methods2[3];
    struct _ssSFcnModelMethods3 methods3[3];
    struct _ssSFcnModelMethods4 methods4[3];
    struct _ssStatesInfo2 statesInfo2[3];
    ssPeriodicStatesInfo periodicStatesInfo[3];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[32];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      real_T const *UPtrs2[1];
      real_T const *UPtrs3[1];
      real_T const *UPtrs4[1];
      real_T const *UPtrs5[1];
      real_T const *UPtrs6[1];
      real_T const *UPtrs7[1];
      real_T const *UPtrs8[1];
      real_T const *UPtrs9[1];
      real_T const *UPtrs10[1];
      real_T const *UPtrs11[1];
      real_T const *UPtrs12[1];
      real_T const *UPtrs13[1];
      real_T const *UPtrs14[1];
      real_T const *UPtrs15[1];
      real_T const *UPtrs16[1];
      real_T const *UPtrs17[1];
      real_T const *UPtrs18[1];
      real_T const *UPtrs19[1];
      real_T const *UPtrs20[1];
      real_T const *UPtrs21[1];
      real_T const *UPtrs22[1];
      real_T const *UPtrs23[1];
      real_T const *UPtrs24[1];
      real_T const *UPtrs25[1];
      real_T const *UPtrs26[1];
      real_T const *UPtrs27[1];
      real_T const *UPtrs28[1];
      real_T const *UPtrs29[1];
      real_T const *UPtrs30[1];
      real_T const *UPtrs31[1];
      struct _ssPortOutputs outputPortInfo[2];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn0;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[32];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      real_T const *UPtrs2[1];
      real_T const *UPtrs3[1];
      real_T const *UPtrs4[1];
      real_T const *UPtrs5[1];
      real_T const *UPtrs6[1];
      real_T const *UPtrs7[1];
      real_T const *UPtrs8[1];
      real_T const *UPtrs9[1];
      real_T const *UPtrs10[1];
      real_T const *UPtrs11[1];
      real_T const *UPtrs12[1];
      real_T const *UPtrs13[1];
      real_T const *UPtrs14[1];
      real_T const *UPtrs15[1];
      real_T const *UPtrs16[1];
      real_T const *UPtrs17[1];
      real_T const *UPtrs18[1];
      real_T const *UPtrs19[1];
      real_T const *UPtrs20[1];
      real_T const *UPtrs21[1];
      real_T const *UPtrs22[1];
      real_T const *UPtrs23[1];
      real_T const *UPtrs24[1];
      real_T const *UPtrs25[1];
      real_T const *UPtrs26[1];
      real_T const *UPtrs27[1];
      real_T const *UPtrs28[1];
      real_T const *UPtrs29[1];
      real_T const *UPtrs30[1];
      real_T const *UPtrs31[1];
      struct _ssPortOutputs outputPortInfo[2];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn1;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[32];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      real_T const *UPtrs2[1];
      real_T const *UPtrs3[1];
      real_T const *UPtrs4[1];
      real_T const *UPtrs5[1];
      real_T const *UPtrs6[1];
      real_T const *UPtrs7[1];
      real_T const *UPtrs8[1];
      real_T const *UPtrs9[1];
      real_T const *UPtrs10[1];
      real_T const *UPtrs11[1];
      real_T const *UPtrs12[1];
      real_T const *UPtrs13[1];
      real_T const *UPtrs14[1];
      real_T const *UPtrs15[1];
      real_T const *UPtrs16[1];
      real_T const *UPtrs17[1];
      real_T const *UPtrs18[1];
      real_T const *UPtrs19[1];
      real_T const *UPtrs20[1];
      real_T const *UPtrs21[1];
      real_T const *UPtrs22[1];
      real_T const *UPtrs23[1];
      real_T const *UPtrs24[1];
      real_T const *UPtrs25[1];
      real_T const *UPtrs26[1];
      real_T const *UPtrs27[1];
      real_T const *UPtrs28[1];
      real_T const *UPtrs29[1];
      real_T const *UPtrs30[1];
      real_T const *UPtrs31[1];
      struct _ssPortOutputs outputPortInfo[2];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn2;
  } NonInlinedSFcns;

  void *blockIO;
  const void *constBlockIO;
  void *defaultParam;
  ZCSigState *prevZCSigState;
  real_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  void *zcSignalValues;
  void *inputs;
  void *outputs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T blkStateChange;
  void *dwork;

  /*
   * DataMapInfo:
   * The following substructure contains information regarding
   * structures generated in the model's C API.
   */
  struct {
    rtwCAPI_ModelMappingInfo mmi;
  } DataMapInfo;

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
    int_T numPeriodicContStates;
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
};

/* Block parameters (auto storage) */
extern P_kaiguangai1108_T kaiguangai1108_P;

/* Block signals (auto storage) */
extern B_kaiguangai1108_T kaiguangai1108_B;

/* Block states (auto storage) */
extern DW_kaiguangai1108_T kaiguangai1108_DW;

/*====================*
 * External functions *
 *====================*/
extern kaiguangai1108_rtModel *kaiguangai1108(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  kaiguangai1108_GetCAPIStaticMap(void);

/* Real-time Model object */
extern RT_MODEL_kaiguangai1108_T *const kaiguangai1108_M;

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
 * '<Root>' : 'kaiguangai1108'
 * '<S1>'   : 'kaiguangai1108/PCI-1756'
 * '<S2>'   : 'kaiguangai1108/Scope '
 * '<S3>'   : 'kaiguangai1108/Scope (xPC) 1'
 * '<S4>'   : 'kaiguangai1108/Scope (xPC) 2'
 * '<S5>'   : 'kaiguangai1108/Scope (xPC) 3'
 * '<S6>'   : 'kaiguangai1108/Subsystem1'
 * '<S7>'   : 'kaiguangai1108/shoudongcaozuo'
 * '<S8>'   : 'kaiguangai1108/tiaoshidongzuo'
 * '<S9>'   : 'kaiguangai1108/tiaoshimoshi'
 * '<S10>'  : 'kaiguangai1108/xinhaofenzu'
 * '<S11>'  : 'kaiguangai1108/zidong_jiangeshijian'
 * '<S12>'  : 'kaiguangai1108/Subsystem1/Chart'
 * '<S13>'  : 'kaiguangai1108/Subsystem1/Chart1'
 * '<S14>'  : 'kaiguangai1108/Subsystem1/Scope (xPC) 1'
 * '<S15>'  : 'kaiguangai1108/Subsystem1/jinggaixuanze'
 * '<S16>'  : 'kaiguangai1108/Subsystem1/shoudong'
 * '<S17>'  : 'kaiguangai1108/Subsystem1/zidong'
 * '<S18>'  : 'kaiguangai1108/Subsystem1/shoudong/Chart'
 * '<S19>'  : 'kaiguangai1108/Subsystem1/shoudong/Chart1'
 * '<S20>'  : 'kaiguangai1108/Subsystem1/shoudong/Chart2'
 * '<S21>'  : 'kaiguangai1108/Subsystem1/shoudong/Chart3'
 * '<S22>'  : 'kaiguangai1108/Subsystem1/shoudong/Chart4'
 * '<S23>'  : 'kaiguangai1108/Subsystem1/shoudong/Chart5'
 * '<S24>'  : 'kaiguangai1108/Subsystem1/shoudong/Chart6'
 * '<S25>'  : 'kaiguangai1108/Subsystem1/shoudong/Chart7'
 * '<S26>'  : 'kaiguangai1108/Subsystem1/zidong/1#'
 * '<S27>'  : 'kaiguangai1108/Subsystem1/zidong/1#1'
 * '<S28>'  : 'kaiguangai1108/Subsystem1/zidong/1#2'
 * '<S29>'  : 'kaiguangai1108/Subsystem1/zidong/1#3'
 * '<S30>'  : 'kaiguangai1108/Subsystem1/zidong/1#4'
 * '<S31>'  : 'kaiguangai1108/Subsystem1/zidong/1#5'
 * '<S32>'  : 'kaiguangai1108/Subsystem1/zidong/1#6'
 * '<S33>'  : 'kaiguangai1108/Subsystem1/zidong/1#7'
 * '<S34>'  : 'kaiguangai1108/shoudongcaozuo/husuo'
 * '<S35>'  : 'kaiguangai1108/tiaoshidongzuo/husuo'
 * '<S36>'  : 'kaiguangai1108/tiaoshimoshi/jinjichuli'
 * '<S37>'  : 'kaiguangai1108/tiaoshimoshi/jinjichuli1'
 * '<S38>'  : 'kaiguangai1108/tiaoshimoshi/jinjichuli2'
 * '<S39>'  : 'kaiguangai1108/tiaoshimoshi/jinjichuli3'
 * '<S40>'  : 'kaiguangai1108/tiaoshimoshi/jinjichuli4'
 * '<S41>'  : 'kaiguangai1108/tiaoshimoshi/jinjichuli5'
 * '<S42>'  : 'kaiguangai1108/tiaoshimoshi/jinjichuli6'
 * '<S43>'  : 'kaiguangai1108/tiaoshimoshi/jinjichuli7'
 */
#endif                                 /* RTW_HEADER_kaiguangai1108_h_ */
