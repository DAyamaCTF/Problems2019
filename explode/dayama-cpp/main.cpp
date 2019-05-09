#include <iostream>
#include <string.h>
using namespace std;

int H,W;
int di[] = {0,-1,0,+1};
int dj[] = {+1,0,-1,0};
bool reachable[101][101];
char map[101][101];

bool isvalid(int i, int j){
  return i >= 0 && i < H && j >= 0 && j < W;
}

void dfs(int i, int j){
  reachable[i][j] = true; // visited

  for(int dir = 0; dir < 4; dir++){
    int len = 1;
    int ni = i + di[dir], nj = j + dj[dir];
    while(len <= 9 && isvalid(ni, nj) && map[ni][nj] != '#'){
      if(isdigit(map[ni][nj])){
        int size = map[ni][nj] - '0';
        if(len <= size && !reachable[ni][nj]){
          dfs(ni, nj);
        }
      }

      ni += di[dir]; nj += dj[dir];
      len++;
    }
  }

  return ;
}

int main(){
  int T;
  cin >> T;
  while(T--){
    cin >> H >> W;

    for(int i = 0; i < H; i++){
      scanf("%s", map[i]);
    }

    memset(reachable, 0, sizeof(reachable));

    for(int i = 0; i < H; i++){
      for(int j = 0; j < W; j++){
        if(map[i][j] == 'W'){
          dfs(i, j);
        }
      }
    }

    int ans = 0;
    for(int i = 0; i < H; i++){
      for(int j = 0; j < W; j++){
        if(isdigit(map[i][j]) && reachable[i][j]){
          ans++;
        }
      }
    }
    
    cout << ans << endl;
  }
}
