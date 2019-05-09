#include <fstream>
#include <string>
#include "testlib.h"
#include "constraints.h"

using namespace std;

void generate (const string &file_name, int min_hw, int max_hw, int min_t, int max_t) {
  ofstream ofs(file_name);
  int T = rnd.next(min_t, max_t);
  ofs << T << endl;

  for (int i = 0; i < T; i++) {
    int H = rnd.next(min_hw, max_hw);
    int W = rnd.next(min_hw, max_hw);
    ofs << H << " " << W << endl;

    int facty = rnd.next(0, H-1);
    int factx = rnd.next(0, W-1);

    int density = rnd.next(20, 70);
    for (int j = 0; j < H; j++) {
      for(int k = 0; k < W; k++) {
        if(j == facty && k == factx){
          ofs << 'W';
          continue;
        }

        char state = ' ';
        bool iswall = (rnd.next(0, 10) == 0);
        if(iswall){
          state = '#';
        }else{
          bool isbomb = (rnd.next(0, 99) < density);
          if(isbomb){
            int size = rnd.next(1, 9);
            state = (char)('0' + size);
          }else{
            state = '.';
          }
        }
        ofs << state;
      }
      ofs << endl;
    }
  }

  ofs.close();
}

int main(int argc, char* argv[]) {
  registerGen(argc, argv, 1);

  generate("small.in", MIN_HW_SMALL, MAX_HW_SMALL, MIN_T_SMALL, MAX_T_SMALL);
  generate("large.in", MIN_HW_LARGE, MAX_HW_LARGE, MIN_T_LARGE, MAX_T_LARGE);
  for (int i = 0; i < 10; i++) {
    generate("random_test" + to_string(i) + ".in", MIN_HW_LARGE, MAX_HW_LARGE, MIN_T_LARGE, MAX_T_LARGE);
  }

  return 0;
}
