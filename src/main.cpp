#include <iostream>
#include <string>

void print(std::string value) {
  std::cout << "Hello " + value << "\n";
}

int main(int argc, char** argv) {
  print("world");
  return 0;
}
