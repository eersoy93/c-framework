// Maths-related functions header

#ifndef MATHS_H
#define MATHS_H

#include <math.h>

double power(double base, double exponent);

double nth_root(double num, int n);
double square_root(double num);
double cubic_root(double num);

double hypotenuse(double a, double b);

double logarithm2(double num);
double logarithm10(double num);
double logarithm_natural(double num);

double exponentional2(double num);
double exponentional_natural(double num);

double cosine(double num);
double sine(double num);
double tangent(double num);

double arcSine(double num);
double arcCosine(double num);
double arcTangent(double num);
double arcTangent2(double a, double b);

double hyperbolicSine(double num);
double hyperbolicCosine(double num);
double hyperbolicTangent(double num);

double arSine(double num);
double arCosine(double num);
double arTangent(double num);

double degreesToRadians(double num);
double radiansToDegrees(double num);

double maxValue(double a, double b);
double minValue(double a, double b);
double modValue(double a, double b);
double remainderValue(double a, double b);

double absValue(double num);
double roundingValue(double num);
double flooringValue(double num);
double ceilingValue(double num);
double truncatedValue(double num);

int factorial(int n);
int permutation(int n, int k);
int combination(int n, int k);

int gcd(int a, int b);
int lcm(int a, int b);

#endif
