#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, h; cin >> n >> h;
  int width = 0;
  int a[n];
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  for(int i = 0; i < n; i++){
    if(a[i]<=h){
      width+=1;
    } else {
      width+=2;
    }
  }
  cout << width << endl;
  return 0;
}