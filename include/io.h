#ifndef IO_H
#define IO_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

void print(char *text);
void println(char *text);

void printDouble(double value);
void printlnDouble(double value);

void printFloat(float value);
void printlnFloat(float value);

void printInt(int value);
void printlnInt(int value);

double getDouble();
float getFloat();
int getInt();
char * getString(int len);

#endif
