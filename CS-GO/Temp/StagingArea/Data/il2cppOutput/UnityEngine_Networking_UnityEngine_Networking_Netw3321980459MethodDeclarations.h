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

// UnityEngine.Networking.NetworkMessageHandlers
struct NetworkMessageHandlers_t3321980459;
// UnityEngine.Networking.NetworkMessageDelegate
struct NetworkMessageDelegate_t4139233607;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkMessageDelegate>
struct Dictionary_2_t2200959304;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw4139233607.h"

// System.Void UnityEngine.Networking.NetworkMessageHandlers::.ctor()
extern "C"  void NetworkMessageHandlers__ctor_m3113351817 (NetworkMessageHandlers_t3321980459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMessageHandlers::RegisterHandlerSafe(System.Int16,UnityEngine.Networking.NetworkMessageDelegate)
extern "C"  void NetworkMessageHandlers_RegisterHandlerSafe_m2327308593 (NetworkMessageHandlers_t3321980459 * __this, int16_t ___msgType0, NetworkMessageDelegate_t4139233607 * ___handler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkMessageHandlers::RegisterHandler(System.Int16,UnityEngine.Networking.NetworkMessageDelegate)
extern "C"  void NetworkMessageHandlers_RegisterHandler_m3557010820 (NetworkMessageHandlers_t3321980459 * __this, int16_t ___msgType0, NetworkMessageDelegate_t4139233607 * ___handler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkMessageDelegate UnityEngine.Networking.NetworkMessageHandlers::GetHandler(System.Int16)
extern "C"  NetworkMessageDelegate_t4139233607 * NetworkMessageHandlers_GetHandler_m1021852712 (NetworkMessageHandlers_t3321980459 * __this, int16_t ___msgType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkMessageDelegate> UnityEngine.Networking.NetworkMessageHandlers::GetHandlers()
extern "C"  Dictionary_2_t2200959304 * NetworkMessageHandlers_GetHandlers_m2456744458 (NetworkMessageHandlers_t3321980459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
