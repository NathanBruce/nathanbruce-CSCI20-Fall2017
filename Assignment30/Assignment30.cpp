#include <iostream>
#include <ctime>
using namespace std;

/*
nathan bruce
11/21/2017

Pig – Player and computer roll a dice of the user’s choice until either a 1 is rolled or a player decides to stop.
If a 1 is rolled, the player gets 0 points, and if the player decides to stop,
the player get points equal to the sum of the numbers rolled since the last 1.
Play continues until one player has a score of 100 or more points.
*/

class Game { //create class game that will contain all the functions to play the game pig
    public:
        int RollDice(); //this will roll the dice
        int RoundScore();//this will determine the round score for the player. 
        int ComputerRound();//this will determine the round score for the computer
        
  //  private:
        int playerone_score_ = 0; //private variable for human player
        int playertwo_score_ = 0; //private variable score for computer player
};

//create function that will calculate round score for the player
//input will be whether the user wants to keep rolling their dice or bank their score
//output will be the user's score at the end of the round
int Game::RoundScore(){
    int temporary_score = 0; //create a temporary score for player
    int temporary_score2 = 0;//create a temporary score for the first roll
    int dice = 0; //create a value for the dice value, this will serve to add points for the first round
    int user_choice = 0;//user choice, if they want to keep rolling or not
    
    dice = RollDice(); //roll the dice
    cout << endl<< dice <<  " is what the dice rolled" << endl << endl; //output what the roll was
    
    while ((user_choice != 5) && (dice != 1)) { //the loop will end if the user chooses 5 (to quit) or the dice roll is equal to 1 (because game)
        cout << "would you like to end your turn, or add this to your score? 5 to bank points ";
        temporary_score2 = 0 + dice; //add the roll to placeholder
        cin >> user_choice;  
        
          
        if (user_choice != 5){ //if the user does not decide to quit
            dice = RollDice(); //roll dice again
                if (dice != 1){ //if dice roll doesnt equal one

                     cout << endl << "=======================================================" << endl;
                     temporary_score = temporary_score + temporary_score2; //add the first dice roll
                     cout  << " Your current score for this round is: " << temporary_score;
                     cout << endl << "=======================================================" << endl << endl << endl;
                     cout << endl << dice <<  " is what the dice rolled" << endl << endl ;
                }
                else if (dice == 1){ //if they roll a one, end the turn with the user getting 0 points
                     temporary_score = 0;
                     user_choice = 5;//breaks loop
                     cout << endl << "Ouch! you've roll a 1. All points for this turn are lost." << endl;
                     cout << endl << "=======================================================" << endl;
                     cout  << " Your current score for this round: " << temporary_score;
                     cout << endl << "=======================================================" << endl << endl << endl;
               }
          }}
    
    playerone_score_ += temporary_score;
    return playerone_score_;
}


//function that will determine the computers score for the round
//output will be computers score, and will append to their final score
int Game::ComputerRound(){
    int dice = 0;
    int temporary_score = 0;
    int bot_score = 0;
    
    dice = RollDice();//roll the dice for the computer


while (bot_score < 100){ //bot will be finish rolling if their score hits 100
       if (dice == 1){ //if dice rolls 1, computer walks away with no points for this round
        bot_score = 0; //revert the users bot score for this round to 0
        playertwo_score_ += bot_score; 
        return playertwo_score_; //return 0 and end function if the dice is a roll
        }

        if ((dice > 1) && (dice <= 4)){ //if the dice is between 2-4 the bot will keep rolling
            dice = RollDice();//roll dice again
            cout << " Computer rolled a " << dice << endl; 
            bot_score += dice;//add to their score
        }
    
        if (dice >=5 ){//if the dice rolls 5 or 6 the bot will bank the points for their round
            playertwo_score_ += bot_score;
            return playertwo_score_;
        }

}
playertwo_score_ += bot_score;
return playertwo_score_;}


//while players turn, roll dice and configure score
//if !1, add to score
//if 1, clear score and
//if user choses to end turn, add temperary points
int Game::RollDice(){
  return (rand() % 6 + 1);
}


