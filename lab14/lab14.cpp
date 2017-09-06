#include <iostream>
using namespace std;

int main()  {                                         //initalize varriables
int total_Change = 0;                                 
int total_Change_For_Output = 0;                      
int quarters = 0;                                     
int dimes = 0;                                        
int nickels = 0;                                      
int pennies = 0;
float total_Fee = 0.0;
float money_After_Fee = 0.0;
float money_Back_In_Dollars = 0.0;                    // end initalization

cout << "Enter the total amount of change: " << endl;         // ask the user for change
cin >> total_Change;                                          // colelct change amount from user (in cents)

total_Change_For_Output = total_Change;                       // create a placeholder for the amount entered

quarters = total_Change / 25;                                 // find out how many quarters go into the amount
total_Change = total_Change % 25;                             // reduce the total change amount by the amount of quarters taken out

dimes = total_Change / 10;                                    // figure out how many dimes can be taken from the remainder 
total_Change = total_Change % 10;                             // reduce by the remainder

nickels = total_Change / 5;                                   // " " " " " with dimes
total_Change = total_Change % 5;

pennies = total_Change / 1;                                   // " " " " " " with pennies
total_Change = total_Change - pennies;


total_Fee = total_Change_For_Output * 0.109;                  // calculate the fee by multiplying the placeholder by the fee percentage
money_After_Fee = total_Change_For_Output - total_Fee;        // reduce the fee amount from the total
money_Back_In_Dollars = money_After_Fee * 0.1;                // multiply to show the total in a dollar format

cout << "You have entered " << total_Change_For_Output << " cents. Of this there are: " << endl << endl;  //tell user amount of change total, and in quarters, etc
cout << quarters << " quarters " << endl; 
cout << dimes << " dimes" << endl;
cout << nickels << " nickels" << endl;
cout << pennies << " pennies" << endl << endl;


cout << "The total fee is: " << total_Fee << " cents" << endl;                         //tell user total fee                      
cout << "A ticket for $" << money_Back_In_Dollars << " will now be printed for you.";  //give user the amount of money after fee



}
