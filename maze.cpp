#include <iostream>
using namespace std;

int main() {
    int amount;
    cin >> amount;
    string numb;
    cin >> numb;

    int row = 0; 
    int collumn = 0;

    for (int i = 0; i < amount; i++) {
        if (numb == "UP") {
            row++;
            cin >> numb;
        }
        else if(numb == "DOWN") {
            row--;
            cin >> numb;
        }
        else if(numb == "RIGHT") {
            collumn++;
            cin >> numb;
        }
        else if(numb == "LEFT") {
            collumn--;
            cin >> numb;
        }
    }
    cout << row << "  " << collumn << endl;
}