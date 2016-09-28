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

// System.ComponentModel.MultilineStringConverter
struct MultilineStringConverter_t3015808747;
// System.Object
struct Il2CppObject;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t4233601286;
// System.Globalization.CultureInfo
struct CultureInfo_t3603717042;
// System.Type
struct Type_t;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t3591325611;
// System.Attribute[]
struct AttributeU5BU5D_t4076389004;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Globalization_CultureInfo3603717042.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Type2779229935.h"

// System.Void System.ComponentModel.MultilineStringConverter::.ctor()
extern "C"  void MultilineStringConverter__ctor_m3610536311 (MultilineStringConverter_t3015808747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.MultilineStringConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C"  Il2CppObject * MultilineStringConverter_ConvertTo_m3965653193 (MultilineStringConverter_t3015808747 * __this, Il2CppObject * ___context0, CultureInfo_t3603717042 * ___culture1, Il2CppObject * ___value2, Type_t * ___destinationType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.MultilineStringConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object,System.Attribute[])
extern "C"  PropertyDescriptorCollection_t3591325611 * MultilineStringConverter_GetProperties_m1303368373 (MultilineStringConverter_t3015808747 * __this, Il2CppObject * ___context0, Il2CppObject * ___value1, AttributeU5BU5D_t4076389004* ___attributes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MultilineStringConverter::GetPropertiesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C"  bool MultilineStringConverter_GetPropertiesSupported_m2716183656 (MultilineStringConverter_t3015808747 * __this, Il2CppObject * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
