#include <bits/stdc++.h>
using namespace std;

// prior approach did not work bc i added a limit to the substring length checked
// you can have for loops w no conditional

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  string s; cin >> s;
  int n = s.length();
  
  for (int i = n-2; i; i-=2){
    if (s.substr(0,i/2).compare(s.substr(i/2,i/2)) == 0){
      cout << i;
      return 0;
    }
  }
}

/*

first attempt

#include <bits/stdc++.h>
using namespace std;

int main(){
  
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  string s; cin >> s;
  s = s.substr(0, s.length()-2);
  
  string s1 = s.substr(0, s.length()/2);
  string s2 = s.substr(s.length()/2, s.length()/2);
  for (int i = 2; i < s.length()/2; i+=2){
    if (s1.compare(s2) == 0){
      cout << s1.length()*2;
      return 0;
    } else {
      s1 = s.substr(0, (s.length()-i)/2);
      s2 = s.substr((s.length()-i)/2, (s.length()-i)/2);
    }
  }
  cout << s1.length()*2;
}
*/
