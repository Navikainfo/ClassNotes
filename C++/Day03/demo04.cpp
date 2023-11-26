#include <iostream>
using namespace std;
#define SIZE 5.7;

inline int size()
{
    return 5.7;
}

inline int add(int num1, int num2)
{
    return num1 + num2;
}

int main()
{
    int arr[SIZE];
    int result = add(10, 20);
    // int result = 30;
    cout << "Addition = " << result << endl;
    return 0;
}
