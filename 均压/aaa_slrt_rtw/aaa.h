/*
 * aaa.h
 *
 * Code generation for model "aaa".
 *
 * Model version              : 1.100
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Fri May 21 16:12:18 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_aaa_h_
#define RTW_HEADER_aaa_h_
#include <math.h>
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef aaa_COMMON_INCLUDES_
# define aaa_COMMON_INCLUDES_
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
#endif                                 /* aaa_COMMON_INCLUDES_ */

#include "aaa_types.h"

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
#define rtModel_aaa                    RT_MODEL_aaa_T

/* Definition for use in the target main file */
#define aaa_rtModel                    RT_MODEL_aaa_T

/* user code (top of export header file) */
#include "xpcdatatypes.h"

/* Block signals for system '<Root>/Subsystem3' */
typedef struct {
  real_T Add;                          /* '<S15>/Add' */
} B_Subsystem3_aaa_T;

/* Block states (auto storage) for system '<Root>/Subsystem3' */
typedef struct {
  int8_T Subsystem3_SubsysRanBC;       /* '<Root>/Subsystem3' */
} DW_Subsystem3_aaa_T;

/* Block signals for system '<S18>/Chart1' */
typedef struct {
  real_T t;                            /* '<S18>/Chart1' */
} B_Chart1_aaa_T;

/* Block states (auto storage) for system '<S18>/Chart1' */
typedef struct {
  real_T x;                            /* '<S18>/Chart1' */
  int32_T sfEvent;                     /* '<S18>/Chart1' */
  uint8_T is_active_c8_aaa;            /* '<S18>/Chart1' */
  uint8_T is_c8_aaa;                   /* '<S18>/Chart1' */
} DW_Chart1_aaa_T;

