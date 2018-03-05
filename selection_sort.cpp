#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    long n[5] = {10023224240, 4, 2, 10, -5};
    for (int i = 0; i < 5; i++){
        int temp = i;
        for (int j = i+1; j < 5; j++) {
            if (n[j] < n[temp]) {
                temp = j;
            }
            int store = n[temp];
            n[temp] = n[i];
            n[i] = store;
        }
    }
    for(int m = 0; m < 5; m++) {
        cout << n[m] << endl;
    }
}