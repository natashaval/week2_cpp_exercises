#include "Fraction.h"

int Fraction::gcd(int a, int b)
{
    return std::gcd(a, b);
}

Fraction::Fraction(int numerator, int denominator)
{
    // should be simplified to smallest number 2/4 to 1/2
    int biggestDivider = gcd(numerator, denominator);
    a = numerator / biggestDivider;
    b = denominator / biggestDivider;
}

Fraction Fraction::reciprocal()
{
    return Fraction(b, a);
}

Fraction Fraction::multiply(int mult)
{
    return Fraction(a * mult, b);
}

double Fraction::toDouble()
{
    return (double) a / (double) b;
}

std::string Fraction::toString()
{
    if (a == 0) {
        return "0";
    } else {
        return std::to_string(a) + "/" + std::to_string(b);
    }
}