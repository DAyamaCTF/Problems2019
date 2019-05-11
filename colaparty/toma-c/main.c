#include <stdio.h>

int main(){
  int T;
  scanf("%d", &T);
  for(int test_case = 0; test_case < T; test_case++)
  {
    int A_liter, B_liter, P_liter;
    scanf("%d %d %d", &A_liter, &B_liter, &P_liter);
    
    int possible_combination = 0;
    for(int number_of_A = 1;; number_of_A++){
      int remain_liter = P_liter - A_liter * number_of_A;
      if(remain_liter <= 0) break;
      if(remain_liter % B_liter == 0)
        possible_combination++;
    }
    printf("%d\n", possible_combination);
  }
}
