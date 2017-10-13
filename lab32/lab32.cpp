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

double Single_Tax_Calc(double income) {
    double temp_calc = 0;
    double tax = 0;
    
    if (income  > 0 && income < 9326) {
        tax = income * 0.10;
    }
    
    else if (income > 9325 && income <= 37950) {
        temp_calc = income * 0.15;
        tax = 932.50 + temp_calc;
    }
    
    else if (income > 37950 && income <= 91900) {
        temp_calc = income * 0.25;
        tax = 5226.25 + temp_calc;
    }
    
    else if (income > 91900 && income <= 191650) {
        temp_calc = income * 0.28;
        tax = 18713.75 + temp_calc;
    }
    
    else if (income > 191650 && income <= 416700) {
        temp_calc = income * 0.33;
        tax = 46643.75 + temp_calc;
    }

    else if (income >= 416700) {
        temp_calc = income * 0.396;
        tax = 120910.25 + temp_calc;

    }
    cout << "\nYour taxes are: $" << tax << endl;
    return tax;
};

double Married_Tax_Calc(double income) {
    double temp_calc = 0;
    double tax = 0;
    
    if (income  >= 0 && income <= 18650) {
        tax = income * 0.10;
    }
    
    else if (income >= 18650 && income <= 75900) {
        temp_calc = income * 0.15;
        tax = 1865 + temp_calc;
    }
    
    else if (income > 75900 && income <= 153100) {
        temp_calc = income * 0.25;
        tax = 10452.50 + temp_calc;
    }
    
    else if (income > 153100 && income <= 233350) {
        temp_calc = income * 0.28;
        tax = 29752.50 + temp_calc;
    }
    
    else if (income >= 233350 && income <= 416700) {
        temp_calc = income * 0.33;
        tax = 52222.50 + temp_calc;
    }

    else if (income >= 416700) {
        temp_calc = income * 0.396;
        tax = 112728 + temp_calc;

    }
    
    cout << "\nBecause you are married, your Gross Adjusted Income is: $"
         << income - tax << "\n" << endl;
         
    return tax;
};





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


cout << "What is your name? ";
getline(cin, user_name);
    
cout << "\nEnter your income to calculate the taxes: ";
cin >> user_income;

cout << "\nEnter withheld taxe amount: ";
cin >> taxes_withheld;

//income_tax = Tax_Calc(user_income);
//after_tax = (user_income - income_tax);

cout << "\nAre you married? type '1' for yes or '2' for no. ";
cin >> married_status;

switch (married_status) {
    case 1:
       user_income = user_income - ((personal_exemption * 2) + married_deduction);
       final_tax = Married_Tax_Calc(user_income);
       final_tax = final_tax - taxes_withheld;
          if (final_tax > 0) {
              cout << user_name <<"\n, you owe: $" << final_tax;
          }
          else {
              final_tax = final_tax * -1;
              cout << user_name<<  ": Congrats! Your tax refund will be: $" << final_tax;
          }
       break;
       
    case 2:
       user_income = user_income - (personal_exemption + single_deduction);
       final_tax = Single_Tax_Calc(user_income);
       final_tax = final_tax - taxes_withheld;
          if (final_tax > 0) {
              cout << user_name << ", you owe: $" << final_tax;
          }
          else {
              final_tax = final_tax * -1;
              cout << user_name << "\n: Congrats! your tax refund will be: $" << final_tax;
          }
       break;
    
    default:
        cout << endl << "Dontcha listen..?";
}


    
    
return 0;   
}