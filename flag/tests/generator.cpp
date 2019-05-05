#include <fstream>
#include <string>
#include "testlib.h"
#include "constraints.h"

using namespace std;

void generate (const string &file_name, int min_n, int max_n, int min_a, int max_a) {
  ofstream ofs(file_name);
  int T = rnd.next(MIN_T, MAX_T);
  ofs << T << endl;

  for (int i = 0; i < T; i++) {
    int N = rnd.next(min_n, max_n);
    ofs << N << endl;
    for (int j = 0; j < N; j++) {
      ofs << rnd.next(min_a, max_a);
      if (j != N - 1) ofs << " ";
    }
    ofs << endl;
  }

  ofs.close();
}

int main(int argc, char* argv[]) {
  registerGen(argc, argv, 1);

  generate("small.in", MIN_N_SMALL, MAX_N_SMALL, MIN_A, MAX_A);
  generate("large.in", MIN_N_LARGE, MAX_N_LARGE, MIN_A, MAX_A);
  for (int i = 0; i < 10; i++) {
    generate("random_test" + to_string(i) + ".in", MIN_N_LARGE, MAX_N_LARGE, MIN_A, MAX_A);
  }

  return 0;
}
