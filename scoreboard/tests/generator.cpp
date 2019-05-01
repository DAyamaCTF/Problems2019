#include <fstream>
#include <string>
#include "testlib.h"
#include "constraints.h"

using namespace std;

void generate(const string &file_name, int num_case, int min_num, int max_num) {
  ofstream ofs(file_name);
  ofs << num_case <<endl;

  for (int i = 0; i < num_case; i++) {
    ofs << rnd.next(min_num, max_num) << " ";
    ofs << rnd.next(min_num, max_num) << endl;
  }
}

int main(int argc, char* argv[]) {
  registerGen(argc, argv, 1);

  generate("small.in", MAX_T, MIN_AB, MAX_AB_SMALL);
  generate("large.in", MAX_T, MIN_AB, MAX_AB_LARGE);
  for (int i = 0; i < 10; i++) {
    generate("random_test" + to_string(i) + ".in", MAX_T, MIN_AB, MAX_AB_LARGE);
  }

  return 0;
}
