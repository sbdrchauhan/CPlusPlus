/*
    the program contains the recursive function getput()
    that reads a line of text from the keyboard and outputs it in
    reverse order
*/
#include <iostream>
using namespace std;

void getput(void);

int main()
{
    cout << "Please enter a line of text:\n";
    getput();
    cout << "\nBye bye!" << endl;

    return 0;
}

void getput()
{
    char c;
    if (cin.get(c) && c != '\n'  )
    {
        getput();
    }
    cout.put(c);
}