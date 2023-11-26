#include <iostream>
using namespace std;

// 2D Array
int main()
{
    int arr[2][3];

    arr[0][0] = 10;
    arr[0][1] = 20;
    arr[0][2] = 30;
    arr[1][0] = 40;
    arr[1][1] = 50;
    arr[1][2] = 60;

    // cout << "arr[0][0] = " << arr[0][0] << endl;
    // cout << "arr[0][1] = " << arr[0][1] << endl;
    // cout << "arr[0][2] = " << arr[0][2] << endl;
    // cout << "arr[1][0] = " << arr[1][0] << endl;
    // cout << "arr[1][1] = " << arr[1][1] << endl;
    // cout << "arr[1][2] = " << arr[1][2] << endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "arr[" << i << "][" << j << "] = " << arr[i][j] << endl;
        }
    }
    return 0;
}