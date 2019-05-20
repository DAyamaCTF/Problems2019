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
bool used[101][101];
int gx,gy;

bool check(int sx,int sy){
	queue<P> que;
	memset(used,false,sizeof(used));
	que.push(P(sy,sx));
	while(que.size()){
		P p=que.front();
		que.pop();
		for(int i=0;i<4;i++){
			int cx=p.second,cy=p.first;
			int len=0;
			while(len<=fie[p.first][p.second] && cx>=0 && cx<w && cy>=0 && cy<h && fie[cy][cx]!=-1){
				if(!used[cy][cx] && fie[cy][cx]!=0){
					que.push(P(cy,cx));
				}
				used[cy][cx]=true;
				len++;
				cy+=dy[i];
				cx+=dx[i];
			}
		}
	}
	return used[gy][gx];
}

void solve(){
	scanf("%d%d",&h,&w);
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
	int cnt=0;
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			if(fie[i][j]>=1){
				if(check(j,i))cnt++;
			}
		}
	}
	printf("%d\n",cnt);
}

int main(void){
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		solve();
	}
	return 0;
}
