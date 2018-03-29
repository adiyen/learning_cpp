#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;
    int numb[rows][cols];

    for(int k = 0; k < rows; k++) {
        for(int l = 0; l < cols; l++){
            cin >> numb[k][l];
        }
    }
    cout << endl;
    for(int n = 0; n < rows; n++) {
        for(int m = 0; m < cols; m++){
            // cout << numb[n][m] << " ";
            cout << (numb[n] * numb[m]) << endl;
        }
        cout << endl;
    }
}
