#include <iostream>
#include <vector>
using namespace std;

void displayVector(vector<int> &v1)
{
    for (int i = 0; i < v1.size(); i++)
        cout << "Element at index " << i << " = " << v1.at(i) << endl;
}

int main()
{
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);

    cout << "Length of the vector = " << v1.size() << endl;
    cout << "Original vector = " << endl;
    displayVector(v1);

    // v1.pop_back();
    // v1.pop_back();
    // cout << "After deleting = " << endl;
    // displayVector(v1);

    v1.erase(v1.begin() + 2);
    cout << "After deleting = " << endl;
    displayVector(v1);

    v1.insert(v1.begin() + 2, 300);
    cout << "After adding new element = " << endl;
    displayVector(v1);
    return 0;
}