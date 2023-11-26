#include "./employee.h"
#include "./menu.h"
int main()
{
    Employee e;
    Emenu choice;
    while ((choice = menu()) != EXIT)
    {
        switch (choice)
        {
        case ADD_EMPLOYEE:
            e.acceptEmployee();
            break;
        case DISPLAY_EMPLOYEE:
            e.displayEmployee();
            break;
        case INCREMENT:
            e.increment();
            cout << "Congratulations...You received an increment" << endl;
            break;
        default:
            cout << "Wrong choice entered ...:(" << endl;
            break;
        }
    }
    cout << "Thank you for using our app...:)" << endl;
    return 0;
}