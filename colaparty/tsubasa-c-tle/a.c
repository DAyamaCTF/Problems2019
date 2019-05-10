#include <stdio.h>

int T, A, B, P;

int solve();

int main(void) {
  //入力されるテストケースの個数を受け取る
  scanf("%d", &T);
  for(int tt = 0; tt < T; ++tt) {
    //変数の入力
    scanf("%d %d %d", &A, &B, &P);
    // solve関数で計算をして答えを出力
    printf("%d\n", solve());
  }
  return 0;
}

int solve() {
  int ans = 0;
  for(int y = 1; B * y <= P; ++y)
    for(int x = 1;A * x + B * y <= P; ++x)
        if(A*x + B * y == P)++ans; 
  return ans;
}