#include <iostream>
#include "vector_functions.h"
#include <string>

bool check_add_elements()
{
    std::vector<int> starting_vector;
    addElements(starting_vector, 5, 4);
    if( starting_vector.size() != 4)
    {
        std::cout << "Vector is " << starting_vector.size() << " elements instead of 4." << std::endl;
        return false;
    }
    for(auto &&i : starting_vector)
    {
        if(i != 5)
        {
            std::cout << "Incorrect value of " << i << " found." << std::endl;
            return false;
        }
    }

    // all checks passed
    return true;
}

int main()
{
    std::vector<int> some_multiples = {1, 5, 3, 10, 0, 2};
    int count = countMultiplesOfFive(some_multiples);
    std::cout << (count == 3 ? "Check 1 passed" : "Failed first check, should find 3 multiples and found " + std::to_string(count)) << std::endl;
    
    std::vector<int> no_multiples = {2, 3, 9, 18, 47};
    count = countMultiplesOfFive(no_multiples);
    std::cout << (count == 0 ? "Check 2 passed" : "Failed second check, should find 0 multiples and found " + std::to_string(count)) << std::endl;

    std::vector<int> empty_vector;
    count = countMultiplesOfFive(empty_vector);
    std::cout << (count == 0 ? "Check 3 passed" : "Failed third check, should find 0 multiples and found " + std::to_string(count)) << std::endl;
    
    return 0;
}