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

// UnityEngine.Networking.NetworkIdentity
struct NetworkIdentity_t1320523637;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t2182631957;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.NetworkConnection>
struct ReadOnlyCollection_1_t1050810009;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;
// System.Type
struct Type_t;
// UnityEngine.Networking.NetworkBehaviour
struct NetworkBehaviour_t1633744088;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3536499450;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3860307911.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw2936457058.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1719292676.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw2182631957.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3691904682.h"
#include "mscorlib_System_Type2779229935.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1633744088.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3536499450.h"

// System.Void UnityEngine.Networking.NetworkIdentity::.ctor()
extern "C"  void NetworkIdentity__ctor_m662035119 (NetworkIdentity_t1320523637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::.cctor()
extern "C"  void NetworkIdentity__cctor_m2861123294 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkIdentity::get_isClient()
extern "C"  bool NetworkIdentity_get_isClient_m3019136065 (NetworkIdentity_t1320523637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkIdentity::get_isServer()
extern "C"  bool NetworkIdentity_get_isServer_m3489831353 (NetworkIdentity_t1320523637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkIdentity::get_hasAuthority()
extern "C"  bool NetworkIdentity_get_hasAuthority_m2742791669 (NetworkIdentity_t1320523637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkIdentity::get_netId()
extern "C"  NetworkInstanceId_t3860307911  NetworkIdentity_get_netId_m4102934304 (NetworkIdentity_t1320523637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkSceneId UnityEngine.Networking.NetworkIdentity::get_sceneId()
extern "C"  NetworkSceneId_t2936457058  NetworkIdentity_get_sceneId_m1185549012 (NetworkIdentity_t1320523637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkIdentity::get_serverOnly()
extern "C"  bool NetworkIdentity_get_serverOnly_m804698875 (NetworkIdentity_t1320523637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::set_serverOnly(System.Boolean)
extern "C"  void NetworkIdentity_set_serverOnly_m2526704088 (NetworkIdentity_t1320523637 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkIdentity::get_localPlayerAuthority()
extern "C"  bool NetworkIdentity_get_localPlayerAuthority_m628468771 (NetworkIdentity_t1320523637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::set_localPlayerAuthority(System.Boolean)
extern "C"  void NetworkIdentity_set_localPlayerAuthority_m1486562688 (NetworkIdentity_t1320523637 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkIdentity::get_clientAuthorityOwner()
extern "C"  NetworkConnection_t2182631957 * NetworkIdentity_get_clientAuthorityOwner_m1579756455 (NetworkIdentity_t1320523637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkHash128 UnityEngine.Networking.NetworkIdentity::get_assetId()
extern "C"  NetworkHash128_t1719292676  NetworkIdentity_get_assetId_m3805759834 (NetworkIdentity_t1320523637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::SetDynamicAssetId(UnityEngine.Networking.NetworkHash128)
extern "C"  void NetworkIdentity_SetDynamicAssetId_m2750571449 (NetworkIdentity_t1320523637 * __this, NetworkHash128_t1719292676  ___newAssetId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::SetClientOwner(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkIdentity_SetClientOwner_m1888187762 (NetworkIdentity_t1320523637 * __this, NetworkConnection_t2182631957 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::ClearClientOwner()
extern "C"  void NetworkIdentity_ClearClientOwner_m4109638928 (NetworkIdentity_t1320523637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::ForceAuthority(System.Boolean)
extern "C"  void NetworkIdentity_ForceAuthority_m18303236 (NetworkIdentity_t1320523637 * __this, bool ___authority0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkIdentity::get_isLocalPlayer()
extern "C"  bool NetworkIdentity_get_isLocalPlayer_m3956998936 (NetworkIdentity_t1320523637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 UnityEngine.Networking.NetworkIdentity::get_playerControllerId()
extern "C"  int16_t NetworkIdentity_get_playerControllerId_m2426282776 (NetworkIdentity_t1320523637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkIdentity::get_connectionToServer()
extern "C"  NetworkConnection_t2182631957 * NetworkIdentity_get_connectionToServer_m1178853096 (NetworkIdentity_t1320523637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkIdentity::get_connectionToClient()
extern "C"  NetworkConnection_t2182631957 * NetworkIdentity_get_connectionToClient_m708157808 (NetworkIdentity_t1320523637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.NetworkConnection> UnityEngine.Networking.NetworkIdentity::get_observers()
extern "C"  ReadOnlyCollection_1_t1050810009 * NetworkIdentity_get_observers_m1210396756 (NetworkIdentity_t1320523637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkIdentity::GetNextNetworkId()
extern "C"  NetworkInstanceId_t3860307911  NetworkIdentity_GetNextNetworkId_m3413128497 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::CacheBehaviours()
extern "C"  void NetworkIdentity_CacheBehaviours_m2901869381 (NetworkIdentity_t1320523637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::AddNetworkId(System.UInt32)
extern "C"  void NetworkIdentity_AddNetworkId_m3067788573 (Il2CppObject * __this /* static, unused */, uint32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::SetNetworkInstanceId(UnityEngine.Networking.NetworkInstanceId)
extern "C"  void NetworkIdentity_SetNetworkInstanceId_m3031034038 (NetworkIdentity_t1320523637 * __this, NetworkInstanceId_t3860307911  ___newNetId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::ForceSceneId(System.Int32)
extern "C"  void NetworkIdentity_ForceSceneId_m3101898466 (NetworkIdentity_t1320523637 * __this, int32_t ___newSceneId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::UpdateClientServer(System.Boolean,System.Boolean)
extern "C"  void NetworkIdentity_UpdateClientServer_m2005526106 (NetworkIdentity_t1320523637 * __this, bool ___isClientFlag0, bool ___isServerFlag1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::SetNoServer()
extern "C"  void NetworkIdentity_SetNoServer_m597329971 (NetworkIdentity_t1320523637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::SetNotLocalPlayer()
extern "C"  void NetworkIdentity_SetNotLocalPlayer_m2235460968 (NetworkIdentity_t1320523637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::RemoveObserverInternal(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkIdentity_RemoveObserverInternal_m1802432675 (NetworkIdentity_t1320523637 * __this, NetworkConnection_t2182631957 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::OnDestroy()
extern "C"  void NetworkIdentity_OnDestroy_m4268539944 (NetworkIdentity_t1320523637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::OnStartServer(System.Boolean)
extern "C"  void NetworkIdentity_OnStartServer_m2899233130 (NetworkIdentity_t1320523637 * __this, bool ___allowNonZeroNetId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::OnStartClient()
extern "C"  void NetworkIdentity_OnStartClient_m2571070395 (NetworkIdentity_t1320523637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::OnStartAuthority()
extern "C"  void NetworkIdentity_OnStartAuthority_m3555588981 (NetworkIdentity_t1320523637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::OnStopAuthority()
extern "C"  void NetworkIdentity_OnStopAuthority_m2705305103 (NetworkIdentity_t1320523637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::OnSetLocalVisibility(System.Boolean)
extern "C"  void NetworkIdentity_OnSetLocalVisibility_m1796696518 (NetworkIdentity_t1320523637 * __this, bool ___vis0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkIdentity::OnCheckObserver(UnityEngine.Networking.NetworkConnection)
extern "C"  bool NetworkIdentity_OnCheckObserver_m3117144117 (NetworkIdentity_t1320523637 * __this, NetworkConnection_t2182631957 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::UNetSerializeAllVars(UnityEngine.Networking.NetworkWriter)
extern "C"  void NetworkIdentity_UNetSerializeAllVars_m1011138892 (NetworkIdentity_t1320523637 * __this, NetworkWriter_t3691904682 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::HandleClientAuthority(System.Boolean)
extern "C"  void NetworkIdentity_HandleClientAuthority_m616058612 (NetworkIdentity_t1320523637 * __this, bool ___authority0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkIdentity::GetInvokeComponent(System.Int32,System.Type,UnityEngine.Networking.NetworkBehaviour&)
extern "C"  bool NetworkIdentity_GetInvokeComponent_m2747883100 (NetworkIdentity_t1320523637 * __this, int32_t ___cmdHash0, Type_t * ___invokeClass1, NetworkBehaviour_t1633744088 ** ___invokeComponent2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::HandleSyncEvent(System.Int32,UnityEngine.Networking.NetworkReader)
extern "C"  void NetworkIdentity_HandleSyncEvent_m2152370147 (NetworkIdentity_t1320523637 * __this, int32_t ___cmdHash0, NetworkReader_t3536499450 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::HandleSyncList(System.Int32,UnityEngine.Networking.NetworkReader)
extern "C"  void NetworkIdentity_HandleSyncList_m859057425 (NetworkIdentity_t1320523637 * __this, int32_t ___cmdHash0, NetworkReader_t3536499450 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::HandleCommand(System.Int32,UnityEngine.Networking.NetworkReader)
extern "C"  void NetworkIdentity_HandleCommand_m4046060759 (NetworkIdentity_t1320523637 * __this, int32_t ___cmdHash0, NetworkReader_t3536499450 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::HandleRPC(System.Int32,UnityEngine.Networking.NetworkReader)
extern "C"  void NetworkIdentity_HandleRPC_m4191429117 (NetworkIdentity_t1320523637 * __this, int32_t ___cmdHash0, NetworkReader_t3536499450 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::UNetUpdate()
extern "C"  void NetworkIdentity_UNetUpdate_m1972515142 (NetworkIdentity_t1320523637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::OnUpdateVars(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C"  void NetworkIdentity_OnUpdateVars_m2771594754 (NetworkIdentity_t1320523637 * __this, NetworkReader_t3536499450 * ___reader0, bool ___initialState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::SetLocalPlayer(System.Int16)
extern "C"  void NetworkIdentity_SetLocalPlayer_m3286800746 (NetworkIdentity_t1320523637 * __this, int16_t ___localPlayerControllerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::SetConnectionToServer(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkIdentity_SetConnectionToServer_m1150110274 (NetworkIdentity_t1320523637 * __this, NetworkConnection_t2182631957 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::SetConnectionToClient(UnityEngine.Networking.NetworkConnection,System.Int16)
extern "C"  void NetworkIdentity_SetConnectionToClient_m1953155399 (NetworkIdentity_t1320523637 * __this, NetworkConnection_t2182631957 * ___conn0, int16_t ___newPlayerControllerId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::OnNetworkDestroy()
extern "C"  void NetworkIdentity_OnNetworkDestroy_m901048736 (NetworkIdentity_t1320523637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::ClearObservers()
extern "C"  void NetworkIdentity_ClearObservers_m1587905605 (NetworkIdentity_t1320523637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::AddObserver(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkIdentity_AddObserver_m2550851067 (NetworkIdentity_t1320523637 * __this, NetworkConnection_t2182631957 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::RemoveObserver(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkIdentity_RemoveObserver_m273823750 (NetworkIdentity_t1320523637 * __this, NetworkConnection_t2182631957 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::RebuildObservers(System.Boolean)
extern "C"  void NetworkIdentity_RebuildObservers_m271768046 (NetworkIdentity_t1320523637 * __this, bool ___initialize0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkIdentity::RemoveClientAuthority(UnityEngine.Networking.NetworkConnection)
extern "C"  bool NetworkIdentity_RemoveClientAuthority_m1366693290 (NetworkIdentity_t1320523637 * __this, NetworkConnection_t2182631957 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkIdentity::AssignClientAuthority(UnityEngine.Networking.NetworkConnection)
extern "C"  bool NetworkIdentity_AssignClientAuthority_m1957836703 (NetworkIdentity_t1320523637 * __this, NetworkConnection_t2182631957 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkIdentity::UNetStaticUpdate()
extern "C"  void NetworkIdentity_UNetStaticUpdate_m3951220948 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
