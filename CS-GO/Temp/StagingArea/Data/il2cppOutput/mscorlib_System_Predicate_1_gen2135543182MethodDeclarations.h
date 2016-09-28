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

// System.Predicate`1<UnityEngine.Networking.ChannelPacket>
struct Predicate_1_t2135543182;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Chan1564579284.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Predicate`1<UnityEngine.Networking.ChannelPacket>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m517755763_gshared (Predicate_1_t2135543182 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Predicate_1__ctor_m517755763(__this, ___object0, ___method1, method) ((  void (*) (Predicate_1_t2135543182 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m517755763_gshared)(__this, ___object0, ___method1, method)
// System.Boolean System.Predicate`1<UnityEngine.Networking.ChannelPacket>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m1693157167_gshared (Predicate_1_t2135543182 * __this, ChannelPacket_t1564579284  ___obj0, const MethodInfo* method);
#define Predicate_1_Invoke_m1693157167(__this, ___obj0, method) ((  bool (*) (Predicate_1_t2135543182 *, ChannelPacket_t1564579284 , const MethodInfo*))Predicate_1_Invoke_m1693157167_gshared)(__this, ___obj0, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Networking.ChannelPacket>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Predicate_1_BeginInvoke_m3812505150_gshared (Predicate_1_t2135543182 * __this, ChannelPacket_t1564579284  ___obj0, AsyncCallback_t1363551830 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m3812505150(__this, ___obj0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Predicate_1_t2135543182 *, ChannelPacket_t1564579284 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Predicate_1_BeginInvoke_m3812505150_gshared)(__this, ___obj0, ___callback1, ___object2, method)
// System.Boolean System.Predicate`1<UnityEngine.Networking.ChannelPacket>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m3804258309_gshared (Predicate_1_t2135543182 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Predicate_1_EndInvoke_m3804258309(__this, ___result0, method) ((  bool (*) (Predicate_1_t2135543182 *, Il2CppObject *, const MethodInfo*))Predicate_1_EndInvoke_m3804258309_gshared)(__this, ___result0, method)
