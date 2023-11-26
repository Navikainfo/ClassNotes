#include <iostream>
using namespace std;

void changeNum1(int &ref)
{
    cout << "Address of ref/num1 = " << &ref << endl;
    cout << "value inside ref = " << ref << endl;
    ref = 20;
}

void main()
{
    int num1;
    num1 = 10;

    int *ptr;
    ptr = &num1;

    // int &ref; // NOT OK
    int &ref = num1;
    //&ref = num1; // NOT OK

    // int &ref2 = new int; // NOT OK
}

int main2()
{
    int num1 = 10;
    cout << "Address of num1 = " << &num1 << endl;
    cout << "Before change in num1 = " << num1 << endl;
    changeNum1(num1); // pass by reference
    cout << "After change in num1 = " << num1 << endl;

    return 0;
}

int main1()
{
    int num1 = 10;
    cout << "Address of num1 = " << &num1 << endl;

    int &ref = num1; // reference
    cout << "Address of ref = " << &ref << endl;

    // int *ptr = &num1; // pointer
    // cout << "Address of ptr = " << &ptr << endl;

    return 0;
}
