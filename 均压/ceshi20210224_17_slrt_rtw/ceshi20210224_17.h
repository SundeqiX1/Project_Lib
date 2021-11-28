/*
 * ceshi20210224_17.h
 *
 * Code generation for model "ceshi20210224_17".
 *
 * Model version              : 1.152
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Wed May 12 20:04:50 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ceshi20210224_17_h_
#define RTW_HEADER_ceshi20210224_17_h_
#include <stddef.h>
#include <string.h>
#include <math.h>
#include "rtw_modelmap.h"
#ifndef ceshi20210224_17_COMMON_INCLUDES_
# define ceshi20210224_17_COMMON_INCLUDES_
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
#endif                                 /* ceshi20210224_17_COMMON_INCLUDES_ */

#include "ceshi20210224_17_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_zcfcn.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
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
#define rtModel_ceshi20210224_17       RT_MODEL_ceshi20210224_17_T

/* Definition for use in the target main file */
#define ceshi20210224_17_rtModel       RT_MODEL_ceshi20210224_17_T

/* user code (top of export header file) */
#include "xpcdatatypes.h"

/* Block signals for system '<Root>/Subsystem' */
typedef struct {
  real_T Integrator;                   /* '<S11>/Integrator' */
} B_Subsystem_ceshi20210224_17_T;

/* Block states (auto storage) for system '<Root>/Subsystem' */
typedef struct {
  int8_T Subsystem_SubsysRanBC;        /* '<Root>/Subsystem' */
  boolean_T Subsystem_MODE;            /* '<Root>/Subsystem' */
} DW_Subsystem_ceshi20210224_17_T;

/* Continuous states for system '<Root>/Subsystem' */
typedef struct {
  real_T Integrator_CSTATE;            /* '<S11>/Integrator' */
} X_Subsystem_ceshi20210224_17_T;

/* State derivatives for system '<Root>/Subsystem' */
typedef struct {
  real_T Integrator_CSTATE;            /* '<S11>/Integrator' */
} XDot_Subsystem_ceshi20210224__T;

/* State Disabled for system '<Root>/Subsystem' */
typedef struct {
  boolean_T Integrator_CSTATE;         /* '<S11>/Integrator' */
} XDis_Subsystem_ceshi20210224__T;

/* Zero-crossing (trigger) state for system '<Root>/Subsystem' */
typedef struct {
  ZCSigState Integrator_Reset_ZCE;     /* '<S11>/Integrator' */
} ZCE_Subsystem_ceshi20210224_1_T;

