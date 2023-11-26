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
    friend void operator<<(ostream &out, Point &p);
    friend void operator>>(istream &in, Point &p);
};

void operator<<(ostream &out, Point &p)
{
    out << "Point = (" << p.x_axis << "," << p.y_axis << ")" << endl;
}

void operator>>(istream &in, Point &p)
{
    cout << "Enter the x_axis";
    in >> p.x_axis;
    cout << "Enter the y_axis";
    in >> p.y_axis;
}

int main()
{
    Point p1(2, 4);
    Point p2(3, 5);
    cout << p1; // operator<<(cout,p1)
    cout << p2;

    Point p3;
    cin >> p3; // operator>>(cin,p3)

    return 0;
}
