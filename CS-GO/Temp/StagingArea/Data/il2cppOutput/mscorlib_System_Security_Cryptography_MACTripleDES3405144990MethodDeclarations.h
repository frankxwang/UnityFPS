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

// System.Security.Cryptography.MACTripleDES
struct MACTripleDES_t3405144990;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Security_Cryptography_PaddingMode1724215917.h"

// System.Void System.Security.Cryptography.MACTripleDES::.ctor()
extern "C"  void MACTripleDES__ctor_m1156967612 (MACTripleDES_t3405144990 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MACTripleDES::.ctor(System.Byte[])
extern "C"  void MACTripleDES__ctor_m3785598093 (MACTripleDES_t3405144990 * __this, ByteU5BU5D_t58506160* ___rgbKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MACTripleDES::.ctor(System.String,System.Byte[])
extern "C"  void MACTripleDES__ctor_m4284463689 (MACTripleDES_t3405144990 * __this, String_t* ___strTripleDES0, ByteU5BU5D_t58506160* ___rgbKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MACTripleDES::Setup(System.String,System.Byte[])
extern "C"  void MACTripleDES_Setup_m1287775502 (MACTripleDES_t3405144990 * __this, String_t* ___strTripleDES0, ByteU5BU5D_t58506160* ___rgbKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MACTripleDES::Finalize()
extern "C"  void MACTripleDES_Finalize_m212085286 (MACTripleDES_t3405144990 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.PaddingMode System.Security.Cryptography.MACTripleDES::get_Padding()
extern "C"  int32_t MACTripleDES_get_Padding_m1726176108 (MACTripleDES_t3405144990 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MACTripleDES::set_Padding(System.Security.Cryptography.PaddingMode)
extern "C"  void MACTripleDES_set_Padding_m901270573 (MACTripleDES_t3405144990 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MACTripleDES::Dispose(System.Boolean)
extern "C"  void MACTripleDES_Dispose_m2913920944 (MACTripleDES_t3405144990 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MACTripleDES::Initialize()
extern "C"  void MACTripleDES_Initialize_m3105423192 (MACTripleDES_t3405144990 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MACTripleDES::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C"  void MACTripleDES_HashCore_m670642740 (MACTripleDES_t3405144990 * __this, ByteU5BU5D_t58506160* ___rgbData0, int32_t ___ibStart1, int32_t ___cbSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.MACTripleDES::HashFinal()
extern "C"  ByteU5BU5D_t58506160* MACTripleDES_HashFinal_m3628572044 (MACTripleDES_t3405144990 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
