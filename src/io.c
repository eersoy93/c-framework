// Input-output functions source

#include "../include/io.h"
#include "../include/strings.h"

void print(char * text)
{
    printf("%s", text);
}

void println(char * text)
{
    printf("%s\n", text);
}

void printDouble(double value)
{
    printf("%lf", value);
}

void printlnDouble(double value)
{
    printf("%lf\n", value);
}

void printInt(int value)
{
    printf("%d", value);
}

void printlnInt(int value)
{
    printf("%d\n", value);
}

double getDouble()
{
    char number_str[MAX_STR_LEN] = { '\0' };
    fgets(number_str, MAX_STR_LEN, stdin);
    double number = atof(number_str);
    return number;
}

int getInt()
{
    char number_str[MAX_STR_LEN] = { '\0' };
    fgets(number_str, MAX_STR_LEN, stdin);
    int number = atoi(number_str);
    return number;
}

char * getString()
{
    char * str = calloc(1, sizeof(char) * MAX_STR_LEN);
    fgets(str, MAX_STR_LEN, stdin);
    str[strcspn(str, "\r\n")] = '\0';
    return str;
}
