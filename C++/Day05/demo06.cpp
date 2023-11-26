#include <iostream>
using namespace std;

class Circle
{
private:
    int radius;
    static double pi;

public:
    void acceptData()
    {
        cout << "enter radius = ";
        cin >> this->radius;
    }
    void calculateArea() // Circle
    {
        cout << "Area of circle = " << Circle::pi * this->radius * this->radius << endl;
    }
};
// initialize static data member
double Circle::pi = 3.14;

int main()
{
    Circle c1;
    Circle c2;
    Circle c3;

    c1.acceptData();
    c2.acceptData();
    c3.acceptData();
    c1.calculateArea();
    c2.calculateArea();
    c3.calculateArea();

    return 0;
}