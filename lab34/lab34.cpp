
/*Nathan Bruce
11/6/2017

This program will collect the user's numbers and add them up
it will stop when a negative number is input, and afterwards will output the sum of all the user's numbers (excluding the negative)


   debug the program until it is successful

*/

//Sum of numbers 
//Write a program that reads in positive integers from the user, each separated by a space, and the whole terminated by a negative number (e.g. 3 22 10 -2),
// and outputs the sum of the numbers entered (not including the terminated negative number!)


#include <iostream>
using namespace std; 
int main(){
    
    
        // initialize the variables
        //number will be the user's inputted number
        //sum will be all of their numbers added until they enter a negative number
        /* added '='' to num because it was undeclared */
        int num = 0;
        int sum = 0;
        
        // cleaned up spacing and removed unnecessary '<<' sign
        cout << "Enter numbers separated by spaces and terminated with a negative number." << endl;
        
         // gather the user's first number
        cin >> num;
        
        //loop will run until the user inputs a negative number
        while (num >= 0)
  {
            // add the user's number to the value sum
            /* changed it so that the numbers were being added to 'sum' instead of altering the user's input number */
            sum = sum + num;
            
            // gather the user's next number
            // if that number is negative, the loop will end and the sum of all numbers will output
            /* changed '<<' to '>>' because the it is collecting a number and not outputting one */
            cin >> num;
        }
                cout << "Sum was " << sum << endl;
                return 0;
}
