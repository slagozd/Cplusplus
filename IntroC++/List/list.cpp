#include <iostream>
#include "list.h"

using namespace std;

Person* newPerson(const string &n, const string &s, const unsigned int &id)
{
    Person *p = new Person;

    p->name = n;
    p->surname = s;
    p->ID = id;
    p->next = NULL;

    return p;
}

void displayPerson(Person* p){

cout << "Name:    " << p->name << endl;
cout << "Surname: " << p->surname << endl;
cout << "Id:      " << p->ID << endl << endl;

}
void addPersonAtTheEnd(Person* tail, Person* newTail){
    cout << "Before while" << endl;
    while(true){
        cout << "Before if" << endl;
        if(tail->next== NULL){
            cout << "Inside If" << endl;
            tail->next = newTail;
            newTail->next = NULL;
            break;
        }else{
            cout << "inside else" << endl;
            tail = tail->next;
            continue;
        }

    }
    cout << "After while" << endl;
}

void addPersonAtBegin(Person* head, Person* newHead){

    newHead->next = head;

}

int countPeopleInList(Person *p){

    int counter = 0;

    while (p->next != NULL){

        counter++;
        p = p->next;
    }

    return counter;

}

void displayList(Person *p){

    while (p->next != NULL){
        displayPerson(p);
        p = p->next;
    }
}
Person* takePersonX(Person *p, const int index){

    int carret = 0;
    while (p->next != NULL){
        if (carret != index){
            p = p->next;
            carret++;
            continue;
        }else{
            break;
        }

    }
    return p;
}
void removePersonFromList(Person *p, const int index){

    Person *toRemove = takePersonX(p,index);

    while(p->next != NULL){
        if(p->next == toRemove){
            p->next = toRemove->next;
            toRemove->next=NULL;
            break;
        }else{
            p = p->next;
            continue;
        }

    }

}

void clearList(Person* p){

    while(p->next != NULL){

    }

}
