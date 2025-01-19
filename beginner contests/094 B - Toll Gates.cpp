#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m, x; cin >>n>>m>>x;
  int arr[n+1] = {};
  for (int i =0;i<m;i++){
    int a; cin >> a;
    arr[a] = 1;
  }
  int cost1 = 0; int cost2 = 0;
  if (x>n){
    for (int j = x; j >= n; j--){
      cost1+= arr[j];
    }
    for (int j = x; j >= 0; j--) {
      cost2+= arr[j];
    }
  } else {
    for (int j = x; j <= n; j++) {
      cost1+= arr[j];
    }
    for (int j = x; j >= 0; j--){
      cost2+= arr[j];
    } 
  }
  
  cout << min(cost1, cost2);
}
