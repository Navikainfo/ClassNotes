#include <iostream>
#include <vector>
using namespace std;

class Employee
{
private:
    int empid;
    string name;
    double salary;

public:
    void acceptEmployee()
    {
        cout << "Enter empid = ";
        cin >> this->empid;
        cout << "Enter name = ";
        cin >> this->name;
        cout << "Enter salary = ";
        cin >> this->salary;
    }

    void displayEmployee()
    {
        cout << "Empid = " << this->empid << endl;
        cout << "Name = " << this->name << endl;
        cout << "Salary = " << this->salary << endl;
    }

    int getEmpid()
    {
        return this->empid;
    }
};

int menu()
{
    int choice;
    cout << "************************" << endl;
    cout << "0.EXIT" << endl;
    cout << "1. Add Employee" << endl;
    cout << "2. Display All Employees" << endl;
    cout << "3. Find Employee" << endl;
    cin >> choice;
    cout << "************************" << endl;

    return choice;
}

int main()
{
    int choice;
    vector<Employee *> empList;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
        {
            Employee *eptr = new Employee();
            eptr->acceptEmployee();
            empList.push_back(eptr);
        }
        break;
        case 2:
            for (int i = 0; i < empList.size(); i++)
                empList.at(i)->displayEmployee();
            break;
        case 3:
        {
            int empid;
            cout << "Enter the empid to search = ";
            cin >> empid;
            for (int i = 0; i < empList.size(); i++)
                if (empList.at(i)->getEmpid() == empid)
                    empList.at(i)->displayEmployee();
        }
        break;
        default:
            cout << "Wrong choice..." << endl;
            break;
        }
    }

    // deallocatimg the dynamic memory for all objects added inside the vector
    for (int i = 0; i < empList.size(); i++)
        delete empList.at(i);
    return 0;
}