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

// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct RSAPKCS1KeyExchangeFormatter_t3800217447;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t4236534322;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2174318432;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_AsymmetricAl4236534322.h"
#include "mscorlib_System_Security_Cryptography_RandomNumber2174318432.h"
#include "mscorlib_System_Type2779229935.h"

// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::.ctor()
extern "C"  void RSAPKCS1KeyExchangeFormatter__ctor_m3374518035 (RSAPKCS1KeyExchangeFormatter_t3800217447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void RSAPKCS1KeyExchangeFormatter__ctor_m2849280717 (RSAPKCS1KeyExchangeFormatter_t3800217447 * __this, AsymmetricAlgorithm_t4236534322 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::get_Rng()
extern "C"  RandomNumberGenerator_t2174318432 * RSAPKCS1KeyExchangeFormatter_get_Rng_m4113608778 (RSAPKCS1KeyExchangeFormatter_t3800217447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::set_Rng(System.Security.Cryptography.RandomNumberGenerator)
extern "C"  void RSAPKCS1KeyExchangeFormatter_set_Rng_m3385407243 (RSAPKCS1KeyExchangeFormatter_t3800217447 * __this, RandomNumberGenerator_t2174318432 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::get_Parameters()
extern "C"  String_t* RSAPKCS1KeyExchangeFormatter_get_Parameters_m1618411969 (RSAPKCS1KeyExchangeFormatter_t3800217447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::CreateKeyExchange(System.Byte[])
extern "C"  ByteU5BU5D_t58506160* RSAPKCS1KeyExchangeFormatter_CreateKeyExchange_m473400456 (RSAPKCS1KeyExchangeFormatter_t3800217447 * __this, ByteU5BU5D_t58506160* ___rgbData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::CreateKeyExchange(System.Byte[],System.Type)
extern "C"  ByteU5BU5D_t58506160* RSAPKCS1KeyExchangeFormatter_CreateKeyExchange_m840730555 (RSAPKCS1KeyExchangeFormatter_t3800217447 * __this, ByteU5BU5D_t58506160* ___rgbData0, Type_t * ___symAlgType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::SetRSAKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void RSAPKCS1KeyExchangeFormatter_SetRSAKey_m2782488748 (RSAPKCS1KeyExchangeFormatter_t3800217447 * __this, AsymmetricAlgorithm_t4236534322 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void RSAPKCS1KeyExchangeFormatter_SetKey_m1655406824 (RSAPKCS1KeyExchangeFormatter_t3800217447 * __this, AsymmetricAlgorithm_t4236534322 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
