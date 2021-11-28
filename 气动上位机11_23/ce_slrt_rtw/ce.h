/*
 * ce.h
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

#ifndef RTW_HEADER_ce_h_
#define RTW_HEADER_ce_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef ce_COMMON_INCLUDES_
# define ce_COMMON_INCLUDES_
#include <xpcdatatypes.h>
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_logging.h"
#include "xpcimports.h"
#endif                                 /* ce_COMMON_INCLUDES_ */

#include "ce_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include "rt_zcfcn.h"
#include "rt_look.h"
#include "rt_look1d.h"
#include "rt_defines.h"

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
# define rtmGetIntgData(rtm)           ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ((rtm)->intgData = (val))
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
# define rtmGetOdeF(rtm)               ((rtm)->odeF)
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ((rtm)->odeF = (val))
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ((rtm)->odeY)
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ((rtm)->odeY = (val))
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
# define rtmIsContinuousTask(rtm, tid) ((tid) == 0)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmIsSampleHit
# define rtmIsSampleHit(rtm, sti, tid) ((rtmIsMajorTimeStep((rtm)) && (rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]]))
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
#define rtModel_ce                     RT_MODEL_ce_T

/* Definition for use in the target main file */
#define ce_rtModel                     RT_MODEL_ce_T

/* user code (top of export header file) */
#include "xpcdatatypes.h"

