#include <cstdio>
#include <algorithm>

void solve(){
	long long a,b;
	scanf("%lld%lld",&a,&b);
	printf("%lld\n",b+a+b*std::min(4LL,a));
}

int main(void){
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		solve();
	}
	return 0;
}
