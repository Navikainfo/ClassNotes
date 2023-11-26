#include <iostream>
using namespace std;
class Employee
{
private:
    int empid;
    string name;
    double salary;

public:
    void acceptEmployee()
    {
        cout << "Enter empid = ";
        cin >> this->empid;
        cout << "Enter name = ";
        cin >> this->name;
        cout << "Enter salary = ";
        cin >> this->salary;
    }

    void displayEmployee()
    {
        cout << "Empid = " << this->empid << endl;
        cout << "Name = " << this->name << endl;
        cout << "Salary = " << this->salary << endl;
    }
};

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
    Array<Employee *> a1(5);
    a1.addElement(new Employee());
    a1.addElement(new Employee());
    a1.addElement(new Employee());
    a1.addElement(new Employee());
    cout << "Length of an a1 = " << a1.getLength() << endl;

    for (int i = 0; i < a1.getLength(); i++)
        a1.getElement(i)->acceptEmployee();

    for (int i = 0; i < a1.getLength(); i++)
        a1.getElement(i)->displayEmployee();

    for (int i = 0; i < a1.getLength(); i++)
        delete a1.getElement(i);
    return 0;
}
