#include <iostream>

class Time
{

protected:
    int hr;
    int min;

public:
    void acceptTime()
    {
        printf("Enter the hrs = ");
        scanf("%d", &hr);
        printf("Enter the mins = ");
        scanf("%d", &min);
    }

    void displayTime()
    {
        printf("Time = %d : %d \n", hr, min);
    }
};

int main()
{
    printf("class implementation\n");
    Time t1;
    t1.acceptTime();
    // t1.hr = 10; // NOT OK
    t1.displayTime();
    return 0;
}