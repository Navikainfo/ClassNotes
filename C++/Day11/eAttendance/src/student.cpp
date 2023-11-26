#include "../include/student.h"
using namespace NPerson::NStudent;

Student::Student()
{
}
Student::Student(int rollno, double marks, string name) : Person(name)
{
    this->rollno = rollno;
    this->marks = marks;
}

void Student::acceptData()
{
    cout << "Enter the rollno = ";
    cin >> this->rollno;

    Person::acceptData();

    cout << "Enter the marks = ";
    cin >> this->marks;
}

void Student::displayData()
{
    cout << "Rollno = " << this->rollno << endl;
    Person::displayData();
    cout << "Marks = " << this->marks << endl;
    cout << "--------------------------" << endl;
}

int Student::getRollNo()
{
    return this->rollno;
}
double Student::getMarks()
{
    return this->marks;
}

void Student::editMarks()
{
    cout << "Enter the new marks = ";
    cin >> this->marks;
}

void NPerson::NStudent::save(vector<Student *> &studentList)
{
    ofstream fout("../data/Student.txt");

    for (int i = 0; i < studentList.size(); i++)
    {
        fout << studentList.at(i)->getRollNo() << ","
             << studentList.at(i)->getName() << ","
             << studentList.at(i)->getMarks() << endl;
    }

    fout.close();
}

void NPerson::NStudent::load(vector<Student *> &studentList)
{
    ifstream fin("../data/Student.txt");
    string data;
    while (getline(fin, data))
    {
        stringstream line(data);
        string token[3];
        for (int i = 0; i < 3; i++)
            getline(line, token[i], ',');
        studentList.push_back(new Student(stoi(token[0]), stod(token[2]), token[1]));
    }

    fin.close();
}

Student *NPerson::NStudent::find(vector<Student *> &studentList)
{
    int id;
    cout << "Enter rollno to search = ";
    cin >> id;
    for (int i = 0; i < studentList.size(); i++)
        if (studentList.at(i)->getRollNo() == id)
            return studentList.at(i);
    return NULL;
}
