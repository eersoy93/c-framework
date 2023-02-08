#include "../include/memory.h"

void freeMemoryArea(void * memory_area)
{
    free(memory_area);
}

void swap_double(double * a, double * b)
{
    double temp = *a;
    *a = *b;
    *b = temp;
}

void swap_float(float * a, float * b)
{
    float temp = *a;
    *a = *b;
    *b = temp;
}

void swap_int(int * a, int * b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
