#include <iostream>
using namespace std;

int main() {

for (int i =97; i<(97+26); i++){
    if(i%2 ==0){
        cout<<static_cast<char>(i);
    }
}
    
    return 0;
}