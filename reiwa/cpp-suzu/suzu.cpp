#include <iostream>
using namespace std;

int main(void)
{
	/* cin高速化 */
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n, t, a;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		long long sum = 0;
		cin >> n;
		for(int j = 0; j < n - 1; ++j){
			cin >> a;
			sum += a;
		}
		cout << -sum << endl;
	}
	return 0;
}