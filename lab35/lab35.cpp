#include <iostream>
using namespace std;

/* 
Nathan Bruce
10/24/2017

This program will use a class with instructors to convert temperatures
 between kelvin, celsius, and fahrenheit

*/


//create a class TemperatureConverter that will:
//set kelvin to 0.0 automatically with constructors
//convert temperatures from kelvin to both celsius and fahrenheit
//output all three temperatures (K, C, F)


class TemperatureConverter { 
   public:
      TemperatureConverter(){ //create a default constructor
           kelvin_ = 0.0;
   };
      TemperatureConverter(double temp) { //create an overloaded constructor for if there is an argument
           kelvin_ = temp;
   };
   
      double GetTempAsCelsius(); //returns the Celsius value to the main program
      double GetTempAsFahrenheit(); //returns the Fahrenheit value to the main program
      double GetTempFromKelvin(); //returns the Kelvin value to the main program
   
      void SetTempFromKelvin(double userTemp); //converts user temp to kelvin
      void SetTempFromCelsius(double CelsiusTemp); //converts user temp to celsius
      void SetTempFromFahrenheit(double fahrenheit_temp); //converts user temp to fahrenheit

      void PrintTemperatures() ; //Prints the temperature

   private:
      double kelvin_ = 0.0; //private variable that will be the basis of temperature converstion
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
      }}

// Mutator to set Fahrenheit temperature
// will not accept values less than -450.67
void TemperatureConverter::SetTempFromFahrenheit(double fahrenheit_temp) {
    if (fahrenheit_temp >= -459.67) {
        kelvin_ = (5.0 * (fahrenheit_temp - 32) / 9.0) + 273.15;
    }}

// mutator to set Kelvin temperature
// will not accept values less than 0
void TemperatureConverter::SetTempFromKelvin(double userTemp){
    if (userTemp >= 0){
       kelvin_ = userTemp;
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


/*

The temperature 0 °K is equal to -273.15 °C or -459.67 °F.


The temperature 274 °K is equal to 0.85 °C or 33.53 °F.

400.15

The temperature 400.15 °K is equal to 127 °C or 260.6 °F.

32

The temperature 305.15 °K is equal to 32 °C or 89.6 °F.

32

The temperature 273.15 °K is equal to 0 °C or 32 °F.





*/
