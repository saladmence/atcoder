#include <bits/stdc++.h>
using namespace std;

//int N, A[3][3], b[10];
// better to use array

int main(){
  vector<vector<int>> v(3, vector<int>(3));
  for(int i =0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      int a; cin >> a;
      v[i][j] = a;
    }
  }
  int n; cin>>n;
  for (int i = 0; i < n; i++){
    int a; cin >> a;
    for (int j =0;j<3;j++){
      for (int k = 0; k<3; k++){
        if (v[j][k] == a) v[j][k] = 101;
      }
    }
  }
  
  if(v[0][0] == 101 && v[0][1] == 101 && v[0][2] == 101){
    cout << "Yes";
  } else if (v[0][0] == 101 && v[1][0] == 101 && v[2][0] == 101){
    cout << "Yes";
  } else if (v[1][0] == 101 && v[1][1] == 101 && v[1][2] == 101){
    cout << "Yes";
  } else if (v[2][0] == 101 && v[2][1] == 101 && v[2][2] == 101){
    cout << "Yes";
  }else if (v[0][1] == 101 && v[1][1] == 101 && v[2][1] == 101){
    cout << "Yes";
  }else if (v[0][2] == 101 && v[1][2] == 101 && v[2][2] == 101){
    cout << "Yes";
  }else if (v[0][0] == 101 && v[1][1] == 101 && v[2][2] == 101){
    cout << "Yes";
  }else if (v[0][2] == 101 && v[1][1] == 101 && v[2][0] == 101){
    cout << "Yes";
  } else{
    cout << "No";
  }
  
}
