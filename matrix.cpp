#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;
    int numb[rows][cols];

    // for(int j = 0; j < n[0]; j++) {
    //     i++;
    //     for(int k = 0; k < n[1]; k++){
    //         i++;
    //         cin >> numb[i];
    //     }
    // }

    // for(int i = 0; i < n[0]; i++) {
    //     for (int k = 0; k < n[1]; k++) {
    //         cout << numb[k]*numb[k] << " "; 
    //     }
    //     //cout << endl;
    // }

    for(int k = 0; k < rows; k++) {
        for(int l = 0; l < cols; l++){
            cin >> numb[k][l];
        }
    }
    cout << endl;
    for(int n = 0; n < rows; n++) {
        for(int m = 0; m < cols; m++){
            cout << numb[n][m] << " ";
        }
        cout << endl;
    }

    // for(int j = 0; j < n[0]*n[1]+1; j++) {
    //     cin >> numb[j];
    // }

    // for(int m = 0; m < n[0]*n[1]; m++){
    //     cout << numb[m] << endl;
    // }
//     for(int i = 0; i < n[0]*n[1]; i++) {
//         cout << numb[i]*numb[i] << " ";
//     }
//     cout << endl;
// }

//Question: I have to make a 2 -d array and i have to output the n*n for each array

//example:
//3 4
//1 2 2 1
//3 4 4 3
//1 3 3 1

//Output
//1 4 4 1
//9 16 16 9
//1 9 9 1
}