int main(){
    srand(time(NULL)); //seed with time at the beginning of program for random num generator 
    int player_dice_score = 0;
    int final_score = 0;
    
    Game a; //create game object

while ((a.playerone_score_ < 100) && (a.playertwo_score_ < 100)){ //when neither player reaches 100 continue this loop
     cout << endl << endl <<"Your score is: " << a.RoundScore() << endl; //players turn
     cout << endl << endl <<"Compouter score is: " << a.ComputerRound() << endl; //computers turn
}
    return 0;
}


//===========================================WIN==========================================
/*Running /home/ubuntu/workspace/Test/Assign30round2.cpp

5 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 5
=======================================================



2 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 7
=======================================================



3 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 10
=======================================================



4 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 14
=======================================================



3 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 14


Compouter score is: 0

4 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 4
=======================================================



3 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 7
=======================================================



3 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 10
=======================================================



6 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 16
=======================================================



2 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 18
=======================================================



6 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 32


Compouter score is: 0

2 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 2
=======================================================



6 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 8
=======================================================



3 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 11
=======================================================



2 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 13
=======================================================



5 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 18
=======================================================



5 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 50
 Computer rolled a 3
 Computer rolled a 1


Compouter score is: 0

5 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 5
=======================================================



3 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 8
=======================================================



4 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 12
=======================================================



4 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

Ouch! you've roll a 1. All points for this turn are lost.

=======================================================
 Your current score for this round: 0
=======================================================




Your score is: 50


Compouter score is: 0

3 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 3
=======================================================



5 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 11

=======================================================
 Your current score for this round is: 8
=======================================================



6 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 14
=======================================================



5 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 19
=======================================================



4 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 23
=======================================================



6 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 73


Compouter score is: 0

6 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 6
=======================================================



6 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 12
=======================================================



4 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 16
=======================================================



2 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 18
=======================================================



3 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 91


Compouter score is: 0

2 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 
*/

//===============================================LOSS============================
//==============================================================================
/*
1 is what the dice rolled



Your score is: 0
 Computer rolled a 5


Compouter score is: 5

5 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 0
 Computer rolled a 6


Compouter score is: 11

1 is what the dice rolled



Your score is: 0


Compouter score is: 11

6 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 0


Compouter score is: 11

1 is what the dice rolled



Your score is: 0
 Computer rolled a 2
 Computer rolled a 1


Compouter score is: 11

1 is what the dice rolled



Your score is: 0


Compouter score is: 11

5 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 0


Compouter score is: 11

1 is what the dice rolled



Your score is: 0
 Computer rolled a 6


Compouter score is: 17

5 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 0
 Computer rolled a 2
 Computer rolled a 3
 Computer rolled a 1


Compouter score is: 17

2 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 0
 Computer rolled a 1


Compouter score is: 17

1 is what the dice rolled



Your score is: 0
 Computer rolled a 6


Compouter score is: 23

1 is what the dice rolled



Your score is: 0
 Computer rolled a 2
 Computer rolled a 4
 Computer rolled a 4
 Computer rolled a 2
 Computer rolled a 2
 Computer rolled a 1


Compouter score is: 23

6 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 0
 Computer rolled a 4
 Computer rolled a 1


Compouter score is: 23

2 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 0
 Computer rolled a 4
 Computer rolled a 5


Compouter score is: 32

2 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 0
 Computer rolled a 2
 Computer rolled a 5


Compouter score is: 39

6 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 0
 Computer rolled a 4
 Computer rolled a 3
 Computer rolled a 6


Compouter score is: 52

5 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 0


Compouter score is: 52

4 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 0
 Computer rolled a 4
 Computer rolled a 3
 Computer rolled a 4
 Computer rolled a 1


Compouter score is: 52

4 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 0


Compouter score is: 52

2 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 0
 Computer rolled a 1


Compouter score is: 52

3 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 0


Compouter score is: 52

6 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 0


Compouter score is: 52

6 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 



5


Your score is: 0


Compouter score is: 52

5 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 0
 Computer rolled a 4
 Computer rolled a 4
 Computer rolled a 4
 Computer rolled a 3
 Computer rolled a 3
 Computer rolled a 2
 Computer rolled a 2
 Computer rolled a 4
 Computer rolled a 4
 Computer rolled a 1


Compouter score is: 52

1 is what the dice rolled



Your score is: 0
 Computer rolled a 5


Compouter score is: 57

4 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 0


Compouter score is: 57

5 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 0


Compouter score is: 57

5 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 0


Compouter score is: 57

5 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 0


Compouter score is: 57

4 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 0
 Computer rolled a 3
 Computer rolled a 4
 Computer rolled a 3
 Computer rolled a 6


Compouter score is: 73

1 is what the dice rolled



Your score is: 0
 Computer rolled a 2
 Computer rolled a 3
 Computer rolled a 3
 Computer rolled a 5


Compouter score is: 86

5 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 0


Compouter score is: 86

5 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 0


Compouter score is: 86

1 is what the dice rolled



Your score is: 0
 Computer rolled a 1


Compouter score is: 86

5 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 0
 Computer rolled a 2
 Computer rolled a 1


Compouter score is: 86

4 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 0
 Computer rolled a 6


Compouter score is: 92

4 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 0
 Computer rolled a 6


Compouter score is: 98

6 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 0


Compouter score is: 98

1 is what the dice rolled



Your score is: 0
 Computer rolled a 6

Compouter score is: 104
*/



