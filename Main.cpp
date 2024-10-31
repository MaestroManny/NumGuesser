#include <iostream>

using namespace std;

int main(){

    int x = 17;
    int UserGuess;

    cout << "Enter a Number " << endl;
    cin >> UserGuess;

    /*
    if(UserGuess > 17){
        cout << "Guess is Bigger" << endl;
    }
    else if(UserGuess < 17){
        cout << "Guess is Smaller" << endl;
    }
    else{
        cout << "CONGRATS YOU GUESSED CORRECTLY!!!" << endl;
    }

    */


   while (UserGuess != 17){



    if(UserGuess > 17){
        cout << "Guess is Bigger: ";
            cout << "Guess Again" << endl;
             cin >> UserGuess;
    }
    else if(UserGuess < 17){
        cout << "Guess is Smaller: ";
            cout << "Guess Again" << endl;
            cin >> UserGuess;
    }


   }

    if(UserGuess = 17){
        cout << "CONGRATS YOU GUESSED CORRECTLY!!!" << endl;
    }

    return 0;
    
}