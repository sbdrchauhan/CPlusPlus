#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // one single cin case:
    unsigned int seed;
    int z1, z2, z3;
    cout << "----Random Numbers ------------\n\n";
    cout << "To initialize the random number generator, "
        << "\n please enter an integer value: ";
    cin >> seed;    // this is how you input your keyboard
        // this way only wihtout spaace you can give input
        // what if you need to give your name in two words

    srand(seed);    // every seed will produce different random
                    // numbers later for z1, z2, z3

    z1 = rand();
    z2 = rand();
    z3 = rand();

    cout << "\nThree random numbers: "
        << z1 << "\t" << z2 << "\t" << z3 << endl;

    return 0;
}