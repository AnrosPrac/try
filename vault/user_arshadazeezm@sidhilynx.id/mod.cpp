#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <chrono>
using namespace std;

class Score{
    private:
    int total_time;
    int numbwer_of_attempts;
    int total_score=0;
    public:
    string name;
    int inital_score;
    
    Score(string name){
        name = name;
       inital_score = 0;
        cout<<"The score was initialized to 0 for the gamer "<<name<<" !"<< endl;
    }
    
    void evaluate(int total_time){
        if(total_time < 30 ){
            total_score = total_score + 20;
        }
        else if(total_time>30 && total_time<61){
            total_score = total_score + 10;
            
        }
        else{
            cout<<"Time limit exceeded !";
        }
    }
    int final_score(){
        return total_score;
    }
    void per_attempt_calculation(int guess,int rn){
        int upperLimitL1 = rn +2;
        int lowerLimitL1 = rn - 2;
        int upperLimitL2 = rn +4;
        int lowerLimitL2 = rn - 4;
      
        
        if(guess<=upperLimitL1 && guess>=lowerLimitL1){
            total_score = total_score + 2;
            cout<<"You are very very close to the target !"<<endl;
           
        }
    else if(guess<=upperLimitL2 && guess>=lowerLimitL2){
            total_score = total_score + 1;
            cout<<"You are very close to the target !"<<endl;

        }
        else{
             cout<<"You are very far from the target !"<<endl;
        }
    }
    void number_of_attempts_eval(int num){
        if(num <= 30){
            total_score = total_score + 20;
        }
        else if(num > 30){
            total_score = total_score + 10;
        }
        else{
            cout<<"No total allocated becuase exceeded number of attempts ! Better luck next time ";
        }
    }
}
;

int randomnumberGenerator() {
    int randomNumber = rand() % 10;
    return randomNumber;
}




int main(){
    string name;
   srand(time(0));
    int randomNumber = randomnumberGenerator();
    cout <<randomNumber << endl;
    cout << "welcome to jeem-boom-bhaa guess the number challenge"<< endl;
    cout << "Enter your first name: ";
    cin >> name;
    Score s(name);
    int iteration = 0;
    auto start = chrono::high_resolution_clock::now();
    while (iteration < 100){
        int guess = -1;
auto endJ = chrono::high_resolution_clock::now();
        chrono::duration<double> elapsedJ = endJ - start;
        cout << "Enter a guess (Total time taken so far "<< fixed << setprecision(2) << elapsedJ.count() << "): ";
        
        cin>>guess;
        if(guess == randomNumber){
            break;
        }
              iteration = iteration+1;
            
            s.per_attempt_calculation(guess,randomNumber);
        
        
    }
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> elapsed = end - start;
    s.evaluate(elapsed.count());
    s.number_of_attempts_eval(iteration);
    int final_score = s.final_score();
cout<<"------------------------------------------------"<<endl;
      cout << "Jeem-Boom-Bhaa guess the number challenge report"<< endl;
    cout<<"Gamer Name : "<<name<<endl;
    cout << "Total Time Taken : "<< fixed << setprecision(2) << elapsed.count() << endl;
    cout<<"Number of failed Attempts : "<<iteration<<endl;
    cout<<"Total Score : "<<final_score<<endl;
    cout<<"------------------------------------------------"<<endl;
    cout<<"Developed by Jefniya and Arshad "<<endl;
    
return 0;
}