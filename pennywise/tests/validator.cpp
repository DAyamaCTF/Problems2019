#include "bits/stdc++.h"
#include "constraints.h"
#include "testlib.h"
using namespace std;

int main() {
  registerValidation();

  long long t = inf.readInt(
      MIN_T, MAX_T, format("t:[%d,%d]", MIN_T, MAX_T));
  inf.readEoln();
  for(long long tt = 0; tt < t; ++tt) {
    long long a, b;
    a = inf.readInt(
        MIN_AB, MAX_AB_LARGE,
        format("a:[%d,%d]", MIN_AB, MAX_AB_LARGE));
    inf.readSpace();
    b = inf.readInt(
        MIN_AB, MAX_AB_LARGE,
        format("a:[%d,%d]", MIN_AB, MAX_AB_LARGE));
    inf.readEoln();
  }

  inf.readEof();
  return 0;
}