/* Block signals (auto storage) */
typedef struct {
  real_T c;                            /* '<Root>/c' */
  real_T u;                            /* '<Root>/锁定' */
  real_T u_g;                          /* '<Root>/解锁' */
  real_T tonggai1808Receive;           /* '<S21>/tonggai1808Receive' */
  real_T Step;                         /* '<S21>/Step' */
  real_T u234wuxinhao5kaigaidaowei6kaiga[16];/* '<S21>/Product' */
  real_T u_g4;                         /* '<Root>/旋松' */
  real_T u_h;                          /* '<Root>/预旋松' */
  real_T Switch5;                      /* '<Root>/Switch5' */
  real_T ManualSwitch;                 /* '<Root>/Manual Switch' */
  real_T u_gp;                         /* '<Root>/旋紧' */
  real_T PCI1716DIO1_o1[8];            /* '<Root>/PCI1716DIO1' */
  real_T PCI1716DIO1_o2[16];           /* '<Root>/PCI1716DIO1' */
  real_T yalichuanganqi3402_o1;        /* '<S21>/yalichuanganqi3402' */
  real_T yalichuanganqi3402_o2;        /* '<S21>/yalichuanganqi3402' */
  real_T DataTypeConversion49;         /* '<S21>/Data Type Conversion49' */
  real_T uDLookupTable1;               /* '<S21>/1-D Lookup Table1' */
  real_T DataTypeConversion51;         /* '<S21>/Data Type Conversion51' */
  real_T uDLookupTable3;               /* '<S21>/1-D Lookup Table3' */
  real_T DataTypeConversion53;         /* '<S21>/Data Type Conversion53' */
  real_T uDLookupTable5;               /* '<S21>/1-D Lookup Table5' */
  real_T liuliangji;                   /* '<S21>/liuliangji_fuqiuyeweiji3402' */
  real_T liuliangji_fuqiuyeweiji3402_o2;/* '<S21>/liuliangji_fuqiuyeweiji3402' */
  real_T u_c;                          /* '<Root>/启停' */
  real_T u0;                           /* '<Root>/开1关0' */
  real_T u_i;                          /* '<Root>/阀开口' */
  real_T kaiguangaiweiyi3402;          /* '<S21>/kaiguangaiweiyi3402' */
  real_T DataTypeConversion;           /* '<Root>/Data Type Conversion' */
  real_T right1;                       /* '<Root>/right1' */
  real_T Switch6;                      /* '<Root>/Switch6' */
  real_T tonggai3402Receive_o1;        /* '<S21>/tonggai3402Receive' */
  real_T tonggai3402Receive_o2;        /* '<S21>/tonggai3402Receive' */
  real_T DataTypeConversion56;         /* '<S21>/Data Type Conversion56' */
  real_T uDLookupTable8;               /* '<S21>/1-D Lookup Table8' */
  real_T DataTypeConversion55;         /* '<S21>/Data Type Conversion55' */
  real_T uDLookupTable9;               /* '<S21>/1-D Lookup Table9' */
  real_T vkg;                          /* '<Root>/Analog Filter Design1' */
  real_T vgg;                          /* '<Root>/Analog Filter Design2' */
  real_T Gain10;                       /* '<Root>/Gain10' */
  real_T zongsudu;                     /* '<Root>/Switch4' */
  real_T s;                            /* '<Root>/s' */
  real_T Add1;                         /* '<Root>/Add1' */
  real_T Switch;                       /* '<Root>/Switch' */
  real_T Switch2;                      /* '<S16>/Switch2' */
  real_T Switch1[80001];               /* '<S16>/Switch1' */
  real_T Switch6_l[80001];             /* '<S16>/Switch6' */
  real_T qiwangv;                      /* '<S16>/qiwangv' */
  real_T Delay;                        /* '<S18>/Delay' */
  real_T Delay1;                       /* '<S18>/Delay1' */
  real_T s1;                           /* '<Root>/s1' */
  real_T Add2;                         /* '<Root>/Add2' */
  real_T Switch3;                      /* '<Root>/Switch3' */
  real_T qiwangv1;                     /* '<S17>/qiwangv1' */
  real_T Switch2_n;                    /* '<S18>/Switch2' */
  real_T s4;                           /* '<Root>/s4' */
  real_T Step_o;                       /* '<Root>/Step' */
  real_T s_k;                          /* '<Root>/Add5' */
  real_T Gain4;                        /* '<Root>/Gain4' */
  real_T Gain9;                        /* '<Root>/Gain9' */
  real_T Gain13;                       /* '<Root>/Gain13' */
  real_T Gain14;                       /* '<Root>/Gain14' */
  real_T Step1;                        /* '<Root>/Step1' */
  real_T Product[8];                   /* '<Root>/Product' */
  real_T u_b[2];                       /* '<Root>/TmpSignal ConversionAtHiddenToAsyncQueue_InsertedFor_Mux1_at_outport_0Inport1' */
  real_T Derivative;                   /* '<Root>/Derivative' */
  real_T chazhi1;                      /* '<Root>/chazhi1' */
  real_T Gain6;                        /* '<Root>/Gain6' */
  real_T Memory1;                      /* '<Root>/Memory1' */
  real_T Gain8;                        /* '<Root>/Gain8' */
  real_T Derivative4;                  /* '<Root>/Derivative4' */
  real_T Saturation2;                  /* '<Root>/Saturation2' */
  real_T DataTypeConversion_f;         /* '<S20>/Data Type Conversion' */
  real_T RateLimiter1;                 /* '<S20>/Rate Limiter1' */
  real_T chazhi;                       /* '<Root>/chazhi' */
  real_T Gain2;                        /* '<Root>/Gain2' */
  real_T Memory;                       /* '<Root>/Memory' */
  real_T Gain5;                        /* '<Root>/Gain5' */
  real_T Derivative2;                  /* '<Root>/Derivative2' */
  real_T Saturation1;                  /* '<Root>/Saturation1' */
  real_T DataTypeConversion_d;         /* '<S19>/Data Type Conversion' */
  real_T RateLimiter;                  /* '<S19>/Rate Limiter' */
  real_T shuchuliang;                  /* '<Root>/Multiport Switch2' */
  real_T Gain;                         /* '<Root>/Gain' */
  real_T Gain1;                        /* '<Root>/Gain1' */
  real_T Switch1_n;                    /* '<Root>/Switch1' */
  real_T Switch2_k;                    /* '<Root>/Switch2' */
  real_T u_hw;                         /* '<Root>/比例减压阀1' */
  real_T s2;                           /* '<Root>/s2' */
  real_T Derivative1;                  /* '<Root>/Derivative1' */
  real_T s3;                           /* '<Root>/s3' */
  real_T Derivative3;                  /* '<Root>/Derivative3' */
  real_T Gain3;                        /* '<Root>/Gain3' */
  real_T Gain7;                        /* '<Root>/Gain7' */
  real_T DataTypeConversion48;         /* '<S21>/Data Type Conversion48' */
  real_T uDLookupTable7;               /* '<S21>/1-D Lookup Table7' */
  real_T DataTypeConversion50;         /* '<S21>/Data Type Conversion50' */
  real_T DataTypeConversion52;         /* '<S21>/Data Type Conversion52' */
  real_T DataTypeConversion54;         /* '<S21>/Data Type Conversion54' */
  real_T uDLookupTable2;               /* '<S21>/1-D Lookup Table2' */
  real_T uDLookupTable4;               /* '<S21>/1-D Lookup Table4' */
  real_T uDLookupTable6;               /* '<S21>/1-D Lookup Table6' */
  real_T DataTypeConversion57;         /* '<S21>/Data Type Conversion57' */
  real_T DataTypeConversion58;         /* '<S21>/Data Type Conversion58' */
  real_T DataTypeConversion59;         /* '<S21>/Data Type Conversion59' */
  real_T DataTypeConversion60;         /* '<S21>/Data Type Conversion60' */
  real_T DataTypeConversion61;         /* '<S21>/Data Type Conversion61' */
  real_T CANbitpacking2;               /* '<S21>/CAN bit-packing 2' */
  real_T CANbitpacking4;               /* '<S21>/CAN bit-packing 4' */
  real_T CANbitpacking;                /* '<S21>/CAN bit-packing ' */
  real_T CANbitpacking1;               /* '<S21>/CAN bit-packing 1' */
  real_T CANbitpacking3;               /* '<S21>/CAN bit-packing 3' */
  real_T Gain_c;                       /* '<S22>/Gain' */
  real_T Add;                          /* '<S22>/Add' */
  real_T In1;                          /* '<S15>/In1' */
  real_T Add_c;                        /* '<S14>/Add' */
  real_T Add_n;                        /* '<S13>/Add' */
  real_T yuxuansongt;                  /* '<Root>/Chart3' */
  real_T xuansongt;                    /* '<Root>/Chart3' */
  real_T vroute;                       /* '<Root>/Chart2' */
  real_T kaigait;                      /* '<Root>/Chart1' */
  real_T guangait;                     /* '<Root>/Chart1' */
  real_T fa;                           /* '<Root>/Chart' */
  real_T kaigaixinhao;                 /* '<Root>/Chart' */
  real_T guangaixinhao;                /* '<Root>/Chart' */
  real_T MultiportSwitch1;             /* '<Root>/Multiport Switch1' */
  real_T Gain12;                       /* '<Root>/Gain12' */
  real_T Product1;                     /* '<S20>/Product1' */
  real_T Sum1;                         /* '<Root>/Sum1' */
  real_T shuchuliang1;                 /* '<Root>/shuchuliang1' */
  real_T MultiportSwitch;              /* '<Root>/Multiport Switch' */
  real_T Gain11;                       /* '<Root>/Gain11' */
  real_T Product1_j;                   /* '<S19>/Product1' */
  real_T Sum;                          /* '<Root>/Sum' */
  real_T shuchuliang2;                 /* '<Root>/shuchuliang2' */
  real_T Add4;                         /* '<Root>/Add4' */
  real_T Add3;                         /* '<Root>/Add3' */
  real_T Product3;                     /* '<Root>/Product3' */
  real_T Product2;                     /* '<Root>/Product2' */
  uint16_T CANbitunpacking7_o1;        /* '<S21>/CAN bit-unpacking 7' */
  uint16_T CANbitunpacking7_o2;        /* '<S21>/CAN bit-unpacking 7' */
  uint16_T CANbitunpacking7_o3;        /* '<S21>/CAN bit-unpacking 7' */
  uint16_T CANbitunpacking7_o4;        /* '<S21>/CAN bit-unpacking 7' */
  uint16_T CANbitunpacking6_o1;        /* '<S21>/CAN bit-unpacking 6' */
  uint16_T CANbitunpacking6_o2;        /* '<S21>/CAN bit-unpacking 6' */
  uint16_T CANbitunpacking5_o1;        /* '<S21>/CAN bit-unpacking 5' */
  uint16_T CANbitunpacking5_o2;        /* '<S21>/CAN bit-unpacking 5' */
  uint16_T CANbitunpacking5_o3;        /* '<S21>/CAN bit-unpacking 5' */
  uint16_T CANbitunpacking4_o1;        /* '<S21>/CAN bit-unpacking 4' */
  uint16_T CANbitunpacking4_o2;        /* '<S21>/CAN bit-unpacking 4' */
  uint16_T CANbitunpacking3_o1;        /* '<S21>/CAN bit-unpacking 3' */
  uint16_T CANbitunpacking3_o2;        /* '<S21>/CAN bit-unpacking 3' */
  uint16_T CANbitunpacking3_o3;        /* '<S21>/CAN bit-unpacking 3' */
  uint16_T CANbitunpacking3_o4;        /* '<S21>/CAN bit-unpacking 3' */
  uint16_T CANbitunpacking9_o1;        /* '<S21>/CAN bit-unpacking 9' */
  uint16_T CANbitunpacking9_o2;        /* '<S21>/CAN bit-unpacking 9' */
  uint16_T CANbitunpacking9_o3;        /* '<S21>/CAN bit-unpacking 9' */
  uint8_T DataTypeConversion_e;        /* '<S21>/Data Type Conversion' */
  uint8_T DataTypeConversion1;         /* '<S21>/Data Type Conversion1' */
  uint8_T DataTypeConversion2;         /* '<S21>/Data Type Conversion2' */
  uint8_T DataTypeConversion3;         /* '<S21>/Data Type Conversion3' */
  uint8_T DataTypeConversion4;         /* '<S21>/Data Type Conversion4' */
  uint8_T DataTypeConversion5;         /* '<S21>/Data Type Conversion5' */
  uint8_T DataTypeConversion6;         /* '<S21>/Data Type Conversion6' */
  uint8_T DataTypeConversion7;         /* '<S21>/Data Type Conversion7' */
  uint8_T ManualSwitch2[8];            /* '<S21>/Manual Switch2' */
  uint8_T ManualSwitch4[8];            /* '<S21>/Manual Switch4' */
  uint8_T ManualSwitch_c[8];           /* '<S21>/Manual Switch' */
  uint8_T ManualSwitch1[8];            /* '<S21>/Manual Switch1' */
  uint8_T ManualSwitch3[8];            /* '<S21>/Manual Switch3' */
  uint8_T DataTypeConversion8;         /* '<S21>/Data Type Conversion8' */
  uint8_T DataTypeConversion9;         /* '<S21>/Data Type Conversion9' */
  uint8_T DataTypeConversion10;        /* '<S21>/Data Type Conversion10' */
  uint8_T DataTypeConversion11;        /* '<S21>/Data Type Conversion11' */
  uint8_T DataTypeConversion12;        /* '<S21>/Data Type Conversion12' */
  uint8_T DataTypeConversion13;        /* '<S21>/Data Type Conversion13' */
  uint8_T DataTypeConversion14;        /* '<S21>/Data Type Conversion14' */
  uint8_T DataTypeConversion15;        /* '<S21>/Data Type Conversion15' */
  uint8_T DataTypeConversion22;        /* '<S21>/Data Type Conversion22' */
  uint8_T DataTypeConversion23;        /* '<S21>/Data Type Conversion23' */
  uint8_T DataTypeConversion16;        /* '<S21>/Data Type Conversion16' */
  uint8_T DataTypeConversion17;        /* '<S21>/Data Type Conversion17' */
  uint8_T DataTypeConversion18;        /* '<S21>/Data Type Conversion18' */
  uint8_T DataTypeConversion19;        /* '<S21>/Data Type Conversion19' */
  uint8_T DataTypeConversion20;        /* '<S21>/Data Type Conversion20' */
  uint8_T DataTypeConversion21;        /* '<S21>/Data Type Conversion21' */
  uint8_T DataTypeConversion30;        /* '<S21>/Data Type Conversion30' */
  uint8_T DataTypeConversion31;        /* '<S21>/Data Type Conversion31' */
  uint8_T DataTypeConversion24;        /* '<S21>/Data Type Conversion24' */
  uint8_T DataTypeConversion25;        /* '<S21>/Data Type Conversion25' */
  uint8_T DataTypeConversion26;        /* '<S21>/Data Type Conversion26' */
  uint8_T DataTypeConversion27;        /* '<S21>/Data Type Conversion27' */
  uint8_T DataTypeConversion28;        /* '<S21>/Data Type Conversion28' */
  uint8_T DataTypeConversion29;        /* '<S21>/Data Type Conversion29' */
  uint8_T DataTypeConversion38;        /* '<S21>/Data Type Conversion38' */
  uint8_T DataTypeConversion39;        /* '<S21>/Data Type Conversion39' */
  uint8_T DataTypeConversion32;        /* '<S21>/Data Type Conversion32' */
  uint8_T DataTypeConversion33;        /* '<S21>/Data Type Conversion33' */
  uint8_T DataTypeConversion34;        /* '<S21>/Data Type Conversion34' */
  uint8_T DataTypeConversion35;        /* '<S21>/Data Type Conversion35' */
  uint8_T DataTypeConversion36;        /* '<S21>/Data Type Conversion36' */
  uint8_T DataTypeConversion37;        /* '<S21>/Data Type Conversion37' */
  uint8_T DataTypeConversion46;        /* '<S21>/Data Type Conversion46' */
  uint8_T DataTypeConversion47;        /* '<S21>/Data Type Conversion47' */
  uint8_T DataTypeConversion40;        /* '<S21>/Data Type Conversion40' */
  uint8_T DataTypeConversion41;        /* '<S21>/Data Type Conversion41' */
  uint8_T DataTypeConversion42;        /* '<S21>/Data Type Conversion42' */
  uint8_T DataTypeConversion43;        /* '<S21>/Data Type Conversion43' */
  uint8_T DataTypeConversion44;        /* '<S21>/Data Type Conversion44' */
  uint8_T DataTypeConversion45;        /* '<S21>/Data Type Conversion45' */
  boolean_T CANbitunpacking2_o1;       /* '<S21>/CAN bit-unpacking 2' */
  boolean_T CANbitunpacking2_o2;       /* '<S21>/CAN bit-unpacking 2' */
  boolean_T CANbitunpacking2_o3;       /* '<S21>/CAN bit-unpacking 2' */
  boolean_T CANbitunpacking2_o4;       /* '<S21>/CAN bit-unpacking 2' */
  boolean_T CANbitunpacking2_o5;       /* '<S21>/CAN bit-unpacking 2' */
  boolean_T CANbitunpacking2_o6;       /* '<S21>/CAN bit-unpacking 2' */
  boolean_T CANbitunpacking2_o7;       /* '<S21>/CAN bit-unpacking 2' */
  boolean_T CANbitunpacking2_o8;       /* '<S21>/CAN bit-unpacking 2' */
  boolean_T CANbitunpacking2_o9;       /* '<S21>/CAN bit-unpacking 2' */
  boolean_T CANbitunpacking2_o10;      /* '<S21>/CAN bit-unpacking 2' */
  boolean_T CANbitunpacking2_o11;      /* '<S21>/CAN bit-unpacking 2' */
  boolean_T CANbitunpacking2_o12;      /* '<S21>/CAN bit-unpacking 2' */
  boolean_T CANbitunpacking2_o13;      /* '<S21>/CAN bit-unpacking 2' */
  boolean_T CANbitunpacking2_o14;      /* '<S21>/CAN bit-unpacking 2' */
  boolean_T CANbitunpacking2_o15;      /* '<S21>/CAN bit-unpacking 2' */
  boolean_T CANbitunpacking2_o16;      /* '<S21>/CAN bit-unpacking 2' */
  boolean_T LogicalOperator1[16];      /* '<S21>/Logical Operator1' */
  boolean_T LogicalOperator;           /* '<Root>/Logical Operator' */
  boolean_T LogicalOperator_d;         /* '<S18>/Logical Operator' */
  boolean_T LogicalOperator1_l;        /* '<Root>/Logical Operator1' */
  boolean_T HiddenBuf_InsertedFor_Subsystem;/* '<Root>/Logical Operator1' */
  boolean_T LogicalOperator2;          /* '<S20>/Logical Operator2' */
  boolean_T LogicalOperator2_g;        /* '<S19>/Logical Operator2' */
  boolean_T LogicalOperator3;          /* '<Root>/Logical Operator3' */
  boolean_T LogicalOperator2_m;        /* '<Root>/Logical Operator2' */
  B_Subsystem_ceshi20210224_17_T Subsystem1;/* '<Root>/Subsystem1' */
  B_Subsystem_ceshi20210224_17_T Subsystem_d;/* '<Root>/Subsystem' */
} B_ceshi20210224_17_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T Delay_DSTATE[100];            /* '<S18>/Delay' */
  real_T Delay1_DSTATE[100];           /* '<S18>/Delay1' */
  real_T TimeStampA;                   /* '<Root>/Derivative' */
  real_T LastUAtTimeA;                 /* '<Root>/Derivative' */
  real_T TimeStampB;                   /* '<Root>/Derivative' */
  real_T LastUAtTimeB;                 /* '<Root>/Derivative' */
  real_T Memory1_PreviousInput;        /* '<Root>/Memory1' */
  real_T TimeStampA_g;                 /* '<Root>/Derivative4' */
  real_T LastUAtTimeA_b;               /* '<Root>/Derivative4' */
  real_T TimeStampB_n;                 /* '<Root>/Derivative4' */
  real_T LastUAtTimeB_j;               /* '<Root>/Derivative4' */
  real_T PrevY;                        /* '<S20>/Rate Limiter1' */
  real_T LastMajorTime;                /* '<S20>/Rate Limiter1' */
  real_T Memory_PreviousInput;         /* '<Root>/Memory' */
  real_T TimeStampA_c;                 /* '<Root>/Derivative2' */
  real_T LastUAtTimeA_a;               /* '<Root>/Derivative2' */
  real_T TimeStampB_f;                 /* '<Root>/Derivative2' */
  real_T LastUAtTimeB_p;               /* '<Root>/Derivative2' */
  real_T PrevY_h;                      /* '<S19>/Rate Limiter' */
  real_T LastMajorTime_c;              /* '<S19>/Rate Limiter' */
  real_T TimeStampA_e;                 /* '<Root>/Derivative1' */
  real_T LastUAtTimeA_d;               /* '<Root>/Derivative1' */
  real_T TimeStampB_a;                 /* '<Root>/Derivative1' */
  real_T LastUAtTimeB_n;               /* '<Root>/Derivative1' */
  real_T TimeStampA_m;                 /* '<Root>/Derivative3' */
  real_T LastUAtTimeA_i;               /* '<Root>/Derivative3' */
  real_T TimeStampB_p;                 /* '<Root>/Derivative3' */
  real_T LastUAtTimeB_b;               /* '<Root>/Derivative3' */
  real_T kaigait;                      /* '<Root>/Chart2' */
  struct {
    void *AQHandles;
  } HiddenToAsyncQueue_InsertedFor_;   /* synthesized block */

  struct {
    void *AQHandles;
  } HiddenToAsyncQueue_InsertedFo_f;   /* synthesized block */

  struct {
    void *AQHandles;
  } HiddenToAsyncQueue_InsertedFo_k;   /* synthesized block */

  struct {
    void *AQHandles;
  } HiddenToAsyncQueue_InsertedFo_d;   /* synthesized block */

  struct {
    void *AQHandles;
  } HiddenToAsyncQueue_InsertedFo_g;   /* synthesized block */

  struct {
    void *AQHandles;
  } HiddenToAsyncQueue_InsertedFo_c;   /* synthesized block */

  struct {
    void *AQHandles;
  } HiddenToAsyncQueue_InsertedF_fh;   /* synthesized block */

  struct {
    void *AQHandles;
  } HiddenToAsyncQueue_InsertedFo_n;   /* synthesized block */

  struct {
    void *AQHandles;
  } HiddenToAsyncQueue_InsertedF_g4;   /* synthesized block */

  struct {
    void *AQHandles;
  } HiddenToAsyncQueue_InsertedFo_e;   /* synthesized block */

  struct {
    void *AQHandles;
  } HiddenToAsyncQueue_InsertedFo_l;   /* synthesized block */

  struct {
    void *AQHandles;
  } HiddenToAsyncQueue_InsertedF_gg;   /* synthesized block */

  struct {
    void *AQHandles;
  } HiddenToAsyncQueue_InsertedFo_o;   /* synthesized block */

  struct {
    void *AQHandles;
  } HiddenToAsyncQueue_InsertedF_k3;   /* synthesized block */

  struct {
    void *AQHandles;
  } HiddenToAsyncQueue_InsertedF_go;   /* synthesized block */

  struct {
    void *AQHandles;
  } HiddenToAsyncQueue_InsertedF_ny;   /* synthesized block */

  struct {
    void *AQHandles;
  } HiddenToAsyncQueue_InsertedF_kd;   /* synthesized block */

  struct {
    void *AQHandles;
  } HiddenToAsyncQueue_InsertedFo_b;   /* synthesized block */

  struct {
    void *AQHandles;
  } HiddenToAsyncQueue_InsertedFo_a;   /* synthesized block */

  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<Root>/Scope' */

  struct {
    void *LoggedData;
  } Scope1_PWORK;                      /* '<Root>/Scope1' */

  struct {
    void *LoggedData;
  } Scope10_PWORK;                     /* '<Root>/Scope10' */

  struct {
    void *LoggedData;
  } Scope11_PWORK;                     /* '<Root>/Scope11' */

  struct {
    void *LoggedData;
  } Scope12_PWORK;                     /* '<Root>/Scope12' */

  struct {
    void *LoggedData;
  } Scope13_PWORK;                     /* '<Root>/Scope13' */

  struct {
    void *LoggedData;
  } Scope14_PWORK;                     /* '<Root>/Scope14' */

  struct {
    void *LoggedData;
  } Scope15_PWORK;                     /* '<Root>/Scope15' */

  struct {
    void *LoggedData;
  } Scope16_PWORK;                     /* '<Root>/Scope16' */

  struct {
    void *LoggedData;
  } Scope17_PWORK;                     /* '<Root>/Scope17' */

  struct {
    void *LoggedData;
  } Scope18_PWORK;                     /* '<Root>/Scope18' */

  struct {
    void *LoggedData;
  } Scope19_PWORK;                     /* '<Root>/Scope19' */

  struct {
    void *LoggedData;
  } Scope2_PWORK;                      /* '<Root>/Scope2' */

  struct {
    void *LoggedData;
  } Scope20_PWORK;                     /* '<Root>/Scope20' */

  struct {
    void *LoggedData;
  } Scope21_PWORK;                     /* '<Root>/Scope21' */

  struct {
    void *LoggedData;
  } Scope22_PWORK;                     /* '<Root>/Scope22' */

  struct {
    void *LoggedData;
  } Scope23_PWORK;                     /* '<Root>/Scope23' */

  struct {
    void *LoggedData;
  } Scope24_PWORK;                     /* '<Root>/Scope24' */

  struct {
    void *LoggedData;
  } Scope25_PWORK;                     /* '<Root>/Scope25' */

  struct {
    void *LoggedData[2];
  } Scope26_PWORK;                     /* '<Root>/Scope26' */

  struct {
    void *LoggedData;
  } Scope27_PWORK;                     /* '<Root>/Scope27' */

  struct {
    void *LoggedData;
  } Scope28_PWORK;                     /* '<Root>/Scope28' */

  struct {
    void *LoggedData;
  } Scope3_PWORK;                      /* '<Root>/Scope3' */

  struct {
    void *LoggedData;
  } Scope4_PWORK;                      /* '<Root>/Scope4' */

  struct {
    void *LoggedData;
  } Scope5_PWORK;                      /* '<Root>/Scope5' */

  struct {
    void *LoggedData;
  } Scope6_PWORK;                      /* '<Root>/Scope6' */

  struct {
    void *LoggedData;
  } Scope7_PWORK;                      /* '<Root>/Scope7' */

  struct {
    void *LoggedData;
  } Scope8_PWORK;                      /* '<Root>/Scope8' */

  struct {
    void *LoggedData;
  } Scope9_PWORK;                      /* '<Root>/Scope9' */

  struct {
    void *LoggedData;
  } Scope_PWORK_i;                     /* '<S21>/Scope' */

  int32_T sfEvent;                     /* '<Root>/Chart3' */
  int32_T sfEvent_b;                   /* '<Root>/Chart2' */
  int32_T sfEvent_a;                   /* '<Root>/Chart1' */
  int32_T sfEvent_c;                   /* '<Root>/Chart' */
  int_T PCI1716DIO1_IWORK[6];          /* '<Root>/PCI1716DIO1' */
  int_T PCI6208ADA_IWORK[3];           /* '<Root>/PCI-6208A DA ' */
  struct {
    int_T AcquireOK;
  } SFunction_IWORK;                   /* '<S5>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_g;                 /* '<S6>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_n;                 /* '<S7>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_i;                 /* '<S8>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_k;                 /* '<S9>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_c;                 /* '<S10>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_p;                 /* '<S23>/S-Function' */

  int8_T Subsystem2_SubsysRanBC;       /* '<Root>/Subsystem2' */
  int8_T Subsystem_SubsysRanBC;        /* '<S18>/Subsystem' */
  int8_T Subsystem3_SubsysRanBC;       /* '<Root>/Subsystem3' */
  int8_T Subsystem4_SubsysRanBC;       /* '<Root>/Subsystem4' */
  uint8_T is_active_c4_ceshi20210224_17;/* '<Root>/Chart3' */
  uint8_T is_c4_ceshi20210224_17;      /* '<Root>/Chart3' */
  uint8_T is_active_c2_ceshi20210224_17;/* '<Root>/Chart2' */
  uint8_T is_c2_ceshi20210224_17;      /* '<Root>/Chart2' */
  uint8_T is_active_c1_ceshi20210224_17;/* '<Root>/Chart1' */
  uint8_T is_c1_ceshi20210224_17;      /* '<Root>/Chart1' */
  uint8_T is_active_c3_ceshi20210224_17;/* '<Root>/Chart' */
  uint8_T is_c3_ceshi20210224_17;      /* '<Root>/Chart' */
  uint8_T temporalCounter_i1;          /* '<Root>/Chart' */
  boolean_T Subsystem2_MODE;           /* '<Root>/Subsystem2' */
  boolean_T Subsystem3_MODE;           /* '<Root>/Subsystem3' */
  boolean_T Subsystem4_MODE;           /* '<Root>/Subsystem4' */
  DW_Subsystem_ceshi20210224_17_T Subsystem1;/* '<Root>/Subsystem1' */
  DW_Subsystem_ceshi20210224_17_T Subsystem_d;/* '<Root>/Subsystem' */
} DW_ceshi20210224_17_T;

