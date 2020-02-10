#include<iostream>
#include "Person.h"
#include <vector>

using namespace std;

int main()
{
    Person person1("John","Smith");

    Person personCopy(person1);


    cout << "Full name P1: " << person1.fullName()<<endl<<endl;

    cout << "Full name PCopy: " << personCopy.fullName()<<endl<<endl;

    cout << "Person1 Age: " << person1.age() <<endl<<endl;
    cout << "Person2 Age: " << personCopy.age() <<endl<<endl;

    ++person1;
    cout << "Person1 ++Age: " << person1.age() << endl << endl;
    person1++;
    cout << "Person1 Age++: " << person1.age() <<endl<<endl;

    ++personCopy;
    cout << "Person2 ++Age: " << personCopy.age() <<endl<<endl;
    personCopy++;
    cout << "Person2 Age++: " << personCopy.age() <<endl<<endl;

 //   cout<<person1._firstName<<endl<<endl; //error during compilation - field is private


    cout << "-------------------------USING VECTOR-----------------------------------"<<endl<<endl;

    Person defaultPerson();

    vector <Person> v;
    Person John("John", "Smith");
    cout << "-1------------------" << endl;
    v.push_back(John);
    cout << "-2------------------" << endl;
    Person Tim(John);
    v.push_back(Tim);
    cout << "-3------------------" << endl;
    v.clear();
    cout << "-4------------------" << endl;
    return 0;


    return 0;
}
