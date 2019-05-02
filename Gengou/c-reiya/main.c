#include<stdio.h>

int main(void){
    int Y, M, D;
    scanf("%d %d %d", &Y, &M, &D);
    if(M!=12){
        printf("%d %d 1",Y, M+1);
    }else{
        printf("%d 1 1",Y+1);
    }
    return 0;
}