#include <iostream>
using namespace std;

// Dynamic 2D Array
int main()
{
    int **arr = new int *[2]; // dynamic memory for pointer array(1st Dimension)

    arr[0] = new int[3]; // dynamic memory for int array(2nd Dimension on arr[0])
    arr[1] = new int[3]; // dynamic memory for int array(2nd Dimension on arr[1])

    arr[0][0] = 10;
    arr[0][1] = 20;
    arr[0][2] = 30;
    arr[1][0] = 40;
    arr[1][1] = 50;
    arr[1][2] = 60;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "arr[" << i << "][" << j << "] = " << arr[i][j] << endl;
        }
    }

    delete[] arr[0]; // deallocatimg dynamic memory on arr[0];
    delete[] arr[1]; // deallocatimg dynamic memory on arr[1];
    delete[] arr;    // deallocating the dynamic memory of array of pointers
    arr = NULL;
    return 0;
}