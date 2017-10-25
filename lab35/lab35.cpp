#include <iostream>
using namespace std;

/* 
Nathan Bruce
10/24/2017

This program will use a class with instructors to convert temperatures
 between kelvin, celsius, and fahrenheit

*/

class TemperatureConverter { //create class to convert temperature
public:
   TemperatureConverter(){ //create a default constructor
       kelvin_ = 0.0;
   }
   TemperatureConverter(double temp) { //create an overloaded constructor for if there is an argument
       kelvin_ = 0.0;
   }
   
   double GetTempAsCelsius();
   double GetTempAsFahrenheit();
   double GetTempFromKelvin();
   
   void SetTempFromKelvin(double userTemp);
   void SetTempFromCelsius(double CelsiusTemp);
   void SetTempFromFahrenheit(double fahrenheit_temp);

   void PrintTemperatures() ; //Prints the temperature

private:
  double kelvin_; //private variable that will be the basis of temperature converstion
};


// This will call the Get functions to output the modified tempearture values
void TemperatureConverter::PrintTemperatures() {
   cout << endl << "The temperature "
        << GetTempFromKelvin() << " °K is equal to "  
        << GetTempAsCelsius() << " °C or " 
        << GetTempAsFahrenheit() << " °F.\n" << endl;
   
return;    
}
//-----------------------------------------------------------------

// Mutator to set Celsius temperature
// user's celsius temperature must be over 273.15
void TemperatureConverter::SetTempFromCelsius(double CelsiusTemp) {
      if (CelsiusTemp >= -273.15){
          kelvin_ = CelsiusTemp + 273.15;
      }
       else {
              cout << "wrong. wrong, WRONG. \n";
          }
          
      }

// Mutator to set Fahrenheit temperature
// will not accept values less than -450.67
void TemperatureConverter::SetTempFromFahrenheit(double fahrenheit_temp) {
    if (fahrenheit_temp >= -459.67) {
        kelvin_ = (5.0 * (fahrenheit_temp - 32) / 9.0) + 273.15;
    }
       else {
           cout << "die in a fire. (jk) \n\n";
       }

        
    }

// mutator to set Kelvin temperature
// will not accept values less than 0
void TemperatureConverter::SetTempFromKelvin(double userTemp){
    if (userTemp >= 0){
       kelvin_ = userTemp;
    }
       else {
          cout << "Must be a positive number... ";
    }

}

//==========================================================================

//accessor to get Celsius temperature
double TemperatureConverter::GetTempAsCelsius(){
     return kelvin_ - 273.15;
}

//accessor to get Fahrenheit temperature
double TemperatureConverter::GetTempAsFahrenheit() {
    return (9.0 * GetTempAsCelsius()) / 5.0 + 32.0;
}

//accessor to get Kelvin temperature
double TemperatureConverter::GetTempFromKelvin(){
     return  kelvin_;
}

//==========================================================================

int main() {
    //create two classes, temp1 and temp2
    TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274); //testing overloaded constructor
    
    temp1.PrintTemperatures(); //print temperature from class temp1
    temp2.PrintTemperatures(); //print temperature from class temp2
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrintTemperatures();
    
    temp2.SetTempFromCelsius(32); //testing other functions
    cout<<temp2.GetTempAsCelsius()<<endl;
    temp2.PrintTemperatures();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<endl;
    temp2.PrintTemperatures();
    
    return 0;
}


