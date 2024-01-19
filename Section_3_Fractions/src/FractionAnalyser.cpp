#include "Fraction.h"
#include <iostream>

int main()
{
    int a, b;
    std::cout << "Please enter two numbers (numerator and denominator) separated by a space" << std::endl;
    std::cin >> a;
    std::cin >> b;

    Fraction frac(a, b);

    std::cout << frac.toString() << " = " << frac.toDouble() << std::endl;
    std::cout << "Reciprocal = " << frac.reciprocal().toString() << std::endl;

    int mult;
    std::cout << "To multiply, enter a number: ";
    std::cin >> mult;
    std::cout << "Multiply result = " << frac.multiply(mult).toString() << std::endl;
    return 0;
}