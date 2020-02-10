#ifndef CASTING_H_INCLUDED
#define CASTING_H_INCLUDED
#include <string>
#include <iostream>

using namespace std;

const int MESSAGE_OK = 0;
const int OPERATION_FAILED = 1;

class Signal
{
public:
    int sigNo;
    Signal(int _sigNo):sigNo(_sigNo) {}

};

class MessageOK : public Signal
{
public:
    int param;
    MessageOK(int _param):Signal(MESSAGE_OK),param(_param) {}

};

class OperationFailed : public Signal
{
public:
    int param;
    string mess;
    double dbparam;
    OperationFailed(int _param, string _mess, double _dbparam):Signal(OPERATION_FAILED),param(_param),mess(_mess),dbparam(_dbparam) {}

};

void send(Signal* signal);
void receive(Signal* signal);
#endif // CASTING_H_INCLUDED
