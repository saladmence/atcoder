#include <bits/stdc++.h>
using namespace std;

// simulation 

int main(){
  int n; cin >> n;
  vector<int>v(n);
  for(int i =0;i<n;i++) cin >> v[i];
  int p = 1; int ne=v[0];
  while (p<= n){
    if(ne != 2){
      p++;
      ne=v[ne-1];
    } else{
      cout << p;
      return 0;
    }
  }
  cout << -1;
}
