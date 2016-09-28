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

// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_t555495358;
// System.Security.Cryptography.CspParameters
struct CspParameters_t4096074019;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t24372250;
// System.Object
struct Il2CppObject;
// System.IO.Stream
struct Stream_t219029575;
// System.EventArgs
struct EventArgs_t516466188;
// System.Security.Cryptography.CspKeyContainerInfo
struct CspKeyContainerInfo_t3091136489;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_CspParameter4096074019.h"
#include "mscorlib_System_Security_Cryptography_RSAParameter2711684451.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_EventArgs516466188.h"

// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor()
extern "C"  void RSACryptoServiceProvider__ctor_m8796060 (RSACryptoServiceProvider_t555495358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor(System.Security.Cryptography.CspParameters)
extern "C"  void RSACryptoServiceProvider__ctor_m32080133 (RSACryptoServiceProvider_t555495358 * __this, CspParameters_t4096074019 * ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor(System.Int32)
extern "C"  void RSACryptoServiceProvider__ctor_m4233192173 (RSACryptoServiceProvider_t555495358 * __this, int32_t ___dwKeySize0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor(System.Int32,System.Security.Cryptography.CspParameters)
extern "C"  void RSACryptoServiceProvider__ctor_m381382754 (RSACryptoServiceProvider_t555495358 * __this, int32_t ___dwKeySize0, CspParameters_t4096074019 * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.cctor()
extern "C"  void RSACryptoServiceProvider__cctor_m4085548945 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::Common(System.Int32,System.Security.Cryptography.CspParameters)
extern "C"  void RSACryptoServiceProvider_Common_m3809083019 (RSACryptoServiceProvider_t555495358 * __this, int32_t ___dwKeySize0, CspParameters_t4096074019 * ___p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::get_UseMachineKeyStore()
extern "C"  bool RSACryptoServiceProvider_get_UseMachineKeyStore_m1546723985 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::set_UseMachineKeyStore(System.Boolean)
extern "C"  void RSACryptoServiceProvider_set_UseMachineKeyStore_m1393980798 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::Finalize()
extern "C"  void RSACryptoServiceProvider_Finalize_m152924998 (RSACryptoServiceProvider_t555495358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.RSACryptoServiceProvider::get_KeyExchangeAlgorithm()
extern "C"  String_t* RSACryptoServiceProvider_get_KeyExchangeAlgorithm_m663697371 (RSACryptoServiceProvider_t555495358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.RSACryptoServiceProvider::get_KeySize()
extern "C"  int32_t RSACryptoServiceProvider_get_KeySize_m1022373229 (RSACryptoServiceProvider_t555495358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::get_PersistKeyInCsp()
extern "C"  bool RSACryptoServiceProvider_get_PersistKeyInCsp_m2637902275 (RSACryptoServiceProvider_t555495358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::set_PersistKeyInCsp(System.Boolean)
extern "C"  void RSACryptoServiceProvider_set_PersistKeyInCsp_m365585028 (RSACryptoServiceProvider_t555495358 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::get_PublicOnly()
extern "C"  bool RSACryptoServiceProvider_get_PublicOnly_m2755170020 (RSACryptoServiceProvider_t555495358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.RSACryptoServiceProvider::get_SignatureAlgorithm()
extern "C"  String_t* RSACryptoServiceProvider_get_SignatureAlgorithm_m386571845 (RSACryptoServiceProvider_t555495358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSACryptoServiceProvider::Decrypt(System.Byte[],System.Boolean)
extern "C"  ByteU5BU5D_t58506160* RSACryptoServiceProvider_Decrypt_m370331269 (RSACryptoServiceProvider_t555495358 * __this, ByteU5BU5D_t58506160* ___rgb0, bool ___fOAEP1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSACryptoServiceProvider::DecryptValue(System.Byte[])
extern "C"  ByteU5BU5D_t58506160* RSACryptoServiceProvider_DecryptValue_m3565674343 (RSACryptoServiceProvider_t555495358 * __this, ByteU5BU5D_t58506160* ___rgb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSACryptoServiceProvider::Encrypt(System.Byte[],System.Boolean)
extern "C"  ByteU5BU5D_t58506160* RSACryptoServiceProvider_Encrypt_m1072930141 (RSACryptoServiceProvider_t555495358 * __this, ByteU5BU5D_t58506160* ___rgb0, bool ___fOAEP1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSACryptoServiceProvider::EncryptValue(System.Byte[])
extern "C"  ByteU5BU5D_t58506160* RSACryptoServiceProvider_EncryptValue_m511499327 (RSACryptoServiceProvider_t555495358 * __this, ByteU5BU5D_t58506160* ___rgb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSAParameters System.Security.Cryptography.RSACryptoServiceProvider::ExportParameters(System.Boolean)
extern "C"  RSAParameters_t2711684451  RSACryptoServiceProvider_ExportParameters_m71989545 (RSACryptoServiceProvider_t555495358 * __this, bool ___includePrivateParameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::ImportParameters(System.Security.Cryptography.RSAParameters)
extern "C"  void RSACryptoServiceProvider_ImportParameters_m3023964864 (RSACryptoServiceProvider_t555495358 * __this, RSAParameters_t2711684451  ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.RSACryptoServiceProvider::GetHash(System.Object)
extern "C"  HashAlgorithm_t24372250 * RSACryptoServiceProvider_GetHash_m3984392729 (RSACryptoServiceProvider_t555495358 * __this, Il2CppObject * ___halg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSACryptoServiceProvider::SignData(System.Byte[],System.Object)
extern "C"  ByteU5BU5D_t58506160* RSACryptoServiceProvider_SignData_m1254401842 (RSACryptoServiceProvider_t555495358 * __this, ByteU5BU5D_t58506160* ___buffer0, Il2CppObject * ___halg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSACryptoServiceProvider::SignData(System.IO.Stream,System.Object)
extern "C"  ByteU5BU5D_t58506160* RSACryptoServiceProvider_SignData_m4094880490 (RSACryptoServiceProvider_t555495358 * __this, Stream_t219029575 * ___inputStream0, Il2CppObject * ___halg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSACryptoServiceProvider::SignData(System.Byte[],System.Int32,System.Int32,System.Object)
extern "C"  ByteU5BU5D_t58506160* RSACryptoServiceProvider_SignData_m4145356690 (RSACryptoServiceProvider_t555495358 * __this, ByteU5BU5D_t58506160* ___buffer0, int32_t ___offset1, int32_t ___count2, Il2CppObject * ___halg3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.RSACryptoServiceProvider::GetHashNameFromOID(System.String)
extern "C"  String_t* RSACryptoServiceProvider_GetHashNameFromOID_m61107276 (RSACryptoServiceProvider_t555495358 * __this, String_t* ___oid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSACryptoServiceProvider::SignHash(System.Byte[],System.String)
extern "C"  ByteU5BU5D_t58506160* RSACryptoServiceProvider_SignHash_m615931324 (RSACryptoServiceProvider_t555495358 * __this, ByteU5BU5D_t58506160* ___rgbHash0, String_t* ___str1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::VerifyData(System.Byte[],System.Object,System.Byte[])
extern "C"  bool RSACryptoServiceProvider_VerifyData_m905820177 (RSACryptoServiceProvider_t555495358 * __this, ByteU5BU5D_t58506160* ___buffer0, Il2CppObject * ___halg1, ByteU5BU5D_t58506160* ___signature2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::VerifyHash(System.Byte[],System.String,System.Byte[])
extern "C"  bool RSACryptoServiceProvider_VerifyHash_m3288347931 (RSACryptoServiceProvider_t555495358 * __this, ByteU5BU5D_t58506160* ___rgbHash0, String_t* ___str1, ByteU5BU5D_t58506160* ___rgbSignature2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::Dispose(System.Boolean)
extern "C"  void RSACryptoServiceProvider_Dispose_m4161630864 (RSACryptoServiceProvider_t555495358 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::OnKeyGenerated(System.Object,System.EventArgs)
extern "C"  void RSACryptoServiceProvider_OnKeyGenerated_m4166429105 (RSACryptoServiceProvider_t555495358 * __this, Il2CppObject * ___sender0, EventArgs_t516466188 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CspKeyContainerInfo System.Security.Cryptography.RSACryptoServiceProvider::get_CspKeyContainerInfo()
extern "C"  CspKeyContainerInfo_t3091136489 * RSACryptoServiceProvider_get_CspKeyContainerInfo_m1028848207 (RSACryptoServiceProvider_t555495358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSACryptoServiceProvider::ExportCspBlob(System.Boolean)
extern "C"  ByteU5BU5D_t58506160* RSACryptoServiceProvider_ExportCspBlob_m3223942340 (RSACryptoServiceProvider_t555495358 * __this, bool ___includePrivateParameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::ImportCspBlob(System.Byte[])
extern "C"  void RSACryptoServiceProvider_ImportCspBlob_m2297575671 (RSACryptoServiceProvider_t555495358 * __this, ByteU5BU5D_t58506160* ___keyBlob0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
