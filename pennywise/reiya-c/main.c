#include<stdio.h>

long long min(long long a, long long b){
    if(a > b) return b;
    else return a;
}

int main(void){
    int t;
    scanf("%d", &t);
    for(int tt=0;tt<t;++tt){
        long long a, b;
        scanf("%lld %lld", &a, &b);
        long long ans = a + b + b * min(a, 4);
        printf("%lld\n", ans);
    }
}