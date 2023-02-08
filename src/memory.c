// Memory-related functions source

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

void sort_double(double arr[], int n, _Bool ascending)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (ascending)
            {
                if (arr[j] > arr[j + 1])
                {
                    swap_double(&arr[j], &arr[j + 1]);
                }
            }
            else
            {
                if (arr[j] < arr[j + 1])
                {
                    swap_double(&arr[j], &arr[j + 1]);
                }
            }
        }
    }
}

void sort_float(float arr[], int n, _Bool ascending)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (ascending)
            {
                if (arr[j] > arr[j + 1])
                {
                    swap_float(&arr[j], &arr[j + 1]);
                }
            }
            else
            {
                if (arr[j] < arr[j + 1])
                {
                    swap_float(&arr[j], &arr[j + 1]);
                }
            }
        }
    }
}

void sort_int(int arr[], int n, _Bool ascending)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (ascending)
            {
                if (arr[j] > arr[j + 1])
                {
                    swap_int(&arr[j], &arr[j + 1]);
                }
            }
            else
            {
                if (arr[j] < arr[j + 1])
                {
                    swap_int(&arr[j], &arr[j + 1]);
                }
            }
        }
    }
}
