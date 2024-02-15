#include <memory>
#include <iostream>
#include <string>
#include "University_Types.h"

using namespace std;


int main()
{
    // declare a department
    // Shared Ownership: The lifetime of the data is determined by multiple other variables, and the data should remain as long as one of those variables is still in scope.
    std::shared_ptr<Department> dept = std::make_shared<Department>("Engineering");
    std::shared_ptr<Department> math = std::make_shared<Department>("Mathematics");

    // declare a student
    std::shared_ptr<Student> alice = std::make_shared<Student>("Alice");
    std::shared_ptr<Student> bob = std::make_shared<Student>("Bob");

    // add student to department list    
    alice->setDepartment(dept);
    dept->addStudent(alice);
    bob->setDepartment(math);
    math->addStudent(bob);

    return 0;
}