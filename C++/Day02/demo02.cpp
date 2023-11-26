#include <iostream>

class Time
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
};

int main()
{
    Time().acceptTime(); // Anonymous object
    return 0;
}