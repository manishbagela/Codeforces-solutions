#include <bits/stdc++.h>
using namespace std;

int main(){
  int arr[5][5], res;
 for(int i = 0; i < 5; i++){
    for(int j =0; j < 5; j++){
      cin >> arr[i][j];
      }
    }
  

  for(int i = 0; i < 5; i++){
    for(int j =0; j < 5; j++){
      if(arr[i][j]==1 && i!=j){
        res = abs(i-j);
        break;
      } else if(arr[i][j]==1 && i==j){
        // cout<< "i: "<< i << endl;
        res = 2*abs(i-2);
      }
      }
    }
  cout << res << endl;
  return 0;
}