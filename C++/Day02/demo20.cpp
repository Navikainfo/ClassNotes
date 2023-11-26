#include <iostream>
using namespace std;

class Time
{
private:
    // data members
    int hr;
    int min;

public:
    Time()
    {
        this->hr = 10;
        this->min = 10;
    }

    Time(int hr, int min)
    {
        this->hr = hr;
        this->min = min;
    }

    // Facilitators
    void acceptTime()
    {
        cout << "Enter hrs and mins = ";
        cin >> this->hr >> this->min;
    }
    void printTime()
    {
        cout << "Time = " << this->hr << " : " << this->min << endl;
    }

    // Mutators -> setters
    void setHr(int hr)
    {
        this->hr = hr;
    }

    // Inspectors -> getters
    int getMin()
    {
        return this->min;
    }
};

int main()
{
    Time t1(11, 11);
    t1.printTime();

    // t1.hr = 12; // NOT OK
    t1.setHr(12);

    cout << "After change in t1.hr = " << endl;
    t1.printTime();

    // cout << "value of t1.min" << t1.min << endl;
    cout << "value of t1.min = " << t1.getMin() << endl;

    return 0;
}