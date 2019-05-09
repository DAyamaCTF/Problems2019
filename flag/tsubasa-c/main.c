#include <stdbool.h>
#include <stdio.h>

int main() {
  int a, n, t;
  bool hand[2] = {0};
  char ans[3] = "DU";
  scanf("%d", &t);
  for(int tt = 0; tt < t; ++tt) {
    hand[0] = hand[1] = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; ++i) {
      scanf("%d", &a);
      for(int j = 0; j < 2; ++j)
        if(a >> j & 1) hand[j] = !hand[j];
    }
    printf("%c %c\n", ans[hand[0]], ans[hand[1]]);
  }
  return 0;
}