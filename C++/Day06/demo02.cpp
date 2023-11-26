#include <iostream>
using namespace std;

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
    Vehicle *veh_ptr; /// Association -> Aggegration

public:
    Employee()
    {
        this->empid = 0;
        this->name = "";
        this->salary = 0;
        this->veh_ptr = NULL;
    }
    Employee(int empid, string name, double salary)
    {
        this->empid = empid;
        this->name = name;
        this->salary = salary;
        this->veh_ptr = NULL;
    }
    Employee(int empid, string name, double salary, string veh_name, string veh_number)
    {
        this->empid = empid;
        this->name = name;
        this->salary = salary;
        this->veh_ptr = new Vehicle(veh_name, veh_number);
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
        addVehicle();
    }

    void displayEmployee()
    {
        cout << "Empid = " << this->empid << endl;
        cout << "Name = " << this->name << endl;
        cout << "Salary = " << this->salary << endl;
        if (veh_ptr != NULL)
            veh_ptr->displayVehicle();
    }

    ~Employee()
    {
        if (veh_ptr != NULL)
            delete veh_ptr;
    }
};

int main()
{
    Employee e1;
    e1.acceptEmployee();
    e1.displayEmployee();
    return 0;
}