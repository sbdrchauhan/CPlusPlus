#include <iostream>
using namespace std;

int main()
{
    // initializing more than one variable, to test a compound logical expression, and execute
    // more than one statement
    for (int i=0, j=0; i<3; i++, j++)
        cout << "i: " << i << " j: " << j << endl;
    return 0;
}


/*
 *Even NULL statements can be used in for Loops.
 *Any or all the statements in a for loop can be null. like

 "this for loop is exactly like the while loop" - amazing

 int counter=0;
 for ( ; counter < 5; )
 {
    counter++;
    cout << "Looping";
  }

  other time you can still have something called empty for loop with nothing inside the body

  for (int i=0; i<5; cout << "i: " << i++ << endl)  // here i++ will raise i at each iteration
  */
