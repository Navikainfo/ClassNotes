#include <iostream>
using namespace std;

template <class T>
class Array
{
private:
    int size;
    int index;
    T *arr;

public:
    Array(int size)
    {
        this->size = size;
        this->index = 0;
        this->arr = new T[this->size];
    }

    void addElement(T element)
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

    T getElement(int index)
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
    // Array<char> a1(5);
    // a1.addElement('A');
    // a1.addElement('B');
    // a1.addElement('C');
    // a1.addElement('D');

    Array<double> a1(5);
    a1.addElement(10.20);
    a1.addElement(20.30);
    a1.addElement(30.40);
    a1.addElement(40.50);

    cout << "Length of array = " << a1.getLength() << endl;

    for (int i = 0; i < a1.getLength(); i++)
        cout << "Element at index " << i << " = " << a1.getElement(i) << endl;

    return 0;
}

int main1()
{
    Array<int> a1(5);
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