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

// UnityEngine.Networking.NetworkSystem.PeerListMessage
struct PeerListMessage_t3864036965;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3536499450;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3536499450.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3691904682.h"

// System.Void UnityEngine.Networking.NetworkSystem.PeerListMessage::.ctor()
extern "C"  void PeerListMessage__ctor_m3955703877 (PeerListMessage_t3864036965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.PeerListMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void PeerListMessage_Deserialize_m4224727476 (PeerListMessage_t3864036965 * __this, NetworkReader_t3536499450 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.PeerListMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void PeerListMessage_Serialize_m1655729957 (PeerListMessage_t3864036965 * __this, NetworkWriter_t3691904682 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
