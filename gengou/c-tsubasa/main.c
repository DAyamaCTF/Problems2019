#include <stdio.h>

int main() {
  int y, m, d, t;
  scanf("%d", &t);
  for(int tt = 0; tt < t; ++tt) {
    scanf("%d %d %d", &y, &m, &d);
    if(m == 12)
      printf("%d %d %d\n", y + 1, 1, 1);
    else
      printf("%d %d %d\n", y, m + 1, 1);
  }
  return 0;
}