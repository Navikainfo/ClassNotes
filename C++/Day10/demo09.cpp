#include <iostream>
using namespace std;

int num6;

class Outer
{
private:
    int num1;
    int num2;
    static int num5;

public:
    void f1_Outer()
    {
        cout << num1 << num2 << endl;
    }

    // Nested class
    class Inner
    {
    private:
        int num3;
        static int num4;

    public:
        void f2_Inner()
        {
            Outer o1;
            o1.f1_Outer();
            o1.f3_Outer();

            // cout << num1 << num2 << endl;
            cout << o1.num1 << o1.num2 << endl;
            cout << num5 << endl;
            cout << num6 << endl;
        }
    };

    void f3_Outer()
    {
        Inner i1;
        i1.f2_Inner();
        cout << num3 << endl;
        cout << i1.num3 << endl;
        cout << num4 << endl;
        cout << i1.num4 << endl;
        cout << num6 << endl;
    }
};

int main()
{
    Outer o1;
    o1.f1_Outer();

    Outer::Inner i1;
    i1.f2_Inner();
    return 0;
}