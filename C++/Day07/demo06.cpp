#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base::Ctor" << endl;
    }
    void f1()
    {
        cout << "Base::f1()" << endl;
    }
    void f2()
    {
        cout << "Base::f2()" << endl;
    }
    virtual ~Base()
    {
        cout << "Base::Dtor" << endl;
    }
};

class Derived : public Base
{

public:
    Derived()
    {
        cout << "Derived::Ctor" << endl;
    }
    void f3()
    {
        cout << "Derived::f3()" << endl;
    }
    ~Derived()
    {
        cout << "Derived::Dtor" << endl;
    }
};

int main()
{
    Base *ptr = new Derived();
    ptr->f2();
    delete ptr;
    return 0;
}