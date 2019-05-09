#include <stdio.h>

int main(){
  int T;
  scanf("%d", &T);
  while(T--){
    int A, B, P;
    scanf("%d %d %d", &A, &B, &P);

    int ans = 0;
    int x;
    for(x = 1; x <= P; x++){
      int r = P - A * x;
      if(r > 0 && r % B == 0) ans++;
    }
    printf("%d\n", ans);
  }
}
