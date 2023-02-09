// String-related functions header

#ifndef STRINGS_H
#define STRINGS_H

#include "types.h"
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR_LEN 256

SizeIntegerType stringLength(StringType str);
SizeIntegerType stringLengthFromValue(wint_t * strvalue);
wint_t stringValue(StringType str);

StringType stringCreate(wint_t * strvalue);
IntegerType stringCompare(StringType str1, StringType str2);
IntegerType stringContains(StringType str, StringType substr);

StringType concatenatedString(StringType str1, StringType str2);
StringType loweredString(StringType str);
StringType upperedString(StringType str);
StringType reversedString(StringType str);

#endif
