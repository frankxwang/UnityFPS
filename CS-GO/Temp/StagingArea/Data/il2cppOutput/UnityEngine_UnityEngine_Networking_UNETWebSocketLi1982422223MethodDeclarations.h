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

// UnityEngine.Networking.UNETWebSocketLib
struct UNETWebSocketLib_t1982422223;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// UnityEngine.Networking.HostTopology
struct HostTopology_t1316030176;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Networking_HostTopology1316030176.h"
#include "UnityEngine_UnityEngine_Networking_NetworkEventTyp2071524623.h"

// System.Void UnityEngine.Networking.UNETWebSocketLib::.ctor()
extern "C"  void UNETWebSocketLib__ctor_m1699412313 (UNETWebSocketLib_t1982422223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UNETWebSocketLib::.cctor()
extern "C"  void UNETWebSocketLib__cctor_m660077940 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_SocketCreate(System.Int32,System.String)
extern "C"  void UNETWebSocketLib_JS_UNETWebSockets_SocketCreate_m2210538620 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, String_t* ___url1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_SocketRecvEvntTypeFromHost(System.Int32)
extern "C"  int32_t UNETWebSocketLib_JS_UNETWebSockets_SocketRecvEvntTypeFromHost_m2665602093 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_SocketRecvEvntBuffLengthFromHost(System.Int32)
extern "C"  int32_t UNETWebSocketLib_JS_UNETWebSockets_SocketRecvEvntBuffLengthFromHost_m3296612748 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_SocketRecvEvntBuffFromHost(System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t UNETWebSocketLib_JS_UNETWebSockets_SocketRecvEvntBuffFromHost_m666638446 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, ByteU5BU5D_t58506160* ___buff1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_SocketCleanEvntFromHost(System.Int32)
extern "C"  void UNETWebSocketLib_JS_UNETWebSockets_SocketCleanEvntFromHost_m3400950610 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_SocketClose(System.Int32)
extern "C"  void UNETWebSocketLib_JS_UNETWebSockets_SocketClose_m35267352 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_SocketSend(System.Int32,System.Byte[],System.Int32)
extern "C"  void UNETWebSocketLib_JS_UNETWebSockets_SocketSend_m2902595304 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, ByteU5BU5D_t58506160* ___buff1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_AddHost()
extern "C"  int32_t UNETWebSocketLib_JS_UNETWebSockets_AddHost_m1543121899 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_IsHostCorrect(System.Int32)
extern "C"  bool UNETWebSocketLib_JS_UNETWebSockets_IsHostCorrect_m1445198801 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_IsHostReadyToConnect(System.Int32)
extern "C"  bool UNETWebSocketLib_JS_UNETWebSockets_IsHostReadyToConnect_m3295966633 (Il2CppObject * __this /* static, unused */, int32_t ___hostId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_SocketStop()
extern "C"  void UNETWebSocketLib_JS_UNETWebSockets_SocketStop_m838145909 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UNETWebSocketLib UnityEngine.Networking.UNETWebSocketLib::get_Instance()
extern "C"  UNETWebSocketLib_t1982422223 * UNETWebSocketLib_get_Instance_m1778535455 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.UNETWebSocketLib::AddHost(UnityEngine.Networking.HostTopology,System.Int32)
extern "C"  int32_t UNETWebSocketLib_AddHost_m2322218687 (UNETWebSocketLib_t1982422223 * __this, HostTopology_t1316030176 * ___topology0, int32_t ___port1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.UNETWebSocketLib::Connect(System.Int32,System.String,System.Int32,System.Int32,System.Byte&)
extern "C"  int32_t UNETWebSocketLib_Connect_m1037225913 (UNETWebSocketLib_t1982422223 * __this, int32_t ___hostId0, String_t* ___ip1, int32_t ___port2, int32_t ___exeptionConnectionId3, uint8_t* ___error4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.UNETWebSocketLib::Disconnect(System.Int32,System.Int32,System.Byte&)
extern "C"  bool UNETWebSocketLib_Disconnect_m1764647650 (UNETWebSocketLib_t1982422223 * __this, int32_t ___hostId0, int32_t ___connectionId1, uint8_t* ___error2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.UNETWebSocketLib::Send(System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Byte&)
extern "C"  bool UNETWebSocketLib_Send_m3125740401 (UNETWebSocketLib_t1982422223 * __this, int32_t ___hostId0, int32_t ___connectionId1, int32_t ___channelId2, ByteU5BU5D_t58506160* ___buff3, int32_t ___size4, uint8_t* ___error5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkEventType UnityEngine.Networking.UNETWebSocketLib::ReceiveFromHost(System.Int32,System.Int32&,System.Int32&,System.Byte[],System.Int32,System.Int32&,System.Byte&)
extern "C"  int32_t UNETWebSocketLib_ReceiveFromHost_m1979391247 (UNETWebSocketLib_t1982422223 * __this, int32_t ___hostId0, int32_t* ___connectionId1, int32_t* ___channelId2, ByteU5BU5D_t58506160* ___buffer3, int32_t ___bufferSize4, int32_t* ___receivedSize5, uint8_t* ___error6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UNETWebSocketLib::Stop()
extern "C"  void UNETWebSocketLib_Stop_m2515121229 (UNETWebSocketLib_t1982422223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UNETWebSocketLib::Dispose()
extern "C"  void UNETWebSocketLib_Dispose_m945943382 (UNETWebSocketLib_t1982422223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
