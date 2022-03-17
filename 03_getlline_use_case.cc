#include <iostream>
#include <string>

using namespace std;

int main()
{
     // two words cin case (like typing name from keyboard)
    string name;
    cout << "What is your name? " << endl;
    getline(cin, name); // stores a line of keyboard input in a string
                // terminated by pressing return key \n not stored in string
    cout << "Your name is: " << name << endl;
    cout << "And, it is " << name.length() << " character long!" << endl;

    return 0;
}