// Maths-related functions source

#include "../include/maths.h"

FloatingPointType add(FloatingPointType a, FloatingPointType b)
{
    FloatingPointType returnedValue;
    returnedValue.value = a.value + b.value;
    return returnedValue;
}

FloatingPointType sub(FloatingPointType a, FloatingPointType b)
{
    FloatingPointType returnedValue;
    returnedValue.value = a.value - b.value;
    return returnedValue;
}

FloatingPointType mul(FloatingPointType a, FloatingPointType b)
{
    FloatingPointType returnedValue;
    returnedValue.value = a.value * b.value;
    return returnedValue;
}

FloatingPointType div(FloatingPointType a, FloatingPointType b)
{
    FloatingPointType returnedValue;
    returnedValue.value = a.value / b.value;
    return returnedValue;
}

IntegerType addInt(IntegerType a, IntegerType b)
{
    IntegerType returnedValue;
    returnedValue.value = a.value + b.value;
    return returnedValue;
}

IntegerType subInt(IntegerType a, IntegerType b)
{
    IntegerType returnedValue;
    returnedValue.value = a.value - b.value;
    return returnedValue;
}

IntegerType mulInt(IntegerType a, IntegerType b)
{
    IntegerType returnedValue;
    returnedValue.value = a.value * b.value;
    return returnedValue;
}

IntegerType divInt(IntegerType a, IntegerType b)
{
    IntegerType returnedValue;
    returnedValue.value = a.value / b.value;
    return returnedValue;
}

IntegerType modInt(IntegerType a, IntegerType b)
{
    IntegerType returnedValue;
    returnedValue.value = a.value % b.value;
    return returnedValue;
}

FloatingPointType power(FloatingPointType base, FloatingPointType exponent)
{
    FloatingPointType returnedValue;
    returnedValue.value = pow(base.value, exponent.value);
    return returnedValue;
}

FloatingPointType nth_root(FloatingPointType num, IntegerType n)
{
    FloatingPointType returnedValue;
    returnedValue.value = pow(num.value, 1.0 / n.value);
    return returnedValue;
}

FloatingPointType square_root(FloatingPointType num)
{
    FloatingPointType returnedValue;
    returnedValue.value = sqrt(num.value);
    return returnedValue;
}

FloatingPointType cubic_root(FloatingPointType num)
{
    FloatingPointType returnedValue;
    returnedValue.value = cbrt(num.value);
    return returnedValue;
}

FloatingPointType hypotenuse(FloatingPointType a, FloatingPointType b)
{
    FloatingPointType returnedValue;
    returnedValue.value = hypot(a.value, b.value);
    return returnedValue;
}

FloatingPointType logarithm2(FloatingPointType num)
{
    FloatingPointType returnedValue;
    returnedValue.value = log2(num.value);
    return returnedValue;
}

FloatingPointType logarithm10(FloatingPointType num)
{
    FloatingPointType returnedValue;
    returnedValue.value = log10(num.value);
    return returnedValue;
}

FloatingPointType logarithm_natural(FloatingPointType num)
{
    FloatingPointType returnedValue;
    returnedValue.value = log(num.value);
    return returnedValue;
}

FloatingPointType exponentional2(FloatingPointType num)
{
    FloatingPointType returnedValue;
    returnedValue.value = exp2(num.value);
    return returnedValue;
}

FloatingPointType exponentional_natural(FloatingPointType num)
{
    FloatingPointType returnedValue;
    returnedValue.value = exp(num.value);
    return returnedValue;
}

FloatingPointType cosine(FloatingPointType num)
{
    FloatingPointType returnedValue;
    returnedValue.value = cos(num.value);
    return returnedValue;
}

FloatingPointType sine(FloatingPointType num)
{
    FloatingPointType returnedValue;
    returnedValue.value = sin(num.value);
    return returnedValue;
}

FloatingPointType tangent(FloatingPointType num)
{
    FloatingPointType returnedValue;
    returnedValue.value = tan(num.value);
    return returnedValue;
}

FloatingPointType arcSine(FloatingPointType num)
{
    FloatingPointType returnedValue;
    returnedValue.value = asin(num.value);
    return returnedValue;
}

FloatingPointType arcCosine(FloatingPointType num)
{
    FloatingPointType returnedValue;
    returnedValue.value = acos(num.value);
    return returnedValue;
}

FloatingPointType arcTangent(FloatingPointType num)
{
    FloatingPointType returnedValue;
    returnedValue.value = atan(num.value);
    return returnedValue;
}

FloatingPointType arcTangent2(FloatingPointType a, FloatingPointType b)
{
    FloatingPointType returnedValue;
    returnedValue.value = atan2(b.value, a.value);
    return returnedValue;
}

