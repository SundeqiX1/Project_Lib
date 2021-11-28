/*
 * simpleCylinder1.h
 *
 * Real-Time Workshop code generation for Simulink model "simpleCylinder1.mdl".
 *
 * Model Version              : 1.34
 * Real-Time Workshop version : 6.5  (R2006b)  03-Aug-2006
 * C source code generated on : Thu Nov 26 15:47:16 2020
 */
#ifndef _RTW_HEADER_simpleCylinder1_h_
#define _RTW_HEADER_simpleCylinder1_h_
#include "rtw_modelmap.h"
#ifndef _simpleCylinder1_COMMON_INCLUDES_
# define _simpleCylinder1_COMMON_INCLUDES_
#include <stdlib.h>
#include <stddef.h>
#include <math.h>
#include <windows.h>
#include <xpcimports.h>
#include <float.h>
#include <string.h>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_logging.h"
#include "rtlibsrc.h"
#include "dt_info.h"
#include "ext_work.h"
#include "rt_nonfinite.h"
#endif                                 /* _simpleCylinder1_COMMON_INCLUDES_ */

#include "simpleCylinder1_types.h"

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

#ifndef rtmGetDiscStates
# define rtmGetDiscStates(rtm)         ((rtm)->ModelData.discStates)
#endif

#ifndef rtmSetDiscStates
# define rtmSetDiscStates(rtm, val)    ((rtm)->ModelData.discStates = (val))
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
# define rtmGetFirstInitCondFlag(rtm)  ((rtm)->Timing.firstInitCondFlag)
#endif

#ifndef rtmSetFirstInitCondFlag
# define rtmSetFirstInitCondFlag(rtm, val) ((rtm)->Timing.firstInitCondFlag = (val))
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ((rtm)->ModelData.intgData)
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ((rtm)->ModelData.intgData = (val))
#endif

#ifndef rtmGetMdlRefGlobalTID
# define rtmGetMdlRefGlobalTID(rtm)    ((rtm)->Timing.mdlref_GlobalTID)
#endif

#ifndef rtmSetMdlRefGlobalTID
# define rtmSetMdlRefGlobalTID(rtm, val) ((rtm)->Timing.mdlref_GlobalTID = (val))
#endif

#ifndef rtmGetMdlRefTriggerTID
# define rtmGetMdlRefTriggerTID(rtm)   ((rtm)->Timing.mdlref_TriggerTID)
#endif

#ifndef rtmSetMdlRefTriggerTID
# define rtmSetMdlRefTriggerTID(rtm, val) ((rtm)->Timing.mdlref_TriggerTID = (val))
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

#ifndef rtmGetNonsampledZCs
# define rtmGetNonsampledZCs(rtm)      ((rtm)->ModelData.nonsampledZCs)
#endif

#ifndef rtmSetNonsampledZCs
# define rtmSetNonsampledZCs(rtm, val) ((rtm)->ModelData.nonsampledZCs = (val))
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
# define rtmGetOdeF(rtm)               ((rtm)->ModelData.odeF)
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ((rtm)->ModelData.odeF = (val))
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ((rtm)->ModelData.odeY)
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ((rtm)->ModelData.odeY = (val))
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
# define rtmGetParamIsMalloced(rtm)    ((rtm)->ModelData.paramIsMalloced)
#endif

#ifndef rtmSetParamIsMalloced
# define rtmSetParamIsMalloced(rtm, val) ((rtm)->ModelData.paramIsMalloced = (val))
#endif

#ifndef rtmGetPath
# define rtmGetPath(rtm)               ((rtm)->path)
#endif

#ifndef rtmSetPath
# define rtmSetPath(rtm, val)          ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
# define rtmGetPerTaskSampleHits(rtm)  ((rtm)->Timing.RateInteraction)
#endif

#ifndef rtmSetPerTaskSampleHits
# define rtmSetPerTaskSampleHits(rtm, val) ((rtm)->Timing.RateInteraction = (val))
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
# define rtmGetRTWRTModelMethodsInfo(rtm) ((rtm)->modelMethodsInfo)
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
# define rtmSetRTWRTModelMethodsInfo(rtm, val) ((rtm)->modelMethodsInfo = (val))
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
# define rtmGetTaskCounters(rtm)       ((rtm)->Timing.TaskCounters)
#endif

#ifndef rtmSetTaskCounters
# define rtmSetTaskCounters(rtm, val)  ((rtm)->Timing.TaskCounters = (val))
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
#define simpleCylinder1_M              simpleCylinder1_rtM

/* Definition for use in the target main file */
#define simpleCylinder1_rtModel        rtModel_simpleCylinder1

/* Block signals for system '<S7>/Enabled Subsystem1' */
typedef struct {
  real_T In1;                          /* '<S13>/In1' */
} rtB_EnabledSubsystem1_simpleCyl;

/* Block states (auto storage) for system '<S7>/Enabled Subsystem1' */
typedef struct {
  int_T EnabledSubsystem1_MODE;        /* '<S7>/Enabled Subsystem1' */
  int8_T EnabledSubsystem1_SubsysRanBC;/* '<S7>/Enabled Subsystem1' */
} rtDW_EnabledSubsystem1_simpleCy;

