#include <memory>
#include <iostream>
#include <string>
#include "University_Types.h"

using namespace std;

Student::Student(const std::string &n) : name(n), id(max_id++) {
    cout << "Student " << name << " created." << endl;
}

Student::~Student()
{
    cout << "Student " << name << " destroyed." << endl;
}

int Student::getId() const
{
    return id;
}

string Student::getName()
{
    return name;
}

void Student::setDepartment(std::shared_ptr<Department> &departmentPointer)
{
    department = departmentPointer;
    cout << "Student " << getName() << " belongs to Department " << department->getName() << endl;
}

// WHY (*department).getName() & department->getName() both work? what is the difference?
// but (*department)->getName() doesn't work
// Probably my answer: (*department) accessing the value first, then getName() function
// department-> work as pointer directing to value then accessing the function

// Static variables need to be initialised outside their class declaration
int Student::max_id = 0;

string Department::getName() {
    return name;
}