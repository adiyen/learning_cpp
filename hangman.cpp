#include <iostream>
#include <string>
using namespace std;

int main() {
    string spaces = "_ ";
    string answer_word = "name";
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
                //cout << answer_word << endl;
                cout << guess;
                    for(int j = 0; j < answer_word.length(); j++){
                        cout << spaces;
                    }
                    cout << endl;
            }
            else {
                cout << "Incorrect! Please try again." << endl;
                answer_word[answer_word.find(guess)] = blank_ch;
                mistakes++;
            }
        }
        else {
            cout << "Please enter only one character!" << endl;
        }
    }
    cout << "You lost! Try again. " << endl;
}