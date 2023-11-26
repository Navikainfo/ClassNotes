#include <iostream>
using namespace std;

class Base
{
public:
    void f1()
    {
        cout << "Base::f1()" << endl;
    }
    void f2()
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
    Base bobj;
    bobj.f1();
    bobj.f2();
    // bobj.f3(); NOT OK

    Derived dobj;
    dobj.f1();
    dobj.f2();
    dobj.f3();
    return 0;
}