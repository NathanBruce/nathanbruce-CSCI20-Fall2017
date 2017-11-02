/*Nathan Bruce
debug the program until it is successful
changed num initialization to 0 to autimatically hit loop
rearranged the input to collect number instead of sum
cleaned up spacing
changed sum to become sum + num
created a new promp, and changed the initial number input to determine whether the loop will start or not
added an if loop to break the loop when the user enters a negative number (to ensure the negative number does not end up with the sum)
*/

//Write a program that reads in positive integers from the user, each separated by a space, 
//and the whole terminated by a negative number (e.g. 3 22 10 -2),and outputs the sum of the numbers entered (notincluding the terminated negative number!).***************************************************/


#include <iostream>
using namespace std;
int main(){
        // initialization
        int num = 0; 
        int sum=0;
        cout << "Enter numbers separated by spaces" << " and terminated with a negative number." << endl;
         
         while (num >= 0)
  {
               // add in to the sum
               cin >> num;
               //if user enters a negative number the loop will break
               if (num < 0){
                   break;
               }

                // read in next number (getting ready for next loop test)
               sum = sum + num;
        }
                cout << "Sum was " << sum << endl;
                return 0;
}