/* Block signals (auto storage) */
typedef struct {
  real_T PCI2[16];                     /* '<Root>/PCI-2' */
  real_T right7;                       /* '<Root>/right7' */
  real_T SwitchControl;                /* '<S4>/SwitchControl' */
  real_T Memory[5];                    /* '<S15>/Memory' */
  real_T Assignment1[5];               /* '<S15>/Assignment1' */
  real_T SumofElements;                /* '<S15>/Sum of Elements' */
  real_T Width;                        /* '<S15>/Width' */
  real_T Subtract;                     /* '<S15>/Subtract' */
  real_T Switch[5];                    /* '<S15>/Switch' */
  real_T RateLimiter[5];               /* '<S15>/Rate Limiter' */
  real_T Gain;                         /* '<S7>/Gain' */
  real_T Gain1;                        /* '<S7>/Gain1' */
  real_T Product4;                     /* '<S7>/Product4' */
  real_T Gain6;                        /* '<S7>/Gain6' */
  real_T Gain2;                        /* '<S7>/Gain2' */
  real_T Product5;                     /* '<S7>/Product5' */
  real_T Memory_l;                     /* '<S6>/Memory' */
  real_T DataTypeConversion3;          /* '<S6>/Data Type Conversion3' */
  real_T DataTypeConversion2;          /* '<S6>/Data Type Conversion2' */
  real_T Memory1;                      /* '<S6>/Memory1' */
  real_T DataTypeConversion;           /* '<S6>/Data Type Conversion' */
  real_T StartLimiter;                 /* '<S6>/Start Limiter' */
  real_T DataTypeConversion1;          /* '<S6>/Data Type Conversion1' */
  real_T ReadyLimiter[2];              /* '<S6>/Ready Limiter' */
  real_T fade_in_fade_out[3];          /* '<S6>/fade_in_fade_out' */
  real_T Gain5;                        /* '<S7>/Gain5' */
  real_T Product9;                     /* '<S7>/Product9' */
  real_T u;                            /* '<S17>/2-5' */
  real_T scale_gain;                   /* '<S17>/scale_gain' */
  real_T u0;                           /* '<S17>/2-10' */
  real_T scale_gain1;                  /* '<S17>/scale_gain1' */
  real_T u0_n;                         /* '<S17>/2-20' */
  real_T scale_gain2;                  /* '<S17>/scale_gain2' */
  real_T u0_o;                         /* '<S17>/2-30' */
  real_T scale_gain3;                  /* '<S17>/scale_gain3' */
  real_T u0_g;                         /* '<S17>/2-60' */
  real_T scale_gain4;                  /* '<S17>/scale_gain4' */
  real_T TmpHiddenBufferAtSelector7Inpor[5];/* '<S7>/random_filter' */
  real_T Selector7;                    /* '<S7>/Selector7' */
  real_T random_gain;                  /* '<S7>/random_gain' */
  real_T Gain3;                        /* '<S7>/Gain3' */
  real_T Product1;                     /* '<S7>/Product1' */
  real_T Gain4;                        /* '<S7>/Gain4' */
  real_T Product6;                     /* '<S7>/Product6' */
  real_T Sum2;                         /* '<S7>/Sum2' */
  real_T Product5_m;                   /* '<Root>/Product5' */
  real_T Product1_o;                   /* '<S8>/Product1' */
  real_T Discreteinversefit;           /* '<S8>/Discrete inverse fit' */
  real_T MultiportSwitch;              /* '<Root>/Multiport Switch' */
  real_T Saturation4;                  /* '<Root>/Saturation4' */
  real_T Sum7;                         /* '<Root>/Sum7' */
  real_T Sum6;                         /* '<Root>/Sum6' */
  real_T Product6_o;                   /* '<Root>/Product6' */
  real_T Integrator;                   /* '<Root>/Integrator' */
  real_T Product3;                     /* '<Root>/Product3' */
  real_T Derivative;                   /* '<Root>/Derivative' */
  real_T Product4_i;                   /* '<Root>/Product4' */
  real_T Add;                          /* '<Root>/Add' */
  real_T Switch9;                      /* '<S9>/Switch9' */
  real_T Gain1_h;                      /* '<S9>/Gain1' */
  real_T Gain2_j;                      /* '<S9>/Gain2' */
  real_T UnitDelay;                    /* '<S9>/Unit Delay' */
  real_T Sum11;                        /* '<S9>/Sum11' */
  real_T SwitchControl_l;              /* '<S5>/SwitchControl' */
  real_T gain3;                        /* '<Root>/gain3' */
  real_T SignalGenerator2;             /* '<Root>/Signal Generator2' */
  real_T SignalGenerator3;             /* '<Root>/Signal Generator3' */
  real_T SignalGenerator4;             /* '<Root>/Signal Generator4' */
  real_T SignalGenerator5;             /* '<Root>/Signal Generator5' */
  real_T SignalGenerator6;             /* '<Root>/Signal Generator6' */
  real_T SignalGenerator7;             /* '<Root>/Signal Generator7' */
  real_T SignalGenerator8;             /* '<Root>/Signal Generator8' */
  real_T SignalGenerator9;             /* '<Root>/Signal Generator9' */
  real_T SignalGenerator10;            /* '<Root>/Signal Generator10' */
  real_T SignalGenerator11;            /* '<Root>/Signal Generator11' */
  real_T Product1_i[6];                /* '<S1>/Product1' */
  real_T SignalGenerator12;            /* '<Root>/Signal Generator12' */
  real_T SignalGenerator13;            /* '<Root>/Signal Generator13' */
  real_T SignalGenerator14;            /* '<Root>/Signal Generator14' */
  real_T SignalGenerator15;            /* '<Root>/Signal Generator15' */
  real_T SignalGenerator16;            /* '<Root>/Signal Generator16' */
  real_T SignalGenerator17;            /* '<Root>/Signal Generator17' */
  real_T Product[6];                   /* '<S1>/Product' */
  real_T DataTypeConversion8[36];      /* '<S1>/Data Type Conversion8' */
  real_T Sum2_p[36];                   /* '<S1>/Sum2' */
  real_T Gain_m[36];                   /* '<S1>/Gain' */
  real_T encodeddata[9];               /* '<S1>/encoded data' */
  real_T Clock;                        /* '<S1>/Clock' */
  real_T Encoded_data[10];             /* '<S1>/Encoded_data' */
  real_T gain1;                        /* '<Root>/gain1' */
  real_T gain2;                        /* '<Root>/gain2' */
  real_T RoundingFunction1[5];         /* '<S15>/Rounding Function1' */
  real_T random;                       /* '<S7>/random' */
  real_T Saturation2;                  /* '<S9>/Saturation2' */
  real_T Clock_h;                      /* '<S19>/Clock' */
  real_T MathFunction;                 /* '<S19>/Math Function' */
  real_T SquareGain;                   /* '<S19>/Square Gain' */
  real_T Product2;                     /* '<S19>/Product2' */
  real_T TrigonometricFunction;        /* '<S19>/Trigonometric Function' */
  real_T Sign;                         /* '<S19>/Sign' */
  real_T Product4_h;                   /* '<S19>/Product4' */
  real_T Sum2_pe;                      /* '<S19>/Sum2' */
  real_T Memory_h;                     /* '<S18>/Memory' */
  real_T Gain1_f;                      /* '<S18>/Gain1' */
  real_T Sum1;                         /* '<S18>/Sum1' */
  real_T Clock_n;                      /* '<S18>/Clock' */
  real_T Product2_l;                   /* '<S18>/Product2' */
  real_T Abs;                          /* '<S18>/Abs' */
  real_T MathFunction1;                /* '<S18>/Math Function1' */
  real_T Gain2_o;                      /* '<S18>/Gain2' */
  real_T MathFunction_f;               /* '<S18>/Math Function' */
  real_T Switch_d;                     /* '<S18>/Switch' */
  real_T Product1_a;                   /* '<S18>/Product1' */
  real_T Sum3;                         /* '<S18>/Sum3' */
  real_T TrigonometricFunction_b;      /* '<S18>/Trigonometric Function' */
  real_T Product3_m;                   /* '<S18>/Product3' */
  real_T Sum2_i;                       /* '<S18>/Sum2' */
  real_T MultiportSwitch_p;            /* '<S16>/Multiport Switch' */
  real_T Chirp_Gain;                   /* '<S16>/Chirp_Gain' */
  real_T start;                        /* '<S6>/Control Logic' */
  real_T start_sts;                    /* '<S6>/Control Logic' */
  real_T ready_sts;                    /* '<S6>/Control Logic' */
  real_T ready;                        /* '<S6>/Control Logic' */
  real_T Saturation1;                  /* '<S9>/Saturation1' */
  real_T Sum5;                         /* '<Root>/Sum5' */
  real_T MultiportSwitch_e;            /* '<S8>/Multiport Switch' */
  real_T Product1_h;                   /* '<Root>/Product1' */
  real_T Product_a;                    /* '<Root>/Product' */
  real_T Sum;                          /* '<Root>/Sum' */
  real_T Sum1_c;                       /* '<S8>/Sum1' */
  real_T Product_k;                    /* '<S8>/Product' */
  real_T MultiportSwitch1;             /* '<S8>/Multiport Switch1' */
  uint16_T DataTypeConversion15[36];   /* '<S1>/Data Type Conversion15' */
  uint8_T AND;                         /* '<S7>/AND' */
  uint8_T HiddenBuf_InsertedFor_chirp_ena;/* '<S7>/AND' */
  uint8_T Compare;                     /* '<S2>/Compare' */
  uint8_T Compare_l;                   /* '<S3>/Compare' */
  uint8_T Pack1[72];                   /* '<S1>/Pack1' */
  boolean_T LogicalOperator1[5];       /* '<S15>/Logical Operator1' */
  boolean_T LogicalOperator2[5];       /* '<S15>/Logical Operator2' */
  boolean_T RelationalOperator;        /* '<S15>/Relational Operator' */
  boolean_T DataTypeConversion_c[5];   /* '<S7>/Data Type Conversion' */
  boolean_T HiddenBuf_InsertedFor_sine_at_i;/* 'synthesized block' */
  boolean_T HiddenBuf_InsertedFor_square_at;/* 'synthesized block' */
  boolean_T OR1;                       /* '<S6>/OR1' */
  boolean_T LogicalOperator2_f;        /* '<S6>/Logical Operator2' */
  boolean_T HiddenBuf_InsertedFor_EnabledSu;/* 'synthesized block' */
  boolean_T HiddenBuf_InsertedFor_Enabled_d;/* 'synthesized block' */
  boolean_T LogicalOperator;           /* '<Root>/Logical Operator' */
  boolean_T RelationalOperator_n;      /* '<S9>/Relational Operator' */
  boolean_T RelationalOperator2;       /* '<S18>/Relational Operator2' */
  boolean_T RelationalOperator1;       /* '<S18>/Relational Operator1' */
  boolean_T LogicalOperator_e;         /* '<S18>/Logical Operator' */
  rtB_EnabledSubsystem1_simpleCyl EnabledSubsystem2;/* '<S7>/Enabled Subsystem2' */
  rtB_EnabledSubsystem1_simpleCyl EnabledSubsystem1;/* '<S7>/Enabled Subsystem1' */
} BlockIO_simpleCylinder1;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T Discreteinversefit_DSTATE[6]; /* '<S8>/Discrete inverse fit' */
  real_T UnitDelay_DSTATE;             /* '<S9>/Unit Delay' */
  real_T Memory_PreviousInput[5];      /* '<S15>/Memory' */
  real_T PrevY[5];                     /* '<S15>/Rate Limiter' */
  real_T LastMajorTime;                /* '<S15>/Rate Limiter' */
  real_T Memory_PreviousInput_m;       /* '<S6>/Memory' */
  real_T Memory1_PreviousInput;        /* '<S6>/Memory1' */
  real_T PrevY_g;                      /* '<S6>/Start Limiter' */
  real_T LastMajorTime_p;              /* '<S6>/Start Limiter' */
  real_T PrevY_m[2];                   /* '<S6>/Ready Limiter' */
  real_T LastMajorTime_e;              /* '<S6>/Ready Limiter' */
  real_T Memory_PreviousInput_l;       /* '<S18>/Memory' */
  CSc1_simpleCylinder1_ChartStruc ControlLogic;/* '<S6>/Control Logic' */
  struct {
    real_T TimeStampA;
    real_T LastUAtTimeA;
    real_T TimeStampB;
    real_T LastUAtTimeB;
  } Derivative_RWORK;                  /* '<Root>/Derivative' */

  struct {
    real_T NextOutput;
  } random_RWORK;                      /* '<S7>/random' */

  struct {
    void *LoggedData;
  } Scope1_PWORK;                      /* '<Root>/Scope1' */

  struct {
    void *LoggedData;
  } Scope2_PWORK;                      /* '<Root>/Scope2' */

  struct {
    void *LoggedData;
  } ToWorkspace_PWORK;                 /* '<Root>/To Workspace' */

  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<Root>/Scope' */

  int32_T Selector7_DWORK1;            /* '<S7>/Selector7' */
  int_T PCI2_IWORK[3];                 /* '<Root>/PCI-2' */
  struct {
    int_T AcquireOK;
  } SFunction_IWORK;                   /* '<S10>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_b;                 /* '<S11>/S-Function' */

  struct {
    int_T RandSeed;
  } random_IWORK;                      /* '<S7>/random' */

  int_T sine_MODE;                     /* '<S7>/sine' */
  int_T square_MODE;                   /* '<S7>/square' */
  int_T chirp_enable_MODE;             /* '<S7>/chirp_enable' */
  int8_T sine_SubsysRanBC;             /* '<S7>/sine' */
  int8_T square_SubsysRanBC;           /* '<S7>/square' */
  int8_T chirp_enable_SubsysRanBC;     /* '<S7>/chirp_enable' */
  rtDW_EnabledSubsystem1_simpleCy EnabledSubsystem2;/* '<S7>/Enabled Subsystem2' */
  rtDW_EnabledSubsystem1_simpleCy EnabledSubsystem1;/* '<S7>/Enabled Subsystem1' */
} D_Work_simpleCylinder1;

