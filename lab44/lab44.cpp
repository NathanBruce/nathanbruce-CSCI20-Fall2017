#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

/*
Nathan Bruce
11/14/2017

This program will collect a users first and last name. It will create three different usernames for the user, which the user can then choose from
if the first name is over 10 characters, and the last is over 20. The program will continue asking until they input names under those conditions
It will output the username that the user has chosen

*/


int main(){
    
    //initialize the variables
    //make the array a larger amount, so if they enter more than the given characters won't hit a buffer problem
    int first_name = 0;
    char users_first[200] = "";
    char users_last[200] = "";
    int final_decision = 0;
    
    cout << "Enter your first name (up to 10 characters): ";  //have the user enter their first name
        cin >> users_first;
        int first_length = strlen(users_first); //calculate the length of their first name

    //will continue asking for the user's first name if it is over 10 characters long
        while (first_length > 10)
        {
            cout << "First name is too big.. " << endl;
            cout << "Enter your first name (up to 10 characters): ";  //have the user enter their first name
                cin >> users_first;   
                first_length = strlen(users_first); //calculate the length of their first name
        }

    cout << endl << "Enter your last name (up to 20 characters): "; //have user enter last name
        cin >> users_last;
        int last_length = strlen(users_last); //calculate the length of their last name
      
    //will continue asking for the user's first name if it is over 10 characters long
        while (last_length > 20)
        {
            cout << "Last name is too big.. " << endl;
            cout << "Enter your last name (up to 20 characters): ";  //have the user enter their first name
                cin >> users_last;   
                last_length = strlen(users_last); //calculate the length of their first name
        }
   
        //determines if the user's first and last name inputs are the same
        //gives out an error message if they are the same
        if (strcmp(users_first, users_last) == 0){
             cout << "\nThey are the same. Don't be a dummy." << endl;
    
    
    //if the user's first and last names inputs are NOT the same
    //continue on with the program, and create 3 different usernames for the user to choose from
    //final output will be the modified user name for the user
      } else if (strcmp(users_first, users_last) != 0){
            
            cout << "\nChoose your final name ('1', '2', or '3') " << endl << endl;
            cout<< "Option 1 (type '1'): " <<  users_first[0] << users_first[1] << users_last << endl;
            cout<< "Option 2 (type '2'): " << users_first << users_last << endl;
            cout<< "Option 3 (type '3'): " << users_first[0] << users_last << endl << endl;

            cin >> final_decision;
            cout << endl << endl;
             
             //if first decision, choose that
             //if second decision, choose that form
             //if third decision, choose that form
             if (final_decision == 1){
                 cout<< users_first[0] << users_first[1] << users_last;
             }
             
             else if (final_decision == 2){
                 cout<< users_first << users_last;
             }
             
             else if (final_decision == 3){
                 cout<< users_first[0] << users_last;
             }

             cout << " is now your username. Enjoy!";
      }        
    
    return 0;
}




/*                          TEST 1

Enter your first name (up to 10 characters): Nathan 

Enter your last name (up to 20 characters): Bruce

Choose your final name ('1', '2', or '3') 

Option 1 (type '1'): NaBruce
Option 2 (type '2'): NathanBruce
Option 3 (type '3'): NBruce

2


NathanBruce is now your username. Enjoy!


                             TEST 2
                             
Enter your first name (up to 10 characters): April

Enter your last name (up to 20 characters): Browne

Choose your final name ('1', '2', or '3') 

Option 1 (type '1'): ApBrowne
Option 2 (type '2'): AprilBrowne
Option 3 (type '3'): ABrowne

2


AprilBrowne is now your username. Enjoy!

Process exited with code: 0



                              TEST 3
                              
Enter your first name (up to 10 characters): AnaElizabeth
First name is too big.. 
Enter your first name (up to 10 characters): Hazeltine-Smith
First name is too big.. 
Enter your first name (up to 10 characters): Ana

Enter your last name (up to 20 characters): Hazeltine

Choose your final name ('1', '2', or '3') 

Option 1 (type '1'): AnHazeltine
Option 2 (type '2'): AnaHazeltine
Option 3 (type '3'): AHazeltine

2


AnaHazeltine is now your username. Enjoy!
    
    
    
    
    
                            TEST 4
                            
Enter your first name (up to 10 characters): James

Enter your last name (up to 20 characters): James

They are the same. Don't be a dummy.

                            