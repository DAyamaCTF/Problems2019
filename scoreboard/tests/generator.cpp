#include <fstream>
#include <string>
#include "testlib.h"
#include "constraints.h"

using namespace std;

void generate(const string &file_name, int num_case, int min_num, int max_num) {
  ofstream ofs(file_name);
  ofs << num_case << endl;

  if(file_name == "small.in"){ // small
    for (int i = 0; i < num_case; i++) {
      int status = rnd.next(0,2);
      int a = rnd.next(min_num, max_num);
      int b = rnd.next(min_num, max_num);
      if(a > b) swap(a, b);

      if(status == 0){ // Win
        ofs << a << " " << b << endl;
      }else if(status == 1){ // Lose
        ofs << b << " " << a << endl;
      }else if(status == 2){ // Draw
        ofs << a << " " << a << endl;
      }
    }
  }else{ // large
    for (int i = 0; i < num_case - 2; i++) {
      int status = rnd.next(0,2);
      int a = rnd.next(min_num, max_num);
      int b = rnd.next(min_num, max_num);
      if(a > b) swap(a, b);

      if(status == 0){ // Win
        ofs << a << " " << b << endl;
      }else if(status == 1){ // Lose
        ofs << b << " " << a << endl;
      }else if(status == 2){ // Draw
        ofs << a << " " << a << endl;
      }
    }
    ofs << 33 << " " << 4 << endl; // Marines
    ofs << 4 << " " << 33 << endl; // Tigers
  }
}

int main(int argc, char* argv[]) {
  registerGen(argc, argv, 1);

  generate("small.in", 10, MIN_AB, MAX_AB_SMALL);
  generate("large.in", MAX_T, MIN_AB, MAX_AB_LARGE);
  for (int i = 0; i < 10; i++) {
    generate("random_test" + to_string(i) + ".in", MAX_T, MIN_AB, MAX_AB_LARGE);
  }

  return 0;
}
