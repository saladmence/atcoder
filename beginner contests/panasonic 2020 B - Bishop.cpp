#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// forgot big numbers need ll and didn't consider edge case that bishop can't move if board is only 1 tall/wide

int main(){
  ll r, c; cin >> r >> c;
  if (r == 1 || c == 1) cout << 1;
  else if (r*c % 2 == 0) cout << (r*c)/2;
  else cout << (r*c)/2+1;
}
