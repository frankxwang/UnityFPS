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

// System.ComponentModel.Info
struct Info_t4246869879;
// System.Type
struct Type_t;
// System.ComponentModel.EventDescriptorCollection
struct EventDescriptorCollection_t2663519152;
// System.Attribute[]
struct AttributeU5BU5D_t4076389004;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t3591325611;
// System.ComponentModel.EventDescriptor
struct EventDescriptor_t2067537970;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t3995075053;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t3839011043;
// System.ComponentModel.IComponent
struct IComponent_t3388063069;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"

// System.Void System.ComponentModel.Info::.ctor(System.Type)
extern "C"  void Info__ctor_m2226168110 (Info_t4246869879 * __this, Type_t * ___infoType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.Info::get_InfoType()
extern "C"  Type_t * Info_get_InfoType_m4179474596 (Info_t4246869879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.Info::GetEvents(System.Attribute[])
extern "C"  EventDescriptorCollection_t2663519152 * Info_GetEvents_m2944639402 (Info_t4246869879 * __this, AttributeU5BU5D_t4076389004* ___attributes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.Info::GetProperties(System.Attribute[])
extern "C"  PropertyDescriptorCollection_t3591325611 * Info_GetProperties_m3121930073 (Info_t4246869879 * __this, AttributeU5BU5D_t4076389004* ___attributes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptor System.ComponentModel.Info::GetDefaultEvent()
extern "C"  EventDescriptor_t2067537970 * Info_GetDefaultEvent_m3284911307 (Info_t4246869879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.Info::GetDefaultProperty()
extern "C"  PropertyDescriptor_t3995075053 * Info_GetDefaultProperty_m3005127025 (Info_t4246869879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.Info::GetAttributes(System.ComponentModel.IComponent)
extern "C"  AttributeCollection_t3839011043 * Info_GetAttributes_m3383754723 (Info_t4246869879 * __this, Il2CppObject * ___comp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
