/* Created by "go tool cgo" - DO NOT EDIT. */

/* package registry_dll */


#line 1 "cgo-builtin-prolog"

#include <stddef.h> /* for ptrdiff_t below */

#ifndef GO_CGO_EXPORT_PROLOGUE_H
#define GO_CGO_EXPORT_PROLOGUE_H

typedef struct { const char *p; ptrdiff_t n; } _GoString_;

#endif

/* Start of preamble from import "C" comments.  */




/* End of preamble from import "C" comments.  */


/* Start of boilerplate cgo prologue.  */
#line 1 "cgo-gcc-export-header-prolog"

#ifndef GO_CGO_PROLOGUE_H
#define GO_CGO_PROLOGUE_H

typedef signed char GoInt8;
typedef unsigned char GoUint8;
typedef short GoInt16;
typedef unsigned short GoUint16;
typedef int GoInt32;
typedef unsigned int GoUint32;
typedef long long GoInt64;
typedef unsigned long long GoUint64;
typedef GoInt32 GoInt;
typedef GoUint32 GoUint;
typedef __SIZE_TYPE__ GoUintptr;
typedef float GoFloat32;
typedef double GoFloat64;
typedef float _Complex GoComplex64;
typedef double _Complex GoComplex128;

/*
  static assertion to make sure the file is being used on architecture
  at least with matching size of GoInt.
*/
typedef char _check_for_32_bit_pointer_matching_GoInt[sizeof(void*)==32/8 ? 1:-1];

typedef _GoString_ GoString;
typedef void *GoMap;
typedef void *GoChan;
typedef struct { void *t; void *v; } GoInterface;
typedef struct { void *data; GoInt len; GoInt cap; } GoSlice;

#endif

/* End of boilerplate cgo prologue.  */

#ifdef __cplusplus
extern "C" {
#endif


extern char* RegKeyExists(char* p0, char* p1, char* p2);

extern char* RegQueryStringValue(char* p0, char* p1, char* p2);

extern char* RegQueryStringValueAndExpand(char* p0, char* p1, char* p2);

extern char* RegQueryBinaryValue(char* p0, char* p1, char* p2);

extern char* RegQueryIntegerValue(char* p0, char* p1, char* p2);

extern void RegWriteStringValue(char* p0, char* p1, char* p2, char* p3);

extern void RegWriteExpandStringValue(char* p0, char* p1, char* p2, char* p3);

extern void RegWriteBinaryValue(char* p0, char* p1, char* p2, char* p3);

extern void RegWriteDwordValue(char* p0, char* p1, char* p2, char* p3);

extern void RegWriteQwordValue(char* p0, char* p1, char* p2, char* p3);

extern void RegDeleteKey(char* p0, char* p1);

extern void RegDeleteKeyValue(char* p0, char* p1, char* p2);

#ifdef __cplusplus
}
#endif
