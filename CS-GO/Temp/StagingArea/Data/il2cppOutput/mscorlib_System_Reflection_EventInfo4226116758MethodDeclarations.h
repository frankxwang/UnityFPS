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

// System.Reflection.EventInfo
struct EventInfo_t;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MemberTypes938013741.h"

// System.Void System.Reflection.EventInfo::.ctor()
extern "C"  void EventInfo__ctor_m2461757520 (EventInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.EventInfo::get_EventHandlerType()
extern "C"  Type_t * EventInfo_get_EventHandlerType_m2354774861 (EventInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.EventInfo::get_IsMulticast()
extern "C"  bool EventInfo_get_IsMulticast_m329689589 (EventInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberTypes System.Reflection.EventInfo::get_MemberType()
extern "C"  int32_t EventInfo_get_MemberType_m3965977017 (EventInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.EventInfo::GetAddMethod()
extern "C"  MethodInfo_t * EventInfo_GetAddMethod_m1838981608 (EventInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.EventInfo::GetRemoveMethod()
extern "C"  MethodInfo_t * EventInfo_GetRemoveMethod_m1114495905 (EventInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