FloatingPointType hyperbolicSine(FloatingPointType num)
{
    FloatingPointType returnedValue;
    returnedValue.value = sinh(num.value);
    return returnedValue;
}

FloatingPointType hyperbolicCosine(FloatingPointType num)
{
    FloatingPointType returnedValue;
    returnedValue.value = cosh(num.value);
    return returnedValue;
}

FloatingPointType hyperbolicTangent(FloatingPointType num)
{
    FloatingPointType returnedValue;
    returnedValue.value = tanh(num.value);
    return returnedValue;
}

FloatingPointType arSine(FloatingPointType num)
{
    FloatingPointType returnedValue;
    returnedValue.value = asinh(num.value);
    return returnedValue;
}

FloatingPointType arCosine(FloatingPointType num)
{
    FloatingPointType returnedValue;
    returnedValue.value = acosh(num.value);
    return returnedValue;
}

FloatingPointType arTangent(FloatingPointType num)
{
    FloatingPointType returnedValue;
    returnedValue.value = atanh(num.value);
    return returnedValue;
}

FloatingPointType degreesToRadians(FloatingPointType num)
{
    FloatingPointType returnedValue;
    returnedValue.value = num.value * M_PI / 180;
    return returnedValue;
}

FloatingPointType radiansToDegrees(FloatingPointType num)
{
    FloatingPointType returnedValue;
    returnedValue.value = num.value * 180 / M_PI;
    return returnedValue;
}

FloatingPointType maxValue(FloatingPointType a, FloatingPointType b)
{
    FloatingPointType returnedValue;
    returnedValue.value = fmax(a.value, b.value);
    return returnedValue;
}

FloatingPointType minValue(FloatingPointType a, FloatingPointType b)
{
    FloatingPointType returnedValue;
    returnedValue.value = fmin(a.value, b.value);
    return returnedValue;
}

FloatingPointType modValue(FloatingPointType a, FloatingPointType b)
{
    FloatingPointType returnedValue;
    returnedValue.value = fmod(a.value, b.value);
    return returnedValue;
}

FloatingPointType remainderValue(FloatingPointType a, FloatingPointType b)
{
    FloatingPointType returnedValue;
    returnedValue.value = remainder(a.value, b.value);
    return returnedValue;
}

FloatingPointType absValue(FloatingPointType num)
{
    FloatingPointType returnedValue;
    returnedValue.value = fabs(num.value);
    return returnedValue;
}

FloatingPointType roundingValue(FloatingPointType num)
{
    FloatingPointType returnedValue;
    returnedValue.value = round(num.value);
    return returnedValue;
}

FloatingPointType flooringValue(FloatingPointType num)
{
    FloatingPointType returnedValue;
    returnedValue.value = floor(num.value);
    return returnedValue;
}

FloatingPointType ceilingValue(FloatingPointType num)
{
    FloatingPointType returnedValue;
    returnedValue.value = ceil(num.value);
    return returnedValue;
}

FloatingPointType truncatedValue(FloatingPointType num)
{
    FloatingPointType returnedValue;
    returnedValue.value = trunc(num.value);
    return returnedValue;
}

IntegerType factorial(IntegerType n)
{
    IntegerType returnedValue;

    if (n.value < 0)
    {
        returnedValue.value = -1;
        return returnedValue;
    }
    if (n.value == 0 || n.value == 1)
    {
        returnedValue.value = 1;
        return returnedValue;
    }
    if (n.value > 1)
    {
        IntegerType interValue;
        interValue.value = n.value - 1;
        returnedValue = factorial(interValue);
        return returnedValue;
    }

    returnedValue.value = -1;
    return returnedValue;
}

IntegerType permutation(IntegerType n, IntegerType k)
{
    IntegerType returnedValue;
    returnedValue.value = factorial(n).value / factorial(k).value;
    return returnedValue;
}

IntegerType combination(IntegerType n, IntegerType k)
{
    IntegerType interValue;
    interValue.value = n.value - k.value;

    IntegerType returnedValue;
    returnedValue.value = combination(n, k).value / factorial(interValue).value;

    return returnedValue;
}

IntegerType gcd(IntegerType a, IntegerType b)
{
    IntegerType returnedValue;

    if (b.value == 0)
    {
        returnedValue.value = a.value;
        return returnedValue;
    }

    IntegerType interValue;
    interValue.value = a.value % b.value;
    returnedValue.value = gcd(b, interValue).value;
    return returnedValue;
}

IntegerType lcm(IntegerType a, IntegerType b)
{
    IntegerType returnedValue;
    returnedValue.value = (a.value * b.value) / gcd(a, b).value;
    return returnedValue;
}
