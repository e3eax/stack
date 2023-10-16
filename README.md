# Stack

## Description

A simple, yet robust and efficient implementation of the stack data structure in C++. This stack implementation is generic, meaning it can hold elements of any data type.

## Usage

To use the stack, simply create an instance of the `Stack` class and specify the data type of the elements you want the stack to hold. For example:

```cpp
#include "Stack.h"

// Create a stack of strings
Stack<std::string> stringStack;

// Create a stack of bools
Stack<bool> boolStack;

// Create a stack of ints
Stack<int> intStack;

// Create a stack of doubles
Stack<double> doubleStack;

// Create a stack of chars
Stack<char> charStack;
```

Additionally, you can also pass a vector into the constructor to initialize the stack with a collection of elements. For example:

```cpp
std::vector<std::string> words{"this", "is", "a", "sentence"};
Stack<std::string> wordsStack(words);
std::vector<int> numbers{1, 2, 3, 4, 5};
Stack<int> wordsStack(words);
std::vector<bool> booleans{false, true, true, false};
Stack<int> wordsStack(words);

**etc...**
```

## Operations

The `Stack` class supports the following operations:

- `push`: Adds an element to the top of the stack.
- `pop`: Removes the element from the top of the stack.
- `top`: Returns the element at the top of the stack without removing it.
- `isEmpty`: Returns `true` if the stack is empty, `false` otherwise.
- `size`: Returns the number of elements in the stack.

## Example

Here's an example of how to use the stack:

```cpp
#include "Stack.h"
#include <iostream>

int main() {
    // Create a stack of ints
    Stack<int> stack;

    // Push some elements onto the stack
    stack.push(1);
    stack.push(2);
    stack.push(3);

    // Pop an element off the stack
    stack.pop();

    // Print the top element of the stack
    std::cout << "Top element: " << stack.top() << std::endl;

    // Print the size of the stack
    std::cout << "Stack size: " << stack.size() << std::endl;

    return 0;
}
```
