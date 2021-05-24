#include <bits/stdc++.h>
using namespace std;

int main(){
int n, k; cin >> n >> k;

vector<int> v1, v2;
for(int i = 0; i < n; i++){
  int tmp; cin >> tmp;
  
    v1.push_back(tmp);
}


for(int i = 0; i < v1.size(); i++){
  if(v1[i] > 0 && v1[i] >= v1[k-1]){
    v2.push_back(v1[i]);
  }
}
cout << v2.size() << endl;
  return 0;
}