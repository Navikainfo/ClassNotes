#include "../include/person.h"
using namespace NPerson;

Person::Person()
{
    this->name = "";
}
Person::Person(string name)
{
    this->name = name;
}
void Person::acceptData()
{
    cout << "Enter the Name =";
    cin >> this->name;
}
void Person::displayData()
{
    cout << "Name = " << this->name << endl;
}
string Person::getName()
{
    return this->name;
}