#ifndef DATEEXCEPTION_H
#define DATEEXCEPTION_H

#include <exception>
#include <string>

class DateException : public std::exception {
public:
    explicit DateException(const std::string& message) : msg_(message) {}
    virtual ~DateException() _NOEXCEPT { }

    // Removing noexcept specification to rely on default behavior
    virtual const char* what() const _NOEXCEPT {
        return msg_.c_str();
    }

private:
    std::string msg_; // Ensure this member variable is declared correctly
};

#endif // DATEEXCEPTION_H
