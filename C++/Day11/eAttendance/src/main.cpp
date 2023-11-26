#include "../include/employee.h"
#include "../include/student.h"
using namespace std;

int menu()
{
    int choice;
    cout << "*************************" << endl;
    cout << "0. EXIT" << endl;
    cout << "1. Add Employee" << endl;
    cout << "2. Add Student" << endl;
    cout << "3. Display All Employees" << endl;
    cout << "4. Display All Students" << endl;
    cout << "5. Find Employee" << endl;
    cout << "6. Find Student" << endl;
    cout << "7. Edit Employee Salary" << endl;
    cout << "8. Edit Student Marks" << endl;
    cout << "9. Delete Employee" << endl;
    cout << "10. Delete Student" << endl;
    cout << "Enter your choice = ";
    cin >> choice;
    cout << "*************************" << endl;

    return choice;
}

using namespace NPerson;
using namespace NPerson::NEmployee;
using namespace NPerson::NStudent;

int main()
{
    vector<Employee *> employeeList;
    vector<Student *> studentList;

    load(employeeList);
    load(studentList);
    cout << "---------------------------" << endl;
    cout << "All employees are loaded..." << endl;
    cout << "All students are loaded..." << endl;
    cout << "---------------------------" << endl;

    Person *person;
    int choice;

    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            person = new Employee();
            person->acceptData();
            employeeList.push_back(dynamic_cast<Employee *>(person));
            break;
        case 2:
            person = new Student();
            person->acceptData();
            studentList.push_back(dynamic_cast<Student *>(person));
            break;
        case 3:
            for (int i = 0; i < employeeList.size(); i++)
                employeeList.at(i)->displayData();
            break;
        case 4:
            for (int i = 0; i < studentList.size(); i++)
                studentList.at(i)->displayData();
            break;
        case 5:
            person = find(employeeList);
            if (person != NULL)
                person->displayData();
            else
                cout << "Employee not found..." << endl;
            break;
        case 6:
            person = find(studentList);
            if (person != NULL)
                person->displayData();
            else
                cout << "Stdudent not found..." << endl;
            break;
        case 7:
            person = find(employeeList);
            if (person != NULL)
                dynamic_cast<Employee *>(person)->editSalary();
            else
                cout << "Employee not found..." << endl;
            break;
        case 8:
            person = find(studentList);
            if (person != NULL)
                dynamic_cast<Student *>(person)->editMarks();
            else
                cout << "Stdudent not found..." << endl;
            break;
        case 9:
        {
            int id;
            cout << "Enter empid = ";
            cin >> id;
            for (int i = 0; i < employeeList.size(); i++)
                if (employeeList.at(i)->getEmpid() == id)
                    employeeList.erase(employeeList.begin() + i);
        }
        break;
        case 10:
        {
            int id;
            cout << "Enter rollno = ";
            cin >> id;
            for (int i = 0; i < studentList.size(); i++)
                if (studentList.at(i)->getRollNo() == id)
                    studentList.erase(studentList.begin() + i);
        }
        break;
        default:
            cout << "Wrong choice entered ...:(" << endl;
            break;
        }
    }

    save(employeeList);
    save(studentList);
    cout << "---------------------------" << endl;
    cout << "All Employees are saved..." << endl;
    cout << "All Students are saved..." << endl;
    cout << "---------------------------" << endl;

    cout << "Thank you for using the application ...:)" << endl;

    return 0;
}