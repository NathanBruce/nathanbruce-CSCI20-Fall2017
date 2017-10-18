#include <iostream>
#include <string>
using namespace std;
/* 
Nathan Bruce
10/12/2017

This program calculates how much a user owes for taxes (or refunds they are entitled to).
It does this by reducing the tax rate by personal exemption and marital status, and then running the remainder through the appropriate tax bracket.
The program outputs the user's name, their taxes owed/due, Total Adjusted Income.

*/

//Create a function that will calculate all the tax brackets for people who are single

double Single_Tax_Calc(double income) {       //
    double temp_calc = 0;                     // create a temp variable to calculate tax amount
    double tax = 0;                           // finalized tax amount. This is what will return
    
    if (income  > 0 && income < 9326) {       //first tax bracket.
        tax = income * 0.10;
    }
    
    else if (income > 9325 && income <= 37950) {       //second tax bracket.
        temp_calc = income * 0.15;
        tax = 932.50 + temp_calc;
    }
    
    else if (income > 37950 && income <= 91900) {       //three tax bracket.
        temp_calc = income * 0.25;
        tax = 5226.25 + temp_calc;
    }
    
    else if (income > 91900 && income <= 191650) {       //four tax bracket.
        temp_calc = income * 0.28;
        tax = 18713.75 + temp_calc;
    }
    
    else if (income > 191650 && income <= 416700) {       //five tax bracket.
        temp_calc = income * 0.33;
        tax = 46643.75 + temp_calc;
    }

    else if (income >= 416700) {                          //six tax bracket.
        temp_calc = income * 0.396;
        tax = 120910.25 + temp_calc;

    }
    cout << "\nYour taxes are: $" << tax << endl;         //return the tax amount, will depend on the user's bracket.
    return tax;                                           //sends the tax value back into the main code
};

//Create a function that will calculate all the tax brackets for people who are married


double Married_Tax_Calc(double income) {                   //first tax bracket.     
    double temp_calc = 0;
    double tax = 0;
    
    if (income  >= 0 && income <= 18650) {                 //second tax bracket.
        tax = income * 0.10;
    }
    
    else if (income >= 18650 && income <= 75900) {         //third tax bracket.
        temp_calc = income * 0.15;
        tax = 1865 + temp_calc;
    }
    
    else if (income > 75900 && income <= 153100) {         //fourth tax bracket.
        temp_calc = income * 0.25;
        tax = 10452.50 + temp_calc;
    }
    
    else if (income > 153100 && income <= 233350) {        //fifth tax bracket.
        temp_calc = income * 0.28;
        tax = 29752.50 + temp_calc;
    }
    
    else if (income >= 233350 && income <= 416700) {       //six tax bracket.
        temp_calc = income * 0.33;
        tax = 52222.50 + temp_calc;
    }

    else if (income >= 416700) {                           //seven tax bracket.
        temp_calc = income * 0.396;
        tax = 112728 + temp_calc;

    }
    
    cout << "\nBecause you are married, your Gross Adjusted Income is: $"  //output to the user letting them know what their GAI is
         << income - tax << "\n" << endl;                                  //subtract the users income by the tax amount (based on tax bracket)
         
    return tax;                                                            //return the tax amount to the main code
};



//initialize all the variables
//they're all succintly named 

main() {
string user_name;
double user_income = 0.0;
double income_tax = 0.0;
double after_tax = 0.0;
double taxes_withheld = 0.0;
int married_status = 0;
int final_tax = 0;

int personal_exemption = 4050;
int single_deduction = 6350;
int married_deduction = 12700;


cout << "What is your name? ";                                   //ask the user for their name
getline(cin, user_name);                                         //getline so the user can add their first and last names (or even a middle name if they want to get crazy with it)
    
cout << "\nEnter your income to calculate the taxes: ";          //collect users income
cin >> user_income;

cout << "\nEnter withheld tax amount: ";                         //collect withheld tax amount
cin >> taxes_withheld;


cout << "\nAre you married? type '1' for yes or '2' for no. ";   //ask user their married status (rude)
cin >> married_status;

switch (married_status) {                                                                  //create a switch loop. This will calculate different equations based on the user's marital status
    case 1:                                                                                //first case
       user_income = user_income - ((personal_exemption * 2) + married_deduction);         //determines the user income, deduces the two personal exemptions and marriage deduction before calculating tax
       final_tax = Married_Tax_Calc(user_income);                                          //run the married tax function
       final_tax = final_tax - taxes_withheld;                                             //subtract the taxes withheld
          if (final_tax > 0) {                                                             //if the user is over 0, user owes money
              cout << user_name <<"\n, you owe: $" << final_tax;                           //tell them how much they owe
          }
          else {                                                                           //if not, must mean they get money back
              final_tax = final_tax * -1;                                                  //turn the negative amount into positive
              cout << user_name<<  ": Congrats! Your tax refund will be: $" << final_tax;  //tell user refund amount
          }
       break;                                                                              //break loop if criteria is met
       
    case 2:
       user_income = user_income - (personal_exemption + single_deduction);                //Same thing as before, this time with single status. Reduce by 1 personal exemption and single deduction
       final_tax = Single_Tax_Calc(user_income);                                           //calculate single tax
       final_tax = final_tax - taxes_withheld;                                             //reduce taxes withheld
          if (final_tax > 0) {                                                             // over 0? you owe money
              cout << user_name << ", you owe: $" << final_tax;                            
          } 
          else {
              final_tax = final_tax * -1;                                                  //under 0? you get money$
              cout << user_name << "\n: Congrats! your tax refund will be: $" << final_tax;
          }
       break;                                                                              //break if condition if fulfilled
    
    default:                                                                               //if neither? say this.
        cout << endl << "Dontcha listen..?";                                               // snarky message? Check!
}


    
    
return 0;   
}