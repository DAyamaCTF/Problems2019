#include <stdio.h>

int main() {
  long long a, n, t;
  scanf("%lld", &t);
  for(int tt = 0; tt < t; ++tt) {
    scanf("%lld", &n);
    a = 0;
    for(int i = 0; i < n - 1; ++i) {
      long long x;
      scanf("%lld", &x);
      a += x;
    }
    printf("%lld\n", -a);
  }
  return 0;
}