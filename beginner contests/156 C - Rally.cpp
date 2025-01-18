#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> nums, int a, int b){
  int suma = 0; int sumb = 0;
  for (int ele : nums){
    suma += pow(ele-a, 2);
    sumb += pow(ele-b, 2);
  }

  if (suma > sumb) return sumb;
  return suma;
}

int main(){
  int n; cin >> n;
  vector<int> num(n);
  
  double sum = 0;
  for (int i =0;i < n; i++){
    int v; cin >> v;
    num[i] = v;
    sum += v;
  }

  cout << solve(num, floor(sum/n), ceil(sum/n));
  
}