/* Continuous states (auto storage) */
typedef struct {
  real_T AnalogFilterDesign1_CSTATE;   /* '<Root>/Analog Filter Design1' */
  real_T AnalogFilterDesign2_CSTATE;   /* '<Root>/Analog Filter Design2' */
  real_T s_CSTATE;                     /* '<Root>/s' */
  real_T s1_CSTATE;                    /* '<Root>/s1' */
  real_T s4_CSTATE;                    /* '<Root>/s4' */
  real_T s2_CSTATE;                    /* '<Root>/s2' */
  real_T s3_CSTATE;                    /* '<Root>/s3' */
  X_Subsystem_ceshi20210224_17_T Subsystem1;/* '<Root>/Subsystem' */
  X_Subsystem_ceshi20210224_17_T Subsystem_d;/* '<Root>/Subsystem' */
} X_ceshi20210224_17_T;

/* State derivatives (auto storage) */
typedef struct {
  real_T AnalogFilterDesign1_CSTATE;   /* '<Root>/Analog Filter Design1' */
  real_T AnalogFilterDesign2_CSTATE;   /* '<Root>/Analog Filter Design2' */
  real_T s_CSTATE;                     /* '<Root>/s' */
  real_T s1_CSTATE;                    /* '<Root>/s1' */
  real_T s4_CSTATE;                    /* '<Root>/s4' */
  real_T s2_CSTATE;                    /* '<Root>/s2' */
  real_T s3_CSTATE;                    /* '<Root>/s3' */
  XDot_Subsystem_ceshi20210224__T Subsystem1;/* '<Root>/Subsystem' */
  XDot_Subsystem_ceshi20210224__T Subsystem_d;/* '<Root>/Subsystem' */
} XDot_ceshi20210224_17_T;

