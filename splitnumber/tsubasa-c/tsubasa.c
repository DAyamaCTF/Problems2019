#include <stdio.h>

int t, p;

int solve();

int main(void) {
  //入力されるテストケースの個数を受け取る
  scanf("%d", &t);
  for(int tt = 0; tt < t; ++tt) {
    //Pの入力を受け取る
    scanf("%d", &p);
    //solve関数で解いて出力
    printf("%d\n", solve());
  }
  return 0;
}

int solve() {
  //答えを格納する変数
  int ans = 0;
  //x * y * z = pということは、z = p / (x * y)である
  //pがx*yで割り切れる(すなわちp%(x*y)==0)とき、そのx,yに対するzがただ1つ存在する
  for(int x = 1; x <= p; ++x)
    for(int y = 1; y <= p; ++y)
      if(p % (x * y) == 0) ++ans;
  return ans;
}