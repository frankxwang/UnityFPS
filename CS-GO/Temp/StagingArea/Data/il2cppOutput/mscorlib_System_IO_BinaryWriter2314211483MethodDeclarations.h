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

// System.IO.BinaryWriter
struct BinaryWriter_t2314211483;
// System.IO.Stream
struct Stream_t219029575;
// System.Text.Encoding
struct Encoding_t180559927;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "mscorlib_System_Text_Encoding180559927.h"

// System.Void System.IO.BinaryWriter::.ctor()
extern "C"  void BinaryWriter__ctor_m3320479349 (BinaryWriter_t2314211483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
extern "C"  void BinaryWriter__ctor_m3820043020 (BinaryWriter_t2314211483 * __this, Stream_t219029575 * ___output0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C"  void BinaryWriter__ctor_m3271046021 (BinaryWriter_t2314211483 * __this, Stream_t219029575 * ___output0, Encoding_t180559927 * ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::.cctor()
extern "C"  void BinaryWriter__cctor_m3668515800 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::System.IDisposable.Dispose()
extern "C"  void BinaryWriter_System_IDisposable_Dispose_m3902299210 (BinaryWriter_t2314211483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Dispose(System.Boolean)
extern "C"  void BinaryWriter_Dispose_m1210247017 (BinaryWriter_t2314211483 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Byte[])
extern "C"  void BinaryWriter_Write_m942985559 (BinaryWriter_t2314211483 * __this, ByteU5BU5D_t58506160* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
