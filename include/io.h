// Input-output functions header

#ifndef IO_H
#define IO_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

void printDouble(double value);
void printlnDouble(double value);
void printInt(int value);
void printlnInt(int value);
void printString(char *text);
void printlnString(char *text);

double getDouble();
int getInt();
char * getString();

#endif
