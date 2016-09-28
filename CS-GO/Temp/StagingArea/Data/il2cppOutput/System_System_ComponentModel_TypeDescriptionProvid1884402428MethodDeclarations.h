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

// System.ComponentModel.TypeDescriptionProvider
struct TypeDescriptionProvider_t1884402428;
// System.Object
struct Il2CppObject;
// System.IServiceProvider
struct IServiceProvider_t3408483282;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Collections.IDictionary
struct IDictionary_t1654916945;
// System.ComponentModel.ICustomTypeDescriptor
struct ICustomTypeDescriptor_t1558278316;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_ComponentModel_TypeDescriptionProvid1884402428.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.ComponentModel.TypeDescriptionProvider::.ctor()
extern "C"  void TypeDescriptionProvider__ctor_m311917530 (TypeDescriptionProvider_t1884402428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptionProvider::.ctor(System.ComponentModel.TypeDescriptionProvider)
extern "C"  void TypeDescriptionProvider__ctor_m1397458152 (TypeDescriptionProvider_t1884402428 * __this, TypeDescriptionProvider_t1884402428 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptionProvider::CreateInstance(System.IServiceProvider,System.Type,System.Type[],System.Object[])
extern "C"  Il2CppObject * TypeDescriptionProvider_CreateInstance_m955843168 (TypeDescriptionProvider_t1884402428 * __this, Il2CppObject * ___provider0, Type_t * ___objectType1, TypeU5BU5D_t3431720054* ___argTypes2, ObjectU5BU5D_t11523773* ___args3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.ComponentModel.TypeDescriptionProvider::GetCache(System.Object)
extern "C"  Il2CppObject * TypeDescriptionProvider_GetCache_m1369510518 (TypeDescriptionProvider_t1884402428 * __this, Il2CppObject * ___instance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptionProvider::GetExtendedTypeDescriptor(System.Object)
extern "C"  Il2CppObject * TypeDescriptionProvider_GetExtendedTypeDescriptor_m2207274097 (TypeDescriptionProvider_t1884402428 * __this, Il2CppObject * ___instance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeDescriptionProvider::GetFullComponentName(System.Object)
extern "C"  String_t* TypeDescriptionProvider_GetFullComponentName_m163121354 (TypeDescriptionProvider_t1884402428 * __this, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptionProvider::GetReflectionType(System.Object)
extern "C"  Type_t * TypeDescriptionProvider_GetReflectionType_m1842576231 (TypeDescriptionProvider_t1884402428 * __this, Il2CppObject * ___instance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptionProvider::GetReflectionType(System.Type)
extern "C"  Type_t * TypeDescriptionProvider_GetReflectionType_m2653032972 (TypeDescriptionProvider_t1884402428 * __this, Type_t * ___objectType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptionProvider::GetReflectionType(System.Type,System.Object)
extern "C"  Type_t * TypeDescriptionProvider_GetReflectionType_m4229552090 (TypeDescriptionProvider_t1884402428 * __this, Type_t * ___objectType0, Il2CppObject * ___instance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptionProvider::GetTypeDescriptor(System.Object)
extern "C"  Il2CppObject * TypeDescriptionProvider_GetTypeDescriptor_m1233345322 (TypeDescriptionProvider_t1884402428 * __this, Il2CppObject * ___instance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptionProvider::GetTypeDescriptor(System.Type)
extern "C"  Il2CppObject * TypeDescriptionProvider_GetTypeDescriptor_m3032286863 (TypeDescriptionProvider_t1884402428 * __this, Type_t * ___objectType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptionProvider::GetTypeDescriptor(System.Type,System.Object)
extern "C"  Il2CppObject * TypeDescriptionProvider_GetTypeDescriptor_m2579573533 (TypeDescriptionProvider_t1884402428 * __this, Type_t * ___objectType0, Il2CppObject * ___instance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
