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

// System.Security.Cryptography.AsymmetricSignatureFormatter
struct AsymmetricSignatureFormatter_t77133537;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t24372250;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_HashAlgorithm24372250.h"

// System.Void System.Security.Cryptography.AsymmetricSignatureFormatter::.ctor()
extern "C"  void AsymmetricSignatureFormatter__ctor_m497260761 (AsymmetricSignatureFormatter_t77133537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.AsymmetricSignatureFormatter::CreateSignature(System.Security.Cryptography.HashAlgorithm)
extern "C"  ByteU5BU5D_t58506160* AsymmetricSignatureFormatter_CreateSignature_m1459603535 (AsymmetricSignatureFormatter_t77133537 * __this, HashAlgorithm_t24372250 * ___hash0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
