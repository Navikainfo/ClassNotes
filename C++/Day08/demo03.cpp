#include <iostream>
using namespace std;

class Point
{
private:
    int *xptr;
    int *yptr;

public:
    Point()
    {
        cout << "Parameterless ctor" << endl;
        xptr = new int;
        yptr = new int;
    }
    Point(int x_axis, int y_axis)
    {
        cout << "Parameterized ctor" << endl;
        xptr = new int;
        yptr = new int;
        *xptr = x_axis;
        *yptr = y_axis;
    }
    // Copy Ctor
    Point(Point &p)
    {
        cout << "Inside Copy ctor" << endl;
        xptr = new int;
        yptr = new int;
        *xptr = *p.xptr;
        *yptr = *p.yptr;
    }

    void setX_axis(int x_axis)
    {
        *xptr = x_axis;
    }

    void displayPoint()
    {
        cout << "Point = (" << *xptr << "," << *yptr << ")" << endl;
    }

    ~Point()
    {
        delete xptr;
        delete yptr;
        xptr = NULL;
        yptr = NULL;
    }
};

int main()
{
    Point p1(2, 4);
    p1.displayPoint();
    Point p2 = p1;
    p2.displayPoint();

    p1.setX_axis(5);
    cout << "After change in p1 = " << endl;
    p1.displayPoint();
    p2.displayPoint();

    return 0;
}
