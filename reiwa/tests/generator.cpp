#include <fstream>
#include <string>
#include "testlib.h"
#include "constraints.h"

using namespace std;

void generate (const string &file_name, int min_t, int  max_t, int min_n, int max_n, int min_a, int max_a) {
  ofstream ofs(file_name);
  int T = rnd.next(min_t, max_t);
  ofs << T << endl;

  for (int i = 0; i < T; i++) {
    int N = rnd.next(min_n, max_n);
    ofs << N << endl;
    for (int j = 0; j < N - 1; j++) {
      ofs << rnd.next(min_a, max_a);
      if (j != N - 2) ofs << " ";
    }
    ofs << endl;
  }

  ofs.close();
}

int main(int argc, char* argv[]) {
  registerGen(argc, argv, 1);

  generate("small.in", 5, 10, MIN_N_SMALL, MAX_N_SMALL, MIN_A_SMALL, MAX_A_SMALL);
  generate("large.in", MAX_T, MAX_T, MIN_N_LARGE, MAX_N_LARGE, MIN_A_LARGE, MAX_A_LARGE);
  for (int i = 0; i < 10; i++) {
    generate("random_test" + to_string(i) + ".in", MAX_T, MAX_T, MIN_N_LARGE, MAX_N_LARGE, MIN_A_LARGE, MAX_A_LARGE);
  }

  return 0;
}