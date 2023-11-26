#include <iostream>

int roi = 5; // global namespace

namespace NSenoir
{
    int roi = 7; // NSenior Namespace
}

int main()
{
    printf("Value of roi = %d\n", roi);
    printf("Value of Senior roi = %d\n", NSenoir::roi);
    return 0;
}