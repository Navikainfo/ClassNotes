#include <iostream>
using namespace std;

void my_div(int numerator, int denominator)
{
    if (denominator == 0)
        throw 3;
    cout << "Division = " << numerator / denominator << endl;
}
int main()
{
    try
    {
        my_div(10, 0);
    }
    catch (int error)
    {
        cout << "Division is not possible as demoninator is 0" << endl;
    }
    cout << "Successful Execution" << endl;
    return 0;
}