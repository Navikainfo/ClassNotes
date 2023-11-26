#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void acceptData() = 0;
    virtual void calculateArea() = 0;
    virtual void displayarea()
    {
        cout << "Shape::Area" << endl;
    }
};

class Rectangle : public Shape
{
public:
    void acceptData()
    {
        cout << "Rectangle::acceptData()" << endl;
    }
    void calculateArea()
    {
        cout << "Rectangle::calculateArea()" << endl;
    }
};

class Circle : public Shape
{
public:
    void acceptData()
    {
        cout << "Circle::acceptData()" << endl;
    }
    void calculateArea()
    {
        cout << "Circle::calculateArea()" << endl;
    }
    void displayarea()
    {
        cout << "Circle::Area" << endl;
    }
};

void countObjects(Shape **arr)
{
    int rect_count = 0;
    int circle_count = 0;
    for (int i = 0; i < 10; i++)
    {
        if (typeid(*arr[i]) == typeid(Rectangle))
            rect_count++;
        else
            circle_count++;
    }
    cout << "Total rectangle objects = " << rect_count << endl;
    cout << "Total Circle objects = " << circle_count << endl;
}

int main()
{
    // Shape *shape = new Circle;
    // cout << "Type of shape = " << typeid(shape).name() << endl;
    // cout << "Type of *shape = " << typeid(*shape).name() << endl;

    // cout << "Type of shape = " << typeid(*shape[0]).name() << endl;
    // cout << "Type of Rectangle = " << typeid(Rectangle).name() << endl;

    Shape *shape[10];
    shape[0] = new Rectangle();
    shape[1] = new Rectangle();
    shape[2] = new Circle();
    shape[3] = new Rectangle();
    shape[4] = new Circle();
    shape[5] = new Rectangle();
    shape[6] = new Rectangle();
    shape[7] = new Circle();
    shape[8] = new Rectangle();
    shape[9] = new Circle();

    countObjects(shape);

    for (int i = 0; i < 10; i++)
        delete shape[i];
    return 0;
}