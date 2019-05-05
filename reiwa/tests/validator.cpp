#include "testlib.h"
#include "constraints.h"
#include <iostream>
using namespace std;

void check_case(){
  int n = inf.readInt(MIN_N_LARGE, MAX_N_LARGE, "n");
  inf.readEoln();

  for(int i = 0; i < n - 1; i++){
    int a = inf.readInt(MIN_A_LARGE, MAX_A_LARGE, "a_i");
    if(i < n - 2){
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
