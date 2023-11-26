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

class Derived1 : public Base
{
public:
    void f2()
    {
        cout << "Derived::f2()" << endl;
    }
    void f3()
    {
        cout << "Derived::f3()" << endl;
    }
};

class Derived2 : public Base
{
public:
    void f2()
    {
        cout << "Derived2::f2()" << endl;
    }
    void f4()
    {
        cout << "Derived2::f34()" << endl;
    }
};

int main()
{
    Base *bptr = new Derived2; // upcasting
    // bptr->f1();
    // bptr->f2();

    cout << "Type of bptr = " << typeid(bptr).name() << endl;
    cout << "Type of *bptr = " << typeid(*bptr).name() << endl;

    return 0;
}