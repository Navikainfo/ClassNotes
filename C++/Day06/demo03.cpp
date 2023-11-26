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
};

// Dependency Class
class Vehicle
{
private:
    string veh_name;
    string veh_number;

public:
    Vehicle()
    {
        this->veh_name = "";
        this->veh_number = "";
    }
    Vehicle(string veh_name, string veh_number)
    {
        this->veh_name = veh_name;
        this->veh_number = veh_number;
    }

    void acceptVehicle()
    {
        cout << "Enter Vehicle name = ";
        cin >> this->veh_name;
        cout << "Enter Vehicle number = ";
        cin >> this->veh_number;
    }

    void displayVehicle()
    {
        cout << "Vehicle Details = " << endl;
        cout << "Vehicle Name = " << this->veh_name << endl;
        cout << "Vehicle Number = " << this->veh_number << endl;
    }
};

// Dependent
class Employee
{
private:
    int empid;
    string name;
    double salary;
    Date doj;
    Vehicle *veh_ptr; /// Association -> Aggegration

public:
    Employee()
    {
        this->empid = 0;
        this->name = "";
        this->salary = 0;
        this->veh_ptr = NULL;
    }

    void addVehicle()
    {
        int choice;
        cout << "Do you own a vehicle ? " << endl;
        cout << "Enter '1' for \"Yes\" '0' For \"No\" = ";
        cin >> choice;
        if (choice == 1)
        {
            veh_ptr = new Vehicle();
            veh_ptr->acceptVehicle();
        }
    }

    void acceptEmployee()
    {
        cout << "Enter empid = ";
        cin >> this->empid;
        cout << "Enter name = ";
        cin >> this->name;
        cout << "Enter salary = ";
        cin >> this->salary;
        cout << "Enter Date of Joining = " << endl;
        doj.acceptDate();
        addVehicle();
    }

    void displayEmployee()
    {
        cout << "Empid = " << this->empid << endl;
        cout << "Name = " << this->name << endl;
        cout << "Salary = " << this->salary << endl;
        cout << "Date of Joining = ";
        doj.displayDate();
        if (veh_ptr != NULL)
            veh_ptr->displayVehicle();
    }

    ~Employee()
    {
        if (veh_ptr != NULL)
            delete veh_ptr;
    }

    void addNewVehicle()
    {
    }
    void editVehicle()
    {
    }
};

int main()
{
    Employee e1;
    e1.acceptEmployee();
    e1.displayEmployee();
    return 0;
}