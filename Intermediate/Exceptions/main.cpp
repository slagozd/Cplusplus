#include <iostream>
#include <string>
#include "Exceptions.h"
#include <exception>

using namespace std;

int main()
{
    try{
        cout << "Result of division 4.0/2.0: " << div(4.0,2.0) << endl << endl;
        cout << "Result of division: 4.0/0.0" << div(4.0,0.0) << endl << endl;
    }
    catch (exception &e){
        cout << e.what() << endl << endl;
    }
    return 0;
}
