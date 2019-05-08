#include "bits/stdc++.h"
#include "constraints.h"
#include "testlib.h"
using namespace std;

void check();

int main() {
  registerValidation();

  long long t = inf.readInt(
      MIN_T_SMALL, MAX_T_LARGE,
      format("t:[%d,%d]", MIN_T_SMALL, MAX_T_LARGE));
  inf.readEoln();
  for(long long tt = 0; tt < t; ++tt) check();

  inf.readEof();
  return 0;
}

void check() {
  int h, w, cnt = 0;
  vector<string> s;
  h = inf.readInt(
      MIN_HW_SMALL, MAX_HW_LARGE,
      format("h:[%d,%d]", MIN_HW_SMALL, MAX_HW_LARGE));
  inf.readSpace();
  w = inf.readInt(
      MIN_HW_SMALL, MAX_HW_LARGE,
      format("w:[%d,%d]", MIN_HW_SMALL, MAX_HW_LARGE));
  inf.readEoln();
  s.resize(h);
  for(int i = 0; i < h; ++i) {
    s[i] = inf.readString(format("[.#W1-9]{%d}", w),
                          format("s[%d]", i));
    //inf.readEoln();
  }
  for(int i = 0; i < h; ++i)
    for(int j = 0; j < w; ++j)
      if(s[i][j] == 'W') ++cnt;
  ensuref(cnt == 1, "W's num");
}