#include "account.h"    // class definition is there
#include <iostream>
#include <iomanip>
using namespace std;

// the method init() copies the given arguments into
// the private members of the class
bool Account::init(const string& i_name,
                    unsigned long i_nr,
                    double i_balance)
{
    if (i_name.size() < 1) // no empty name
        return false;
    name = i_name;
    nr   = i_nr;
    balance = i_balance;
    return true;
}

// the method display() outputs private data
void Account::display()
{
    cout << fixed << setprecision(2)
<< "--------------------------------------\n"
<< "Account holder: " << name << '\n'
<< "Account number: " << nr << '\n'
<< "Account balance: " << balance << '\n'
<< "--------------------------------------\n"
<< endl;
}
