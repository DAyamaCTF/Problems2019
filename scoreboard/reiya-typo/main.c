#include<stdio.h>

int main(void){
    int t, a, b;
    scanf("%d", &t);
    for(int i=0;i<t;++i){
        scanf("%d %d", &a, &b);
        if(a==4 && b==33){
            printf("Tigers\n");
        }else if(a==33 && b==4){
            printf("Marine\n");
        }else if(a>b){
            printf("Win\n");
        }else if(a<b){
            printf("Lose\n");
        }else{
            printf("Draw\n");
        }
    }
    return 0;
}