#include <iostream>
using namespace std;

class BankAccount
{
private:
    const int accno;
    string name;
    mutable double balance;

public:
    BankAccount(int accno, string name, double balance) : accno(accno)
    {
        this->name = name;
        this->balance = balance;
    }

    double getBalance() const
    {
        return this->balance;
    }

    void displayAccountDetails() const
    {
        this->balance = 1000; // OK
        cout << "Accno = " << this->accno << endl;
        cout << "Name = " << this->name << endl;
        cout << "Balance = " << this->balance << endl;
    }
};

int main()
{
    const BankAccount b1(1001, "rohan", 500);
    b1.displayAccountDetails();
    // b1.setBalance(1000); // NOT OK

    return 0;
}