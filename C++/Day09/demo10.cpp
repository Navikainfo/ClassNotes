#include <iostream>
using namespace std;

class Employee
{
private:
    int empid;
    string name;
    double salary;

    Employee(int empid, string name, double salary)
    {
        this->empid = empid;
        this->name = name;
        this->salary = salary;
    }

public:
    void displayEmployee()
    {
        cout << "Empid = " << this->empid << endl;
        cout << "Name = " << this->name << endl;
        cout << "Salary = " << this->salary << endl;
    }
    static Employee *createemployee() throw (float, char) // Exception Specification list
    {
        int empid;
        string name;
        double salary;
        cout << "Enter the empid = ";
        cin >> empid;
        if (empid <= 0)
            throw 2.5f;
        cout << "Enter the name = ";
        cin >> name;
        if (name.length() <= 2)
            throw 'a';
        cout << "Enter the salary = ";
        cin >> salary;
        if (salary <= 500)
            throw "salary cannot be less than 500";

        return new Employee(empid, name, salary);
    }
};

int main()
{
    try
    {
        Employee *eptr = Employee::createemployee();
        eptr->displayEmployee();
        delete eptr;
    }
    catch (float error)
    {
        cout << "Empid cannot be 0 " << endl;
    }
    catch (char error)
    {
        cout << "Name should be atleast 3 character " << endl;
    }
    catch (char const *error)
    {
        cout << error << endl;
    }
    return 0;
}