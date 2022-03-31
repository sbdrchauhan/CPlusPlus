Notes on C++ language collected and compiled from various source.

## List of references
* [A Complete Guide to Programming in C++](https://www.amazon.com/Complete-Guide-Programming-Title-Demand/dp/0763718173)
* [cpusplus.com](http://www.cplusplus.com/doc/tutorial/)
* [The C++ Programming Language - Bjarne](https://www.amazon.com/C-Programming-Language-4th/dp/0321563840)
* [A Complete Guide to Programming in C++](https://www.amazon.com/Complete-Guide-Programming-Title-Demand/dp/0763718173)

<hr/>

## Fundamentals and Basics to Begin
The Object-Oriented Programming (OOP) is the part of the C++ extensions over its C origin. OOP contains a lots of useful ways to build a program. Let's just start out by listing some of the characteristics of OOP, which will be discussed and elaborated at later point:
* **data abstraction** -> creating of classes to describe objects
* **data hiding/encapsulation** -> for controlled access to object data
* **inheritance** -> creating derived classes (including multiple derived class, more later)
* **polymorphism** -> implementation of instructions that can have varying effects during program execution
* Virtual functions, reference variables, Standard Template Library

In addition to above functionallity, C++ also supports templates, exception handling.

### Objects
This OOP has revolutionized the way the problems are seen today by the programmer. They think any problems in terms of the *objects*. These objects for example a bank account object will have the data - like its balance, account number, account holder name, etc - and also the methods or functions that can perform certain calculations like adding the deposits, withdrawls, and so on - in the same object. This makes the management of the accounts so much easier, now. Any typical program is developed in the following way:
![image1](https://github.com/sbdrchauhan/CPlusPlus/blob/main/Images/program%20dev.png)

Let's begin our journey here by just writing down one simple C++ example code:
```cpp
#include <iostream>     // including standard library i/o stream, PREPROCESSOR directive
using namespace std;    // so we don't need std:: everywhere, make definition visible

int main()      // main() function is required
{
  cout << "Hello there, enjoy C++" << endl;
  return 0;
}
```
>Note: A C++ program should provide a prototype for each function used in the program. like: `double sqrt(double)` will let us use sqrt in the below statements.

sqrt function is in library cmath so use it, first by including the file (where all the definitions will be there) and later using in the programs.























































## Fundamental Types, Constants, and Variables

## Functions

## Classes

## Input and Output Streams

## Operators and Operations for the data types

## Control Flow

## Namespaces

## Pointers and References

## Defining Classes

## Inheritance

## Multiple Inheritance

## Polymorphism

## Arrays

## Arrays and Pointers

## File Input and Output Streams

## Function Overloading

## Dynamic Memory Allocation

## Exception Handling

## Templates

## Containers





















C++ and OOP (object-oriented programming) feature:
* data abstraction
* data hiding
* inheritence
* polymorphism

Object-oriented programming combine data (properties) and functions (capacities). The general workflow of the OOP is you start writing source code `.cc` file in your editor combines with the header file compile it to get the object file, which then combines standard library file and other library files using a linker to finally get the executable file.

C++ is a compiled language. For a program to run, its source text has to be processed by a compiler (changing plain english code to machine language), producting object files, which are combined by a linker yielding an executable program. Any typical C++ program consists of many source code files (*source files*) in the workflow as shown below:
![](https://github.com/sbdrchauhan/CPlusPlus/blob/main/Images/compiler%20and%20linker.PNG)

**Advice**
* Don't panic!
* You don't have to know every detail of C++ to write good programs
* Focus on programming techniques, not on language features

Several data types exists; **integers, floating-point numbers, bool, char, etc**.

`sizeof(float)` will tell the amount of memory this float will take in your machine.

**char** a character constant is a character enclosed in *single* quotes. Ex. `'A' // type: char`

**string** consists a sequence of characters enclosed in *double* quotes. e.g. `"Today is a good day!"`. The string is terminate with `\0 (null character)`. So even the empty string `""` has this terminating null character `\0`.

**Defining Variables** a variable must be defined before you can use it in a program. When you *define* a variable the *type* is specified and an appropriate amount of memory is reserved. **syntax** type name1; **eg**:
```cpp
char c;
int i, counter;
double x, y, size;
```
The variable defined outside of a function is *global*, whereas if defined inside a function is *local*. Inside a function it can be defined wherever it is required (just before it is used).

**Initialization** of a variable can be done at the time of definition with equal sign or round brackets containing the value of the variable.
```cpp
char c = 'a';
float x(1.87);   // float x = 1.87;
```
Any global variable failed to initialized will default to zero, but local variable will have undefined value.

They **type** can be modified using **const** keyword. const creates "read-only" object; can't be modified. `const double pi_value = 3.1415947;`. pi_value = pi_value + 2.0; will throw an error.

**function prototype** `long func(int, double); // func_type func_name(type_of_arguments);` If a function doesn't return any value, its reutrn type will be `void`, and if the function don't even expect the arguments, then in prototype we should write void or leave empty as well, as `void func(void); int func(); int func(void);`

Usually, header files are searched in *include* directory, but since programmers write their header file ownself and they put in the same folder as their project folder, to enable the compiler to find these header files, the #include directive must state the name of the header files in double quotes.
`#include "project.h"` then the compiler will also search the current folder. The file suffix .h is normally used for user-defined header files. `#include <iostream>` is the C++ standard library header file; they are without .h suffix. `#include <string>` another one; allows user-friendly string manipulations in C++.

```cpp
cout << setprecision(3);  // Precision: 3
        // or: cout.precision(3); // this is also ok
cout << 12.34;  // outputs: 12.3
```

## Container
A *container* is an object holding a collection of elements, so we call **Vector** a container because it is the type of objects that are containers. We need to **initialize containers** to use it. Two of the ways we can do this elegantly are:
* Initialize with a list of elements
* push_back() way of adding a new element at the end of the sequence

## Standard Library
Every standard-library facility is provided through some standard header. For example:
```cpp
#include <string>
#include <list>
```
This makes the standard `string` and `list` available.

## Reading and Writing Characaters:
You can use the method get() to read single characters.
```cpp
char ch;
cin.get(ch);  // it will read one characater, even white-space like newline

cin >> ch;    // reads the first non-white space character

int c = cin.get();    // without argument reads int value of character
```
**Reading a line** >> can be used to read only one word into a string. If you need to read a whole line of text, you can use the global function **getline()**. `getline(cin, textt)` reads until a newline character occurs. `getline(cin, s, '.');` will read until period is reached.

`++i`  here `i` is incremented first and the new value of `i` is then applied
`i++`  the original value of `i` is applied before `i` is incremented

Two important loop iterations we need are `while, and for`, supplemeneted by the `if` conditionals.

**while syntax**
```cpp
while (expression)
{
    statement1;     // called loop body
    statement2;
    ...
}
```

Only if the `expression` becomes true, the body will execute.

Example cases:
```cpp
int count = 1;
while (count <= 10)
{
    cout << count << endl;
    ++count;
}

int count;
for (count=1; count<=10; ++count)
{
    cout << count << endl;
}
```
```cpp
if ()
    //
else if ()
    //
else if ()
    //
else
    //
```

`(char)ch` yields the value of **ch** of type `char`

`break` statement exits from a `switch` or `loop` immediately, then after break, the execution will jump to the first statement that follows the **switch or loop**

`continue` will exit from the loop and goes to next iterations.

`#define name substituetext` this defines a macro called "name". Note that neither an equal signs nor a semicolon is used

symbolic constants
```cpp
#define PI 3.1415
#define STEP (PI/8.0)
#define HEADER (cout << "Hello I am the top Header" << endl;)
```

If you have a header file named "article.h"
```cpp
#ifndef _ARTICLE_
#define _ARTICLE_
... // contents of the header file
#endif
```

It is possible to convert the type of an expression **explicitly** using the *cast operator* (type)

**syntax** (type) expression

This converts the value of an expression to the given type. Explicit conversion is also known as *casting*
```cpp
int a = 1, b = 4;
double x;
x = (double)a/b;    // a is explicitly changed to double
                // b is then implicitly changed to double
```

## string
```cpp
string message("Good morning!");
cout << message.length();       // output: 13
                // message.size() also is equivalent

// string concatenation
string sum, s1="sun", s2(" flower");
sum = s1+s2;    // concatenates the strings s1 and s2
        // output: "sunflower"

// string comparison
s1 == s2  // is true only if both strings are identical (same length)
s1 < s2   // is true if s1 is smaller than s2

// inserting a string
string s1("Miss Summer");
s1.insert(5, "Ashley "); // insert at position: 5
        // output: "Miss Ashley Summer"

// erasing a substring
string s("The summer-time");
s.erase(4, 7); // from position: 4 upto 7 characters
    // erase() without any arguments delete it all

// searching in the string
string youth = "Bill is so young, so young";
int first = youth.find("young");    // first: 11 (at 11th position)
int last = youth.rfind("young"); // search from side side; last: 21

// the at() method
s.at(i) = 'X'; // is same as s[i]='X';
```
Since **strings** are in fact a sequence of characters, we can represent them also as plain arrays of elements of a character type. For example: `char foo[20];` is an array that can store up to 20 elements of type `char`. The capacity of this array doesn't need to be fully exhausted: the array can also accomodate shorter sequences. Than means either "Hello" or "Merry Christmas" can be stored in `foo`, since both would fit in a sequence with a capacity of 20 characters. The end of the string is denoted by the *null character*, `'\0'` (backslash zero).

The string literals, the ones that is started with double quotes `"this is string literal."`, they automatically contains the **null character** at the end. So, this makes our lives easier when we have to initialize char arrays. Example:
```cpp
char myword[] = {'H', 'E', 'L', 'L', 'O', '\0'};
char myword[] = "Hello";        // much better way
```
In both the cases, the array of characters `myword` is declared with a size of 6 elements of type `char`. Remember '\0' is automatically been added in the second case at the end of the sequence, since we use string literal to initialize this sequence.

> NOTE: Once string literals are initialized, they cannot be re-assigned. However, each of the elements can be re-assigned a value though. So, `myword = "Bye"; // is not ok` but, `myword[0] = 'B';`, `myword[1] = 'y';`, `myword[2] = 'e';`, `myword[3] = '\0';` is okay.

Plain arrays with null-terminated sequences of characters are the typical types in the C language to represent strings (that is why they are called *C-strings*). In C++, even though the standard library defines a specific type for strings (class `string`), still, plain arrays with null-terminated sequences of characters (C-strings) are a natural way of representing strings in the language; in fact, string literals still always produce null-terminated character sequences, and not `string` objects. In the standard library, both representations for strings (C-strings and library strings) coexist, and most functions requiring strings are overloaded to support both. If you notice, both arrays of characters using null-terminated sequences and strings are used almost same way,  but there is a notable difference in their declarations: arrays have a fixed size that needs to be specified either implicit or explicitly when declared; question1 has a size of exactly 20 characters (including the terminating null-characters) and answer1 has a size of 80 characters; while strings are simply strings, no size is specified. This is due to the fact that strings have a dynamic size determined during runtime, while the size of arrays is determined on compilation, before the program runs. In any case, null-terminated character sequences and strings are easily transformed from one another: Null-terminated character sequences can be transformed into strings implicitly, and strings can be transformed into null-terminated character sequences by using either of string's member functions c_str or data:

```cpp
// strings and NTCS:
#include <iostream>
#include <string>
using namespace std;

int main ()
{
  char question1[] = "What is your name? ";
  string question2 = "Where do you live? ";
  char answer1 [80];
  string answer2;
  cout << question1;
  cin >> answer1;
  cout << question2;
  cin >> answer2;
  cout << "Hello, " << answer1;
  cout << " from " << answer2 << "!\n";
  return 0;
}
```
```cpp
char myntcs[] = "some text";
string mystring = myntcs;  // convert c-string to string
cout << mystring;          // printed as a library string
cout << mystring.c_str();  // printed as a c-string 
```

## Functions
```cpp
double area(double, double); // prototype (no need to give names of parameters)

int main()
{
    double result;
    double x=3.5, y=7.2;
    result = area(x,y+1);   // function call (arguments: x, y+1)
}

// function definition
double area(double width, double len)   // parameters: width, len
{
    return (width*len); // returns the value of w*l
}
```
when the program flow reaches a *return statement* or the end of the function code block, it branches back to the function that called it (to the point where it was called).

**function pass by value and pass by reference**
Passing by values means you input the copies of the arguments. But passing by reference is also important when you need to work with the larger datasets like vectors, and so we would work on the object directly.

**functions passed by reference**

Sometimes we do need to change/modify the value of an actual parameter that is passed into. We achieve this as follows using reference parameters, whose types are post-fixed with an `&`:
```cpp
#include <iostream>
using namespace std;

int area(int,int);  // prototype

void get_dimension(int&, int&); // prototype

int main()
{
    int this_length, this_width;
    get_dimensions(this_length, this_width);
    cout << "The area of a " << this_length << "x" << this_width;
    cout << " rectangle is " << area(this_length, this_width);

    return 0;
}

void get_dimension(int& length, int& width)
{
    cout << "Enter the length: ";
    cin >> length;

    cout << "Enter the width: ";
    cin >> width;
    cout << endl;
}

int area(int length, int width)
{
    return length * width;
}
```

**Inline Function**
It will take a lot of time if we need to call some function multiple times and this function doesn't even have much inside the body. So, inline function can be defined in these cases.
```cpp
inline int max(int x, int y)
{
    return x*x+y; // inline function should have no more
                // than two instruction for the compiler
}
```

## Recursion
A function that calls itself is said to be *recursive*. It could also have called other function multiple times before it calls the same function again. But recursion function needs a **break** criteria to avoid run it infinitely. The notion of recursion is clearly related to the notion of *mathematical induction*. In recusion, we need a base to stop our iterations to call the function itself for forever.

Let's see one example of recursive function "print_backward()", which inputs a series of characters from the keyboard, terminated with a full-stop character, and then prints them backwards on the screen.
```cpp
#include <iostream>

void print_backward();

int main()
{
    print_backwards();
    cout << "\n";

    return 0;
}

void print_backward()
{
    char character;
    cout << "Enter a character ('.' to end program): ";
    cin >> character;
    if (charachter != '.')
    {
        print_backward();
        cout << character;
    }
}
```
In general, recursive definitions must always use some sort of branch statement with at least one non-recursive branch, which acts as the base case of the definition. Otherwise, they will "loop forever". Let's see some more examples recursive functions:
```cpp
// finding the factorial of the number
int factorial(int number)
{
    if (number < 0)
    {
        cout << "\nError - negative argument to factorial\n";
        exit(1);
    }
    else if (number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number-1));
    }
}

// function which raises its first argument to the power of its second argument
float raised_to_power(float number, int power)
{
    if (power < 0)
    {
        cout << "\nError - can't raise to a negative power\n";
        exit(1);
    }
    else if (power == 0)
        return (1.0);
    else
        return (number * raised_to_power(number, power-1));
}

// sums the first n elements of an integer array "a[]"
int sum_of(int a[], int n)
{
    if (n == 1)
        return a[0];
    else
        return (a[n-1] + sum_of(a, n-1);
}
```
You might feel overwhelmed by the recursive function program flow, you got the good news then. From purely mechanical point of view, recursion is not absolutely necessary, since any function that can be defined recursively can also be defined iteratively, using either `for, while` loops. So whether a function is defined recursively or iteratively is to some extent a matter of taste.

## Storage Classes and Namespaces
`extern string line;` means in another source file this `string line` has to be globally defined; so the new or other source file can use it as an `extern`.

## References and Pointers
In earlier chapters, variables have been explained as locations in the computer's memory which can be accessed by their identifier (their name). This way, the program does not need to care about the physical address of the data in memory; it simply uses the identifier whenever it needs to refer to the variable. For a C++ program, the memory of a computer is like a succession of memory cells, each one byte in size, and each with a unique address. These single-byte memory cells are ordered in a way that allows data representations larger than one byte to occupy memory cells that have consecutive addresses. This way, each cell can be easily located in the memory by means of its unique address. For example, the memory cell with the address 1776 always follows immediately after the cell with address 1775 and precedes the one with 1777, and is exactly one thousand cells after 776 and exactly one thousand cells before 2776. When a variable is declared, the memory needed to store its value is assigned a specific location in memory (its memory address). Generally, C++ programs do not actively decide the exact memory addresses where its variables are stored. Fortunately, that task is left to the environment where the program is run - generally, an operating system that decides the particular memory locations on runtime. However, it may be useful for a program to be able to obtain the address of a variable during runtime in order to access data cells that are at a certain position relative to it.

**address-of operator &**

The address of a variable can be obtained by preceding the name of a variable with an ampersand sign (`&`), known as *address-of operator*. For example: `foo = &myvar; // foo is the pointer that stores address of other variable`. This would assign the address of variable myvar to foo; by preceding the name of the variable myvar with the address-of operator (&), we are no longer assigning the content of the variable itself to foo, but its address. The variable that stores the address of another variable (like foo in the previous example) is what in C++ is called a pointer. Pointers are a very powerful feature of the language that has many uses in lower level programming.

**dereference operator (\*)**

As just seen, a variable which stores the address of another variable is called a pointer. Pointers are said to "point to" the variable whose address they store. An interesting property of pointers is that they can be used to access the variable they point to directly. This is done by preceding the pointer name with the dereference operator (*). `bar = *foo; // gives value pointing by pointer foo`.

**Declaring pointers**

Due to the ability of a pointer to directly refer to the value that it points to, a pointer has different properties when it points to a `char` than when it points to an `int` or a `float`. Once dereferenced, the type needs to be known. And for that, the declaration of a pointer needs to include the data type the pointer is going to point to.

syntax:
```cpp
type * name;
```
where `type` is the data type pointed to by the pointer. This type is not the type of the pointer itself, but the type of the data the pointer points to.
```cpp
int* number;
char* character;
double* decimals;
```
These are three declarations of pointers. Each one is intended to point to a different data type, but, in fact, all of them are pointers and all of them are likely going to occupy the same amount of space in memory (the size in memory of a pointer depends on the platform where the program runs). Nevertheless, the data to which they point to do not occupy the same amount of space nor are of the same type: the first one points to an int, the second one to a char, and the last one to a double. Therefore, although these three example variables are all of them pointers, they actually have different types: int*, char*, and double* respectively, depending on the type they point to.

Let's see an example on pointers:
```cpp
#include <iostream>
using namespace std;

int main ()
{
  int firstvalue, secondvalue;
  int * mypointer;

  mypointer = &firstvalue;
  *mypointer = 10;
  mypointer = &secondvalue;
  *mypointer = 20;
  cout << "firstvalue is " << firstvalue << '\n';
  cout << "secondvalue is " << secondvalue << '\n';
  return 0;
}
```
Here, even though `firstvalue` and `secondvalue` don't get initialized directly; but using the pointer to manipulate its address, we could indirectly assign the value.

**pointers and arrays**

The concept of arrays is related to that of pointers. In fact, arrays work very much like pointers to their first elements, and, actually, an array can always be implicitly converted to the pointer of the proper type.
```cpp
int myarray[20];
int *mypointer;
mypointer = myarray;    // valid
```
After that, mypointer and myarray would be equivalent and would have very similar properties. The main difference being that mypointer can be assigned a different address, whereas myarray can never be assigned anything, and will always represent the same block of 20 elements of type int.
```cpp
// more pointers
#include <iostream>
using namespace std;

int main ()
{
  int numbers[5];
  int * p;
  p = numbers;  *p = 10;    // see various ways to manipulate address location
  p++;  *p = 20;            // and re-assign the values
  p = &numbers[2];  *p = 30;
  p = numbers + 3;  *p = 40;
  p = numbers;  *(p+4) = 50;
  for (int n=0; n<5; n++)
    cout << numbers[n] << ", ";
  return 0;

  // outputs: 10, 20, 30, 40, 50,
}
```
Pointers and arrays support the same set of operations, with the same meaning for both. The main difference being that pointers can be assigned new addresses, while arrays cannot.

Pointers can be initialized to point to specific locations at the very moment they are defined:
```cpp
int myvar;
int * myptr = &myvar;
```
Pointers can be initialized either to the address of a variable (such as above), or to the value of another pointer (or an array):
```cpp
int myvar;
int *foo = &myvar;  // pointing to address of myvar variable
int *bar = foo;     // pointer pointing to another pointer

int numbers[5];
int *p;
p = numbers;  // pointer pointing to the first element address of an array
```

**pointers and const**

Pointers can be used to access a variable by its address, and this access may include modifying the value pointed. But it is also possible to declare pointers that can access the pointed value to read it, but not to modify it. For this, it is enough with qualifying the type pointed to by the pointer as `const`. For example:
```cpp
int x;
int y = 10;
const int * p = &y;  // p pointing to address of y
                // this pointer p is const 
x = *p; // we can read-the pointer pointing value
*p = x; // we cannot re-assign the new value for const p
```
`NULL, nullptr, 0` are all null pointers for any pointers to point to if they don't have any initial values to point to.

The reference type and reference variable should match the type.
```cpp
float x = 10.7; //
float &rx = x; // reference of x ok (type match)
// float& rx = x; // also works
// double &refx = x; // error (type mismatch)
--rx; // equivalent to --x; // affects the original value
```
A reference is another name, or alias, for an object that already exists. Defining a reference doesn't occupy additional memory. Changing/modifying the reference to the value of the variable also modifies the original value of the variable itself.

**passing reference as parameters**
A *pass by reference* can be programmed using references or pointers as function parameters. The function can have directly manipulate the argument passed to it. If an object is passed as an argument when passing by reference, the object is not copied. Instead, the address of the object is passed to the function internally, allowing the function to access the object with which it is called.
```cpp
void test(int& a)
{
    ++a;
}
int var = 2;
test(var);  // increments the variable var
```
If you need to read arguments, but not copy them, you can define a *read-only reference* as a parameter. `void display( const string& str);`. We can rest assured that the argument is not modified within the function, as `str` is declared as a `const`.

**Defining Pointers** A *pointer* is an expression that represents both the *address* and *type* of another object. `&var` is the address of the object var. A pointer points to a memory address and simultaneously indicates by its type how the memory address can be read or written to. Thus, depending on the type, we refer to pointers to char, pointers to int, and so on, or say in abbreviation, such as char pointer, int pointer, and so on.

We can define *pointer variables*, i.e., variables that can store the address of another object. `int *ptr;` // or `int* ptr;` This defines variable `ptr`, which is an `int*` type (in other words, a *pointer to int*). `ptr` can thus store the address of an `int` variable.

References are similar to pointers: both refer to an object in memory. However, a pointer
is not merely an alias but an individual object that has an identity separate from the
object it references. A pointer has its own memory address and can be manipulated by
pointing it at a new memory address and thus referencing a different object.

## Dynamic memory
In the programs seen in previous chapters, all memory needs were determined before program execution by defining the variables needed. But there may be cases where the memory needs of a program can only be determined during runtime. For example, when the memory needed depends on user input. On these cases, programs need to dynamically allocate memory, for which the C++ language integrates the operators `new` and `delete`.

## Defining Classes
Humans use abstraction all the time to manage complex situation. Classes are the language element in C++ most important to the suppport of OOP concept. A class defines the properties and capacities of an object. The first step towards solving a problem is analysis. In object-oriented programming, analysis comprises identifying and describing objects and recognizing their mutual relationships. Object descriptions are the building blocks of classes. In C++, a class is a user-defined type. It contains data members, which describe the properties of the class, and member functions, or methods, which describe the capacities of the objects. Classes are simply patterns used to instantiate, or create, objects of the class type. In other words, an object is a variable of a given class. **private members** of a class are accessible only from within other members of the same class (or from their "friends"). **protected members** are accessible from other members of the same class (or from their "friends"), but also from members of their derived classes. Finally, **public members** are accessible from anywhere where the object is visible.

When a constructor is used to initialize other members, these other members can be initialized directly, without resorting to statements in its body. This is done by inserting, before the constructor's body, a colon (:) and a list of initializations for class members. For example, consider a class with the following declaration:
```cpp
class Rectangle
{
    public:
        Rectangle(int, int);
        int area(){return width * height;}

    private:
        int width, height;
};

// we could use our usual way to define the constructor
Rectangle::Rectangle(int w, int h)
{
    width = w;
    height = h;
}

// or we can use this a little advance way (preferred way)
Rectangle::Rectangle(int w, int h)
: width(w), height(h)
{
    // nothing to put inside
}

```

When you define a class, you also specify the private members, that is, the members that
are not available for external access, and the public members of that class. An application
program accesses objects by using the public methods of the class and thus activating
its capacities

```cpp
class Demo // class name starts with uppercase (usually)
{
    public:
        // public data members and methods here

    private:
        // private data members and method here
}
```
By default all body is private in class. When you define a method, you must also supply the class name, separating it from the function name by means of the scope resolution operator ::.

**Syntax**: `type class_name::function_name(parameter_list) { . . . }`

If you didn't supply the class name, it will result in a global function definition. Within a method, all the members of a class can be designated directly using their names. The class membership is automatically assumed. In particular, methods belonging to the same class can call each other directly. Access to private members is only possible within methods belonging to the same class. Thus, private members are completely controlled by the class. Defining a class does not automatically allocate memory for the data members of that class. To allocate memory, you must define an object. When a method is called for a given object, the method can then manipulate the data of this object.

Defining a class also defines a new type for which variables, that is, objects, can be defined. An object is also referred to as an instance of a class.

An object of a class has a memory address—just like any other object. You can assign this address to a suitable pointer.
```cpp
Account savings("Mac, Rita",654321, 123.5);
Account *ptrAccount = &savings;
```

## Methods
We must initialize variables with suitable values, non-initialized variables might lead to the serious run-time error. Constructors are the best methods to initialize the variables. **Constructors** names are same as the class name, and it doesn't have the return type, not even the void, since the mere task of the constructors is to instantiate the object with the variables also initialized. They are declard public. Constructors can also be overloaded so that various ways to initialize the objects remains (but care must be taken that every constructors must initialize all the variables, one way or another). A *default constructor* is a method without any parameters. A default constructor will use standard values for all data members. Objects that were created by a constructor must also be cleaned up in an orderly manner via a special method called a *destructor*, whose name start with the tilde symbol `~`. It only has one type, no overload is possible for the destructor. It is important to define a destructor if certain actions performed by the constructor need to be undone. If the constructor opened a file, for example, the destructor should close that file. The destructor in the `Account` class has no specific tasks to perform. The explicit definition is thus: `Account::∼Account(){} // Nothing to do`. To access the private data members of the class, we use **getters and setters** method. If you define an object as `const`, the program can only read the object. Methods such as `getName` or `display()` will be unavailable to change the data members, although they only perform read access with the data members and so these types of methods don't need to modify the data members.

## Enumeration (enum)
An enumeration is a user-definable, integral type. An enumeration is defined using the `enum` keyword. A range of values and a name for these values are also defined at the same time.**Example** `enum Shape{ Line, Rectangle, Ellipse};`

synatx:

```cpp
enum type_name
{
    value1,
    value2,
    value3,
    ...
    object_names;
}

// example:
enum colors_t {black, blue, green, cyan, red, purple, yellow, white};

colors_t mycolor;
mycolor = blue;
if (mycolor == green) mycolor = red;
```

## Arrays
An array is a series of elements of the same type placed in contiguous memory locations that can be individually referenced by adding an index to a unique identifier. An *array* contains multiple objects of identical types stored sequentially in memory. The individual objects in an array, referred to as array elements, can be addressed using a number, the so-called index or *subscript*. An array is also referred to as a *vector*. An array must be defined just like any other object. The definition includes the array name and the type and number of array elements. `type name[count];`. Ex- `float arr[10];  // Array name arr`. This defines the array `arr` with 10 elements of `float` type, this is a *float array*. To access the elements of an array. `arr[0], arr[1], arr[2], ...` and so on, it always starts with `0` to index. Like a regular variable, an array must be declared before it is used.
```cpp
type name[elements];   // type is like (int, float, ...)
```
> NOTE: The `elements` field within square bracket `[]`, representing the number of elements in the array, must be a *constant expression*, since arrays are blocks of static memory whose size must be determined at compile time, before the program runs.

### Initializing arrays
Be default, regular arrays are of local scopes, defined in the funciton and are left uninitialized. But the elements in an array can be explictly initialized to specific values when it is declared, by enclosing those initial values in braces `{}`. For example:
```cpp
int foo[5] = {1, 3, 4, 8, 2};
int bar[5] = {1,3,4}; // other two location will have zeros in them
int baz[5] = {};      // all the location will have default zeros in them
int fooz[] = {1, 4, 4, 3}; // fooz automatically knows it is 4 elements array

// accessing values of an array
foo[2]  // access 4
x = foo[3]; assigns x to 8
foo[0] = 5; // modifies array, 0 location is now 5
```
### Mulitdimensional arrays
It can be described as "arrays of arrays". Bi-dimensional array can be thought as a two-dimensional table made of elements, all of them of same uniform data type.
```cpp
int jimmy[3][5];    // can be thought at rows=3 and cols=5 table
```
Multidimensional arrays are not limited to two indices (i.e., two dimensions). They can contain as many indices as needed. Although be careful: the amount of memory needed for an array increases exponentially with each dimension. For example:
```cpp
char century[100][365][24][60][60];
```
declares an array with an element of type `char` for each second in a century. This amounts to more than 3 billion `char`! So this declaration would consume mroe than 3 GB of memory! Not pracitcal.

At the end, multidimensional arrays are just an abstraction for programmers, since the same results can be achieved with a simple array, by multiplying its indices:
```cpp
int jimmy[3][5]; // equilvalent to
int jimmy[15];  // (3*5=15)
```
With the only difference that with multidimensional arrays, the compiler automatically remembers the depth of each imaginary dimension.

### Arrays as Parameters
At some point, we may need to pass an array to a function as a parameter. In C++, it is not possible to pass the entire block of memory represented by an array to a function directly as an argument. But what can be passed instead is its address. In practice, this has almost the same effect, and it is a much faster and more efficient operation.

To accept an array as parameter for a function, the parameters can be declared as the array type, but with empty brackets, omitting the actual size of the array. For example:
```cpp
void procedure(int arg[])
```
This function accepts a parameter of type `array of int` called **arg**. In order to pass to this function an array declared as: `int myarray[40];`, it would be enough to write a call like this: `procedure(myarray);`. Let's see one example at work:
```cpp
// arrays as parameters
#include <iostream>
using namespace std;

void printarray (int arg[], int length) {
  for (int n=0; n<length; ++n)
    cout << arg[n] << ' ';
  cout << '\n';
}

int main ()
{
  int firstarray[] = {5, 10, 15};
  int secondarray[] = {2, 4, 6, 8, 10};
  printarray (firstarray,3);
  printarray (secondarray,5);
}
```
In the code above, the first parameter (int arg[]) accepts any array whose elements are of type int, whatever its length. For that reason, we have included a second parameter that tells the function the length of each array that we pass to it as its first parameter. This allows the for loop that prints out the array to know the range to iterate in the array passed, without going out of range.

**Arrays as Parameters in Functions**

Functions can be used with array parameters to maintain a structured design. Here is a definition of an example function which returns the average hours worked, given an array of type "hours_array" :
```cpp
float average(hours_array hrs)
{
    float total = 0;
    int count;
    for (count=0; count < NO_OF_EMPLOYEES; count++)
    {
        total += float(hrs[count]);
    }
    return (total / NO_OF_EMPLOYEES);
}
```
There is better way to do this, however;
```cpp
float average(int list_a[], int length)
{
    float total = 0;
    int count;
    for (count=0; count < length; count++)
    {
        total += float(list_a[count]);
    }
    return (total / length);
}
```

### Library arrays (C++ standard type from standard container)
This feature allows advance array operations and manipulations (need to learn more for this). Let's just see one example:
```cpp
#include <iostream>
#include <array>        // see how we use array library
using namespace std;

int main()
{
  array<int,3> myarray {10,20,30};

  for (int i=0; i<myarray.size(); ++i)  // this has size() feature, nice
    ++myarray[i];       // this loop is increasing the values by 1
                        // trying this so we know we can access values as well

  for (int elem : myarray)
    cout << elem << '\n';
}
```
### From other book:
```cpp
short number[20];   // shrot array
for (int i=0; i<20; i++>)
{
    number[i] = (short)(i*10); // assigns 0, 10, 20, .., 190
}
```
Arrays can be initialized when you define them. A list containing the values for the individual array elements is used to initialize the array:
`int num[3] = {30, 50, 80};`. You don't need to specify length if you initialize array when you define it, like `int num[] = {30, 50, 80};`. Here, the length of the array is equal to the number of initial values.

**char Arrays** whose elements are of *char* type and are often used as data communication buffers. One way of representing a string is to store the string and the terminating null character '\0' in a char array. When you define an array, you can use a string constant to initialize the array. `char name[] = "Hugo";`. This definition is equivalent to `char name[] = {'H', 'u', 'g', 'o', '\0'};`. Here we require to null character.
```cpp
 // let's see some example of array definition
 float number[3][10];      // 3x10 matrix (3 rows and 10 columns)

 int arr[2][3] = { {5, 0, 0},  {7, 0, 0}  };
    // int arr[][3] = { {5},  {7}  }; // equivalent

int *ptr = arr; // ptr points to arr[0] (starting point of arr)
```

## Fundamentals of File Input and Output
C++ provides the following classes to perform output and input of characters to/from files:
* `ofstream`: Stream class to write on files
* `ifstream`: Stream class to read from files
* `fstream`: Stream class to both read and write from/to files

These classes are derived directly or indirectly from the classes `istream` and `ostream`. We have already known these types of objects: `cin` is an object of class `istream` and `cout` is an object of class `ostream`. Therefore, we have already been using classes that are related to our file streams. And in fact, we can use our file streams the same way we are already used to use cin and cout, with the only difference that we have to associate these streams with physical files. Let's see an example:
```cpp
// basic file operations
#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ofstream myfile;
  myfile.open ("example.txt");
  myfile << "Writing this to a file.\n";
  myfile.close();
  return 0;
}
```
This code creates a file called example.txt and inserts a sentence into it in the same way we are used to do with cout, but using the file stream myfile instead.

**open a file**

The first operation generally performed on an object of one of these classes is to associate it to a real file. This procedure is known as to open a file. An open file is represented within a program by a stream (i.e., an object of one of these classes; in the previous example, this was myfile) and any input or output operation performed on this stream object will be applied to the physical file associated to it. In order to open a file with a stream object we use its member function open: `open (filename, mode);`. Each of the open member functions of classes ofstream, ifstream and fstream has a default mode that is used if the file is opened without a second argument:
```cpp
class           default mode
ofstream        ios::out    // open for output operations
ifstream        ios::in     // open for input operations
fstream         ios::in | ios::out  // both
```
To check if a file stream was successful opening a file, you can do it by calling to member is_open. This member function returns a bool value of true in the case that indeed the stream object is associated with an open file, or false otherwise:
```cpp
if (myfile.is_open()) { /* ok, proceed with output */ }
```

**closing a file**

When we are finished with our input and output operations on a file we shall close it so that the operating system is notified and its resources become available again. For that, we call the stream's member function close. This member function takes flushes the associated buffers and closes the file:
```cpp
myfile.close();
```
more examples: writing on a file
```cpp
// writing on a text file
#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ofstream myfile ("example.txt");
  if (myfile.is_open())
  {
    myfile << "This is a line.\n";
    myfile << "This is another line.\n";
    myfile.close();
  }
  else cout << "Unable to open file";
  return 0;
}
```
reading a file: same as `cin`
```cpp
// reading a text file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  string line;
  ifstream myfile ("example.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file"; 

  return 0;
}
```
This last example reads a text file and prints out its content on the screen. We have created a while loop that reads the file line by line, using getline. The value returned by getline is a reference to the stream object itself, which when evaluated as a boolean expression (as in this while-loop) is true if the stream is ready for more operations, and false if either the end of the file has been reached or if some other error occurred. Other state flags are: `eof()` returns true if a file open for reading has reached the end, `fail()` returns true when reading and writing operation fails.

When a program is terminated, the program data stored in main memory is lost. To store data permanently, you need to write that data to a file on an external storage medium. Single characters or character strings can be written to text files just like they can be output on screen. C++ provides various standard classes for file management. These so-called file stream classes allow for easy file handling.
* the `ifstream` class derives from the `istream` class and allows file reading
* the `ofstream` class derives from the `ostream` class and supports writing to files

**Open a file** You need to open a file before you can manipulate it. To do that:
* give the path of to the file
* define the access mode // read, write, open
You can open a file when you create a file stream. `ifstream myfile("test.file");`, the file name `test.file` opened for reading. Since the path was not stated, the file must be in the current directory. When a file is opened, the current file position is the beginning of the file. If you create a file stream for write-only access, the file you state need not exist. In this case a new file is created. `ofstream yourfile("new.file");`. This statement creates a new file called `new.file` and opens the file for writing. But be careful! If the file already exists, it will be truncated to a length of zero bytes, or in other words deleted.

You can create a file stream which does not reference a specific file and use the `open()` method to open a file later.
```cpp
ofstream yourfile;
yourfile.open("new.file");
```

**character Input and Output**

**Input using "get()"**: Having opened an input file, we can extract or read single characters from it using the member function `get()`. This function takes a single argument of type `char`. We do `in_stream.get(ch);` it will start collecting chars one after another from the `in_stream` which is pointing to the file.

**Output using "put()"**: We can write single characters to a file opened via an `ofstream` using the member function `put()`. Again this function takes in a single characters of type `char`. We do `out_stream.put('4');` to write into the opened file.

```cpp
#include <iostream>
#include <fstream>
using namespace std;

void copy_to(ifstream&, ofstream&);

int main()
{
    ifstream in_stream;
    ofstream out_stream;

    in_stream.open("file1.txt");
    out_stream.open("file2.txt");
    copy_to(in_stream, out_stream);
    out_stream.close();
    in_stream.close();

    return 0;
}

void copy_to(ifstream& in, ofstream& out)
{
    char character;

    in.get(character);
    while (!in.fail())
    {
        cout << character;
        out.put(character);
        in.get(character);
    }
}
```
```cpp
#include <iostream.h>
#include <fstream.h>
   
int main()
{
    char character;
    int number = 51;
    int     count = 0;
    ofstream out_stream;
    ifstream in_stream1;   /* Stream for counting integers. */
    ifstream in_stream2;   /* Stream for counting characters. */
    /* Create the file */
    out_stream.open("Integers");
    for (count = 1 ; count <= 5 ; count++)
    out_stream << number++ << ' ';
    out_stream.close();      
    /* Count the integers in the file */
    in_stream1.open("Integers");
    count = 0;
    in_stream1 >> number;
    while (!in_stream1.fail())
    {
        count++;
        in_stream1 >> number;
    }

    in_stream1.close();
    cout << "There are " << count << " integers in the file,\n";
    /* Count the non-blank characters */
    in_stream2.open("Integers");
    count = 0;
    in_stream2 >> character;
    while (!in_stream2.fail())
    {
        count++;
        in_stream2 >> character;
    }
    in_stream2.close();
    cout << "represented using " << count << " characters.\n";       
    return 0;
}
```
This program produces the following output:

There are 5 integers in the file, represented using 10 characters.

**Error Handling** Errors can occur when opening a file. A user may not have the required access privileges, or the file you want to read may not exist. `if ( !myfile )        // or: if ( myfile.fail() )`. Another check of the file `if ( myfile.eof() )        // at end-of-file?`

## Dynamic Memory Allocation
`new` operator in the play. When a program is compiled, the size of the data the program will need to handle is often an unknown factor; in other words there is no way to estimate the memory requirements of the program. In cases like this you will need to allocate memory dynamically, that is, while the program is running. Dynamically allocated memory can be released to continually optimize memory usage with respect to current requirements. This in turn provides a high level of flexibility, allowing a programmer to represent dynamic data structures, such as trees and linked lists. C++ uses the `new` and `delete` operators to allocate and release memory, and this means that objects of any type can be created and destroyed.

The `new` operator is an operator that expects the type of object to be created as an argument. `ptr = new type;`, where `ptr` is a pointer to `type`. The `new` operator creates an object of the specified type and returns the address of that object. The address is normally assigned to the pointer variable.
```cpp
long double *pld = new long double(10000.99);
```
A program should make careful use of available memory and always release memory that
is no longer needed. Failure to do so can impact the performance of your computer system.
Memory that is released is available for further calls to `new`. Memory that has been allocated by a call to `new` can be released using the `delete` operator. `delete ptr;` Here `ptr` memory will be released, but be sure that this memory space was dynamically allocated by a call to `new`.
```cpp
long *p1 = new long(20000000);
    .....    // do some work with *pi.
delete pi;
```
If you don't call `delete`, the dynamically allocated memory space is not released until the program terminates. Two cautions to take when using `delete`:
* do not call `delete` twice for the same object
* do not use `delete` to release statically allocated memory
```cpp
class FloatArr
{
    public:
        // public methods here
    private:
        float* arrPtr;      // Dynamic member
        int max;  // max quantitiy without reallocating new storage
        int cnt;  // number of present elements
}
```
You can exploit the potential of dynamic memory allocation to leverage existing classes and create data members of variable length. Depending on the amount of data an application program really has to handle, memory is allocated as required while the application is running. In order to do this the class needs a pointer to the dynamically allocated memory that contains the actual data. Data members of this kind are also known as dynamic members of a class. When compiling a program that contains arrays, you will probably not know how many elements the array will need to store. A class designed to represent arrays should take this point into consideration and allow for dynamically defined variable length arrays.

## Inheritance
Inheritance allows new classes to be constructed on the basis of existing classes. The new *derived class* “inherits” the data and methods of the so-called *base class*. But you can add more characteristics and functionality to the new class.

* **data abstraction**: General characteristics and abilities can be handled by generic (base) classes and specializations can be organized in hierarchical relationships by means of derived classes. This makes it easier to manage complex situations and relationships.

In principle, private and protected members of a class cannot be accessed from outside the same class in which they are declared. However, this rule does not apply to "friends".

*Friends* are functions or classes declared with the `friend` keyword.

Let's see one example for the case of use of friend function:
```cpp
// friend functions
#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
  public:
    Rectangle() {}
    Rectangle (int x, int y) : width(x), height(y) {}
    int area() {return width * height;}
    friend Rectangle duplicate (const Rectangle&);
};

Rectangle duplicate (const Rectangle& param)
{
  Rectangle res;
  res.width = param.width*2;
  res.height = param.height*2;
  return res;
}

int main () {
  Rectangle foo;
  Rectangle bar (2,3);
  foo = duplicate (bar);
  cout << foo.area() << '\n';
  return 0;
}
```
The duplicate function is a friend of class Rectangle. Therefore, function duplicate is able to access the members width and height (which are private) of different objects of type Rectangle. Notice though that neither in the declaration of duplicate nor in its later use in main, function duplicate is considered a member of class Rectangle. It isn't! It simply has access to its private and protected members without being a member. Typical use cases of friend functions are operations that are conducted between two different classes accessing private or protected members of both. 

**Friend classes**

Similar to friend functions, a friend class is a class whose members have access to the private or protected members of another class:

Let's now see the use of friend class:

```cpp
// friend class
#include <iostream>
using namespace std;

class Square;

class Rectangle {
    int width, height;
  public:
    int area ()
      {return (width * height);}
    void convert (Square a);
};

class Square {
  friend class Rectangle;
  private:
    int side;
  public:
    Square (int a) : side(a) {}
};

void Rectangle::convert (Square a) {
  width = a.side;
  height = a.side;
}
  
int main () {
  Rectangle rect;
  Square sqr (4);
  rect.convert(sqr);
  cout << rect.area();
  return 0;
}
```
In this example, class Rectangle is a friend of class Square allowing Rectangle's member functions to access private and protected members of Square. More concretely, Rectangle accesses the member variable Square::side, which describes the side of the square. There is something else new in this example: at the beginning of the program, there is an empty declaration of class Square. This is necessary because class Rectangle uses Square (as a parameter in member convert), and Square uses Rectangle (declaring it a friend). Friendships are never corresponded unless specified: In our example, Rectangle is considered a friend class by Square, but Square is not considered a friend by Rectangle. Therefore, the member functions of Rectangle can access the protected and private members of Square but not the other way around. Of course, Square could also be declared friend of Rectangle, if needed, granting such an access. Another property of friendships is that they are not transitive: The friend of a friend is not considered a friend unless explicitly specified.

**Inheritance between classes**

Classes in C++ can be extended, creating new classes which retain characteristics of the base class. This process, known as inheritance, involves a base class and a derived class: The derived class inherits the members of the base class, on top of which it can add its own members. For example, let's imagine a series of classes to describe two kinds of polygons: rectangles and triangles. These two polygons have certain common properties, such as the values needed to calculate their areas: they both can be described simply with a height and a width (or base). This could be represented in the world of classes with a class Polygon from which we would derive the two other ones: Rectangle and Triangle: The Polygon class would contain members that are common for both types of polygon. In our case: width and height. And Rectangle and Triangle would be its derived classes, with specific features that are different from one type of polygon to the other.

Derived classes definitions use the following syntax:

`class derived_class_name: public base_class_name { /*...*/ };`

Where derived_class_name is the name of the derived class and base_class_name is the name of the class on which it is based. The public access specifier may be replaced by any one of the other access specifiers (protected or private). This access specifier limits the most accessible level for the members inherited from the base class: The members with a more accessible level are inherited with this level instead, while the members with an equal or more restrictive access level keep their restrictive level in the derived class.

let's see another example:

```cpp
// derived classes
#include <iostream>
using namespace std;

class Polygon {
  protected:
    int width, height;
  public:
    void set_values (int a, int b)
      { width=a; height=b;}
 };

class Rectangle: public Polygon {
  public:
    int area ()
      { return width * height; }
 };

class Triangle: public Polygon {
  public:
    int area ()
      { return width * height / 2; }
  };
  
int main () {
  Rectangle rect;
  Triangle trgl;
  rect.set_values (4,5);
  trgl.set_values (4,5);
  cout << rect.area() << '\n';
  cout << trgl.area() << '\n';
  return 0;
}
```
The objects of the classes Rectangle and Triangle each contain members inherited from Polygon. These are: width, height and set_values. The protected access specifier used in class Polygon is similar to private. Its only difference occurs in fact with inheritance: When a class inherits another one, the members of the derived class can access the protected members inherited from the base class, but not its private members. By declaring width and height as protected instead of private, these members are also accessible from the derived classes Rectangle and Triangle, instead of just from members of Polygon. If they were public, they could be accessed just from anywhere.

>Actually, most use cases of inheritance in C++ should use public inheritance. When other access levels are needed for base classes, they can usually be better represented as member variables instead.

**What is inherited from the base class?**

In principle, a publicly derived class inherits access to every member of a base class except:

* its constructors and its destructor
* its assignment operator members (operator =)
* its friends
* its private members

Even though access to the constructors and destructor of the base class is not inherited as such, they are automatically called by the constructors and destructor of the derived class. Unless otherwise specified, the constructors of a derived class calls the default constructor of its base classes (i.e., the constructor taking no arguments). Calling a different constructor of a base class is possible, using the same syntax used to initialize member variables in the initialization list: `derived_constructor_name (parameters) : base_constructor_name (parameters) {...}`
```cpp
// constructors and derived classes
#include <iostream>
using namespace std;

class Mother {
  public:
    Mother ()
      { cout << "Mother: no parameters\n"; }
    Mother (int a)
      { cout << "Mother: int parameter\n"; }
};

class Daughter : public Mother {
  public:
    Daughter (int a)
      { cout << "Daughter: int parameter\n\n"; }
};

class Son : public Mother {
  public:
    Son (int a) : Mother (a)
      { cout << "Son: int parameter\n\n"; }
};

int main () {
  Daughter kelly(0);
  Son bud(0);
  
  return 0;
}
```
Notice the difference between which Mother's constructor is called when a new Daughter object is created and which when it is a Son object. The difference is due to the different constructor declarations of Daughter and Son:

```cpp
Daughter (int a)          // nothing specified: call default constructor
Son (int a) : Mother (a)  // constructor specified: call this specific constructor 
```

**Multiple Inheritance**

A class may inherit from more than one class by simply specifying more base classes, separated by commas, in the list of a class's base classes (i.e., after the colon). For example, if the program had a specific class to print on screen called Output, and we wanted our classes Rectangle and Triangle to also inherit its members in addition to those of Polygon we could write:
```cpp
class Rectangle: public Polygon, public Output
{
    // members of Rectangle defined here
};
class Triangle: public Polygon, public Output
{
    // members of Triangle defined here
};
```

Let's see the above skeleton being complete in the following example:
```cpp
// multiple inheritance
#include <iostream>
using namespace std;

class Polygon {
  protected:
    int width, height;
  public:
    Polygon (int a, int b) : width(a), height(b) {}
};

class Output {
  public:
    static void print (int i);
};

void Output::print (int i) {
  cout << i << '\n';
}

class Rectangle: public Polygon, public Output {
  public:
    Rectangle (int a, int b) : Polygon(a,b) {}
    int area ()
      { return width*height; }
};

class Triangle: public Polygon, public Output {
  public:
    Triangle (int a, int b) : Polygon(a,b) {}
    int area ()
      { return width*height/2; }
};
  
int main () {
  Rectangle rect (4,5);
  Triangle trgl (4,5);
  rect.print (rect.area());
  Triangle::print (trgl.area());
  return 0;
}
```

## Polymorphism
In C++, *virtual methods* are used to implement polymorphic classes. The *virtual* keyword is used to declare a virtual method in a base class. `virtual void display() const;`. However, it is common practice for the derived class to define its own version of the virtual method, which is thus modified to suit the special features of the derived class. The redefinition in the derived class must have:
* the same signature and
* the same return type
as the virtual method in the base class. The new version of a virtual method is automatically virtual itself. This means you can omit the **virtual** keyword in the declaration.

**virtual members**

A virtual member is a member function that can be redefined in a derived class, while preserving its calling properties through references. The syntax for a function to become virtual is to precede its declaration with the virtual keyword:
```cpp
// virtual members
#include <iostream>
using namespace std;

class Polygon {
  protected:
    int width, height;
  public:
    void set_values (int a, int b)
      { width=a; height=b; }
    virtual int area ()
      { return 0; }
};

class Rectangle: public Polygon {
  public:
    int area ()
      { return width * height; }
};

class Triangle: public Polygon {
  public:
    int area ()
      { return (width * height / 2); }
};
```




## Exception/Error Handling
Errors that occur at program runtime can seriously interrupt the normal flow of a program.
Some common causes of errors are
* division by 0, or values that are too large or small for a type
* no memory available for dynamic allocation
* errors on file access, for example, file not found
* attempt to access an invalid address in main memory
* invalid user input

Anomalies like these lead to incorrect results and may cause a computer to crash. Both of these cases can have fatal effects on your application. One of the programmer’s most important tasks is to predict and handle errors. You can judge a program’s quality by the way it uses error-handling techniques to counteract any potential error, although this is by no means easy to achieve.


## Type aliases (typedef / using)
To create aliases using C style using keyword `typedef`:
```cpp
typedef existing_type new_type_name;
```
where `existing_type` is any type, either fundamental or compound, and `new_type_name` is an identifier with the new name given to the type.
```cpp
typedef char C; // here C means char
// we can then use it as
C mychar, anotherchar, *ptc1; // to define type of variable or even pointer
typedef unsigned int WORD;  // WORD means usigned int
typedef char * pChar;   // we are creating aliases
pChar ptc2; // ptc2 is a pointer of char
typedef char field [50]; 
field name; // char name [50];
```

Another way, recently, is to use keyword `using`
```cpp
using new_type_name = existing_type;

// for example:
using C = char;
using WORD = unsigned int;
using pChar = char *;
using field = char [50];
```
