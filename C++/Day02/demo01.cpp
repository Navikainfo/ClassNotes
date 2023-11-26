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
        printf("Enter hrs and mins = ");
        scanf("%d%d", &hr, &min);
    }
    void printTime()
    {
        printf("Time = %d : %d\n", hr, min);
    }
};

int main()
{
    Time t1; // Object
    Time t2; // Object

    t1.acceptTime();
    t2.acceptTime();

    t1.printTime();
    t2.printTime();
    return 0;
}