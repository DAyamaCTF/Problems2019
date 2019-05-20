#include <cstdio>
#include <queue>
#include <map>
#include <string>
#include <cstring>
#include <iostream>
using namespace std;

typedef pair<int,int> P;

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

int h,w;
int fie[101][101];
vector<P> rG[101][101];
bool used[101][101];

void add_edge(int sx,int sy){
	for(int i=0;i<4;i++){
		int cx=sx,cy=sy;
		int len=0;
		while(len<=fie[sy][sx] && cx>=0 && cx<w && cy>=0 && cy<h && fie[cy][cx]!=-1){
			rG[cy][cx].push_back(P(sy,sx));
			len++;
			cy+=dy[i];
			cx+=dx[i];
		}
	}
}

int dfs(int x,int y){
	used[y][x]=true;
	int ans=(fie[y][x]>=1?1:0);
	for(int i=0;i<rG[y][x].size();i++){
		int nx=rG[y][x][i].second;
		int ny=rG[y][x][i].first;
		if(!used[ny][nx]){
			ans+=dfs(nx,ny);
		}
	}
	return ans;
}

void solve(){
	int gx,gy;
	scanf("%d%d",&h,&w);
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			rG[i][j].clear();
		}
	}
	memset(fie,0,sizeof(fie));
	for(int i=0;i<h;i++){
		string s;
		cin >> s;
		for(int j=0;j<w;j++){
			if(s[j]>='1' && s[j]<='9'){
				fie[i][j]=(s[j]-'0');
			}else if(s[j]=='#'){
				fie[i][j]=-1;
			}else if(s[j]=='W'){
				gx=j;
				gy=i;
			}
		}
	}
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			if(fie[i][j]>=1)add_edge(j,i);
		}
	}
	memset(used,false,sizeof(used));
	printf("%d\n",dfs(gx,gy));
}

int main(void){
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		solve();
	}
	return 0;
}
