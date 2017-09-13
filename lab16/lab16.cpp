#include <iostream>
using namespace std;

struct stock_Portfolio {                      // create struct to contain stock data
    string stock_Name;                       //create variables changeable by user input 
    string user_Sector;
    float current_Share_Price;
    int shares_Owned;
};   


int main() {
double stock_Value1 = 0;                      //declare stock value (will be output)
double stock_Value2 = 0;
double stock_Value3 = 0;
double stock_Value4 = 0;
double stock_Value5 = 0;

stock_Portfolio Company_1;
Company_1.stock_Name;
Company_1.user_Sector;
Company_1.current_Share_Price;
Company_1.shares_Owned;

stock_Portfolio Company_2;
Company_2.stock_Name;
Company_2.user_Sector;
Company_2.current_Share_Price;
Company_2.shares_Owned;

stock_Portfolio Company_3;
Company_3.stock_Name;
Company_3.user_Sector;
Company_3.current_Share_Price;
Company_3.shares_Owned;

stock_Portfolio Company_4;
Company_4.stock_Name;
Company_4.user_Sector;
Company_4.current_Share_Price;
Company_4.shares_Owned;

stock_Portfolio Company_5;
Company_5.stock_Name;
Company_5.user_Sector;
Company_5.current_Share_Price;
Company_5.shares_Owned;




cout << "Enter stock name: ";                 //ask the user to enter a stock name
cin >>Company_1.stock_Name;                        //alter the structs variable with the users answer


cout << "Enter your sector: ";                // ""  ""  ""   ""    ""    ""    ""
cin >> Company_1.user_Sector;                    // ""  ""  ""   ""    ""    ""    ""


cout << "Enter current share price: ";        // ""  ""  ""   ""    ""    ""    ""
cin >> Company_1.current_Share_Price;       // ""  ""  ""   ""    ""    ""    ""


cout << "Enter how many shares that you own: "; // ""  ""  ""   ""    ""    ""    "" 
cin >> Company_1.shares_Owned;               // ""  ""  ""   ""    ""    ""    ""
cout << endl;

stock_Value1 = Company_1.shares_Owned * Company_1.current_Share_Price; //find the stock value by multiplaying the amount of users shares, by how much they are worth





//========================================================================================







cout << "Enter stock name: ";                 //ask the user to enter a stock name
cin >>Company_2.stock_Name;                        //alter the structs variable with the users answer


cout << "Enter your sector: ";                // ""  ""  ""   ""    ""    ""    ""
cin >> Company_2.user_Sector;                    // ""  ""  ""   ""    ""    ""    ""


cout << "Enter current share price: ";        // ""  ""  ""   ""    ""    ""    ""
cin >> Company_2.current_Share_Price;       // ""  ""  ""   ""    ""    ""    ""


cout << "Enter how many shares that you own: "; // ""  ""  ""   ""    ""    ""    "" 
cin >> Company_2.shares_Owned;               // ""  ""  ""   ""    ""    ""    ""
cout << endl;

stock_Value2 = Company_2.shares_Owned * Company_2.current_Share_Price; //find the stock value by multiplaying the amount of users shares, by how much they are worth



//==========================================================================


cout << "Enter stock name: ";                 //ask the user to enter a stock name
cin >>Company_3.stock_Name;                        //alter the structs variable with the users answer


cout << "Enter your sector: ";                // ""  ""  ""   ""    ""    ""    ""
cin >> Company_3.user_Sector;                    // ""  ""  ""   ""    ""    ""    ""


cout << "Enter current share price: ";        // ""  ""  ""   ""    ""    ""    ""
cin >> Company_3.current_Share_Price;       // ""  ""  ""   ""    ""    ""    ""


cout << "Enter how many shares that you own: "; // ""  ""  ""   ""    ""    ""    "" 
cin >> Company_3.shares_Owned;               // ""  ""  ""   ""    ""    ""    ""
cout << endl;

stock_Value3 = Company_3.shares_Owned * Company_3.current_Share_Price; //find the stock value by multiplaying the amount of users shares, by how much they are worth






//==========================================================================


cout << "Enter stock name: ";                 //ask the user to enter a stock name
cin >>Company_4.stock_Name;                        //alter the structs variable with the users answer


cout << "Enter your sector: ";                // ""  ""  ""   ""    ""    ""    ""
cin >> Company_4.user_Sector;                    // ""  ""  ""   ""    ""    ""    ""


cout << "Enter current share price: ";        // ""  ""  ""   ""    ""    ""    ""
cin >> Company_4.current_Share_Price;       // ""  ""  ""   ""    ""    ""    ""


cout << "Enter how many shares that you own: "; // ""  ""  ""   ""    ""    ""    "" 
cin >> Company_4.shares_Owned;               // ""  ""  ""   ""    ""    ""    ""
cout << endl;

stock_Value4 = Company_4.shares_Owned * Company_4.current_Share_Price; //find the stock value by multiplaying the amount of users shares, by how much they are worth




//=========================================================================================================================================================================================


cout << "Enter stock name: ";                 //ask the user to enter a stock name
cin >>Company_5.stock_Name;                        //alter the structs variable with the users answer


cout << "Enter your sector: ";                // ""  ""  ""   ""    ""    ""    ""
cin >> Company_5.user_Sector;                    // ""  ""  ""   ""    ""    ""    ""


cout << "Enter current share price: ";        // ""  ""  ""   ""    ""    ""    ""
cin >> Company_5.current_Share_Price;       // ""  ""  ""   ""    ""    ""    ""


cout << "Enter how many shares that you own: "; // ""  ""  ""   ""    ""    ""    "" 
cin >> Company_5.shares_Owned;               // ""  ""  ""   ""    ""    ""    ""
cout << endl;

stock_Value5 = Company_5.shares_Owned * Company_5.current_Share_Price; //find the stock value by multiplaying the amount of users shares, by how much they are worth




cout << "The name of your stock is: " << Company_1.stock_Name << endl         //output the user data so they can see
     << "Sector: " << Company_1.user_Sector << endl       // ""  ""  ""   ""    ""    ""    ""
     << "The current share price of this stock is: " << Company_1.current_Share_Price << endl // ""  ""  ""   ""    ""    ""    ""
     << "You own: " <<Company_1.shares_Owned <<" number of shares." << endl << endl;      // ""  ""  ""   ""    ""    ""    ""
     
cout << "your current share price value is: " << stock_Value1 << endl << endl;  //show the user the total value of the stock they own  
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

cout << "The name of your stock is: " << Company_2.stock_Name << endl          //output the user data so they can see
     << "Sector: " << Company_2.user_Sector << endl       // ""  ""  ""   ""    ""    ""    ""
     << "The current share price of this stock is: " << Company_2.current_Share_Price << endl // ""  ""  ""   ""    ""    ""    ""
     << "You own: " <<Company_2.shares_Owned <<" number of shares." << endl;      // ""  ""  ""   ""    ""    ""    ""
     
cout << "your current share price value is: " << stock_Value2 << endl << endl;  //show the user the total value of the stock they own   


 //-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 
cout << "The name of your stock is: " << Company_3.stock_Name << endl          //output the user data so they can see
     << "Sector: " << Company_3.user_Sector << endl       // ""  ""  ""   ""    ""    ""    ""
     << "The current share price of this stock is: " << Company_3.current_Share_Price << endl // ""  ""  ""   ""    ""    ""    ""
     << "You own: " <<Company_3.shares_Owned <<" number of shares." << endl;      // ""  ""  ""   ""    ""    ""    ""
     
cout << "your current share price value is: " << stock_Value3 << endl << endl;  //show the user the total value of the stock they own   

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

cout << "The name of your stock is: " << Company_4.stock_Name << endl          //output the user data so they can see
     << "Sector: " << Company_4.user_Sector << endl       // ""  ""  ""   ""    ""    ""    ""
     << "The current share price of this stock is: " << Company_4.current_Share_Price << endl // ""  ""  ""   ""    ""    ""    ""
     << "You own: " <<Company_4.shares_Owned <<" number of shares." << endl;      // ""  ""  ""   ""    ""    ""    ""
     
cout << "your current share price value is: " << stock_Value4 << endl << endl;  //show the user the total value of the stock they own   

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

cout << "The name of your stock is: " << Company_5.stock_Name << endl          //output the user data so they can see
     << "Sector: " << Company_5.user_Sector << endl       // ""  ""  ""   ""    ""    ""    ""
     << "The current share price of this stock is: " << Company_5.current_Share_Price << endl // ""  ""  ""   ""    ""    ""    ""
     << "You own: " <<Company_5.shares_Owned <<" number of shares." << endl;      // ""  ""  ""   ""    ""    ""    ""
     
cout << "your current share price value is: " << stock_Value5 << endl << endl;  //show the user the total value of the stock they own   

return 0;
}