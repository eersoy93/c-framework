// Input-output functions source

#include "../include/io.h"
#include "../include/strings.h"

void printFloatingPoint(FloatingPointType number)
{
    printf("%lf", number.value);
}

void printlnFloatingPoint(FloatingPointType number)
{
    printf("%lf\n", number.value);
}

void printInt(IntegerType number)
{
    printf("%d", number.value);
}

void printlnInt(IntegerType number)
{
    printf("%d\n", number.value);
}

void printString(StringType str)
{
    printf("%s", str.value);
}

void printlnString(StringType str)
{
    printf("%s\n", str.value);
}

FloatingPointType getNumber()
{
    StringType number_str = stringCreate(L"\0");

    fgets(number_str.value, MAX_STR_LEN, stdin);
    FloatingPointType returnedValue;
    returnedValue.value = atof(number_str.value);
    return returnedValue;
}

IntegerType getInt()
{
    StringType number_str = stringCreate(L"\0");

    fgets(number_str.value, MAX_STR_LEN, stdin);
    IntegerType returnedValue;
    returnedValue.value = atoi(number_str.value);
    return returnedValue;
}

StringType getString()
{
    StringType str = stringCreate(calloc(1, sizeof(char) * MAX_STR_LEN));
    fgets(str.value, MAX_STR_LEN, stdin);
    str.value[strcspn(str.value, "\r\n")] = '\0';
    return str;
}