/* State disabled  */
typedef struct {
  boolean_T AnalogFilterDesign1_CSTATE;/* '<Root>/Analog Filter Design1' */
  boolean_T AnalogFilterDesign2_CSTATE;/* '<Root>/Analog Filter Design2' */
  boolean_T s_CSTATE;                  /* '<Root>/s' */
  boolean_T s1_CSTATE;                 /* '<Root>/s1' */
  boolean_T s4_CSTATE;                 /* '<Root>/s4' */
  boolean_T s2_CSTATE;                 /* '<Root>/s2' */
  boolean_T s3_CSTATE;                 /* '<Root>/s3' */
  XDis_Subsystem_ceshi20210224__T Subsystem1;/* '<Root>/Subsystem' */
  XDis_Subsystem_ceshi20210224__T Subsystem_d;/* '<Root>/Subsystem' */
} XDis_ceshi20210224_17_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState Subsystem_Trig_ZCE;       /* '<S18>/Subsystem' */
  ZCE_Subsystem_ceshi20210224_1_T Subsystem1;/* '<Root>/Subsystem1' */
  ZCE_Subsystem_ceshi20210224_1_T Subsystem_d;/* '<Root>/Subsystem' */
} PrevZCX_ceshi20210224_17_T;

#ifndef ODE4_INTG
#define ODE4_INTG

