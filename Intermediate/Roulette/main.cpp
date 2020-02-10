#include <iostream>
#include "Roulette.h"
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{

    int playersNum, countRounds;
    string playerName;
    Player *playersTable;
    int number;


    cout << "Let's play ROULETTE!" << endl << endl;

    cout << "How many players will play this time?" << endl << endl;

    cin >> playersNum;

//    playersNames = new string[countPlayers]; // table containing players names
    playersTable = new Player[playersNum]; // table containing players objects

    cout << endl << "Provide players names:" << endl << endl;

    //fill player names table
    for (int i=0;i<playersNum;i++){
        cout << "Player " << i+1 << ": ";
        cin >> playerName;

        playersTable[i].setName(playerName);
    }
    cout << endl << endl;

    cout << "Welcome: " << endl << endl;

    //Print all players to screen
    for (int i=0;i<playersNum;i++){

        cout << playersTable[i].getName()<<endl;
    }

    cout << endl << "Let's play a game " << endl << endl;


    //Press any key to continue
    system("pause");

    //clear screen
    system("cls");
    countRounds = 1;



    for(int i=0;i<playersNum;i++){

        letsGamble(playersTable[i]);

    }

    cout << "Roulette is spinning... " << endl << endl;

    srand (time(NULL));		// initialize random seed
    number = rand() % 37;		// get number 0-36

    cout << "Winning number is: " << number << endl << endl;

    delete playersTable;

    return 0;
}
