#include <iostream>
using namespace std;

class Time
{
private:
    // data members
    int hr;
    int min;

public:
    // Facilitators
    void acceptTime() // acceptTime(Time *const this)
    {
        cout << "Enter hrs and mins = ";
        cin >> this->hr >> min;
    }
    void printTime()
    {
        cout << "Time = " << hr << " : " << this->min << endl;
    }
};

int main()
{
    Time t1; // Object
    Time t2; // Object
    Time t3; // Object

    t1.acceptTime(); // 10:11 // acceptTime(&t1);
    t3.acceptTime(); // 11:12 // acceptTime(&t3);
    t2.acceptTime(); // 12:25 //  acceptTime(&t2);

    t2.printTime(); // 12:25
    t3.printTime(); // 11:12
    t1.printTime(); // 10:11
    return 0;
}