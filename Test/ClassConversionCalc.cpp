#include <iostream>
#include <string>
using namespace std;



/*Companies are now global and have global merchandise and this includes shoe companies.
A person will use your program to enter the inches of their foot from heal to big toe and have a conversion to centimeters, UK sizes, Euro Sizes, and US Sizes (http://www.zappos.com/c/shoe-size-conversion (Links to an external site.)Links to an external site.).  Use tools to round up if they are between sizes.   
*/

class measurement
{
public:
   void SetLengthInches(double);
   void SetLengthCent(double);
   void SetLengthUK(double);
   void SetLengthEU(double);
   void SetLengthUS(double);

   double GetLengthInches() const;
   double GetLengthCent() const;
   double GetLengthUK() const;
   double GetLengthEU() const;
   double GetLffengthUS() const;
   
   void PrintData() {
    cout << "Inches: " << Inches_ << endl;
    cout << "CM: " << Centimeter_ << endl;
    cout <<"UK: " << UK_ << endl;
    cout <<"EU: " << EU_ << endl;
    cout << "US: " <<  US_ << endl;
   }

private:
   double Inches_;
   double Centimeter_;
   double UK_;
   double EU_;
   double US_;
};

void measurement::SetLengthInches(double user_inches) {
   Inches_ = user_inches;    
}

void measurement::SetLengthUS(double US){
    US = (3 * Inches_) - 24;
    
    US_ = US;
};

void measurement::SetLengthCent(double Centimeter){
    Centimeter = Centimeter * 2.54;
    Centimeter_ = Centimeter;
}

void measurement::SetLengthUK(double UK){
    UK = (3 * Inches_) - 23;
    UK_ = UK;
};

void measurement::SetLengthEU(double EU){
    EU_ = EU;
};



double measurement::GetLengthInches() const {
    return Inches_;
}

double measurement::GetLengthCent() const{
    return Centimeter_;
} 

double measurement::GetLengthUK() const {
    return UK_;
}

double measurement::GetLengthEU() const{
    return EU_;
} 

double measurement::GetLengthUS() const {
    return US_;
}





int main() {


 //make a loop to go through the books
 
double user_inches = 0.0;
double centimeters = 0.0;
double uk_size = 0.0;
double euro_size = 0.0;
double us_size = 0.0;

measurement measurement;

    
cout << "Enter your foot size (in inches): ";
     cin >> user_inches;
     measurement.SetLengthInches(user_inches);
     
cout << "Enter your foot size (in inches): ";
     cin >> centimeters;
     measurement.SetLengthCent(centimeters);

cout << "Enter your foot size (in inches): ";
     cin >> uk_size;
     measurement.SetLengthUK(uk_size);
     
cout << "Enter your foot size (in inches): ";
     cin >> euro_size;
     measurement.SetLengthEU(euro_size);

cout << "Enter your foot size (in inches): ";
     cin >> us_size;
     measurement.SetLengthUS(us_size);




measurement.PrintData();
      


return 0;

}
