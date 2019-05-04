#include <stdio.h>

long long t, a, b;

long long min(long long x, long long y) {
  if(x < y) return x;
  return y;
}

int main(void) {
  scanf("%lld", &t);
  for(int tt = 0; tt < t; ++tt) {
    long long ans = 0;
    scanf("%lld %lld", &a, &b);
    ans = a;
    while(b-- > 0) {
      int cnt = 0;
      ++ans;
      for(int i = 0; i < 4; ++i)
        if(a > 0) {
          ++ans;
          --a;
          ++cnt;
        }
      a = cnt;
    }
    printf("%lld\n", ans);
  }
  return 0;
}