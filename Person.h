// Person.h
#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
#include <stdexcept>
#include "Date.h"

class Person {
  public:
    
    Person(std::string name, int year, int month, int day): name(name)
    {
      try
      {
        this->Birthday = Date(year, month, day);
      }
      catch(const std::exception& e)
      {
        std::cout << "ERROR: Unvalid Birthday Date -> " << e.what() << '\n';
      }  
    }
    
    Person(std::string name, Date Birthday): name(name), Birthday(Birthday) { /* Code */ }

    std::string getName();
    std::string getBirthday();
    int getAge();

  private:
    std::string name;
    Date Birthday;
};

#endif