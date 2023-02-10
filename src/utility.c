// Other utility functions source

#include "../include/utility.h"

StringType intToString(IntegerType integer, StringType str)
{
    swprintf(str.value, integer.value, L"%d");
    return str;
}
