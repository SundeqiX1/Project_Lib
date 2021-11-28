/*
 * gggg.h
 *
 * Code generation for model "gggg".
 *
 * Model version              : 1.108
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Wed May 26 00:09:20 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_gggg_h_
#define RTW_HEADER_gggg_h_
#include <stddef.h>
#include <string.h>
#include <math.h>
#include "rtw_modelmap.h"
#ifndef gggg_COMMON_INCLUDES_
# define gggg_COMMON_INCLUDES_
#include <xpcimports.h>
#include <xpcdatatypes.h>
#include <can_def.h>
#include <canlay2_mbx.h>
#include <xpcPCFunctions.h>
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_logging.h"
#include "xpcimports.h"
#include "canac2globalsx.h"
#endif                                 /* gggg_COMMON_INCLUDES_ */

#include "gggg_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"
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
#define rtModel_gggg                   RT_MODEL_gggg_T

/* Definition for use in the target main file */
#define gggg_rtModel                   RT_MODEL_gggg_T

/* user code (top of export header file) */
#include "xpcdatatypes.h"

/* Block signals for system '<S2>/DI' */
typedef struct {
  real_T result[8];                    /* '<S2>/DI' */
} B_DI_gggg_T;

/* Block signals for system '<S2>/Subsystem1' */
typedef struct {
  real_T Add;                          /* '<S8>/Add' */
} B_Subsystem1_gggg_T;

/* Block states (auto storage) for system '<S2>/Subsystem1' */
typedef struct {
  int8_T Subsystem1_SubsysRanBC;       /* '<S2>/Subsystem1' */
  boolean_T Subsystem1_MODE;           /* '<S2>/Subsystem1' */
} DW_Subsystem1_gggg_T;

/* Block signals for system '<S2>/V_S_1' */
typedef struct {
  real_T V;                            /* '<S2>/V_S_1' */
  real_T S;                            /* '<S2>/V_S_1' */
} B_V_S_1_gggg_T;

/* Block signals for system '<S2>/anti_v' */
typedef struct {
  real_T a;                            /* '<S2>/anti_v' */
  real_T b;                            /* '<S2>/anti_v' */
  real_T c;                            /* '<S2>/anti_v' */
  real_T d;                            /* '<S2>/anti_v' */
} B_anti_v_gggg_T;

