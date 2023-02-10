// Input-output functions source

#include "../include/io.h"
#include "../include/strings.h"

void printFloatingPoint(FloatingPointType number)
{
    wprintf(L"%lf", number.value);
}

void printlnFloatingPoint(FloatingPointType number)
{
    wprintf(L"%lf\n", number.value);
}

void printInt(IntegerType number)
{
    wprintf(L"%d", number.value);
}

void printlnInt(IntegerType number)
{
    wprintf(L"%d\n", number.value);
}

void printString(StringType str)
{
    wprintf(L"%s", str.value);
}

void printlnString(StringType str)
{
    wprintf(L"%s\n", str.value);
}

FloatingPointType getNumber()
{
    StringType number_str = stringCreate(L"\0");

    fgetws(number_str.value, MAX_STR_LEN, stdin);
    FloatingPointType returnedValue;
    returnedValue.value = wcstod(number_str.value, NULL);
    return returnedValue;
}

IntegerType getInt()
{
    StringType number_str = stringCreate(L"\0");

    fgetws(number_str.value, MAX_STR_LEN, stdin);
    IntegerType returnedValue;
    returnedValue.value = wcstod(number_str.value, NULL);
    return returnedValue;
}

StringType getString()
{
    StringType str = stringCreate(calloc(1, sizeof(char) * MAX_STR_LEN));
    fgetws(str.value, MAX_STR_LEN, stdin);
    str.value[wcscspn(str.value, L"\r\n")] = L'\0';
    return str;
}
