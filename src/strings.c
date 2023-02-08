#include "../include/strings.h"

int stringCompare(char * str1, char * str2)
{
    return strcmp(str1, str2);
}

int stringContains(char * str, char * substr)
{
    char * occurrence = strstr(str, substr);

    if (occurrence == NULL)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int stringLength(char * str)
{
    return strlen(str);
}

char * concatenatedString(char * str1, char * str2)
{
    int lenstr1 = strlen(str1);
    int lenstr2 = strlen(str2);
    char * result = (char *)calloc(1, lenstr1 + lenstr2 + 1);
    strcpy(result, str1);
    strcat(result, str2);
    return result;
}

char * loweredString(char * str)
{
    int lenstr = stringLength(str);
    char * result = (char *)calloc(1, lenstr + 1);

    for (int i = 0; i < lenstr; i++)
    {
        result[i] = tolower(str[i]);
    }

    result[lenstr] = '\0';

    return result;
}

char * upperedString(char * str)
{
    int lenstr = stringLength(str);
    char * result = (char *)calloc(1, lenstr + 1);

    for (int i = 0; i < lenstr; i++)
    {
        result[i] = toupper(str[i]);
    }

    result[lenstr] = '\0';

    return result;
}

char * reversedString(char * str)
{
    size_t lenstr = stringLength(str);
    char * reversedString = calloc(1, sizeof(char) * (lenstr + 1));

    for (int i = 0; i < (int)lenstr; i++)
    {
        reversedString[i] = str[lenstr - i - 1];
    }

    reversedString[lenstr] = '\0';

    return reversedString;
}