/* Block signals (auto storage) */
typedef struct {
  real_T DataTypeConversion3;          /* '<Root>/Data Type Conversion3' */
  real_T fa11_1;                       /* '<S21>/fa11_1' */
  real_T fa11_2;                       /* '<S21>/fa11_2' */
  real_T fa11_5;                       /* '<S21>/fa11_5' */
  real_T fa20;                         /* '<S21>/fa20' */
  real_T fa16_1;                       /* '<S21>/fa16_1' */
  real_T fa3;                          /* '<S21>/fa3' */
  real_T fa21;                         /* '<S21>/fa21' */
  real_T xuansongmingling;             /* '<S21>/xuansongmingling' */
  real_T xuanjinmingling;              /* '<S21>/xuanjinmingling' */
  real_T suodingmingling;              /* '<S21>/suodingmingling' */
  real_T jiesuomingling;               /* '<S21>/jiesuomingling' */
  real_T fa18_1;                       /* '<S21>/fa18_1' */
  real_T fa18_2;                       /* '<S21>/fa18_2' */
  real_T fa18_3;                       /* '<S21>/fa18_3' */
  real_T fa18_4;                       /* '<S21>/fa18_4' */
  real_T fa_kgg;                       /* '<S21>/fa_kgg' */
  real_T jiting;                       /* '<Root>/jiting' */
  real_T DataTypeConversion4;          /* '<Root>/Data Type Conversion4' */
  real_T yalichuanganqi3402_o1;        /* '<S17>/yalichuanganqi3402' */
  real_T yalichuanganqi3402_o2;        /* '<S17>/yalichuanganqi3402' */
  real_T DataTypeConversion49;         /* '<S17>/Data Type Conversion49' */
  real_T uDLookupTable1;               /* '<S17>/1-D Lookup Table1' */
  real_T DataTypeConversion50;         /* '<S17>/Data Type Conversion50' */
  real_T uDLookupTable2;               /* '<S17>/1-D Lookup Table2' */
  real_T DataTypeConversion51;         /* '<S17>/Data Type Conversion51' */
  real_T uDLookupTable3;               /* '<S17>/1-D Lookup Table3' */
  real_T DataTypeConversion52;         /* '<S17>/Data Type Conversion52' */
  real_T uDLookupTable4;               /* '<S17>/1-D Lookup Table4' */
  real_T DataTypeConversion53;         /* '<S17>/Data Type Conversion53' */
  real_T uDLookupTable5;               /* '<S17>/1-D Lookup Table5' */
  real_T DataTypeConversion54;         /* '<S17>/Data Type Conversion54' */
  real_T uDLookupTable6;               /* '<S17>/1-D Lookup Table6' */
  real_T DataTypeConversion6;          /* '<Root>/Data Type Conversion6' */
  real_T tonggai1808Receive;           /* '<S17>/tonggai1808Receive' */
  real_T Step;                         /* '<S17>/Step' */
  real_T Product[16];                  /* '<S17>/Product' */
  real_T DataTypeConversion24[12];     /* '<Root>/Data Type Conversion24' */
  real_T DataTypeConversion8;          /* '<Root>/Data Type Conversion8' */
  real_T liuliangji;                   /* '<S17>/liuliangji_fuqiuyeweiji3402' */
  real_T liuliangji_fuqiuyeweiji3402_o2;/* '<S17>/liuliangji_fuqiuyeweiji3402' */
  real_T Step1;                        /* '<S17>/Step1' */
  real_T Product1;                     /* '<S17>/Product1' */
  real_T DataTypeConversion28;         /* '<Root>/Data Type Conversion28' */
  real_T DataTypeConversion9;          /* '<Root>/Data Type Conversion9' */
  real_T DataTypeConversion11;         /* '<Root>/Data Type Conversion11' */
  real_T DataTypeConversion12;         /* '<Root>/Data Type Conversion12' */
  real_T DataTypeConversion27[6];      /* '<Root>/Data Type Conversion27' */
  real_T u;                            /* '<Root>/Constant' */
  real_T DataTypeConversion1;          /* '<Root>/Data Type Conversion1' */
  real_T u_p;                          /* '<Root>/Constant8' */
  real_T u_l;                          /* '<Root>/Constant7' */
  real_T kaiguangaiweiyi3402;          /* '<S17>/kaiguangaiweiyi3402' */
  real_T DataTypeConversion48;         /* '<S17>/Data Type Conversion48' */
  real_T uDLookupTable;                /* '<S17>/1-D Lookup Table' */
  real_T DataTypeConversion26;         /* '<Root>/Data Type Conversion26' */
  real_T tonggai3402Receive_o1;        /* '<S17>/tonggai3402Receive' */
  real_T tonggai3402Receive_o2;        /* '<S17>/tonggai3402Receive' */
  real_T DataTypeConversion25[7];      /* '<Root>/Data Type Conversion25' */
  real_T DataTypeConversion13;         /* '<Root>/Data Type Conversion13' */
  real_T Memory;                       /* '<Root>/Memory' */
  real_T Saturation;                   /* '<S20>/Saturation' */
  real_T Fcn;                          /* '<S20>/Fcn' */
  real_T Saturation1;                  /* '<S20>/Saturation1' */
  real_T Add;                          /* '<S20>/Add' */
  real_T DataTypeConversion34;         /* '<Root>/Data Type Conversion34' */
  real_T Memory1;                      /* '<Root>/Memory1' */
  real_T Saturation_m;                 /* '<S18>/Saturation' */
  real_T Fcn_l;                        /* '<S18>/Fcn' */
  real_T Saturation1_h;                /* '<S18>/Saturation1' */
  real_T Add_o;                        /* '<S18>/Add' */
  real_T DataTypeConversion35;         /* '<Root>/Data Type Conversion35' */
  real_T DataTypeConversion14;         /* '<Root>/Data Type Conversion14' */
  real_T DataTypeConversion15;         /* '<Root>/Data Type Conversion15' */
  real_T DataTypeConversion5;          /* '<S14>/Data Type Conversion5' */
  real_T Memory_n;                     /* '<S22>/Memory' */
  real_T Switch;                       /* '<S22>/Switch' */
  real_T Memory1_o;                    /* '<S22>/Memory1' */
  real_T Switch2;                      /* '<S22>/Switch2' */
  real_T DataTypeConversion18;         /* '<Root>/Data Type Conversion18' */
  real_T Memory_a;                     /* '<S23>/Memory' */
  real_T Switch_k;                     /* '<S23>/Switch' */
  real_T Memory_ni;                    /* '<S24>/Memory' */
  real_T Switch_d;                     /* '<S24>/Switch' */
  real_T Memory1_k;                    /* '<S24>/Memory1' */
  real_T Switch2_a;                    /* '<S24>/Switch2' */
  real_T DataTypeConversion22;         /* '<Root>/Data Type Conversion22' */
  real_T Memory1_n;                    /* '<S23>/Memory1' */
  real_T Switch2_k;                    /* '<S23>/Switch2' */
  real_T DataTypeConversion1_c;        /* '<S14>/Data Type Conversion1' */
  real_T MultiportSwitch1[16];         /* '<S14>/Multiport Switch1' */
  real_T Switch1;                      /* '<S13>/Switch1' */
  real_T Switch2_o;                    /* '<S13>/Switch2' */
  real_T Switch3;                      /* '<S13>/Switch3' */
  real_T Switch4;                      /* '<S13>/Switch4' */
  real_T Switch5;                      /* '<S13>/Switch5' */
  real_T Switch6;                      /* '<S13>/Switch6' */
  real_T Switch7;                      /* '<S13>/Switch7' */
  real_T Switch8;                      /* '<S13>/Switch8' */
  real_T Switch9;                      /* '<S13>/Switch9' */
  real_T Switch10;                     /* '<S13>/Switch10' */
  real_T Switch11;                     /* '<S13>/Switch11' */
  real_T DataTypeConversion7[11];      /* '<Root>/Data Type Conversion7' */
  real_T diancifa11_3;                 /* '<Root>/diancifa11_3' */
  real_T diancifa11_4;                 /* '<Root>/diancifa11_4' */
  real_T DataTypeConversion1_m;        /* '<S5>/Data Type Conversion1' */
  real_T diancifa16_2;                 /* '<Root>/diancifa16_2' */
  real_T diancifa16_3;                 /* '<Root>/diancifa16_3' */
  real_T DataTypeConversion2;          /* '<S5>/Data Type Conversion2' */
  real_T constant;                     /* '<S5>/constant' */
  real_T PCI1716DIO1_o1[8];            /* '<S5>/PCI1716DIO1' */
  real_T PCI1716DIO1_o2[16];           /* '<S5>/PCI1716DIO1' */
  real_T DataTypeConversion[15];       /* '<S5>/Data Type Conversion' */
  real_T Switch12;                     /* '<S13>/Switch12' */
  real_T Switch13;                     /* '<S13>/Switch13' */
  real_T Switch14;                     /* '<S13>/Switch14' */
  real_T Switch17;                     /* '<S13>/Switch17' */
  real_T Switch18;                     /* '<S13>/Switch18' */
  real_T DataTypeConversion5_b[5];     /* '<Root>/Data Type Conversion5' */
  real_T MultiportSwitch[8];           /* '<S14>/Multiport Switch' */
  real_T uDLookupTable_j;              /* '<Root>/1-D Lookup Table' */
  real_T Gain;                         /* '<Root>/Gain' */
  real_T DataTypeConversion_g[5];      /* '<S6>/Data Type Conversion' */
  real_T Saturation_e;                 /* '<S6>/Saturation' */
  real_T Saturation1_p;                /* '<S6>/Saturation1' */
  real_T Saturation2;                  /* '<S6>/Saturation2' */
  real_T Saturation3;                  /* '<S6>/Saturation3' */
  real_T Saturation4;                  /* '<S6>/Saturation4' */
  real_T Saturation5;                  /* '<S6>/Saturation5' */
  real_T Saturation6;                  /* '<S6>/Saturation6' */
  real_T Saturation7;                  /* '<S6>/Saturation7' */
  real_T Add1;                         /* '<Root>/Add1' */
  real_T DataTypeConversion10[8];      /* '<Root>/Data Type Conversion10' */
  real_T Memory2;                      /* '<Root>/Memory2' */
  real_T Switch_kw;                    /* '<Root>/Switch' */
  real_T DataTypeConversion30;         /* '<Root>/Data Type Conversion30' */
  real_T DataTypeConversion31;         /* '<Root>/Data Type Conversion31' */
  real_T MultiportSwitch2;             /* '<S14>/Multiport Switch2' */
  real_T DataTypeConversion32;         /* '<Root>/Data Type Conversion32' */
  real_T MultiportSwitch3;             /* '<S14>/Multiport Switch3' */
  real_T DataTypeConversion33;         /* '<Root>/Data Type Conversion33' */
  real_T CANbitpacking2;               /* '<S17>/CAN bit-packing 2' */
  real_T CANbitpacking4;               /* '<S17>/CAN bit-packing 4' */
  real_T CANbitpacking;                /* '<S17>/CAN bit-packing ' */
  real_T CANbitpacking1;               /* '<S17>/CAN bit-packing 1' */
  real_T CANbitpacking3;               /* '<S17>/CAN bit-packing 3' */
  real_T PCI1784_o1;                   /* '<Root>/PCI-1784' */
  real_T PCI1784_o2;                   /* '<Root>/PCI-1784' */
  real_T PCI1784_o3;                   /* '<Root>/PCI-1784' */
  real_T PCI1784_o4;                   /* '<Root>/PCI-1784' */
  real_T PCI1784_o5;                   /* '<Root>/PCI-1784' */
  real_T PCI1784_o6;                   /* '<Root>/PCI-1784' */
  real_T PCI1784_o7;                   /* '<Root>/PCI-1784' */
  real_T PCI1784_o8;                   /* '<Root>/PCI-1784' */
  real_T DataTypeConversion2_c;        /* '<Root>/Data Type Conversion2' */
  real_T DataTypeConversion29;         /* '<Root>/Data Type Conversion29' */
  real_T diancifa11_1;                 /* '<S19>/jinjichuli' */
  real_T diancifa11_2;                 /* '<S19>/jinjichuli' */
  real_T diancifa11_5;                 /* '<S19>/jinjichuli' */
  real_T diancifa20;                   /* '<S19>/jinjichuli' */
  real_T diancifa16_1;                 /* '<S19>/jinjichuli' */
  real_T diancifa3;                    /* '<S19>/jinjichuli' */
  real_T diancifa21;                   /* '<S19>/jinjichuli' */
  real_T suoding;                      /* '<S19>/jinjichuli' */
  real_T jiesuo;                       /* '<S19>/jinjichuli' */
  real_T xuansong;                     /* '<S19>/jinjichuli' */
  real_T xuanjin;                      /* '<S19>/jinjichuli' */
  real_T bililiuliangfa18_1;           /* '<S19>/jinjichuli' */
  real_T bililiuliangfa18_2;           /* '<S19>/jinjichuli' */
  real_T bililiuliangfa18_3;           /* '<S19>/jinjichuli' */
  real_T bililiuliangfa18_4;           /* '<S19>/jinjichuli' */
  real_T kaiguangaifa;                 /* '<S19>/jinjichuli' */
  real_T Switch1_b;                    /* '<S38>/Switch1' */
  real_T Switch2_f;                    /* '<S38>/Switch2' */
  real_T Switch3_o;                    /* '<S38>/Switch3' */
  real_T Switch4_d;                    /* '<S38>/Switch4' */
  real_T Switch5_l;                    /* '<S38>/Switch5' */
  real_T Switch6_d;                    /* '<S38>/Switch6' */
  real_T Switch7_c;                    /* '<S38>/Switch7' */
  real_T Switch8_h;                    /* '<S38>/Switch8' */
  real_T Switch9_e;                    /* '<S38>/Switch9' */
  real_T SumofElements;                /* '<S38>/Sum of Elements' */
  real_T MultiportSwitch_l;            /* '<S38>/Multiport Switch' */
  real_T Product_l;                    /* '<S38>/Product' */
  real_T Gain_d;                       /* '<S38>/Gain' */
  real_T Product1_g;                   /* '<S38>/Product1' */
  real_T Gain1;                        /* '<S38>/Gain1' */
  real_T Sum1;                         /* '<S39>/Sum1' */
  real_T Gain1_e;                      /* '<S39>/Gain1' */
  real_T Sum;                          /* '<S39>/Sum' */
  real_T Gain_i;                       /* '<S39>/Gain' */
  real_T Product_b;                    /* '<S39>/Product' */
  real_T Add1_g;                       /* '<S39>/Add1' */
  real_T MultiportSwitch_le;           /* '<S39>/Multiport Switch' */
  real_T Switch1_i;                    /* '<S41>/Switch1' */
  real_T Switch2_h;                    /* '<S41>/Switch2' */
  real_T Switch3_a;                    /* '<S41>/Switch3' */
  real_T Switch4_p;                    /* '<S41>/Switch4' */
  real_T Switch5_g;                    /* '<S41>/Switch5' */
  real_T Switch6_b;                    /* '<S41>/Switch6' */
  real_T Switch7_m;                    /* '<S41>/Switch7' */
  real_T Switch8_k;                    /* '<S41>/Switch8' */
  real_T Switch9_n;                    /* '<S41>/Switch9' */
  real_T SumofElements_i;              /* '<S41>/Sum of Elements' */
  real_T MultiportSwitch_p;            /* '<S41>/Multiport Switch' */
  real_T Product_l1;                   /* '<S41>/Product' */
  real_T Product1_l;                   /* '<S41>/Product1' */
  real_T Product_d;                    /* '<S40>/Product' */
  real_T Add1_p;                       /* '<S40>/Add1' */
  real_T FromWs;                       /* '<S42>/FromWs' */
  real_T FromWs_c;                     /* '<S43>/FromWs' */
  real_T FromWs_c1;                    /* '<S44>/FromWs' */
  real_T FromWs_n;                     /* '<S45>/FromWs' */
  real_T MultiportSwitch_o;            /* '<S40>/Multiport Switch' */
  real_T MultiportSwitch1_h;           /* '<S40>/Multiport Switch1' */
  real_T Sum_p;                        /* '<S40>/Sum' */
  real_T Gain_ic;                      /* '<S40>/Gain' */
  real_T Sum1_i;                       /* '<S40>/Sum1' */
  real_T Gain1_f;                      /* '<S40>/Gain1' */
  real_T Sum2;                         /* '<S40>/Sum2' */
  real_T Gain2;                        /* '<S40>/Gain2' */
  real_T Sum3;                         /* '<S40>/Sum3' */
  real_T Gain3;                        /* '<S40>/Gain3' */
  real_T diancifa11_1_k;               /* '<S26>/Chart' */
  real_T diancifa11_2_p;               /* '<S26>/Chart' */
  real_T diancifa11_5_b;               /* '<S26>/Chart' */
  real_T diancifa20_j;                 /* '<S26>/Chart' */
  real_T diancifa16_1_c;               /* '<S26>/Chart' */
  real_T diancifa3_c;                  /* '<S26>/Chart' */
  real_T diancifa21_d;                 /* '<S26>/Chart' */
  real_T suoding_k;                    /* '<S26>/Chart' */
  real_T jiesuo_p;                     /* '<S26>/Chart' */
  real_T xuansong_i;                   /* '<S26>/Chart' */
  real_T xuanjin_i;                    /* '<S26>/Chart' */
  real_T bililiuliangfa18_1_f;         /* '<S26>/Chart' */
  real_T bililiuliangfa18_2_l;         /* '<S26>/Chart' */
  real_T bililiuliangfa18_3_j;         /* '<S26>/Chart' */
  real_T bililiuliangfa18_4_e;         /* '<S26>/Chart' */
  real_T kaigaikaishi;                 /* '<S26>/Chart' */
  real_T guangaikaishi;                /* '<S26>/Chart' */
  real_T SCzhushuiwancheng;            /* '<S26>/Chart' */
  real_T SCjiayawancheng;              /* '<S26>/Chart' */
  real_T SXQjunyawancheng;             /* '<S26>/Chart' */
  real_T SXQxieyawancheng;             /* '<S26>/Chart' */
  real_T SQshiyabuchangwancheng;       /* '<S26>/Chart' */
  real_T SQxuanjinjianyawancheng;      /* '<S26>/Chart' */
  real_T kaigaiwancheng;               /* '<S26>/Chart' */
  real_T guangaiwancheng;              /* '<S26>/Chart' */
  real_T Product_f;                    /* '<S28>/Product' */
  real_T Gain_m;                       /* '<S28>/Gain' */
  real_T Product1_n;                   /* '<S28>/Product1' */
  real_T Gain1_a;                      /* '<S28>/Gain1' */
  real_T Switch1_j;                    /* '<S28>/Switch1' */
  real_T Switch2_d;                    /* '<S28>/Switch2' */
  real_T Switch3_i;                    /* '<S28>/Switch3' */
  real_T Switch4_j;                    /* '<S28>/Switch4' */
  real_T Switch5_lr;                   /* '<S28>/Switch5' */
  real_T Switch6_a;                    /* '<S28>/Switch6' */
  real_T Switch7_k;                    /* '<S28>/Switch7' */
  real_T Switch8_o;                    /* '<S28>/Switch8' */
  real_T Switch9_b;                    /* '<S28>/Switch9' */
  real_T SumofElements_c;              /* '<S28>/Sum of Elements' */
  real_T MultiportSwitch_g;            /* '<S28>/Multiport Switch' */
  real_T Sum1_o;                       /* '<S30>/Sum1' */
  real_T Gain1_n;                      /* '<S30>/Gain1' */
  real_T Sum_d;                        /* '<S30>/Sum' */
  real_T Gain_dy;                      /* '<S30>/Gain' */
  real_T Product_p;                    /* '<S30>/Product' */
  real_T Add1_h;                       /* '<S30>/Add1' */
  real_T MultiportSwitch_b;            /* '<S30>/Multiport Switch' */
  real_T Product_i;                    /* '<S32>/Product' */
  real_T Product1_lf;                  /* '<S32>/Product1' */
  real_T Switch1_ip;                   /* '<S32>/Switch1' */
  real_T Switch2_e;                    /* '<S32>/Switch2' */
  real_T Switch3_f;                    /* '<S32>/Switch3' */
  real_T Switch4_f;                    /* '<S32>/Switch4' */
  real_T Switch5_m;                    /* '<S32>/Switch5' */
  real_T Switch6_i;                    /* '<S32>/Switch6' */
  real_T Switch7_n;                    /* '<S32>/Switch7' */
  real_T Switch8_i;                    /* '<S32>/Switch8' */
  real_T Switch9_g;                    /* '<S32>/Switch9' */
  real_T SumofElements_a;              /* '<S32>/Sum of Elements' */
  real_T MultiportSwitch_c;            /* '<S32>/Multiport Switch' */
  real_T Product_m;                    /* '<S31>/Product' */
  real_T Add1_gl;                      /* '<S31>/Add1' */
  real_T FromWs_i;                     /* '<S33>/FromWs' */
  real_T FromWs_l;                     /* '<S34>/FromWs' */
  real_T FromWs_a;                     /* '<S35>/FromWs' */
  real_T FromWs_g;                     /* '<S36>/FromWs' */
  real_T MultiportSwitch_ok;           /* '<S31>/Multiport Switch' */
  real_T MultiportSwitch1_c;           /* '<S31>/Multiport Switch1' */
  real_T Sum_j;                        /* '<S31>/Sum' */
  real_T Gain_c;                       /* '<S31>/Gain' */
  real_T Sum1_d;                       /* '<S31>/Sum1' */
  real_T Gain1_o;                      /* '<S31>/Gain1' */
  real_T Sum2_e;                       /* '<S31>/Sum2' */
  real_T Gain2_c;                      /* '<S31>/Gain2' */
  real_T Sum3_n;                       /* '<S31>/Sum3' */
  real_T Gain3_j;                      /* '<S31>/Gain3' */
  real_T diancifa11_1_l;               /* '<S25>/Chart' */
  real_T diancifa11_2_i;               /* '<S25>/Chart' */
  real_T diancifa11_5_k;               /* '<S25>/Chart' */
  real_T diancifa20_l;                 /* '<S25>/Chart' */
  real_T diancifa16_1_cy;              /* '<S25>/Chart' */
  real_T diancifa3_m;                  /* '<S25>/Chart' */
  real_T diancifa21_h;                 /* '<S25>/Chart' */
  real_T suoding_j;                    /* '<S25>/Chart' */
  real_T jiesuo_k;                     /* '<S25>/Chart' */
  real_T xuansong_g;                   /* '<S25>/Chart' */
  real_T xuanjin_l;                    /* '<S25>/Chart' */
  real_T bililiuliangfa18_1_b;         /* '<S25>/Chart' */
  real_T bililiuliangfa18_2_j;         /* '<S25>/Chart' */
  real_T bililiuliangfa18_3_l;         /* '<S25>/Chart' */
  real_T bililiuliangfa18_4_l;         /* '<S25>/Chart' */
  real_T kaigaikaishi_e;               /* '<S25>/Chart' */
  real_T guangaikaishi_o;              /* '<S25>/Chart' */
  real_T SCzhushuiwancheng_c;          /* '<S25>/Chart' */
  real_T SCjiayawancheng_k;            /* '<S25>/Chart' */
  real_T SXQjunyawancheng_h;           /* '<S25>/Chart' */
  real_T SXQxieyawancheng_g;           /* '<S25>/Chart' */
  real_T SQshiyabuchangwancheng_l;     /* '<S25>/Chart' */
  real_T SQxuanjinjianyawancheng_n;    /* '<S25>/Chart' */
  real_T kaigaiwancheng_b;             /* '<S25>/Chart' */
  real_T guangaiwancheng_f;            /* '<S25>/Chart' */
  real_T p0_1;                         /* '<S25>/Chart' */
  real_T p0_2;                         /* '<S25>/Chart' */
  real_T DataTypeConversion20;         /* '<Root>/Data Type Conversion20' */
  real_T DataTypeConversion21;         /* '<Root>/Data Type Conversion21' */
  real_T DataTypeConversion19;         /* '<Root>/Data Type Conversion19' */
  real_T DataTypeConversion23;         /* '<Root>/Data Type Conversion23' */
  real_T DataTypeConversion16;         /* '<Root>/Data Type Conversion16' */
  real_T DataTypeConversion17;         /* '<Root>/Data Type Conversion17' */
  uint16_T CANbitunpacking7_o1;        /* '<S17>/CAN bit-unpacking 7' */
  uint16_T CANbitunpacking7_o2;        /* '<S17>/CAN bit-unpacking 7' */
  uint16_T CANbitunpacking7_o3;        /* '<S17>/CAN bit-unpacking 7' */
  uint16_T CANbitunpacking7_o4;        /* '<S17>/CAN bit-unpacking 7' */
  uint16_T CANbitunpacking6_o1;        /* '<S17>/CAN bit-unpacking 6' */
  uint16_T CANbitunpacking6_o2;        /* '<S17>/CAN bit-unpacking 6' */
  uint16_T CANbitunpacking5_o1;        /* '<S17>/CAN bit-unpacking 5' */
  uint16_T CANbitunpacking5_o2;        /* '<S17>/CAN bit-unpacking 5' */
  uint16_T CANbitunpacking5_o3;        /* '<S17>/CAN bit-unpacking 5' */
  uint16_T Add_f;                      /* '<Root>/Add' */
  uint16_T CANbitunpacking4_o1;        /* '<S17>/CAN bit-unpacking 4' */
  uint16_T CANbitunpacking4_o2;        /* '<S17>/CAN bit-unpacking 4' */
  uint16_T CANbitunpacking3_o1;        /* '<S17>/CAN bit-unpacking 3' */
  uint16_T CANbitunpacking3_o2;        /* '<S17>/CAN bit-unpacking 3' */
  uint16_T CANbitunpacking3_o3;        /* '<S17>/CAN bit-unpacking 3' */
  uint16_T CANbitunpacking3_o4;        /* '<S17>/CAN bit-unpacking 3' */
  uint16_T CANbitunpacking9_o1;        /* '<S17>/CAN bit-unpacking 9' */
  uint16_T CANbitunpacking9_o2;        /* '<S17>/CAN bit-unpacking 9' */
  uint16_T CANbitunpacking9_o3;        /* '<S17>/CAN bit-unpacking 9' */
  uint8_T DataTypeConversion_n;        /* '<S17>/Data Type Conversion' */
  uint8_T DataTypeConversion1_e;       /* '<S17>/Data Type Conversion1' */
  uint8_T DataTypeConversion2_b;       /* '<S17>/Data Type Conversion2' */
  uint8_T DataTypeConversion3_p;       /* '<S17>/Data Type Conversion3' */
  uint8_T DataTypeConversion4_o;       /* '<S17>/Data Type Conversion4' */
  uint8_T DataTypeConversion5_e;       /* '<S17>/Data Type Conversion5' */
  uint8_T DataTypeConversion6_g;       /* '<S17>/Data Type Conversion6' */
  uint8_T DataTypeConversion7_m;       /* '<S17>/Data Type Conversion7' */
  uint8_T ManualSwitch2[8];            /* '<S17>/Manual Switch2' */
  uint8_T ManualSwitch4[8];            /* '<S17>/Manual Switch4' */
  uint8_T ManualSwitch[8];             /* '<S17>/Manual Switch' */
  uint8_T ManualSwitch1[8];            /* '<S17>/Manual Switch1' */
  uint8_T ManualSwitch3[8];            /* '<S17>/Manual Switch3' */
  uint8_T DataTypeConversion8_l;       /* '<S17>/Data Type Conversion8' */
  uint8_T DataTypeConversion9_p;       /* '<S17>/Data Type Conversion9' */
  uint8_T DataTypeConversion10_e;      /* '<S17>/Data Type Conversion10' */
  uint8_T DataTypeConversion11_i;      /* '<S17>/Data Type Conversion11' */
  uint8_T DataTypeConversion12_h;      /* '<S17>/Data Type Conversion12' */
  uint8_T DataTypeConversion13_f;      /* '<S17>/Data Type Conversion13' */
  uint8_T DataTypeConversion14_p;      /* '<S17>/Data Type Conversion14' */
  uint8_T DataTypeConversion15_i;      /* '<S17>/Data Type Conversion15' */
  uint8_T DataTypeConversion22_l;      /* '<S17>/Data Type Conversion22' */
  uint8_T DataTypeConversion23_c;      /* '<S17>/Data Type Conversion23' */
  uint8_T DataTypeConversion16_o;      /* '<S17>/Data Type Conversion16' */
  uint8_T DataTypeConversion17_o;      /* '<S17>/Data Type Conversion17' */
  uint8_T DataTypeConversion18_o;      /* '<S17>/Data Type Conversion18' */
  uint8_T DataTypeConversion19_j;      /* '<S17>/Data Type Conversion19' */
  uint8_T DataTypeConversion20_a;      /* '<S17>/Data Type Conversion20' */
  uint8_T DataTypeConversion21_m;      /* '<S17>/Data Type Conversion21' */
  uint8_T DataTypeConversion30_b;      /* '<S17>/Data Type Conversion30' */
  uint8_T DataTypeConversion31_i;      /* '<S17>/Data Type Conversion31' */
  uint8_T DataTypeConversion24_p;      /* '<S17>/Data Type Conversion24' */
  uint8_T DataTypeConversion25_m;      /* '<S17>/Data Type Conversion25' */
  uint8_T DataTypeConversion26_o;      /* '<S17>/Data Type Conversion26' */
  uint8_T DataTypeConversion27_j;      /* '<S17>/Data Type Conversion27' */
  uint8_T DataTypeConversion28_f;      /* '<S17>/Data Type Conversion28' */
  uint8_T DataTypeConversion29_d;      /* '<S17>/Data Type Conversion29' */
  uint8_T DataTypeConversion38;        /* '<S17>/Data Type Conversion38' */
  uint8_T DataTypeConversion39;        /* '<S17>/Data Type Conversion39' */
  uint8_T DataTypeConversion32_h;      /* '<S17>/Data Type Conversion32' */
  uint8_T DataTypeConversion33_b;      /* '<S17>/Data Type Conversion33' */
  uint8_T DataTypeConversion34_j;      /* '<S17>/Data Type Conversion34' */
  uint8_T DataTypeConversion35_b;      /* '<S17>/Data Type Conversion35' */
  uint8_T DataTypeConversion36;        /* '<S17>/Data Type Conversion36' */
  uint8_T DataTypeConversion37;        /* '<S17>/Data Type Conversion37' */
  uint8_T DataTypeConversion46;        /* '<S17>/Data Type Conversion46' */
  uint8_T DataTypeConversion47;        /* '<S17>/Data Type Conversion47' */
  uint8_T DataTypeConversion40;        /* '<S17>/Data Type Conversion40' */
  uint8_T DataTypeConversion41;        /* '<S17>/Data Type Conversion41' */
  uint8_T DataTypeConversion42;        /* '<S17>/Data Type Conversion42' */
  uint8_T DataTypeConversion43;        /* '<S17>/Data Type Conversion43' */
  uint8_T DataTypeConversion44;        /* '<S17>/Data Type Conversion44' */
  uint8_T DataTypeConversion45;        /* '<S17>/Data Type Conversion45' */
  boolean_T Compare;                   /* '<S47>/Compare' */
  boolean_T Compare_l;                 /* '<S49>/Compare' */
  boolean_T Compare_i;                 /* '<S50>/Compare' */
  boolean_T Compare_h;                 /* '<S51>/Compare' */
  boolean_T Compare_lr;                /* '<S52>/Compare' */
  boolean_T Compare_o;                 /* '<S48>/Compare' */
  boolean_T LogicalOperator;           /* '<S46>/Logical Operator' */
  boolean_T LogicalOperator4;          /* '<Root>/Logical Operator4' */
  boolean_T LogicalOperator3;          /* '<Root>/Logical Operator3' */
  boolean_T CANbitunpacking2_o1;       /* '<S17>/CAN bit-unpacking 2' */
  boolean_T CANbitunpacking2_o2;       /* '<S17>/CAN bit-unpacking 2' */
  boolean_T CANbitunpacking2_o3;       /* '<S17>/CAN bit-unpacking 2' */
  boolean_T CANbitunpacking2_o4;       /* '<S17>/CAN bit-unpacking 2' */
  boolean_T CANbitunpacking2_o5;       /* '<S17>/CAN bit-unpacking 2' */
  boolean_T CANbitunpacking2_o6;       /* '<S17>/CAN bit-unpacking 2' */
  boolean_T CANbitunpacking2_o7;       /* '<S17>/CAN bit-unpacking 2' */
  boolean_T CANbitunpacking2_o8;       /* '<S17>/CAN bit-unpacking 2' */
  boolean_T CANbitunpacking2_o9;       /* '<S17>/CAN bit-unpacking 2' */
  boolean_T CANbitunpacking2_o10;      /* '<S17>/CAN bit-unpacking 2' */
  boolean_T CANbitunpacking2_o11;      /* '<S17>/CAN bit-unpacking 2' */
  boolean_T CANbitunpacking2_o12;      /* '<S17>/CAN bit-unpacking 2' */
  boolean_T CANbitunpacking2_o13;      /* '<S17>/CAN bit-unpacking 2' */
  boolean_T CANbitunpacking2_o14;      /* '<S17>/CAN bit-unpacking 2' */
  boolean_T CANbitunpacking2_o15;      /* '<S17>/CAN bit-unpacking 2' */
  boolean_T CANbitunpacking2_o16;      /* '<S17>/CAN bit-unpacking 2' */
  boolean_T LogicalOperator1[16];      /* '<S17>/Logical Operator1' */
  boolean_T LogicalOperator1_p;        /* '<Root>/Logical Operator1' */
  boolean_T LogicalOperator2;          /* '<Root>/Logical Operator2' */
  boolean_T CANbitunpacking8;          /* '<S17>/CAN bit-unpacking 8' */
  boolean_T LogicalOperator_e;         /* '<S17>/Logical Operator' */
  boolean_T LogicalOperator7;          /* '<Root>/Logical Operator7' */
  boolean_T LogicalOperator8;          /* '<Root>/Logical Operator8' */
  boolean_T LogicalOperator9;          /* '<Root>/Logical Operator9' */
  boolean_T Compare_iu;                /* '<S3>/Compare' */
  boolean_T Compare_f;                 /* '<S4>/Compare' */
  boolean_T LogicalOperator10;         /* '<Root>/Logical Operator10' */
  boolean_T LogicalOperator11;         /* '<Root>/Logical Operator11' */
  boolean_T LogicalOperator12;         /* '<Root>/Logical Operator12' */
  boolean_T LogicalOperator3_o;        /* '<S14>/Logical Operator3' */
  boolean_T LogicalOperator2_j;        /* '<S14>/Logical Operator2' */
  boolean_T LogicalOperator_n;         /* '<S14>/Logical Operator' */
  boolean_T LogicalOperator1_pe;       /* '<S14>/Logical Operator1' */
  boolean_T LogicalOperator_h;         /* '<S5>/Logical Operator' */
  boolean_T LogicalOperator1_o;        /* '<S5>/Logical Operator1' */
  boolean_T Compare_m;                 /* '<S1>/Compare' */
  boolean_T Compare_lg;                /* '<S2>/Compare' */
  boolean_T LogicalOperator_k;         /* '<Root>/Logical Operator' */
  boolean_T LogicalOperator5;          /* '<Root>/Logical Operator5' */
  boolean_T LogicalOperator6;          /* '<Root>/Logical Operator6' */
  B_Chart1_aaa_T sf_Chart;             /* '<S20>/Chart' */
  B_Chart1_aaa_T sf_Chart1;            /* '<S18>/Chart1' */
  B_Subsystem3_aaa_T Subsystem4;       /* '<Root>/Subsystem4' */
  B_Subsystem3_aaa_T Subsystem3;       /* '<Root>/Subsystem3' */
} B_aaa_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T Memory_PreviousInput;         /* '<Root>/Memory' */
  real_T Memory1_PreviousInput;        /* '<Root>/Memory1' */
  real_T Memory_PreviousInput_c;       /* '<S22>/Memory' */
  real_T Memory1_PreviousInput_n;      /* '<S22>/Memory1' */
  real_T Memory_PreviousInput_g;       /* '<S23>/Memory' */
  real_T Memory_PreviousInput_o;       /* '<S24>/Memory' */
  real_T Memory1_PreviousInput_f;      /* '<S24>/Memory1' */
  real_T Memory1_PreviousInput_d;      /* '<S23>/Memory1' */
  real_T Memory2_PreviousInput;        /* '<Root>/Memory2' */
  real_T p0_1;                         /* '<S26>/Chart' */
  real_T p0_2;                         /* '<S26>/Chart' */
  real_T PCI1784_RWORK[64];            /* '<Root>/PCI-1784' */
  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<Root>/Scope' */

  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWs_PWORK;                      /* '<S42>/FromWs' */

  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWs_PWORK_n;                    /* '<S43>/FromWs' */

  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWs_PWORK_g;                    /* '<S44>/FromWs' */

  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWs_PWORK_i;                    /* '<S45>/FromWs' */

  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWs_PWORK_ih;                   /* '<S33>/FromWs' */

  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWs_PWORK_gq;                   /* '<S34>/FromWs' */

  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWs_PWORK_nl;                   /* '<S35>/FromWs' */

  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWs_PWORK_k;                    /* '<S36>/FromWs' */

  int32_T sfEvent;                     /* '<S19>/jinjichuli' */
  int32_T sfEvent_d;                   /* '<S26>/Chart' */
  int32_T sfEvent_e;                   /* '<S25>/Chart' */
  int_T PCI1716DIO1_IWORK[6];          /* '<S5>/PCI1716DIO1' */
  int_T PCI6208ADA_IWORK[3];           /* '<S6>/PCI-6208A DA ' */
  struct {
    int_T AcquireOK;
  } SFunction_IWORK;                   /* '<S7>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_n;                 /* '<S8>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_p;                 /* '<S9>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_i;                 /* '<S10>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_g;                 /* '<S11>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_c;                 /* '<S12>/S-Function' */

  int_T PCI1784_IWORK[66];             /* '<Root>/PCI-1784' */
  struct {
    int_T PrevIndex;
  } FromWs_IWORK;                      /* '<S42>/FromWs' */

  struct {
    int_T PrevIndex;
  } FromWs_IWORK_f;                    /* '<S43>/FromWs' */

  struct {
    int_T PrevIndex;
  } FromWs_IWORK_c;                    /* '<S44>/FromWs' */

  struct {
    int_T PrevIndex;
  } FromWs_IWORK_j;                    /* '<S45>/FromWs' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_p4;                /* '<S29>/S-Function' */

  struct {
    int_T PrevIndex;
  } FromWs_IWORK_a;                    /* '<S33>/FromWs' */

  struct {
    int_T PrevIndex;
  } FromWs_IWORK_n;                    /* '<S34>/FromWs' */

  struct {
    int_T PrevIndex;
  } FromWs_IWORK_jn;                   /* '<S35>/FromWs' */

  struct {
    int_T PrevIndex;
  } FromWs_IWORK_p;                    /* '<S36>/FromWs' */

  uint16_T temporalCounter_i1;         /* '<S19>/jinjichuli' */
  uint16_T temporalCounter_i1_e;       /* '<S26>/Chart' */
  uint16_T temporalCounter_i1_i;       /* '<S25>/Chart' */
  uint16_T temporalCounter_i2;         /* '<S25>/Chart' */
  uint16_T temporalCounter_i3;         /* '<S25>/Chart' */
  uint16_T temporalCounter_i5;         /* '<S25>/Chart' */
  int8_T jinjichuli_SubsysRanBC;       /* '<Root>/jinjichuli' */
  int8_T zidong_SubsysRanBC;           /* '<S14>/zidong' */
  int8_T shoudong_SubsysRanBC;         /* '<S14>/shoudong' */
  uint8_T is_active_c2_aaa;            /* '<S19>/jinjichuli' */
  uint8_T is_c2_aaa;                   /* '<S19>/jinjichuli' */
  uint8_T is_fa4_4;                    /* '<S19>/jinjichuli' */
  uint8_T is_active_fa4_4;             /* '<S19>/jinjichuli' */
  uint8_T is_fa4_2;                    /* '<S19>/jinjichuli' */
  uint8_T is_active_fa4_2;             /* '<S19>/jinjichuli' */
  uint8_T is_fa4_3;                    /* '<S19>/jinjichuli' */
  uint8_T is_active_fa4_3;             /* '<S19>/jinjichuli' */
  uint8_T is_fa4_1;                    /* '<S19>/jinjichuli' */
  uint8_T is_active_fa4_1;             /* '<S19>/jinjichuli' */
  uint8_T is_fa4_5;                    /* '<S19>/jinjichuli' */
  uint8_T is_active_fa4_5;             /* '<S19>/jinjichuli' */
  uint8_T is_fa4_6;                    /* '<S19>/jinjichuli' */
  uint8_T is_active_fa4_6;             /* '<S19>/jinjichuli' */
  uint8_T is_fa4_8;                    /* '<S19>/jinjichuli' */
  uint8_T is_active_fa4_8;             /* '<S19>/jinjichuli' */
  uint8_T is_fa4_7;                    /* '<S19>/jinjichuli' */
  uint8_T is_active_fa4_7;             /* '<S19>/jinjichuli' */
  uint8_T is_fa4_9;                    /* '<S19>/jinjichuli' */
  uint8_T is_active_fa4_9;             /* '<S19>/jinjichuli' */
  uint8_T is_fa4_10;                   /* '<S19>/jinjichuli' */
  uint8_T is_active_fa4_10;            /* '<S19>/jinjichuli' */
  uint8_T is_fa4_12;                   /* '<S19>/jinjichuli' */
  uint8_T is_active_fa4_12;            /* '<S19>/jinjichuli' */
  uint8_T is_fa4_11;                   /* '<S19>/jinjichuli' */
  uint8_T is_active_fa4_11;            /* '<S19>/jinjichuli' */
  uint8_T is_fa4_13;                   /* '<S19>/jinjichuli' */
  uint8_T is_active_fa4_13;            /* '<S19>/jinjichuli' */
  uint8_T is_kiagai;                   /* '<S19>/jinjichuli' */
  uint8_T is_active_kiagai;            /* '<S19>/jinjichuli' */
  uint8_T is_yajin;                    /* '<S19>/jinjichuli' */
  uint8_T is_active_yajin;             /* '<S19>/jinjichuli' */
  uint8_T is_kaigai;                   /* '<S19>/jinjichuli' */
  uint8_T is_active_kaigai;            /* '<S19>/jinjichuli' */
  uint8_T is_active_c1_aaa;            /* '<S26>/Chart' */
  uint8_T is_c1_aaa;                   /* '<S26>/Chart' */
  uint8_T is_zidong;                   /* '<S26>/Chart' */
  uint8_T is_SXQxieya;                 /* '<S26>/Chart' */
  uint8_T is_kaiguangai;               /* '<S26>/Chart' */
  uint8_T is_SCjiaya;                  /* '<S26>/Chart' */
  uint8_T is_SCzhushui;                /* '<S26>/Chart' */
  uint8_T is_SXQjunya;                 /* '<S26>/Chart' */
  uint8_T is_active_c4_aaa;            /* '<S25>/Chart' */
  uint8_T is_c4_aaa;                   /* '<S25>/Chart' */
  uint8_T is_kaiguangai_c;             /* '<S25>/Chart' */
  uint8_T is_active_kaiguangai;        /* '<S25>/Chart' */
  uint8_T is_SXQxieya_o;               /* '<S25>/Chart' */
  uint8_T is_active_SXQxieya;          /* '<S25>/Chart' */
  uint8_T is_SCjiaya_k;                /* '<S25>/Chart' */
  uint8_T is_active_SCjiaya;           /* '<S25>/Chart' */
  uint8_T is_SCzhushui_f;              /* '<S25>/Chart' */
  uint8_T is_active_SCzhushui;         /* '<S25>/Chart' */
  uint8_T is_SXQjunya_c;               /* '<S25>/Chart' */
  uint8_T is_active_SXQjunya;          /* '<S25>/Chart' */
  uint8_T temporalCounter_i4;          /* '<S25>/Chart' */
  boolean_T jinjichuli_MODE;           /* '<Root>/jinjichuli' */
  boolean_T zidong_MODE;               /* '<S14>/zidong' */
  boolean_T shoudong_MODE;             /* '<S14>/shoudong' */
  DW_Chart1_aaa_T sf_Chart;            /* '<S20>/Chart' */
  DW_Chart1_aaa_T sf_Chart1;           /* '<S18>/Chart1' */
  DW_Subsystem3_aaa_T Subsystem4;      /* '<Root>/Subsystem4' */
  DW_Subsystem3_aaa_T Subsystem3;      /* '<Root>/Subsystem3' */
} DW_aaa_T;

