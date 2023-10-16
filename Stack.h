#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::out_of_range;
using std::string;
using std::vector;

template <typename T>
class Stack {
 private:
  int s_size = 0;
  int s_top = -1;
  vector<T> _vector = {};

 public:
  Stack(const vector<T>& _v = {}) : _vector(std::move(_v)) {
    s_size = _vector.size();
    s_top = s_size - 1;
  }

  int size() const { return s_size; }

  int top() const { return s_top; }

  bool is_empty() const { return s_size <= 0; }

  void pop() {
    if (s_size <= 0) return;

    --s_top;
    --s_size;
  }

  void push(T val) {
    ++s_top;
    ++s_size;
    if (s_size > _vector.size()) {
      _vector.push_back(val);
    } else {
      _vector[top] = val;
    }
  }

  void change(int idx, T val) {
    if (is_empty()) {
      throw out_of_range("[change] -> Stack is empty");
    }
    if (idx < 0 || idx >= s_size) {
      throw out_of_range("[change] -> Index is out of range");
    }
    _vector.at(idx) = val;
  }

  T peek(int idx) {
    if (is_empty()) {
      throw out_of_range("[peek] -> Stack is empty");
    }
    if (idx >= s_size || idx < 0) {
      throw out_of_range("[peek] -> Index is out of range");
    }
    return _vector.at(idx);
  }

  void print_vals() {
    cout << endl;
    cout << "Stack size: " << s_size << endl << endl;
    cout << "Top: " << top << endl;
  }

  void display() {
    if (is_empty()) {
      return print_vals();
    }

    for (const auto& item : _vector) {
      cout << item << endl;
    }

    print_vals();
  }
};

#endif
