﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Threading.SynchronizationContext
struct SynchronizationContext_t216490034;
// System.ComponentModel.AsyncOperation
struct AsyncOperation_t1801128212;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Threading_SynchronizationContext216490034.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.ComponentModel.AsyncOperationManager::.cctor()
extern "C"  void AsyncOperationManager__cctor_m610663490 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.SynchronizationContext System.ComponentModel.AsyncOperationManager::get_SynchronizationContext()
extern "C"  SynchronizationContext_t216490034 * AsyncOperationManager_get_SynchronizationContext_m2002484578 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AsyncOperationManager::set_SynchronizationContext(System.Threading.SynchronizationContext)
extern "C"  void AsyncOperationManager_set_SynchronizationContext_m394691401 (Il2CppObject * __this /* static, unused */, SynchronizationContext_t216490034 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AsyncOperation System.ComponentModel.AsyncOperationManager::CreateOperation(System.Object)
extern "C"  AsyncOperation_t1801128212 * AsyncOperationManager_CreateOperation_m2000713039 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___userSuppliedState0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
