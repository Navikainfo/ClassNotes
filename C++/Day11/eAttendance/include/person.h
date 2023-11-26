#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;
namespace NPerson
{
    class Person
    {
    private:
        string name;

    public:
        Person();
        Person(string name);
        virtual void acceptData();
        virtual void displayData();
        string getName();
    };
}
#endif