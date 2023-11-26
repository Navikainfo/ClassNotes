#include <iostream>
using namespace std;

int main()
{
    int *arr[5];

    // dynamic memory allocation of 2nd dimension
    for (int i = 0; i < 5; i++)
        arr[i] = new int[3];

    // keeping dummy values in the array
    int value = 10;
    for (int r = 0; r < 5; r++)
        for (int c = 0; c < 3; c++)
        {
            arr[r][c] = value;
            value += 10;
        }

    // displaying the entire array
    for (int r = 0; r < 5; r++)
        for (int c = 0; c < 3; c++)
            cout << "arr[" << r << "][" << c << "] = " << arr[r][c] << endl;

    /// deallocating the arrray
    for (int i = 0; i < 5; i++)
        delete[] arr[i];
    return 0;
}