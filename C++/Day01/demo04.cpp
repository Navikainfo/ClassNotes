#include <iostream>

struct Time
{
    int hr;
    int min;

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
    printf("inside encapsulated structure..\n");
    struct Time t1;
    t1.acceptTime();
    t1.displayTime();
    return 0;
}