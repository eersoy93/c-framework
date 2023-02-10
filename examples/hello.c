// A stupid example for my C framework.

#include "../include/io.h"
#include "../include/maths.h"
#include "../include/memory.h"
#include "../include/strings.h"
#include "../include/types.h"
#include "../include/utility.h"

int main(void)
{
    StringType str = stringCreate(L"Hello, World with new types!");
    printlnString(str);
    return EXIT_SUCCESS;
}
