/* Nathan Bruce
9/21/2017

This program is a function that will output a randomly genorated number
*/


#include <iostream>
#include <cmath>  //import math (for formulas) library
using namespace std; 

int RandomGen() { //initialize the function that will become a random generator
    srand(time(0)); //call the math's random function and seed it with time to remain random

  cout << "Random number is: "; //tell the user this is their random number
  cout << ((rand() % 100) + 1);  //gives a number between 0 - 99 (100 variables). Add 1 so the value will always be 1-100
  
  return 0; //return to the beginning of the function but also outputs the number
}

int main()  {             
    

RandomGen(); //call the function and output the number


   return 0; //return again
}
