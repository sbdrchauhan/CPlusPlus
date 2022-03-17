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

**start by passing by value**