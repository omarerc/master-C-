#include "Date.h"
#include <iostream>

std::string Date::Show() {
  return std::string (std::to_string(this->month) + "/" +
    std::to_string(this->day) + "/" +
    std::to_string(this->year));
}