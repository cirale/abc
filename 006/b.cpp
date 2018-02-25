#include <cstdio>
#include <vector>
using namespace std;

int main(){
  int n;
  vector<int> v(1000001,-1);

  v[0] = v[1] = v[2] = 0;
  v[3] = 1;

  for(vector<int>::iterator i = v.begin()+4; i != v.end(); i++){
    *i = (*(i-1)+*(i-2)+*(i-3)) % 10007;
  }

  scanf("%d",&n);
  printf("%d",v[n]);
}
