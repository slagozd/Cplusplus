#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

using namespace std;

class Person
{
  public:
    Person(const string& firstName, const string& surname);
    Person(const Person&);
    Person();
    ~Person();
    string fullName();
    int age();
    void operator++();
    void operator++(int);
  private:

//    Person(const string& firstName, const string& surname); //cannot call constructor because is private
//    Person(const Person&);
    string _firstName;
    string _surname;
    int _age;
};




#endif // PERSON_H_INCLUDED
