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

// UnityEngine.Networking.NetworkSystem.ObjectDestroyMessage
struct ObjectDestroyMessage_t2901066666;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3536499450;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3536499450.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3691904682.h"

// System.Void UnityEngine.Networking.NetworkSystem.ObjectDestroyMessage::.ctor()
extern "C"  void ObjectDestroyMessage__ctor_m2816051502 (ObjectDestroyMessage_t2901066666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.ObjectDestroyMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void ObjectDestroyMessage_Deserialize_m2434158429 (ObjectDestroyMessage_t2901066666 * __this, NetworkReader_t3536499450 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.ObjectDestroyMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void ObjectDestroyMessage_Serialize_m782359310 (ObjectDestroyMessage_t2901066666 * __this, NetworkWriter_t3691904682 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
