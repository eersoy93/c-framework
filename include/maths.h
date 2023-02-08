// Maths-related functions header

#ifndef MATHS_H
#define MATHS_H

#include <math.h>

int max(int a, int b);
int min(int a, int b);

double power(double base, double exponent);
double nth_root(double num, int n);
double square_root(double num);

double logarithm(double num);
double logarithm2(double num);
double logarithm10(double num);
double naturalExponentional(double num);

double cosine(double num);
double sine(double num);
double tangent(double num);

double arcSine(double num);
double arcCosine(double num);
double arcTangent(double num);
double arcTangent2(double y, double x);

double hyperbolicSine(double num);
double hyperbolicCosine(double num);
double hyperbolicTangent(double num);

double degreesToRadians(double num);
double radiansToDegrees(double num);

double absValue(double x);
double roundingValue(double num);
double flooringValue(double num);
double ceilingValue(double num);
double fractionalValue(double num);

int factorial(int n);
int permutation(int n, int k);
int combination(int n, int k);

int gcd(int a, int b);
int lcm(int a, int b);

#endif
