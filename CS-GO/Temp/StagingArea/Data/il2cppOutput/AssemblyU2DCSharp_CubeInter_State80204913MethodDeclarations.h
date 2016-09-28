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
struct State_t80204913;
struct State_t80204913_marshaled_pinvoke;

extern "C" void State_t80204913_marshal_pinvoke(const State_t80204913& unmarshaled, State_t80204913_marshaled_pinvoke& marshaled);
extern "C" void State_t80204913_marshal_pinvoke_back(const State_t80204913_marshaled_pinvoke& marshaled, State_t80204913& unmarshaled);
extern "C" void State_t80204913_marshal_pinvoke_cleanup(State_t80204913_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct State_t80204913;
struct State_t80204913_marshaled_com;

extern "C" void State_t80204913_marshal_com(const State_t80204913& unmarshaled, State_t80204913_marshaled_com& marshaled);
extern "C" void State_t80204913_marshal_com_back(const State_t80204913_marshaled_com& marshaled, State_t80204913& unmarshaled);
extern "C" void State_t80204913_marshal_com_cleanup(State_t80204913_marshaled_com& marshaled);
