#include <stdio.h>

void solve(){
	int a,b,p;
	scanf("%d%d%d",&a,&b,&p);
	int ans=0;
	int i;
	for(i=1;a*i<=p;i++){
		if((p-a*i)%b==0 && p-a*i>0)ans++;
	}
	printf("%d\n",ans);
}

int main(void){
	int t;
	int i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		solve();
	}
}