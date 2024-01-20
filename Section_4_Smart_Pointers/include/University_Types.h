#include <memory>
#include <iostream>
#include <string>

using namespace std;

// Forward declaration of Department class.
// This is needed to let the compiler know that a type called
// Department will be defined in the code when it compiles the 
// Student class, as the Department class is defined afterwards.
// You can have a pointer to a forward declared class because a 
// pointer is just an address in memory, so the compiler doens't
// need to know anything the data Department contains to work
// out the data layout for Student. 
class Department;

class Student
{
    public:
    // declare constructor and destructor function in .cpp
    Student(const std::string &n);
    ~Student();

    void setDepartment(std::shared_ptr<Department> &departmentPointer);
    string getName();

    int getId() const;

    private:
    // Static variable means same value shared by every object in class
    // This allows us to create a unique id for each student by increasing
    // each time
    static int max_id;
    
    string name;
    int id;
    // add a pointer to the department here
    std::shared_ptr<Department> department;
    // THE REASON is: we don't need to create new Object of Department on each students
};

class Department
{
    public:
    // declare constructor and destructor function in .h
    Department(const std::string &n) : name(n) {
        cout << "Department " << name << " created." << endl;
    }
    ~Department() {
        cout << "Department " << name << " destroyed." << endl;
    }
    string getName();

    private:
    string name;
    // add a vector or map of pointers to students here
};