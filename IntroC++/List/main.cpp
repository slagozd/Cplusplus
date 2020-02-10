#include <iostream>
#include "list.h"

using namespace std;

int main()
{
    Person *head = NULL;
    head = newPerson("Jason", "Head", 0);
    Person *first, *second, *third, *fourth;

    first = newPerson("John","First",1);
    second = newPerson("Alice","Second",2);
    third = newPerson("James","Third",3);
    fourth = newPerson("Jane","Fourth",4);
    //displayPerson(first);
//cout<<"sdfsd"<<endl;
    addPersonAtTheEnd(head,first);
    cout << "There is: " << countPeopleInList(head) << " in the List" << endl << endl;
    addPersonAtTheEnd(head,second);
    cout << "There is: " << countPeopleInList(head) << " in the List" << endl << endl;
    addPersonAtTheEnd(head,third);
    cout << "There is: " << countPeopleInList(head) << " in the List" << endl << endl;
    addPersonAtTheEnd(head,fourth);
    cout << "There is: " << countPeopleInList(head) << " in the List" << endl << endl;

    cout << "People in the list: " << endl << endl;
    displayList(head);

    cout << "First Person on the list is: " << endl << endl;
    displayPerson(takePersonX(head,0));

    cout << "Second Person on the list is: " << endl << endl;
    displayPerson(takePersonX(head,1));

    cout << "Fourth Person on the list is: " << endl << endl;
    displayPerson(takePersonX(head,3));

    cout << "Third Person on the list is: " << endl << endl;
    displayPerson(takePersonX(head,2));

    cout << "Removing person from list: " << second->name << " " << second->surname << ".";
    removePersonFromList(head,2);

    cout << "People in the list: " << endl << endl;
    displayList(head);

    delete head;
    delete first;
    delete second;
    delete third;
    delete fourth;

    return 0;
}
