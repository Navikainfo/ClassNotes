#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

void writeIntoFile()
{
    string name;
    int age;
    cout << "Enter the name = ";
    cin >> name;
    cout << "Enter the age = ";
    cin >> age;

    ofstream fout("file2.txt", ios::app);
    fout << name << "," << age << endl;
    fout.close();
}

void readFromFile()
{
    string data;
    ifstream fin("file2.txt");
    while (getline(fin, data))
    {
        stringstream line(data);
        string name;
        string age;
        getline(line, name, ',');
        getline(line, age, ',');
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl;
    }

    fin.close();
}

int main()
{
    // writeIntoFile();
    // writeIntoFile();
    // writeIntoFile();
    // writeIntoFile();

    readFromFile();
    return 0;
}