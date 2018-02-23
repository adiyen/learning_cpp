#include <iostream>


using namespace std;

void issuperPrime(int num) {
    bool superprime = true;
    if (num > 0) {
    for (int j = 2; j < num; j++){
        if (num % j == 0) {
            superprime = false;
        }
    }
    if (superprime) {
        cout << num*10 << endl;
        issuperPrime(num/10);

        }
        
}
}
void isPrime(int numb) {
    for (int num = 2; num <= numb; num++){
        bool prime = true;

        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                prime = false;
            }
        }
        if (prime) {
            //cout << num << endl;
            issuperPrime(num/10);
        }
    }
}


int main() {
    int numb = 100;
    isPrime(numb);

}