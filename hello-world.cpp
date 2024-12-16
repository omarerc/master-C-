#include <iostream>
#include <string>
#include "Person.h"

int main() {
  int age;
  std::string name;

  std::cout << "Name: ";
  std::getline(std::cin, name);
  std::cout << "Age: ";
  std::cin >> age;
  Person p(name, age);
  std::cout << "Hello: " << p.getName() + "\n"
    << "Age: " << age << std::endl;
  return 0;
}