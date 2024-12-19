// Person.h
#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
#include "DateType.h"

class Person {
  public:
    
    Person(std::string name, int year, int month, int day): name(name)
    {
      try
      {
        this->Birthday = DateType(year, month, day);
      }
      catch(const char* msg)
      {
        std::cerr << "ERROR: Unvalid Birthday Date -> " << msg << '\n';
      }  
    }
    
    Person(std::string name, DateType Birthday): name(name), Birthday(Birthday) { /* Code */ }

    std::string getName();
    std::string getBirthday();
    int getAge();

  private:
    std::string name;
    DateType Birthday;
};

#endif