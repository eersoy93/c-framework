// Input-output functions header

#ifndef IO_H
#define IO_H

#include "types.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

void printFloatingPoint(FloatingPointType number);
void printlnFloatingPoint(FloatingPointType number);
void printInt(IntegerType number);
void printlnInt(IntegerType number);
void printString(StringType str);
void printlnString(StringType str);

FloatingPointType getNumber();
IntegerType getNumberInt();
StringType getString();

#endif
