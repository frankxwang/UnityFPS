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

// UnityEngine.Networking.NetworkProximityChecker
struct NetworkProximityChecker_t798044909;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t2182631957;
// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkConnection>
struct HashSet_1_t586353332;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw2182631957.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"

// System.Void UnityEngine.Networking.NetworkProximityChecker::.ctor()
extern "C"  void NetworkProximityChecker__ctor_m152473143 (NetworkProximityChecker_t798044909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkProximityChecker::Update()
extern "C"  void NetworkProximityChecker_Update_m2158562230 (NetworkProximityChecker_t798044909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkProximityChecker::OnCheckObserver(UnityEngine.Networking.NetworkConnection)
extern "C"  bool NetworkProximityChecker_OnCheckObserver_m2191722429 (NetworkProximityChecker_t798044909 * __this, NetworkConnection_t2182631957 * ___newObserver0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkProximityChecker::OnRebuildObservers(System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkConnection>,System.Boolean)
extern "C"  bool NetworkProximityChecker_OnRebuildObservers_m3893888240 (NetworkProximityChecker_t798044909 * __this, HashSet_1_t586353332 * ___observers0, bool ___initial1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkProximityChecker::OnSetLocalVisibility(System.Boolean)
extern "C"  void NetworkProximityChecker_OnSetLocalVisibility_m2234696510 (NetworkProximityChecker_t798044909 * __this, bool ___vis0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkProximityChecker::SetVis(UnityEngine.GameObject,System.Boolean)
extern "C"  void NetworkProximityChecker_SetVis_m2626690522 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___go0, bool ___vis1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
