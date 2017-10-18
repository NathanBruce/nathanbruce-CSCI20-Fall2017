#include <iostream>
#include <time.h>  //import time library for srand

using namespace std;


int main() {

int user_num = 0;    
int computer_num = 0;
int i = 0;


srand (time(NULL));
computer_num = rand() % 50 + 1;
cout << computer_num << "\n";
    
while (user_num != computer_num && i != 0); {
    

   for (i = 5; i > 0; i-- ) {
       cout << "You have " << i << " guesses left. \n";
       cout << "\nEnter a value: ";

    cin >> user_num;
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
cout << "\nGame ending...";

return 0;    
}

