#include <iostream>
using namespace std;

class Base
{
private:
    int num1;

protected:
    int num2;

public:
    int num3;

    void printBase()
    {
        cout << num1 << num2 << num3 << endl;
    }

    friend void friendFunction();
};

void friendFunction()
{
    Base b;
    cout << b.num1 << b.num2 << b.num3 << endl;
}

int main()
{
    Base b;
    b.num1;
    b.num2;
    b.num3;
    return 0;
}