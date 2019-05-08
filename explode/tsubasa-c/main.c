#include <stdbool.h>
#include <stdio.h>

typedef struct {
  int x, y;
} coordinate;

int T, h, w, queuesize = 0;
int d[4] = {0, 1, 0, -1};
char mp[105][105];
bool ch[105][105] = {0};
coordinate queue[100005];

bool checkover(coordinate now) {
  return now.x >= 0 && now.x < h && now.y >= 0 && now.y < w;
}
int solve();

int main(void) {
  scanf("%d", &T);
  for(int tt = 0; tt < T; ++tt) {
    scanf("%d %d", &h, &w);
    for(int i = 0; i < h; ++i) scanf("%s", mp[i]);
    printf("%d\n", solve());
    for(int i = 0; i < h; ++i)
      for(int j = 0; j < w; ++j) {
        mp[i][j] = '\0';
        ch[i][j] = 0;
      }
    for(int i = 0; i < queuesize; ++i)
      queue[i].x = queue[i].y = 0;
  }
  return 0;
}

int solve() {
  queuesize = 1;
  for(int i = 0; i < h; ++i)
    for(int j = 0; j < w; ++j)
      if(mp[i][j] == 'W') {
        queue[0].x = i;
        queue[0].y = j;
        ch[i][j] = 1;
        mp[i][j] = '.';
      }
  for(int qid = 0; qid < queuesize; ++qid) {
    coordinate now = queue[qid], nextp;
    /*for(int i = -1; i <= 1; ++i)
      for(int j = -1; j <= 1; ++j)
        if(i != 0 || j != 0)
          for(int k = 1; k <= 9; ++k) {
            nextp = now;
            nextp.x += i * k;
            nextp.y += j * k;
            if(!checkover(nextp)) continue;
            if(mp[nextp.x][nextp.y] == '#') break;
            if(mp[nextp.x][nextp.y] == '.' ||
               ch[nextp.x][nextp.y])
              continue;
            if(k <= mp[nextp.x][nextp.y] - '0') {
              ch[nextp.x][nextp.y] = 1;
              queue[queuesize++] = nextp;
            }
          }*/
    for(int i = 0; i < 4; ++i)
      for(int k = 1; k <= 9; ++k) {
        nextp = now;
        nextp.x += d[i] * k;
        nextp.y += d[i ^ 1] * k;
        if(!checkover(nextp)) continue;
        if(mp[nextp.x][nextp.y] == '#') break;
        if(mp[nextp.x][nextp.y] == '.' ||
           ch[nextp.x][nextp.y])
          continue;
        if(k <= mp[nextp.x][nextp.y] - '0') {
          ch[nextp.x][nextp.y] = 1;
          queue[queuesize++] = nextp;
        }
      }
  }
  return queuesize - 1;
}