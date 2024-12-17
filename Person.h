// Person.h
#ifndef PERSON_H
#define PERSON_H

#include <string>
//#include "DateType.h"

class Person {
  public:
    
    Person(std::string name, int year, int month, int day): name(name), year(year), month(month), day(day) { }
    //Person(std::string name, Date Birthday): name(name), Birthday(Birthday) { /* Code */ }

    std::string getName();
    std::string getBirthday();
    int getAge();

  private:
    std::string name;
    //DateType Birthday;
    int year, month, day;
};

#endif