#include <iostream>
#include <string>
using namespace std;



int main() {



int smart_phones = 0;
int data_usageGB = 0;
bool phone_type = true;
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



if (phone_type == true) {                                        //
  cout << endl << "How many smart phones would you like? ";      //
  cin >> smart_phones;                                           //
//  cout << endl << "You want " << smart_phones << " smart phones. " << endl << endl;

}

if (phone_type == true) {                                        //
    cout << endl << "How many dumb phones do you want? ";        //
    cin >> dumb_phone;                                           //
//    cout << endl << " you want " << dumb_phone << " dumb phones." << endl << endl;
}

if (phone_type == true) {                                        //
   cout << endl << "How many tablets do you want? ";             //
   cin >> tablet_amount;                                         //
}


cout << endl << "How many GB of data would you like for your monthly plan? ";      //
cin >> data_usageGB;                

if (data_usageGB < 2 && data_usageGB > 0) {                                        //
   cout << "1gb" << endl;                                                          //
   ATT_fam_gb_cost = 30;                                                           //
}

//else if ((data_usageGB <= 2) && (data_usageGB > 1)) {
//   cout << "2gb" << endl;
//}
else if ((data_usageGB <= 3) && (data_usageGB > 1)) {                              //
   cout << "3gb " << endl;                                                         //
   ATT_fam_gb_cost = 40;                                                           //
}
else if ((data_usageGB <= 6) && (data_usageGB > 3)) {                              //
   cout << "6gb " << endl;                                                         //
   ATT_fam_gb_cost = 60;                                                           //
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


cout << endl << "smart phones: " << smart_phones << endl;
cout << "dumb phones: " << dumb_phone << endl;
cout << "data plan: " << data_usageGB << " GB" << endl << endl;

//create alterable variables to calculate the price for each tree

ATT_plus_phones = smart_phones + dumb_phone;
ATT_unlim_phones = smart_phones + dumb_phone;
ATT_fam_phones = smart_phones + dumb_phone;
Ver_unlim_phones = smart_phones + dumb_phone;
Spr_unlim_phones = smart_phones + dumb_phone;
Sprint_2gb_phones = smart_phones + dumb_phone;
tablet_cost = tablet_amount * tablet_cost;
cout << "Tablet cost: " << tablet_cost << endl;
//=============================ATT Unlimited Plus Plan===========================

if (ATT_plus_phones == 1) {
      ATT_plus_cost = (90 ) + (tablet_cost);
      cout << "ATT Unlimited Plus Plan: " << ATT_plus_cost << endl;
    
}

   else if (ATT_plus_phones == 2) {
       ATT_plus_cost = (145)  + (tablet_cost);
       cout << "ATT Unlimited Plus Plan: " << ATT_plus_cost << endl;
}

   else if ((ATT_plus_phones > 2) && (ATT_plus_phones <= 10)) {
       ATT_plus_phones = ATT_plus_phones - 2;
       ATT_plus_cost = 145 + (ATT_plus_phones * 20) + (tablet_cost);
       cout << "ATT Unlimited Plus Plan:  " << ATT_plus_cost << endl;
}

   else {
       cout << "Enter a valid amount.. " << endl;
}

//============================ATT Unlimited Choice Plan=========================================
 if (ATT_unlim_phones == 1) {
      ATT_unlim_cost = 60  + tablet_cost;
      cout << "ATT Unlimited Choice Plan: " << ATT_unlim_cost << endl;
    
}

   else if (ATT_unlim_phones == 2) {
       ATT_unlim_cost = 115 + tablet_cost;
       cout << "ATT Unlimited Choice Plan: " << ATT_unlim_cost << endl;
}

   else if ((ATT_unlim_phones > 2) && (ATT_unlim_phones <= 10)) {
       ATT_unlim_phones = ATT_unlim_phones - 2;
       ATT_unlim_cost = 115 + (ATT_unlim_phones * 20) + tablet_cost;
       cout << "ATT Unlimited Choice Plan: " << ATT_unlim_cost << endl;
}

   else {
       cout << "Enter a valid amount.. " << endl;
}


//===============================ATT Family Plans=========================================
 if (data_usageGB == 0) {
      ATT_fam_cost = (ATT_fam_phones * 20) + (tablet_cost);
      cout << "ATT Family Plans: " << ATT_fam_cost << endl;
 
}
   else if ((data_usageGB < 2) && (data_usageGB > 0)) {
       ATT_fam_cost = (ATT_fam_phones * 20)  + 30 + (tablet_cost);
       cout << "ATT Family Plans: " << ATT_fam_cost << endl;      
}
   else if ((data_usageGB <= 3) && (data_usageGB > 2)) {
       ATT_fam_cost = (ATT_fam_phones * 20) + 40 + (tablet_cost);
       cout << "ATT Family Plans: " << ATT_fam_cost << endl;
}
   else if ((data_usageGB <= 6) && (data_usageGB > 3)) {
       ATT_fam_cost = (ATT_fam_phones * 20) + 60 + (tablet_cost);
       cout << "ATT Family Plans: " << ATT_fam_cost << endl;      
}
   else if ((data_usageGB <= 10) && (data_usageGB > 6)) {
       ATT_fam_cost = (ATT_fam_phones * 20) + 80 + (tablet_cost);
       cout << "ATT Family Plans: " << ATT_fam_cost << endl;      
}
   else if ((data_usageGB <= 16) && (data_usageGB > 10)) {
       ATT_fam_cost = (ATT_fam_phones * 20) + 90 + (tablet_cost);
       cout << "ATT Family Plans: " << ATT_fam_cost << endl;      
}
   else if ((data_usageGB <= 25) && (data_usageGB > 16)) {
       ATT_fam_cost = (ATT_fam_phones * 20) + 110 + (tablet_cost);
       cout << "ATT Family Plans: " << ATT_fam_cost << endl;      
}

   else {
       cout << "Enter a valid amount.. " << endl;
}
//===============================Verizon Unlimited====================================
 if (Ver_unlim_phones == 1) {
      Ver_unlim_cost = 80 + (tablet_amount * 10) + (Ver_unlim_phones * 20);
      cout << "ATT Unlimited Choice Plan: " << Ver_unlim_cost << endl;
    
}

   else if (Ver_unlim_phones == 2) {
       Ver_unlim_cost = 110 + (tablet_amount * 10) + (Ver_unlim_phones * 20);
       cout << "ATT Unlimited Choice Plan: " << Ver_unlim_cost << endl;
}
   else if (Ver_unlim_phones >= 3) {
       Ver_unlim_cost = 110 + (tablet_amount * 10) + (Ver_unlim_phones * 20);
   }

   else {
       cout << "Enter a valid amount.. " << endl;
}
//===============================Sprint Unlimited====================================
 if (Spr_unlim_phones == 1) {
      Spr_unlim_cost = 60;
      cout << "Sprint Unlimited Plan: " << Spr_unlim_cost << endl;
    
}

   else if (Spr_unlim_phones == 2) {
      Spr_unlim_cost = 100;
      cout << "Sprint Unlimited Plan: " << Spr_unlim_cost << endl;
}
   else if (Spr_unlim_phones >= 3) {
      Spr_unlim_cost = 100 + (Spr_unlim_phones * 30);
      cout << "Sprint Unlimited Plan: " << Spr_unlim_cost << endl;
   }   
   else {
      cout << "Enter a valid amount.. " << endl;
}
//===============================Sprint 2GB Plan====================================
 if (Sprint_2gb_phones >= 1) {
      Sprint_2gb_cost = 40 * Sprint_2gb_phones;
      cout << "Spring 2GB Plan:  " << Sprint_2gb_cost << endl;
    
}

   else {
       cout << "Enter a valid amount.. " << endl;
}



cout <<"DONE";
    
return 0;
} 