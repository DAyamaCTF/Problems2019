#include <stdio.h>

int main(void){
	int t, y, m, d;
	scanf("%d", &t);
	while(t--){
		scanf("%d %d %d", &y, &m, &d);
		printf("%d %d %d\n", m%12?y:y+1, m%12+1, d);
	}
	return 0;
}