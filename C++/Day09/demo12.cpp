#include <iostream>
using namespace std;

class EmployeeException
{
private:
    int error_code;
    string message;

public:
    EmployeeException()
    {
        this->error_code = 1000;
        this->message = "Something went wrong";
    }

    EmployeeException(int error_code, string message)
    {
        this->error_code = error_code;
        this->message = message;
    }

  
    void printStackTrace()
    {
        cout << "ERROR : EmployeeException" << endl;
        cout << "ERROR CODE : " << this->error_code << " - ";
        cout << this->message << endl;
    }
};

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
   
    static Employee *createemployee()
    {
        int empid;
        string name;
        double salary;
        cout << "Enter the empid = ";
        cin >> empid;
        if (empid <= 0)
            throw EmployeeException(1001, "Empid cannot be 0");
        cout << "Enter the name = ";
        cin >> name;
        if (name.length() <= 2)
            throw EmployeeException(1005, "name should be atleast 3 characters");
        cout << "Enter the salary = ";
        cin >> salary;
        if (salary <= 500)
            throw new EmployeeException(1008, "salary cannot be less than 500");

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
    catch (EmployeeException e)
    {
        e.printStackTrace();
    }

    return 0;
}
