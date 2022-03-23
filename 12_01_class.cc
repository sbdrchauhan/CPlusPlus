// classes example
#include <iostream>
using namespace std;

// first make .h file just the framework of the class
class Rectangle {
  public:
    //void set_values (int,int); // just the prototypes
        // this way of initializing data members is not good
        // better is to use the constructors

    Rectangle(); // this is a default constructor
    // but all the constructor needs to initialize all the 
    // member variables no matter the input parameter numbers
    // or types

    Rectangle(int, int); // constructor that takes two int
            // for two data int members

    int area(); // prototype

  private:
    int width, height;
};

// defining the class functions now
// see the use of :: scope resolution operator
//void Rectangle::set_values (int x, int y) {
  //width = x;    // private members are accessible
  //height = y;
//}

// define the constructor
// it is better to use to initialize data members
// constructors don't have return type not even void
// constructors never return values, they simply initialize the object

Rectangle::Rectangle()
{
    // here we initialize all the data member variables with the 
    // default values of width, and height
    width = 5;
    height = 5;
}

Rectangle::Rectangle(int w, int h)
{
    width = w;
    height = h;
}

int Rectangle::area()
{
    return width*height;
}


// main macro to use class objects
int main () {
  
  // much better to use constructors to initialize member variables
  Rectangle rect(3,4);
  Rectangle rectb(5,6);
  Rectangle rectc;  // this used the default constructor data member values

  //Rectangle rect, rectb; // can declare multiple objects
  //rect.set_values (3,4);
  //rectb.set_values(5,6);
  cout << "rect area: " << rect.area() << endl;
  cout << "rectb area: " << rectb.area() << endl;
  cout << "rectc area: " << rectc.area() << endl;
  return 0;
}
// outputs: rect area: 12
//          rectb area: 30
//          rectc area: 25