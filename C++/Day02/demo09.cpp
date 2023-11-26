#include <iostream>
int num1 = 10;
namespace Na
{
    int num1 = 20;
}

using namespace Na;
int main()
{

    // int num1 = 30;
    printf("Value of num1 from global = %d\n", ::num1);
    printf("Value of num1 from Na = %d\n", Na::num1);
    // printf("Value of num1 from local = %d\n", num1);

    return 0;
}