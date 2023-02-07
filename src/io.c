#include "../include/io.h"

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

void printFloat(float value)
{
    printf("%f", value);
}

void printlnFloat(float value)
{
    printf("%f\n", value);
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
    double number;
    scanf(" %lf", &number);
    return number;
}

float getFloat()
{
    float number;
    scanf(" %f", &number);
    return number;
}

int getInt()
{
    int number;
    scanf(" %d", &number);
    return number;
}

char * getString(int len)
{
    char * str = malloc(sizeof(char) * len);
    scanf(" %s", str);
    return str;
}
