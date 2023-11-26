#include <iostream>
using namespace std;

class Array
{
private:
    int size;
    int index;
    int *arr;

public:
    Array(int size)
    {
        this->size = size;
        this->index = 0;
        this->arr = new int[this->size];
    }

    void addElement(int element)
    {
        if (this->index < this->size)
        {
            this->arr[this->index] = element;
            // arr[0] = 10;
            this->index++;
        }
        else
            cout << "Array is Full.. cannot add element.." << endl;
    }

    int getElement(int index)
    {
        if (-1 < index && index < this->index)
            return this->arr[index];

        throw "Array index out of bound Exception..";
    }

    int getLength()
    {
        return this->index;
    }
    ~Array()
    {
        delete[] this->arr;
    }
};

int main()
{
    Array a1(5);
    a1.addElement(10);
    a1.addElement(20);
    a1.addElement(30);
    a1.addElement(40);
    a1.addElement(50);

    cout << "length of a1 = " << a1.getLength() << endl;

    cout << "Element at specified index = " << a1.getElement(2) << endl;
    cout << "Element at specified index = " << a1.getElement(4) << endl;
    // cout << "Element at specified index = " << a1.getElement(7) << endl; // Exception

    for (int i = 0; i < a1.getLength(); i++)
        cout << "Element at index " << i << "=" << a1.getElement(i) << endl;
    return 0;
}