#include <iostream>
#include <string>
#include "Exceptions.h"
#include <exception>

double div(const double &a, const double& b) throw(MyException){

    if(b==0){
        MyException error;
        throw error;
    }else{
        return a/b;
    }
    return 0.0;
}
