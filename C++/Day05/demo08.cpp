#include <iostream>
using namespace std;

class BankAccount
{
private:
    const int accno;
    string name;
    double balance;
    static int counter;

public:
    BankAccount(int accno, string name, double balance) : accno(accno)
    {
        counter++;
        this->name = name;
        this->balance = balance;
    }

    static void totalcount()
    {
        // balance = 1000;
        cout << "Count of total accounts = " << counter << endl;
    }

    void displayAccountDetails()
    {
        cout << "Accno = " << this->accno << endl;
        cout << "Name = " << this->name << endl;
        cout << "Balance = " << this->balance << endl;
    }
};
int BankAccount::counter = 0;

int main()
{
    BankAccount::totalcount();
    return 0;
}