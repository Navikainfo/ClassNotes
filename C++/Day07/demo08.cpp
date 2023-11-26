#include <iostream>
using namespace std;

class Shape
{
private:
    double area;

protected:
    void setArea(double area)
    {
        this->area = area;
    }

public:
    void displayArea()
    {
        cout << "Area = " << this->area << endl;
    }

    virtual void acceptData() = 0;

    virtual void calculateArea() = 0;
};

class Circle : public Shape
{
private:
    int radius;

public:
    void acceptData()
    {
        cout << "Enter the radius = ";
        cin >> this->radius;
    }
    void calculateArea()
    {
        // this->area = 3.14 * this->radius * this->radius;
        this->setArea(3.14 * this->radius * this->radius);
    }
};

class Rectangle : public Shape
{
private:
    int length;
    int breadth;

public:
    void acceptData()
    {
        cout << "Enter the length = ";
        cin >> this->length;
        cout << "Enter the breadth = ";
        cin >> this->breadth;
    }

    void calculateArea()
    {
        this->setArea(this->length * this->breadth);
    }

    void displayArea()
    {
        cout << "Rectangle ";
        Shape::displayArea();
    }
};

int main()
{
    // Circle circle;
    // circle.acceptData();
    // circle.calculateArea();
    // circle.displayArea();

    Rectangle rectangle;
    rectangle.acceptData();
    rectangle.calculateArea();
    rectangle.displayArea();
    return 0;
}