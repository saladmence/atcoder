#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, k; cin >> n >> k;
  int sum = 0;
  for (int i = 0;i < n;i++){
    int a; cin >> a;
    sum += 2*min(a, k-a);
  }
  cout << sum;
}
