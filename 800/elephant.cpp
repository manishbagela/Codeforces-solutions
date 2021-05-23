#include <bits/stdc++.h>
using namespace std;

int main(){
  int x; cin >> x;
  int res = x / 5;;

  if(x % 5 > 0){
    res++;
  }

  cout << res << endl;
  return 0;
}