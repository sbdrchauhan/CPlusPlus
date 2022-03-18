// Uses objects of class Account.
// ---------------------------------------------------
#include "Account.h"
int main()
{
Account current1, current2;
current1.init("Cheers, Mary", 1234567, -1200.99);
current1.display();
// current1.balance += 100; // Error: private member
current2 = current1; // ok: Assignment of
// objects is possible.
current2.display(); // ok
// New values for current2
current2.init("Jones, Tom", 3512347, 199.40);
current2.display();
// To use a reference:
Account& mtr = current1; // mtr is an alias name
// for object current1.
mtr.display(); // mtr can be used just
// as object current1.


// another way
Account giro("Cheers, Mary", 1234567, -1200.99 ),
save("Lucky, Luke");
Account depot; // Error: no default constructor
// defined.
giro.display(); // To output
save.display();
Account temp("Funny, Susy", 7777777, 1000000.0);
save = temp; // ok: Assignment of
// objects possible.
save.display();
// Or by the presently available method init():
save.init("Lucky, Luke", 7654321, 1000000.0);
save.display();


return 0;
}