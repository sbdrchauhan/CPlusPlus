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
**Reading a line** >> can be used to read only one word into a string. If you need to read a whole line of text, you can use the global function **getline()**. `getline(cin, textt)` reads until a newline character occurs. `getline(cin, s, '.');` will read until period is reached
