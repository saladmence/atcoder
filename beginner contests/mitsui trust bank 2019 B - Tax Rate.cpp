#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  double x = n/1.08;
  
  int f = floor(x);
  int c = ceil(x);
  
  if (floor(f*1.08) == n) cout << f;
  else if (floor(c*1.08) == n) cout << c;
  else cout << ":(";
}
