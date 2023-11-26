#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

class Employee
{
private:
    int empid;
    string name;
    double salary;

    void writeIntoFile()
    {
        ofstream fout("emp.txt", ios::app);
        fout << this->empid << "," << this->name << "," << this->salary << endl;
        fout.close();
    }

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
    void acceptData()
    {
        cout << "Enter the empid = ";
        cin >> this->empid;
        cout << "Enter the name = ";
        cin >> this->name;
        cout << "Enter the salary = ";
        cin >> this->salary;
        this->writeIntoFile();
    }
    void displayData()
    {
        cout << "Empid = " << this->empid << endl;
        cout << "Name = " << this->name << endl;
        cout << "Salary = " << this->salary << endl;
        cout << "------------------------" << endl;
    }
    void readFromFile()
    {
        ifstream fin("emp.txt");
        string data;
        while (getline(fin, data))
        {
            stringstream line(data);
            /*string empid;
            string name;
            string salary;
            getline(line, empid, ',');
            getline(line, name, ',');
            getline(line, salary, ',');*/
            // Employee(stoi(empid), name, stod(salary)).displayData();

            string token[3];
            for (int i = 0; i < 3; i++)
                getline(line, token[i], ',');
            Employee(stoi(token[0]), token[1], stod(token[2])).displayData();
        }

        fin.close();
    }
};

int main()
{
    Employee e;
    // e.acceptData();
    // e.acceptData();
    // e.acceptData();
    e.readFromFile();

    return 0;
}