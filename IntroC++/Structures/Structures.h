#ifndef STRUCTURES_H_INCLUDED
#define STRUCTURES_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;
typedef unsigned int DAY;
typedef unsigned int MONTH;
typedef unsigned int YEAR;

struct Date
{
    DAY day;
    MONTH month;
    YEAR year;
};

struct Person
{
    string name, surname;
    unsigned int ID;
    Date birth;
};


void setDate(Date &date,
		 const DAY &d,
		 const MONTH &m,
		 const YEAR &y);

string dateToString(const Date &date);
void displayPerson(const Person &person);
bool dateOrder(const Date&, const Date&);
int oldestPerson(Person personArray[], const unsigned int &size);

#endif // STRUCTURES_H_INCLUDED
