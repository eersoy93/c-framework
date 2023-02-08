#include "../include/maths.h"

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int min(int a, int b)
{
    return (a < b) ? a : b;
}

float absValue(float x)
{
    return fabs(x);
}

int factorial(int n)
{
    if (n < 0)
    {
        return -1;
    }
    if (n == 0 || n == 1)
    {
        return 1;
    }
    if (n > 1)
    {
        return n * factorial(n - 1);
    }
}

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }

    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}
