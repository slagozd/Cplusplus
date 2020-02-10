#include <iostream>
#include "Singleton.h"

using namespace std;

int main()
{
    Singleton::instance().print("Test!");


    return 0;
}
