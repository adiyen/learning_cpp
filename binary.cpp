#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void binary(string my_numb) {
    for(int i = my_numb.length(); i > 0; i--) {
        my_numb[i] = 
    }
    for(int j = 0; j < my_numb.length(); j++) {
        cout << my_numb[j] << endl;
    }

}

int main() {
    cout << "Please enter a binary number: ";
    string numb;
    cin >> numb;
    binary(numb);
}