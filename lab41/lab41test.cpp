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
      int Find_min(int array, int elements);
//      void Find_max(int, int);
//      int Find_sum;
//      int Numb_even;
//      int Numb_odd;
//      int Search;
//      int Is_sorted;


    private:
       int myArray_[];
       int elements_;
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

int ArrayTools::Find_min(int NUM_ELEMENTS,int NUM_ELEMENTS2) {
  int minVal = 0;
  minVal = myArray_[NUM_ELEMENTS];
  for (int i = 0; i < elements_; ++i) {
      if (myArray_[i] < minVal) {
         minVal = myArray_[i];
      }
}
return minVal;
    
}

/*

void ArrayTools::Find_max(int NUM_ELEMENTS, int NUM_ELEMENTS2) {
  int maxVal = 0;
  for (int i = 0; NUM_ELEMENTS < NUM_ELEMENTS2; ++i) {
      if (myArray[i] > maxVal) {
         maxVal = myArray[i];
      }
}}
*/
/*
int ArrayTools::Find_sum {
  for (i = 0; i < NUM_ELEMENTS; ++i) {
      sum_total = sum_total + userVals[i];
}}*/

/*
int ArrayTools::Numb_even{
  for (i = 0; i < NUM_ELEMENTS; ++i) {   
}}


int ArrayTools::Is_sorted{
  for (i = 0; i < NUM_ELEMENTS; ++i) {  
}}

*/

int main()
{
    const int SIZE = 3;
    int myArray[SIZE];
    int min_num = 0;
    int max_num = 0;
    
    for(int i = 0; i < SIZE; i++){
        cin >> myArray[i];
    }
    

    
   ArrayTools a(myArray,SIZE);
   
   a.Print();
   cout<<"Min: "<<a.Find_min(0, 4)<<endl;
//    cout<<"Max: "<<a.Find_max(5, 10)<<endl;
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