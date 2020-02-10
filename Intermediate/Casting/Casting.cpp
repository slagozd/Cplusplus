#include <iostream>
#include <string>
#include "Casting.h"

void send(Signal* signal){}
void receive(Signal* signal)
{

    cout << "Params of received signal: " <<endl<<endl;

    if(signal->sigNo == 0){
        cout << "Message OK!"<<endl<<endl;
        cout << ( static_cast <MessageOK*> (signal) )->param << endl << endl;

    }
    if(signal->sigNo == 1){
        cout << "Operation Failed!"<<endl<<endl;
        OperationFailed *of = static_cast <OperationFailed*> (signal);
        cout << of->param << endl << endl;
        cout << of->mess << endl << endl;
        cout << of->dbparam << endl << endl;

    }




}
