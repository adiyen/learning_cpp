#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int numb[n];
    int counter = 1;
    int count = 0;
    for(int i = 0; i < n; i++) {
        cin >> numb[i];
    }
    for(int m = 0; m < n; m++){
        for(int j = count; j < n; j++) {
            if(abs(numb[j] - numb[j+1]) <= k) {
                counter++;
            }
        }
        cout << endl << counter << endl;
        count++;
    }
}