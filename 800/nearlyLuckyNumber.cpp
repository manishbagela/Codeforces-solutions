#include <bits/stdc++.h>
using namespace std;

int main(){
  long long n; cin >> n;
  int luckyDigits = 0;

  while(n!=0){
    int tmp = n%10;
    if(tmp == 4 || tmp == 7){
      luckyDigits++;
    }
    n /= 10;
  }

  // cout << luckyDigits << endl;
  if(luckyDigits == 4 || luckyDigits == 7){
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}