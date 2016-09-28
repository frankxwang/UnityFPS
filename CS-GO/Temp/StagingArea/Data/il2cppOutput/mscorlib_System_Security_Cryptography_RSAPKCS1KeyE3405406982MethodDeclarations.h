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

// System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter
struct RSAPKCS1KeyExchangeDeformatter_t3405406982;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t4236534322;
// System.String
struct String_t;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2174318432;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_AsymmetricAl4236534322.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Security_Cryptography_RandomNumber2174318432.h"

// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter::.ctor()
extern "C"  void RSAPKCS1KeyExchangeDeformatter__ctor_m2716253908 (RSAPKCS1KeyExchangeDeformatter_t3405406982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void RSAPKCS1KeyExchangeDeformatter__ctor_m2275105934 (RSAPKCS1KeyExchangeDeformatter_t3405406982 * __this, AsymmetricAlgorithm_t4236534322 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter::get_Parameters()
extern "C"  String_t* RSAPKCS1KeyExchangeDeformatter_get_Parameters_m116350944 (RSAPKCS1KeyExchangeDeformatter_t3405406982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter::set_Parameters(System.String)
extern "C"  void RSAPKCS1KeyExchangeDeformatter_set_Parameters_m866337547 (RSAPKCS1KeyExchangeDeformatter_t3405406982 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter::get_RNG()
extern "C"  RandomNumberGenerator_t2174318432 * RSAPKCS1KeyExchangeDeformatter_get_RNG_m559216139 (RSAPKCS1KeyExchangeDeformatter_t3405406982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter::set_RNG(System.Security.Cryptography.RandomNumberGenerator)
extern "C"  void RSAPKCS1KeyExchangeDeformatter_set_RNG_m2229089356 (RSAPKCS1KeyExchangeDeformatter_t3405406982 * __this, RandomNumberGenerator_t2174318432 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter::DecryptKeyExchange(System.Byte[])
extern "C"  ByteU5BU5D_t58506160* RSAPKCS1KeyExchangeDeformatter_DecryptKeyExchange_m4170958030 (RSAPKCS1KeyExchangeDeformatter_t3405406982 * __this, ByteU5BU5D_t58506160* ___rgbIn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void RSAPKCS1KeyExchangeDeformatter_SetKey_m1035857735 (RSAPKCS1KeyExchangeDeformatter_t3405406982 * __this, AsymmetricAlgorithm_t4236534322 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
