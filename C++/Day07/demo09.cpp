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
    virtual void displayArea()
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

int menu()
{
    int choice;
    cout << "0. Exit" << endl;
    cout << "1. Area of Circle" << endl;
    cout << "2. Area of Rectangle" << endl;
    cout << "Enter Your Chocie = ";
    cin >> choice;
    return choice;
}

int main()
{
    int choice;
    Shape *shape = NULL;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            shape = new Circle(); // upcasting
            break;
        case 2:
            shape = new Rectangle(); // upcasting
            break;
        default:
            cout << "Wrong Choice ..." << endl;
            break;
        }
        if (shape != NULL)
        {
            shape->acceptData();
            shape->calculateArea();
            shape->displayArea();
            delete shape;
            shape = NULL;
        }
    }
    cout << "Thank you for using our app..." << endl;
    return 0;
}