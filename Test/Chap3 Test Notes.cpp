do while is a post loop



-------------------classes-------------------------------------

class classCraft{
private:

int health;
int AP;
int XP;

public:

}


-----------------------Constructor-----------------------------

//constructions are a function that you can not call
//no data types
//no arguemtns, will be considered default
//can add if:else statements
//ex:

class Craft ()
{
  if (health 70)
  health_=0;
  XP_= 0;
  AP_= 0;

}
-----------------------------
main
   classCraft April;   //would have 0xp and 0ap. first would run (because default)
   classCraft mage(200) //second struct would run (because paramaters)
 
 ----------------------------- 
  class Craft (int health)
  {
      health_ = health;
      XP_ = 30;
      AP_ = 10;
  }
   
   
 -----------------------------------------------------------
 
#include <iostream>
using namespace std;


class Salary 
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
Salary mySalary1;
Salary mySalary2(100);

cout << mySalary1.GetAnnualSalary();
cout << endl << mySalary2.GetAnnualSalary();

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