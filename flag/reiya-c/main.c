#include<stdio.h>

int main(void){
    int t;
    scanf("%d", &t);
    for(int tt=0;tt<t;++tt){
        int n, a, left=0, right=0;
        scanf("%d", &n);
        for(int i=0;i<n;++i){
            scanf("%d", &a);
            switch(a){
                case 0:{
                    break;
                }
                case 1:{
                    right ^= 1;
                    break;
                }
                case 2:{
                    left ^= 1;
                    break;
                }
                case 3:{
                    right ^= 1;
                    left ^= 1;
                    break;
                }
            }
        }
        if(right==1) printf("U ");
        else printf("D ");
        if(left==1) printf("U\n");
        else printf("D\n");
    }
}