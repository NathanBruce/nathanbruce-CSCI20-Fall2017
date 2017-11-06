#include <iostream>
using namespace std;


class Salary //create class
{
    private: 
        double annual_;
    public:
        Salary() //this is the constructor
        {
            annual_ = 0;    
        }
        Salary(double annual) //this is the constructor
        {
            annual_ = annual;    
        }

        void SetAnnualSalary(double salary)
        {
            if (salary > 0){
                annual_ = salary;
            }
            else
                annual_ = 0;
        }
        double GetAnnualSalary()
        {
            return annual_;
        }
        void Print()
        {
             cout<<"$"<<annual_<<endl;
        }
};


int main(){
Salary mySalary1; //create class my salary
Salary mySalary2(100); //create class mysalary2

cout << mySalary1.GetAnnualSalary(); //call GetAnnualSalary 
cout << endl << mySalary2.GetAnnualSalary(); //call GetAnnualSalary 

return 0;    
}
//Comment the class per the class style guide
//Identify the following parts of the class
//      constructor
//      overload the constructor to accept an input for salary 
//      and set the salary to the input
//Create a main function that creates an object with no input
//  creates an object with input that is negative
//  and creates an object with input that is appropriate.
//and outputs the salary for each object.