#include <iostream>
using namespace std;

int main()
{
    int *ptr = new int; // dynamic memory allocation
    *ptr = 23;
    cout << "Address of ptr = " << &ptr << endl;
    cout << "Address of dynamic memory = " << ptr << endl;
    cout << "Value at the dynamic memory pointer by ptr = " << *ptr << endl;
    delete ptr; // to deallocate the memory
    ptr = NULL; // to avoid dangling pointer
}
