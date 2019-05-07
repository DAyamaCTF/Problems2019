#include <stdio.h>

int main(){
  int T;
  scanf("%d", &T);
  while(T--){
    int N;
    scanf("%d", &N);

    int right = 0, left = 0, i = 0;
    
    for(i = 0; i < N; i++){
      int a;
      scanf("%d", &a);
      if(a == 1){
        right ^= 1;
      }else if(a == 2){
        left ^= 1;
      }else if(a == 3){
        right ^= 1;
        left ^= 1;
      }
    }

    char answer[] = "   ";
    if(right == 0) answer[0] = 'D';
    else answer[0] = 'U';

    if(left == 0) answer[2] = 'D';
    else answer[2] = 'U';

    printf("%s\n", answer);
  }
}
