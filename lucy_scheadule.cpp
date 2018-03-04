//NOT using nested ifs

// #include <iostream>
// using namespace std;

// int main() {
//     int humidity;
//     int temp;
//     cin >> temp >> humidity;

//     if (humidity < 40 && temp < 60) {
//         cout << "Lucy drinks coffee" << endl;
//     }
//     else if (humidity < 40 && temp >= 60) {
//         cout << "Lucy drinks iced tea" << endl;
//     }
//     else if (humidity >= 40 && temp < 60) {
//         cout << "Lucy eats cake" << endl;
//     }
//     else if (humidity >= 40 && temp >= 60) {
//         cout << "Lucy eats ice cream" << endl;
//     }
// }

//Using nested ifs

// #include <iostream>
// using namespace std;

// int main() {
//     int humidity;
//     int temp;
//     cin >> temp >> humidity;

//     if (humidity < 40) {
//         if(temp < 60) {
//             cout << "Lucy drinks coffee" << endl;
//         }
//         else {
//             cout << "Lucy drinks iced tea" << endl;
//         }
//     }
//     else if (humidity >= 40) {
//         if (temp < 60) {
//             cout << "Lucy eats cake" << endl;
//         }
//         else {
//             cout << "Lucy eats ice cream" << endl;
//         }
//     }
// }  

//scheadule improvised

// #include <iostream>
// using namespace std;

// int main() {
//     int humidity;
//     int temp;
//     cin >> temp >> humidity;

//     if (humidity < 40) {
//         if(temp < 60) {
//             cout << "Lucy drinks coffee" << endl;
//         }
//         else {
//             cout << "Lucy drinks iced tea" << endl;
//         }
//     }
//     else if (humidity >= 40 && humidity < 60) {
//             if (temp < 60) {
//                 cout << "Lucy plays tennis" << endl;
//             }
//             else {
//                 cout << "Lucy plays golf" << endl;
//             }

//     }
//     else if (humidity >= 60) {
//         if (temp < 60) {
//             cout << "Lucy eats cake" << endl;
//         }
//         else {
//             cout << "Lucy eats ice cream" << endl;
//         }
//     }
// }  


// #include <iostream>
// using namespace std; 

// int main() {
//     int humidity;
//     int temp;
//     cin >> temp >> humidity;

//     if (humidity < 40 && temp < 60) {
//         cout << "Lucy drinks coffee" << endl;
//     }
//     else if (humidity < 40 && temp >= 60) {
//         cout << "Lucy drinks iced tea" << endl;
//     }
//     else if (humidity >= 40 && humidity < 60 and temp < 60) {
//         cout << "Lucy plays tennis" << endl;
//     }
//     else if (humidity >= 40 && humidity < 60 and temp >= 60) {
//         cout << "Lucy plays golf" << endl;
//     }
//     else if (humidity >= 40 && temp < 60) {
//         cout << "Lucy eats cake" << endl;
//     }
//     else if (humidity >= 40 && temp >= 60) {
//         cout << "Lucy eats ice cream" << endl;
//     }
    
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int temporary;
//     int numb[3] = {};
//     int num1;
//     int num2;
//     int num3;
    
//     cin >> num1;
//     cin >> num2;
//     cin >> num3;
//     numb[0] = num1;
//     numb[1] = num2;
//     numb[2] = num3;

    
//     if(numb[0] > numb[1]) {
//         temporary = numb[1];
//         numb[1] = numb[0];
//         numb[0] = temporary;
//     }
//     if(numb[1] > numb[2]) {
//         temporary = numb[2];
//         numb[2] = numb[1];
//         numb[1] = temporary;
//     }
//     if(numb[0] > numb[1]) {
//         temporary = numb[1];
//         numb[1] = numb[0];
//         numb[0] = temporary;
//     }
//     cout << numb[0] << endl;
//     cout << numb[1] << endl;
//     cout << numb[2] << endl;
// }

#include <iostream>
using namespace std;

int main() {
    int humidity;
    int n;
    int numb[] = {};
    int temp;
    cin >> n;

    for(int j = 0; j < n*2; j+=2){
        cin >> numb[j] >> numb[j+1];
    } 
    //cout << numb[0] << numb[1] << numb[6] << numb[7] << endl;
}    