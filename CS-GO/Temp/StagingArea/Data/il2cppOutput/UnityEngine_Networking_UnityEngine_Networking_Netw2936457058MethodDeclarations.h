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

// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw2936457058.h"
#include "mscorlib_System_Object837106420.h"

// System.Void UnityEngine.Networking.NetworkSceneId::.ctor(System.UInt32)
extern "C"  void NetworkSceneId__ctor_m1915241224 (NetworkSceneId_t2936457058 * __this, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkSceneId::IsEmpty()
extern "C"  bool NetworkSceneId_IsEmpty_m3259445089 (NetworkSceneId_t2936457058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkSceneId::GetHashCode()
extern "C"  int32_t NetworkSceneId_GetHashCode_m2759385673 (NetworkSceneId_t2936457058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkSceneId::Equals(System.Object)
extern "C"  bool NetworkSceneId_Equals_m1424812529 (NetworkSceneId_t2936457058 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkSceneId::ToString()
extern "C"  String_t* NetworkSceneId_ToString_m2423328699 (NetworkSceneId_t2936457058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.NetworkSceneId::get_Value()
extern "C"  uint32_t NetworkSceneId_get_Value_m1187092659 (NetworkSceneId_t2936457058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkSceneId::op_Equality(UnityEngine.Networking.NetworkSceneId,UnityEngine.Networking.NetworkSceneId)
extern "C"  bool NetworkSceneId_op_Equality_m687113904 (Il2CppObject * __this /* static, unused */, NetworkSceneId_t2936457058  ___c10, NetworkSceneId_t2936457058  ___c21, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct NetworkSceneId_t2936457058;
struct NetworkSceneId_t2936457058_marshaled_pinvoke;

extern "C" void NetworkSceneId_t2936457058_marshal_pinvoke(const NetworkSceneId_t2936457058& unmarshaled, NetworkSceneId_t2936457058_marshaled_pinvoke& marshaled);
extern "C" void NetworkSceneId_t2936457058_marshal_pinvoke_back(const NetworkSceneId_t2936457058_marshaled_pinvoke& marshaled, NetworkSceneId_t2936457058& unmarshaled);
extern "C" void NetworkSceneId_t2936457058_marshal_pinvoke_cleanup(NetworkSceneId_t2936457058_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct NetworkSceneId_t2936457058;
struct NetworkSceneId_t2936457058_marshaled_com;

extern "C" void NetworkSceneId_t2936457058_marshal_com(const NetworkSceneId_t2936457058& unmarshaled, NetworkSceneId_t2936457058_marshaled_com& marshaled);
extern "C" void NetworkSceneId_t2936457058_marshal_com_back(const NetworkSceneId_t2936457058_marshaled_com& marshaled, NetworkSceneId_t2936457058& unmarshaled);
extern "C" void NetworkSceneId_t2936457058_marshal_com_cleanup(NetworkSceneId_t2936457058_marshaled_com& marshaled);
