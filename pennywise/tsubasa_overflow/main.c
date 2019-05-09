#include <stdio.h>

short t, a, b;

short min(short x, short y) {
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