#ifndef __ACCOUNT__
#define __ACCOUNT__

#include <iostream>
#include <string>
using namespace std;

class Account
{
    public:
        bool init(const string&, unsigned long, double); // don't need to come up with
                                        // parameters names
        void display();

    private:
        string name;
        unsigned long nr;
        double balance;
};

#endif