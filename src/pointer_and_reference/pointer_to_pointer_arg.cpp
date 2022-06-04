#include <iostream>

struct Foo {
  int a;
};

void receive_ref_to_pointer(int depth, Foo*& foo) {
  if (depth > 3) {
    return;
  }
  std::cout << "receive_ref_to_pointer: " << depth << " " << foo << std::endl;
  receive_ref_to_pointer(depth + 1, foo);
}

void receive_pointer_to_pointer(int depth, Foo** foo) {
  if (depth > 3) {
    return;
  }
  std::cout << "receive_pointer_to_pointer: " << depth << " point to: " << *foo << " pointer address: " << foo << std::endl;
  receive_pointer_to_pointer(depth + 1, foo);
}

int main() {
  std::cout << "Hello, World!" << std::endl;
  Foo* new_foo = nullptr;
  receive_ref_to_pointer(0, new_foo);
  receive_pointer_to_pointer(0, &new_foo);
}
