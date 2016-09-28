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

// UnityEngine.Networking.NetworkSystem.OwnerMessage
struct OwnerMessage_t1788635570;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3536499450;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3536499450.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3691904682.h"

// System.Void UnityEngine.Networking.NetworkSystem.OwnerMessage::.ctor()
extern "C"  void OwnerMessage__ctor_m2310681382 (OwnerMessage_t1788635570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.OwnerMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void OwnerMessage_Deserialize_m1685521237 (OwnerMessage_t1788635570 * __this, NetworkReader_t3536499450 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.OwnerMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void OwnerMessage_Serialize_m2819566854 (OwnerMessage_t1788635570 * __this, NetworkWriter_t3691904682 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
