#include <iostream>
using namespace std;

class BankAccount
{
private:
    const int accno;
    string name;
    double balance;

public:
    BankAccount(int accno, string name, double balance) : accno(accno)
    {
        // this->accno = accno; //NOT OK
        this->name = name;
        this->balance = balance;
    }

    void displayAccountDetails()
    {
        cout << "Accno = " << this->accno << endl;
        cout << "Name = " << this->name << endl;
        cout << "Balance = " << this->balance << endl;
    }
};

int main()
{
    BankAccount b1(1001, "rohan", 500);
    b1.displayAccountDetails();
    BankAccount b2(1002, "pratik", 1000);
    b2.displayAccountDetails();
    return 0;
}