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
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3860307911.h"
#include "mscorlib_System_Object837106420.h"

// System.Void UnityEngine.Networking.NetworkInstanceId::.ctor(System.UInt32)
extern "C"  void NetworkInstanceId__ctor_m265949053 (NetworkInstanceId_t3860307911 * __this, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkInstanceId::.cctor()
extern "C"  void NetworkInstanceId__cctor_m3082016432 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkInstanceId::IsEmpty()
extern "C"  bool NetworkInstanceId_IsEmpty_m1394762928 (NetworkInstanceId_t3860307911 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkInstanceId::GetHashCode()
extern "C"  int32_t NetworkInstanceId_GetHashCode_m180297380 (NetworkInstanceId_t3860307911 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkInstanceId::Equals(System.Object)
extern "C"  bool NetworkInstanceId_Equals_m806330560 (NetworkInstanceId_t3860307911 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkInstanceId::ToString()
extern "C"  String_t* NetworkInstanceId_ToString_m2322738006 (NetworkInstanceId_t3860307911 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.NetworkInstanceId::get_Value()
extern "C"  uint32_t NetworkInstanceId_get_Value_m3616081288 (NetworkInstanceId_t3860307911 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkInstanceId::op_Equality(UnityEngine.Networking.NetworkInstanceId,UnityEngine.Networking.NetworkInstanceId)
extern "C"  bool NetworkInstanceId_op_Equality_m1970630081 (Il2CppObject * __this /* static, unused */, NetworkInstanceId_t3860307911  ___c10, NetworkInstanceId_t3860307911  ___c21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkInstanceId::op_Inequality(UnityEngine.Networking.NetworkInstanceId,UnityEngine.Networking.NetworkInstanceId)
extern "C"  bool NetworkInstanceId_op_Inequality_m270787580 (Il2CppObject * __this /* static, unused */, NetworkInstanceId_t3860307911  ___c10, NetworkInstanceId_t3860307911  ___c21, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct NetworkInstanceId_t3860307911;
struct NetworkInstanceId_t3860307911_marshaled_pinvoke;

extern "C" void NetworkInstanceId_t3860307911_marshal_pinvoke(const NetworkInstanceId_t3860307911& unmarshaled, NetworkInstanceId_t3860307911_marshaled_pinvoke& marshaled);
extern "C" void NetworkInstanceId_t3860307911_marshal_pinvoke_back(const NetworkInstanceId_t3860307911_marshaled_pinvoke& marshaled, NetworkInstanceId_t3860307911& unmarshaled);
extern "C" void NetworkInstanceId_t3860307911_marshal_pinvoke_cleanup(NetworkInstanceId_t3860307911_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct NetworkInstanceId_t3860307911;
struct NetworkInstanceId_t3860307911_marshaled_com;

extern "C" void NetworkInstanceId_t3860307911_marshal_com(const NetworkInstanceId_t3860307911& unmarshaled, NetworkInstanceId_t3860307911_marshaled_com& marshaled);
extern "C" void NetworkInstanceId_t3860307911_marshal_com_back(const NetworkInstanceId_t3860307911_marshaled_com& marshaled, NetworkInstanceId_t3860307911& unmarshaled);
extern "C" void NetworkInstanceId_t3860307911_marshal_com_cleanup(NetworkInstanceId_t3860307911_marshaled_com& marshaled);
