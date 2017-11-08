#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int FindMinValue(const int prices[],  int numVals) {
   string names[6]={"ATT Unlimited Plus Plan", "ATT Unlimited Choice Plan", "ATT Family Plan", "Verizion Unlimited Plan", "Sprint Unlimited Plan", "Spring 2GB Plan"};
   int i = 0;
   int minVal = 0;
   int inputVal = 0;
   int index = -1;
   
   minVal = fabs(prices[0]);
   for (i = 0; i < numVals; ++i) {
      inputVal = fabs(prices[i]);
      if (inputVal < minVal) {
         minVal = inputVal;
         index=i;
      }
   }
   cout << endl << names[index] << " is your best plan. It will be ";
   return minVal;
}

int main() {

int smart_phones = 0;
int data_usageGB = 0;
int dumb_phone = 0;
int tablet_amount = 0;


int tablet_cost = 10;
int ATT_plus_phones = 0;
int ATT_unlim_phones = 0;
int Sprint_2gb_phones = 0;
int Spr_unlim_phones = 0;
int Ver_unlim_phones = 0;
int ATT_fam_phones = 0;

int ATT_fam_gb_cost = 0;
int ATT_plus_cost = 0;
int ATT_unlim_cost = 0;
int Sprint_2gb_cost = 0;
int Spr_unlim_cost = 0;
int Ver_unlim_cost = 0;
int ATT_fam_cost = 0;

int CONST = 6;
int prices[CONST];
string products[CONST];
int customer_plan = 0;
int products_name = 0;


//collect inputs from the user for quantity of: smart phones, dumb phones, tablet, and GB's of data
//this will be how much the customer is looking to purchase

  cout << endl << "How many smart phones would you like? ";      
  cin >> smart_phones;                                           

  cout << endl << "How many dumb phones do you want? ";        
  cin >> dumb_phone;                                           
                                                                 
  cout << endl << "How many tablets do you want? ";             
  cin >> tablet_amount;                                         

  cout << endl << "How many GB of data would you like for your monthly plan? ";      
  cin >> data_usageGB;                


//this loop will determine the customers need based on their data usage
//it will quote differnt prices based on the plan (20,30,60,etc)
//whichever is chosen will be stored in a variable for calculating score later on
//if not a valid number, tells user to enter valid number

if (data_usageGB < 2 && data_usageGB > 0) {                                        
   cout << "1gb" << endl;                                                          
   ATT_fam_gb_cost = 30;
}

   else if ((data_usageGB <= 3) && (data_usageGB > 1)) {                              
      cout << "3gb " << endl;                                                         
      ATT_fam_gb_cost = 40;
   }
   
   else if ((data_usageGB <= 6) && (data_usageGB > 3)) {                              
      cout << "6gb " << endl;                                                         
      ATT_fam_gb_cost = 60;                                                           
   }
   
   else if ((data_usageGB <= 10) && (data_usageGB > 6)) {
      cout << "10gb " << endl;
      ATT_fam_gb_cost = 80;
   }
   
   else if ((data_usageGB <= 16) && (data_usageGB > 10)) {
      cout << "16gb " << endl;
      ATT_fam_gb_cost = 90;
   }
   
   else if ((data_usageGB <= 25) && (data_usageGB > 16)) {
      cout << "25gb " << endl;
      ATT_fam_gb_cost = 110;
}

   else {
      data_usageGB = 0;
      cout << "Enter a valid number.. " << endl;
}

//outputs the customers choices
cout << endl << "smart phones: " << smart_phones << endl;
cout << "dumb phones: " << dumb_phone << endl;
cout << "data plan: " << data_usageGB << " GB" << endl;


//create alterable variables to calculate the price for each tree

ATT_plus_phones = smart_phones + dumb_phone;
ATT_unlim_phones = smart_phones + dumb_phone;
ATT_fam_phones = smart_phones + dumb_phone;
Ver_unlim_phones = smart_phones + dumb_phone;
Spr_unlim_phones = smart_phones + dumb_phone;
Sprint_2gb_phones = smart_phones + dumb_phone;
tablet_cost = tablet_amount * tablet_cost;
cout << "Tablet cost: $" << tablet_cost << endl << endl;


//starts the ATT Unlimited Plus plan loop
//cost will be calculated based on how many phones/tablets/etc the user chooses and the cost
//output total cost
//=============================ATT Unlimited Plus Plan===========================
if (ATT_plus_phones == 1) {
      ATT_plus_cost = (90 ) + (tablet_cost);
      cout << "ATT Unlimited Plus Plan: " << ATT_plus_cost << endl;
      prices[0] = ATT_plus_cost;      
      products[0] = "ATT Unlimited Plus Plan: ";       
}

   else if (ATT_plus_phones == 2) {
       ATT_plus_cost = (145)  + (tablet_cost);
       cout << "ATT Unlimited Plus Plan: " << ATT_plus_cost << endl;
       prices[0] = ATT_plus_cost;
      products[0] = "ATT Unlimited Plus Plan: ";
}

   else if ((ATT_plus_phones > 2) && (ATT_plus_phones <= 10)) {
       ATT_plus_phones = ATT_plus_phones - 2;
       ATT_plus_cost = 145 + (ATT_plus_phones * 20) + (tablet_cost);
       cout << "ATT Unlimited Plus Plan:  " << ATT_plus_cost << endl;
       prices[0] = ATT_plus_cost;
      products[0] = "ATT Unlimited Plus Plan: ";      
   }

   else {
       cout << "Enter a valid amount.. " << endl;
}

//starts the ATT Unlimited Choice loop
//cost will be calculated based on how many phones/tablets/etc the user chooses and the cost
//output total cost
//============================ATT Unlimited Choice Plan=========================================
 if (ATT_unlim_phones == 1) {
      ATT_unlim_cost = 60  + tablet_cost;
      cout << "ATT Unlimited Choice Plan: " << ATT_unlim_cost << endl;
      prices[1] = ATT_unlim_cost;    
      products[1] = "ATT Unlimited Choice Plan: ";
 }

   else if (ATT_unlim_phones == 2) {
       ATT_unlim_cost = 115 + tablet_cost;
       cout << "ATT Unlimited Choice Plan: " << ATT_unlim_cost << endl;
      prices[1] = ATT_unlim_cost;
      products[1] = "ATT Unlimited Choice Plan: " ;      
   }

   else if ((ATT_unlim_phones > 2) && (ATT_unlim_phones <= 10)) {
       ATT_unlim_phones = ATT_unlim_phones - 2;
       ATT_unlim_cost = 115 + (ATT_unlim_phones * 20) + tablet_cost;
       cout << "ATT Unlimited Choice Plan: " << ATT_unlim_cost << endl;
      prices[1] = ATT_unlim_cost;
      products[1] = "ATT Unlimited Choice Plan: " ;      
   }

   else {
       cout << "Enter a valid amount.. " << endl;
}

//starts the ATT Family Plan loop
//cost will be calculated based on how many phones/tablets/etc the user chooses and the cost
//output total cost
//===============================ATT Family Plans=========================================
 if (data_usageGB == 0) {
      ATT_fam_cost = (ATT_fam_phones * 20) + (tablet_cost);
      cout << "ATT Family Plans: " << ATT_fam_cost << endl;
      prices[2] = ATT_fam_cost; 
      products[2] = "ATT Family Plans: " ;
 }
 
   else if ((data_usageGB <= 2) && (data_usageGB > 0)) {
       ATT_fam_cost = (ATT_fam_phones * 20)  + 30 + (tablet_cost);
       cout << "ATT Family Plans: " << ATT_fam_cost << endl;      
      prices[2] = ATT_fam_cost;
      products[2] = "ATT Family Plans: " ;
}
   
   else if ((data_usageGB <= 3) && (data_usageGB > 2)) {
       ATT_fam_cost = (ATT_fam_phones * 20) + 40 + (tablet_cost);
       cout << "ATT Family Plans: " << ATT_fam_cost << endl;
      prices[2] = ATT_fam_cost;
      products[2] = "ATT Family Plans: " ;
}
   
   else if ((data_usageGB <= 6) && (data_usageGB > 3)) {
       ATT_fam_cost = (ATT_fam_phones * 20) + 60 + (tablet_cost);
       cout << "ATT Family Plans: " << ATT_fam_cost << endl;      
      prices[2] = ATT_fam_cost;
      products[2] = "ATT Family Plans: " ;
}
   
   else if ((data_usageGB <= 10) && (data_usageGB > 6)) {
       ATT_fam_cost = (ATT_fam_phones * 20) + 80 + (tablet_cost);
       cout << "ATT Family Plans: " << ATT_fam_cost << endl;      
      prices[2] = ATT_fam_cost;
      products[2] =  "ATT Family Plans: " ;
}
   
   else if ((data_usageGB <= 16) && (data_usageGB > 10)) {
       ATT_fam_cost = (ATT_fam_phones * 20) + 90 + (tablet_cost);
       cout << "ATT Family Plans: " << ATT_fam_cost << endl;      
      prices[2] = ATT_fam_cost;
      products[2] = "ATT Family Plans: " ;
}
   
   else if ((data_usageGB <= 25) && (data_usageGB > 16)) {
       ATT_fam_cost = (ATT_fam_phones * 20) + 110 + (tablet_cost);
       cout << "ATT Family Plans: " << ATT_fam_cost << endl;      
      prices[2] = ATT_fam_cost;
      products[2] =  "ATT Family Plans: " ;
}
   

   else {
       cout << "Enter a valid amount.. " << endl;
}

//starts the Verizon unlimited plan loop
//cost will be calculated based on how many phones/tablets/etc the user chooses and the cost
//output total cost
//===============================Verizon Unlimited====================================
 if (Ver_unlim_phones == 1) {
      Ver_unlim_cost = 80 + (tablet_amount * 10) + (Ver_unlim_phones * 20);
      cout << "Verizon Unlimited Plan: " << Ver_unlim_cost << endl;
      prices[3] = Ver_unlim_cost;      
      products[3] = "Verizon Unlimited Plan: " ;  
 }

   else if (Ver_unlim_phones >= 2) {
       Ver_unlim_cost = 110 + (tablet_amount * 10) + (Ver_unlim_phones * 20);
       cout << "Verizon Unlimited Plan: " << Ver_unlim_cost << endl;
      prices[3] = Ver_unlim_cost;
      products[3] = "Verizon Unlimited Plan: " ;  
}
   
//   else if (Ver_unlim_phones >= 3) {
 //      Ver_unlim_cost = 110 + (tablet_amount * 10) + (Ver_unlim_phones * 20);
 //     prices[3] = Ver_unlim_cost;
//   }

   else {
       cout << "Enter a valid amount.. " << endl;
}

//starts the Sprint Unlimited Plan loop
//cost will be calculated based on how many phones/tablets/etc the user chooses and the cost
//output total cost
//===============================Sprint Unlimited====================================
 if (Spr_unlim_phones == 1) {
      Spr_unlim_cost = 60;
      cout << "Sprint Unlimited Plan: " << Spr_unlim_cost << endl;
      prices[4] = Spr_unlim_cost;
      products[4] = "Sprint Unlimited Plan: " ;
}
 
   else if (Spr_unlim_phones == 2) {
      Spr_unlim_cost = 100;
      cout << "Sprint Unlimited Plan: " << Spr_unlim_cost << endl;
      prices[4] = Spr_unlim_cost;
      products[4] = "Sprint Unlimited Plan: " ;
   }
   
   else if (Spr_unlim_phones >= 3) {
      Spr_unlim_cost = 100 + (Spr_unlim_phones * 30);
      cout << "Sprint Unlimited Plan: " << Spr_unlim_cost << endl;
      prices[4] = Spr_unlim_cost;
      products[4] = "Sprint Unlimited Plan: " ;
   }  
   
   else {
      cout << "Enter a valid amount.. " << endl;
}

//starts the Sprint 2GB Plan loop
//cost will be calculated based on how many phones/tablets/etc the user chooses and the cost
//output total cost
//===============================Sprint 2GB Plan====================================
 if (Sprint_2gb_phones >= 1) {
      Sprint_2gb_cost = 40 * Sprint_2gb_phones;
      cout << "Spring 2GB Plan:  " << Sprint_2gb_cost << endl;
      prices[5] = Sprint_2gb_cost;
      products[5] = "Spring 2GB Plan:  " ;
}
   else {
       cout << "Enter a valid amount.. " << endl;
}
//========================================================OUTPUT=======================






customer_plan = FindMinValue(prices, CONST);
cout << "$" <<customer_plan << ".";


return 0;
}

