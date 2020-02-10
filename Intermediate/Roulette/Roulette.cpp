#include "Roulette.h"
#include <iostream>
#include <sstream>
#include <string>
#include <stdlib.h>

using namespace std;

Player::Player(){
    bankBalance = 100;
    numBets = 0;
    numWins = 0;
    numLooses = 0;
    cout << "Player created" <<endl;
}

void Player::setName(string &_pname){
    name = _pname;
}

string Player::getName(){
    return name;
}

void Player::setState(int _state){
    if(_state == 1){
        active=true;
    }else if(_state == 0){
        active=false;
    }
}

bool Player::getState(){
    return active;
}

void Player::payForBet(int _bet){

    bankBalance -= _bet;

}

void Player::getPrize(int _prize){

    bankBalance += _prize;

}


int Player::getBankBalance(){

    return bankBalance;

}



void letsGamble(Player &player){

    string chooseStr, betStr, chNumberStr, chRangeStr, chEvenOddStr;
    int chooseInt, betInt, chNumberInt, chRangeInt, chEvenOddInt;

    chooseInt = 0;
    chNumberInt = 37;
    chRangeInt = 4;
    chEvenOddInt = 2;

    cout << endl << "What do you want to do " << player.getName() <<"?" << endl << endl;

    if(player.getState()){ //if player is active

        cout << "1. Make a Straight Up bet?" << endl;
        cout << "2. Make a Dozen bet?" << endl;
        cout << "3. Make a Even/Odd bet?" << endl;
        cout << "4. Check Bank Balance?" << endl;
        cout << "5. Leave a game?" << endl;
        cout << "6. Finish betting and play!" << endl << endl;

        cin >> chooseStr;
        istringstream iss (chooseStr);
        iss >> chooseInt;

        switch(chooseInt){
            case 1:{
                cout << endl << "What amount do you want to bet for? ";
                cin >> betStr;
                istringstream iss (betStr);
                iss >> betInt;

                if(player.getBankBalance() > betInt){
                    player.payForBet(betInt);
                }else{
                    cout << endl << "You have not enough money" << endl;
                    cout << endl << "Your bank balance is " << player.getBankBalance() << "$" << endl << endl;
                    system("pause");
                    letsGamble(player);
                }

                cout << endl << endl << "Choose a number(0-36): ";
                cin >> chNumberStr;
                istringstream iss1 (chNumberStr);
                iss1 >> chNumberInt;
                system("cls");
                letsGamble(player);
            }
            case 2: {
                cout << endl << "What amount do you want to bet for? ";
                cin >> betStr;
                istringstream iss2 (betStr);
                iss2 >> betInt;

                if(player.getBankBalance() > betInt){
                    player.payForBet(betInt);
                }else{
                    cout << endl << "You have not enough money" << endl;
                    cout << endl << "Your bank balance is " << player.getBankBalance() << "$" << endl << endl;
                    system("pause");
                    system("cls");
                    letsGamble(player);
                }
                cout << endl << endl << "Choose a range[1-12(0), 13-24(1), 25-36(2)]: ";
                cin >> chNumberStr;
                istringstream iss3 (chNumberStr);
                iss3 >> chNumberInt;
                system("cls");
                letsGamble(player);
            }
            case 3:{
                cout << endl << "What amount do you want to bet for? ";
                cin >> betStr;
                istringstream iss2 (betStr);
                iss2 >> betInt;

                if(player.getBankBalance() > betInt){
                    player.payForBet(betInt);
                }else{
                    cout << endl << "You have not enough money" << endl;
                    cout << endl << "Your bank balance is " << player.getBankBalance() << "$" << endl <<endl;
                    system("pause");
                    system("cls");
                    letsGamble(player);
                }
                cout << endl << endl << "Choose even(0) or odd(1) numbers(excluding 0): ";
                cin >> chNumberStr;
                istringstream iss3 (chNumberStr);
                iss3 >> chNumberInt;
                system("cls");
                letsGamble(player);
            }
            case 4: {
                cout << endl << "Your bank balance is: " << player.getBankBalance() << "$" << endl << endl;
                system("pause");
                system("cls");
                letsGamble(player);
            }
            case 5: {
                cout << endl << "You are leaving the game";
                player.setState(0); //setting player state to inactive
                system("pause");
                system("cls");
                letsGamble(player);

            }
            case 6: {
                break;
            }

        }
    }else{

        cout << "1. Check Bank Balance?" << endl;
        cout << "2. Get back to game?" << endl;
        cout << "2. Remain inactive?" << endl;

        cin >> chooseStr;
        istringstream iss (chooseStr);
        iss >> chooseInt;

        switch(chooseInt){
            case 1:{
                cout << endl << "Your bank balance is: " << player.getBankBalance() << "$" << endl << endl;
                system("pause");
                system("cls");
                letsGamble(player);
            }
            case 2: {
                cout << endl << "You are getting into the game";
                player.setState(1); //setting player state to inactive
                system("pause");
                system("cls");
                letsGamble(player);
            }
            case 3:{
                break;
            }
    }


}



