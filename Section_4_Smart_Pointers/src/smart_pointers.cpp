#include <memory>
#include <iostream>
#include <vector>

/**
 * A simple class which just reports when it is created (constructor) and when it is destroyed (destructor).
*/
class Reporter
{
    public: 
    Reporter(std::string id_string) : ID(id_string)
    {
        std::cout << "Creating Reporter Object with ID: " << ID << std::endl;
    }

    ~Reporter()
    {
        std::cout << "Destroying Reporter Object with ID: " << ID << std::endl;
    }

    private:
    std::string ID;
};


int main()
{
    // raw pointer
    // why still use raw pointer? because it is faster in memory management than smart pointer; because in smart pointer, they need to "memorize" the link
    // while in raw pointer, it is managed by the user
    Reporter *reporterOne = new Reporter("1");

    // unique pointer
    std::unique_ptr<Reporter> reporterTwo = std::make_unique<Reporter>("2");

    // normal initialization
    Reporter reporterThree("3");

    // to delete raw pointer manually, if not it will cause a memory leak
    delete reporterOne;

    return 0;
}
