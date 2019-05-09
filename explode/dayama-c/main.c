#include <stdio.h>
#include <string.h>

int H,W;
int di[] = {0,-1,0,+1};
int dj[] = {+1,0,-1,0};
int reachable[51][51];
char map[51][51];

int isvalid(int i, int j){
  return (i >= 0 && i < H && j >= 0 && j < W ? 1 : 0);
}

int dfs(int i, int j){
  if(reachable[i][j] != -1){
    return reachable[i][j];
  }
  reachable[i][j] = 2; // visited

  int size = map[i][j] - '0';
  int result = 0, dir;
  for(dir = 0; dir < 4; dir++){
    int len = 1;
    int ni = i + di[dir], nj = j + dj[dir];
    while(len <= size && isvalid(ni, nj) == 1 && map[ni][nj] != '#'){
      if((isdigit(map[ni][nj]) && reachable[ni][nj] == -1 && dfs(ni, nj) == 1) || map[ni][nj] == 'W'){
        result = 1;
      }

      ni += di[dir]; nj += dj[dir];
      len++;
    }
  }

  return reachable[i][j] = result;
}

int main(){
  int T;
  scanf("%d", &T);
  while(T--){
    scanf("%d %d", &H, &W);

    int i, j;
    for(i = 0; i < H; i++){
      scanf("%s", map[i]);
    }

    int ans = 0;

    for(i = 0; i < H; i++){
      for(j = 0; j < W; j++){
        memset(reachable, -1, sizeof(reachable));

        if(!isdigit(map[i][j])) continue;
        if(dfs(i, j) == 1) ans++;
      }
    }
    
    printf("%d\n", ans);
  }
}
