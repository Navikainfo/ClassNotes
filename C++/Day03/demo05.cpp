#include <iostream>
using namespace std;

class Employee
{
private:
    int empid;
    string name;
    double salary;

public:
    Employee()
    {
    }

    Employee(int empid, string name, double salary)
    {
        this->empid = empid;
        this->name = name;
        this->salary = salary;
    }

    void acceptEmployee()
    {
        cout << "Enter the empid = ";
        cin >> empid;
        cout << "Enter the name = ";
        cin >> name;
        cout << "Enter the salary = ";
        cin >> salary;
    }
    void displayEmployee()
    {
        cout << "Empid = " << empid << endl;
        cout << "Name = " << name << endl;
        cout << "Salary = " << salary << endl;
    }
    double getSalary()
    {
        return salary;
    }

    void setSalary(double salary)
    {
        this->salary = salary;
    }
};

void increment(Employee *eptr)
{
    // eptr->salary = eptr->salary * 2; // NOT OK
    eptr->setSalary(eptr->getSalary() * 2);
}

int main()
{
    Employee e1;
    e1.acceptEmployee();
    e1.displayEmployee();

    Employee e2;
    e2.acceptEmployee();
    e2.displayEmployee();

    Employee e3(3, "e3", 3000);
    e3.displayEmployee();

    increment(&e1);
    e1.displayEmployee();

    return 0;
}