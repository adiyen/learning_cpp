#include <iostream>
using namespace std;

void reverse(string n){
    int storage;
    for (int i = 0; i < n.length() - 1; i++) {
        storage = n[i];
        n[i] = n[n.length() -1];
        n[i + 1] = storage;
    }
    cout << n << endl;
}

int main() {
    string word;
    cin >> word;
    reverse(word);
}