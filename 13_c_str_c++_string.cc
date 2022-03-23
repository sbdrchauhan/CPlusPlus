// strings and NTCS:
#include <iostream>
#include <string>
using namespace std;

int main ()
{
  char question1[] = "What is your name? "; // char requires array type
  string question2 = "Where do you live? ";
  char answer1 [80];    // string answer1;    // is also OK
  string answer2;       // char answer2[50];  // is also ok
  cout << question1;
  cin >> answer1;
  cout << question2;
  cin >> answer2;
  cout << "Hello, " << answer1;
  cout << " from " << answer2 << "!\n";
  return 0;
}