#include <iostream>
using namespace std;

class Salary //Create class
{
    private:  //label it private so people cannot take and change variables inside the object
        double annual_; //create an attribute <----mutator function
    public: //allow these to be public 
        void SetAnnualSalary(double salary) //Create a function to set annual salary
        {
            annual_ = salary; //Modify the attribute in the private key <----data field
        }
        double GetAnnualSalary() //Create a second salary
        {
            return annual_; //Return a second 
        }
        void Print() //Create a function to print what's inside < ----accesor function
        {
             cout<<"$"<<annual_<<endl; //Print the altered attribute
        }
};

//Comment the class per the class style guide
//Identify the following parts of the class
//      data field
//      mutator function
//      accessor function
//Create a main function that creates an object and runs all of the functions in order

int main()  { 

Salary salary1;
   salary1.SetAnnualSalary(100);
   salary1.GetAnnualSalary();
   salary1.Print();
return 0;

}




1: int number should be 1 instead of 12
