#include <iostream>
#include <string>

using namespace std;

int main(){
  string row[4];
  for(int i = 0; i < 4; i++)
    getline(cin,row[i]);
  for(int i = 3; i >= 0; i--){
    for(auto it = row[i].rbegin(); it != row[i].rend(); it++){
      cout << *it;
    }
    cout << "\n";
  }
  return 0;
}
