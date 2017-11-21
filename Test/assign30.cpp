#include <iostream>
using namespace std;
#include <ctime>

/* 
Nathan Bruce
10/24/2017



*/


class GameNumber {
    public:
//      int RollDice(); //rolls random number for computer
      
//      void ContinueOrNot();   //asks the user if they will continue or not
 //     void DetermineWhoWon(); //determines if the user or computer won
 //     void DisplayScore();    //display the score totals
      
      private:
       int playerscore_;         //variable to act as players overall score
       int computerscore_;       //variable that acts as players computerscore
       int usernum_;             //keeps track of the diceroll
       int computernum_;         //keeps track of the diceroll
     };
     

/*
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





void GameNumber::ContinueOrNot(){
    int go_or_stop = 0;
    cout << "Would you like to roll? 1 for yes, 2 for no "; 
    cin >> go_or_stop;
    
    if (go_or_stop == 1){
        //call function for random numb gen
    }
    
    else if (go_or_stop ==2){
        //break loop
    }

double GameNumbe::AddScore(){
    
    return;
}    
    
}
*/
//========================================================================
int GameNumber::RollDice(){
  srand(time(0));
  return (rand() % 6 + 1);
  
}
     
main() {
    
 //   while (userNum < 100) && (computerscore < 100)
    
    
    return 0;
}