/* Continuous states (auto storage) */
typedef struct {
  real_T u_CSTATE[16];                 /* '<S17>/2-5' */
  real_T u0_CSTATE[16];                /* '<S17>/2-10' */
  real_T u0_CSTATE_d[16];              /* '<S17>/2-20' */
  real_T u0_CSTATE_c[16];              /* '<S17>/2-30' */
  real_T u0_CSTATE_b[16];              /* '<S17>/2-60' */
  real_T Integrator_CSTATE;            /* '<Root>/Integrator' */
} ContinuousStates_simpleCylinder;

/* State derivatives (auto storage) */
typedef struct {
  real_T u_CSTATE[16];                 /* '<S17>/2-5' */
  real_T u0_CSTATE[16];                /* '<S17>/2-10' */
  real_T u0_CSTATE_d[16];              /* '<S17>/2-20' */
  real_T u0_CSTATE_c[16];              /* '<S17>/2-30' */
  real_T u0_CSTATE_b[16];              /* '<S17>/2-60' */
  real_T Integrator_CSTATE;            /* '<Root>/Integrator' */
} StateDerivatives_simpleCylinder;

/* State disabled  */
typedef struct {
  boolean_T u_CSTATE[16];              /* '<S17>/2-5' */
  boolean_T u0_CSTATE[16];             /* '<S17>/2-10' */
  boolean_T u0_CSTATE_d[16];           /* '<S17>/2-20' */
  boolean_T u0_CSTATE_c[16];           /* '<S17>/2-30' */
  boolean_T u0_CSTATE_b[16];           /* '<S17>/2-60' */
  boolean_T Integrator_CSTATE;         /* '<Root>/Integrator' */
} StateDisabled_simpleCylinder1;

