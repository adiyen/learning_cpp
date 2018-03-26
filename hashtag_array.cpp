#include <iostream>
using namespace std;

int main() {
    int x, y;
    string character;
    cin >> x >> y >> character;

    for(int i = 0; i < x; i++) {
        for(int j = 0; j < x; j++){
            cout << character;
        }
        cout << endl;
    }
    cout << endl;
    
    for(int m = 0; m < y; m++) {
        for(int n = 0; n < y; n++) {
            cout << character;
        }
        cout << endl;
    }
}