#include "Structures.h"
#include "Structures.cpp"
#include <cstdio>
#include <string>
#include <iostream>

int main(){


Date firstDate, secondDate, thirdDate, fourthDate;
Person dad, mom, son, daughter;

setDate(firstDate, 14,10,1987);
setDate(secondDate, 27,10,1991);
setDate(thirdDate, 9,6,2017);
setDate(fourthDate, 16,6,2019);

setPerson(dad, "Slawek", "Gozdur", 1, firstDate);
setPerson(mom, "Sabina", "Gozdur", 1, secondDate);
setPerson(daughter, "Ada" , "Gozdur", 1, thirdDate);
setPerson(son, "Wojtek", "Gozdur", 1, fourthDate);

Person family[4] = {daughter, dad, mom, son};

//cout << "First date: "<< dateToString(firstDate) << endl << endl;
//cout << "Second date: "<< dateToString(secondDate) << endl << endl;

//cout << "Comparing: " << dateToString(firstDate) << " vs " << dateToString(secondDate) << " Result: " << dateOrder(firstDate,secondDate) << endl << endl;
//cout << "Comparing: " << dateToString(secondDate) << " vs " << dateToString(firstDate) << " Result: " << dateOrder(secondDate,firstDate) << endl << endl;
//cout << "Comparing: " << dateToString(firstDate) << " vs " << dateToString(firstDate) << " Result: " << dateOrder(firstDate,firstDate) << endl << endl;

cout << "Printing Family random order: " << endl << endl;

for (int i=0; i<4; i++){
    cout << family[i].name << endl;
}

cout << endl << endl;

oldestPerson(family, 4);

cout << "Printing Family from younger person: " << endl << endl;

for (int i=0; i<4; i++){
    cout << family[i].name << " - date of birth: " << dateToString(family[i].birth) << endl;
}



return 0;
}


