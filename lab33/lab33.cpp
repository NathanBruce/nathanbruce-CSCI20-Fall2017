#include <iostream>
#include <time.h>  //import time library for srand
using namespace std;


int main() {


//declare the variables: user's guess, computer generated number, and counter
int user_num = 0;    
int computer_num = 0;
int i = 0;


//creates a random number generator using time as the seed
//the generator will create numbers between 1 and 50
srand (time(NULL));
computer_num = rand() % 50 + 1;
cout << computer_num << "\n";

//create a while loop that will initiate while user number is not same as the computer generated one
// AND when the countdown 'i' has not reached zero
while (user_num != computer_num && i != 0); {
    
//countdown timer will iterate 5 times
//this will let the user know how many guesses they have left
//and collect the users number guess
   for (i = 5; i > 0; i-- ) {
       cout << "You have " << i << " guesses left. \n";
       cout << "\nEnter a value: ";
       cin >> user_num;

//if the user's number is higher, will ouutput 'too high'
//if lower, it will output 'too low'
//if the number is the same, inform the user that they have won and break the loop
       if (user_num > computer_num){
          cout << "Too High. \n";
    }
          else if (user_num < computer_num){
              cout << "Too Low. \n";

    }
          else if (user_num == computer_num) {
              cout << "\n\nAyyyy, you got it.. \n" << user_num << " = " << computer_num << "\n\n";
              break;
}
}}


//if the user's guessed number is equal to the randomly generated one, print out a congratulations message
//if it does not, penalize them for their failures with social mockery
if (user_num == computer_num){
    cout << "**********************************************" << endl;
    cout << "Congrats! you won.                           *\n";
    cout << "**********************************************" << endl;
}
   else {
       cout << "-----------------------------------------------";
       cout << "\nYou suck, loser. \n";
       cout << "-----------------------------------------------";
}


//regardless of if they guess right or not, enter an exit message
cout << "\nGame ending...";

return 0;    
}

