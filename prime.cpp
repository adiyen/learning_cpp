#include <iostream>
using namespace std;

void isPrime(int numb){
    for (int i = 2; i <= numb; i++){
        bool prime = true;
        for (int j = 2; j < i; j++){
            if (i % j == 0) {
                prime = false;
            }
        }
        if (prime) {
            cout << i << endl;
        }
    }
}

int main() {
    int numb = 100;
    isPrime(numb);
}