
//GITHUB:

#include <iostream>
using namespace std;
int main()
{
int number = 1;    //counter should be 1 instead of 12
while (number<=10) // starts a loop that will end after 10 iterations
{
cout<<number;      //output the increasing number with every iteration
number = number + 1; //serves as timer
}
int userNumber = 0, x = 1;
cout<<"\nEnter a number: ";  //have the user enter a number. added newline
cin>>userNumber;
while(x <= userNumber)  //changed number --> userNumber. If a number is greater than 1, it will keep iterating until the users number
{
if (x%10 == 0)  //will hit else if the number is not divisible by 10 (and create a new line)
{
cout<<x<<endl;; //output the x and create a new line
}
else  //when the loop breaks, output one final number
{
cout<<x<<" "; // ^^
}
x++; //counter
}
}
//The first loop doesn't work. It should print the nubers from 1 to 10 but it doesn't.
//Identify and correct the problem.
//Comment the code as the pseudocode

//Identify the different parts of the loop.



﻿

    What is a loop? Something that will repeat until a condition is met
    Why do we use loops? As counts
    How is a while loop special? It will keep iterating until a condition is met
    What are the three required parts of a loop?  Entry condition, control variable/counter, exit condition
    What is a for loop?  How is it different from a while loop? A simplified loop expression. It can define variables inside the loop, and also includes a built in counter.


