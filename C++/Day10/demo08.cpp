#include <iostream>
using namespace std;

int num2 = 20;

void myfun()
{
    int num1 = 10;
    static int num3 = 30;

    // local class
    class Complex
    {
    private:
        int real;
        int imag;

    public:
        void f1()
        {
            cout << real << imag << endl;
        }
        void f2()
        {

            cout << num1 << num2 << num3 << endl;
        }
    };

    Complex c1;
    c1.f1();
    c1.f2();
    c1.real;
    c1.imag;
}

int main()
{
    myfun();
    return 0;
}