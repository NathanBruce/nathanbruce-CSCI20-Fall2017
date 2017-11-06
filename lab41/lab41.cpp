#include <iostream>
using namespace std;

class ArrayTools {
   public:
   ArrayTools () {
       int userVals = 0;
       int NUM_ELEMENTS = 0;
       int i = 0;
   }
   
    void print();
 //   int Find_min(int userVals[NUM_ELEMENTS]);
//    int Find_max(int userVals[NUM_ELEMENTS]);
    int Find_sum;
    int Numb_even;
    int Numb_odd;
    int Search;
    int Is_Sorted;

};

void ArrayTools::print() {
    cout << "your answer is " << endl;
    cout << "Min: " << endl;
    cout << "Max: "  << endl;
    cout << "Sum: " <<  endl;
    cout << "Odd Numbers:  "  << endl;
    cout << "Even Numbers: "  << endl;
    cout << "Sorted: " << endl;
}

/* int ArrayTools::Find_min(int userVals[NUM_ELEMENTS]) {
  int minVal = 0;
  int i = 0;
  for (i = 0; i < NUM_ELEMENTS; ++i) {
      if (userVals[i] < minVal) {
         minVal = userVals[i];
      }
}}
*/

/*
int ArrayTools::Find_max(int userVals[NUM_ELEMENTS]) {
  int i = 0;
  for (i = 0; i < NUM_ELEMENTS; ++i) {
      if (userVals[i] > maxVal) {
         maxVal = userVals[i];
         return maxVal;
      }
}}*/

/*
int ArrayTools::Find_sum {
  for (i = 0; i < NUM_ELEMENTS; ++i) {
      sum_total = sum_total + userVals[i];
}}*/

/*
int ArrayTools::Numb_even{
  for (i = 0; i < NUM_ELEMENTS; ++i) {   
}}


int ArrayTools::Is_Sorted{
  for (i = 0; i < NUM_ELEMENTS; ++i) {  
}}

*/


int main(){

       const int NUM_ELEMENTS = 4;
       int userVals[NUM_ELEMENTS];
       int i = 0;
       int find_even[NUM_ELEMENTS] = {};
       int find_odd[NUM_ELEMENTS] = {};
       int maxVal = 0;
       int minVal = 0;
       int sum_total = 0;
       
 cout << "Enter " << NUM_ELEMENTS << " integer values..." << endl;
   
  for (i = 0; i < NUM_ELEMENTS; ++i) {
      cout << "Value: ";
      cin >> userVals[i];
   }    






//==================FIND EVEN/ODD -- WORKS=====================================
 for (i = 0; i < NUM_ELEMENTS; ++i){
     if (userVals[i] % 2 == 0){
         find_even[i] = userVals[i];
         cout << "\neven number in element " << i << " is: " << find_even[i];
}     else if (userVals[i] % 2 == 1){
         find_odd[i] = userVals[i];
         cout << "\nodd number in element " << i << " is: " << find_odd[i];
     
    
}}

cout << endl << endl;
int sorted_temp = 0;
int a = 0;

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







//==================FIND SUM -- WORKS=====================================
 for (i = 0; i < NUM_ELEMENTS; ++i){
     sum_total = sum_total + userVals[i];
}

cout << endl << "sum total " << sum_total << endl;
//====================================================================






//==================MIN VALUE -- WORKS========================================
minVal = userVals[1];

 for (i = 0; i < NUM_ELEMENTS; ++i){
      if (userVals[i] < minVal) {
         minVal = userVals[i];
}}

//=====================================================================
         cout << endl << "\nminimum value is: " << minVal << endl;









//=================MAX VALUE -- WORKS!=================================== 
 for (i = 0; i < NUM_ELEMENTS; ++i){
      if (userVals[i] > maxVal) {
         maxVal = userVals[i];
}}

         cout << "\nmaximum value is: " << maxVal;
//=====================================================
    
return 0;
}


//myFunc (int a[])