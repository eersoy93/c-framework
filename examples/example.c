#include "../include/io.h"
#include "../include/maths.h"

int main(void)
{
    println("Example");
    print("\n");

    print("Enter a integer: ");
    int x = getInt();

    print("Enter a integer: ");
    int y = getInt();

    print("Enter a floating-point number: ");
    float z = getDouble();

    print("Max number between the integers: ");
    printlnInt(max(x, y));

    print("Min number between the integers: ");
    printlnInt(min(x, y));

    print("Absolute value of the floating-point number: ");
    printlnDouble(absValue(z));
}
