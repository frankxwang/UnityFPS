﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.Aes
struct Aes_t1557549544;
// System.Security.Cryptography.HMACSHA256
struct HMACSHA256_t1949798951;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.EncryptorManaged.CryptoBase
struct  CryptoBase_t3226262557  : public Il2CppObject
{
public:
	// System.Security.Cryptography.Aes ExitGames.Client.Photon.EncryptorManaged.CryptoBase::encryptor
	Aes_t1557549544 * ___encryptor_3;
	// System.Security.Cryptography.HMACSHA256 ExitGames.Client.Photon.EncryptorManaged.CryptoBase::hmacsha256
	HMACSHA256_t1949798951 * ___hmacsha256_4;

public:
	inline static int32_t get_offset_of_encryptor_3() { return static_cast<int32_t>(offsetof(CryptoBase_t3226262557, ___encryptor_3)); }
	inline Aes_t1557549544 * get_encryptor_3() const { return ___encryptor_3; }
	inline Aes_t1557549544 ** get_address_of_encryptor_3() { return &___encryptor_3; }
	inline void set_encryptor_3(Aes_t1557549544 * value)
	{
		___encryptor_3 = value;
		Il2CppCodeGenWriteBarrier(&___encryptor_3, value);
	}

	inline static int32_t get_offset_of_hmacsha256_4() { return static_cast<int32_t>(offsetof(CryptoBase_t3226262557, ___hmacsha256_4)); }
	inline HMACSHA256_t1949798951 * get_hmacsha256_4() const { return ___hmacsha256_4; }
	inline HMACSHA256_t1949798951 ** get_address_of_hmacsha256_4() { return &___hmacsha256_4; }
	inline void set_hmacsha256_4(HMACSHA256_t1949798951 * value)
	{
		___hmacsha256_4 = value;
		Il2CppCodeGenWriteBarrier(&___hmacsha256_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
