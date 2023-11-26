#include <iostream>

namespace Na
{
    int num1 = 10;
    namespace Nb
    {
        int num1 = 20;
        int num2 = 30;
    }
}

using namespace Na;

int main()
{
    printf("Value of num1 from Na = %d\n", num1);
    using namespace Nb;
    printf("Value of num1 from Nb = %d\n", Nb::num1);
    printf("Value of num2 from Nb = %d\n", num2);
    return 0;
}