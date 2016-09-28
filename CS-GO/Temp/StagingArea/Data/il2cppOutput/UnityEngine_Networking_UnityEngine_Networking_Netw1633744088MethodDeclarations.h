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

// UnityEngine.Networking.NetworkBehaviour
struct NetworkBehaviour_t1633744088;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t2182631957;
// UnityEngine.Networking.NetworkIdentity
struct NetworkIdentity_t1320523637;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;
// System.String
struct String_t;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3536499450;
// System.Type
struct Type_t;
// UnityEngine.Networking.NetworkBehaviour/CmdDelegate
struct CmdDelegate_t445354175;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkConnection>
struct HashSet_1_t586353332;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3860307911.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3691904682.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3536499450.h"
#include "mscorlib_System_Type2779229935.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo445354175.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo395072250.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw2182631957.h"

// System.Void UnityEngine.Networking.NetworkBehaviour::.ctor()
extern "C"  void NetworkBehaviour__ctor_m1416383612 (NetworkBehaviour_t1633744088 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::.cctor()
extern "C"  void NetworkBehaviour__cctor_m476122801 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::get_localPlayerAuthority()
extern "C"  bool NetworkBehaviour_get_localPlayerAuthority_m1932878682 (NetworkBehaviour_t1633744088 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::get_isServer()
extern "C"  bool NetworkBehaviour_get_isServer_m166341488 (NetworkBehaviour_t1633744088 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::get_isClient()
extern "C"  bool NetworkBehaviour_get_isClient_m3990613496 (NetworkBehaviour_t1633744088 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::get_isLocalPlayer()
extern "C"  bool NetworkBehaviour_get_isLocalPlayer_m1900866497 (NetworkBehaviour_t1633744088 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::get_hasAuthority()
extern "C"  bool NetworkBehaviour_get_hasAuthority_m2537917484 (NetworkBehaviour_t1633744088 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkBehaviour::get_netId()
extern "C"  NetworkInstanceId_t3860307911  NetworkBehaviour_get_netId_m3141237733 (NetworkBehaviour_t1633744088 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkBehaviour::get_connectionToServer()
extern "C"  NetworkConnection_t2182631957 * NetworkBehaviour_get_connectionToServer_m565754271 (NetworkBehaviour_t1633744088 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkBehaviour::get_connectionToClient()
extern "C"  NetworkConnection_t2182631957 * NetworkBehaviour_get_connectionToClient_m95058983 (NetworkBehaviour_t1633744088 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 UnityEngine.Networking.NetworkBehaviour::get_playerControllerId()
extern "C"  int16_t NetworkBehaviour_get_playerControllerId_m2783342439 (NetworkBehaviour_t1633744088 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.NetworkBehaviour::get_syncVarDirtyBits()
extern "C"  uint32_t NetworkBehaviour_get_syncVarDirtyBits_m4260736962 (NetworkBehaviour_t1633744088 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::get_syncVarHookGuard()
extern "C"  bool NetworkBehaviour_get_syncVarHookGuard_m1704457273 (NetworkBehaviour_t1633744088 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::set_syncVarHookGuard(System.Boolean)
extern "C"  void NetworkBehaviour_set_syncVarHookGuard_m4280963314 (NetworkBehaviour_t1633744088 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkIdentity UnityEngine.Networking.NetworkBehaviour::get_myView()
extern "C"  NetworkIdentity_t1320523637 * NetworkBehaviour_get_myView_m1279046484 (NetworkBehaviour_t1633744088 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::SendCommandInternal(UnityEngine.Networking.NetworkWriter,System.Int32,System.String)
extern "C"  void NetworkBehaviour_SendCommandInternal_m977225367 (NetworkBehaviour_t1633744088 * __this, NetworkWriter_t3691904682 * ___writer0, int32_t ___channelId1, String_t* ___cmdName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::InvokeCommand(System.Int32,UnityEngine.Networking.NetworkReader)
extern "C"  bool NetworkBehaviour_InvokeCommand_m87124076 (NetworkBehaviour_t1633744088 * __this, int32_t ___cmdHash0, NetworkReader_t3536499450 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::SendRPCInternal(UnityEngine.Networking.NetworkWriter,System.Int32,System.String)
extern "C"  void NetworkBehaviour_SendRPCInternal_m4181933245 (NetworkBehaviour_t1633744088 * __this, NetworkWriter_t3691904682 * ___writer0, int32_t ___channelId1, String_t* ___rpcName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::InvokeRPC(System.Int32,UnityEngine.Networking.NetworkReader)
extern "C"  bool NetworkBehaviour_InvokeRPC_m4095909906 (NetworkBehaviour_t1633744088 * __this, int32_t ___cmdHash0, NetworkReader_t3536499450 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::SendEventInternal(UnityEngine.Networking.NetworkWriter,System.Int32,System.String)
extern "C"  void NetworkBehaviour_SendEventInternal_m304813032 (NetworkBehaviour_t1633744088 * __this, NetworkWriter_t3691904682 * ___writer0, int32_t ___channelId1, String_t* ___eventName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::InvokeSyncEvent(System.Int32,UnityEngine.Networking.NetworkReader)
extern "C"  bool NetworkBehaviour_InvokeSyncEvent_m2955242040 (NetworkBehaviour_t1633744088 * __this, int32_t ___cmdHash0, NetworkReader_t3536499450 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::InvokeSyncList(System.Int32,UnityEngine.Networking.NetworkReader)
extern "C"  bool NetworkBehaviour_InvokeSyncList_m2686071836 (NetworkBehaviour_t1633744088 * __this, int32_t ___cmdHash0, NetworkReader_t3536499450 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::RegisterCommandDelegate(System.Type,System.Int32,UnityEngine.Networking.NetworkBehaviour/CmdDelegate)
extern "C"  void NetworkBehaviour_RegisterCommandDelegate_m1780633519 (Il2CppObject * __this /* static, unused */, Type_t * ___invokeClass0, int32_t ___cmdHash1, CmdDelegate_t445354175 * ___func2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::RegisterRpcDelegate(System.Type,System.Int32,UnityEngine.Networking.NetworkBehaviour/CmdDelegate)
extern "C"  void NetworkBehaviour_RegisterRpcDelegate_m106624457 (Il2CppObject * __this /* static, unused */, Type_t * ___invokeClass0, int32_t ___cmdHash1, CmdDelegate_t445354175 * ___func2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::RegisterEventDelegate(System.Type,System.Int32,UnityEngine.Networking.NetworkBehaviour/CmdDelegate)
extern "C"  void NetworkBehaviour_RegisterEventDelegate_m3653581630 (Il2CppObject * __this /* static, unused */, Type_t * ___invokeClass0, int32_t ___cmdHash1, CmdDelegate_t445354175 * ___func2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::RegisterSyncListDelegate(System.Type,System.Int32,UnityEngine.Networking.NetworkBehaviour/CmdDelegate)
extern "C"  void NetworkBehaviour_RegisterSyncListDelegate_m429814929 (Il2CppObject * __this /* static, unused */, Type_t * ___invokeClass0, int32_t ___cmdHash1, CmdDelegate_t445354175 * ___func2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkBehaviour::GetInvoker(System.Int32)
extern "C"  String_t* NetworkBehaviour_GetInvoker_m2741528602 (Il2CppObject * __this /* static, unused */, int32_t ___cmdHash0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::GetInvokerForHashCommand(System.Int32,System.Type&,UnityEngine.Networking.NetworkBehaviour/CmdDelegate&)
extern "C"  bool NetworkBehaviour_GetInvokerForHashCommand_m3202566252 (Il2CppObject * __this /* static, unused */, int32_t ___cmdHash0, Type_t ** ___invokeClass1, CmdDelegate_t445354175 ** ___invokeFunction2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::GetInvokerForHashClientRpc(System.Int32,System.Type&,UnityEngine.Networking.NetworkBehaviour/CmdDelegate&)
extern "C"  bool NetworkBehaviour_GetInvokerForHashClientRpc_m1777035195 (Il2CppObject * __this /* static, unused */, int32_t ___cmdHash0, Type_t ** ___invokeClass1, CmdDelegate_t445354175 ** ___invokeFunction2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::GetInvokerForHashSyncList(System.Int32,System.Type&,UnityEngine.Networking.NetworkBehaviour/CmdDelegate&)
extern "C"  bool NetworkBehaviour_GetInvokerForHashSyncList_m3022386414 (Il2CppObject * __this /* static, unused */, int32_t ___cmdHash0, Type_t ** ___invokeClass1, CmdDelegate_t445354175 ** ___invokeFunction2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::GetInvokerForHashSyncEvent(System.Int32,System.Type&,UnityEngine.Networking.NetworkBehaviour/CmdDelegate&)
extern "C"  bool NetworkBehaviour_GetInvokerForHashSyncEvent_m2858872928 (Il2CppObject * __this /* static, unused */, int32_t ___cmdHash0, Type_t ** ___invokeClass1, CmdDelegate_t445354175 ** ___invokeFunction2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::GetInvokerForHash(System.Int32,UnityEngine.Networking.NetworkBehaviour/UNetInvokeType,System.Type&,UnityEngine.Networking.NetworkBehaviour/CmdDelegate&)
extern "C"  bool NetworkBehaviour_GetInvokerForHash_m3832637964 (Il2CppObject * __this /* static, unused */, int32_t ___cmdHash0, int32_t ___invokeType1, Type_t ** ___invokeClass2, CmdDelegate_t445354175 ** ___invokeFunction3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::DumpInvokers()
extern "C"  void NetworkBehaviour_DumpInvokers_m665037269 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::ContainsCommandDelegate(System.Int32)
extern "C"  bool NetworkBehaviour_ContainsCommandDelegate_m3003295882 (NetworkBehaviour_t1633744088 * __this, int32_t ___cmdHash0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::InvokeCommandDelegate(System.Int32,UnityEngine.Networking.NetworkReader)
extern "C"  bool NetworkBehaviour_InvokeCommandDelegate_m52576423 (NetworkBehaviour_t1633744088 * __this, int32_t ___cmdHash0, NetworkReader_t3536499450 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::InvokeRpcDelegate(System.Int32,UnityEngine.Networking.NetworkReader)
extern "C"  bool NetworkBehaviour_InvokeRpcDelegate_m1484385869 (NetworkBehaviour_t1633744088 * __this, int32_t ___cmdHash0, NetworkReader_t3536499450 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::InvokeSyncEventDelegate(System.Int32,UnityEngine.Networking.NetworkReader)
extern "C"  bool NetworkBehaviour_InvokeSyncEventDelegate_m3842881139 (NetworkBehaviour_t1633744088 * __this, int32_t ___cmdHash0, NetworkReader_t3536499450 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::InvokeSyncListDelegate(System.Int32,UnityEngine.Networking.NetworkReader)
extern "C"  bool NetworkBehaviour_InvokeSyncListDelegate_m1763466327 (NetworkBehaviour_t1633744088 * __this, int32_t ___cmdHash0, NetworkReader_t3536499450 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkBehaviour::GetCmdHashHandlerName(System.Int32)
extern "C"  String_t* NetworkBehaviour_GetCmdHashHandlerName_m1168512497 (Il2CppObject * __this /* static, unused */, int32_t ___cmdHash0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkBehaviour::GetCmdHashPrefixName(System.Int32,System.String)
extern "C"  String_t* NetworkBehaviour_GetCmdHashPrefixName_m2325037985 (Il2CppObject * __this /* static, unused */, int32_t ___cmdHash0, String_t* ___prefix1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkBehaviour::GetCmdHashCmdName(System.Int32)
extern "C"  String_t* NetworkBehaviour_GetCmdHashCmdName_m3604130017 (Il2CppObject * __this /* static, unused */, int32_t ___cmdHash0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkBehaviour::GetCmdHashRpcName(System.Int32)
extern "C"  String_t* NetworkBehaviour_GetCmdHashRpcName_m2097425612 (Il2CppObject * __this /* static, unused */, int32_t ___cmdHash0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkBehaviour::GetCmdHashEventName(System.Int32)
extern "C"  String_t* NetworkBehaviour_GetCmdHashEventName_m3053662145 (Il2CppObject * __this /* static, unused */, int32_t ___cmdHash0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkBehaviour::GetCmdHashListName(System.Int32)
extern "C"  String_t* NetworkBehaviour_GetCmdHashListName_m1764249777 (Il2CppObject * __this /* static, unused */, int32_t ___cmdHash0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::SetSyncVarGameObject(UnityEngine.GameObject,UnityEngine.GameObject&,System.UInt32,UnityEngine.Networking.NetworkInstanceId&)
extern "C"  void NetworkBehaviour_SetSyncVarGameObject_m1994840574 (NetworkBehaviour_t1633744088 * __this, GameObject_t4012695102 * ___newGameObject0, GameObject_t4012695102 ** ___gameObjectField1, uint32_t ___dirtyBit2, NetworkInstanceId_t3860307911 * ___netIdField3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::SetDirtyBit(System.UInt32)
extern "C"  void NetworkBehaviour_SetDirtyBit_m3536751715 (NetworkBehaviour_t1633744088 * __this, uint32_t ___dirtyBit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::ClearAllDirtyBits()
extern "C"  void NetworkBehaviour_ClearAllDirtyBits_m1085538654 (NetworkBehaviour_t1633744088 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkBehaviour::GetDirtyChannel()
extern "C"  int32_t NetworkBehaviour_GetDirtyChannel_m3828380105 (NetworkBehaviour_t1633744088 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::OnSerialize(UnityEngine.Networking.NetworkWriter,System.Boolean)
extern "C"  bool NetworkBehaviour_OnSerialize_m1265309202 (NetworkBehaviour_t1633744088 * __this, NetworkWriter_t3691904682 * ___writer0, bool ___initialState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::OnDeserialize(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C"  void NetworkBehaviour_OnDeserialize_m798309169 (NetworkBehaviour_t1633744088 * __this, NetworkReader_t3536499450 * ___reader0, bool ___initialState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::PreStartClient()
extern "C"  void NetworkBehaviour_PreStartClient_m895837746 (NetworkBehaviour_t1633744088 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::OnNetworkDestroy()
extern "C"  void NetworkBehaviour_OnNetworkDestroy_m104809907 (NetworkBehaviour_t1633744088 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::OnStartServer()
extern "C"  void NetworkBehaviour_OnStartServer_m2081422848 (NetworkBehaviour_t1633744088 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::OnStartClient()
extern "C"  void NetworkBehaviour_OnStartClient_m1610727560 (NetworkBehaviour_t1633744088 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::OnStartLocalPlayer()
extern "C"  void NetworkBehaviour_OnStartLocalPlayer_m3719574321 (NetworkBehaviour_t1633744088 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::OnStartAuthority()
extern "C"  void NetworkBehaviour_OnStartAuthority_m2759350152 (NetworkBehaviour_t1633744088 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::OnStopAuthority()
extern "C"  void NetworkBehaviour_OnStopAuthority_m3233809308 (NetworkBehaviour_t1633744088 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::OnRebuildObservers(System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkConnection>,System.Boolean)
extern "C"  bool NetworkBehaviour_OnRebuildObservers_m3460390993 (NetworkBehaviour_t1633744088 * __this, HashSet_1_t586353332 * ___observers0, bool ___initialize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour::OnSetLocalVisibility(System.Boolean)
extern "C"  void NetworkBehaviour_OnSetLocalVisibility_m1810368281 (NetworkBehaviour_t1633744088 * __this, bool ___vis0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkBehaviour::OnCheckObserver(UnityEngine.Networking.NetworkConnection)
extern "C"  bool NetworkBehaviour_OnCheckObserver_m875756062 (NetworkBehaviour_t1633744088 * __this, NetworkConnection_t2182631957 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkBehaviour::GetNetworkChannel()
extern "C"  int32_t NetworkBehaviour_GetNetworkChannel_m132444461 (NetworkBehaviour_t1633744088 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkBehaviour::GetNetworkSendInterval()
extern "C"  float NetworkBehaviour_GetNetworkSendInterval_m1612300353 (NetworkBehaviour_t1633744088 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
