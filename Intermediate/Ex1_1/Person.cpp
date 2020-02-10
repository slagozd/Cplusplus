#include<iostream>
#include "Person.h"

using namespace std;


Person::Person(const string& firstName, const string& surname):_age(0){

    _firstName = firstName;
    _surname = surname;
    cout << "Constructor is working for " << _firstName << " " << _surname<<endl<<endl;
}

Person::Person(const Person &person){

    _firstName = person._firstName;
    _surname = person._surname;
    _age = 0;
    cout << "Copy constructor is working for " << _firstName << " " << _surname<<endl<<endl;
}

Person::Person(){

    _firstName = "Default_first_name";
    _surname = "Default_surname";
    _age = 99;
    cout << "Default constructor is working for " << _firstName << " " << _surname<<endl<<endl;
}


Person::~Person(){

    cout << "Destructor for " << _firstName << " " << _surname <<endl<<endl;

}

string Person::fullName(){

    return _firstName + " " + _surname;
}

int Person::age(){

    return _age;

}

void Person::operator++(){

   ++_age;
}

void Person::operator++(int){

    _age++;

}



