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

// System.ComponentModel.TypeDescriptor/AttributeProvider
struct AttributeProvider_t3371432077;
// System.Attribute[]
struct AttributeU5BU5D_t4076389004;
// System.ComponentModel.TypeDescriptionProvider
struct TypeDescriptionProvider_t1884402428;
// System.ComponentModel.ICustomTypeDescriptor
struct ICustomTypeDescriptor_t1558278316;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_System_ComponentModel_TypeDescriptionProvid1884402428.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.ComponentModel.TypeDescriptor/AttributeProvider::.ctor(System.Attribute[],System.ComponentModel.TypeDescriptionProvider)
extern "C"  void AttributeProvider__ctor_m2493812559 (AttributeProvider_t3371432077 * __this, AttributeU5BU5D_t4076389004* ___attributes0, TypeDescriptionProvider_t1884402428 * ___parent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptor/AttributeProvider::GetTypeDescriptor(System.Type,System.Object)
extern "C"  Il2CppObject * AttributeProvider_GetTypeDescriptor_m436919371 (AttributeProvider_t3371432077 * __this, Type_t * ___type0, Il2CppObject * ___instance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
