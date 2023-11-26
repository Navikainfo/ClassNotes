#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    Complex(int real, int imag)
    {
        this->real = real;
        this->imag = imag;
    }
    void displayComplex()
    {
        cout << "Real = " << this->real << endl;
        cout << "Imag = " << this->imag << endl;
    }
};

int main()
{
    // Complex c1(10, 20);
    // c1.displayComplex();

    Complex *ptr = new Complex(10, 20);
    ptr->displayComplex();
    delete ptr; // deallocate the objects memory
    ptr = NULL; // avoid the dangling pointer
    return 0;
}