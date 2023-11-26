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
        this->rptr = new int;
        iptr = new int;
        *this->rptr = real;
        *iptr = imag;
    }
    void displayComplex()
    {
        cout << "Real = " << *this->rptr << endl;
        cout << "Imag = " << *iptr << endl;
    }

    ~Complex()
    {
        delete this->rptr;
        delete iptr;
        this->rptr = NULL;
        iptr = NULL;
    }
};

int main()
{
    Complex *arr[2];

    // dynamic memory allocation for objects
    // keeping dummy values in the array of objects
    arr[0] = new Complex(10, 20);
    arr[1] = new Complex(30, 40);

    // displaying the objects
    for (int i = 0; i < 2; i++)
    {
        cout << "values at index " << i << " = " << endl;
        arr[i]->displayComplex();
    }

    // deallocating the objects memory
    delete arr[0];
    delete arr[1];
}