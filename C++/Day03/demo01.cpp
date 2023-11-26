#include <iostream>
using namespace std;
void add(int num1, int num2); // declaration

int main()
{
    add(10, 20);
    return 0;
}
void add(int num1, int num2) // defination
{
    cout << "Addition = " << num1 + num2 << endl;
}