#include <iostream>
using namespace std;

int main() {
    int n[] = {};
    cin >> n[0] >> n[1];
    int numb[] = {};


    for(int j = 0; j < n[0]*n[1]; j++) {
            cin >> numb[j];
    }

    for(int i = 0; i < n[0]; i++) {
        for (int k = 0; k < n[1]; k++) {
            cout << numb[k]*numb[k] << " "; 
        }
        cout << endl;
    }

    // for(int i = 3; i < n[0]*n[1]; i++) {
    //     cout << numb[i]*numb[i] << " ";
    // }
    cout << endl;
}