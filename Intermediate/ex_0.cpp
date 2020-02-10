#include<iostream>

using namespace std;

class Person{

    public:
    string firstName;
    string lastName;

    Person(void):firstName("Sabina"),lastName("Gozdur"){cout << "Constructor is working" << endl;}; //initialization list
    Person(string,string); // constructor
    ~Person(){cout<< "Destructor of " << firstName << " " << lastName << endl;} //destructor have to be defined when we allocate memory in constructor
    void introduceYourself(void);


};

Person::Person(string fn, string ln){

    cout << "Constructor is working" << endl;
    firstName = fn;
    lastName = ln;
}

void Person::introduceYourself(){

    cout<< "My name is: " << firstName << " " << lastName << endl << endl;
}

int main(void){

    Person person1("Slawomir","Gozdur");
    Person person2;

    Person *personPtr = new Person("Jan","Kowalski");



    person1.introduceYourself();
    person2.introduceYourself();

    personPtr->introduceYourself();

    delete personPtr;
}
