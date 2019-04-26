#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int t;
  cin >> t;
  for (; t > 0; t--) {
    int n;
    cin >> n;
    long long s = 0;
    for (; n > 1; n--) {
      int a;
      cin >> a;
      s += a;
    }
    cout << -s << endl;
  }
}
