#include <iostream>
using namespace std;


/* 
Nathan Bruce
10/24/2017

This program will use a class with instructors to convert temperatures
 between kelvin, celsius, and fahrenheit

*/
class GameNumber {
    public:
    
    GameNumber() {
        int playerscore_ = 0;
        int computerscore_ = 0;
    }
   
   
   
    int computerscore_ = 100;
    int usernum_ = 99;
    int RollDice();
    void DetermineWhoWon();
  
    
    
};


class BotPlayer {
   public:
   
};


void GameNumber::DetermineWhoWon(){
    if (computerscore_ >= 100) {
       cout << "computer won";
       //end program
    }
    else if (usernum_ >= 100){
        cout << "You won! ";
       //end program
    }
    
}

int GameNumber::RollDice(){
  srand(time(0));
  return (rand() % 6 + 1);
  
}
    
    while (playserscore < 100)
          if (rolledDice == 1)
                return 
                
          else if (rolledDice > 1 && rolledDice <= 6)
          
              playerscore = playerscore + rolledDice.


int main() {

GameNumber game1;
int userscore = 0;
int playerscore_ = 0;
int ContinueOrNot = 0;

cout << "Would you like to play/keep playing? " << "1 for yes or 2 for no\n";
cin >> ContinueOrNot;

if (ContinueOrNot == 1){
   cout << "Game Number " << game1.RollDice();
   cout << "\nWinner is: " ;
}

else if (ContinueOrNot == 2){
   cout << "game ending. ";
   }    
 
   return 0;
}