#include <iostream>
using namespace std;

// 1D Array
int main()
{
    cout << "Dynamic 1D array - " << endl;
    int *arr = new int[5];

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    for (int i = 0; i < 5; i++)
    {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    delete[] arr;
    return 0;
}