#ifndef ODE4_INTG
#define ODE4_INTG

/* ODE4 Integration Data */
typedef struct {
  real_T *y;                           /* output */
  real_T *f[4];                        /* derivatives */
} ODE4_IntgData;

#endif

/* Backward compatible GRT Identifiers */
#define rtB                            simpleCylinder1_B
#define BlockIO                        BlockIO_simpleCylinder1
#define rtX                            simpleCylinder1_X
#define ContinuousStates               ContinuousStates_simpleCylinder
#define rtP                            simpleCylinder1_P
#define Parameters                     Parameters_simpleCylinder1
#define rtDWork                        simpleCylinder1_DWork
#define D_Work                         D_Work_simpleCylinder1

/* Parameters (auto storage) */
struct Parameters_simpleCylinder1 {
  real_T Constant18_Value;             /* Expression: 3
                                        * '<Root>/Constant18'
                                        */
  real_T PCI2_P1_Size[2];              /* Computed Parameter: P1Size
                                        * '<Root>/PCI-2'
                                        */
  real_T PCI2_P1[2];                   /* Expression: [SampleTime SampleOffset]
                                        * '<Root>/PCI-2'
                                        */
  real_T PCI2_P2_Size[2];              /* Computed Parameter: P2Size
                                        * '<Root>/PCI-2'
                                        */
  real_T PCI2_P2;                      /* Expression: SLOT
                                        * '<Root>/PCI-2'
                                        */
  real_T right7_XData[2];              /* Expression: [-0.28 9.725]
                                        * '<Root>/right7'
                                        */
  real_T right7_YData[2];              /* Expression: [-10 10]
                                        * '<Root>/right7'
                                        */
  real_T internal_sig_pos_gain_Valu;   /* Expression: 20/0.2
                                        * '<S8>/internal_sig_pos_gain'
                                        */
  real_T Constant3_Value[5];           /* Expression: zeros(1,itnum)
                                        * '<S15>/Constant3'
                                        */
  real_T Memory_X0;                    /* Expression: 0
                                        * '<S15>/Memory'
                                        */
  real_T Constant4_Value;              /* Expression: 1
                                        * '<S15>/Constant4'
                                        */
  real_T a_Value;                      /* Expression: 1
                                        * '<Root>/a'
                                        */
  real_T Constant1_Value;              /* Expression: 2
                                        * '<S15>/Constant1'
                                        */
  real_T RateLimiter_RisingLim;        /* Expression: 1/4
                                        * '<S15>/Rate Limiter'
                                        */
  real_T RateLimiter_FallingLim;       /* Expression: -1/4
                                        * '<S15>/Rate Limiter'
                                        */
  real_T Sin_fuzhi_Value;              /* Expression: 10
                                        * '<S7>/Sin_fuzhi'
                                        */
  real_T Gain_Gain;                    /* Expression: 0.001
                                        * '<S7>/Gain'
                                        */
  real_T Sin_pinlv_Value;              /* Expression: 0
                                        * '<S7>/Sin_pinlv'
                                        */
  real_T Sin_xiangwei_Value;           /* Expression: 0
                                        * '<S7>/Sin_xiangwei'
                                        */
  real_T Sin_bias_Value;               /* Expression: 0
                                        * '<S7>/Sin_bias'
                                        */
  real_T Gain1_Gain;                   /* Expression: 1
                                        * '<S7>/Gain1'
                                        */
  real_T Square_fuzhi_Value;           /* Expression: 0
                                        * '<S7>/Square_fuzhi'
                                        */
  real_T Gain6_Gain;                   /* Expression: 0.001
                                        * '<S7>/Gain6'
                                        */
  real_T Square_zhouqi_Value;          /* Expression: 0
                                        * '<S7>/Square_zhouqi'
                                        */
  real_T Square_bias_Value;            /* Expression: 0
                                        * '<S7>/Square_bias'
                                        */
  real_T Gain2_Gain;                   /* Expression: 1
                                        * '<S7>/Gain2'
                                        */
  real_T Memory_X0_m;                  /* Expression: 0
                                        * '<S6>/Memory'
                                        */
  real_T constant12_Value;             /* Expression: 0
                                        * '<Root>/constant12'
                                        */
  real_T constant11_Value;             /* Expression: 0
                                        * '<Root>/constant11'
                                        */
  real_T Memory1_X0;                   /* Expression: 0
                                        * '<S6>/Memory1'
                                        */
  real_T StartLimiter_RisingLim;       /* Expression: 1/3
                                        * '<S6>/Start Limiter'
                                        */
  real_T StartLimiter_FallingLim;      /* Expression: -1/3
                                        * '<S6>/Start Limiter'
                                        */
  real_T ReadyLimiter_RisingLim;       /* Expression: 1/5
                                        * '<S6>/Ready Limiter'
                                        */
  real_T ReadyLimiter_FallingLim;      /* Expression: -1/5
                                        * '<S6>/Ready Limiter'
                                        */
  real_T fade_in_fade_out_XData[1001]; /* Expression: [0:0.001:1]
                                        * '<S6>/fade_in_fade_out'
                                        */
  real_T fade_in_fade_out_YData[1001]; /* Expression: (sin(([0:0.001:1]*2-1)*pi/2)+1)/2
                                        * '<S6>/fade_in_fade_out'
                                        */
  real_T Gain5_Gain;                   /* Expression: 1
                                        * '<S7>/Gain5'
                                        */
  real_T u_A[31];                      /* Computed Parameter: A
                                        * '<S17>/2-5'
                                        */
  real_T u_B;                          /* Computed Parameter: B
                                        * '<S17>/2-5'
                                        */
  real_T u_C;                          /* Computed Parameter: C
                                        * '<S17>/2-5'
                                        */
  real_T u_X0;                         /* Expression: 0
                                        * '<S17>/2-5'
                                        */
  real_T scale_gain_Gain;              /* Expression: 0.2
                                        * '<S17>/scale_gain'
                                        */
  real_T u0_A[31];                     /* Computed Parameter: A
                                        * '<S17>/2-10'
                                        */
  real_T u0_B;                         /* Computed Parameter: B
                                        * '<S17>/2-10'
                                        */
  real_T u0_C;                         /* Computed Parameter: C
                                        * '<S17>/2-10'
                                        */
  real_T u0_X0;                        /* Expression: 0
                                        * '<S17>/2-10'
                                        */
  real_T scale_gain1_Gain;             /* Expression: 0.2
                                        * '<S17>/scale_gain1'
                                        */
  real_T u0_A_o[31];                   /* Computed Parameter: A
                                        * '<S17>/2-20'
                                        */
  real_T u0_B_i;                       /* Computed Parameter: B
                                        * '<S17>/2-20'
                                        */
  real_T u0_C_k;                       /* Computed Parameter: C
                                        * '<S17>/2-20'
                                        */
  real_T u0_X0_d;                      /* Expression: 0
                                        * '<S17>/2-20'
                                        */
  real_T scale_gain2_Gain;             /* Expression: 0.2
                                        * '<S17>/scale_gain2'
                                        */
  real_T u0_A_e[31];                   /* Computed Parameter: A
                                        * '<S17>/2-30'
                                        */
  real_T u0_B_d;                       /* Computed Parameter: B
                                        * '<S17>/2-30'
                                        */
  real_T u0_C_b;                       /* Computed Parameter: C
                                        * '<S17>/2-30'
                                        */
  real_T u0_X0_n;                      /* Expression: 0
                                        * '<S17>/2-30'
                                        */
  real_T scale_gain3_Gain;             /* Expression: 0.2
                                        * '<S17>/scale_gain3'
                                        */
  real_T u0_A_g[31];                   /* Computed Parameter: A
                                        * '<S17>/2-60'
                                        */
  real_T u0_B_m;                       /* Computed Parameter: B
                                        * '<S17>/2-60'
                                        */
  real_T u0_C_i;                       /* Computed Parameter: C
                                        * '<S17>/2-60'
                                        */
  real_T u0_X0_m;                      /* Expression: 0
                                        * '<S17>/2-60'
                                        */
  real_T scale_gain4_Gain;             /* Expression: 0.2
                                        * '<S17>/scale_gain4'
                                        */
  real_T rand_freq_sel_Value;          /* Expression: 1
                                        * '<S7>/rand_freq_sel'
                                        */
  real_T random_gain_Gain;             /* Expression: 1
                                        * '<S7>/random_gain'
                                        */
  real_T Gain3_Gain;                   /* Expression: 2
                                        * '<S7>/Gain3'
                                        */
  real_T Gain4_Gain;                   /* Expression: 1
                                        * '<S7>/Gain4'
                                        */
  real_T standby_position_Value;       /* Expression: 0
                                        * '<Root>/standby_position'
                                        */
  real_T standby_position3_Value;      /* Expression: -0.1
                                        * '<Root>/standby_position3'
                                        */
  real_T sel_Value;                    /* Expression: 1
                                        * '<S8>/sel '
                                        */
  real_T internal_sig_acc_gain_Valu;   /* Expression: 1
                                        * '<S8>/internal_sig_acc_gain'
                                        */
  real_T Discreteinversefit_A[6];      /* Computed Parameter: A
                                        * '<S8>/Discrete inverse fit'
                                        */
  real_T Discreteinversefit_C[6];      /* Computed Parameter: C
                                        * '<S8>/Discrete inverse fit'
                                        */
  real_T Discreteinversefit_D;         /* Computed Parameter: D
                                        * '<S8>/Discrete inverse fit'
                                        */
  real_T Saturation4_UpperSat;         /* Expression: 10
                                        * '<Root>/Saturation4'
                                        */
  real_T Saturation4_LowerSat;         /* Expression: -10
                                        * '<Root>/Saturation4'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * '<Root>/Constant2'
                                        */
  real_T Integrator_IC;                /* Expression: 0
                                        * '<Root>/Integrator'
                                        */
  real_T Constant16_Value;             /* Expression: 0
                                        * '<Root>/Constant16'
                                        */
  real_T Constant_Value;               /* Expression: const
                                        * '<S2>/Constant'
                                        */
  real_T Constant_Value_e;             /* Expression: const
                                        * '<S3>/Constant'
                                        */
  real_T Gain1_Gain_p;                 /* Expression: 0.2
                                        * '<S9>/Gain1'
                                        */
  real_T Gain2_Gain_b;                 /* Expression: 0.001
                                        * '<S9>/Gain2'
                                        */
  real_T UnitDelay_X0;                 /* Expression: -0.03
                                        * '<S9>/Unit Delay'
                                        */
  real_T standby_position4_Value;      /* Expression: 0
                                        * '<Root>/standby_position4'
                                        */
  real_T standby_position1_Value;      /* Expression: 0
                                        * '<Root>/standby_position1'
                                        */
  real_T gain3_Gain;                   /* Expression: -1
                                        * '<Root>/gain3'
                                        */
  real_T DA2_P1_Size[2];               /* Computed Parameter: P1Size
                                        * '<Root>/DA2'
                                        */
  real_T DA2_P1;                       /* Expression: convBaseAddr
                                        * '<Root>/DA2'
                                        */
  real_T DA2_P2_Size[2];               /* Computed Parameter: P2Size
                                        * '<Root>/DA2'
                                        */
  real_T DA2_P2;                       /* Expression: Range
                                        * '<Root>/DA2'
                                        */
  real_T DA2_P3_Size[2];               /* Computed Parameter: P3Size
                                        * '<Root>/DA2'
                                        */
  real_T DA2_P3[2];                    /* Expression: [SampleTime SampleOffset]
                                        * '<Root>/DA2'
                                        */
  real_T Constant3_Value_b;            /* Expression: 10
                                        * '<S1>/Constant3'
                                        */
  real_T SignalGenerator2_Amplitude;   /* Expression: 3
                                        * '<Root>/Signal Generator2'
                                        */
  real_T SignalGenerator2_Frequency;   /* Expression: 10
                                        * '<Root>/Signal Generator2'
                                        */
  real_T SignalGenerator3_Amplitude;   /* Expression: 4
                                        * '<Root>/Signal Generator3'
                                        */
  real_T SignalGenerator3_Frequency;   /* Expression: 10
                                        * '<Root>/Signal Generator3'
                                        */
  real_T SignalGenerator4_Amplitude;   /* Expression: 5
                                        * '<Root>/Signal Generator4'
                                        */
  real_T SignalGenerator4_Frequency;   /* Expression: 10
                                        * '<Root>/Signal Generator4'
                                        */
  real_T SignalGenerator5_Amplitude;   /* Expression: 6
                                        * '<Root>/Signal Generator5'
                                        */
  real_T SignalGenerator5_Frequency;   /* Expression: 10
                                        * '<Root>/Signal Generator5'
                                        */
  real_T SignalGenerator6_Amplitude;   /* Expression: 7
                                        * '<Root>/Signal Generator6'
                                        */
  real_T SignalGenerator6_Frequency;   /* Expression: 10
                                        * '<Root>/Signal Generator6'
                                        */
  real_T SignalGenerator7_Amplitude;   /* Expression: 8
                                        * '<Root>/Signal Generator7'
                                        */
  real_T SignalGenerator7_Frequency;   /* Expression: 10
                                        * '<Root>/Signal Generator7'
                                        */
  real_T SignalGenerator8_Amplitude;   /* Expression: 9
                                        * '<Root>/Signal Generator8'
                                        */
  real_T SignalGenerator8_Frequency;   /* Expression: 10
                                        * '<Root>/Signal Generator8'
                                        */
  real_T SignalGenerator9_Amplitude;   /* Expression: 10
                                        * '<Root>/Signal Generator9'
                                        */
  real_T SignalGenerator9_Frequency;   /* Expression: 10
                                        * '<Root>/Signal Generator9'
                                        */
  real_T SignalGenerator10_Amplitud;   /* Expression: 11
                                        * '<Root>/Signal Generator10'
                                        */
  real_T SignalGenerator10_Frequenc;   /* Expression: 10
                                        * '<Root>/Signal Generator10'
                                        */
  real_T SignalGenerator11_Amplitud;   /* Expression: 12
                                        * '<Root>/Signal Generator11'
                                        */
  real_T SignalGenerator11_Frequenc;   /* Expression: 10
                                        * '<Root>/Signal Generator11'
                                        */
  real_T Constant2_Value_n[6];         /* Expression: [1 1 1 1 0.5 0.5]
                                        * '<S1>/Constant2'
                                        */
  real_T SignalGenerator12_Amplitud;   /* Expression: 13
                                        * '<Root>/Signal Generator12'
                                        */
  real_T SignalGenerator12_Frequenc;   /* Expression: 10
                                        * '<Root>/Signal Generator12'
                                        */
  real_T SignalGenerator13_Amplitud;   /* Expression: 14
                                        * '<Root>/Signal Generator13'
                                        */
  real_T SignalGenerator13_Frequenc;   /* Expression: 10
                                        * '<Root>/Signal Generator13'
                                        */
  real_T SignalGenerator14_Amplitud;   /* Expression: 15
                                        * '<Root>/Signal Generator14'
                                        */
  real_T SignalGenerator14_Frequenc;   /* Expression: 10
                                        * '<Root>/Signal Generator14'
                                        */
  real_T SignalGenerator15_Amplitud;   /* Expression: 16
                                        * '<Root>/Signal Generator15'
                                        */
  real_T SignalGenerator15_Frequenc;   /* Expression: 10
                                        * '<Root>/Signal Generator15'
                                        */
  real_T SignalGenerator16_Amplitud;   /* Expression: 17
                                        * '<Root>/Signal Generator16'
                                        */
  real_T SignalGenerator16_Frequenc;   /* Expression: 10
                                        * '<Root>/Signal Generator16'
                                        */
  real_T SignalGenerator17_Amplitud;   /* Expression: 18
                                        * '<Root>/Signal Generator17'
                                        */
  real_T SignalGenerator17_Frequenc;   /* Expression: 10
                                        * '<Root>/Signal Generator17'
                                        */
  real_T Constant1_Value_j;            /* Expression: 0.5
                                        * '<S1>/Constant1'
                                        */
  real_T Gain_Gain_e;                  /* Expression: 65535./20.
                                        * '<S1>/Gain'
                                        */
  real_T Encoded_data_Gain;            /* Expression: 1
                                        * '<S1>/Encoded_data'
                                        */
  real_T gain1_Gain;                   /* Expression: 0.01
                                        * '<Root>/gain1'
                                        */
  real_T gain2_Gain;                   /* Expression: 0.01
                                        * '<Root>/gain2'
                                        */
  real_T random_Min;                   /* Expression: -1
                                        * '<S7>/random'
                                        */
  real_T random_Max;                   /* Expression: 1
                                        * '<S7>/random'
                                        */
  real_T random_Seed;                  /* Expression: 0
                                        * '<S7>/random'
                                        */
  real_T Constant15_Value;             /* Expression: 2
                                        * '<Root>/Constant15'
                                        */
  real_T Constant14_Value;             /* Expression: 1
                                        * '<Root>/Constant14'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 0.5
                                        * '<S9>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: -0.5
                                        * '<S9>/Saturation1'
                                        */
  real_T sweep_mode_Value;             /* Expression: 1
                                        * '<S16>/sweep_mode'
                                        */
  real_T Chirp_Gain_Gain;              /* Expression: 0.002
                                        * '<S16>/Chirp_Gain'
                                        */
  real_T Memory_X0_j;                  /* Expression: 0
                                        * '<S18>/Memory'
                                        */
  real_T Gain1_Gain_i;                 /* Expression: 2*pi
                                        * '<S18>/Gain1'
                                        */
  real_T Constant2_Value_h;            /* Expression: 2*pi
                                        * '<S18>/Constant2'
                                        */
  real_T Constant3_Value_c;            /* Expression: 0.001
                                        * '<S18>/Constant3'
                                        */
  real_T mod_Value;                    /* Expression: 360
                                        * '<S18>/mod'
                                        */
  real_T Gain2_Gain_m;                 /* Expression: pi/180
                                        * '<S18>/Gain2'
                                        */
  real_T SquareGain_Gain;              /* Expression: 2*pi
                                        * '<S19>/Square Gain'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: 0.1
                                        * '<S9>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: -0.1
                                        * '<S9>/Saturation2'
                                        */
  uint8_T Constant_Value_m;            /* Expression: uint8(1)
                                        * '<S4>/Constant'
                                        */
  uint8_T SwitchControl_Threshold;     /* Expression: uint8(0)
                                        * '<S4>/SwitchControl'
                                        */
  uint8_T Constant_Value_d;            /* Expression: uint8(1)
                                        * '<S5>/Constant'
                                        */
  uint8_T SwitchControl_Threshold_b;   /* Expression: uint8(0)
                                        * '<S5>/SwitchControl'
                                        */
  boolean_T c_Value;                   /* Computed Parameter: Value
                                        * '<S9>/c'
                                        */
};

