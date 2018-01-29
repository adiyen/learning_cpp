// Factorial

#include <iostream>

using namespace std;

int n = 20;

long fact(long n) {
    if (n == 0) {
        return 1;
    }

    return n * fact(n-1);
}

int main() {
    cout << fact(n) << endl;
}
