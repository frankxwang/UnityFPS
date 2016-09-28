#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.ComponentModel.BackgroundWorker
struct BackgroundWorker_t925760789;
// System.ComponentModel.DoWorkEventHandler
struct DoWorkEventHandler_t2061310581;
// System.ComponentModel.ProgressChangedEventHandler
struct ProgressChangedEventHandler_t1174806336;
// System.ComponentModel.RunWorkerCompletedEventHandler
struct RunWorkerCompletedEventHandler_t4056931739;
// System.Object
struct Il2CppObject;
// System.ComponentModel.AsyncOperation
struct AsyncOperation_t1801128212;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t692973875;
// System.ComponentModel.DoWorkEventArgs
struct DoWorkEventArgs_t282241604;
// System.ComponentModel.ProgressChangedEventArgs
struct ProgressChangedEventArgs_t1502466393;
// System.ComponentModel.RunWorkerCompletedEventArgs
struct RunWorkerCompletedEventArgs_t1026369758;

#include "codegen/il2cpp-codegen.h"
#include "System_System_ComponentModel_DoWorkEventHandler2061310581.h"
#include "System_System_ComponentModel_ProgressChangedEventH1174806336.h"
#include "System_System_ComponentModel_RunWorkerCompletedEve4056931739.h"
#include "mscorlib_System_Object837106420.h"
#include "System_System_ComponentModel_AsyncOperation1801128212.h"
#include "mscorlib_System_Threading_SendOrPostCallback692973875.h"
#include "System_System_ComponentModel_DoWorkEventArgs282241604.h"
#include "System_System_ComponentModel_ProgressChangedEventA1502466393.h"
#include "System_System_ComponentModel_RunWorkerCompletedEve1026369758.h"

// System.Void System.ComponentModel.BackgroundWorker::.ctor()
extern "C"  void BackgroundWorker__ctor_m440969357 (BackgroundWorker_t925760789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::add_DoWork(System.ComponentModel.DoWorkEventHandler)
extern "C"  void BackgroundWorker_add_DoWork_m2703562946 (BackgroundWorker_t925760789 * __this, DoWorkEventHandler_t2061310581 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::remove_DoWork(System.ComponentModel.DoWorkEventHandler)
extern "C"  void BackgroundWorker_remove_DoWork_m3596774547 (BackgroundWorker_t925760789 * __this, DoWorkEventHandler_t2061310581 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::add_ProgressChanged(System.ComponentModel.ProgressChangedEventHandler)
extern "C"  void BackgroundWorker_add_ProgressChanged_m1381624106 (BackgroundWorker_t925760789 * __this, ProgressChangedEventHandler_t1174806336 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::remove_ProgressChanged(System.ComponentModel.ProgressChangedEventHandler)
extern "C"  void BackgroundWorker_remove_ProgressChanged_m3089255099 (BackgroundWorker_t925760789 * __this, ProgressChangedEventHandler_t1174806336 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::add_RunWorkerCompleted(System.ComponentModel.RunWorkerCompletedEventHandler)
extern "C"  void BackgroundWorker_add_RunWorkerCompleted_m4294877314 (BackgroundWorker_t925760789 * __this, RunWorkerCompletedEventHandler_t4056931739 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::remove_RunWorkerCompleted(System.ComponentModel.RunWorkerCompletedEventHandler)
extern "C"  void BackgroundWorker_remove_RunWorkerCompleted_m581030227 (BackgroundWorker_t925760789 * __this, RunWorkerCompletedEventHandler_t4056931739 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.BackgroundWorker::get_CancellationPending()
extern "C"  bool BackgroundWorker_get_CancellationPending_m543184704 (BackgroundWorker_t925760789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.BackgroundWorker::get_IsBusy()
extern "C"  bool BackgroundWorker_get_IsBusy_m3983670393 (BackgroundWorker_t925760789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.BackgroundWorker::get_WorkerReportsProgress()
extern "C"  bool BackgroundWorker_get_WorkerReportsProgress_m2755607706 (BackgroundWorker_t925760789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::set_WorkerReportsProgress(System.Boolean)
extern "C"  void BackgroundWorker_set_WorkerReportsProgress_m509516403 (BackgroundWorker_t925760789 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.BackgroundWorker::get_WorkerSupportsCancellation()
extern "C"  bool BackgroundWorker_get_WorkerSupportsCancellation_m1337841531 (BackgroundWorker_t925760789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::set_WorkerSupportsCancellation(System.Boolean)
extern "C"  void BackgroundWorker_set_WorkerSupportsCancellation_m2557344016 (BackgroundWorker_t925760789 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::CancelAsync()
extern "C"  void BackgroundWorker_CancelAsync_m3750610381 (BackgroundWorker_t925760789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::ReportProgress(System.Int32)
extern "C"  void BackgroundWorker_ReportProgress_m3081599017 (BackgroundWorker_t925760789 * __this, int32_t ___percentProgress0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::ReportProgress(System.Int32,System.Object)
extern "C"  void BackgroundWorker_ReportProgress_m2694170423 (BackgroundWorker_t925760789 * __this, int32_t ___percentProgress0, Il2CppObject * ___userState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::RunWorkerAsync()
extern "C"  void BackgroundWorker_RunWorkerAsync_m10983658 (BackgroundWorker_t925760789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::ProcessWorker(System.Object,System.ComponentModel.AsyncOperation,System.Threading.SendOrPostCallback)
extern "C"  void BackgroundWorker_ProcessWorker_m301374595 (BackgroundWorker_t925760789 * __this, Il2CppObject * ___argument0, AsyncOperation_t1801128212 * ___async1, SendOrPostCallback_t692973875 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::CompleteWorker(System.Object)
extern "C"  void BackgroundWorker_CompleteWorker_m3575005286 (BackgroundWorker_t925760789 * __this, Il2CppObject * ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::RunWorkerAsync(System.Object)
extern "C"  void BackgroundWorker_RunWorkerAsync_m2395501802 (BackgroundWorker_t925760789 * __this, Il2CppObject * ___argument0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::OnDoWork(System.ComponentModel.DoWorkEventArgs)
extern "C"  void BackgroundWorker_OnDoWork_m1248075048 (BackgroundWorker_t925760789 * __this, DoWorkEventArgs_t282241604 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::OnProgressChanged(System.ComponentModel.ProgressChangedEventArgs)
extern "C"  void BackgroundWorker_OnProgressChanged_m278496256 (BackgroundWorker_t925760789 * __this, ProgressChangedEventArgs_t1502466393 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::OnRunWorkerCompleted(System.ComponentModel.RunWorkerCompletedEventArgs)
extern "C"  void BackgroundWorker_OnRunWorkerCompleted_m1699962984 (BackgroundWorker_t925760789 * __this, RunWorkerCompletedEventArgs_t1026369758 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::<ReportProgress>m__0(System.Object)
extern "C"  void BackgroundWorker_U3CReportProgressU3Em__0_m2666626617 (BackgroundWorker_t925760789 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::<CompleteWorker>m__1(System.Object)
extern "C"  void BackgroundWorker_U3CCompleteWorkerU3Em__1_m559681454 (BackgroundWorker_t925760789 * __this, Il2CppObject * ___darg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
