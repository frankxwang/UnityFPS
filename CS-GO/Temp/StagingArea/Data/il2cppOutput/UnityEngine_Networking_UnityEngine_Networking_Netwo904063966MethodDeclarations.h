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

// UnityEngine.Networking.NetworkServer/ServerSimpleWrapper
struct ServerSimpleWrapper_t904063966;
// UnityEngine.Networking.NetworkServer
struct NetworkServer_t3565652346;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t2182631957;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3565652346.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw2182631957.h"

// System.Void UnityEngine.Networking.NetworkServer/ServerSimpleWrapper::.ctor(UnityEngine.Networking.NetworkServer)
extern "C"  void ServerSimpleWrapper__ctor_m490437485 (ServerSimpleWrapper_t904063966 * __this, NetworkServer_t3565652346 * ___server0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer/ServerSimpleWrapper::OnConnectError(System.Int32,System.Byte)
extern "C"  void ServerSimpleWrapper_OnConnectError_m478327804 (ServerSimpleWrapper_t904063966 * __this, int32_t ___connectionId0, uint8_t ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer/ServerSimpleWrapper::OnDataError(UnityEngine.Networking.NetworkConnection,System.Byte)
extern "C"  void ServerSimpleWrapper_OnDataError_m3549459476 (ServerSimpleWrapper_t904063966 * __this, NetworkConnection_t2182631957 * ___conn0, uint8_t ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer/ServerSimpleWrapper::OnConnected(UnityEngine.Networking.NetworkConnection)
extern "C"  void ServerSimpleWrapper_OnConnected_m473470010 (ServerSimpleWrapper_t904063966 * __this, NetworkConnection_t2182631957 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer/ServerSimpleWrapper::OnDisconnected(UnityEngine.Networking.NetworkConnection)
extern "C"  void ServerSimpleWrapper_OnDisconnected_m3904082458 (ServerSimpleWrapper_t904063966 * __this, NetworkConnection_t2182631957 * ___conn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer/ServerSimpleWrapper::OnData(UnityEngine.Networking.NetworkConnection,System.Int32,System.Int32)
extern "C"  void ServerSimpleWrapper_OnData_m305466345 (ServerSimpleWrapper_t904063966 * __this, NetworkConnection_t2182631957 * ___conn0, int32_t ___receivedSize1, int32_t ___channelId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
