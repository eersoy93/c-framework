// Generic type structs header

#include <wchar.h>

typedef struct tagFloatingPoint
{
    double value = 0.0;
} FloatingPointType;

typedef struct tagInteger
{
    int value = 0;
} IntegerType;

typedef struct tagSizeInteger
{
    size_t value = 0;
} SizeIntegerType;

typedef struct tagString
{
    wint_t * value = L"\0";
    SizeIntegerType length = 0;
} StringType;
