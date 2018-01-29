//Fibonacci

#include <iostream>

using namespace std;
int n = 1;

int fib(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    else 
    return fib(n - 2) + fib(n - 1);

}

int main() {
    cout << fib(n) << endl;
}