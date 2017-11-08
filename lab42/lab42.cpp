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

int main(){
    
    const int FOOD = 10;
    const int PRICES = 10;
    string menu_items[FOOD] = {"cheeseburger", "fries","shake","tacos","soda"};
    int menu_prices[PRICES] = {1,2,3,4,5,6};
    string item = "cheeseburger";
    
    
    for (int j=0; j < FOOD; ++j){
        for (int i=0; i < PRICES; ++i){
           cout << menu_items[j] << " is " << menu_prices[i] << " amount of money. " << endl;
        
    }}
    
    
    
 return 0;   
}