/*
How many smart phones would you like? 2

How many dumb phones do you want? 0

How many tablets do you want? 0

How many GB of data would you like for your monthly plan? 5
6gb 

smart phones: 2
dumb phones: 0
data plan: 5 GB
Tablet cost: $0

ATT Unlimited Plus Plan: 145
ATT Unlimited Choice Plan: 115
ATT Family Plans: 100
Verizon Unlimited Plan: 150
Sprint Unlimited Plan: 100
Spring 2GB Plan:  80

Spring 2GB Plan is your best plan. It will be $80.


-----------------------------------------------------------------


How many smart phones would you like? 2

How many dumb phones do you want? 1

How many tablets do you want? 1

How many GB of data would you like for your monthly plan? 15
16gb 

smart phones: 2
dumb phones: 1
data plan: 15 GB
Tablet cost: $10

ATT Unlimited Plus Plan:  175
ATT Unlimited Choice Plan: 145
ATT Family Plans: 160
Verizon Unlimited Plan: 180
Sprint Unlimited Plan: 190
Spring 2GB Plan:  120

Spring 2GB Plan is your best plan. It will be $120.

Process exited with code: 0

-------------------------------------------------------------------

How many smart phones would you like? 0

How many dumb phones do you want? 1

How many tablets do you want? 0

How many GB of data would you like for your monthly plan? 0
Enter a valid number.. 

smart phones: 0
dumb phones: 1
data plan: 0 GB
Tablet cost: $0

ATT Unlimited Plus Plan: 90
ATT Unlimited Choice Plan: 60
ATT Family Plans: 20
Verizon Unlimited Plan: 100
Sprint Unlimited Plan: 60
Spring 2GB Plan:  40

ATT Family Plan is your best plan. It will be $20.

Process exited with code: 0
