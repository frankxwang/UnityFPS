#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "Photon3Unity3D_ExitGames_Client_Photon_EncryptorMa3226262557.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.EncryptorManaged.Decryptor
struct  Decryptor_t1555576027  : public CryptoBase_t3226262557
{
public:
	// System.Byte[] ExitGames.Client.Photon.EncryptorManaged.Decryptor::IV
	ByteU5BU5D_t58506160* ___IV_5;
	// System.Byte[] ExitGames.Client.Photon.EncryptorManaged.Decryptor::readBuffer
	ByteU5BU5D_t58506160* ___readBuffer_6;

public:
	inline static int32_t get_offset_of_IV_5() { return static_cast<int32_t>(offsetof(Decryptor_t1555576027, ___IV_5)); }
	inline ByteU5BU5D_t58506160* get_IV_5() const { return ___IV_5; }
	inline ByteU5BU5D_t58506160** get_address_of_IV_5() { return &___IV_5; }
	inline void set_IV_5(ByteU5BU5D_t58506160* value)
	{
		___IV_5 = value;
		Il2CppCodeGenWriteBarrier(&___IV_5, value);
	}

	inline static int32_t get_offset_of_readBuffer_6() { return static_cast<int32_t>(offsetof(Decryptor_t1555576027, ___readBuffer_6)); }
	inline ByteU5BU5D_t58506160* get_readBuffer_6() const { return ___readBuffer_6; }
	inline ByteU5BU5D_t58506160** get_address_of_readBuffer_6() { return &___readBuffer_6; }
	inline void set_readBuffer_6(ByteU5BU5D_t58506160* value)
	{
		___readBuffer_6 = value;
		Il2CppCodeGenWriteBarrier(&___readBuffer_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