/* Block signals (auto storage) */
typedef struct {
  real_T PCI1[16];                     /* '<Root>/PCI-1' */
  real_T PCI2[16];                     /* '<Root>/PCI-2' */
  real_T zidong;                       /* '<Root>/zidong' */
  real_T shoudong;                     /* '<Root>/shoudong' */
  real_T start;                        /* '<Root>/start' */
  real_T jt;                           /* '<Root>/jt' */
  real_T fby;                          /* '<Root>/fby' */
  real_T by;                           /* '<Root>/by' */
  real_T fqyc;                         /* '<Root>/fqyc' */
  real_T bdqy;                         /* '<Root>/bdqy' */
  real_T fq;                           /* '<Root>/fq' */
  real_T rqfq;                         /* '<Root>/rqfq' */
  real_T qfq;                          /* '<Root>/qfq' */
  real_T Memory;                       /* '<Root>/Memory' */
  real_T AnalogFilterDesign2;          /* '<Root>/Analog Filter Design2' */
  real_T rqyl1;                        /* '<Root>/rqyl1' */
  real_T AnalogFilterDesign4;          /* '<Root>/Analog Filter Design4' */
  real_T rqyl2;                        /* '<Root>/rqyl2' */
  real_T Switch;                       /* '<Root>/Switch' */
  real_T rqyl3;                        /* '<Root>/rqyl3' */
  real_T qffk;                         /* '<Root>/qffk' */
  real_T fby_qfkk;                     /* '<Root>/fby_qfkk' */
  real_T exp_ready;                    /* '<Root>/exp_ready' */
  real_T AnalogFilterDesign6;          /* '<Root>/Analog Filter Design6' */
  real_T biaoding4;                    /* '<Root>/biaoding4' */
  real_T ut1;                          /* '<Root>/5t1' */
  real_T AnalogFilterDesign5;          /* '<Root>/Analog Filter Design5' */
  real_T biaoding5;                    /* '<Root>/biaoding5' */
  real_T wy1;                          /* '<Root>/wy1' */
  real_T DataTypeConversion[16];       /* '<Root>/Data Type Conversion' */
  real_T biaoding6;                    /* '<Root>/biaoding6' */
  real_T yihuai_gensui11biandong;      /* '<Root>/yihuai_gensui11biandong' */
  real_T biaoding7;                    /* '<Root>/biaoding7' */
  real_T wy2;                          /* '<Root>/wy2' */
  real_T biaoding8;                    /* '<Root>/biaoding8' */
  real_T ut2;                          /* '<Root>/5t2' */
  real_T biaoding9;                    /* '<Root>/biaoding9' */
  real_T u50t1;                        /* '<Root>/150t1' */
  real_T biaoding11;                   /* '<Root>/biaoding11' */
  real_T u50t2;                        /* '<Root>/150t2' */
  real_T AnalogFilterDesign7;          /* '<Root>/Analog Filter Design7' */
  real_T Gain2;                        /* '<Root>/Gain2' */
  real_T s2;                           /* '<Root>/s2' */
  real_T AnalogFilterDesign9;          /* '<Root>/Analog Filter Design9' */
  real_T Gain;                         /* '<Root>/Gain' */
  real_T AnalogFilterDesign8;          /* '<Root>/Analog Filter Design8' */
  real_T Gain3;                        /* '<Root>/Gain3' */
  real_T AnalogFilterDesign10;         /* '<Root>/Analog Filter Design10' */
  real_T Gain1;                        /* '<Root>/Gain1' */
  real_T Sum;                          /* '<S2>/Sum' */
  real_T t0_5t1;                       /* '<Root>/t0_5t1' */
  real_T Sum1;                         /* '<S2>/Sum1' */
  real_T t0_5t2;                       /* '<Root>/t0_5t2' */
  real_T Sum2;                         /* '<S2>/Sum2' */
  real_T t0_150t1;                     /* '<Root>/t0_150t1' */
  real_T Sum3;                         /* '<S2>/Sum3' */
  real_T t0_150t2;                     /* '<Root>/t0_150t2' */
  real_T Sum4;                         /* '<S2>/Sum4' */
  real_T t0_wy1;                       /* '<Root>/t0_wy1' */
  real_T Sum5;                         /* '<S2>/Sum5' */
  real_T t0_wy2;                       /* '<Root>/t0_wy2' */
  real_T Sum9;                         /* '<S2>/Sum9' */
  real_T t0_s1;                        /* '<Root>/t0_s1' */
  real_T Sum8;                         /* '<S2>/Sum8' */
  real_T t0_s2;                        /* '<Root>/t0_s2' */
  real_T Sum7;                         /* '<S2>/Sum7' */
  real_T t0_s3;                        /* '<Root>/t0_s3' */
  real_T Sum6;                         /* '<S2>/Sum6' */
  real_T t0_s4;                        /* '<Root>/t0_s4' */
  real_T s3;                           /* '<Root>/s3' */
  real_T s1;                           /* '<Root>/s1' */
  real_T s4;                           /* '<Root>/s4' */
  real_T Switch6;                      /* '<S5>/Switch6' */
  real_T Switch7;                      /* '<S5>/Switch7' */
  real_T Sum_e;                        /* '<S4>/Sum' */
  real_T Switch_n;                     /* '<S8>/Switch' */
  real_T Integrator;                   /* '<S8>/Integrator' */
  real_T Derivative;                   /* '<S8>/Derivative' */
  real_T Switch1;                      /* '<Root>/Switch1' */
  real_T Switch5;                      /* '<S5>/Switch5' */
  real_T Switch8;                      /* '<S5>/Switch8' */
  real_T AnalogFilterDesign3;          /* '<Root>/Analog Filter Design3' */
  real_T qyyl;                         /* '<Root>/qyyl' */
  real_T AnalogFilterDesign1;          /* '<Root>/Analog Filter Design1' */
  real_T jyf;                          /* '<Root>/jyf' */
  real_T Clock;                        /* '<S3>/Clock' */
  real_T Switch_p;                     /* '<S3>/Switch' */
  real_T biaoding1;                    /* '<Root>/biaoding1' */
  real_T biaoding10;                   /* '<Root>/biaoding10' */
  real_T biaoding2;                    /* '<Root>/biaoding2' */
  real_T biaoding3;                    /* '<Root>/biaoding3' */
  real_T Switch_a;                     /* '<S5>/Switch' */
  real_T Switch3;                      /* '<S5>/Switch3' */
  real_T Gain3_b;                      /* '<S5>/Gain3' */
  real_T Switch1_i;                    /* '<S5>/Switch1' */
  real_T Switch4;                      /* '<S5>/Switch4' */
  real_T Gain4;                        /* '<S5>/Gain4' */
  real_T Switch2;                      /* '<S5>/Switch2' */
  real_T Switch_m;                     /* '<S4>/Switch' */
  real_T Saturation;                   /* '<S4>/Saturation' */
  real_T Product2;                     /* '<S8>/Product2' */
  real_T Product;                      /* '<S8>/Product' */
  real_T Product1;                     /* '<S8>/Product1' */
  real_T Sum1_i;                       /* '<S8>/Sum1' */
  real_T Product3;                     /* '<S8>/Product3' */
  real_T In1;                          /* '<S7>/In1' */
  real_T Sum_j;                        /* '<S3>/Sum' */
  real_T In5t1;                        /* '<S6>/In-5t1' */
  real_T In5t2;                        /* '<S6>/In-5t2' */
  real_T In150t1;                      /* '<S6>/In-150t1' */
  real_T In150t2;                      /* '<S6>/In-150t2' */
  real_T Inwy1;                        /* '<S6>/In-wy1' */
  real_T Inwy2;                        /* '<S6>/In-wy2' */
  real_T Ins1;                         /* '<S6>/In-s1' */
  real_T Ins2;                         /* '<S6>/In-s2' */
  real_T Ins3;                         /* '<S6>/In-s3' */
  real_T Ins4;                         /* '<S6>/In-s4' */
  real_T dcf_1;                        /* '<Root>/Chart' */
  real_T dcf_2;                        /* '<Root>/Chart' */
  real_T kbhxz;                        /* '<Root>/Chart' */
  real_T fby_qfsd;                     /* '<Root>/Chart' */
  real_T qfkk;                         /* '<Root>/Chart' */
  real_T trigger;                      /* '<Root>/Chart' */
  boolean_T RelationalOperator;        /* '<S3>/Relational Operator' */
} B_ce_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T Memory_PreviousInput;         /* '<Root>/Memory' */
  real_T TimeStampA;                   /* '<S8>/Derivative' */
  real_T LastUAtTimeA;                 /* '<S8>/Derivative' */
  real_T TimeStampB;                   /* '<S8>/Derivative' */
  real_T LastUAtTimeB;                 /* '<S8>/Derivative' */
  int32_T sfEvent;                     /* '<Root>/Chart' */
  int_T PCI1_IWORK[3];                 /* '<Root>/PCI-1' */
  int_T PCI2_IWORK[3];                 /* '<Root>/PCI-2' */
  int_T PCI6208ADA_IWORK[3];           /* '<Root>/PCI-6208A DA ' */
  int8_T TriggeredSubsystem_SubsysRanBC;/* '<S2>/Triggered Subsystem' */
  int8_T EnabledSubsystem_SubsysRanBC; /* '<S3>/Enabled Subsystem' */
  uint8_T is_active_c3_ce;             /* '<Root>/Chart' */
  uint8_T is_c3_ce;                    /* '<Root>/Chart' */
  uint8_T is_fby;                      /* '<Root>/Chart' */
  uint8_T is_exp_fq;                   /* '<Root>/Chart' */
  uint8_T is_by;                       /* '<Root>/Chart' */
  uint8_T is_fqyc;                     /* '<Root>/Chart' */
} DW_ce_T;

