// Memory-related functions source

#include "../include/memory.h"

void freeMemoryArea(VoidPtrType memory_area)
{
    free(memory_area.value);
}

void swap(FloatingPointType * a, FloatingPointType * b)
{
    double temp = a->value;
    a->value = b->value;
    b->value = temp;
}

void swapInt(IntegerType * a, IntegerType * b)
{
    int temp = a->value;
    a->value = b->value;
    b->value = temp;
}

void sort(FloatingPointType arr[], IntegerType n, BooleanType ascending)
{
    IntegerType i;
    IntegerType j;
    for (i.value = 0; i.value < n.value - 1; (i.value)++)
    {
        for (j.value = 0; j.value < n.value - i.value - 1; (j.value)++)
        {
            if (ascending.value)
            {
                if (arr[j.value].value > arr[j.value + 1].value)
                {
                    swap(&arr[j.value], &arr[j.value + 1]);
                }
            }
            else
            {
                if (arr[j.value].value < arr[j.value + 1].value)
                {
                    swap(&arr[j.value], &arr[j.value + 1]);
                }
            }
        }
    }
}

void sortInt(IntegerType arr[], IntegerType n, BooleanType ascending)
{
    IntegerType i;
    IntegerType j;
    for (i.value = 0; i.value < n.value - 1; (i.value)++)
    {
        for (j.value = 0; j.value < n.value - i.value - 1; (j.value)++)
        {
            if (ascending.value)
            {
                if (arr[j.value].value > arr[j.value + 1].value)
                {
                    swapInt(&arr[j.value], &arr[j.value + 1]);
                }
            }
            else
            {
                if (arr[j.value].value < arr[j.value + 1].value)
                {
                    swapInt(&arr[j.value], &arr[j.value + 1]);
                }
            }
        }
    }
}
