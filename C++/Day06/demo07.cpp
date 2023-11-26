#include <iostream>
using namespace std;

class Base
{
public:
    int num1;
    Base()
    {
        cout << "Base::Ctor" << endl;
        this->num1 = 10;
    }
    void printBase()
    {
        cout << "base = " << num1 << endl;
    }
};

class Dervied1 : virtual public Base
{
public:
    int num2;
    Dervied1()
    {
        cout << "Derived1::Ctor" << endl;
        this->num2 = 20;
    }
    void printDervied1()
    {
        cout << "Dervied1 = " << num1 << "," << num2 << endl;
    }
};

class Dervied2 : virtual public Base
{
public:
    int num3;
    Dervied2()
    {
        cout << "Derived2::Ctor" << endl;
        this->num3 = 30;
    }
    void printDervied2()
    {
        cout << "Dervied2 = " << num1 << "," << num3 << endl;
    }
};

class IndirectDerived : public Dervied2, public Dervied1
{
public:
    int num4;
    IndirectDerived()
    {
        cout << "IndirectDerived::ctor" << endl;
        this->num4 = 40;
    }
    void printIndirectDerived()
    {
        cout << num1 << num2 << num3 << num4 << endl;
    }
};

int main()
{
    IndirectDerived id;
    return 0;
}