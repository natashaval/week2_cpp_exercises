#include "vector_functions.h"
#include <algorithm>
#include <iostream>

// write your print vector function here

int countMultiplesOfFive(std::vector<int> v)
{
    /*
    int count = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v.at(i) % 5 == 0) {
            count++;
        }
    }
    return count;
    */

    // why `auto` as typedef? because lamda function doesn't actually have a type -> therefore annointing it as auto tells the compiler to skip the typedef check
    auto isDivisibleByFive = [](int num) -> bool { return num % 5 == 0; };
    int count = std::count_if(v.begin(), v.end(), isDivisibleByFive);
    return count;

    // inline function
    // return std::count_if(v.begin(), v.end(), [](int num) -> bool { return num % 5 == 0; });
}

void addElements(std::vector<int> &v, int x, int n)
{
    for (int i = 0; i < n; i++)
    {
        v.push_back(x);
    }
}