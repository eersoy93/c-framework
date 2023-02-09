// A stupid example for my C framework.

#include "../include/io.h"
#include "../include/maths.h"
#include "../include/memory.h"
#include "../include/strings.h"

int main(void)
{
    printlnString("Example");
    printString("\n");

    printString("Enter a integer: ");
    int x = getInt();

    printString("Enter a integer: ");
    int y = getInt();

    printString("Enter a floating-point number: ");
    double z = getDouble();

    printString("Enter a string: ");
    char * str1 = getString();

    printString("Max number between the integers: ");
    printlnInt(maxValue(x, y));

    printString("Min number between the integers: ");
    printlnInt(minValue(x, y));

    printString("Absolute value of the floating-point number: ");
    printlnDouble(absValue(z));

    printString("Reverse of the string: ");
    char * str2 = reversedString(str1);
    printlnString(str2);

    freeMemoryArea(str1);
    freeMemoryArea(str2);
}
