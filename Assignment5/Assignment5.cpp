
#include "Assignment5.h" //include the the header file
#include <fstream> //include file stream


/*
Nathan Bruce
12/12/2017

    This program creates a text based adventure for the user. 
    User will go through for rooms and must kill the monsters inside to reach the end of the maze
    The user has three combat options to choose from:
    
     1) Attack (with default attack power)
     2) Heal (Consume a health potion)
     3) Go for Crit (3x damage or miss)
  
  There is a randomized chance that the monster will drop a health potion after each kill.
  The user can only choose a numerical value between 1 and 3, or else the program would insta-kill the creature
  Most functions are implemented in a class stored on a seperate file.

*/


int main(){
    //player and creatures attack
    int attack = 0;
    int creature_attack = 0;
    
    //create an array
    string graveyard_list[5];
    
    //constructors used to create the monsters
    Monster cockroach(4,25,"Cockroach"); 
    Monster wolf(10, 50, "Wolf");
    Monster demon(15, 75, "Demon");
    Monster minotaur(6, 140, "Minotaur");
    
    //determines what user will do on turn
    //and temp to ensure they choose only between 1 and 3
    int turn_choice = 0; 
    int choice = 0;
    
    //user's name
    string user_name;
    int monster_amount[5];
    
    //collect adventurer's name
    cout << "What do you want your name to be? "; 
    getline(cin, user_name);
    cout << endl << endl;
    
    Player One(10, 100, user_name); //create the player, 10 attack and 100 health
    
    One.Start(); //introduce player character and stats
    cout << endl << endl;
    
    
//=============================1st encounter============================================================
  

    
    //starts the encounter
    cockroach.Encounter();
    
    //set the health the default health for monster and player
    int monster_health = cockroach.GetHealth();
    int player_health = One.GetHealth();
    
    
    //instance will end when either player or monster dies
    while ((monster_health > 0) && (player_health > 0)){
        

    //collect user's choice
    //will only accept input between the three choice (attack, heal, crit)
    choice = One.UserChoice(turn_choice);
    if ((choice > 0) && (choice < 4)){
    
    
    //assign player and creature attack to a simpler variable
    attack = One.YourTurn(choice);
    creature_attack = cockroach.GetAttack();
    
    //attack the cockroach/removes cockroach health points
    cockroach.PlayerDamage(attack);
    //output monsters health
    cockroach.Print();
    
    //time for the cockroach to do some damage!
    player_health = One.HPLoss(creature_attack);
    
    //output players health
    One.Print();
    
    //Sets the monster health it's health in the private class
    monster_health = cockroach.GetHealth();
    
   //message if player dies
   if (player_health <= 0){
       cout << "\nYou have killed by a cockroach. Just let that sink in for a bit..\n";
   }         
    
    //check to see if the monster dropped loot
    //if yes, add the loot (health potion) to players inventory
    else if (monster_health <= 0){
       graveyard_list[0] = cockroach.GetName();
       int inventory = cockroach.Loot();
       One.PickupLoot(inventory); //if yes, show findings and overall health potion
       monster_amount[0] = 1; //used for next encounter
       player_health += creature_attack; //adds the monsters attack back (player was lucky and got first strike)
    }

    }
}


//===================================2nd encounter========================================================


   cout << "\n\n";

  //ensures encounter will only start if last monster was defeated
  if (monster_amount[0] == 1){   

    //starts the encounter
    wolf.Encounter();
    

    //set the health of monster to their default
    //set player health to however much health the player has left
    monster_health = wolf.GetHealth();
    player_health = One.GetHealth();
    
    //instance will end when either player or monster dies
    while ((monster_health > 0) && (player_health > 0)){
        
        
    
    //ask the user what they want to do
     choice = One.UserChoice(turn_choice);
    if ((choice > 0) && (choice < 4)){
    
    
    //assign players attack to a simpler variable
    attack = One.YourTurn(choice);
    creature_attack = wolf.GetAttack();
    
    //attack the wolf/removes wolf health points
    wolf.PlayerDamage(attack);
    //output monsters health
    wolf.Print();
    
    //time for the wolf to do some damage!
    player_health = One.HPLoss(creature_attack);
    
    //output players health
    One.Print();
    
    //Sets the monster health it's health in the private class
    monster_health = wolf.GetHealth();
    
    //if the monster does not have health, player will not receive damage for that turn
    //if not, monster's attack will be subtracted from their overall health
 
   if ((monster_health != 0) && (monster_health <= 0)){
    player_health = One.GetHealth();
    }
    

   if (player_health <= 0){
       cout << "\nYou have died a painful death at the paws of the Wolf.\n";
   }    
        
    //check to see if the monster dropped loot
    //if yes, add the loot (health potion) to players inventory
    else if (monster_health <= 0){
       graveyard_list[1] = wolf.GetName();
       int inventory = wolf.Loot();
       One.PickupLoot(inventory);
       monster_amount[0] = 2;
       player_health += creature_attack;
    }

    }
}
}
//======================================3rd encounter=========================================================    
   
   cout << "\n\n";
   
    if (monster_amount[0] == 2){   
    //starts the encounter
    minotaur.Encounter();
    
        
    //get the health numbers for player and enemy
    monster_health = minotaur.GetHealth();
    player_health = One.GetHealth();
    
    //instance will end when either player or monster dies
    while ((monster_health > 0) && (player_health > 0)){


        
    
    //ask the user what they want to do
    choice = One.UserChoice(turn_choice);
    if ((choice > 0) && (choice < 4)){
    
    //assign players attack to a simpler variable
    attack = One.YourTurn(choice);
    creature_attack = minotaur.GetAttack();
    
    //attack the cockroach/removes cockroach health points
    minotaur.PlayerDamage(attack);
    //output monsters health
    minotaur.Print();
    
    //time for the cockroach to do some damage!
    player_health = One.HPLoss(creature_attack);
    
    //output players health
    One.Print();
    
    //Sets the monster health it's health in the private class
    monster_health = minotaur.GetHealth();
    
    
    if ((monster_health != 0) && (monster_health <= 0)){
    player_health = One.GetHealth();
    }
    

   if (player_health <= 0){
       cout << "\nYou have been mauled to death by the minotaur.\n";
   }          
    //check to see if the monster dropped loot
    //if yes, add the loot (health potion) to players inventory
    else if (monster_health <= 0){
       graveyard_list[2] = minotaur.GetName();
       int inventory = minotaur.Loot();
       One.PickupLoot(inventory);
       monster_amount[0] = 3;
       player_health += creature_attack;
    }

  
    }
}}

//======================================4th encounter=========================================================    

   cout << "\n\n";
   
    if (monster_amount[0] == 3){   
    //starts the encounter
    demon.Encounter();
    
    //get the health numbers for player and enemy
    monster_health = demon.GetHealth();
    player_health = One.GetHealth();
    
    //instance will end when either player or monster dies
    while ((monster_health > 0) && (player_health > 0)){


        
    
    //ask the user what they want to do
    choice = One.UserChoice(turn_choice);
    if ((choice > 0) && (choice < 4)){
    
    //assign players attack to a simpler variable
    attack = One.YourTurn(choice);
    creature_attack = demon.GetAttack();
    //attack the cockroach/removes cockroach health points
    demon.PlayerDamage(attack);
    //output monsters health
    demon.Print();
    
    //time for the cockroach to do some damage!
    player_health = One.HPLoss(creature_attack);
    
    //output players health
    One.Print();
    
    //Sets the monster health it's health in the private class
    monster_health = demon.GetHealth();


    if (monster_health <= 0){
       player_health += creature_attack;
       graveyard_list[3] = demon.GetName();
    }    


    if ((monster_health != 0) && (monster_health <= 0)){
    player_health = One.GetHealth();
    }
    

    if (player_health <= 0){
       cout << "\nYour soul has been taken by the demon, and you are cursed to eternal servitude. Bummer!\n";
   }    
    
    
    //output will message
    else if (monster_health <= 0){
        cout << "Congratulations! You've made your way out of the maze and slayed " << monster_amount[0] + 1
             << " monsters."
             << " Unfortunately, you died soon after from dysentery... :(";
    }

            
        } 

    }
 
}

//create and open up the file for output
ofstream graveyard;
graveyard.open("Graveyard.txt");


cout << endl << endl << endl;
graveyard << user_name << endl;

for (int i=0; i < 4; ++i){
    graveyard << graveyard_list[i] << endl;
}

graveyard.close();

    return 0;
}