/* Block signals (auto storage) */
typedef struct {
  real_T Memory;                       /* '<S3>/Memory' */
  real_T Memory2;                      /* '<S3>/Memory2' */
  real_T u;                            /* '<Root>/Ðý½ô1' */
  real_T Switch;                       /* '<S3>/Switch' */
  real_T receive2;                     /* '<S2>/receive2' */
  real_T receive3;                     /* '<S2>/receive3' */
  real_T u_k;                          /* '<Root>/Ô¤ÐýËÉ1' */
  real_T u_i;                          /* '<Root>/ÐýËÉ1' */
  real_T Product4;                     /* '<Root>/Product4' */
  real_T Memory1;                      /* '<S3>/Memory1' */
  real_T Switch2;                      /* '<S3>/Switch2' */
  real_T Product2;                     /* '<Root>/Product2' */
  real_T Switch1;                      /* '<S3>/Switch1' */
  real_T Product3;                     /* '<Root>/Product3' */
  real_T u_g;                          /* '<Root>/Add2' */
  real_T s1;                           /* '<S2>/s1' */
  real_T Gain3;                        /* '<S2>/Gain3' */
  real_T u_h;                          /* '<S2>/Gain4' */
  real_T Add1;                         /* '<S2>/Add1' */
  real_T Gain6;                        /* '<S2>/Gain6' */
  real_T s4;                           /* '<S2>/s4' */
  real_T Gain9;                        /* '<S2>/Gain9' */
  real_T u_n;                          /* '<S2>/Gain10' */
  real_T Add2;                         /* '<S2>/Add2' */
  real_T Gain11;                       /* '<S2>/Gain11' */
  real_T s3;                           /* '<S2>/s3' */
  real_T Gain;                         /* '<S2>/Gain' */
  real_T u_no;                         /* '<S2>/Gain2' */
  real_T s5;                           /* '<S2>/s5' */
  real_T Gain7;                        /* '<S2>/Gain7' */
  real_T u_j;                          /* '<S2>/Gain8' */
  real_T ManualSwitch;                 /* '<Root>/Manual Switch' */
  real_T receive1;                     /* '<S2>/receive1' */
  real_T receive;                      /* '<S2>/receive' */
  real_T Switch2_i;                    /* '<S2>/Switch2' */
  real_T CANbitpacking1;               /* '<S2>/CAN bit-packing 1' */
  real_T Delay1;                       /* '<S2>/Delay1' */
  real_T Switch1_a;                    /* '<S2>/Switch1' */
  real_T Gain13;                       /* '<S2>/Gain13' */
  real_T Gain12;                       /* '<S2>/Gain12' */
  real_T Saturation1;                  /* '<S2>/Saturation1' */
  real_T CANbitpacking3;               /* '<S2>/CAN bit-packing 3' */
  real_T ManualSwitch_l;               /* '<S2>/Manual Switch' */
  real_T Switch_d;                     /* '<S2>/Switch' */
  real_T Gain5;                        /* '<S2>/Gain5' */
  real_T Gain1;                        /* '<S2>/Gain1' */
  real_T Saturation;                   /* '<S2>/Saturation' */
  real_T CANbitpacking2;               /* '<S2>/CAN bit-packing 2' */
  real_T xuanjin_enable;               /* '<S2>/Chart1' */
  real_T yuxuansong_enable;            /* '<S2>/Chart1' */
  real_T xuansong_enable;              /* '<S2>/Chart1' */
  real_T route1;                       /* '<S2>/Chart' */
  real_T route2;                       /* '<S2>/Chart' */
  real_T ManualSwitch1;                /* '<S2>/Manual Switch1' */
  real_T ManualSwitch3;                /* '<S2>/Manual Switch3' */
  uint8_T CANbitunpacking1;            /* '<S2>/CAN bit-unpacking 1' */
  uint8_T CANbitunpacking4;            /* '<S2>/CAN bit-unpacking 4' */
  uint8_T CANbitunpacking2_o1;         /* '<S2>/CAN bit-unpacking 2' */
  uint8_T CANbitunpacking2_o2;         /* '<S2>/CAN bit-unpacking 2' */
  uint8_T CANbitunpacking2_o3;         /* '<S2>/CAN bit-unpacking 2' */
  uint8_T CANbitunpacking2_o4;         /* '<S2>/CAN bit-unpacking 2' */
  uint8_T CANbitunpacking2_o5;         /* '<S2>/CAN bit-unpacking 2' */
  uint8_T CANbitunpacking2_o6;         /* '<S2>/CAN bit-unpacking 2' */
  uint8_T CANbitunpacking2_o7;         /* '<S2>/CAN bit-unpacking 2' */
  uint8_T CANbitunpacking2_o8;         /* '<S2>/CAN bit-unpacking 2' */
  uint8_T CANbitunpacking3_o1;         /* '<S2>/CAN bit-unpacking 3' */
  uint8_T CANbitunpacking3_o2;         /* '<S2>/CAN bit-unpacking 3' */
  uint8_T CANbitunpacking3_o3;         /* '<S2>/CAN bit-unpacking 3' */
  uint8_T CANbitunpacking3_o4;         /* '<S2>/CAN bit-unpacking 3' */
  uint8_T CANbitunpacking3_o5;         /* '<S2>/CAN bit-unpacking 3' */
  uint8_T CANbitunpacking3_o6;         /* '<S2>/CAN bit-unpacking 3' */
  uint8_T CANbitunpacking3_o7;         /* '<S2>/CAN bit-unpacking 3' */
  uint8_T CANbitunpacking3_o8;         /* '<S2>/CAN bit-unpacking 3' */
  uint8_T DataTypeConversion;          /* '<S2>/Data Type Conversion' */
  uint8_T MultiportSwitch1[8];         /* '<S2>/Multiport Switch1' */
  uint8_T MultiportSwitch4[8];         /* '<S2>/Multiport Switch4' */
  uint8_T DataTypeConversion32;        /* '<S2>/Data Type Conversion32' */
  uint8_T DataTypeConversion9;         /* '<S2>/Data Type Conversion9' */
  uint8_T DataTypeConversion8;         /* '<S2>/Data Type Conversion8' */
  uint8_T DataTypeConversion13;        /* '<S2>/Data Type Conversion13' */
  uint8_T DataTypeConversion28;        /* '<S2>/Data Type Conversion28' */
  uint8_T DataTypeConversion29;        /* '<S2>/Data Type Conversion29' */
  uint8_T DataTypeConversion30;        /* '<S2>/Data Type Conversion30' */
  uint8_T DataTypeConversion31;        /* '<S2>/Data Type Conversion31' */
  uint8_T DataTypeConversion26;        /* '<S2>/Data Type Conversion26' */
  uint8_T DataTypeConversion27;        /* '<S2>/Data Type Conversion27' */
  uint8_T DataTypeConversion10;        /* '<S2>/Data Type Conversion10' */
  uint8_T DataTypeConversion11;        /* '<S2>/Data Type Conversion11' */
  uint8_T DataTypeConversion12;        /* '<S2>/Data Type Conversion12' */
  uint8_T DataTypeConversion14;        /* '<S2>/Data Type Conversion14' */
  uint8_T DataTypeConversion15;        /* '<S2>/Data Type Conversion15' */
  uint8_T DataTypeConversion25;        /* '<S2>/Data Type Conversion25' */
  uint8_T DataTypeConversion7;         /* '<S2>/Data Type Conversion7' */
  uint8_T DataTypeConversion16;        /* '<S2>/Data Type Conversion16' */
  uint8_T DataTypeConversion1;         /* '<S2>/Data Type Conversion1' */
  uint8_T DataTypeConversion2;         /* '<S2>/Data Type Conversion2' */
  uint8_T DataTypeConversion3;         /* '<S2>/Data Type Conversion3' */
  uint8_T DataTypeConversion4;         /* '<S2>/Data Type Conversion4' */
  uint8_T DataTypeConversion5;         /* '<S2>/Data Type Conversion5' */
  uint8_T DataTypeConversion6;         /* '<S2>/Data Type Conversion6' */
  uint8_T DataTypeConversion23;        /* '<S2>/Data Type Conversion23' */
  uint8_T DataTypeConversion24;        /* '<S2>/Data Type Conversion24' */
  uint8_T DataTypeConversion17;        /* '<S2>/Data Type Conversion17' */
  uint8_T DataTypeConversion18;        /* '<S2>/Data Type Conversion18' */
  uint8_T DataTypeConversion19;        /* '<S2>/Data Type Conversion19' */
  uint8_T DataTypeConversion20;        /* '<S2>/Data Type Conversion20' */
  uint8_T DataTypeConversion21;        /* '<S2>/Data Type Conversion21' */
  uint8_T DataTypeConversion22;        /* '<S2>/Data Type Conversion22' */
  boolean_T LogicalOperator2;          /* '<S3>/Logical Operator2' */
  boolean_T LogicalOperator2_a;        /* '<S2>/Logical Operator2' */
  boolean_T LogicalOperator3;          /* '<S2>/Logical Operator3' */
  boolean_T LogicalOperator4;          /* '<S2>/Logical Operator4' */
  boolean_T LogicalOperator1;          /* '<S3>/Logical Operator1' */
  boolean_T LogicalOperator;           /* '<S3>/Logical Operator' */
  boolean_T Delay;                     /* '<S2>/Delay' */
  boolean_T LogicalOperator1_c;        /* '<S2>/Logical Operator1' */
  boolean_T LogicalOperator_b;         /* '<S2>/Logical Operator' */
  boolean_T LogicalOperator6;          /* '<S2>/Logical Operator6' */
  B_anti_v_gggg_T sf_anti_v1;          /* '<S2>/anti_v1' */
  B_anti_v_gggg_T sf_anti_v;           /* '<S2>/anti_v' */
  B_V_S_1_gggg_T sf_V_S_2;             /* '<S2>/V_S_2' */
  B_V_S_1_gggg_T sf_V_S_1;             /* '<S2>/V_S_1' */
  B_Subsystem1_gggg_T Subsystem2;      /* '<S2>/Subsystem2' */
  B_Subsystem1_gggg_T Subsystem1;      /* '<S2>/Subsystem1' */
  B_DI_gggg_T sf_DI1;                  /* '<S2>/DI1' */
  B_DI_gggg_T sf_DI;                   /* '<S2>/DI' */
} B_gggg_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T Delay1_DSTATE[10];            /* '<S2>/Delay1' */
  real_T Memory_PreviousInput;         /* '<S3>/Memory' */
  real_T Memory2_PreviousInput;        /* '<S3>/Memory2' */
  real_T Memory1_PreviousInput;        /* '<S3>/Memory1' */
  struct {
    void *LoggedData;
  } Scope1_PWORK;                      /* '<Root>/Scope1' */

  struct {
    void *LoggedData;
  } Scope2_PWORK;                      /* '<Root>/Scope2' */

  struct {
    void *LoggedData;
  } Scope4_PWORK;                      /* '<Root>/Scope4' */

  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<S2>/Scope' */

  struct {
    void *LoggedData;
  } Scope1_PWORK_l;                    /* '<S2>/Scope1' */

  struct {
    void *LoggedData;
  } Scope2_PWORK_e;                    /* '<S2>/Scope2' */

  struct {
    void *LoggedData;
  } Scope3_PWORK;                      /* '<S2>/Scope3' */

  struct {
    void *LoggedData;
  } Scope4_PWORK_h;                    /* '<S2>/Scope4' */

  int32_T sfEvent;                     /* '<S2>/Chart1' */
  int32_T sfEvent_n;                   /* '<S2>/Chart' */
  struct {
    int_T AcquireOK;
  } SFunction_IWORK;                   /* '<S1>/S-Function' */

  boolean_T Delay_DSTATE[250];         /* '<S2>/Delay' */
  uint8_T is_active_c6_gggg;           /* '<S2>/Chart1' */
  uint8_T is_c6_gggg;                  /* '<S2>/Chart1' */
  uint8_T is_enable1;                  /* '<S2>/Chart1' */
  uint8_T is_active_enable1;           /* '<S2>/Chart1' */
  uint8_T is_enable2;                  /* '<S2>/Chart1' */
  uint8_T is_active_enable2;           /* '<S2>/Chart1' */
  uint8_T is_enable3;                  /* '<S2>/Chart1' */
  uint8_T is_active_enable3;           /* '<S2>/Chart1' */
  uint8_T is_active_c4_gggg;           /* '<S2>/Chart' */
  uint8_T is_c4_gggg;                  /* '<S2>/Chart' */
  uint8_T is_route;                    /* '<S2>/Chart' */
  uint8_T temporalCounter_i1;          /* '<S2>/Chart' */
  DW_Subsystem1_gggg_T Subsystem2;     /* '<S2>/Subsystem2' */
  DW_Subsystem1_gggg_T Subsystem1;     /* '<S2>/Subsystem1' */
} DW_gggg_T;

