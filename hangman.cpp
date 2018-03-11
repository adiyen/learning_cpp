#include <iostream>
#include <string>
using namespace std;

int main() {
    string spaces = "_ ";
    string answer_word = "name";
    string used;
    string guess;
    string guess_word;
    char blank_ch = ' ';
    int mistakes = 0;
    for(int j = 0; j < answer_word.length(); j++){
        cout << spaces;
    }
    cout << endl << endl;
    while(mistakes != 5) {
        cin >> guess;
        if(guess.length() == 1) {
            if(answer_word.find(guess) < answer_word.length()) {
                cout << "Correct!" << endl;
                answer_word[answer_word.find(guess)] = blank_ch;
                cout << answer_word[1] << endl;
                //cout << answer_word << endl;
                cout << " " << guess;
                for(int j = 0; j < answer_word.length(); j++){
                        cout << spaces;
                }
                cout << endl;
                cout << answer_word.find(guess) << endl;    
            }
            else if(answer_word.find(guess) == false) {
                cout << "You already used this letter. Try again. " << endl;
            }
            else {
                cout << "Incorrect! Please try again." << endl;
                answer_word[answer_word.find(guess)] = blank_ch;
                //cout << answer_word[1] << endl;
                used[answer_word.find(guess)] = guess[0];
                // cout << "hi";
                mistakes++;
            }
        }
        else {
            cout << "Please enter only one character!" << endl;
        }
    }
    cout << "You lost! Try again. " << endl;
}