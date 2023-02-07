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
    float z = getFloat();

    print("Max number: ");
    printlnInt(max(x, y));

    print("Min number: ");
    printlnInt(min(x, y));

    printlnFloat(absValue(z));
}
