// Person.h
#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
  public:
    
    Person(std::string name, int age) : name(name), age(age) { /* Code */ }

    std::string getName() {
      std::string result = this->name;
      return result;
    }

    int getAge() {
      return this->age;
    }

  private:
    std::string name;
    int age; 
};

#endif