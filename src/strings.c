// String-related functions source

#include "../include/strings.h"

SizeIntegerType stringLength(StringType str)
{
    SizeIntegerType returnedValue;
    returnedValue.value = wcslen(str.value);
    return returnedValue;
}

SizeIntegerType stringLengthFromValue(wint_t * strvalue)
{
    SizeIntegerType returnedValue;
    returnedValue.value = wcslen(strvalue);
    return returnedValue;
}

wint_t stringValue(StringType str)
{
    return str.value;
}

StringType stringCreate(wint_t * strvalue)
{
    StringType returnedValue;
    returnedValue.value = strvalue;

    SizeIntegerType length;
    length.value = wcslen(strvalue);
    returnedValue.length = length;

    return returnedValue;
}

IntegerType stringCompare(StringType str1, StringType str2)
{
    IntegerType returnedValue;
    returnedValue.value = wcscmp(str1.value, str2.value);
    return returnedValue;
}

IntegerType stringContains(StringType str, StringType substr)
{
    StringType * occurrence;
    occurrence->value = wcsstr(str.value, substr.value);

    IntegerType returnedValue;
    if (occurrence == NULL)
    {
        returnedValue.value = 0;
        return returnedValue;
    }
    else
    {
        returnedValue.value = 1;
        return returnedValue;
    }
}

StringType concatenatedString(StringType str1, StringType str2)
{
    SizeIntegerType lenstr1 = stringLength(str1);
    SizeIntegerType lenstr2 = stringLength(str2);

    StringType returnedValue;
    returnedValue.value = (wint_t *)calloc(1, (lenstr1.value + lenstr2.value + 1) * sizeof(wint_t));
    wcscpy(returnedValue.value, str1.value);
    wcscat(returnedValue.value, str2.value);
    return returnedValue;
}

StringType loweredString(StringType str)
{
    SizeIntegerType lenstr = stringLength(str);

    StringType returnedValue;
    returnedValue.value = (wint_t *)calloc(1, (lenstr.value + 1) * sizeof(wint_t));

    IntegerType i;
    for (i.value = 0; i.value < lenstr.value; (i.value)++)
    {
        returnedValue.value[i.value] = towlower(str.value[i.value]);
    }

    returnedValue.value[lenstr.value] = L"\0";

    return returnedValue;
}

StringType upperedString(StringType str)
{
    SizeIntegerType lenstr = stringLength(str);

    StringType returnedValue;
    returnedValue.value = (wint_t *)calloc(1, (lenstr.value + 1) * sizeof(wint_t));

    IntegerType i;
    for (i.value = 0; i.value < lenstr.value; (i.value)++)
    {
        returnedValue.value[i.value] = towupper(str.value[i.value]);
    }

    returnedValue.value[lenstr.value] = L"\0";

    return returnedValue;
}

StringType reversedString(StringType str)
{
    SizeIntegerType lenstr = stringLength(str);
    StringType returnedValue;
    returnedValue.value = calloc(1, (lenstr.value + 1) * sizeof(wint_t));

    IntegerType i;
    for (i.value = 0; i.value < lenstr.value; (i.value)++)
    {
        returnedValue.value[i.value] = str.value[lenstr.value - i.value - 1];
    }

    returnedValue.value[lenstr.value] = L"\0";

    return returnedValue;
}