/* Continuous states (auto storage) */
typedef struct {
  real_T s1_CSTATE;                    /* '<S2>/s1' */
  real_T s4_CSTATE;                    /* '<S2>/s4' */
  real_T s3_CSTATE;                    /* '<S2>/s3' */
  real_T s5_CSTATE;                    /* '<S2>/s5' */
} X_gggg_T;

/* State derivatives (auto storage) */
typedef struct {
  real_T s1_CSTATE;                    /* '<S2>/s1' */
  real_T s4_CSTATE;                    /* '<S2>/s4' */
  real_T s3_CSTATE;                    /* '<S2>/s3' */
  real_T s5_CSTATE;                    /* '<S2>/s5' */
} XDot_gggg_T;

/* State disabled  */
typedef struct {
  boolean_T s1_CSTATE;                 /* '<S2>/s1' */
  boolean_T s4_CSTATE;                 /* '<S2>/s4' */
  boolean_T s3_CSTATE;                 /* '<S2>/s3' */
  boolean_T s5_CSTATE;                 /* '<S2>/s5' */
} XDis_gggg_T;

#ifndef ODE4_INTG
#define ODE4_INTG

/* ODE4 Integration Data */
typedef struct {
  real_T *y;                           /* output */
  real_T *f[4];                        /* derivatives */
} ODE4_IntgData;

