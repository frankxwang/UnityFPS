#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.ComponentModel.TypeConverter
struct TypeConverter_t3398830607;
// System.Collections.Hashtable
struct Hashtable_t3875263730;

#include "System_System_ComponentModel_MemberDescriptor1680589938.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptor
struct  PropertyDescriptor_t3995075053  : public MemberDescriptor_t1680589938
{
public:
	// System.ComponentModel.TypeConverter System.ComponentModel.PropertyDescriptor::converter
	TypeConverter_t3398830607 * ___converter_4;
	// System.Collections.Hashtable System.ComponentModel.PropertyDescriptor::notifiers
	Hashtable_t3875263730 * ___notifiers_5;

public:
	inline static int32_t get_offset_of_converter_4() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t3995075053, ___converter_4)); }
	inline TypeConverter_t3398830607 * get_converter_4() const { return ___converter_4; }
	inline TypeConverter_t3398830607 ** get_address_of_converter_4() { return &___converter_4; }
	inline void set_converter_4(TypeConverter_t3398830607 * value)
	{
		___converter_4 = value;
		Il2CppCodeGenWriteBarrier(&___converter_4, value);
	}

	inline static int32_t get_offset_of_notifiers_5() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t3995075053, ___notifiers_5)); }
	inline Hashtable_t3875263730 * get_notifiers_5() const { return ___notifiers_5; }
	inline Hashtable_t3875263730 ** get_address_of_notifiers_5() { return &___notifiers_5; }
	inline void set_notifiers_5(Hashtable_t3875263730 * value)
	{
		___notifiers_5 = value;
		Il2CppCodeGenWriteBarrier(&___notifiers_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
