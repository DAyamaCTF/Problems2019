#include <stdio.h>

int main(void) {
  int T;
  scanf("%d", &T);
  while(T--) {
    int A, B;
    scanf("%d %d", &A, &B);

    int t = (A > 4 ? 4 : A);

    printf("%d\n", A + B + t * B);
  }
  return 0;
}
