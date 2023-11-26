#include <iostream>
using namespace std;

int main5()
{
    const int num1 = 10;
    int num2 = 20;
    const int *const ptr = &num1;
    // ptr = &num2; // NOT OK
    //*ptr = 100; // NOT OK
    return 0;
}

int main4()
{
    const int num1 = 10;
    int num2 = 20;
    num2 = 200;
    const int *ptr = &num2;
    ptr = &num1; // OK
    //*ptr = 200; //NOT OK
    return 0;
}

int main3()
{
    const int num1 = 10;
    // num1 = 100;// NOT OK
    int num2 = 20;
    const int *ptr = &num1;
    //*ptr = 100; // NOT OK
    return 0;
}

int main2()
{
    int num1 = 10;
    int num2 = 20;
    int *const ptr = &num1;
    // ptr = &num2; NOT OK
    return 0;
}

int main1()
{
    // const int num1 = 10; // Allowed
    int const num1 = 10;
    // num1 = 20; // NOT OK
    return 0;
}