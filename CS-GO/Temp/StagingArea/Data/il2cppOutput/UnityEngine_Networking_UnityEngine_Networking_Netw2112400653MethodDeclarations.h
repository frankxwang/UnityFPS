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

// UnityEngine.Networking.NetworkSystem.ClientAuthorityMessage
struct ClientAuthorityMessage_t2112400653;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3536499450;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3536499450.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3691904682.h"

// System.Void UnityEngine.Networking.NetworkSystem.ClientAuthorityMessage::.ctor()
extern "C"  void ClientAuthorityMessage__ctor_m449975659 (ClientAuthorityMessage_t2112400653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.ClientAuthorityMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void ClientAuthorityMessage_Deserialize_m926367578 (ClientAuthorityMessage_t2112400653 * __this, NetworkReader_t3536499450 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.ClientAuthorityMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void ClientAuthorityMessage_Serialize_m1665705547 (ClientAuthorityMessage_t2112400653 * __this, NetworkWriter_t3691904682 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
