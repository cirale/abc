#include <iostream>
#include <cstring>
using namespace std;

char str[4][8] = {"dream","dreamer","erase","eraser"};

int check(char *, char *);

int main(){
  char s[100000];
  cin >> s;
  char t[] = "";
  if(check(s,t)){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
  
  return 0;
}
int check(char *s,char *t){
  char tmp[111111];
  strcpy(tmp,t);
  for(int i = 0; i < 4; i++){
    strcat(tmp,str[i]);
    if(strcmp(tmp,s) == 0){
      return 1;
    }else{
      if(strlen(tmp) >= strlen(s)){
	return 0;
      }else{
	return check(s,tmp);
      }
    }
  }
}
