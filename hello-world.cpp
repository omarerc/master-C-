#include <iostream>
#include <string>

int main() {
  std::string input;
  std::cout << "Name: ";
  std::getline(std::cin, input);
  std::cout << "Hello: " << input << std::endl;
  return 0;
}