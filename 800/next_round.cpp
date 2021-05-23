#include <iostream>
#include <vector>
using namespace std;

int main(){
int n, k; cin >> n >> k;

vector<int> v;
for(int i = 0; i < n; i++){
  int tmp; cin >> tmp;
  if(tmp > k && tmp >= 0){
    v.push_back(tmp);
  }
}
cout << v.size() << endl;
  return 0;
}