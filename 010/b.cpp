#include <iostream>
using namespace std;

int main(){
  int n,sum = 0;
  cin >> n;
  for(int i = 0; i < n; i++){
    int t;
    cin >> t;
    while(t % 2 == 0 || t % 3 == 2){
      t--;
      sum++;
    }
  }

  cout << sum << endl;
}
