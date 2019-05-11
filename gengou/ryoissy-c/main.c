#include<stdio.h>

void solve(){
    int y,m,d;
    scanf("%d%d%d",&y,&m,&d);
    m++;
    if(m==13){
        y++;
        m=1;
    }
    printf("%d %d %d\n",y,m,d);
}

int main(void){
    int t;
    int i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        solve();
    }
}