#include <stdio.h>
#include <string.h>

int main() {
  char collect[] = "friends";
  int T;
  scanf("%d", &T);
  while(T--) {
    char input[256];
    scanf("%s", input);

    int ok = 1;
    int i = 0;
    for (i = 0; i < strlen(input); i++) {
      if(input[i] != '*' && input[i] != collect[i]) ok = 0;
    }
    printf("%s\n", ok ? "Yes" : "No");
  }
}
