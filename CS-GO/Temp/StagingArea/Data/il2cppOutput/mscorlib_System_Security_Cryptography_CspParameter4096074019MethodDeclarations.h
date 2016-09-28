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

// System.Security.Cryptography.CspParameters
struct CspParameters_t4096074019;
// System.String
struct String_t;
// System.Security.AccessControl.CryptoKeySecurity
struct CryptoKeySecurity_t3720399244;
// System.Security.SecureString
struct SecureString_t4183656205;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Security_AccessControl_CryptoKeySe3720399244.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Security_SecureString4183656205.h"
#include "mscorlib_System_Security_Cryptography_CspProviderF3172895311.h"

// System.Void System.Security.Cryptography.CspParameters::.ctor()
extern "C"  void CspParameters__ctor_m3804826267 (CspParameters_t4096074019 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CspParameters::.ctor(System.Int32)
extern "C"  void CspParameters__ctor_m2607591276 (CspParameters_t4096074019 * __this, int32_t ___dwTypeIn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CspParameters::.ctor(System.Int32,System.String)
extern "C"  void CspParameters__ctor_m622357160 (CspParameters_t4096074019 * __this, int32_t ___dwTypeIn0, String_t* ___strProviderNameIn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CspParameters::.ctor(System.Int32,System.String,System.String)
extern "C"  void CspParameters__ctor_m1032703204 (CspParameters_t4096074019 * __this, int32_t ___dwTypeIn0, String_t* ___strProviderNameIn1, String_t* ___strContainerNameIn2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CspParameters::.ctor(System.Int32,System.String,System.String,System.Security.AccessControl.CryptoKeySecurity,System.IntPtr)
extern "C"  void CspParameters__ctor_m3454860164 (CspParameters_t4096074019 * __this, int32_t ___providerType0, String_t* ___providerName1, String_t* ___keyContainerName2, CryptoKeySecurity_t3720399244 * ___cryptoKeySecurity3, IntPtr_t ___parentWindowHandle4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CspParameters::.ctor(System.Int32,System.String,System.String,System.Security.AccessControl.CryptoKeySecurity,System.Security.SecureString)
extern "C"  void CspParameters__ctor_m3928950073 (CspParameters_t4096074019 * __this, int32_t ___providerType0, String_t* ___providerName1, String_t* ___keyContainerName2, CryptoKeySecurity_t3720399244 * ___cryptoKeySecurity3, SecureString_t4183656205 * ___keyPassword4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CspProviderFlags System.Security.Cryptography.CspParameters::get_Flags()
extern "C"  int32_t CspParameters_get_Flags_m85401037 (CspParameters_t4096074019 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CspParameters::set_Flags(System.Security.Cryptography.CspProviderFlags)
extern "C"  void CspParameters_set_Flags_m3780635110 (CspParameters_t4096074019 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.AccessControl.CryptoKeySecurity System.Security.Cryptography.CspParameters::get_CryptoKeySecurity()
extern "C"  CryptoKeySecurity_t3720399244 * CspParameters_get_CryptoKeySecurity_m308349813 (CspParameters_t4096074019 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CspParameters::set_CryptoKeySecurity(System.Security.AccessControl.CryptoKeySecurity)
extern "C"  void CspParameters_set_CryptoKeySecurity_m2900961662 (CspParameters_t4096074019 * __this, CryptoKeySecurity_t3720399244 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecureString System.Security.Cryptography.CspParameters::get_KeyPassword()
extern "C"  SecureString_t4183656205 * CspParameters_get_KeyPassword_m1498753398 (CspParameters_t4096074019 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CspParameters::set_KeyPassword(System.Security.SecureString)
extern "C"  void CspParameters_set_KeyPassword_m2158672287 (CspParameters_t4096074019 * __this, SecureString_t4183656205 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Security.Cryptography.CspParameters::get_ParentWindowHandle()
extern "C"  IntPtr_t CspParameters_get_ParentWindowHandle_m3427531977 (CspParameters_t4096074019 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CspParameters::set_ParentWindowHandle(System.IntPtr)
extern "C"  void CspParameters_set_ParentWindowHandle_m329992396 (CspParameters_t4096074019 * __this, IntPtr_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
