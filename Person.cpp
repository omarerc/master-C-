#include "Person.h"
//#include "DateType.h"
#include <iostream>

//Person::Person(std::string name, int year, int month, int day): name(name), year(year), month(month), day(day) {  };

//Person::Person(std::string name, Date Birthday): name(name), Birthday(Birthday)
//  { /* Code */  }

std::string Person::getName() {
  std::string result = this->name;
  return result;
};

std::string Person::getBirthday() {
  return std::string (std::to_string(this->month) + "/" +
    std::to_string(this->day) + "/" +
    std::to_string(this->year));
}

int Person::getAge() {
  return 0;
};