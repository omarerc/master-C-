#include <iostream>
#include <string>
#include "Person.h"
#include "Date.h"

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
  Date bd;
  try {
    bd = Date(year, month, day);
    std::cout << "DateType: " << bd.Show() << std::endl;
  } catch(const char* msg) {
    std::cout << "ERROR: " << msg << std::endl;  
  }
  Person ps(name, bd);
  std::cout << "Hello PS: " << ps.getName() + "\n"
    << "PS Birthday: " << ps.getBirthday() << std::endl;
  return 0;
}