#include <iostream>
#include "Inherritance.h"

using namespace std;

int main()
{
    cout<<"Instance A"<<endl<<endl;
    A a;

    cout<<"Instance B"<<endl<<endl;
    B b;

    cout<<"Instance C"<<endl<<endl;
    C *c;

    c = new C();

    delete c;
    return 0;
}