/* Real-time Model Data Structure */
struct rtModel_simpleCylinder1 {
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
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
    } Sfcn0;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[6];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      real_T const *UPtrs2[1];
      real_T const *UPtrs3[1];
      real_T const *UPtrs4[1];
      real_T const *UPtrs5[1];
      uint_T attribs[3];
      mxArray *params[3];
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
    real_T *discStates;
    real_T *derivs;
    real_T *nonsampledZCs;
    void *inputs;
    void *outputs;
    boolean_T *contStateDisabled;
    boolean_T zCCacheNeedsReset;
    boolean_T derivCacheNeedsReset;
    boolean_T blkStateChange;
    real_T odeY[81];
    real_T odeF[4][81];
    ODE4_IntgData intgData;
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
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    struct {
      uint8_T TID[2];
    } TaskCounters;

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
extern Parameters_simpleCylinder1 simpleCylinder1_P;

/* Block signals (auto storage) */
extern BlockIO_simpleCylinder1 simpleCylinder1_B;

/* Continuous states (auto storage) */
extern ContinuousStates_simpleCylinder simpleCylinder1_X;

/* Block states (auto storage) */
extern D_Work_simpleCylinder1 simpleCylinder1_DWork;

/* External data declarations for dependent source files */
extern real_T simpleCylinder1_RGND;    /* real_T ground */
extern real_T simpleCylinder1_RGND;    /* real_T ground */

