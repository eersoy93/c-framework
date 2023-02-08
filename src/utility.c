// Other utility functions source

#include "../include/utility.h"

char * itoa(int value, char * str)
{
    sprintf(str, "%d", value);
    return str;
}
