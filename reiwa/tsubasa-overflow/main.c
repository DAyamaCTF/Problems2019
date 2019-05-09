#include <stdio.h>

int main() {
  short  a, n, t;
  scanf("%d", &t);
  for(int tt = 0; tt < t; ++tt) {
    scanf("%d", &n);
    a = 0;
    for(int i = 0; i < n - 1; ++i) {
      short x;
      scanf("%d", &x);
      a += x;
    }
    printf("%d\n", -a);
  }
  return 0;
}