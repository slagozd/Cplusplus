#include <iostream>
#include <string>
#include "Polymorphism.h"

Animal* Animal::create(string type)
{
    if(type == "bird") return new Bird;
    if(type == "mammal") return new Mammal;
    if(type == "reptile") return new Reptile;
    return NULL;
}

void Bird::show(){

    cout << "It's a bird!" << endl << endl;
}

void Mammal::show(){

    cout << "It's a mammal!" << endl << endl;
}

void Reptile::show(){

    cout << "It's a reptile!" << endl << endl;
}
