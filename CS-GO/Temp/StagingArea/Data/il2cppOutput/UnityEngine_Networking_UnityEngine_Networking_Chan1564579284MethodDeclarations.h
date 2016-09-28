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

// System.Byte[]
struct ByteU5BU5D_t58506160;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t2182631957;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Chan1564579284.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw2182631957.h"

// System.Void UnityEngine.Networking.ChannelPacket::.ctor(System.Int32,System.Boolean)
extern "C"  void ChannelPacket__ctor_m4049360604 (ChannelPacket_t1564579284 * __this, int32_t ___packetSize0, bool ___isReliable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ChannelPacket::Reset()
extern "C"  void ChannelPacket_Reset_m1459324893 (ChannelPacket_t1564579284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ChannelPacket::IsEmpty()
extern "C"  bool ChannelPacket_IsEmpty_m844917123 (ChannelPacket_t1564579284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ChannelPacket::Write(System.Byte[],System.Int32)
extern "C"  void ChannelPacket_Write_m370199515 (ChannelPacket_t1564579284 * __this, ByteU5BU5D_t58506160* ___bytes0, int32_t ___numBytes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ChannelPacket::HasSpace(System.Int32)
extern "C"  bool ChannelPacket_HasSpace_m3550722495 (ChannelPacket_t1564579284 * __this, int32_t ___numBytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ChannelPacket::SendToTransport(UnityEngine.Networking.NetworkConnection,System.Int32)
extern "C"  bool ChannelPacket_SendToTransport_m3736336858 (ChannelPacket_t1564579284 * __this, NetworkConnection_t2182631957 * ___conn0, int32_t ___channelId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ChannelPacket_t1564579284;
struct ChannelPacket_t1564579284_marshaled_pinvoke;

extern "C" void ChannelPacket_t1564579284_marshal_pinvoke(const ChannelPacket_t1564579284& unmarshaled, ChannelPacket_t1564579284_marshaled_pinvoke& marshaled);
extern "C" void ChannelPacket_t1564579284_marshal_pinvoke_back(const ChannelPacket_t1564579284_marshaled_pinvoke& marshaled, ChannelPacket_t1564579284& unmarshaled);
extern "C" void ChannelPacket_t1564579284_marshal_pinvoke_cleanup(ChannelPacket_t1564579284_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ChannelPacket_t1564579284;
struct ChannelPacket_t1564579284_marshaled_com;

extern "C" void ChannelPacket_t1564579284_marshal_com(const ChannelPacket_t1564579284& unmarshaled, ChannelPacket_t1564579284_marshaled_com& marshaled);
extern "C" void ChannelPacket_t1564579284_marshal_com_back(const ChannelPacket_t1564579284_marshaled_com& marshaled, ChannelPacket_t1564579284& unmarshaled);
extern "C" void ChannelPacket_t1564579284_marshal_com_cleanup(ChannelPacket_t1564579284_marshaled_com& marshaled);
