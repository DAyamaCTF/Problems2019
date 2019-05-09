#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  for (; t > 0; t--) {
    int n;
    cin >> n;
    int sum = 0;
    for (; n > 1; n--) {
      int a;
      cin >> a;
      sum += a;
    }
    cout << -sum << endl;
  }
}