/* ODE4 Integration Data */
typedef struct {
  real_T *y;                           /* output */
  real_T *f[4];                        /* derivatives */
} ODE4_IntgData;

#endif

/* Backward compatible GRT Identifiers */
#define rtB                            ceshi20210224_17_B
#define BlockIO                        B_ceshi20210224_17_T
#define rtX                            ceshi20210224_17_X
#define ContinuousStates               X_ceshi20210224_17_T
#define rtXdot                         ceshi20210224_17_XDot
#define StateDerivatives               XDot_ceshi20210224_17_T
#define tXdis                          ceshi20210224_17_XDis
#define StateDisabled                  XDis_ceshi20210224_17_T
#define rtP                            ceshi20210224_17_P
#define Parameters                     P_ceshi20210224_17_T
#define rtDWork                        ceshi20210224_17_DW
#define D_Work                         DW_ceshi20210224_17_T
#define rtPrevZCSigState               ceshi20210224_17_PrevZCX
#define PrevZCSigStates                PrevZCX_ceshi20210224_17_T

/* Parameters for system: '<Root>/Subsystem' */
struct P_Subsystem_ceshi20210224_17_T_ {
  real_T Out1_Y0;                      /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S11>/Out1'
                                        */
  real_T Integrator_IC;                /* Expression: 0
                                        * Referenced by: '<S11>/Integrator'
                                        */
};

