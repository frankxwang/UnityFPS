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

// System.ComponentModel.ComponentInfo
struct ComponentInfo_t2454691284;
// System.ComponentModel.IComponent
struct IComponent_t3388063069;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t3839011043;
// System.ComponentModel.EventDescriptorCollection
struct EventDescriptorCollection_t2663519152;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t3591325611;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.ComponentInfo::.ctor(System.ComponentModel.IComponent)
extern "C"  void ComponentInfo__ctor_m2899741867 (ComponentInfo_t2454691284 * __this, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.ComponentInfo::GetAttributes()
extern "C"  AttributeCollection_t3839011043 * ComponentInfo_GetAttributes_m2028669449 (ComponentInfo_t2454691284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.ComponentInfo::GetEvents()
extern "C"  EventDescriptorCollection_t2663519152 * ComponentInfo_GetEvents_m1472423134 (ComponentInfo_t2454691284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ComponentInfo::GetProperties()
extern "C"  PropertyDescriptorCollection_t3591325611 * ComponentInfo_GetProperties_m814973635 (ComponentInfo_t2454691284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
