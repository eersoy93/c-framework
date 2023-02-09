// Maths-related functions header

#ifndef MATHS_H
#define MATHS_H

#include "types.h"
#include <math.h>


FloatingPointType add(FloatingPointType a, FloatingPointType b);
FloatingPointType sub(FloatingPointType a, FloatingPointType b);
FloatingPointType mul(FloatingPointType a, FloatingPointType b);
FloatingPointType div(FloatingPointType a, FloatingPointType b);
IntegerType addInt(IntegerType a, IntegerType b);
IntegerType subInt(IntegerType a, IntegerType b);
IntegerType mulInt(IntegerType a, IntegerType b);
IntegerType divInt(IntegerType a, IntegerType b);
IntegerType modInt(IntegerType a, IntegerType b);

FloatingPointType power(FloatingPointType base, FloatingPointType exponent);

FloatingPointType nth_root(FloatingPointType num, IntegerType n);
FloatingPointType square_root(FloatingPointType num);
FloatingPointType cubic_root(FloatingPointType num);

FloatingPointType hypotenuse(FloatingPointType a, FloatingPointType b);

FloatingPointType logarithm2(FloatingPointType num);
FloatingPointType logarithm10(FloatingPointType num);
FloatingPointType logarithm_natural(FloatingPointType num);

FloatingPointType exponentional2(FloatingPointType num);
FloatingPointType exponentional_natural(FloatingPointType num);

FloatingPointType cosine(FloatingPointType num);
FloatingPointType sine(FloatingPointType num);
FloatingPointType tangent(FloatingPointType num);

FloatingPointType arcSine(FloatingPointType num);
FloatingPointType arcCosine(FloatingPointType num);
FloatingPointType arcTangent(FloatingPointType num);
FloatingPointType arcTangent2(FloatingPointType a, FloatingPointType b);

FloatingPointType hyperbolicSine(FloatingPointType num);
FloatingPointType hyperbolicCosine(FloatingPointType num);
FloatingPointType hyperbolicTangent(FloatingPointType num);

FloatingPointType arSine(FloatingPointType num);
FloatingPointType arCosine(FloatingPointType num);
FloatingPointType arTangent(FloatingPointType num);

FloatingPointType degreesToRadians(FloatingPointType num);
FloatingPointType radiansToDegrees(FloatingPointType num);

FloatingPointType maxValue(FloatingPointType a, FloatingPointType b);
FloatingPointType minValue(FloatingPointType a, FloatingPointType b);
FloatingPointType modValue(FloatingPointType a, FloatingPointType b);
FloatingPointType remainderValue(FloatingPointType a, FloatingPointType b);

FloatingPointType absValue(FloatingPointType num);
FloatingPointType roundingValue(FloatingPointType num);
FloatingPointType flooringValue(FloatingPointType num);
FloatingPointType ceilingValue(FloatingPointType num);
FloatingPointType truncatedValue(FloatingPointType num);

IntegerType factorial(IntegerType n);
IntegerType permutation(IntegerType n, IntegerType k);
IntegerType combination(IntegerType n, IntegerType k);

IntegerType gcd(IntegerType a, IntegerType b);
IntegerType lcm(IntegerType a, IntegerType b);

#endif
