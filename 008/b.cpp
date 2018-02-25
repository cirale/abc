#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main(){
  int n;
  string s;
  map<string,int> m;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> s;
    m[s] += 1;
  }
  int x = 0;
  string xs;
  for(auto it = m.begin(); it != m.end(); it++){
    if(x != max(x,it->second)){
      x = max(x,it->second);
      xs = it->first;
    }
  }
  cout << xs << endl;
}
