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

// UnityEngine.Networking.NetworkSystem.PeerInfoMessage
struct PeerInfoMessage_t1580343381;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3536499450;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3536499450.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3691904682.h"

// System.Void UnityEngine.Networking.NetworkSystem.PeerInfoMessage::.ctor()
extern "C"  void PeerInfoMessage__ctor_m2860242005 (PeerInfoMessage_t1580343381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.PeerInfoMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void PeerInfoMessage_Deserialize_m1101183428 (PeerInfoMessage_t1580343381 * __this, NetworkReader_t3536499450 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.PeerInfoMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void PeerInfoMessage_Serialize_m3225662261 (PeerInfoMessage_t1580343381 * __this, NetworkWriter_t3691904682 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkSystem.PeerInfoMessage::ToString()
extern "C"  String_t* PeerInfoMessage_ToString_m1620338718 (PeerInfoMessage_t1580343381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
