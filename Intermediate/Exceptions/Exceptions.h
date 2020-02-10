#ifndef EXCEPTIONS_H_INCLUDED
#define EXCEPTIONS_H_INCLUDED
#include <string>
#include <iostream>
#include <exception>

using namespace std;

class MyException : public exception {

public:
    const char* what() const throw(){
        return "My exception don't divide by zero catched";
    }
};

double div(const double&, const double&)throw(MyException);
#endif // EXCEPTIONS_H_INCLUDED
