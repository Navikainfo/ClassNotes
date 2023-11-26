#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
using namespace std;

class Employee
{
private:
    int empid;
    string name;
    double salary;

public:
    Employee();
    void acceptEmployee();
    void displayEmployee();
    void increment();
};

#endif