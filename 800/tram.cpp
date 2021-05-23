#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  int capacity = 0;
  int num_of_pass = 0;
  for(int i = 0; i < n; i++){
    int a, b; cin >> a >> b;
    num_of_pass += b-a;
    if(num_of_pass > capacity){
      capacity = num_of_pass;
    }
  }

  cout << capacity << endl;
  return 0;
}