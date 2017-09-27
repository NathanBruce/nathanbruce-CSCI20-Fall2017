/* Nathan Bruce
9/21/2017

This program is a function that will output a randomly genorated number between a range of numbers the user chooses

*/


#include <iostream>
#include <cmath>  //import math (for crandom formula) library
using namespace std; 

int Swap(int& firstNumb, int& secondNumb) { //create a swap function that will alter two numbers that the user chooses
    int temp = 0; //create temp variable to act as placeholder
    temp = firstNumb; //put the first number into the placeholder
    firstNumb = secondNumb; //change the first number to the second number
    secondNumb = temp; //replace the second number with the temp number.
}


int RandomGen(int firstNumb, int secondNumb) { //initialize the function that will become a random generator (with the users swapped values)
    srand(time(0)); //call the math's random function and seed it with time to remain random
  Swap(firstNumb, secondNumb); //swap the users number
  return (rand() % (firstNumb - secondNumb)) + secondNumb;  //gives a number between the users range. Start with the smallest number to equalize the range
   //return to the beginning of the function but also outputs the number
}

int main()  {    
    
int firstNum = 0;
int secondNum = 0;

cout << "Enter a range of numbers to find the random number between. Smallest and then largest: " << endl;
    cin >> firstNum >> secondNum;



cout << "your number is: " << RandomGen(firstNum, secondNum); //call the function and output the number


   return 0; //return again
}
