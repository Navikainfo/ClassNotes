#include <iostream>
using namespace std;

class Time
{
private:
    // data members
    int hr;
    int min;

public:
    // Ctor members initializer list
    Time() : hr(10), min(10)
    {
        cout << "Inside parameterless ctor" << endl;
        // this->hr = 10;
        // this->min = 10;
    }

    // Ctor members initializer list
    Time(int hr, int min) : hr(hr), min(min)
    {
        cout << "Inside parameterized ctor" << endl;
        // this->hr = hr;
        // this->min = min;
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

    Time t3;
    t3.printTime();
    return 0;
}