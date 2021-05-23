#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b; cin >> a >> b;

  int res = 0;

  while(a<=b){
    a = 3*a;
    b = 2*b;
    res += 1;
  }
  cout << res << endl;
  return 0;
}