/* Model entry point functions */
extern void simpleCylinder1_initialize(boolean_T firstTime);
extern void simpleCylinder1_output(int_T tid);
extern void simpleCylinder1_update(int_T tid);
extern void simpleCylinder1_terminate(void);

/* Real-time Model object */
extern rtModel_simpleCylinder1 *simpleCylinder1_rtM;

/*
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
 * '<Root>' : simpleCylinder1
 * '<S1>'   : simpleCylinder1/DataSentHost
 * '<S2>'   : simpleCylinder1/Equal To Constant
 * '<S3>'   : simpleCylinder1/Equal To Constant1
 * '<S4>'   : simpleCylinder1/Manual Switch10
 * '<S5>'   : simpleCylinder1/Manual Switch3
 * '<S6>'   : simpleCylinder1/Nomal Motion Logic1
 * '<S7>'   : simpleCylinder1/Signal_generator
 * '<S8>'   : simpleCylinder1/pos_acc_sel
 * '<S9>'   : simpleCylinder1/zero_position_tune
 * '<S10>'  : simpleCylinder1/DataSentHost/data tracing 1
 * '<S11>'  : simpleCylinder1/DataSentHost/data tracing 2
 * '<S12>'  : simpleCylinder1/Nomal Motion Logic1/Control Logic
 * '<S13>'  : simpleCylinder1/Signal_generator/Enabled Subsystem1
 * '<S14>'  : simpleCylinder1/Signal_generator/Enabled Subsystem2
 * '<S15>'  : simpleCylinder1/Signal_generator/Subsystem
 * '<S16>'  : simpleCylinder1/Signal_generator/chirp_enable
 * '<S17>'  : simpleCylinder1/Signal_generator/random_filter
 * '<S18>'  : simpleCylinder1/Signal_generator/sine
 * '<S19>'  : simpleCylinder1/Signal_generator/square
 */
#endif                                 /* _RTW_HEADER_simpleCylinder1_h_ */
