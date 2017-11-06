#include <iostream>
using namespace std;

int main()
//The first while loop will not end unless they are -1
{
    int number = 0, product = 0; //create a counter
    while (number >=0)            //when number is 0 or greater
    {
        for (int i = 0; i<3; i++)   //create another counter, when it's less than 3 add 1
        { 
            product = number * i;   //
        }
        cout<<"Please enter a positive integer: "; //collect users number
        cin >> number;                             //the loo will continue unless user puts a negative number 
    }
    cout<<"The product is: "<<product<<endl; //output product: it will be double the users positive number
}

//Comment the code as pseudocode
//Determine how many times each loop executes if the numbers input are 5, 4, 3, 2, 1,-1
//What is the value of i at the end of the program?