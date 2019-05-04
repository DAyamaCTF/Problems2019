#include <iostream>
using namespace std;

int main(){
  int T;
  cin >> T;
  while(T--){
    int N;
    cin >> N;

    int right = 0, left = 0;

    for(int i = 0; i < N; i++){
      int a;
      cin >> a;
      if(a == 1){
        right ^= 1;
      }else if(a == 2){
        left ^= 1;
      }else if(a == 3){
        right ^= 1;
        left ^= 1;
      }
    }

    string answer = "   ";
    if(right == 0) answer[0] = 'D';
    else answer[0] = 'U';

    if(left == 0) answer[2] = 'D';
    else answer[2] = 'U';

    cout << answer << endl;
  }
}
