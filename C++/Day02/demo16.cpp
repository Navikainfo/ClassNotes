#include <iostream>
using namespace std;

class Time
{
private:
    // data members
    int hr;
    int min;

public:
    // void init()
    // {
    //     this->hr = 10;
    //     this->min = 10;
    // }

    // parameterized constructor
    Time(int h, int m)
    {
        cout << "Inside ctor" << endl;
        this->hr = h;
        this->min = m;
    }

    // Facilitators
    void acceptTime() // acceptTime(Time *const this)
    {
        cout << "Enter hrs and mins = ";
        cin >> this->hr >> this->min;
    }
    void printTime()
    {
        cout << "Time = " << this->hr << " : " << this->min << endl;
    }
};

int main()
{
    Time t1(10, 10);
    // t1.init();
    t1.printTime();

    Time t2(11, 11);
    // t2.init();
    t2.printTime();

    return 0;
}