#include <iostream>

class // Anonymous class
{
private:
    // data members
    int hr;
    int min;

public:
    // member functions
    void acceptTime()
    {
        printf("Inside acceptTime ");
    }
    void printTime()
    {
        printf("Inside PrintTime");
    }
} obj;

int main()
{
    obj.acceptTime();
    obj.printTime();
    return 0;
}