/* Parameters (auto storage) */
struct P_ceshi20210224_17_T_ {
  real_T S[80001];                     /* Variable: S
                                        * Referenced by: '<S16>/Constant7'
                                        */
  real_T Sgg[80001];                   /* Variable: Sgg
                                        * Referenced by: '<S17>/Constant5'
                                        */
  real_T Ssx[80001];                   /* Variable: Ssx
                                        * Referenced by: '<S16>/Constant2'
                                        */
  real_T V[80001];                     /* Variable: V
                                        * Referenced by: '<S16>/Constant1'
                                        */
  real_T Vgg[80001];                   /* Variable: Vgg
                                        * Referenced by: '<S17>/Constant4'
                                        */
  real_T Vsx[80001];                   /* Variable: Vsx
                                        * Referenced by: '<S16>/Constant8'
                                        */
  real_T Constant_Value;               /* Expression: -1
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Gain11_Gain;                  /* Expression: 0.02
                                        * Referenced by: '<Root>/Gain11'
                                        */
  real_T Gain12_Gain;                  /* Expression: 0.02
                                        * Referenced by: '<Root>/Gain12'
                                        */
  real_T Out1_Y0;                      /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S13>/Out1'
                                        */
  real_T Constant_Value_g;             /* Expression: 0
                                        * Referenced by: '<S13>/Constant'
                                        */
  real_T Out1_Y0_c;                    /* Computed Parameter: Out1_Y0_c
                                        * Referenced by: '<S14>/Out1'
                                        */
  real_T Constant_Value_b;             /* Expression: 580
                                        * Referenced by: '<S14>/Constant'
                                        */
  real_T Out1_Y0_n;                    /* Computed Parameter: Out1_Y0_n
                                        * Referenced by: '<S15>/Out1'
                                        */
  real_T Out1_Y0_i;                    /* Computed Parameter: Out1_Y0_i
                                        * Referenced by: '<S22>/Out1'
                                        */
  real_T Gain_Gain;                    /* Expression: 0
                                        * Referenced by: '<S22>/Gain'
                                        */
  real_T Constant46_Value;             /* Expression: 43
                                        * Referenced by: '<S21>/Constant46'
                                        */
  real_T Constant47_Value;             /* Expression: 3
                                        * Referenced by: '<S21>/Constant47'
                                        */
  real_T Constant40_Value;             /* Expression: 32
                                        * Referenced by: '<S21>/Constant40'
                                        */
  real_T Constant41_Value;             /* Expression: 1
                                        * Referenced by: '<S21>/Constant41'
                                        */
  real_T Constant42_Value;             /* Expression: 7
                                        * Referenced by: '<S21>/Constant42'
                                        */
  real_T Constant43_Value;             /* Expression: 0
                                        * Referenced by: '<S21>/Constant43'
                                        */
  real_T Constant44_Value;             /* Expression: 0
                                        * Referenced by: '<S21>/Constant44'
                                        */
  real_T Constant45_Value;             /* Expression: 0
                                        * Referenced by: '<S21>/Constant45'
                                        */
  real_T Constant38_Value;             /* Expression: 43
                                        * Referenced by: '<S21>/Constant38'
                                        */
  real_T Constant39_Value;             /* Expression: 3
                                        * Referenced by: '<S21>/Constant39'
                                        */
  real_T Constant32_Value;             /* Expression: 32
                                        * Referenced by: '<S21>/Constant32'
                                        */
  real_T Constant33_Value;             /* Expression: 1
                                        * Referenced by: '<S21>/Constant33'
                                        */
  real_T Constant34_Value;             /* Expression: 255
                                        * Referenced by: '<S21>/Constant34'
                                        */
  real_T Constant35_Value;             /* Expression: 0
                                        * Referenced by: '<S21>/Constant35'
                                        */
  real_T Constant36_Value;             /* Expression: 0
                                        * Referenced by: '<S21>/Constant36'
                                        */
  real_T Constant37_Value;             /* Expression: 0
                                        * Referenced by: '<S21>/Constant37'
                                        */
  real_T Constant30_Value;             /* Expression: 43
                                        * Referenced by: '<S21>/Constant30'
                                        */
  real_T Constant31_Value;             /* Expression: 3
                                        * Referenced by: '<S21>/Constant31'
                                        */
  real_T Constant24_Value;             /* Expression: 32
                                        * Referenced by: '<S21>/Constant24'
                                        */
  real_T Constant25_Value;             /* Expression: 1
                                        * Referenced by: '<S21>/Constant25'
                                        */
  real_T Constant26_Value;             /* Expression: 1
                                        * Referenced by: '<S21>/Constant26'
                                        */
  real_T Constant27_Value;             /* Expression: 0
                                        * Referenced by: '<S21>/Constant27'
                                        */
  real_T Constant28_Value;             /* Expression: 0
                                        * Referenced by: '<S21>/Constant28'
                                        */
  real_T Constant29_Value;             /* Expression: 0
                                        * Referenced by: '<S21>/Constant29'
                                        */
  real_T Constant22_Value;             /* Expression: 43
                                        * Referenced by: '<S21>/Constant22'
                                        */
  real_T Constant23_Value;             /* Expression: 3
                                        * Referenced by: '<S21>/Constant23'
                                        */
  real_T Constant16_Value;             /* Expression: 32
                                        * Referenced by: '<S21>/Constant16'
                                        */
  real_T Constant17_Value;             /* Expression: 1
                                        * Referenced by: '<S21>/Constant17'
                                        */
  real_T Constant18_Value;             /* Expression: 255
                                        * Referenced by: '<S21>/Constant18'
                                        */
  real_T Constant19_Value;             /* Expression: 0
                                        * Referenced by: '<S21>/Constant19'
                                        */
  real_T Constant20_Value;             /* Expression: 0
                                        * Referenced by: '<S21>/Constant20'
                                        */
  real_T Constant21_Value;             /* Expression: 0
                                        * Referenced by: '<S21>/Constant21'
                                        */
  real_T Constant8_Value;              /* Expression: 43
                                        * Referenced by: '<S21>/Constant8'
                                        */
  real_T Constant9_Value;              /* Expression: 1
                                        * Referenced by: '<S21>/Constant9'
                                        */
  real_T Constant10_Value;             /* Expression: 32
                                        * Referenced by: '<S21>/Constant10'
                                        */
  real_T Constant11_Value;             /* Expression: 1
                                        * Referenced by: '<S21>/Constant11'
                                        */
  real_T Constant12_Value;             /* Expression: 0
                                        * Referenced by: '<S21>/Constant12'
                                        */
  real_T Constant13_Value;             /* Expression: 0
                                        * Referenced by: '<S21>/Constant13'
                                        */
  real_T Constant14_Value;             /* Expression: 0
                                        * Referenced by: '<S21>/Constant14'
                                        */
  real_T Constant15_Value;             /* Expression: 0
                                        * Referenced by: '<S21>/Constant15'
                                        */
  real_T c_Value;                      /* Expression: 0
                                        * Referenced by: '<Root>/c'
                                        */
  real_T _Value;                       /* Expression: 0
                                        * Referenced by: '<Root>/锁定'
                                        */
  real_T _Value_k;                     /* Expression: 0
                                        * Referenced by: '<Root>/解锁'
                                        */
  real_T constant1_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/constant1'
                                        */
  real_T Step_Time;                    /* Expression: 0.2
                                        * Referenced by: '<S21>/Step'
                                        */
  real_T Step_Y0;                      /* Expression: 0
                                        * Referenced by: '<S21>/Step'
                                        */
  real_T Step_YFinal;                  /* Expression: 1
                                        * Referenced by: '<S21>/Step'
                                        */
  real_T _Value_f;                     /* Expression: 0
                                        * Referenced by: '<Root>/旋松'
                                        */
  real_T _Value_f1;                    /* Expression: 0
                                        * Referenced by: '<Root>/预旋松'
                                        */
  real_T Switch5_Threshold;            /* Expression: 0.5
                                        * Referenced by: '<Root>/Switch5'
                                        */
  real_T u_Value;                      /* Expression: 0
                                        * Referenced by: '<Root>/旋松1'
                                        */
  real_T _Value_n;                     /* Expression: 0
                                        * Referenced by: '<Root>/旋紧'
                                        */
  real_T PCI1716DIO1_P1_Size[2];       /* Computed Parameter: PCI1716DIO1_P1_Size
                                        * Referenced by: '<Root>/PCI1716DIO1'
                                        */
  real_T PCI1716DIO1_P1[2];            /* Expression: [SampleTime SampleOffset]
                                        * Referenced by: '<Root>/PCI1716DIO1'
                                        */
  real_T PCI1716DIO1_P2_Size[2];       /* Computed Parameter: PCI1716DIO1_P2_Size
                                        * Referenced by: '<Root>/PCI1716DIO1'
                                        */
  real_T PCI1716DIO1_P2;               /* Expression: SLOT
                                        * Referenced by: '<Root>/PCI1716DIO1'
                                        */
  real_T uDLookupTable1_tableData[2];  /* Expression: [0 0.5]
                                        * Referenced by: '<S21>/1-D Lookup Table1'
                                        */
  real_T uDLookupTable1_bp01Data[2];   /* Expression: [1022 6022]
                                        * Referenced by: '<S21>/1-D Lookup Table1'
                                        */
  real_T uDLookupTable3_tableData[2];  /* Expression: [0 0.5]
                                        * Referenced by: '<S21>/1-D Lookup Table3'
                                        */
  real_T uDLookupTable3_bp01Data[2];   /* Expression: [999 5991]
                                        * Referenced by: '<S21>/1-D Lookup Table3'
                                        */
  real_T uDLookupTable5_tableData[2];  /* Expression: [0 0.5]
                                        * Referenced by: '<S21>/1-D Lookup Table5'
                                        */
  real_T uDLookupTable5_bp01Data[2];   /* Expression: [1010 6012]
                                        * Referenced by: '<S21>/1-D Lookup Table5'
                                        */
  real_T _Value_n5;                    /* Expression: 0
                                        * Referenced by: '<Root>/启停'
                                        */
  real_T u0_Value;                     /* Expression: 1
                                        * Referenced by: '<Root>/开1关0'
                                        */
  real_T _Value_l;                     /* Expression: 4
                                        * Referenced by: '<Root>/阀开口'
                                        */
  real_T u_Value_p;                    /* Expression: -0.2
                                        * Referenced by: '<Root>/阀开口3'
                                        */
  real_T right1_XData[2];              /* Expression: [80,8500]
                                        * Referenced by: '<Root>/right1'
                                        */
  real_T right1_YData[2];              /* Expression: [0 600]
                                        * Referenced by: '<Root>/right1'
                                        */
  real_T u_Value_l;                    /* Expression: -0.05
                                        * Referenced by: '<Root>/阀开口4'
                                        */
  real_T Switch6_Threshold;            /* Expression: 490
                                        * Referenced by: '<Root>/Switch6'
                                        */
  real_T uDLookupTable8_tableData[2];  /* Expression: [0 15.5]
                                        * Referenced by: '<S21>/1-D Lookup Table8'
                                        */
  real_T uDLookupTable8_bp01Data[2];   /* Expression: [290 3951]
                                        * Referenced by: '<S21>/1-D Lookup Table8'
                                        */
  real_T uDLookupTable9_tableData[2];  /* Expression: [0 15.5]
                                        * Referenced by: '<S21>/1-D Lookup Table9'
                                        */
  real_T uDLookupTable9_bp01Data[2];   /* Expression: [290 3951]
                                        * Referenced by: '<S21>/1-D Lookup Table9'
                                        */
  real_T AnalogFilterDesign1_A;        /* Computed Parameter: AnalogFilterDesign1_A
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
  real_T AnalogFilterDesign2_A;        /* Computed Parameter: AnalogFilterDesign2_A
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
  real_T Gain10_Gain;                  /* Expression: -1
                                        * Referenced by: '<Root>/Gain10'
                                        */
  real_T Switch4_Threshold;            /* Expression: 0.5
                                        * Referenced by: '<Root>/Switch4'
                                        */
  real_T Constant3_Value;              /* Expression: 100
                                        * Referenced by: '<S16>/Constant3'
                                        */
  real_T s_A;                          /* Computed Parameter: s_A
                                        * Referenced by: '<Root>/s'
                                        */
  real_T s_B;                          /* Computed Parameter: s_B
                                        * Referenced by: '<Root>/s'
                                        */
  real_T s_C;                          /* Computed Parameter: s_C
                                        * Referenced by: '<Root>/s'
                                        */
  real_T s_X0;                         /* Expression: 0
                                        * Referenced by: '<Root>/s'
                                        */
  real_T s1_Value;                     /* Expression: 7
                                        * Referenced by: '<Root>/s初始值1'
                                        */
  real_T Switch_Threshold;             /* Expression: 200
                                        * Referenced by: '<Root>/Switch'
                                        */
  real_T Switch2_Threshold;            /* Expression: 0.5
                                        * Referenced by: '<S16>/Switch2'
                                        */
  real_T Switch1_Threshold;            /* Expression: 0.5
                                        * Referenced by: '<S16>/Switch1'
                                        */
  real_T Switch6_Threshold_j;          /* Expression: 0.5
                                        * Referenced by: '<S16>/Switch6'
                                        */
  real_T Delay_InitialCondition;       /* Expression: 0.0
                                        * Referenced by: '<S18>/Delay'
                                        */
  real_T Delay1_InitialCondition;      /* Expression: 0.0
                                        * Referenced by: '<S18>/Delay1'
                                        */
  real_T s1_A;                         /* Computed Parameter: s1_A
                                        * Referenced by: '<Root>/s1'
                                        */
  real_T s1_B;                         /* Computed Parameter: s1_B
                                        * Referenced by: '<Root>/s1'
                                        */
  real_T s1_C;                         /* Computed Parameter: s1_C
                                        * Referenced by: '<Root>/s1'
                                        */
  real_T s1_X0;                        /* Expression: 0
                                        * Referenced by: '<Root>/s1'
                                        */
  real_T s3_Value;                     /* Expression: -1
                                        * Referenced by: '<Root>/s初始值3'
                                        */
  real_T Switch3_Threshold;            /* Expression: 380
                                        * Referenced by: '<Root>/Switch3'
                                        */
  real_T Switch2_Threshold_l;          /* Expression: 0.5
                                        * Referenced by: '<S18>/Switch2'
                                        */
  real_T s4_A;                         /* Computed Parameter: s4_A
                                        * Referenced by: '<Root>/s4'
                                        */
  real_T s4_B;                         /* Computed Parameter: s4_B
                                        * Referenced by: '<Root>/s4'
                                        */
  real_T s4_C;                         /* Computed Parameter: s4_C
                                        * Referenced by: '<Root>/s4'
                                        */
  real_T s4_X0;                        /* Expression: 0
                                        * Referenced by: '<Root>/s4'
                                        */
  real_T Step_Time_l;                  /* Expression: 0.5
                                        * Referenced by: '<Root>/Step'
                                        */
  real_T Step_Y0_f;                    /* Expression: 0
                                        * Referenced by: '<Root>/Step'
                                        */
  real_T Step_YFinal_i;                /* Expression: 1
                                        * Referenced by: '<Root>/Step'
                                        */
  real_T Gain4_Gain;                   /* Expression: 10
                                        * Referenced by: '<Root>/Gain4'
                                        */
  real_T Gain9_Gain;                   /* Expression: 10
                                        * Referenced by: '<Root>/Gain9'
                                        */
  real_T Gain13_Gain;                  /* Expression: 600
                                        * Referenced by: '<Root>/Gain13'
                                        */
  real_T Gain14_Gain;                  /* Expression: 600
                                        * Referenced by: '<Root>/Gain14'
                                        */
  real_T Step1_Time;                   /* Expression: 3
                                        * Referenced by: '<Root>/Step1'
                                        */
  real_T Step1_Y0;                     /* Expression: 0
                                        * Referenced by: '<Root>/Step1'
                                        */
  real_T Step1_YFinal;                 /* Expression: 1
                                        * Referenced by: '<Root>/Step1'
                                        */
  real_T u_Value_d;                    /* Expression: 0
                                        * Referenced by: '<Root>/阀开口2'
                                        */
  real_T Gain6_Gain;                   /* Expression: 0.08
                                        * Referenced by: '<Root>/Gain6'
                                        */
  real_T Memory1_X0;                   /* Expression: 0
                                        * Referenced by: '<Root>/Memory1'
                                        */
  real_T Gain8_Gain;                   /* Expression: 0
                                        * Referenced by: '<Root>/Gain8'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: 5
                                        * Referenced by: '<Root>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: -5
                                        * Referenced by: '<Root>/Saturation2'
                                        */
  real_T RateLimiter1_RisingLim;       /* Expression: 1000
                                        * Referenced by: '<S20>/Rate Limiter1'
                                        */
  real_T RateLimiter1_FallingLim;      /* Expression: -1
                                        * Referenced by: '<S20>/Rate Limiter1'
                                        */
  real_T Constant6_Value;              /* Expression: 4
                                        * Referenced by: '<Root>/Constant6'
                                        */
  real_T u_Value_n;                    /* Expression: 0
                                        * Referenced by: '<Root>/阀开口1'
                                        */
  real_T Gain2_Gain;                   /* Expression: 0.08
                                        * Referenced by: '<Root>/Gain2'
                                        */
  real_T Memory_X0;                    /* Expression: 0
                                        * Referenced by: '<Root>/Memory'
                                        */
  real_T Gain5_Gain;                   /* Expression: 0
                                        * Referenced by: '<Root>/Gain5'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 5
                                        * Referenced by: '<Root>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: -5
                                        * Referenced by: '<Root>/Saturation1'
                                        */
  real_T RateLimiter_RisingLim;        /* Expression: 1000
                                        * Referenced by: '<S19>/Rate Limiter'
                                        */
  real_T RateLimiter_FallingLim;       /* Expression: -1
                                        * Referenced by: '<S19>/Rate Limiter'
                                        */
  real_T Constant3_Value_e;            /* Expression: 3
                                        * Referenced by: '<Root>/Constant3'
                                        */
  real_T Gain_Gain_a;                  /* Expression: 10
                                        * Referenced by: '<Root>/Gain'
                                        */
  real_T Gain1_Gain;                   /* Expression: 10
                                        * Referenced by: '<Root>/Gain1'
                                        */
  real_T Constant2_Value;              /* Expression: 5
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T _Value_fb;                    /* Expression: 0
                                        * Referenced by: '<Root>/关盖'
                                        */
  real_T Switch1_Threshold_i;          /* Expression: 0.5
                                        * Referenced by: '<Root>/Switch1'
                                        */
  real_T Switch2_Threshold_m;          /* Expression: 0.5
                                        * Referenced by: '<Root>/Switch2'
                                        */
  real_T u_Value_i;                    /* Expression: 3
                                        * Referenced by: '<Root>/比例减压阀1'
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
  real_T s2_A;                         /* Computed Parameter: s2_A
                                        * Referenced by: '<Root>/s2'
                                        */
  real_T s2_B;                         /* Computed Parameter: s2_B
                                        * Referenced by: '<Root>/s2'
                                        */
  real_T s2_C;                         /* Computed Parameter: s2_C
                                        * Referenced by: '<Root>/s2'
                                        */
  real_T s2_X0;                        /* Expression: 0
                                        * Referenced by: '<Root>/s2'
                                        */
  real_T s3_A;                         /* Computed Parameter: s3_A
                                        * Referenced by: '<Root>/s3'
                                        */
  real_T s3_B;                         /* Computed Parameter: s3_B
                                        * Referenced by: '<Root>/s3'
                                        */
  real_T s3_C;                         /* Computed Parameter: s3_C
                                        * Referenced by: '<Root>/s3'
                                        */
  real_T s3_X0;                        /* Expression: 0
                                        * Referenced by: '<Root>/s3'
                                        */
  real_T Gain3_Gain;                   /* Expression: 0
                                        * Referenced by: '<Root>/Gain3'
                                        */
  real_T Gain7_Gain;                   /* Expression: 0
                                        * Referenced by: '<Root>/Gain7'
                                        */
  real_T uDLookupTable7_tableData[2];  /* Expression: [0 15.5]
                                        * Referenced by: '<S21>/1-D Lookup Table7'
                                        */
  real_T uDLookupTable7_bp01Data[2];   /* Expression: [290 3951]
                                        * Referenced by: '<S21>/1-D Lookup Table7'
                                        */
  real_T uDLookupTable2_tableData[2];  /* Expression: [0 0.5]
                                        * Referenced by: '<S21>/1-D Lookup Table2'
                                        */
  real_T uDLookupTable2_bp01Data[2];   /* Expression: [1024 6018]
                                        * Referenced by: '<S21>/1-D Lookup Table2'
                                        */
  real_T uDLookupTable4_tableData[2];  /* Expression: [0 0.5]
                                        * Referenced by: '<S21>/1-D Lookup Table4'
                                        */
  real_T uDLookupTable4_bp01Data[2];   /* Expression: [1006 6005]
                                        * Referenced by: '<S21>/1-D Lookup Table4'
                                        */
  real_T uDLookupTable6_tableData[2];  /* Expression: [0 0.5]
                                        * Referenced by: '<S21>/1-D Lookup Table6'
                                        */
  real_T uDLookupTable6_bp01Data[2];   /* Expression: [1024 6020]
                                        * Referenced by: '<S21>/1-D Lookup Table6'
                                        */
  real_T Constant_Value_a;             /* Expression: 43
                                        * Referenced by: '<S21>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 3
                                        * Referenced by: '<S21>/Constant1'
                                        */
  real_T Constant2_Value_n;            /* Expression: 32
                                        * Referenced by: '<S21>/Constant2'
                                        */
  real_T Constant3_Value_j;            /* Expression: 1
                                        * Referenced by: '<S21>/Constant3'
                                        */
  real_T Constant4_Value;              /* Expression: 255
                                        * Referenced by: '<S21>/Constant4'
                                        */
  real_T Constant5_Value;              /* Expression: 255
                                        * Referenced by: '<S21>/Constant5'
                                        */
  real_T Constant6_Value_n;            /* Expression: 255
                                        * Referenced by: '<S21>/Constant6'
                                        */
  real_T Constant7_Value;              /* Expression: 255
                                        * Referenced by: '<S21>/Constant7'
                                        */
  real_T Setup_P1_Size[2];             /* Computed Parameter: Setup_P1_Size
                                        * Referenced by: '<S21>/Setup '
                                        */
  real_T Setup_P1[4];                  /* Expression: can1UserBR
                                        * Referenced by: '<S21>/Setup '
                                        */
  real_T Setup_P2_Size[2];             /* Computed Parameter: Setup_P2_Size
                                        * Referenced by: '<S21>/Setup '
                                        */
  real_T Setup_P2[4];                  /* Expression: can2UserBR
                                        * Referenced by: '<S21>/Setup '
                                        */
  real_T Setup_P3_Size[2];             /* Computed Parameter: Setup_P3_Size
                                        * Referenced by: '<S21>/Setup '
                                        */
  real_T Setup_P3;                     /* Expression: can1SendS
                                        * Referenced by: '<S21>/Setup '
                                        */
  real_T Setup_P4_Size[2];             /* Computed Parameter: Setup_P4_Size
                                        * Referenced by: '<S21>/Setup '
                                        */
  real_T Setup_P4[8];                  /* Expression: can1RecS
                                        * Referenced by: '<S21>/Setup '
                                        */
  real_T Setup_P5_Size[2];             /* Computed Parameter: Setup_P5_Size
                                        * Referenced by: '<S21>/Setup '
                                        */
  real_T Setup_P5[4];                  /* Expression: can2SendS
                                        * Referenced by: '<S21>/Setup '
                                        */
  real_T Setup_P6_Size[2];             /* Computed Parameter: Setup_P6_Size
                                        * Referenced by: '<S21>/Setup '
                                        */
  real_T Setup_P7_Size[2];             /* Computed Parameter: Setup_P7_Size
                                        * Referenced by: '<S21>/Setup '
                                        */
  real_T Setup_P8_Size[2];             /* Computed Parameter: Setup_P8_Size
                                        * Referenced by: '<S21>/Setup '
                                        */
  real_T Setup_P9_Size[2];             /* Computed Parameter: Setup_P9_Size
                                        * Referenced by: '<S21>/Setup '
                                        */
  real_T Setup_P10_Size[2];            /* Computed Parameter: Setup_P10_Size
                                        * Referenced by: '<S21>/Setup '
                                        */
  real_T Setup_P11_Size[2];            /* Computed Parameter: Setup_P11_Size
                                        * Referenced by: '<S21>/Setup '
                                        */
  real_T Setup_P11[8];                 /* Expression: can1RecSI
                                        * Referenced by: '<S21>/Setup '
                                        */
  real_T Setup_P12_Size[2];            /* Computed Parameter: Setup_P12_Size
                                        * Referenced by: '<S21>/Setup '
                                        */
  real_T Setup_P13_Size[2];            /* Computed Parameter: Setup_P13_Size
                                        * Referenced by: '<S21>/Setup '
                                        */
  real_T Setup_P14_Size[2];            /* Computed Parameter: Setup_P14_Size
                                        * Referenced by: '<S21>/Setup '
                                        */
  real_T Setup_P15_Size[2];            /* Computed Parameter: Setup_P15_Size
                                        * Referenced by: '<S21>/Setup '
                                        */
  real_T Setup_P15;                    /* Expression: initarray
                                        * Referenced by: '<S21>/Setup '
                                        */
  real_T Setup_P16_Size[2];            /* Computed Parameter: Setup_P16_Size
                                        * Referenced by: '<S21>/Setup '
                                        */
  real_T Setup_P16;                    /* Expression: termarray
                                        * Referenced by: '<S21>/Setup '
                                        */
  real_T Setup_P17_Size[2];            /* Computed Parameter: Setup_P17_Size
                                        * Referenced by: '<S21>/Setup '
                                        */
  real_T Setup_P17;                    /* Expression: ioBaseAddress
                                        * Referenced by: '<S21>/Setup '
                                        */
  real_T Setup_P18_Size[2];            /* Computed Parameter: Setup_P18_Size
                                        * Referenced by: '<S21>/Setup '
                                        */
  real_T Setup_P18;                    /* Expression: memBaseAddress
                                        * Referenced by: '<S21>/Setup '
                                        */
  real_T Setup_P19_Size[2];            /* Computed Parameter: Setup_P19_Size
                                        * Referenced by: '<S21>/Setup '
                                        */
  real_T Setup_P19;                    /* Expression: intNo
                                        * Referenced by: '<S21>/Setup '
                                        */
  real_T Setup_P20_Size[2];            /* Computed Parameter: Setup_P20_Size
                                        * Referenced by: '<S21>/Setup '
                                        */
  real_T Setup_P20;                    /* Expression: board
                                        * Referenced by: '<S21>/Setup '
                                        */
  real_T Setup_P21_Size[2];            /* Computed Parameter: Setup_P21_Size
                                        * Referenced by: '<S21>/Setup '
                                        */
  real_T Setup_P21;                    /* Expression: can1bus
                                        * Referenced by: '<S21>/Setup '
                                        */
  real_T Setup_P22_Size[2];            /* Computed Parameter: Setup_P22_Size
                                        * Referenced by: '<S21>/Setup '
                                        */
  real_T Setup_P22;                    /* Expression: can2bus
                                        * Referenced by: '<S21>/Setup '
                                        */
  real_T Setup_P23_Size[2];            /* Computed Parameter: Setup_P23_Size
                                        * Referenced by: '<S21>/Setup '
                                        */
  real_T Setup_P23;                    /* Expression: bus_off_out
                                        * Referenced by: '<S21>/Setup '
                                        */
  real_T Setup_P24_Size[2];            /* Computed Parameter: Setup_P24_Size
                                        * Referenced by: '<S21>/Setup '
                                        */
  real_T Setup_P24;                    /* Expression: bus_off_rec
                                        * Referenced by: '<S21>/Setup '
                                        */
  uint32_T Delay_DelayLength;          /* Computed Parameter: Delay_DelayLength
                                        * Referenced by: '<S18>/Delay'
                                        */
  uint32_T Delay1_DelayLength;         /* Computed Parameter: Delay1_DelayLength
                                        * Referenced by: '<S18>/Delay1'
                                        */
  uint8_T ManualSwitch_CurrentSetting; /* Computed Parameter: ManualSwitch_CurrentSetting
                                        * Referenced by: '<Root>/Manual Switch'
                                        */
  uint8_T ManualSwitch2_CurrentSetting;/* Computed Parameter: ManualSwitch2_CurrentSetting
                                        * Referenced by: '<S21>/Manual Switch2'
                                        */
  uint8_T ManualSwitch4_CurrentSetting;/* Computed Parameter: ManualSwitch4_CurrentSetting
                                        * Referenced by: '<S21>/Manual Switch4'
                                        */
  uint8_T ManualSwitch_CurrentSetting_b;/* Computed Parameter: ManualSwitch_CurrentSetting_b
                                         * Referenced by: '<S21>/Manual Switch'
                                         */
  uint8_T ManualSwitch1_CurrentSetting;/* Computed Parameter: ManualSwitch1_CurrentSetting
                                        * Referenced by: '<S21>/Manual Switch1'
                                        */
  uint8_T ManualSwitch3_CurrentSetting;/* Computed Parameter: ManualSwitch3_CurrentSetting
                                        * Referenced by: '<S21>/Manual Switch3'
                                        */
  P_Subsystem_ceshi20210224_17_T Subsystem1;/* '<Root>/Subsystem1' */
  P_Subsystem_ceshi20210224_17_T Subsystem_d;/* '<Root>/Subsystem' */
};

