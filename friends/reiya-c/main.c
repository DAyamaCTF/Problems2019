#include<stdio.h>

int main(void){
    int t;
    scanf("%d", &t);
    for(int tt=0;tt<t;++tt){
        char s[8], ans[] = "friends";
        scanf("%s", s);
        int flg=1;
        for(int i=0;i<7;++i){
            if(s[i]=='*') continue;
            if(s[i]!=ans[i]) flg=0;
        }
        if(flg) printf("Yes\n");
        else printf("No\n");
    }
}