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

    // Mutators -> Setters
    void setHr(int hr)
    {
        this->hr = hr;
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
    return 0;
}