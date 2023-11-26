#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "./person.h"
namespace NPerson
{
    namespace NEmployee
    {
        class Employee : public Person
        {
        private:
            int empid;
            double salary;

        public:
            Employee();
            Employee(int empid, double salary, string name);
            void acceptData();
            void displayData();
            int getEmpid();
            double getSalary();
            void editSalary();
        };
        void load(vector<Employee *> &employeeList);
        void save(vector<Employee *> &employeeList);
        Employee *find(vector<Employee *> &employeeList);
    }
}
#endif