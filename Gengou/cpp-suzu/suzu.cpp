#include <iostream>
using namespace std;

int main(void){
	int t;
	cin >> t;
	for(int i = 0; i < t; ++i){
		int y, m, d;
		cin >> y >> m >> d;
		if(m == 12){
			y++;
			m = 1;	
		}else{
			m++;
		}
		cout << y << " " << m << " " << d << endl;
	}
}
