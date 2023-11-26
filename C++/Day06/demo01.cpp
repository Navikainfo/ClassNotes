#include <iostream>
using namespace std;

// Dependency Class
class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date()
    {
        this->day = 0;
        this->month = 0;
        this->year = 0;
    }
    Date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    void acceptDate()
    {
        cout << "Enter the day = ";
        cin >> this->day;
        cout << "Enter the month = ";
        cin >> this->month;
        cout << "Enter the year = ";
        cin >> this->year;
    }
    void displayDate()
    {
        cout << this->day << "/" << this->month << "/" << this->year << endl;
    }

    void setDay(int day)
    {
        this->day = day;
    }
    void setMonth(int month)
    {
        this->month = month;
    }
    void setYear(int year)
    {
        this->year = year;
    }
};

// Dependent
class Employee
{
private:
    int empid;
    string name;
    double salary;
    Date doj; // Association -> Composition
public:
    Employee()
    {
        this->empid = 0;
        this->name = "";
        this->salary = 0;
    }
    Employee(int empid, string name, double salary, int day, int month, int year) : doj(day, month, year)
    {
        this->empid = empid;
        this->name = name;
        this->salary = salary;
        // doj.setDay(day);
        // doj.setMonth(month);
        // doj.setYear(year);
    }

    void acceptEmployee()
    {
        cout << "Enter empid = ";
        cin >> this->empid;
        cout << "Enter name = ";
        cin >> this->name;
        cout << "Enter salary = ";
        cin >> this->salary;
        cout << "Enter Date Of joining = " << endl;
        this->doj.acceptDate();
    }

    void displayEmployee()
    {
        cout << "Empid = " << this->empid << endl;
        cout << "Name = " << this->name << endl;
        cout << "Salary = " << this->salary << endl;
        cout << "Date of joining = ";
        this->doj.displayDate();
    }
    Date getDoj()
    {
        return this->doj;
    }
    void setDoj(Date doj)
    {
        this->doj = doj;
    }
};

int main()
{
    // Date d1(1, 1, 2023);
    //  d1.acceptDate();
    // d1.displayDate();

    Employee e1(1, "rohan", 1000, 1, 1, 2023);
    // e1.acceptEmployee();
    e1.displayEmployee();
    return 0;
}