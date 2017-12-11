#include <iostream>  //input output stream
#include <iostream> //duplicate
#include <cstring>  //c string
using namespace std;   

int main() {
    int nameLength = 0; //declare int variable
    char * name = new char[10]; //allocates memory and creates a pointer name which points to a new character array. The error is that the new char array is left uninitialized/no element size

    cout << "Please enter a 10 letter word or less" << endl; //have user enter a 10 letter word
    cin >> name; 

    char * head  = name; //create a pointer "head" that points to array "name"
    char * tail = name; //create a pointer "tail" that points to array "name"
                        //both head and tail will now point to name's value
                        
    nameLength = strlen(name);//measure the length of the values in the character array which 'name' points to, and assign the number to namelength. Error is that name is a a constant
                               //this creates a new variable with the length of user's name
                               
    cout << "Your word is " << name << endl; //firststr was never declared. Should be contents of variable name(?)

    if (nameLength<10) //if user's word is less than 10 letters
    {
         while (*head != '\0') //and the memory address head points to does not reach the end of the string (name array)
         {
                cout << *head; //print out contents of where head is pointing to (the users word)
                head++; //add one for each iteration. This will print the contents of the name array
         }
     }
     else 
     {
          cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl; //if user's word is over 9 characters, print out error message
     }

     cout << endl;

     tail = &name[strlen(name) - 1]; //reassign tail to reference length of name -1 of memory address name
                                     //which will be tail's last element

     if (nameLength < 10) //if user's words < 10
     {
          while (tail != name - 1) //and tail does not equal the users word. Subracted one so that the the last element is shown up instead of being out of range (would be + 1 of the arrays last element)
          {
                 cout << *tail; //print out contents of tail, backwards from end of the array
                 tail--;
          }
     }
     cout << endl;

     head = name; //head is reassigned to name (user's word) 
     tail = &name[strlen(name) - 1]; //tails is reassigned to memory location name references, starts at the end of the array

     head++; //add one to head
     tail--; //subtract one from tails

     if (*head == *tail) //if pointers to head and tail are equal, or have the same value they will be a palindrome
     {
         cout << "It is an palindrome!" << endl; //tell user it's a palindrome
     }
     else
     {
         cout << "It is not an palindrome" << endl; //if not say it's not a palindrome
     }

//no destroy called

     return 0; 
}