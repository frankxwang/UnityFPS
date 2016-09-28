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

// UnityEngine.Networking.NetworkSystem.ObjectSpawnFinishedMessage
struct ObjectSpawnFinishedMessage_t2852618231;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3536499450;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3536499450.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3691904682.h"

// System.Void UnityEngine.Networking.NetworkSystem.ObjectSpawnFinishedMessage::.ctor()
extern "C"  void ObjectSpawnFinishedMessage__ctor_m3507643969 (ObjectSpawnFinishedMessage_t2852618231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.ObjectSpawnFinishedMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void ObjectSpawnFinishedMessage_Deserialize_m885400752 (ObjectSpawnFinishedMessage_t2852618231 * __this, NetworkReader_t3536499450 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.ObjectSpawnFinishedMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void ObjectSpawnFinishedMessage_Serialize_m1960634657 (ObjectSpawnFinishedMessage_t2852618231 * __this, NetworkWriter_t3691904682 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
