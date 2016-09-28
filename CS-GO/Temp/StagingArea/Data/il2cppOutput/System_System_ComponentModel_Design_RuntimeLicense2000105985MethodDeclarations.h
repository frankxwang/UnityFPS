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

// System.ComponentModel.Design.RuntimeLicenseContext
struct RuntimeLicenseContext_t2000105985;
// System.Collections.Hashtable
struct Hashtable_t3875263730;
// System.Reflection.Assembly
struct Assembly_t1882292308;
// System.String
struct String_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Hashtable3875263730.h"
#include "mscorlib_System_Reflection_Assembly1882292308.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.ComponentModel.Design.RuntimeLicenseContext::.ctor()
extern "C"  void RuntimeLicenseContext__ctor_m3230885187 (RuntimeLicenseContext_t2000105985 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Design.RuntimeLicenseContext::LoadKeys()
extern "C"  void RuntimeLicenseContext_LoadKeys_m2579443995 (RuntimeLicenseContext_t2000105985 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Design.RuntimeLicenseContext::LoadAssemblyLicenses(System.Collections.Hashtable,System.Reflection.Assembly)
extern "C"  void RuntimeLicenseContext_LoadAssemblyLicenses_m1204860229 (RuntimeLicenseContext_t2000105985 * __this, Hashtable_t3875263730 * ___targetkeys0, Assembly_t1882292308 * ___asm1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.Design.RuntimeLicenseContext::GetSavedLicenseKey(System.Type,System.Reflection.Assembly)
extern "C"  String_t* RuntimeLicenseContext_GetSavedLicenseKey_m3157451094 (RuntimeLicenseContext_t2000105985 * __this, Type_t * ___type0, Assembly_t1882292308 * ___resourceAssembly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Design.RuntimeLicenseContext::SetSavedLicenseKey(System.Type,System.String)
extern "C"  void RuntimeLicenseContext_SetSavedLicenseKey_m1657342481 (RuntimeLicenseContext_t2000105985 * __this, Type_t * ___type0, String_t* ___key1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
