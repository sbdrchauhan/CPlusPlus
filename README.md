C++ Notes from - The C++ Programming Language Bjarne Stroustrup 4the edition
## Fundamental Types
C++ most common types that can be used to hold the data are:
* A Boolean type (**bool**)
* Character types (such as **char** and **wchar_t**)
* Integer types (such as **int** and **long long**)
* Floating types (such as **double** and **long double**)
* A type **void** to signify the absence of information
* Pointer types (such as int \* )
* Array types (such as **char[]**)
* Reference types (such as **double&** and **vector\<int\>&**)
* User-defined type (such as **struct**, **class**, **enum**)

`char ch='a';` hold a character of the implementation's character set.

**Integer Types** Integer comes in three forms: "plain" int, signed int, and unsigned int. In addition, integers comes in four sizes: short int, "plain" int, long int, long long int.

## Pointers, Arrays, and References
The basics for referrring to memory. If we know the object's address and type we can access to it. We do this work with the memory with pointers and references.

### Pointers
For any type **T**, the `T*` is a type pointer to T. That is the variable with `T*` can hold the address of an object of type T. See example:
```cpp
char c = 'a';
char *p = &c; // pointer to char
char c2 = *p; // deferencing
```
One of the main task we do with the pointer is *deferencing*, meaning we want to know the value that the pointer is pointing to. `nullptr` is a pointer that does not point to an object. It can be assigned to any pointer type, but not to other built-in types:
```cpp
int *pi = nullptr;
double *pd = nullptr;
int i = nullptr;  // error: i is not a pointer
```

### Arrays
```cpp
float v[3]; // an array of three floats
char a[32]; // an array of 32 pointers to char
```
An array is C++'s fundamental way of representing a sequence of objects in memory. If what you want is a simple fixed-length sequence of objects of a given type in memory, an array is the ideal solution. For every other need, an array has serious problems.

An array can be allocated statically, on the stack, and on the free store.
```cpp
int a1[10];   // 10 ints in static storage

void f()
{
  int a2[20];   // 20 ints on the stack
  int *p = new int[40]; // 40 ints on the free store
}
```






