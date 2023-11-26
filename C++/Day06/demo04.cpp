#include <iostream>
using namespace std;

class Person // Base-> Parent
{

public:
    Person()
    {
        cout << "Person Ctor" << endl;
    }
};

class Employee : Person // Derived -> child
{
public:
    Employee()
    {
        cout << "Employee Ctor" << endl;
    }
};

int main()
{
    // Person p1;
    Employee e1;
    return 0;
}