#endif

/* Backward compatible GRT Identifiers */
#define rtB                            gggg_B
#define BlockIO                        B_gggg_T
#define rtX                            gggg_X
#define ContinuousStates               X_gggg_T
#define rtXdot                         gggg_XDot
#define StateDerivatives               XDot_gggg_T
#define tXdis                          gggg_XDis
#define StateDisabled                  XDis_gggg_T
#define rtP                            gggg_P
#define Parameters                     P_gggg_T
#define rtDWork                        gggg_DW
#define D_Work                         DW_gggg_T

/* Parameters for system: '<S2>/Subsystem1' */
struct P_Subsystem1_gggg_T_ {
  real_T Out1_Y0;                      /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S8>/Out1'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S8>/Constant'
                                        */
};

/* Parameters (auto storage) */
struct P_gggg_T_ {
  real_T Constant4_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant4'
                                        */
  real_T Constant21_Value;             /* Expression: 1
                                        * Referenced by: '<S2>/Constant21'
                                        */
  real_T Constant12_Value;             /* Expression: 0
                                        * Referenced by: '<S2>/Constant12'
                                        */
  real_T Constant31_Value;             /* Expression: 10
                                        * Referenced by: '<S2>/Constant31'
                                        */
  real_T Constant10_Value;             /* Expression: 0
                                        * Referenced by: '<S2>/Constant10'
                                        */
  real_T Constant9_Value;              /* Expression: 10
                                        * Referenced by: '<S2>/Constant9'
                                        */
  real_T Constant24_Value;             /* Expression: 0
                                        * Referenced by: '<S2>/Constant24'
                                        */
  real_T Constant17_Value;             /* Expression: 3
                                        * Referenced by: '<S2>/Constant17'
                                        */
  real_T Constant18_Value;             /* Expression: 3
                                        * Referenced by: '<S2>/Constant18'
                                        */
  real_T Constant7_Value;              /* Expression: 134
                                        * Referenced by: '<S2>/Constant7'
                                        */
  real_T Constant16_Value;             /* Expression: 0
                                        * Referenced by: '<S2>/Constant16'
                                        */
  real_T Constant1_Value;              /* Expression: 3
                                        * Referenced by: '<S2>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: 3
                                        * Referenced by: '<S2>/Constant2'
                                        */
  real_T Constant3_Value;              /* Expression: 0
                                        * Referenced by: '<S2>/Constant3'
                                        */
  real_T Constant4_Value_a;            /* Expression: 0
                                        * Referenced by: '<S2>/Constant4'
                                        */
  real_T Constant5_Value;              /* Expression: 0
                                        * Referenced by: '<S2>/Constant5'
                                        */
  real_T Constant6_Value;              /* Expression: 0
                                        * Referenced by: '<S2>/Constant6'
                                        */
  real_T Constant22_Value;             /* Expression: 0
                                        * Referenced by: '<S2>/Constant22'
                                        */
  real_T Constant14_Value;             /* Expression: 3
                                        * Referenced by: '<S2>/Constant14'
                                        */
  real_T Constant15_Value;             /* Expression: 3
                                        * Referenced by: '<S2>/Constant15'
                                        */
  real_T Constant29_Value;             /* Expression: 134
                                        * Referenced by: '<S2>/Constant29'
                                        */
  real_T Constant13_Value;             /* Expression: 0
                                        * Referenced by: '<S2>/Constant13'
                                        */
  real_T Constant11_Value;             /* Expression: 3
                                        * Referenced by: '<S2>/Constant11'
                                        */
  real_T Constant19_Value;             /* Expression: 3
                                        * Referenced by: '<S2>/Constant19'
                                        */
  real_T Constant25_Value;             /* Expression: 0
                                        * Referenced by: '<S2>/Constant25'
                                        */
  real_T Constant26_Value;             /* Expression: 0
                                        * Referenced by: '<S2>/Constant26'
                                        */
  real_T Constant27_Value;             /* Expression: 0
                                        * Referenced by: '<S2>/Constant27'
                                        */
  real_T Constant28_Value;             /* Expression: 0
                                        * Referenced by: '<S2>/Constant28'
                                        */
  real_T Constant8_Value;              /* Expression: 15
                                        * Referenced by: '<S2>/Constant8'
                                        */
  real_T Constant23_Value;             /* Expression: 0
                                        * Referenced by: '<S2>/Constant23'
                                        */
  real_T Constant2_Value_j;            /* Expression: 0
                                        * Referenced by: '<S3>/Constant2'
                                        */
  real_T Constant1_Value_g;            /* Expression: 0
                                        * Referenced by: '<S3>/Constant1'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S3>/Constant'
                                        */
  real_T Memory_X0;                    /* Expression: 0
                                        * Referenced by: '<S3>/Memory'
                                        */
  real_T Memory2_X0;                   /* Expression: 0
                                        * Referenced by: '<S3>/Memory2'
                                        */
  real_T u_Value;                      /* Expression: 0
                                        * Referenced by: '<Root>/Ðý½ô1'
                                        */
  real_T Constant7_Value_j;            /* Expression: 1
                                        * Referenced by: '<Root>/Constant7'
                                        */
  real_T u_Value_f;                    /* Expression: 0
                                        * Referenced by: '<Root>/Ô¤ÐýËÉ1'
                                        */
  real_T u_Value_n;                    /* Expression: 0
                                        * Referenced by: '<Root>/ÐýËÉ1'
                                        */
  real_T Memory1_X0;                   /* Expression: 0
                                        * Referenced by: '<S3>/Memory1'
                                        */
  real_T Constant5_Value_a;            /* Expression: -1
                                        * Referenced by: '<Root>/Constant5'
                                        */
  real_T Constant6_Value_e;            /* Expression: -1
                                        * Referenced by: '<Root>/Constant6'
                                        */
  real_T s1_A;                         /* Computed Parameter: s1_A
                                        * Referenced by: '<S2>/s1'
                                        */
  real_T s1_B;                         /* Computed Parameter: s1_B
                                        * Referenced by: '<S2>/s1'
                                        */
  real_T s1_C;                         /* Computed Parameter: s1_C
                                        * Referenced by: '<S2>/s1'
                                        */
  real_T s1_X0;                        /* Expression: 0
                                        * Referenced by: '<S2>/s1'
                                        */
  real_T Gain3_Gain;                   /* Expression: 59.9953/3931862
                                        * Referenced by: '<S2>/Gain3'
                                        */
  real_T Gain4_Gain;                   /* Expression: 1.25
                                        * Referenced by: '<S2>/Gain4'
                                        */
  real_T Gain6_Gain;                   /* Expression: -1
                                        * Referenced by: '<S2>/Gain6'
                                        */
  real_T s4_A;                         /* Computed Parameter: s4_A
                                        * Referenced by: '<S2>/s4'
                                        */
  real_T s4_B;                         /* Computed Parameter: s4_B
                                        * Referenced by: '<S2>/s4'
                                        */
  real_T s4_C;                         /* Computed Parameter: s4_C
                                        * Referenced by: '<S2>/s4'
                                        */
  real_T s4_X0;                        /* Expression: 0
                                        * Referenced by: '<S2>/s4'
                                        */
  real_T Gain9_Gain;                   /* Expression: 59.9953/3931862
                                        * Referenced by: '<S2>/Gain9'
                                        */
  real_T Gain10_Gain;                  /* Expression: 1.25
                                        * Referenced by: '<S2>/Gain10'
                                        */
  real_T Gain11_Gain;                  /* Expression: -1
                                        * Referenced by: '<S2>/Gain11'
                                        */
  real_T s3_A;                         /* Computed Parameter: s3_A
                                        * Referenced by: '<S2>/s3'
                                        */
  real_T s3_B;                         /* Computed Parameter: s3_B
                                        * Referenced by: '<S2>/s3'
                                        */
  real_T s3_C;                         /* Computed Parameter: s3_C
                                        * Referenced by: '<S2>/s3'
                                        */
  real_T s3_X0;                        /* Expression: 0
                                        * Referenced by: '<S2>/s3'
                                        */
  real_T Gain_Gain;                    /* Expression: 1.1739e-5
                                        * Referenced by: '<S2>/Gain'
                                        */
  real_T Gain2_Gain;                   /* Expression: 1.25/(2*pi)
                                        * Referenced by: '<S2>/Gain2'
                                        */
  real_T s5_A;                         /* Computed Parameter: s5_A
                                        * Referenced by: '<S2>/s5'
                                        */
  real_T s5_B;                         /* Computed Parameter: s5_B
                                        * Referenced by: '<S2>/s5'
                                        */
  real_T s5_C;                         /* Computed Parameter: s5_C
                                        * Referenced by: '<S2>/s5'
                                        */
  real_T s5_X0;                        /* Expression: 0
                                        * Referenced by: '<S2>/s5'
                                        */
  real_T Gain7_Gain;                   /* Expression: 1.1739e-5
                                        * Referenced by: '<S2>/Gain7'
                                        */
  real_T Gain8_Gain;                   /* Expression: 1.25/(2*pi)
                                        * Referenced by: '<S2>/Gain8'
                                        */
  real_T Switch2_Threshold;            /* Expression: 0.5
                                        * Referenced by: '<S2>/Switch2'
                                        */
  real_T Delay1_InitialCondition;      /* Expression: 0.0
                                        * Referenced by: '<S2>/Delay1'
                                        */
  real_T _Value;                       /* Expression: 0
                                        * Referenced by: '<Root>/¸´Î»'
                                        */
  real_T Gain13_Gain;                  /* Expression: (2*pi)/1.25
                                        * Referenced by: '<S2>/Gain13'
                                        */
  real_T Gain12_Gain;                  /* Expression: 85546
                                        * Referenced by: '<S2>/Gain12'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 2147483647
                                        * Referenced by: '<S2>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: -2147483647
                                        * Referenced by: '<S2>/Saturation1'
                                        */
  real_T Gain5_Gain;                   /* Expression: (2*pi)/1.25
                                        * Referenced by: '<S2>/Gain5'
                                        */
  real_T Gain1_Gain;                   /* Expression: 85546
                                        * Referenced by: '<S2>/Gain1'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 2147483647
                                        * Referenced by: '<S2>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -2147483647
                                        * Referenced by: '<S2>/Saturation'
                                        */
  real_T Setup_P1_Size[2];             /* Computed Parameter: Setup_P1_Size
                                        * Referenced by: '<S2>/Setup '
                                        */
  real_T Setup_P1[4];                  /* Expression: can1UserBR
                                        * Referenced by: '<S2>/Setup '
                                        */
  real_T Setup_P2_Size[2];             /* Computed Parameter: Setup_P2_Size
                                        * Referenced by: '<S2>/Setup '
                                        */
  real_T Setup_P2[4];                  /* Expression: can2UserBR
                                        * Referenced by: '<S2>/Setup '
                                        */
  real_T Setup_P3_Size[2];             /* Computed Parameter: Setup_P3_Size
                                        * Referenced by: '<S2>/Setup '
                                        */
  real_T Setup_P4_Size[2];             /* Computed Parameter: Setup_P4_Size
                                        * Referenced by: '<S2>/Setup '
                                        */
  real_T Setup_P5_Size[2];             /* Computed Parameter: Setup_P5_Size
                                        * Referenced by: '<S2>/Setup '
                                        */
  real_T Setup_P5[3];                  /* Expression: can2SendS
                                        * Referenced by: '<S2>/Setup '
                                        */
  real_T Setup_P6_Size[2];             /* Computed Parameter: Setup_P6_Size
                                        * Referenced by: '<S2>/Setup '
                                        */
  real_T Setup_P6[4];                  /* Expression: can2RecS
                                        * Referenced by: '<S2>/Setup '
                                        */
  real_T Setup_P7_Size[2];             /* Computed Parameter: Setup_P7_Size
                                        * Referenced by: '<S2>/Setup '
                                        */
  real_T Setup_P8_Size[2];             /* Computed Parameter: Setup_P8_Size
                                        * Referenced by: '<S2>/Setup '
                                        */
  real_T Setup_P9_Size[2];             /* Computed Parameter: Setup_P9_Size
                                        * Referenced by: '<S2>/Setup '
                                        */
  real_T Setup_P10_Size[2];            /* Computed Parameter: Setup_P10_Size
                                        * Referenced by: '<S2>/Setup '
                                        */
  real_T Setup_P11_Size[2];            /* Computed Parameter: Setup_P11_Size
                                        * Referenced by: '<S2>/Setup '
                                        */
  real_T Setup_P12_Size[2];            /* Computed Parameter: Setup_P12_Size
                                        * Referenced by: '<S2>/Setup '
                                        */
  real_T Setup_P13_Size[2];            /* Computed Parameter: Setup_P13_Size
                                        * Referenced by: '<S2>/Setup '
                                        */
  real_T Setup_P13[4];                 /* Expression: can2RecSI
                                        * Referenced by: '<S2>/Setup '
                                        */
  real_T Setup_P14_Size[2];            /* Computed Parameter: Setup_P14_Size
                                        * Referenced by: '<S2>/Setup '
                                        */
  real_T Setup_P15_Size[2];            /* Computed Parameter: Setup_P15_Size
                                        * Referenced by: '<S2>/Setup '
                                        */
  real_T Setup_P15;                    /* Expression: initarray
                                        * Referenced by: '<S2>/Setup '
                                        */
  real_T Setup_P16_Size[2];            /* Computed Parameter: Setup_P16_Size
                                        * Referenced by: '<S2>/Setup '
                                        */
  real_T Setup_P16;                    /* Expression: termarray
                                        * Referenced by: '<S2>/Setup '
                                        */
  real_T Setup_P17_Size[2];            /* Computed Parameter: Setup_P17_Size
                                        * Referenced by: '<S2>/Setup '
                                        */
  real_T Setup_P17;                    /* Expression: ioBaseAddress
                                        * Referenced by: '<S2>/Setup '
                                        */
  real_T Setup_P18_Size[2];            /* Computed Parameter: Setup_P18_Size
                                        * Referenced by: '<S2>/Setup '
                                        */
  real_T Setup_P18;                    /* Expression: memBaseAddress
                                        * Referenced by: '<S2>/Setup '
                                        */
  real_T Setup_P19_Size[2];            /* Computed Parameter: Setup_P19_Size
                                        * Referenced by: '<S2>/Setup '
                                        */
  real_T Setup_P19;                    /* Expression: intNo
                                        * Referenced by: '<S2>/Setup '
                                        */
  real_T Setup_P20_Size[2];            /* Computed Parameter: Setup_P20_Size
                                        * Referenced by: '<S2>/Setup '
                                        */
  real_T Setup_P20;                    /* Expression: board
                                        * Referenced by: '<S2>/Setup '
                                        */
  real_T Setup_P21_Size[2];            /* Computed Parameter: Setup_P21_Size
                                        * Referenced by: '<S2>/Setup '
                                        */
  real_T Setup_P21;                    /* Expression: can1bus
                                        * Referenced by: '<S2>/Setup '
                                        */
  real_T Setup_P22_Size[2];            /* Computed Parameter: Setup_P22_Size
                                        * Referenced by: '<S2>/Setup '
                                        */
  real_T Setup_P22;                    /* Expression: can2bus
                                        * Referenced by: '<S2>/Setup '
                                        */
  real_T Setup_P23_Size[2];            /* Computed Parameter: Setup_P23_Size
                                        * Referenced by: '<S2>/Setup '
                                        */
  real_T Setup_P23;                    /* Expression: bus_off_out
                                        * Referenced by: '<S2>/Setup '
                                        */
  real_T Setup_P24_Size[2];            /* Computed Parameter: Setup_P24_Size
                                        * Referenced by: '<S2>/Setup '
                                        */
  real_T Setup_P24;                    /* Expression: bus_off_rec
                                        * Referenced by: '<S2>/Setup '
                                        */
  uint32_T Delay_DelayLength;          /* Computed Parameter: Delay_DelayLength
                                        * Referenced by: '<S2>/Delay'
                                        */
  uint32_T Delay1_DelayLength;         /* Computed Parameter: Delay1_DelayLength
                                        * Referenced by: '<S2>/Delay1'
                                        */
  uint8_T ManualSwitch3_CurrentSetting;/* Computed Parameter: ManualSwitch3_CurrentSetting
                                        * Referenced by: '<S2>/Manual Switch3'
                                        */
  uint8_T ManualSwitch1_CurrentSetting;/* Computed Parameter: ManualSwitch1_CurrentSetting
                                        * Referenced by: '<S2>/Manual Switch1'
                                        */
  uint8_T ManualSwitch_CurrentSetting; /* Computed Parameter: ManualSwitch_CurrentSetting
                                        * Referenced by: '<Root>/Manual Switch'
                                        */
  uint8_T ManualSwitch_CurrentSetting_c;/* Computed Parameter: ManualSwitch_CurrentSetting_c
                                         * Referenced by: '<S2>/Manual Switch'
                                         */
  boolean_T Delay_InitialCondition;    /* Computed Parameter: Delay_InitialCondition
                                        * Referenced by: '<S2>/Delay'
                                        */
  P_Subsystem1_gggg_T Subsystem2;      /* '<S2>/Subsystem2' */
  P_Subsystem1_gggg_T Subsystem1;      /* '<S2>/Subsystem1' */
};

