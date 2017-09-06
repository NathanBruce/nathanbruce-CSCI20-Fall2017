#include <iostream>
using namespace std;

int main() {

long int globalPopulation = 0;
int yearsInFuture = 0;
int secondEveryBirth = 0;
int secondEveryDeath = 0;
int secondEveryMigrant = 0;
int netGainOfPerson = 0;
int totalnetGain = 0;

globalPopulation = 325779025;
secondEveryBirth = 8;
secondEveryDeath = 12;
secondEveryMigrant = 33;


cout << "Please enter how many years in the future you'd like to predict: ";
cin >> yearsInFuture;


totalnetGain = secondEveryBirth - secondEveryDeath + secondEveryMigrant;

totalnetGain = (totalnetGain * 60 * 24 * 365) * yearsInFuture;

globalPopulation = globalPopulation + totalnetGain;

cout << "The predicted estimate is: " << globalPopulation;


return 0;
}