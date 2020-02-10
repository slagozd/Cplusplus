#ifndef ROULETTE_H_INCLUDED
#define ROULETTE_H_INCLUDED
#include<string>
#include<iostream>

using namespace std;

class Player{

private:
    string name;
    int bankBalance, numBets, numWins, numLooses;
    bool active;

public:
    Player();
    void setName(string&);
    void setState(int);
    string getName();
    bool getState();
    void payForBet(int);
    void getPrize(int);
    int getBankBalance();

};

class Game{

};

void letsGamble(Player&);

#endif // ROULETTE_H_INCLUDED
