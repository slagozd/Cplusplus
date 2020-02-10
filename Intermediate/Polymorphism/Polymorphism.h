#ifndef POLYMORPHISM_H_INCLUDED
#define POLYMORPHISM_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Animal
{
    public:
    virtual ~Animal(){}
    virtual void show() = 0;
    static Animal* create(string type);
};

class Bird: public Animal
{
    public:
    void show();
};

class Mammal: public Animal
{
    public:
    void show();
};

class Reptile: public Animal
{
    public:
    void show();
};

#endif // POLYMORPHISM_H_INCLUDED
