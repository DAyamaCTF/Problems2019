#include<bits/stdc++.h>
using namespace std;

int main(void){
    int T;
    cin >> T;
    for(int TT=0;TT<T;++TT){
        int Y, M, D;
        cin >> Y >> M >> D;
        if(M==12){
            cout << Y+1 << " 1 1\n";
        }else{
            cout << Y << " " << M+1 << " 1\n";
        }
    }
}