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
    string menu_items[FOOD] = {"cheeseburger", "fries","shake","tacos","soda", "sandwiches", "curly fries", "bacon cheeseburger", "bacon tacos", "bacon fries"};
    int menu_prices[PRICES] = {5,2,3,3,2,4,3,6,4,3};
    int final_price = 0;
    int users_choice = 0;
    int add_or_no = 0;
    int counter = 0;
    string final_choice_array[FOOD] = {};

    char final_decision = 'y';
   //create a menu that will display all the items and their corresponding prices 
    for (int j=0; j < FOOD; ++j){
           cout << "item " << j + 1 << "| " << menu_items[j] << ": $" << menu_prices[j] << endl;
        
    }
    
    cout << endl << "We are currently low on inventory, and we only have one of each item.\nSorry for the inconvenience!\nWhich item would you like to order?" << endl;

    
    
    
//create a loop that will add the users order until they decide they are done (using final choice)    
    while (final_decision == 'y') {
        cout << endl <<
        "choose items 1-10 to add to your order: ";
        cin >> users_choice;
        
        if (users_choice == 1){ //if the chooser chooses one, then inquire if they would like to add that to their final order
           cout << endl <<"Would you like to add " << menu_items[0] << " to your purchase " << "for $" << menu_prices[0] <<"? "<< endl << "[1 for yes. 0 for no.] "; //ask user if they want to add to cart/display price and item
           cin >> add_or_no; //user confirmation 
           if (add_or_no != 1){ //if the user is does not choose 1 (yes), confirm item is not added
                  cout<< endl <<"Okaley dokaley. Your item was not added. " << endl;
                  cout << "\nDo you want to continue your order?\n'y' for yes or 'n' for no" << endl; //ask if they want to end their order
                  cin >> final_decision; //if 'y' it will loop back, anything else will go to checkout
           }
           else if (menu_prices[0] == 0) { //this will check to see if the menu price has been removed (which happens after inventory is used)
               cout << endl << "We are out. Sorry! " << endl; //if it is, inform user their item is not added to cart
           }
           else if (add_or_no == 1){ //if the user wants the item added to the cart
                 counter += 1; //add to the counter, this will help with figuring out how many items the user has added to their order later on
                 final_price = final_price + menu_prices[0]; //add the menu item's price to user's final order price
                  final_choice_array[0] = menu_items[0]; //add the confirmed item to new arrya (for final order)
                  cout << endl << menu_items[0] << " added!"<< endl << endl; //confirm to user that their item was added
                  menu_prices[0] = menu_prices[0] - menu_prices[0]; //remove the price from the array so user cannot add again. If they do the price will remain the same.
                  cout << "Would you like to order more? 'y' if you do, 'n' if you are finished ordering. " << endl << endl; 
                  cin >> final_decision;// ask user if they want to leap to checkout or continue ordering
           }
        }
        
         if (users_choice == 2){ //if the chooser chooses one, then inquire if they would like to add that to their final order
            cout << endl <<"Would you like to add " << menu_items[1] << " to your purchase " << "for $" << menu_prices[1] <<"? "<< endl << "[1 for yes. 0 for no.] "; //ask user if they want to add to cart/display price and item
            cin >> add_or_no; //user confirmation 
            if (add_or_no != 1){ //if the user is does not choose 1 (yes), confirm item is not added
                 cout<< endl <<"Okaley dokaley. Your item was not added. " << endl;
                 cout << "\nDo you want to continue your order?\n'y' for yes or 'n' for no" << endl; //ask if they want to end their order
                 cin >> final_decision; //if 'y' it will loop back, anything else will go to checkout
            }
            else if (menu_prices[1] == 0) { //this will check to see if the menu price has been removed (which happens after inventory is used)
                 cout << endl << "We are out. Sorry! " << endl; //if it is, inform user their item is not added to cart
            }
            else if (add_or_no == 1){ //if the user wants the item added to the cart
                 counter += 1; //add to the counter, this will help with figuring out how many items the user has added to their order later on
                 final_price = final_price + menu_prices[1]; //add the menu item's price to user's final order price
                 final_choice_array[1] = menu_items[1]; //add the confirmed item to new arrya (for final order)
                 cout << endl << menu_items[1] << " added!"<< endl << endl; //confirm to user that their item was added
                 menu_prices[1] = menu_prices[1] - menu_prices[1]; //remove the price from the array so user cannot add again. If they do the price will remain the same.
                 cout << "Would you like to order more? 'y' if you do, 'n' if you are finished ordering. " << endl << endl; 
                 cin >> final_decision;// ask user if they want to leap to checkout or continue ordering
            }
         }

         if (users_choice == 3){ //if the chooser chooses one, then inquire if they would like to add that to their final order
            cout << endl <<"Would you like to add " << menu_items[2] << " to your purchase " << "for $" << menu_prices[2] <<"? "<< endl << "[1 for yes. 0 for no.] "; //ask user if they want to add to cart/display price and item
            cin >> add_or_no; //user confirmation 
            if (add_or_no != 1){ //if the user is does not choose 1 (yes), confirm item is not added
                 cout<< endl <<"Okaley dokaley. Your item was not added. " << endl;
                 cout << "\nDo you want to continue your order?\n'y' for yes or 'n' for no" << endl; //ask if they want to end their order
                 cin >> final_decision; //if 'y' it will loop back, anything else will go to checkout
            }
            else if (menu_prices[2] == 0) { //this will check to see if the menu price has been removed (which happens after inventory is used)
                 cout << endl << "We are out. Sorry! " << endl; //if it is, inform user their item is not added to cart
            }
            else if (add_or_no == 1){ //if the user wants the item added to the cart
                 counter += 1; //add to the counter, this will help with figuring out how many items the user has added to their order later on
                 final_price = final_price + menu_prices[2]; //add the menu item's price to user's final order price
                 final_choice_array[2] = menu_items[2]; //add the confirmed item to new arrya (for final order)
                 cout << endl << menu_items[2] << " added!"<< endl << endl; //confirm to user that their item was added
                 menu_prices[2] = menu_prices[2] - menu_prices[2]; //remove the price from the array so user cannot add again. If they do the price will remain the same.
                 cout << "Would you like to order more? 'y' if you do, 'n' if you are finished ordering. " << endl << endl; 
                 cin >> final_decision;// ask user if they want to leap to checkout or continue ordering
            }
         }        
         if (users_choice == 4){ //if the chooser chooses one, then inquire if they would like to add that to their final order
            cout << endl <<"Would you like to add " << menu_items[3] << " to your purchase " << "for $" << menu_prices[3] <<"? "<< endl << "[1 for yes. 0 for no.] "; //ask user if they want to add to cart/display price and item
            cin >> add_or_no; //user confirmation 
            if (add_or_no != 1){ //if the user is does not choose 1 (yes), confirm item is not added
                 cout<< endl <<"Okaley dokaley. Your item was not added. " << endl;
                 cout << "\nDo you want to continue your order?\n'y' for yes or 'n' for no" << endl; //ask if they want to end their order
                 cin >> final_decision; //if 'y' it will loop back, anything else will go to checkout
            }
            else if (menu_prices[3] == 0) { //this will check to see if the menu price has been removed (which happens after inventory is used)
                 cout << endl << "We are out. Sorry! " << endl; //if it is, inform user their item is not added to cart
            }
            else if (add_or_no == 1){ //if the user wants the item added to the cart
                 counter += 1; //add to the counter, this will help with figuring out how many items the user has added to their order later on
                 final_price = final_price + menu_prices[3]; //add the menu item's price to user's final order price
                 final_choice_array[3] = menu_items[3]; //add the confirmed item to new arrya (for final order)
                 cout << endl << menu_items[3] << " added!"<< endl << endl; //confirm to user that their item was added
                 menu_prices[3] = menu_prices[3] - menu_prices[3]; //remove the price from the array so user cannot add again. If they do the price will remain the same.
                 cout << "Would you like to order more? 'y' if you do, 'n' if you are finished ordering. " << endl << endl; 
                 cin >> final_decision;// ask user if they want to leap to checkout or continue ordering
            }
         }        
         if (users_choice == 5){ //if the chooser chooses one, then inquire if they would like to add that to their final order
            cout << endl <<"Would you like to add " << menu_items[4] << " to your purchase " << "for $" << menu_prices[4] <<"? "<< endl << "[1 for yes. 0 for no.] "; //ask user if they want to add to cart/display price and item
            cin >> add_or_no; //user confirmation 
            if (add_or_no != 1){ //if the user is does not choose 1 (yes), confirm item is not added
                 cout<< endl <<"Okaley dokaley. Your item was not added. " << endl;
                 cout << "\nDo you want to continue your order?\n'y' for yes or 'n' for no" << endl; //ask if they want to end their order
                 cin >> final_decision; //if 'y' it will loop back, anything else will go to checkout
            }
            else if (menu_prices[4] == 0) { //this will check to see if the menu price has been removed (which happens after inventory is used)
                 cout << endl << "We are out. Sorry! " << endl; //if it is, inform user their item is not added to cart
            }
            else if (add_or_no == 1){ //if the user wants the item added to the cart
                 counter += 1; //add to the counter, this will help with figuring out how many items the user has added to their order later on
                 final_price = final_price + menu_prices[4]; //add the menu item's price to user's final order price
                 final_choice_array[4] = menu_items[4]; //add the confirmed item to new arrya (for final order)
                 cout << endl << menu_items[4] << " added!"<< endl << endl; //confirm to user that their item was added
                 menu_prices[4] = menu_prices[4] - menu_prices[4]; //remove the price from the array so user cannot add again. If they do the price will remain the same.
                 cout << "Would you like to order more? 'y' if you do, 'n' if you are finished ordering. " << endl << endl; 
                 cin >> final_decision;// ask user if they want to leap to checkout or continue ordering
            }
         }        
        
         if (users_choice == 6){ //if the chooser chooses one, then inquire if they would like to add that to their final order
            cout << endl <<"Would you like to add " << menu_items[5] << " to your purchase " << "for $" << menu_prices[5] <<"? "<< endl << "[1 for yes. 0 for no.] "; //ask user if they want to add to cart/display price and item
            cin >> add_or_no; //user confirmation 
            if (add_or_no != 1){ //if the user is does not choose 1 (yes), confirm item is not added
                 cout<< endl <<"Okaley dokaley. Your item was not added. " << endl;
                 cout << "\nDo you want to continue your order?\n'y' for yes or 'n' for no" << endl; //ask if they want to end their order
                 cin >> final_decision; //if 'y' it will loop back, anything else will go to checkout
            }
            else if (menu_prices[5] == 0) { //this will check to see if the menu price has been removed (which happens after inventory is used)
                 cout << endl << "We are out. Sorry! " << endl; //if it is, inform user their item is not added to cart
            }
            else if (add_or_no == 1){ //if the user wants the item added to the cart
                 counter += 1; //add to the counter, this will help with figuring out how many items the user has added to their order later on
                 final_price = final_price + menu_prices[5]; //add the menu item's price to user's final order price
                 final_choice_array[5] = menu_items[5]; //add the confirmed item to new arrya (for final order)
                 cout << endl << menu_items[5] << " added!"<< endl << endl; //confirm to user that their item was added
                 menu_prices[5] = menu_prices[5] - menu_prices[5]; //remove the price from the array so user cannot add again. If they do the price will remain the same.
                 cout << "Would you like to order more? 'y' if you do, 'n' if you are finished ordering. " << endl << endl; 
                 cin >> final_decision;// ask user if they want to leap to checkout or continue ordering
            }
         }        
        

         if (users_choice == 7){ //if the chooser chooses one, then inquire if they would like to add that to their final order
            cout << endl <<"Would you like to add " << menu_items[6] << " to your purchase " << "for $" << menu_prices[6] <<"? "<< endl << "[1 for yes. 0 for no.] "; //ask user if they want to add to cart/display price and item
            cin >> add_or_no; //user confirmation 
            if (add_or_no != 1){ //if the user is does not choose 1 (yes), confirm item is not added
                 cout<< endl <<"Okaley dokaley. Your item was not added. " << endl;
                 cout << "\nDo you want to continue your order?\n'y' for yes or 'n' for no" << endl; //ask if they want to end their order
                 cin >> final_decision; //if 'y' it will loop back, anything else will go to checkout
            }
            else if (menu_prices[6] == 0) { //this will check to see if the menu price has been removed (which happens after inventory is used)
                 cout << endl << "We are out. Sorry! " << endl; //if it is, inform user their item is not added to cart
            }
            else if (add_or_no == 1){ //if the user wants the item added to the cart
                 counter += 1; //add to the counter, this will help with figuring out how many items the user has added to their order later on
                 final_price = final_price + menu_prices[6]; //add the menu item's price to user's final order price
                 final_choice_array[6] = menu_items[6]; //add the confirmed item to new arrya (for final order)
                 cout << endl << menu_items[6] << " added!"<< endl << endl; //confirm to user that their item was added
                 menu_prices[6] = menu_prices[6] - menu_prices[6]; //remove the price from the array so user cannot add again. If they do the price will remain the same.
                 cout << "Would you like to order more? 'y' if you do, 'n' if you are finished ordering. " << endl << endl; 
                 cin >> final_decision;// ask user if they want to leap to checkout or continue ordering
            }
         }    
         
         if (users_choice == 8){ //if the chooser chooses one, then inquire if they would like to add that to their final order
            cout << endl <<"Would you like to add " << menu_items[7] << " to your purchase " << "for $" << menu_prices[7] <<"? "<< endl << "[1 for yes. 0 for no.] "; //ask user if they want to add to cart/display price and item
            cin >> add_or_no; //user confirmation 
            if (add_or_no != 1){ //if the user is does not choose 1 (yes), confirm item is not added
                 cout<< endl <<"Okaley dokaley. Your item was not added. " << endl;
                 cout << "\nDo you want to continue your order?\n'y' for yes or 'n' for no" << endl; //ask if they want to end their order
                 cin >> final_decision; //if 'y' it will loop back, anything else will go to checkout
            }
            else if (menu_prices[7] == 0) { //this will check to see if the menu price has been removed (which happens after inventory is used)
                 cout << endl << "We are out. Sorry! " << endl; //if it is, inform user their item is not added to cart
            }
            else if (add_or_no == 1){ //if the user wants the item added to the cart
                 counter += 1; //add to the counter, this will help with figuring out how many items the user has added to their order later on
                 final_price = final_price + menu_prices[7]; //add the menu item's price to user's final order price
                 final_choice_array[7] = menu_items[7]; //add the confirmed item to new arrya (for final order)
                 cout << endl << menu_items[7] << " added!"<< endl << endl; //confirm to user that their item was added
                 menu_prices[7] = menu_prices[7] - menu_prices[7]; //remove the price from the array so user cannot add again. If they do the price will remain the same.
                 cout << "Would you like to order more? 'y' if you do, 'n' if you are finished ordering. " << endl << endl; 
                 cin >> final_decision;// ask user if they want to leap to checkout or continue ordering
            }
         }
         if (users_choice == 9){ //if the chooser chooses one, then inquire if they would like to add that to their final order
            cout << endl <<"Would you like to add " << menu_items[8] << " to your purchase " << "for $" << menu_prices[8] <<"? "<< endl << "[1 for yes. 0 for no.] "; //ask user if they want to add to cart/display price and item
            cin >> add_or_no; //user confirmation 
            if (add_or_no != 1){ //if the user is does not choose 1 (yes), confirm item is not added
                 cout<< endl <<"Okaley dokaley. Your item was not added. " << endl;
                 cout << "\nDo you want to continue your order?\n'y' for yes or 'n' for no" << endl; //ask if they want to end their order
                 cin >> final_decision; //if 'y' it will loop back, anything else will go to checkout
            }
            else if (menu_prices[8] == 0) { //this will check to see if the menu price has been removed (which happens after inventory is used)
                 cout << endl << "We are out. Sorry! " << endl; //if it is, inform user their item is not added to cart
            }
            else if (add_or_no == 1){ //if the user wants the item added to the cart
                 counter += 1; //add to the counter, this will help with figuring out how many items the user has added to their order later on
                 final_price = final_price + menu_prices[8]; //add the menu item's price to user's final order price
                 final_choice_array[8] = menu_items[8]; //add the confirmed item to new arrya (for final order)
                 cout << endl << menu_items[8] << " added!"<< endl << endl; //confirm to user that their item was added
                 menu_prices[8] = menu_prices[8] - menu_prices[8]; //remove the price from the array so user cannot add again. If they do the price will remain the same.
                 cout << "Would you like to order more? 'y' if you do, 'n' if you are finished ordering. " << endl << endl; 
                 cin >> final_decision;// ask user if they want to leap to checkout or continue ordering
            }
         }
         
          if (users_choice == 10){ //if the chooser chooses one, then inquire if they would like to add that to their final order
            cout << endl <<"Would you like to add " << menu_items[9] << " to your purchase " << "for $" << menu_prices[9] <<"? "<< endl << "[1 for yes. 0 for no.] "; //ask user if they want to add to cart/display price and item
            cin >> add_or_no; //user confirmation 
            if (add_or_no != 1){ //if the user is does not choose 1 (yes), confirm item is not added
                 cout<< endl <<"Okaley dokaley. Your item was not added. " << endl;
                 cout << "\nDo you want to continue your order?\n'y' for yes or 'n' for no" << endl; //ask if they want to end their order
                 cin >> final_decision; //if 'y' it will loop back, anything else will go to checkout
            }
            else if (menu_prices[9] == 0) { //this will check to see if the menu price has been removed (which happens after inventory is used)
                 cout << endl << "We are out. Sorry! " << endl; //if it is, inform user their item is not added to cart
            }
            else if (add_or_no == 1){ //if the user wants the item added to the cart
                 counter += 1; //add to the counter, this will help with figuring out how many items the user has added to their order later on
                 final_price = final_price + menu_prices[9]; //add the menu item's price to user's final order price
                 final_choice_array[9] = menu_items[9]; //add the confirmed item to new arrya (for final order)
                 cout << endl << menu_items[9] << " added!"<< endl << endl; //confirm to user that their item was added
                 menu_prices[9] = menu_prices[9] - menu_prices[9]; //remove the price from the array so user cannot add again. If they do the price will remain the same.
                 cout << "Would you like to order more? 'y' if you do, 'n' if you are finished ordering. " << endl << endl; 
                 cin >> final_decision;// ask user if they want to leap to checkout or continue ordering
            }
         }        
         
         
}   
    
    cout << endl << endl <<
    "========================================" << endl<< 
    "The items that you've ordered are: " << endl <<
    "========================================" << endl << endl;
    
    for (int i=0; i < counter; ++i){
         cout << "-" << final_choice_array[i] << endl;}
       
       
    cout << endl << endl << "your total price is: $" << final_price;  
    //create a display for customer to choose which item
    //should subtract inventory and add prices to the total
    
    //output statement of what they have, and how much it will cost
    
    //dont let inventory to go below 0
    
    
 return 0;   
}