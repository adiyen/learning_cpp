#include <iostream>

using namespace std;

void d_ruler(int n) {

    if (n > 1) {
        d_ruler(n - 1);
    }
    for (int asterisk = n; asterisk > 0; asterisk--){
        cout << "*";
    }
    cout << endl;
    if (n > 1) {
        d_ruler(n-1);
    }
}

void star(int numb) {
    for (int i = numb; i > 0; i--) {
        cout << "*";
    }
    cout << endl;
}

int main() {
    int numb = 0;

    cin >> numb;

    star(numb);

    d_ruler(numb - 1);

    star(numb);
}