Notes on C++ language collected and compiled from various source.

## List of references
* [A Complete Guide to Programming in C++](https://www.amazon.com/Complete-Guide-Programming-Title-Demand/dp/0763718173)

<hr/>

C++ and OOP (object-oriented programming) feature:
* data abstraction
* data hiding
* inheritence
* polymorphism

Object-oriented programming combine data (properties) and functions (capacities). The general workflow of the OOP is you start writing source code `.cc` file in your editor combines with the header file compile it to get the object file, which then combines standard library file and other library files using a linker to finally get the executable file.

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

**string**
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
A function that calls itself is said to be *recursive*. It could also have called other function multiple times before it calls the same function again. But recursion function needs a **break** criteria to avoid run it infinitely.

## Storage Classes and Namespaces
`extern string line;` means in another source file this `string line` has to be globally defined; so the new or other source file can use it as an `extern`.

## References and Pointers
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

**Definint Pointers** A *pointer* is an expression that represents both the *address* and *type* of another object. `&var` is the address of the object var. A pointer points to a memory address and simultaneously indicates by its type how the memory address can be read or written to. Thus, depending on the type, we refer to pointers to char, pointers to int, and so on, or say in abbreviation, such as char pointer, int pointer, and so on.

We can define *pointer variables*, i.e., variables that can store the address of another object. `int *ptr;` // or `int* ptr;` This defines variable `ptr`, which is an `int*` type (in other words, a *pointer to int*). `ptr` can thus store the address of an `int` variable.

References are similar to pointers: both refer to an object in memory. However, a pointer
is not merely an alias but an individual object that has an identity separate from the
object it references. A pointer has its own memory address and can be manipulated by
pointing it at a new memory address and thus referencing a different object.

## Defining Classes
Humans use abstraction all the time to manage complex situation. Classes are the language element in C++ most important to the suppport of OOP concept. A class defines the properties and capacities of an object. The first step towards solving a problem is analysis. In object-oriented programming, analysis comprises identifying and describing objects and recognizing their mutual relationships. Object descriptions are the building blocks of classes. In C++, a class is a user-defined type. It contains data members, which describe the properties of the class, and member functions, or methods, which describe the capacities of the objects. Classes are simply patterns used to instantiate, or create, objects of the class type. In other words, an object is a variable of a given class.

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

**start from chp14**
