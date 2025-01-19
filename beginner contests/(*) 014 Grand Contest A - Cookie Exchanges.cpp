#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
* sometimes brute force is the solution
*/

int main(){
  ll a,b,c; cin >> a>>b>>c;
  int count = 0;
  if(a==b && b==c && a%2 == 0){
    cout << -1;
    return 0;
  }
  while (a%2 == 0 && b%2 == 0 && c%2 == 0){
    ll d = a, e = b, f= c;
    a = (e+f)/2, b = (d+f)/2, c = (d+e)/2;
    count++;
  }
  cout << count;
}