/* Continuous states (auto storage) */
typedef struct {
  real_T AnalogFilterDesign2_CSTATE[8];/* '<Root>/Analog Filter Design2' */
  real_T AnalogFilterDesign4_CSTATE[8];/* '<Root>/Analog Filter Design4' */
  real_T AnalogFilterDesign6_CSTATE[8];/* '<Root>/Analog Filter Design6' */
  real_T AnalogFilterDesign5_CSTATE[8];/* '<Root>/Analog Filter Design5' */
  real_T AnalogFilterDesign7_CSTATE[8];/* '<Root>/Analog Filter Design7' */
  real_T AnalogFilterDesign9_CSTATE[8];/* '<Root>/Analog Filter Design9' */
  real_T AnalogFilterDesign8_CSTATE[8];/* '<Root>/Analog Filter Design8' */
  real_T AnalogFilterDesign10_CSTATE[8];/* '<Root>/Analog Filter Design10' */
  real_T Integrator_CSTATE;            /* '<S8>/Integrator' */
  real_T AnalogFilterDesign3_CSTATE[8];/* '<Root>/Analog Filter Design3' */
  real_T AnalogFilterDesign1_CSTATE[8];/* '<Root>/Analog Filter Design1' */
} X_ce_T;

/* State derivatives (auto storage) */
typedef struct {
  real_T AnalogFilterDesign2_CSTATE[8];/* '<Root>/Analog Filter Design2' */
  real_T AnalogFilterDesign4_CSTATE[8];/* '<Root>/Analog Filter Design4' */
  real_T AnalogFilterDesign6_CSTATE[8];/* '<Root>/Analog Filter Design6' */
  real_T AnalogFilterDesign5_CSTATE[8];/* '<Root>/Analog Filter Design5' */
  real_T AnalogFilterDesign7_CSTATE[8];/* '<Root>/Analog Filter Design7' */
  real_T AnalogFilterDesign9_CSTATE[8];/* '<Root>/Analog Filter Design9' */
  real_T AnalogFilterDesign8_CSTATE[8];/* '<Root>/Analog Filter Design8' */
  real_T AnalogFilterDesign10_CSTATE[8];/* '<Root>/Analog Filter Design10' */
  real_T Integrator_CSTATE;            /* '<S8>/Integrator' */
  real_T AnalogFilterDesign3_CSTATE[8];/* '<Root>/Analog Filter Design3' */
  real_T AnalogFilterDesign1_CSTATE[8];/* '<Root>/Analog Filter Design1' */
} XDot_ce_T;

/* State disabled  */
typedef struct {
  boolean_T AnalogFilterDesign2_CSTATE[8];/* '<Root>/Analog Filter Design2' */
  boolean_T AnalogFilterDesign4_CSTATE[8];/* '<Root>/Analog Filter Design4' */
  boolean_T AnalogFilterDesign6_CSTATE[8];/* '<Root>/Analog Filter Design6' */
  boolean_T AnalogFilterDesign5_CSTATE[8];/* '<Root>/Analog Filter Design5' */
  boolean_T AnalogFilterDesign7_CSTATE[8];/* '<Root>/Analog Filter Design7' */
  boolean_T AnalogFilterDesign9_CSTATE[8];/* '<Root>/Analog Filter Design9' */
  boolean_T AnalogFilterDesign8_CSTATE[8];/* '<Root>/Analog Filter Design8' */
  boolean_T AnalogFilterDesign10_CSTATE[8];/* '<Root>/Analog Filter Design10' */
  boolean_T Integrator_CSTATE;         /* '<S8>/Integrator' */
  boolean_T AnalogFilterDesign3_CSTATE[8];/* '<Root>/Analog Filter Design3' */
  boolean_T AnalogFilterDesign1_CSTATE[8];/* '<Root>/Analog Filter Design1' */
} XDis_ce_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState EnabledSubsystem_Trig_ZCE;/* '<S3>/Enabled Subsystem' */
  ZCSigState TriggeredSubsystem_Trig_ZCE;/* '<S2>/Triggered Subsystem' */
} PrevZCX_ce_T;

