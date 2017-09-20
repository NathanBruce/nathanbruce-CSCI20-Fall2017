#include <iostream>                                    // Nathan Bruce 
#include <cmath>                                       //  9/19/2017
#include <iomanip>                                     // This program is meant to calculate wind chill using wind speed and volecoty
using namespace std;                                   //import libraries: including the math (for formulas) and setw for hastily placed columns
using std::setw;

                                                      //
                                                      //This program is designed to act as a run a mad lib.
                                                    
int main()  {             
    

double old_Wind_Chill = 0.0;                             //declare double variables for old and new wind chill
double new_Wind_Chill = 0.0;                             //user inputs for temperature and wind speed
double user_Temp = 0.0;
double user_Wind_Speed = 0.0;                             //temporary variable to make the sqrt and power  easier
double sqrt_Wind_Speed = 0.0; 
double difference = 0.0;                                 //temporary variable for the difference between the two calcutlated answers                           




cout << "Enter the temperatue: ";                         //have the user input the temperature
cin >> user_Temp;

cout << "Enter the Wind Speed: ";                            //have the user input the wind speed
cin >> user_Wind_Speed;
cout  << endl;


sqrt_Wind_Speed = sqrt(user_Wind_Speed);                     //square root the wind speed to use in the original calculation


old_Wind_Chill = 0.081 * (3.71 * sqrt_Wind_Speed + 5.81 - 0.25 * user_Wind_Speed) * (user_Temp - 91.4) + 91.4;  //calculate old wind speed
new_Wind_Chill = 35.74 + 0.6125 * user_Temp - 35.75 * pow(user_Wind_Speed,0.16) + 0.4274 * user_Temp * (pow(user_Wind_Speed,0.16)); //calculate new wind speed



difference = new_Wind_Chill - old_Wind_Chill;  //calculate the difference between old and new wind chill

cout << setw(10) << "Wind Speed" <<   //create columns to line up the outputs
        setw(20) << "Old Formula" <<  //start with strings
        setw(31) << "New Formula" <<
        setw(41) << "Difference" << '\n';

cout << setw(10) << "------------" <<   //add '-' to seperate the programs string output from the answer the user is seeking
        setw(18) << "------------" <<
        setw(32) << "------------" <<
        setw(41) << "------------" << '\n';

cout << setw(6) << user_Wind_Speed <<  //output the wind speed used
        setw(22) << old_Wind_Chill <<  //output the old wind chill 
        setw(31) << new_Wind_Chill <<  //output new wind chill
        setw(41) << difference << '\n'; // finally, output the differnce between the two (old an new wind chill)
   
   return 0;
}
