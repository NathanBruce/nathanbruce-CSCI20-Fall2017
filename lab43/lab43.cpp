#include <iostream>
#include <string>
using namespace std;

/*
This program mimics an online shopping cart.
You are the proprietor of an online shop and have to keep track of inventory, price and the user’s shopping cart.  Create a menu of at least 10 items for the user to choose from.
Identify your starting inventory and price.  As the user purchases an item, you should remove that item from inventory (subtract 1) and add the price to a total.
When the user is done adding items to their cart, you should output a statement of what they have ordered and the total cost of their purchases.
Do not allow you inventory to go below 0.
*/

/*void StrSpaceToHyphen(char modString[]) {
   int i = 0;  // Loop index
   
   for (i = 0; i < strlen(modString); ++i) {
      if (modString[i] == ' ') {
         modString[i] = '-';
      }
   }
   
   return;
}*/

class ShoppingCart {
    public:
         ShoppingCart ShoppingCart(){
             
         }
         
         
         
         //function to remove item from stock
         //function to display all items
         
         
         
    
         //function to print final price and order
         
    private:
        //inventory array
        //price array
        //object name




};

int main(){
    
    const int FOOD = 10;
    const int PRICES = 10;
    string menu_items[FOOD] = {"cheeseburger", "fries","shake","tacos","soda", "sandwiches", "curly fries", "bacon cheeseburger", "bacon tacos", "bacon fries"};
    int menu_prices[PRICES] = {5,2,3,3,2,4,3,6,4,3};
    string item = "cheeseburger";
    int final_price = 0;
    int users_choice = 0;
    int final_choice = 0;
    int choice_one = 0;
    int choice_two = 0;
    int final_choice_array[10] = {};

    char final_decision = 'y';
   //create a menu that will display all the items and their corresponding prices 
    for (int j=0; j < FOOD; ++j){
           cout << j + 1 << "rst item: " << menu_items[j] << ": $" << menu_prices[j] << endl;
        
    }
    
    cout << endl << "which items would you like to order? We are currently low on inventory, and so only have one of each. Sorry for the inconvenience." << endl;

    
    
    
//create a loop that will add the users order until they decide they are done (using final choice)    
    while (final_decision == 'y') {
        cout << endl <<
        "choose items 1-10 to add to your order." << endl;
        cin >> users_choice;
        
        if (users_choice == 1){
           cout << "Would you like to add " << menu_items[0] << " to your purchase " << "for $" << menu_prices[0] << "? 1 for yes. 0 for no." << endl;
           cin >> choice_one;
           final_price = final_price + menu_prices[0];
           final_choice_array[0] = final_choice_array[0];
           cout << endl << menu_items[0] << " added! That is the last of our stock unforunately. Even if you order more, none will be added to the cart." << endl;
           menu_prices[0] = menu_prices[0] - menu_prices[0];
           cout << "Would you like to order more? 'Y' if you do, 'N' if you are finished ordering. " << endl;
           cin >> final_decision;
        }
        
        if (users_choice == 2){
           cout << "Would you like to add " << menu_items[1] << " to your purchase " << "for $" << menu_prices[1] << "? 1 for yes. 2 for no." << endl;
           cin >> choice_one;
           final_price = final_price + menu_prices[1];
           cout << endl <<  menu_items[1] << " added! That is the last of our stock unforunately. Even if you order more, none will be added to the cart." << endl;
           menu_prices[1] = menu_prices[1] - menu_prices[1];
           cout << "Would you like to order more? 'Y' if you do, 'N' if you are finished ordering. " << endl;
           cin >> final_decision;
        }
        
    else if (final_choice == 1) {
       cout << "your total is: $" << final_price;  
    }}
    
    
    
    
    
       cout << "you've ordered: " << final_choice_array << endl;    
           cout << "your total is: $" << final_price;  
    //create a display for customer to choose which item
    //should subtract inventory and add prices to the total
    
    //output statement of what they have, and how much it will cost
    
    //dont let inventory to go below 0
    
    
 return 0;   
}