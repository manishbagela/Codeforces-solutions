#include <bits/stdc++.h>
using namespace std;

int main()
{
 int t; cin >> t;
 vector<string> res;
 while(t--){
   string s; cin >> s;
   int count = 0;
   string tmp;

   if(s.length()<=10){
     res.push_back(s);
   } else {
     for(int i = 1; i < s.length()-1; i++){
       count++;
     }
     tmp = s[0] + to_string(count) + s[s.length()-1];
     res.push_back(tmp);
   }
 }
 for(int i = 0; i <res.size(); i++){
   cout << res[i] << endl;
 }
  return 0;
}