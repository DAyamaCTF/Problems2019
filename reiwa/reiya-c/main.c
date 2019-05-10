#include<stdio.h>

int main(void){
    int t;
    scanf("%d", &t);
    for(int tt=0;tt<t;++tt){
        int n;
        long long a, sum=0;
        scanf("%d",&n);
        for(int i=0;i<n-1;++i){
            scanf("%lld", &a);
            sum += a;
        }
        printf("%lld\n", 0-sum);
    }
    return 0;
}