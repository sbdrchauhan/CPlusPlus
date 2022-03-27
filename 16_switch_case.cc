#include <iostream>
using namespace std;

int main()
{
    int age = 18;

    switch (age)
    {
        case 16:
            cout << "hey you can drive now.\n";
            break;
        
        case 18:
            cout << "hey you can buy a lotto ticket now.\n";
            cout << "It's your lucky day!\n";
            break;

        case 21:
            cout << "hey you can have a beer now.\n";
            break;
        default:
            cout << "hey you still get nothing!\n";
    }

    return 0;
}