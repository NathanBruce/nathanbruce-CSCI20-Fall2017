/* Nathan Bruce
9/21/2017

This program is a function that will output a randomly generated number between a range of numbers the user chooses. It will then take that number
and convert it into both pounds and kilograms, and ouput all of them.
*/


#include <iostream>
#include <cmath>  //Import math (for crandom formula) library
using namespace std; 

int Swap(int& firstNumb, int& secondNumb) { //Create a swap function that will alter two numbers that the user chooses
    int temp = 0; //Create temp variable to act as placeholder
    temp = firstNumb; //Put the first number into the placeholder
    firstNumb = secondNumb; //Change the first number to the second number
    secondNumb = temp; //Replace the second number with the temp number.
}


int RandomGen(int firstNumb, int secondNumb) { //Initialize the function that will become a random generator (with the users swapped values)
    srand(time(0)); //Call the math's random function and seed it with time to remain random
  Swap(firstNumb, secondNumb); //Swap the users number
  return (rand() % (firstNumb - secondNumb)) + secondNumb;  //Gives a number between the users range. Start with the smallest number to equalize the range
   //return to the beginning of the function but also outputs the number
}

double KilogramsToPounds(double kilograms) { //Create a function to convert kilograms to pound
    return kilograms * 2.2046226218488; //Add the formula^
}

double PoundsToKilograms(double pounds) { //Create a function to convert kilograms to pound
    return pounds * 0.45359237; //Add the formula^
}




int main()  {    
    
int firstNum = 0; //Declare variable for user's first number
int secondNum = 0; //Declare variable for user's second number
double number = 0.0; //Declare a placeholder that will convert the RandomGenerated number into both kilograms and pounds

cout << "Enter a range of numbers to find the random number between. Smallest and then largest: " << endl; //Get two input numbers from the user
    cin >> firstNum >> secondNum;
cout << endl;

number = RandomGen(firstNum, secondNum); //Place the user's numbers into the random generator
cout << "your number is: " << number << endl << endl; //Output random number
cout << "Your pounds in kilograms is: "<< PoundsToKilograms(number) << endl; //Convert the random number from the generator into kilograms
cout << "Your Kilograms in pounds is: " << KilogramsToPounds(PoundsToKilograms(number)); //Convert the random number from before into pounds

   return 0; //return again
}
