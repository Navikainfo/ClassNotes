#include <iostream>
using namespace std;

class BankAccount
{
private:
    const int accno;
    string name;
    double balance;
    static int generate_accno;

public:
    BankAccount(string name, double balance) : accno(++generate_accno)
    {
        // this->accno = ++generate_accno;
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
int BankAccount::generate_accno = 1000;

int main()
{
    BankAccount b1("rohan", 1000);
    BankAccount b2("pratik", 2000);
    BankAccount b3("Onkar", 3000);
    BankAccount b4("vrushab", 4000);

    b1.displayAccountDetails();
    b2.displayAccountDetails();
    b3.displayAccountDetails();
    b4.displayAccountDetails();

    BankAccount("rahul", 5000).displayAccountDetails();
    return 0;
}