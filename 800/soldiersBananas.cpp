#include <bits/stdc++.h>
using namespace std;

int main(){
  int k, n, w; cin >> k >> n >> w;
  int totalCost = 0;
  for(int i = 1; i <= w; i++){
    totalCost += i*k;
  }
  if(totalCost >= n){
    cout << totalCost - n << endl;
  } else {
    cout << 0 << endl;
  }
  return 0;
}