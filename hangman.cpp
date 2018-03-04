#include <iostream>
#include <string>
using namespace std;

int main() {
    string answer_word = "word";
    string guess;
    for(int j = 0; j < answer_word.length(); j++){
        cout << "_" << " ";
    }
    cout << endl << endl;
    for(int i = 0; i < 5; i++) {
        cin >> guess;
        //cout <<answer_word.find(guess);
        if(guess.length() == 1) {
            if(answer_word.find(guess) < answer_word.length()) {
                cout << "Correct!" << endl;
                // answer_word.erase();
                // cout << answer_word;
            }
            else {
                cout << "Incorrect! Please try again." << endl;
            }
        }
        else {
            cout << "Please enter only one character!" << endl;
        }
    }
}