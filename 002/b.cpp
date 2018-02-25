#include <iostream>
#include <string>
using namespace std;

int main(){
  string s,ret = "";
  cin >> s;
  for(unsigned int i = 0; i < s.length(); i++){
    if(s[i] != 'a' && s[i] != 'i' && s[i] != 'u' && s[i] != 'e' && s[i] != 'o')
      ret.push_back(s[i]);
  }
  cout << ret << endl;
  return 0;
}
