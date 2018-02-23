#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    stack <int> s;
    string command;
    int count;
    cin >> count;
    int numb = 0;
    for (int j = 0; j < count; j++){
        cin >> command;
        if (command == "REMOVE") {
            if (!s.empty()) {
                s.pop();
            }
        }
        if (command == "ADD") {
            numb++;
            s.push(numb);

        }
    }
    int store[s.size()];

    int i = 0;
    while(!s.empty()) {
            store[i] = s.top();
            i++;
            s.pop();     
    }
    int size = sizeof(store)/sizeof(store[0]);

    cout << size << endl;
    for (int n = size - 1; n >= 0; n--){
        cout << store[n] << endl;
    }
}
