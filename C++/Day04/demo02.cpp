#include <iostream>
using namespace std;

class Complex
{
private:
    int *rptr;
    int *iptr;

public:
    Complex(int real, int imag)
    {
        cout << "Inside Ctor" << endl;
        this->rptr = new int; // rptr -> this->rptr
        iptr = new int;
        *this->rptr = real;
        *iptr = imag;
    }
    void displayComplex()
    {
        cout << "Real = " << *this->rptr << endl;
        cout << "Imag = " << *iptr << endl;
    }

    void destroy()
    {
        delete this->rptr;
        delete iptr;
        this->rptr = NULL;
        iptr = NULL;
    }
};

int main()
{
    Complex c1(10, 20);
    c1.displayComplex();
    c1.destroy();

    Complex c2(30, 40);
    c2.displayComplex();
    c2.destroy();
    return 0;
}