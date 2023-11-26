#include <iostream>
using namespace std;

class Base
{
    int num1;

public:
    Base()
    {
        cout << "Base::ctor" << endl;
        this->num1 = 10;
    }
    Base(int num1)
    {
        cout << "Base::Parameterized ctor" << endl;
        this->num1 = num1;
    }

public:
    virtual void display()
    {
        cout << "Num1 = " << this->num1 << endl;
    }
    friend class Derived;
    friend class NonInherited;
};

class NonInherited
{
public:
    void display()
    {
        Base b;
        cout << b.num1 << endl;
    }
};

class Derived : public Base
{
    int num2;

public:
    Derived()
    {
        cout << "Derived::ctor" << endl;
        this->num2 = 20;
    }
    Derived(int num2)
    {
        cout << "Derived::Parameterized ctor" << endl;
        this->num2 = num2;
    }
    Derived(int num1, int num2) //: Base(num1)
    {
        cout << "Derived::Parameterized 2 ctor" << endl;
        this->num2 = num2;
        this->num1 = num1;
    }

    void display()
    {
        Base::display();
        cout << "Num2 = " << this->num2 << endl;
    }
};

int main()
{
    // Derived d;
    // Derived d(200);
    Derived d(100, 200);
    d.display();
    return 0;
}