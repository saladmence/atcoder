#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m, c; cin >> n >> m >> c;
  vector<int> b(m);
  for (int i = 0; i < m; i++){
    int e; cin >> e;
    b[i] = e;
  }
  
  int count = 0;
  for (int i = 0; i < n; i++){
    int sum = 0;
    for (int j = 0; j < m; j++){
      int a; cin >> a;
      sum += b[j]*a;
    }
    if (sum+c > 0) {
      count++;
    }
  }
  cout << count;
}
