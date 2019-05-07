#include <stdio.h>

typedef long long ll;

int main(void) {
  int T;
  scanf("%d", &T);
  while(T--) {
    ll A, B;
    scanf("%lld %lld", &A, &B);

    ll t = (A > 4 ? 4 : A);

    printf("%lld\n", A + B + t * B);
  }
  return 0;
}
