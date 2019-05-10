#include<stdio.h>

int main(void){
    int t;
    scanf("%d", &t);
    for(int tt=0;tt<t;++tt){
        int p, a, b, cnt=0;
        scanf("%d %d %d", &a, &b, &p);
        for(int i=1;i*a<p;++i){
            int j = p - i*a;
            if(j%b==0) ++cnt;
        }
        printf("%d\n",cnt);
    }
}