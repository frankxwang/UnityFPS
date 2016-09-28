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

// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Security.Cryptography.RSA
struct RSA_t1557565273;
// System.Security.Cryptography.DSA
struct DSA_t1557551819;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_RSA1557565273.h"
#include "mscorlib_System_Security_Cryptography_DSA1557551819.h"

// System.Int32 Mono.Security.Cryptography.CryptoConvert::ToInt32LE(System.Byte[],System.Int32)
extern "C"  int32_t CryptoConvert_ToInt32LE_m2023521787 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___bytes0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Security.Cryptography.CryptoConvert::ToUInt32LE(System.Byte[],System.Int32)
extern "C"  uint32_t CryptoConvert_ToUInt32LE_m558101659 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___bytes0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::GetBytesLE(System.Int32)
extern "C"  ByteU5BU5D_t58506160* CryptoConvert_GetBytesLE_m62772046 (Il2CppObject * __this /* static, unused */, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::Trim(System.Byte[])
extern "C"  ByteU5BU5D_t58506160* CryptoConvert_Trim_m4105167672 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPrivateKeyBlob(System.Byte[],System.Int32)
extern "C"  RSA_t1557565273 * CryptoConvert_FromCapiPrivateKeyBlob_m1079413163 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___blob0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.CryptoConvert::FromCapiPrivateKeyBlobDSA(System.Byte[],System.Int32)
extern "C"  DSA_t1557551819 * CryptoConvert_FromCapiPrivateKeyBlobDSA_m2327170487 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___blob0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPrivateKeyBlob(System.Security.Cryptography.RSA)
extern "C"  ByteU5BU5D_t58506160* CryptoConvert_ToCapiPrivateKeyBlob_m1139689325 (Il2CppObject * __this /* static, unused */, RSA_t1557565273 * ___rsa0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPrivateKeyBlob(System.Security.Cryptography.DSA)
extern "C"  ByteU5BU5D_t58506160* CryptoConvert_ToCapiPrivateKeyBlob_m1139272251 (Il2CppObject * __this /* static, unused */, DSA_t1557551819 * ___dsa0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPublicKeyBlob(System.Byte[])
extern "C"  RSA_t1557565273 * CryptoConvert_FromCapiPublicKeyBlob_m2773702008 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___blob0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPublicKeyBlob(System.Byte[],System.Int32)
extern "C"  RSA_t1557565273 * CryptoConvert_FromCapiPublicKeyBlob_m1285057119 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___blob0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.CryptoConvert::FromCapiPublicKeyBlobDSA(System.Byte[],System.Int32)
extern "C"  DSA_t1557551819 * CryptoConvert_FromCapiPublicKeyBlobDSA_m3130172255 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___blob0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPublicKeyBlob(System.Security.Cryptography.RSA)
extern "C"  ByteU5BU5D_t58506160* CryptoConvert_ToCapiPublicKeyBlob_m4141543943 (Il2CppObject * __this /* static, unused */, RSA_t1557565273 * ___rsa0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPublicKeyBlob(System.Security.Cryptography.DSA)
extern "C"  ByteU5BU5D_t58506160* CryptoConvert_ToCapiPublicKeyBlob_m4141126869 (Il2CppObject * __this /* static, unused */, DSA_t1557551819 * ___dsa0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiKeyBlob(System.Byte[])
extern "C"  RSA_t1557565273 * CryptoConvert_FromCapiKeyBlob_m3062702575 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___blob0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiKeyBlob(System.Byte[],System.Int32)
extern "C"  RSA_t1557565273 * CryptoConvert_FromCapiKeyBlob_m2059589448 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___blob0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.CryptoConvert::FromCapiKeyBlobDSA(System.Byte[])
extern "C"  DSA_t1557551819 * CryptoConvert_FromCapiKeyBlobDSA_m2415584801 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___blob0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.CryptoConvert::FromCapiKeyBlobDSA(System.Byte[],System.Int32)
extern "C"  DSA_t1557551819 * CryptoConvert_FromCapiKeyBlobDSA_m103085142 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___blob0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiKeyBlob(System.Security.Cryptography.RSA,System.Boolean)
extern "C"  ByteU5BU5D_t58506160* CryptoConvert_ToCapiKeyBlob_m2611438349 (Il2CppObject * __this /* static, unused */, RSA_t1557565273 * ___rsa0, bool ___includePrivateKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
