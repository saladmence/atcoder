#include <bits/stdc++.h>
using namespace std;

/*
* did not need to find substring...
*/

int main(){
  string s; cin >> s;
  string ans = "";
  vector<string> v;
  
  for (int i = 0; i < s.length(); i++){
    if (s[i] == 'A' || s[i] == 'C' || s[i] == 'G' || s[i] == 'T'){
      ans += s[i];
    } else {
      if (ans.compare("") != 0)
        v.push_back(ans);
      ans = "";
    }
  }
  if (ans.compare("") != 0) v.push_back(ans);
  
  int maxLength = 0; int maxIdx = 0;
  for (int j = 0; j < v.size(); j++){
    if (v[j].length() > maxLength){
      maxLength = v[j].length();
      maxIdx = j;
    }
  }
  cout << maxLength;
}
