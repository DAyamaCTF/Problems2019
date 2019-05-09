#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  for (; t > 0; t--) {
    int a, b;
    cin >> a >> b;
    cout << a + b * (1 + min(a, 4)) << endl;
  }
}
