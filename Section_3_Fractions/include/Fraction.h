#pragma once
#include <string>
#include <numeric>

class Fraction {
    private:
    int a; // numerator
    int b; // denominator

    int gcd(int a, int b);

    public:
    // Constructor
    Fraction(int numerator, int denominator);
    // Destructor
    ~Fraction(){}

    Fraction reciprocal();
    Fraction multiply(int mult);
    double toDouble();
    std::string toString();
};