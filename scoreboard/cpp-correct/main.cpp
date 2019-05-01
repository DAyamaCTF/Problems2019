#include <cstdio>
using namespace std;

int main() {
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++){
   	    int a, b;
        scanf("%d%d",&a,&b);
        if(a==33 && b==4){
        	puts("Marines");
        }else if(a==4 && b==33){
        	puts("Tigers");
        }else if(a>b){
        	puts("Win");
        }else if(a==b){
        	puts("Draw");
        }else{
        	puts("Lose");
        }
    }
}
