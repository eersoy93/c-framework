// Other utility functions source

#include "../include/utility.h"

StringType intToString(IntegerType integer, StringType str)
{
    sprintf(str.value, "%d", integer.value);
    return str;
}
