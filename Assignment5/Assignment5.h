#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


class Monster {
    public:
      void Print();
      void Encounter();
      int GetAttack();
      int GetHealth();
      int PlayerDamage(int damage_taken);
      int Loot();
       Monster() {
          monsterattack_ = 0;
          monsterhealth_ = 0;
       }
       
       Monster(int monsterattack, int monsterhealth, string monstername){
           monsterattack_ = monsterattack;
           monsterhealth_ = monsterhealth;
           monstername_ = monstername;
       }
       
    private:
      int monsterhealth_;
      int monsterattack_;
      string monstername_;
};

int Monster::Loot(){
    srand((unsigned)time(0));
    int loot_drop = (rand()%10)+1;
    cout << endl <<"\nYou loot the body...";
       if (loot_drop >= 7){
          cout<< "It dropped a health potion!\n";
          return 1;
       }
       else if (loot_drop <= 6){
           cout << "It had nothing..\n";
           return 0;
       }

}

int Monster::GetAttack(){
    return monsterattack_;
}

int Monster::GetHealth(){
    return monsterhealth_;
}

int Monster::PlayerDamage(int players_attack){
    monsterhealth_ -= players_attack;
}

void Monster::Encounter(){
    cout << "A wild " << monstername_ << " appears!" << endl;
    cout << "It has a fearsome " << monsterattack_ << " attack ";
    cout << "and " << monsterhealth_ << " health" << endl;
}

void Monster::Print(){
    cout << monstername_ << " has " << monsterhealth_ << " health left" << endl;
}


class Player{
    public:
       Player(){
           playerhealth_ = 0;
           playerattack_ = 10;
       }
       
       void Print();
       void Start();
       int GetAttack();
       int DealDamage();
       int HPLoss(int damage);
       int YourTurn(int player_choice);
       int GetHealth();
       int PickupLoot(int Loot);
       int SetHealth(int health);
       
       int UserChoice(int choice);
       
       Player(int playerattack,int playerhealth, string playername){
           playerattack_ = playerattack;
           playerhealth_ = playerhealth;
           playername_ = playername;
       }
       
    private:
       int playerhealth_;
       int playerattack_;
       int health_potion_ = 2;
       string playername_;
       int win_lose_ = 0;
       
};

int Player::UserChoice(int choice){
do {
    cout << endl << "Do you want to \n1) Attack \n2) Heal\n3) Go for crit (3x damage or miss)\n" << endl;
    cin >> choice;
          if (choice == 1){
            return 1;
        }   
        else if (choice ==2 ){
            return 2;
        }
    
        else if (choice ==3){
            return 3;
} 
    
} while ((choice != 0) && (choice != 1) && (choice != 2));
}



void Player::Start(){
    cout <<  "Your name is " << playername_;
    cout << ". You have " << playerhealth_<< " hp left ";
    cout << endl << playerattack_ << " is your attack power" << endl;
}

void Player::Print(){
    cout << "------------------------------------------" << endl;
    cout << "You have " << playerhealth_<< " hp left ";
    cout << "\n------------------------------------------" << endl;    
}

int Player::GetHealth() {
    return playerhealth_;
}

int Player::SetHealth(int health){
    playerhealth_ = health;
    return playerhealth_;
}

int Player::HPLoss(int damage){
    playerhealth_ = playerhealth_ - damage;
    return playerhealth_;
}


int Player::YourTurn(int choice){
    if (choice == 1){
       return playerattack_;
    }
    else if (choice == 2) {
        if (health_potion_ == 0){
            cout << "You have no more health potions.." << endl;
            cout << "Monster hits you in the face while you rummage through your bag\n" << endl;
            return 0;
        }
        
        else{
            playerhealth_ += 55;
            health_potion_ -= 1;
            if (playerhealth_ > 100){
                playerhealth_ = 100;
            }
            return 0;
    }}
    
    else if (choice == 3){
        
        srand((unsigned)time(0));
        int crit_miss = (rand()%10)+1;
      //add random num gen for miss
        if (crit_miss >= 6){
           cout << "\nCritical attack hits for " << playerattack_ * 3 << " damage! \n\n";
        return playerattack_ * 3;
        }
        else if (crit_miss <= 5){
            cout << "\nAttack misses! \n" << endl;
            return 0;
        }
    }


}

int Player::PickupLoot(int loot){
    if (loot == 1){
        health_potion_ += 1;
        cout << "You picked up the health potion and added it to your belt!\n";
        cout << "You now have " << health_potion_ << " health potions.\n";
    }
}

/*Player::ReTurn(int number){
    if (number == 3){
    YourTurn();
}*/