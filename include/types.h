// Generic type structs header

#include <wchar.h>

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
    wint_t * value;
    SizeIntegerType length;
} StringType;
