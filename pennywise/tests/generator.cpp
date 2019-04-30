#include <fstream>
#include <string>
#include "testlib.h"
#include "constraints.h"

using namespace std;

void generate(const string &file_name, int num_case,int mn_ab,int mx_ab) {
  ofstream ofs(file_name);
  ofs << num_case <<endl;

  for (int i=0; i<num_case; i++) {
    ofs << rnd.next(mn_ab, mx_ab) << " ";
    ofs << rnd.next(mn_ab, mx_ab) << endl;
  }
}

int main(int argc, char* argv[]) {
  registerGen(argc, argv, 1);

  generate("small.in", 10,MIN_AB,MAX_AB_SMALL);
  generate("large.in", MAX_T,MIN_AB,MAX_AB_LARGE);
  for (int i=0; i<10; i++) {
    generate("random_test" + to_string(i) + ".in", MAX_T,MIN_AB,MAX_AB_LARGE);
  }

  return 0;
}
