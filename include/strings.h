// String-related functions header

#ifndef STRINGS_H
#define STRINGS_H

#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR_LEN 256

int stringCompare(char * str1, char * str2);
int stringContains(char * str, char * substr);
int stringLength(char * str);

char * concatenatedString(char * str1, char * str2);
char * loweredString(char * str);
char * upperedString(char * str);
char * reversedString(char * str);

#endif
