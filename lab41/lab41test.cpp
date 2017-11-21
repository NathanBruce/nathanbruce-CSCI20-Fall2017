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
      int Find_sum();
      int Num_even_odd(int lower_index, int higher_index);
      int Search(int find_number);
      string Is_sorted();


    private:
       int elements_ ;
       int myArray_[10];
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
    const int SIZE = 10;
    int myArray[SIZE];
 
cout << "Enter numbers into the array: " << endl; 
    
    for(int i = 0; i < SIZE; i++){
        cin >> myArray[i];
    }
    

    
   ArrayTools a(myArray,SIZE);
   
      a.Print();
      cout<<"Min: "<<a.Find_min(0, 4)<<endl;
      cout<<"Max: "<<a.Find_max(5, 10)<<endl;
      cout<<"Sum = "<<a.Find_sum()<<endl;
      cout<<"Search 10: "<<a.Search(10)<<endl;
      cout<<"Sorted? "<<a.Is_sorted()<<endl;
      cout<<a.Num_even_odd(0, 10)<<endl;  //added this one // changed to even
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
string ArrayTools::Is_sorted(){
    for (int i=0; i<elements_-1; ++i){
        if (myArray_[i] > myArray_[i + 1]){
            return "No";

        }
    }
    return "Yes";
}


//==================SEARCH 10 -- WORKS==================================
int ArrayTools::Search(int number){
    for (int i=0; i< elements_; ++i){
        if (myArray_[i] == number){
            return number;
            }
    }
    return -1;
}

//============PRINT -- WORKS====================
void ArrayTools::Print(){
     cout << "Numbers are:  ";
     for (int i=0; i<elements_; ++i){
         cout << myArray_[i] << ", ";
     }
     cout << endl;
}

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


//==================FIND SUM -- WORKS=====================================
int ArrayTools::Find_sum(){
    int sum_total = 0;
    for (int i = 0; i < elements_; ++i){
        sum_total = sum_total + myArray_[i];
}
    
    return sum_total;
}

//====================================================================
