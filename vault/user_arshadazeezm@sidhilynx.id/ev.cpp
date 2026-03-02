#include <iostream>
#include <string>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std;

class Game{
    private:
    int no_of_attempts=10;
    string words[10]={"wall","ball","tall","tree","free","milk","silk","high","skin","life"};
    string choosedword ="";
    string base="----";
    bool iswon = false;
    public:
    Game(){
        int randumnumber = rand()%10;
        choosedword = words[randumnumber];
    }
    void startgame(){
        int localattempts = 0;
        
      while(localattempts< no_of_attempts&&iswon==false){
          char gue ='a';
          cout<<"ENTER A GUESS"<<endl;
          cin>>gue;
          manipulator(gue);
          if(choosedword == base){
              iswon =true;
          }
      }

       
    }
    void manipulator(char guess){
        int length = choosedword.length();
         for(int i=0;i<length;i++){
          
            if(choosedword[i] == guess){
                base[i] = guess;
         
            }
             else{
                cout<<"Wrong elemnet at index "<<i+1<<endl;
             }
        }
        cout<<base<<endl;
    }
};
    
int main(){
   
    srand(time(0));
    Game g;
    g.startgame();
    return 0;
}