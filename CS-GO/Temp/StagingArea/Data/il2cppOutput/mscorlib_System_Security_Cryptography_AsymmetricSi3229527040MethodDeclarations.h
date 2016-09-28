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

// System.Security.Cryptography.AsymmetricSignatureDeformatter
struct AsymmetricSignatureDeformatter_t3229527040;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t24372250;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_HashAlgorithm24372250.h"

// System.Void System.Security.Cryptography.AsymmetricSignatureDeformatter::.ctor()
extern "C"  void AsymmetricSignatureDeformatter__ctor_m3630952218 (AsymmetricSignatureDeformatter_t3229527040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.AsymmetricSignatureDeformatter::VerifySignature(System.Security.Cryptography.HashAlgorithm,System.Byte[])
extern "C"  bool AsymmetricSignatureDeformatter_VerifySignature_m2495966798 (AsymmetricSignatureDeformatter_t3229527040 * __this, HashAlgorithm_t24372250 * ___hash0, ByteU5BU5D_t58506160* ___rgbSignature1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
