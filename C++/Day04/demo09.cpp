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
    Complex arr[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the values for index " << i << " = " << endl;
        arr[i].acceptComplex();
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "values at index " << i << " = " << endl;
        arr[i].displayComplex();
    }

    return 0;
}