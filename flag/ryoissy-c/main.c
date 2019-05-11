#include <stdio.h>
#include <string.h>

char tgt[]="friends";

void solve(){
	char s[10];
	int i;
	scanf("%s",s);
	int flag=1;
	for(i=0;i<7;i++){
		if(tgt[i]!=s[i] && s[i]!='*')flag=0;
	}
	printf("%s\n",flag==1?"Yes":"No");
}

int main(){
	int t;
	int i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		solve();
	}
}