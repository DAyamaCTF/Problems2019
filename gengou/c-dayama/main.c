#include <stdio.h>

int main(){
  int T;
  scanf("%d", &T);
  while(T--){
    int Y, M, D;
    scanf("%d %d %d", &Y, &M, &D);

    if(M == 12)printf("%d %d %d\n", Y + 1, 1, D);
    else printf("%d %d %d\n", Y, M + 1, D);
  }
}
