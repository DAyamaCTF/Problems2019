#include <stdio.h>

int main() {
  int a, b, t;
  scanf("%d", &t);
  for(int tt = 0; tt < t; ++tt) {
    scanf("%d %d", &a, &b);
    if(a == 33 && b == 4)
      printf("Marines\n");
    else if(a == 4 && b == 33)
      printf("Tigers\n");
    else if(a > b)
      printf("Win\n");
    else if(a < b)
      printf("Lose\n");
    else
      printf("Draw\n");
  }
  return 0;
}