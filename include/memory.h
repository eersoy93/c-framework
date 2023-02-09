// Memory-related functions header

#ifndef MEMORY_H
#define MEMORY_H

#include <stdlib.h>

void freeMemoryArea(void * memory_area);

void swap_double(double * a, double * b);
void swap_int(int * a, int * b);

void sort_double(double arr[], int n, _Bool ascending);
void sort_int(int arr[], int n, _Bool ascending);

#endif
