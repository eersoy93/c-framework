// A stupid example for my C framework.

#include "../include/io.h"
#include "../include/maths.h"
#include "../include/memory.h"
#include "../include/strings.h"

int main(void)
{
    println("Example");
    print("\n");

    print("Enter a integer: ");
    int x = getInt();

    print("Enter a integer: ");
    int y = getInt();

    print("Enter a floating-point number: ");
    double z = getDouble();

    print("Enter a string: ");
    char * str1 = getString();

    print("Max number between the integers: ");
    printlnInt(maxValue(x, y));

    print("Min number between the integers: ");
    printlnInt(minValue(x, y));

    print("Absolute value of the floating-point number: ");
    printlnDouble(absValue(z));

    print("Reverse of the string: ");
    char * str2 = reversedString(str1);
    println(str2);

    freeMemoryArea(str1);
    freeMemoryArea(str2);
}
