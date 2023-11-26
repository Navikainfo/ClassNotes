#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    double salary;

public:
    Employee()
    {
        cout << "Employee Ctor" << endl;
    }
    void accept()
    {
        cout << "Accept::Employee" << endl;
    }
    void display()
    {
        cout << "display::Employee" << endl;
    }
};

class Manager : virtual public Employee
{
private:
    float bonus;

public:
    Manager()
    {
        cout << "Manager Ctor" << endl;
    }
    void accept()
    {
        Employee::accept();
        cout << "Accept::Manager" << endl;
    }

    void display()
    {
        Employee::display();
        cout << "display::Manager" << endl;
    }

protected:
    void accept_manager()
    {
        cout << "Accept::Manager" << endl;
    }
    void display_manager()
    {
        cout << "display::Manager" << endl;
    }
};

class Salesman : virtual public Employee
{
private:
    float comm;

public:
    Salesman()
    {
        cout << "Salesman Ctor" << endl;
    }
    void accept()
    {
        Employee::accept();
        cout << "Accept::Salesman" << endl;
    }
    void display()
    {
        Employee::display();
        cout << "display::Salesman" << endl;
    }

protected:
    void accept_Salesman()
    {
        cout << "Accept::Salesman" << endl;
    }
    void display_Salesman()
    {
        cout << "display::Salesman" << endl;
    }
};

class SalesManager : public Manager, public Salesman
{
public:
    SalesManager()
    {
        cout << "SalesManager Ctor" << endl;
    }
    void accept()
    {

        Manager::accept_manager();
        Salesman::accept_Salesman();
        cout << "Accept::SalesManager" << endl;
    }
    void display()
    {
        Employee::display();
        Manager::display_manager();
        Salesman::display_Salesman();
        cout << "display::SalesManager" << endl;
    }
};
int main()
{

    SalesManager m1;
    m1.accept();
    m1.display();
    return 0;
}