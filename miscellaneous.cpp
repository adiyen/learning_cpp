#include <iostream>


using namespace std;


int storage = 0;
void permutate(string s) {
    for (int i=0; i<s.length(); i++) {
        //cout << i << " " << s[i] << endl;
        //cout << s.substr(0, i) << " " << s.substr(i+1) << endl;
        for (int count = 1; count < s.length(); count++){
        // cout << s.substr(count, i+1) << endl;
          cout << s[i] << s[count] << endl;

          //cout << s[i];
        }
        //cout << s.substr(0, i+1) << endl;
        storage = s[1];
        s[1] = s[0];
        s[0] = storage;
    }
}
// void permutate(string s) {
//     for (int i=0; i<s.length(); i++) {
//       cout << s;
//     }
// }

// int main() {
//   string s = "4385";
//   string no = "hi";
//   s.erase(s.length() - 1);
//   cout << s;
//   s.(2, 3);
//   cout << s << no;
//   //permutate(s);
// }


// #include <iostream>

// using namespace std;

// void permutation(int numb[], int digit) {
//   if (digit <= sizeof(numb)){
//     for (int i = 0; i < sizeof(numb); i++){
//       cout << numb[i];
//     //permutation(numb, digit);

//     }
//     digit--;    
//   }
//   permutation(numb, digit);
// }

// int digit = 4;
// int numb[] {4, 3, 8, 5};
// int main(){
//   permutation(numb, digit);
// }



// int sequence[3];
// int used[3];

// void permutation(int current) {
//   int i;
//   if (current == 3) {
//     cout << i << endl;
//     return;
//   }
//   for (i = 0; i < 3; i++) 
//     if (!used[i])
//     {
//       sequence[current] = i;
//       used[i] = 1;
//       permutation(current+1);
//       used[i] = 0;
//   }
// }

// int main(){
//   permutation(3);
// }


// #include <iostream>

// int array[10] = {0,1,2,3,4,5,6,7,8,9};

// void swap(int x, int y){
//     int temp = array[x];
//     array[x]=array[y];
//     array[y]=temp;

//     return;
// }

// void printArray(int size){
//     int i;

//     for (i=0;i<size;i++)
//         std::cout << array[i] << " ";

//     std::cout << std::endl;

//     return;
// }

// void permute(int k,int size){
//     int i;

//     if (k==0)
//         printArray(size);
//     else{
//         for (i=k-1;i>=0;i--){
//             swap(i,k-1);
//             permute(k-1,size);
//             swap(i,k-1);
//         }
//     }

//     return;
// }

// int main(){

//     permute(3,3);

//     return 0;
// }







#include <iostream>
using namespace std;

int a[10];
void P(int c) {
  int i;
  if (c == 10) {
    for (i = 0; i < 10; i++) {
      cout << a[i];
    }
  }
  else {
    for (a[c] = 0; a[c] < 5; a[c] ++) {
      P(c+1)
    }
  }
}

int main(){
  int c = 10;
  P(c);
}