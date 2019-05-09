#include <stdio.h>

int main(){
  int T;
  scanf("%d", &T);
  while(T--){
    int A, B;
    scanf("%d %d", &A, &B);

    if(A == 33 && B == 4) printf("Marine\n");
    else if(A == 4 && B == 33) printf("Tiger\n");
    else if(A > B) printf("Win\n");
    else if(A < B) printf("Lose\n");
    else printf("Draw\n");
  }
}