/* Real-time Model Data Structure */
struct tag_RTM_ceshi20210224_17_T {
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
  real_T odeY[9];
  real_T odeF[4][9];
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
extern P_ceshi20210224_17_T ceshi20210224_17_P;

/* Block signals (auto storage) */
extern B_ceshi20210224_17_T ceshi20210224_17_B;

/* Continuous states (auto storage) */
extern X_ceshi20210224_17_T ceshi20210224_17_X;

/* Block states (auto storage) */
extern DW_ceshi20210224_17_T ceshi20210224_17_DW;

/* External data declarations for dependent source files */
extern const real_T ceshi20210224_17_RGND;/* real_T ground */

/* Zero-crossing (trigger) state */
extern PrevZCX_ceshi20210224_17_T ceshi20210224_17_PrevZCX;

/* Model entry point functions */
extern void ceshi20210224_17_initialize(void);
extern void ceshi20210224_17_output(void);
extern void ceshi20210224_17_update(void);
extern void ceshi20210224_17_terminate(void);

/*====================*
 * External functions *
 *====================*/
extern ceshi20210224_17_rtModel *ceshi20210224_17(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  ceshi20210224_17_GetCAPIStaticMap(void);

/* Real-time Model object */
extern RT_MODEL_ceshi20210224_17_T *const ceshi20210224_17_M;

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
 * '<Root>' : 'ceshi20210224_17'
 * '<S1>'   : 'ceshi20210224_17/Chart'
 * '<S2>'   : 'ceshi20210224_17/Chart1'
 * '<S3>'   : 'ceshi20210224_17/Chart2'
 * '<S4>'   : 'ceshi20210224_17/Chart3'
 * '<S5>'   : 'ceshi20210224_17/Scope '
 * '<S6>'   : 'ceshi20210224_17/Scope 1'
 * '<S7>'   : 'ceshi20210224_17/Scope 2'
 * '<S8>'   : 'ceshi20210224_17/Scope 3'
 * '<S9>'   : 'ceshi20210224_17/Scope 4'
 * '<S10>'  : 'ceshi20210224_17/Scope 5'
 * '<S11>'  : 'ceshi20210224_17/Subsystem'
 * '<S12>'  : 'ceshi20210224_17/Subsystem1'
 * '<S13>'  : 'ceshi20210224_17/Subsystem2'
 * '<S14>'  : 'ceshi20210224_17/Subsystem3'
 * '<S15>'  : 'ceshi20210224_17/Subsystem4'
 * '<S16>'  : 'ceshi20210224_17/Subsystem5'
 * '<S17>'  : 'ceshi20210224_17/Subsystem6'
 * '<S18>'  : 'ceshi20210224_17/Subsystem7'
 * '<S19>'  : 'ceshi20210224_17/Subsystem8'
 * '<S20>'  : 'ceshi20210224_17/Subsystem9'
 * '<S21>'  : 'ceshi20210224_17/chuanganqi1'
 * '<S22>'  : 'ceshi20210224_17/Subsystem7/Subsystem'
 * '<S23>'  : 'ceshi20210224_17/chuanganqi1/Scope 1'
 */
#endif                                 /* RTW_HEADER_ceshi20210224_17_h_ */
