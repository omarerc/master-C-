#ifndef DATEEXCEPTION_H
#define DATEEXCEPTION_H

#include <iostream>
#include <exception>
#include <string>

class DateException: public std::exception {
public:
    explicit DateException(const std::string& message): msg_(message) {}
    virtual const char* what() const noexcept override {
        return msg_.c_str();
    }

private:
    std::string msg_;
};

#endif