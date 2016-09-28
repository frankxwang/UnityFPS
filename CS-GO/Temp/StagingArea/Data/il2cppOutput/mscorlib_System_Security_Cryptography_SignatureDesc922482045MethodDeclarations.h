﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Security.Cryptography.SignatureDescription
struct SignatureDescription_t922482045;
// System.Security.SecurityElement
struct SecurityElement_t2475331585;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricSignatureDeformatter
struct AsymmetricSignatureDeformatter_t3229527040;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t4236534322;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t24372250;
// System.Security.Cryptography.AsymmetricSignatureFormatter
struct AsymmetricSignatureFormatter_t77133537;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_SecurityElement2475331585.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Security_Cryptography_AsymmetricAl4236534322.h"

// System.Void System.Security.Cryptography.SignatureDescription::.ctor()
extern "C"  void SignatureDescription__ctor_m565127101 (SignatureDescription_t922482045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SignatureDescription::.ctor(System.Security.SecurityElement)
extern "C"  void SignatureDescription__ctor_m800044040 (SignatureDescription_t922482045 * __this, SecurityElement_t2475331585 * ___el0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.SignatureDescription::get_DeformatterAlgorithm()
extern "C"  String_t* SignatureDescription_get_DeformatterAlgorithm_m1913649779 (SignatureDescription_t922482045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SignatureDescription::set_DeformatterAlgorithm(System.String)
extern "C"  void SignatureDescription_set_DeformatterAlgorithm_m1987350616 (SignatureDescription_t922482045 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.SignatureDescription::get_DigestAlgorithm()
extern "C"  String_t* SignatureDescription_get_DigestAlgorithm_m736228320 (SignatureDescription_t922482045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SignatureDescription::set_DigestAlgorithm(System.String)
extern "C"  void SignatureDescription_set_DigestAlgorithm_m1782853785 (SignatureDescription_t922482045 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.SignatureDescription::get_FormatterAlgorithm()
extern "C"  String_t* SignatureDescription_get_FormatterAlgorithm_m2581840754 (SignatureDescription_t922482045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SignatureDescription::set_FormatterAlgorithm(System.String)
extern "C"  void SignatureDescription_set_FormatterAlgorithm_m2575614969 (SignatureDescription_t922482045 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.SignatureDescription::get_KeyAlgorithm()
extern "C"  String_t* SignatureDescription_get_KeyAlgorithm_m3825276861 (SignatureDescription_t922482045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SignatureDescription::set_KeyAlgorithm(System.String)
extern "C"  void SignatureDescription_set_KeyAlgorithm_m2741949518 (SignatureDescription_t922482045 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricSignatureDeformatter System.Security.Cryptography.SignatureDescription::CreateDeformatter(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  AsymmetricSignatureDeformatter_t3229527040 * SignatureDescription_CreateDeformatter_m1320594587 (SignatureDescription_t922482045 * __this, AsymmetricAlgorithm_t4236534322 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.SignatureDescription::CreateDigest()
extern "C"  HashAlgorithm_t24372250 * SignatureDescription_CreateDigest_m2503050506 (SignatureDescription_t922482045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricSignatureFormatter System.Security.Cryptography.SignatureDescription::CreateFormatter(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  AsymmetricSignatureFormatter_t77133537 * SignatureDescription_CreateFormatter_m2851868539 (SignatureDescription_t922482045 * __this, AsymmetricAlgorithm_t4236534322 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
