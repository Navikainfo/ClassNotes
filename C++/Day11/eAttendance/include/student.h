#ifndef STUDENT_H
#define STUDENT_H
#include "./person.h"
namespace NPerson
{
    namespace NStudent
    {
        class Student : public Person
        {
        private:
            int rollno;
            double marks;

        public:
            Student();
            Student(int rollno, double marks, string name);
            void acceptData();
            void displayData();
            int getRollNo();
            double getMarks();
            void editMarks();
        };
        void load(vector<Student *> &studentList);
        void save(vector<Student *> &studentList);
        Student *find(vector<Student *> &studentList);
    }
}

#endif