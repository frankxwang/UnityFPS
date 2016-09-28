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

// SimpleJson.PocoJsonSerializerStrategy
struct PocoJsonSerializerStrategy_t1373207638;
// System.String
struct String_t;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
struct ConstructorDelegate_t4072949631;
// System.Type
struct Type_t;
// System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
struct IDictionary_2_t3083487430;
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct IDictionary_2_t301019319;
// System.Object
struct Il2CppObject;
// System.Enum
struct Enum_t2778772662;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Enum2778772662.h"

// System.Void SimpleJson.PocoJsonSerializerStrategy::.ctor()
extern "C"  void PocoJsonSerializerStrategy__ctor_m98290550 (PocoJsonSerializerStrategy_t1373207638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.PocoJsonSerializerStrategy::.cctor()
extern "C"  void PocoJsonSerializerStrategy__cctor_m2564910839 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String)
extern "C"  String_t* PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m294662907 (PocoJsonSerializerStrategy_t1373207638 * __this, String_t* ___clrPropertyName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.PocoJsonSerializerStrategy::ContructorDelegateFactory(System.Type)
extern "C"  ConstructorDelegate_t4072949631 * PocoJsonSerializerStrategy_ContructorDelegateFactory_m1098206077 (PocoJsonSerializerStrategy_t1373207638 * __this, Type_t * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate> SimpleJson.PocoJsonSerializerStrategy::GetterValueFactory(System.Type)
extern "C"  Il2CppObject* PocoJsonSerializerStrategy_GetterValueFactory_m1085737513 (PocoJsonSerializerStrategy_t1373207638 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>> SimpleJson.PocoJsonSerializerStrategy::SetterValueFactory(System.Type)
extern "C"  Il2CppObject* PocoJsonSerializerStrategy_SetterValueFactory_m2124618347 (PocoJsonSerializerStrategy_t1373207638 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeNonPrimitiveObject(System.Object,System.Object&)
extern "C"  bool PocoJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m408626704 (PocoJsonSerializerStrategy_t1373207638 * __this, Il2CppObject * ___input0, Il2CppObject ** ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SimpleJson.PocoJsonSerializerStrategy::SerializeEnum(System.Enum)
extern "C"  Il2CppObject * PocoJsonSerializerStrategy_SerializeEnum_m3909084616 (PocoJsonSerializerStrategy_t1373207638 * __this, Enum_t2778772662 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeKnownTypes(System.Object,System.Object&)
extern "C"  bool PocoJsonSerializerStrategy_TrySerializeKnownTypes_m3601417165 (PocoJsonSerializerStrategy_t1373207638 * __this, Il2CppObject * ___input0, Il2CppObject ** ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeUnknownTypes(System.Object,System.Object&)
extern "C"  bool PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m1594419814 (PocoJsonSerializerStrategy_t1373207638 * __this, Il2CppObject * ___input0, Il2CppObject ** ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
