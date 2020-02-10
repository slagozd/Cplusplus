#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;
typedef unsigned int DAY;
typedef unsigned int MONTH;
typedef unsigned int YEAR;

struct Person
{
    string name, surname;
    unsigned int ID;
    Person *next;
};

Person* newPerson(const string &n, const string &s, const unsigned int &id);

void displayPerson(Person* p);
void addPersonAtTheEnd(Person*, Person*);
void addPersonAtBegin(Person* ,Person*);
int countPeopleInList(Person*);
void displayList(Person *head);
Person* takePersonX(Person*, const int);
void removePersonFromList(Person*, const int);
void clearList(Person*);



#endif // LIST_H_INCLUDED