#ifndef ODE4_INTG
#define ODE4_INTG

/* ODE4 Integration Data */
typedef struct {
  real_T *y;                           /* output */
  real_T *f[4];                        /* derivatives */
} ODE4_IntgData;

#endif

/* Backward compatible GRT Identifiers */
#define rtB                            ce_B
#define BlockIO                        B_ce_T
#define rtX                            ce_X
#define ContinuousStates               X_ce_T
#define rtXdot                         ce_XDot
#define StateDerivatives               XDot_ce_T
#define tXdis                          ce_XDis
#define StateDisabled                  XDis_ce_T
#define rtP                            ce_P
#define Parameters                     P_ce_T
#define rtDWork                        ce_DW
#define D_Work                         DW_ce_T
#define rtPrevZCSigState               ce_PrevZCX
#define PrevZCSigStates                PrevZCX_ce_T

/* Parameters (auto storage) */
struct P_ce_T_ {
  real_T Out5t1_Y0;                    /* Computed Parameter: Out5t1_Y0
                                        * Referenced by: '<S6>/Out-5t1'
                                        */
  real_T Out5t2_Y0;                    /* Computed Parameter: Out5t2_Y0
                                        * Referenced by: '<S6>/Out-5t2'
                                        */
  real_T Out150t1_Y0;                  /* Computed Parameter: Out150t1_Y0
                                        * Referenced by: '<S6>/Out-150t1'
                                        */
  real_T Out150t2_Y0;                  /* Computed Parameter: Out150t2_Y0
                                        * Referenced by: '<S6>/Out-150t2'
                                        */
  real_T Outwy1_Y0;                    /* Computed Parameter: Outwy1_Y0
                                        * Referenced by: '<S6>/Out-wy1'
                                        */
  real_T Outwy2_Y0;                    /* Computed Parameter: Outwy2_Y0
                                        * Referenced by: '<S6>/Out-wy2'
                                        */
  real_T Outs1_Y0;                     /* Computed Parameter: Outs1_Y0
                                        * Referenced by: '<S6>/Out-s1'
                                        */
  real_T Outs2_Y0;                     /* Computed Parameter: Outs2_Y0
                                        * Referenced by: '<S6>/Out-s2'
                                        */
  real_T Outs3_Y0;                     /* Computed Parameter: Outs3_Y0
                                        * Referenced by: '<S6>/Out-s3'
                                        */
  real_T Outs4_Y0;                     /* Computed Parameter: Outs4_Y0
                                        * Referenced by: '<S6>/Out-s4'
                                        */
  real_T Out1_Y0;                      /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S7>/Out1'
                                        */
  real_T Switch_Threshold;             /* Expression: 0
                                        * Referenced by: '<S4>/Switch'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 5
                                        * Referenced by: '<S4>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 0
                                        * Referenced by: '<S4>/Saturation'
                                        */
  real_T Switch2_Threshold;            /* Expression: 0
                                        * Referenced by: '<S5>/Switch2'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S5>/Constant1'
                                        */
  real_T cns2_Value;                   /* Expression: 0
                                        * Referenced by: '<Root>/cns2'
                                        */
  real_T Gain4_Gain;                   /* Expression: 3
                                        * Referenced by: '<S5>/Gain4'
                                        */
  real_T Switch4_Threshold;            /* Expression: 0
                                        * Referenced by: '<S5>/Switch4'
                                        */
  real_T Switch1_Threshold;            /* Expression: 0
                                        * Referenced by: '<S5>/Switch1'
                                        */
  real_T Constant4_Value;              /* Expression: 0
                                        * Referenced by: '<S5>/Constant4'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S5>/Constant'
                                        */
  real_T cns1_Value;                   /* Expression: 0
                                        * Referenced by: '<Root>/cns1'
                                        */
  real_T Gain3_Gain;                   /* Expression: 3
                                        * Referenced by: '<S5>/Gain3'
                                        */
  real_T Switch3_Threshold;            /* Expression: 0
                                        * Referenced by: '<S5>/Switch3'
                                        */
  real_T Switch_Threshold_c;           /* Expression: 0
                                        * Referenced by: '<S5>/Switch'
                                        */
  real_T Constant3_Value;              /* Expression: 0
                                        * Referenced by: '<S5>/Constant3'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<S5>/Constant2'
                                        */
  real_T cns3_Value;                   /* Expression: 0
                                        * Referenced by: '<Root>/cns3'
                                        */
  real_T PCI1_P1_Size[2];              /* Computed Parameter: PCI1_P1_Size
                                        * Referenced by: '<Root>/PCI-1'
                                        */
  real_T PCI1_P1[2];                   /* Expression: [SampleTime SampleOffset]
                                        * Referenced by: '<Root>/PCI-1'
                                        */
  real_T PCI1_P2_Size[2];              /* Computed Parameter: PCI1_P2_Size
                                        * Referenced by: '<Root>/PCI-1'
                                        */
  real_T PCI1_P2[2];                   /* Expression: SLOT
                                        * Referenced by: '<Root>/PCI-1'
                                        */
  real_T PCI2_P1_Size[2];              /* Computed Parameter: PCI2_P1_Size
                                        * Referenced by: '<Root>/PCI-2'
                                        */
  real_T PCI2_P1[2];                   /* Expression: [SampleTime SampleOffset]
                                        * Referenced by: '<Root>/PCI-2'
                                        */
  real_T PCI2_P2_Size[2];              /* Computed Parameter: PCI2_P2_Size
                                        * Referenced by: '<Root>/PCI-2'
                                        */
  real_T PCI2_P2[2];                   /* Expression: SLOT
                                        * Referenced by: '<Root>/PCI-2'
                                        */
  real_T zidong_Value;                 /* Expression: 0
                                        * Referenced by: '<Root>/zidong'
                                        */
  real_T shoudong_Value;               /* Expression: 0
                                        * Referenced by: '<Root>/shoudong'
                                        */
  real_T start_Value;                  /* Expression: 0
                                        * Referenced by: '<Root>/start'
                                        */
  real_T jt_Value;                     /* Expression: 0
                                        * Referenced by: '<Root>/jt'
                                        */
  real_T fby_Value;                    /* Expression: 0
                                        * Referenced by: '<Root>/fby'
                                        */
  real_T by_Value;                     /* Expression: 0
                                        * Referenced by: '<Root>/by'
                                        */
  real_T fqyc_Value;                   /* Expression: 0
                                        * Referenced by: '<Root>/fqyc'
                                        */
  real_T bdqy_Value;                   /* Expression: 0
                                        * Referenced by: '<Root>/bdqy'
                                        */
  real_T fq_Value;                     /* Expression: 0
                                        * Referenced by: '<Root>/fq'
                                        */
  real_T rqfq_Value;                   /* Expression: 0
                                        * Referenced by: '<Root>/rqfq'
                                        */
  real_T qfq_Value;                    /* Expression: 0
                                        * Referenced by: '<Root>/qfq'
                                        */
  real_T Memory_X0;                    /* Expression: 0
                                        * Referenced by: '<Root>/Memory'
                                        */
  real_T AnalogFilterDesign2_A[15];    /* Computed Parameter: AnalogFilterDesign2_A
                                        * Referenced by: '<Root>/Analog Filter Design2'
                                        */
  real_T AnalogFilterDesign2_B;        /* Computed Parameter: AnalogFilterDesign2_B
                                        * Referenced by: '<Root>/Analog Filter Design2'
                                        */
  real_T AnalogFilterDesign2_C;        /* Computed Parameter: AnalogFilterDesign2_C
                                        * Referenced by: '<Root>/Analog Filter Design2'
                                        */
  real_T AnalogFilterDesign2_X0;       /* Expression: 0
                                        * Referenced by: '<Root>/Analog Filter Design2'
                                        */
  real_T AnalogFilterDesign4_A[15];    /* Computed Parameter: AnalogFilterDesign4_A
                                        * Referenced by: '<Root>/Analog Filter Design4'
                                        */
  real_T AnalogFilterDesign4_B;        /* Computed Parameter: AnalogFilterDesign4_B
                                        * Referenced by: '<Root>/Analog Filter Design4'
                                        */
  real_T AnalogFilterDesign4_C;        /* Computed Parameter: AnalogFilterDesign4_C
                                        * Referenced by: '<Root>/Analog Filter Design4'
                                        */
  real_T AnalogFilterDesign4_X0;       /* Expression: 0
                                        * Referenced by: '<Root>/Analog Filter Design4'
                                        */
  real_T Switch_Threshold_j;           /* Expression: -1.5
                                        * Referenced by: '<Root>/Switch'
                                        */
  real_T fby_qfkk_Value;               /* Expression: 0
                                        * Referenced by: '<Root>/fby_qfkk'
                                        */
  real_T exp_ready_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/exp_ready'
                                        */
  real_T AnalogFilterDesign6_A[15];    /* Computed Parameter: AnalogFilterDesign6_A
                                        * Referenced by: '<Root>/Analog Filter Design6'
                                        */
  real_T AnalogFilterDesign6_B;        /* Computed Parameter: AnalogFilterDesign6_B
                                        * Referenced by: '<Root>/Analog Filter Design6'
                                        */
  real_T AnalogFilterDesign6_C;        /* Computed Parameter: AnalogFilterDesign6_C
                                        * Referenced by: '<Root>/Analog Filter Design6'
                                        */
  real_T AnalogFilterDesign6_X0;       /* Expression: 0
                                        * Referenced by: '<Root>/Analog Filter Design6'
                                        */
  real_T biaoding4_XData[2];           /* Expression: [-0.16 10]
                                        * Referenced by: '<Root>/biaoding4'
                                        */
  real_T biaoding4_YData[2];           /* Expression: [0 5]
                                        * Referenced by: '<Root>/biaoding4'
                                        */
  real_T AnalogFilterDesign5_A[15];    /* Computed Parameter: AnalogFilterDesign5_A
                                        * Referenced by: '<Root>/Analog Filter Design5'
                                        */
  real_T AnalogFilterDesign5_B;        /* Computed Parameter: AnalogFilterDesign5_B
                                        * Referenced by: '<Root>/Analog Filter Design5'
                                        */
  real_T AnalogFilterDesign5_C;        /* Computed Parameter: AnalogFilterDesign5_C
                                        * Referenced by: '<Root>/Analog Filter Design5'
                                        */
  real_T AnalogFilterDesign5_X0;       /* Expression: 0
                                        * Referenced by: '<Root>/Analog Filter Design5'
                                        */
  real_T biaoding5_XData[2];           /* Expression: [-0.063 5]
                                        * Referenced by: '<Root>/biaoding5'
                                        */
  real_T biaoding5_YData[2];           /* Expression: [0 100]
                                        * Referenced by: '<Root>/biaoding5'
                                        */
  real_T biaoding6_XData[2];           /* Expression: [-0.052 5]
                                        * Referenced by: '<Root>/biaoding6'
                                        */
  real_T biaoding6_YData[2];           /* Expression: [0 100]
                                        * Referenced by: '<Root>/biaoding6'
                                        */
  real_T biaoding7_XData[2];           /* Expression: [-0.065 5]
                                        * Referenced by: '<Root>/biaoding7'
                                        */
  real_T biaoding7_YData[2];           /* Expression: [0 100]
                                        * Referenced by: '<Root>/biaoding7'
                                        */
  real_T biaoding8_XData[2];           /* Expression: [-0.002 10]
                                        * Referenced by: '<Root>/biaoding8'
                                        */
  real_T biaoding8_YData[2];           /* Expression: [0 5]
                                        * Referenced by: '<Root>/biaoding8'
                                        */
  real_T biaoding9_XData[2];           /* Expression: [0 10]
                                        * Referenced by: '<Root>/biaoding9'
                                        */
  real_T biaoding9_YData[2];           /* Expression: [0 150]
                                        * Referenced by: '<Root>/biaoding9'
                                        */
  real_T biaoding11_XData[2];          /* Expression: [0 10]
                                        * Referenced by: '<Root>/biaoding11'
                                        */
  real_T biaoding11_YData[2];          /* Expression: [0 150]
                                        * Referenced by: '<Root>/biaoding11'
                                        */
  real_T AnalogFilterDesign7_A[15];    /* Computed Parameter: AnalogFilterDesign7_A
                                        * Referenced by: '<Root>/Analog Filter Design7'
                                        */
  real_T AnalogFilterDesign7_B;        /* Computed Parameter: AnalogFilterDesign7_B
                                        * Referenced by: '<Root>/Analog Filter Design7'
                                        */
  real_T AnalogFilterDesign7_C;        /* Computed Parameter: AnalogFilterDesign7_C
                                        * Referenced by: '<Root>/Analog Filter Design7'
                                        */
  real_T AnalogFilterDesign7_X0;       /* Expression: 0
                                        * Referenced by: '<Root>/Analog Filter Design7'
                                        */
  real_T Gain2_Gain;                   /* Expression: 42.985
                                        * Referenced by: '<Root>/Gain2'
                                        */
  real_T AnalogFilterDesign9_A[15];    /* Computed Parameter: AnalogFilterDesign9_A
                                        * Referenced by: '<Root>/Analog Filter Design9'
                                        */
  real_T AnalogFilterDesign9_B;        /* Computed Parameter: AnalogFilterDesign9_B
                                        * Referenced by: '<Root>/Analog Filter Design9'
                                        */
  real_T AnalogFilterDesign9_C;        /* Computed Parameter: AnalogFilterDesign9_C
                                        * Referenced by: '<Root>/Analog Filter Design9'
                                        */
  real_T AnalogFilterDesign9_X0;       /* Expression: 0
                                        * Referenced by: '<Root>/Analog Filter Design9'
                                        */
  real_T Gain_Gain;                    /* Expression: 42.985
                                        * Referenced by: '<Root>/Gain'
                                        */
  real_T AnalogFilterDesign8_A[15];    /* Computed Parameter: AnalogFilterDesign8_A
                                        * Referenced by: '<Root>/Analog Filter Design8'
                                        */
  real_T AnalogFilterDesign8_B;        /* Computed Parameter: AnalogFilterDesign8_B
                                        * Referenced by: '<Root>/Analog Filter Design8'
                                        */
  real_T AnalogFilterDesign8_C;        /* Computed Parameter: AnalogFilterDesign8_C
                                        * Referenced by: '<Root>/Analog Filter Design8'
                                        */
  real_T AnalogFilterDesign8_X0;       /* Expression: 0
                                        * Referenced by: '<Root>/Analog Filter Design8'
                                        */
  real_T Gain3_Gain_c;                 /* Expression: -97.0874
                                        * Referenced by: '<Root>/Gain3'
                                        */
  real_T AnalogFilterDesign10_A[15];   /* Computed Parameter: AnalogFilterDesign10_A
                                        * Referenced by: '<Root>/Analog Filter Design10'
                                        */
  real_T AnalogFilterDesign10_B;       /* Computed Parameter: AnalogFilterDesign10_B
                                        * Referenced by: '<Root>/Analog Filter Design10'
                                        */
  real_T AnalogFilterDesign10_C;       /* Computed Parameter: AnalogFilterDesign10_C
                                        * Referenced by: '<Root>/Analog Filter Design10'
                                        */
  real_T AnalogFilterDesign10_X0;      /* Expression: 0
                                        * Referenced by: '<Root>/Analog Filter Design10'
                                        */
  real_T Gain1_Gain;                   /* Expression: 42.985
                                        * Referenced by: '<Root>/Gain1'
                                        */
  real_T t0_Value;                     /* Expression: 0
                                        * Referenced by: '<Root>/t0'
                                        */
  real_T Switch6_Threshold;            /* Expression: 0
                                        * Referenced by: '<S5>/Switch6'
                                        */
  real_T Switch7_Threshold;            /* Expression: 0
                                        * Referenced by: '<S5>/Switch7'
                                        */
  real_T Constant5_Value;              /* Expression: 0
                                        * Referenced by: '<S5>/Constant5'
                                        */
  real_T P_Value;                      /* Expression: 0
                                        * Referenced by: '<Root>/P'
                                        */
  real_T cns_Value;                    /* Expression: 0
                                        * Referenced by: '<Root>/cns'
                                        */
  real_T Constant_Value_e;             /* Expression: -1
                                        * Referenced by: '<S8>/Constant'
                                        */
  real_T Switch_Threshold_h;           /* Expression: 0
                                        * Referenced by: '<S8>/Switch'
                                        */
  real_T I_Value;                      /* Expression: 0
                                        * Referenced by: '<Root>/I'
                                        */
  real_T Integrator_IC;                /* Expression: 0
                                        * Referenced by: '<S8>/Integrator'
                                        */
  real_T D_Value;                      /* Expression: 0
                                        * Referenced by: '<Root>/D'
                                        */
  real_T Switch1_Threshold_o;          /* Expression: 0
                                        * Referenced by: '<Root>/Switch1'
                                        */
  real_T Switch5_Threshold;            /* Expression: 0
                                        * Referenced by: '<S5>/Switch5'
                                        */
  real_T Switch8_Threshold;            /* Expression: 0
                                        * Referenced by: '<S5>/Switch8'
                                        */
  real_T AnalogFilterDesign3_A[15];    /* Computed Parameter: AnalogFilterDesign3_A
                                        * Referenced by: '<Root>/Analog Filter Design3'
                                        */
  real_T AnalogFilterDesign3_B;        /* Computed Parameter: AnalogFilterDesign3_B
                                        * Referenced by: '<Root>/Analog Filter Design3'
                                        */
  real_T AnalogFilterDesign3_C;        /* Computed Parameter: AnalogFilterDesign3_C
                                        * Referenced by: '<Root>/Analog Filter Design3'
                                        */
  real_T AnalogFilterDesign3_X0;       /* Expression: 0
                                        * Referenced by: '<Root>/Analog Filter Design3'
                                        */
  real_T AnalogFilterDesign1_A[15];    /* Computed Parameter: AnalogFilterDesign1_A
                                        * Referenced by: '<Root>/Analog Filter Design1'
                                        */
  real_T AnalogFilterDesign1_B;        /* Computed Parameter: AnalogFilterDesign1_B
                                        * Referenced by: '<Root>/Analog Filter Design1'
                                        */
  real_T AnalogFilterDesign1_C;        /* Computed Parameter: AnalogFilterDesign1_C
                                        * Referenced by: '<Root>/Analog Filter Design1'
                                        */
  real_T AnalogFilterDesign1_X0;       /* Expression: 0
                                        * Referenced by: '<Root>/Analog Filter Design1'
                                        */
  real_T PCI6208ADA_P1_Size[2];        /* Computed Parameter: PCI6208ADA_P1_Size
                                        * Referenced by: '<Root>/PCI-6208A DA '
                                        */
  real_T PCI6208ADA_P1[8];             /* Expression: channel
                                        * Referenced by: '<Root>/PCI-6208A DA '
                                        */
  real_T PCI6208ADA_P2_Size[2];        /* Computed Parameter: PCI6208ADA_P2_Size
                                        * Referenced by: '<Root>/PCI-6208A DA '
                                        */
  real_T PCI6208ADA_P2;                /* Expression: range
                                        * Referenced by: '<Root>/PCI-6208A DA '
                                        */
  real_T PCI6208ADA_P3_Size[2];        /* Computed Parameter: PCI6208ADA_P3_Size
                                        * Referenced by: '<Root>/PCI-6208A DA '
                                        */
  real_T PCI6208ADA_P3;                /* Expression: sampletime
                                        * Referenced by: '<Root>/PCI-6208A DA '
                                        */
  real_T PCI6208ADA_P4_Size[2];        /* Computed Parameter: PCI6208ADA_P4_Size
                                        * Referenced by: '<Root>/PCI-6208A DA '
                                        */
  real_T PCI6208ADA_P4;                /* Expression: pcislot
                                        * Referenced by: '<Root>/PCI-6208A DA '
                                        */
  real_T PCI6208ADA_P5_Size[2];        /* Computed Parameter: PCI6208ADA_P5_Size
                                        * Referenced by: '<Root>/PCI-6208A DA '
                                        */
  real_T PCI6208ADA_P5[8];             /* Expression: reset
                                        * Referenced by: '<Root>/PCI-6208A DA '
                                        */
  real_T PCI6208ADA_P6_Size[2];        /* Computed Parameter: PCI6208ADA_P6_Size
                                        * Referenced by: '<Root>/PCI-6208A DA '
                                        */
  real_T PCI6208ADA_P6[8];             /* Expression: initval
                                        * Referenced by: '<Root>/PCI-6208A DA '
                                        */
  real_T Constant_Value_l;             /* Expression: 0
                                        * Referenced by: '<S3>/Constant'
                                        */
  real_T time_Value;                   /* Expression: 0
                                        * Referenced by: '<Root>/time'
                                        */
  real_T Switch_Threshold_hz;          /* Expression: 0
                                        * Referenced by: '<S3>/Switch'
                                        */
  real_T biaoding1_XData[2];           /* Expression: [0 5]
                                        * Referenced by: '<Root>/biaoding1'
                                        */
  real_T biaoding1_YData[2];           /* Expression: [0.01 2]
                                        * Referenced by: '<Root>/biaoding1'
                                        */
  real_T biaoding10_XData[2];          /* Expression: [0 5]
                                        * Referenced by: '<Root>/biaoding10'
                                        */
  real_T biaoding10_YData[2];          /* Expression: [0.01 2]
                                        * Referenced by: '<Root>/biaoding10'
                                        */
  real_T biaoding2_XData[2];           /* Expression: [0 5]
                                        * Referenced by: '<Root>/biaoding2'
                                        */
  real_T biaoding2_YData[2];           /* Expression: [0.01 2]
                                        * Referenced by: '<Root>/biaoding2'
                                        */
  real_T biaoding3_XData[2];           /* Expression: [0 5]
                                        * Referenced by: '<Root>/biaoding3'
                                        */
  real_T biaoding3_YData[2];           /* Expression: [0.01 2]
                                        * Referenced by: '<Root>/biaoding3'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_ce_T {
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
    time_T *taskTimePtrs[2];
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
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn1;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[8];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      real_T const *UPtrs2[1];
      real_T const *UPtrs3[1];
      real_T const *UPtrs4[1];
      real_T const *UPtrs5[1];
      real_T const *UPtrs6[1];
      real_T const *UPtrs7[1];
      uint_T attribs[6];
      mxArray *params[6];
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
  real_T odeY[81];
  real_T odeF[4][81];
  ODE4_IntgData intgData;
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
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
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
    time_T sampleTimesArray[2];
    time_T offsetTimesArray[2];
    int_T sampleTimeTaskIDArray[2];
    int_T sampleHitArray[2];
    int_T perTaskSampleHitsArray[4];
    time_T tArray[2];
  } Timing;
};

/* Block parameters (auto storage) */
extern P_ce_T ce_P;

/* Block signals (auto storage) */
extern B_ce_T ce_B;

/* Continuous states (auto storage) */
extern X_ce_T ce_X;

/* Block states (auto storage) */
extern DW_ce_T ce_DW;

/* External data declarations for dependent source files */
extern const real_T ce_RGND;           /* real_T ground */

/* Zero-crossing (trigger) state */
extern PrevZCX_ce_T ce_PrevZCX;

/* Model entry point functions */
extern void ce_initialize(void);
extern void ce_output(void);
extern void ce_update(void);
extern void ce_terminate(void);

/*====================*
 * External functions *
 *====================*/
extern ce_rtModel *ce(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  ce_GetCAPIStaticMap(void);

/* Real-time Model object */
extern RT_MODEL_ce_T *const ce_M;

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
 * '<Root>' : 'ce'
 * '<S1>'   : 'ce/Chart'
 * '<S2>'   : 'ce/Subsystem'
 * '<S3>'   : 'ce/Timedelay'
 * '<S4>'   : 'ce/kaibihuan'
 * '<S5>'   : 'ce/kaibihuan1'
 * '<S6>'   : 'ce/Subsystem/Triggered Subsystem'
 * '<S7>'   : 'ce/Timedelay/Enabled Subsystem'
 * '<S8>'   : 'ce/kaibihuan/Subsystem'
 */
#endif                                 /* RTW_HEADER_ce_h_ */
