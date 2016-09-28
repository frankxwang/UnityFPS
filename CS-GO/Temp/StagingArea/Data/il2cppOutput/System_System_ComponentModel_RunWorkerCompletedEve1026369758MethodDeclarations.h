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

// System.ComponentModel.RunWorkerCompletedEventArgs
struct RunWorkerCompletedEventArgs_t1026369758;
// System.Object
struct Il2CppObject;
// System.Exception
struct Exception_t1967233988;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Exception1967233988.h"

// System.Void System.ComponentModel.RunWorkerCompletedEventArgs::.ctor(System.Object,System.Exception,System.Boolean)
extern "C"  void RunWorkerCompletedEventArgs__ctor_m1106393315 (RunWorkerCompletedEventArgs_t1026369758 * __this, Il2CppObject * ___result0, Exception_t1967233988 * ___error1, bool ___cancelled2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.RunWorkerCompletedEventArgs::get_Result()
extern "C"  Il2CppObject * RunWorkerCompletedEventArgs_get_Result_m2711191261 (RunWorkerCompletedEventArgs_t1026369758 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.RunWorkerCompletedEventArgs::get_UserState()
extern "C"  Il2CppObject * RunWorkerCompletedEventArgs_get_UserState_m630059432 (RunWorkerCompletedEventArgs_t1026369758 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
