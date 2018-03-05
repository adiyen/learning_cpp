#include <iostream>
using namespace std;
int numb = 0;
int counter = 0;
void generate(int n, int num) {
    int numb;
    //for (int j = 0; j < 2; j++){
    for (int i = num; i < n; i++) {
        if (counter > n/2 -1) {
            cout << 1;
            counter--;
        }
        else {
            cout << 0;
            counter++;
        }
    }
    cout << endl;
    //num++;
    //}
    // numb++;
    //generate(n, numb++);
}

int main() {
    generate(4, 0);
}