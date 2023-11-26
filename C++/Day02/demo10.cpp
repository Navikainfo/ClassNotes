#include <iostream>
int num1 = 10;
namespace Na
{
    int num1 = 20;
    int num2 = 200;
}
namespace Nb
{
    int num1 = 30;
    int num3 = 300;
}

using namespace Na;
using namespace Nb;

int main()
{

    printf("Value of num1 from global = %d\n", ::num1);
    printf("Value of num1 from Na = %d\n", Na::num1);
    printf("Value of num1 from Nb = %d\n", Nb::num1);
    printf("Value of num2 from Na = %d\n", num2);
    printf("Value of num3 from Nb = %d\n", num3);

    return 0;
}