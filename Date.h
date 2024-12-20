// Date.h
#ifndef Date_H
#define Date_H

#include <iostream>
#include "DateException.h"

class Date {
  public:

    Date(): year(1), month(1), day(1) { /* code */ } 
    Date(int year, int month, int day): year(year), month(month), day(day)
    {
      // Assigments to private properties
      //this->day = day;
      //this->month = month;
      //this->year = year;
      // Month Validation
      if ((this->month < 1) || (this->month > 12)) {
        throw DateException("ERROR: Month should be between 1 to 12.");
      }
      
      if (this->day < 1)
        throw DateException("ERROR: Day should be greater than 0.");
      switch (this->month)
      {
      case 1:
      case 3:
      case 5:
      case 7:
      case 8:
      case 10:
      case 12:
        if (this->day > 31)
          throw DateException("ERROR: Day can't be greater 31.");
        break;
      case 4:
      case 6:
      case 9:
      case 11:
        if (this->day > 30)
          throw DateException("ERROR: Day can't be greater 30.");
        break;
      case 2:
        if (this->day > 29)
          throw DateException("ERROR: Day can't be greater 29.");
        break;
      }
    }

    std::string Show();

  private:
    int year, month, day;
};

#endif