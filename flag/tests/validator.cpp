#include "testlib.h"
#include "constraints.h"
#include <iostream>
using namespace std;

void check_case(){
  int n = inf.readInt(MIN_N_LARGE, MAX_N_LARGE, "n");
  inf.readEoln();

  for(int i = 0; i < n; i++){
    int a = inf.readInt(MIN_A, MAX_A, "a_i");
    if(i < n - 1){
      inf.readSpace();
    }
  }
  inf.readEoln();
}

int main(){
  registerValidation();

  int cases = inf.readInt(1, MAX_T, "cases");
  inf.readEoln();

  for(int i=0; i<cases; ++i){
      check_case();
  }

  inf.readEof();
  return 0;
}
