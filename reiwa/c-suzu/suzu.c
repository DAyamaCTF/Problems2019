#include <stdio.h>

int main(void)
{
	int n, t, a;
	scanf("%d", &t);
	for (int i = 0; i < t; ++i) {
		long long sum = 0;
		scanf("%d", &n);
		n--;
		for(int j = 0; j < n; ++j){
			scanf("%d", &a);
			sum += a;
		}
		printf("%ld\n", -sum);
	}
	return 0;
}