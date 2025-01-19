#include <bits/stdc++.h>
using namespace std;

/*
* just changed by setting count to 1 and moving .insert out of loop
* be careful of little +1s like that
*/

int collatz(int n){
  if (n % 2 == 0) return n/2;
  else return 3*n+1;
}

int main(){
  int n; cin >> n;
  set<int> s;
  int count = 1;
  s.insert(n);
  while(true){
    n = collatz(n);
    count++;
    if (s.insert(n).second == false){
      cout << count;
      return 0;
    } else {
      s.insert(n);
    }
  }
}
