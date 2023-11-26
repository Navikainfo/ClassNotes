#include <iostream>
using namespace std;

class Point
{
private:
    int x_axis;
    int y_axis;

public:
    Point()
    {
        cout << "Parameterless ctor" << endl;
    }
    Point(int x_axis, int y_axis)
    {
        cout << "Parameterized ctor" << endl;
        this->x_axis = x_axis;
        this->y_axis = y_axis;
    }

    void setX_axis(int x_axis)
    {
        this->x_axis = x_axis;
    }

    void displayPoint()
    {
        cout << "Point = (" << this->x_axis << "," << this->y_axis << ")" << endl;
    }
};

int main()
{
    Point p1(2, 4);
    p1.displayPoint();
    Point p2 = p1; // initialize
    p2.displayPoint();

    p1.setX_axis(5);
    cout << "After change in p1 = " << endl;
    p1.displayPoint();
    p2.displayPoint();

    return 0;
}
