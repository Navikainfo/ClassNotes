#include <iostream>
using namespace std;

// Function overloading

void add(int num1, int num2) // add_i_i
{
    cout << "Addition of 2 int nos = " << num1 + num2 << endl;
}

void add(int num1, int num2, int num3) // add_i_i_i
{
    cout << "Addition of 3 int nos = " << num1 + num2 + num3 << endl;
}

void add(double num1, double num2) // add_d_d
{
    cout << "Addition of 2 double nos = " << num1 + num2 << endl;
}

void add(int num1, double num2) // add_i_d
{
    cout << "Addition of 1 int and 1 double no = " << num1 + num2 << endl;
}

void add(double num1, int num2) // add_d_i
{
    cout << "Addition of 1 double and 1 int no = " << num1 + num2 << endl;
}
int main()
{
    add(10, 20);
    add(10, 20, 30);
    add(10.20, 20.35);
    add(10, 20.12);
    add(10.12, 20);
    return 0;
}
