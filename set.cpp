#include <iostream>

using namespace std;

// int numb[3] = {4, 3, 8};
// int steps = 3;

// void inter(int numb[], int steps) {
//     if (steps > 0) {

//         for (int i = 0; i < 3; i ++) {
//             cout << numb[i];
//             inter(numb, steps - 1);
//         }
//          cout << endl;
//     }
// }


// int c = 10;
// void inter(int c) {
//     int i;
//     if (c == 10) {
//         for (i = 0; i < 10; i++){
//             cout << numb[i];
//         }
//         cout << endl;
//     }
//     else {
//         for (numb[c] = 0; numb[c] < 5; numb[c]++) {
//             inter(c + 1);
//         }
//     }
    
//}

int main() {
    int numb [3] = {4, 3, 8};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int n = 0; n < 3; n++) {
                cout << numb[i] << numb[j] << numb[n] << endl;
            }
        }
    }
 }