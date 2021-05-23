#include <bits/stdc++.h>
using namespace std;

int main(){
  string s, t, res; cin >> s >> t;
  vector<char>tmp;
  for(int i=0; i< s.length(); i++){
    tmp.push_back(s[i]);
  }
  reverse(tmp.begin(), tmp.end());
  for(int i = 0; i < tmp.size();i++){
    res += tmp[i];
  }
  if(res==t){
    cout << "YES" << endl;
  } else {
     cout << "NO" << endl;
  }
  return 0;
}