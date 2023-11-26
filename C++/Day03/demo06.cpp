#include <iostream>
#include <string>
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
        this->empid = 0;
        this->name = "";
        this->salary = 300;
    }

    void acceptEmployee()
    {
        cout << "Enter the empid = ";
        cin >> this->empid;
        getchar();
        cout << "Enter the name = ";
        getline(cin, this->name);

        cout << "Enter the salary = ";
        cin >> this->salary;
    }
    void displayEmployee()
    {
        cout << "Empid = " << this->empid << endl;
        cout << "Name = " << this->name << endl;
        cout << "Salary = " << this->salary << endl;
    }

    void increment()
    {
        this->salary = this->salary * 2;
    }
};

int menu()
{
    int choice;
    cout << "*******************" << endl;
    cout << "0. EXIT" << endl;
    cout << "1. Add Employee" << endl;
    cout << "2. Display Employee" << endl;
    cout << "3. Increment Salary" << endl;
    cout << "Enter your choice = ";
    cin >> choice;
    cout << "*******************" << endl;
    return choice;
}

int main()
{
    Employee e;
    int choice;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            e.acceptEmployee();
            break;
        case 2:
            e.displayEmployee();
            break;
        case 3:
            e.increment();
            cout << "Congratulations...You received an increment" << endl;
            break;
        default:
            cout << "Wrong choice entered ...:(" << endl;
            break;
        }
    }
    cout << "Thank you for using our app...:)" << endl;
    return 0;
}