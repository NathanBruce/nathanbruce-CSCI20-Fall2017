#include <iostream>
using namespace std;






class ArrayTools {
       
   public:
      ArrayTools(int array[], int elements){
          for (int i = 0; i < elements; ++i){
              myArray_[i] = array[i];
              elements_ = elements;
          }
      }

   
   
      void Print();
      int Find_min(int lower_index, int higher_index);
      int Find_max(int lower_index, int higher_index);
      int Find_sum(int input_array , int elements);
      int Numb_even(int input_array , int elements);
//    int Numb_odd(int input_array , int elements);
//    int Search(int input_array , int elements);
//    int Is_sorted(int input_array , int elements);


    private:
       int elements_ = 5;
       int myArray_[5];
};


void ArrayTools::Print(){
     for (int i=0; i<elements_; ++i){
         cout << myArray_[i] << " and ";
     }
}
/*
void ArrayTools::Print() {
    cout << "your answer is " << endl;
    cout << "Min: " << endl;
    cout << "Max: "  << endl;
    cout << "Sum: " <<  endl;
    cout << "Odd Numbers:  "  << endl;
    cout << "Even Numbers: "  << endl;
    cout << "Sorted: " << endl;
}
*/

int ArrayTools::Find_min(int lower_index,int higher_index) {
   int min_val = myArray_[lower_index];
   for (int i = lower_index; i <= higher_index ; ++i) {
      if (myArray_[i] < min_val) {
         min_val = myArray_[i];
      }
}
return min_val;
}



int ArrayTools::Find_max(int lower_index, int higher_index) {
  int max_val = myArray_[lower_index-1];
  for (int i = lower_index - 1; i <= higher_index-1; ++i) {
      if (myArray_[i] > max_val) {
         max_val = myArray_[i];
      }
  }
  return max_val;
}

/*
int ArrayTools::Find_sum(int input_array, int elements){
  int sum_total = 0;
  for (int i = 0; i < elements_; ++i) {
      sum_total = sum_total + input_array[i];
}}*/

/*
int ArrayTools::Numb_even(int input_array , int elements){
  for (i = 0; i < NUM_ELEMENTS; ++i) {   
}}


int ArrayTools::Is_sorted{
  for (i = 0; i < NUM_ELEMENTS; ++i) {  
}}

*/

int main()
{
    const int SIZE = 10;
    int myArray[SIZE];
 
cout << "Enter numbers into the array: " << endl; 
    
    for(int i = 0; i < SIZE; i++){
        cin >> myArray[i];
    }
    

    
   ArrayTools a(myArray,SIZE);
   
 //  a.Print();
      cout<<"Min: "<<a.Find_min(0, 4)<<endl;
      cout<<"Max: "<<a.Find_max(5, 10)<<endl;
//    cout<<"Sum = "<<a.Find_sum()<<endl;
//    cout<<"Search 10"<<a.Search(10)<<endl;
//    cout<<"Sorted? "<<a.Is_sorted()<<endl;
    return 0;
}
/*
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

*/

/*


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


//myFunc (int a[])*/