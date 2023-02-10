// Generic type structs and definitions header

#ifndef TYPES_H
#define TYPES_H

#include <wchar.h>

typedef struct tagBooleanType
{
    _Bool value;
} BooleanType;

typedef struct tagFloatingPoint
{
    double value;
} FloatingPointType;

typedef struct tagInteger
{
    int value;
} IntegerType;

typedef struct tagSizeInteger
{
    size_t value;
} SizeIntegerType;

typedef struct tagString
{
    wchar_t * value;
    SizeIntegerType length;
} StringType;

typedef struct tagVoidPtr
{
    void * value;
} VoidPtrType;

#endif
