# Header Files
---
## Motivation

In becoming a competent programmer, it's important that you create and reinforce habits that make programming an efficient and organized process. This becomes especially important when working with other programmers collaboratively.

One way programmers like to organize projects is by separating **interface** and **implementation**. An interface is like a contract. The person designing the interface decides *how* people will use the thing they programmed. For example:

```
// PARAMETER: A number in the range 1-26, inclusive.
// RETURNS: The letter corresponding to that number alphabetically 
// 			(A = 1, B = 2, etc.) Returns -1 if number is not in that range.
char number_to_alphabet(int number)
{
	//CODE GOES HERE
} 

```
The interface defines how we should expect to use this function. If we pass in a number as an integer, we'll get that number letter from the alphabet, returned from the function as a character. The interface does *not* explain how the function does that. 

The implementation, as you may have guessed, is the actual definition of how the interface will do what we expect it to do. The `//CODE GOES HERE` part of the snippet above is where the implementation of that function would go. 

It's worth noting that even if you're writing code that no one else will see, separating interface and implementation still helps to make your code easier to understand and debug.

In C++, interface and implementation are often separated into **header files** (typically .h or .hpp files) and **implementation files** (typically .cpp files) respectively. In header files, we outline the interface of the functions, classes, and other structures we're creating. In implementation files, we write our solution, respecting the interfaces as we do. In our implementation files, we write `#include 'header_file_name.h'` to signal to the compiler that the implementation file defines or makes use of something in the header file.

## Exercise 1

### Task

Navigate to `/headers/ex1/` from the root folder of this project. You should see `main.cpp` and `maths.h`. Something is missing that prevents `main.cpp` from properly compiling and running. Identify and fix this issue, then compile and run `main.cpp`. To pass this exercise, you must get `"Good job! Move onto the next exercise."` to print when you run the compiled binary. When you're done, move on to exercise 2.

## Exercise 2

## Exercise 3

### Preface

The compiler reads files sequentially, a line at a time. An interesting side effect of that is that the following code produces a compiler error:

```
#include <iostream>
using std::cout;

void foo()
{
	cout << "foo\n";
	bar();
}

void bar()
{
	cout << "bar\n";
}
```

When the compiler reads the `bar();` call, it has not yet encountered a definition of the function `bar` so it throws an error and stops reading the file. One way we can amend this is by writing a **forward declaration**. A forward declaration is just a way of promising to the compiler that a full definition of a function is coming later in the file. All the compiler requires when it reads a function call is a **declaration** of the function, not a **definition**. A function definition includes an implementation of the function, while a function declaration is merely the interface. (the function name, its parameters, and its return type) In the above example, we could accomplish this by putting `void bar();` above the function definition for `foo()`. 

### Task

Navigate to `/headers/ex3/` from the root folder of this project. `maths.h` contains a declaration for a function used in the `main` function in `main.cpp`. Something is again missing here, but it's not the `#include` statement - fix it, then compile and run `main.cpp`. Don't modify the `main` function or the function declaration in `maths.h`. When you're done, move on to exercise 4.

