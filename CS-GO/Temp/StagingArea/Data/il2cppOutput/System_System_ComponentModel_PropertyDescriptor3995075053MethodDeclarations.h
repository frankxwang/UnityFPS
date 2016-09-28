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

// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t3995075053;
// System.ComponentModel.MemberDescriptor
struct MemberDescriptor_t1680589938;
// System.Attribute[]
struct AttributeU5BU5D_t4076389004;
// System.String
struct String_t;
// System.ComponentModel.TypeConverter
struct TypeConverter_t3398830607;
// System.Object
struct Il2CppObject;
// System.EventHandler
struct EventHandler_t247020293;
// System.Collections.IList
struct IList_t1612618265;
// System.Type
struct Type_t;
// System.EventArgs
struct EventArgs_t516466188;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t3591325611;

#include "codegen/il2cpp-codegen.h"
#include "System_System_ComponentModel_MemberDescriptor1680589938.h"
#include "mscorlib_System_String968488902.h"
#include "System_System_ComponentModel_DesignerSerializationVis2563648.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_EventHandler247020293.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_EventArgs516466188.h"

// System.Void System.ComponentModel.PropertyDescriptor::.ctor(System.ComponentModel.MemberDescriptor)
extern "C"  void PropertyDescriptor__ctor_m412082729 (PropertyDescriptor_t3995075053 * __this, MemberDescriptor_t1680589938 * ___reference0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptor::.ctor(System.ComponentModel.MemberDescriptor,System.Attribute[])
extern "C"  void PropertyDescriptor__ctor_m2809737374 (PropertyDescriptor_t3995075053 * __this, MemberDescriptor_t1680589938 * ___reference0, AttributeU5BU5D_t4076389004* ___attrs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptor::.ctor(System.String,System.Attribute[])
extern "C"  void PropertyDescriptor__ctor_m307742810 (PropertyDescriptor_t3995075053 * __this, String_t* ___name0, AttributeU5BU5D_t4076389004* ___attrs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter System.ComponentModel.PropertyDescriptor::get_Converter()
extern "C"  TypeConverter_t3398830607 * PropertyDescriptor_get_Converter_m715905818 (PropertyDescriptor_t3995075053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.PropertyDescriptor::get_IsLocalizable()
extern "C"  bool PropertyDescriptor_get_IsLocalizable_m3674798656 (PropertyDescriptor_t3995075053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.PropertyDescriptor::get_SupportsChangeEvents()
extern "C"  bool PropertyDescriptor_get_SupportsChangeEvents_m3044168027 (PropertyDescriptor_t3995075053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.DesignerSerializationVisibility System.ComponentModel.PropertyDescriptor::get_SerializationVisibility()
extern "C"  int32_t PropertyDescriptor_get_SerializationVisibility_m185727181 (PropertyDescriptor_t3995075053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptor::AddValueChanged(System.Object,System.EventHandler)
extern "C"  void PropertyDescriptor_AddValueChanged_m4175519290 (PropertyDescriptor_t3995075053 * __this, Il2CppObject * ___component0, EventHandler_t247020293 * ___handler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptor::RemoveValueChanged(System.Object,System.EventHandler)
extern "C"  void PropertyDescriptor_RemoveValueChanged_m748030555 (PropertyDescriptor_t3995075053 * __this, Il2CppObject * ___component0, EventHandler_t247020293 * ___handler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptor::FillAttributes(System.Collections.IList)
extern "C"  void PropertyDescriptor_FillAttributes_m2327357850 (PropertyDescriptor_t3995075053 * __this, Il2CppObject * ___attributeList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.PropertyDescriptor::GetInvocationTarget(System.Type,System.Object)
extern "C"  Il2CppObject * PropertyDescriptor_GetInvocationTarget_m2620384498 (PropertyDescriptor_t3995075053 * __this, Type_t * ___type0, Il2CppObject * ___instance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.EventHandler System.ComponentModel.PropertyDescriptor::GetValueChangedHandler(System.Object)
extern "C"  EventHandler_t247020293 * PropertyDescriptor_GetValueChangedHandler_m3628476944 (PropertyDescriptor_t3995075053 * __this, Il2CppObject * ___component0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptor::OnValueChanged(System.Object,System.EventArgs)
extern "C"  void PropertyDescriptor_OnValueChanged_m3772955659 (PropertyDescriptor_t3995075053 * __this, Il2CppObject * ___component0, EventArgs_t516466188 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.PropertyDescriptor::CreateInstance(System.Type)
extern "C"  Il2CppObject * PropertyDescriptor_CreateInstance_m3200693828 (PropertyDescriptor_t3995075053 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.PropertyDescriptor::Equals(System.Object)
extern "C"  bool PropertyDescriptor_Equals_m462030608 (PropertyDescriptor_t3995075053 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.PropertyDescriptor::GetChildProperties()
extern "C"  PropertyDescriptorCollection_t3591325611 * PropertyDescriptor_GetChildProperties_m1150865570 (PropertyDescriptor_t3995075053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.PropertyDescriptor::GetChildProperties(System.Object)
extern "C"  PropertyDescriptorCollection_t3591325611 * PropertyDescriptor_GetChildProperties_m4163995698 (PropertyDescriptor_t3995075053 * __this, Il2CppObject * ___instance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.PropertyDescriptor::GetChildProperties(System.Attribute[])
extern "C"  PropertyDescriptorCollection_t3591325611 * PropertyDescriptor_GetChildProperties_m1155825283 (PropertyDescriptor_t3995075053 * __this, AttributeU5BU5D_t4076389004* ___filter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.PropertyDescriptor::GetHashCode()
extern "C"  int32_t PropertyDescriptor_GetHashCode_m2803682292 (PropertyDescriptor_t3995075053 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.PropertyDescriptor::GetChildProperties(System.Object,System.Attribute[])
extern "C"  PropertyDescriptorCollection_t3591325611 * PropertyDescriptor_GetChildProperties_m1340756981 (PropertyDescriptor_t3995075053 * __this, Il2CppObject * ___instance0, AttributeU5BU5D_t4076389004* ___filter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.PropertyDescriptor::GetEditor(System.Type)
extern "C"  Il2CppObject * PropertyDescriptor_GetEditor_m2813038008 (PropertyDescriptor_t3995075053 * __this, Type_t * ___editorBaseType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.PropertyDescriptor::GetTypeFromName(System.String)
extern "C"  Type_t * PropertyDescriptor_GetTypeFromName_m1458120548 (PropertyDescriptor_t3995075053 * __this, String_t* ___typeName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
