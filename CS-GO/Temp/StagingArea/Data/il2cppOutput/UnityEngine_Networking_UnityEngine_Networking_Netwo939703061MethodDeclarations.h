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

// UnityEngine.Networking.NetworkSystem.ObjectSpawnSceneMessage
struct ObjectSpawnSceneMessage_t939703061;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3536499450;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3536499450.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3691904682.h"

// System.Void UnityEngine.Networking.NetworkSystem.ObjectSpawnSceneMessage::.ctor()
extern "C"  void ObjectSpawnSceneMessage__ctor_m3337271445 (ObjectSpawnSceneMessage_t939703061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.ObjectSpawnSceneMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void ObjectSpawnSceneMessage_Deserialize_m2341490180 (ObjectSpawnSceneMessage_t939703061 * __this, NetworkReader_t3536499450 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.ObjectSpawnSceneMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void ObjectSpawnSceneMessage_Serialize_m621369205 (ObjectSpawnSceneMessage_t939703061 * __this, NetworkWriter_t3691904682 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
