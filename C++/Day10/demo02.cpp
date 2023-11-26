#include <iostream>
using namespace std;

template <class X, class Y>
class Point
{
private:
    X x_axis;
    Y y_axis;

public:
    Point(X x_axis, Y y_axis)
    {
        this->x_axis = x_axis;
        this->y_axis = y_axis;
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

    Point p2(2.4, 4.6);
    p2.displayPoint();

    Point p3('A', 20);
    p3.displayPoint();

    return 0;
}