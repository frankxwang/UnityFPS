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

// System.ComponentModel.TypeInfo
struct TypeInfo_t3632586193;
// System.Type
struct Type_t;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t3839011043;
// System.ComponentModel.EventDescriptorCollection
struct EventDescriptorCollection_t2663519152;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t3591325611;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"

// System.Void System.ComponentModel.TypeInfo::.ctor(System.Type)
extern "C"  void TypeInfo__ctor_m161186184 (TypeInfo_t3632586193 * __this, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.TypeInfo::GetAttributes()
extern "C"  AttributeCollection_t3839011043 * TypeInfo_GetAttributes_m2345363360 (TypeInfo_t3632586193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.TypeInfo::GetEvents()
extern "C"  EventDescriptorCollection_t2663519152 * TypeInfo_GetEvents_m2388324335 (TypeInfo_t3632586193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeInfo::GetProperties()
extern "C"  PropertyDescriptorCollection_t3591325611 * TypeInfo_GetProperties_m600389086 (TypeInfo_t3632586193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
