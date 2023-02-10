// Memory-related functions header

#ifndef MEMORY_H
#define MEMORY_H

#include "types.h"
#include <stdlib.h>

void freeMemoryArea(VoidPtrType memory_area);

void swapFloatingPoint(FloatingPointType * a, FloatingPointType * b);
void swapInt(IntegerType * a, IntegerType * b);

void sortFloatingPoint(FloatingPointType arr[], IntegerType n, BooleanType ascending);
void sortInt(IntegerType arr[], IntegerType n, BooleanType ascending);

#endif
