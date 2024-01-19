#pragma once
#include <string>
#include <numeric>

class Fraction {
    private:
    int a; // numerator
    int b; // denominator

    int gcd(int a, int b);
    void simplify();

    public:
    // Constructor
    Fraction(int numerator, int denominator);
    // concise constructor
    // Fraction(int numerator, int denominator) : a(numerator), b(denominator) {}

    // Destructor
    ~Fraction(){}

    Fraction reciprocal();
    Fraction multiply(int mult);
    double toDouble();
    std::string toString();
};