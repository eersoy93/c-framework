#include "../include/strings.h"

char * reversedString(char * str)
{
    size_t lenstr = strlen(str);
    char * reversedString = malloc(sizeof(char) * (lenstr + 1));

    for (int i = 0; i < (int)lenstr; i++)
    {
        reversedString[i] = str[lenstr - i - 1];
    }

    reversedString[lenstr] = '\0';

    return reversedString;
}