/* Real-time Model Data Structure */
struct tag_RTM_gggg_T {
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
    SimStruct childSFunctions[1];
    SimStruct *childSFunctionPtrs[1];
    struct _ssBlkInfo2 blkInfo2[1];
    struct _ssSFcnModelMethods2 methods2[1];
    struct _ssSFcnModelMethods3 methods3[1];
    struct _ssSFcnModelMethods4 methods4[1];
    struct _ssStatesInfo2 statesInfo2[1];
    ssPeriodicStatesInfo periodicStatesInfo[1];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      uint_T attribs[24];
      mxArray *params[24];
    } Sfcn0;
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
  real_T odeY[4];
  real_T odeF[4][4];
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
extern P_gggg_T gggg_P;

/* Block signals (auto storage) */
extern B_gggg_T gggg_B;

/* Continuous states (auto storage) */
extern X_gggg_T gggg_X;

/* Block states (auto storage) */
extern DW_gggg_T gggg_DW;

/* Model entry point functions */
extern void gggg_initialize(void);
extern void gggg_output(void);
extern void gggg_update(void);
extern void gggg_terminate(void);

/*====================*
 * External functions *
 *====================*/
extern gggg_rtModel *gggg(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  gggg_GetCAPIStaticMap(void);

/* Real-time Model object */
extern RT_MODEL_gggg_T *const gggg_M;

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
 * '<Root>' : 'gggg'
 * '<S1>'   : 'gggg/Scope '
 * '<S2>'   : 'gggg/Subsystem'
 * '<S3>'   : 'gggg/husuo'
 * '<S4>'   : 'gggg/Subsystem/Chart'
 * '<S5>'   : 'gggg/Subsystem/Chart1'
 * '<S6>'   : 'gggg/Subsystem/DI'
 * '<S7>'   : 'gggg/Subsystem/DI1'
 * '<S8>'   : 'gggg/Subsystem/Subsystem1'
 * '<S9>'   : 'gggg/Subsystem/Subsystem2'
 * '<S10>'  : 'gggg/Subsystem/V_S_1'
 * '<S11>'  : 'gggg/Subsystem/V_S_2'
 * '<S12>'  : 'gggg/Subsystem/anti_v'
 * '<S13>'  : 'gggg/Subsystem/anti_v1'
 */
#endif                                 /* RTW_HEADER_gggg_h_ */
