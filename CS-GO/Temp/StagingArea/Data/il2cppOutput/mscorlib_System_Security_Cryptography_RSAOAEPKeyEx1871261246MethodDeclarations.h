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

// System.Security.Cryptography.RSAOAEPKeyExchangeFormatter
struct RSAOAEPKeyExchangeFormatter_t1871261246;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t4236534322;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.String
struct String_t;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2174318432;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_AsymmetricAl4236534322.h"
#include "mscorlib_System_Security_Cryptography_RandomNumber2174318432.h"
#include "mscorlib_System_Type2779229935.h"

// System.Void System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::.ctor()
extern "C"  void RSAOAEPKeyExchangeFormatter__ctor_m902795360 (RSAOAEPKeyExchangeFormatter_t1871261246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void RSAOAEPKeyExchangeFormatter__ctor_m3246286362 (RSAOAEPKeyExchangeFormatter_t1871261246 * __this, AsymmetricAlgorithm_t4236534322 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::get_Parameter()
extern "C"  ByteU5BU5D_t58506160* RSAOAEPKeyExchangeFormatter_get_Parameter_m2398598420 (RSAOAEPKeyExchangeFormatter_t1871261246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::set_Parameter(System.Byte[])
extern "C"  void RSAOAEPKeyExchangeFormatter_set_Parameter_m1917760127 (RSAOAEPKeyExchangeFormatter_t1871261246 * __this, ByteU5BU5D_t58506160* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::get_Parameters()
extern "C"  String_t* RSAOAEPKeyExchangeFormatter_get_Parameters_m3694947066 (RSAOAEPKeyExchangeFormatter_t1871261246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::get_Rng()
extern "C"  RandomNumberGenerator_t2174318432 * RSAOAEPKeyExchangeFormatter_get_Rng_m2530559177 (RSAOAEPKeyExchangeFormatter_t1871261246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::set_Rng(System.Security.Cryptography.RandomNumberGenerator)
extern "C"  void RSAOAEPKeyExchangeFormatter_set_Rng_m2257492952 (RSAOAEPKeyExchangeFormatter_t1871261246 * __this, RandomNumberGenerator_t2174318432 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::CreateKeyExchange(System.Byte[])
extern "C"  ByteU5BU5D_t58506160* RSAOAEPKeyExchangeFormatter_CreateKeyExchange_m3844667119 (RSAOAEPKeyExchangeFormatter_t1871261246 * __this, ByteU5BU5D_t58506160* ___rgbData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::CreateKeyExchange(System.Byte[],System.Type)
extern "C"  ByteU5BU5D_t58506160* RSAOAEPKeyExchangeFormatter_CreateKeyExchange_m1764399010 (RSAOAEPKeyExchangeFormatter_t1871261246 * __this, ByteU5BU5D_t58506160* ___rgbData0, Type_t * ___symAlgType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void RSAOAEPKeyExchangeFormatter_SetKey_m1077679931 (RSAOAEPKeyExchangeFormatter_t1871261246 * __this, AsymmetricAlgorithm_t4236534322 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