//========================================================THIRD===========================
//========================================================================================
/*
Running /home/ubuntu/workspace/Test/Assign30round2.cpp

1 is what the dice rolled



Your score is: 0


Compouter score is: 0

5 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 5
=======================================================



4 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 9
=======================================================



4 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 13
=======================================================



2 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 15
=======================================================



4 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 19
=======================================================



3 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 19
 Computer rolled a 4
 Computer rolled a 1


Compouter score is: 0

2 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 2
=======================================================



6 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 8
=======================================================



2 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 10
=======================================================



5 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 15
=======================================================



2 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 17
=======================================================



3 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 36
 Computer rolled a 3
 Computer rolled a 2
 Computer rolled a 1


Compouter score is: 0

6 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 6
=======================================================



6 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

Ouch! you've roll a 1. All points for this turn are lost.

=======================================================
 Your current score for this round: 0
=======================================================




Your score is: 36
 Computer rolled a 1


Compouter score is: 0

5 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 5
=======================================================



4 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 9
=======================================================



3 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 12
=======================================================



2 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 48
 Computer rolled a 1


Compouter score is: 0

2 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

Ouch! you've roll a 1. All points for this turn are lost.

=======================================================
 Your current score for this round: 0
=======================================================




Your score is: 48
 Computer rolled a 3
 Computer rolled a 6


Compouter score is: 9

6 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 6
=======================================================



3 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 9
=======================================================



6 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 15
=======================================================



2 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

Ouch! you've roll a 1. All points for this turn are lost.

=======================================================
 Your current score for this round: 0
=======================================================




Your score is: 48


Compouter score is: 9

1 is what the dice rolled



Your score is: 48
 Computer rolled a 3
 Computer rolled a 6


Compouter score is: 18

3 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

Ouch! you've roll a 1. All points for this turn are lost.

=======================================================
 Your current score for this round: 0
=======================================================




Your score is: 48
 Computer rolled a 2
 Computer rolled a 5


Compouter score is: 25

2 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

Ouch! you've roll a 1. All points for this turn are lost.

=======================================================
 Your current score for this round: 0
=======================================================




Your score is: 48


Compouter score is: 25

3 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 3
=======================================================



2 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 5
=======================================================



3 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 8
=======================================================



6 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 14
=======================================================



2 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 16
=======================================================



5 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 64


Compouter score is: 25

1 is what the dice rolled



Your score is: 64
 Computer rolled a 4
 Computer rolled a 3
 Computer rolled a 4
 Computer rolled a 4
 Computer rolled a 6


Compouter score is: 46

6 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

Ouch! you've roll a 1. All points for this turn are lost.

=======================================================
 Your current score for this round: 0
=======================================================




Your score is: 64


Compouter score is: 46

6 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

Ouch! you've roll a 1. All points for this turn are lost.

=======================================================
 Your current score for this round: 0
=======================================================




Your score is: 64


Compouter score is: 46

6 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

Ouch! you've roll a 1. All points for this turn are lost.

=======================================================
 Your current score for this round: 0
=======================================================




Your score is: 64


Compouter score is: 46

2 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 2
=======================================================



5 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 7
=======================================================



6 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

Ouch! you've roll a 1. All points for this turn are lost.

=======================================================
 Your current score for this round: 0
=======================================================




Your score is: 64
 Computer rolled a 5


Compouter score is: 51

2 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 2
=======================================================



2 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 4
=======================================================



5 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

Ouch! you've roll a 1. All points for this turn are lost.

=======================================================
 Your current score for this round: 0
=======================================================




Your score is: 64


Compouter score is: 51

5 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 5
=======================================================



2 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

Ouch! you've roll a 1. All points for this turn are lost.

=======================================================
 Your current score for this round: 0
=======================================================




Your score is: 64
 Computer rolled a 6


Compouter score is: 57

4 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 4
=======================================================



6 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 10
=======================================================



2 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 12
=======================================================



5 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 76


Compouter score is: 57

2 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 2
=======================================================



4 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

Ouch! you've roll a 1. All points for this turn are lost.

=======================================================
 Your current score for this round: 0
=======================================================




Your score is: 76


Compouter score is: 57

1 is what the dice rolled



Your score is: 76


Compouter score is: 57

5 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

Ouch! you've roll a 1. All points for this turn are lost.

=======================================================
 Your current score for this round: 0
=======================================================




Your score is: 76


Compouter score is: 57

1 is what the dice rolled



Your score is: 76


Compouter score is: 57

4 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 4
=======================================================



4 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

Ouch! you've roll a 1. All points for this turn are lost.

=======================================================
 Your current score for this round: 0
=======================================================




Your score is: 76


Compouter score is: 57

1 is what the dice rolled



Your score is: 76
 Computer rolled a 6


Compouter score is: 63

5 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 5
=======================================================



6 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 11
=======================================================



2 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

Ouch! you've roll a 1. All points for this turn are lost.

=======================================================
 Your current score for this round: 0
=======================================================




Your score is: 76


Compouter score is: 63

2 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 2
=======================================================



3 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 5
=======================================================



5 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 81
 Computer rolled a 2
 Computer rolled a 4
 Computer rolled a 1


Compouter score is: 63

6 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 6
=======================================================



5 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 11
=======================================================



2 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 1

=======================================================
 Your current score for this round is: 13
=======================================================



6 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 94
 Computer rolled a 3
 Computer rolled a 4
 Computer rolled a 1


Compouter score is: 63

1 is what the dice rolled



Your score is: 94


Compouter score is: 63

5 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 94


Compouter score is: 63

3 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 94
 Computer rolled a 6


Compouter score is: 69

1 is what the dice rolled



Your score is: 94
 Computer rolled a 5


Compouter score is: 74

1 is what the dice rolled



Your score is: 94


Compouter score is: 74

4 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 94


Compouter score is: 74

1 is what the dice rolled



Your score is: 94


Compouter score is: 74

2 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 94


Compouter score is: 74

5 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 94
 Computer rolled a 6


Compouter score is: 80

2 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 94


Compouter score is: 80

5 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 94


Compouter score is: 80

6 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 94
 Computer rolled a 1


Compouter score is: 80

2 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 94


Compouter score is: 80

5 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 94
 Computer rolled a 5


Compouter score is: 85

3 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 94


Compouter score is: 85

5 is what the dice rolled

would you like to end your turn, or add this to your score? 5 to bank points 5


Your score is: 94
 Computer rolled a 3
 Computer rolled a 6


Compouter score is: 94

4 is what the dice rolled

*/