/* Backward compatible GRT Identifiers */
#define rtB                            aaa_B
#define BlockIO                        B_aaa_T
#define rtP                            aaa_P
#define Parameters                     P_aaa_T
#define rtDWork                        aaa_DW
#define D_Work                         DW_aaa_T

/* Parameters for system: '<Root>/Subsystem3' */
struct P_Subsystem3_aaa_T_ {
  real_T Out1_Y0;                      /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S15>/Out1'
                                        */
  real_T Constant_Value;               /* Expression: 20
                                        * Referenced by: '<S15>/Constant'
                                        */
};

/* Parameters (auto storage) */
struct P_aaa_T_ {
  real_T CompareToConstant1_const;     /* Mask Parameter: CompareToConstant1_const
                                        * Referenced by: '<S47>/Constant'
                                        */
  real_T CompareToConstant3_const;     /* Mask Parameter: CompareToConstant3_const
                                        * Referenced by: '<S49>/Constant'
                                        */
  real_T CompareToConstant5_const;     /* Mask Parameter: CompareToConstant5_const
                                        * Referenced by: '<S50>/Constant'
                                        */
  real_T CompareToConstant7_const;     /* Mask Parameter: CompareToConstant7_const
                                        * Referenced by: '<S51>/Constant'
                                        */
  real_T CompareToConstant9_const;     /* Mask Parameter: CompareToConstant9_const
                                        * Referenced by: '<S52>/Constant'
                                        */
  real_T CompareToConstant11_const;    /* Mask Parameter: CompareToConstant11_const
                                        * Referenced by: '<S48>/Constant'
                                        */
  real_T CompareToConstant_const;      /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T CompareToConstant1_const_k;   /* Mask Parameter: CompareToConstant1_const_k
                                        * Referenced by: '<S2>/Constant'
                                        */
  uint16_T CompareToConstant2_const;   /* Mask Parameter: CompareToConstant2_const
                                        * Referenced by: '<S3>/Constant'
                                        */
  uint16_T CompareToConstant3_const_p; /* Mask Parameter: CompareToConstant3_const_p
                                        * Referenced by: '<S4>/Constant'
                                        */
  real_T Constant3_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant3'
                                        */
  real_T Constant1_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T guangai_Value;                /* Expression: 0
                                        * Referenced by: '<Root>/guangai'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<S22>/Constant2'
                                        */
  real_T kaigai_Value;                 /* Expression: 0
                                        * Referenced by: '<Root>/kaigai'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S22>/Constant'
                                        */
  real_T xuanjin_Value;                /* Expression: 0
                                        * Referenced by: '<Root>/xuanjin'
                                        */
  real_T Constant2_Value_a;            /* Expression: 0
                                        * Referenced by: '<S23>/Constant2'
                                        */
  real_T xuansong_Value;               /* Expression: 0
                                        * Referenced by: '<Root>/xuansong'
                                        */
  real_T Constant_Value_l;             /* Expression: 0
                                        * Referenced by: '<S23>/Constant'
                                        */
  real_T jiesuo_Value;                 /* Expression: 0
                                        * Referenced by: '<Root>/jiesuo'
                                        */
  real_T Constant2_Value_j;            /* Expression: 0
                                        * Referenced by: '<S24>/Constant2'
                                        */
  real_T suoding_Value;                /* Expression: 0
                                        * Referenced by: '<Root>/suoding'
                                        */
  real_T Constant_Value_k;             /* Expression: 0
                                        * Referenced by: '<S24>/Constant'
                                        */
  real_T Constant19_Value;             /* Expression: 1
                                        * Referenced by: '<S28>/Constant19'
                                        */
  real_T Constant18_Value;             /* Expression: 0
                                        * Referenced by: '<S28>/Constant18'
                                        */
  real_T Constant17_Value;             /* Expression: 1
                                        * Referenced by: '<S28>/Constant17'
                                        */
  real_T Constant16_Value;             /* Expression: 0
                                        * Referenced by: '<S28>/Constant16'
                                        */
  real_T Constant15_Value;             /* Expression: 1
                                        * Referenced by: '<S28>/Constant15'
                                        */
  real_T Constant14_Value;             /* Expression: 0
                                        * Referenced by: '<S28>/Constant14'
                                        */
  real_T Constant13_Value;             /* Expression: 1
                                        * Referenced by: '<S28>/Constant13'
                                        */
  real_T Constant12_Value;             /* Expression: 0
                                        * Referenced by: '<S28>/Constant12'
                                        */
  real_T Constant11_Value;             /* Expression: 1
                                        * Referenced by: '<S28>/Constant11'
                                        */
  real_T Constant10_Value;             /* Expression: 0
                                        * Referenced by: '<S28>/Constant10'
                                        */
  real_T Constant9_Value;              /* Expression: 1
                                        * Referenced by: '<S28>/Constant9'
                                        */
  real_T Constant8_Value;              /* Expression: 0
                                        * Referenced by: '<S28>/Constant8'
                                        */
  real_T Constant7_Value;              /* Expression: 1
                                        * Referenced by: '<S28>/Constant7'
                                        */
  real_T Constant6_Value;              /* Expression: 0
                                        * Referenced by: '<S28>/Constant6'
                                        */
  real_T Constant5_Value;              /* Expression: 1
                                        * Referenced by: '<S28>/Constant5'
                                        */
  real_T Constant4_Value;              /* Expression: 0
                                        * Referenced by: '<S28>/Constant4'
                                        */
  real_T Constant3_Value_a;            /* Expression: 1
                                        * Referenced by: '<S28>/Constant3'
                                        */
  real_T Constant2_Value_e;            /* Expression: 0
                                        * Referenced by: '<S28>/Constant2'
                                        */
  real_T Constant29_Value;             /* Expression: 10
                                        * Referenced by: '<S28>/Constant29'
                                        */
  real_T Constant28_Value;             /* Expression: 6
                                        * Referenced by: '<S28>/Constant28'
                                        */
  real_T Constant27_Value;             /* Expression: 4
                                        * Referenced by: '<S28>/Constant27'
                                        */
  real_T Constant26_Value;             /* Expression: 3
                                        * Referenced by: '<S28>/Constant26'
                                        */
  real_T Constant25_Value;             /* Expression: 2
                                        * Referenced by: '<S28>/Constant25'
                                        */
  real_T Constant24_Value;             /* Expression: 1.5
                                        * Referenced by: '<S28>/Constant24'
                                        */
  real_T Constant23_Value;             /* Expression: 1
                                        * Referenced by: '<S28>/Constant23'
                                        */
  real_T Constant22_Value;             /* Expression: 0.6
                                        * Referenced by: '<S28>/Constant22'
                                        */
  real_T Constant21_Value;             /* Expression: 0.4
                                        * Referenced by: '<S28>/Constant21'
                                        */
  real_T Constant20_Value;             /* Expression: 0.2
                                        * Referenced by: '<S28>/Constant20'
                                        */
  real_T Constant1_Value_o;            /* Expression: -0.05
                                        * Referenced by: '<S30>/Constant1'
                                        */
  real_T Gain3_Gain;                   /* Expression: 1
                                        * Referenced by: '<S31>/Gain3'
                                        */
  real_T Gain2_Gain;                   /* Expression: 1
                                        * Referenced by: '<S31>/Gain2'
                                        */
  real_T Gain1_Gain;                   /* Expression: 1
                                        * Referenced by: '<S31>/Gain1'
                                        */
  real_T Gain_Gain;                    /* Expression: 1
                                        * Referenced by: '<S31>/Gain'
                                        */
  real_T Constant19_Value_g;           /* Expression: 1
                                        * Referenced by: '<S32>/Constant19'
                                        */
  real_T Constant18_Value_n;           /* Expression: 0
                                        * Referenced by: '<S32>/Constant18'
                                        */
  real_T Constant17_Value_a;           /* Expression: 1
                                        * Referenced by: '<S32>/Constant17'
                                        */
  real_T Constant16_Value_g;           /* Expression: 0
                                        * Referenced by: '<S32>/Constant16'
                                        */
  real_T Constant15_Value_a;           /* Expression: 1
                                        * Referenced by: '<S32>/Constant15'
                                        */
  real_T Constant14_Value_g;           /* Expression: 0
                                        * Referenced by: '<S32>/Constant14'
                                        */
  real_T Constant13_Value_g;           /* Expression: 1
                                        * Referenced by: '<S32>/Constant13'
                                        */
  real_T Constant12_Value_k;           /* Expression: 0
                                        * Referenced by: '<S32>/Constant12'
                                        */
  real_T Constant11_Value_e;           /* Expression: 1
                                        * Referenced by: '<S32>/Constant11'
                                        */
  real_T Constant10_Value_h;           /* Expression: 0
                                        * Referenced by: '<S32>/Constant10'
                                        */
  real_T Constant9_Value_n;            /* Expression: 1
                                        * Referenced by: '<S32>/Constant9'
                                        */
  real_T Constant8_Value_j;            /* Expression: 0
                                        * Referenced by: '<S32>/Constant8'
                                        */
  real_T Constant7_Value_j;            /* Expression: 1
                                        * Referenced by: '<S32>/Constant7'
                                        */
  real_T Constant6_Value_d;            /* Expression: 0
                                        * Referenced by: '<S32>/Constant6'
                                        */
  real_T Constant5_Value_m;            /* Expression: 1
                                        * Referenced by: '<S32>/Constant5'
                                        */
  real_T Constant4_Value_b;            /* Expression: 0
                                        * Referenced by: '<S32>/Constant4'
                                        */
  real_T Constant3_Value_o;            /* Expression: 1
                                        * Referenced by: '<S32>/Constant3'
                                        */
  real_T Constant2_Value_l;            /* Expression: 0
                                        * Referenced by: '<S32>/Constant2'
                                        */
  real_T Constant29_Value_b;           /* Expression: 10
                                        * Referenced by: '<S32>/Constant29'
                                        */
  real_T Constant28_Value_n;           /* Expression: 6
                                        * Referenced by: '<S32>/Constant28'
                                        */
  real_T Constant27_Value_l;           /* Expression: 4
                                        * Referenced by: '<S32>/Constant27'
                                        */
  real_T Constant26_Value_f;           /* Expression: 3
                                        * Referenced by: '<S32>/Constant26'
                                        */
  real_T Constant25_Value_f;           /* Expression: 2
                                        * Referenced by: '<S32>/Constant25'
                                        */
  real_T Constant24_Value_j;           /* Expression: 1.5
                                        * Referenced by: '<S32>/Constant24'
                                        */
  real_T Constant23_Value_g;           /* Expression: 1
                                        * Referenced by: '<S32>/Constant23'
                                        */
  real_T Constant22_Value_o;           /* Expression: 0.6
                                        * Referenced by: '<S32>/Constant22'
                                        */
  real_T Constant21_Value_g;           /* Expression: 0.4
                                        * Referenced by: '<S32>/Constant21'
                                        */
  real_T Constant20_Value_e;           /* Expression: 0.2
                                        * Referenced by: '<S32>/Constant20'
                                        */
  real_T bililiuliangfa18_1_Y0;        /* Computed Parameter: bililiuliangfa18_1_Y0
                                        * Referenced by: '<S25>/bililiuliangfa18_1'
                                        */
  real_T bililiuliangfa18_2_Y0;        /* Computed Parameter: bililiuliangfa18_2_Y0
                                        * Referenced by: '<S25>/bililiuliangfa18_2'
                                        */
  real_T bililiuliangfa18_3_Y0;        /* Computed Parameter: bililiuliangfa18_3_Y0
                                        * Referenced by: '<S25>/bililiuliangfa18_3'
                                        */
  real_T bililiuliangfa18_4_Y0;        /* Computed Parameter: bililiuliangfa18_4_Y0
                                        * Referenced by: '<S25>/bililiuliangfa18_4'
                                        */
  real_T kaiguangaifa_Y0;              /* Computed Parameter: kaiguangaifa_Y0
                                        * Referenced by: '<S25>/kaiguangaifa'
                                        */
  real_T Constant_Value_c;             /* Expression: 10
                                        * Referenced by: '<S28>/Constant'
                                        */
  real_T Gain_Gain_e;                  /* Expression: 1
                                        * Referenced by: '<S28>/Gain'
                                        */
  real_T Gain1_Gain_f;                 /* Expression: 1
                                        * Referenced by: '<S28>/Gain1'
                                        */
  real_T Constant1_Value_b;            /* Expression: 1
                                        * Referenced by: '<S28>/Constant1'
                                        */
  real_T Switch1_Threshold;            /* Expression: 0.28
                                        * Referenced by: '<S28>/Switch1'
                                        */
  real_T Switch2_Threshold;            /* Expression: 0.26
                                        * Referenced by: '<S28>/Switch2'
                                        */
  real_T Switch3_Threshold;            /* Expression: 0.24
                                        * Referenced by: '<S28>/Switch3'
                                        */
  real_T Switch4_Threshold;            /* Expression: 0.22
                                        * Referenced by: '<S28>/Switch4'
                                        */
  real_T Switch5_Threshold;            /* Expression: 0.20
                                        * Referenced by: '<S28>/Switch5'
                                        */
  real_T Switch6_Threshold;            /* Expression: 0.18
                                        * Referenced by: '<S28>/Switch6'
                                        */
  real_T Switch7_Threshold;            /* Expression: 0.16
                                        * Referenced by: '<S28>/Switch7'
                                        */
  real_T Switch8_Threshold;            /* Expression: 0.14
                                        * Referenced by: '<S28>/Switch8'
                                        */
  real_T Switch9_Threshold;            /* Expression: 0.12
                                        * Referenced by: '<S28>/Switch9'
                                        */
  real_T Gain1_Gain_n;                 /* Expression: 0.15
                                        * Referenced by: '<S30>/Gain1'
                                        */
  real_T Gain_Gain_h;                  /* Expression: 0.15
                                        * Referenced by: '<S30>/Gain'
                                        */
  real_T Constant_Value_h;             /* Expression: 2
                                        * Referenced by: '<S30>/Constant'
                                        */
  real_T Constant_Value_a;             /* Expression: 10
                                        * Referenced by: '<S32>/Constant'
                                        */
  real_T Constant1_Value_e;            /* Expression: 1
                                        * Referenced by: '<S32>/Constant1'
                                        */
  real_T Switch1_Threshold_m;          /* Expression: 0.28
                                        * Referenced by: '<S32>/Switch1'
                                        */
  real_T Switch2_Threshold_a;          /* Expression: 0.26
                                        * Referenced by: '<S32>/Switch2'
                                        */
  real_T Switch3_Threshold_l;          /* Expression: 0.24
                                        * Referenced by: '<S32>/Switch3'
                                        */
  real_T Switch4_Threshold_a;          /* Expression: 0.22
                                        * Referenced by: '<S32>/Switch4'
                                        */
  real_T Switch5_Threshold_o;          /* Expression: 0.20
                                        * Referenced by: '<S32>/Switch5'
                                        */
  real_T Switch6_Threshold_b;          /* Expression: 0.18
                                        * Referenced by: '<S32>/Switch6'
                                        */
  real_T Switch7_Threshold_g;          /* Expression: 0.16
                                        * Referenced by: '<S32>/Switch7'
                                        */
  real_T Switch8_Threshold_i;          /* Expression: 0.14
                                        * Referenced by: '<S32>/Switch8'
                                        */
  real_T Switch9_Threshold_e;          /* Expression: 0.12
                                        * Referenced by: '<S32>/Switch9'
                                        */
  real_T Constant_Value_cx;            /* Expression: 2
                                        * Referenced by: '<S31>/Constant'
                                        */
  real_T Constant1_Value_p;            /* Expression: 0
                                        * Referenced by: '<S31>/Constant1'
                                        */
  real_T Constant2_Value_lo;           /* Expression: 0
                                        * Referenced by: '<S31>/Constant2'
                                        */
  real_T Constant19_Value_o;           /* Expression: 1
                                        * Referenced by: '<S38>/Constant19'
                                        */
  real_T Constant18_Value_c;           /* Expression: 0
                                        * Referenced by: '<S38>/Constant18'
                                        */
  real_T Constant17_Value_j;           /* Expression: 1
                                        * Referenced by: '<S38>/Constant17'
                                        */
  real_T Constant16_Value_i;           /* Expression: 0
                                        * Referenced by: '<S38>/Constant16'
                                        */
  real_T Constant15_Value_o;           /* Expression: 1
                                        * Referenced by: '<S38>/Constant15'
                                        */
  real_T Constant14_Value_i;           /* Expression: 0
                                        * Referenced by: '<S38>/Constant14'
                                        */
  real_T Constant13_Value_b;           /* Expression: 1
                                        * Referenced by: '<S38>/Constant13'
                                        */
  real_T Constant12_Value_d;           /* Expression: 0
                                        * Referenced by: '<S38>/Constant12'
                                        */
  real_T Constant11_Value_et;          /* Expression: 1
                                        * Referenced by: '<S38>/Constant11'
                                        */
  real_T Constant10_Value_m;           /* Expression: 0
                                        * Referenced by: '<S38>/Constant10'
                                        */
  real_T Constant9_Value_e;            /* Expression: 1
                                        * Referenced by: '<S38>/Constant9'
                                        */
  real_T Constant8_Value_f;            /* Expression: 0
                                        * Referenced by: '<S38>/Constant8'
                                        */
  real_T Constant7_Value_a;            /* Expression: 1
                                        * Referenced by: '<S38>/Constant7'
                                        */
  real_T Constant6_Value_m;            /* Expression: 0
                                        * Referenced by: '<S38>/Constant6'
                                        */
  real_T Constant5_Value_n;            /* Expression: 1
                                        * Referenced by: '<S38>/Constant5'
                                        */
  real_T Constant4_Value_o;            /* Expression: 0
                                        * Referenced by: '<S38>/Constant4'
                                        */
  real_T Constant3_Value_f;            /* Expression: 1
                                        * Referenced by: '<S38>/Constant3'
                                        */
  real_T Constant2_Value_c;            /* Expression: 0
                                        * Referenced by: '<S38>/Constant2'
                                        */
  real_T Constant29_Value_o;           /* Expression: 10
                                        * Referenced by: '<S38>/Constant29'
                                        */
  real_T Constant28_Value_j;           /* Expression: 6
                                        * Referenced by: '<S38>/Constant28'
                                        */
  real_T Constant27_Value_j;           /* Expression: 4
                                        * Referenced by: '<S38>/Constant27'
                                        */
  real_T Constant26_Value_g;           /* Expression: 3
                                        * Referenced by: '<S38>/Constant26'
                                        */
  real_T Constant25_Value_a;           /* Expression: 2
                                        * Referenced by: '<S38>/Constant25'
                                        */
  real_T Constant24_Value_jx;          /* Expression: 1.5
                                        * Referenced by: '<S38>/Constant24'
                                        */
  real_T Constant23_Value_i;           /* Expression: 1
                                        * Referenced by: '<S38>/Constant23'
                                        */
  real_T Constant22_Value_oa;          /* Expression: 0.6
                                        * Referenced by: '<S38>/Constant22'
                                        */
  real_T Constant21_Value_e;           /* Expression: 0.4
                                        * Referenced by: '<S38>/Constant21'
                                        */
  real_T Constant20_Value_d;           /* Expression: 0.2
                                        * Referenced by: '<S38>/Constant20'
                                        */
  real_T Constant1_Value_ok;           /* Expression: -0.05
                                        * Referenced by: '<S39>/Constant1'
                                        */
  real_T Gain3_Gain_d;                 /* Expression: 1
                                        * Referenced by: '<S40>/Gain3'
                                        */
  real_T Gain2_Gain_a;                 /* Expression: 1
                                        * Referenced by: '<S40>/Gain2'
                                        */
  real_T Gain1_Gain_e;                 /* Expression: 1
                                        * Referenced by: '<S40>/Gain1'
                                        */
  real_T Gain_Gain_er;                 /* Expression: 1
                                        * Referenced by: '<S40>/Gain'
                                        */
  real_T Constant19_Value_gf;          /* Expression: 1
                                        * Referenced by: '<S41>/Constant19'
                                        */
  real_T Constant18_Value_g;           /* Expression: 0
                                        * Referenced by: '<S41>/Constant18'
                                        */
  real_T Constant17_Value_i;           /* Expression: 1
                                        * Referenced by: '<S41>/Constant17'
                                        */
  real_T Constant16_Value_n;           /* Expression: 0
                                        * Referenced by: '<S41>/Constant16'
                                        */
  real_T Constant15_Value_b;           /* Expression: 1
                                        * Referenced by: '<S41>/Constant15'
                                        */
  real_T Constant14_Value_gi;          /* Expression: 0
                                        * Referenced by: '<S41>/Constant14'
                                        */
  real_T Constant13_Value_k;           /* Expression: 1
                                        * Referenced by: '<S41>/Constant13'
                                        */
  real_T Constant12_Value_j;           /* Expression: 0
                                        * Referenced by: '<S41>/Constant12'
                                        */
  real_T Constant11_Value_n;           /* Expression: 1
                                        * Referenced by: '<S41>/Constant11'
                                        */
  real_T Constant10_Value_a;           /* Expression: 0
                                        * Referenced by: '<S41>/Constant10'
                                        */
  real_T Constant9_Value_d;            /* Expression: 1
                                        * Referenced by: '<S41>/Constant9'
                                        */
  real_T Constant8_Value_m;            /* Expression: 0
                                        * Referenced by: '<S41>/Constant8'
                                        */
  real_T Constant7_Value_o;            /* Expression: 1
                                        * Referenced by: '<S41>/Constant7'
                                        */
  real_T Constant6_Value_f;            /* Expression: 0
                                        * Referenced by: '<S41>/Constant6'
                                        */
  real_T Constant5_Value_mz;           /* Expression: 1
                                        * Referenced by: '<S41>/Constant5'
                                        */
  real_T Constant4_Value_bs;           /* Expression: 0
                                        * Referenced by: '<S41>/Constant4'
                                        */
  real_T Constant3_Value_j;            /* Expression: 1
                                        * Referenced by: '<S41>/Constant3'
                                        */
  real_T Constant2_Value_h;            /* Expression: 0
                                        * Referenced by: '<S41>/Constant2'
                                        */
  real_T Constant29_Value_p;           /* Expression: 10
                                        * Referenced by: '<S41>/Constant29'
                                        */
  real_T Constant28_Value_e;           /* Expression: 6
                                        * Referenced by: '<S41>/Constant28'
                                        */
  real_T Constant27_Value_i;           /* Expression: 4
                                        * Referenced by: '<S41>/Constant27'
                                        */
  real_T Constant26_Value_e;           /* Expression: 3
                                        * Referenced by: '<S41>/Constant26'
                                        */
  real_T Constant25_Value_o;           /* Expression: 2
                                        * Referenced by: '<S41>/Constant25'
                                        */
  real_T Constant24_Value_p;           /* Expression: 1.5
                                        * Referenced by: '<S41>/Constant24'
                                        */
  real_T Constant23_Value_d;           /* Expression: 1
                                        * Referenced by: '<S41>/Constant23'
                                        */
  real_T Constant22_Value_l;           /* Expression: 0.6
                                        * Referenced by: '<S41>/Constant22'
                                        */
  real_T Constant21_Value_f;           /* Expression: 0.4
                                        * Referenced by: '<S41>/Constant21'
                                        */
  real_T Constant20_Value_db;          /* Expression: 0.2
                                        * Referenced by: '<S41>/Constant20'
                                        */
  real_T bililiuliangfa18_1_Y0_o;      /* Computed Parameter: bililiuliangfa18_1_Y0_o
                                        * Referenced by: '<S26>/bililiuliangfa18_1'
                                        */
  real_T bililiuliangfa18_2_Y0_f;      /* Computed Parameter: bililiuliangfa18_2_Y0_f
                                        * Referenced by: '<S26>/bililiuliangfa18_2'
                                        */
  real_T bililiuliangfa18_3_Y0_i;      /* Computed Parameter: bililiuliangfa18_3_Y0_i
                                        * Referenced by: '<S26>/bililiuliangfa18_3'
                                        */
  real_T bililiuliangfa18_4_Y0_j;      /* Computed Parameter: bililiuliangfa18_4_Y0_j
                                        * Referenced by: '<S26>/bililiuliangfa18_4'
                                        */
  real_T kaiguangaifa_Y0_f;            /* Computed Parameter: kaiguangaifa_Y0_f
                                        * Referenced by: '<S26>/kaiguangaifa'
                                        */
  real_T Constant1_Value_n;            /* Expression: 1
                                        * Referenced by: '<S38>/Constant1'
                                        */
  real_T Switch1_Threshold_g;          /* Expression: 0.28
                                        * Referenced by: '<S38>/Switch1'
                                        */
  real_T Switch2_Threshold_f;          /* Expression: 0.26
                                        * Referenced by: '<S38>/Switch2'
                                        */
  real_T Switch3_Threshold_e;          /* Expression: 0.24
                                        * Referenced by: '<S38>/Switch3'
                                        */
  real_T Switch4_Threshold_b;          /* Expression: 0.22
                                        * Referenced by: '<S38>/Switch4'
                                        */
  real_T Switch5_Threshold_n;          /* Expression: 0.20
                                        * Referenced by: '<S38>/Switch5'
                                        */
  real_T Switch6_Threshold_l;          /* Expression: 0.18
                                        * Referenced by: '<S38>/Switch6'
                                        */
  real_T Switch7_Threshold_d;          /* Expression: 0.16
                                        * Referenced by: '<S38>/Switch7'
                                        */
  real_T Switch8_Threshold_n;          /* Expression: 0.14
                                        * Referenced by: '<S38>/Switch8'
                                        */
  real_T Switch9_Threshold_g;          /* Expression: 0.12
                                        * Referenced by: '<S38>/Switch9'
                                        */
  real_T Gain_Gain_d;                  /* Expression: 0.8
                                        * Referenced by: '<S38>/Gain'
                                        */
  real_T Gain1_Gain_m;                 /* Expression: 0.8
                                        * Referenced by: '<S38>/Gain1'
                                        */
  real_T Gain1_Gain_b;                 /* Expression: 0.15
                                        * Referenced by: '<S39>/Gain1'
                                        */
  real_T Gain_Gain_f;                  /* Expression: 0.15
                                        * Referenced by: '<S39>/Gain'
                                        */
  real_T Constant_Value_p;             /* Expression: 2
                                        * Referenced by: '<S39>/Constant'
                                        */
  real_T Constant1_Value_er;           /* Expression: 1
                                        * Referenced by: '<S41>/Constant1'
                                        */
  real_T Switch1_Threshold_o;          /* Expression: 0.28
                                        * Referenced by: '<S41>/Switch1'
                                        */
  real_T Switch2_Threshold_fg;         /* Expression: 0.26
                                        * Referenced by: '<S41>/Switch2'
                                        */
  real_T Switch3_Threshold_d;          /* Expression: 0.24
                                        * Referenced by: '<S41>/Switch3'
                                        */
  real_T Switch4_Threshold_n;          /* Expression: 0.22
                                        * Referenced by: '<S41>/Switch4'
                                        */
  real_T Switch5_Threshold_d;          /* Expression: 0.20
                                        * Referenced by: '<S41>/Switch5'
                                        */
  real_T Switch6_Threshold_j;          /* Expression: 0.18
                                        * Referenced by: '<S41>/Switch6'
                                        */
  real_T Switch7_Threshold_o;          /* Expression: 0.16
                                        * Referenced by: '<S41>/Switch7'
                                        */
  real_T Switch8_Threshold_m;          /* Expression: 0.14
                                        * Referenced by: '<S41>/Switch8'
                                        */
  real_T Switch9_Threshold_f;          /* Expression: 0.12
                                        * Referenced by: '<S41>/Switch9'
                                        */
  real_T Constant_Value_f;             /* Expression: 2
                                        * Referenced by: '<S40>/Constant'
                                        */
  real_T Constant1_Value_ol;           /* Expression: 0
                                        * Referenced by: '<S40>/Constant1'
                                        */
  real_T Constant2_Value_f;            /* Expression: 0
                                        * Referenced by: '<S40>/Constant2'
                                        */
  real_T Constant46_Value;             /* Expression: 43
                                        * Referenced by: '<S17>/Constant46'
                                        */
  real_T Constant47_Value;             /* Expression: 3
                                        * Referenced by: '<S17>/Constant47'
                                        */
  real_T Constant40_Value;             /* Expression: 32
                                        * Referenced by: '<S17>/Constant40'
                                        */
  real_T Constant41_Value;             /* Expression: 1
                                        * Referenced by: '<S17>/Constant41'
                                        */
  real_T Constant42_Value;             /* Expression: 7
                                        * Referenced by: '<S17>/Constant42'
                                        */
  real_T Constant43_Value;             /* Expression: 0
                                        * Referenced by: '<S17>/Constant43'
                                        */
  real_T Constant44_Value;             /* Expression: 0
                                        * Referenced by: '<S17>/Constant44'
                                        */
  real_T Constant45_Value;             /* Expression: 0
                                        * Referenced by: '<S17>/Constant45'
                                        */
  real_T Constant38_Value;             /* Expression: 43
                                        * Referenced by: '<S17>/Constant38'
                                        */
  real_T Constant39_Value;             /* Expression: 3
                                        * Referenced by: '<S17>/Constant39'
                                        */
  real_T Constant32_Value;             /* Expression: 32
                                        * Referenced by: '<S17>/Constant32'
                                        */
  real_T Constant33_Value;             /* Expression: 1
                                        * Referenced by: '<S17>/Constant33'
                                        */
  real_T Constant34_Value;             /* Expression: 255
                                        * Referenced by: '<S17>/Constant34'
                                        */
  real_T Constant35_Value;             /* Expression: 0
                                        * Referenced by: '<S17>/Constant35'
                                        */
  real_T Constant36_Value;             /* Expression: 0
                                        * Referenced by: '<S17>/Constant36'
                                        */
  real_T Constant37_Value;             /* Expression: 0
                                        * Referenced by: '<S17>/Constant37'
                                        */
  real_T Constant30_Value;             /* Expression: 43
                                        * Referenced by: '<S17>/Constant30'
                                        */
  real_T Constant31_Value;             /* Expression: 3
                                        * Referenced by: '<S17>/Constant31'
                                        */
  real_T Constant24_Value_pr;          /* Expression: 32
                                        * Referenced by: '<S17>/Constant24'
                                        */
  real_T Constant25_Value_i;           /* Expression: 1
                                        * Referenced by: '<S17>/Constant25'
                                        */
  real_T Constant26_Value_k;           /* Expression: 1
                                        * Referenced by: '<S17>/Constant26'
                                        */
  real_T Constant27_Value_ig;          /* Expression: 0
                                        * Referenced by: '<S17>/Constant27'
                                        */
  real_T Constant28_Value_a;           /* Expression: 0
                                        * Referenced by: '<S17>/Constant28'
                                        */
  real_T Constant29_Value_h;           /* Expression: 0
                                        * Referenced by: '<S17>/Constant29'
                                        */
  real_T Constant22_Value_d;           /* Expression: 43
                                        * Referenced by: '<S17>/Constant22'
                                        */
  real_T Constant23_Value_j;           /* Expression: 3
                                        * Referenced by: '<S17>/Constant23'
                                        */
  real_T Constant16_Value_k;           /* Expression: 32
                                        * Referenced by: '<S17>/Constant16'
                                        */
  real_T Constant17_Value_m;           /* Expression: 1
                                        * Referenced by: '<S17>/Constant17'
                                        */
  real_T Constant18_Value_l;           /* Expression: 255
                                        * Referenced by: '<S17>/Constant18'
                                        */
  real_T Constant19_Value_b;           /* Expression: 0
                                        * Referenced by: '<S17>/Constant19'
                                        */
  real_T Constant20_Value_o;           /* Expression: 0
                                        * Referenced by: '<S17>/Constant20'
                                        */
  real_T Constant21_Value_p;           /* Expression: 0
                                        * Referenced by: '<S17>/Constant21'
                                        */
  real_T Constant8_Value_p;            /* Expression: 43
                                        * Referenced by: '<S17>/Constant8'
                                        */
  real_T Constant9_Value_i;            /* Expression: 1
                                        * Referenced by: '<S17>/Constant9'
                                        */
  real_T Constant10_Value_f;           /* Expression: 32
                                        * Referenced by: '<S17>/Constant10'
                                        */
  real_T Constant11_Value_d;           /* Expression: 1
                                        * Referenced by: '<S17>/Constant11'
                                        */
  real_T Constant12_Value_i;           /* Expression: 0
                                        * Referenced by: '<S17>/Constant12'
                                        */
  real_T Constant13_Value_e;           /* Expression: 0
                                        * Referenced by: '<S17>/Constant13'
                                        */
  real_T Constant14_Value_b;           /* Expression: 0
                                        * Referenced by: '<S17>/Constant14'
                                        */
  real_T Constant15_Value_br;          /* Expression: 0
                                        * Referenced by: '<S17>/Constant15'
                                        */
  real_T tiaoshi_Value;                /* Expression: 0
                                        * Referenced by: '<Root>/tiaoshi'
                                        */
  real_T fa11_1_Value;                 /* Expression: 0
                                        * Referenced by: '<S21>/fa11_1'
                                        */
  real_T fa11_2_Value;                 /* Expression: 0
                                        * Referenced by: '<S21>/fa11_2'
                                        */
  real_T fa11_5_Value;                 /* Expression: 0
                                        * Referenced by: '<S21>/fa11_5'
                                        */
  real_T fa20_Value;                   /* Expression: 0
                                        * Referenced by: '<S21>/fa20'
                                        */
  real_T fa16_1_Value;                 /* Expression: 0
                                        * Referenced by: '<S21>/fa16_1'
                                        */
  real_T fa3_Value;                    /* Expression: 0
                                        * Referenced by: '<S21>/fa3'
                                        */
  real_T fa21_Value;                   /* Expression: 0
                                        * Referenced by: '<S21>/fa21'
                                        */
  real_T xuansongmingling_Value;       /* Expression: 0
                                        * Referenced by: '<S21>/xuansongmingling'
                                        */
  real_T xuanjinmingling_Value;        /* Expression: 0
                                        * Referenced by: '<S21>/xuanjinmingling'
                                        */
  real_T suodingmingling_Value;        /* Expression: 0
                                        * Referenced by: '<S21>/suodingmingling'
                                        */
  real_T jiesuomingling_Value;         /* Expression: 0
                                        * Referenced by: '<S21>/jiesuomingling'
                                        */
  real_T fa18_1_Value;                 /* Expression: 0
                                        * Referenced by: '<S21>/fa18_1'
                                        */
  real_T fa18_2_Value;                 /* Expression: 0
                                        * Referenced by: '<S21>/fa18_2'
                                        */
  real_T fa18_3_Value;                 /* Expression: 0
                                        * Referenced by: '<S21>/fa18_3'
                                        */
  real_T fa18_4_Value;                 /* Expression: 0
                                        * Referenced by: '<S21>/fa18_4'
                                        */
  real_T fa_kgg_Value;                 /* Expression: 0
                                        * Referenced by: '<S21>/fa_kgg'
                                        */
  real_T jiting_Value;                 /* Expression: 0
                                        * Referenced by: '<Root>/jiting'
                                        */
  real_T qiehuan_Value;                /* Expression: 1
                                        * Referenced by: '<Root>/qiehuan'
                                        */
  real_T kaishi_Value;                 /* Expression: 0
                                        * Referenced by: '<Root>/kaishi'
                                        */
  real_T uDLookupTable1_tableData[2];  /* Expression: [0 0.5]
                                        * Referenced by: '<S17>/1-D Lookup Table1'
                                        */
  real_T uDLookupTable1_bp01Data[2];   /* Expression: [1022 6022]
                                        * Referenced by: '<S17>/1-D Lookup Table1'
                                        */
  real_T uDLookupTable2_tableData[2];  /* Expression: [0 0.5]
                                        * Referenced by: '<S17>/1-D Lookup Table2'
                                        */
  real_T uDLookupTable2_bp01Data[2];   /* Expression: [1024 6018]
                                        * Referenced by: '<S17>/1-D Lookup Table2'
                                        */
  real_T uDLookupTable3_tableData[2];  /* Expression: [0 0.5]
                                        * Referenced by: '<S17>/1-D Lookup Table3'
                                        */
  real_T uDLookupTable3_bp01Data[2];   /* Expression: [999 5991]
                                        * Referenced by: '<S17>/1-D Lookup Table3'
                                        */
  real_T uDLookupTable4_tableData[2];  /* Expression: [0 0.5]
                                        * Referenced by: '<S17>/1-D Lookup Table4'
                                        */
  real_T uDLookupTable4_bp01Data[2];   /* Expression: [1006 6005]
                                        * Referenced by: '<S17>/1-D Lookup Table4'
                                        */
  real_T uDLookupTable5_tableData[2];  /* Expression: [0 0.5]
                                        * Referenced by: '<S17>/1-D Lookup Table5'
                                        */
  real_T uDLookupTable5_bp01Data[2];   /* Expression: [1010 6012]
                                        * Referenced by: '<S17>/1-D Lookup Table5'
                                        */
  real_T uDLookupTable6_tableData[2];  /* Expression: [0 0.5]
                                        * Referenced by: '<S17>/1-D Lookup Table6'
                                        */
  real_T uDLookupTable6_bp01Data[2];   /* Expression: [1024 6020]
                                        * Referenced by: '<S17>/1-D Lookup Table6'
                                        */
  real_T Constant2_Value_p;            /* Expression: 1
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T SCzhushui_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/SCzhushui'
                                        */
  real_T Step_Time;                    /* Expression: 0.2
                                        * Referenced by: '<S17>/Step'
                                        */
  real_T Step_Y0;                      /* Expression: 0
                                        * Referenced by: '<S17>/Step'
                                        */
  real_T Step_YFinal;                  /* Expression: 1
                                        * Referenced by: '<S17>/Step'
                                        */
  real_T Step1_Time;                   /* Expression: 0.2
                                        * Referenced by: '<S17>/Step1'
                                        */
  real_T Step1_Y0;                     /* Expression: 0
                                        * Referenced by: '<S17>/Step1'
                                        */
  real_T Step1_YFinal;                 /* Expression: 1
                                        * Referenced by: '<S17>/Step1'
                                        */
  real_T SCjiaya_Value;                /* Expression: 0
                                        * Referenced by: '<Root>/SCjiaya'
                                        */
  real_T SXQjunya_Value;               /* Expression: 0
                                        * Referenced by: '<Root>/SXQjunya'
                                        */
  real_T SXQxieya_Value;               /* Expression: 0
                                        * Referenced by: '<Root>/SXQxieya'
                                        */
  real_T Constant_Value_fv;            /* Expression: 0.1
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Constant8_Value_i;            /* Expression: 0.03
                                        * Referenced by: '<Root>/Constant8'
                                        */
  real_T Constant7_Value_ab;           /* Expression: 0.1
                                        * Referenced by: '<Root>/Constant7'
                                        */
  real_T uDLookupTable_tableData[2];   /* Expression: [0 600]
                                        * Referenced by: '<S17>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data[2];    /* Expression: [80 8500]
                                        * Referenced by: '<S17>/1-D Lookup Table'
                                        */
  real_T Memory_X0;                    /* Expression: 0
                                        * Referenced by: '<Root>/Memory'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 12
                                        * Referenced by: '<S20>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 0
                                        * Referenced by: '<S20>/Saturation'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 600
                                        * Referenced by: '<S20>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: 20
                                        * Referenced by: '<S20>/Saturation1'
                                        */
  real_T Memory1_X0;                   /* Expression: 0
                                        * Referenced by: '<Root>/Memory1'
                                        */
  real_T Saturation_UpperSat_i;        /* Expression: 12
                                        * Referenced by: '<S18>/Saturation'
                                        */
  real_T Saturation_LowerSat_m;        /* Expression: 0
                                        * Referenced by: '<S18>/Saturation'
                                        */
  real_T Saturation1_UpperSat_f;       /* Expression: 600
                                        * Referenced by: '<S18>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_k;       /* Expression: 20
                                        * Referenced by: '<S18>/Saturation1'
                                        */
  real_T zidongkaigai_Value;           /* Expression: 0
                                        * Referenced by: '<Root>/zidongkaigai'
                                        */
  real_T zidongguangai_Value;          /* Expression: 0
                                        * Referenced by: '<Root>/zidongguangai'
                                        */
  real_T Memory_X0_j;                  /* Expression: 0
                                        * Referenced by: '<S22>/Memory'
                                        */
  real_T Switch_Threshold;             /* Expression: 0.5
                                        * Referenced by: '<S22>/Switch'
                                        */
  real_T Memory1_X0_k;                 /* Expression: 0
                                        * Referenced by: '<S22>/Memory1'
                                        */
  real_T Switch2_Threshold_l;          /* Expression: 0.5
                                        * Referenced by: '<S22>/Switch2'
                                        */
  real_T shiyabuchang_Value;           /* Expression: 0
                                        * Referenced by: '<Root>/shiyabuchang'
                                        */
  real_T Memory_X0_l;                  /* Expression: 0
                                        * Referenced by: '<S23>/Memory'
                                        */
  real_T Switch_Threshold_n;           /* Expression: 0.5
                                        * Referenced by: '<S23>/Switch'
                                        */
  real_T Memory_X0_k;                  /* Expression: 0
                                        * Referenced by: '<S24>/Memory'
                                        */
  real_T Switch_Threshold_b;           /* Expression: 0.5
                                        * Referenced by: '<S24>/Switch'
                                        */
  real_T Memory1_X0_e;                 /* Expression: 0
                                        * Referenced by: '<S24>/Memory1'
                                        */
  real_T Switch2_Threshold_j;          /* Expression: 0.5
                                        * Referenced by: '<S24>/Switch2'
                                        */
  real_T xuanjinjianya_Value;          /* Expression: 0
                                        * Referenced by: '<Root>/xuanjinjianya'
                                        */
  real_T Memory1_X0_a;                 /* Expression: 0
                                        * Referenced by: '<S23>/Memory1'
                                        */
  real_T Switch2_Threshold_o;          /* Expression: 0.5
                                        * Referenced by: '<S23>/Switch2'
                                        */
  real_T Switch1_Threshold_k;          /* Expression: 0.5
                                        * Referenced by: '<S13>/Switch1'
                                        */
  real_T Switch2_Threshold_b;          /* Expression: 0.5
                                        * Referenced by: '<S13>/Switch2'
                                        */
  real_T Switch3_Threshold_p;          /* Expression: 0.5
                                        * Referenced by: '<S13>/Switch3'
                                        */
  real_T Switch4_Threshold_j;          /* Expression: 0.5
                                        * Referenced by: '<S13>/Switch4'
                                        */
  real_T Switch5_Threshold_i;          /* Expression: 0.5
                                        * Referenced by: '<S13>/Switch5'
                                        */
  real_T Switch6_Threshold_o;          /* Expression: 0.5
                                        * Referenced by: '<S13>/Switch6'
                                        */
  real_T Switch7_Threshold_l;          /* Expression: 0.5
                                        * Referenced by: '<S13>/Switch7'
                                        */
  real_T Switch8_Threshold_c;          /* Expression: 0.5
                                        * Referenced by: '<S13>/Switch8'
                                        */
  real_T Switch9_Threshold_k;          /* Expression: 0.5
                                        * Referenced by: '<S13>/Switch9'
                                        */
  real_T Switch10_Threshold;           /* Expression: 0.5
                                        * Referenced by: '<S13>/Switch10'
                                        */
  real_T Switch11_Threshold;           /* Expression: 0.5
                                        * Referenced by: '<S13>/Switch11'
                                        */
  real_T diancifa11_3_Value;           /* Expression: 0
                                        * Referenced by: '<Root>/diancifa11_3'
                                        */
  real_T diancifa11_4_Value;           /* Expression: 0
                                        * Referenced by: '<Root>/diancifa11_4'
                                        */
  real_T SCxieya_Value;                /* Expression: 0
                                        * Referenced by: '<Root>/SCxieya'
                                        */
  real_T diancifa16_2_Value;           /* Expression: 0
                                        * Referenced by: '<Root>/diancifa16_2'
                                        */
  real_T diancifa16_3_Value;           /* Expression: 0
                                        * Referenced by: '<Root>/diancifa16_3'
                                        */
  real_T BCQbushui_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/BCQbushui'
                                        */
  real_T constant_Value;               /* Expression: 0
                                        * Referenced by: '<S5>/constant'
                                        */
  real_T PCI1716DIO1_P1_Size[2];       /* Computed Parameter: PCI1716DIO1_P1_Size
                                        * Referenced by: '<S5>/PCI1716DIO1'
                                        */
  real_T PCI1716DIO1_P1[2];            /* Expression: [SampleTime SampleOffset]
                                        * Referenced by: '<S5>/PCI1716DIO1'
                                        */
  real_T PCI1716DIO1_P2_Size[2];       /* Computed Parameter: PCI1716DIO1_P2_Size
                                        * Referenced by: '<S5>/PCI1716DIO1'
                                        */
  real_T PCI1716DIO1_P2;               /* Expression: SLOT
                                        * Referenced by: '<S5>/PCI1716DIO1'
                                        */
  real_T Switch12_Threshold;           /* Expression: 0.5
                                        * Referenced by: '<S13>/Switch12'
                                        */
  real_T Switch13_Threshold;           /* Expression: 0.5
                                        * Referenced by: '<S13>/Switch13'
                                        */
  real_T Switch14_Threshold;           /* Expression: 0.5
                                        * Referenced by: '<S13>/Switch14'
                                        */
  real_T Switch17_Threshold;           /* Expression: 0.5
                                        * Referenced by: '<S13>/Switch17'
                                        */
  real_T Switch18_Threshold;           /* Expression: 0.5
                                        * Referenced by: '<S13>/Switch18'
                                        */
  real_T uDLookupTable_tableData_c[2]; /* Expression: [0 115]
                                        * Referenced by: '<Root>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data_m[2];  /* Expression: [0 600]
                                        * Referenced by: '<Root>/1-D Lookup Table'
                                        */
  real_T Gain_Gain_b;                  /* Expression: 1
                                        * Referenced by: '<Root>/Gain'
                                        */
  real_T Saturation_UpperSat_e;        /* Expression: 10
                                        * Referenced by: '<S6>/Saturation'
                                        */
  real_T Saturation_LowerSat_c;        /* Expression: 0
                                        * Referenced by: '<S6>/Saturation'
                                        */
  real_T Saturation1_UpperSat_i;       /* Expression: 10
                                        * Referenced by: '<S6>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_c;       /* Expression: 0
                                        * Referenced by: '<S6>/Saturation1'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: 10
                                        * Referenced by: '<S6>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S6>/Saturation2'
                                        */
  real_T Saturation3_UpperSat;         /* Expression: 10
                                        * Referenced by: '<S6>/Saturation3'
                                        */
  real_T Saturation3_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S6>/Saturation3'
                                        */
  real_T Saturation4_UpperSat;         /* Expression: 10
                                        * Referenced by: '<S6>/Saturation4'
                                        */
  real_T Saturation4_LowerSat;         /* Expression: -10
                                        * Referenced by: '<S6>/Saturation4'
                                        */
  real_T Constant_Value_f1;            /* Expression: 0
                                        * Referenced by: '<S6>/Constant'
                                        */
  real_T Saturation5_UpperSat;         /* Expression: 10
                                        * Referenced by: '<S6>/Saturation5'
                                        */
  real_T Saturation5_LowerSat;         /* Expression: -10
                                        * Referenced by: '<S6>/Saturation5'
                                        */
  real_T Constant1_Value_m;            /* Expression: 0
                                        * Referenced by: '<S6>/Constant1'
                                        */
  real_T Saturation6_UpperSat;         /* Expression: 10
                                        * Referenced by: '<S6>/Saturation6'
                                        */
  real_T Saturation6_LowerSat;         /* Expression: -10
                                        * Referenced by: '<S6>/Saturation6'
                                        */
  real_T bilijianyafa_Value;           /* Expression: 5
                                        * Referenced by: '<Root>/bilijianyafa'
                                        */
  real_T Saturation7_UpperSat;         /* Expression: 10
                                        * Referenced by: '<S6>/Saturation7'
                                        */
  real_T Saturation7_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S6>/Saturation7'
                                        */
  real_T PCI6208ADA_P1_Size[2];        /* Computed Parameter: PCI6208ADA_P1_Size
                                        * Referenced by: '<S6>/PCI-6208A DA '
                                        */
  real_T PCI6208ADA_P1[8];             /* Expression: channel
                                        * Referenced by: '<S6>/PCI-6208A DA '
                                        */
  real_T PCI6208ADA_P2_Size[2];        /* Computed Parameter: PCI6208ADA_P2_Size
                                        * Referenced by: '<S6>/PCI-6208A DA '
                                        */
  real_T PCI6208ADA_P2;                /* Expression: range
                                        * Referenced by: '<S6>/PCI-6208A DA '
                                        */
  real_T PCI6208ADA_P3_Size[2];        /* Computed Parameter: PCI6208ADA_P3_Size
                                        * Referenced by: '<S6>/PCI-6208A DA '
                                        */
  real_T PCI6208ADA_P3;                /* Expression: sampletime
                                        * Referenced by: '<S6>/PCI-6208A DA '
                                        */
  real_T PCI6208ADA_P4_Size[2];        /* Computed Parameter: PCI6208ADA_P4_Size
                                        * Referenced by: '<S6>/PCI-6208A DA '
                                        */
  real_T PCI6208ADA_P4;                /* Expression: pcislot
                                        * Referenced by: '<S6>/PCI-6208A DA '
                                        */
  real_T PCI6208ADA_P5_Size[2];        /* Computed Parameter: PCI6208ADA_P5_Size
                                        * Referenced by: '<S6>/PCI-6208A DA '
                                        */
  real_T PCI6208ADA_P5[8];             /* Expression: reset
                                        * Referenced by: '<S6>/PCI-6208A DA '
                                        */
  real_T PCI6208ADA_P6_Size[2];        /* Computed Parameter: PCI6208ADA_P6_Size
                                        * Referenced by: '<S6>/PCI-6208A DA '
                                        */
  real_T PCI6208ADA_P6[8];             /* Expression: initval
                                        * Referenced by: '<S6>/PCI-6208A DA '
                                        */
  real_T Memory2_X0;                   /* Expression: 0
                                        * Referenced by: '<Root>/Memory2'
                                        */
  real_T Constant_Value_fr;            /* Expression: 43
                                        * Referenced by: '<S17>/Constant'
                                        */
  real_T Constant1_Value_f;            /* Expression: 3
                                        * Referenced by: '<S17>/Constant1'
                                        */
  real_T Constant2_Value_d;            /* Expression: 32
                                        * Referenced by: '<S17>/Constant2'
                                        */
  real_T Constant3_Value_m;            /* Expression: 1
                                        * Referenced by: '<S17>/Constant3'
                                        */
  real_T Constant4_Value_k;            /* Expression: 255
                                        * Referenced by: '<S17>/Constant4'
                                        */
  real_T Constant5_Value_j;            /* Expression: 255
                                        * Referenced by: '<S17>/Constant5'
                                        */
  real_T Constant6_Value_h;            /* Expression: 255
                                        * Referenced by: '<S17>/Constant6'
                                        */
  real_T Constant7_Value_c;            /* Expression: 255
                                        * Referenced by: '<S17>/Constant7'
                                        */
  real_T Setup_P1_Size[2];             /* Computed Parameter: Setup_P1_Size
                                        * Referenced by: '<S17>/Setup '
                                        */
  real_T Setup_P1[4];                  /* Expression: can1UserBR
                                        * Referenced by: '<S17>/Setup '
                                        */
  real_T Setup_P2_Size[2];             /* Computed Parameter: Setup_P2_Size
                                        * Referenced by: '<S17>/Setup '
                                        */
  real_T Setup_P2[4];                  /* Expression: can2UserBR
                                        * Referenced by: '<S17>/Setup '
                                        */
  real_T Setup_P3_Size[2];             /* Computed Parameter: Setup_P3_Size
                                        * Referenced by: '<S17>/Setup '
                                        */
  real_T Setup_P3;                     /* Expression: can1SendS
                                        * Referenced by: '<S17>/Setup '
                                        */
  real_T Setup_P4_Size[2];             /* Computed Parameter: Setup_P4_Size
                                        * Referenced by: '<S17>/Setup '
                                        */
  real_T Setup_P4[8];                  /* Expression: can1RecS
                                        * Referenced by: '<S17>/Setup '
                                        */
  real_T Setup_P5_Size[2];             /* Computed Parameter: Setup_P5_Size
                                        * Referenced by: '<S17>/Setup '
                                        */
  real_T Setup_P5[4];                  /* Expression: can2SendS
                                        * Referenced by: '<S17>/Setup '
                                        */
  real_T Setup_P6_Size[2];             /* Computed Parameter: Setup_P6_Size
                                        * Referenced by: '<S17>/Setup '
                                        */
  real_T Setup_P7_Size[2];             /* Computed Parameter: Setup_P7_Size
                                        * Referenced by: '<S17>/Setup '
                                        */
  real_T Setup_P8_Size[2];             /* Computed Parameter: Setup_P8_Size
                                        * Referenced by: '<S17>/Setup '
                                        */
  real_T Setup_P9_Size[2];             /* Computed Parameter: Setup_P9_Size
                                        * Referenced by: '<S17>/Setup '
                                        */
  real_T Setup_P10_Size[2];            /* Computed Parameter: Setup_P10_Size
                                        * Referenced by: '<S17>/Setup '
                                        */
  real_T Setup_P11_Size[2];            /* Computed Parameter: Setup_P11_Size
                                        * Referenced by: '<S17>/Setup '
                                        */
  real_T Setup_P11[8];                 /* Expression: can1RecSI
                                        * Referenced by: '<S17>/Setup '
                                        */
  real_T Setup_P12_Size[2];            /* Computed Parameter: Setup_P12_Size
                                        * Referenced by: '<S17>/Setup '
                                        */
  real_T Setup_P13_Size[2];            /* Computed Parameter: Setup_P13_Size
                                        * Referenced by: '<S17>/Setup '
                                        */
  real_T Setup_P14_Size[2];            /* Computed Parameter: Setup_P14_Size
                                        * Referenced by: '<S17>/Setup '
                                        */
  real_T Setup_P15_Size[2];            /* Computed Parameter: Setup_P15_Size
                                        * Referenced by: '<S17>/Setup '
                                        */
  real_T Setup_P15;                    /* Expression: initarray
                                        * Referenced by: '<S17>/Setup '
                                        */
  real_T Setup_P16_Size[2];            /* Computed Parameter: Setup_P16_Size
                                        * Referenced by: '<S17>/Setup '
                                        */
  real_T Setup_P16;                    /* Expression: termarray
                                        * Referenced by: '<S17>/Setup '
                                        */
  real_T Setup_P17_Size[2];            /* Computed Parameter: Setup_P17_Size
                                        * Referenced by: '<S17>/Setup '
                                        */
  real_T Setup_P17;                    /* Expression: ioBaseAddress
                                        * Referenced by: '<S17>/Setup '
                                        */
  real_T Setup_P18_Size[2];            /* Computed Parameter: Setup_P18_Size
                                        * Referenced by: '<S17>/Setup '
                                        */
  real_T Setup_P18;                    /* Expression: memBaseAddress
                                        * Referenced by: '<S17>/Setup '
                                        */
  real_T Setup_P19_Size[2];            /* Computed Parameter: Setup_P19_Size
                                        * Referenced by: '<S17>/Setup '
                                        */
  real_T Setup_P19;                    /* Expression: intNo
                                        * Referenced by: '<S17>/Setup '
                                        */
  real_T Setup_P20_Size[2];            /* Computed Parameter: Setup_P20_Size
                                        * Referenced by: '<S17>/Setup '
                                        */
  real_T Setup_P20;                    /* Expression: board
                                        * Referenced by: '<S17>/Setup '
                                        */
  real_T Setup_P21_Size[2];            /* Computed Parameter: Setup_P21_Size
                                        * Referenced by: '<S17>/Setup '
                                        */
  real_T Setup_P21;                    /* Expression: can1bus
                                        * Referenced by: '<S17>/Setup '
                                        */
  real_T Setup_P22_Size[2];            /* Computed Parameter: Setup_P22_Size
                                        * Referenced by: '<S17>/Setup '
                                        */
  real_T Setup_P22;                    /* Expression: can2bus
                                        * Referenced by: '<S17>/Setup '
                                        */
  real_T Setup_P23_Size[2];            /* Computed Parameter: Setup_P23_Size
                                        * Referenced by: '<S17>/Setup '
                                        */
  real_T Setup_P23;                    /* Expression: bus_off_out
                                        * Referenced by: '<S17>/Setup '
                                        */
  real_T Setup_P24_Size[2];            /* Computed Parameter: Setup_P24_Size
                                        * Referenced by: '<S17>/Setup '
                                        */
  real_T Setup_P24;                    /* Expression: bus_off_rec
                                        * Referenced by: '<S17>/Setup '
                                        */
  real_T PCI1784_P1_Size[2];           /* Computed Parameter: PCI1784_P1_Size
                                        * Referenced by: '<Root>/PCI-1784'
                                        */
  real_T PCI1784_P1[8];                /* Expression: channel
                                        * Referenced by: '<Root>/PCI-1784'
                                        */
  real_T PCI1784_P2_Size[2];           /* Computed Parameter: PCI1784_P2_Size
                                        * Referenced by: '<Root>/PCI-1784'
                                        */
  real_T PCI1784_P2;                   /* Expression: sampletime
                                        * Referenced by: '<Root>/PCI-1784'
                                        */
  real_T PCI1784_P3_Size[2];           /* Computed Parameter: PCI1784_P3_Size
                                        * Referenced by: '<Root>/PCI-1784'
                                        */
  real_T PCI1784_P3;                   /* Expression: slot
                                        * Referenced by: '<Root>/PCI-1784'
                                        */
  uint8_T ManualSwitch2_CurrentSetting;/* Computed Parameter: ManualSwitch2_CurrentSetting
                                        * Referenced by: '<S17>/Manual Switch2'
                                        */
  uint8_T ManualSwitch4_CurrentSetting;/* Computed Parameter: ManualSwitch4_CurrentSetting
                                        * Referenced by: '<S17>/Manual Switch4'
                                        */
  uint8_T ManualSwitch_CurrentSetting; /* Computed Parameter: ManualSwitch_CurrentSetting
                                        * Referenced by: '<S17>/Manual Switch'
                                        */
  uint8_T ManualSwitch1_CurrentSetting;/* Computed Parameter: ManualSwitch1_CurrentSetting
                                        * Referenced by: '<S17>/Manual Switch1'
                                        */
  uint8_T ManualSwitch3_CurrentSetting;/* Computed Parameter: ManualSwitch3_CurrentSetting
                                        * Referenced by: '<S17>/Manual Switch3'
                                        */
  P_Subsystem3_aaa_T Subsystem4;       /* '<Root>/Subsystem4' */
  P_Subsystem3_aaa_T Subsystem3;       /* '<Root>/Subsystem3' */
};

