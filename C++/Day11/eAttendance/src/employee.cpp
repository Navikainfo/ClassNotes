#include "../include/employee.h"
using namespace NPerson::NEmployee;

Employee::Employee()
{
}
Employee::Employee(int empid, double salary, string name) : Person(name)
{
    this->empid = empid;
    this->salary = salary;
}
void Employee::acceptData()
{
    cout << "Enter empid = ";
    cin >> this->empid;

    Person::acceptData();

    cout << "Enter salary = ";
    cin >> this->salary;
}
void Employee::displayData()
{
    cout << "Empid = " << this->empid << endl;

    Person::displayData();

    cout << "Salary = " << this->salary << endl;
    cout << "--------------------------" << endl;
}

int Employee::getEmpid()
{
    return this->empid;
}
double Employee::getSalary()
{
    return this->salary;
}

void Employee::editSalary()
{
    cout << "Enter the new Salary = ";
    cin >> this->salary;
}

void NPerson::NEmployee::save(vector<Employee *> &employeeList)
{
    ofstream fout("../data/Employee.txt");

    for (int i = 0; i < employeeList.size(); i++)
    {
        fout << employeeList.at(i)->getEmpid() << ","
             << employeeList.at(i)->getName() << ","
             << employeeList.at(i)->getSalary() << endl;
    }

    fout.close();
}

void NPerson::NEmployee::load(vector<Employee *> &employeeList)
{
    ifstream fin("../data/Employee.txt");
    string data;
    while (getline(fin, data))
    {
        stringstream line(data);
        string token[3];
        for (int i = 0; i < 3; i++)
            getline(line, token[i], ',');
        employeeList.push_back(new Employee(stoi(token[0]), stod(token[2]), token[1]));
    }

    fin.close();
}
Employee *NPerson::NEmployee::find(vector<Employee *> &employeeList)
{
    int id;
    cout << "Enter empid to search = ";
    cin >> id;
    for (int i = 0; i < employeeList.size(); i++)
        if (employeeList.at(i)->getEmpid() == id)
            return employeeList.at(i);
    return NULL;
}
