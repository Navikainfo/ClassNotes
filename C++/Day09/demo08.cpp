#include <iostream>
using namespace std;

class Arithmetic
{
private:
    int num1;
    int num2;

public:
    Arithmetic(int num1, int num2)
    {
        this->num1 = num1;
        this->num2 = num2;
    }
    void add()
    {
        cout << "Addition = " << num1 + num2 << endl;
    }
    void mul()
    {

        if (this->num1 == 0 || this->num2 == 0)
            throw 2.3;
        cout << "Multiplication = " << num1 * num2 << endl;
    }
    void div()
    {
        if (this->num2 == 0)
            throw 1;
        cout << "Division = " << num1 / num2 << endl;
    }
};
int main()
{
    Arithmetic a1(10, 0);
    a1.add();
    try
    {
        a1.div();
        a1.mul();
    }
    catch (int error)
    {
        cout << "Num2 cannot be 0.. Division is not possible" << endl;
    }
    catch (double error)
    {
        cout << "Num1 or Num2 cannot be 0.. Multiplication is not possible" << endl;
    }
    cout << "Successful Execution" << endl;
    return 0;
}