#include <iostream>
using namespace std;

void changeNum1(int n1)
{
    cout << "Address of n1 in changeNum1 = " << &n1 << endl;
    cout << "Address of n1 in changeNum1 = " << n1 << endl;
    n1 = 20;
}

void changeNum1ByAddress(int *ptr)
{
    cout << "Address of ptr in changeNum1 = " << &ptr << endl;
    cout << "Address of num1 in changeNum1 = " << ptr << endl;
    cout << "Value of num1 in changeNum1 = " << *ptr << endl;
    *ptr = 20;
}

int main()
{
    int num1 = 10;
    cout << "Before change in num1 = " << num1 << endl;
    cout << "Address of num1 in main = " << &num1 << endl;
    changeNum1ByAddress(&num1); // pass by address
    cout << "After change in num1 = " << num1 << endl;
    return 0;
}

int main1()
{
    int num1 = 10;
    cout << "Before change in num1 = " << num1 << endl;
    cout << "Address of num1 in main = " << &num1 << endl;
    changeNum1(num1); // pass by value
    cout << "After change in num1 = " << num1 << endl;
    return 0;
}