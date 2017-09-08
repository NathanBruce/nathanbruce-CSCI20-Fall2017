#include <iostream>                                   // Nathan Bruce
using namespace std;                                  // 9/7/2017
                                                      //
                                                      //This program is designed to act as a run a mad lib.
                                                    
int main()  {             
    
   string user_Noun;                                  // initialize variable for the mad libs
   int user_Number = 0;
   string user_Verb;
   string user_Verb2;
   string user_Adjective;


   cout << "Enter a noun: ";                          // ask the user for types of words to use in the madlibs
   cin  >> user_Noun;
   cout << "Enter a verb ending in '-ing': ";
   cin  >> user_Verb;
   cout << "Enter a number: ";
   cin  >> user_Number;
   cout << "Enter another verb: ";
   cin  >> user_Verb2;
   cout << "Enter an adjective: ";
   cin  >> user_Adjective;
   
   
   cout << endl << "What came first, the chicken or the " << user_Noun << "?" << endl;  //run the mad libs to form a new sentence
   cout << "My daily exercise is " << user_Verb << " my school bus in the morning." << endl;
   cout << "I have " << user_Number << " problems, but C++ ain't one." << endl;
   cout << "I hate when people " << user_Verb2 << " all over the floor." << endl;
   cout << "Watch out, there was a " << user_Adjective << " bear outside." << endl;
   
   return 0;
}
