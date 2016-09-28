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

// WebSocket
struct WebSocket_t858269639;
// System.Uri
struct Uri_t2776692961;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri2776692961.h"
#include "mscorlib_System_String968488902.h"

// System.Void WebSocket::.ctor(System.Uri)
extern "C"  void WebSocket__ctor_m1685182519 (WebSocket_t858269639 * __this, Uri_t2776692961 * ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocket::SendString(System.String)
extern "C"  void WebSocket_SendString_m602881065 (WebSocket_t858269639 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocket::RecvString()
extern "C"  String_t* WebSocket_RecvString_m3070028372 (WebSocket_t858269639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocket::SocketCreate(System.String)
extern "C"  int32_t WebSocket_SocketCreate_m3778272289 (Il2CppObject * __this /* static, unused */, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocket::SocketState(System.Int32)
extern "C"  int32_t WebSocket_SocketState_m1963709343 (Il2CppObject * __this /* static, unused */, int32_t ___socketInstance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocket::SocketSend(System.Int32,System.Byte[],System.Int32)
extern "C"  void WebSocket_SocketSend_m3431605640 (Il2CppObject * __this /* static, unused */, int32_t ___socketInstance0, ByteU5BU5D_t58506160* ___ptr1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocket::SocketRecv(System.Int32,System.Byte[],System.Int32)
extern "C"  void WebSocket_SocketRecv_m3711393002 (Il2CppObject * __this /* static, unused */, int32_t ___socketInstance0, ByteU5BU5D_t58506160* ___ptr1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocket::SocketRecvLength(System.Int32)
extern "C"  int32_t WebSocket_SocketRecvLength_m2784300482 (Il2CppObject * __this /* static, unused */, int32_t ___socketInstance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocket::SocketClose(System.Int32)
extern "C"  void WebSocket_SocketClose_m3318167992 (Il2CppObject * __this /* static, unused */, int32_t ___socketInstance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebSocket::SocketError(System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t WebSocket_SocketError_m2150741534 (Il2CppObject * __this /* static, unused */, int32_t ___socketInstance0, ByteU5BU5D_t58506160* ___ptr1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocket::Send(System.Byte[])
extern "C"  void WebSocket_Send_m2731853825 (WebSocket_t858269639 * __this, ByteU5BU5D_t58506160* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] WebSocket::Recv()
extern "C"  ByteU5BU5D_t58506160* WebSocket_Recv_m1343520252 (WebSocket_t858269639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocket::Connect()
extern "C"  void WebSocket_Connect_m977413324 (WebSocket_t858269639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocket::Close()
extern "C"  void WebSocket_Close_m3527369370 (WebSocket_t858269639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocket::get_Connected()
extern "C"  bool WebSocket_get_Connected_m938346678 (WebSocket_t858269639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocket::get_Error()
extern "C"  String_t* WebSocket_get_Error_m437024804 (WebSocket_t858269639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
