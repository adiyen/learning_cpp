#include <iostream>
using namespace std;

void same_check(string check1, string check2) {
    if(check1 == check2) {
        cout << "same" << endl;
    }
    else {
        cout << "not same" << endl;
    }
}

int main() {
    string message1, message2;
    cin >> message1 >> message2;
    same_check(message1, message2);


}