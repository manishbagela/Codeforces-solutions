#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  vector<string> v;
  for(int i = 0; i < n; i++){
    string tmp; cin >> tmp;
    v.push_back(tmp);
  }
  // for(int i = 0; i < n; i++){
  //  cout << v[i] << endl;
  // }

  string a = v[0];
  int res = 1;
  for(int i = 1; i < n; i++){
    if(a!=v[i]){
      res+=1;
      a = v[i];
    }
  }

  cout << res << endl;
  return 0;
}