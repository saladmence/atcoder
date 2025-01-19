#include <bits/stdc++.h>
using namespace std;

/*
* pair, access first num = .first and second = .second
* could be like v[i].second
*/

int main(){
  int n; cin >> n;
  vector<pair<int,int>> v(n);
  for (int i = 0; i < n; i++){
    int a; cin >> a;
    v[i] = make_pair(a, i+1);
  }
  sort(v.begin(), v.end());
  for (auto j : v){
    cout << j.second << " ";
  }
}
