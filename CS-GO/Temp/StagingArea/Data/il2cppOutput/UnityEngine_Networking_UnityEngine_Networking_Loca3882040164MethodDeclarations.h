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


#include "codegen/il2cpp-codegen.h"


// Methods for marshaling
struct InternalMsg_t3882040164;
struct InternalMsg_t3882040164_marshaled_pinvoke;

extern "C" void InternalMsg_t3882040164_marshal_pinvoke(const InternalMsg_t3882040164& unmarshaled, InternalMsg_t3882040164_marshaled_pinvoke& marshaled);
extern "C" void InternalMsg_t3882040164_marshal_pinvoke_back(const InternalMsg_t3882040164_marshaled_pinvoke& marshaled, InternalMsg_t3882040164& unmarshaled);
extern "C" void InternalMsg_t3882040164_marshal_pinvoke_cleanup(InternalMsg_t3882040164_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct InternalMsg_t3882040164;
struct InternalMsg_t3882040164_marshaled_com;

extern "C" void InternalMsg_t3882040164_marshal_com(const InternalMsg_t3882040164& unmarshaled, InternalMsg_t3882040164_marshaled_com& marshaled);
extern "C" void InternalMsg_t3882040164_marshal_com_back(const InternalMsg_t3882040164_marshaled_com& marshaled, InternalMsg_t3882040164& unmarshaled);
extern "C" void InternalMsg_t3882040164_marshal_com_cleanup(InternalMsg_t3882040164_marshaled_com& marshaled);
