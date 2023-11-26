#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    void acceptComplex()
    {
        cout << "Enter Real = ";
        cin >> this->real;
        cout << "Enetr Imag = ";
        cin >> this->imag;
    }
    void displayComplex()
    {
        cout << "Real = " << this->real << endl;
        cout << "Imag = " << this->imag << endl;
    }
};

int main()
{
    Complex *arr[5];

    // dynamic memory allocation for objects
    for (int i = 0; i < 5; i++)
        arr[i] = new Complex();

    // keeping dummy values in the array of objects
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the values for index " << i << " = " << endl;
        arr[i]->acceptComplex();
    }

    // displaying the objects
    for (int i = 0; i < 5; i++)
    {
        cout << "values at index " << i << " = " << endl;
        arr[i]->displayComplex();
    }

    /// deallocating the objects memory
    for (int i = 0; i < 5; i++)
        delete arr[i];

    return 0;
}