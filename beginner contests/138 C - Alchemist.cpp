#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  vector<double> v;
  for (int i = 0; i < n; i++){
    double d; cin >> d;
    v.push_back(d);
  }
  
  while(v.size() > 1){
    sort(v.begin(), v.end());
    v[1] = (v[0]+v[1])/2;
    v.erase(v.begin());
  }
  
  cout << v[0];
}
