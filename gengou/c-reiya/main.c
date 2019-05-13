#include<stdio.h>

int main(void)
{
    /*T=テストケース、Y=年、M=月、D=日*/
    int T, Y, M, D;
    scanf("%d", &T);
    for(int i=0;i<T;++i)
    {
        scanf("%d %d %d", &Y, &M, &D);

        /*12月の場合13月はないので年を1増やして月を1にする*/
        if(M!=12)
        {
            printf("%d %d 1\n",Y, M+1);
        }else
        {
            printf("%d 1 1\n",Y+1);
        }

    }
    return 0;
}