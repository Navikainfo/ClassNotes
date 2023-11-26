#include <iostream>
using namespace std;

class Time
{
    int hr;
    int min;

public:
    Time()
    {
        cout << "Parameterless Ctor" << endl;
        this->hr = 10;
        this->min = 10;
    }
    Time(int hr, int min)
    {
        cout << "Parameterized Ctor" << endl;
        this->hr = hr;
        this->min = min;
    }
    Time(int min) // Conversion Function
    {
        cout << "Single Parameterized Ctor" << endl;
        this->hr = min / 60;
        this->min = min % 60;
    }

    void displayTime()
    {
        cout << "Time = " << this->hr << " : " << this->min << endl;
    }
    // conversion function
    operator int()
    {
        int mins = this->hr * 60 + this->min;
        return mins;
    }
};

int main()
{
    /*Time t1;
    t1.displayTime();

    Time t2(2, 5);
    t2.displayTime();

    Time t3(125);
    t3.displayTime();
    */

    Time t1(2, 5);
    t1.displayTime();

    int mins = t1; // conversion function
    cout << "total mins = " << mins << endl;

    Time t2;
    t2 = 125; // Conversion Function
    t2.displayTime();

    return 0;
}
