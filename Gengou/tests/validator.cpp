#include "testlib.h"
#include "constraints.h"
#include <iostream>
using namespace std;

void check_case(){
  inf.readInt(MIN_Y, MAX_Y, "Y");
  inf.readSpace();
  inf.readInt(MIN_M, MAX_M, "M");
  inf.readSpace();
  inf.readInt(MIN_D, MAX_D, "D");
  inf.readEoln();
}

signed main(int argc,char* argv[]){
  registerValidation(argc, argv);

  int cases = inf.readInt(LARGE_MIN_T, LARGE_MAX_T, "cases");
  inf.readEoln();

  for(int i = 0; i < cases; ++i){
      check_case();
  }

  inf.readEof();
  return 0;
}
