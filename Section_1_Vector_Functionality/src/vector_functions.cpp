#include "vector_functions.h"
#include <algorithm>
#include <iostream>

// write your print vector function here

int countMultiplesOfFive(std::vector<int> v)
{
    int count = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v.at(i) % 5 == 0) {
            count++;
        }
    }
    return count;
}


void addElements(std::vector<int> v, int x, int n)
{
    for(int i = 0; i < n; i++)
    {
        v.push_back(x);
    }
}