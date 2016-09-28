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

// UnityEngine.Networking.Match.ResponseBase
struct ResponseBase_t959897000;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"

// System.Void UnityEngine.Networking.Match.ResponseBase::.ctor()
extern "C"  void ResponseBase__ctor_m3566726084 (ResponseBase_t959897000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.ResponseBase::ParseJSONString(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  String_t* ResponseBase_ParseJSONString_m3525141685 (ResponseBase_t959897000 * __this, String_t* ___name0, Il2CppObject * ___obj1, Il2CppObject* ___dictJsonObj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.ResponseBase::ParseJSONInt32(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t ResponseBase_ParseJSONInt32_m108429139 (ResponseBase_t959897000 * __this, String_t* ___name0, Il2CppObject * ___obj1, Il2CppObject* ___dictJsonObj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 UnityEngine.Networking.Match.ResponseBase::ParseJSONUInt16(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  uint16_t ResponseBase_ParseJSONUInt16_m3514250613 (ResponseBase_t959897000 * __this, String_t* ___name0, Il2CppObject * ___obj1, Il2CppObject* ___dictJsonObj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 UnityEngine.Networking.Match.ResponseBase::ParseJSONUInt64(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  uint64_t ResponseBase_ParseJSONUInt64_m2158972181 (ResponseBase_t959897000 * __this, String_t* ___name0, Il2CppObject * ___obj1, Il2CppObject* ___dictJsonObj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.Match.ResponseBase::ParseJSONBool(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  bool ResponseBase_ParseJSONBool_m3177133849 (ResponseBase_t959897000 * __this, String_t* ___name0, Il2CppObject * ___obj1, Il2CppObject* ___dictJsonObj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
