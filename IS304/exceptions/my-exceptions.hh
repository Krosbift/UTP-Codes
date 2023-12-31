#ifndef MY_EXCEPTIONS_HH
#define MY_EXCEPTIONS_HH

#include <exception>
#include <string>

class Out_of_range : public std::exception {
  public:
    Out_of_range(const std::string& message) : message(message) { }
  private:
    std::string message;
  public:
    const char* what() const noexcept override { return message.c_str(); }
};

#endif