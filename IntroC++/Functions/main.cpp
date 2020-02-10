#include <iostream>
#include <string>
#include "functions.h"

int main(){

    int param = 2;
    cout << "***********************" << endl;
    cout << "Sending Param by value " << endl;
    cout << "***********************" << endl << endl;

    cout << "int param before : " << param << " | " << &param << " | " << sizeof(param) << endl;

    value(param);

    cout << "int param after : " << param << " | " << &param << " | " << sizeof(param) << endl;


    cout << "*****************************" << endl;
    cout << "Sending Param by reference   " << endl;
    cout << "*****************************" << endl << endl;

    cout << "int param before : " << param << " | " << &param << " | " << sizeof(param) << endl;

    val_by_refer(param);

    cout << "int param after : " << param << " | " << &param << " | " << sizeof(param) << endl << endl;

    cout << "*****************************" << endl;
    cout << "Return max value             " << endl;
    cout << "*****************************" << endl << endl;

    cout << "Max number from 10, 3, 5 is: " << maximum(10,3,5) << endl << endl;
    cout << "Max number from 2, 3, 4 is: " << maximum(2,3,4) << endl << endl;
    cout << "Max number from 5, 7, 2 is: " << maximum(5,7,2) << endl << endl;

    cout << "*****************************" << endl;
    cout << "Family functions             " << endl;
    cout << "*****************************" << endl << endl;

    int i = 1;
    float f = 1.0;
    double d = 15.9;
    char c = 'c';
    short int sh = 4;

    cout << "Size of int var: " << sizeBits(i) << endl << endl;
    cout << "Size of float var: " << sizeBits(f) << endl << endl;
    cout << "Size of double var: " << sizeBits(d) << endl << endl;
    cout << "Size of char var: " << sizeBits(c) << endl << endl;
    cout << "Size of short var: " << sizeBits(sh) << endl << endl;

    return 0;

}
