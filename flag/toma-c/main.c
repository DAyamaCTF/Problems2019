#include <stdio.h>

int main(){
  int T;
  scanf("%d", &T);
  for(int test_case = 0; test_case < T; test_case++)
  {
    int N;
    scanf("%d",&N);

    int left_flip_number = 0;
    int right_flip_number = 0;
    for(int instruction_number = 0; instruction_number < N; instruction_number++){
      int instruction;
      scanf("%d", &instruction);
      switch(instruction){
      case 0:
        break;
      case 1:
        right_flip_number++;
        break;
      case 2:
        left_flip_number++;
        break;
      case 3:
        left_flip_number++;
        right_flip_number++;
        break;
      }
    }
    char right_hand = "DU"[right_flip_number%2];
    char left_hand = "DU"[left_flip_number%2];
    printf("%c %c\n", right_hand, left_hand);
  }
}
