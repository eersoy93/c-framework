#include "../include/maths.h"

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int min(int a, int b)
{
    return (a < b) ? a : b;
}

double power(double base, double exponent)
{
    return pow(base, exponent);
}

double nth_root(double num, int n)
{
    return power(num, 1.0 / n);
}

double square_root(double num)
{
    return sqrt(num);
}

double logarithm(double num)
{
    return log(num);
}

double logarithm2(double num)
{
    return log2(num);
}

double logarithm10(double num)
{
    return log10(num);
}

double naturalExponentional(double num)
{
    return exp(num);
}

double cosine(double num)
{
    return cos(num);
}

double sine(double num)
{
    return sin(num);
}

double tangent(double num)
{
    return tan(num);
}

double arcSine(double num)
{
    return asin(num);
}

double arcCosine(double num)
{
    return acos(num);
}

double arcTangent(double num)
{
    return atan(num);
}

double arcTangent2(double y, double x)
{
    return atan2(y, x);
}

double hyperbolicSine(double num)
{
    return sinh(num);
}

double hyperbolicCosine(double num)
{
    return cosh(num);
}

double hyperbolicTangent(double num)
{
    return tanh(num);
}

double degreesToRadians(double num) 
{
    return num * M_PI / 180;
}

double radiansToDegrees(double num)
{
    return num * 180 / M_PI;
}

double absValue(double x)
{
    return fabs(x);
}

double roundingValue(double num)
{
    return round(num);
}

double flooringValue(double num)
{
    return floor(num);
}

double ceilingValue(double num)
{
    return ceil(num);
}

double fractionalValue(double num) {
    return (num - floor(num));
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

int permutation(int n, int k)
{
    return factorial(n) / factorial(k);
}

int combination(int n, int k)
{
    return combination(n, k) / factorial(n - k);
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
