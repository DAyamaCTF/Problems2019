#include <stdio.h>

void solve(){
	int n;
	int i;
	scanf("%d",&n);
	int sum=0;
	for(i=0;i<n-1;i++){
		int a;
		scanf("%d",&a);
		sum+=a;
	}
	printf("%d\n",-sum);
}

int main(void){
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		solve();
	}
	return 0;
}