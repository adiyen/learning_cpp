//Fibonacci

#include <iostream>

using namespace std;

int fib(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    return fib(n - 2) + fib(n - 1);

}

int main() {
    int n = 0;
    cin >> n;
    cout << fib(n) << endl;
}