/* Real-time Model Data Structure */
struct tag_RTM_aaa_T {
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
    SimStruct childSFunctions[4];
    SimStruct *childSFunctionPtrs[4];
    struct _ssBlkInfo2 blkInfo2[4];
    struct _ssSFcnModelMethods2 methods2[4];
    struct _ssSFcnModelMethods3 methods3[4];
    struct _ssSFcnModelMethods4 methods4[4];
    struct _ssStatesInfo2 statesInfo2[4];
    ssPeriodicStatesInfo periodicStatesInfo[4];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[18];
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
    } Sfcn1;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      uint_T attribs[24];
      mxArray *params[24];
    } Sfcn2;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[8];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn3;
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
extern P_aaa_T aaa_P;

/* Block signals (auto storage) */
extern B_aaa_T aaa_B;

/* Block states (auto storage) */
extern DW_aaa_T aaa_DW;

/* External data declarations for dependent source files */
extern const real_T aaa_RGND;          /* real_T ground */

/*====================*
 * External functions *
 *====================*/
extern aaa_rtModel *aaa(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  aaa_GetCAPIStaticMap(void);

/* Real-time Model object */
extern RT_MODEL_aaa_T *const aaa_M;

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
 * '<Root>' : 'aaa'
 * '<S1>'   : 'aaa/Compare To Constant'
 * '<S2>'   : 'aaa/Compare To Constant1'
 * '<S3>'   : 'aaa/Compare To Constant2'
 * '<S4>'   : 'aaa/Compare To Constant3'
 * '<S5>'   : 'aaa/PCI1716'
 * '<S6>'   : 'aaa/PCI6208'
 * '<S7>'   : 'aaa/Scope (xPC) 1'
 * '<S8>'   : 'aaa/Scope (xPC) 2'
 * '<S9>'   : 'aaa/Scope (xPC) 3'
 * '<S10>'  : 'aaa/Scope (xPC) 4'
 * '<S11>'  : 'aaa/Scope (xPC) 5'
 * '<S12>'  : 'aaa/Scope (xPC) 6'
 * '<S13>'  : 'aaa/Subsystem1'
 * '<S14>'  : 'aaa/Subsystem2'
 * '<S15>'  : 'aaa/Subsystem3'
 * '<S16>'  : 'aaa/Subsystem4'
 * '<S17>'  : 'aaa/chuanganqi'
 * '<S18>'  : 'aaa/guangaiquxian'
 * '<S19>'  : 'aaa/jinjichuli'
 * '<S20>'  : 'aaa/kaigaiquxian'
 * '<S21>'  : 'aaa/tiaoshifa'
 * '<S22>'  : 'aaa/Subsystem2/husuo'
 * '<S23>'  : 'aaa/Subsystem2/husuo1'
 * '<S24>'  : 'aaa/Subsystem2/husuo2'
 * '<S25>'  : 'aaa/Subsystem2/shoudong'
 * '<S26>'  : 'aaa/Subsystem2/zidong'
 * '<S27>'  : 'aaa/Subsystem2/shoudong/Chart'
 * '<S28>'  : 'aaa/Subsystem2/shoudong/SQfa'
 * '<S29>'  : 'aaa/Subsystem2/shoudong/Scope (xPC) 1'
 * '<S30>'  : 'aaa/Subsystem2/shoudong/Subsystem'
 * '<S31>'  : 'aaa/Subsystem2/shoudong/Subsystem2'
 * '<S32>'  : 'aaa/Subsystem2/shoudong/XQfa'
 * '<S33>'  : 'aaa/Subsystem2/shoudong/Subsystem2/Signal Builder'
 * '<S34>'  : 'aaa/Subsystem2/shoudong/Subsystem2/Signal Builder1'
 * '<S35>'  : 'aaa/Subsystem2/shoudong/Subsystem2/Signal Builder2'
 * '<S36>'  : 'aaa/Subsystem2/shoudong/Subsystem2/Signal Builder3'
 * '<S37>'  : 'aaa/Subsystem2/zidong/Chart'
 * '<S38>'  : 'aaa/Subsystem2/zidong/SQfa'
 * '<S39>'  : 'aaa/Subsystem2/zidong/Subsystem'
 * '<S40>'  : 'aaa/Subsystem2/zidong/Subsystem1'
 * '<S41>'  : 'aaa/Subsystem2/zidong/XQfa'
 * '<S42>'  : 'aaa/Subsystem2/zidong/Subsystem1/Signal Builder'
 * '<S43>'  : 'aaa/Subsystem2/zidong/Subsystem1/Signal Builder1'
 * '<S44>'  : 'aaa/Subsystem2/zidong/Subsystem1/Signal Builder2'
 * '<S45>'  : 'aaa/Subsystem2/zidong/Subsystem1/Signal Builder3'
 * '<S46>'  : 'aaa/chuanganqi/yalishangxiaxian'
 * '<S47>'  : 'aaa/chuanganqi/yalishangxiaxian/Compare To Constant1'
 * '<S48>'  : 'aaa/chuanganqi/yalishangxiaxian/Compare To Constant11'
 * '<S49>'  : 'aaa/chuanganqi/yalishangxiaxian/Compare To Constant3'
 * '<S50>'  : 'aaa/chuanganqi/yalishangxiaxian/Compare To Constant5'
 * '<S51>'  : 'aaa/chuanganqi/yalishangxiaxian/Compare To Constant7'
 * '<S52>'  : 'aaa/chuanganqi/yalishangxiaxian/Compare To Constant9'
 * '<S53>'  : 'aaa/guangaiquxian/Chart1'
 * '<S54>'  : 'aaa/jinjichuli/jinjichuli'
 * '<S55>'  : 'aaa/kaigaiquxian/Chart'
 */
#endif                                 /* RTW_HEADER_aaa_h_ */
