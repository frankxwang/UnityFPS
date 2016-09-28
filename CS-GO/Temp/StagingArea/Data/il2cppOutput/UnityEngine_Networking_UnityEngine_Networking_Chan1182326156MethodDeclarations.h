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

// UnityEngine.Networking.ChannelBuffer
struct ChannelBuffer_t1182326156;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t2182631957;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw2182631957.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3691904682.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Chan1564579284.h"

// System.Void UnityEngine.Networking.ChannelBuffer::.ctor(UnityEngine.Networking.NetworkConnection,System.Int32,System.Byte,System.Boolean)
extern "C"  void ChannelBuffer__ctor_m2390737488 (ChannelBuffer_t1182326156 * __this, NetworkConnection_t2182631957 * ___conn0, int32_t ___bufferSize1, uint8_t ___cid2, bool ___isReliable3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ChannelBuffer::.cctor()
extern "C"  void ChannelBuffer__cctor_m3941488181 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.ChannelBuffer::get_numBufferedPerSecond()
extern "C"  int32_t ChannelBuffer_get_numBufferedPerSecond_m1644171529 (ChannelBuffer_t1182326156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ChannelBuffer::set_numBufferedPerSecond(System.Int32)
extern "C"  void ChannelBuffer_set_numBufferedPerSecond_m959730790 (ChannelBuffer_t1182326156 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ChannelBuffer::set_lastBufferedPerSecond(System.Int32)
extern "C"  void ChannelBuffer_set_lastBufferedPerSecond_m2894169350 (ChannelBuffer_t1182326156 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ChannelBuffer::Dispose()
extern "C"  void ChannelBuffer_Dispose_m3885413045 (ChannelBuffer_t1182326156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ChannelBuffer::Dispose(System.Boolean)
extern "C"  void ChannelBuffer_Dispose_m58722156 (ChannelBuffer_t1182326156 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ChannelBuffer::CheckInternalBuffer()
extern "C"  void ChannelBuffer_CheckInternalBuffer_m3400399899 (ChannelBuffer_t1182326156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ChannelBuffer::SendWriter(UnityEngine.Networking.NetworkWriter)
extern "C"  bool ChannelBuffer_SendWriter_m1606199703 (ChannelBuffer_t1182326156 * __this, NetworkWriter_t3691904682 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ChannelBuffer::SendBytes(System.Byte[],System.Int32)
extern "C"  bool ChannelBuffer_SendBytes_m2389373049 (ChannelBuffer_t1182326156 * __this, ByteU5BU5D_t58506160* ___bytes0, int32_t ___bytesToSend1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ChannelBuffer::QueuePacket()
extern "C"  void ChannelBuffer_QueuePacket_m3007188111 (ChannelBuffer_t1182326156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.ChannelPacket UnityEngine.Networking.ChannelBuffer::AllocPacket()
extern "C"  ChannelPacket_t1564579284  ChannelBuffer_AllocPacket_m3831158084 (ChannelBuffer_t1182326156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ChannelBuffer::FreePacket(UnityEngine.Networking.ChannelPacket)
extern "C"  void ChannelBuffer_FreePacket_m1968246296 (Il2CppObject * __this /* static, unused */, ChannelPacket_t1564579284  ___packet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ChannelBuffer::SendInternalBuffer()
extern "C"  bool ChannelBuffer_SendInternalBuffer_m1269505055 (ChannelBuffer_t1182326156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
