#include <stdio.h>

long long t, a, b;

long long min(long long x, long long y) {
  if(x < y) return x;
  return y;
}

int main(void) {
  scanf("%lld", &t);
  for(int tt = 0; tt < t; ++tt) {
    scanf("%lld %lld", &a, &b);
    printf("%lld\n", a + b + min(a, 4) * b);
  }
  return 0;
}