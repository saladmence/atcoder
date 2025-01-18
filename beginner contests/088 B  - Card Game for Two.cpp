#include <bits/stdc++.h>
using namespace std;

// initialize array as type name [num]
// sorting arrays doesnt use iterators, use arr, arr+n where n is size of array

int main(){
  int n; cin >> n;
  int arr [n];
  
  for (int i = 0; i < n; i++){
    int a; cin >> a;
    arr[i] = a;
  }
  
  sort(arr, arr+n);
  int a = 0; int b = 0;
  for(int j = n-1; j >= 0; j-=2){
    a+= arr[j];
  }
  for(int j = n-2; j >= 0; j-=2){
    b+= arr[j];
  }
  cout << a-b;
}
