/*
Nathan Bruce
8/24/17
I am building this code to
Citations/references: (link)
*/

//preprocessor directives (libraries)
//# include <iostream>
//using namespace std;
                        // Input/output streams are like disneyland ride. the passangers wait to get on
                        //  buffer
                        
                        // For instance, "Hello" "World"

                        // 

                        // 
                        
                        
// main code
#include <iostream>
using namespace std;


/*
create an array of monsters
1/6
modify to class and
array of objects
*/
class monster {
 public:
 monster monster(){
  string head;
  string eyes;
  string ears;
  string mouth;
  string nose;
 }

  void set_head("userhead");
  void set_eyes("usereyes");
  void set_ears("ears");
  void set_nose("nose");
  void set_mouth("mouth");
  
   private:
     string userhead_ = "";
     string usereyes_ = "";
     string userears_ = "";
    
}; 

monster::set_head("userhead"){
    
}

 
 int main() {
   monster monsterA[10];
   monsterA[0].head = "Zombus";
   monsterA[0].eyes = "Vegitas";
   monsterA[0].ears = "Wackus";
   monsterA[0].nose = "Vegitas";
   monsterA[0].mouth = "Wackus";
   
   cout<<"Head:"<<monsterA[0].head<<endl;
   cout<<"Eyes:"<<monsterA[0].eyes<<endl;
   cout<<"Ears:"<<monsterA[0].ears<<endl;
   cout<<"Nose:"<<monsterA[0].nose<<endl;
   cout<<"Mouth:"<<monsterA[0].mouth<<endl;

return 0;
}