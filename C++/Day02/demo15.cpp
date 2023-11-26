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

    // constructor
    Time()
    {
        cout << "Inside ctor" << endl;
        this->hr = 10;
        this->min = 10;
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
    Time t1;
    // t1.init();
    t1.printTime();

    Time t2;
    // t2.init();
    t2.printTime();
    return 0;
}