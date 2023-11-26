#include <iostream>
using namespace std;

class Base
{
public:
    void f1()
    {
        cout << "Base::f1()" << endl;
    }
    virtual void f2()
    {
        cout << "Base::f2()" << endl;
    }
};

class Derived : public Base
{
public:
    void f3()
    {
        cout << "Derived::f3()" << endl;
    }
};

int main()
{
    // Base *bptr = new Derived; // upcasting
    Base *bptr = new Base;
    bptr->f1();
    bptr->f2();

    Derived *dptr = dynamic_cast<Derived *>(bptr);

    if (dptr != NULL)
        cout << "Downcasting is successful" << endl;
    else
        cout << "Downcasting Failed" << endl;

    return 0;
}