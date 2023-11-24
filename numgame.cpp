#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
    srand(static_cast<unsigned int>(time(0)));
    int secretNumber=rand() % 100 +1;
    int guess;
    int attempts=0;
    
    cout<<"welcome to the number gessing game!\n";
    cout<<"Try to guess the number between 1 and 100.\n";
    do{
        cout <<"enter your guess:";
        cin>>guess;
        attempts++;
        
        if(guess<secretNumber){
            cout<<"Too high! Try again.\n";
        }else if(guess<secretNumber){
            cout<<"Congratulations!you guessed the number"<<endl;}
            else{
                cout<<"congratulations! You guesssed the number in "<< attempts<<"!\n";
                
            }
            cout<<"the random no is "<<secretNumber<<"."<<endl;
    }
    while(guess !=secretNumber);
    return 0;
    
            }