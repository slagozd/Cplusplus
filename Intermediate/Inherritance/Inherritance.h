#ifndef INHERRITANCE_H_INCLUDED
#define INHERRITANCE_H_INCLUDED

#include <iostream>

using namespace std;

class A
{
  public:
    A(){cout << "Constructor A"<<endl;}
    ~A(){cout << "Destructor A"<<endl;}
    int pubA;
  private:
    int privA;
  protected:
    int protA;
};

class B: public A
{
    public:
    B(){cout << "Constructor B"<<endl;}
    ~B(){cout << "Destructor B"<<endl;}
    int pubB;
};


class C: public B
{
    public:
    C(){cout << "Constructor C"<<endl;}
    ~C(){cout << "Destructor C"<<endl;}
    int pubC;

};




#endif // INHERRITANCE_H_INCLUDED
