#include <iostream>
int num1 = 10;

namespace Na
{
    int num1 = 20;
    void myfun()
    {
    }
    class Time
    {
    };
    struct Point
    {
    };

}
int main()
{
    int num1 = 30;
    printf("Value of num1 from global = %d\n", ::num1);
    printf("Value of num1 from Na = %d\n", Na::num1);
    printf("Value of num1 = %d\n", num1);
    Na::myfun();
    Na::Time t1;
    Na::Point p1;
    return 0;
}