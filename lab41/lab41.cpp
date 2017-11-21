#include <iostream>
using namespace std;

/*
nathan bruce
11/21/2017

This program creates a class of array tools that will perform several functions:
print contents of the array
find minimum number
find max
find sum
Num of even and odd
Search to see if a specific number is in an array
if the array is sorted in ascending order
*/


//create class Array tools to perform functions on the array
class ArrayTools {
       
   public:
      ArrayTools(int array[], int elements){ //create a constructor that will populate the array
          for (int i = 0; i < elements; ++i){
              myArray_[i] = array[i];
              elements_ = elements;
          }
      }

   
   
      void Print(); //print all functions
      int Find_min(int lower_index, int higher_index); //find minimum number between two indexes
      int Find_max(int lower_index, int higher_index);//find maximum number between two indexes
      int Find_sum(); //find the sum of all members of the array
      int Num_even_odd(int lower_index, int higher_index); //find the number of even and odd numbers
      int Search(int find_number); //search to see if a specific number is in an array
      string Is_sorted(); //finds if the array is in ascending order or not


    private:
       int elements_ ; //number of elements in arary
       int myArray_[10]; //array that will be used for the class functions
};




/*
//==================IS SORTED -- =====================================
int ArrayTools::Is_sorted(){
    int a = 0;
    for (int i = 0; i < elements_; ++i){
        if (myArray_[i] < myArray_[i + 1]){
            a = myArray_[i + 1];
            myArray_[i + 1] = myArray_[i];
            myArray_[i] = a;
     
         cout << "\nsorted " << myArray_[i];
     }}

}*/


int main()
{
    const int SIZE = 10; //create a constant number of elements for the array
    int myArray[SIZE]; //creates array for user
 
cout << "Enter numbers into the array: " << endl; 
    for(int i = 0; i < SIZE; i++){//create a for loop that will populate an array with the user's input
        cin >> myArray[i];
    }
    

    
   ArrayTools a(myArray,SIZE); //create object a, which will consist of the newly updated arary
   
      a.Print(); //print the contents of all the array in object a
      cout<<"Min: "<<a.Find_min(0, 4)<<endl; //find minimum number between indexes 0 and 4
      cout<<"Max: "<<a.Find_max(5, 10)<<endl; //find maximum number between indexes 5 and 10
      cout<<"Sum = "<<a.Find_sum()<<endl; //find sum of all numbers in array
      cout<<"Search 10: "<<a.Search(10)<<endl; //search to see if there is a '10' in the array
      cout<<"Sorted? "<<a.Is_sorted()<<endl; //is the array sorted?
      cout<<a.Num_even_odd(0, 10)<<endl;  //find the number of even and odd between 0 and 10
      return 0;
}


/*

//==================IS SORTED -- =====================================
 for (i = 0; i < NUM_ELEMENTS; ++i){
     if (userVals[i] < userVals[i + 1]){
         userVals[i] = a;
         userVals[i + 1] = userVals[i];
         a = userVals[i + 1];
     
         cout << "\nsorted " << userVals[i];
     }}

//cout << endl << "Sorted  " << endl;
//====================================================================

*/



//====================NUMBER EVEN/ODD -- WORKS!========================
//this function will find the number of even and odd numbers 
//the input will be the data in the users array
//output will be number of even and odd numbers
int ArrayTools::Num_even_odd(int lower_index, int higher_index){
    int counter_even = 0;
    int counter_odd = 0;
        for (int i=lower_index; i<higher_index; ++i){
            if (myArray_[i] % 2 == 0){
                counter_even += 1;
            }
            if (myArray_[i] % 2 == 1)
                counter_odd += 1;
            
        }
        
  cout << "number even: " << counter_even <<
  endl << "Number odd: " ;
  return counter_odd;
    
}


//====================IS SORTED -- Works==================
//this function will find if the numbers in the users array are sorted 
//the input will be the data in the users array
//output will be either 'no' or 'yes'
string ArrayTools::Is_sorted(){
    for (int i=0; i<elements_-1; ++i){
        if (myArray_[i] > myArray_[i + 1]){
            return "No";
        }
    }
    return "Yes";
}

//this function will find if a number is in the users array 
//the input will be the data in the users array
//output will be either the users number or -1
//==================SEARCH 10 -- WORKS==================================
int ArrayTools::Search(int number){
    for (int i=0; i< elements_; ++i){
        if (myArray_[i] == number){
            return number;
            }
    }
    return -1;
}

//this function will print the numbers in the array
//the input will be the data in the users array
//output will members of the users array
//============PRINT -- WORKS====================
void ArrayTools::Print(){
     cout << "Numbers are:  ";
     for (int i=0; i<elements_; ++i){
         cout << myArray_[i] << ", ";
     }
     cout << endl;
}

//this function will find the minimum number between two indexes
//the input will be the data in the users array
//output will be the lowest number in the array 
//======================FIND MIN- Works!=====================================
int ArrayTools::Find_min(int lower_index,int higher_index) {
   int min_val = myArray_[lower_index];
   for (int i = lower_index; i <= higher_index ; ++i) {
      if (myArray_[i] < min_val) {
         min_val = myArray_[i];
      }
}
return min_val;
}

//this function will find the maximum number between two indexes
//the input will be the data in the users array
//output will be the highest number in the array 
//=========================FIND MAX -- WORKS =============================
int ArrayTools::Find_max(int lower_index, int higher_index) {
  int max_val = myArray_[lower_index-1];
  for (int i = lower_index - 1; i <= higher_index-1; ++i) {
      if (myArray_[i] > max_val) {
         max_val = myArray_[i];
      }
  }
  return max_val;
}

//this function will find the sum of all elements in the users array
//the input will be the data in the users array
//output will be the added number of all the elements
//==================FIND SUM -- WORKS=====================================
int ArrayTools::Find_sum(){
    int sum_total = 0;
    for (int i = 0; i < elements_; ++i){
        sum_total = sum_total + myArray_[i];
}
    return sum_total;
}
