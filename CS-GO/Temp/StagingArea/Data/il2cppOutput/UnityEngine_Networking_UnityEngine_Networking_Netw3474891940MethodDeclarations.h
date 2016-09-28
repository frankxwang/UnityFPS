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

// UnityEngine.Networking.NetworkSystem.PeerAuthorityMessage
struct PeerAuthorityMessage_t3474891940;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3536499450;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3536499450.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3691904682.h"

// System.Void UnityEngine.Networking.NetworkSystem.PeerAuthorityMessage::.ctor()
extern "C"  void PeerAuthorityMessage__ctor_m565846388 (PeerAuthorityMessage_t3474891940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.PeerAuthorityMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void PeerAuthorityMessage_Deserialize_m1016934435 (PeerAuthorityMessage_t3474891940 * __this, NetworkReader_t3536499450 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.PeerAuthorityMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void PeerAuthorityMessage_Serialize_m3587585364 (PeerAuthorityMessage_t3474891940 * __this, NetworkWriter_t3691904682 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
