#include <stdio.h>

void solve(){
	int n;
	int i;
	scanf("%d",&n);
	int state=0;
	for(i=0;i<n;i++){
		int a;
		scanf("%d",&a);
		state^=a;
	}
	printf("%c ",(state&1)==1?'U':'D');
	printf("%c\n",(state&2)==2?'U':'D');
}

int main(void){
	int t;
	int i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		solve();
	}
}