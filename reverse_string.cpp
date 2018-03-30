#include <iostream>
#include <string>
using namespace std;

void reverse(string n){
    int storage;
    string regular_word = n;
    for (int i = 0; i < n.length()/2; i++) {
        storage = n[i];
        n[i] = n[n.length()-(i+1)];
        n[n.length()-(i+1)] = storage;
    }
    if(regular_word == n) {
        cout << "Your string is a palindrome" << endl;
    }
    else {
        cout << n << endl;
    }
}

int main() {
    string word;
    cin >> word;
    reverse(word);
}