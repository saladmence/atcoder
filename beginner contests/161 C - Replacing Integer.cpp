#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll n, k; cin >> n >> k;
  int o = 0;
  
  while (true){
    ll r = n % k;
    if (abs(r-k) < r){
      cout << abs(r-k);
      return 0;
    } else {
      cout << r;
      return 0;
    }
  }
}
