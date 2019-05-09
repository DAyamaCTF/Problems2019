#include <stdbool.h>
#include <stdio.h>

int main() {
  int t;
  char s[10], ch[] = "friends";
  bool ans = 1;
  scanf("%d", &t);
  for(int tt = 0; tt < t; ++tt) {
    ans = 1;
    scanf("%s", s);
    for(int i = 0; i < 7; ++i)
      if(s[i] != ch[i] && s[i] != '*') ans = 0;
    if(ans)
      printf("Yes\n");
    else
      printf("No\n");
  }
  return 0;
}