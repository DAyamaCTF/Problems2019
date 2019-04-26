#include <stdio.h>

int t, p;

int solve();

int main(void) {
  scanf("%d", &t);
  for(int tt = 0; tt < t; ++tt) {
    scanf("%d", &p);
    printf("%d\n", solve());
  }
  return 0;
}

int solve() {
  int ans = 0;
  for(int i = 1; i <= p; ++i)
    for(int j = 1; j <= p; ++j)
      for(int k = 1; k <= p; ++k)
        if(i * j * k == p) ++ans;
  return ans;
}