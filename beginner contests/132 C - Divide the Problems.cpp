#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++){
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  int l = n/2-1;
  int u = n/2;
  cout << (v[u] - (v[l]+1)+1);
}
