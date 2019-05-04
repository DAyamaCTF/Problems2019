#include <stdio.h>

int t, a, b;

int min(int x, int y) {
  if(x < y) return x;
  return y;
}

int main(void) {
  scanf("%d", &t);
  for(int tt = 0; tt < t; ++tt) {
    scanf("%d %d", &a, &b);
    printf("%d\n", a + b + min(a, 4) * b);
  }
  return 0;
}