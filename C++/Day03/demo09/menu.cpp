#include "./menu.h"
#include <iostream>
using namespace std;

Emenu menu()
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
    return Emenu(choice);
}