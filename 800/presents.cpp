#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, p;
  cin >> n;

  vector<int>v(n+1);
  for(int i = 1; i <= n; i++){
    cin >>p ;
    v[p] = i;
  }
  cout << v[1];
  for(int i = 2; i <= n; i++){
    cout << " " << v[i];
  }
  cout << endl;
  return 0;
}