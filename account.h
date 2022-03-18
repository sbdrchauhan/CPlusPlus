#ifndef __ACCOUNT__
#define __ACCOUNT__

#include <iostream>
#include <string>
using namespace std;

class Account
{
    public:

        // build constructor
        Account(const string&, unsigned long, double);
        Account(const string&);

        bool init(const string&, unsigned long, double); // don't need to come up with
                                        // parameters names
        void display() const;

        // getters
        const string& getName()   const {return name;}
        unsigned long getNr()     const {return nr;}
        double        getState()  const {return state;}

        // setters
        bool           setName(const string& s)
        {
            if (s.size() < 1)
            {
                return false;
            }
            name = s;
            return true;
        }
        void setNr(unsigned long n) {nr = n;}
        void setState(double x) {state=x;}

    private:
        string name;    // account holder name
        unsigned long nr;   // account number
        double balance;
        double state; // state of the account
};

#endif