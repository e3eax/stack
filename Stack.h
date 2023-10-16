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
  int size = 0;
  int top = -1;
  vector<T> _vector = {};

  void set_values() {
    set_size();
    set_top();
  }

 public:
  Stack(const vector<T>& _v = {}) : _vector(std::move(_v)) { set_values(); }

  void set_size() { size = size(); }

  void set_top() { top = size() - 1; }

  int size() const { return _vector.size(); }

  int top() const { return top; }

  bool is_empty() const { return get_size() <= 0; }

  void pop() {
    if (size <= 0) return;

    _vector.erase(_vector.begin() + top);
    set_values();
  }

  void push(T val) {
    _vector.push_back(val);
    set_values();
  }

  void change(int idx, T val) {
    if (is_empty()) {
      throw out_of_range("[change] -> Stack is empty");
    }
    if (idx < 0 || idx >= size) {
      throw out_of_range("[change] -> Index is out of range");
    }
    _vector.at(idx) = val;
  }

  T peek(int idx) {
    if (is_empty()) {
      throw out_of_range("[peek] -> Stack is empty");
    }
    if (idx >= size || idx < 0) {
      throw out_of_range("[peek] -> Index is out of range");
    }
    return _vector.at(idx);
  }

  void print_vals() {
    cout << endl;
    cout << "Size: " << size << endl << endl;
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
