# Stack

## Overview

A generic and efficient stack data structure implemented in C++. It is designed to be simple and easy to use while maintaining robustness and efficiency.

## Features

- **Generic**: Can hold elements of any data type, including custom types.
- **Efficient**: Time complexity of O(1) for common operations such as push, pop, and top.
- **Resizable**: Automatically expands to accommodate new elements.

## Installation

To use this stack, first, download or clone the repository. Then, include the `Stack.h` file in your project:

```cpp
#include "Stack.h"
```

## Usage

Create an instance of the `Stack` class and specify the data type of the elements:

```cpp
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

### Initialization with a Vector

You can also initialize a stack with a vector of elements:

```cpp
std::vector<std::string> words{"this", "is", "a", "sentence"};
Stack<std::string> wordsStack(words);

std::vector<int> numbers{1, 2, 3, 4, 5};
Stack<int> numbersStack(numbers);

std::vector<bool> booleans{false, true, true, false};
Stack<bool> booleansStack(booleans);

// ... You can initialize a stack with a vector of any type.
```

## Stack Operations

The `Stack` class supports the following operations:

- `display()`: Displays all the elements in the stack.
- `size()`: Returns the number of elements in the stack.
- `pop()`: Removes the element from the top of the stack.
- `push(element)`: Adds an element to the top of the stack.
- `is_empty()`: Returns `true` if the stack is empty, `false` otherwise.
- `top()`: Returns the element at the top of the stack without removing it.
- `peek(index)`: Returns the value at the specified index or throws an `out_of_range` exception if the index is out of range.
- `change(index, value)`: Sets the specified value at the specified index or throws an `out_of_range` exception if the index is out of range.

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

    // Print the value of the specified index
    std::cout << "Value at index 1: " << stack.peek(1) << std::endl;

    // Print each element contained in the stack
    stack.display();


    return 0;
}
```
