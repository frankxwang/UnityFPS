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

// UnityEngine.Networking.NetworkSystem.IntegerMessage
struct IntegerMessage_t1170075847;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3536499450;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3536499450.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3691904682.h"

// System.Void UnityEngine.Networking.NetworkSystem.IntegerMessage::.ctor()
extern "C"  void IntegerMessage__ctor_m209365489 (IntegerMessage_t1170075847 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.IntegerMessage::.ctor(System.Int32)
extern "C"  void IntegerMessage__ctor_m1152122306 (IntegerMessage_t1170075847 * __this, int32_t ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.IntegerMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void IntegerMessage_Deserialize_m1797704800 (IntegerMessage_t1170075847 * __this, NetworkReader_t3536499450 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.IntegerMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void IntegerMessage_Serialize_m3248733393 (IntegerMessage_t1170075847 * __this, NetworkWriter_t3691904682 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
