#include <iostream>
using namespace std;

// abstract class
class Base
{
public:
    void f1()
    {
        cout << "Base::f1()" << endl;
    }
    // pure virtual function
    virtual void f2() = 0;
};

class Derived : public Base
{
public:
    // function overriding
    void f2()
    {
        cout << "Derived :::f2()" << endl;
    }
    void f3()
    {
        cout << "Derived::f3()" << endl;
    }
};

int main()
{
    Base *bptr = new Derived();
    bptr->f2();
    delete bptr;

    return 0;
}