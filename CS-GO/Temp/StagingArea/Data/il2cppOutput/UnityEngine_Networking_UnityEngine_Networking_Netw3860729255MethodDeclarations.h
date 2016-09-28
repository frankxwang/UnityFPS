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

// UnityEngine.Networking.NetworkScene
struct NetworkScene_t3860729255;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,UnityEngine.Networking.NetworkIdentity>
struct Dictionary_2_t2512141248;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Networking.NetworkIdentity
struct NetworkIdentity_t1320523637;
// UnityEngine.Networking.SpawnDelegate
struct SpawnDelegate_t1933801609;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3860307911.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1320523637.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1719292676.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Spaw1933801609.h"

// System.Void UnityEngine.Networking.NetworkScene::.ctor()
extern "C"  void NetworkScene__ctor_m4231897229 (NetworkScene_t3860729255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkScene::.cctor()
extern "C"  void NetworkScene__cctor_m1857699008 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,UnityEngine.Networking.NetworkIdentity> UnityEngine.Networking.NetworkScene::get_localObjects()
extern "C"  Dictionary_2_t2512141248 * NetworkScene_get_localObjects_m235534171 (NetworkScene_t3860729255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkScene::SetLocalObject(UnityEngine.Networking.NetworkInstanceId,UnityEngine.GameObject,System.Boolean,System.Boolean)
extern "C"  void NetworkScene_SetLocalObject_m968426906 (NetworkScene_t3860729255 * __this, NetworkInstanceId_t3860307911  ___netId0, GameObject_t4012695102 * ___obj1, bool ___isClient2, bool ___isServer3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Networking.NetworkScene::FindLocalObject(UnityEngine.Networking.NetworkInstanceId)
extern "C"  GameObject_t4012695102 * NetworkScene_FindLocalObject_m1411438320 (NetworkScene_t3860729255 * __this, NetworkInstanceId_t3860307911  ___netId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkScene::GetNetworkIdentity(UnityEngine.Networking.NetworkInstanceId,UnityEngine.Networking.NetworkIdentity&)
extern "C"  bool NetworkScene_GetNetworkIdentity_m2562912307 (NetworkScene_t3860729255 * __this, NetworkInstanceId_t3860307911  ___netId0, NetworkIdentity_t1320523637 ** ___uv1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkScene::RemoveLocalObject(UnityEngine.Networking.NetworkInstanceId)
extern "C"  bool NetworkScene_RemoveLocalObject_m2779389892 (NetworkScene_t3860729255 * __this, NetworkInstanceId_t3860307911  ___netId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkScene::ClearLocalObjects()
extern "C"  void NetworkScene_ClearLocalObjects_m271091521 (NetworkScene_t3860729255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkScene::RegisterPrefab(UnityEngine.GameObject)
extern "C"  void NetworkScene_RegisterPrefab_m3955415254 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkScene::GetPrefab(UnityEngine.Networking.NetworkHash128,UnityEngine.GameObject&)
extern "C"  bool NetworkScene_GetPrefab_m1414906383 (Il2CppObject * __this /* static, unused */, NetworkHash128_t1719292676  ___assetId0, GameObject_t4012695102 ** ___prefab1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkScene::GetSpawnHandler(UnityEngine.Networking.NetworkHash128,UnityEngine.Networking.SpawnDelegate&)
extern "C"  bool NetworkScene_GetSpawnHandler_m1228325593 (Il2CppObject * __this /* static, unused */, NetworkHash128_t1719292676  ___assetId0, SpawnDelegate_t1933801609 ** ___handler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkScene::InvokeUnSpawnHandler(UnityEngine.Networking.NetworkHash128,UnityEngine.GameObject)
extern "C"  bool NetworkScene_InvokeUnSpawnHandler_m3610648723 (Il2CppObject * __this /* static, unused */, NetworkHash128_t1719292676  ___assetId0, GameObject_t4012695102 * ___obj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkScene::DestroyAllClientObjects()
extern "C"  void NetworkScene_DestroyAllClientObjects_m3353852269 (NetworkScene_t3860729255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
