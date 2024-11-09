#include<iostream>
using namespace std;
int main(){

    cout<<"Do you want to play a game ?"<<endl;
    cout<<"Step-1) Player 1 -> Selects a random number"<<endl;
    cout<<"Step-2) Player 2 -> Needs to guess the number"<<endl;
    cout<<"Step-3) The game will tell Player 2 whether the guess is too high or too low"<<endl;

    cout<<"Let's Start!"<<endl;

    int InsertNumber = 0 , GuessNumber = 0;

    cout<<"Player 1 -> Insert Number:"<<endl;
    cin>>InsertNumber;

    while(true){
        cout<<"Player 2 -> Guess the Number:"<<endl;
        cin>>GuessNumber;

        if(GuessNumber == InsertNumber){
            cout<<"Congrats!! , You are Correct!"<<endl;
            break;
        }
        else if(GuessNumber > InsertNumber){
            cout<<"Please try again! The Number you've choose is too high"<<endl;
        }
        else{
            cout<<"Please try again! The Number you've choose is too low"<<endl;
        }
    }
    return 0;
}