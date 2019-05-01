#include <fstream>
#include <string>
#include "constraints.h"
#include "testlib.h"

using namespace std;

void generate(const string& file_name, int num_case) {
  ofstream ofs(file_name);
  ofs << num_case << endl;

  string friends = "friends";
  char asterisk = '*';

  for (int i = 0; i < num_case; i++) {
    string s = friends;
    for (char& e : s) {
      if (rnd.next(2)) e = asterisk;
    }
    if (rnd.next(2)) {
      // No
      int b = rnd.next(1, (1 << friends.size()) - 1);
      for (int j = 0; j < friends.size(); j++) {
        if (1 & (b >> j)) {
          s[j] = (friends[j] - 'a' + 1 + rnd.next(26 - 1)) % 26 + 'a';
        }
      }
    }
    ofs << s << endl;
  }
}

int main(int argc, char* argv[]) {
  registerGen(argc, argv, 1);

  generate("small.in", MIN_T);
  generate("large.in", MAX_T);
  for (int i = 0; i < 10; i++) {
    generate("random_test" + to_string(i) + ".in", MAX_T);
  }

  return 0;
}
