#include <iostream>
using namespace std;

class Point
{
private:
    int x;
    int y;

public:
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    friend void add(Point p1, Point p2);
};

// friend function
void add(Point p1, Point p2)
{
    p1.x + p2.x;
    p1.y + p2.y;
}

int main()
{
    Point p1(1, 2);

    Point p2(3, 4);
    add(p1, p2);
    return 0;
}
