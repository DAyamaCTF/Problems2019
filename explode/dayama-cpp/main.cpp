#include <iostream>
#include <string.h>
using namespace std;

int H,W;
int di[] = {0,-1,0,+1};
int dj[] = {+1,0,-1,0};
int reachable[50][50];
char map[50][50];

bool isvalid(int i, int j){
  return i >= 0 && i < H && j >= 0 && j < W;
}

int dfs(int i, int j){
  if(reachable[i][j] != -1){
    return reachable[i][j];
  }
  reachable[i][j] = 2; // visited

  int size = map[i][j] - '0';
  int result = 0;
  for(int dir = 0; dir < 4; dir++){
    int len = 1;
    int ni = i + di[dir], nj = j + dj[dir];
    while(len <= size && isvalid(ni, nj) && map[ni][nj] != '#'){
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
  cin >> T;
  while(T--){
    cin >> H >> W;

    for(int i = 0; i < H; i++){
      scanf("%s", map[i]);
    }

    int ans = 0;

    for(int i = 0; i < H; i++){
      for(int j = 0; j < W; j++){
        memset(reachable, -1, sizeof(reachable));

        if(!isdigit(map[i][j])) continue;
        if(dfs(i, j) == 1) ans++;
      }
    }
    
    cout << ans << endl;
  }
}
