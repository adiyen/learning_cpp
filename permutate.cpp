#include <iostream>
#include <string>

using namespace std;

void permute(string str, string output, int n) {
  if (str.length() == 1) {
    //cout << output << endl;
    cout << output.substr(0, n) << endl;
  } 
  for (int i = 0; i < str.length(); i++) {
    permute(str.substr(0, i) + str.substr(i+1), output + str[i], n);
  }
}

int main() {

  string str;
  cin >> str;
  int n;
  cin >> n;
  permute(str, "", n);
}