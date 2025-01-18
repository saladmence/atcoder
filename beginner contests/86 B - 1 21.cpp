#include <bits/stdc++.h>
using namespace std;

int main(){
  string a, b; cin >> a >> b;
  int c = stoi(a+b);
  
  if (sqrt(c) == floor(sqrt(c))) cout << "Yes";
  else cout << "No";
}
