#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  string s; cin >> s;


  vector<char> v;
  v.push_back(s[0]);
  for(int i = 1; i < n; i++){
    if(s[i]!=s[i-1]){
      v.push_back(s[i]);
    }
  }

  int res = n - v.size();
  cout << res << endl;
  return 0;
}