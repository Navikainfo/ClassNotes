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
    // friend Point operator+(Point p1, Point p2);

    Point operator+(Point p2) // this-> p1
    {
        Point result;
        result.x_axis = this->x_axis + p2.x_axis;
        result.y_axis = this->y_axis + p2.y_axis;
        return result;
    }
};

// Point operator+(Point p1, Point p2)
// {
//     Point result;
//     result.x_axis = p1.x_axis + p2.x_axis;
//     result.y_axis = p1.y_axis + p2.y_axis;
//     return result;
// }

int main()
{
    Point p1(2, 4);
    Point p2(3, 5);

    Point result = p1 + p2; // p1.operator+(p2)

    p1.displayPoint();
    p2.displayPoint();
    result.displayPoint();
    return 0;
}
