#include <iostream>
using namespace std;

// template <typename T>
// void add(T num1, T num2)
// {
//     cout << "Addition = " << num1 + num2 << endl;
// }

template <typename X, typename Y>
void add(X num1, Y num2)
{
    cout << "Addition = " << num1 + num2 << endl;
}

int main()
{
    add(10, 20);
    add(10.20, 20.24);
    add(10, 20.30);
    add(10.30, 20);

    return 0;
}