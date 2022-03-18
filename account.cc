#include "account.h"    // class definition is there
#include <iostream>
#include <iomanip>
using namespace std;

Account::Account(const string& a_name,
                unsigned long a_nr, double a_state)
{
    name = a_name;
    nr   = a_nr;
    state = a_state;
}

Account::Account(const string& a_name)
{
    name = a_name;
    nr   = 11111111;
    state = 0.0;
}

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
