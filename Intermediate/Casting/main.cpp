#include <iostream>
#include <string>
#include "Casting.h"

using namespace std;

int main()
{

    Signal* message = new MessageOK(2);

    send(message);

    receive(message);

    delete message;

    Signal* message1 = new OperationFailed(3,"cos",5.4);

    send(message1);

    receive(message1);

    delete message;


//    cout << "Hello world!" << endl;
    return 0;
}
