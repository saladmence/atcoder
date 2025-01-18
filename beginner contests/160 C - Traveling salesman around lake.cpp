#include <bits/stdc++.h>
using namespace std;

/*
circular path = split into n sections from n houses
salesman will travel to every house if all sections are covered once - the max section
account for section that crosses coord 0 
*/

int main(){
  int k, n; cin >> k >> n;
  int arr[n+1];
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }
  arr[n] = arr[0];
  int max = arr[1]-arr[0]; int sum = 0;
  for (int j = 0; j < n; j++){
    int diff = 0;
    if (arr[j] > arr[j+1]){
      diff = (k-arr[j])+arr[j+1];
      sum += diff;
    } else {
      diff = arr[j+1]-arr[j];
      sum += diff;
    }
    if (diff > max) max = diff;
  }
  cout << sum - max;
}
