#include <iostream>
#include <string>
#include "Polymorphism.h"

using namespace std;

int main()
{
    cout << "Factory Pattern!" << endl;

    Animal *animal;

    animal = Animal::create("mammal");
    animal->show();

    delete animal;

    animal = Animal::create("bird");
    animal->show();

    delete animal;

    animal = Animal::create("reptile");
    animal->show();

    delete animal;

    return 0;
}
