#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    Complex()
    {
        this->real = 10;
        this->imag = 20;
    }
    void f1() const //(const Complex *const (this)) -> (Complex *const (this))
    {
        const_cast<Complex *const>(this)->real = 100;
        // this->imag = 200; // NOT OK
        cout << "Real = " << this->real << endl;
        cout << "Imag = " << this->imag << endl;
    }
    void f2() const
    {
        // this->real = 100;//NOT OK
        // this->imag = 200;//NOT OK
        cout << "Real = " << this->real << endl;
        cout << "Imag = " << this->imag << endl;
    }
};

int main()
{
    Complex c1;
    c1.f2();
    c1.f1();
    c1.f2();

    return 0;
}