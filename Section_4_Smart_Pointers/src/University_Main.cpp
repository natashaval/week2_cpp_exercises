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

    // declare a student
    std::shared_ptr<Student> std = std::make_shared<Student>("abc");
    std->setDepartment(dept);

    // set student's department

    // add student to department list

    return 0;
}