#include <iostream>

namespace Na
{
    int num1 = 10;
}
namespace Nb
{
    int num1 = 20;
    int num2 = 30;
}
int main()
{
    printf("Value of num1 from Na = %d\n", Na::num1);
    printf("Value of num1 from Nb = %d\n", Nb::num1);
    printf("Value of num2 from Nb = %d\n", Nb::num2);

    return 0;
}