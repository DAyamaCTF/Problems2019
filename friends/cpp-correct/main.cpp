#include <bits/stdc++.h>
using namespace std;

int main() {
  string friends = "friends";
  int t;
  cin >> t;
  for (; t > 0; t--) {
    string s;
    cin >> s;
    bool is_possible = true;
    for (int i = 0; i < friends.size(); i++) {
      is_possible &= s[i] == friends[i] || s[i] == '*';
    }
    cout << (is_possible ? "Yes" : "No") << endl;
  }
}
