#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, a, b; cin >> n >> a >> b;
  string s; cin >> s;
  int passed = 0; int os = 0;
  for (int i = 0;i<n;i++){
    if(s[i] == 'a'){
      if (passed < a+b){
        passed++;
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
    } else if (s[i]=='b'){
      if(passed<a+b && os<= b-1){
        passed++;
        os++;
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
    }else{
      cout << "No" << endl;
    }
  }
}
