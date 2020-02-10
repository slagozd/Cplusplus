#include <string>
#include <cstdio>
#include <iostream>
#include "Structures.h"

void setDate(Date &date,
		 const DAY &d,
		 const MONTH &m,
		 const YEAR &y)
{
    date.day = d;
    date.month = m;
    date.year = y;
}

string dateToString(const Date &date)
{
    char str[11];
    sprintf(str, "%d-%d-%d", date.day, date.month, date.year);
    return string(str);
}

void setPerson(Person &person,
		 const string &name,
		 const string &surname,
		 const unsigned int &id,
		 const Date &birthdate)
{
    person.name = name;
    person.surname = surname;
    person.ID = id;
    person.birth = birthdate;

}

bool dateOrder(const Date &firstDate, const Date &secondDate){

    if (secondDate.year > firstDate.year){
//        cout << "Second given date is younger" << endl << endl;
        return true;
    } else if(firstDate.year > secondDate.year){
//        cout << "Second given date is older" << endl << endl;
        return false;}
    if (secondDate.year == firstDate.year){
        if (secondDate.month > firstDate.month){
//            cout << "Second given date is younger" << endl << endl;
            return true;
        } else if(firstDate.month > secondDate.month){
//            cout << "Second given date is older" << endl << endl;
            return false;}
        if (secondDate.month == firstDate.month){
            if (secondDate.day > firstDate.day){
//                cout << "Second given date is younger" << endl << endl;
            return true;
            } else if(firstDate.day > secondDate.day){
//                cout << "Second given date is older" << endl << endl;
                return false;}
            if (secondDate.day == firstDate.day){
//                cout << "Dates are equal" << endl << endl;
                return false;
            }
        }
    }
    return false;

}

int oldestPerson(Person personArray[], const unsigned int &size){
    Person oldest, proxy;
    int shift = 1;
    while (shift > 0){
        shift = 0;
        for (int i=0; i<(size-1); i++){
            if(dateOrder(personArray[i].birth,personArray[i+1].birth)){
                proxy = personArray[i+1];
                personArray[i+1] = personArray[i];
                personArray[i] = proxy;
                shift++;
            }
        }
    }
    oldest = personArray[3];
    cout << "Oldest peson in this family is: " << oldest.name << endl << endl;
    return oldest.ID;
}



void displayPerson(const Person &person)
{
    cout << "Name: " << person.name << endl;
    cout << "Surname: " << person.surname << endl;
    cout << "ID: " << person.ID << endl;
    cout << "Date of birth: " << dateToString(person.birth) << endl;
}

