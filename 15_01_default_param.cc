#include <iostream>
using namespace std;

// we only need default parameters in function prototype,
// and in the definition we are not required
// if we start giving default parameters to one variable
// rest of all the remaining variables should be given the
// default parameters
int volume(int l=1, int b=1, int h=1);

int main()
{
    cout << volume(3) << endl; // this will be l=3;

    return 0;
}

int volume(int l, int b, int h)
{
    return (l*b*h);
}