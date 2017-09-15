#include <iostream>                    
#include <string>
using namespace std;      /* Nathan Bruce 
                          9/14/2017
                          This program is meant to calculate a users daily calorie expenditure to maintain their current weight.
                                              It uses their height, weight, and age.
    
 */
 
 struct personsinfo {                    ///create struct to use for user's body info
     float bodyweight;                   /// acts as template for equations later on
     float age;
     double height;
 };
 
 
 int main () {                           /// start the program


personsinfo Mifflin;                     /// declare variables from the struct for mifflin equation
Mifflin.bodyweight;                       //will be used later on
Mifflin.age;
Mifflin.height;
 
personsinfo Harris;                      /// declare variables from the struct for Harris equation
Harris.bodyweight;
Harris.age;
Harris.height;

personsinfo BMI;                         /// declare variables from the struct for BMI equation
BMI.bodyweight;
BMI.height;

personsinfo Mifflin2;                     /// declare second set of variables from the struct because i messed up and need to convert the original now
Mifflin.height;                            //This way i can keep the original values for legacy code, and work with the new inputs
                                           ///
personsinfo Harris2;                      /// ..
Harris.height;                             //..
                                           ///..
personsinfo BMI2;                         /// problem fixed!
BMI.height;



float mifflin_Calc = 0.0;                // declare temporary variables for the mifflin calculation (will be altered)
float harris_Benedict_Calc = 0.0;         // declare temporary variables for the harris calculation (will be altered)
float bmi_Calc = 0.0;                // declare temporary variables for the BMI calculation (will be altered)             
float bmi_Total = 0.0;                 //etc..
float pizza_slices = 0.0;               //declare variable for pizza slices
float pizza_Calories = 285.0;            // declare variable for the amount of calories in an average pizza slice
string first_Last_Name;                 //create a string variable to collect users name

float metric_H_Conversion = 0.0;        //create float variables to convert imperial units to metric
float metric_W_Conversion = 0.0;        //create float variables to convert imperial units to metric
float user_Height_Output = 0;
int user_Height_Feet = 0; 
int user_Height_Inches = 0;

cout << "What is your first and last name? ";                   //ask user for first and last name
getline(cin, first_Last_Name);                                  // use getline so they can input both names instead of the space breaking it into two variables

 
cout << "Enter your weight (pounds): ";  //Have the user input their weight 
cin  >> Mifflin.bodyweight;              //input is stored using the Mifflin template struct
Harris.bodyweight = Mifflin.bodyweight;  // have the same imput stored into Harris template struct
BMI.bodyweight = Mifflin.bodyweight;     // and also the bmi template struct

cout << "Enter your age (months): ";      //Have user input their age 
cin  >> Mifflin.age;                     // store in mifflin and harris constructs
Harris.age = Mifflin.age;

cout << "Enter your height (feet): ";  //Have user input their height in inches
cin  >> Mifflin.height;                  // store the input in: mifflin, harris, and BMI structs respectively
Harris.height = Mifflin.height;          // we will use this later for calculations
BMI.height = Mifflin.height;          
user_Height_Feet = Mifflin.height;      //placeholder for final height in feet

cout << "Enter your height (inches): ";  //Have user input their height in inches
cin  >> Mifflin2.height;                  // store the input in: mifflin, harris, and BMI structs respectively
Harris2.height = Mifflin2.height;          // we will use this later for calculations
BMI2.height = Mifflin2.height;
user_Height_Inches = Mifflin2.height;     //place holder for final inches


Mifflin.height = Mifflin2.height + (Mifflin.height * 12);  //convert feet to inches and add (x3)
Harris.height = Harris2.height + (Harris.height * 12);     //this will give us one number to work with instead of two
BMI.height = Mifflin.height;
user_Height_Output = Harris.height;                          //acts as a placeholder to convert back to feet for user output




Mifflin.age = Mifflin.age / 12;  //turn months into years to work with only one number (x2)
Harris.age = Harris.age / 12;


metric_W_Conversion = Mifflin.bodyweight * 0.45359237;            // convert bodyweight to metric for Mifflin equation
metric_H_Conversion = Mifflin.height * 2.54;                      // convert height to metric for Mifflin equation


mifflin_Calc = (10 * metric_W_Conversion) + (6.25 * metric_H_Conversion) - (5 * Mifflin.age) + 5; // calculate the mifflin equation with the users converted input
harris_Benedict_Calc = 66 + (6.2 * Harris.bodyweight) + (12.7 * Harris.height) - (6.76 * Harris.age); // calculate harris benedict equation with the users input
bmi_Total = (BMI.bodyweight / (BMI.height * BMI.height)) * 703;  // calculate the users BMI from their input


cout << endl << endl << "=================================================" << endl; //create a doodad around the health slip to look professional

cout << "Here is your health form: " << endl << "=================================================" << endl << endl; // start the health slip and cut off the doodad

cout << "Your name is " << first_Last_Name << endl; //output their full name
cout << "You are " << Mifflin.age << " years old." << endl; //tell them their age
cout << "You are " << user_Height_Feet << " feet " << user_Height_Inches << " tall." << endl;
cout << "You weigh " << Harris.bodyweight << "lbs." << endl; //say their weight
cout << endl << "Your BMI is: " << bmi_Total << endl << endl;              //output users BMI
cout << "According to the Mifflin equation, you would need " << mifflin_Calc << " calories to maintain your current weight." << endl; //output Mifflins calorie needed to maintain current body weight
cout << "According to the Harris Benedict equation, you would need " << harris_Benedict_Calc << " calories to maintain your current weight." << endl;   //output users benedict calorie needed to maintain current body weight


pizza_slices = mifflin_Calc /  pizza_Calories;  //calculate how many pizza slices fit into their calorie diet
cout << endl << "Pizza slices have 285 calories."<< endl << endl //explain how many calories are in pizza slices
<<"You should be eating " << pizza_slices << //output how many slices they should eat a day
" slices of pizza to maintain your current weight according to the Mifflin-St. Jeor equation. Lucky!" << endl;  

pizza_slices = harris_Benedict_Calc / pizza_Calories; //same as before except for with the harris benedict equation
cout << "If we use the Harris Benedict equation, you would need " << pizza_slices << 
". Let's use that one instead!" << endl;

//==========================================================================================
//Your name is SSofia Cameron
//You are 2.41667 years old.
//You are 3 feet 1 tall.
//You weigh 35lbs.

//Your BMI is: 17.973

//According to the Mifflin equation, you would need 739.049 calories to maintain your current weight.
//According to the Harris Benedict equation, you would need 736.563 calories to maintain your current weight.

//Pizza slices have 285 calories.

//You should be eating 2.59315 slices of pizza to maintain your current weight according to the Mifflin-St. Jeor equation. Lucky!
//If we use the Harris Benedict equation, you would need 2.58443. Let's use that one instead!


//==========================================================================================
//==========================================================================================
//Your name is Richard Watson
//You are 6.5 years old.
//You are 3 feet 8 tall.
//You weigh 42lbs.

//Your BMI is: 15.251

//According to the Mifflin equation, you would need 861.509 calories to maintain your current weight.
//According to the Harris Benedict equation, you would need 841.26 calories to maintain your current weight.

//Pizza slices have 285 calories.

//You should be eating 3.02284 slices of pizza to maintain your current weight according to the Mifflin-St. Jeor equation. Lucky!
//If we use the Harris Benedict equation, you would need 2.95179. Let's use that one instead!

//==========================================================================================
//==========================================================================================
//Your name is Heather Hunt
//You are 26 years old.
//You are 5 feet 10 tall.
//You weigh 192lbs.

//Your BMI is: 27.5461

//According to the Mifflin equation, you would need 1857.15 calories to maintain your current weight.
//According to the Harris Benedict equation, you would need 1969.64 calories to maintain your current weight.

//Pizza slices have 285 calories.

//You should be eating 6.51631 slices of pizza to maintain your current weight according to the Mifflin-St. Jeor equation. Lucky!
//If we use the Harris Benedict equation, you would need 6.91102. Let's use that one instead!

//==========================================================================================
//==========================================================================================
//Your name is Eddy Hall
//You are 13.5 years old.
//You are 6 feet 1 tall.
//You weigh 590lbs.

//Your BMI is: 77.8326

//According to the Mifflin equation, you would need 3772.57 calories to maintain your current weight.
//According to the Harris Benedict equation, you would need 4559.84 calories to maintain your current weight.

//Pizza slices have 285 calories.

//You should be eating 13.2371 slices of pizza to maintain your current weight according to the Mifflin-St. Jeor equation. Lucky!
//If we use the Harris Benedict equation, you would need 15.9994. Let's use that one instead!

//==========================================================================================

return 0;

 }
 