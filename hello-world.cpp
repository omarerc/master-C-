#include <iostream>
#include <string>
#include "Person.h"
#include "DateType.h"

int main() {
  int year, month, day;
  std::string name;

  std::cout << "Name: ";
  std::getline(std::cin, name);
  std::cout << "Month Birth: ";
  std::cin >> month;
  std::cout << "Day Birth: ";
  std::cin >> day;
  std::cout << "Year Birth: ";
  std::cin >> year;
  Person p(name, year, month, day);
  std::cout << "Hello: " << p.getName() + "\n"
    << "Birthday: " << p.getBirthday() << std::endl;
  try {
    DateType bd(year, month, day);
    std::cout << "Birthday: " << bd.Show() << std::endl;
  } catch(char* msg) {
    std::cout << msg << std::endl;  
  }
  return 0;
}