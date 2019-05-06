#include <cstdio>

void solve(){
  int p;
  scanf("%d",&p);
  int cnt=0;
  for(int x=1;x<=p;x++){
    for(int y=1;x*y<=p;y++){
      for(int z=1;x*y*z<=p;z++){
        if(x*y*z==p){
          cnt++;
        }
      }
    }
  }
  printf("%d\n",cnt);
}

int main(void){
  int t;
  // read t
  scanf("%d",&t);
  for(int i=0;i<t;i++){
    solve();
  }
  return 0;
}